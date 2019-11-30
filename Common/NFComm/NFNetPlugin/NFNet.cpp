#include <string.h>
#include <atomic>

#include "NFNet.h"
#if NF_PLATFORM == NF_PLATFORM_WIN
#include <WS2tcpip.h>
#include <winsock2.h>
#pragma comment(lib, "Ws2_32.lib")
#ifndef LIBEVENT_SRC
#pragma comment(lib, "event.lib")
#pragma comment(lib, "event_core.lib")
#endif
#elif NF_PLATFORM == NF_PLATFORM_APPLE
#include <arpa/inet.h>
#endif

#include "event2/event.h"
#include "event2/bufferevent_struct.h"
#include "easylogging/easylogging++.h"

/*
if any one want to upgrade the networking library(libEvent), please change the size of evbuffer as below:
*MODIFY--libevent/buffer.c
#define EVBUFFER_MAX_READ	4096
TO
#define EVBUFFER_MAX_READ	65536
*/

//1048576 = 1024 * 1024
#define NF_BUFFER_MAX_READ 1048576

void NFNet::event_fatal_cb(int err)
{
    LOG(FATAL) << "event_fatal_cb " << err;
}
void NFNet::conn_writecb(struct bufferevent *bev, void *user_data)
{

    //  struct evbuffer *output = bufferevent_get_output(bev);
}

void NFNet::conn_eventcb(struct bufferevent *bev, short events, void *user_data)
{
    NetObject *pObject = (NetObject *)user_data;
    NFNet *pNet = (NFNet *)pObject->GetNet();
    std::cout << "Thread ID = " << std::this_thread::get_id() << " FD = " << pObject->GetRealFD() << " Event ID =" << events << std::endl;

    if (events & BEV_EVENT_CONNECTED)
    {
        //must to set it's state before the "EventCB" functional be called[maybe user will send msg in the callback function]
        pNet->mbWorking = true;
    }
    else
    {
        if (!pNet->mbServer)
        {
            pNet->mbWorking = false;
        }
    }

    if (pNet->mEventCB)
    {
        pNet->mEventCB(pObject->GetRealFD(), NF_NET_EVENT(events), pNet);
    }

    if (events & BEV_EVENT_CONNECTED)
    {
        struct evbuffer *input = bufferevent_get_input(bev);
        struct evbuffer *output = bufferevent_get_output(bev);
        if (pNet->mnBufferSize > 0)
        {
            evbuffer_expand(input, pNet->mnBufferSize);
            evbuffer_expand(output, pNet->mnBufferSize);
        }
        //printf("%d Connection successed\n", pObject->GetFd());/*XXX win32*/
    }
    else
    {
        pNet->CloseNetObject(pObject->GetRealFD());
    }
}

void NFNet::listener_cb(struct evconnlistener *listener, evutil_socket_t fd, struct sockaddr *sa, int socklen, void *user_data)
{

    NFNet *pNet = (NFNet *)user_data;
    bool bClose = pNet->CloseNetObject(fd);
    if (bClose)
    {
        return;
    }

    if (pNet->mmObject.size() >= pNet->mnMaxConnect)
    {

        return;
    }

    struct event_base *mxBase = pNet->mxBase;

    struct bufferevent *bev = bufferevent_socket_new(mxBase, fd, BEV_OPT_CLOSE_ON_FREE);
    if (!bev)
    {
        fprintf(stderr, "Error constructing bufferevent!");
        return;
    }

    struct sockaddr_in *pSin = (sockaddr_in *)sa;

    NetObject *pObject = new NetObject(pNet, fd, *pSin, bev);
    pObject->GetNet()->AddNetObject(fd, pObject);

#if NF_PLATFORM != NF_PLATFORM_WIN
    int optval = 1;
    int result = setsockopt(fd, IPPROTO_TCP, TCP_NODELAY, &optval, sizeof(optval));
    //setsockopt(fd, IPPROTO_TCP, TCP_CORK, &optval, sizeof(optval));
    if (result < 0)
    {
        std::cout << "setsockopt TCP_NODELAY ERROR !!!" << std::endl;
    }
#endif

    bufferevent_setcb(bev, conn_readcb, conn_writecb, conn_eventcb, (void *)pObject);

    bufferevent_enable(bev, EV_READ | EV_WRITE | EV_CLOSED | EV_TIMEOUT | EV_PERSIST);

    event_set_fatal_callback(event_fatal_cb);

    conn_eventcb(bev, BEV_EVENT_CONNECTED, (void *)pObject);

    bufferevent_set_max_single_read(bev, NF_BUFFER_MAX_READ);
    bufferevent_set_max_single_write(bev, NF_BUFFER_MAX_READ);
}

