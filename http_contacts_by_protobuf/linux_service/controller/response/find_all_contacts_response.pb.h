// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: find_all_contacts_response.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_find_5fall_5fcontacts_5fresponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_find_5fall_5fcontacts_5fresponse_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021011 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "base_response.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_find_5fall_5fcontacts_5fresponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_find_5fall_5fcontacts_5fresponse_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_find_5fall_5fcontacts_5fresponse_2eproto;
namespace find_all_contacts_resp {
class FindAllContactsResponse;
struct FindAllContactsResponseDefaultTypeInternal;
extern FindAllContactsResponseDefaultTypeInternal _FindAllContactsResponse_default_instance_;
class PeopleInfo;
struct PeopleInfoDefaultTypeInternal;
extern PeopleInfoDefaultTypeInternal _PeopleInfo_default_instance_;
}  // namespace find_all_contacts_resp
PROTOBUF_NAMESPACE_OPEN
template<> ::find_all_contacts_resp::FindAllContactsResponse* Arena::CreateMaybeMessage<::find_all_contacts_resp::FindAllContactsResponse>(Arena*);
template<> ::find_all_contacts_resp::PeopleInfo* Arena::CreateMaybeMessage<::find_all_contacts_resp::PeopleInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace find_all_contacts_resp {

// ===================================================================

class PeopleInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:find_all_contacts_resp.PeopleInfo) */ {
 public:
  inline PeopleInfo() : PeopleInfo(nullptr) {}
  ~PeopleInfo() override;
  explicit PROTOBUF_CONSTEXPR PeopleInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PeopleInfo(const PeopleInfo& from);
  PeopleInfo(PeopleInfo&& from) noexcept
    : PeopleInfo() {
    *this = ::std::move(from);
  }

