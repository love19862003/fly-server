// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DialogueConfig.proto

#ifndef PROTOBUF_DialogueConfig_2eproto__INCLUDED
#define PROTOBUF_DialogueConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_DialogueConfig_2eproto();
void protobuf_AssignDesc_DialogueConfig_2eproto();
void protobuf_ShutdownFile_DialogueConfig_2eproto();

class DialogueConfig;

// ===================================================================

class DialogueConfig : public ::google::protobuf::Message {
 public:
  DialogueConfig();
  virtual ~DialogueConfig();

  DialogueConfig(const DialogueConfig& from);

  inline DialogueConfig& operator=(const DialogueConfig& from) {
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
  static const DialogueConfig& default_instance();

  void Swap(DialogueConfig* other);

  // implements Message ----------------------------------------------

  DialogueConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DialogueConfig& from);
  void MergeFrom(const DialogueConfig& from);
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

  // optional int32 type = 3;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 3;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional int32 side = 5;
  inline bool has_side() const;
  inline void clear_side();
  static const int kSideFieldNumber = 5;
  inline ::google::protobuf::int32 side() const;
  inline void set_side(::google::protobuf::int32 value);

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional string desc = 9;
  inline bool has_desc() const;
  inline void clear_desc();
  static const int kDescFieldNumber = 9;
  inline const ::std::string& desc() const;
  inline void set_desc(const ::std::string& value);
  inline void set_desc(const char* value);
  inline void set_desc(const char* value, size_t size);
  inline ::std::string* mutable_desc();
  inline ::std::string* release_desc();
  inline void set_allocated_desc(::std::string* desc);

  // optional int32 portrait_pic = 11;
  inline bool has_portrait_pic() const;
  inline void clear_portrait_pic();
  static const int kPortraitPicFieldNumber = 11;
  inline ::google::protobuf::int32 portrait_pic() const;
  inline void set_portrait_pic(::google::protobuf::int32 value);

  // optional string name = 13;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 13;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional int32 card_id = 4;
  inline bool has_card_id() const;
  inline void clear_card_id();
  static const int kCardIdFieldNumber = 4;
  inline ::google::protobuf::int32 card_id() const;
  inline void set_card_id(::google::protobuf::int32 value);

  // optional int32 toward = 12;
  inline bool has_toward() const;
  inline void clear_toward();
  static const int kTowardFieldNumber = 12;
  inline ::google::protobuf::int32 toward() const;
  inline void set_toward(::google::protobuf::int32 value);

  // optional int32 time = 8;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 8;
  inline ::google::protobuf::int32 time() const;
  inline void set_time(::google::protobuf::int32 value);

  // optional int32 direction = 7;
  inline bool has_direction() const;
  inline void clear_direction();
  static const int kDirectionFieldNumber = 7;
  inline ::google::protobuf::int32 direction() const;
  inline void set_direction(::google::protobuf::int32 value);

  // optional int32 order = 6;
  inline bool has_order() const;
  inline void clear_order();
  static const int kOrderFieldNumber = 6;
  inline ::google::protobuf::int32 order() const;
  inline void set_order(::google::protobuf::int32 value);

  // optional int32 stage_id = 2;
  inline bool has_stage_id() const;
  inline void clear_stage_id();
  static const int kStageIdFieldNumber = 2;
  inline ::google::protobuf::int32 stage_id() const;
  inline void set_stage_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.DialogueConfig)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_side();
  inline void clear_has_side();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_desc();
  inline void clear_has_desc();
  inline void set_has_portrait_pic();
  inline void clear_has_portrait_pic();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_card_id();
  inline void clear_has_card_id();
  inline void set_has_toward();
  inline void clear_has_toward();
  inline void set_has_time();
  inline void clear_has_time();
  inline void set_has_direction();
  inline void clear_has_direction();
  inline void set_has_order();
  inline void clear_has_order();
  inline void set_has_stage_id();
  inline void clear_has_stage_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 side_;
  ::std::string* desc_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 portrait_pic_;
  ::std::string* name_;
  ::google::protobuf::int32 card_id_;
  ::google::protobuf::int32 toward_;
  ::google::protobuf::int32 time_;
  ::google::protobuf::int32 direction_;
  ::google::protobuf::int32 order_;
  ::google::protobuf::int32 stage_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(12 + 31) / 32];

  friend void  protobuf_AddDesc_DialogueConfig_2eproto();
  friend void protobuf_AssignDesc_DialogueConfig_2eproto();
  friend void protobuf_ShutdownFile_DialogueConfig_2eproto();

  void InitAsDefaultInstance();
  static DialogueConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// DialogueConfig

// optional int32 type = 3;
inline bool DialogueConfig::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DialogueConfig::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DialogueConfig::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DialogueConfig::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 DialogueConfig::type() const {
  return type_;
}
inline void DialogueConfig::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// optional int32 side = 5;
inline bool DialogueConfig::has_side() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DialogueConfig::set_has_side() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DialogueConfig::clear_has_side() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DialogueConfig::clear_side() {
  side_ = 0;
  clear_has_side();
}
inline ::google::protobuf::int32 DialogueConfig::side() const {
  return side_;
}
inline void DialogueConfig::set_side(::google::protobuf::int32 value) {
  set_has_side();
  side_ = value;
}