void NFNet::conn_readcb(struct bufferevent *bev, void *user_data)
{
    NetObject *pObject = (NetObject *)user_data;
    if (!pObject)
    {
        return;
    }

    NFNet *pNet = (NFNet *)pObject->GetNet();
    if (!pNet)
    {
        return;
    }

    if (pObject->NeedRemove())
    {
        return;
    }

    struct evbuffer *input = bufferevent_get_input(bev);
    if (!input)
    {
        return;
    }

    while (1)
    {
        size_t len = evbuffer_get_length(input);
        unsigned char *pData = evbuffer_pullup(input, len);
        pObject->AddBuff((const char *)pData, len);
        int success = evbuffer_drain(input, len);
        if (success == -1)
        {
            //log
        }
        if (len == 0)
        {
            break;
        }
    }

    while (1)
    {
        if (!pNet->Dismantle(pObject))
        {
            break;
        }
    }

    // struct evbuffer *output = bufferevent_get_output(bev);
    // if (input)
    // {
    //     size_t length = evbuffer_get_length(input);
    //     if (length > 20971520)
    //         FLOG("input %u", length);
    // }
    // if (output)
    // {
    //     size_t length = evbuffer_get_length(output);
    //     if (length > 20971520)
    //         FLOG("output %u", length);
    // }
}

//////////////////////////////////////////////////////////////////////////

bool NFNet::Execute()
{
    ExecuteClose();

    if (mxBase)
    {
        event_base_loop(mxBase, EVLOOP_ONCE | EVLOOP_NONBLOCK);
    }

    return true;
}

void NFNet::Initialization(const char *strIP, const unsigned short nPort)
{
#if defined(__WINDOWS__)
    evthread_use_windows_threads();
#elif defined(__LINUX__)
    evthread_use_pthreads();
#endif
    mstrIP = strIP;
    mnPort = nPort;

    InitClientNet();
}

int NFNet::Initialization(const unsigned short nPort, const unsigned int nMaxClient)
{
#if defined(__WINDOWS__)
    evthread_use_windows_threads();
#elif defined(__LINUX__)
    evthread_use_pthreads();
#endif
    mnMaxConnect = nMaxClient;
    mnPort = nPort;

    return InitServerNet();
}

int NFNet::Initialization(const char *strIP, const unsigned short nPort, const unsigned int nMaxClient)
{
#if defined(__WINDOWS__)
    evthread_use_windows_threads();
#elif defined(__LINUX__)
    evthread_use_pthreads();
#endif
    mnMaxConnect = nMaxClient;
    mnPort = nPort;
    mstrIP = strIP;

    return InitServerNet();
}

int NFNet::ExpandBufferSize(const unsigned int size)
{
    if (size > 0)
    {
        mnBufferSize = size;
    }
    return mnBufferSize;
}

bool NFNet::KickAll()
{
    return CloseSocketAll();
}

bool NFNet::Final()
{

    CloseSocketAll();

    if (listener)
    {
        evconnlistener_free(listener);
        listener = NULL;
    }

    if (mxBase)
    {
        event_base_free(mxBase);
        mxBase = NULL;
    }

    return true;
}

