// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ItemConfig.proto

#ifndef PROTOBUF_ItemConfig_2eproto__INCLUDED
#define PROTOBUF_ItemConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_ItemConfig_2eproto();
void protobuf_AssignDesc_ItemConfig_2eproto();
void protobuf_ShutdownFile_ItemConfig_2eproto();

class ItemConfig;

// ===================================================================

class ItemConfig : public ::google::protobuf::Message {
 public:
  ItemConfig();
  virtual ~ItemConfig();

  ItemConfig(const ItemConfig& from);

  inline ItemConfig& operator=(const ItemConfig& from) {
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
  static const ItemConfig& default_instance();

  void Swap(ItemConfig* other);

  // implements Message ----------------------------------------------

  ItemConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ItemConfig& from);
  void MergeFrom(const ItemConfig& from);
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

  // optional int32 item_seqence = 3;
  inline bool has_item_seqence() const;
  inline void clear_item_seqence();
  static const int kItemSeqenceFieldNumber = 3;
  inline ::google::protobuf::int32 item_seqence() const;
  inline void set_item_seqence(::google::protobuf::int32 value);

  // optional int32 cost = 15;
  inline bool has_cost() const;
  inline void clear_cost();
  static const int kCostFieldNumber = 15;
  inline ::google::protobuf::int32 cost() const;
  inline void set_cost(::google::protobuf::int32 value);

  // optional int32 upgrade_exp = 25;
  inline bool has_upgrade_exp() const;
  inline void clear_upgrade_exp();
  static const int kUpgradeExpFieldNumber = 25;
  inline ::google::protobuf::int32 upgrade_exp() const;
  inline void set_upgrade_exp(::google::protobuf::int32 value);

  // optional int32 skill_cost = 24;
  inline bool has_skill_cost() const;
  inline void clear_skill_cost();
  static const int kSkillCostFieldNumber = 24;
  inline ::google::protobuf::int32 skill_cost() const;
  inline void set_skill_cost(::google::protobuf::int32 value);

  // optional string item_desc = 9;
  inline bool has_item_desc() const;
  inline void clear_item_desc();
  static const int kItemDescFieldNumber = 9;
  inline const ::std::string& item_desc() const;
  inline void set_item_desc(const ::std::string& value);
  inline void set_item_desc(const char* value);
  inline void set_item_desc(const char* value, size_t size);
  inline ::std::string* mutable_item_desc();
  inline ::std::string* release_item_desc();
  inline void set_allocated_item_desc(::std::string* item_desc);

  // optional int32 require_bag_slot = 16;
  inline bool has_require_bag_slot() const;
  inline void clear_require_bag_slot();
  static const int kRequireBagSlotFieldNumber = 16;
  inline ::google::protobuf::int32 require_bag_slot() const;
  inline void set_require_bag_slot(::google::protobuf::int32 value);

  // optional string tips_desc = 11;
  inline bool has_tips_desc() const;
  inline void clear_tips_desc();
  static const int kTipsDescFieldNumber = 11;
  inline const ::std::string& tips_desc() const;
  inline void set_tips_desc(const ::std::string& value);
  inline void set_tips_desc(const char* value);
  inline void set_tips_desc(const char* value, size_t size);
  inline ::std::string* mutable_tips_desc();
  inline ::std::string* release_tips_desc();
  inline void set_allocated_tips_desc(::std::string* tips_desc);

  // optional int32 currency_type = 22;
  inline bool has_currency_type() const;
  inline void clear_currency_type();
  static const int kCurrencyTypeFieldNumber = 22;
  inline ::google::protobuf::int32 currency_type() const;
  inline void set_currency_type(::google::protobuf::int32 value);

  // optional int32 item_type = 2;
  inline bool has_item_type() const;
  inline void clear_item_type();
  static const int kItemTypeFieldNumber = 2;
  inline ::google::protobuf::int32 item_type() const;
  inline void set_item_type(::google::protobuf::int32 value);

  // optional int32 item_use = 14;
  inline bool has_item_use() const;
  inline void clear_item_use();
  static const int kItemUseFieldNumber = 14;
  inline ::google::protobuf::int32 item_use() const;
  inline void set_item_use(::google::protobuf::int32 value);

  // optional int32 upgrade_currency_type = 26;
  inline bool has_upgrade_currency_type() const;
  inline void clear_upgrade_currency_type();
  static const int kUpgradeCurrencyTypeFieldNumber = 26;
  inline ::google::protobuf::int32 upgrade_currency_type() const;
  inline void set_upgrade_currency_type(::google::protobuf::int32 value);