  inline PeopleInfo& operator=(const PeopleInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline PeopleInfo& operator=(PeopleInfo&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const PeopleInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const PeopleInfo* internal_default_instance() {
    return reinterpret_cast<const PeopleInfo*>(
               &_PeopleInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PeopleInfo& a, PeopleInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(PeopleInfo* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PeopleInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PeopleInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PeopleInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PeopleInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PeopleInfo& from) {
    PeopleInfo::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PeopleInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "find_all_contacts_resp.PeopleInfo";
  }
  protected:
  explicit PeopleInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUidFieldNumber = 1,
    kNameFieldNumber = 2,
  };
  // string uid = 1;
  void clear_uid();
  const std::string& uid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_uid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_uid();
  PROTOBUF_NODISCARD std::string* release_uid();
  void set_allocated_uid(std::string* uid);
  private:
  const std::string& _internal_uid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_uid(const std::string& value);
  std::string* _internal_mutable_uid();
  public:

  // string name = 2;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // @@protoc_insertion_point(class_scope:find_all_contacts_resp.PeopleInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr uid_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_find_5fall_5fcontacts_5fresponse_2eproto;
};
// -------------------------------------------------------------------

class FindAllContactsResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:find_all_contacts_resp.FindAllContactsResponse) */ {
 public:
  inline FindAllContactsResponse() : FindAllContactsResponse(nullptr) {}
  ~FindAllContactsResponse() override;
  explicit PROTOBUF_CONSTEXPR FindAllContactsResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FindAllContactsResponse(const FindAllContactsResponse& from);
  FindAllContactsResponse(FindAllContactsResponse&& from) noexcept
    : FindAllContactsResponse() {
    *this = ::std::move(from);
  }

  inline FindAllContactsResponse& operator=(const FindAllContactsResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline FindAllContactsResponse& operator=(FindAllContactsResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const FindAllContactsResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const FindAllContactsResponse* internal_default_instance() {
    return reinterpret_cast<const FindAllContactsResponse*>(
               &_FindAllContactsResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(FindAllContactsResponse& a, FindAllContactsResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(FindAllContactsResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FindAllContactsResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  FindAllContactsResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<FindAllContactsResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const FindAllContactsResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const FindAllContactsResponse& from) {
    FindAllContactsResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FindAllContactsResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "find_all_contacts_resp.FindAllContactsResponse";
  }
  protected:
  explicit FindAllContactsResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kContactsFieldNumber = 2,
    kBaseRespFieldNumber = 1,
  };
  // repeated .find_all_contacts_resp.PeopleInfo contacts = 2;
  int contacts_size() const;
  private:
  int _internal_contacts_size() const;
  public:
  void clear_contacts();
  ::find_all_contacts_resp::PeopleInfo* mutable_contacts(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::find_all_contacts_resp::PeopleInfo >*
      mutable_contacts();
  private:
  const ::find_all_contacts_resp::PeopleInfo& _internal_contacts(int index) const;
  ::find_all_contacts_resp::PeopleInfo* _internal_add_contacts();
  public:
  const ::find_all_contacts_resp::PeopleInfo& contacts(int index) const;
  ::find_all_contacts_resp::PeopleInfo* add_contacts();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::find_all_contacts_resp::PeopleInfo >&
      contacts() const;

  // .base_response.BaseResponse base_resp = 1;
  bool has_base_resp() const;
  private:
  bool _internal_has_base_resp() const;
  public:
  void clear_base_resp();
  const ::base_response::BaseResponse& base_resp() const;
  PROTOBUF_NODISCARD ::base_response::BaseResponse* release_base_resp();
  ::base_response::BaseResponse* mutable_base_resp();
  void set_allocated_base_resp(::base_response::BaseResponse* base_resp);
  private:
  const ::base_response::BaseResponse& _internal_base_resp() const;
  ::base_response::BaseResponse* _internal_mutable_base_resp();
  public:
  void unsafe_arena_set_allocated_base_resp(
      ::base_response::BaseResponse* base_resp);
  ::base_response::BaseResponse* unsafe_arena_release_base_resp();

  // @@protoc_insertion_point(class_scope:find_all_contacts_resp.FindAllContactsResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::find_all_contacts_resp::PeopleInfo > contacts_;
    ::base_response::BaseResponse* base_resp_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_find_5fall_5fcontacts_5fresponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PeopleInfo

// string uid = 1;
inline void PeopleInfo::clear_uid() {
  _impl_.uid_.ClearToEmpty();
}
inline const std::string& PeopleInfo::uid() const {
  // @@protoc_insertion_point(field_get:find_all_contacts_resp.PeopleInfo.uid)
  return _internal_uid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PeopleInfo::set_uid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.uid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:find_all_contacts_resp.PeopleInfo.uid)
}
inline std::string* PeopleInfo::mutable_uid() {
  std::string* _s = _internal_mutable_uid();
  // @@protoc_insertion_point(field_mutable:find_all_contacts_resp.PeopleInfo.uid)
  return _s;
}
inline const std::string& PeopleInfo::_internal_uid() const {
  return _impl_.uid_.Get();
}
inline void PeopleInfo::_internal_set_uid(const std::string& value) {
  
  _impl_.uid_.Set(value, GetArenaForAllocation());
}
inline std::string* PeopleInfo::_internal_mutable_uid() {
  
  return _impl_.uid_.Mutable(GetArenaForAllocation());
}
inline std::string* PeopleInfo::release_uid() {
  // @@protoc_insertion_point(field_release:find_all_contacts_resp.PeopleInfo.uid)
  return _impl_.uid_.Release();
}
inline void PeopleInfo::set_allocated_uid(std::string* uid) {
  if (uid != nullptr) {
    
  } else {
    
  }
  _impl_.uid_.SetAllocated(uid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.uid_.IsDefault()) {
    _impl_.uid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:find_all_contacts_resp.PeopleInfo.uid)
}

// string name = 2;
inline void PeopleInfo::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& PeopleInfo::name() const {
  // @@protoc_insertion_point(field_get:find_all_contacts_resp.PeopleInfo.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PeopleInfo::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:find_all_contacts_resp.PeopleInfo.name)
}
inline std::string* PeopleInfo::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:find_all_contacts_resp.PeopleInfo.name)
  return _s;
}
inline const std::string& PeopleInfo::_internal_name() const {
  return _impl_.name_.Get();
}
inline void PeopleInfo::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* PeopleInfo::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* PeopleInfo::release_name() {
  // @@protoc_insertion_point(field_release:find_all_contacts_resp.PeopleInfo.name)
  return _impl_.name_.Release();
}
inline void PeopleInfo::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:find_all_contacts_resp.PeopleInfo.name)
}

// -------------------------------------------------------------------

// FindAllContactsResponse

// .base_response.BaseResponse base_resp = 1;
inline bool FindAllContactsResponse::_internal_has_base_resp() const {
  return this != internal_default_instance() && _impl_.base_resp_ != nullptr;
}
inline bool FindAllContactsResponse::has_base_resp() const {
  return _internal_has_base_resp();
}
inline const ::base_response::BaseResponse& FindAllContactsResponse::_internal_base_resp() const {
  const ::base_response::BaseResponse* p = _impl_.base_resp_;
  return p != nullptr ? *p : reinterpret_cast<const ::base_response::BaseResponse&>(
      ::base_response::_BaseResponse_default_instance_);
}
inline const ::base_response::BaseResponse& FindAllContactsResponse::base_resp() const {
  // @@protoc_insertion_point(field_get:find_all_contacts_resp.FindAllContactsResponse.base_resp)
  return _internal_base_resp();
}
inline void FindAllContactsResponse::unsafe_arena_set_allocated_base_resp(
    ::base_response::BaseResponse* base_resp) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.base_resp_);
  }
  _impl_.base_resp_ = base_resp;
  if (base_resp) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:find_all_contacts_resp.FindAllContactsResponse.base_resp)
}
inline ::base_response::BaseResponse* FindAllContactsResponse::release_base_resp() {
  
  ::base_response::BaseResponse* temp = _impl_.base_resp_;
  _impl_.base_resp_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::base_response::BaseResponse* FindAllContactsResponse::unsafe_arena_release_base_resp() {
  // @@protoc_insertion_point(field_release:find_all_contacts_resp.FindAllContactsResponse.base_resp)
  
  ::base_response::BaseResponse* temp = _impl_.base_resp_;
  _impl_.base_resp_ = nullptr;
  return temp;
}
inline ::base_response::BaseResponse* FindAllContactsResponse::_internal_mutable_base_resp() {
  
  if (_impl_.base_resp_ == nullptr) {
    auto* p = CreateMaybeMessage<::base_response::BaseResponse>(GetArenaForAllocation());
    _impl_.base_resp_ = p;
  }
  return _impl_.base_resp_;
}
inline ::base_response::BaseResponse* FindAllContactsResponse::mutable_base_resp() {
  ::base_response::BaseResponse* _msg = _internal_mutable_base_resp();
  // @@protoc_insertion_point(field_mutable:find_all_contacts_resp.FindAllContactsResponse.base_resp)
  return _msg;
}
inline void FindAllContactsResponse::set_allocated_base_resp(::base_response::BaseResponse* base_resp) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.base_resp_);
  }
  if (base_resp) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(base_resp));
    if (message_arena != submessage_arena) {
      base_resp = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, base_resp, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.base_resp_ = base_resp;
  // @@protoc_insertion_point(field_set_allocated:find_all_contacts_resp.FindAllContactsResponse.base_resp)
}

