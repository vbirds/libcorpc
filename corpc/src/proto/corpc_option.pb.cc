// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: corpc_option.proto

#include "corpc_option.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG
namespace corpc {
constexpr Void::Void(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct VoidDefaultTypeInternal {
  constexpr VoidDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~VoidDefaultTypeInternal() {}
  union {
    Void _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT VoidDefaultTypeInternal _Void_default_instance_;
}  // namespace corpc
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_corpc_5foption_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_corpc_5foption_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_corpc_5foption_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_corpc_5foption_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::corpc::Void, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::corpc::Void)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::corpc::_Void_default_instance_),
};

const char descriptor_table_protodef_corpc_5foption_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022corpc_option.proto\022\005corpc\032 google/prot"
  "obuf/descriptor.proto\"\006\n\004Void:>\n\021global_"
  "service_id\022\037.google.protobuf.ServiceOpti"
  "ons\030\220N \001(\r\210\001\001::\n\016need_coroutine\022\036.google"
  ".protobuf.MethodOptions\030\222N \001(\010\210\001\001:=\n\021not"
  "_care_response\022\036.google.protobuf.MethodO"
  "ptions\030\223N \001(\010\210\001\001:3\n\007timeout\022\036.google.pro"
  "tobuf.MethodOptions\030\224N \001(\r\210\001\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_corpc_5foption_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_corpc_5foption_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_corpc_5foption_2eproto = {
  false, false, 317, descriptor_table_protodef_corpc_5foption_2eproto, "corpc_option.proto", 
  &descriptor_table_corpc_5foption_2eproto_once, descriptor_table_corpc_5foption_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_corpc_5foption_2eproto::offsets,
  file_level_metadata_corpc_5foption_2eproto, file_level_enum_descriptors_corpc_5foption_2eproto, file_level_service_descriptors_corpc_5foption_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_corpc_5foption_2eproto_getter() {
  return &descriptor_table_corpc_5foption_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_corpc_5foption_2eproto(&descriptor_table_corpc_5foption_2eproto);
namespace corpc {

// ===================================================================

class Void::_Internal {
 public:
};

Void::Void(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:corpc.Void)
}
Void::Void(const Void& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:corpc.Void)
}

inline void Void::SharedCtor() {
}

Void::~Void() {
  // @@protoc_insertion_point(destructor:corpc.Void)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Void::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Void::ArenaDtor(void* object) {
  Void* _this = reinterpret_cast< Void* >(object);
  (void)_this;
}
void Void::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Void::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Void::Clear() {
// @@protoc_insertion_point(message_clear_start:corpc.Void)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Void::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Void::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:corpc.Void)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:corpc.Void)
  return target;
}

size_t Void::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:corpc.Void)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Void::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Void::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Void::GetClassData() const { return &_class_data_; }

void Void::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<Void *>(to)->MergeFrom(
      static_cast<const Void &>(from));
}


void Void::MergeFrom(const Void& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:corpc.Void)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Void::CopyFrom(const Void& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:corpc.Void)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Void::IsInitialized() const {
  return true;
}

void Void::InternalSwap(Void* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Void::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_corpc_5foption_2eproto_getter, &descriptor_table_corpc_5foption_2eproto_once,
      file_level_metadata_corpc_5foption_2eproto[0]);
}
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< ::PROTOBUF_NAMESPACE_ID::uint32 >, 13, false >
  global_service_id(kGlobalServiceIdFieldNumber, 0u);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  need_coroutine(kNeedCoroutineFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  not_care_response(kNotCareResponseFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< ::PROTOBUF_NAMESPACE_ID::uint32 >, 13, false >
  timeout(kTimeoutFieldNumber, 0u);

// @@protoc_insertion_point(namespace_scope)
}  // namespace corpc
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::corpc::Void* Arena::CreateMaybeMessage< ::corpc::Void >(Arena* arena) {
  return Arena::CreateMessageInternal< ::corpc::Void >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
