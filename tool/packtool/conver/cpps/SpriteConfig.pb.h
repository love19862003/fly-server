// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SpriteConfig.proto

#ifndef PROTOBUF_SpriteConfig_2eproto__INCLUDED
#define PROTOBUF_SpriteConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_SpriteConfig_2eproto();
void protobuf_AssignDesc_SpriteConfig_2eproto();
void protobuf_ShutdownFile_SpriteConfig_2eproto();

class SpriteConfig;

// ===================================================================

class SpriteConfig : public ::google::protobuf::Message {
 public:
  SpriteConfig();
  virtual ~SpriteConfig();

  SpriteConfig(const SpriteConfig& from);

  inline SpriteConfig& operator=(const SpriteConfig& from) {
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
  static const SpriteConfig& default_instance();

  void Swap(SpriteConfig* other);

  // implements Message ----------------------------------------------

  SpriteConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SpriteConfig& from);
  void MergeFrom(const SpriteConfig& from);
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

  // optional string path = 2;
  inline bool has_path() const;
  inline void clear_path();
  static const int kPathFieldNumber = 2;
  inline const ::std::string& path() const;
  inline void set_path(const ::std::string& value);
  inline void set_path(const char* value);
  inline void set_path(const char* value, size_t size);
  inline ::std::string* mutable_path();
  inline ::std::string* release_path();
  inline void set_allocated_path(::std::string* path);

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.SpriteConfig)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_path();
  inline void clear_has_path();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* path_;
  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_SpriteConfig_2eproto();
  friend void protobuf_AssignDesc_SpriteConfig_2eproto();
  friend void protobuf_ShutdownFile_SpriteConfig_2eproto();

  void InitAsDefaultInstance();
  static SpriteConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// SpriteConfig

// optional int32 id = 1;
inline bool SpriteConfig::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SpriteConfig::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SpriteConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SpriteConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 SpriteConfig::id() const {
  return id_;
}
inline void SpriteConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional string path = 2;
inline bool SpriteConfig::has_path() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SpriteConfig::set_has_path() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SpriteConfig::clear_has_path() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SpriteConfig::clear_path() {
  if (path_ != &::google::protobuf::internal::kEmptyString) {
    path_->clear();
  }
  clear_has_path();
}
inline const ::std::string& SpriteConfig::path() const {
  return *path_;
}
inline void SpriteConfig::set_path(const ::std::string& value) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::kEmptyString) {
    path_ = new ::std::string;
  }
  path_->assign(value);
}
inline void SpriteConfig::set_path(const char* value) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::kEmptyString) {
    path_ = new ::std::string;
  }
  path_->assign(value);
}
inline void SpriteConfig::set_path(const char* value, size_t size) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::kEmptyString) {
    path_ = new ::std::string;
  }
  path_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SpriteConfig::mutable_path() {
  set_has_path();
  if (path_ == &::google::protobuf::internal::kEmptyString) {
    path_ = new ::std::string;
  }
  return path_;
}
inline ::std::string* SpriteConfig::release_path() {
  clear_has_path();
  if (path_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = path_;
    path_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SpriteConfig::set_allocated_path(::std::string* path) {
  if (path_ != &::google::protobuf::internal::kEmptyString) {
    delete path_;
  }
  if (path) {
    set_has_path();
    path_ = path;
  } else {
    clear_has_path();
    path_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
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

#endif  // PROTOBUF_SpriteConfig_2eproto__INCLUDED
