// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: colourConfig.proto

#ifndef PROTOBUF_colourConfig_2eproto__INCLUDED
#define PROTOBUF_colourConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_colourConfig_2eproto();
void protobuf_AssignDesc_colourConfig_2eproto();
void protobuf_ShutdownFile_colourConfig_2eproto();

class colourConfig;

// ===================================================================

class colourConfig : public ::google::protobuf::Message {
 public:
  colourConfig();
  virtual ~colourConfig();

  colourConfig(const colourConfig& from);

  inline colourConfig& operator=(const colourConfig& from) {
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
  static const colourConfig& default_instance();

  void Swap(colourConfig* other);

  // implements Message ----------------------------------------------

  colourConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const colourConfig& from);
  void MergeFrom(const colourConfig& from);
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

  // optional string word_colour = 3;
  inline bool has_word_colour() const;
  inline void clear_word_colour();
  static const int kWordColourFieldNumber = 3;
  inline const ::std::string& word_colour() const;
  inline void set_word_colour(const ::std::string& value);
  inline void set_word_colour(const char* value);
  inline void set_word_colour(const char* value, size_t size);
  inline ::std::string* mutable_word_colour();
  inline ::std::string* release_word_colour();
  inline void set_allocated_word_colour(::std::string* word_colour);

  // optional string desc = 2;
  inline bool has_desc() const;
  inline void clear_desc();
  static const int kDescFieldNumber = 2;
  inline const ::std::string& desc() const;
  inline void set_desc(const ::std::string& value);
  inline void set_desc(const char* value);
  inline void set_desc(const char* value, size_t size);
  inline ::std::string* mutable_desc();
  inline ::std::string* release_desc();
  inline void set_allocated_desc(::std::string* desc);

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.colourConfig)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_word_colour();
  inline void clear_has_word_colour();
  inline void set_has_desc();
  inline void clear_has_desc();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* word_colour_;
  ::std::string* desc_;
  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_colourConfig_2eproto();
  friend void protobuf_AssignDesc_colourConfig_2eproto();
  friend void protobuf_ShutdownFile_colourConfig_2eproto();

  void InitAsDefaultInstance();
  static colourConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// colourConfig

// optional int32 id = 1;
inline bool colourConfig::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void colourConfig::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void colourConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void colourConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 colourConfig::id() const {
  return id_;
}
inline void colourConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional string word_colour = 3;
inline bool colourConfig::has_word_colour() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void colourConfig::set_has_word_colour() {
  _has_bits_[0] |= 0x00000002u;
}
inline void colourConfig::clear_has_word_colour() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void colourConfig::clear_word_colour() {
  if (word_colour_ != &::google::protobuf::internal::kEmptyString) {
    word_colour_->clear();
  }
  clear_has_word_colour();
}
inline const ::std::string& colourConfig::word_colour() const {
  return *word_colour_;
}
inline void colourConfig::set_word_colour(const ::std::string& value) {
  set_has_word_colour();
  if (word_colour_ == &::google::protobuf::internal::kEmptyString) {
    word_colour_ = new ::std::string;
  }
  word_colour_->assign(value);
}
inline void colourConfig::set_word_colour(const char* value) {
  set_has_word_colour();
  if (word_colour_ == &::google::protobuf::internal::kEmptyString) {
    word_colour_ = new ::std::string;
  }
  word_colour_->assign(value);
}
inline void colourConfig::set_word_colour(const char* value, size_t size) {
  set_has_word_colour();
  if (word_colour_ == &::google::protobuf::internal::kEmptyString) {
    word_colour_ = new ::std::string;
  }
  word_colour_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* colourConfig::mutable_word_colour() {
  set_has_word_colour();
  if (word_colour_ == &::google::protobuf::internal::kEmptyString) {
    word_colour_ = new ::std::string;
  }
  return word_colour_;
}
inline ::std::string* colourConfig::release_word_colour() {
  clear_has_word_colour();
  if (word_colour_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = word_colour_;
    word_colour_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void colourConfig::set_allocated_word_colour(::std::string* word_colour) {
  if (word_colour_ != &::google::protobuf::internal::kEmptyString) {
    delete word_colour_;
  }
  if (word_colour) {
    set_has_word_colour();
    word_colour_ = word_colour;
  } else {
    clear_has_word_colour();
    word_colour_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string desc = 2;
inline bool colourConfig::has_desc() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void colourConfig::set_has_desc() {
  _has_bits_[0] |= 0x00000004u;
}
inline void colourConfig::clear_has_desc() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void colourConfig::clear_desc() {
  if (desc_ != &::google::protobuf::internal::kEmptyString) {
    desc_->clear();
  }
  clear_has_desc();
}
inline const ::std::string& colourConfig::desc() const {
  return *desc_;
}
inline void colourConfig::set_desc(const ::std::string& value) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(value);
}
inline void colourConfig::set_desc(const char* value) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(value);
}
inline void colourConfig::set_desc(const char* value, size_t size) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* colourConfig::mutable_desc() {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  return desc_;
}
inline ::std::string* colourConfig::release_desc() {
  clear_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = desc_;
    desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void colourConfig::set_allocated_desc(::std::string* desc) {
  if (desc_ != &::google::protobuf::internal::kEmptyString) {
    delete desc_;
  }
  if (desc) {
    set_has_desc();
    desc_ = desc;
  } else {
    clear_has_desc();
    desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
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

#endif  // PROTOBUF_colourConfig_2eproto__INCLUDED
