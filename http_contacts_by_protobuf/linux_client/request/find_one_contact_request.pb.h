// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: find_one_contact_request.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_find_5fone_5fcontact_5frequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_find_5fone_5fcontact_5frequest_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_find_5fone_5fcontact_5frequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_find_5fone_5fcontact_5frequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_find_5fone_5fcontact_5frequest_2eproto;
namespace find_one_contact_req {
class FindOneContactRequest;
struct FindOneContactRequestDefaultTypeInternal;
extern FindOneContactRequestDefaultTypeInternal _FindOneContactRequest_default_instance_;
}  // namespace find_one_contact_req
PROTOBUF_NAMESPACE_OPEN
template<> ::find_one_contact_req::FindOneContactRequest* Arena::CreateMaybeMessage<::find_one_contact_req::FindOneContactRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace find_one_contact_req {

// ===================================================================

class FindOneContactRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:find_one_contact_req.FindOneContactRequest) */ {
 public:
  inline FindOneContactRequest() : FindOneContactRequest(nullptr) {}
  ~FindOneContactRequest() override;
  explicit PROTOBUF_CONSTEXPR FindOneContactRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FindOneContactRequest(const FindOneContactRequest& from);
  FindOneContactRequest(FindOneContactRequest&& from) noexcept
    : FindOneContactRequest() {
    *this = ::std::move(from);
  }

  inline FindOneContactRequest& operator=(const FindOneContactRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline FindOneContactRequest& operator=(FindOneContactRequest&& from) noexcept {
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
  static const FindOneContactRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const FindOneContactRequest* internal_default_instance() {
    return reinterpret_cast<const FindOneContactRequest*>(
               &_FindOneContactRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FindOneContactRequest& a, FindOneContactRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(FindOneContactRequest* other) {
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
  void UnsafeArenaSwap(FindOneContactRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  FindOneContactRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<FindOneContactRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const FindOneContactRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const FindOneContactRequest& from) {
    FindOneContactRequest::MergeImpl(*this, from);
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
  void InternalSwap(FindOneContactRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "find_one_contact_req.FindOneContactRequest";
  }
  protected:
  explicit FindOneContactRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUidFieldNumber = 1,
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

  // @@protoc_insertion_point(class_scope:find_one_contact_req.FindOneContactRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr uid_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_find_5fone_5fcontact_5frequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FindOneContactRequest

// string uid = 1;
inline void FindOneContactRequest::clear_uid() {
  _impl_.uid_.ClearToEmpty();
}
inline const std::string& FindOneContactRequest::uid() const {
  // @@protoc_insertion_point(field_get:find_one_contact_req.FindOneContactRequest.uid)
  return _internal_uid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FindOneContactRequest::set_uid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.uid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:find_one_contact_req.FindOneContactRequest.uid)
}
inline std::string* FindOneContactRequest::mutable_uid() {
  std::string* _s = _internal_mutable_uid();
  // @@protoc_insertion_point(field_mutable:find_one_contact_req.FindOneContactRequest.uid)
  return _s;
}
inline const std::string& FindOneContactRequest::_internal_uid() const {
  return _impl_.uid_.Get();
}
inline void FindOneContactRequest::_internal_set_uid(const std::string& value) {
  
  _impl_.uid_.Set(value, GetArenaForAllocation());
}
inline std::string* FindOneContactRequest::_internal_mutable_uid() {
  
  return _impl_.uid_.Mutable(GetArenaForAllocation());
}
inline std::string* FindOneContactRequest::release_uid() {
  // @@protoc_insertion_point(field_release:find_one_contact_req.FindOneContactRequest.uid)
  return _impl_.uid_.Release();
}
inline void FindOneContactRequest::set_allocated_uid(std::string* uid) {
  if (uid != nullptr) {
    
  } else {
    
  }
  _impl_.uid_.SetAllocated(uid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.uid_.IsDefault()) {
    _impl_.uid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:find_one_contact_req.FindOneContactRequest.uid)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace find_one_contact_req

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_find_5fone_5fcontact_5frequest_2eproto
