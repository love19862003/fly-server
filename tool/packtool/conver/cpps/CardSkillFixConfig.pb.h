// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CardSkillFixConfig.proto

#ifndef PROTOBUF_CardSkillFixConfig_2eproto__INCLUDED
#define PROTOBUF_CardSkillFixConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_CardSkillFixConfig_2eproto();
void protobuf_AssignDesc_CardSkillFixConfig_2eproto();
void protobuf_ShutdownFile_CardSkillFixConfig_2eproto();

class CardSkillFixConfig;

// ===================================================================

class CardSkillFixConfig : public ::google::protobuf::Message {
 public:
  CardSkillFixConfig();
  virtual ~CardSkillFixConfig();

  CardSkillFixConfig(const CardSkillFixConfig& from);

  inline CardSkillFixConfig& operator=(const CardSkillFixConfig& from) {
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
  static const CardSkillFixConfig& default_instance();

  void Swap(CardSkillFixConfig* other);

  // implements Message ----------------------------------------------

  CardSkillFixConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CardSkillFixConfig& from);
  void MergeFrom(const CardSkillFixConfig& from);
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

  // optional int32 power_add = 4;
  inline bool has_power_add() const;
  inline void clear_power_add();
  static const int kPowerAddFieldNumber = 4;
  inline ::google::protobuf::int32 power_add() const;
  inline void set_power_add(::google::protobuf::int32 value);

  // optional int32 card_max_rank = 2;
  inline bool has_card_max_rank() const;
  inline void clear_card_max_rank();
  static const int kCardMaxRankFieldNumber = 2;
  inline ::google::protobuf::int32 card_max_rank() const;
  inline void set_card_max_rank(::google::protobuf::int32 value);

  // optional int32 fix_value = 3;
  inline bool has_fix_value() const;
  inline void clear_fix_value();
  static const int kFixValueFieldNumber = 3;
  inline ::google::protobuf::int32 fix_value() const;
  inline void set_fix_value(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.CardSkillFixConfig)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_power_add();
  inline void clear_has_power_add();
  inline void set_has_card_max_rank();
  inline void clear_has_card_max_rank();
  inline void set_has_fix_value();
  inline void clear_has_fix_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 power_add_;
  ::google::protobuf::int32 card_max_rank_;
  ::google::protobuf::int32 fix_value_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_CardSkillFixConfig_2eproto();
  friend void protobuf_AssignDesc_CardSkillFixConfig_2eproto();
  friend void protobuf_ShutdownFile_CardSkillFixConfig_2eproto();

  void InitAsDefaultInstance();
  static CardSkillFixConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// CardSkillFixConfig

// optional int32 id = 1;
inline bool CardSkillFixConfig::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CardSkillFixConfig::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CardSkillFixConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CardSkillFixConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 CardSkillFixConfig::id() const {
  return id_;
}
inline void CardSkillFixConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 power_add = 4;
inline bool CardSkillFixConfig::has_power_add() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CardSkillFixConfig::set_has_power_add() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CardSkillFixConfig::clear_has_power_add() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CardSkillFixConfig::clear_power_add() {
  power_add_ = 0;
  clear_has_power_add();
}
inline ::google::protobuf::int32 CardSkillFixConfig::power_add() const {
  return power_add_;
}
inline void CardSkillFixConfig::set_power_add(::google::protobuf::int32 value) {
  set_has_power_add();
  power_add_ = value;
}

// optional int32 card_max_rank = 2;
inline bool CardSkillFixConfig::has_card_max_rank() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CardSkillFixConfig::set_has_card_max_rank() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CardSkillFixConfig::clear_has_card_max_rank() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CardSkillFixConfig::clear_card_max_rank() {
  card_max_rank_ = 0;
  clear_has_card_max_rank();
}
inline ::google::protobuf::int32 CardSkillFixConfig::card_max_rank() const {
  return card_max_rank_;
}
inline void CardSkillFixConfig::set_card_max_rank(::google::protobuf::int32 value) {
  set_has_card_max_rank();
  card_max_rank_ = value;
}

// optional int32 fix_value = 3;
inline bool CardSkillFixConfig::has_fix_value() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CardSkillFixConfig::set_has_fix_value() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CardSkillFixConfig::clear_has_fix_value() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CardSkillFixConfig::clear_fix_value() {
  fix_value_ = 0;
  clear_has_fix_value();
}
inline ::google::protobuf::int32 CardSkillFixConfig::fix_value() const {
  return fix_value_;
}
inline void CardSkillFixConfig::set_fix_value(::google::protobuf::int32 value) {
  set_has_fix_value();
  fix_value_ = value;
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

#endif  // PROTOBUF_CardSkillFixConfig_2eproto__INCLUDED
