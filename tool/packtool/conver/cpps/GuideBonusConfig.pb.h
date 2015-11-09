// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GuideBonusConfig.proto

#ifndef PROTOBUF_GuideBonusConfig_2eproto__INCLUDED
#define PROTOBUF_GuideBonusConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_GuideBonusConfig_2eproto();
void protobuf_AssignDesc_GuideBonusConfig_2eproto();
void protobuf_ShutdownFile_GuideBonusConfig_2eproto();

class GuideBonusConfig;

// ===================================================================

class GuideBonusConfig : public ::google::protobuf::Message {
 public:
  GuideBonusConfig();
  virtual ~GuideBonusConfig();

  GuideBonusConfig(const GuideBonusConfig& from);

  inline GuideBonusConfig& operator=(const GuideBonusConfig& from) {
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
  static const GuideBonusConfig& default_instance();

  void Swap(GuideBonusConfig* other);

  // implements Message ----------------------------------------------

  GuideBonusConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GuideBonusConfig& from);
  void MergeFrom(const GuideBonusConfig& from);
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

  // repeated int32 first_add_drop = 4;
  inline int first_add_drop_size() const;
  inline void clear_first_add_drop();
  static const int kFirstAddDropFieldNumber = 4;
  inline ::google::protobuf::int32 first_add_drop(int index) const;
  inline void set_first_add_drop(int index, ::google::protobuf::int32 value);
  inline void add_first_add_drop(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      first_add_drop() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_first_add_drop();

  // optional int32 cost = 8;
  inline bool has_cost() const;
  inline void clear_cost();
  static const int kCostFieldNumber = 8;
  inline ::google::protobuf::int32 cost() const;
  inline void set_cost(::google::protobuf::int32 value);

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // repeated int32 puzzle_drop = 6;
  inline int puzzle_drop_size() const;
  inline void clear_puzzle_drop();
  static const int kPuzzleDropFieldNumber = 6;
  inline ::google::protobuf::int32 puzzle_drop(int index) const;
  inline void set_puzzle_drop(int index, ::google::protobuf::int32 value);
  inline void add_puzzle_drop(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      puzzle_drop() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_puzzle_drop();

  // optional int32 quick_money_type = 14;
  inline bool has_quick_money_type() const;
  inline void clear_quick_money_type();
  static const int kQuickMoneyTypeFieldNumber = 14;
  inline ::google::protobuf::int32 quick_money_type() const;
  inline void set_quick_money_type(::google::protobuf::int32 value);

  // optional string desc = 10;
  inline bool has_desc() const;
  inline void clear_desc();
  static const int kDescFieldNumber = 10;
  inline const ::std::string& desc() const;
  inline void set_desc(const ::std::string& value);
  inline void set_desc(const char* value);
  inline void set_desc(const char* value, size_t size);
  inline ::std::string* mutable_desc();
  inline ::std::string* release_desc();
  inline void set_allocated_desc(::std::string* desc);

  // optional int32 quick_money_cost = 13;
  inline bool has_quick_money_cost() const;
  inline void clear_quick_money_cost();
  static const int kQuickMoneyCostFieldNumber = 13;
  inline ::google::protobuf::int32 quick_money_cost() const;
  inline void set_quick_money_cost(::google::protobuf::int32 value);

  // optional int32 replace_drop = 12;
  inline bool has_replace_drop() const;
  inline void clear_replace_drop();
  static const int kReplaceDropFieldNumber = 12;
  inline ::google::protobuf::int32 replace_drop() const;
  inline void set_replace_drop(::google::protobuf::int32 value);

  // optional int32 replace_count = 11;
  inline bool has_replace_count() const;
  inline void clear_replace_count();
  static const int kReplaceCountFieldNumber = 11;
  inline ::google::protobuf::int32 replace_count() const;
  inline void set_replace_count(::google::protobuf::int32 value);

  // repeated int32 drop_data = 3;
  inline int drop_data_size() const;
  inline void clear_drop_data();
  static const int kDropDataFieldNumber = 3;
  inline ::google::protobuf::int32 drop_data(int index) const;
  inline void set_drop_data(int index, ::google::protobuf::int32 value);
  inline void add_drop_data(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      drop_data() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_drop_data();

  // repeated int32 add_drop = 5;
  inline int add_drop_size() const;
  inline void clear_add_drop();
  static const int kAddDropFieldNumber = 5;
  inline ::google::protobuf::int32 add_drop(int index) const;
  inline void set_add_drop(int index, ::google::protobuf::int32 value);
  inline void add_add_drop(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      add_drop() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_add_drop();

  // repeated int32 guide_display = 9;
  inline int guide_display_size() const;
  inline void clear_guide_display();
  static const int kGuideDisplayFieldNumber = 9;
  inline ::google::protobuf::int32 guide_display(int index) const;
  inline void set_guide_display(int index, ::google::protobuf::int32 value);
  inline void add_guide_display(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      guide_display() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_guide_display();

  // repeated int32 first_drop_data = 2;
  inline int first_drop_data_size() const;
  inline void clear_first_drop_data();
  static const int kFirstDropDataFieldNumber = 2;
  inline ::google::protobuf::int32 first_drop_data(int index) const;
  inline void set_first_drop_data(int index, ::google::protobuf::int32 value);
  inline void add_first_drop_data(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      first_drop_data() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_first_drop_data();

  // optional int32 item_id = 7;
  inline bool has_item_id() const;
  inline void clear_item_id();
  static const int kItemIdFieldNumber = 7;
  inline ::google::protobuf::int32 item_id() const;
  inline void set_item_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.GuideBonusConfig)
 private:
  inline void set_has_cost();
  inline void clear_has_cost();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_quick_money_type();
  inline void clear_has_quick_money_type();
  inline void set_has_desc();
  inline void clear_has_desc();
  inline void set_has_quick_money_cost();
  inline void clear_has_quick_money_cost();
  inline void set_has_replace_drop();
  inline void clear_has_replace_drop();
  inline void set_has_replace_count();
  inline void clear_has_replace_count();
  inline void set_has_item_id();
  inline void clear_has_item_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > first_add_drop_;
  ::google::protobuf::int32 cost_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > puzzle_drop_;
  ::std::string* desc_;
  ::google::protobuf::int32 quick_money_type_;
  ::google::protobuf::int32 quick_money_cost_;
  ::google::protobuf::int32 replace_drop_;
  ::google::protobuf::int32 replace_count_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > drop_data_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > add_drop_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > guide_display_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > first_drop_data_;
  ::google::protobuf::int32 item_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(14 + 31) / 32];

  friend void  protobuf_AddDesc_GuideBonusConfig_2eproto();
  friend void protobuf_AssignDesc_GuideBonusConfig_2eproto();
  friend void protobuf_ShutdownFile_GuideBonusConfig_2eproto();

  void InitAsDefaultInstance();
  static GuideBonusConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// GuideBonusConfig

// repeated int32 first_add_drop = 4;
inline int GuideBonusConfig::first_add_drop_size() const {
  return first_add_drop_.size();
}
inline void GuideBonusConfig::clear_first_add_drop() {
  first_add_drop_.Clear();
}
inline ::google::protobuf::int32 GuideBonusConfig::first_add_drop(int index) const {
  return first_add_drop_.Get(index);
}
inline void GuideBonusConfig::set_first_add_drop(int index, ::google::protobuf::int32 value) {
  first_add_drop_.Set(index, value);
}
inline void GuideBonusConfig::add_first_add_drop(::google::protobuf::int32 value) {
  first_add_drop_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
GuideBonusConfig::first_add_drop() const {
  return first_add_drop_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
GuideBonusConfig::mutable_first_add_drop() {
  return &first_add_drop_;
}

// optional int32 cost = 8;
inline bool GuideBonusConfig::has_cost() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GuideBonusConfig::set_has_cost() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GuideBonusConfig::clear_has_cost() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GuideBonusConfig::clear_cost() {
  cost_ = 0;
  clear_has_cost();
}
inline ::google::protobuf::int32 GuideBonusConfig::cost() const {
  return cost_;
}
inline void GuideBonusConfig::set_cost(::google::protobuf::int32 value) {
  set_has_cost();
  cost_ = value;
}

// optional int32 id = 1;
inline bool GuideBonusConfig::has_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GuideBonusConfig::set_has_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GuideBonusConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GuideBonusConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 GuideBonusConfig::id() const {
  return id_;
}
inline void GuideBonusConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// repeated int32 puzzle_drop = 6;
inline int GuideBonusConfig::puzzle_drop_size() const {
  return puzzle_drop_.size();
}
inline void GuideBonusConfig::clear_puzzle_drop() {
  puzzle_drop_.Clear();
}
inline ::google::protobuf::int32 GuideBonusConfig::puzzle_drop(int index) const {
  return puzzle_drop_.Get(index);
}
inline void GuideBonusConfig::set_puzzle_drop(int index, ::google::protobuf::int32 value) {
  puzzle_drop_.Set(index, value);
}
inline void GuideBonusConfig::add_puzzle_drop(::google::protobuf::int32 value) {
  puzzle_drop_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
GuideBonusConfig::puzzle_drop() const {
  return puzzle_drop_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
GuideBonusConfig::mutable_puzzle_drop() {
  return &puzzle_drop_;
}

// optional int32 quick_money_type = 14;
inline bool GuideBonusConfig::has_quick_money_type() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void GuideBonusConfig::set_has_quick_money_type() {
  _has_bits_[0] |= 0x00000010u;
}
inline void GuideBonusConfig::clear_has_quick_money_type() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void GuideBonusConfig::clear_quick_money_type() {
  quick_money_type_ = 0;
  clear_has_quick_money_type();
}
inline ::google::protobuf::int32 GuideBonusConfig::quick_money_type() const {
  return quick_money_type_;
}
inline void GuideBonusConfig::set_quick_money_type(::google::protobuf::int32 value) {
  set_has_quick_money_type();
  quick_money_type_ = value;
}

// optional string desc = 10;
inline bool GuideBonusConfig::has_desc() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void GuideBonusConfig::set_has_desc() {
  _has_bits_[0] |= 0x00000020u;
}
inline void GuideBonusConfig::clear_has_desc() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void GuideBonusConfig::clear_desc() {
  if (desc_ != &::google::protobuf::internal::kEmptyString) {
    desc_->clear();
  }
  clear_has_desc();
}
inline const ::std::string& GuideBonusConfig::desc() const {
  return *desc_;
}
inline void GuideBonusConfig::set_desc(const ::std::string& value) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(value);
}
inline void GuideBonusConfig::set_desc(const char* value) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(value);
}
inline void GuideBonusConfig::set_desc(const char* value, size_t size) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* GuideBonusConfig::mutable_desc() {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  return desc_;
}
inline ::std::string* GuideBonusConfig::release_desc() {
  clear_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = desc_;
    desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void GuideBonusConfig::set_allocated_desc(::std::string* desc) {
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

// optional int32 quick_money_cost = 13;
inline bool GuideBonusConfig::has_quick_money_cost() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void GuideBonusConfig::set_has_quick_money_cost() {
  _has_bits_[0] |= 0x00000040u;
}
inline void GuideBonusConfig::clear_has_quick_money_cost() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void GuideBonusConfig::clear_quick_money_cost() {
  quick_money_cost_ = 0;
  clear_has_quick_money_cost();
}
inline ::google::protobuf::int32 GuideBonusConfig::quick_money_cost() const {
  return quick_money_cost_;
}
inline void GuideBonusConfig::set_quick_money_cost(::google::protobuf::int32 value) {
  set_has_quick_money_cost();
  quick_money_cost_ = value;
}

// optional int32 replace_drop = 12;
inline bool GuideBonusConfig::has_replace_drop() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void GuideBonusConfig::set_has_replace_drop() {
  _has_bits_[0] |= 0x00000080u;
}
inline void GuideBonusConfig::clear_has_replace_drop() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void GuideBonusConfig::clear_replace_drop() {
  replace_drop_ = 0;
  clear_has_replace_drop();
}
inline ::google::protobuf::int32 GuideBonusConfig::replace_drop() const {
  return replace_drop_;
}
inline void GuideBonusConfig::set_replace_drop(::google::protobuf::int32 value) {
  set_has_replace_drop();
  replace_drop_ = value;
}

// optional int32 replace_count = 11;
inline bool GuideBonusConfig::has_replace_count() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void GuideBonusConfig::set_has_replace_count() {
  _has_bits_[0] |= 0x00000100u;
}
inline void GuideBonusConfig::clear_has_replace_count() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void GuideBonusConfig::clear_replace_count() {
  replace_count_ = 0;
  clear_has_replace_count();
}
inline ::google::protobuf::int32 GuideBonusConfig::replace_count() const {
  return replace_count_;
}
inline void GuideBonusConfig::set_replace_count(::google::protobuf::int32 value) {
  set_has_replace_count();
  replace_count_ = value;
}

// repeated int32 drop_data = 3;
inline int GuideBonusConfig::drop_data_size() const {
  return drop_data_.size();
}
inline void GuideBonusConfig::clear_drop_data() {
  drop_data_.Clear();
}
inline ::google::protobuf::int32 GuideBonusConfig::drop_data(int index) const {
  return drop_data_.Get(index);
}
inline void GuideBonusConfig::set_drop_data(int index, ::google::protobuf::int32 value) {
  drop_data_.Set(index, value);
}
inline void GuideBonusConfig::add_drop_data(::google::protobuf::int32 value) {
  drop_data_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
GuideBonusConfig::drop_data() const {
  return drop_data_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
GuideBonusConfig::mutable_drop_data() {
  return &drop_data_;
}

// repeated int32 add_drop = 5;
inline int GuideBonusConfig::add_drop_size() const {
  return add_drop_.size();
}
inline void GuideBonusConfig::clear_add_drop() {
  add_drop_.Clear();
}
inline ::google::protobuf::int32 GuideBonusConfig::add_drop(int index) const {
  return add_drop_.Get(index);
}
inline void GuideBonusConfig::set_add_drop(int index, ::google::protobuf::int32 value) {
  add_drop_.Set(index, value);
}
inline void GuideBonusConfig::add_add_drop(::google::protobuf::int32 value) {
  add_drop_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
GuideBonusConfig::add_drop() const {
  return add_drop_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
GuideBonusConfig::mutable_add_drop() {
  return &add_drop_;
}

// repeated int32 guide_display = 9;
inline int GuideBonusConfig::guide_display_size() const {
  return guide_display_.size();
}
inline void GuideBonusConfig::clear_guide_display() {
  guide_display_.Clear();
}
inline ::google::protobuf::int32 GuideBonusConfig::guide_display(int index) const {
  return guide_display_.Get(index);
}
inline void GuideBonusConfig::set_guide_display(int index, ::google::protobuf::int32 value) {
  guide_display_.Set(index, value);
}
inline void GuideBonusConfig::add_guide_display(::google::protobuf::int32 value) {
  guide_display_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
GuideBonusConfig::guide_display() const {
  return guide_display_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
GuideBonusConfig::mutable_guide_display() {
  return &guide_display_;
}

// repeated int32 first_drop_data = 2;
inline int GuideBonusConfig::first_drop_data_size() const {
  return first_drop_data_.size();
}
inline void GuideBonusConfig::clear_first_drop_data() {
  first_drop_data_.Clear();
}
inline ::google::protobuf::int32 GuideBonusConfig::first_drop_data(int index) const {
  return first_drop_data_.Get(index);
}
inline void GuideBonusConfig::set_first_drop_data(int index, ::google::protobuf::int32 value) {
  first_drop_data_.Set(index, value);
}
inline void GuideBonusConfig::add_first_drop_data(::google::protobuf::int32 value) {
  first_drop_data_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
GuideBonusConfig::first_drop_data() const {
  return first_drop_data_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
GuideBonusConfig::mutable_first_drop_data() {
  return &first_drop_data_;
}

// optional int32 item_id = 7;
inline bool GuideBonusConfig::has_item_id() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void GuideBonusConfig::set_has_item_id() {
  _has_bits_[0] |= 0x00002000u;
}
inline void GuideBonusConfig::clear_has_item_id() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void GuideBonusConfig::clear_item_id() {
  item_id_ = 0;
  clear_has_item_id();
}
inline ::google::protobuf::int32 GuideBonusConfig::item_id() const {
  return item_id_;
}
inline void GuideBonusConfig::set_item_id(::google::protobuf::int32 value) {
  set_has_item_id();
  item_id_ = value;
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

#endif  // PROTOBUF_GuideBonusConfig_2eproto__INCLUDED
