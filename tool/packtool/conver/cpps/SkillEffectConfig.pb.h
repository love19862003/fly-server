// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SkillEffectConfig.proto

#ifndef PROTOBUF_SkillEffectConfig_2eproto__INCLUDED
#define PROTOBUF_SkillEffectConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_SkillEffectConfig_2eproto();
void protobuf_AssignDesc_SkillEffectConfig_2eproto();
void protobuf_ShutdownFile_SkillEffectConfig_2eproto();

class SkillEffectConfig;

// ===================================================================

class SkillEffectConfig : public ::google::protobuf::Message {
 public:
  SkillEffectConfig();
  virtual ~SkillEffectConfig();

  SkillEffectConfig(const SkillEffectConfig& from);

  inline SkillEffectConfig& operator=(const SkillEffectConfig& from) {
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
  static const SkillEffectConfig& default_instance();

  void Swap(SkillEffectConfig* other);

  // implements Message ----------------------------------------------

  SkillEffectConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SkillEffectConfig& from);
  void MergeFrom(const SkillEffectConfig& from);
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

  // optional int32 is_src_flip_y = 7;
  inline bool has_is_src_flip_y() const;
  inline void clear_is_src_flip_y();
  static const int kIsSrcFlipYFieldNumber = 7;
  inline ::google::protobuf::int32 is_src_flip_y() const;
  inline void set_is_src_flip_y(::google::protobuf::int32 value);

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional int32 selft_effect_time = 3;
  inline bool has_selft_effect_time() const;
  inline void clear_selft_effect_time();
  static const int kSelftEffectTimeFieldNumber = 3;
  inline ::google::protobuf::int32 selft_effect_time() const;
  inline void set_selft_effect_time(::google::protobuf::int32 value);

  // optional int32 target_effect_time = 6;
  inline bool has_target_effect_time() const;
  inline void clear_target_effect_time();
  static const int kTargetEffectTimeFieldNumber = 6;
  inline ::google::protobuf::int32 target_effect_time() const;
  inline void set_target_effect_time(::google::protobuf::int32 value);

  // optional int32 is_dst_flip_y = 8;
  inline bool has_is_dst_flip_y() const;
  inline void clear_is_dst_flip_y();
  static const int kIsDstFlipYFieldNumber = 8;
  inline ::google::protobuf::int32 is_dst_flip_y() const;
  inline void set_is_dst_flip_y(::google::protobuf::int32 value);

  // optional int32 is_shake = 9;
  inline bool has_is_shake() const;
  inline void clear_is_shake();
  static const int kIsShakeFieldNumber = 9;
  inline ::google::protobuf::int32 is_shake() const;
  inline void set_is_shake(::google::protobuf::int32 value);

  // optional int32 self_effect = 2;
  inline bool has_self_effect() const;
  inline void clear_self_effect();
  static const int kSelfEffectFieldNumber = 2;
  inline ::google::protobuf::int32 self_effect() const;
  inline void set_self_effect(::google::protobuf::int32 value);

  // optional int32 target_effect = 4;
  inline bool has_target_effect() const;
  inline void clear_target_effect();
  static const int kTargetEffectFieldNumber = 4;
  inline ::google::protobuf::int32 target_effect() const;
  inline void set_target_effect(::google::protobuf::int32 value);

  // optional int32 damage_times = 10;
  inline bool has_damage_times() const;
  inline void clear_damage_times();
  static const int kDamageTimesFieldNumber = 10;
  inline ::google::protobuf::int32 damage_times() const;
  inline void set_damage_times(::google::protobuf::int32 value);

  // optional int32 sound_effect = 11;
  inline bool has_sound_effect() const;
  inline void clear_sound_effect();
  static const int kSoundEffectFieldNumber = 11;
  inline ::google::protobuf::int32 sound_effect() const;
  inline void set_sound_effect(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.SkillEffectConfig)
 private:
  inline void set_has_is_src_flip_y();
  inline void clear_has_is_src_flip_y();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_selft_effect_time();
  inline void clear_has_selft_effect_time();
  inline void set_has_target_effect_time();
  inline void clear_has_target_effect_time();
  inline void set_has_is_dst_flip_y();
  inline void clear_has_is_dst_flip_y();
  inline void set_has_is_shake();
  inline void clear_has_is_shake();
  inline void set_has_self_effect();
  inline void clear_has_self_effect();
  inline void set_has_target_effect();
  inline void clear_has_target_effect();
  inline void set_has_damage_times();
  inline void clear_has_damage_times();
  inline void set_has_sound_effect();
  inline void clear_has_sound_effect();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 is_src_flip_y_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 selft_effect_time_;
  ::google::protobuf::int32 target_effect_time_;
  ::google::protobuf::int32 is_dst_flip_y_;
  ::google::protobuf::int32 is_shake_;
  ::google::protobuf::int32 self_effect_;
  ::google::protobuf::int32 target_effect_;
  ::google::protobuf::int32 damage_times_;
  ::google::protobuf::int32 sound_effect_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(10 + 31) / 32];

  friend void  protobuf_AddDesc_SkillEffectConfig_2eproto();
  friend void protobuf_AssignDesc_SkillEffectConfig_2eproto();
  friend void protobuf_ShutdownFile_SkillEffectConfig_2eproto();

  void InitAsDefaultInstance();
  static SkillEffectConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// SkillEffectConfig

// optional int32 is_src_flip_y = 7;
inline bool SkillEffectConfig::has_is_src_flip_y() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SkillEffectConfig::set_has_is_src_flip_y() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SkillEffectConfig::clear_has_is_src_flip_y() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SkillEffectConfig::clear_is_src_flip_y() {
  is_src_flip_y_ = 0;
  clear_has_is_src_flip_y();
}
inline ::google::protobuf::int32 SkillEffectConfig::is_src_flip_y() const {
  return is_src_flip_y_;
}
inline void SkillEffectConfig::set_is_src_flip_y(::google::protobuf::int32 value) {
  set_has_is_src_flip_y();
  is_src_flip_y_ = value;
}

