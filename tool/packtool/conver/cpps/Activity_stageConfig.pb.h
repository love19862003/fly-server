// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Activity_stageConfig.proto

#ifndef PROTOBUF_Activity_5fstageConfig_2eproto__INCLUDED
#define PROTOBUF_Activity_5fstageConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_Activity_5fstageConfig_2eproto();
void protobuf_AssignDesc_Activity_5fstageConfig_2eproto();
void protobuf_ShutdownFile_Activity_5fstageConfig_2eproto();

class Activity_stageConfig;

// ===================================================================

class Activity_stageConfig : public ::google::protobuf::Message {
 public:
  Activity_stageConfig();
  virtual ~Activity_stageConfig();

  Activity_stageConfig(const Activity_stageConfig& from);

  inline Activity_stageConfig& operator=(const Activity_stageConfig& from) {
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
  static const Activity_stageConfig& default_instance();

  void Swap(Activity_stageConfig* other);

  // implements Message ----------------------------------------------

  Activity_stageConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Activity_stageConfig& from);
  void MergeFrom(const Activity_stageConfig& from);
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

  // optional int32 stage_id_hard = 4;
  inline bool has_stage_id_hard() const;
  inline void clear_stage_id_hard();
  static const int kStageIdHardFieldNumber = 4;
  inline ::google::protobuf::int32 stage_id_hard() const;
  inline void set_stage_id_hard(::google::protobuf::int32 value);

  // optional int32 close_date = 8;
  inline bool has_close_date() const;
  inline void clear_close_date();
  static const int kCloseDateFieldNumber = 8;
  inline ::google::protobuf::int32 close_date() const;
  inline void set_close_date(::google::protobuf::int32 value);

  // optional int32 stage_id_eary = 2;
  inline bool has_stage_id_eary() const;
  inline void clear_stage_id_eary();
  static const int kStageIdEaryFieldNumber = 2;
  inline ::google::protobuf::int32 stage_id_eary() const;
  inline void set_stage_id_eary(::google::protobuf::int32 value);

  // optional int32 open_time = 11;
  inline bool has_open_time() const;
  inline void clear_open_time();
  static const int kOpenTimeFieldNumber = 11;
  inline ::google::protobuf::int32 open_time() const;
  inline void set_open_time(::google::protobuf::int32 value);

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional int32 open_date = 7;
  inline bool has_open_date() const;
  inline void clear_open_date();
  static const int kOpenDateFieldNumber = 7;
  inline ::google::protobuf::int32 open_date() const;
  inline void set_open_date(::google::protobuf::int32 value);

  // optional int32 resource_id = 5;
  inline bool has_resource_id() const;
  inline void clear_resource_id();
  static const int kResourceIdFieldNumber = 5;
  inline ::google::protobuf::int32 resource_id() const;
  inline void set_resource_id(::google::protobuf::int32 value);

  // optional int32 close_time = 12;
  inline bool has_close_time() const;
  inline void clear_close_time();
  static const int kCloseTimeFieldNumber = 12;
  inline ::google::protobuf::int32 close_time() const;
  inline void set_close_time(::google::protobuf::int32 value);

