// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ItemCombineConfig.proto

#ifndef PROTOBUF_ItemCombineConfig_2eproto__INCLUDED
#define PROTOBUF_ItemCombineConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_ItemCombineConfig_2eproto();
void protobuf_AssignDesc_ItemCombineConfig_2eproto();
void protobuf_ShutdownFile_ItemCombineConfig_2eproto();

class ItemCombineConfig;

// ===================================================================

class ItemCombineConfig : public ::google::protobuf::Message {
 public:
  ItemCombineConfig();
  virtual ~ItemCombineConfig();

  ItemCombineConfig(const ItemCombineConfig& from);

  inline ItemCombineConfig& operator=(const ItemCombineConfig& from) {
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
  static const ItemCombineConfig& default_instance();

  void Swap(ItemCombineConfig* other);

  // implements Message ----------------------------------------------

  ItemCombineConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ItemCombineConfig& from);
  void MergeFrom(const ItemCombineConfig& from);
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

  // optional int32 target_item = 3;
  inline bool has_target_item() const;
  inline void clear_target_item();
  static const int kTargetItemFieldNumber = 3;
  inline ::google::protobuf::int32 target_item() const;
  inline void set_target_item(::google::protobuf::int32 value);

  // repeated .DianShiTech.Config.ConfigTypeGroup consume = 2;
  inline int consume_size() const;
  inline void clear_consume();
  static const int kConsumeFieldNumber = 2;
  inline const ::DianShiTech::Config::ConfigTypeGroup& consume(int index) const;
  inline ::DianShiTech::Config::ConfigTypeGroup* mutable_consume(int index);
  inline ::DianShiTech::Config::ConfigTypeGroup* add_consume();
  inline const ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >&
      consume() const;
  inline ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >*
      mutable_consume();

  // optional int32 count = 4;
  inline bool has_count() const;
  inline void clear_count();
  static const int kCountFieldNumber = 4;
  inline ::google::protobuf::int32 count() const;
  inline void set_count(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.ItemCombineConfig)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_target_item();
  inline void clear_has_target_item();
  inline void set_has_count();
  inline void clear_has_count();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 target_item_;
  ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup > consume_;
  ::google::protobuf::int32 count_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_ItemCombineConfig_2eproto();
  friend void protobuf_AssignDesc_ItemCombineConfig_2eproto();
  friend void protobuf_ShutdownFile_ItemCombineConfig_2eproto();

  void InitAsDefaultInstance();
  static ItemCombineConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// ItemCombineConfig

// optional int32 id = 1;
inline bool ItemCombineConfig::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ItemCombineConfig::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ItemCombineConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ItemCombineConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 ItemCombineConfig::id() const {
  return id_;
}
inline void ItemCombineConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 target_item = 3;
inline bool ItemCombineConfig::has_target_item() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ItemCombineConfig::set_has_target_item() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ItemCombineConfig::clear_has_target_item() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ItemCombineConfig::clear_target_item() {
  target_item_ = 0;
  clear_has_target_item();
}
inline ::google::protobuf::int32 ItemCombineConfig::target_item() const {
  return target_item_;
}
inline void ItemCombineConfig::set_target_item(::google::protobuf::int32 value) {
  set_has_target_item();
  target_item_ = value;
}

// repeated .DianShiTech.Config.ConfigTypeGroup consume = 2;
inline int ItemCombineConfig::consume_size() const {
  return consume_.size();
}
inline void ItemCombineConfig::clear_consume() {
  consume_.Clear();
}
inline const ::DianShiTech::Config::ConfigTypeGroup& ItemCombineConfig::consume(int index) const {
  return consume_.Get(index);
}
inline ::DianShiTech::Config::ConfigTypeGroup* ItemCombineConfig::mutable_consume(int index) {
  return consume_.Mutable(index);
}
inline ::DianShiTech::Config::ConfigTypeGroup* ItemCombineConfig::add_consume() {
  return consume_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >&
ItemCombineConfig::consume() const {
  return consume_;
}
inline ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >*
ItemCombineConfig::mutable_consume() {
  return &consume_;
}

// optional int32 count = 4;
inline bool ItemCombineConfig::has_count() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ItemCombineConfig::set_has_count() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ItemCombineConfig::clear_has_count() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ItemCombineConfig::clear_count() {
  count_ = 0;
  clear_has_count();
}
inline ::google::protobuf::int32 ItemCombineConfig::count() const {
  return count_;
}
inline void ItemCombineConfig::set_count(::google::protobuf::int32 value) {
  set_has_count();
  count_ = value;
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

#endif  // PROTOBUF_ItemCombineConfig_2eproto__INCLUDED
