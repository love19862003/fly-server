// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ChapterConfig.proto

#ifndef PROTOBUF_ChapterConfig_2eproto__INCLUDED
#define PROTOBUF_ChapterConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_ChapterConfig_2eproto();
void protobuf_AssignDesc_ChapterConfig_2eproto();
void protobuf_ShutdownFile_ChapterConfig_2eproto();

class ChapterConfig;

// ===================================================================

class ChapterConfig : public ::google::protobuf::Message {
 public:
  ChapterConfig();
  virtual ~ChapterConfig();

  ChapterConfig(const ChapterConfig& from);

  inline ChapterConfig& operator=(const ChapterConfig& from) {
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
  static const ChapterConfig& default_instance();

  void Swap(ChapterConfig* other);

  // implements Message ----------------------------------------------

  ChapterConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ChapterConfig& from);
  void MergeFrom(const ChapterConfig& from);
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

  // repeated int32 map_flag_boss = 7;
  inline int map_flag_boss_size() const;
  inline void clear_map_flag_boss();
  static const int kMapFlagBossFieldNumber = 7;
  inline ::google::protobuf::int32 map_flag_boss(int index) const;
  inline void set_map_flag_boss(int index, ::google::protobuf::int32 value);
  inline void add_map_flag_boss(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      map_flag_boss() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_map_flag_boss();

  // optional int32 stage_effect = 12;
  inline bool has_stage_effect() const;
  inline void clear_stage_effect();
  static const int kStageEffectFieldNumber = 12;
  inline ::google::protobuf::int32 stage_effect() const;
  inline void set_stage_effect(::google::protobuf::int32 value);

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // repeated .DianShiTech.Config.ConfigTypeGroup checkpoint_pos = 11;
  inline int checkpoint_pos_size() const;
  inline void clear_checkpoint_pos();
  static const int kCheckpointPosFieldNumber = 11;
  inline const ::DianShiTech::Config::ConfigTypeGroup& checkpoint_pos(int index) const;
  inline ::DianShiTech::Config::ConfigTypeGroup* mutable_checkpoint_pos(int index);
  inline ::DianShiTech::Config::ConfigTypeGroup* add_checkpoint_pos();
  inline const ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >&
      checkpoint_pos() const;
  inline ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >*
      mutable_checkpoint_pos();

  // repeated .DianShiTech.Config.ConfigTypeGroup stage_type2_order = 5;
  inline int stage_type2_order_size() const;
  inline void clear_stage_type2_order();
  static const int kStageType2OrderFieldNumber = 5;
  inline const ::DianShiTech::Config::ConfigTypeGroup& stage_type2_order(int index) const;
  inline ::DianShiTech::Config::ConfigTypeGroup* mutable_stage_type2_order(int index);
  inline ::DianShiTech::Config::ConfigTypeGroup* add_stage_type2_order();
  inline const ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >&
      stage_type2_order() const;
  inline ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >*
      mutable_stage_type2_order();

  // repeated int32 map_flag_hide = 6;
  inline int map_flag_hide_size() const;
  inline void clear_map_flag_hide();
  static const int kMapFlagHideFieldNumber = 6;
  inline ::google::protobuf::int32 map_flag_hide(int index) const;
  inline void set_map_flag_hide(int index, ::google::protobuf::int32 value);
  inline void add_map_flag_hide(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      map_flag_hide() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_map_flag_hide();

  // repeated int32 checkpoint_icons = 10;
  inline int checkpoint_icons_size() const;
  inline void clear_checkpoint_icons();
  static const int kCheckpointIconsFieldNumber = 10;
  inline ::google::protobuf::int32 checkpoint_icons(int index) const;
  inline void set_checkpoint_icons(int index, ::google::protobuf::int32 value);
  inline void add_checkpoint_icons(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      checkpoint_icons() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_checkpoint_icons();

  // optional string chapter_name = 2;
  inline bool has_chapter_name() const;
  inline void clear_chapter_name();
  static const int kChapterNameFieldNumber = 2;
  inline const ::std::string& chapter_name() const;
  inline void set_chapter_name(const ::std::string& value);
  inline void set_chapter_name(const char* value);
  inline void set_chapter_name(const char* value, size_t size);
  inline ::std::string* mutable_chapter_name();
  inline ::std::string* release_chapter_name();
  inline void set_allocated_chapter_name(::std::string* chapter_name);

  // optional int32 map_line_res = 9;
  inline bool has_map_line_res() const;
  inline void clear_map_line_res();
  static const int kMapLineResFieldNumber = 9;
  inline ::google::protobuf::int32 map_line_res() const;
  inline void set_map_line_res(::google::protobuf::int32 value);

  // optional int32 auto_next_chapter = 3;
  inline bool has_auto_next_chapter() const;
  inline void clear_auto_next_chapter();
  static const int kAutoNextChapterFieldNumber = 3;
  inline ::google::protobuf::int32 auto_next_chapter() const;
  inline void set_auto_next_chapter(::google::protobuf::int32 value);

  // optional int32 map_res = 8;
  inline bool has_map_res() const;
  inline void clear_map_res();
  static const int kMapResFieldNumber = 8;
  inline ::google::protobuf::int32 map_res() const;
  inline void set_map_res(::google::protobuf::int32 value);

  // repeated .DianShiTech.Config.ConfigTypeGroup stage_type1_order = 4;
  inline int stage_type1_order_size() const;
  inline void clear_stage_type1_order();
  static const int kStageType1OrderFieldNumber = 4;
  inline const ::DianShiTech::Config::ConfigTypeGroup& stage_type1_order(int index) const;
  inline ::DianShiTech::Config::ConfigTypeGroup* mutable_stage_type1_order(int index);
  inline ::DianShiTech::Config::ConfigTypeGroup* add_stage_type1_order();
  inline const ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >&
      stage_type1_order() const;
  inline ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >*
      mutable_stage_type1_order();

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.ChapterConfig)
 private:
  inline void set_has_stage_effect();
  inline void clear_has_stage_effect();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_chapter_name();
  inline void clear_has_chapter_name();
  inline void set_has_map_line_res();
  inline void clear_has_map_line_res();
  inline void set_has_auto_next_chapter();
  inline void clear_has_auto_next_chapter();
  inline void set_has_map_res();
  inline void clear_has_map_res();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > map_flag_boss_;
  ::google::protobuf::int32 stage_effect_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup > checkpoint_pos_;
  ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup > stage_type2_order_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > map_flag_hide_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > checkpoint_icons_;
  ::std::string* chapter_name_;
  ::google::protobuf::int32 map_line_res_;
  ::google::protobuf::int32 auto_next_chapter_;
  ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup > stage_type1_order_;
  ::google::protobuf::int32 map_res_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(12 + 31) / 32];

  friend void  protobuf_AddDesc_ChapterConfig_2eproto();
  friend void protobuf_AssignDesc_ChapterConfig_2eproto();
  friend void protobuf_ShutdownFile_ChapterConfig_2eproto();

  void InitAsDefaultInstance();
  static ChapterConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// ChapterConfig

// repeated int32 map_flag_boss = 7;
inline int ChapterConfig::map_flag_boss_size() const {
  return map_flag_boss_.size();
}
inline void ChapterConfig::clear_map_flag_boss() {
  map_flag_boss_.Clear();
}
inline ::google::protobuf::int32 ChapterConfig::map_flag_boss(int index) const {
  return map_flag_boss_.Get(index);
}
inline void ChapterConfig::set_map_flag_boss(int index, ::google::protobuf::int32 value) {
  map_flag_boss_.Set(index, value);
}
inline void ChapterConfig::add_map_flag_boss(::google::protobuf::int32 value) {
  map_flag_boss_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ChapterConfig::map_flag_boss() const {
  return map_flag_boss_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ChapterConfig::mutable_map_flag_boss() {
  return &map_flag_boss_;
}

// optional int32 stage_effect = 12;
inline bool ChapterConfig::has_stage_effect() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ChapterConfig::set_has_stage_effect() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ChapterConfig::clear_has_stage_effect() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ChapterConfig::clear_stage_effect() {
  stage_effect_ = 0;
  clear_has_stage_effect();
}
inline ::google::protobuf::int32 ChapterConfig::stage_effect() const {
  return stage_effect_;
}
inline void ChapterConfig::set_stage_effect(::google::protobuf::int32 value) {
  set_has_stage_effect();
  stage_effect_ = value;
}

// optional int32 id = 1;
inline bool ChapterConfig::has_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ChapterConfig::set_has_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ChapterConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ChapterConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 ChapterConfig::id() const {
  return id_;
}
inline void ChapterConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// repeated .DianShiTech.Config.ConfigTypeGroup checkpoint_pos = 11;
inline int ChapterConfig::checkpoint_pos_size() const {
  return checkpoint_pos_.size();
}
inline void ChapterConfig::clear_checkpoint_pos() {
  checkpoint_pos_.Clear();
}
inline const ::DianShiTech::Config::ConfigTypeGroup& ChapterConfig::checkpoint_pos(int index) const {
  return checkpoint_pos_.Get(index);
}
inline ::DianShiTech::Config::ConfigTypeGroup* ChapterConfig::mutable_checkpoint_pos(int index) {
  return checkpoint_pos_.Mutable(index);
}
inline ::DianShiTech::Config::ConfigTypeGroup* ChapterConfig::add_checkpoint_pos() {
  return checkpoint_pos_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >&
ChapterConfig::checkpoint_pos() const {
  return checkpoint_pos_;
}
inline ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >*
ChapterConfig::mutable_checkpoint_pos() {
  return &checkpoint_pos_;
}

// repeated .DianShiTech.Config.ConfigTypeGroup stage_type2_order = 5;
inline int ChapterConfig::stage_type2_order_size() const {
  return stage_type2_order_.size();
}
inline void ChapterConfig::clear_stage_type2_order() {
  stage_type2_order_.Clear();
}
inline const ::DianShiTech::Config::ConfigTypeGroup& ChapterConfig::stage_type2_order(int index) const {
  return stage_type2_order_.Get(index);
}
inline ::DianShiTech::Config::ConfigTypeGroup* ChapterConfig::mutable_stage_type2_order(int index) {
  return stage_type2_order_.Mutable(index);
}
inline ::DianShiTech::Config::ConfigTypeGroup* ChapterConfig::add_stage_type2_order() {
  return stage_type2_order_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >&
ChapterConfig::stage_type2_order() const {
  return stage_type2_order_;
}
inline ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >*
ChapterConfig::mutable_stage_type2_order() {
  return &stage_type2_order_;
}

// repeated int32 map_flag_hide = 6;
inline int ChapterConfig::map_flag_hide_size() const {
  return map_flag_hide_.size();
}
inline void ChapterConfig::clear_map_flag_hide() {
  map_flag_hide_.Clear();
}
inline ::google::protobuf::int32 ChapterConfig::map_flag_hide(int index) const {
  return map_flag_hide_.Get(index);
}
inline void ChapterConfig::set_map_flag_hide(int index, ::google::protobuf::int32 value) {
  map_flag_hide_.Set(index, value);
}
inline void ChapterConfig::add_map_flag_hide(::google::protobuf::int32 value) {
  map_flag_hide_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ChapterConfig::map_flag_hide() const {
  return map_flag_hide_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ChapterConfig::mutable_map_flag_hide() {
  return &map_flag_hide_;
}

// repeated int32 checkpoint_icons = 10;
inline int ChapterConfig::checkpoint_icons_size() const {
  return checkpoint_icons_.size();
}
inline void ChapterConfig::clear_checkpoint_icons() {
  checkpoint_icons_.Clear();
}
inline ::google::protobuf::int32 ChapterConfig::checkpoint_icons(int index) const {
  return checkpoint_icons_.Get(index);
}
inline void ChapterConfig::set_checkpoint_icons(int index, ::google::protobuf::int32 value) {
  checkpoint_icons_.Set(index, value);
}
inline void ChapterConfig::add_checkpoint_icons(::google::protobuf::int32 value) {
  checkpoint_icons_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ChapterConfig::checkpoint_icons() const {
  return checkpoint_icons_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ChapterConfig::mutable_checkpoint_icons() {
  return &checkpoint_icons_;
}

// optional string chapter_name = 2;
inline bool ChapterConfig::has_chapter_name() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ChapterConfig::set_has_chapter_name() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ChapterConfig::clear_has_chapter_name() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ChapterConfig::clear_chapter_name() {
  if (chapter_name_ != &::google::protobuf::internal::kEmptyString) {
    chapter_name_->clear();
  }
  clear_has_chapter_name();
}
inline const ::std::string& ChapterConfig::chapter_name() const {
  return *chapter_name_;
}
inline void ChapterConfig::set_chapter_name(const ::std::string& value) {
  set_has_chapter_name();
  if (chapter_name_ == &::google::protobuf::internal::kEmptyString) {
    chapter_name_ = new ::std::string;
  }
  chapter_name_->assign(value);
}
inline void ChapterConfig::set_chapter_name(const char* value) {
  set_has_chapter_name();
  if (chapter_name_ == &::google::protobuf::internal::kEmptyString) {
    chapter_name_ = new ::std::string;
  }
  chapter_name_->assign(value);
}
inline void ChapterConfig::set_chapter_name(const char* value, size_t size) {
  set_has_chapter_name();
  if (chapter_name_ == &::google::protobuf::internal::kEmptyString) {
    chapter_name_ = new ::std::string;
  }
  chapter_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ChapterConfig::mutable_chapter_name() {
  set_has_chapter_name();
  if (chapter_name_ == &::google::protobuf::internal::kEmptyString) {
    chapter_name_ = new ::std::string;
  }
  return chapter_name_;
}
inline ::std::string* ChapterConfig::release_chapter_name() {
  clear_has_chapter_name();
  if (chapter_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = chapter_name_;
    chapter_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ChapterConfig::set_allocated_chapter_name(::std::string* chapter_name) {
  if (chapter_name_ != &::google::protobuf::internal::kEmptyString) {
    delete chapter_name_;
  }
  if (chapter_name) {
    set_has_chapter_name();
    chapter_name_ = chapter_name;
  } else {
    clear_has_chapter_name();
    chapter_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 map_line_res = 9;
inline bool ChapterConfig::has_map_line_res() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void ChapterConfig::set_has_map_line_res() {
  _has_bits_[0] |= 0x00000100u;
}
inline void ChapterConfig::clear_has_map_line_res() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void ChapterConfig::clear_map_line_res() {
  map_line_res_ = 0;
  clear_has_map_line_res();
}
inline ::google::protobuf::int32 ChapterConfig::map_line_res() const {
  return map_line_res_;
}
inline void ChapterConfig::set_map_line_res(::google::protobuf::int32 value) {
  set_has_map_line_res();
  map_line_res_ = value;
}

// optional int32 auto_next_chapter = 3;
inline bool ChapterConfig::has_auto_next_chapter() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void ChapterConfig::set_has_auto_next_chapter() {
  _has_bits_[0] |= 0x00000200u;
}
inline void ChapterConfig::clear_has_auto_next_chapter() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void ChapterConfig::clear_auto_next_chapter() {
  auto_next_chapter_ = 0;
  clear_has_auto_next_chapter();
}
inline ::google::protobuf::int32 ChapterConfig::auto_next_chapter() const {
  return auto_next_chapter_;
}
inline void ChapterConfig::set_auto_next_chapter(::google::protobuf::int32 value) {
  set_has_auto_next_chapter();
  auto_next_chapter_ = value;
}

// optional int32 map_res = 8;
inline bool ChapterConfig::has_map_res() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void ChapterConfig::set_has_map_res() {
  _has_bits_[0] |= 0x00000400u;
}
inline void ChapterConfig::clear_has_map_res() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void ChapterConfig::clear_map_res() {
  map_res_ = 0;
  clear_has_map_res();
}
inline ::google::protobuf::int32 ChapterConfig::map_res() const {
  return map_res_;
}
inline void ChapterConfig::set_map_res(::google::protobuf::int32 value) {
  set_has_map_res();
  map_res_ = value;
}

// repeated .DianShiTech.Config.ConfigTypeGroup stage_type1_order = 4;
inline int ChapterConfig::stage_type1_order_size() const {
  return stage_type1_order_.size();
}
inline void ChapterConfig::clear_stage_type1_order() {
  stage_type1_order_.Clear();
}
inline const ::DianShiTech::Config::ConfigTypeGroup& ChapterConfig::stage_type1_order(int index) const {
  return stage_type1_order_.Get(index);
}
inline ::DianShiTech::Config::ConfigTypeGroup* ChapterConfig::mutable_stage_type1_order(int index) {
  return stage_type1_order_.Mutable(index);
}
inline ::DianShiTech::Config::ConfigTypeGroup* ChapterConfig::add_stage_type1_order() {
  return stage_type1_order_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >&
ChapterConfig::stage_type1_order() const {
  return stage_type1_order_;
}
inline ::google::protobuf::RepeatedPtrField< ::DianShiTech::Config::ConfigTypeGroup >*
ChapterConfig::mutable_stage_type1_order() {
  return &stage_type1_order_;
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

#endif  // PROTOBUF_ChapterConfig_2eproto__INCLUDED
