// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: add_contact_request.proto

#include "add_contact_request.pb.h"

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

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace add_contact_req {
PROTOBUF_CONSTEXPR AddContactRequest_Phone::AddContactRequest_Phone(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.number_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.type_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct AddContactRequest_PhoneDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AddContactRequest_PhoneDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~AddContactRequest_PhoneDefaultTypeInternal() {}
  union {
    AddContactRequest_Phone _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AddContactRequest_PhoneDefaultTypeInternal _AddContactRequest_Phone_default_instance_;
PROTOBUF_CONSTEXPR AddContactRequest_RemarkEntry_DoNotUse::AddContactRequest_RemarkEntry_DoNotUse(
    ::_pbi::ConstantInitialized) {}
struct AddContactRequest_RemarkEntry_DoNotUseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AddContactRequest_RemarkEntry_DoNotUseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~AddContactRequest_RemarkEntry_DoNotUseDefaultTypeInternal() {}
  union {
    AddContactRequest_RemarkEntry_DoNotUse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AddContactRequest_RemarkEntry_DoNotUseDefaultTypeInternal _AddContactRequest_RemarkEntry_DoNotUse_default_instance_;
PROTOBUF_CONSTEXPR AddContactRequest::AddContactRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.phone_)*/{}
  , /*decltype(_impl_.remark_)*/{::_pbi::ConstantInitialized()}
  , /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.age_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct AddContactRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AddContactRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~AddContactRequestDefaultTypeInternal() {}
  union {
    AddContactRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AddContactRequestDefaultTypeInternal _AddContactRequest_default_instance_;
}  // namespace add_contact_req
static ::_pb::Metadata file_level_metadata_add_5fcontact_5frequest_2eproto[3];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_add_5fcontact_5frequest_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_add_5fcontact_5frequest_2eproto = nullptr;

const uint32_t TableStruct_add_5fcontact_5frequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::add_contact_req::AddContactRequest_Phone, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::add_contact_req::AddContactRequest_Phone, _impl_.number_),
  PROTOBUF_FIELD_OFFSET(::add_contact_req::AddContactRequest_Phone, _impl_.type_),
  PROTOBUF_FIELD_OFFSET(::add_contact_req::AddContactRequest_RemarkEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::add_contact_req::AddContactRequest_RemarkEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::add_contact_req::AddContactRequest_RemarkEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::add_contact_req::AddContactRequest_RemarkEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::add_contact_req::AddContactRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::add_contact_req::AddContactRequest, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::add_contact_req::AddContactRequest, _impl_.age_),
  PROTOBUF_FIELD_OFFSET(::add_contact_req::AddContactRequest, _impl_.phone_),
  PROTOBUF_FIELD_OFFSET(::add_contact_req::AddContactRequest, _impl_.remark_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::add_contact_req::AddContactRequest_Phone)},
  { 8, 16, -1, sizeof(::add_contact_req::AddContactRequest_RemarkEntry_DoNotUse)},
  { 18, -1, -1, sizeof(::add_contact_req::AddContactRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::add_contact_req::_AddContactRequest_Phone_default_instance_._instance,
  &::add_contact_req::_AddContactRequest_RemarkEntry_DoNotUse_default_instance_._instance,
  &::add_contact_req::_AddContactRequest_default_instance_._instance,
};

const char descriptor_table_protodef_add_5fcontact_5frequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031add_contact_request.proto\022\017add_contact"
  "_req\"\317\002\n\021AddContactRequest\022\014\n\004name\030\001 \001(\t"
  "\022\013\n\003age\030\002 \001(\005\0227\n\005phone\030\003 \003(\0132(.add_conta"
  "ct_req.AddContactRequest.Phone\022>\n\006remark"
  "\030\004 \003(\0132..add_contact_req.AddContactReque"
  "st.RemarkEntry\032w\n\005Phone\022\016\n\006number\030\001 \001(\t\022"
  "@\n\004type\030\002 \001(\01622.add_contact_req.AddConta"
  "ctRequest.Phone.PhoneType\"\034\n\tPhoneType\022\006"
  "\n\002MP\020\000\022\007\n\003TEL\020\001\032-\n\013RemarkEntry\022\013\n\003key\030\001 "
  "\001(\t\022\r\n\005value\030\002 \001(\t:\0028\001b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_add_5fcontact_5frequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_add_5fcontact_5frequest_2eproto = {
    false, false, 390, descriptor_table_protodef_add_5fcontact_5frequest_2eproto,
    "add_contact_request.proto",
    &descriptor_table_add_5fcontact_5frequest_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_add_5fcontact_5frequest_2eproto::offsets,
    file_level_metadata_add_5fcontact_5frequest_2eproto, file_level_enum_descriptors_add_5fcontact_5frequest_2eproto,
    file_level_service_descriptors_add_5fcontact_5frequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_add_5fcontact_5frequest_2eproto_getter() {
  return &descriptor_table_add_5fcontact_5frequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_add_5fcontact_5frequest_2eproto(&descriptor_table_add_5fcontact_5frequest_2eproto);
namespace add_contact_req {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* AddContactRequest_Phone_PhoneType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_add_5fcontact_5frequest_2eproto);
  return file_level_enum_descriptors_add_5fcontact_5frequest_2eproto[0];
}
bool AddContactRequest_Phone_PhoneType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr AddContactRequest_Phone_PhoneType AddContactRequest_Phone::MP;
constexpr AddContactRequest_Phone_PhoneType AddContactRequest_Phone::TEL;
constexpr AddContactRequest_Phone_PhoneType AddContactRequest_Phone::PhoneType_MIN;
constexpr AddContactRequest_Phone_PhoneType AddContactRequest_Phone::PhoneType_MAX;
constexpr int AddContactRequest_Phone::PhoneType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class AddContactRequest_Phone::_Internal {
 public:
};

AddContactRequest_Phone::AddContactRequest_Phone(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:add_contact_req.AddContactRequest.Phone)
}
AddContactRequest_Phone::AddContactRequest_Phone(const AddContactRequest_Phone& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  AddContactRequest_Phone* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.number_){}
    , decltype(_impl_.type_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.number_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.number_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_number().empty()) {
    _this->_impl_.number_.Set(from._internal_number(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.type_ = from._impl_.type_;
  // @@protoc_insertion_point(copy_constructor:add_contact_req.AddContactRequest.Phone)
}

inline void AddContactRequest_Phone::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.number_){}
    , decltype(_impl_.type_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.number_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.number_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

AddContactRequest_Phone::~AddContactRequest_Phone() {
  // @@protoc_insertion_point(destructor:add_contact_req.AddContactRequest.Phone)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void AddContactRequest_Phone::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.number_.Destroy();
}

void AddContactRequest_Phone::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void AddContactRequest_Phone::Clear() {
// @@protoc_insertion_point(message_clear_start:add_contact_req.AddContactRequest.Phone)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.number_.ClearToEmpty();
  _impl_.type_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AddContactRequest_Phone::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string number = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_number();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "add_contact_req.AddContactRequest.Phone.number"));
        } else
          goto handle_unusual;
        continue;
      // .add_contact_req.AddContactRequest.Phone.PhoneType type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::add_contact_req::AddContactRequest_Phone_PhoneType>(val));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* AddContactRequest_Phone::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:add_contact_req.AddContactRequest.Phone)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string number = 1;
  if (!this->_internal_number().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_number().data(), static_cast<int>(this->_internal_number().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "add_contact_req.AddContactRequest.Phone.number");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_number(), target);
  }

  // .add_contact_req.AddContactRequest.Phone.PhoneType type = 2;
  if (this->_internal_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      2, this->_internal_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:add_contact_req.AddContactRequest.Phone)
  return target;
}

