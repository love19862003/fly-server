// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: storeConfig.proto

#ifndef PROTOBUF_storeConfig_2eproto__INCLUDED
#define PROTOBUF_storeConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_storeConfig_2eproto();
void protobuf_AssignDesc_storeConfig_2eproto();
void protobuf_ShutdownFile_storeConfig_2eproto();

class storeConfig;

// ===================================================================

class storeConfig : public ::google::protobuf::Message {
 public:
  storeConfig();
  virtual ~storeConfig();

  storeConfig(const storeConfig& from);

  inline storeConfig& operator=(const storeConfig& from) {
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
  static const storeConfig& default_instance();

  void Swap(storeConfig* other);

  // implements Message ----------------------------------------------

  storeConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const storeConfig& from);
  void MergeFrom(const storeConfig& from);
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

  // optional int32 refresh_type = 14;
  inline bool has_refresh_type() const;
  inline void clear_refresh_type();
  static const int kRefreshTypeFieldNumber = 14;
  inline ::google::protobuf::int32 refresh_type() const;
  inline void set_refresh_type(::google::protobuf::int32 value);

  // optional int32 show_count = 12;
  inline bool has_show_count() const;
  inline void clear_show_count();
  static const int kShowCountFieldNumber = 12;
  inline ::google::protobuf::int32 show_count() const;
  inline void set_show_count(::google::protobuf::int32 value);

  // repeated int32 open_time = 4;
  inline int open_time_size() const;
  inline void clear_open_time();
  static const int kOpenTimeFieldNumber = 4;
  inline ::google::protobuf::int32 open_time(int index) const;
  inline void set_open_time(int index, ::google::protobuf::int32 value);
  inline void add_open_time(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      open_time() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_open_time();

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional int32 keep_time = 5;
  inline bool has_keep_time() const;
  inline void clear_keep_time();
  static const int kKeepTimeFieldNumber = 5;
  inline ::google::protobuf::int32 keep_time() const;
  inline void set_keep_time(::google::protobuf::int32 value);

  // optional int32 enable_vip = 13;
  inline bool has_enable_vip() const;
  inline void clear_enable_vip();
  static const int kEnableVipFieldNumber = 13;
  inline ::google::protobuf::int32 enable_vip() const;
  inline void set_enable_vip(::google::protobuf::int32 value);

  // optional int32 drop_count = 11;
  inline bool has_drop_count() const;
  inline void clear_drop_count();
  static const int kDropCountFieldNumber = 11;
  inline ::google::protobuf::int32 drop_count() const;
  inline void set_drop_count(::google::protobuf::int32 value);

  // optional int32 momey_refresh_cost = 9;
  inline bool has_momey_refresh_cost() const;
  inline void clear_momey_refresh_cost();
  static const int kMomeyRefreshCostFieldNumber = 9;
  inline ::google::protobuf::int32 momey_refresh_cost() const;
  inline void set_momey_refresh_cost(::google::protobuf::int32 value);

  // optional int32 refresh_time = 10;
  inline bool has_refresh_time() const;
  inline void clear_refresh_time();
  static const int kRefreshTimeFieldNumber = 10;
  inline ::google::protobuf::int32 refresh_time() const;
  inline void set_refresh_time(::google::protobuf::int32 value);

  // optional int32 vip_daily_limit = 7;
  inline bool has_vip_daily_limit() const;
  inline void clear_vip_daily_limit();
  static const int kVipDailyLimitFieldNumber = 7;
  inline ::google::protobuf::int32 vip_daily_limit() const;
  inline void set_vip_daily_limit(::google::protobuf::int32 value);

  // optional int32 money_refresh_count = 8;
  inline bool has_money_refresh_count() const;
  inline void clear_money_refresh_count();
  static const int kMoneyRefreshCountFieldNumber = 8;
  inline ::google::protobuf::int32 money_refresh_count() const;
  inline void set_money_refresh_count(::google::protobuf::int32 value);

  // optional int32 allow_refresh = 6;
  inline bool has_allow_refresh() const;
  inline void clear_allow_refresh();
  static const int kAllowRefreshFieldNumber = 6;
  inline ::google::protobuf::int32 allow_refresh() const;
  inline void set_allow_refresh(::google::protobuf::int32 value);

  // optional int32 store_type = 3;
  inline bool has_store_type() const;
  inline void clear_store_type();
  static const int kStoreTypeFieldNumber = 3;
  inline ::google::protobuf::int32 store_type() const;
  inline void set_store_type(::google::protobuf::int32 value);

  // optional int32 vip_lv = 2;
  inline bool has_vip_lv() const;
  inline void clear_vip_lv();
  static const int kVipLvFieldNumber = 2;
  inline ::google::protobuf::int32 vip_lv() const;
  inline void set_vip_lv(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.storeConfig)
 private:
  inline void set_has_refresh_type();
  inline void clear_has_refresh_type();
  inline void set_has_show_count();
  inline void clear_has_show_count();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_keep_time();
  inline void clear_has_keep_time();
  inline void set_has_enable_vip();
  inline void clear_has_enable_vip();
  inline void set_has_drop_count();
  inline void clear_has_drop_count();
  inline void set_has_momey_refresh_cost();
  inline void clear_has_momey_refresh_cost();
  inline void set_has_refresh_time();
  inline void clear_has_refresh_time();
  inline void set_has_vip_daily_limit();
  inline void clear_has_vip_daily_limit();
  inline void set_has_money_refresh_count();
  inline void clear_has_money_refresh_count();
  inline void set_has_allow_refresh();
  inline void clear_has_allow_refresh();
  inline void set_has_store_type();
  inline void clear_has_store_type();
  inline void set_has_vip_lv();
  inline void clear_has_vip_lv();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 refresh_type_;
  ::google::protobuf::int32 show_count_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > open_time_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 keep_time_;
  ::google::protobuf::int32 enable_vip_;
  ::google::protobuf::int32 drop_count_;
  ::google::protobuf::int32 momey_refresh_cost_;
  ::google::protobuf::int32 refresh_time_;
  ::google::protobuf::int32 vip_daily_limit_;
  ::google::protobuf::int32 money_refresh_count_;
  ::google::protobuf::int32 allow_refresh_;
  ::google::protobuf::int32 store_type_;
  ::google::protobuf::int32 vip_lv_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(14 + 31) / 32];

