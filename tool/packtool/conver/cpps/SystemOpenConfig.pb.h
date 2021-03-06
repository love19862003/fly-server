// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SystemOpenConfig.proto

#ifndef PROTOBUF_SystemOpenConfig_2eproto__INCLUDED
#define PROTOBUF_SystemOpenConfig_2eproto__INCLUDED

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
#include "ConfigTypeGroup.pb.h"
// @@protoc_insertion_point(includes)

namespace DianShiTech {
namespace Config {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_SystemOpenConfig_2eproto();
void protobuf_AssignDesc_SystemOpenConfig_2eproto();
void protobuf_ShutdownFile_SystemOpenConfig_2eproto();

class SystemOpenConfig;

// ===================================================================

class SystemOpenConfig : public ::google::protobuf::Message {
 public:
  SystemOpenConfig();
  virtual ~SystemOpenConfig();

  SystemOpenConfig(const SystemOpenConfig& from);

  inline SystemOpenConfig& operator=(const SystemOpenConfig& from) {
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
  static const SystemOpenConfig& default_instance();

  void Swap(SystemOpenConfig* other);

  // implements Message ----------------------------------------------

  SystemOpenConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SystemOpenConfig& from);
  void MergeFrom(const SystemOpenConfig& from);
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

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional string system_desc = 2;
  inline bool has_system_desc() const;
  inline void clear_system_desc();
  static const int kSystemDescFieldNumber = 2;
  inline const ::std::string& system_desc() const;
  inline void set_system_desc(const ::std::string& value);
  inline void set_system_desc(const char* value);
  inline void set_system_desc(const char* value, size_t size);
  inline ::std::string* mutable_system_desc();
  inline ::std::string* release_system_desc();
  inline void set_allocated_system_desc(::std::string* system_desc);

  // optional int32 type = 3;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 3;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional int32 type_value = 4;
  inline bool has_type_value() const;
  inline void clear_type_value();
  static const int kTypeValueFieldNumber = 4;
  inline ::google::protobuf::int32 type_value() const;
  inline void set_type_value(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.SystemOpenConfig)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_system_desc();
  inline void clear_has_system_desc();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_type_value();
  inline void clear_has_type_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* system_desc_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 type_value_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_SystemOpenConfig_2eproto();
  friend void protobuf_AssignDesc_SystemOpenConfig_2eproto();
  friend void protobuf_ShutdownFile_SystemOpenConfig_2eproto();

  void InitAsDefaultInstance();
  static SystemOpenConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// SystemOpenConfig

// optional int32 id = 1;
inline bool SystemOpenConfig::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SystemOpenConfig::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SystemOpenConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SystemOpenConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 SystemOpenConfig::id() const {
  return id_;
}
inline void SystemOpenConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional string system_desc = 2;
inline bool SystemOpenConfig::has_system_desc() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SystemOpenConfig::set_has_system_desc() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SystemOpenConfig::clear_has_system_desc() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SystemOpenConfig::clear_system_desc() {
  if (system_desc_ != &::google::protobuf::internal::kEmptyString) {
    system_desc_->clear();
  }
  clear_has_system_desc();
}
inline const ::std::string& SystemOpenConfig::system_desc() const {
  return *system_desc_;
}
inline void SystemOpenConfig::set_system_desc(const ::std::string& value) {
  set_has_system_desc();
  if (system_desc_ == &::google::protobuf::internal::kEmptyString) {
    system_desc_ = new ::std::string;
  }
  system_desc_->assign(value);
}
inline void SystemOpenConfig::set_system_desc(const char* value) {
  set_has_system_desc();
  if (system_desc_ == &::google::protobuf::internal::kEmptyString) {
    system_desc_ = new ::std::string;
  }
  system_desc_->assign(value);
}
inline void SystemOpenConfig::set_system_desc(const char* value, size_t size) {
  set_has_system_desc();
  if (system_desc_ == &::google::protobuf::internal::kEmptyString) {
    system_desc_ = new ::std::string;
  }
  system_desc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SystemOpenConfig::mutable_system_desc() {
  set_has_system_desc();
  if (system_desc_ == &::google::protobuf::internal::kEmptyString) {
    system_desc_ = new ::std::string;
  }
  return system_desc_;
}
inline ::std::string* SystemOpenConfig::release_system_desc() {
  clear_has_system_desc();
  if (system_desc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = system_desc_;
    system_desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SystemOpenConfig::set_allocated_system_desc(::std::string* system_desc) {
  if (system_desc_ != &::google::protobuf::internal::kEmptyString) {
    delete system_desc_;
  }
  if (system_desc) {
    set_has_system_desc();
    system_desc_ = system_desc;
  } else {
    clear_has_system_desc();
    system_desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 type = 3;
inline bool SystemOpenConfig::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SystemOpenConfig::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SystemOpenConfig::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SystemOpenConfig::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 SystemOpenConfig::type() const {
  return type_;
}
inline void SystemOpenConfig::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// optional int32 type_value = 4;
inline bool SystemOpenConfig::has_type_value() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SystemOpenConfig::set_has_type_value() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SystemOpenConfig::clear_has_type_value() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SystemOpenConfig::clear_type_value() {
  type_value_ = 0;
  clear_has_type_value();
}
inline ::google::protobuf::int32 SystemOpenConfig::type_value() const {
  return type_value_;
}
inline void SystemOpenConfig::set_type_value(::google::protobuf::int32 value) {
  set_has_type_value();
  type_value_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SystemOpenConfig_2eproto__INCLUDED