size_t AddContactRequest_Phone::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:add_contact_req.AddContactRequest.Phone)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string number = 1;
  if (!this->_internal_number().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_number());
  }

  // .add_contact_req.AddContactRequest.Phone.PhoneType type = 2;
  if (this->_internal_type() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_type());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData AddContactRequest_Phone::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    AddContactRequest_Phone::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*AddContactRequest_Phone::GetClassData() const { return &_class_data_; }


void AddContactRequest_Phone::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<AddContactRequest_Phone*>(&to_msg);
  auto& from = static_cast<const AddContactRequest_Phone&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:add_contact_req.AddContactRequest.Phone)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_number().empty()) {
    _this->_internal_set_number(from._internal_number());
  }
  if (from._internal_type() != 0) {
    _this->_internal_set_type(from._internal_type());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void AddContactRequest_Phone::CopyFrom(const AddContactRequest_Phone& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:add_contact_req.AddContactRequest.Phone)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AddContactRequest_Phone::IsInitialized() const {
  return true;
}

void AddContactRequest_Phone::InternalSwap(AddContactRequest_Phone* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.number_, lhs_arena,
      &other->_impl_.number_, rhs_arena
  );
  swap(_impl_.type_, other->_impl_.type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata AddContactRequest_Phone::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_add_5fcontact_5frequest_2eproto_getter, &descriptor_table_add_5fcontact_5frequest_2eproto_once,
      file_level_metadata_add_5fcontact_5frequest_2eproto[0]);
}

