// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_lazy_dependencies_custom_option.proto

#include "google/protobuf/unittest_lazy_dependencies_custom_option.pb.h"

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
namespace protobuf_unittest {
namespace lazy_imports {
class LazyMessageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LazyMessage> _instance;
} _LazyMessage_default_instance_;
}  // namespace lazy_imports
}  // namespace protobuf_unittest
static void InitDefaultsscc_info_LazyMessage_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::protobuf_unittest::lazy_imports::_LazyMessage_default_instance_;
    new (ptr) ::protobuf_unittest::lazy_imports::LazyMessage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protobuf_unittest::lazy_imports::LazyMessage::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_LazyMessage_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_LazyMessage_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::protobuf_unittest::lazy_imports::LazyMessage, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::protobuf_unittest::lazy_imports::LazyMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::protobuf_unittest::lazy_imports::LazyMessage, a_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::protobuf_unittest::lazy_imports::LazyMessage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::protobuf_unittest::lazy_imports::_LazyMessage_default_instance_),
};

const char descriptor_table_protodef_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n>google/protobuf/unittest_lazy_dependen"
  "cies_custom_option.proto\022\036protobuf_unitt"
  "est.lazy_imports\0325google/protobuf/unitte"
  "st_lazy_dependencies_enum.proto\032 google/"
  "protobuf/descriptor.proto\"\030\n\013LazyMessage"
  "\022\t\n\001a\030\001 \001(\005:s\n\020lazy_enum_option\022\037.google"
  ".protobuf.MessageOptions\030\357\237\213B \001(\0162(.prot"
  "obuf_unittest.lazy_imports.LazyEnum:\013LAZ"
  "Y_ENUM_1B4B$UnittestLazyImportsCustomOpt"
  "ionProtoH\001\200\001\001\210\001\001\220\001\001\370\001\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto_deps[2] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
  &::descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto_sccs[1] = {
  &scc_info_LazyMessage_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto_once;
static bool descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto = {
  &descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto_initialized, descriptor_table_protodef_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto, "google/protobuf/unittest_lazy_dependencies_custom_option.proto", 382,
  &descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto_once, descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto_sccs, descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto::offsets,
  file_level_metadata_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto, 1, file_level_enum_descriptors_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto, file_level_service_descriptors_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto), true);
namespace protobuf_unittest {
namespace lazy_imports {

// ===================================================================

void LazyMessage::InitAsDefaultInstance() {
}
class LazyMessage::_Internal {
 public:
  using HasBits = decltype(std::declval<LazyMessage>()._has_bits_);
  static void set_has_a(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

LazyMessage::LazyMessage()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protobuf_unittest.lazy_imports.LazyMessage)
}
LazyMessage::LazyMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:protobuf_unittest.lazy_imports.LazyMessage)
}
LazyMessage::LazyMessage(const LazyMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  a_ = from.a_;
  // @@protoc_insertion_point(copy_constructor:protobuf_unittest.lazy_imports.LazyMessage)
}

void LazyMessage::SharedCtor() {
  a_ = 0;
}

LazyMessage::~LazyMessage() {
  // @@protoc_insertion_point(destructor:protobuf_unittest.lazy_imports.LazyMessage)
  SharedDtor();
}

void LazyMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == nullptr);
}

void LazyMessage::ArenaDtor(void* object) {
  LazyMessage* _this = reinterpret_cast< LazyMessage* >(object);
  (void)_this;
}
void LazyMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LazyMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LazyMessage& LazyMessage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LazyMessage_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto.base);
  return *internal_default_instance();
}


void LazyMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:protobuf_unittest.lazy_imports.LazyMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  a_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* LazyMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArenaNoVirtual(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional int32 a = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_a(&has_bits);
          a_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* LazyMessage::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:protobuf_unittest.lazy_imports.LazyMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 a = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_a(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobuf_unittest.lazy_imports.LazyMessage)
  return target;
}

size_t LazyMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protobuf_unittest.lazy_imports.LazyMessage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional int32 a = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_a());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LazyMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protobuf_unittest.lazy_imports.LazyMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const LazyMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LazyMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protobuf_unittest.lazy_imports.LazyMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protobuf_unittest.lazy_imports.LazyMessage)
    MergeFrom(*source);
  }
}

void LazyMessage::MergeFrom(const LazyMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protobuf_unittest.lazy_imports.LazyMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_a()) {
    _internal_set_a(from._internal_a());
  }
}

void LazyMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protobuf_unittest.lazy_imports.LazyMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LazyMessage::CopyFrom(const LazyMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobuf_unittest.lazy_imports.LazyMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LazyMessage::IsInitialized() const {
  return true;
}

void LazyMessage::InternalSwap(LazyMessage* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(a_, other->a_);
}

::PROTOBUF_NAMESPACE_ID::Metadata LazyMessage::GetMetadata() const {
  return GetMetadataStatic();
}

::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::EnumTypeTraits< ::protobuf_unittest::lazy_imports::LazyEnum, ::protobuf_unittest::lazy_imports::LazyEnum_IsValid>, 14, false >
  lazy_enum_option(kLazyEnumOptionFieldNumber, static_cast< ::protobuf_unittest::lazy_imports::LazyEnum >(1));

// @@protoc_insertion_point(namespace_scope)
}  // namespace lazy_imports
}  // namespace protobuf_unittest
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::protobuf_unittest::lazy_imports::LazyMessage* Arena::CreateMaybeMessage< ::protobuf_unittest::lazy_imports::LazyMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protobuf_unittest::lazy_imports::LazyMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