  // optional int32 quality = 5;
  inline bool has_quality() const;
  inline void clear_quality();
  static const int kQualityFieldNumber = 5;
  inline ::google::protobuf::int32 quality() const;
  inline void set_quality(::google::protobuf::int32 value);

  // optional int32 require_card_slot = 17;
  inline bool has_require_card_slot() const;
  inline void clear_require_card_slot();
  static const int kRequireCardSlotFieldNumber = 17;
  inline ::google::protobuf::int32 require_card_slot() const;
  inline void set_require_card_slot(::google::protobuf::int32 value);

  // repeated .DianShiTech.Config.ConfigTypeGroup card_drop = 29;
  inline int card_drop_size() const;
  inline void clear_card_drop();
  static const int kCardDropFieldNumber = 29;
  inline const ::DianShiTech::Config::ConfigTypeGroup& card_drop(int index) const;
  inline ::DianShiTech::Config::ConfigTypeGroup* mutable_card_drop(int index);
  inline ::DianShiTech::Config::ConfigTypeGroup* add_card_drop();
  inline const ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >&
      card_drop() const;
  inline ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >*
      mutable_card_drop();

  // optional int32 item_resource = 8;
  inline bool has_item_resource() const;
  inline void clear_item_resource();
  static const int kItemResourceFieldNumber = 8;
  inline ::google::protobuf::int32 item_resource() const;
  inline void set_item_resource(::google::protobuf::int32 value);

  // optional int32 upgrade_cost = 27;
  inline bool has_upgrade_cost() const;
  inline void clear_upgrade_cost();
  static const int kUpgradeCostFieldNumber = 27;
  inline ::google::protobuf::int32 upgrade_cost() const;
  inline void set_upgrade_cost(::google::protobuf::int32 value);

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional int32 sell_price = 23;
  inline bool has_sell_price() const;
  inline void clear_sell_price();
  static const int kSellPriceFieldNumber = 23;
  inline ::google::protobuf::int32 sell_price() const;
  inline void set_sell_price(::google::protobuf::int32 value);

  // optional int32 notice_type = 4;
  inline bool has_notice_type() const;
  inline void clear_notice_type();
  static const int kNoticeTypeFieldNumber = 4;
  inline ::google::protobuf::int32 notice_type() const;
  inline void set_notice_type(::google::protobuf::int32 value);

  // optional int32 rare = 13;
  inline bool has_rare() const;
  inline void clear_rare();
  static const int kRareFieldNumber = 13;
  inline ::google::protobuf::int32 rare() const;
  inline void set_rare(::google::protobuf::int32 value);

