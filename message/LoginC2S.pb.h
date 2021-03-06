// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LoginC2S.proto

#ifndef PROTOBUF_LoginC2S_2eproto__INCLUDED
#define PROTOBUF_LoginC2S_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Pro {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_LoginC2S_2eproto();
void protobuf_AssignDesc_LoginC2S_2eproto();
void protobuf_ShutdownFile_LoginC2S_2eproto();

class LoginC2S;

// ===================================================================

class LoginC2S : public ::google::protobuf::Message {
 public:
  LoginC2S();
  virtual ~LoginC2S();

  LoginC2S(const LoginC2S& from);

  inline LoginC2S& operator=(const LoginC2S& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LoginC2S& default_instance();

  void Swap(LoginC2S* other);

  // implements Message ----------------------------------------------

  LoginC2S* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginC2S& from);
  void MergeFrom(const LoginC2S& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional string password = 2;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 2;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  inline void set_allocated_password(::std::string* password);

  // optional string channel = 3;
  inline bool has_channel() const;
  inline void clear_channel();
  static const int kChannelFieldNumber = 3;
  inline const ::std::string& channel() const;
  inline void set_channel(const ::std::string& value);
  inline void set_channel(const char* value);
  inline void set_channel(const char* value, size_t size);
  inline ::std::string* mutable_channel();
  inline ::std::string* release_channel();
  inline void set_allocated_channel(::std::string* channel);

  // optional string downChannel = 4;
  inline bool has_downchannel() const;
  inline void clear_downchannel();
  static const int kDownChannelFieldNumber = 4;
  inline const ::std::string& downchannel() const;
  inline void set_downchannel(const ::std::string& value);
  inline void set_downchannel(const char* value);
  inline void set_downchannel(const char* value, size_t size);
  inline ::std::string* mutable_downchannel();
  inline ::std::string* release_downchannel();
  inline void set_allocated_downchannel(::std::string* downchannel);

  // optional uint32 session = 5;
  inline bool has_session() const;
  inline void clear_session();
  static const int kSessionFieldNumber = 5;
  inline ::google::protobuf::uint32 session() const;
  inline void set_session(::google::protobuf::uint32 value);

  // optional string gate = 6;
  inline bool has_gate() const;
  inline void clear_gate();
  static const int kGateFieldNumber = 6;
  inline const ::std::string& gate() const;
  inline void set_gate(const ::std::string& value);
  inline void set_gate(const char* value);
  inline void set_gate(const char* value, size_t size);
  inline ::std::string* mutable_gate();
  inline ::std::string* release_gate();
  inline void set_allocated_gate(::std::string* gate);

  // optional string version = 7;
  inline bool has_version() const;
  inline void clear_version();
  static const int kVersionFieldNumber = 7;
  inline const ::std::string& version() const;
  inline void set_version(const ::std::string& value);
  inline void set_version(const char* value);
  inline void set_version(const char* value, size_t size);
  inline ::std::string* mutable_version();
  inline ::std::string* release_version();
  inline void set_allocated_version(::std::string* version);

  // @@protoc_insertion_point(class_scope:Pro.LoginC2S)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_password();
  inline void clear_has_password();
  inline void set_has_channel();
  inline void clear_has_channel();
  inline void set_has_downchannel();
  inline void clear_has_downchannel();
  inline void set_has_session();
  inline void clear_has_session();
  inline void set_has_gate();
  inline void clear_has_gate();
  inline void set_has_version();
  inline void clear_has_version();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::std::string* password_;
  ::std::string* channel_;
  ::std::string* downchannel_;
  ::std::string* gate_;
  ::std::string* version_;
  ::google::protobuf::uint32 session_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  friend void  protobuf_AddDesc_LoginC2S_2eproto();
  friend void protobuf_AssignDesc_LoginC2S_2eproto();
  friend void protobuf_ShutdownFile_LoginC2S_2eproto();

  void InitAsDefaultInstance();
  static LoginC2S* default_instance_;
};
// ===================================================================


// ===================================================================

// LoginC2S

// optional string name = 1;
inline bool LoginC2S::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LoginC2S::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LoginC2S::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LoginC2S::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& LoginC2S::name() const {
  return *name_;
}
inline void LoginC2S::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void LoginC2S::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void LoginC2S::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginC2S::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* LoginC2S::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginC2S::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string password = 2;
inline bool LoginC2S::has_password() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LoginC2S::set_has_password() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LoginC2S::clear_has_password() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LoginC2S::clear_password() {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    password_->clear();
  }
  clear_has_password();
}
inline const ::std::string& LoginC2S::password() const {
  return *password_;
}
inline void LoginC2S::set_password(const ::std::string& value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void LoginC2S::set_password(const char* value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void LoginC2S::set_password(const char* value, size_t size) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginC2S::mutable_password() {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  return password_;
}
inline ::std::string* LoginC2S::release_password() {
  clear_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = password_;
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginC2S::set_allocated_password(::std::string* password) {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    delete password_;
  }
  if (password) {
    set_has_password();
    password_ = password;
  } else {
    clear_has_password();
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string channel = 3;
inline bool LoginC2S::has_channel() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LoginC2S::set_has_channel() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LoginC2S::clear_has_channel() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LoginC2S::clear_channel() {
  if (channel_ != &::google::protobuf::internal::kEmptyString) {
    channel_->clear();
  }
  clear_has_channel();
}
inline const ::std::string& LoginC2S::channel() const {
  return *channel_;
}
inline void LoginC2S::set_channel(const ::std::string& value) {
  set_has_channel();
  if (channel_ == &::google::protobuf::internal::kEmptyString) {
    channel_ = new ::std::string;
  }
  channel_->assign(value);
}
inline void LoginC2S::set_channel(const char* value) {
  set_has_channel();
  if (channel_ == &::google::protobuf::internal::kEmptyString) {
    channel_ = new ::std::string;
  }
  channel_->assign(value);
}
inline void LoginC2S::set_channel(const char* value, size_t size) {
  set_has_channel();
  if (channel_ == &::google::protobuf::internal::kEmptyString) {
    channel_ = new ::std::string;
  }
  channel_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginC2S::mutable_channel() {
  set_has_channel();
  if (channel_ == &::google::protobuf::internal::kEmptyString) {
    channel_ = new ::std::string;
  }
  return channel_;
}
inline ::std::string* LoginC2S::release_channel() {
  clear_has_channel();
  if (channel_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = channel_;
    channel_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginC2S::set_allocated_channel(::std::string* channel) {
  if (channel_ != &::google::protobuf::internal::kEmptyString) {
    delete channel_;
  }
  if (channel) {
    set_has_channel();
    channel_ = channel;
  } else {
    clear_has_channel();
    channel_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string downChannel = 4;
inline bool LoginC2S::has_downchannel() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LoginC2S::set_has_downchannel() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LoginC2S::clear_has_downchannel() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LoginC2S::clear_downchannel() {
  if (downchannel_ != &::google::protobuf::internal::kEmptyString) {
    downchannel_->clear();
  }
  clear_has_downchannel();
}
inline const ::std::string& LoginC2S::downchannel() const {
  return *downchannel_;
}
inline void LoginC2S::set_downchannel(const ::std::string& value) {
  set_has_downchannel();
  if (downchannel_ == &::google::protobuf::internal::kEmptyString) {
    downchannel_ = new ::std::string;
  }
  downchannel_->assign(value);
}
inline void LoginC2S::set_downchannel(const char* value) {
  set_has_downchannel();
  if (downchannel_ == &::google::protobuf::internal::kEmptyString) {
    downchannel_ = new ::std::string;
  }
  downchannel_->assign(value);
}
inline void LoginC2S::set_downchannel(const char* value, size_t size) {
  set_has_downchannel();
  if (downchannel_ == &::google::protobuf::internal::kEmptyString) {
    downchannel_ = new ::std::string;
  }
  downchannel_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginC2S::mutable_downchannel() {
  set_has_downchannel();
  if (downchannel_ == &::google::protobuf::internal::kEmptyString) {
    downchannel_ = new ::std::string;
  }
  return downchannel_;
}
inline ::std::string* LoginC2S::release_downchannel() {
  clear_has_downchannel();
  if (downchannel_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = downchannel_;
    downchannel_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginC2S::set_allocated_downchannel(::std::string* downchannel) {
  if (downchannel_ != &::google::protobuf::internal::kEmptyString) {
    delete downchannel_;
  }
  if (downchannel) {
    set_has_downchannel();
    downchannel_ = downchannel;
  } else {
    clear_has_downchannel();
    downchannel_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional uint32 session = 5;
inline bool LoginC2S::has_session() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LoginC2S::set_has_session() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LoginC2S::clear_has_session() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LoginC2S::clear_session() {
  session_ = 0u;
  clear_has_session();
}
inline ::google::protobuf::uint32 LoginC2S::session() const {
  return session_;
}
inline void LoginC2S::set_session(::google::protobuf::uint32 value) {
  set_has_session();
  session_ = value;
}

// optional string gate = 6;
inline bool LoginC2S::has_gate() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void LoginC2S::set_has_gate() {
  _has_bits_[0] |= 0x00000020u;
}
inline void LoginC2S::clear_has_gate() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void LoginC2S::clear_gate() {
  if (gate_ != &::google::protobuf::internal::kEmptyString) {
    gate_->clear();
  }
  clear_has_gate();
}
inline const ::std::string& LoginC2S::gate() const {
  return *gate_;
}
inline void LoginC2S::set_gate(const ::std::string& value) {
  set_has_gate();
  if (gate_ == &::google::protobuf::internal::kEmptyString) {
    gate_ = new ::std::string;
  }
  gate_->assign(value);
}
inline void LoginC2S::set_gate(const char* value) {
  set_has_gate();
  if (gate_ == &::google::protobuf::internal::kEmptyString) {
    gate_ = new ::std::string;
  }
  gate_->assign(value);
}
inline void LoginC2S::set_gate(const char* value, size_t size) {
  set_has_gate();
  if (gate_ == &::google::protobuf::internal::kEmptyString) {
    gate_ = new ::std::string;
  }
  gate_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginC2S::mutable_gate() {
  set_has_gate();
  if (gate_ == &::google::protobuf::internal::kEmptyString) {
    gate_ = new ::std::string;
  }
  return gate_;
}
inline ::std::string* LoginC2S::release_gate() {
  clear_has_gate();
  if (gate_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = gate_;
    gate_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginC2S::set_allocated_gate(::std::string* gate) {
  if (gate_ != &::google::protobuf::internal::kEmptyString) {
    delete gate_;
  }
  if (gate) {
    set_has_gate();
    gate_ = gate;
  } else {
    clear_has_gate();
    gate_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string version = 7;
inline bool LoginC2S::has_version() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void LoginC2S::set_has_version() {
  _has_bits_[0] |= 0x00000040u;
}
inline void LoginC2S::clear_has_version() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void LoginC2S::clear_version() {
  if (version_ != &::google::protobuf::internal::kEmptyString) {
    version_->clear();
  }
  clear_has_version();
}
inline const ::std::string& LoginC2S::version() const {
  return *version_;
}
inline void LoginC2S::set_version(const ::std::string& value) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::kEmptyString) {
    version_ = new ::std::string;
  }
  version_->assign(value);
}
inline void LoginC2S::set_version(const char* value) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::kEmptyString) {
    version_ = new ::std::string;
  }
  version_->assign(value);
}
inline void LoginC2S::set_version(const char* value, size_t size) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::kEmptyString) {
    version_ = new ::std::string;
  }
  version_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginC2S::mutable_version() {
  set_has_version();
  if (version_ == &::google::protobuf::internal::kEmptyString) {
    version_ = new ::std::string;
  }
  return version_;
}
inline ::std::string* LoginC2S::release_version() {
  clear_has_version();
  if (version_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = version_;
    version_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginC2S::set_allocated_version(::std::string* version) {
  if (version_ != &::google::protobuf::internal::kEmptyString) {
    delete version_;
  }
  if (version) {
    set_has_version();
    version_ = version;
  } else {
    clear_has_version();
    version_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Pro

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_LoginC2S_2eproto__INCLUDED
