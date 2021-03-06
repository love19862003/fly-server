// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GuideConfig.proto

#ifndef PROTOBUF_GuideConfig_2eproto__INCLUDED
#define PROTOBUF_GuideConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_GuideConfig_2eproto();
void protobuf_AssignDesc_GuideConfig_2eproto();
void protobuf_ShutdownFile_GuideConfig_2eproto();

class GuideConfig;

// ===================================================================

class GuideConfig : public ::google::protobuf::Message {
 public:
  GuideConfig();
  virtual ~GuideConfig();

  GuideConfig(const GuideConfig& from);

  inline GuideConfig& operator=(const GuideConfig& from) {
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
  static const GuideConfig& default_instance();

  void Swap(GuideConfig* other);

  // implements Message ----------------------------------------------

  GuideConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GuideConfig& from);
  void MergeFrom(const GuideConfig& from);
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

  // optional int32 condition_type = 2;
  inline bool has_condition_type() const;
  inline void clear_condition_type();
  static const int kConditionTypeFieldNumber = 2;
  inline ::google::protobuf::int32 condition_type() const;
  inline void set_condition_type(::google::protobuf::int32 value);

  // optional int32 close = 5;
  inline bool has_close() const;
  inline void clear_close();
  static const int kCloseFieldNumber = 5;
  inline ::google::protobuf::int32 close() const;
  inline void set_close(::google::protobuf::int32 value);

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // repeated int32 stepid = 4;
  inline int stepid_size() const;
  inline void clear_stepid();
  static const int kStepidFieldNumber = 4;
  inline ::google::protobuf::int32 stepid(int index) const;
  inline void set_stepid(int index, ::google::protobuf::int32 value);
  inline void add_stepid(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      stepid() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_stepid();

  // optional int32 value = 3;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 3;
  inline ::google::protobuf::int32 value() const;
  inline void set_value(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.GuideConfig)
 private:
  inline void set_has_condition_type();
  inline void clear_has_condition_type();
  inline void set_has_close();
  inline void clear_has_close();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 condition_type_;
  ::google::protobuf::int32 close_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > stepid_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 value_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_GuideConfig_2eproto();
  friend void protobuf_AssignDesc_GuideConfig_2eproto();
  friend void protobuf_ShutdownFile_GuideConfig_2eproto();

  void InitAsDefaultInstance();
  static GuideConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// GuideConfig

// optional int32 condition_type = 2;
inline bool GuideConfig::has_condition_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GuideConfig::set_has_condition_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GuideConfig::clear_has_condition_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GuideConfig::clear_condition_type() {
  condition_type_ = 0;
  clear_has_condition_type();
}
inline ::google::protobuf::int32 GuideConfig::condition_type() const {
  return condition_type_;
}
inline void GuideConfig::set_condition_type(::google::protobuf::int32 value) {
  set_has_condition_type();
  condition_type_ = value;
}

// optional int32 close = 5;
inline bool GuideConfig::has_close() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GuideConfig::set_has_close() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GuideConfig::clear_has_close() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GuideConfig::clear_close() {
  close_ = 0;
  clear_has_close();
}
inline ::google::protobuf::int32 GuideConfig::close() const {
  return close_;
}
inline void GuideConfig::set_close(::google::protobuf::int32 value) {
  set_has_close();
  close_ = value;
}

// optional int32 id = 1;
inline bool GuideConfig::has_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GuideConfig::set_has_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GuideConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GuideConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 GuideConfig::id() const {
  return id_;
}
inline void GuideConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// repeated int32 stepid = 4;
inline int GuideConfig::stepid_size() const {
  return stepid_.size();
}
inline void GuideConfig::clear_stepid() {
  stepid_.Clear();
}
inline ::google::protobuf::int32 GuideConfig::stepid(int index) const {
  return stepid_.Get(index);
}
inline void GuideConfig::set_stepid(int index, ::google::protobuf::int32 value) {
  stepid_.Set(index, value);
}
inline void GuideConfig::add_stepid(::google::protobuf::int32 value) {
  stepid_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
GuideConfig::stepid() const {
  return stepid_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
GuideConfig::mutable_stepid() {
  return &stepid_;
}

// optional int32 value = 3;
inline bool GuideConfig::has_value() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void GuideConfig::set_has_value() {
  _has_bits_[0] |= 0x00000010u;
}
inline void GuideConfig::clear_has_value() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void GuideConfig::clear_value() {
  value_ = 0;
  clear_has_value();
}
inline ::google::protobuf::int32 GuideConfig::value() const {
  return value_;
}
inline void GuideConfig::set_value(::google::protobuf::int32 value) {
  set_has_value();
  value_ = value;
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

#endif  // PROTOBUF_GuideConfig_2eproto__INCLUDED
