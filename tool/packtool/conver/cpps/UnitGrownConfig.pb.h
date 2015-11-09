// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UnitGrownConfig.proto

#ifndef PROTOBUF_UnitGrownConfig_2eproto__INCLUDED
#define PROTOBUF_UnitGrownConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_UnitGrownConfig_2eproto();
void protobuf_AssignDesc_UnitGrownConfig_2eproto();
void protobuf_ShutdownFile_UnitGrownConfig_2eproto();

class UnitGrownConfig;

// ===================================================================

class UnitGrownConfig : public ::google::protobuf::Message {
 public:
  UnitGrownConfig();
  virtual ~UnitGrownConfig();

  UnitGrownConfig(const UnitGrownConfig& from);

  inline UnitGrownConfig& operator=(const UnitGrownConfig& from) {
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
  static const UnitGrownConfig& default_instance();

  void Swap(UnitGrownConfig* other);

  // implements Message ----------------------------------------------

  UnitGrownConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UnitGrownConfig& from);
  void MergeFrom(const UnitGrownConfig& from);
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

  // optional int32 str_grown = 2;
  inline bool has_str_grown() const;
  inline void clear_str_grown();
  static const int kStrGrownFieldNumber = 2;
  inline ::google::protobuf::int32 str_grown() const;
  inline void set_str_grown(::google::protobuf::int32 value);

  // optional int32 int_grown = 3;
  inline bool has_int_grown() const;
  inline void clear_int_grown();
  static const int kIntGrownFieldNumber = 3;
  inline ::google::protobuf::int32 int_grown() const;
  inline void set_int_grown(::google::protobuf::int32 value);

  // optional int32 dom_grown = 4;
  inline bool has_dom_grown() const;
  inline void clear_dom_grown();
  static const int kDomGrownFieldNumber = 4;
  inline ::google::protobuf::int32 dom_grown() const;
  inline void set_dom_grown(::google::protobuf::int32 value);

  // optional int32 toughness = 8;
  inline bool has_toughness() const;
  inline void clear_toughness();
  static const int kToughnessFieldNumber = 8;
  inline ::google::protobuf::int32 toughness() const;
  inline void set_toughness(::google::protobuf::int32 value);

  // optional int32 evade = 5;
  inline bool has_evade() const;
  inline void clear_evade();
  static const int kEvadeFieldNumber = 5;
  inline ::google::protobuf::int32 evade() const;
  inline void set_evade(::google::protobuf::int32 value);

  // optional int32 heal_percent = 15;
  inline bool has_heal_percent() const;
  inline void clear_heal_percent();
  static const int kHealPercentFieldNumber = 15;
  inline ::google::protobuf::int32 heal_percent() const;
  inline void set_heal_percent(::google::protobuf::int32 value);

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional int32 damage_reduce = 11;
  inline bool has_damage_reduce() const;
  inline void clear_damage_reduce();
  static const int kDamageReduceFieldNumber = 11;
  inline ::google::protobuf::int32 damage_reduce() const;
  inline void set_damage_reduce(::google::protobuf::int32 value);

