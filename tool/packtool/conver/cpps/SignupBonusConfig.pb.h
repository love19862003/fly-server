// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SignupBonusConfig.proto

#ifndef PROTOBUF_SignupBonusConfig_2eproto__INCLUDED
#define PROTOBUF_SignupBonusConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_SignupBonusConfig_2eproto();
void protobuf_AssignDesc_SignupBonusConfig_2eproto();
void protobuf_ShutdownFile_SignupBonusConfig_2eproto();

class SignupBonusConfig;

// ===================================================================

class SignupBonusConfig : public ::google::protobuf::Message {
 public:
  SignupBonusConfig();
  virtual ~SignupBonusConfig();

  SignupBonusConfig(const SignupBonusConfig& from);

  inline SignupBonusConfig& operator=(const SignupBonusConfig& from) {
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
  static const SignupBonusConfig& default_instance();

  void Swap(SignupBonusConfig* other);

  // implements Message ----------------------------------------------

  SignupBonusConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SignupBonusConfig& from);
  void MergeFrom(const SignupBonusConfig& from);
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

  // optional int32 type = 2;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional int32 month = 4;
  inline bool has_month() const;
  inline void clear_month();
  static const int kMonthFieldNumber = 4;
  inline ::google::protobuf::int32 month() const;
  inline void set_month(::google::protobuf::int32 value);

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional int32 effect = 6;
  inline bool has_effect() const;
  inline void clear_effect();
  static const int kEffectFieldNumber = 6;
  inline ::google::protobuf::int32 effect() const;
  inline void set_effect(::google::protobuf::int32 value);

  // optional int32 condition = 3;
  inline bool has_condition() const;
  inline void clear_condition();
  static const int kConditionFieldNumber = 3;
  inline ::google::protobuf::int32 condition() const;
  inline void set_condition(::google::protobuf::int32 value);

  // repeated .DianShiTech.Config.ConfigTypeGroup bonus = 5;
  inline int bonus_size() const;
  inline void clear_bonus();
  static const int kBonusFieldNumber = 5;
  inline const ::DianShiTech::Config::ConfigTypeGroup& bonus(int index) const;
  inline ::DianShiTech::Config::ConfigTypeGroup* mutable_bonus(int index);
  inline ::DianShiTech::Config::ConfigTypeGroup* add_bonus();
  inline const ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >&
      bonus() const;
  inline ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >*
      mutable_bonus();

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.SignupBonusConfig)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_month();
  inline void clear_has_month();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_effect();
  inline void clear_has_effect();
  inline void set_has_condition();
  inline void clear_has_condition();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 month_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 effect_;
  ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup > bonus_;
  ::google::protobuf::int32 condition_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_SignupBonusConfig_2eproto();
  friend void protobuf_AssignDesc_SignupBonusConfig_2eproto();
  friend void protobuf_ShutdownFile_SignupBonusConfig_2eproto();

  void InitAsDefaultInstance();
  static SignupBonusConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// SignupBonusConfig

// optional int32 type = 2;
inline bool SignupBonusConfig::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SignupBonusConfig::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SignupBonusConfig::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SignupBonusConfig::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 SignupBonusConfig::type() const {
  return type_;
}
inline void SignupBonusConfig::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// optional int32 month = 4;
inline bool SignupBonusConfig::has_month() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SignupBonusConfig::set_has_month() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SignupBonusConfig::clear_has_month() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SignupBonusConfig::clear_month() {
  month_ = 0;
  clear_has_month();
}
inline ::google::protobuf::int32 SignupBonusConfig::month() const {
  return month_;
}
inline void SignupBonusConfig::set_month(::google::protobuf::int32 value) {
  set_has_month();
  month_ = value;
}

// optional int32 id = 1;
inline bool SignupBonusConfig::has_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SignupBonusConfig::set_has_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SignupBonusConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SignupBonusConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 SignupBonusConfig::id() const {
  return id_;
}
inline void SignupBonusConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 effect = 6;
inline bool SignupBonusConfig::has_effect() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SignupBonusConfig::set_has_effect() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SignupBonusConfig::clear_has_effect() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SignupBonusConfig::clear_effect() {
  effect_ = 0;
  clear_has_effect();
}
inline ::google::protobuf::int32 SignupBonusConfig::effect() const {
  return effect_;
}
inline void SignupBonusConfig::set_effect(::google::protobuf::int32 value) {
  set_has_effect();
  effect_ = value;
}

// optional int32 condition = 3;
inline bool SignupBonusConfig::has_condition() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SignupBonusConfig::set_has_condition() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SignupBonusConfig::clear_has_condition() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SignupBonusConfig::clear_condition() {
  condition_ = 0;
  clear_has_condition();
}
inline ::google::protobuf::int32 SignupBonusConfig::condition() const {
  return condition_;
}
inline void SignupBonusConfig::set_condition(::google::protobuf::int32 value) {
  set_has_condition();
  condition_ = value;
}

// repeated .DianShiTech.Config.ConfigTypeGroup bonus = 5;
inline int SignupBonusConfig::bonus_size() const {
  return bonus_.size();
}
inline void SignupBonusConfig::clear_bonus() {
  bonus_.Clear();
}
inline const ::DianShiTech::Config::ConfigTypeGroup& SignupBonusConfig::bonus(int index) const {
  return bonus_.Get(index);
}
inline ::DianShiTech::Config::ConfigTypeGroup* SignupBonusConfig::mutable_bonus(int index) {
  return bonus_.Mutable(index);
}
inline ::DianShiTech::Config::ConfigTypeGroup* SignupBonusConfig::add_bonus() {
  return bonus_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >&
SignupBonusConfig::bonus() const {
  return bonus_;
}
inline ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >*
SignupBonusConfig::mutable_bonus() {
  return &bonus_;
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

#endif  // PROTOBUF_SignupBonusConfig_2eproto__INCLUDED
