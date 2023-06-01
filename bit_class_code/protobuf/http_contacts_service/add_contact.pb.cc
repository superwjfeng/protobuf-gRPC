// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: add_contact.proto

#include "add_contact.pb.h"

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

namespace add_contact {
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
PROTOBUF_CONSTEXPR AddContactRequest::AddContactRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.phone_)*/{}
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
PROTOBUF_CONSTEXPR AddContactResponse::AddContactResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.error_desc_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.uid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.success_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct AddContactResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AddContactResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~AddContactResponseDefaultTypeInternal() {}
  union {
    AddContactResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AddContactResponseDefaultTypeInternal _AddContactResponse_default_instance_;
}  // namespace add_contact
static ::_pb::Metadata file_level_metadata_add_5fcontact_2eproto[3];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_add_5fcontact_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_add_5fcontact_2eproto = nullptr;

const uint32_t TableStruct_add_5fcontact_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::add_contact::AddContactRequest_Phone, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::add_contact::AddContactRequest_Phone, _impl_.number_),
  PROTOBUF_FIELD_OFFSET(::add_contact::AddContactRequest_Phone, _impl_.type_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::add_contact::AddContactRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::add_contact::AddContactRequest, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::add_contact::AddContactRequest, _impl_.age_),
  PROTOBUF_FIELD_OFFSET(::add_contact::AddContactRequest, _impl_.phone_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::add_contact::AddContactResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::add_contact::AddContactResponse, _impl_.success_),
  PROTOBUF_FIELD_OFFSET(::add_contact::AddContactResponse, _impl_.error_desc_),
  PROTOBUF_FIELD_OFFSET(::add_contact::AddContactResponse, _impl_.uid_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::add_contact::AddContactRequest_Phone)},
  { 8, -1, -1, sizeof(::add_contact::AddContactRequest)},
  { 17, -1, -1, sizeof(::add_contact::AddContactResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::add_contact::_AddContactRequest_Phone_default_instance_._instance,
  &::add_contact::_AddContactRequest_default_instance_._instance,
  &::add_contact::_AddContactResponse_default_instance_._instance,
};

const char descriptor_table_protodef_add_5fcontact_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021add_contact.proto\022\013add_contact\"\330\001\n\021Add"
  "ContactRequest\022\014\n\004name\030\001 \001(\t\022\013\n\003age\030\002 \001("
  "\005\0223\n\005phone\030\003 \003(\0132$.add_contact.AddContac"
  "tRequest.Phone\032s\n\005Phone\022\016\n\006number\030\001 \001(\t\022"
  "<\n\004type\030\002 \001(\0162..add_contact.AddContactRe"
  "quest.Phone.PhoneType\"\034\n\tPhoneType\022\006\n\002MP"
  "\020\000\022\007\n\003TEL\020\001\"F\n\022AddContactResponse\022\017\n\007suc"
  "cess\030\001 \001(\010\022\022\n\nerror_desc\030\002 \001(\t\022\013\n\003uid\030\003 "
  "\001(\tb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_add_5fcontact_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_add_5fcontact_2eproto = {
    false, false, 331, descriptor_table_protodef_add_5fcontact_2eproto,
    "add_contact.proto",
    &descriptor_table_add_5fcontact_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_add_5fcontact_2eproto::offsets,
    file_level_metadata_add_5fcontact_2eproto, file_level_enum_descriptors_add_5fcontact_2eproto,
    file_level_service_descriptors_add_5fcontact_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_add_5fcontact_2eproto_getter() {
  return &descriptor_table_add_5fcontact_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_add_5fcontact_2eproto(&descriptor_table_add_5fcontact_2eproto);
namespace add_contact {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* AddContactRequest_Phone_PhoneType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_add_5fcontact_2eproto);
  return file_level_enum_descriptors_add_5fcontact_2eproto[0];
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
  // @@protoc_insertion_point(arena_constructor:add_contact.AddContactRequest.Phone)
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
  // @@protoc_insertion_point(copy_constructor:add_contact.AddContactRequest.Phone)
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
  // @@protoc_insertion_point(destructor:add_contact.AddContactRequest.Phone)
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
// @@protoc_insertion_point(message_clear_start:add_contact.AddContactRequest.Phone)
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
          CHK_(::_pbi::VerifyUTF8(str, "add_contact.AddContactRequest.Phone.number"));
        } else
          goto handle_unusual;
        continue;
      // .add_contact.AddContactRequest.Phone.PhoneType type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::add_contact::AddContactRequest_Phone_PhoneType>(val));
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
  // @@protoc_insertion_point(serialize_to_array_start:add_contact.AddContactRequest.Phone)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string number = 1;
  if (!this->_internal_number().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_number().data(), static_cast<int>(this->_internal_number().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "add_contact.AddContactRequest.Phone.number");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_number(), target);
  }

  // .add_contact.AddContactRequest.Phone.PhoneType type = 2;
  if (this->_internal_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      2, this->_internal_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:add_contact.AddContactRequest.Phone)
  return target;
}

