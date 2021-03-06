// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RobotDataConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RobotDataConfig.pb.h"

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

const ::google::protobuf::Descriptor* RobotDataConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RobotDataConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RobotDataConfig_2eproto() {
  protobuf_AddDesc_RobotDataConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RobotDataConfig.proto");
  GOOGLE_CHECK(file != NULL);
  RobotDataConfig_descriptor_ = file->message_type(0);
  static const int RobotDataConfig_offsets_[11] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotDataConfig, coin_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotDataConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotDataConfig, card2_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotDataConfig, drop_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotDataConfig, card4_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotDataConfig, mine_coin_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotDataConfig, rank_point_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotDataConfig, card5_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotDataConfig, card_count_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotDataConfig, card1_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotDataConfig, card3_),
  };
  RobotDataConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RobotDataConfig_descriptor_,
      RobotDataConfig::default_instance_,
      RobotDataConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotDataConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotDataConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RobotDataConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RobotDataConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RobotDataConfig_descriptor_, &RobotDataConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RobotDataConfig_2eproto() {
  delete RobotDataConfig::default_instance_;
  delete RobotDataConfig_reflection_;
}

void protobuf_AddDesc_RobotDataConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025RobotDataConfig.proto\022\022DianShiTech.Con"
    "fig\032\025ConfigTypeGroup.proto\"\277\001\n\017RobotData"
    "Config\022\014\n\004coin\030\t \001(\005\022\n\n\002id\030\001 \001(\005\022\r\n\005card"
    "2\030\004 \003(\005\022\014\n\004drop\030\013 \001(\005\022\r\n\005card4\030\006 \003(\005\022\021\n\t"
    "mine_coin\030\n \001(\005\022\022\n\nrank_point\030\010 \001(\005\022\r\n\005c"
    "ard5\030\007 \003(\005\022\022\n\ncard_count\030\002 \001(\005\022\r\n\005card1\030"
    "\003 \003(\005\022\r\n\005card3\030\005 \003(\005", 260);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RobotDataConfig.proto", &protobuf_RegisterTypes);
  RobotDataConfig::default_instance_ = new RobotDataConfig();
  RobotDataConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RobotDataConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RobotDataConfig_2eproto {
  StaticDescriptorInitializer_RobotDataConfig_2eproto() {
    protobuf_AddDesc_RobotDataConfig_2eproto();
  }
} static_descriptor_initializer_RobotDataConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int RobotDataConfig::kCoinFieldNumber;
const int RobotDataConfig::kIdFieldNumber;
const int RobotDataConfig::kCard2FieldNumber;
const int RobotDataConfig::kDropFieldNumber;
const int RobotDataConfig::kCard4FieldNumber;
const int RobotDataConfig::kMineCoinFieldNumber;
const int RobotDataConfig::kRankPointFieldNumber;
const int RobotDataConfig::kCard5FieldNumber;
const int RobotDataConfig::kCardCountFieldNumber;
const int RobotDataConfig::kCard1FieldNumber;
const int RobotDataConfig::kCard3FieldNumber;
#endif  // !_MSC_VER

RobotDataConfig::RobotDataConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RobotDataConfig::InitAsDefaultInstance() {
}

RobotDataConfig::RobotDataConfig(const RobotDataConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RobotDataConfig::SharedCtor() {
  _cached_size_ = 0;
  coin_ = 0;
  id_ = 0;
  drop_ = 0;
  mine_coin_ = 0;
  rank_point_ = 0;
  card_count_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RobotDataConfig::~RobotDataConfig() {
  SharedDtor();
}

void RobotDataConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RobotDataConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RobotDataConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RobotDataConfig_descriptor_;
}

const RobotDataConfig& RobotDataConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RobotDataConfig_2eproto();
  return *default_instance_;
}

RobotDataConfig* RobotDataConfig::default_instance_ = NULL;

RobotDataConfig* RobotDataConfig::New() const {
  return new RobotDataConfig;
}

void RobotDataConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    coin_ = 0;
    id_ = 0;
    drop_ = 0;
    mine_coin_ = 0;
    rank_point_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    card_count_ = 0;
  }
  card2_.Clear();
  card4_.Clear();
  card5_.Clear();
  card1_.Clear();
  card3_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RobotDataConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_card_count;
        break;
      }

      // optional int32 card_count = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_card_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &card_count_)));
          set_has_card_count();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_card1;
        break;
      }

      // repeated int32 card1 = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_card1:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 24, input, this->mutable_card1())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_card1())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_card1;
        if (input->ExpectTag(32)) goto parse_card2;
        break;
      }

      // repeated int32 card2 = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_card2:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 32, input, this->mutable_card2())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_card2())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_card2;
        if (input->ExpectTag(40)) goto parse_card3;
        break;
      }

      // repeated int32 card3 = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_card3:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 40, input, this->mutable_card3())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_card3())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_card3;
        if (input->ExpectTag(48)) goto parse_card4;
        break;
      }

      // repeated int32 card4 = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_card4:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 48, input, this->mutable_card4())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_card4())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_card4;
        if (input->ExpectTag(56)) goto parse_card5;
        break;
      }

      // repeated int32 card5 = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_card5:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 56, input, this->mutable_card5())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_card5())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_card5;
        if (input->ExpectTag(64)) goto parse_rank_point;
        break;
      }

      // optional int32 rank_point = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rank_point:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rank_point_)));
          set_has_rank_point();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_coin;
        break;
      }

      // optional int32 coin = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_coin:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &coin_)));
          set_has_coin();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_mine_coin;
        break;
      }

      // optional int32 mine_coin = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_mine_coin:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &mine_coin_)));
          set_has_mine_coin();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_drop;
        break;
      }

      // optional int32 drop = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_drop:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &drop_)));
          set_has_drop();
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

void RobotDataConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 card_count = 2;
  if (has_card_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->card_count(), output);
  }

  // repeated int32 card1 = 3;
  for (int i = 0; i < this->card1_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      3, this->card1(i), output);
  }

  // repeated int32 card2 = 4;
  for (int i = 0; i < this->card2_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      4, this->card2(i), output);
  }

  // repeated int32 card3 = 5;
  for (int i = 0; i < this->card3_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      5, this->card3(i), output);
  }

  // repeated int32 card4 = 6;
  for (int i = 0; i < this->card4_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      6, this->card4(i), output);
  }

  // repeated int32 card5 = 7;
  for (int i = 0; i < this->card5_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      7, this->card5(i), output);
  }

  // optional int32 rank_point = 8;
  if (has_rank_point()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->rank_point(), output);
  }

  // optional int32 coin = 9;
  if (has_coin()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->coin(), output);
  }

  // optional int32 mine_coin = 10;
  if (has_mine_coin()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->mine_coin(), output);
  }

  // optional int32 drop = 11;
  if (has_drop()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->drop(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RobotDataConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 card_count = 2;
  if (has_card_count()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->card_count(), target);
  }

  // repeated int32 card1 = 3;
  for (int i = 0; i < this->card1_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(3, this->card1(i), target);
  }

  // repeated int32 card2 = 4;
  for (int i = 0; i < this->card2_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(4, this->card2(i), target);
  }

  // repeated int32 card3 = 5;
  for (int i = 0; i < this->card3_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(5, this->card3(i), target);
  }

  // repeated int32 card4 = 6;
  for (int i = 0; i < this->card4_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(6, this->card4(i), target);
  }

  // repeated int32 card5 = 7;
  for (int i = 0; i < this->card5_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(7, this->card5(i), target);
  }

  // optional int32 rank_point = 8;
  if (has_rank_point()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->rank_point(), target);
  }

  // optional int32 coin = 9;
  if (has_coin()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->coin(), target);
  }

  // optional int32 mine_coin = 10;
  if (has_mine_coin()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->mine_coin(), target);
  }

  // optional int32 drop = 11;
  if (has_drop()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(11, this->drop(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RobotDataConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 coin = 9;
    if (has_coin()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->coin());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 drop = 11;
    if (has_drop()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->drop());
    }

    // optional int32 mine_coin = 10;
    if (has_mine_coin()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->mine_coin());
    }

    // optional int32 rank_point = 8;
    if (has_rank_point()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rank_point());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 card_count = 2;
    if (has_card_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->card_count());
    }

  }
  // repeated int32 card2 = 4;
  {
    int data_size = 0;
    for (int i = 0; i < this->card2_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->card2(i));
    }
    total_size += 1 * this->card2_size() + data_size;
  }

  // repeated int32 card4 = 6;
  {
    int data_size = 0;
    for (int i = 0; i < this->card4_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->card4(i));
    }
    total_size += 1 * this->card4_size() + data_size;
  }

  // repeated int32 card5 = 7;
  {
    int data_size = 0;
    for (int i = 0; i < this->card5_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->card5(i));
    }
    total_size += 1 * this->card5_size() + data_size;
  }

  // repeated int32 card1 = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->card1_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->card1(i));
    }
    total_size += 1 * this->card1_size() + data_size;
  }

  // repeated int32 card3 = 5;
  {
    int data_size = 0;
    for (int i = 0; i < this->card3_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->card3(i));
    }
    total_size += 1 * this->card3_size() + data_size;
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

void RobotDataConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RobotDataConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RobotDataConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RobotDataConfig::MergeFrom(const RobotDataConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  card2_.MergeFrom(from.card2_);
  card4_.MergeFrom(from.card4_);
  card5_.MergeFrom(from.card5_);
  card1_.MergeFrom(from.card1_);
  card3_.MergeFrom(from.card3_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_coin()) {
      set_coin(from.coin());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_drop()) {
      set_drop(from.drop());
    }
    if (from.has_mine_coin()) {
      set_mine_coin(from.mine_coin());
    }
    if (from.has_rank_point()) {
      set_rank_point(from.rank_point());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_card_count()) {
      set_card_count(from.card_count());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RobotDataConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RobotDataConfig::CopyFrom(const RobotDataConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RobotDataConfig::IsInitialized() const {

  return true;
}

void RobotDataConfig::Swap(RobotDataConfig* other) {
  if (other != this) {
    std::swap(coin_, other->coin_);
    std::swap(id_, other->id_);
    card2_.Swap(&other->card2_);
    std::swap(drop_, other->drop_);
    card4_.Swap(&other->card4_);
    std::swap(mine_coin_, other->mine_coin_);
    std::swap(rank_point_, other->rank_point_);
    card5_.Swap(&other->card5_);
    std::swap(card_count_, other->card_count_);
    card1_.Swap(&other->card1_);
    card3_.Swap(&other->card3_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RobotDataConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RobotDataConfig_descriptor_;
  metadata.reflection = RobotDataConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
