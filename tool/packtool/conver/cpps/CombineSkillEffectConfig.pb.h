// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CombineSkillEffectConfig.proto

#ifndef PROTOBUF_CombineSkillEffectConfig_2eproto__INCLUDED
#define PROTOBUF_CombineSkillEffectConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_CombineSkillEffectConfig_2eproto();
void protobuf_AssignDesc_CombineSkillEffectConfig_2eproto();
void protobuf_ShutdownFile_CombineSkillEffectConfig_2eproto();

class CombineSkillEffectConfig;

// ===================================================================

class CombineSkillEffectConfig : public ::google::protobuf::Message {
 public:
  CombineSkillEffectConfig();
  virtual ~CombineSkillEffectConfig();

  CombineSkillEffectConfig(const CombineSkillEffectConfig& from);

  inline CombineSkillEffectConfig& operator=(const CombineSkillEffectConfig& from) {
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
  static const CombineSkillEffectConfig& default_instance();

  void Swap(CombineSkillEffectConfig* other);

  // implements Message ----------------------------------------------

  CombineSkillEffectConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CombineSkillEffectConfig& from);
  void MergeFrom(const CombineSkillEffectConfig& from);
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

  // optional int32 img = 2;
  inline bool has_img() const;
  inline void clear_img();
  static const int kImgFieldNumber = 2;
  inline ::google::protobuf::int32 img() const;
  inline void set_img(::google::protobuf::int32 value);

  // optional int32 words = 3;
  inline bool has_words() const;
  inline void clear_words();
  static const int kWordsFieldNumber = 3;
  inline ::google::protobuf::int32 words() const;
  inline void set_words(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.CombineSkillEffectConfig)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_img();
  inline void clear_has_img();
  inline void set_has_words();
  inline void clear_has_words();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 img_;
  ::google::protobuf::int32 words_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_CombineSkillEffectConfig_2eproto();
  friend void protobuf_AssignDesc_CombineSkillEffectConfig_2eproto();
  friend void protobuf_ShutdownFile_CombineSkillEffectConfig_2eproto();

  void InitAsDefaultInstance();
  static CombineSkillEffectConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// CombineSkillEffectConfig

// optional int32 id = 1;
inline bool CombineSkillEffectConfig::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CombineSkillEffectConfig::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CombineSkillEffectConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CombineSkillEffectConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 CombineSkillEffectConfig::id() const {
  return id_;
}
inline void CombineSkillEffectConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 img = 2;
inline bool CombineSkillEffectConfig::has_img() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CombineSkillEffectConfig::set_has_img() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CombineSkillEffectConfig::clear_has_img() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CombineSkillEffectConfig::clear_img() {
  img_ = 0;
  clear_has_img();
}
inline ::google::protobuf::int32 CombineSkillEffectConfig::img() const {
  return img_;
}
inline void CombineSkillEffectConfig::set_img(::google::protobuf::int32 value) {
  set_has_img();
  img_ = value;
}

// optional int32 words = 3;
inline bool CombineSkillEffectConfig::has_words() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CombineSkillEffectConfig::set_has_words() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CombineSkillEffectConfig::clear_has_words() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CombineSkillEffectConfig::clear_words() {
  words_ = 0;
  clear_has_words();
}
inline ::google::protobuf::int32 CombineSkillEffectConfig::words() const {
  return words_;
}
inline void CombineSkillEffectConfig::set_words(::google::protobuf::int32 value) {
  set_has_words();
  words_ = value;
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

#endif  // PROTOBUF_CombineSkillEffectConfig_2eproto__INCLUDED