  // repeated int32 week_date = 9;
  inline int week_date_size() const;
  inline void clear_week_date();
  static const int kWeekDateFieldNumber = 9;
  inline ::google::protobuf::int32 week_date(int index) const;
  inline void set_week_date(int index, ::google::protobuf::int32 value);
  inline void add_week_date(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      week_date() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_week_date();

  // optional int32 stage_type = 10;
  inline bool has_stage_type() const;
  inline void clear_stage_type();
  static const int kStageTypeFieldNumber = 10;
  inline ::google::protobuf::int32 stage_type() const;
  inline void set_stage_type(::google::protobuf::int32 value);

  // optional int32 stage_name = 6;
  inline bool has_stage_name() const;
  inline void clear_stage_name();
  static const int kStageNameFieldNumber = 6;
  inline ::google::protobuf::int32 stage_name() const;
  inline void set_stage_name(::google::protobuf::int32 value);

  // optional int32 stage_id_normal = 3;
  inline bool has_stage_id_normal() const;
  inline void clear_stage_id_normal();
  static const int kStageIdNormalFieldNumber = 3;
  inline ::google::protobuf::int32 stage_id_normal() const;
  inline void set_stage_id_normal(::google::protobuf::int32 value);

  // optional string open_week_show = 13;
  inline bool has_open_week_show() const;
  inline void clear_open_week_show();
  static const int kOpenWeekShowFieldNumber = 13;
  inline const ::std::string& open_week_show() const;
  inline void set_open_week_show(const ::std::string& value);
  inline void set_open_week_show(const char* value);
  inline void set_open_week_show(const char* value, size_t size);
  inline ::std::string* mutable_open_week_show();
  inline ::std::string* release_open_week_show();
  inline void set_allocated_open_week_show(::std::string* open_week_show);

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.Activity_stageConfig)
 private:
  inline void set_has_stage_id_hard();
  inline void clear_has_stage_id_hard();
  inline void set_has_close_date();
  inline void clear_has_close_date();
  inline void set_has_stage_id_eary();
  inline void clear_has_stage_id_eary();
  inline void set_has_open_time();
  inline void clear_has_open_time();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_open_date();
  inline void clear_has_open_date();
  inline void set_has_resource_id();
  inline void clear_has_resource_id();
  inline void set_has_close_time();
  inline void clear_has_close_time();
  inline void set_has_stage_type();
  inline void clear_has_stage_type();
  inline void set_has_stage_name();
  inline void clear_has_stage_name();
  inline void set_has_stage_id_normal();
  inline void clear_has_stage_id_normal();
  inline void set_has_open_week_show();
  inline void clear_has_open_week_show();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 stage_id_hard_;
  ::google::protobuf::int32 close_date_;
  ::google::protobuf::int32 stage_id_eary_;
  ::google::protobuf::int32 open_time_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 open_date_;
  ::google::protobuf::int32 resource_id_;
  ::google::protobuf::int32 close_time_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > week_date_;
  ::google::protobuf::int32 stage_type_;
  ::google::protobuf::int32 stage_name_;
  ::std::string* open_week_show_;
  ::google::protobuf::int32 stage_id_normal_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(13 + 31) / 32];

  friend void  protobuf_AddDesc_Activity_5fstageConfig_2eproto();
  friend void protobuf_AssignDesc_Activity_5fstageConfig_2eproto();
  friend void protobuf_ShutdownFile_Activity_5fstageConfig_2eproto();

  void InitAsDefaultInstance();
  static Activity_stageConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// Activity_stageConfig

// optional int32 stage_id_hard = 4;
inline bool Activity_stageConfig::has_stage_id_hard() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Activity_stageConfig::set_has_stage_id_hard() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Activity_stageConfig::clear_has_stage_id_hard() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Activity_stageConfig::clear_stage_id_hard() {
  stage_id_hard_ = 0;
  clear_has_stage_id_hard();
}
inline ::google::protobuf::int32 Activity_stageConfig::stage_id_hard() const {
  return stage_id_hard_;
}
inline void Activity_stageConfig::set_stage_id_hard(::google::protobuf::int32 value) {
  set_has_stage_id_hard();
  stage_id_hard_ = value;
}

// optional int32 close_date = 8;
inline bool Activity_stageConfig::has_close_date() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Activity_stageConfig::set_has_close_date() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Activity_stageConfig::clear_has_close_date() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Activity_stageConfig::clear_close_date() {
  close_date_ = 0;
  clear_has_close_date();
}
inline ::google::protobuf::int32 Activity_stageConfig::close_date() const {
  return close_date_;
}
inline void Activity_stageConfig::set_close_date(::google::protobuf::int32 value) {
  set_has_close_date();
  close_date_ = value;
}