  // repeated int32 bonus = 20;
  inline int bonus_size() const;
  inline void clear_bonus();
  static const int kBonusFieldNumber = 20;
  inline ::google::protobuf::int32 bonus(int index) const;
  inline void set_bonus(int index, ::google::protobuf::int32 value);
  inline void add_bonus(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      bonus() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_bonus();

  // repeated int32 drop_data = 19;
  inline int drop_data_size() const;
  inline void clear_drop_data();
  static const int kDropDataFieldNumber = 19;
  inline ::google::protobuf::int32 drop_data(int index) const;
  inline void set_drop_data(int index, ::google::protobuf::int32 value);
  inline void add_drop_data(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      drop_data() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_drop_data();

  // optional int32 require_equip_slot = 18;
  inline bool has_require_equip_slot() const;
  inline void clear_require_equip_slot();
  static const int kRequireEquipSlotFieldNumber = 18;
  inline ::google::protobuf::int32 require_equip_slot() const;
  inline void set_require_equip_slot(::google::protobuf::int32 value);

  // optional int32 required_level = 28;
  inline bool has_required_level() const;
  inline void clear_required_level();
  static const int kRequiredLevelFieldNumber = 28;
  inline ::google::protobuf::int32 required_level() const;
  inline void set_required_level(::google::protobuf::int32 value);

  // optional string item_name = 6;
  inline bool has_item_name() const;
  inline void clear_item_name();
  static const int kItemNameFieldNumber = 6;
  inline const ::std::string& item_name() const;
  inline void set_item_name(const ::std::string& value);
  inline void set_item_name(const char* value);
  inline void set_item_name(const char* value, size_t size);
  inline ::std::string* mutable_item_name();
  inline ::std::string* release_item_name();
  inline void set_allocated_item_name(::std::string* item_name);

  // optional int32 stack = 21;
  inline bool has_stack() const;
  inline void clear_stack();
  static const int kStackFieldNumber = 21;
  inline ::google::protobuf::int32 stack() const;
  inline void set_stack(::google::protobuf::int32 value);

  // optional int32 sell_state = 7;
  inline bool has_sell_state() const;
  inline void clear_sell_state();
  static const int kSellStateFieldNumber = 7;
  inline ::google::protobuf::int32 sell_state() const;
  inline void set_sell_state(::google::protobuf::int32 value);

  // optional int32 item_unit_id = 10;
  inline bool has_item_unit_id() const;
  inline void clear_item_unit_id();
  static const int kItemUnitIdFieldNumber = 10;
  inline ::google::protobuf::int32 item_unit_id() const;
  inline void set_item_unit_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.ItemConfig)
 private:
  inline void set_has_item_seqence();
  inline void clear_has_item_seqence();
  inline void set_has_cost();
  inline void clear_has_cost();
  inline void set_has_upgrade_exp();
  inline void clear_has_upgrade_exp();
  inline void set_has_skill_cost();
  inline void clear_has_skill_cost();
  inline void set_has_item_desc();
  inline void clear_has_item_desc();
  inline void set_has_require_bag_slot();
  inline void clear_has_require_bag_slot();
  inline void set_has_tips_desc();
  inline void clear_has_tips_desc();
  inline void set_has_currency_type();
  inline void clear_has_currency_type();
  inline void set_has_item_type();
  inline void clear_has_item_type();
  inline void set_has_item_use();
  inline void clear_has_item_use();
  inline void set_has_upgrade_currency_type();
  inline void clear_has_upgrade_currency_type();
  inline void set_has_quality();
  inline void clear_has_quality();
  inline void set_has_require_card_slot();
  inline void clear_has_require_card_slot();
  inline void set_has_item_resource();
  inline void clear_has_item_resource();
  inline void set_has_upgrade_cost();
  inline void clear_has_upgrade_cost();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_sell_price();
  inline void clear_has_sell_price();
  inline void set_has_notice_type();
  inline void clear_has_notice_type();
  inline void set_has_rare();
  inline void clear_has_rare();
  inline void set_has_require_equip_slot();
  inline void clear_has_require_equip_slot();
  inline void set_has_required_level();
  inline void clear_has_required_level();
  inline void set_has_item_name();
  inline void clear_has_item_name();
  inline void set_has_stack();
  inline void clear_has_stack();
  inline void set_has_sell_state();
  inline void clear_has_sell_state();
  inline void set_has_item_unit_id();
  inline void clear_has_item_unit_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 item_seqence_;
  ::google::protobuf::int32 cost_;
  ::google::protobuf::int32 upgrade_exp_;
  ::google::protobuf::int32 skill_cost_;
  ::std::string* item_desc_;
  ::std::string* tips_desc_;
  ::google::protobuf::int32 require_bag_slot_;
  ::google::protobuf::int32 currency_type_;
  ::google::protobuf::int32 item_type_;
  ::google::protobuf::int32 item_use_;
  ::google::protobuf::int32 upgrade_currency_type_;
  ::google::protobuf::int32 quality_;
  ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup > card_drop_;
  ::google::protobuf::int32 require_card_slot_;
  ::google::protobuf::int32 item_resource_;
  ::google::protobuf::int32 upgrade_cost_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 sell_price_;
  ::google::protobuf::int32 notice_type_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > bonus_;
  ::google::protobuf::int32 rare_;
  ::google::protobuf::int32 require_equip_slot_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > drop_data_;
  ::std::string* item_name_;
  ::google::protobuf::int32 required_level_;
  ::google::protobuf::int32 stack_;
  ::google::protobuf::int32 sell_state_;
  ::google::protobuf::int32 item_unit_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(28 + 31) / 32];

  friend void  protobuf_AddDesc_ItemConfig_2eproto();
  friend void protobuf_AssignDesc_ItemConfig_2eproto();
  friend void protobuf_ShutdownFile_ItemConfig_2eproto();