// repeated .find_all_contacts_resp.PeopleInfo contacts = 2;
inline int FindAllContactsResponse::_internal_contacts_size() const {
  return _impl_.contacts_.size();
}
inline int FindAllContactsResponse::contacts_size() const {
  return _internal_contacts_size();
}
inline void FindAllContactsResponse::clear_contacts() {
  _impl_.contacts_.Clear();
}
inline ::find_all_contacts_resp::PeopleInfo* FindAllContactsResponse::mutable_contacts(int index) {
  // @@protoc_insertion_point(field_mutable:find_all_contacts_resp.FindAllContactsResponse.contacts)
  return _impl_.contacts_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::find_all_contacts_resp::PeopleInfo >*
FindAllContactsResponse::mutable_contacts() {
  // @@protoc_insertion_point(field_mutable_list:find_all_contacts_resp.FindAllContactsResponse.contacts)
  return &_impl_.contacts_;
}
inline const ::find_all_contacts_resp::PeopleInfo& FindAllContactsResponse::_internal_contacts(int index) const {
  return _impl_.contacts_.Get(index);
}
inline const ::find_all_contacts_resp::PeopleInfo& FindAllContactsResponse::contacts(int index) const {
  // @@protoc_insertion_point(field_get:find_all_contacts_resp.FindAllContactsResponse.contacts)
  return _internal_contacts(index);
}
inline ::find_all_contacts_resp::PeopleInfo* FindAllContactsResponse::_internal_add_contacts() {
  return _impl_.contacts_.Add();
}
inline ::find_all_contacts_resp::PeopleInfo* FindAllContactsResponse::add_contacts() {
  ::find_all_contacts_resp::PeopleInfo* _add = _internal_add_contacts();
  // @@protoc_insertion_point(field_add:find_all_contacts_resp.FindAllContactsResponse.contacts)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::find_all_contacts_resp::PeopleInfo >&
FindAllContactsResponse::contacts() const {
  // @@protoc_insertion_point(field_list:find_all_contacts_resp.FindAllContactsResponse.contacts)
  return _impl_.contacts_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace find_all_contacts_resp

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_find_5fall_5fcontacts_5fresponse_2eproto