  // repeated int32 recommend_attribute = 16;
  inline int recommend_attribute_size() const;
  inline void clear_recommend_attribute();
  static const int kRecommendAttributeFieldNumber = 16;
  inline ::google::protobuf::int32 recommend_attribute(int index) const;
  inline void set_recommend_attribute(int index, ::google::protobuf::int32 value);
  inline void add_recommend_attribute(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      recommend_attribute() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_recommend_attribute();

  // optional int32 hp_steal_fix = 14;
  inline bool has_hp_steal_fix() const;
  inline void clear_hp_steal_fix();
  static const int kHpStealFixFieldNumber = 14;
  inline ::google::protobuf::int32 hp_steal_fix() const;
  inline void set_hp_steal_fix(::google::protobuf::int32 value);

  // optional int32 reflect_fix = 13;
  inline bool has_reflect_fix() const;
  inline void clear_reflect_fix();
  static const int kReflectFixFieldNumber = 13;
  inline ::google::protobuf::int32 reflect_fix() const;
  inline void set_reflect_fix(::google::protobuf::int32 value);

  // optional int32 damage_increase = 12;
  inline bool has_damage_increase() const;
  inline void clear_damage_increase();
  static const int kDamageIncreaseFieldNumber = 12;
  inline ::google::protobuf::int32 damage_increase() const;
  inline void set_damage_increase(::google::protobuf::int32 value);

  // optional int32 hit = 6;
  inline bool has_hit() const;
  inline void clear_hit();
  static const int kHitFieldNumber = 6;
  inline ::google::protobuf::int32 hit() const;
  inline void set_hit(::google::protobuf::int32 value);

  // optional int32 location = 17;
  inline bool has_location() const;
  inline void clear_location();
  static const int kLocationFieldNumber = 17;
  inline ::google::protobuf::int32 location() const;
  inline void set_location(::google::protobuf::int32 value);

  // optional int32 precision = 10;
  inline bool has_precision() const;
  inline void clear_precision();
  static const int kPrecisionFieldNumber = 10;
  inline ::google::protobuf::int32 precision() const;
  inline void set_precision(::google::protobuf::int32 value);

  // optional int32 block = 9;
  inline bool has_block() const;
  inline void clear_block();
  static const int kBlockFieldNumber = 9;
  inline ::google::protobuf::int32 block() const;
  inline void set_block(::google::protobuf::int32 value);

  // optional int32 cri = 7;
  inline bool has_cri() const;
  inline void clear_cri();
  static const int kCriFieldNumber = 7;
  inline ::google::protobuf::int32 cri() const;
  inline void set_cri(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.UnitGrownConfig)
 private:
  inline void set_has_str_grown();
  inline void clear_has_str_grown();
  inline void set_has_int_grown();
  inline void clear_has_int_grown();
  inline void set_has_dom_grown();
  inline void clear_has_dom_grown();
  inline void set_has_toughness();
  inline void clear_has_toughness();
  inline void set_has_evade();
  inline void clear_has_evade();
  inline void set_has_heal_percent();
  inline void clear_has_heal_percent();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_damage_reduce();
  inline void clear_has_damage_reduce();
  inline void set_has_hp_steal_fix();
  inline void clear_has_hp_steal_fix();
  inline void set_has_reflect_fix();
  inline void clear_has_reflect_fix();
  inline void set_has_damage_increase();
  inline void clear_has_damage_increase();
  inline void set_has_hit();
  inline void clear_has_hit();
  inline void set_has_location();
  inline void clear_has_location();
  inline void set_has_precision();
  inline void clear_has_precision();
  inline void set_has_block();
  inline void clear_has_block();
  inline void set_has_cri();
  inline void clear_has_cri();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 str_grown_;
  ::google::protobuf::int32 int_grown_;
  ::google::protobuf::int32 dom_grown_;
  ::google::protobuf::int32 toughness_;
  ::google::protobuf::int32 evade_;
  ::google::protobuf::int32 heal_percent_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 damage_reduce_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > recommend_attribute_;
  ::google::protobuf::int32 hp_steal_fix_;
  ::google::protobuf::int32 reflect_fix_;
  ::google::protobuf::int32 damage_increase_;
  ::google::protobuf::int32 hit_;
  ::google::protobuf::int32 location_;
  ::google::protobuf::int32 precision_;
  ::google::protobuf::int32 block_;
  ::google::protobuf::int32 cri_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(17 + 31) / 32];

  friend void  protobuf_AddDesc_UnitGrownConfig_2eproto();
  friend void protobuf_AssignDesc_UnitGrownConfig_2eproto();
  friend void protobuf_ShutdownFile_UnitGrownConfig_2eproto();