// ===================================================================

AddContactRequest_RemarkEntry_DoNotUse::AddContactRequest_RemarkEntry_DoNotUse() {}
AddContactRequest_RemarkEntry_DoNotUse::AddContactRequest_RemarkEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void AddContactRequest_RemarkEntry_DoNotUse::MergeFrom(const AddContactRequest_RemarkEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata AddContactRequest_RemarkEntry_DoNotUse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_add_5fcontact_5frequest_2eproto_getter, &descriptor_table_add_5fcontact_5frequest_2eproto_once,
      file_level_metadata_add_5fcontact_5frequest_2eproto[1]);
}

// ===================================================================

class AddContactRequest::_Internal {
 public:
};

AddContactRequest::AddContactRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  if (arena != nullptr && !is_message_owned) {
    arena->OwnCustomDestructor(this, &AddContactRequest::ArenaDtor);
  }
  // @@protoc_insertion_point(arena_constructor:add_contact_req.AddContactRequest)
}
AddContactRequest::AddContactRequest(const AddContactRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  AddContactRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.phone_){from._impl_.phone_}
    , /*decltype(_impl_.remark_)*/{}
    , decltype(_impl_.name_){}
    , decltype(_impl_.age_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.remark_.MergeFrom(from._impl_.remark_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.age_ = from._impl_.age_;
  // @@protoc_insertion_point(copy_constructor:add_contact_req.AddContactRequest)
}

inline void AddContactRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.phone_){arena}
    , /*decltype(_impl_.remark_)*/{::_pbi::ArenaInitialized(), arena}
    , decltype(_impl_.name_){}
    , decltype(_impl_.age_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

AddContactRequest::~AddContactRequest() {
  // @@protoc_insertion_point(destructor:add_contact_req.AddContactRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    ArenaDtor(this);
    return;
  }
  SharedDtor();
}

inline void AddContactRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.phone_.~RepeatedPtrField();
  _impl_.remark_.Destruct();
  _impl_.remark_.~MapField();
  _impl_.name_.Destroy();
}