size_t AddContactRequest_Phone::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:add_contact.AddContactRequest.Phone)
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

  // .add_contact.AddContactRequest.Phone.PhoneType type = 2;
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
  // @@protoc_insertion_point(class_specific_merge_from_start:add_contact.AddContactRequest.Phone)
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
// @@protoc_insertion_point(class_specific_copy_from_start:add_contact.AddContactRequest.Phone)
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
      &descriptor_table_add_5fcontact_2eproto_getter, &descriptor_table_add_5fcontact_2eproto_once,
      file_level_metadata_add_5fcontact_2eproto[0]);
}

// ===================================================================

class AddContactRequest::_Internal {
 public:
};

AddContactRequest::AddContactRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:add_contact.AddContactRequest)
}
AddContactRequest::AddContactRequest(const AddContactRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  AddContactRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.phone_){from._impl_.phone_}
    , decltype(_impl_.name_){}
    , decltype(_impl_.age_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.age_ = from._impl_.age_;
  // @@protoc_insertion_point(copy_constructor:add_contact.AddContactRequest)
}

inline void AddContactRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.phone_){arena}
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
  // @@protoc_insertion_point(destructor:add_contact.AddContactRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void AddContactRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.phone_.~RepeatedPtrField();
  _impl_.name_.Destroy();
}

void AddContactRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void AddContactRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:add_contact.AddContactRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.phone_.Clear();
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
          CHK_(::_pbi::VerifyUTF8(str, "add_contact.AddContactRequest.name"));
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
      // repeated .add_contact.AddContactRequest.Phone phone = 3;
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
  // @@protoc_insertion_point(serialize_to_array_start:add_contact.AddContactRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "add_contact.AddContactRequest.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // int32 age = 2;
  if (this->_internal_age() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_age(), target);
  }

  // repeated .add_contact.AddContactRequest.Phone phone = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_phone_size()); i < n; i++) {
    const auto& repfield = this->_internal_phone(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:add_contact.AddContactRequest)
  return target;
}

size_t AddContactRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:add_contact.AddContactRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .add_contact.AddContactRequest.Phone phone = 3;
  total_size += 1UL * this->_internal_phone_size();
  for (const auto& msg : this->_impl_.phone_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
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
  // @@protoc_insertion_point(class_specific_merge_from_start:add_contact.AddContactRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.phone_.MergeFrom(from._impl_.phone_);
  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (from._internal_age() != 0) {
    _this->_internal_set_age(from._internal_age());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void AddContactRequest::CopyFrom(const AddContactRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:add_contact.AddContactRequest)
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
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  swap(_impl_.age_, other->_impl_.age_);
}

::PROTOBUF_NAMESPACE_ID::Metadata AddContactRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_add_5fcontact_2eproto_getter, &descriptor_table_add_5fcontact_2eproto_once,
      file_level_metadata_add_5fcontact_2eproto[1]);
}

// ===================================================================

class AddContactResponse::_Internal {
 public:
};