  void InitAsDefaultInstance();
  static UnitGrownConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// UnitGrownConfig

// optional int32 str_grown = 2;
inline bool UnitGrownConfig::has_str_grown() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UnitGrownConfig::set_has_str_grown() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UnitGrownConfig::clear_has_str_grown() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UnitGrownConfig::clear_str_grown() {
  str_grown_ = 0;
  clear_has_str_grown();
}
inline ::google::protobuf::int32 UnitGrownConfig::str_grown() const {
  return str_grown_;
}
inline void UnitGrownConfig::set_str_grown(::google::protobuf::int32 value) {
  set_has_str_grown();
  str_grown_ = value;
}

// optional int32 int_grown = 3;
inline bool UnitGrownConfig::has_int_grown() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UnitGrownConfig::set_has_int_grown() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UnitGrownConfig::clear_has_int_grown() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UnitGrownConfig::clear_int_grown() {
  int_grown_ = 0;
  clear_has_int_grown();
}
inline ::google::protobuf::int32 UnitGrownConfig::int_grown() const {
  return int_grown_;
}
inline void UnitGrownConfig::set_int_grown(::google::protobuf::int32 value) {
  set_has_int_grown();
  int_grown_ = value;
}

// optional int32 dom_grown = 4;
inline bool UnitGrownConfig::has_dom_grown() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UnitGrownConfig::set_has_dom_grown() {
  _has_bits_[0] |= 0x00000004u;
}
inline void UnitGrownConfig::clear_has_dom_grown() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void UnitGrownConfig::clear_dom_grown() {
  dom_grown_ = 0;
  clear_has_dom_grown();
}
inline ::google::protobuf::int32 UnitGrownConfig::dom_grown() const {
  return dom_grown_;
}
inline void UnitGrownConfig::set_dom_grown(::google::protobuf::int32 value) {
  set_has_dom_grown();
  dom_grown_ = value;
}

// optional int32 toughness = 8;
inline bool UnitGrownConfig::has_toughness() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void UnitGrownConfig::set_has_toughness() {
  _has_bits_[0] |= 0x00000008u;
}
inline void UnitGrownConfig::clear_has_toughness() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void UnitGrownConfig::clear_toughness() {
  toughness_ = 0;
  clear_has_toughness();
}
inline ::google::protobuf::int32 UnitGrownConfig::toughness() const {
  return toughness_;
}
inline void UnitGrownConfig::set_toughness(::google::protobuf::int32 value) {
  set_has_toughness();
  toughness_ = value;
}

// optional int32 evade = 5;
inline bool UnitGrownConfig::has_evade() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void UnitGrownConfig::set_has_evade() {
  _has_bits_[0] |= 0x00000010u;
}
inline void UnitGrownConfig::clear_has_evade() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void UnitGrownConfig::clear_evade() {
  evade_ = 0;
  clear_has_evade();
}
inline ::google::protobuf::int32 UnitGrownConfig::evade() const {
  return evade_;
}
inline void UnitGrownConfig::set_evade(::google::protobuf::int32 value) {
  set_has_evade();
  evade_ = value;
}

// optional int32 heal_percent = 15;
inline bool UnitGrownConfig::has_heal_percent() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void UnitGrownConfig::set_has_heal_percent() {
  _has_bits_[0] |= 0x00000020u;
}
inline void UnitGrownConfig::clear_has_heal_percent() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void UnitGrownConfig::clear_heal_percent() {
  heal_percent_ = 0;
  clear_has_heal_percent();
}
inline ::google::protobuf::int32 UnitGrownConfig::heal_percent() const {
  return heal_percent_;
}
inline void UnitGrownConfig::set_heal_percent(::google::protobuf::int32 value) {
  set_has_heal_percent();
  heal_percent_ = value;
}

// optional int32 id = 1;
inline bool UnitGrownConfig::has_id() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void UnitGrownConfig::set_has_id() {
  _has_bits_[0] |= 0x00000040u;
}
inline void UnitGrownConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void UnitGrownConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 UnitGrownConfig::id() const {
  return id_;
}
inline void UnitGrownConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 damage_reduce = 11;
inline bool UnitGrownConfig::has_damage_reduce() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void UnitGrownConfig::set_has_damage_reduce() {
  _has_bits_[0] |= 0x00000080u;
}
inline void UnitGrownConfig::clear_has_damage_reduce() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void UnitGrownConfig::clear_damage_reduce() {
  damage_reduce_ = 0;
  clear_has_damage_reduce();
}
inline ::google::protobuf::int32 UnitGrownConfig::damage_reduce() const {
  return damage_reduce_;
}
inline void UnitGrownConfig::set_damage_reduce(::google::protobuf::int32 value) {
  set_has_damage_reduce();
  damage_reduce_ = value;
}

// repeated int32 recommend_attribute = 16;
inline int UnitGrownConfig::recommend_attribute_size() const {
  return recommend_attribute_.size();
}
inline void UnitGrownConfig::clear_recommend_attribute() {
  recommend_attribute_.Clear();
}
inline ::google::protobuf::int32 UnitGrownConfig::recommend_attribute(int index) const {
  return recommend_attribute_.Get(index);
}
inline void UnitGrownConfig::set_recommend_attribute(int index, ::google::protobuf::int32 value) {
  recommend_attribute_.Set(index, value);
}
inline void UnitGrownConfig::add_recommend_attribute(::google::protobuf::int32 value) {
  recommend_attribute_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
UnitGrownConfig::recommend_attribute() const {
  return recommend_attribute_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
UnitGrownConfig::mutable_recommend_attribute() {
  return &recommend_attribute_;
}

// optional int32 hp_steal_fix = 14;
inline bool UnitGrownConfig::has_hp_steal_fix() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void UnitGrownConfig::set_has_hp_steal_fix() {
  _has_bits_[0] |= 0x00000200u;
}
inline void UnitGrownConfig::clear_has_hp_steal_fix() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void UnitGrownConfig::clear_hp_steal_fix() {
  hp_steal_fix_ = 0;
  clear_has_hp_steal_fix();
}
inline ::google::protobuf::int32 UnitGrownConfig::hp_steal_fix() const {
  return hp_steal_fix_;
}
inline void UnitGrownConfig::set_hp_steal_fix(::google::protobuf::int32 value) {
  set_has_hp_steal_fix();
  hp_steal_fix_ = value;
}

// optional int32 reflect_fix = 13;
inline bool UnitGrownConfig::has_reflect_fix() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void UnitGrownConfig::set_has_reflect_fix() {
  _has_bits_[0] |= 0x00000400u;
}
inline void UnitGrownConfig::clear_has_reflect_fix() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void UnitGrownConfig::clear_reflect_fix() {
  reflect_fix_ = 0;
  clear_has_reflect_fix();
}
inline ::google::protobuf::int32 UnitGrownConfig::reflect_fix() const {
  return reflect_fix_;
}
inline void UnitGrownConfig::set_reflect_fix(::google::protobuf::int32 value) {
  set_has_reflect_fix();
  reflect_fix_ = value;
}

// optional int32 damage_increase = 12;
inline bool UnitGrownConfig::has_damage_increase() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void UnitGrownConfig::set_has_damage_increase() {
  _has_bits_[0] |= 0x00000800u;
}
inline void UnitGrownConfig::clear_has_damage_increase() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void UnitGrownConfig::clear_damage_increase() {
  damage_increase_ = 0;
  clear_has_damage_increase();
}
inline ::google::protobuf::int32 UnitGrownConfig::damage_increase() const {
  return damage_increase_;
}
inline void UnitGrownConfig::set_damage_increase(::google::protobuf::int32 value) {
  set_has_damage_increase();
  damage_increase_ = value;
}

// optional int32 hit = 6;
inline bool UnitGrownConfig::has_hit() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void UnitGrownConfig::set_has_hit() {
  _has_bits_[0] |= 0x00001000u;
}
inline void UnitGrownConfig::clear_has_hit() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void UnitGrownConfig::clear_hit() {
  hit_ = 0;
  clear_has_hit();
}
inline ::google::protobuf::int32 UnitGrownConfig::hit() const {
  return hit_;
}
inline void UnitGrownConfig::set_hit(::google::protobuf::int32 value) {
  set_has_hit();
  hit_ = value;
}

// optional int32 location = 17;
inline bool UnitGrownConfig::has_location() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void UnitGrownConfig::set_has_location() {
  _has_bits_[0] |= 0x00002000u;
}
inline void UnitGrownConfig::clear_has_location() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void UnitGrownConfig::clear_location() {
  location_ = 0;
  clear_has_location();
}
inline ::google::protobuf::int32 UnitGrownConfig::location() const {
  return location_;
}
inline void UnitGrownConfig::set_location(::google::protobuf::int32 value) {
  set_has_location();
  location_ = value;
}

// optional int32 precision = 10;
inline bool UnitGrownConfig::has_precision() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void UnitGrownConfig::set_has_precision() {
  _has_bits_[0] |= 0x00004000u;
}
inline void UnitGrownConfig::clear_has_precision() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void UnitGrownConfig::clear_precision() {
  precision_ = 0;
  clear_has_precision();
}
inline ::google::protobuf::int32 UnitGrownConfig::precision() const {
  return precision_;
}
inline void UnitGrownConfig::set_precision(::google::protobuf::int32 value) {
  set_has_precision();
  precision_ = value;
}

// optional int32 block = 9;
inline bool UnitGrownConfig::has_block() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void UnitGrownConfig::set_has_block() {
  _has_bits_[0] |= 0x00008000u;
}
inline void UnitGrownConfig::clear_has_block() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void UnitGrownConfig::clear_block() {
  block_ = 0;
  clear_has_block();
}
inline ::google::protobuf::int32 UnitGrownConfig::block() const {
  return block_;
}
inline void UnitGrownConfig::set_block(::google::protobuf::int32 value) {
  set_has_block();
  block_ = value;
}

// optional int32 cri = 7;
inline bool UnitGrownConfig::has_cri() const {
  return (_has_bits_[0] & 0x00010000u) != 0;
}
inline void UnitGrownConfig::set_has_cri() {
  _has_bits_[0] |= 0x00010000u;
}
inline void UnitGrownConfig::clear_has_cri() {
  _has_bits_[0] &= ~0x00010000u;
}
inline void UnitGrownConfig::clear_cri() {
  cri_ = 0;
  clear_has_cri();
}
inline ::google::protobuf::int32 UnitGrownConfig::cri() const {
  return cri_;
}
inline void UnitGrownConfig::set_cri(::google::protobuf::int32 value) {
  set_has_cri();
  cri_ = value;
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

#endif  // PROTOBUF_UnitGrownConfig_2eproto__INCLUDED
