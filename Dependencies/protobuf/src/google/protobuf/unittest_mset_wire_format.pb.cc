// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_mset_wire_format.proto

#include "google/protobuf/unittest_mset_wire_format.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_TestMessageSet_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto;
namespace proto2_wireformat_unittest {
class TestMessageSetDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TestMessageSet> _instance;
} _TestMessageSet_default_instance_;
class TestMessageSetWireFormatContainerDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TestMessageSetWireFormatContainer> _instance;
} _TestMessageSetWireFormatContainer_default_instance_;
}  // namespace proto2_wireformat_unittest
static void InitDefaultsscc_info_TestMessageSet_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::proto2_wireformat_unittest::_TestMessageSet_default_instance_;
    new (ptr) ::proto2_wireformat_unittest::TestMessageSet();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::proto2_wireformat_unittest::TestMessageSet::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_TestMessageSet_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_TestMessageSet_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto}, {}};

static void InitDefaultsscc_info_TestMessageSetWireFormatContainer_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::proto2_wireformat_unittest::_TestMessageSetWireFormatContainer_default_instance_;
    new (ptr) ::proto2_wireformat_unittest::TestMessageSetWireFormatContainer();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::proto2_wireformat_unittest::TestMessageSetWireFormatContainer::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_TestMessageSetWireFormatContainer_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_TestMessageSetWireFormatContainer_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto}, {
      &scc_info_TestMessageSet_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::proto2_wireformat_unittest::TestMessageSet, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::proto2_wireformat_unittest::TestMessageSet, _internal_metadata_),
  PROTOBUF_FIELD_OFFSET(::proto2_wireformat_unittest::TestMessageSet, _extensions_),
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::proto2_wireformat_unittest::TestMessageSetWireFormatContainer, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::proto2_wireformat_unittest::TestMessageSetWireFormatContainer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::proto2_wireformat_unittest::TestMessageSetWireFormatContainer, message_set_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 5, sizeof(::proto2_wireformat_unittest::TestMessageSet)},
  { 5, 11, sizeof(::proto2_wireformat_unittest::TestMessageSetWireFormatContainer)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::proto2_wireformat_unittest::_TestMessageSet_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::proto2_wireformat_unittest::_TestMessageSetWireFormatContainer_default_instance_),
};

const char descriptor_table_protodef_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n/google/protobuf/unittest_mset_wire_for"
  "mat.proto\022\032proto2_wireformat_unittest\"\036\n"
  "\016TestMessageSet*\010\010\004\020\377\377\377\377\007:\002\010\001\"d\n!TestMes"
  "sageSetWireFormatContainer\022\?\n\013message_se"
  "t\030\001 \001(\0132*.proto2_wireformat_unittest.Tes"
  "tMessageSetB)H\001\370\001\001\252\002!Google.ProtocolBuff"
  "ers.TestProtos"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto_sccs[2] = {
  &scc_info_TestMessageSet_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto.base,
  &scc_info_TestMessageSetWireFormatContainer_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto_once;
static bool descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto = {
  &descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto_initialized, descriptor_table_protodef_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto, "google/protobuf/unittest_mset_wire_format.proto", 254,
  &descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto_once, descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto_sccs, descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto::offsets,
  file_level_metadata_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto, 2, file_level_enum_descriptors_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto, file_level_service_descriptors_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto), true);
namespace proto2_wireformat_unittest {

// ===================================================================

void TestMessageSet::InitAsDefaultInstance() {
}
class TestMessageSet::_Internal {
 public:
  using HasBits = decltype(std::declval<TestMessageSet>()._has_bits_);
};

TestMessageSet::TestMessageSet()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto2_wireformat_unittest.TestMessageSet)
}
TestMessageSet::TestMessageSet(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
  _extensions_(arena),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:proto2_wireformat_unittest.TestMessageSet)
}
TestMessageSet::TestMessageSet(const TestMessageSet& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  _extensions_.MergeFrom(from._extensions_);
  // @@protoc_insertion_point(copy_constructor:proto2_wireformat_unittest.TestMessageSet)
}