// optional int32 id = 1;
inline bool DialogueConfig::has_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DialogueConfig::set_has_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DialogueConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DialogueConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 DialogueConfig::id() const {
  return id_;
}
inline void DialogueConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional string desc = 9;
inline bool DialogueConfig::has_desc() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DialogueConfig::set_has_desc() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DialogueConfig::clear_has_desc() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DialogueConfig::clear_desc() {
  if (desc_ != &::google::protobuf::internal::kEmptyString) {
    desc_->clear();
  }
  clear_has_desc();
}
inline const ::std::string& DialogueConfig::desc() const {
  return *desc_;
}
inline void DialogueConfig::set_desc(const ::std::string& value) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(value);
}
inline void DialogueConfig::set_desc(const char* value) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(value);
}
inline void DialogueConfig::set_desc(const char* value, size_t size) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DialogueConfig::mutable_desc() {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  return desc_;
}
inline ::std::string* DialogueConfig::release_desc() {
  clear_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = desc_;
    desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DialogueConfig::set_allocated_desc(::std::string* desc) {
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

// optional int32 portrait_pic = 11;
inline bool DialogueConfig::has_portrait_pic() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void DialogueConfig::set_has_portrait_pic() {
  _has_bits_[0] |= 0x00000010u;
}
inline void DialogueConfig::clear_has_portrait_pic() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void DialogueConfig::clear_portrait_pic() {
  portrait_pic_ = 0;
  clear_has_portrait_pic();
}
inline ::google::protobuf::int32 DialogueConfig::portrait_pic() const {
  return portrait_pic_;
}
inline void DialogueConfig::set_portrait_pic(::google::protobuf::int32 value) {
  set_has_portrait_pic();
  portrait_pic_ = value;
}

// optional string name = 13;
inline bool DialogueConfig::has_name() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void DialogueConfig::set_has_name() {
  _has_bits_[0] |= 0x00000020u;
}
inline void DialogueConfig::clear_has_name() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void DialogueConfig::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& DialogueConfig::name() const {
  return *name_;
}
inline void DialogueConfig::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void DialogueConfig::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void DialogueConfig::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DialogueConfig::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* DialogueConfig::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DialogueConfig::set_allocated_name(::std::string* name) {
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

// optional int32 card_id = 4;
inline bool DialogueConfig::has_card_id() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void DialogueConfig::set_has_card_id() {
  _has_bits_[0] |= 0x00000040u;
}
inline void DialogueConfig::clear_has_card_id() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void DialogueConfig::clear_card_id() {
  card_id_ = 0;
  clear_has_card_id();
}
inline ::google::protobuf::int32 DialogueConfig::card_id() const {
  return card_id_;
}
inline void DialogueConfig::set_card_id(::google::protobuf::int32 value) {
  set_has_card_id();
  card_id_ = value;
}

// optional int32 toward = 12;
inline bool DialogueConfig::has_toward() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void DialogueConfig::set_has_toward() {
  _has_bits_[0] |= 0x00000080u;
}
inline void DialogueConfig::clear_has_toward() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void DialogueConfig::clear_toward() {
  toward_ = 0;
  clear_has_toward();
}
inline ::google::protobuf::int32 DialogueConfig::toward() const {
  return toward_;
}
inline void DialogueConfig::set_toward(::google::protobuf::int32 value) {
  set_has_toward();
  toward_ = value;
}

// optional int32 time = 8;
inline bool DialogueConfig::has_time() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void DialogueConfig::set_has_time() {
  _has_bits_[0] |= 0x00000100u;
}
inline void DialogueConfig::clear_has_time() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void DialogueConfig::clear_time() {
  time_ = 0;
  clear_has_time();
}
inline ::google::protobuf::int32 DialogueConfig::time() const {
  return time_;
}
inline void DialogueConfig::set_time(::google::protobuf::int32 value) {
  set_has_time();
  time_ = value;
}

// optional int32 direction = 7;
inline bool DialogueConfig::has_direction() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void DialogueConfig::set_has_direction() {
  _has_bits_[0] |= 0x00000200u;
}
inline void DialogueConfig::clear_has_direction() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void DialogueConfig::clear_direction() {
  direction_ = 0;
  clear_has_direction();
}
inline ::google::protobuf::int32 DialogueConfig::direction() const {
  return direction_;
}
inline void DialogueConfig::set_direction(::google::protobuf::int32 value) {
  set_has_direction();
  direction_ = value;
}

// optional int32 order = 6;
inline bool DialogueConfig::has_order() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void DialogueConfig::set_has_order() {
  _has_bits_[0] |= 0x00000400u;
}
inline void DialogueConfig::clear_has_order() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void DialogueConfig::clear_order() {
  order_ = 0;
  clear_has_order();
}
inline ::google::protobuf::int32 DialogueConfig::order() const {
  return order_;
}
inline void DialogueConfig::set_order(::google::protobuf::int32 value) {
  set_has_order();
  order_ = value;
}

// optional int32 stage_id = 2;
inline bool DialogueConfig::has_stage_id() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void DialogueConfig::set_has_stage_id() {
  _has_bits_[0] |= 0x00000800u;
}
inline void DialogueConfig::clear_has_stage_id() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void DialogueConfig::clear_stage_id() {
  stage_id_ = 0;
  clear_has_stage_id();
}
inline ::google::protobuf::int32 DialogueConfig::stage_id() const {
  return stage_id_;
}
inline void DialogueConfig::set_stage_id(::google::protobuf::int32 value) {
  set_has_stage_id();
  stage_id_ = value;
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

#endif  // PROTOBUF_DialogueConfig_2eproto__INCLUDED
