// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ItemCombineConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ItemCombineConfig.pb.h"

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

const ::google::protobuf::Descriptor* ItemCombineConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ItemCombineConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ItemCombineConfig_2eproto() {
  protobuf_AddDesc_ItemCombineConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ItemCombineConfig.proto");
  GOOGLE_CHECK(file != NULL);
  ItemCombineConfig_descriptor_ = file->message_type(0);
  static const int ItemCombineConfig_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemCombineConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemCombineConfig, target_item_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemCombineConfig, consume_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemCombineConfig, count_),
  };
  ItemCombineConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ItemCombineConfig_descriptor_,
      ItemCombineConfig::default_instance_,
      ItemCombineConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemCombineConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemCombineConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ItemCombineConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ItemCombineConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ItemCombineConfig_descriptor_, &ItemCombineConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ItemCombineConfig_2eproto() {
  delete ItemCombineConfig::default_instance_;
  delete ItemCombineConfig_reflection_;
}

void protobuf_AddDesc_ItemCombineConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027ItemCombineConfig.proto\022\022DianShiTech.C"
    "onfig\032\025ConfigTypeGroup.proto\"y\n\021ItemComb"
    "ineConfig\022\n\n\002id\030\001 \001(\005\022\023\n\013target_item\030\003 \001"
    "(\005\0224\n\007consume\030\002 \003(\0132#.DianShiTech.Config"
    ".ConfigTypeGroup\022\r\n\005count\030\004 \001(\005", 191);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ItemCombineConfig.proto", &protobuf_RegisterTypes);
  ItemCombineConfig::default_instance_ = new ItemCombineConfig();
  ItemCombineConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ItemCombineConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ItemCombineConfig_2eproto {
  StaticDescriptorInitializer_ItemCombineConfig_2eproto() {
    protobuf_AddDesc_ItemCombineConfig_2eproto();
  }
} static_descriptor_initializer_ItemCombineConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ItemCombineConfig::kIdFieldNumber;
const int ItemCombineConfig::kTargetItemFieldNumber;
const int ItemCombineConfig::kConsumeFieldNumber;
const int ItemCombineConfig::kCountFieldNumber;
#endif  // !_MSC_VER

ItemCombineConfig::ItemCombineConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ItemCombineConfig::InitAsDefaultInstance() {
}

ItemCombineConfig::ItemCombineConfig(const ItemCombineConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ItemCombineConfig::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  target_item_ = 0;
  count_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ItemCombineConfig::~ItemCombineConfig() {
  SharedDtor();
}

void ItemCombineConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ItemCombineConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ItemCombineConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ItemCombineConfig_descriptor_;
}

const ItemCombineConfig& ItemCombineConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ItemCombineConfig_2eproto();
  return *default_instance_;
}

ItemCombineConfig* ItemCombineConfig::default_instance_ = NULL;

ItemCombineConfig* ItemCombineConfig::New() const {
  return new ItemCombineConfig;
}

void ItemCombineConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
    target_item_ = 0;
    count_ = 0;
  }
  consume_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ItemCombineConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(18)) goto parse_consume;
        break;
      }

      // repeated .DianShiTech.Config.ConfigTypeGroup consume = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_consume:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_consume()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_consume;
        if (input->ExpectTag(24)) goto parse_target_item;
        break;
      }

      // optional int32 target_item = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_target_item:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &target_item_)));
          set_has_target_item();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_count;
        break;
      }

      // optional int32 count = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &count_)));
          set_has_count();
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

void ItemCombineConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // repeated .DianShiTech.Config.ConfigTypeGroup consume = 2;
  for (int i = 0; i < this->consume_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->consume(i), output);
  }

  // optional int32 target_item = 3;
  if (has_target_item()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->target_item(), output);
  }

  // optional int32 count = 4;
  if (has_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->count(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ItemCombineConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // repeated .DianShiTech.Config.ConfigTypeGroup consume = 2;
  for (int i = 0; i < this->consume_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->consume(i), target);
  }

  // optional int32 target_item = 3;
  if (has_target_item()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->target_item(), target);
  }

  // optional int32 count = 4;
  if (has_count()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->count(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ItemCombineConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 target_item = 3;
    if (has_target_item()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->target_item());
    }

    // optional int32 count = 4;
    if (has_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->count());
    }

  }
  // repeated .DianShiTech.Config.ConfigTypeGroup consume = 2;
  total_size += 1 * this->consume_size();
  for (int i = 0; i < this->consume_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->consume(i));
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

void ItemCombineConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ItemCombineConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ItemCombineConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ItemCombineConfig::MergeFrom(const ItemCombineConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  consume_.MergeFrom(from.consume_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_target_item()) {
      set_target_item(from.target_item());
    }
    if (from.has_count()) {
      set_count(from.count());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ItemCombineConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ItemCombineConfig::CopyFrom(const ItemCombineConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ItemCombineConfig::IsInitialized() const {

  return true;
}

void ItemCombineConfig::Swap(ItemCombineConfig* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(target_item_, other->target_item_);
    consume_.Swap(&other->consume_);
    std::swap(count_, other->count_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ItemCombineConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ItemCombineConfig_descriptor_;
  metadata.reflection = ItemCombineConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