  friend void  protobuf_AddDesc_storeConfig_2eproto();
  friend void protobuf_AssignDesc_storeConfig_2eproto();
  friend void protobuf_ShutdownFile_storeConfig_2eproto();

  void InitAsDefaultInstance();
  static storeConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// storeConfig

// optional int32 refresh_type = 14;
inline bool storeConfig::has_refresh_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void storeConfig::set_has_refresh_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void storeConfig::clear_has_refresh_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void storeConfig::clear_refresh_type() {
  refresh_type_ = 0;
  clear_has_refresh_type();
}
inline ::google::protobuf::int32 storeConfig::refresh_type() const {
  return refresh_type_;
}
inline void storeConfig::set_refresh_type(::google::protobuf::int32 value) {
  set_has_refresh_type();
  refresh_type_ = value;
}

// optional int32 show_count = 12;
inline bool storeConfig::has_show_count() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void storeConfig::set_has_show_count() {
  _has_bits_[0] |= 0x00000002u;
}
inline void storeConfig::clear_has_show_count() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void storeConfig::clear_show_count() {
  show_count_ = 0;
  clear_has_show_count();
}
inline ::google::protobuf::int32 storeConfig::show_count() const {
  return show_count_;
}
inline void storeConfig::set_show_count(::google::protobuf::int32 value) {
  set_has_show_count();
  show_count_ = value;
}

// repeated int32 open_time = 4;
inline int storeConfig::open_time_size() const {
  return open_time_.size();
}
inline void storeConfig::clear_open_time() {
  open_time_.Clear();
}
inline ::google::protobuf::int32 storeConfig::open_time(int index) const {
  return open_time_.Get(index);
}
inline void storeConfig::set_open_time(int index, ::google::protobuf::int32 value) {
  open_time_.Set(index, value);
}
inline void storeConfig::add_open_time(::google::protobuf::int32 value) {
  open_time_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
storeConfig::open_time() const {
  return open_time_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
storeConfig::mutable_open_time() {
  return &open_time_;
}

// optional int32 id = 1;
inline bool storeConfig::has_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void storeConfig::set_has_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void storeConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void storeConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 storeConfig::id() const {
  return id_;
}
inline void storeConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 keep_time = 5;
inline bool storeConfig::has_keep_time() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void storeConfig::set_has_keep_time() {
  _has_bits_[0] |= 0x00000010u;
}
inline void storeConfig::clear_has_keep_time() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void storeConfig::clear_keep_time() {
  keep_time_ = 0;
  clear_has_keep_time();
}
inline ::google::protobuf::int32 storeConfig::keep_time() const {
  return keep_time_;
}
inline void storeConfig::set_keep_time(::google::protobuf::int32 value) {
  set_has_keep_time();
  keep_time_ = value;
}

// optional int32 enable_vip = 13;
inline bool storeConfig::has_enable_vip() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void storeConfig::set_has_enable_vip() {
  _has_bits_[0] |= 0x00000020u;
}
inline void storeConfig::clear_has_enable_vip() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void storeConfig::clear_enable_vip() {
  enable_vip_ = 0;
  clear_has_enable_vip();
}
inline ::google::protobuf::int32 storeConfig::enable_vip() const {
  return enable_vip_;
}
inline void storeConfig::set_enable_vip(::google::protobuf::int32 value) {
  set_has_enable_vip();
  enable_vip_ = value;
}

// optional int32 drop_count = 11;
inline bool storeConfig::has_drop_count() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void storeConfig::set_has_drop_count() {
  _has_bits_[0] |= 0x00000040u;
}
inline void storeConfig::clear_has_drop_count() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void storeConfig::clear_drop_count() {
  drop_count_ = 0;
  clear_has_drop_count();
}
inline ::google::protobuf::int32 storeConfig::drop_count() const {
  return drop_count_;
}
inline void storeConfig::set_drop_count(::google::protobuf::int32 value) {
  set_has_drop_count();
  drop_count_ = value;
}

// optional int32 momey_refresh_cost = 9;
inline bool storeConfig::has_momey_refresh_cost() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void storeConfig::set_has_momey_refresh_cost() {
  _has_bits_[0] |= 0x00000080u;
}
inline void storeConfig::clear_has_momey_refresh_cost() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void storeConfig::clear_momey_refresh_cost() {
  momey_refresh_cost_ = 0;
  clear_has_momey_refresh_cost();
}
inline ::google::protobuf::int32 storeConfig::momey_refresh_cost() const {
  return momey_refresh_cost_;
}
inline void storeConfig::set_momey_refresh_cost(::google::protobuf::int32 value) {
  set_has_momey_refresh_cost();
  momey_refresh_cost_ = value;
}

// optional int32 refresh_time = 10;
inline bool storeConfig::has_refresh_time() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void storeConfig::set_has_refresh_time() {
  _has_bits_[0] |= 0x00000100u;
}
inline void storeConfig::clear_has_refresh_time() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void storeConfig::clear_refresh_time() {
  refresh_time_ = 0;
  clear_has_refresh_time();
}
inline ::google::protobuf::int32 storeConfig::refresh_time() const {
  return refresh_time_;
}
inline void storeConfig::set_refresh_time(::google::protobuf::int32 value) {
  set_has_refresh_time();
  refresh_time_ = value;
}

// optional int32 vip_daily_limit = 7;
inline bool storeConfig::has_vip_daily_limit() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void storeConfig::set_has_vip_daily_limit() {
  _has_bits_[0] |= 0x00000200u;
}
inline void storeConfig::clear_has_vip_daily_limit() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void storeConfig::clear_vip_daily_limit() {
  vip_daily_limit_ = 0;
  clear_has_vip_daily_limit();
}
inline ::google::protobuf::int32 storeConfig::vip_daily_limit() const {
  return vip_daily_limit_;
}
inline void storeConfig::set_vip_daily_limit(::google::protobuf::int32 value) {
  set_has_vip_daily_limit();
  vip_daily_limit_ = value;
}

// optional int32 money_refresh_count = 8;
inline bool storeConfig::has_money_refresh_count() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void storeConfig::set_has_money_refresh_count() {
  _has_bits_[0] |= 0x00000400u;
}
inline void storeConfig::clear_has_money_refresh_count() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void storeConfig::clear_money_refresh_count() {
  money_refresh_count_ = 0;
  clear_has_money_refresh_count();
}
inline ::google::protobuf::int32 storeConfig::money_refresh_count() const {
  return money_refresh_count_;
}
inline void storeConfig::set_money_refresh_count(::google::protobuf::int32 value) {
  set_has_money_refresh_count();
  money_refresh_count_ = value;
}

// optional int32 allow_refresh = 6;
inline bool storeConfig::has_allow_refresh() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void storeConfig::set_has_allow_refresh() {
  _has_bits_[0] |= 0x00000800u;
}
inline void storeConfig::clear_has_allow_refresh() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void storeConfig::clear_allow_refresh() {
  allow_refresh_ = 0;
  clear_has_allow_refresh();
}
inline ::google::protobuf::int32 storeConfig::allow_refresh() const {
  return allow_refresh_;
}
inline void storeConfig::set_allow_refresh(::google::protobuf::int32 value) {
  set_has_allow_refresh();
  allow_refresh_ = value;
}

// optional int32 store_type = 3;
inline bool storeConfig::has_store_type() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void storeConfig::set_has_store_type() {
  _has_bits_[0] |= 0x00001000u;
}
inline void storeConfig::clear_has_store_type() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void storeConfig::clear_store_type() {
  store_type_ = 0;
  clear_has_store_type();
}
inline ::google::protobuf::int32 storeConfig::store_type() const {
  return store_type_;
}
inline void storeConfig::set_store_type(::google::protobuf::int32 value) {
  set_has_store_type();
  store_type_ = value;
}

// optional int32 vip_lv = 2;
inline bool storeConfig::has_vip_lv() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void storeConfig::set_has_vip_lv() {
  _has_bits_[0] |= 0x00002000u;
}
inline void storeConfig::clear_has_vip_lv() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void storeConfig::clear_vip_lv() {
  vip_lv_ = 0;
  clear_has_vip_lv();
}
inline ::google::protobuf::int32 storeConfig::vip_lv() const {
  return vip_lv_;
}
inline void storeConfig::set_vip_lv(::google::protobuf::int32 value) {
  set_has_vip_lv();
  vip_lv_ = value;
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

#endif  // PROTOBUF_storeConfig_2eproto__INCLUDED
