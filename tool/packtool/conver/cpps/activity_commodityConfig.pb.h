// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: activity_commodityConfig.proto

#ifndef PROTOBUF_activity_5fcommodityConfig_2eproto__INCLUDED
#define PROTOBUF_activity_5fcommodityConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_activity_5fcommodityConfig_2eproto();
void protobuf_AssignDesc_activity_5fcommodityConfig_2eproto();
void protobuf_ShutdownFile_activity_5fcommodityConfig_2eproto();

class activity_commodityConfig;

// ===================================================================

class activity_commodityConfig : public ::google::protobuf::Message {
 public:
  activity_commodityConfig();
  virtual ~activity_commodityConfig();

  activity_commodityConfig(const activity_commodityConfig& from);

  inline activity_commodityConfig& operator=(const activity_commodityConfig& from) {
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
  static const activity_commodityConfig& default_instance();

  void Swap(activity_commodityConfig* other);

  // implements Message ----------------------------------------------

  activity_commodityConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const activity_commodityConfig& from);
  void MergeFrom(const activity_commodityConfig& from);
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

  // optional int32 commodity_id = 3;
  inline bool has_commodity_id() const;
  inline void clear_commodity_id();
  static const int kCommodityIdFieldNumber = 3;
  inline ::google::protobuf::int32 commodity_id() const;
  inline void set_commodity_id(::google::protobuf::int32 value);

  // optional int32 drop_id = 5;
  inline bool has_drop_id() const;
  inline void clear_drop_id();
  static const int kDropIdFieldNumber = 5;
  inline ::google::protobuf::int32 drop_id() const;
  inline void set_drop_id(::google::protobuf::int32 value);

  // optional int32 act_same_index = 7;
  inline bool has_act_same_index() const;
  inline void clear_act_same_index();
  static const int kActSameIndexFieldNumber = 7;
  inline ::google::protobuf::int32 act_same_index() const;
  inline void set_act_same_index(::google::protobuf::int32 value);

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional int32 drop_condition = 4;
  inline bool has_drop_condition() const;
  inline void clear_drop_condition();
  static const int kDropConditionFieldNumber = 4;
  inline ::google::protobuf::int32 drop_condition() const;
  inline void set_drop_condition(::google::protobuf::int32 value);

  // optional int32 activity_type = 6;
  inline bool has_activity_type() const;
  inline void clear_activity_type();
  static const int kActivityTypeFieldNumber = 6;
  inline ::google::protobuf::int32 activity_type() const;
  inline void set_activity_type(::google::protobuf::int32 value);

  // optional int32 activity_id = 2;
  inline bool has_activity_id() const;
  inline void clear_activity_id();
  static const int kActivityIdFieldNumber = 2;
  inline ::google::protobuf::int32 activity_id() const;
  inline void set_activity_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.activity_commodityConfig)
 private:
  inline void set_has_commodity_id();
  inline void clear_has_commodity_id();
  inline void set_has_drop_id();
  inline void clear_has_drop_id();
  inline void set_has_act_same_index();
  inline void clear_has_act_same_index();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_drop_condition();
  inline void clear_has_drop_condition();
  inline void set_has_activity_type();
  inline void clear_has_activity_type();
  inline void set_has_activity_id();
  inline void clear_has_activity_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 commodity_id_;
  ::google::protobuf::int32 drop_id_;
  ::google::protobuf::int32 act_same_index_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 drop_condition_;
  ::google::protobuf::int32 activity_type_;
  ::google::protobuf::int32 activity_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  friend void  protobuf_AddDesc_activity_5fcommodityConfig_2eproto();
  friend void protobuf_AssignDesc_activity_5fcommodityConfig_2eproto();
  friend void protobuf_ShutdownFile_activity_5fcommodityConfig_2eproto();

  void InitAsDefaultInstance();
  static activity_commodityConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// activity_commodityConfig