bool NFNet::SendMsgToAllClient(const char *msg, const size_t nLen)
{
    if (nLen <= 0)
    {
        return false;
    }

    if (!mbWorking)
    {
        return false;
    }

    std::map<NFSOCK, NetObject *>::iterator it = mmObject.begin();
    for (; it != mmObject.end(); ++it)
    {
        NetObject *pNetObject = (NetObject *)it->second;
        if (pNetObject && !pNetObject->NeedRemove())
        {
            bufferevent *bev = (bufferevent *)pNetObject->GetUserData();
            if (NULL != bev)
            {
                bufferevent_write(bev, msg, nLen);

                mnSendMsgTotal++;
            }
        }
    }

    return true;
}

bool NFNet::SendMsg(const char *msg, const size_t nLen, const NFSOCK nSockIndex)
{
    if (nLen <= 0)
    {
        return false;
    }

    if (!mbWorking)
    {
        return false;
    }

    std::map<NFSOCK, NetObject *>::iterator it = mmObject.find(nSockIndex);
    if (it != mmObject.end())
    {
        NetObject *pNetObject = (NetObject *)it->second;
        if (pNetObject)
        {
            bufferevent *bev = (bufferevent *)pNetObject->GetUserData();
            if (NULL != bev)
            {
                bufferevent_write(bev, msg, nLen);

                mnSendMsgTotal++;
                return true;
            }
        }
    }

    return false;
}

bool NFNet::SendMsg(const char *msg, const size_t nLen, const std::list<NFSOCK> &fdList)
{
    std::list<NFSOCK>::const_iterator it = fdList.begin();
    for (; it != fdList.end(); ++it)
    {
        SendMsg(msg, nLen, *it);
    }

    return true;
}


bool NFNet::CloseNetObject(const NFSOCK nSockIndex)
{
    std::map<NFSOCK, NetObject *>::iterator it = mmObject.find(nSockIndex);
    if (it != mmObject.end())
    {
        NetObject *pObject = it->second;

        pObject->SetNeedRemove(true);
        mvRemoveObject.push_back(nSockIndex);

        return true;
    }

    return false;
}

bool NFNet::Dismantle(NetObject *pObject)
{
    bool bNeedDismantle = false;

    int len = pObject->GetBuffLen();
    if (len > NFIMsgHead::NF_Head::NF_HEAD_LENGTH)
    {
        NFNetProtoHead xHead;
        int nMsgBodyLength = DeCode(pObject->GetBuff(), len, xHead);
        if (nMsgBodyLength > 0 && xHead.GetMsgID() > 0)
        {
            if (mRecvCB)
            {
                try
                {
                    mRecvCB(pObject->GetRealFD(), xHead.GetMsgID(), pObject->GetBuff() + NFIMsgHead::NF_Head::NF_HEAD_LENGTH, nMsgBodyLength);
                }
                catch (...)
                {
                    //TODO
                }

                mnReceiveMsgTotal++;
            }

            pObject->RemoveBuff(0, nMsgBodyLength + NFIMsgHead::NF_Head::NF_HEAD_LENGTH);

            bNeedDismantle = true;
        }
        else if (0 == nMsgBodyLength)
        {

            bNeedDismantle = false;
        }
        else
        {
            bNeedDismantle = false;
        }
    }

    return bNeedDismantle;
}

bool NFNet::AddNetObject(const NFSOCK nSockIndex, NetObject *pObject)
{
    //lock
    return mmObject.insert(std::map<NFSOCK, NetObject *>::value_type(nSockIndex, pObject)).second;
}

