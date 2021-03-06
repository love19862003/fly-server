// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chapter_awardConfig.proto

#ifndef PROTOBUF_chapter_5fawardConfig_2eproto__INCLUDED
#define PROTOBUF_chapter_5fawardConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_chapter_5fawardConfig_2eproto();
void protobuf_AssignDesc_chapter_5fawardConfig_2eproto();
void protobuf_ShutdownFile_chapter_5fawardConfig_2eproto();

class chapter_awardConfig;

// ===================================================================

class chapter_awardConfig : public ::google::protobuf::Message {
 public:
  chapter_awardConfig();
  virtual ~chapter_awardConfig();

  chapter_awardConfig(const chapter_awardConfig& from);

  inline chapter_awardConfig& operator=(const chapter_awardConfig& from) {
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
  static const chapter_awardConfig& default_instance();

  void Swap(chapter_awardConfig* other);

  // implements Message ----------------------------------------------

  chapter_awardConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const chapter_awardConfig& from);
  void MergeFrom(const chapter_awardConfig& from);
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

  // optional int32 chapter = 2;
  inline bool has_chapter() const;
  inline void clear_chapter();
  static const int kChapterFieldNumber = 2;
  inline ::google::protobuf::int32 chapter() const;
  inline void set_chapter(::google::protobuf::int32 value);

  // optional int32 type = 5;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 5;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // repeated int32 drop = 4;
  inline int drop_size() const;
  inline void clear_drop();
  static const int kDropFieldNumber = 4;
  inline ::google::protobuf::int32 drop(int index) const;
  inline void set_drop(int index, ::google::protobuf::int32 value);
  inline void add_drop(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      drop() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_drop();

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional int32 star = 3;
  inline bool has_star() const;
  inline void clear_star();
  static const int kStarFieldNumber = 3;
  inline ::google::protobuf::int32 star() const;
  inline void set_star(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.chapter_awardConfig)
 private:
  inline void set_has_chapter();
  inline void clear_has_chapter();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_star();
  inline void clear_has_star();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 chapter_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > drop_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 star_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_chapter_5fawardConfig_2eproto();
  friend void protobuf_AssignDesc_chapter_5fawardConfig_2eproto();
  friend void protobuf_ShutdownFile_chapter_5fawardConfig_2eproto();

  void InitAsDefaultInstance();
  static chapter_awardConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// chapter_awardConfig

// optional int32 chapter = 2;
inline bool chapter_awardConfig::has_chapter() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void chapter_awardConfig::set_has_chapter() {
  _has_bits_[0] |= 0x00000001u;
}
inline void chapter_awardConfig::clear_has_chapter() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void chapter_awardConfig::clear_chapter() {
  chapter_ = 0;
  clear_has_chapter();
}
inline ::google::protobuf::int32 chapter_awardConfig::chapter() const {
  return chapter_;
}
inline void chapter_awardConfig::set_chapter(::google::protobuf::int32 value) {
  set_has_chapter();
  chapter_ = value;
}

// optional int32 type = 5;
inline bool chapter_awardConfig::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void chapter_awardConfig::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void chapter_awardConfig::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void chapter_awardConfig::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 chapter_awardConfig::type() const {
  return type_;
}
inline void chapter_awardConfig::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// repeated int32 drop = 4;
inline int chapter_awardConfig::drop_size() const {
  return drop_.size();
}
inline void chapter_awardConfig::clear_drop() {
  drop_.Clear();
}
inline ::google::protobuf::int32 chapter_awardConfig::drop(int index) const {
  return drop_.Get(index);
}
inline void chapter_awardConfig::set_drop(int index, ::google::protobuf::int32 value) {
  drop_.Set(index, value);
}
inline void chapter_awardConfig::add_drop(::google::protobuf::int32 value) {
  drop_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
chapter_awardConfig::drop() const {
  return drop_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
chapter_awardConfig::mutable_drop() {
  return &drop_;
}

// optional int32 id = 1;
inline bool chapter_awardConfig::has_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void chapter_awardConfig::set_has_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void chapter_awardConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void chapter_awardConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 chapter_awardConfig::id() const {
  return id_;
}
inline void chapter_awardConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 star = 3;
inline bool chapter_awardConfig::has_star() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void chapter_awardConfig::set_has_star() {
  _has_bits_[0] |= 0x00000010u;
}
inline void chapter_awardConfig::clear_has_star() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void chapter_awardConfig::clear_star() {
  star_ = 0;
  clear_has_star();
}
inline ::google::protobuf::int32 chapter_awardConfig::star() const {
  return star_;
}
inline void chapter_awardConfig::set_star(::google::protobuf::int32 value) {
  set_has_star();
  star_ = value;
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

#endif  // PROTOBUF_chapter_5fawardConfig_2eproto__INCLUDED