  void InitAsDefaultInstance();
  static ItemConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// ItemConfig

// optional int32 item_seqence = 3;
inline bool ItemConfig::has_item_seqence() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ItemConfig::set_has_item_seqence() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ItemConfig::clear_has_item_seqence() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ItemConfig::clear_item_seqence() {
  item_seqence_ = 0;
  clear_has_item_seqence();
}
inline ::google::protobuf::int32 ItemConfig::item_seqence() const {
  return item_seqence_;
}
inline void ItemConfig::set_item_seqence(::google::protobuf::int32 value) {
  set_has_item_seqence();
  item_seqence_ = value;
}

// optional int32 cost = 15;
inline bool ItemConfig::has_cost() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ItemConfig::set_has_cost() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ItemConfig::clear_has_cost() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ItemConfig::clear_cost() {
  cost_ = 0;
  clear_has_cost();
}
inline ::google::protobuf::int32 ItemConfig::cost() const {
  return cost_;
}
inline void ItemConfig::set_cost(::google::protobuf::int32 value) {
  set_has_cost();
  cost_ = value;
}

// optional int32 upgrade_exp = 25;
inline bool ItemConfig::has_upgrade_exp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ItemConfig::set_has_upgrade_exp() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ItemConfig::clear_has_upgrade_exp() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ItemConfig::clear_upgrade_exp() {
  upgrade_exp_ = 0;
  clear_has_upgrade_exp();
}
inline ::google::protobuf::int32 ItemConfig::upgrade_exp() const {
  return upgrade_exp_;
}
inline void ItemConfig::set_upgrade_exp(::google::protobuf::int32 value) {
  set_has_upgrade_exp();
  upgrade_exp_ = value;
}

// optional int32 skill_cost = 24;
inline bool ItemConfig::has_skill_cost() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ItemConfig::set_has_skill_cost() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ItemConfig::clear_has_skill_cost() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ItemConfig::clear_skill_cost() {
  skill_cost_ = 0;
  clear_has_skill_cost();
}
inline ::google::protobuf::int32 ItemConfig::skill_cost() const {
  return skill_cost_;
}
inline void ItemConfig::set_skill_cost(::google::protobuf::int32 value) {
  set_has_skill_cost();
  skill_cost_ = value;
}

// optional string item_desc = 9;
inline bool ItemConfig::has_item_desc() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ItemConfig::set_has_item_desc() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ItemConfig::clear_has_item_desc() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ItemConfig::clear_item_desc() {
  if (item_desc_ != &::google::protobuf::internal::kEmptyString) {
    item_desc_->clear();
  }
  clear_has_item_desc();
}
inline const ::std::string& ItemConfig::item_desc() const {
  return *item_desc_;
}
inline void ItemConfig::set_item_desc(const ::std::string& value) {
  set_has_item_desc();
  if (item_desc_ == &::google::protobuf::internal::kEmptyString) {
    item_desc_ = new ::std::string;
  }
  item_desc_->assign(value);
}
inline void ItemConfig::set_item_desc(const char* value) {
  set_has_item_desc();
  if (item_desc_ == &::google::protobuf::internal::kEmptyString) {
    item_desc_ = new ::std::string;
  }
  item_desc_->assign(value);
}
inline void ItemConfig::set_item_desc(const char* value, size_t size) {
  set_has_item_desc();
  if (item_desc_ == &::google::protobuf::internal::kEmptyString) {
    item_desc_ = new ::std::string;
  }
  item_desc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ItemConfig::mutable_item_desc() {
  set_has_item_desc();
  if (item_desc_ == &::google::protobuf::internal::kEmptyString) {
    item_desc_ = new ::std::string;
  }
  return item_desc_;
}
inline ::std::string* ItemConfig::release_item_desc() {
  clear_has_item_desc();
  if (item_desc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = item_desc_;
    item_desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ItemConfig::set_allocated_item_desc(::std::string* item_desc) {
  if (item_desc_ != &::google::protobuf::internal::kEmptyString) {
    delete item_desc_;
  }
  if (item_desc) {
    set_has_item_desc();
    item_desc_ = item_desc;
  } else {
    clear_has_item_desc();
    item_desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 require_bag_slot = 16;
inline bool ItemConfig::has_require_bag_slot() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ItemConfig::set_has_require_bag_slot() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ItemConfig::clear_has_require_bag_slot() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ItemConfig::clear_require_bag_slot() {
  require_bag_slot_ = 0;
  clear_has_require_bag_slot();
}
inline ::google::protobuf::int32 ItemConfig::require_bag_slot() const {
  return require_bag_slot_;
}
inline void ItemConfig::set_require_bag_slot(::google::protobuf::int32 value) {
  set_has_require_bag_slot();
  require_bag_slot_ = value;
}

// optional string tips_desc = 11;
inline bool ItemConfig::has_tips_desc() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ItemConfig::set_has_tips_desc() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ItemConfig::clear_has_tips_desc() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ItemConfig::clear_tips_desc() {
  if (tips_desc_ != &::google::protobuf::internal::kEmptyString) {
    tips_desc_->clear();
  }
  clear_has_tips_desc();
}
inline const ::std::string& ItemConfig::tips_desc() const {
  return *tips_desc_;
}
inline void ItemConfig::set_tips_desc(const ::std::string& value) {
  set_has_tips_desc();
  if (tips_desc_ == &::google::protobuf::internal::kEmptyString) {
    tips_desc_ = new ::std::string;
  }
  tips_desc_->assign(value);
}
inline void ItemConfig::set_tips_desc(const char* value) {
  set_has_tips_desc();
  if (tips_desc_ == &::google::protobuf::internal::kEmptyString) {
    tips_desc_ = new ::std::string;
  }
  tips_desc_->assign(value);
}
inline void ItemConfig::set_tips_desc(const char* value, size_t size) {
  set_has_tips_desc();
  if (tips_desc_ == &::google::protobuf::internal::kEmptyString) {
    tips_desc_ = new ::std::string;
  }
  tips_desc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ItemConfig::mutable_tips_desc() {
  set_has_tips_desc();
  if (tips_desc_ == &::google::protobuf::internal::kEmptyString) {
    tips_desc_ = new ::std::string;
  }
  return tips_desc_;
}
inline ::std::string* ItemConfig::release_tips_desc() {
  clear_has_tips_desc();
  if (tips_desc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = tips_desc_;
    tips_desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ItemConfig::set_allocated_tips_desc(::std::string* tips_desc) {
  if (tips_desc_ != &::google::protobuf::internal::kEmptyString) {
    delete tips_desc_;
  }
  if (tips_desc) {
    set_has_tips_desc();
    tips_desc_ = tips_desc;
  } else {
    clear_has_tips_desc();
    tips_desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 currency_type = 22;
inline bool ItemConfig::has_currency_type() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ItemConfig::set_has_currency_type() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ItemConfig::clear_has_currency_type() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ItemConfig::clear_currency_type() {
  currency_type_ = 0;
  clear_has_currency_type();
}
inline ::google::protobuf::int32 ItemConfig::currency_type() const {
  return currency_type_;
}
inline void ItemConfig::set_currency_type(::google::protobuf::int32 value) {
  set_has_currency_type();
  currency_type_ = value;
}

// optional int32 item_type = 2;
inline bool ItemConfig::has_item_type() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void ItemConfig::set_has_item_type() {
  _has_bits_[0] |= 0x00000100u;
}
inline void ItemConfig::clear_has_item_type() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void ItemConfig::clear_item_type() {
  item_type_ = 0;
  clear_has_item_type();
}
inline ::google::protobuf::int32 ItemConfig::item_type() const {
  return item_type_;
}
inline void ItemConfig::set_item_type(::google::protobuf::int32 value) {
  set_has_item_type();
  item_type_ = value;
}

// optional int32 item_use = 14;
inline bool ItemConfig::has_item_use() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void ItemConfig::set_has_item_use() {
  _has_bits_[0] |= 0x00000200u;
}
inline void ItemConfig::clear_has_item_use() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void ItemConfig::clear_item_use() {
  item_use_ = 0;
  clear_has_item_use();
}
inline ::google::protobuf::int32 ItemConfig::item_use() const {
  return item_use_;
}
inline void ItemConfig::set_item_use(::google::protobuf::int32 value) {
  set_has_item_use();
  item_use_ = value;
}

// optional int32 upgrade_currency_type = 26;
inline bool ItemConfig::has_upgrade_currency_type() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void ItemConfig::set_has_upgrade_currency_type() {
  _has_bits_[0] |= 0x00000400u;
}
inline void ItemConfig::clear_has_upgrade_currency_type() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void ItemConfig::clear_upgrade_currency_type() {
  upgrade_currency_type_ = 0;
  clear_has_upgrade_currency_type();
}
inline ::google::protobuf::int32 ItemConfig::upgrade_currency_type() const {
  return upgrade_currency_type_;
}
inline void ItemConfig::set_upgrade_currency_type(::google::protobuf::int32 value) {
  set_has_upgrade_currency_type();
  upgrade_currency_type_ = value;
}

// optional int32 quality = 5;
inline bool ItemConfig::has_quality() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void ItemConfig::set_has_quality() {
  _has_bits_[0] |= 0x00000800u;
}
inline void ItemConfig::clear_has_quality() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void ItemConfig::clear_quality() {
  quality_ = 0;
  clear_has_quality();
}
inline ::google::protobuf::int32 ItemConfig::quality() const {
  return quality_;
}
inline void ItemConfig::set_quality(::google::protobuf::int32 value) {
  set_has_quality();
  quality_ = value;
}

// optional int32 require_card_slot = 17;
inline bool ItemConfig::has_require_card_slot() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void ItemConfig::set_has_require_card_slot() {
  _has_bits_[0] |= 0x00001000u;
}
inline void ItemConfig::clear_has_require_card_slot() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void ItemConfig::clear_require_card_slot() {
  require_card_slot_ = 0;
  clear_has_require_card_slot();
}
inline ::google::protobuf::int32 ItemConfig::require_card_slot() const {
  return require_card_slot_;
}
inline void ItemConfig::set_require_card_slot(::google::protobuf::int32 value) {
  set_has_require_card_slot();
  require_card_slot_ = value;
}

// repeated .DianShiTech.Config.ConfigTypeGroup card_drop = 29;
inline int ItemConfig::card_drop_size() const {
  return card_drop_.size();
}
inline void ItemConfig::clear_card_drop() {
  card_drop_.Clear();
}
inline const ::DianShiTech::Config::ConfigTypeGroup& ItemConfig::card_drop(int index) const {
  return card_drop_.Get(index);
}
inline ::DianShiTech::Config::ConfigTypeGroup* ItemConfig::mutable_card_drop(int index) {
  return card_drop_.Mutable(index);
}
inline ::DianShiTech::Config::ConfigTypeGroup* ItemConfig::add_card_drop() {
  return card_drop_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >&
ItemConfig::card_drop() const {
  return card_drop_;
}
inline ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >*
ItemConfig::mutable_card_drop() {
  return &card_drop_;
}

// optional int32 item_resource = 8;
inline bool ItemConfig::has_item_resource() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void ItemConfig::set_has_item_resource() {
  _has_bits_[0] |= 0x00004000u;
}
inline void ItemConfig::clear_has_item_resource() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void ItemConfig::clear_item_resource() {
  item_resource_ = 0;
  clear_has_item_resource();
}
inline ::google::protobuf::int32 ItemConfig::item_resource() const {
  return item_resource_;
}
inline void ItemConfig::set_item_resource(::google::protobuf::int32 value) {
  set_has_item_resource();
  item_resource_ = value;
}

// optional int32 upgrade_cost = 27;
inline bool ItemConfig::has_upgrade_cost() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void ItemConfig::set_has_upgrade_cost() {
  _has_bits_[0] |= 0x00008000u;
}
inline void ItemConfig::clear_has_upgrade_cost() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void ItemConfig::clear_upgrade_cost() {
  upgrade_cost_ = 0;
  clear_has_upgrade_cost();
}
inline ::google::protobuf::int32 ItemConfig::upgrade_cost() const {
  return upgrade_cost_;
}
inline void ItemConfig::set_upgrade_cost(::google::protobuf::int32 value) {
  set_has_upgrade_cost();
  upgrade_cost_ = value;
}

// optional int32 id = 1;
inline bool ItemConfig::has_id() const {
  return (_has_bits_[0] & 0x00010000u) != 0;
}
inline void ItemConfig::set_has_id() {
  _has_bits_[0] |= 0x00010000u;
}
inline void ItemConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00010000u;
}
inline void ItemConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 ItemConfig::id() const {
  return id_;
}
inline void ItemConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 sell_price = 23;
inline bool ItemConfig::has_sell_price() const {
  return (_has_bits_[0] & 0x00020000u) != 0;
}
inline void ItemConfig::set_has_sell_price() {
  _has_bits_[0] |= 0x00020000u;
}
inline void ItemConfig::clear_has_sell_price() {
  _has_bits_[0] &= ~0x00020000u;
}
inline void ItemConfig::clear_sell_price() {
  sell_price_ = 0;
  clear_has_sell_price();
}
inline ::google::protobuf::int32 ItemConfig::sell_price() const {
  return sell_price_;
}
inline void ItemConfig::set_sell_price(::google::protobuf::int32 value) {
  set_has_sell_price();
  sell_price_ = value;
}

// optional int32 notice_type = 4;
inline bool ItemConfig::has_notice_type() const {
  return (_has_bits_[0] & 0x00040000u) != 0;
}
inline void ItemConfig::set_has_notice_type() {
  _has_bits_[0] |= 0x00040000u;
}
inline void ItemConfig::clear_has_notice_type() {
  _has_bits_[0] &= ~0x00040000u;
}
inline void ItemConfig::clear_notice_type() {
  notice_type_ = 0;
  clear_has_notice_type();
}
inline ::google::protobuf::int32 ItemConfig::notice_type() const {
  return notice_type_;
}
inline void ItemConfig::set_notice_type(::google::protobuf::int32 value) {
  set_has_notice_type();
  notice_type_ = value;
}

// optional int32 rare = 13;
inline bool ItemConfig::has_rare() const {
  return (_has_bits_[0] & 0x00080000u) != 0;
}
inline void ItemConfig::set_has_rare() {
  _has_bits_[0] |= 0x00080000u;
}
inline void ItemConfig::clear_has_rare() {
  _has_bits_[0] &= ~0x00080000u;
}
inline void ItemConfig::clear_rare() {
  rare_ = 0;
  clear_has_rare();
}
inline ::google::protobuf::int32 ItemConfig::rare() const {
  return rare_;
}
inline void ItemConfig::set_rare(::google::protobuf::int32 value) {
  set_has_rare();
  rare_ = value;
}

// repeated int32 bonus = 20;
inline int ItemConfig::bonus_size() const {
  return bonus_.size();
}
inline void ItemConfig::clear_bonus() {
  bonus_.Clear();
}
inline ::google::protobuf::int32 ItemConfig::bonus(int index) const {
  return bonus_.Get(index);
}
inline void ItemConfig::set_bonus(int index, ::google::protobuf::int32 value) {
  bonus_.Set(index, value);
}
inline void ItemConfig::add_bonus(::google::protobuf::int32 value) {
  bonus_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ItemConfig::bonus() const {
  return bonus_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ItemConfig::mutable_bonus() {
  return &bonus_;
}

// repeated int32 drop_data = 19;
inline int ItemConfig::drop_data_size() const {
  return drop_data_.size();
}
inline void ItemConfig::clear_drop_data() {
  drop_data_.Clear();
}
inline ::google::protobuf::int32 ItemConfig::drop_data(int index) const {
  return drop_data_.Get(index);
}
inline void ItemConfig::set_drop_data(int index, ::google::protobuf::int32 value) {
  drop_data_.Set(index, value);
}
inline void ItemConfig::add_drop_data(::google::protobuf::int32 value) {
  drop_data_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ItemConfig::drop_data() const {
  return drop_data_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ItemConfig::mutable_drop_data() {
  return &drop_data_;
}

// optional int32 require_equip_slot = 18;
inline bool ItemConfig::has_require_equip_slot() const {
  return (_has_bits_[0] & 0x00400000u) != 0;
}
inline void ItemConfig::set_has_require_equip_slot() {
  _has_bits_[0] |= 0x00400000u;
}
inline void ItemConfig::clear_has_require_equip_slot() {
  _has_bits_[0] &= ~0x00400000u;
}
inline void ItemConfig::clear_require_equip_slot() {
  require_equip_slot_ = 0;
  clear_has_require_equip_slot();
}
inline ::google::protobuf::int32 ItemConfig::require_equip_slot() const {
  return require_equip_slot_;
}
inline void ItemConfig::set_require_equip_slot(::google::protobuf::int32 value) {
  set_has_require_equip_slot();
  require_equip_slot_ = value;
}

// optional int32 required_level = 28;
inline bool ItemConfig::has_required_level() const {
  return (_has_bits_[0] & 0x00800000u) != 0;
}
inline void ItemConfig::set_has_required_level() {
  _has_bits_[0] |= 0x00800000u;
}
inline void ItemConfig::clear_has_required_level() {
  _has_bits_[0] &= ~0x00800000u;
}
inline void ItemConfig::clear_required_level() {
  required_level_ = 0;
  clear_has_required_level();
}
inline ::google::protobuf::int32 ItemConfig::required_level() const {
  return required_level_;
}
inline void ItemConfig::set_required_level(::google::protobuf::int32 value) {
  set_has_required_level();
  required_level_ = value;
}

// optional string item_name = 6;
inline bool ItemConfig::has_item_name() const {
  return (_has_bits_[0] & 0x01000000u) != 0;
}
inline void ItemConfig::set_has_item_name() {
  _has_bits_[0] |= 0x01000000u;
}
inline void ItemConfig::clear_has_item_name() {
  _has_bits_[0] &= ~0x01000000u;
}
inline void ItemConfig::clear_item_name() {
  if (item_name_ != &::google::protobuf::internal::kEmptyString) {
    item_name_->clear();
  }
  clear_has_item_name();
}
inline const ::std::string& ItemConfig::item_name() const {
  return *item_name_;
}
inline void ItemConfig::set_item_name(const ::std::string& value) {
  set_has_item_name();
  if (item_name_ == &::google::protobuf::internal::kEmptyString) {
    item_name_ = new ::std::string;
  }
  item_name_->assign(value);
}
inline void ItemConfig::set_item_name(const char* value) {
  set_has_item_name();
  if (item_name_ == &::google::protobuf::internal::kEmptyString) {
    item_name_ = new ::std::string;
  }
  item_name_->assign(value);
}
inline void ItemConfig::set_item_name(const char* value, size_t size) {
  set_has_item_name();
  if (item_name_ == &::google::protobuf::internal::kEmptyString) {
    item_name_ = new ::std::string;
  }
  item_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ItemConfig::mutable_item_name() {
  set_has_item_name();
  if (item_name_ == &::google::protobuf::internal::kEmptyString) {
    item_name_ = new ::std::string;
  }
  return item_name_;
}
inline ::std::string* ItemConfig::release_item_name() {
  clear_has_item_name();
  if (item_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = item_name_;
    item_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ItemConfig::set_allocated_item_name(::std::string* item_name) {
  if (item_name_ != &::google::protobuf::internal::kEmptyString) {
    delete item_name_;
  }
  if (item_name) {
    set_has_item_name();
    item_name_ = item_name;
  } else {
    clear_has_item_name();
    item_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 stack = 21;
inline bool ItemConfig::has_stack() const {
  return (_has_bits_[0] & 0x02000000u) != 0;
}
inline void ItemConfig::set_has_stack() {
  _has_bits_[0] |= 0x02000000u;
}
inline void ItemConfig::clear_has_stack() {
  _has_bits_[0] &= ~0x02000000u;
}
inline void ItemConfig::clear_stack() {
  stack_ = 0;
  clear_has_stack();
}
inline ::google::protobuf::int32 ItemConfig::stack() const {
  return stack_;
}
inline void ItemConfig::set_stack(::google::protobuf::int32 value) {
  set_has_stack();
  stack_ = value;
}

// optional int32 sell_state = 7;
inline bool ItemConfig::has_sell_state() const {
  return (_has_bits_[0] & 0x04000000u) != 0;
}
inline void ItemConfig::set_has_sell_state() {
  _has_bits_[0] |= 0x04000000u;
}
inline void ItemConfig::clear_has_sell_state() {
  _has_bits_[0] &= ~0x04000000u;
}
inline void ItemConfig::clear_sell_state() {
  sell_state_ = 0;
  clear_has_sell_state();
}
inline ::google::protobuf::int32 ItemConfig::sell_state() const {
  return sell_state_;
}
inline void ItemConfig::set_sell_state(::google::protobuf::int32 value) {
  set_has_sell_state();
  sell_state_ = value;
}

// optional int32 item_unit_id = 10;
inline bool ItemConfig::has_item_unit_id() const {
  return (_has_bits_[0] & 0x08000000u) != 0;
}
inline void ItemConfig::set_has_item_unit_id() {
  _has_bits_[0] |= 0x08000000u;
}
inline void ItemConfig::clear_has_item_unit_id() {
  _has_bits_[0] &= ~0x08000000u;
}
inline void ItemConfig::clear_item_unit_id() {
  item_unit_id_ = 0;
  clear_has_item_unit_id();
}
inline ::google::protobuf::int32 ItemConfig::item_unit_id() const {
  return item_unit_id_;
}
inline void ItemConfig::set_item_unit_id(::google::protobuf::int32 value) {
  set_has_item_unit_id();
  item_unit_id_ = value;
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

#endif  // PROTOBUF_ItemConfig_2eproto__INCLUDED