int NFNet::InitClientNet()
{
    std::string strIP = mstrIP;
    int nPort = mnPort;

    struct sockaddr_in addr;
    struct bufferevent *bev = NULL;

#if NF_PLATFORM == NF_PLATFORM_WIN
    WSADATA wsa_data;
    WSAStartup(0x0201, &wsa_data);
#endif

    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(nPort);

    if (evutil_inet_pton(AF_INET, strIP.c_str(), &addr.sin_addr) <= 0)
    {
        printf("inet_pton");
        return -1;
    }

    mxBase = event_base_new();
    if (mxBase == NULL)
    {
        printf("event_base_new ");
        return -1;
    }

    bev = bufferevent_socket_new(mxBase, -1, BEV_OPT_CLOSE_ON_FREE);
    if (bev == NULL)
    {
        printf("bufferevent_socket_new ");
        return -1;
    }

    int bRet = bufferevent_socket_connect(bev, (struct sockaddr *)&addr, sizeof(addr));
    if (0 != bRet)
    {
        //int nError = GetLastError();
        printf("bufferevent_socket_connect error");
        return -1;
    }

    NFSOCK sockfd = bufferevent_getfd(bev);
    NetObject *pObject = new NetObject(this, sockfd, addr, bev);
    if (!AddNetObject(0, pObject))
    {
        assert(0);
        return -1;
    }

    mbServer = false;

#if NF_PLATFORM != NF_PLATFORM_WIN
    int optval = 1;
    int result = setsockopt(sockfd, IPPROTO_TCP, TCP_NODELAY, &optval, sizeof(optval));
    //setsockopt(fd, IPPROTO_TCP, TCP_CORK, &optval, sizeof(optval));
    if (result < 0)
    {
        std::cout << "setsockopt TCP_NODELAY ERROR !!!" << std::endl;
    }
#endif

    bufferevent_setcb(bev, conn_readcb, conn_writecb, conn_eventcb, (void *)pObject);
    bufferevent_enable(bev, EV_READ | EV_WRITE | EV_CLOSED | EV_TIMEOUT | EV_PERSIST);

    event_set_log_callback(&NFNet::log_cb);

    bufferevent_set_max_single_read(bev, NF_BUFFER_MAX_READ);
    bufferevent_set_max_single_write(bev, NF_BUFFER_MAX_READ);

    int nSizeRead = (int)bufferevent_get_max_to_read(bev);
    int nSizeWrite = (int)bufferevent_get_max_to_write(bev);

    std::cout << "want to connect " << mstrIP << " SizeRead: " << nSizeRead << std::endl;
    std::cout << "SizeWrite: " << nSizeWrite << std::endl;

    return sockfd;
}

int NFNet::InitServerNet()
{
    int nPort = mnPort;

    struct sockaddr_in sin;

#if NF_PLATFORM == NF_PLATFORM_WIN
    WSADATA wsa_data;
    WSAStartup(0x0201, &wsa_data);

#endif
    //////////////////////////////////////////////////////////////////////////

    struct event_config *cfg = event_config_new();

#if NF_PLATFORM == NF_PLATFORM_WIN

    mxBase = event_base_new_with_config(cfg);

#else

    //event_config_avoid_method(cfg, "epoll");
    if (event_config_set_flag(cfg, EVENT_BASE_FLAG_EPOLL_USE_CHANGELIST) < 0)
    {

        return -1;
    }
	nCpuCount = 8�� //TODO
    if (event_config_set_num_cpus_hint(cfg, nCpuCount) < 0)
    {
        return -1;
    }

    mxBase = event_base_new_with_config(cfg); //event_base_new()

#endif
    event_config_free(cfg);

    //////////////////////////////////////////////////////////////////////////

    if (!mxBase)
    {
        fprintf(stderr, "Could not initialize libevent!\n");
        Final();

        return -1;
    }

    memset(&sin, 0, sizeof(sin));
    sin.sin_family = AF_INET;
    sin.sin_port = htons(nPort);

    printf("server started with %d\n", nPort);

    listener = evconnlistener_new_bind(mxBase, listener_cb, (void *)this,
                                       LEV_OPT_REUSEABLE | LEV_OPT_CLOSE_ON_FREE, -1,
                                       (struct sockaddr *)&sin,
                                       sizeof(sin));

    if (!listener)
    {
        fprintf(stderr, "Could not create a listener!\n");
        Final();

        return -1;
    }

    mbServer = true;

    event_set_log_callback(&NFNet::log_cb);

    return mnMaxConnect;
}

bool NFNet::CloseSocketAll()
{
    std::map<NFSOCK, NetObject *>::iterator it = mmObject.begin();
    for (; it != mmObject.end(); ++it)
    {
        NFSOCK nFD = it->first;
        mvRemoveObject.push_back(nFD);
    }

    ExecuteClose();

    mmObject.clear();

    return true;
}

