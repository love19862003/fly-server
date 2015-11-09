// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TerritoryConfig.proto

#ifndef PROTOBUF_TerritoryConfig_2eproto__INCLUDED
#define PROTOBUF_TerritoryConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_TerritoryConfig_2eproto();
void protobuf_AssignDesc_TerritoryConfig_2eproto();
void protobuf_ShutdownFile_TerritoryConfig_2eproto();

class TerritoryConfig;

// ===================================================================

class TerritoryConfig : public ::google::protobuf::Message {
 public:
  TerritoryConfig();
  virtual ~TerritoryConfig();

  TerritoryConfig(const TerritoryConfig& from);

  inline TerritoryConfig& operator=(const TerritoryConfig& from) {
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
  static const TerritoryConfig& default_instance();

  void Swap(TerritoryConfig* other);

  // implements Message ----------------------------------------------

  TerritoryConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TerritoryConfig& from);
  void MergeFrom(const TerritoryConfig& from);
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

  // repeated .DianShiTech.Config.ConfigTypeGroup territory = 2;
  inline int territory_size() const;
  inline void clear_territory();
  static const int kTerritoryFieldNumber = 2;
  inline const ::DianShiTech::Config::ConfigTypeGroup& territory(int index) const;
  inline ::DianShiTech::Config::ConfigTypeGroup* mutable_territory(int index);
  inline ::DianShiTech::Config::ConfigTypeGroup* add_territory();
  inline const ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >&
      territory() const;
  inline ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >*
      mutable_territory();

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.TerritoryConfig)
 private:
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup > territory_;
  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_TerritoryConfig_2eproto();
  friend void protobuf_AssignDesc_TerritoryConfig_2eproto();
  friend void protobuf_ShutdownFile_TerritoryConfig_2eproto();

  void InitAsDefaultInstance();
  static TerritoryConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// TerritoryConfig

// optional int32 id = 1;
inline bool TerritoryConfig::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TerritoryConfig::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TerritoryConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TerritoryConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 TerritoryConfig::id() const {
  return id_;
}
inline void TerritoryConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// repeated .DianShiTech.Config.ConfigTypeGroup territory = 2;
inline int TerritoryConfig::territory_size() const {
  return territory_.size();
}
inline void TerritoryConfig::clear_territory() {
  territory_.Clear();
}
inline const ::DianShiTech::Config::ConfigTypeGroup& TerritoryConfig::territory(int index) const {
  return territory_.Get(index);
}
inline ::DianShiTech::Config::ConfigTypeGroup* TerritoryConfig::mutable_territory(int index) {
  return territory_.Mutable(index);
}
inline ::DianShiTech::Config::ConfigTypeGroup* TerritoryConfig::add_territory() {
  return territory_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >&
TerritoryConfig::territory() const {
  return territory_;
}
inline ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >*
TerritoryConfig::mutable_territory() {
  return &territory_;
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

#endif  // PROTOBUF_TerritoryConfig_2eproto__INCLUDED