// optional int32 stage_id_eary = 2;
inline bool Activity_stageConfig::has_stage_id_eary() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Activity_stageConfig::set_has_stage_id_eary() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Activity_stageConfig::clear_has_stage_id_eary() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Activity_stageConfig::clear_stage_id_eary() {
  stage_id_eary_ = 0;
  clear_has_stage_id_eary();
}
inline ::google::protobuf::int32 Activity_stageConfig::stage_id_eary() const {
  return stage_id_eary_;
}
inline void Activity_stageConfig::set_stage_id_eary(::google::protobuf::int32 value) {
  set_has_stage_id_eary();
  stage_id_eary_ = value;
}

// optional int32 open_time = 11;
inline bool Activity_stageConfig::has_open_time() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Activity_stageConfig::set_has_open_time() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Activity_stageConfig::clear_has_open_time() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Activity_stageConfig::clear_open_time() {
  open_time_ = 0;
  clear_has_open_time();
}
inline ::google::protobuf::int32 Activity_stageConfig::open_time() const {
  return open_time_;
}
inline void Activity_stageConfig::set_open_time(::google::protobuf::int32 value) {
  set_has_open_time();
  open_time_ = value;
}

// optional int32 id = 1;
inline bool Activity_stageConfig::has_id() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Activity_stageConfig::set_has_id() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Activity_stageConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Activity_stageConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Activity_stageConfig::id() const {
  return id_;
}
inline void Activity_stageConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 open_date = 7;
inline bool Activity_stageConfig::has_open_date() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Activity_stageConfig::set_has_open_date() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Activity_stageConfig::clear_has_open_date() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Activity_stageConfig::clear_open_date() {
  open_date_ = 0;
  clear_has_open_date();
}
inline ::google::protobuf::int32 Activity_stageConfig::open_date() const {
  return open_date_;
}
inline void Activity_stageConfig::set_open_date(::google::protobuf::int32 value) {
  set_has_open_date();
  open_date_ = value;
}

// optional int32 resource_id = 5;
inline bool Activity_stageConfig::has_resource_id() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Activity_stageConfig::set_has_resource_id() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Activity_stageConfig::clear_has_resource_id() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Activity_stageConfig::clear_resource_id() {
  resource_id_ = 0;
  clear_has_resource_id();
}
inline ::google::protobuf::int32 Activity_stageConfig::resource_id() const {
  return resource_id_;
}
inline void Activity_stageConfig::set_resource_id(::google::protobuf::int32 value) {
  set_has_resource_id();
  resource_id_ = value;
}

// optional int32 close_time = 12;
inline bool Activity_stageConfig::has_close_time() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Activity_stageConfig::set_has_close_time() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Activity_stageConfig::clear_has_close_time() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Activity_stageConfig::clear_close_time() {
  close_time_ = 0;
  clear_has_close_time();
}
inline ::google::protobuf::int32 Activity_stageConfig::close_time() const {
  return close_time_;
}
inline void Activity_stageConfig::set_close_time(::google::protobuf::int32 value) {
  set_has_close_time();
  close_time_ = value;
}