NetObject *NFNet::GetNetObject(const NFSOCK nSockIndex)
{
	auto it = mmObject.begin();
	for (; it != mmObject.end(); it++)
	{
		if (it->second->GetRealFD() == nSockIndex)
		{
			return it->second;
		}
	}

    return NULL;
}

void NFNet::CloseObject(const NFSOCK nSockIndex)
{
    std::map<NFSOCK, NetObject *>::iterator it = mmObject.find(nSockIndex);
    if (it != mmObject.end())
    {
        NetObject *pObject = it->second;

        struct bufferevent *bev = (bufferevent *)pObject->GetUserData();

        bufferevent_free(bev);

        mmObject.erase(it);

        delete pObject;
        pObject = NULL;
    }
}

void NFNet::ExecuteClose()
{
    for (int i = 0; i < mvRemoveObject.size(); ++i)
    {
        NFSOCK nSocketIndex = mvRemoveObject[i];
        CloseObject(nSocketIndex);
    }

    mvRemoveObject.clear();
}

void NFNet::log_cb(int severity, const char *msg)
{
    LOG(FATAL) << "severity:" << severity << " " << msg;
}

bool NFNet::IsServer()
{
    return mbServer;
}

bool NFNet::Log(int severity, const char *msg)
{
    log_cb(severity, msg);
    return true;
}

bool NFNet::SendMsgWithOutHead(const int16_t nMsgID, const char *msg, const size_t nLen, const NFSOCK nSockIndex /*= 0*/)
{
    std::string strOutData;
    int nAllLen = EnCode(nMsgID, msg, nLen, strOutData);
    if (nAllLen == nLen + NFIMsgHead::NF_Head::NF_HEAD_LENGTH)
    {

        return SendMsg(strOutData.c_str(), strOutData.length(), nSockIndex);
    }

    return false;
}

bool NFNet::SendMsgWithOutHead(const int16_t nMsgID, const char *msg, const size_t nLen, const std::list<NFSOCK> &fdList)
{
    std::string strOutData;
    int nAllLen = EnCode(nMsgID, msg, nLen, strOutData);
    if (nAllLen == nLen + NFIMsgHead::NF_Head::NF_HEAD_LENGTH)
    {
        return SendMsg(strOutData.c_str(), strOutData.length(), fdList);
    }

    return false;
}

bool NFNet::SendMsgToAllClientWithOutHead(const int16_t nMsgID, const char *msg, const size_t nLen)
{
    std::string strOutData;
    int nAllLen = EnCode(nMsgID, msg, nLen, strOutData);
    if (nAllLen == nLen + NFIMsgHead::NF_Head::NF_HEAD_LENGTH)
    {
        return SendMsgToAllClient(strOutData.c_str(), (uint32_t)strOutData.length());
    }

    return false;
}

int NFNet::EnCode(const uint16_t unMsgID, const char *strData, const uint32_t unDataLen, std::string &strOutData)
{
    NFNetProtoHead xHead;
    xHead.SetMsgID(unMsgID);
    xHead.SetBodyLength(unDataLen);

    char szHead[NFIMsgHead::NF_Head::NF_HEAD_LENGTH] = {0};
    xHead.EnCode(szHead);

    strOutData.clear();
    strOutData.append(szHead, NFIMsgHead::NF_Head::NF_HEAD_LENGTH);
    strOutData.append(strData, unDataLen);

    return xHead.GetBodyLength() + NFIMsgHead::NF_Head::NF_HEAD_LENGTH;
}

int NFNet::DeCode(const char *strData, const uint32_t unAllLen, NFNetProtoHead &xHead)
{

    if (unAllLen < NFIMsgHead::NF_Head::NF_HEAD_LENGTH)
    {

        return -1;
    }

    if (NFIMsgHead::NF_Head::NF_HEAD_LENGTH != xHead.DeCode(strData))
    {

        return -2;
    }

    if (xHead.GetBodyLength() > (unAllLen - NFIMsgHead::NF_Head::NF_HEAD_LENGTH))
    {

        return -3;
    }

    return xHead.GetBodyLength();
}