void AddContactRequest::ArenaDtor(void* object) {
  AddContactRequest* _this = reinterpret_cast< AddContactRequest* >(object);
  _this->_impl_.remark_.Destruct();
}
void AddContactRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void AddContactRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:add_contact_req.AddContactRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.phone_.Clear();
  _impl_.remark_.Clear();
  _impl_.name_.ClearToEmpty();
  _impl_.age_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AddContactRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "add_contact_req.AddContactRequest.name"));
        } else
          goto handle_unusual;
        continue;
      // int32 age = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.age_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .add_contact_req.AddContactRequest.Phone phone = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_phone(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // map<string, string> remark = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&_impl_.remark_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* AddContactRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:add_contact_req.AddContactRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "add_contact_req.AddContactRequest.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // int32 age = 2;
  if (this->_internal_age() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_age(), target);
  }

  // repeated .add_contact_req.AddContactRequest.Phone phone = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_phone_size()); i < n; i++) {
    const auto& repfield = this->_internal_phone(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  // map<string, string> remark = 4;
  if (!this->_internal_remark().empty()) {
    using MapType = ::_pb::Map<std::string, std::string>;
    using WireHelper = AddContactRequest_RemarkEntry_DoNotUse::Funcs;
    const auto& map_field = this->_internal_remark();
    auto check_utf8 = [](const MapType::value_type& entry) {
      (void)entry;
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        entry.first.data(), static_cast<int>(entry.first.length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
        "add_contact_req.AddContactRequest.RemarkEntry.key");
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        entry.second.data(), static_cast<int>(entry.second.length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
        "add_contact_req.AddContactRequest.RemarkEntry.value");
    };

    if (stream->IsSerializationDeterministic() && map_field.size() > 1) {
      for (const auto& entry : ::_pbi::MapSorterPtr<MapType>(map_field)) {
        target = WireHelper::InternalSerialize(4, entry.first, entry.second, target, stream);
        check_utf8(entry);
      }
    } else {
      for (const auto& entry : map_field) {
        target = WireHelper::InternalSerialize(4, entry.first, entry.second, target, stream);
        check_utf8(entry);
      }
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:add_contact_req.AddContactRequest)
  return target;
}

size_t AddContactRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:add_contact_req.AddContactRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .add_contact_req.AddContactRequest.Phone phone = 3;
  total_size += 1UL * this->_internal_phone_size();
  for (const auto& msg : this->_impl_.phone_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // map<string, string> remark = 4;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_remark_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
      it = this->_internal_remark().begin();
      it != this->_internal_remark().end(); ++it) {
    total_size += AddContactRequest_RemarkEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  // string name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // int32 age = 2;
  if (this->_internal_age() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_age());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData AddContactRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    AddContactRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*AddContactRequest::GetClassData() const { return &_class_data_; }


void AddContactRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<AddContactRequest*>(&to_msg);
  auto& from = static_cast<const AddContactRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:add_contact_req.AddContactRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.phone_.MergeFrom(from._impl_.phone_);
  _this->_impl_.remark_.MergeFrom(from._impl_.remark_);
  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (from._internal_age() != 0) {
    _this->_internal_set_age(from._internal_age());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void AddContactRequest::CopyFrom(const AddContactRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:add_contact_req.AddContactRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AddContactRequest::IsInitialized() const {
  return true;
}

void AddContactRequest::InternalSwap(AddContactRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.phone_.InternalSwap(&other->_impl_.phone_);
  _impl_.remark_.InternalSwap(&other->_impl_.remark_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  swap(_impl_.age_, other->_impl_.age_);
}

::PROTOBUF_NAMESPACE_ID::Metadata AddContactRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_add_5fcontact_5frequest_2eproto_getter, &descriptor_table_add_5fcontact_5frequest_2eproto_once,
      file_level_metadata_add_5fcontact_5frequest_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace add_contact_req
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::add_contact_req::AddContactRequest_Phone*
Arena::CreateMaybeMessage< ::add_contact_req::AddContactRequest_Phone >(Arena* arena) {
  return Arena::CreateMessageInternal< ::add_contact_req::AddContactRequest_Phone >(arena);
}
template<> PROTOBUF_NOINLINE ::add_contact_req::AddContactRequest_RemarkEntry_DoNotUse*
Arena::CreateMaybeMessage< ::add_contact_req::AddContactRequest_RemarkEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::add_contact_req::AddContactRequest_RemarkEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::add_contact_req::AddContactRequest*
Arena::CreateMaybeMessage< ::add_contact_req::AddContactRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::add_contact_req::AddContactRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>