// optional int32 id = 1;
inline bool SkillEffectConfig::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SkillEffectConfig::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SkillEffectConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SkillEffectConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 SkillEffectConfig::id() const {
  return id_;
}
inline void SkillEffectConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 selft_effect_time = 3;
inline bool SkillEffectConfig::has_selft_effect_time() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SkillEffectConfig::set_has_selft_effect_time() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SkillEffectConfig::clear_has_selft_effect_time() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SkillEffectConfig::clear_selft_effect_time() {
  selft_effect_time_ = 0;
  clear_has_selft_effect_time();
}
inline ::google::protobuf::int32 SkillEffectConfig::selft_effect_time() const {
  return selft_effect_time_;
}
inline void SkillEffectConfig::set_selft_effect_time(::google::protobuf::int32 value) {
  set_has_selft_effect_time();
  selft_effect_time_ = value;
}

// optional int32 target_effect_time = 6;
inline bool SkillEffectConfig::has_target_effect_time() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SkillEffectConfig::set_has_target_effect_time() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SkillEffectConfig::clear_has_target_effect_time() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SkillEffectConfig::clear_target_effect_time() {
  target_effect_time_ = 0;
  clear_has_target_effect_time();
}
inline ::google::protobuf::int32 SkillEffectConfig::target_effect_time() const {
  return target_effect_time_;
}
inline void SkillEffectConfig::set_target_effect_time(::google::protobuf::int32 value) {
  set_has_target_effect_time();
  target_effect_time_ = value;
}

// optional int32 is_dst_flip_y = 8;
inline bool SkillEffectConfig::has_is_dst_flip_y() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SkillEffectConfig::set_has_is_dst_flip_y() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SkillEffectConfig::clear_has_is_dst_flip_y() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SkillEffectConfig::clear_is_dst_flip_y() {
  is_dst_flip_y_ = 0;
  clear_has_is_dst_flip_y();
}
inline ::google::protobuf::int32 SkillEffectConfig::is_dst_flip_y() const {
  return is_dst_flip_y_;
}
inline void SkillEffectConfig::set_is_dst_flip_y(::google::protobuf::int32 value) {
  set_has_is_dst_flip_y();
  is_dst_flip_y_ = value;
}

// optional int32 is_shake = 9;
inline bool SkillEffectConfig::has_is_shake() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SkillEffectConfig::set_has_is_shake() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SkillEffectConfig::clear_has_is_shake() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SkillEffectConfig::clear_is_shake() {
  is_shake_ = 0;
  clear_has_is_shake();
}
inline ::google::protobuf::int32 SkillEffectConfig::is_shake() const {
  return is_shake_;
}
inline void SkillEffectConfig::set_is_shake(::google::protobuf::int32 value) {
  set_has_is_shake();
  is_shake_ = value;
}

// optional int32 self_effect = 2;
inline bool SkillEffectConfig::has_self_effect() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SkillEffectConfig::set_has_self_effect() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SkillEffectConfig::clear_has_self_effect() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SkillEffectConfig::clear_self_effect() {
  self_effect_ = 0;
  clear_has_self_effect();
}
inline ::google::protobuf::int32 SkillEffectConfig::self_effect() const {
  return self_effect_;
}
inline void SkillEffectConfig::set_self_effect(::google::protobuf::int32 value) {
  set_has_self_effect();
  self_effect_ = value;
}

// optional int32 target_effect = 4;
inline bool SkillEffectConfig::has_target_effect() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void SkillEffectConfig::set_has_target_effect() {
  _has_bits_[0] |= 0x00000080u;
}
inline void SkillEffectConfig::clear_has_target_effect() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void SkillEffectConfig::clear_target_effect() {
  target_effect_ = 0;
  clear_has_target_effect();
}
inline ::google::protobuf::int32 SkillEffectConfig::target_effect() const {
  return target_effect_;
}
inline void SkillEffectConfig::set_target_effect(::google::protobuf::int32 value) {
  set_has_target_effect();
  target_effect_ = value;
}

// optional int32 damage_times = 10;
inline bool SkillEffectConfig::has_damage_times() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void SkillEffectConfig::set_has_damage_times() {
  _has_bits_[0] |= 0x00000100u;
}
inline void SkillEffectConfig::clear_has_damage_times() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void SkillEffectConfig::clear_damage_times() {
  damage_times_ = 0;
  clear_has_damage_times();
}
inline ::google::protobuf::int32 SkillEffectConfig::damage_times() const {
  return damage_times_;
}
inline void SkillEffectConfig::set_damage_times(::google::protobuf::int32 value) {
  set_has_damage_times();
  damage_times_ = value;
}

// optional int32 sound_effect = 11;
inline bool SkillEffectConfig::has_sound_effect() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void SkillEffectConfig::set_has_sound_effect() {
  _has_bits_[0] |= 0x00000200u;
}
inline void SkillEffectConfig::clear_has_sound_effect() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void SkillEffectConfig::clear_sound_effect() {
  sound_effect_ = 0;
  clear_has_sound_effect();
}
inline ::google::protobuf::int32 SkillEffectConfig::sound_effect() const {
  return sound_effect_;
}
inline void SkillEffectConfig::set_sound_effect(::google::protobuf::int32 value) {
  set_has_sound_effect();
  sound_effect_ = value;
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

#endif  // PROTOBUF_SkillEffectConfig_2eproto__INCLUDED
