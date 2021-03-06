// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SequenceAnimsConfig.proto

#ifndef PROTOBUF_SequenceAnimsConfig_2eproto__INCLUDED
#define PROTOBUF_SequenceAnimsConfig_2eproto__INCLUDED

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
void  protobuf_AddDesc_SequenceAnimsConfig_2eproto();
void protobuf_AssignDesc_SequenceAnimsConfig_2eproto();
void protobuf_ShutdownFile_SequenceAnimsConfig_2eproto();

class SequenceAnimsConfig;

// ===================================================================

class SequenceAnimsConfig : public ::google::protobuf::Message {
 public:
  SequenceAnimsConfig();
  virtual ~SequenceAnimsConfig();

  SequenceAnimsConfig(const SequenceAnimsConfig& from);

  inline SequenceAnimsConfig& operator=(const SequenceAnimsConfig& from) {
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
  static const SequenceAnimsConfig& default_instance();

  void Swap(SequenceAnimsConfig* other);

  // implements Message ----------------------------------------------

  SequenceAnimsConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SequenceAnimsConfig& from);
  void MergeFrom(const SequenceAnimsConfig& from);
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

  // optional int32 offsety = 5;
  inline bool has_offsety() const;
  inline void clear_offsety();
  static const int kOffsetyFieldNumber = 5;
  inline ::google::protobuf::int32 offsety() const;
  inline void set_offsety(::google::protobuf::int32 value);

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional int32 duration = 12;
  inline bool has_duration() const;
  inline void clear_duration();
  static const int kDurationFieldNumber = 12;
  inline ::google::protobuf::int32 duration() const;
  inline void set_duration(::google::protobuf::int32 value);

  // repeated int32 plists = 8;
  inline int plists_size() const;
  inline void clear_plists();
  static const int kPlistsFieldNumber = 8;
  inline ::google::protobuf::int32 plists(int index) const;
  inline void set_plists(int index, ::google::protobuf::int32 value);
  inline void add_plists(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      plists() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_plists();

  // optional string folder = 2;
  inline bool has_folder() const;
  inline void clear_folder();
  static const int kFolderFieldNumber = 2;
  inline const ::std::string& folder() const;
  inline void set_folder(const ::std::string& value);
  inline void set_folder(const char* value);
  inline void set_folder(const char* value, size_t size);
  inline ::std::string* mutable_folder();
  inline ::std::string* release_folder();
  inline void set_allocated_folder(::std::string* folder);

  // optional int32 isloop = 13;
  inline bool has_isloop() const;
  inline void clear_isloop();
  static const int kIsloopFieldNumber = 13;
  inline ::google::protobuf::int32 isloop() const;
  inline void set_isloop(::google::protobuf::int32 value);

  // optional int32 to = 11;
  inline bool has_to() const;
  inline void clear_to();
  static const int kToFieldNumber = 11;
  inline ::google::protobuf::int32 to() const;
  inline void set_to(::google::protobuf::int32 value);

  // optional int32 from = 10;
  inline bool has_from() const;
  inline void clear_from();
  static const int kFromFieldNumber = 10;
  inline ::google::protobuf::int32 from() const;
  inline void set_from(::google::protobuf::int32 value);

  // optional string pattern = 9;
  inline bool has_pattern() const;
  inline void clear_pattern();
  static const int kPatternFieldNumber = 9;
  inline const ::std::string& pattern() const;
  inline void set_pattern(const ::std::string& value);
  inline void set_pattern(const char* value);
  inline void set_pattern(const char* value, size_t size);
  inline ::std::string* mutable_pattern();
  inline ::std::string* release_pattern();
  inline void set_allocated_pattern(::std::string* pattern);

  // optional int32 offsetx = 4;
  inline bool has_offsetx() const;
  inline void clear_offsetx();
  static const int kOffsetxFieldNumber = 4;
  inline ::google::protobuf::int32 offsetx() const;
  inline void set_offsetx(::google::protobuf::int32 value);

  // optional int32 scale = 7;
  inline bool has_scale() const;
  inline void clear_scale();
  static const int kScaleFieldNumber = 7;
  inline ::google::protobuf::int32 scale() const;
  inline void set_scale(::google::protobuf::int32 value);

  // optional int32 is_flip_y = 6;
  inline bool has_is_flip_y() const;
  inline void clear_is_flip_y();
  static const int kIsFlipYFieldNumber = 6;
  inline ::google::protobuf::int32 is_flip_y() const;
  inline void set_is_flip_y(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DianShiTech.Config.SequenceAnimsConfig)
 private:
  inline void set_has_offsety();
  inline void clear_has_offsety();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_duration();
  inline void clear_has_duration();
  inline void set_has_folder();
  inline void clear_has_folder();
  inline void set_has_isloop();
  inline void clear_has_isloop();
  inline void set_has_to();
  inline void clear_has_to();
  inline void set_has_from();
  inline void clear_has_from();
  inline void set_has_pattern();
  inline void clear_has_pattern();
  inline void set_has_offsetx();
  inline void clear_has_offsetx();
  inline void set_has_scale();
  inline void clear_has_scale();
  inline void set_has_is_flip_y();
  inline void clear_has_is_flip_y();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 offsety_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > plists_;
  ::google::protobuf::int32 duration_;
  ::google::protobuf::int32 isloop_;
  ::std::string* folder_;
  ::google::protobuf::int32 to_;
  ::google::protobuf::int32 from_;
  ::std::string* pattern_;
  ::google::protobuf::int32 offsetx_;
  ::google::protobuf::int32 scale_;
  ::google::protobuf::int32 is_flip_y_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(12 + 31) / 32];

