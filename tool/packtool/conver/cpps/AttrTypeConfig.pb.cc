// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AttrTypeConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "AttrTypeConfig.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace DianShiTech {
namespace Config {

namespace {

const ::google::protobuf::Descriptor* AttrTypeConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AttrTypeConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_AttrTypeConfig_2eproto() {
  protobuf_AddDesc_AttrTypeConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "AttrTypeConfig.proto");
  GOOGLE_CHECK(file != NULL);
  AttrTypeConfig_descriptor_ = file->message_type(0);
  static const int AttrTypeConfig_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttrTypeConfig, atk_fix_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttrTypeConfig, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttrTypeConfig, str_fix_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttrTypeConfig, hp_fix_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttrTypeConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttrTypeConfig, level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttrTypeConfig, dom_fix_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttrTypeConfig, int_fix_),
  };
  AttrTypeConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AttrTypeConfig_descriptor_,
      AttrTypeConfig::default_instance_,
      AttrTypeConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttrTypeConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttrTypeConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AttrTypeConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_AttrTypeConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AttrTypeConfig_descriptor_, &AttrTypeConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_AttrTypeConfig_2eproto() {
  delete AttrTypeConfig::default_instance_;
  delete AttrTypeConfig_reflection_;
}

void protobuf_AddDesc_AttrTypeConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024AttrTypeConfig.proto\022\022DianShiTech.Conf"
    "ig\032\025ConfigTypeGroup.proto\"\215\001\n\016AttrTypeCo"
    "nfig\022\017\n\007atk_fix\030\007 \001(\005\022\014\n\004type\030\002 \001(\005\022\017\n\007s"
    "tr_fix\030\004 \001(\005\022\016\n\006hp_fix\030\010 \001(\005\022\n\n\002id\030\001 \001(\005"
    "\022\r\n\005level\030\003 \001(\005\022\017\n\007dom_fix\030\006 \001(\005\022\017\n\007int_"
    "fix\030\005 \001(\005", 209);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "AttrTypeConfig.proto", &protobuf_RegisterTypes);
  AttrTypeConfig::default_instance_ = new AttrTypeConfig();
  AttrTypeConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_AttrTypeConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_AttrTypeConfig_2eproto {
  StaticDescriptorInitializer_AttrTypeConfig_2eproto() {
    protobuf_AddDesc_AttrTypeConfig_2eproto();
  }
} static_descriptor_initializer_AttrTypeConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int AttrTypeConfig::kAtkFixFieldNumber;
const int AttrTypeConfig::kTypeFieldNumber;
const int AttrTypeConfig::kStrFixFieldNumber;
const int AttrTypeConfig::kHpFixFieldNumber;
const int AttrTypeConfig::kIdFieldNumber;
const int AttrTypeConfig::kLevelFieldNumber;
const int AttrTypeConfig::kDomFixFieldNumber;
const int AttrTypeConfig::kIntFixFieldNumber;
#endif  // !_MSC_VER

AttrTypeConfig::AttrTypeConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void AttrTypeConfig::InitAsDefaultInstance() {
}

AttrTypeConfig::AttrTypeConfig(const AttrTypeConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void AttrTypeConfig::SharedCtor() {
  _cached_size_ = 0;
  atk_fix_ = 0;
  type_ = 0;
  str_fix_ = 0;
  hp_fix_ = 0;
  id_ = 0;
  level_ = 0;
  dom_fix_ = 0;
  int_fix_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AttrTypeConfig::~AttrTypeConfig() {
  SharedDtor();
}

void AttrTypeConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AttrTypeConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AttrTypeConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AttrTypeConfig_descriptor_;
}

const AttrTypeConfig& AttrTypeConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_AttrTypeConfig_2eproto();
  return *default_instance_;
}

AttrTypeConfig* AttrTypeConfig::default_instance_ = NULL;

AttrTypeConfig* AttrTypeConfig::New() const {
  return new AttrTypeConfig;
}

void AttrTypeConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    atk_fix_ = 0;
    type_ = 0;
    str_fix_ = 0;
    hp_fix_ = 0;
    id_ = 0;
    level_ = 0;
    dom_fix_ = 0;
    int_fix_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AttrTypeConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_type;
        break;
      }

      // optional int32 type = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_level;
        break;
      }

      // optional int32 level = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &level_)));
          set_has_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_str_fix;
        break;
      }

      // optional int32 str_fix = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_str_fix:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &str_fix_)));
          set_has_str_fix();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_int_fix;
        break;
      }

      // optional int32 int_fix = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_int_fix:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &int_fix_)));
          set_has_int_fix();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_dom_fix;
        break;
      }

      // optional int32 dom_fix = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_dom_fix:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &dom_fix_)));
          set_has_dom_fix();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_atk_fix;
        break;
      }

      // optional int32 atk_fix = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_atk_fix:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &atk_fix_)));
          set_has_atk_fix();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_hp_fix;
        break;
      }

      // optional int32 hp_fix = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_hp_fix:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &hp_fix_)));
          set_has_hp_fix();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void AttrTypeConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 type = 2;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->type(), output);
  }

  // optional int32 level = 3;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->level(), output);
  }

  // optional int32 str_fix = 4;
  if (has_str_fix()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->str_fix(), output);
  }

  // optional int32 int_fix = 5;
  if (has_int_fix()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->int_fix(), output);
  }

  // optional int32 dom_fix = 6;
  if (has_dom_fix()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->dom_fix(), output);
  }

  // optional int32 atk_fix = 7;
  if (has_atk_fix()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->atk_fix(), output);
  }

  // optional int32 hp_fix = 8;
  if (has_hp_fix()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->hp_fix(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* AttrTypeConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 type = 2;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->type(), target);
  }

  // optional int32 level = 3;
  if (has_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->level(), target);
  }

  // optional int32 str_fix = 4;
  if (has_str_fix()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->str_fix(), target);
  }

  // optional int32 int_fix = 5;
  if (has_int_fix()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->int_fix(), target);
  }

  // optional int32 dom_fix = 6;
  if (has_dom_fix()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->dom_fix(), target);
  }

  // optional int32 atk_fix = 7;
  if (has_atk_fix()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->atk_fix(), target);
  }

  // optional int32 hp_fix = 8;
  if (has_hp_fix()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->hp_fix(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int AttrTypeConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 atk_fix = 7;
    if (has_atk_fix()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->atk_fix());
    }

    // optional int32 type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }

    // optional int32 str_fix = 4;
    if (has_str_fix()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->str_fix());
    }

    // optional int32 hp_fix = 8;
    if (has_hp_fix()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->hp_fix());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 level = 3;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->level());
    }

    // optional int32 dom_fix = 6;
    if (has_dom_fix()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->dom_fix());
    }

    // optional int32 int_fix = 5;
    if (has_int_fix()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->int_fix());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AttrTypeConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AttrTypeConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AttrTypeConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AttrTypeConfig::MergeFrom(const AttrTypeConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_atk_fix()) {
      set_atk_fix(from.atk_fix());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_str_fix()) {
      set_str_fix(from.str_fix());
    }
    if (from.has_hp_fix()) {
      set_hp_fix(from.hp_fix());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_level()) {
      set_level(from.level());
    }
    if (from.has_dom_fix()) {
      set_dom_fix(from.dom_fix());
    }
    if (from.has_int_fix()) {
      set_int_fix(from.int_fix());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AttrTypeConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AttrTypeConfig::CopyFrom(const AttrTypeConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AttrTypeConfig::IsInitialized() const {

  return true;
}

void AttrTypeConfig::Swap(AttrTypeConfig* other) {
  if (other != this) {
    std::swap(atk_fix_, other->atk_fix_);
    std::swap(type_, other->type_);
    std::swap(str_fix_, other->str_fix_);
    std::swap(hp_fix_, other->hp_fix_);
    std::swap(id_, other->id_);
    std::swap(level_, other->level_);
    std::swap(dom_fix_, other->dom_fix_);
    std::swap(int_fix_, other->int_fix_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AttrTypeConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AttrTypeConfig_descriptor_;
  metadata.reflection = AttrTypeConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
