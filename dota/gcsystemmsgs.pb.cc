// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gcsystemmsgs.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "gcsystemmsgs.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto {
namespace dota {

namespace protobuf_gcsystemmsgs_2eproto {


namespace {

const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[4];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = { ~0u };
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;
namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "gcsystemmsgs.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void TableStruct::Shutdown() {
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\022gcsystemmsgs.proto\022\nproto.dota*\237\027\n\014EGC"
      "SystemMsg\022\023\n\017k_EGCMsgInvalid\020\000\022\021\n\rk_EGCM"
      "sgMulti\020\001\022\030\n\024k_EGCMsgGenericReply\020\n\022\026\n\022k"
      "_EGCMsgSystemBase\0202\022\036\n\032k_EGCMsgAchieveme"
      "ntAwarded\0203\022\026\n\022k_EGCMsgConCommand\0204\022\030\n\024k"
      "_EGCMsgStartPlaying\0205\022\027\n\023k_EGCMsgStopPla"
      "ying\0206\022\033\n\027k_EGCMsgStartGameserver\0207\022\032\n\026k"
      "_EGCMsgStopGameserver\0208\022\025\n\021k_EGCMsgWGReq"
      "uest\0209\022\026\n\022k_EGCMsgWGResponse\020:\022\"\n\036k_EGCM"
      "sgGetUserGameStatsSchema\020;\022*\n&k_EGCMsgGe"
      "tUserGameStatsSchemaResponse\020<\022\"\n\036k_EGCM"
      "sgGetUserStatsDEPRECATED\020=\022 \n\034k_EGCMsgGe"
      "tUserStatsResponse\020>\022\032\n\026k_EGCMsgAppInfoU"
      "pdated\020\?\022\033\n\027k_EGCMsgValidateSession\020@\022#\n"
      "\037k_EGCMsgValidateSessionResponse\020A\022\"\n\036k_"
      "EGCMsgLookupAccountFromInput\020B\022\033\n\027k_EGCM"
      "sgSendHTTPRequest\020C\022#\n\037k_EGCMsgSendHTTPR"
      "equestResponse\020D\022\030\n\024k_EGCMsgPreTestSetup"
      "\020E\022\037\n\033k_EGCMsgRecordSupportAction\020F\022(\n$k"
      "_EGCMsgGetAccountDetails_DEPRECATED\020G\022\"\n"
      "\036k_EGCMsgReceiveInterAppMessage\020I\022\030\n\024k_E"
      "GCMsgFindAccounts\020J\022\025\n\021k_EGCMsgPostAlert"
      "\020K\022\027\n\023k_EGCMsgGetLicenses\020L\022\030\n\024k_EGCMsgG"
      "etUserStats\020M\022\027\n\023k_EGCMsgGetCommands\020N\022\037"
      "\n\033k_EGCMsgGetCommandsResponse\020O\022\032\n\026k_EGC"
      "MsgAddFreeLicense\020P\022\"\n\036k_EGCMsgAddFreeLi"
      "censeResponse\020Q\022\031\n\025k_EGCMsgGetIPLocation"
      "\020R\022!\n\035k_EGCMsgGetIPLocationResponse\020S\022\035\n"
      "\031k_EGCMsgSystemStatsSchema\020T\022\032\n\026k_EGCMsg"
      "GetSystemStats\020U\022\"\n\036k_EGCMsgGetSystemSta"
      "tsResponse\020V\022\025\n\021k_EGCMsgSendEmail\020W\022\035\n\031k"
      "_EGCMsgSendEmailResponse\020X\022\034\n\030k_EGCMsgGe"
      "tEmailTemplate\020Y\022$\n k_EGCMsgGetEmailTemp"
      "lateResponse\020Z\022\032\n\026k_EGCMsgGrantGuestPass"
      "\020[\022\"\n\036k_EGCMsgGrantGuestPassResponse\020\\\022\035"
      "\n\031k_EGCMsgGetAccountDetails\020]\022%\n!k_EGCMs"
      "gGetAccountDetailsResponse\020^\022\033\n\027k_EGCMsg"
      "GetPersonaNames\020_\022#\n\037k_EGCMsgGetPersonaN"
      "amesResponse\020`\022\030\n\024k_EGCMsgMultiplexMsg\020a"
      "\022$\n k_EGCMsgWebAPIRegisterInterfaces\020e\022\034"
      "\n\030k_EGCMsgWebAPIJobRequest\020f\022(\n$k_EGCMsg"
      "WebAPIJobRequestHttpResponse\020h\022+\n\'k_EGCM"
      "sgWebAPIJobRequestForwardResponse\020i\022\031\n\024k"
      "_EGCMsgMemCachedGet\020\310\001\022!\n\034k_EGCMsgMemCac"
      "hedGetResponse\020\311\001\022\031\n\024k_EGCMsgMemCachedSe"
      "t\020\312\001\022\034\n\027k_EGCMsgMemCachedDelete\020\313\001\022\033\n\026k_"
      "EGCMsgMemCachedStats\020\314\001\022#\n\036k_EGCMsgMemCa"
      "chedStatsResponse\020\315\001\022\025\n\020k_EGCMsgSQLStats"
      "\020\322\001\022\035\n\030k_EGCMsgSQLStatsResponse\020\323\001\022\037\n\032k_"
      "EGCMsgMasterSetDirectory\020\334\001\022\'\n\"k_EGCMsgM"
      "asterSetDirectoryResponse\020\335\001\022#\n\036k_EGCMsg"
      "MasterSetWebAPIRouting\020\336\001\022+\n&k_EGCMsgMas"
      "terSetWebAPIRoutingResponse\020\337\001\022&\n!k_EGCM"
      "sgMasterSetClientMsgRouting\020\340\001\022.\n)k_EGCM"
      "sgMasterSetClientMsgRoutingResponse\020\341\001\022\027"
      "\n\022k_EGCMsgSetOptions\020\342\001\022\037\n\032k_EGCMsgSetOp"
      "tionsResponse\020\343\001\022\030\n\023k_EGCMsgSystemBase2\020"
      "\364\003\022#\n\036k_EGCMsgGetPurchaseTrustStatus\020\365\003\022"
      "+\n&k_EGCMsgGetPurchaseTrustStatusRespons"
      "e\020\366\003\022\032\n\025k_EGCMsgUpdateSession\020\367\003\022%\n k_EG"
      "CMsgGCAccountVacStatusChange\020\370\003\022\034\n\027k_EGC"
      "MsgCheckFriendship\020\371\003\022$\n\037k_EGCMsgCheckFr"
      "iendshipResponse\020\372\003\022\"\n\035k_EGCMsgGetPartne"
      "rAccountLink\020\373\003\022*\n%k_EGCMsgGetPartnerAcc"
      "ountLinkResponse\020\374\003\022)\n$k_EGCMsgVSReporte"
      "dSuspiciousActivity\020\375\003\022\037\n\032k_EGCMsgDPPart"
      "nerMicroTxns\020\200\004\022\'\n\"k_EGCMsgDPPartnerMicr"
      "oTxnsResponse\020\201\004\022\025\n\020k_EGCMsgGetIPASN\020\202\004\022"
      "\035\n\030k_EGCMsgGetIPASNResponse\020\203\004\022\036\n\031k_EGCM"
      "sgGetAppFriendsList\020\204\004\022&\n!k_EGCMsgGetApp"
      "FriendsListResponse\020\205\004\022\"\n\035k_EGCMsgVacVer"
      "ificationChange\020\206\004\022%\n k_EGCMsgAccountPho"
      "neNumberChange\020\207\004\022#\n\036k_EGCMsgAccountTwoF"
      "actorChange\020\210\004\022 \n\033k_EGCMsgCheckClanMembe"
      "rship\020\211\004\022(\n#k_EGCMsgCheckClanMembershipR"
      "esponse\020\212\004*\360\001\n\006ESOMsg\022\023\n\017k_ESOMsg_Create"
      "\020\025\022\023\n\017k_ESOMsg_Update\020\026\022\024\n\020k_ESOMsg_Dest"
      "roy\020\027\022\034\n\030k_ESOMsg_CacheSubscribed\020\030\022\036\n\032k"
      "_ESOMsg_CacheUnsubscribed\020\031\022\033\n\027k_ESOMsg_"
      "UpdateMultiple\020\032\022%\n!k_ESOMsg_CacheSubscr"
      "iptionRefresh\020\034\022$\n k_ESOMsg_CacheSubscri"
      "bedUpToDate\020\035*\316\002\n\020EGCBaseClientMsg\022\030\n\023k_"
      "EMsgGCPingRequest\020\271\027\022\031\n\024k_EMsgGCPingResp"
      "onse\020\272\027\022&\n!k_EMsgGCToClientPollConvarReq"
      "uest\020\273\027\022\'\n\"k_EMsgGCToClientPollConvarRes"
      "ponse\020\274\027\022\032\n\025k_EMsgGCClientWelcome\020\244\037\022\032\n\025"
      "k_EMsgGCServerWelcome\020\245\037\022\030\n\023k_EMsgGCClie"
      "ntHello\020\246\037\022\030\n\023k_EMsgGCServerHello\020\247\037\022#\n\036"
      "k_EMsgGCClientConnectionStatus\020\251\037\022#\n\036k_E"
      "MsgGCServerConnectionStatus\020\252\037*\327\004\n\nEGCTo"
      "GCMsg\022\032\n\025k_EGCToGCMsgMasterAck\020\226\001\022\"\n\035k_E"
      "GCToGCMsgMasterAckResponse\020\227\001\022\027\n\022k_EGCTo"
      "GCMsgRouted\020\230\001\022\034\n\027k_EGCToGCMsgRoutedRepl"
      "y\020\231\001\022#\n\036k_EMsgGCUpdateSubGCSessionInfo\020\232"
      "\001\022$\n\037k_EMsgGCRequestSubGCSessionInfo\020\233\001\022"
      ",\n\'k_EMsgGCRequestSubGCSessionInfoRespon"
      "se\020\234\001\022&\n!k_EGCToGCMsgMasterStartupComple"
      "te\020\235\001\022!\n\034k_EMsgGCToGCSOCacheSubscribe\020\236\001"
      "\022#\n\036k_EMsgGCToGCSOCacheUnsubscribe\020\237\001\022#\n"
      "\036k_EMsgGCToGCLoadSessionSOCache\020\240\001\022+\n&k_"
      "EMsgGCToGCLoadSessionSOCacheResponse\020\241\001\022"
      "#\n\036k_EMsgGCToGCUpdateSessionStats\020\242\001\022 \n\033"
      "k_EMsgGCToGCUniverseStartup\020\243\001\022(\n#k_EMsg"
      "GCToGCUniverseStartupResponse\020\244\001\022&\n!k_EM"
      "sgGCToGCForwardAccountDetails\020\245\001B\005H\001\200\001\000"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 4199);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gcsystemmsgs.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_gcsystemmsgs_2eproto

const ::google::protobuf::EnumDescriptor* EGCSystemMsg_descriptor() {
  protobuf_gcsystemmsgs_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gcsystemmsgs_2eproto::file_level_enum_descriptors[0];
}
bool EGCSystemMsg_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 10:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    case 96:
    case 97:
    case 101:
    case 102:
    case 104:
    case 105:
    case 200:
    case 201:
    case 202:
    case 203:
    case 204:
    case 205:
    case 210:
    case 211:
    case 220:
    case 221:
    case 222:
    case 223:
    case 224:
    case 225:
    case 226:
    case 227:
    case 500:
    case 501:
    case 502:
    case 503:
    case 504:
    case 505:
    case 506:
    case 507:
    case 508:
    case 509:
    case 512:
    case 513:
    case 514:
    case 515:
    case 516:
    case 517:
    case 518:
    case 519:
    case 520:
    case 521:
    case 522:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ESOMsg_descriptor() {
  protobuf_gcsystemmsgs_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gcsystemmsgs_2eproto::file_level_enum_descriptors[1];
}
bool ESOMsg_IsValid(int value) {
  switch (value) {
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 28:
    case 29:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGCBaseClientMsg_descriptor() {
  protobuf_gcsystemmsgs_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gcsystemmsgs_2eproto::file_level_enum_descriptors[2];
}
bool EGCBaseClientMsg_IsValid(int value) {
  switch (value) {
    case 3001:
    case 3002:
    case 3003:
    case 3004:
    case 4004:
    case 4005:
    case 4006:
    case 4007:
    case 4009:
    case 4010:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGCToGCMsg_descriptor() {
  protobuf_gcsystemmsgs_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gcsystemmsgs_2eproto::file_level_enum_descriptors[3];
}
bool EGCToGCMsg_IsValid(int value) {
  switch (value) {
    case 150:
    case 151:
    case 152:
    case 153:
    case 154:
    case 155:
    case 156:
    case 157:
    case 158:
    case 159:
    case 160:
    case 161:
    case 162:
    case 163:
    case 164:
    case 165:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace dota
}  // namespace proto

// @@protoc_insertion_point(global_scope)