  friend void  protobuf_AddDesc_SequenceAnimsConfig_2eproto();
  friend void protobuf_AssignDesc_SequenceAnimsConfig_2eproto();
  friend void protobuf_ShutdownFile_SequenceAnimsConfig_2eproto();

  void InitAsDefaultInstance();
  static SequenceAnimsConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// SequenceAnimsConfig

// optional int32 offsety = 5;
inline bool SequenceAnimsConfig::has_offsety() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SequenceAnimsConfig::set_has_offsety() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SequenceAnimsConfig::clear_has_offsety() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SequenceAnimsConfig::clear_offsety() {
  offsety_ = 0;
  clear_has_offsety();
}
inline ::google::protobuf::int32 SequenceAnimsConfig::offsety() const {
  return offsety_;
}
inline void SequenceAnimsConfig::set_offsety(::google::protobuf::int32 value) {
  set_has_offsety();
  offsety_ = value;
}

// optional int32 id = 1;
inline bool SequenceAnimsConfig::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SequenceAnimsConfig::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SequenceAnimsConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SequenceAnimsConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 SequenceAnimsConfig::id() const {
  return id_;
}
inline void SequenceAnimsConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 duration = 12;
inline bool SequenceAnimsConfig::has_duration() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SequenceAnimsConfig::set_has_duration() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SequenceAnimsConfig::clear_has_duration() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SequenceAnimsConfig::clear_duration() {
  duration_ = 0;
  clear_has_duration();
}
inline ::google::protobuf::int32 SequenceAnimsConfig::duration() const {
  return duration_;
}
inline void SequenceAnimsConfig::set_duration(::google::protobuf::int32 value) {
  set_has_duration();
  duration_ = value;
}

// repeated int32 plists = 8;
inline int SequenceAnimsConfig::plists_size() const {
  return plists_.size();
}
inline void SequenceAnimsConfig::clear_plists() {
  plists_.Clear();
}
inline ::google::protobuf::int32 SequenceAnimsConfig::plists(int index) const {
  return plists_.Get(index);
}
inline void SequenceAnimsConfig::set_plists(int index, ::google::protobuf::int32 value) {
  plists_.Set(index, value);
}
inline void SequenceAnimsConfig::add_plists(::google::protobuf::int32 value) {
  plists_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
SequenceAnimsConfig::plists() const {
  return plists_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
SequenceAnimsConfig::mutable_plists() {
  return &plists_;
}

// optional string folder = 2;
inline bool SequenceAnimsConfig::has_folder() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SequenceAnimsConfig::set_has_folder() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SequenceAnimsConfig::clear_has_folder() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SequenceAnimsConfig::clear_folder() {
  if (folder_ != &::google::protobuf::internal::kEmptyString) {
    folder_->clear();
  }
  clear_has_folder();
}
inline const ::std::string& SequenceAnimsConfig::folder() const {
  return *folder_;
}
inline void SequenceAnimsConfig::set_folder(const ::std::string& value) {
  set_has_folder();
  if (folder_ == &::google::protobuf::internal::kEmptyString) {
    folder_ = new ::std::string;
  }
  folder_->assign(value);
}
inline void SequenceAnimsConfig::set_folder(const char* value) {
  set_has_folder();
  if (folder_ == &::google::protobuf::internal::kEmptyString) {
    folder_ = new ::std::string;
  }
  folder_->assign(value);
}
inline void SequenceAnimsConfig::set_folder(const char* value, size_t size) {
  set_has_folder();
  if (folder_ == &::google::protobuf::internal::kEmptyString) {
    folder_ = new ::std::string;
  }
  folder_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SequenceAnimsConfig::mutable_folder() {
  set_has_folder();
  if (folder_ == &::google::protobuf::internal::kEmptyString) {
    folder_ = new ::std::string;
  }
  return folder_;
}
inline ::std::string* SequenceAnimsConfig::release_folder() {
  clear_has_folder();
  if (folder_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = folder_;
    folder_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SequenceAnimsConfig::set_allocated_folder(::std::string* folder) {
  if (folder_ != &::google::protobuf::internal::kEmptyString) {
    delete folder_;
  }
  if (folder) {
    set_has_folder();
    folder_ = folder;
  } else {
    clear_has_folder();
    folder_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 isloop = 13;
inline bool SequenceAnimsConfig::has_isloop() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SequenceAnimsConfig::set_has_isloop() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SequenceAnimsConfig::clear_has_isloop() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SequenceAnimsConfig::clear_isloop() {
  isloop_ = 0;
  clear_has_isloop();
}
inline ::google::protobuf::int32 SequenceAnimsConfig::isloop() const {
  return isloop_;
}
inline void SequenceAnimsConfig::set_isloop(::google::protobuf::int32 value) {
  set_has_isloop();
  isloop_ = value;
}

// optional int32 to = 11;
inline bool SequenceAnimsConfig::has_to() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SequenceAnimsConfig::set_has_to() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SequenceAnimsConfig::clear_has_to() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SequenceAnimsConfig::clear_to() {
  to_ = 0;
  clear_has_to();
}
inline ::google::protobuf::int32 SequenceAnimsConfig::to() const {
  return to_;
}
inline void SequenceAnimsConfig::set_to(::google::protobuf::int32 value) {
  set_has_to();
  to_ = value;
}

// optional int32 from = 10;
inline bool SequenceAnimsConfig::has_from() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void SequenceAnimsConfig::set_has_from() {
  _has_bits_[0] |= 0x00000080u;
}
inline void SequenceAnimsConfig::clear_has_from() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void SequenceAnimsConfig::clear_from() {
  from_ = 0;
  clear_has_from();
}
inline ::google::protobuf::int32 SequenceAnimsConfig::from() const {
  return from_;
}
inline void SequenceAnimsConfig::set_from(::google::protobuf::int32 value) {
  set_has_from();
  from_ = value;
}

// optional string pattern = 9;
inline bool SequenceAnimsConfig::has_pattern() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void SequenceAnimsConfig::set_has_pattern() {
  _has_bits_[0] |= 0x00000100u;
}
inline void SequenceAnimsConfig::clear_has_pattern() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void SequenceAnimsConfig::clear_pattern() {
  if (pattern_ != &::google::protobuf::internal::kEmptyString) {
    pattern_->clear();
  }
  clear_has_pattern();
}
inline const ::std::string& SequenceAnimsConfig::pattern() const {
  return *pattern_;
}
inline void SequenceAnimsConfig::set_pattern(const ::std::string& value) {
  set_has_pattern();
  if (pattern_ == &::google::protobuf::internal::kEmptyString) {
    pattern_ = new ::std::string;
  }
  pattern_->assign(value);
}
inline void SequenceAnimsConfig::set_pattern(const char* value) {
  set_has_pattern();
  if (pattern_ == &::google::protobuf::internal::kEmptyString) {
    pattern_ = new ::std::string;
  }
  pattern_->assign(value);
}
inline void SequenceAnimsConfig::set_pattern(const char* value, size_t size) {
  set_has_pattern();
  if (pattern_ == &::google::protobuf::internal::kEmptyString) {
    pattern_ = new ::std::string;
  }
  pattern_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SequenceAnimsConfig::mutable_pattern() {
  set_has_pattern();
  if (pattern_ == &::google::protobuf::internal::kEmptyString) {
    pattern_ = new ::std::string;
  }
  return pattern_;
}
inline ::std::string* SequenceAnimsConfig::release_pattern() {
  clear_has_pattern();
  if (pattern_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = pattern_;
    pattern_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SequenceAnimsConfig::set_allocated_pattern(::std::string* pattern) {
  if (pattern_ != &::google::protobuf::internal::kEmptyString) {
    delete pattern_;
  }
  if (pattern) {
    set_has_pattern();
    pattern_ = pattern;
  } else {
    clear_has_pattern();
    pattern_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 offsetx = 4;
inline bool SequenceAnimsConfig::has_offsetx() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void SequenceAnimsConfig::set_has_offsetx() {
  _has_bits_[0] |= 0x00000200u;
}
inline void SequenceAnimsConfig::clear_has_offsetx() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void SequenceAnimsConfig::clear_offsetx() {
  offsetx_ = 0;
  clear_has_offsetx();
}
inline ::google::protobuf::int32 SequenceAnimsConfig::offsetx() const {
  return offsetx_;
}
inline void SequenceAnimsConfig::set_offsetx(::google::protobuf::int32 value) {
  set_has_offsetx();
  offsetx_ = value;
}

// optional int32 scale = 7;
inline bool SequenceAnimsConfig::has_scale() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void SequenceAnimsConfig::set_has_scale() {
  _has_bits_[0] |= 0x00000400u;
}
inline void SequenceAnimsConfig::clear_has_scale() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void SequenceAnimsConfig::clear_scale() {
  scale_ = 0;
  clear_has_scale();
}
inline ::google::protobuf::int32 SequenceAnimsConfig::scale() const {
  return scale_;
}
inline void SequenceAnimsConfig::set_scale(::google::protobuf::int32 value) {
  set_has_scale();
  scale_ = value;
}

// optional int32 is_flip_y = 6;
inline bool SequenceAnimsConfig::has_is_flip_y() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void SequenceAnimsConfig::set_has_is_flip_y() {
  _has_bits_[0] |= 0x00000800u;
}
inline void SequenceAnimsConfig::clear_has_is_flip_y() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void SequenceAnimsConfig::clear_is_flip_y() {
  is_flip_y_ = 0;
  clear_has_is_flip_y();
}
inline ::google::protobuf::int32 SequenceAnimsConfig::is_flip_y() const {
  return is_flip_y_;
}
inline void SequenceAnimsConfig::set_is_flip_y(::google::protobuf::int32 value) {
  set_has_is_flip_y();
  is_flip_y_ = value;
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

#endif  // PROTOBUF_SequenceAnimsConfig_2eproto__INCLUDED