// repeated int32 week_date = 9;
inline int Activity_stageConfig::week_date_size() const {
  return week_date_.size();
}
inline void Activity_stageConfig::clear_week_date() {
  week_date_.Clear();
}
inline ::google::protobuf::int32 Activity_stageConfig::week_date(int index) const {
  return week_date_.Get(index);
}
inline void Activity_stageConfig::set_week_date(int index, ::google::protobuf::int32 value) {
  week_date_.Set(index, value);
}
inline void Activity_stageConfig::add_week_date(::google::protobuf::int32 value) {
  week_date_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Activity_stageConfig::week_date() const {
  return week_date_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Activity_stageConfig::mutable_week_date() {
  return &week_date_;
}

// optional int32 stage_type = 10;
inline bool Activity_stageConfig::has_stage_type() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Activity_stageConfig::set_has_stage_type() {
  _has_bits_[0] |= 0x00000200u;
}
inline void Activity_stageConfig::clear_has_stage_type() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void Activity_stageConfig::clear_stage_type() {
  stage_type_ = 0;
  clear_has_stage_type();
}
inline ::google::protobuf::int32 Activity_stageConfig::stage_type() const {
  return stage_type_;
}
inline void Activity_stageConfig::set_stage_type(::google::protobuf::int32 value) {
  set_has_stage_type();
  stage_type_ = value;
}

// optional int32 stage_name = 6;
inline bool Activity_stageConfig::has_stage_name() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void Activity_stageConfig::set_has_stage_name() {
  _has_bits_[0] |= 0x00000400u;
}
inline void Activity_stageConfig::clear_has_stage_name() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void Activity_stageConfig::clear_stage_name() {
  stage_name_ = 0;
  clear_has_stage_name();
}
inline ::google::protobuf::int32 Activity_stageConfig::stage_name() const {
  return stage_name_;
}
inline void Activity_stageConfig::set_stage_name(::google::protobuf::int32 value) {
  set_has_stage_name();
  stage_name_ = value;
}

// optional int32 stage_id_normal = 3;
inline bool Activity_stageConfig::has_stage_id_normal() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void Activity_stageConfig::set_has_stage_id_normal() {
  _has_bits_[0] |= 0x00000800u;
}
inline void Activity_stageConfig::clear_has_stage_id_normal() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void Activity_stageConfig::clear_stage_id_normal() {
  stage_id_normal_ = 0;
  clear_has_stage_id_normal();
}
inline ::google::protobuf::int32 Activity_stageConfig::stage_id_normal() const {
  return stage_id_normal_;
}
inline void Activity_stageConfig::set_stage_id_normal(::google::protobuf::int32 value) {
  set_has_stage_id_normal();
  stage_id_normal_ = value;
}

// optional string open_week_show = 13;
inline bool Activity_stageConfig::has_open_week_show() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void Activity_stageConfig::set_has_open_week_show() {
  _has_bits_[0] |= 0x00001000u;
}
inline void Activity_stageConfig::clear_has_open_week_show() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void Activity_stageConfig::clear_open_week_show() {
  if (open_week_show_ != &::google::protobuf::internal::kEmptyString) {
    open_week_show_->clear();
  }
  clear_has_open_week_show();
}
inline const ::std::string& Activity_stageConfig::open_week_show() const {
  return *open_week_show_;
}
inline void Activity_stageConfig::set_open_week_show(const ::std::string& value) {
  set_has_open_week_show();
  if (open_week_show_ == &::google::protobuf::internal::kEmptyString) {
    open_week_show_ = new ::std::string;
  }
  open_week_show_->assign(value);
}
inline void Activity_stageConfig::set_open_week_show(const char* value) {
  set_has_open_week_show();
  if (open_week_show_ == &::google::protobuf::internal::kEmptyString) {
    open_week_show_ = new ::std::string;
  }
  open_week_show_->assign(value);
}
inline void Activity_stageConfig::set_open_week_show(const char* value, size_t size) {
  set_has_open_week_show();
  if (open_week_show_ == &::google::protobuf::internal::kEmptyString) {
    open_week_show_ = new ::std::string;
  }
  open_week_show_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Activity_stageConfig::mutable_open_week_show() {
  set_has_open_week_show();
  if (open_week_show_ == &::google::protobuf::internal::kEmptyString) {
    open_week_show_ = new ::std::string;
  }
  return open_week_show_;
}
inline ::std::string* Activity_stageConfig::release_open_week_show() {
  clear_has_open_week_show();
  if (open_week_show_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = open_week_show_;
    open_week_show_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Activity_stageConfig::set_allocated_open_week_show(::std::string* open_week_show) {
  if (open_week_show_ != &::google::protobuf::internal::kEmptyString) {
    delete open_week_show_;
  }
  if (open_week_show) {
    set_has_open_week_show();
    open_week_show_ = open_week_show;
  } else {
    clear_has_open_week_show();
    open_week_show_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
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

#endif  // PROTOBUF_Activity_5fstageConfig_2eproto__INCLUDED