void TestMessageSet::SharedCtor() {
}

TestMessageSet::~TestMessageSet() {
  // @@protoc_insertion_point(destructor:proto2_wireformat_unittest.TestMessageSet)
  SharedDtor();
}

void TestMessageSet::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == nullptr);
}

void TestMessageSet::ArenaDtor(void* object) {
  TestMessageSet* _this = reinterpret_cast< TestMessageSet* >(object);
  (void)_this;
}
void TestMessageSet::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TestMessageSet::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TestMessageSet& TestMessageSet::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_TestMessageSet_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto.base);
  return *internal_default_instance();
}


void TestMessageSet::Clear() {
// @@protoc_insertion_point(message_clear_start:proto2_wireformat_unittest.TestMessageSet)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _extensions_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* TestMessageSet::_InternalParse(const char* ptr,
                  ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
  return _extensions_.ParseMessageSet(ptr, 
      internal_default_instance(), &_internal_metadata_, ctx);
}

::PROTOBUF_NAMESPACE_ID::uint8* TestMessageSet::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  target = _extensions_.InternalSerializeMessageSetWithCachedSizesToArray(target, stream);
  target = ::PROTOBUF_NAMESPACE_ID::internal::InternalSerializeUnknownMessageSetItemsToArray(
               _internal_metadata_.unknown_fields(), target, stream);
  return target;
}

size_t TestMessageSet::ByteSizeLong() const {
// @@protoc_insertion_point(message_set_byte_size_start:proto2_wireformat_unittest.TestMessageSet)
  size_t total_size = _extensions_.MessageSetByteSize();
  if (_internal_metadata_.have_unknown_fields()) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::
        ComputeUnknownMessageSetItemsSize(_internal_metadata_.unknown_fields());
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TestMessageSet::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto2_wireformat_unittest.TestMessageSet)
  GOOGLE_DCHECK_NE(&from, this);
  const TestMessageSet* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TestMessageSet>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto2_wireformat_unittest.TestMessageSet)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto2_wireformat_unittest.TestMessageSet)
    MergeFrom(*source);
  }
}

void TestMessageSet::MergeFrom(const TestMessageSet& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto2_wireformat_unittest.TestMessageSet)
  GOOGLE_DCHECK_NE(&from, this);
  _extensions_.MergeFrom(from._extensions_);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void TestMessageSet::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto2_wireformat_unittest.TestMessageSet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestMessageSet::CopyFrom(const TestMessageSet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto2_wireformat_unittest.TestMessageSet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestMessageSet::IsInitialized() const {
  if (!_extensions_.IsInitialized()) {
    return false;
  }

  return true;
}

void TestMessageSet::InternalSwap(TestMessageSet* other) {
  using std::swap;
  _extensions_.Swap(&other->_extensions_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata TestMessageSet::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void TestMessageSetWireFormatContainer::InitAsDefaultInstance() {
  ::proto2_wireformat_unittest::_TestMessageSetWireFormatContainer_default_instance_._instance.get_mutable()->message_set_ = const_cast< ::proto2_wireformat_unittest::TestMessageSet*>(
      ::proto2_wireformat_unittest::TestMessageSet::internal_default_instance());
}
class TestMessageSetWireFormatContainer::_Internal {
 public:
  using HasBits = decltype(std::declval<TestMessageSetWireFormatContainer>()._has_bits_);
  static const ::proto2_wireformat_unittest::TestMessageSet& message_set(const TestMessageSetWireFormatContainer* msg);
  static void set_has_message_set(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::proto2_wireformat_unittest::TestMessageSet&
TestMessageSetWireFormatContainer::_Internal::message_set(const TestMessageSetWireFormatContainer* msg) {
  return *msg->message_set_;
}
void TestMessageSetWireFormatContainer::unsafe_arena_set_allocated_message_set(
    ::proto2_wireformat_unittest::TestMessageSet* message_set) {
  if (GetArenaNoVirtual() == nullptr) {
    delete message_set_;
  }
  message_set_ = message_set;
  if (message_set) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:proto2_wireformat_unittest.TestMessageSetWireFormatContainer.message_set)
}
TestMessageSetWireFormatContainer::TestMessageSetWireFormatContainer()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
}
TestMessageSetWireFormatContainer::TestMessageSetWireFormatContainer(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
}
TestMessageSetWireFormatContainer::TestMessageSetWireFormatContainer(const TestMessageSetWireFormatContainer& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_message_set()) {
    message_set_ = new ::proto2_wireformat_unittest::TestMessageSet(*from.message_set_);
  } else {
    message_set_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
}

void TestMessageSetWireFormatContainer::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_TestMessageSetWireFormatContainer_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto.base);
  message_set_ = nullptr;
}

TestMessageSetWireFormatContainer::~TestMessageSetWireFormatContainer() {
  // @@protoc_insertion_point(destructor:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  SharedDtor();
}

void TestMessageSetWireFormatContainer::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == nullptr);
  if (this != internal_default_instance()) delete message_set_;
}