// optional int32 commodity_id = 3;
inline bool activity_commodityConfig::has_commodity_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void activity_commodityConfig::set_has_commodity_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void activity_commodityConfig::clear_has_commodity_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void activity_commodityConfig::clear_commodity_id() {
  commodity_id_ = 0;
  clear_has_commodity_id();
}
inline ::google::protobuf::int32 activity_commodityConfig::commodity_id() const {
  return commodity_id_;
}
inline void activity_commodityConfig::set_commodity_id(::google::protobuf::int32 value) {
  set_has_commodity_id();
  commodity_id_ = value;
}

// optional int32 drop_id = 5;
inline bool activity_commodityConfig::has_drop_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void activity_commodityConfig::set_has_drop_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void activity_commodityConfig::clear_has_drop_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void activity_commodityConfig::clear_drop_id() {
  drop_id_ = 0;
  clear_has_drop_id();
}
inline ::google::protobuf::int32 activity_commodityConfig::drop_id() const {
  return drop_id_;
}
inline void activity_commodityConfig::set_drop_id(::google::protobuf::int32 value) {
  set_has_drop_id();
  drop_id_ = value;
}

// optional int32 act_same_index = 7;
inline bool activity_commodityConfig::has_act_same_index() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void activity_commodityConfig::set_has_act_same_index() {
  _has_bits_[0] |= 0x00000004u;
}
inline void activity_commodityConfig::clear_has_act_same_index() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void activity_commodityConfig::clear_act_same_index() {
  act_same_index_ = 0;
  clear_has_act_same_index();
}
inline ::google::protobuf::int32 activity_commodityConfig::act_same_index() const {
  return act_same_index_;
}
inline void activity_commodityConfig::set_act_same_index(::google::protobuf::int32 value) {
  set_has_act_same_index();
  act_same_index_ = value;
}

// optional int32 id = 1;
inline bool activity_commodityConfig::has_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void activity_commodityConfig::set_has_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void activity_commodityConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void activity_commodityConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 activity_commodityConfig::id() const {
  return id_;
}
inline void activity_commodityConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 drop_condition = 4;
inline bool activity_commodityConfig::has_drop_condition() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void activity_commodityConfig::set_has_drop_condition() {
  _has_bits_[0] |= 0x00000010u;
}
inline void activity_commodityConfig::clear_has_drop_condition() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void activity_commodityConfig::clear_drop_condition() {
  drop_condition_ = 0;
  clear_has_drop_condition();
}
inline ::google::protobuf::int32 activity_commodityConfig::drop_condition() const {
  return drop_condition_;
}
inline void activity_commodityConfig::set_drop_condition(::google::protobuf::int32 value) {
  set_has_drop_condition();
  drop_condition_ = value;
}

// optional int32 activity_type = 6;
inline bool activity_commodityConfig::has_activity_type() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void activity_commodityConfig::set_has_activity_type() {
  _has_bits_[0] |= 0x00000020u;
}
inline void activity_commodityConfig::clear_has_activity_type() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void activity_commodityConfig::clear_activity_type() {
  activity_type_ = 0;
  clear_has_activity_type();
}
inline ::google::protobuf::int32 activity_commodityConfig::activity_type() const {
  return activity_type_;
}
inline void activity_commodityConfig::set_activity_type(::google::protobuf::int32 value) {
  set_has_activity_type();
  activity_type_ = value;
}

// optional int32 activity_id = 2;
inline bool activity_commodityConfig::has_activity_id() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void activity_commodityConfig::set_has_activity_id() {
  _has_bits_[0] |= 0x00000040u;
}
inline void activity_commodityConfig::clear_has_activity_id() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void activity_commodityConfig::clear_activity_id() {
  activity_id_ = 0;
  clear_has_activity_id();
}
inline ::google::protobuf::int32 activity_commodityConfig::activity_id() const {
  return activity_id_;
}
inline void activity_commodityConfig::set_activity_id(::google::protobuf::int32 value) {
  set_has_activity_id();
  activity_id_ = value;
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

#endif  // PROTOBUF_activity_5fcommodityConfig_2eproto__INCLUDED