AddContactResponse::AddContactResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:add_contact.AddContactResponse)
}
AddContactResponse::AddContactResponse(const AddContactResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  AddContactResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.error_desc_){}
    , decltype(_impl_.uid_){}
    , decltype(_impl_.success_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.error_desc_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.error_desc_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_error_desc().empty()) {
    _this->_impl_.error_desc_.Set(from._internal_error_desc(), 
      _this->GetArenaForAllocation());
  }
  _impl_.uid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.uid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_uid().empty()) {
    _this->_impl_.uid_.Set(from._internal_uid(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.success_ = from._impl_.success_;
  // @@protoc_insertion_point(copy_constructor:add_contact.AddContactResponse)
}

inline void AddContactResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.error_desc_){}
    , decltype(_impl_.uid_){}
    , decltype(_impl_.success_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.error_desc_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.error_desc_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.uid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.uid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

AddContactResponse::~AddContactResponse() {
  // @@protoc_insertion_point(destructor:add_contact.AddContactResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void AddContactResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.error_desc_.Destroy();
  _impl_.uid_.Destroy();
}

void AddContactResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void AddContactResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:add_contact.AddContactResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.error_desc_.ClearToEmpty();
  _impl_.uid_.ClearToEmpty();
  _impl_.success_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AddContactResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool success = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.success_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string error_desc = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_error_desc();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "add_contact.AddContactResponse.error_desc"));
        } else
          goto handle_unusual;
        continue;
      // string uid = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_uid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "add_contact.AddContactResponse.uid"));
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

uint8_t* AddContactResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:add_contact.AddContactResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool success = 1;
  if (this->_internal_success() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(1, this->_internal_success(), target);
  }

  // string error_desc = 2;
  if (!this->_internal_error_desc().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_error_desc().data(), static_cast<int>(this->_internal_error_desc().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "add_contact.AddContactResponse.error_desc");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_error_desc(), target);
  }

  // string uid = 3;
  if (!this->_internal_uid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_uid().data(), static_cast<int>(this->_internal_uid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "add_contact.AddContactResponse.uid");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_uid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:add_contact.AddContactResponse)
  return target;
}

size_t AddContactResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:add_contact.AddContactResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string error_desc = 2;
  if (!this->_internal_error_desc().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_error_desc());
  }

  // string uid = 3;
  if (!this->_internal_uid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_uid());
  }

  // bool success = 1;
  if (this->_internal_success() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData AddContactResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    AddContactResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*AddContactResponse::GetClassData() const { return &_class_data_; }


void AddContactResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<AddContactResponse*>(&to_msg);
  auto& from = static_cast<const AddContactResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:add_contact.AddContactResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_error_desc().empty()) {
    _this->_internal_set_error_desc(from._internal_error_desc());
  }
  if (!from._internal_uid().empty()) {
    _this->_internal_set_uid(from._internal_uid());
  }
  if (from._internal_success() != 0) {
    _this->_internal_set_success(from._internal_success());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void AddContactResponse::CopyFrom(const AddContactResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:add_contact.AddContactResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AddContactResponse::IsInitialized() const {
  return true;
}

void AddContactResponse::InternalSwap(AddContactResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.error_desc_, lhs_arena,
      &other->_impl_.error_desc_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.uid_, lhs_arena,
      &other->_impl_.uid_, rhs_arena
  );
  swap(_impl_.success_, other->_impl_.success_);
}

::PROTOBUF_NAMESPACE_ID::Metadata AddContactResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_add_5fcontact_2eproto_getter, &descriptor_table_add_5fcontact_2eproto_once,
      file_level_metadata_add_5fcontact_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace add_contact
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::add_contact::AddContactRequest_Phone*
Arena::CreateMaybeMessage< ::add_contact::AddContactRequest_Phone >(Arena* arena) {
  return Arena::CreateMessageInternal< ::add_contact::AddContactRequest_Phone >(arena);
}
template<> PROTOBUF_NOINLINE ::add_contact::AddContactRequest*
Arena::CreateMaybeMessage< ::add_contact::AddContactRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::add_contact::AddContactRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::add_contact::AddContactResponse*
Arena::CreateMaybeMessage< ::add_contact::AddContactResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::add_contact::AddContactResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