void TestMessageSetWireFormatContainer::ArenaDtor(void* object) {
  TestMessageSetWireFormatContainer* _this = reinterpret_cast< TestMessageSetWireFormatContainer* >(object);
  (void)_this;
}
void TestMessageSetWireFormatContainer::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TestMessageSetWireFormatContainer::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TestMessageSetWireFormatContainer& TestMessageSetWireFormatContainer::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_TestMessageSetWireFormatContainer_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto.base);
  return *internal_default_instance();
}


void TestMessageSetWireFormatContainer::Clear() {
// @@protoc_insertion_point(message_clear_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(message_set_ != nullptr);
    message_set_->Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* TestMessageSetWireFormatContainer::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArenaNoVirtual(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .proto2_wireformat_unittest.TestMessageSet message_set = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_message_set(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* TestMessageSetWireFormatContainer::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .proto2_wireformat_unittest.TestMessageSet message_set = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, _Internal::message_set(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  return target;
}

size_t TestMessageSetWireFormatContainer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional .proto2_wireformat_unittest.TestMessageSet message_set = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *message_set_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TestMessageSetWireFormatContainer::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  GOOGLE_DCHECK_NE(&from, this);
  const TestMessageSetWireFormatContainer* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TestMessageSetWireFormatContainer>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
    MergeFrom(*source);
  }
}

void TestMessageSetWireFormatContainer::MergeFrom(const TestMessageSetWireFormatContainer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_message_set()) {
    _internal_mutable_message_set()->::proto2_wireformat_unittest::TestMessageSet::MergeFrom(from._internal_message_set());
  }
}

void TestMessageSetWireFormatContainer::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestMessageSetWireFormatContainer::CopyFrom(const TestMessageSetWireFormatContainer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestMessageSetWireFormatContainer::IsInitialized() const {
  if (has_message_set()) {
    if (!this->message_set_->IsInitialized()) return false;
  }
  return true;
}

void TestMessageSetWireFormatContainer::InternalSwap(TestMessageSetWireFormatContainer* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(message_set_, other->message_set_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TestMessageSetWireFormatContainer::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto2_wireformat_unittest
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::proto2_wireformat_unittest::TestMessageSet* Arena::CreateMaybeMessage< ::proto2_wireformat_unittest::TestMessageSet >(Arena* arena) {
  return Arena::CreateMessageInternal< ::proto2_wireformat_unittest::TestMessageSet >(arena);
}
template<> PROTOBUF_NOINLINE ::proto2_wireformat_unittest::TestMessageSetWireFormatContainer* Arena::CreateMaybeMessage< ::proto2_wireformat_unittest::TestMessageSetWireFormatContainer >(Arena* arena) {
  return Arena::CreateMessageInternal< ::proto2_wireformat_unittest::TestMessageSetWireFormatContainer >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
