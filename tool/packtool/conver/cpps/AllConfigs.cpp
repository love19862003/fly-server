/********************************************************************
Filename:AllConfigs.cpp

Description:AllConfigs

Version:  1.0
Created : 07/03/15 18:32:44
Revison:  none
Compiler: gcc vc

Author:   wufan, love19862003@163.com

Organization:
*********************************************************************/
#include "AllConfigs.h"
#include <fstream>  
#include <iostream>  
namespace DianShiTech{
namespace Config{

	class AllConfigs::Impl{
		public:
			Impl(){;}
			~Impl(){;}
			const std::string& version() const { return m_configs.version();}
			bool init(const std::string& path){
				using namespace std;
				fstream dataput(path.c_str(), ios::in | ios::binary );
				if(!m_configs.ParseFromIstream(&dataput)){
					cerr << "Failed to parse from file" << path << endl;
					return false;
				}
				setupMapping();
				return true;
			}
			//table ChapterConfig interface
			const ChapterConfig&  chapter(const int id) const {
				return *(m_chapterMap.at(id));
			}
			bool  has_chapter(const int id) const {
				return m_chapterMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<ChapterConfig>& chapter() const{
				return m_configs.chapter();
			}
			//::google::protobuf::RepeatedPtrField<ChapterConfig>* mutable_chapter(){

				//return m_configs.mutable_chapter();
			//}
			//table MonsterGroupConfig interface
			const MonsterGroupConfig&  monstergroup(const int id) const {
				return *(m_monstergroupMap.at(id));
			}
			bool  has_monstergroup(const int id) const {
				return m_monstergroupMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<MonsterGroupConfig>& monstergroup() const{
				return m_configs.monstergroup();
			}
			//::google::protobuf::RepeatedPtrField<MonsterGroupConfig>* mutable_monstergroup(){

				//return m_configs.mutable_monstergroup();
			//}
			//table rank_match_robotConfig interface
			const rank_match_robotConfig&  rank_match_robot(const int id) const {
				return *(m_rank_match_robotMap.at(id));
			}
			bool  has_rank_match_robot(const int id) const {
				return m_rank_match_robotMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<rank_match_robotConfig>& rank_match_robot() const{
				return m_configs.rank_match_robot();
			}
			//::google::protobuf::RepeatedPtrField<rank_match_robotConfig>* mutable_rank_match_robot(){

				//return m_configs.mutable_rank_match_robot();
			//}
			//table UnitConfig interface
			const UnitConfig&  unit(const int id) const {
				return *(m_unitMap.at(id));
			}
			bool  has_unit(const int id) const {
				return m_unitMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<UnitConfig>& unit() const{
				return m_configs.unit();
			}
			//::google::protobuf::RepeatedPtrField<UnitConfig>* mutable_unit(){

				//return m_configs.mutable_unit();
			//}
			//table Talent_initConfig interface
			const Talent_initConfig&  talent_init(const int id) const {
				return *(m_talent_initMap.at(id));
			}
			bool  has_talent_init(const int id) const {
				return m_talent_initMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<Talent_initConfig>& talent_init() const{
				return m_configs.talent_init();
			}
			//::google::protobuf::RepeatedPtrField<Talent_initConfig>* mutable_talent_init(){

				//return m_configs.mutable_talent_init();
			//}
			//table XilianConfig interface
			const XilianConfig&  xilian(const int id) const {
				return *(m_xilianMap.at(id));
			}
			bool  has_xilian(const int id) const {
				return m_xilianMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<XilianConfig>& xilian() const{
				return m_configs.xilian();
			}
			//::google::protobuf::RepeatedPtrField<XilianConfig>* mutable_xilian(){

				//return m_configs.mutable_xilian();
			//}
			//table SystemOpenConfig interface
			const SystemOpenConfig&  systemopen(const int id) const {
				return *(m_systemopenMap.at(id));
			}
			bool  has_systemopen(const int id) const {
				return m_systemopenMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<SystemOpenConfig>& systemopen() const{
				return m_configs.systemopen();
			}
			//::google::protobuf::RepeatedPtrField<SystemOpenConfig>* mutable_systemopen(){

				//return m_configs.mutable_systemopen();
			//}
			//table colourConfig interface
			const colourConfig&  colour(const int id) const {
				return *(m_colourMap.at(id));
			}
			bool  has_colour(const int id) const {
				return m_colourMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<colourConfig>& colour() const{
				return m_configs.colour();
			}
			//::google::protobuf::RepeatedPtrField<colourConfig>* mutable_colour(){

				//return m_configs.mutable_colour();
			//}
			//table TerritoryEffectConfig interface
			const TerritoryEffectConfig&  territoryeffect(const int id) const {
				return *(m_territoryeffectMap.at(id));
			}
			bool  has_territoryeffect(const int id) const {
				return m_territoryeffectMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<TerritoryEffectConfig>& territoryeffect() const{
				return m_configs.territoryeffect();
			}
			//::google::protobuf::RepeatedPtrField<TerritoryEffectConfig>* mutable_territoryeffect(){

				//return m_configs.mutable_territoryeffect();
			//}
			//table DialogueConfig interface
			const DialogueConfig&  dialogue(const int id) const {
				return *(m_dialogueMap.at(id));
			}
			bool  has_dialogue(const int id) const {
				return m_dialogueMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<DialogueConfig>& dialogue() const{
				return m_configs.dialogue();
			}
			//::google::protobuf::RepeatedPtrField<DialogueConfig>* mutable_dialogue(){

				//return m_configs.mutable_dialogue();
			//}
			//table GuideConfig interface
			const GuideConfig&  guide(const int id) const {
				return *(m_guideMap.at(id));
			}
			bool  has_guide(const int id) const {
				return m_guideMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<GuideConfig>& guide() const{
				return m_configs.guide();
			}
			//::google::protobuf::RepeatedPtrField<GuideConfig>* mutable_guide(){

				//return m_configs.mutable_guide();
			//}
			//table DailyEventConfig interface
			const DailyEventConfig&  dailyevent(const int id) const {
				return *(m_dailyeventMap.at(id));
			}
			bool  has_dailyevent(const int id) const {
				return m_dailyeventMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<DailyEventConfig>& dailyevent() const{
				return m_configs.dailyevent();
			}
			//::google::protobuf::RepeatedPtrField<DailyEventConfig>* mutable_dailyevent(){

				//return m_configs.mutable_dailyevent();
			//}
			//table BattleInitDataConfig interface
			const BattleInitDataConfig&  battleinitdata(const int id) const {
				return *(m_battleinitdataMap.at(id));
			}
			bool  has_battleinitdata(const int id) const {
				return m_battleinitdataMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<BattleInitDataConfig>& battleinitdata() const{
				return m_configs.battleinitdata();
			}
			//::google::protobuf::RepeatedPtrField<BattleInitDataConfig>* mutable_battleinitdata(){

				//return m_configs.mutable_battleinitdata();
			//}
			//table StageConfig interface
			const StageConfig&  stage(const int id) const {
				return *(m_stageMap.at(id));
			}
			bool  has_stage(const int id) const {
				return m_stageMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<StageConfig>& stage() const{
				return m_configs.stage();
			}
			//::google::protobuf::RepeatedPtrField<StageConfig>* mutable_stage(){

				//return m_configs.mutable_stage();
			//}
			//table SignupBonusConfig interface
			const SignupBonusConfig&  signupbonus(const int id) const {
				return *(m_signupbonusMap.at(id));
			}
			bool  has_signupbonus(const int id) const {
				return m_signupbonusMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<SignupBonusConfig>& signupbonus() const{
				return m_configs.signupbonus();
			}
			//::google::protobuf::RepeatedPtrField<SignupBonusConfig>* mutable_signupbonus(){

				//return m_configs.mutable_signupbonus();
			//}
			//table Activity_stageConfig interface
			const Activity_stageConfig&  activity_stage(const int id) const {
				return *(m_activity_stageMap.at(id));
			}
			bool  has_activity_stage(const int id) const {
				return m_activity_stageMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<Activity_stageConfig>& activity_stage() const{
				return m_configs.activity_stage();
			}
			//::google::protobuf::RepeatedPtrField<Activity_stageConfig>* mutable_activity_stage(){

				//return m_configs.mutable_activity_stage();
			//}
			//table SoundsConfig interface
			const SoundsConfig&  sounds(const int id) const {
				return *(m_soundsMap.at(id));
			}
			bool  has_sounds(const int id) const {
				return m_soundsMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<SoundsConfig>& sounds() const{
				return m_configs.sounds();
			}
			//::google::protobuf::RepeatedPtrField<SoundsConfig>* mutable_sounds(){

				//return m_configs.mutable_sounds();
			//}
			//table CardLevelupExpConfig interface
			const CardLevelupExpConfig&  cardlevelupexp(const int id) const {
				return *(m_cardlevelupexpMap.at(id));
			}
			bool  has_cardlevelupexp(const int id) const {
				return m_cardlevelupexpMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<CardLevelupExpConfig>& cardlevelupexp() const{
				return m_configs.cardlevelupexp();
			}
			//::google::protobuf::RepeatedPtrField<CardLevelupExpConfig>* mutable_cardlevelupexp(){

				//return m_configs.mutable_cardlevelupexp();
			//}
			//table DailyTaskInitDataConfig interface
			const DailyTaskInitDataConfig&  dailytaskinitdata(const int id) const {
				return *(m_dailytaskinitdataMap.at(id));
			}
			bool  has_dailytaskinitdata(const int id) const {
				return m_dailytaskinitdataMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<DailyTaskInitDataConfig>& dailytaskinitdata() const{
				return m_configs.dailytaskinitdata();
			}
			//::google::protobuf::RepeatedPtrField<DailyTaskInitDataConfig>* mutable_dailytaskinitdata(){

				//return m_configs.mutable_dailytaskinitdata();
			//}
			//table GuideBonusConfig interface
			const GuideBonusConfig&  guidebonus(const int id) const {
				return *(m_guidebonusMap.at(id));
			}
			bool  has_guidebonus(const int id) const {
				return m_guidebonusMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<GuideBonusConfig>& guidebonus() const{
				return m_configs.guidebonus();
			}
			//::google::protobuf::RepeatedPtrField<GuideBonusConfig>* mutable_guidebonus(){

				//return m_configs.mutable_guidebonus();
			//}
			//table PlistConfig interface
			const PlistConfig&  plist(const int id) const {
				return *(m_plistMap.at(id));
			}
			bool  has_plist(const int id) const {
				return m_plistMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<PlistConfig>& plist() const{
				return m_configs.plist();
			}
			//::google::protobuf::RepeatedPtrField<PlistConfig>* mutable_plist(){

				//return m_configs.mutable_plist();
			//}
			//table descrptionConfig interface
			const descrptionConfig&  descrption(const int id) const {
				return *(m_descrptionMap.at(id));
			}
			bool  has_descrption(const int id) const {
				return m_descrptionMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<descrptionConfig>& descrption() const{
				return m_configs.descrption();
			}
			//::google::protobuf::RepeatedPtrField<descrptionConfig>* mutable_descrption(){

				//return m_configs.mutable_descrption();
			//}
			//table PayChannelConfig interface
			const PayChannelConfig&  paychannel(const int id) const {
				return *(m_paychannelMap.at(id));
			}
			bool  has_paychannel(const int id) const {
				return m_paychannelMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<PayChannelConfig>& paychannel() const{
				return m_configs.paychannel();
			}
			//::google::protobuf::RepeatedPtrField<PayChannelConfig>* mutable_paychannel(){

				//return m_configs.mutable_paychannel();
			//}
			//table ItemTypeConfig interface
			const ItemTypeConfig&  itemtype(const int id) const {
				return *(m_itemtypeMap.at(id));
			}
			bool  has_itemtype(const int id) const {
				return m_itemtypeMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<ItemTypeConfig>& itemtype() const{
				return m_configs.itemtype();
			}
			//::google::protobuf::RepeatedPtrField<ItemTypeConfig>* mutable_itemtype(){

				//return m_configs.mutable_itemtype();
			//}
			//table CharLevelConfig interface
			const CharLevelConfig&  charlevel(const int id) const {
				return *(m_charlevelMap.at(id));
			}
			bool  has_charlevel(const int id) const {
				return m_charlevelMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<CharLevelConfig>& charlevel() const{
				return m_configs.charlevel();
			}
			//::google::protobuf::RepeatedPtrField<CharLevelConfig>* mutable_charlevel(){

				//return m_configs.mutable_charlevel();
			//}
			//table RebateConfig interface
			const RebateConfig&  rebate(const int id) const {
				return *(m_rebateMap.at(id));
			}
			bool  has_rebate(const int id) const {
				return m_rebateMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<RebateConfig>& rebate() const{
				return m_configs.rebate();
			}
			//::google::protobuf::RepeatedPtrField<RebateConfig>* mutable_rebate(){

				//return m_configs.mutable_rebate();
			//}
			//table PositionConfig interface
			const PositionConfig&  position(const int id) const {
				return *(m_positionMap.at(id));
			}
			bool  has_position(const int id) const {
				return m_positionMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<PositionConfig>& position() const{
				return m_configs.position();
			}
			//::google::protobuf::RepeatedPtrField<PositionConfig>* mutable_position(){

				//return m_configs.mutable_position();
			//}
			//table rank_matchConfig interface
			const rank_matchConfig&  rank_match(const int id) const {
				return *(m_rank_matchMap.at(id));
			}
			bool  has_rank_match(const int id) const {
				return m_rank_matchMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<rank_matchConfig>& rank_match() const{
				return m_configs.rank_match();
			}
			//::google::protobuf::RepeatedPtrField<rank_matchConfig>* mutable_rank_match(){

				//return m_configs.mutable_rank_match();
			//}
			//table System_noticeConfig interface
			const System_noticeConfig&  system_notice(const int id) const {
				return *(m_system_noticeMap.at(id));
			}
			bool  has_system_notice(const int id) const {
				return m_system_noticeMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<System_noticeConfig>& system_notice() const{
				return m_configs.system_notice();
			}
			//::google::protobuf::RepeatedPtrField<System_noticeConfig>* mutable_system_notice(){

				//return m_configs.mutable_system_notice();
			//}
			//table Mission_InfoConfig interface
			const Mission_InfoConfig&  mission_info(const int id) const {
				return *(m_mission_infoMap.at(id));
			}
			bool  has_mission_info(const int id) const {
				return m_mission_infoMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<Mission_InfoConfig>& mission_info() const{
				return m_configs.mission_info();
			}
			//::google::protobuf::RepeatedPtrField<Mission_InfoConfig>* mutable_mission_info(){

				//return m_configs.mutable_mission_info();
			//}
			//table Arena_RankConfig interface
			const Arena_RankConfig&  arena_rank(const int id) const {
				return *(m_arena_rankMap.at(id));
			}
			bool  has_arena_rank(const int id) const {
				return m_arena_rankMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<Arena_RankConfig>& arena_rank() const{
				return m_configs.arena_rank();
			}
			//::google::protobuf::RepeatedPtrField<Arena_RankConfig>* mutable_arena_rank(){

				//return m_configs.mutable_arena_rank();
			//}
			//table CombineSummaryConfig interface
			const CombineSummaryConfig&  combinesummary(const int id) const {
				return *(m_combinesummaryMap.at(id));
			}
			bool  has_combinesummary(const int id) const {
				return m_combinesummaryMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<CombineSummaryConfig>& combinesummary() const{
				return m_configs.combinesummary();
			}
			//::google::protobuf::RepeatedPtrField<CombineSummaryConfig>* mutable_combinesummary(){

				//return m_configs.mutable_combinesummary();
			//}
			//table PropConfig interface
			const PropConfig&  prop(const int id) const {
				return *(m_propMap.at(id));
			}
			bool  has_prop(const int id) const {
				return m_propMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<PropConfig>& prop() const{
				return m_configs.prop();
			}
			//::google::protobuf::RepeatedPtrField<PropConfig>* mutable_prop(){

				//return m_configs.mutable_prop();
			//}
			//table DropConfig interface
			const DropConfig&  drop(const int id) const {
				return *(m_dropMap.at(id));
			}
			bool  has_drop(const int id) const {
				return m_dropMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<DropConfig>& drop() const{
				return m_configs.drop();
			}
			//::google::protobuf::RepeatedPtrField<DropConfig>* mutable_drop(){

				//return m_configs.mutable_drop();
			//}
			//table CcbiAnimsConfig interface
			const CcbiAnimsConfig&  ccbianims(const int id) const {
				return *(m_ccbianimsMap.at(id));
			}
			bool  has_ccbianims(const int id) const {
				return m_ccbianimsMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<CcbiAnimsConfig>& ccbianims() const{
				return m_configs.ccbianims();
			}
			//::google::protobuf::RepeatedPtrField<CcbiAnimsConfig>* mutable_ccbianims(){

				//return m_configs.mutable_ccbianims();
			//}
			//table activity_oddsConfig interface
			const activity_oddsConfig&  activity_odds(const int id) const {
				return *(m_activity_oddsMap.at(id));
			}
			bool  has_activity_odds(const int id) const {
				return m_activity_oddsMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<activity_oddsConfig>& activity_odds() const{
				return m_configs.activity_odds();
			}
			//::google::protobuf::RepeatedPtrField<activity_oddsConfig>* mutable_activity_odds(){

				//return m_configs.mutable_activity_odds();
			//}
			//table store_itemConfig interface
			const store_itemConfig&  store_item(const int id) const {
				return *(m_store_itemMap.at(id));
			}
			bool  has_store_item(const int id) const {
				return m_store_itemMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<store_itemConfig>& store_item() const{
				return m_configs.store_item();
			}
			//::google::protobuf::RepeatedPtrField<store_itemConfig>* mutable_store_item(){

				//return m_configs.mutable_store_item();
			//}
			//table SpriteConfig interface
			const SpriteConfig&  sprite(const int id) const {
				return *(m_spriteMap.at(id));
			}
			bool  has_sprite(const int id) const {
				return m_spriteMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<SpriteConfig>& sprite() const{
				return m_configs.sprite();
			}
			//::google::protobuf::RepeatedPtrField<SpriteConfig>* mutable_sprite(){

				//return m_configs.mutable_sprite();
			//}
			//table BattleHelpConfig interface
			const BattleHelpConfig&  battlehelp(const int id) const {
				return *(m_battlehelpMap.at(id));
			}
			bool  has_battlehelp(const int id) const {
				return m_battlehelpMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<BattleHelpConfig>& battlehelp() const{
				return m_configs.battlehelp();
			}
			//::google::protobuf::RepeatedPtrField<BattleHelpConfig>* mutable_battlehelp(){

				//return m_configs.mutable_battlehelp();
			//}
			//table StopWinBonusConfig interface
			const StopWinBonusConfig&  stopwinbonus(const int id) const {
				return *(m_stopwinbonusMap.at(id));
			}
			bool  has_stopwinbonus(const int id) const {
				return m_stopwinbonusMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<StopWinBonusConfig>& stopwinbonus() const{
				return m_configs.stopwinbonus();
			}
			//::google::protobuf::RepeatedPtrField<StopWinBonusConfig>* mutable_stopwinbonus(){

				//return m_configs.mutable_stopwinbonus();
			//}
			//table CardSkillConfig interface
			const CardSkillConfig&  cardskill(const int id) const {
				return *(m_cardskillMap.at(id));
			}
			bool  has_cardskill(const int id) const {
				return m_cardskillMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<CardSkillConfig>& cardskill() const{
				return m_configs.cardskill();
			}
			//::google::protobuf::RepeatedPtrField<CardSkillConfig>* mutable_cardskill(){

				//return m_configs.mutable_cardskill();
			//}
			//table SubBattleStoryConfig interface
			const SubBattleStoryConfig&  subbattlestory(const int id) const {
				return *(m_subbattlestoryMap.at(id));
			}
			bool  has_subbattlestory(const int id) const {
				return m_subbattlestoryMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<SubBattleStoryConfig>& subbattlestory() const{
				return m_configs.subbattlestory();
			}
			//::google::protobuf::RepeatedPtrField<SubBattleStoryConfig>* mutable_subbattlestory(){

				//return m_configs.mutable_subbattlestory();
			//}
			//table MineCoinConfig interface
			const MineCoinConfig&  minecoin(const int id) const {
				return *(m_minecoinMap.at(id));
			}
			bool  has_minecoin(const int id) const {
				return m_minecoinMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<MineCoinConfig>& minecoin() const{
				return m_configs.minecoin();
			}
			//::google::protobuf::RepeatedPtrField<MineCoinConfig>* mutable_minecoin(){

				//return m_configs.mutable_minecoin();
			//}
			//table Talent_initial_idConfig interface
			const Talent_initial_idConfig&  talent_initial_id(const int id) const {
				return *(m_talent_initial_idMap.at(id));
			}
			bool  has_talent_initial_id(const int id) const {
				return m_talent_initial_idMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<Talent_initial_idConfig>& talent_initial_id() const{
				return m_configs.talent_initial_id();
			}
			//::google::protobuf::RepeatedPtrField<Talent_initial_idConfig>* mutable_talent_initial_id(){

				//return m_configs.mutable_talent_initial_id();
			//}
			//table char_friend_countConfig interface
			const char_friend_countConfig&  char_friend_count(const int id) const {
				return *(m_char_friend_countMap.at(id));
			}
			bool  has_char_friend_count(const int id) const {
				return m_char_friend_countMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<char_friend_countConfig>& char_friend_count() const{
				return m_configs.char_friend_count();
			}
			//::google::protobuf::RepeatedPtrField<char_friend_countConfig>* mutable_char_friend_count(){

				//return m_configs.mutable_char_friend_count();
			//}
			//table Arena_BuffConfig interface
			const Arena_BuffConfig&  arena_buff(const int id) const {
				return *(m_arena_buffMap.at(id));
			}
			bool  has_arena_buff(const int id) const {
				return m_arena_buffMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<Arena_BuffConfig>& arena_buff() const{
				return m_configs.arena_buff();
			}
			//::google::protobuf::RepeatedPtrField<Arena_BuffConfig>* mutable_arena_buff(){

				//return m_configs.mutable_arena_buff();
			//}
			//table CharacterInitDataConfig interface
			const CharacterInitDataConfig&  characterinitdata(const int id) const {
				return *(m_characterinitdataMap.at(id));
			}
			bool  has_characterinitdata(const int id) const {
				return m_characterinitdataMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<CharacterInitDataConfig>& characterinitdata() const{
				return m_configs.characterinitdata();
			}
			//::google::protobuf::RepeatedPtrField<CharacterInitDataConfig>* mutable_characterinitdata(){

				//return m_configs.mutable_characterinitdata();
			//}
			//table AchievementConditionConfig interface
			const AchievementConditionConfig&  achievementcondition(const int id) const {
				return *(m_achievementconditionMap.at(id));
			}
			bool  has_achievementcondition(const int id) const {
				return m_achievementconditionMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<AchievementConditionConfig>& achievementcondition() const{
				return m_configs.achievementcondition();
			}
			//::google::protobuf::RepeatedPtrField<AchievementConditionConfig>* mutable_achievementcondition(){

				//return m_configs.mutable_achievementcondition();
			//}
			//table MineInitDataConfig interface
			const MineInitDataConfig&  mineinitdata(const int id) const {
				return *(m_mineinitdataMap.at(id));
			}
			bool  has_mineinitdata(const int id) const {
				return m_mineinitdataMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<MineInitDataConfig>& mineinitdata() const{
				return m_configs.mineinitdata();
			}
			//::google::protobuf::RepeatedPtrField<MineInitDataConfig>* mutable_mineinitdata(){

				//return m_configs.mutable_mineinitdata();
			//}
			//table CourseConfig interface
			const CourseConfig&  course(const int id) const {
				return *(m_courseMap.at(id));
			}
			bool  has_course(const int id) const {
				return m_courseMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<CourseConfig>& course() const{
				return m_configs.course();
			}
			//::google::protobuf::RepeatedPtrField<CourseConfig>* mutable_course(){

				//return m_configs.mutable_course();
			//}
			//table activity_consume_moneyConfig interface
			const activity_consume_moneyConfig&  activity_consume_money(const int id) const {
				return *(m_activity_consume_moneyMap.at(id));
			}
			bool  has_activity_consume_money(const int id) const {
				return m_activity_consume_moneyMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<activity_consume_moneyConfig>& activity_consume_money() const{
				return m_configs.activity_consume_money();
			}
			//::google::protobuf::RepeatedPtrField<activity_consume_moneyConfig>* mutable_activity_consume_money(){

				//return m_configs.mutable_activity_consume_money();
			//}
			//table RobotDataConfig interface
			const RobotDataConfig&  robotdata(const int id) const {
				return *(m_robotdataMap.at(id));
			}
			bool  has_robotdata(const int id) const {
				return m_robotdataMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<RobotDataConfig>& robotdata() const{
				return m_configs.robotdata();
			}
			//::google::protobuf::RepeatedPtrField<RobotDataConfig>* mutable_robotdata(){

				//return m_configs.mutable_robotdata();
			//}
			//table ErnieBonusConfig interface
			const ErnieBonusConfig&  erniebonus(const int id) const {
				return *(m_erniebonusMap.at(id));
			}
			bool  has_erniebonus(const int id) const {
				return m_erniebonusMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<ErnieBonusConfig>& erniebonus() const{
				return m_configs.erniebonus();
			}
			//::google::protobuf::RepeatedPtrField<ErnieBonusConfig>* mutable_erniebonus(){

				//return m_configs.mutable_erniebonus();
			//}
			//table CardSkillFixConfig interface
			const CardSkillFixConfig&  cardskillfix(const int id) const {
				return *(m_cardskillfixMap.at(id));
			}
			bool  has_cardskillfix(const int id) const {
				return m_cardskillfixMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<CardSkillFixConfig>& cardskillfix() const{
				return m_configs.cardskillfix();
			}
			//::google::protobuf::RepeatedPtrField<CardSkillFixConfig>* mutable_cardskillfix(){

				//return m_configs.mutable_cardskillfix();
			//}
			//table VipInitDataConfig interface
			const VipInitDataConfig&  vipinitdata(const int id) const {
				return *(m_vipinitdataMap.at(id));
			}
			bool  has_vipinitdata(const int id) const {
				return m_vipinitdataMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<VipInitDataConfig>& vipinitdata() const{
				return m_configs.vipinitdata();
			}
			//::google::protobuf::RepeatedPtrField<VipInitDataConfig>* mutable_vipinitdata(){

				//return m_configs.mutable_vipinitdata();
			//}
			//table SkillGrowConfig interface
			const SkillGrowConfig&  skillgrow(const int id) const {
				return *(m_skillgrowMap.at(id));
			}
			bool  has_skillgrow(const int id) const {
				return m_skillgrowMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<SkillGrowConfig>& skillgrow() const{
				return m_configs.skillgrow();
			}
			//::google::protobuf::RepeatedPtrField<SkillGrowConfig>* mutable_skillgrow(){

				//return m_configs.mutable_skillgrow();
			//}
			//table storeConfig interface
			const storeConfig&  store(const int id) const {
				return *(m_storeMap.at(id));
			}
			bool  has_store(const int id) const {
				return m_storeMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<storeConfig>& store() const{
				return m_configs.store();
			}
			//::google::protobuf::RepeatedPtrField<storeConfig>* mutable_store(){

				//return m_configs.mutable_store();
			//}
			//table Arena_TopConfig interface
			const Arena_TopConfig&  arena_top(const int id) const {
				return *(m_arena_topMap.at(id));
			}
			bool  has_arena_top(const int id) const {
				return m_arena_topMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<Arena_TopConfig>& arena_top() const{
				return m_configs.arena_top();
			}
			//::google::protobuf::RepeatedPtrField<Arena_TopConfig>* mutable_arena_top(){

				//return m_configs.mutable_arena_top();
			//}
			//table FramesConfig interface
			const FramesConfig&  frames(const int id) const {
				return *(m_framesMap.at(id));
			}
			bool  has_frames(const int id) const {
				return m_framesMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<FramesConfig>& frames() const{
				return m_configs.frames();
			}
			//::google::protobuf::RepeatedPtrField<FramesConfig>* mutable_frames(){

				//return m_configs.mutable_frames();
			//}
			//table AutoBattleInitDataConfig interface
			const AutoBattleInitDataConfig&  autobattleinitdata(const int id) const {
				return *(m_autobattleinitdataMap.at(id));
			}
			bool  has_autobattleinitdata(const int id) const {
				return m_autobattleinitdataMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<AutoBattleInitDataConfig>& autobattleinitdata() const{
				return m_configs.autobattleinitdata();
			}
			//::google::protobuf::RepeatedPtrField<AutoBattleInitDataConfig>* mutable_autobattleinitdata(){

				//return m_configs.mutable_autobattleinitdata();
			//}
			//table AttributeTipsConfig interface
			const AttributeTipsConfig&  attributetips(const int id) const {
				return *(m_attributetipsMap.at(id));
			}
			bool  has_attributetips(const int id) const {
				return m_attributetipsMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<AttributeTipsConfig>& attributetips() const{
				return m_configs.attributetips();
			}
			//::google::protobuf::RepeatedPtrField<AttributeTipsConfig>* mutable_attributetips(){

				//return m_configs.mutable_attributetips();
			//}
			//table LoginConfig interface
			const LoginConfig&  login(const int id) const {
				return *(m_loginMap.at(id));
			}
			bool  has_login(const int id) const {
				return m_loginMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<LoginConfig>& login() const{
				return m_configs.login();
			}
			//::google::protobuf::RepeatedPtrField<LoginConfig>* mutable_login(){

				//return m_configs.mutable_login();
			//}
			//table AttrTypeConfig interface
			const AttrTypeConfig&  attrtype(const int id) const {
				return *(m_attrtypeMap.at(id));
			}
			bool  has_attrtype(const int id) const {
				return m_attrtypeMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<AttrTypeConfig>& attrtype() const{
				return m_configs.attrtype();
			}
			//::google::protobuf::RepeatedPtrField<AttrTypeConfig>* mutable_attrtype(){

				//return m_configs.mutable_attrtype();
			//}
			//table TalentConfig interface
			const TalentConfig&  talent(const int id) const {
				return *(m_talentMap.at(id));
			}
			bool  has_talent(const int id) const {
				return m_talentMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<TalentConfig>& talent() const{
				return m_configs.talent();
			}
			//::google::protobuf::RepeatedPtrField<TalentConfig>* mutable_talent(){

				//return m_configs.mutable_talent();
			//}
			//table descConfig interface
			const descConfig&  desc(const int id) const {
				return *(m_descMap.at(id));
			}
			bool  has_desc(const int id) const {
				return m_descMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<descConfig>& desc() const{
				return m_configs.desc();
			}
			//::google::protobuf::RepeatedPtrField<descConfig>* mutable_desc(){

				//return m_configs.mutable_desc();
			//}
			//table VipAchievementConfig interface
			const VipAchievementConfig&  vipachievement(const int id) const {
				return *(m_vipachievementMap.at(id));
			}
			bool  has_vipachievement(const int id) const {
				return m_vipachievementMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<VipAchievementConfig>& vipachievement() const{
				return m_configs.vipachievement();
			}
			//::google::protobuf::RepeatedPtrField<VipAchievementConfig>* mutable_vipachievement(){

				//return m_configs.mutable_vipachievement();
			//}
			//table Vip_privilegeConfig interface
			const Vip_privilegeConfig&  vip_privilege(const int id) const {
				return *(m_vip_privilegeMap.at(id));
			}
			bool  has_vip_privilege(const int id) const {
				return m_vip_privilegeMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<Vip_privilegeConfig>& vip_privilege() const{
				return m_configs.vip_privilege();
			}
			//::google::protobuf::RepeatedPtrField<Vip_privilegeConfig>* mutable_vip_privilege(){

				//return m_configs.mutable_vip_privilege();
			//}
			//table PartucleAnimsConfig interface
			const PartucleAnimsConfig&  partucleanims(const int id) const {
				return *(m_partucleanimsMap.at(id));
			}
			bool  has_partucleanims(const int id) const {
				return m_partucleanimsMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<PartucleAnimsConfig>& partucleanims() const{
				return m_configs.partucleanims();
			}
			//::google::protobuf::RepeatedPtrField<PartucleAnimsConfig>* mutable_partucleanims(){

				//return m_configs.mutable_partucleanims();
			//}
			//table PvpScoreBonusConfig interface
			const PvpScoreBonusConfig&  pvpscorebonus(const int id) const {
				return *(m_pvpscorebonusMap.at(id));
			}
			bool  has_pvpscorebonus(const int id) const {
				return m_pvpscorebonusMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<PvpScoreBonusConfig>& pvpscorebonus() const{
				return m_configs.pvpscorebonus();
			}
			//::google::protobuf::RepeatedPtrField<PvpScoreBonusConfig>* mutable_pvpscorebonus(){

				//return m_configs.mutable_pvpscorebonus();
			//}
			//table LivenessConfig interface
			const LivenessConfig&  liveness(const int id) const {
				return *(m_livenessMap.at(id));
			}
			bool  has_liveness(const int id) const {
				return m_livenessMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<LivenessConfig>& liveness() const{
				return m_configs.liveness();
			}
			//::google::protobuf::RepeatedPtrField<LivenessConfig>* mutable_liveness(){

				//return m_configs.mutable_liveness();
			//}
			//table WeekLivenessConfig interface
			const WeekLivenessConfig&  weekliveness(const int id) const {
				return *(m_weeklivenessMap.at(id));
			}
			bool  has_weekliveness(const int id) const {
				return m_weeklivenessMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<WeekLivenessConfig>& weekliveness() const{
				return m_configs.weekliveness();
			}
			//::google::protobuf::RepeatedPtrField<WeekLivenessConfig>* mutable_weekliveness(){

				//return m_configs.mutable_weekliveness();
			//}
			//table rank_match_awardConfig interface
			const rank_match_awardConfig&  rank_match_award(const int id) const {
				return *(m_rank_match_awardMap.at(id));
			}
			bool  has_rank_match_award(const int id) const {
				return m_rank_match_awardMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<rank_match_awardConfig>& rank_match_award() const{
				return m_configs.rank_match_award();
			}
			//::google::protobuf::RepeatedPtrField<rank_match_awardConfig>* mutable_rank_match_award(){

				//return m_configs.mutable_rank_match_award();
			//}
			//table BattleConfig interface
			const BattleConfig&  battle(const int id) const {
				return *(m_battleMap.at(id));
			}
			bool  has_battle(const int id) const {
				return m_battleMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<BattleConfig>& battle() const{
				return m_configs.battle();
			}
			//::google::protobuf::RepeatedPtrField<BattleConfig>* mutable_battle(){

				//return m_configs.mutable_battle();
			//}
			//table BossInitDataConfig interface
			const BossInitDataConfig&  bossinitdata(const int id) const {
				return *(m_bossinitdataMap.at(id));
			}
			bool  has_bossinitdata(const int id) const {
				return m_bossinitdataMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<BossInitDataConfig>& bossinitdata() const{
				return m_configs.bossinitdata();
			}
			//::google::protobuf::RepeatedPtrField<BossInitDataConfig>* mutable_bossinitdata(){

				//return m_configs.mutable_bossinitdata();
			//}
			//table Given_nameConfig interface
			const Given_nameConfig&  given_name(const int id) const {
				return *(m_given_nameMap.at(id));
			}
			bool  has_given_name(const int id) const {
				return m_given_nameMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<Given_nameConfig>& given_name() const{
				return m_configs.given_name();
			}
			//::google::protobuf::RepeatedPtrField<Given_nameConfig>* mutable_given_name(){

				//return m_configs.mutable_given_name();
			//}
			//table LivenessBonusConfig interface
			const LivenessBonusConfig&  livenessbonus(const int id) const {
				return *(m_livenessbonusMap.at(id));
			}
			bool  has_livenessbonus(const int id) const {
				return m_livenessbonusMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<LivenessBonusConfig>& livenessbonus() const{
				return m_configs.livenessbonus();
			}
			//::google::protobuf::RepeatedPtrField<LivenessBonusConfig>* mutable_livenessbonus(){

				//return m_configs.mutable_livenessbonus();
			//}
			//table MineCardCountConfig interface
			const MineCardCountConfig&  minecardcount(const int id) const {
				return *(m_minecardcountMap.at(id));
			}
			bool  has_minecardcount(const int id) const {
				return m_minecardcountMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<MineCardCountConfig>& minecardcount() const{
				return m_configs.minecardcount();
			}
			//::google::protobuf::RepeatedPtrField<MineCardCountConfig>* mutable_minecardcount(){

				//return m_configs.mutable_minecardcount();
			//}
			//table CardGainExpConfig interface
			const CardGainExpConfig&  cardgainexp(const int id) const {
				return *(m_cardgainexpMap.at(id));
			}
			bool  has_cardgainexp(const int id) const {
				return m_cardgainexpMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<CardGainExpConfig>& cardgainexp() const{
				return m_configs.cardgainexp();
			}
			//::google::protobuf::RepeatedPtrField<CardGainExpConfig>* mutable_cardgainexp(){

				//return m_configs.mutable_cardgainexp();
			//}
			//table UnitTypeConfig interface
			const UnitTypeConfig&  unittype(const int id) const {
				return *(m_unittypeMap.at(id));
			}
			bool  has_unittype(const int id) const {
				return m_unittypeMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<UnitTypeConfig>& unittype() const{
				return m_configs.unittype();
			}
			//::google::protobuf::RepeatedPtrField<UnitTypeConfig>* mutable_unittype(){

				//return m_configs.mutable_unittype();
			//}
			//table ImmuneInitDataConfig interface
			const ImmuneInitDataConfig&  immuneinitdata(const int id) const {
				return *(m_immuneinitdataMap.at(id));
			}
			bool  has_immuneinitdata(const int id) const {
				return m_immuneinitdataMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<ImmuneInitDataConfig>& immuneinitdata() const{
				return m_configs.immuneinitdata();
			}
			//::google::protobuf::RepeatedPtrField<ImmuneInitDataConfig>* mutable_immuneinitdata(){

				//return m_configs.mutable_immuneinitdata();
			//}
			//table PropTypeConfig interface
			const PropTypeConfig&  proptype(const int id) const {
				return *(m_proptypeMap.at(id));
			}
			bool  has_proptype(const int id) const {
				return m_proptypeMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<PropTypeConfig>& proptype() const{
				return m_configs.proptype();
			}
			//::google::protobuf::RepeatedPtrField<PropTypeConfig>* mutable_proptype(){

				//return m_configs.mutable_proptype();
			//}
			//table TalentSkillConfig interface
			const TalentSkillConfig&  talentskill(const int id) const {
				return *(m_talentskillMap.at(id));
			}
			bool  has_talentskill(const int id) const {
				return m_talentskillMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<TalentSkillConfig>& talentskill() const{
				return m_configs.talentskill();
			}
			//::google::protobuf::RepeatedPtrField<TalentSkillConfig>* mutable_talentskill(){

				//return m_configs.mutable_talentskill();
			//}
			//table PropGroupConfig interface
			const PropGroupConfig&  propgroup(const int id) const {
				return *(m_propgroupMap.at(id));
			}
			bool  has_propgroup(const int id) const {
				return m_propgroupMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<PropGroupConfig>& propgroup() const{
				return m_configs.propgroup();
			}
			//::google::protobuf::RepeatedPtrField<PropGroupConfig>* mutable_propgroup(){

				//return m_configs.mutable_propgroup();
			//}
			//table mine_colourConfig interface
			const mine_colourConfig&  mine_colour(const int id) const {
				return *(m_mine_colourMap.at(id));
			}
			bool  has_mine_colour(const int id) const {
				return m_mine_colourMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<mine_colourConfig>& mine_colour() const{
				return m_configs.mine_colour();
			}
			//::google::protobuf::RepeatedPtrField<mine_colourConfig>* mutable_mine_colour(){

				//return m_configs.mutable_mine_colour();
			//}
			//table ItemConfig interface
			const ItemConfig&  item(const int id) const {
				return *(m_itemMap.at(id));
			}
			bool  has_item(const int id) const {
				return m_itemMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<ItemConfig>& item() const{
				return m_configs.item();
			}
			//::google::protobuf::RepeatedPtrField<ItemConfig>* mutable_item(){

				//return m_configs.mutable_item();
			//}
			//table UnitDamageIncConfig interface
			const UnitDamageIncConfig&  unitdamageinc(const int id) const {
				return *(m_unitdamageincMap.at(id));
			}
			bool  has_unitdamageinc(const int id) const {
				return m_unitdamageincMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<UnitDamageIncConfig>& unitdamageinc() const{
				return m_configs.unitdamageinc();
			}
			//::google::protobuf::RepeatedPtrField<UnitDamageIncConfig>* mutable_unitdamageinc(){

				//return m_configs.mutable_unitdamageinc();
			//}
			//table WorldviewConfig interface
			const WorldviewConfig&  worldview(const int id) const {
				return *(m_worldviewMap.at(id));
			}
			bool  has_worldview(const int id) const {
				return m_worldviewMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<WorldviewConfig>& worldview() const{
				return m_configs.worldview();
			}
			//::google::protobuf::RepeatedPtrField<WorldviewConfig>* mutable_worldview(){

				//return m_configs.mutable_worldview();
			//}
			//table WeChatConfig interface
			const WeChatConfig&  wechat(const int id) const {
				return *(m_wechatMap.at(id));
			}
			bool  has_wechat(const int id) const {
				return m_wechatMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<WeChatConfig>& wechat() const{
				return m_configs.wechat();
			}
			//::google::protobuf::RepeatedPtrField<WeChatConfig>* mutable_wechat(){

				//return m_configs.mutable_wechat();
			//}
			//table VipSignUpConfig interface
			const VipSignUpConfig&  vipsignup(const int id) const {
				return *(m_vipsignupMap.at(id));
			}
			bool  has_vipsignup(const int id) const {
				return m_vipsignupMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<VipSignUpConfig>& vipsignup() const{
				return m_configs.vipsignup();
			}
			//::google::protobuf::RepeatedPtrField<VipSignUpConfig>* mutable_vipsignup(){

				//return m_configs.mutable_vipsignup();
			//}
			//table CombineSkillEffectConfig interface
			const CombineSkillEffectConfig&  combineskilleffect(const int id) const {
				return *(m_combineskilleffectMap.at(id));
			}
			bool  has_combineskilleffect(const int id) const {
				return m_combineskilleffectMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<CombineSkillEffectConfig>& combineskilleffect() const{
				return m_configs.combineskilleffect();
			}
			//::google::protobuf::RepeatedPtrField<CombineSkillEffectConfig>* mutable_combineskilleffect(){

				//return m_configs.mutable_combineskilleffect();
			//}
			//table chapter_awardConfig interface
			const chapter_awardConfig&  chapter_award(const int id) const {
				return *(m_chapter_awardMap.at(id));
			}
			bool  has_chapter_award(const int id) const {
				return m_chapter_awardMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<chapter_awardConfig>& chapter_award() const{
				return m_configs.chapter_award();
			}
			//::google::protobuf::RepeatedPtrField<chapter_awardConfig>* mutable_chapter_award(){

				//return m_configs.mutable_chapter_award();
			//}
			//table ExchangeConfig interface
			const ExchangeConfig&  exchange(const int id) const {
				return *(m_exchangeMap.at(id));
			}
			bool  has_exchange(const int id) const {
				return m_exchangeMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<ExchangeConfig>& exchange() const{
				return m_configs.exchange();
			}
			//::google::protobuf::RepeatedPtrField<ExchangeConfig>* mutable_exchange(){

				//return m_configs.mutable_exchange();
			//}
			//table TaskConfig interface
			const TaskConfig&  task(const int id) const {
				return *(m_taskMap.at(id));
			}
			bool  has_task(const int id) const {
				return m_taskMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<TaskConfig>& task() const{
				return m_configs.task();
			}
			//::google::protobuf::RepeatedPtrField<TaskConfig>* mutable_task(){

				//return m_configs.mutable_task();
			//}
			//table UnitInitDataConfig interface
			const UnitInitDataConfig&  unitinitdata(const int id) const {
				return *(m_unitinitdataMap.at(id));
			}
			bool  has_unitinitdata(const int id) const {
				return m_unitinitdataMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<UnitInitDataConfig>& unitinitdata() const{
				return m_configs.unitinitdata();
			}
			//::google::protobuf::RepeatedPtrField<UnitInitDataConfig>* mutable_unitinitdata(){

				//return m_configs.mutable_unitinitdata();
			//}
			//table EquipmentConfig interface
			const EquipmentConfig&  equipment(const int id) const {
				return *(m_equipmentMap.at(id));
			}
			bool  has_equipment(const int id) const {
				return m_equipmentMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<EquipmentConfig>& equipment() const{
				return m_configs.equipment();
			}
			//::google::protobuf::RepeatedPtrField<EquipmentConfig>* mutable_equipment(){

				//return m_configs.mutable_equipment();
			//}
			//table HelpConfig interface
			const HelpConfig&  help(const int id) const {
				return *(m_helpMap.at(id));
			}
			bool  has_help(const int id) const {
				return m_helpMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<HelpConfig>& help() const{
				return m_configs.help();
			}
			//::google::protobuf::RepeatedPtrField<HelpConfig>* mutable_help(){

				//return m_configs.mutable_help();
			//}
			//table activity_commodityConfig interface
			const activity_commodityConfig&  activity_commodity(const int id) const {
				return *(m_activity_commodityMap.at(id));
			}
			bool  has_activity_commodity(const int id) const {
				return m_activity_commodityMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<activity_commodityConfig>& activity_commodity() const{
				return m_configs.activity_commodity();
			}
			//::google::protobuf::RepeatedPtrField<activity_commodityConfig>* mutable_activity_commodity(){

				//return m_configs.mutable_activity_commodity();
			//}
			//table UnitEffectConfig interface
			const UnitEffectConfig&  uniteffect(const int id) const {
				return *(m_uniteffectMap.at(id));
			}
			bool  has_uniteffect(const int id) const {
				return m_uniteffectMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<UnitEffectConfig>& uniteffect() const{
				return m_configs.uniteffect();
			}
			//::google::protobuf::RepeatedPtrField<UnitEffectConfig>* mutable_uniteffect(){

				//return m_configs.mutable_uniteffect();
			//}
			//table FamilyConfig interface
			const FamilyConfig&  family(const int id) const {
				return *(m_familyMap.at(id));
			}
			bool  has_family(const int id) const {
				return m_familyMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<FamilyConfig>& family() const{
				return m_configs.family();
			}
			//::google::protobuf::RepeatedPtrField<FamilyConfig>* mutable_family(){

				//return m_configs.mutable_family();
			//}
			//table AchievementConfig interface
			const AchievementConfig&  achievement(const int id) const {
				return *(m_achievementMap.at(id));
			}
			bool  has_achievement(const int id) const {
				return m_achievementMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<AchievementConfig>& achievement() const{
				return m_configs.achievement();
			}
			//::google::protobuf::RepeatedPtrField<AchievementConfig>* mutable_achievement(){

				//return m_configs.mutable_achievement();
			//}
			//table Activity_RebateConfig interface
			const Activity_RebateConfig&  activity_rebate(const int id) const {
				return *(m_activity_rebateMap.at(id));
			}
			bool  has_activity_rebate(const int id) const {
				return m_activity_rebateMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<Activity_RebateConfig>& activity_rebate() const{
				return m_configs.activity_rebate();
			}
			//::google::protobuf::RepeatedPtrField<Activity_RebateConfig>* mutable_activity_rebate(){

				//return m_configs.mutable_activity_rebate();
			//}
			//table RankConfig interface
			const RankConfig&  rank(const int id) const {
				return *(m_rankMap.at(id));
			}
			bool  has_rank(const int id) const {
				return m_rankMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<RankConfig>& rank() const{
				return m_configs.rank();
			}
			//::google::protobuf::RepeatedPtrField<RankConfig>* mutable_rank(){

				//return m_configs.mutable_rank();
			//}
			//table TerritoryConfig interface
			const TerritoryConfig&  territory(const int id) const {
				return *(m_territoryMap.at(id));
			}
			bool  has_territory(const int id) const {
				return m_territoryMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<TerritoryConfig>& territory() const{
				return m_configs.territory();
			}
			//::google::protobuf::RepeatedPtrField<TerritoryConfig>* mutable_territory(){

				//return m_configs.mutable_territory();
			//}
			//table Stage_GuideConfig interface
			const Stage_GuideConfig&  stage_guide(const int id) const {
				return *(m_stage_guideMap.at(id));
			}
			bool  has_stage_guide(const int id) const {
				return m_stage_guideMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<Stage_GuideConfig>& stage_guide() const{
				return m_configs.stage_guide();
			}
			//::google::protobuf::RepeatedPtrField<Stage_GuideConfig>* mutable_stage_guide(){

				//return m_configs.mutable_stage_guide();
			//}
			//table ActivityConfig interface
			const ActivityConfig&  activity(const int id) const {
				return *(m_activityMap.at(id));
			}
			bool  has_activity(const int id) const {
				return m_activityMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<ActivityConfig>& activity() const{
				return m_configs.activity();
			}
			//::google::protobuf::RepeatedPtrField<ActivityConfig>* mutable_activity(){

				//return m_configs.mutable_activity();
			//}
			//table UnitGrownConfig interface
			const UnitGrownConfig&  unitgrown(const int id) const {
				return *(m_unitgrownMap.at(id));
			}
			bool  has_unitgrown(const int id) const {
				return m_unitgrownMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<UnitGrownConfig>& unitgrown() const{
				return m_configs.unitgrown();
			}
			//::google::protobuf::RepeatedPtrField<UnitGrownConfig>* mutable_unitgrown(){

				//return m_configs.mutable_unitgrown();
			//}
			//table Bank_levelup_timeConfig interface
			const Bank_levelup_timeConfig&  bank_levelup_time(const int id) const {
				return *(m_bank_levelup_timeMap.at(id));
			}
			bool  has_bank_levelup_time(const int id) const {
				return m_bank_levelup_timeMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<Bank_levelup_timeConfig>& bank_levelup_time() const{
				return m_configs.bank_levelup_time();
			}
			//::google::protobuf::RepeatedPtrField<Bank_levelup_timeConfig>* mutable_bank_levelup_time(){

				//return m_configs.mutable_bank_levelup_time();
			//}
			//table SkeletonAnimsConfig interface
			const SkeletonAnimsConfig&  skeletonanims(const int id) const {
				return *(m_skeletonanimsMap.at(id));
			}
			bool  has_skeletonanims(const int id) const {
				return m_skeletonanimsMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<SkeletonAnimsConfig>& skeletonanims() const{
				return m_configs.skeletonanims();
			}
			//::google::protobuf::RepeatedPtrField<SkeletonAnimsConfig>* mutable_skeletonanims(){

				//return m_configs.mutable_skeletonanims();
			//}
			//table ConditionConfig interface
			const ConditionConfig&  condition(const int id) const {
				return *(m_conditionMap.at(id));
			}
			bool  has_condition(const int id) const {
				return m_conditionMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<ConditionConfig>& condition() const{
				return m_configs.condition();
			}
			//::google::protobuf::RepeatedPtrField<ConditionConfig>* mutable_condition(){

				//return m_configs.mutable_condition();
			//}
			//table EquipmentCombineConfig interface
			const EquipmentCombineConfig&  equipmentcombine(const int id) const {
				return *(m_equipmentcombineMap.at(id));
			}
			bool  has_equipmentcombine(const int id) const {
				return m_equipmentcombineMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<EquipmentCombineConfig>& equipmentcombine() const{
				return m_configs.equipmentcombine();
			}
			//::google::protobuf::RepeatedPtrField<EquipmentCombineConfig>* mutable_equipmentcombine(){

				//return m_configs.mutable_equipmentcombine();
			//}
			//table BattleThemeConfig interface
			const BattleThemeConfig&  battletheme(const int id) const {
				return *(m_battlethemeMap.at(id));
			}
			bool  has_battletheme(const int id) const {
				return m_battlethemeMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<BattleThemeConfig>& battletheme() const{
				return m_configs.battletheme();
			}
			//::google::protobuf::RepeatedPtrField<BattleThemeConfig>* mutable_battletheme(){

				//return m_configs.mutable_battletheme();
			//}
			//table CostConfig interface
			const CostConfig&  cost(const int id) const {
				return *(m_costMap.at(id));
			}
			bool  has_cost(const int id) const {
				return m_costMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<CostConfig>& cost() const{
				return m_configs.cost();
			}
			//::google::protobuf::RepeatedPtrField<CostConfig>* mutable_cost(){

				//return m_configs.mutable_cost();
			//}
			//table EquipmentImproveCostConfig interface
			const EquipmentImproveCostConfig&  equipmentimprovecost(const int id) const {
				return *(m_equipmentimprovecostMap.at(id));
			}
			bool  has_equipmentimprovecost(const int id) const {
				return m_equipmentimprovecostMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<EquipmentImproveCostConfig>& equipmentimprovecost() const{
				return m_configs.equipmentimprovecost();
			}
			//::google::protobuf::RepeatedPtrField<EquipmentImproveCostConfig>* mutable_equipmentimprovecost(){

				//return m_configs.mutable_equipmentimprovecost();
			//}
			//table JianghunConfig interface
			const JianghunConfig&  jianghun(const int id) const {
				return *(m_jianghunMap.at(id));
			}
			bool  has_jianghun(const int id) const {
				return m_jianghunMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<JianghunConfig>& jianghun() const{
				return m_configs.jianghun();
			}
			//::google::protobuf::RepeatedPtrField<JianghunConfig>* mutable_jianghun(){

				//return m_configs.mutable_jianghun();
			//}
			//table CardCombineConfig interface
			const CardCombineConfig&  cardcombine(const int id) const {
				return *(m_cardcombineMap.at(id));
			}
			bool  has_cardcombine(const int id) const {
				return m_cardcombineMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<CardCombineConfig>& cardcombine() const{
				return m_configs.cardcombine();
			}
			//::google::protobuf::RepeatedPtrField<CardCombineConfig>* mutable_cardcombine(){

				//return m_configs.mutable_cardcombine();
			//}
			//table StageConditionConfig interface
			const StageConditionConfig&  stagecondition(const int id) const {
				return *(m_stageconditionMap.at(id));
			}
			bool  has_stagecondition(const int id) const {
				return m_stageconditionMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<StageConditionConfig>& stagecondition() const{
				return m_configs.stagecondition();
			}
			//::google::protobuf::RepeatedPtrField<StageConditionConfig>* mutable_stagecondition(){

				//return m_configs.mutable_stagecondition();
			//}
			//table CardSellConfig interface
			const CardSellConfig&  cardsell(const int id) const {
				return *(m_cardsellMap.at(id));
			}
			bool  has_cardsell(const int id) const {
				return m_cardsellMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<CardSellConfig>& cardsell() const{
				return m_configs.cardsell();
			}
			//::google::protobuf::RepeatedPtrField<CardSellConfig>* mutable_cardsell(){

				//return m_configs.mutable_cardsell();
			//}
			//table InitialAchievementConfig interface
			const InitialAchievementConfig&  initialachievement(const int id) const {
				return *(m_initialachievementMap.at(id));
			}
			bool  has_initialachievement(const int id) const {
				return m_initialachievementMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<InitialAchievementConfig>& initialachievement() const{
				return m_configs.initialachievement();
			}
			//::google::protobuf::RepeatedPtrField<InitialAchievementConfig>* mutable_initialachievement(){

				//return m_configs.mutable_initialachievement();
			//}
			//table MoneytreeConfig interface
			const MoneytreeConfig&  moneytree(const int id) const {
				return *(m_moneytreeMap.at(id));
			}
			bool  has_moneytree(const int id) const {
				return m_moneytreeMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<MoneytreeConfig>& moneytree() const{
				return m_configs.moneytree();
			}
			//::google::protobuf::RepeatedPtrField<MoneytreeConfig>* mutable_moneytree(){

				//return m_configs.mutable_moneytree();
			//}
			//table StatusEffectConfig interface
			const StatusEffectConfig&  statuseffect(const int id) const {
				return *(m_statuseffectMap.at(id));
			}
			bool  has_statuseffect(const int id) const {
				return m_statuseffectMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<StatusEffectConfig>& statuseffect() const{
				return m_configs.statuseffect();
			}
			//::google::protobuf::RepeatedPtrField<StatusEffectConfig>* mutable_statuseffect(){

				//return m_configs.mutable_statuseffect();
			//}
			//table award_codeConfig interface
			const award_codeConfig&  award_code(const int id) const {
				return *(m_award_codeMap.at(id));
			}
			bool  has_award_code(const int id) const {
				return m_award_codeMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<award_codeConfig>& award_code() const{
				return m_configs.award_code();
			}
			//::google::protobuf::RepeatedPtrField<award_codeConfig>* mutable_award_code(){

				//return m_configs.mutable_award_code();
			//}
			//table SkillExpConfig interface
			const SkillExpConfig&  skillexp(const int id) const {
				return *(m_skillexpMap.at(id));
			}
			bool  has_skillexp(const int id) const {
				return m_skillexpMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<SkillExpConfig>& skillexp() const{
				return m_configs.skillexp();
			}
			//::google::protobuf::RepeatedPtrField<SkillExpConfig>* mutable_skillexp(){

				//return m_configs.mutable_skillexp();
			//}
			//table friend_leadershipConfig interface
			const friend_leadershipConfig&  friend_leadership(const int id) const {
				return *(m_friend_leadershipMap.at(id));
			}
			bool  has_friend_leadership(const int id) const {
				return m_friend_leadershipMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<friend_leadershipConfig>& friend_leadership() const{
				return m_configs.friend_leadership();
			}
			//::google::protobuf::RepeatedPtrField<friend_leadershipConfig>* mutable_friend_leadership(){

				//return m_configs.mutable_friend_leadership();
			//}
			//table Arena_RewardConfig interface
			const Arena_RewardConfig&  arena_reward(const int id) const {
				return *(m_arena_rewardMap.at(id));
			}
			bool  has_arena_reward(const int id) const {
				return m_arena_rewardMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<Arena_RewardConfig>& arena_reward() const{
				return m_configs.arena_reward();
			}
			//::google::protobuf::RepeatedPtrField<Arena_RewardConfig>* mutable_arena_reward(){

				//return m_configs.mutable_arena_reward();
			//}
			//table SkillEffectConfig interface
			const SkillEffectConfig&  skilleffect(const int id) const {
				return *(m_skilleffectMap.at(id));
			}
			bool  has_skilleffect(const int id) const {
				return m_skilleffectMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<SkillEffectConfig>& skilleffect() const{
				return m_configs.skilleffect();
			}
			//::google::protobuf::RepeatedPtrField<SkillEffectConfig>* mutable_skilleffect(){

				//return m_configs.mutable_skilleffect();
			//}
			//table SkillBuffConfig interface
			const SkillBuffConfig&  skillbuff(const int id) const {
				return *(m_skillbuffMap.at(id));
			}
			bool  has_skillbuff(const int id) const {
				return m_skillbuffMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<SkillBuffConfig>& skillbuff() const{
				return m_configs.skillbuff();
			}
			//::google::protobuf::RepeatedPtrField<SkillBuffConfig>* mutable_skillbuff(){

				//return m_configs.mutable_skillbuff();
			//}
			//table SequenceAnimsConfig interface
			const SequenceAnimsConfig&  sequenceanims(const int id) const {
				return *(m_sequenceanimsMap.at(id));
			}
			bool  has_sequenceanims(const int id) const {
				return m_sequenceanimsMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<SequenceAnimsConfig>& sequenceanims() const{
				return m_configs.sequenceanims();
			}
			//::google::protobuf::RepeatedPtrField<SequenceAnimsConfig>* mutable_sequenceanims(){

				//return m_configs.mutable_sequenceanims();
			//}
			//table PvpRobRateConfig interface
			const PvpRobRateConfig&  pvprobrate(const int id) const {
				return *(m_pvprobrateMap.at(id));
			}
			bool  has_pvprobrate(const int id) const {
				return m_pvprobrateMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<PvpRobRateConfig>& pvprobrate() const{
				return m_configs.pvprobrate();
			}
			//::google::protobuf::RepeatedPtrField<PvpRobRateConfig>* mutable_pvprobrate(){

				//return m_configs.mutable_pvprobrate();
			//}
			//table TotalDamageBonusConfig interface
			const TotalDamageBonusConfig&  totaldamagebonus(const int id) const {
				return *(m_totaldamagebonusMap.at(id));
			}
			bool  has_totaldamagebonus(const int id) const {
				return m_totaldamagebonusMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<TotalDamageBonusConfig>& totaldamagebonus() const{
				return m_configs.totaldamagebonus();
			}
			//::google::protobuf::RepeatedPtrField<TotalDamageBonusConfig>* mutable_totaldamagebonus(){

				//return m_configs.mutable_totaldamagebonus();
			//}
			//table NewcardConfig interface
			const NewcardConfig&  newcard(const int id) const {
				return *(m_newcardMap.at(id));
			}
			bool  has_newcard(const int id) const {
				return m_newcardMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<NewcardConfig>& newcard() const{
				return m_configs.newcard();
			}
			//::google::protobuf::RepeatedPtrField<NewcardConfig>* mutable_newcard(){

				//return m_configs.mutable_newcard();
			//}
			//table MonsterConfig interface
			const MonsterConfig&  monster(const int id) const {
				return *(m_monsterMap.at(id));
			}
			bool  has_monster(const int id) const {
				return m_monsterMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<MonsterConfig>& monster() const{
				return m_configs.monster();
			}
			//::google::protobuf::RepeatedPtrField<MonsterConfig>* mutable_monster(){

				//return m_configs.mutable_monster();
			//}
			//table BonusEmailConfig interface
			const BonusEmailConfig&  bonusemail(const int id) const {
				return *(m_bonusemailMap.at(id));
			}
			bool  has_bonusemail(const int id) const {
				return m_bonusemailMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<BonusEmailConfig>& bonusemail() const{
				return m_configs.bonusemail();
			}
			//::google::protobuf::RepeatedPtrField<BonusEmailConfig>* mutable_bonusemail(){

				//return m_configs.mutable_bonusemail();
			//}
			//table ItemCombineConfig interface
			const ItemCombineConfig&  itemcombine(const int id) const {
				return *(m_itemcombineMap.at(id));
			}
			bool  has_itemcombine(const int id) const {
				return m_itemcombineMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<ItemCombineConfig>& itemcombine() const{
				return m_configs.itemcombine();
			}
			//::google::protobuf::RepeatedPtrField<ItemCombineConfig>* mutable_itemcombine(){

				//return m_configs.mutable_itemcombine();
			//}
			//table help_noticeConfig interface
			const help_noticeConfig&  help_notice(const int id) const {
				return *(m_help_noticeMap.at(id));
			}
			bool  has_help_notice(const int id) const {
				return m_help_noticeMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<help_noticeConfig>& help_notice() const{
				return m_configs.help_notice();
			}
			//::google::protobuf::RepeatedPtrField<help_noticeConfig>* mutable_help_notice(){

				//return m_configs.mutable_help_notice();
			//}
		private:
			void setupMapping(){
				//setup table chapter to  Map
				if(true){
					m_chapterMap.clear();
					const ::google::protobuf::RepeatedPtrField<ChapterConfig>& _chapter = chapter();
					for(::google::protobuf::RepeatedPtrField<ChapterConfig>::const_iterator it = _chapter.begin(); it != _chapter.end(); ++it){
						m_chapterMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table monstergroup to  Map
				if(true){
					m_monstergroupMap.clear();
					const ::google::protobuf::RepeatedPtrField<MonsterGroupConfig>& _monstergroup = monstergroup();
					for(::google::protobuf::RepeatedPtrField<MonsterGroupConfig>::const_iterator it = _monstergroup.begin(); it != _monstergroup.end(); ++it){
						m_monstergroupMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table rank_match_robot to  Map
				if(true){
					m_rank_match_robotMap.clear();
					const ::google::protobuf::RepeatedPtrField<rank_match_robotConfig>& _rank_match_robot = rank_match_robot();
					for(::google::protobuf::RepeatedPtrField<rank_match_robotConfig>::const_iterator it = _rank_match_robot.begin(); it != _rank_match_robot.end(); ++it){
						m_rank_match_robotMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table unit to  Map
				if(true){
					m_unitMap.clear();
					const ::google::protobuf::RepeatedPtrField<UnitConfig>& _unit = unit();
					for(::google::protobuf::RepeatedPtrField<UnitConfig>::const_iterator it = _unit.begin(); it != _unit.end(); ++it){
						m_unitMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table talent_init to  Map
				if(true){
					m_talent_initMap.clear();
					const ::google::protobuf::RepeatedPtrField<Talent_initConfig>& _talent_init = talent_init();
					for(::google::protobuf::RepeatedPtrField<Talent_initConfig>::const_iterator it = _talent_init.begin(); it != _talent_init.end(); ++it){
						m_talent_initMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table xilian to  Map
				if(true){
					m_xilianMap.clear();
					const ::google::protobuf::RepeatedPtrField<XilianConfig>& _xilian = xilian();
					for(::google::protobuf::RepeatedPtrField<XilianConfig>::const_iterator it = _xilian.begin(); it != _xilian.end(); ++it){
						m_xilianMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table systemopen to  Map
				if(true){
					m_systemopenMap.clear();
					const ::google::protobuf::RepeatedPtrField<SystemOpenConfig>& _systemopen = systemopen();
					for(::google::protobuf::RepeatedPtrField<SystemOpenConfig>::const_iterator it = _systemopen.begin(); it != _systemopen.end(); ++it){
						m_systemopenMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table colour to  Map
				if(true){
					m_colourMap.clear();
					const ::google::protobuf::RepeatedPtrField<colourConfig>& _colour = colour();
					for(::google::protobuf::RepeatedPtrField<colourConfig>::const_iterator it = _colour.begin(); it != _colour.end(); ++it){
						m_colourMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table territoryeffect to  Map
				if(true){
					m_territoryeffectMap.clear();
					const ::google::protobuf::RepeatedPtrField<TerritoryEffectConfig>& _territoryeffect = territoryeffect();
					for(::google::protobuf::RepeatedPtrField<TerritoryEffectConfig>::const_iterator it = _territoryeffect.begin(); it != _territoryeffect.end(); ++it){
						m_territoryeffectMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table dialogue to  Map
				if(true){
					m_dialogueMap.clear();
					const ::google::protobuf::RepeatedPtrField<DialogueConfig>& _dialogue = dialogue();
					for(::google::protobuf::RepeatedPtrField<DialogueConfig>::const_iterator it = _dialogue.begin(); it != _dialogue.end(); ++it){
						m_dialogueMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table guide to  Map
				if(true){
					m_guideMap.clear();
					const ::google::protobuf::RepeatedPtrField<GuideConfig>& _guide = guide();
					for(::google::protobuf::RepeatedPtrField<GuideConfig>::const_iterator it = _guide.begin(); it != _guide.end(); ++it){
						m_guideMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table dailyevent to  Map
				if(true){
					m_dailyeventMap.clear();
					const ::google::protobuf::RepeatedPtrField<DailyEventConfig>& _dailyevent = dailyevent();
					for(::google::protobuf::RepeatedPtrField<DailyEventConfig>::const_iterator it = _dailyevent.begin(); it != _dailyevent.end(); ++it){
						m_dailyeventMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table battleinitdata to  Map
				if(true){
					m_battleinitdataMap.clear();
					const ::google::protobuf::RepeatedPtrField<BattleInitDataConfig>& _battleinitdata = battleinitdata();
					for(::google::protobuf::RepeatedPtrField<BattleInitDataConfig>::const_iterator it = _battleinitdata.begin(); it != _battleinitdata.end(); ++it){
						m_battleinitdataMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table stage to  Map
				if(true){
					m_stageMap.clear();
					const ::google::protobuf::RepeatedPtrField<StageConfig>& _stage = stage();
					for(::google::protobuf::RepeatedPtrField<StageConfig>::const_iterator it = _stage.begin(); it != _stage.end(); ++it){
						m_stageMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table signupbonus to  Map
				if(true){
					m_signupbonusMap.clear();
					const ::google::protobuf::RepeatedPtrField<SignupBonusConfig>& _signupbonus = signupbonus();
					for(::google::protobuf::RepeatedPtrField<SignupBonusConfig>::const_iterator it = _signupbonus.begin(); it != _signupbonus.end(); ++it){
						m_signupbonusMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table activity_stage to  Map
				if(true){
					m_activity_stageMap.clear();
					const ::google::protobuf::RepeatedPtrField<Activity_stageConfig>& _activity_stage = activity_stage();
					for(::google::protobuf::RepeatedPtrField<Activity_stageConfig>::const_iterator it = _activity_stage.begin(); it != _activity_stage.end(); ++it){
						m_activity_stageMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table sounds to  Map
				if(true){
					m_soundsMap.clear();
					const ::google::protobuf::RepeatedPtrField<SoundsConfig>& _sounds = sounds();
					for(::google::protobuf::RepeatedPtrField<SoundsConfig>::const_iterator it = _sounds.begin(); it != _sounds.end(); ++it){
						m_soundsMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table cardlevelupexp to  Map
				if(true){
					m_cardlevelupexpMap.clear();
					const ::google::protobuf::RepeatedPtrField<CardLevelupExpConfig>& _cardlevelupexp = cardlevelupexp();
					for(::google::protobuf::RepeatedPtrField<CardLevelupExpConfig>::const_iterator it = _cardlevelupexp.begin(); it != _cardlevelupexp.end(); ++it){
						m_cardlevelupexpMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table dailytaskinitdata to  Map
				if(true){
					m_dailytaskinitdataMap.clear();
					const ::google::protobuf::RepeatedPtrField<DailyTaskInitDataConfig>& _dailytaskinitdata = dailytaskinitdata();
					for(::google::protobuf::RepeatedPtrField<DailyTaskInitDataConfig>::const_iterator it = _dailytaskinitdata.begin(); it != _dailytaskinitdata.end(); ++it){
						m_dailytaskinitdataMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table guidebonus to  Map
				if(true){
					m_guidebonusMap.clear();
					const ::google::protobuf::RepeatedPtrField<GuideBonusConfig>& _guidebonus = guidebonus();
					for(::google::protobuf::RepeatedPtrField<GuideBonusConfig>::const_iterator it = _guidebonus.begin(); it != _guidebonus.end(); ++it){
						m_guidebonusMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table plist to  Map
				if(true){
					m_plistMap.clear();
					const ::google::protobuf::RepeatedPtrField<PlistConfig>& _plist = plist();
					for(::google::protobuf::RepeatedPtrField<PlistConfig>::const_iterator it = _plist.begin(); it != _plist.end(); ++it){
						m_plistMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table descrption to  Map
				if(true){
					m_descrptionMap.clear();
					const ::google::protobuf::RepeatedPtrField<descrptionConfig>& _descrption = descrption();
					for(::google::protobuf::RepeatedPtrField<descrptionConfig>::const_iterator it = _descrption.begin(); it != _descrption.end(); ++it){
						m_descrptionMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table paychannel to  Map
				if(true){
					m_paychannelMap.clear();
					const ::google::protobuf::RepeatedPtrField<PayChannelConfig>& _paychannel = paychannel();
					for(::google::protobuf::RepeatedPtrField<PayChannelConfig>::const_iterator it = _paychannel.begin(); it != _paychannel.end(); ++it){
						m_paychannelMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table itemtype to  Map
				if(true){
					m_itemtypeMap.clear();
					const ::google::protobuf::RepeatedPtrField<ItemTypeConfig>& _itemtype = itemtype();
					for(::google::protobuf::RepeatedPtrField<ItemTypeConfig>::const_iterator it = _itemtype.begin(); it != _itemtype.end(); ++it){
						m_itemtypeMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table charlevel to  Map
				if(true){
					m_charlevelMap.clear();
					const ::google::protobuf::RepeatedPtrField<CharLevelConfig>& _charlevel = charlevel();
					for(::google::protobuf::RepeatedPtrField<CharLevelConfig>::const_iterator it = _charlevel.begin(); it != _charlevel.end(); ++it){
						m_charlevelMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table rebate to  Map
				if(true){
					m_rebateMap.clear();
					const ::google::protobuf::RepeatedPtrField<RebateConfig>& _rebate = rebate();
					for(::google::protobuf::RepeatedPtrField<RebateConfig>::const_iterator it = _rebate.begin(); it != _rebate.end(); ++it){
						m_rebateMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table position to  Map
				if(true){
					m_positionMap.clear();
					const ::google::protobuf::RepeatedPtrField<PositionConfig>& _position = position();
					for(::google::protobuf::RepeatedPtrField<PositionConfig>::const_iterator it = _position.begin(); it != _position.end(); ++it){
						m_positionMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table rank_match to  Map
				if(true){
					m_rank_matchMap.clear();
					const ::google::protobuf::RepeatedPtrField<rank_matchConfig>& _rank_match = rank_match();
					for(::google::protobuf::RepeatedPtrField<rank_matchConfig>::const_iterator it = _rank_match.begin(); it != _rank_match.end(); ++it){
						m_rank_matchMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table system_notice to  Map
				if(true){
					m_system_noticeMap.clear();
					const ::google::protobuf::RepeatedPtrField<System_noticeConfig>& _system_notice = system_notice();
					for(::google::protobuf::RepeatedPtrField<System_noticeConfig>::const_iterator it = _system_notice.begin(); it != _system_notice.end(); ++it){
						m_system_noticeMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table mission_info to  Map
				if(true){
					m_mission_infoMap.clear();
					const ::google::protobuf::RepeatedPtrField<Mission_InfoConfig>& _mission_info = mission_info();
					for(::google::protobuf::RepeatedPtrField<Mission_InfoConfig>::const_iterator it = _mission_info.begin(); it != _mission_info.end(); ++it){
						m_mission_infoMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table arena_rank to  Map
				if(true){
					m_arena_rankMap.clear();
					const ::google::protobuf::RepeatedPtrField<Arena_RankConfig>& _arena_rank = arena_rank();
					for(::google::protobuf::RepeatedPtrField<Arena_RankConfig>::const_iterator it = _arena_rank.begin(); it != _arena_rank.end(); ++it){
						m_arena_rankMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table combinesummary to  Map
				if(true){
					m_combinesummaryMap.clear();
					const ::google::protobuf::RepeatedPtrField<CombineSummaryConfig>& _combinesummary = combinesummary();
					for(::google::protobuf::RepeatedPtrField<CombineSummaryConfig>::const_iterator it = _combinesummary.begin(); it != _combinesummary.end(); ++it){
						m_combinesummaryMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table prop to  Map
				if(true){
					m_propMap.clear();
					const ::google::protobuf::RepeatedPtrField<PropConfig>& _prop = prop();
					for(::google::protobuf::RepeatedPtrField<PropConfig>::const_iterator it = _prop.begin(); it != _prop.end(); ++it){
						m_propMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table drop to  Map
				if(true){
					m_dropMap.clear();
					const ::google::protobuf::RepeatedPtrField<DropConfig>& _drop = drop();
					for(::google::protobuf::RepeatedPtrField<DropConfig>::const_iterator it = _drop.begin(); it != _drop.end(); ++it){
						m_dropMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table ccbianims to  Map
				if(true){
					m_ccbianimsMap.clear();
					const ::google::protobuf::RepeatedPtrField<CcbiAnimsConfig>& _ccbianims = ccbianims();
					for(::google::protobuf::RepeatedPtrField<CcbiAnimsConfig>::const_iterator it = _ccbianims.begin(); it != _ccbianims.end(); ++it){
						m_ccbianimsMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table activity_odds to  Map
				if(true){
					m_activity_oddsMap.clear();
					const ::google::protobuf::RepeatedPtrField<activity_oddsConfig>& _activity_odds = activity_odds();
					for(::google::protobuf::RepeatedPtrField<activity_oddsConfig>::const_iterator it = _activity_odds.begin(); it != _activity_odds.end(); ++it){
						m_activity_oddsMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table store_item to  Map
				if(true){
					m_store_itemMap.clear();
					const ::google::protobuf::RepeatedPtrField<store_itemConfig>& _store_item = store_item();
					for(::google::protobuf::RepeatedPtrField<store_itemConfig>::const_iterator it = _store_item.begin(); it != _store_item.end(); ++it){
						m_store_itemMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table sprite to  Map
				if(true){
					m_spriteMap.clear();
					const ::google::protobuf::RepeatedPtrField<SpriteConfig>& _sprite = sprite();
					for(::google::protobuf::RepeatedPtrField<SpriteConfig>::const_iterator it = _sprite.begin(); it != _sprite.end(); ++it){
						m_spriteMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table battlehelp to  Map
				if(true){
					m_battlehelpMap.clear();
					const ::google::protobuf::RepeatedPtrField<BattleHelpConfig>& _battlehelp = battlehelp();
					for(::google::protobuf::RepeatedPtrField<BattleHelpConfig>::const_iterator it = _battlehelp.begin(); it != _battlehelp.end(); ++it){
						m_battlehelpMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table stopwinbonus to  Map
				if(true){
					m_stopwinbonusMap.clear();
					const ::google::protobuf::RepeatedPtrField<StopWinBonusConfig>& _stopwinbonus = stopwinbonus();
					for(::google::protobuf::RepeatedPtrField<StopWinBonusConfig>::const_iterator it = _stopwinbonus.begin(); it != _stopwinbonus.end(); ++it){
						m_stopwinbonusMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table cardskill to  Map
				if(true){
					m_cardskillMap.clear();
					const ::google::protobuf::RepeatedPtrField<CardSkillConfig>& _cardskill = cardskill();
					for(::google::protobuf::RepeatedPtrField<CardSkillConfig>::const_iterator it = _cardskill.begin(); it != _cardskill.end(); ++it){
						m_cardskillMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table subbattlestory to  Map
				if(true){
					m_subbattlestoryMap.clear();
					const ::google::protobuf::RepeatedPtrField<SubBattleStoryConfig>& _subbattlestory = subbattlestory();
					for(::google::protobuf::RepeatedPtrField<SubBattleStoryConfig>::const_iterator it = _subbattlestory.begin(); it != _subbattlestory.end(); ++it){
						m_subbattlestoryMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table minecoin to  Map
				if(true){
					m_minecoinMap.clear();
					const ::google::protobuf::RepeatedPtrField<MineCoinConfig>& _minecoin = minecoin();
					for(::google::protobuf::RepeatedPtrField<MineCoinConfig>::const_iterator it = _minecoin.begin(); it != _minecoin.end(); ++it){
						m_minecoinMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table talent_initial_id to  Map
				if(true){
					m_talent_initial_idMap.clear();
					const ::google::protobuf::RepeatedPtrField<Talent_initial_idConfig>& _talent_initial_id = talent_initial_id();
					for(::google::protobuf::RepeatedPtrField<Talent_initial_idConfig>::const_iterator it = _talent_initial_id.begin(); it != _talent_initial_id.end(); ++it){
						m_talent_initial_idMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table char_friend_count to  Map
				if(true){
					m_char_friend_countMap.clear();
					const ::google::protobuf::RepeatedPtrField<char_friend_countConfig>& _char_friend_count = char_friend_count();
					for(::google::protobuf::RepeatedPtrField<char_friend_countConfig>::const_iterator it = _char_friend_count.begin(); it != _char_friend_count.end(); ++it){
						m_char_friend_countMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table arena_buff to  Map
				if(true){
					m_arena_buffMap.clear();
					const ::google::protobuf::RepeatedPtrField<Arena_BuffConfig>& _arena_buff = arena_buff();
					for(::google::protobuf::RepeatedPtrField<Arena_BuffConfig>::const_iterator it = _arena_buff.begin(); it != _arena_buff.end(); ++it){
						m_arena_buffMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table characterinitdata to  Map
				if(true){
					m_characterinitdataMap.clear();
					const ::google::protobuf::RepeatedPtrField<CharacterInitDataConfig>& _characterinitdata = characterinitdata();
					for(::google::protobuf::RepeatedPtrField<CharacterInitDataConfig>::const_iterator it = _characterinitdata.begin(); it != _characterinitdata.end(); ++it){
						m_characterinitdataMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table achievementcondition to  Map
				if(true){
					m_achievementconditionMap.clear();
					const ::google::protobuf::RepeatedPtrField<AchievementConditionConfig>& _achievementcondition = achievementcondition();
					for(::google::protobuf::RepeatedPtrField<AchievementConditionConfig>::const_iterator it = _achievementcondition.begin(); it != _achievementcondition.end(); ++it){
						m_achievementconditionMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table mineinitdata to  Map
				if(true){
					m_mineinitdataMap.clear();
					const ::google::protobuf::RepeatedPtrField<MineInitDataConfig>& _mineinitdata = mineinitdata();
					for(::google::protobuf::RepeatedPtrField<MineInitDataConfig>::const_iterator it = _mineinitdata.begin(); it != _mineinitdata.end(); ++it){
						m_mineinitdataMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table course to  Map
				if(true){
					m_courseMap.clear();
					const ::google::protobuf::RepeatedPtrField<CourseConfig>& _course = course();
					for(::google::protobuf::RepeatedPtrField<CourseConfig>::const_iterator it = _course.begin(); it != _course.end(); ++it){
						m_courseMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table activity_consume_money to  Map
				if(true){
					m_activity_consume_moneyMap.clear();
					const ::google::protobuf::RepeatedPtrField<activity_consume_moneyConfig>& _activity_consume_money = activity_consume_money();
					for(::google::protobuf::RepeatedPtrField<activity_consume_moneyConfig>::const_iterator it = _activity_consume_money.begin(); it != _activity_consume_money.end(); ++it){
						m_activity_consume_moneyMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table robotdata to  Map
				if(true){
					m_robotdataMap.clear();
					const ::google::protobuf::RepeatedPtrField<RobotDataConfig>& _robotdata = robotdata();
					for(::google::protobuf::RepeatedPtrField<RobotDataConfig>::const_iterator it = _robotdata.begin(); it != _robotdata.end(); ++it){
						m_robotdataMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table erniebonus to  Map
				if(true){
					m_erniebonusMap.clear();
					const ::google::protobuf::RepeatedPtrField<ErnieBonusConfig>& _erniebonus = erniebonus();
					for(::google::protobuf::RepeatedPtrField<ErnieBonusConfig>::const_iterator it = _erniebonus.begin(); it != _erniebonus.end(); ++it){
						m_erniebonusMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table cardskillfix to  Map
				if(true){
					m_cardskillfixMap.clear();
					const ::google::protobuf::RepeatedPtrField<CardSkillFixConfig>& _cardskillfix = cardskillfix();
					for(::google::protobuf::RepeatedPtrField<CardSkillFixConfig>::const_iterator it = _cardskillfix.begin(); it != _cardskillfix.end(); ++it){
						m_cardskillfixMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table vipinitdata to  Map
				if(true){
					m_vipinitdataMap.clear();
					const ::google::protobuf::RepeatedPtrField<VipInitDataConfig>& _vipinitdata = vipinitdata();
					for(::google::protobuf::RepeatedPtrField<VipInitDataConfig>::const_iterator it = _vipinitdata.begin(); it != _vipinitdata.end(); ++it){
						m_vipinitdataMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table skillgrow to  Map
				if(true){
					m_skillgrowMap.clear();
					const ::google::protobuf::RepeatedPtrField<SkillGrowConfig>& _skillgrow = skillgrow();
					for(::google::protobuf::RepeatedPtrField<SkillGrowConfig>::const_iterator it = _skillgrow.begin(); it != _skillgrow.end(); ++it){
						m_skillgrowMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table store to  Map
				if(true){
					m_storeMap.clear();
					const ::google::protobuf::RepeatedPtrField<storeConfig>& _store = store();
					for(::google::protobuf::RepeatedPtrField<storeConfig>::const_iterator it = _store.begin(); it != _store.end(); ++it){
						m_storeMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table arena_top to  Map
				if(true){
					m_arena_topMap.clear();
					const ::google::protobuf::RepeatedPtrField<Arena_TopConfig>& _arena_top = arena_top();
					for(::google::protobuf::RepeatedPtrField<Arena_TopConfig>::const_iterator it = _arena_top.begin(); it != _arena_top.end(); ++it){
						m_arena_topMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table frames to  Map
				if(true){
					m_framesMap.clear();
					const ::google::protobuf::RepeatedPtrField<FramesConfig>& _frames = frames();
					for(::google::protobuf::RepeatedPtrField<FramesConfig>::const_iterator it = _frames.begin(); it != _frames.end(); ++it){
						m_framesMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table autobattleinitdata to  Map
				if(true){
					m_autobattleinitdataMap.clear();
					const ::google::protobuf::RepeatedPtrField<AutoBattleInitDataConfig>& _autobattleinitdata = autobattleinitdata();
					for(::google::protobuf::RepeatedPtrField<AutoBattleInitDataConfig>::const_iterator it = _autobattleinitdata.begin(); it != _autobattleinitdata.end(); ++it){
						m_autobattleinitdataMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table attributetips to  Map
				if(true){
					m_attributetipsMap.clear();
					const ::google::protobuf::RepeatedPtrField<AttributeTipsConfig>& _attributetips = attributetips();
					for(::google::protobuf::RepeatedPtrField<AttributeTipsConfig>::const_iterator it = _attributetips.begin(); it != _attributetips.end(); ++it){
						m_attributetipsMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table login to  Map
				if(true){
					m_loginMap.clear();
					const ::google::protobuf::RepeatedPtrField<LoginConfig>& _login = login();
					for(::google::protobuf::RepeatedPtrField<LoginConfig>::const_iterator it = _login.begin(); it != _login.end(); ++it){
						m_loginMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table attrtype to  Map
				if(true){
					m_attrtypeMap.clear();
					const ::google::protobuf::RepeatedPtrField<AttrTypeConfig>& _attrtype = attrtype();
					for(::google::protobuf::RepeatedPtrField<AttrTypeConfig>::const_iterator it = _attrtype.begin(); it != _attrtype.end(); ++it){
						m_attrtypeMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table talent to  Map
				if(true){
					m_talentMap.clear();
					const ::google::protobuf::RepeatedPtrField<TalentConfig>& _talent = talent();
					for(::google::protobuf::RepeatedPtrField<TalentConfig>::const_iterator it = _talent.begin(); it != _talent.end(); ++it){
						m_talentMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table desc to  Map
				if(true){
					m_descMap.clear();
					const ::google::protobuf::RepeatedPtrField<descConfig>& _desc = desc();
					for(::google::protobuf::RepeatedPtrField<descConfig>::const_iterator it = _desc.begin(); it != _desc.end(); ++it){
						m_descMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table vipachievement to  Map
				if(true){
					m_vipachievementMap.clear();
					const ::google::protobuf::RepeatedPtrField<VipAchievementConfig>& _vipachievement = vipachievement();
					for(::google::protobuf::RepeatedPtrField<VipAchievementConfig>::const_iterator it = _vipachievement.begin(); it != _vipachievement.end(); ++it){
						m_vipachievementMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table vip_privilege to  Map
				if(true){
					m_vip_privilegeMap.clear();
					const ::google::protobuf::RepeatedPtrField<Vip_privilegeConfig>& _vip_privilege = vip_privilege();
					for(::google::protobuf::RepeatedPtrField<Vip_privilegeConfig>::const_iterator it = _vip_privilege.begin(); it != _vip_privilege.end(); ++it){
						m_vip_privilegeMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table partucleanims to  Map
				if(true){
					m_partucleanimsMap.clear();
					const ::google::protobuf::RepeatedPtrField<PartucleAnimsConfig>& _partucleanims = partucleanims();
					for(::google::protobuf::RepeatedPtrField<PartucleAnimsConfig>::const_iterator it = _partucleanims.begin(); it != _partucleanims.end(); ++it){
						m_partucleanimsMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table pvpscorebonus to  Map
				if(true){
					m_pvpscorebonusMap.clear();
					const ::google::protobuf::RepeatedPtrField<PvpScoreBonusConfig>& _pvpscorebonus = pvpscorebonus();
					for(::google::protobuf::RepeatedPtrField<PvpScoreBonusConfig>::const_iterator it = _pvpscorebonus.begin(); it != _pvpscorebonus.end(); ++it){
						m_pvpscorebonusMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table liveness to  Map
				if(true){
					m_livenessMap.clear();
					const ::google::protobuf::RepeatedPtrField<LivenessConfig>& _liveness = liveness();
					for(::google::protobuf::RepeatedPtrField<LivenessConfig>::const_iterator it = _liveness.begin(); it != _liveness.end(); ++it){
						m_livenessMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table weekliveness to  Map
				if(true){
					m_weeklivenessMap.clear();
					const ::google::protobuf::RepeatedPtrField<WeekLivenessConfig>& _weekliveness = weekliveness();
					for(::google::protobuf::RepeatedPtrField<WeekLivenessConfig>::const_iterator it = _weekliveness.begin(); it != _weekliveness.end(); ++it){
						m_weeklivenessMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table rank_match_award to  Map
				if(true){
					m_rank_match_awardMap.clear();
					const ::google::protobuf::RepeatedPtrField<rank_match_awardConfig>& _rank_match_award = rank_match_award();
					for(::google::protobuf::RepeatedPtrField<rank_match_awardConfig>::const_iterator it = _rank_match_award.begin(); it != _rank_match_award.end(); ++it){
						m_rank_match_awardMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table battle to  Map
				if(true){
					m_battleMap.clear();
					const ::google::protobuf::RepeatedPtrField<BattleConfig>& _battle = battle();
					for(::google::protobuf::RepeatedPtrField<BattleConfig>::const_iterator it = _battle.begin(); it != _battle.end(); ++it){
						m_battleMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table bossinitdata to  Map
				if(true){
					m_bossinitdataMap.clear();
					const ::google::protobuf::RepeatedPtrField<BossInitDataConfig>& _bossinitdata = bossinitdata();
					for(::google::protobuf::RepeatedPtrField<BossInitDataConfig>::const_iterator it = _bossinitdata.begin(); it != _bossinitdata.end(); ++it){
						m_bossinitdataMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table given_name to  Map
				if(true){
					m_given_nameMap.clear();
					const ::google::protobuf::RepeatedPtrField<Given_nameConfig>& _given_name = given_name();
					for(::google::protobuf::RepeatedPtrField<Given_nameConfig>::const_iterator it = _given_name.begin(); it != _given_name.end(); ++it){
						m_given_nameMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table livenessbonus to  Map
				if(true){
					m_livenessbonusMap.clear();
					const ::google::protobuf::RepeatedPtrField<LivenessBonusConfig>& _livenessbonus = livenessbonus();
					for(::google::protobuf::RepeatedPtrField<LivenessBonusConfig>::const_iterator it = _livenessbonus.begin(); it != _livenessbonus.end(); ++it){
						m_livenessbonusMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table minecardcount to  Map
				if(true){
					m_minecardcountMap.clear();
					const ::google::protobuf::RepeatedPtrField<MineCardCountConfig>& _minecardcount = minecardcount();
					for(::google::protobuf::RepeatedPtrField<MineCardCountConfig>::const_iterator it = _minecardcount.begin(); it != _minecardcount.end(); ++it){
						m_minecardcountMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table cardgainexp to  Map
				if(true){
					m_cardgainexpMap.clear();
					const ::google::protobuf::RepeatedPtrField<CardGainExpConfig>& _cardgainexp = cardgainexp();
					for(::google::protobuf::RepeatedPtrField<CardGainExpConfig>::const_iterator it = _cardgainexp.begin(); it != _cardgainexp.end(); ++it){
						m_cardgainexpMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table unittype to  Map
				if(true){
					m_unittypeMap.clear();
					const ::google::protobuf::RepeatedPtrField<UnitTypeConfig>& _unittype = unittype();
					for(::google::protobuf::RepeatedPtrField<UnitTypeConfig>::const_iterator it = _unittype.begin(); it != _unittype.end(); ++it){
						m_unittypeMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table immuneinitdata to  Map
				if(true){
					m_immuneinitdataMap.clear();
					const ::google::protobuf::RepeatedPtrField<ImmuneInitDataConfig>& _immuneinitdata = immuneinitdata();
					for(::google::protobuf::RepeatedPtrField<ImmuneInitDataConfig>::const_iterator it = _immuneinitdata.begin(); it != _immuneinitdata.end(); ++it){
						m_immuneinitdataMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table proptype to  Map
				if(true){
					m_proptypeMap.clear();
					const ::google::protobuf::RepeatedPtrField<PropTypeConfig>& _proptype = proptype();
					for(::google::protobuf::RepeatedPtrField<PropTypeConfig>::const_iterator it = _proptype.begin(); it != _proptype.end(); ++it){
						m_proptypeMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table talentskill to  Map
				if(true){
					m_talentskillMap.clear();
					const ::google::protobuf::RepeatedPtrField<TalentSkillConfig>& _talentskill = talentskill();
					for(::google::protobuf::RepeatedPtrField<TalentSkillConfig>::const_iterator it = _talentskill.begin(); it != _talentskill.end(); ++it){
						m_talentskillMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table propgroup to  Map
				if(true){
					m_propgroupMap.clear();
					const ::google::protobuf::RepeatedPtrField<PropGroupConfig>& _propgroup = propgroup();
					for(::google::protobuf::RepeatedPtrField<PropGroupConfig>::const_iterator it = _propgroup.begin(); it != _propgroup.end(); ++it){
						m_propgroupMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table mine_colour to  Map
				if(true){
					m_mine_colourMap.clear();
					const ::google::protobuf::RepeatedPtrField<mine_colourConfig>& _mine_colour = mine_colour();
					for(::google::protobuf::RepeatedPtrField<mine_colourConfig>::const_iterator it = _mine_colour.begin(); it != _mine_colour.end(); ++it){
						m_mine_colourMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table item to  Map
				if(true){
					m_itemMap.clear();
					const ::google::protobuf::RepeatedPtrField<ItemConfig>& _item = item();
					for(::google::protobuf::RepeatedPtrField<ItemConfig>::const_iterator it = _item.begin(); it != _item.end(); ++it){
						m_itemMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table unitdamageinc to  Map
				if(true){
					m_unitdamageincMap.clear();
					const ::google::protobuf::RepeatedPtrField<UnitDamageIncConfig>& _unitdamageinc = unitdamageinc();
					for(::google::protobuf::RepeatedPtrField<UnitDamageIncConfig>::const_iterator it = _unitdamageinc.begin(); it != _unitdamageinc.end(); ++it){
						m_unitdamageincMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table worldview to  Map
				if(true){
					m_worldviewMap.clear();
					const ::google::protobuf::RepeatedPtrField<WorldviewConfig>& _worldview = worldview();
					for(::google::protobuf::RepeatedPtrField<WorldviewConfig>::const_iterator it = _worldview.begin(); it != _worldview.end(); ++it){
						m_worldviewMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table wechat to  Map
				if(true){
					m_wechatMap.clear();
					const ::google::protobuf::RepeatedPtrField<WeChatConfig>& _wechat = wechat();
					for(::google::protobuf::RepeatedPtrField<WeChatConfig>::const_iterator it = _wechat.begin(); it != _wechat.end(); ++it){
						m_wechatMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table vipsignup to  Map
				if(true){
					m_vipsignupMap.clear();
					const ::google::protobuf::RepeatedPtrField<VipSignUpConfig>& _vipsignup = vipsignup();
					for(::google::protobuf::RepeatedPtrField<VipSignUpConfig>::const_iterator it = _vipsignup.begin(); it != _vipsignup.end(); ++it){
						m_vipsignupMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table combineskilleffect to  Map
				if(true){
					m_combineskilleffectMap.clear();
					const ::google::protobuf::RepeatedPtrField<CombineSkillEffectConfig>& _combineskilleffect = combineskilleffect();
					for(::google::protobuf::RepeatedPtrField<CombineSkillEffectConfig>::const_iterator it = _combineskilleffect.begin(); it != _combineskilleffect.end(); ++it){
						m_combineskilleffectMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table chapter_award to  Map
				if(true){
					m_chapter_awardMap.clear();
					const ::google::protobuf::RepeatedPtrField<chapter_awardConfig>& _chapter_award = chapter_award();
					for(::google::protobuf::RepeatedPtrField<chapter_awardConfig>::const_iterator it = _chapter_award.begin(); it != _chapter_award.end(); ++it){
						m_chapter_awardMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table exchange to  Map
				if(true){
					m_exchangeMap.clear();
					const ::google::protobuf::RepeatedPtrField<ExchangeConfig>& _exchange = exchange();
					for(::google::protobuf::RepeatedPtrField<ExchangeConfig>::const_iterator it = _exchange.begin(); it != _exchange.end(); ++it){
						m_exchangeMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table task to  Map
				if(true){
					m_taskMap.clear();
					const ::google::protobuf::RepeatedPtrField<TaskConfig>& _task = task();
					for(::google::protobuf::RepeatedPtrField<TaskConfig>::const_iterator it = _task.begin(); it != _task.end(); ++it){
						m_taskMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table unitinitdata to  Map
				if(true){
					m_unitinitdataMap.clear();
					const ::google::protobuf::RepeatedPtrField<UnitInitDataConfig>& _unitinitdata = unitinitdata();
					for(::google::protobuf::RepeatedPtrField<UnitInitDataConfig>::const_iterator it = _unitinitdata.begin(); it != _unitinitdata.end(); ++it){
						m_unitinitdataMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table equipment to  Map
				if(true){
					m_equipmentMap.clear();
					const ::google::protobuf::RepeatedPtrField<EquipmentConfig>& _equipment = equipment();
					for(::google::protobuf::RepeatedPtrField<EquipmentConfig>::const_iterator it = _equipment.begin(); it != _equipment.end(); ++it){
						m_equipmentMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table help to  Map
				if(true){
					m_helpMap.clear();
					const ::google::protobuf::RepeatedPtrField<HelpConfig>& _help = help();
					for(::google::protobuf::RepeatedPtrField<HelpConfig>::const_iterator it = _help.begin(); it != _help.end(); ++it){
						m_helpMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table activity_commodity to  Map
				if(true){
					m_activity_commodityMap.clear();
					const ::google::protobuf::RepeatedPtrField<activity_commodityConfig>& _activity_commodity = activity_commodity();
					for(::google::protobuf::RepeatedPtrField<activity_commodityConfig>::const_iterator it = _activity_commodity.begin(); it != _activity_commodity.end(); ++it){
						m_activity_commodityMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table uniteffect to  Map
				if(true){
					m_uniteffectMap.clear();
					const ::google::protobuf::RepeatedPtrField<UnitEffectConfig>& _uniteffect = uniteffect();
					for(::google::protobuf::RepeatedPtrField<UnitEffectConfig>::const_iterator it = _uniteffect.begin(); it != _uniteffect.end(); ++it){
						m_uniteffectMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table family to  Map
				if(true){
					m_familyMap.clear();
					const ::google::protobuf::RepeatedPtrField<FamilyConfig>& _family = family();
					for(::google::protobuf::RepeatedPtrField<FamilyConfig>::const_iterator it = _family.begin(); it != _family.end(); ++it){
						m_familyMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table achievement to  Map
				if(true){
					m_achievementMap.clear();
					const ::google::protobuf::RepeatedPtrField<AchievementConfig>& _achievement = achievement();
					for(::google::protobuf::RepeatedPtrField<AchievementConfig>::const_iterator it = _achievement.begin(); it != _achievement.end(); ++it){
						m_achievementMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table activity_rebate to  Map
				if(true){
					m_activity_rebateMap.clear();
					const ::google::protobuf::RepeatedPtrField<Activity_RebateConfig>& _activity_rebate = activity_rebate();
					for(::google::protobuf::RepeatedPtrField<Activity_RebateConfig>::const_iterator it = _activity_rebate.begin(); it != _activity_rebate.end(); ++it){
						m_activity_rebateMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table rank to  Map
				if(true){
					m_rankMap.clear();
					const ::google::protobuf::RepeatedPtrField<RankConfig>& _rank = rank();
					for(::google::protobuf::RepeatedPtrField<RankConfig>::const_iterator it = _rank.begin(); it != _rank.end(); ++it){
						m_rankMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table territory to  Map
				if(true){
					m_territoryMap.clear();
					const ::google::protobuf::RepeatedPtrField<TerritoryConfig>& _territory = territory();
					for(::google::protobuf::RepeatedPtrField<TerritoryConfig>::const_iterator it = _territory.begin(); it != _territory.end(); ++it){
						m_territoryMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table stage_guide to  Map
				if(true){
					m_stage_guideMap.clear();
					const ::google::protobuf::RepeatedPtrField<Stage_GuideConfig>& _stage_guide = stage_guide();
					for(::google::protobuf::RepeatedPtrField<Stage_GuideConfig>::const_iterator it = _stage_guide.begin(); it != _stage_guide.end(); ++it){
						m_stage_guideMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table activity to  Map
				if(true){
					m_activityMap.clear();
					const ::google::protobuf::RepeatedPtrField<ActivityConfig>& _activity = activity();
					for(::google::protobuf::RepeatedPtrField<ActivityConfig>::const_iterator it = _activity.begin(); it != _activity.end(); ++it){
						m_activityMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table unitgrown to  Map
				if(true){
					m_unitgrownMap.clear();
					const ::google::protobuf::RepeatedPtrField<UnitGrownConfig>& _unitgrown = unitgrown();
					for(::google::protobuf::RepeatedPtrField<UnitGrownConfig>::const_iterator it = _unitgrown.begin(); it != _unitgrown.end(); ++it){
						m_unitgrownMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table bank_levelup_time to  Map
				if(true){
					m_bank_levelup_timeMap.clear();
					const ::google::protobuf::RepeatedPtrField<Bank_levelup_timeConfig>& _bank_levelup_time = bank_levelup_time();
					for(::google::protobuf::RepeatedPtrField<Bank_levelup_timeConfig>::const_iterator it = _bank_levelup_time.begin(); it != _bank_levelup_time.end(); ++it){
						m_bank_levelup_timeMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table skeletonanims to  Map
				if(true){
					m_skeletonanimsMap.clear();
					const ::google::protobuf::RepeatedPtrField<SkeletonAnimsConfig>& _skeletonanims = skeletonanims();
					for(::google::protobuf::RepeatedPtrField<SkeletonAnimsConfig>::const_iterator it = _skeletonanims.begin(); it != _skeletonanims.end(); ++it){
						m_skeletonanimsMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table condition to  Map
				if(true){
					m_conditionMap.clear();
					const ::google::protobuf::RepeatedPtrField<ConditionConfig>& _condition = condition();
					for(::google::protobuf::RepeatedPtrField<ConditionConfig>::const_iterator it = _condition.begin(); it != _condition.end(); ++it){
						m_conditionMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table equipmentcombine to  Map
				if(true){
					m_equipmentcombineMap.clear();
					const ::google::protobuf::RepeatedPtrField<EquipmentCombineConfig>& _equipmentcombine = equipmentcombine();
					for(::google::protobuf::RepeatedPtrField<EquipmentCombineConfig>::const_iterator it = _equipmentcombine.begin(); it != _equipmentcombine.end(); ++it){
						m_equipmentcombineMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table battletheme to  Map
				if(true){
					m_battlethemeMap.clear();
					const ::google::protobuf::RepeatedPtrField<BattleThemeConfig>& _battletheme = battletheme();
					for(::google::protobuf::RepeatedPtrField<BattleThemeConfig>::const_iterator it = _battletheme.begin(); it != _battletheme.end(); ++it){
						m_battlethemeMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table cost to  Map
				if(true){
					m_costMap.clear();
					const ::google::protobuf::RepeatedPtrField<CostConfig>& _cost = cost();
					for(::google::protobuf::RepeatedPtrField<CostConfig>::const_iterator it = _cost.begin(); it != _cost.end(); ++it){
						m_costMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table equipmentimprovecost to  Map
				if(true){
					m_equipmentimprovecostMap.clear();
					const ::google::protobuf::RepeatedPtrField<EquipmentImproveCostConfig>& _equipmentimprovecost = equipmentimprovecost();
					for(::google::protobuf::RepeatedPtrField<EquipmentImproveCostConfig>::const_iterator it = _equipmentimprovecost.begin(); it != _equipmentimprovecost.end(); ++it){
						m_equipmentimprovecostMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table jianghun to  Map
				if(true){
					m_jianghunMap.clear();
					const ::google::protobuf::RepeatedPtrField<JianghunConfig>& _jianghun = jianghun();
					for(::google::protobuf::RepeatedPtrField<JianghunConfig>::const_iterator it = _jianghun.begin(); it != _jianghun.end(); ++it){
						m_jianghunMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table cardcombine to  Map
				if(true){
					m_cardcombineMap.clear();
					const ::google::protobuf::RepeatedPtrField<CardCombineConfig>& _cardcombine = cardcombine();
					for(::google::protobuf::RepeatedPtrField<CardCombineConfig>::const_iterator it = _cardcombine.begin(); it != _cardcombine.end(); ++it){
						m_cardcombineMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table stagecondition to  Map
				if(true){
					m_stageconditionMap.clear();
					const ::google::protobuf::RepeatedPtrField<StageConditionConfig>& _stagecondition = stagecondition();
					for(::google::protobuf::RepeatedPtrField<StageConditionConfig>::const_iterator it = _stagecondition.begin(); it != _stagecondition.end(); ++it){
						m_stageconditionMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table cardsell to  Map
				if(true){
					m_cardsellMap.clear();
					const ::google::protobuf::RepeatedPtrField<CardSellConfig>& _cardsell = cardsell();
					for(::google::protobuf::RepeatedPtrField<CardSellConfig>::const_iterator it = _cardsell.begin(); it != _cardsell.end(); ++it){
						m_cardsellMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table initialachievement to  Map
				if(true){
					m_initialachievementMap.clear();
					const ::google::protobuf::RepeatedPtrField<InitialAchievementConfig>& _initialachievement = initialachievement();
					for(::google::protobuf::RepeatedPtrField<InitialAchievementConfig>::const_iterator it = _initialachievement.begin(); it != _initialachievement.end(); ++it){
						m_initialachievementMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table moneytree to  Map
				if(true){
					m_moneytreeMap.clear();
					const ::google::protobuf::RepeatedPtrField<MoneytreeConfig>& _moneytree = moneytree();
					for(::google::protobuf::RepeatedPtrField<MoneytreeConfig>::const_iterator it = _moneytree.begin(); it != _moneytree.end(); ++it){
						m_moneytreeMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table statuseffect to  Map
				if(true){
					m_statuseffectMap.clear();
					const ::google::protobuf::RepeatedPtrField<StatusEffectConfig>& _statuseffect = statuseffect();
					for(::google::protobuf::RepeatedPtrField<StatusEffectConfig>::const_iterator it = _statuseffect.begin(); it != _statuseffect.end(); ++it){
						m_statuseffectMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table award_code to  Map
				if(true){
					m_award_codeMap.clear();
					const ::google::protobuf::RepeatedPtrField<award_codeConfig>& _award_code = award_code();
					for(::google::protobuf::RepeatedPtrField<award_codeConfig>::const_iterator it = _award_code.begin(); it != _award_code.end(); ++it){
						m_award_codeMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table skillexp to  Map
				if(true){
					m_skillexpMap.clear();
					const ::google::protobuf::RepeatedPtrField<SkillExpConfig>& _skillexp = skillexp();
					for(::google::protobuf::RepeatedPtrField<SkillExpConfig>::const_iterator it = _skillexp.begin(); it != _skillexp.end(); ++it){
						m_skillexpMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table friend_leadership to  Map
				if(true){
					m_friend_leadershipMap.clear();
					const ::google::protobuf::RepeatedPtrField<friend_leadershipConfig>& _friend_leadership = friend_leadership();
					for(::google::protobuf::RepeatedPtrField<friend_leadershipConfig>::const_iterator it = _friend_leadership.begin(); it != _friend_leadership.end(); ++it){
						m_friend_leadershipMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table arena_reward to  Map
				if(true){
					m_arena_rewardMap.clear();
					const ::google::protobuf::RepeatedPtrField<Arena_RewardConfig>& _arena_reward = arena_reward();
					for(::google::protobuf::RepeatedPtrField<Arena_RewardConfig>::const_iterator it = _arena_reward.begin(); it != _arena_reward.end(); ++it){
						m_arena_rewardMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table skilleffect to  Map
				if(true){
					m_skilleffectMap.clear();
					const ::google::protobuf::RepeatedPtrField<SkillEffectConfig>& _skilleffect = skilleffect();
					for(::google::protobuf::RepeatedPtrField<SkillEffectConfig>::const_iterator it = _skilleffect.begin(); it != _skilleffect.end(); ++it){
						m_skilleffectMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table skillbuff to  Map
				if(true){
					m_skillbuffMap.clear();
					const ::google::protobuf::RepeatedPtrField<SkillBuffConfig>& _skillbuff = skillbuff();
					for(::google::protobuf::RepeatedPtrField<SkillBuffConfig>::const_iterator it = _skillbuff.begin(); it != _skillbuff.end(); ++it){
						m_skillbuffMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table sequenceanims to  Map
				if(true){
					m_sequenceanimsMap.clear();
					const ::google::protobuf::RepeatedPtrField<SequenceAnimsConfig>& _sequenceanims = sequenceanims();
					for(::google::protobuf::RepeatedPtrField<SequenceAnimsConfig>::const_iterator it = _sequenceanims.begin(); it != _sequenceanims.end(); ++it){
						m_sequenceanimsMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table pvprobrate to  Map
				if(true){
					m_pvprobrateMap.clear();
					const ::google::protobuf::RepeatedPtrField<PvpRobRateConfig>& _pvprobrate = pvprobrate();
					for(::google::protobuf::RepeatedPtrField<PvpRobRateConfig>::const_iterator it = _pvprobrate.begin(); it != _pvprobrate.end(); ++it){
						m_pvprobrateMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table totaldamagebonus to  Map
				if(true){
					m_totaldamagebonusMap.clear();
					const ::google::protobuf::RepeatedPtrField<TotalDamageBonusConfig>& _totaldamagebonus = totaldamagebonus();
					for(::google::protobuf::RepeatedPtrField<TotalDamageBonusConfig>::const_iterator it = _totaldamagebonus.begin(); it != _totaldamagebonus.end(); ++it){
						m_totaldamagebonusMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table newcard to  Map
				if(true){
					m_newcardMap.clear();
					const ::google::protobuf::RepeatedPtrField<NewcardConfig>& _newcard = newcard();
					for(::google::protobuf::RepeatedPtrField<NewcardConfig>::const_iterator it = _newcard.begin(); it != _newcard.end(); ++it){
						m_newcardMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table monster to  Map
				if(true){
					m_monsterMap.clear();
					const ::google::protobuf::RepeatedPtrField<MonsterConfig>& _monster = monster();
					for(::google::protobuf::RepeatedPtrField<MonsterConfig>::const_iterator it = _monster.begin(); it != _monster.end(); ++it){
						m_monsterMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table bonusemail to  Map
				if(true){
					m_bonusemailMap.clear();
					const ::google::protobuf::RepeatedPtrField<BonusEmailConfig>& _bonusemail = bonusemail();
					for(::google::protobuf::RepeatedPtrField<BonusEmailConfig>::const_iterator it = _bonusemail.begin(); it != _bonusemail.end(); ++it){
						m_bonusemailMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table itemcombine to  Map
				if(true){
					m_itemcombineMap.clear();
					const ::google::protobuf::RepeatedPtrField<ItemCombineConfig>& _itemcombine = itemcombine();
					for(::google::protobuf::RepeatedPtrField<ItemCombineConfig>::const_iterator it = _itemcombine.begin(); it != _itemcombine.end(); ++it){
						m_itemcombineMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table help_notice to  Map
				if(true){
					m_help_noticeMap.clear();
					const ::google::protobuf::RepeatedPtrField<help_noticeConfig>& _help_notice = help_notice();
					for(::google::protobuf::RepeatedPtrField<help_noticeConfig>::const_iterator it = _help_notice.begin(); it != _help_notice.end(); ++it){
						m_help_noticeMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
			}
		private:
			GameConfig m_configs;
			std::map<int, const ChapterConfig*> m_chapterMap;
			std::map<int, const MonsterGroupConfig*> m_monstergroupMap;
			std::map<int, const rank_match_robotConfig*> m_rank_match_robotMap;
			std::map<int, const UnitConfig*> m_unitMap;
			std::map<int, const Talent_initConfig*> m_talent_initMap;
			std::map<int, const XilianConfig*> m_xilianMap;
			std::map<int, const SystemOpenConfig*> m_systemopenMap;
			std::map<int, const colourConfig*> m_colourMap;
			std::map<int, const TerritoryEffectConfig*> m_territoryeffectMap;
			std::map<int, const DialogueConfig*> m_dialogueMap;
			std::map<int, const GuideConfig*> m_guideMap;
			std::map<int, const DailyEventConfig*> m_dailyeventMap;
			std::map<int, const BattleInitDataConfig*> m_battleinitdataMap;
			std::map<int, const StageConfig*> m_stageMap;
			std::map<int, const SignupBonusConfig*> m_signupbonusMap;
			std::map<int, const Activity_stageConfig*> m_activity_stageMap;
			std::map<int, const SoundsConfig*> m_soundsMap;
			std::map<int, const CardLevelupExpConfig*> m_cardlevelupexpMap;
			std::map<int, const DailyTaskInitDataConfig*> m_dailytaskinitdataMap;
			std::map<int, const GuideBonusConfig*> m_guidebonusMap;
			std::map<int, const PlistConfig*> m_plistMap;
			std::map<int, const descrptionConfig*> m_descrptionMap;
			std::map<int, const PayChannelConfig*> m_paychannelMap;
			std::map<int, const ItemTypeConfig*> m_itemtypeMap;
			std::map<int, const CharLevelConfig*> m_charlevelMap;
			std::map<int, const RebateConfig*> m_rebateMap;
			std::map<int, const PositionConfig*> m_positionMap;
			std::map<int, const rank_matchConfig*> m_rank_matchMap;
			std::map<int, const System_noticeConfig*> m_system_noticeMap;
			std::map<int, const Mission_InfoConfig*> m_mission_infoMap;
			std::map<int, const Arena_RankConfig*> m_arena_rankMap;
			std::map<int, const CombineSummaryConfig*> m_combinesummaryMap;
			std::map<int, const PropConfig*> m_propMap;
			std::map<int, const DropConfig*> m_dropMap;
			std::map<int, const CcbiAnimsConfig*> m_ccbianimsMap;
			std::map<int, const activity_oddsConfig*> m_activity_oddsMap;
			std::map<int, const store_itemConfig*> m_store_itemMap;
			std::map<int, const SpriteConfig*> m_spriteMap;
			std::map<int, const BattleHelpConfig*> m_battlehelpMap;
			std::map<int, const StopWinBonusConfig*> m_stopwinbonusMap;
			std::map<int, const CardSkillConfig*> m_cardskillMap;
			std::map<int, const SubBattleStoryConfig*> m_subbattlestoryMap;
			std::map<int, const MineCoinConfig*> m_minecoinMap;
			std::map<int, const Talent_initial_idConfig*> m_talent_initial_idMap;
			std::map<int, const char_friend_countConfig*> m_char_friend_countMap;
			std::map<int, const Arena_BuffConfig*> m_arena_buffMap;
			std::map<int, const CharacterInitDataConfig*> m_characterinitdataMap;
			std::map<int, const AchievementConditionConfig*> m_achievementconditionMap;
			std::map<int, const MineInitDataConfig*> m_mineinitdataMap;
			std::map<int, const CourseConfig*> m_courseMap;
			std::map<int, const activity_consume_moneyConfig*> m_activity_consume_moneyMap;
			std::map<int, const RobotDataConfig*> m_robotdataMap;
			std::map<int, const ErnieBonusConfig*> m_erniebonusMap;
			std::map<int, const CardSkillFixConfig*> m_cardskillfixMap;
			std::map<int, const VipInitDataConfig*> m_vipinitdataMap;
			std::map<int, const SkillGrowConfig*> m_skillgrowMap;
			std::map<int, const storeConfig*> m_storeMap;
			std::map<int, const Arena_TopConfig*> m_arena_topMap;
			std::map<int, const FramesConfig*> m_framesMap;
			std::map<int, const AutoBattleInitDataConfig*> m_autobattleinitdataMap;
			std::map<int, const AttributeTipsConfig*> m_attributetipsMap;
			std::map<int, const LoginConfig*> m_loginMap;
			std::map<int, const AttrTypeConfig*> m_attrtypeMap;
			std::map<int, const TalentConfig*> m_talentMap;
			std::map<int, const descConfig*> m_descMap;
			std::map<int, const VipAchievementConfig*> m_vipachievementMap;
			std::map<int, const Vip_privilegeConfig*> m_vip_privilegeMap;
			std::map<int, const PartucleAnimsConfig*> m_partucleanimsMap;
			std::map<int, const PvpScoreBonusConfig*> m_pvpscorebonusMap;
			std::map<int, const LivenessConfig*> m_livenessMap;
			std::map<int, const WeekLivenessConfig*> m_weeklivenessMap;
			std::map<int, const rank_match_awardConfig*> m_rank_match_awardMap;
			std::map<int, const BattleConfig*> m_battleMap;
			std::map<int, const BossInitDataConfig*> m_bossinitdataMap;
			std::map<int, const Given_nameConfig*> m_given_nameMap;
			std::map<int, const LivenessBonusConfig*> m_livenessbonusMap;
			std::map<int, const MineCardCountConfig*> m_minecardcountMap;
			std::map<int, const CardGainExpConfig*> m_cardgainexpMap;
			std::map<int, const UnitTypeConfig*> m_unittypeMap;
			std::map<int, const ImmuneInitDataConfig*> m_immuneinitdataMap;
			std::map<int, const PropTypeConfig*> m_proptypeMap;
			std::map<int, const TalentSkillConfig*> m_talentskillMap;
			std::map<int, const PropGroupConfig*> m_propgroupMap;
			std::map<int, const mine_colourConfig*> m_mine_colourMap;
			std::map<int, const ItemConfig*> m_itemMap;
			std::map<int, const UnitDamageIncConfig*> m_unitdamageincMap;
			std::map<int, const WorldviewConfig*> m_worldviewMap;
			std::map<int, const WeChatConfig*> m_wechatMap;
			std::map<int, const VipSignUpConfig*> m_vipsignupMap;
			std::map<int, const CombineSkillEffectConfig*> m_combineskilleffectMap;
			std::map<int, const chapter_awardConfig*> m_chapter_awardMap;
			std::map<int, const ExchangeConfig*> m_exchangeMap;
			std::map<int, const TaskConfig*> m_taskMap;
			std::map<int, const UnitInitDataConfig*> m_unitinitdataMap;
			std::map<int, const EquipmentConfig*> m_equipmentMap;
			std::map<int, const HelpConfig*> m_helpMap;
			std::map<int, const activity_commodityConfig*> m_activity_commodityMap;
			std::map<int, const UnitEffectConfig*> m_uniteffectMap;
			std::map<int, const FamilyConfig*> m_familyMap;
			std::map<int, const AchievementConfig*> m_achievementMap;
			std::map<int, const Activity_RebateConfig*> m_activity_rebateMap;
			std::map<int, const RankConfig*> m_rankMap;
			std::map<int, const TerritoryConfig*> m_territoryMap;
			std::map<int, const Stage_GuideConfig*> m_stage_guideMap;
			std::map<int, const ActivityConfig*> m_activityMap;
			std::map<int, const UnitGrownConfig*> m_unitgrownMap;
			std::map<int, const Bank_levelup_timeConfig*> m_bank_levelup_timeMap;
			std::map<int, const SkeletonAnimsConfig*> m_skeletonanimsMap;
			std::map<int, const ConditionConfig*> m_conditionMap;
			std::map<int, const EquipmentCombineConfig*> m_equipmentcombineMap;
			std::map<int, const BattleThemeConfig*> m_battlethemeMap;
			std::map<int, const CostConfig*> m_costMap;
			std::map<int, const EquipmentImproveCostConfig*> m_equipmentimprovecostMap;
			std::map<int, const JianghunConfig*> m_jianghunMap;
			std::map<int, const CardCombineConfig*> m_cardcombineMap;
			std::map<int, const StageConditionConfig*> m_stageconditionMap;
			std::map<int, const CardSellConfig*> m_cardsellMap;
			std::map<int, const InitialAchievementConfig*> m_initialachievementMap;
			std::map<int, const MoneytreeConfig*> m_moneytreeMap;
			std::map<int, const StatusEffectConfig*> m_statuseffectMap;
			std::map<int, const award_codeConfig*> m_award_codeMap;
			std::map<int, const SkillExpConfig*> m_skillexpMap;
			std::map<int, const friend_leadershipConfig*> m_friend_leadershipMap;
			std::map<int, const Arena_RewardConfig*> m_arena_rewardMap;
			std::map<int, const SkillEffectConfig*> m_skilleffectMap;
			std::map<int, const SkillBuffConfig*> m_skillbuffMap;
			std::map<int, const SequenceAnimsConfig*> m_sequenceanimsMap;
			std::map<int, const PvpRobRateConfig*> m_pvprobrateMap;
			std::map<int, const TotalDamageBonusConfig*> m_totaldamagebonusMap;
			std::map<int, const NewcardConfig*> m_newcardMap;
			std::map<int, const MonsterConfig*> m_monsterMap;
			std::map<int, const BonusEmailConfig*> m_bonusemailMap;
			std::map<int, const ItemCombineConfig*> m_itemcombineMap;
			std::map<int, const help_noticeConfig*> m_help_noticeMap;
	};
	// add interface
	AllConfigs::AllConfigs():m_impl(new Impl){
	}
	AllConfigs::~AllConfigs(){
		m_impl.reset();
	}
	const std::string& AllConfigs::version() const { return m_impl->version();}
	bool AllConfigs::init(const std::string& path, const std::string& ) { return m_impl->init(path);}

	//table ChapterConfig
	const ChapterConfig&  AllConfigs::chapter(const int id) const {
		return m_impl->chapter(id);
	}
	bool  AllConfigs::has_chapter(const int id) const {
		return m_impl->has_chapter(id);
	}
	const ::google::protobuf::RepeatedPtrField<ChapterConfig>& AllConfigs::chapter() const{
		return m_impl->chapter();
	}
	//::google::protobuf::RepeatedPtrField<ChapterConfig>* AllConfigs::mutable_chapter(){
		//return m_impl->mutable_chapter();
	//}

	//table MonsterGroupConfig
	const MonsterGroupConfig&  AllConfigs::monstergroup(const int id) const {
		return m_impl->monstergroup(id);
	}
	bool  AllConfigs::has_monstergroup(const int id) const {
		return m_impl->has_monstergroup(id);
	}
	const ::google::protobuf::RepeatedPtrField<MonsterGroupConfig>& AllConfigs::monstergroup() const{
		return m_impl->monstergroup();
	}
	//::google::protobuf::RepeatedPtrField<MonsterGroupConfig>* AllConfigs::mutable_monstergroup(){
		//return m_impl->mutable_monstergroup();
	//}

	//table rank_match_robotConfig
	const rank_match_robotConfig&  AllConfigs::rank_match_robot(const int id) const {
		return m_impl->rank_match_robot(id);
	}
	bool  AllConfigs::has_rank_match_robot(const int id) const {
		return m_impl->has_rank_match_robot(id);
	}
	const ::google::protobuf::RepeatedPtrField<rank_match_robotConfig>& AllConfigs::rank_match_robot() const{
		return m_impl->rank_match_robot();
	}
	//::google::protobuf::RepeatedPtrField<rank_match_robotConfig>* AllConfigs::mutable_rank_match_robot(){
		//return m_impl->mutable_rank_match_robot();
	//}

	//table UnitConfig
	const UnitConfig&  AllConfigs::unit(const int id) const {
		return m_impl->unit(id);
	}
	bool  AllConfigs::has_unit(const int id) const {
		return m_impl->has_unit(id);
	}
	const ::google::protobuf::RepeatedPtrField<UnitConfig>& AllConfigs::unit() const{
		return m_impl->unit();
	}
	//::google::protobuf::RepeatedPtrField<UnitConfig>* AllConfigs::mutable_unit(){
		//return m_impl->mutable_unit();
	//}

	//table Talent_initConfig
	const Talent_initConfig&  AllConfigs::talent_init(const int id) const {
		return m_impl->talent_init(id);
	}
	bool  AllConfigs::has_talent_init(const int id) const {
		return m_impl->has_talent_init(id);
	}
	const ::google::protobuf::RepeatedPtrField<Talent_initConfig>& AllConfigs::talent_init() const{
		return m_impl->talent_init();
	}
	//::google::protobuf::RepeatedPtrField<Talent_initConfig>* AllConfigs::mutable_talent_init(){
		//return m_impl->mutable_talent_init();
	//}

	//table XilianConfig
	const XilianConfig&  AllConfigs::xilian(const int id) const {
		return m_impl->xilian(id);
	}
	bool  AllConfigs::has_xilian(const int id) const {
		return m_impl->has_xilian(id);
	}
	const ::google::protobuf::RepeatedPtrField<XilianConfig>& AllConfigs::xilian() const{
		return m_impl->xilian();
	}
	//::google::protobuf::RepeatedPtrField<XilianConfig>* AllConfigs::mutable_xilian(){
		//return m_impl->mutable_xilian();
	//}

	//table SystemOpenConfig
	const SystemOpenConfig&  AllConfigs::systemopen(const int id) const {
		return m_impl->systemopen(id);
	}
	bool  AllConfigs::has_systemopen(const int id) const {
		return m_impl->has_systemopen(id);
	}
	const ::google::protobuf::RepeatedPtrField<SystemOpenConfig>& AllConfigs::systemopen() const{
		return m_impl->systemopen();
	}
	//::google::protobuf::RepeatedPtrField<SystemOpenConfig>* AllConfigs::mutable_systemopen(){
		//return m_impl->mutable_systemopen();
	//}

	//table colourConfig
	const colourConfig&  AllConfigs::colour(const int id) const {
		return m_impl->colour(id);
	}
	bool  AllConfigs::has_colour(const int id) const {
		return m_impl->has_colour(id);
	}
	const ::google::protobuf::RepeatedPtrField<colourConfig>& AllConfigs::colour() const{
		return m_impl->colour();
	}
	//::google::protobuf::RepeatedPtrField<colourConfig>* AllConfigs::mutable_colour(){
		//return m_impl->mutable_colour();
	//}

	//table TerritoryEffectConfig
	const TerritoryEffectConfig&  AllConfigs::territoryeffect(const int id) const {
		return m_impl->territoryeffect(id);
	}
	bool  AllConfigs::has_territoryeffect(const int id) const {
		return m_impl->has_territoryeffect(id);
	}
	const ::google::protobuf::RepeatedPtrField<TerritoryEffectConfig>& AllConfigs::territoryeffect() const{
		return m_impl->territoryeffect();
	}
	//::google::protobuf::RepeatedPtrField<TerritoryEffectConfig>* AllConfigs::mutable_territoryeffect(){
		//return m_impl->mutable_territoryeffect();
	//}

	//table DialogueConfig
	const DialogueConfig&  AllConfigs::dialogue(const int id) const {
		return m_impl->dialogue(id);
	}
	bool  AllConfigs::has_dialogue(const int id) const {
		return m_impl->has_dialogue(id);
	}
	const ::google::protobuf::RepeatedPtrField<DialogueConfig>& AllConfigs::dialogue() const{
		return m_impl->dialogue();
	}
	//::google::protobuf::RepeatedPtrField<DialogueConfig>* AllConfigs::mutable_dialogue(){
		//return m_impl->mutable_dialogue();
	//}

	//table GuideConfig
	const GuideConfig&  AllConfigs::guide(const int id) const {
		return m_impl->guide(id);
	}
	bool  AllConfigs::has_guide(const int id) const {
		return m_impl->has_guide(id);
	}
	const ::google::protobuf::RepeatedPtrField<GuideConfig>& AllConfigs::guide() const{
		return m_impl->guide();
	}
	//::google::protobuf::RepeatedPtrField<GuideConfig>* AllConfigs::mutable_guide(){
		//return m_impl->mutable_guide();
	//}

	//table DailyEventConfig
	const DailyEventConfig&  AllConfigs::dailyevent(const int id) const {
		return m_impl->dailyevent(id);
	}
	bool  AllConfigs::has_dailyevent(const int id) const {
		return m_impl->has_dailyevent(id);
	}
	const ::google::protobuf::RepeatedPtrField<DailyEventConfig>& AllConfigs::dailyevent() const{
		return m_impl->dailyevent();
	}
	//::google::protobuf::RepeatedPtrField<DailyEventConfig>* AllConfigs::mutable_dailyevent(){
		//return m_impl->mutable_dailyevent();
	//}

	//table BattleInitDataConfig
	const BattleInitDataConfig&  AllConfigs::battleinitdata(const int id) const {
		return m_impl->battleinitdata(id);
	}
	bool  AllConfigs::has_battleinitdata(const int id) const {
		return m_impl->has_battleinitdata(id);
	}
	const ::google::protobuf::RepeatedPtrField<BattleInitDataConfig>& AllConfigs::battleinitdata() const{
		return m_impl->battleinitdata();
	}
	//::google::protobuf::RepeatedPtrField<BattleInitDataConfig>* AllConfigs::mutable_battleinitdata(){
		//return m_impl->mutable_battleinitdata();
	//}

	//table StageConfig
	const StageConfig&  AllConfigs::stage(const int id) const {
		return m_impl->stage(id);
	}
	bool  AllConfigs::has_stage(const int id) const {
		return m_impl->has_stage(id);
	}
	const ::google::protobuf::RepeatedPtrField<StageConfig>& AllConfigs::stage() const{
		return m_impl->stage();
	}
	//::google::protobuf::RepeatedPtrField<StageConfig>* AllConfigs::mutable_stage(){
		//return m_impl->mutable_stage();
	//}

	//table SignupBonusConfig
	const SignupBonusConfig&  AllConfigs::signupbonus(const int id) const {
		return m_impl->signupbonus(id);
	}
	bool  AllConfigs::has_signupbonus(const int id) const {
		return m_impl->has_signupbonus(id);
	}
	const ::google::protobuf::RepeatedPtrField<SignupBonusConfig>& AllConfigs::signupbonus() const{
		return m_impl->signupbonus();
	}
	//::google::protobuf::RepeatedPtrField<SignupBonusConfig>* AllConfigs::mutable_signupbonus(){
		//return m_impl->mutable_signupbonus();
	//}

	//table Activity_stageConfig
	const Activity_stageConfig&  AllConfigs::activity_stage(const int id) const {
		return m_impl->activity_stage(id);
	}
	bool  AllConfigs::has_activity_stage(const int id) const {
		return m_impl->has_activity_stage(id);
	}
	const ::google::protobuf::RepeatedPtrField<Activity_stageConfig>& AllConfigs::activity_stage() const{
		return m_impl->activity_stage();
	}
	//::google::protobuf::RepeatedPtrField<Activity_stageConfig>* AllConfigs::mutable_activity_stage(){
		//return m_impl->mutable_activity_stage();
	//}

	//table SoundsConfig
	const SoundsConfig&  AllConfigs::sounds(const int id) const {
		return m_impl->sounds(id);
	}
	bool  AllConfigs::has_sounds(const int id) const {
		return m_impl->has_sounds(id);
	}
	const ::google::protobuf::RepeatedPtrField<SoundsConfig>& AllConfigs::sounds() const{
		return m_impl->sounds();
	}
	//::google::protobuf::RepeatedPtrField<SoundsConfig>* AllConfigs::mutable_sounds(){
		//return m_impl->mutable_sounds();
	//}

	//table CardLevelupExpConfig
	const CardLevelupExpConfig&  AllConfigs::cardlevelupexp(const int id) const {
		return m_impl->cardlevelupexp(id);
	}
	bool  AllConfigs::has_cardlevelupexp(const int id) const {
		return m_impl->has_cardlevelupexp(id);
	}
	const ::google::protobuf::RepeatedPtrField<CardLevelupExpConfig>& AllConfigs::cardlevelupexp() const{
		return m_impl->cardlevelupexp();
	}
	//::google::protobuf::RepeatedPtrField<CardLevelupExpConfig>* AllConfigs::mutable_cardlevelupexp(){
		//return m_impl->mutable_cardlevelupexp();
	//}

	//table DailyTaskInitDataConfig
	const DailyTaskInitDataConfig&  AllConfigs::dailytaskinitdata(const int id) const {
		return m_impl->dailytaskinitdata(id);
	}
	bool  AllConfigs::has_dailytaskinitdata(const int id) const {
		return m_impl->has_dailytaskinitdata(id);
	}
	const ::google::protobuf::RepeatedPtrField<DailyTaskInitDataConfig>& AllConfigs::dailytaskinitdata() const{
		return m_impl->dailytaskinitdata();
	}
	//::google::protobuf::RepeatedPtrField<DailyTaskInitDataConfig>* AllConfigs::mutable_dailytaskinitdata(){
		//return m_impl->mutable_dailytaskinitdata();
	//}

	//table GuideBonusConfig
	const GuideBonusConfig&  AllConfigs::guidebonus(const int id) const {
		return m_impl->guidebonus(id);
	}
	bool  AllConfigs::has_guidebonus(const int id) const {
		return m_impl->has_guidebonus(id);
	}
	const ::google::protobuf::RepeatedPtrField<GuideBonusConfig>& AllConfigs::guidebonus() const{
		return m_impl->guidebonus();
	}
	//::google::protobuf::RepeatedPtrField<GuideBonusConfig>* AllConfigs::mutable_guidebonus(){
		//return m_impl->mutable_guidebonus();
	//}

	//table PlistConfig
	const PlistConfig&  AllConfigs::plist(const int id) const {
		return m_impl->plist(id);
	}
	bool  AllConfigs::has_plist(const int id) const {
		return m_impl->has_plist(id);
	}
	const ::google::protobuf::RepeatedPtrField<PlistConfig>& AllConfigs::plist() const{
		return m_impl->plist();
	}
	//::google::protobuf::RepeatedPtrField<PlistConfig>* AllConfigs::mutable_plist(){
		//return m_impl->mutable_plist();
	//}

	//table descrptionConfig
	const descrptionConfig&  AllConfigs::descrption(const int id) const {
		return m_impl->descrption(id);
	}
	bool  AllConfigs::has_descrption(const int id) const {
		return m_impl->has_descrption(id);
	}
	const ::google::protobuf::RepeatedPtrField<descrptionConfig>& AllConfigs::descrption() const{
		return m_impl->descrption();
	}
	//::google::protobuf::RepeatedPtrField<descrptionConfig>* AllConfigs::mutable_descrption(){
		//return m_impl->mutable_descrption();
	//}

	//table PayChannelConfig
	const PayChannelConfig&  AllConfigs::paychannel(const int id) const {
		return m_impl->paychannel(id);
	}
	bool  AllConfigs::has_paychannel(const int id) const {
		return m_impl->has_paychannel(id);
	}
	const ::google::protobuf::RepeatedPtrField<PayChannelConfig>& AllConfigs::paychannel() const{
		return m_impl->paychannel();
	}
	//::google::protobuf::RepeatedPtrField<PayChannelConfig>* AllConfigs::mutable_paychannel(){
		//return m_impl->mutable_paychannel();
	//}

	//table ItemTypeConfig
	const ItemTypeConfig&  AllConfigs::itemtype(const int id) const {
		return m_impl->itemtype(id);
	}
	bool  AllConfigs::has_itemtype(const int id) const {
		return m_impl->has_itemtype(id);
	}
	const ::google::protobuf::RepeatedPtrField<ItemTypeConfig>& AllConfigs::itemtype() const{
		return m_impl->itemtype();
	}
	//::google::protobuf::RepeatedPtrField<ItemTypeConfig>* AllConfigs::mutable_itemtype(){
		//return m_impl->mutable_itemtype();
	//}

	//table CharLevelConfig
	const CharLevelConfig&  AllConfigs::charlevel(const int id) const {
		return m_impl->charlevel(id);
	}
	bool  AllConfigs::has_charlevel(const int id) const {
		return m_impl->has_charlevel(id);
	}
	const ::google::protobuf::RepeatedPtrField<CharLevelConfig>& AllConfigs::charlevel() const{
		return m_impl->charlevel();
	}
	//::google::protobuf::RepeatedPtrField<CharLevelConfig>* AllConfigs::mutable_charlevel(){
		//return m_impl->mutable_charlevel();
	//}

	//table RebateConfig
	const RebateConfig&  AllConfigs::rebate(const int id) const {
		return m_impl->rebate(id);
	}
	bool  AllConfigs::has_rebate(const int id) const {
		return m_impl->has_rebate(id);
	}
	const ::google::protobuf::RepeatedPtrField<RebateConfig>& AllConfigs::rebate() const{
		return m_impl->rebate();
	}
	//::google::protobuf::RepeatedPtrField<RebateConfig>* AllConfigs::mutable_rebate(){
		//return m_impl->mutable_rebate();
	//}

	//table PositionConfig
	const PositionConfig&  AllConfigs::position(const int id) const {
		return m_impl->position(id);
	}
	bool  AllConfigs::has_position(const int id) const {
		return m_impl->has_position(id);
	}
	const ::google::protobuf::RepeatedPtrField<PositionConfig>& AllConfigs::position() const{
		return m_impl->position();
	}
	//::google::protobuf::RepeatedPtrField<PositionConfig>* AllConfigs::mutable_position(){
		//return m_impl->mutable_position();
	//}

	//table rank_matchConfig
	const rank_matchConfig&  AllConfigs::rank_match(const int id) const {
		return m_impl->rank_match(id);
	}
	bool  AllConfigs::has_rank_match(const int id) const {
		return m_impl->has_rank_match(id);
	}
	const ::google::protobuf::RepeatedPtrField<rank_matchConfig>& AllConfigs::rank_match() const{
		return m_impl->rank_match();
	}
	//::google::protobuf::RepeatedPtrField<rank_matchConfig>* AllConfigs::mutable_rank_match(){
		//return m_impl->mutable_rank_match();
	//}

	//table System_noticeConfig
	const System_noticeConfig&  AllConfigs::system_notice(const int id) const {
		return m_impl->system_notice(id);
	}
	bool  AllConfigs::has_system_notice(const int id) const {
		return m_impl->has_system_notice(id);
	}
	const ::google::protobuf::RepeatedPtrField<System_noticeConfig>& AllConfigs::system_notice() const{
		return m_impl->system_notice();
	}
	//::google::protobuf::RepeatedPtrField<System_noticeConfig>* AllConfigs::mutable_system_notice(){
		//return m_impl->mutable_system_notice();
	//}

	//table Mission_InfoConfig
	const Mission_InfoConfig&  AllConfigs::mission_info(const int id) const {
		return m_impl->mission_info(id);
	}
	bool  AllConfigs::has_mission_info(const int id) const {
		return m_impl->has_mission_info(id);
	}
	const ::google::protobuf::RepeatedPtrField<Mission_InfoConfig>& AllConfigs::mission_info() const{
		return m_impl->mission_info();
	}
	//::google::protobuf::RepeatedPtrField<Mission_InfoConfig>* AllConfigs::mutable_mission_info(){
		//return m_impl->mutable_mission_info();
	//}

	//table Arena_RankConfig
	const Arena_RankConfig&  AllConfigs::arena_rank(const int id) const {
		return m_impl->arena_rank(id);
	}
	bool  AllConfigs::has_arena_rank(const int id) const {
		return m_impl->has_arena_rank(id);
	}
	const ::google::protobuf::RepeatedPtrField<Arena_RankConfig>& AllConfigs::arena_rank() const{
		return m_impl->arena_rank();
	}
	//::google::protobuf::RepeatedPtrField<Arena_RankConfig>* AllConfigs::mutable_arena_rank(){
		//return m_impl->mutable_arena_rank();
	//}

	//table CombineSummaryConfig
	const CombineSummaryConfig&  AllConfigs::combinesummary(const int id) const {
		return m_impl->combinesummary(id);
	}
	bool  AllConfigs::has_combinesummary(const int id) const {
		return m_impl->has_combinesummary(id);
	}
	const ::google::protobuf::RepeatedPtrField<CombineSummaryConfig>& AllConfigs::combinesummary() const{
		return m_impl->combinesummary();
	}
	//::google::protobuf::RepeatedPtrField<CombineSummaryConfig>* AllConfigs::mutable_combinesummary(){
		//return m_impl->mutable_combinesummary();
	//}

	//table PropConfig
	const PropConfig&  AllConfigs::prop(const int id) const {
		return m_impl->prop(id);
	}
	bool  AllConfigs::has_prop(const int id) const {
		return m_impl->has_prop(id);
	}
	const ::google::protobuf::RepeatedPtrField<PropConfig>& AllConfigs::prop() const{
		return m_impl->prop();
	}
	//::google::protobuf::RepeatedPtrField<PropConfig>* AllConfigs::mutable_prop(){
		//return m_impl->mutable_prop();
	//}

	//table DropConfig
	const DropConfig&  AllConfigs::drop(const int id) const {
		return m_impl->drop(id);
	}
	bool  AllConfigs::has_drop(const int id) const {
		return m_impl->has_drop(id);
	}
	const ::google::protobuf::RepeatedPtrField<DropConfig>& AllConfigs::drop() const{
		return m_impl->drop();
	}
	//::google::protobuf::RepeatedPtrField<DropConfig>* AllConfigs::mutable_drop(){
		//return m_impl->mutable_drop();
	//}

	//table CcbiAnimsConfig
	const CcbiAnimsConfig&  AllConfigs::ccbianims(const int id) const {
		return m_impl->ccbianims(id);
	}
	bool  AllConfigs::has_ccbianims(const int id) const {
		return m_impl->has_ccbianims(id);
	}
	const ::google::protobuf::RepeatedPtrField<CcbiAnimsConfig>& AllConfigs::ccbianims() const{
		return m_impl->ccbianims();
	}
	//::google::protobuf::RepeatedPtrField<CcbiAnimsConfig>* AllConfigs::mutable_ccbianims(){
		//return m_impl->mutable_ccbianims();
	//}

	//table activity_oddsConfig
	const activity_oddsConfig&  AllConfigs::activity_odds(const int id) const {
		return m_impl->activity_odds(id);
	}
	bool  AllConfigs::has_activity_odds(const int id) const {
		return m_impl->has_activity_odds(id);
	}
	const ::google::protobuf::RepeatedPtrField<activity_oddsConfig>& AllConfigs::activity_odds() const{
		return m_impl->activity_odds();
	}
	//::google::protobuf::RepeatedPtrField<activity_oddsConfig>* AllConfigs::mutable_activity_odds(){
		//return m_impl->mutable_activity_odds();
	//}

	//table store_itemConfig
	const store_itemConfig&  AllConfigs::store_item(const int id) const {
		return m_impl->store_item(id);
	}
	bool  AllConfigs::has_store_item(const int id) const {
		return m_impl->has_store_item(id);
	}
	const ::google::protobuf::RepeatedPtrField<store_itemConfig>& AllConfigs::store_item() const{
		return m_impl->store_item();
	}
	//::google::protobuf::RepeatedPtrField<store_itemConfig>* AllConfigs::mutable_store_item(){
		//return m_impl->mutable_store_item();
	//}

	//table SpriteConfig
	const SpriteConfig&  AllConfigs::sprite(const int id) const {
		return m_impl->sprite(id);
	}
	bool  AllConfigs::has_sprite(const int id) const {
		return m_impl->has_sprite(id);
	}
	const ::google::protobuf::RepeatedPtrField<SpriteConfig>& AllConfigs::sprite() const{
		return m_impl->sprite();
	}
	//::google::protobuf::RepeatedPtrField<SpriteConfig>* AllConfigs::mutable_sprite(){
		//return m_impl->mutable_sprite();
	//}

	//table BattleHelpConfig
	const BattleHelpConfig&  AllConfigs::battlehelp(const int id) const {
		return m_impl->battlehelp(id);
	}
	bool  AllConfigs::has_battlehelp(const int id) const {
		return m_impl->has_battlehelp(id);
	}
	const ::google::protobuf::RepeatedPtrField<BattleHelpConfig>& AllConfigs::battlehelp() const{
		return m_impl->battlehelp();
	}
	//::google::protobuf::RepeatedPtrField<BattleHelpConfig>* AllConfigs::mutable_battlehelp(){
		//return m_impl->mutable_battlehelp();
	//}

	//table StopWinBonusConfig
	const StopWinBonusConfig&  AllConfigs::stopwinbonus(const int id) const {
		return m_impl->stopwinbonus(id);
	}
	bool  AllConfigs::has_stopwinbonus(const int id) const {
		return m_impl->has_stopwinbonus(id);
	}
	const ::google::protobuf::RepeatedPtrField<StopWinBonusConfig>& AllConfigs::stopwinbonus() const{
		return m_impl->stopwinbonus();
	}
	//::google::protobuf::RepeatedPtrField<StopWinBonusConfig>* AllConfigs::mutable_stopwinbonus(){
		//return m_impl->mutable_stopwinbonus();
	//}

	//table CardSkillConfig
	const CardSkillConfig&  AllConfigs::cardskill(const int id) const {
		return m_impl->cardskill(id);
	}
	bool  AllConfigs::has_cardskill(const int id) const {
		return m_impl->has_cardskill(id);
	}
	const ::google::protobuf::RepeatedPtrField<CardSkillConfig>& AllConfigs::cardskill() const{
		return m_impl->cardskill();
	}
	//::google::protobuf::RepeatedPtrField<CardSkillConfig>* AllConfigs::mutable_cardskill(){
		//return m_impl->mutable_cardskill();
	//}

	//table SubBattleStoryConfig
	const SubBattleStoryConfig&  AllConfigs::subbattlestory(const int id) const {
		return m_impl->subbattlestory(id);
	}
	bool  AllConfigs::has_subbattlestory(const int id) const {
		return m_impl->has_subbattlestory(id);
	}
	const ::google::protobuf::RepeatedPtrField<SubBattleStoryConfig>& AllConfigs::subbattlestory() const{
		return m_impl->subbattlestory();
	}
	//::google::protobuf::RepeatedPtrField<SubBattleStoryConfig>* AllConfigs::mutable_subbattlestory(){
		//return m_impl->mutable_subbattlestory();
	//}

	//table MineCoinConfig
	const MineCoinConfig&  AllConfigs::minecoin(const int id) const {
		return m_impl->minecoin(id);
	}
	bool  AllConfigs::has_minecoin(const int id) const {
		return m_impl->has_minecoin(id);
	}
	const ::google::protobuf::RepeatedPtrField<MineCoinConfig>& AllConfigs::minecoin() const{
		return m_impl->minecoin();
	}
	//::google::protobuf::RepeatedPtrField<MineCoinConfig>* AllConfigs::mutable_minecoin(){
		//return m_impl->mutable_minecoin();
	//}

	//table Talent_initial_idConfig
	const Talent_initial_idConfig&  AllConfigs::talent_initial_id(const int id) const {
		return m_impl->talent_initial_id(id);
	}
	bool  AllConfigs::has_talent_initial_id(const int id) const {
		return m_impl->has_talent_initial_id(id);
	}
	const ::google::protobuf::RepeatedPtrField<Talent_initial_idConfig>& AllConfigs::talent_initial_id() const{
		return m_impl->talent_initial_id();
	}
	//::google::protobuf::RepeatedPtrField<Talent_initial_idConfig>* AllConfigs::mutable_talent_initial_id(){
		//return m_impl->mutable_talent_initial_id();
	//}

	//table char_friend_countConfig
	const char_friend_countConfig&  AllConfigs::char_friend_count(const int id) const {
		return m_impl->char_friend_count(id);
	}
	bool  AllConfigs::has_char_friend_count(const int id) const {
		return m_impl->has_char_friend_count(id);
	}
	const ::google::protobuf::RepeatedPtrField<char_friend_countConfig>& AllConfigs::char_friend_count() const{
		return m_impl->char_friend_count();
	}
	//::google::protobuf::RepeatedPtrField<char_friend_countConfig>* AllConfigs::mutable_char_friend_count(){
		//return m_impl->mutable_char_friend_count();
	//}

	//table Arena_BuffConfig
	const Arena_BuffConfig&  AllConfigs::arena_buff(const int id) const {
		return m_impl->arena_buff(id);
	}
	bool  AllConfigs::has_arena_buff(const int id) const {
		return m_impl->has_arena_buff(id);
	}
	const ::google::protobuf::RepeatedPtrField<Arena_BuffConfig>& AllConfigs::arena_buff() const{
		return m_impl->arena_buff();
	}
	//::google::protobuf::RepeatedPtrField<Arena_BuffConfig>* AllConfigs::mutable_arena_buff(){
		//return m_impl->mutable_arena_buff();
	//}

	//table CharacterInitDataConfig
	const CharacterInitDataConfig&  AllConfigs::characterinitdata(const int id) const {
		return m_impl->characterinitdata(id);
	}
	bool  AllConfigs::has_characterinitdata(const int id) const {
		return m_impl->has_characterinitdata(id);
	}
	const ::google::protobuf::RepeatedPtrField<CharacterInitDataConfig>& AllConfigs::characterinitdata() const{
		return m_impl->characterinitdata();
	}
	//::google::protobuf::RepeatedPtrField<CharacterInitDataConfig>* AllConfigs::mutable_characterinitdata(){
		//return m_impl->mutable_characterinitdata();
	//}

	//table AchievementConditionConfig
	const AchievementConditionConfig&  AllConfigs::achievementcondition(const int id) const {
		return m_impl->achievementcondition(id);
	}
	bool  AllConfigs::has_achievementcondition(const int id) const {
		return m_impl->has_achievementcondition(id);
	}
	const ::google::protobuf::RepeatedPtrField<AchievementConditionConfig>& AllConfigs::achievementcondition() const{
		return m_impl->achievementcondition();
	}
	//::google::protobuf::RepeatedPtrField<AchievementConditionConfig>* AllConfigs::mutable_achievementcondition(){
		//return m_impl->mutable_achievementcondition();
	//}

	//table MineInitDataConfig
	const MineInitDataConfig&  AllConfigs::mineinitdata(const int id) const {
		return m_impl->mineinitdata(id);
	}
	bool  AllConfigs::has_mineinitdata(const int id) const {
		return m_impl->has_mineinitdata(id);
	}
	const ::google::protobuf::RepeatedPtrField<MineInitDataConfig>& AllConfigs::mineinitdata() const{
		return m_impl->mineinitdata();
	}
	//::google::protobuf::RepeatedPtrField<MineInitDataConfig>* AllConfigs::mutable_mineinitdata(){
		//return m_impl->mutable_mineinitdata();
	//}

	//table CourseConfig
	const CourseConfig&  AllConfigs::course(const int id) const {
		return m_impl->course(id);
	}
	bool  AllConfigs::has_course(const int id) const {
		return m_impl->has_course(id);
	}
	const ::google::protobuf::RepeatedPtrField<CourseConfig>& AllConfigs::course() const{
		return m_impl->course();
	}
	//::google::protobuf::RepeatedPtrField<CourseConfig>* AllConfigs::mutable_course(){
		//return m_impl->mutable_course();
	//}

	//table activity_consume_moneyConfig
	const activity_consume_moneyConfig&  AllConfigs::activity_consume_money(const int id) const {
		return m_impl->activity_consume_money(id);
	}
	bool  AllConfigs::has_activity_consume_money(const int id) const {
		return m_impl->has_activity_consume_money(id);
	}
	const ::google::protobuf::RepeatedPtrField<activity_consume_moneyConfig>& AllConfigs::activity_consume_money() const{
		return m_impl->activity_consume_money();
	}
	//::google::protobuf::RepeatedPtrField<activity_consume_moneyConfig>* AllConfigs::mutable_activity_consume_money(){
		//return m_impl->mutable_activity_consume_money();
	//}

	//table RobotDataConfig
	const RobotDataConfig&  AllConfigs::robotdata(const int id) const {
		return m_impl->robotdata(id);
	}
	bool  AllConfigs::has_robotdata(const int id) const {
		return m_impl->has_robotdata(id);
	}
	const ::google::protobuf::RepeatedPtrField<RobotDataConfig>& AllConfigs::robotdata() const{
		return m_impl->robotdata();
	}
	//::google::protobuf::RepeatedPtrField<RobotDataConfig>* AllConfigs::mutable_robotdata(){
		//return m_impl->mutable_robotdata();
	//}

	//table ErnieBonusConfig
	const ErnieBonusConfig&  AllConfigs::erniebonus(const int id) const {
		return m_impl->erniebonus(id);
	}
	bool  AllConfigs::has_erniebonus(const int id) const {
		return m_impl->has_erniebonus(id);
	}
	const ::google::protobuf::RepeatedPtrField<ErnieBonusConfig>& AllConfigs::erniebonus() const{
		return m_impl->erniebonus();
	}
	//::google::protobuf::RepeatedPtrField<ErnieBonusConfig>* AllConfigs::mutable_erniebonus(){
		//return m_impl->mutable_erniebonus();
	//}

	//table CardSkillFixConfig
	const CardSkillFixConfig&  AllConfigs::cardskillfix(const int id) const {
		return m_impl->cardskillfix(id);
	}
	bool  AllConfigs::has_cardskillfix(const int id) const {
		return m_impl->has_cardskillfix(id);
	}
	const ::google::protobuf::RepeatedPtrField<CardSkillFixConfig>& AllConfigs::cardskillfix() const{
		return m_impl->cardskillfix();
	}
	//::google::protobuf::RepeatedPtrField<CardSkillFixConfig>* AllConfigs::mutable_cardskillfix(){
		//return m_impl->mutable_cardskillfix();
	//}

	//table VipInitDataConfig
	const VipInitDataConfig&  AllConfigs::vipinitdata(const int id) const {
		return m_impl->vipinitdata(id);
	}
	bool  AllConfigs::has_vipinitdata(const int id) const {
		return m_impl->has_vipinitdata(id);
	}
	const ::google::protobuf::RepeatedPtrField<VipInitDataConfig>& AllConfigs::vipinitdata() const{
		return m_impl->vipinitdata();
	}
	//::google::protobuf::RepeatedPtrField<VipInitDataConfig>* AllConfigs::mutable_vipinitdata(){
		//return m_impl->mutable_vipinitdata();
	//}

	//table SkillGrowConfig
	const SkillGrowConfig&  AllConfigs::skillgrow(const int id) const {
		return m_impl->skillgrow(id);
	}
	bool  AllConfigs::has_skillgrow(const int id) const {
		return m_impl->has_skillgrow(id);
	}
	const ::google::protobuf::RepeatedPtrField<SkillGrowConfig>& AllConfigs::skillgrow() const{
		return m_impl->skillgrow();
	}
	//::google::protobuf::RepeatedPtrField<SkillGrowConfig>* AllConfigs::mutable_skillgrow(){
		//return m_impl->mutable_skillgrow();
	//}

	//table storeConfig
	const storeConfig&  AllConfigs::store(const int id) const {
		return m_impl->store(id);
	}
	bool  AllConfigs::has_store(const int id) const {
		return m_impl->has_store(id);
	}
	const ::google::protobuf::RepeatedPtrField<storeConfig>& AllConfigs::store() const{
		return m_impl->store();
	}
	//::google::protobuf::RepeatedPtrField<storeConfig>* AllConfigs::mutable_store(){
		//return m_impl->mutable_store();
	//}

	//table Arena_TopConfig
	const Arena_TopConfig&  AllConfigs::arena_top(const int id) const {
		return m_impl->arena_top(id);
	}
	bool  AllConfigs::has_arena_top(const int id) const {
		return m_impl->has_arena_top(id);
	}
	const ::google::protobuf::RepeatedPtrField<Arena_TopConfig>& AllConfigs::arena_top() const{
		return m_impl->arena_top();
	}
	//::google::protobuf::RepeatedPtrField<Arena_TopConfig>* AllConfigs::mutable_arena_top(){
		//return m_impl->mutable_arena_top();
	//}

	//table FramesConfig
	const FramesConfig&  AllConfigs::frames(const int id) const {
		return m_impl->frames(id);
	}
	bool  AllConfigs::has_frames(const int id) const {
		return m_impl->has_frames(id);
	}
	const ::google::protobuf::RepeatedPtrField<FramesConfig>& AllConfigs::frames() const{
		return m_impl->frames();
	}
	//::google::protobuf::RepeatedPtrField<FramesConfig>* AllConfigs::mutable_frames(){
		//return m_impl->mutable_frames();
	//}

	//table AutoBattleInitDataConfig
	const AutoBattleInitDataConfig&  AllConfigs::autobattleinitdata(const int id) const {
		return m_impl->autobattleinitdata(id);
	}
	bool  AllConfigs::has_autobattleinitdata(const int id) const {
		return m_impl->has_autobattleinitdata(id);
	}
	const ::google::protobuf::RepeatedPtrField<AutoBattleInitDataConfig>& AllConfigs::autobattleinitdata() const{
		return m_impl->autobattleinitdata();
	}
	//::google::protobuf::RepeatedPtrField<AutoBattleInitDataConfig>* AllConfigs::mutable_autobattleinitdata(){
		//return m_impl->mutable_autobattleinitdata();
	//}

	//table AttributeTipsConfig
	const AttributeTipsConfig&  AllConfigs::attributetips(const int id) const {
		return m_impl->attributetips(id);
	}
	bool  AllConfigs::has_attributetips(const int id) const {
		return m_impl->has_attributetips(id);
	}
	const ::google::protobuf::RepeatedPtrField<AttributeTipsConfig>& AllConfigs::attributetips() const{
		return m_impl->attributetips();
	}
	//::google::protobuf::RepeatedPtrField<AttributeTipsConfig>* AllConfigs::mutable_attributetips(){
		//return m_impl->mutable_attributetips();
	//}

	//table LoginConfig
	const LoginConfig&  AllConfigs::login(const int id) const {
		return m_impl->login(id);
	}
	bool  AllConfigs::has_login(const int id) const {
		return m_impl->has_login(id);
	}
	const ::google::protobuf::RepeatedPtrField<LoginConfig>& AllConfigs::login() const{
		return m_impl->login();
	}
	//::google::protobuf::RepeatedPtrField<LoginConfig>* AllConfigs::mutable_login(){
		//return m_impl->mutable_login();
	//}

	//table AttrTypeConfig
	const AttrTypeConfig&  AllConfigs::attrtype(const int id) const {
		return m_impl->attrtype(id);
	}
	bool  AllConfigs::has_attrtype(const int id) const {
		return m_impl->has_attrtype(id);
	}
	const ::google::protobuf::RepeatedPtrField<AttrTypeConfig>& AllConfigs::attrtype() const{
		return m_impl->attrtype();
	}
	//::google::protobuf::RepeatedPtrField<AttrTypeConfig>* AllConfigs::mutable_attrtype(){
		//return m_impl->mutable_attrtype();
	//}

	//table TalentConfig
	const TalentConfig&  AllConfigs::talent(const int id) const {
		return m_impl->talent(id);
	}
	bool  AllConfigs::has_talent(const int id) const {
		return m_impl->has_talent(id);
	}
	const ::google::protobuf::RepeatedPtrField<TalentConfig>& AllConfigs::talent() const{
		return m_impl->talent();
	}
	//::google::protobuf::RepeatedPtrField<TalentConfig>* AllConfigs::mutable_talent(){
		//return m_impl->mutable_talent();
	//}

	//table descConfig
	const descConfig&  AllConfigs::desc(const int id) const {
		return m_impl->desc(id);
	}
	bool  AllConfigs::has_desc(const int id) const {
		return m_impl->has_desc(id);
	}
	const ::google::protobuf::RepeatedPtrField<descConfig>& AllConfigs::desc() const{
		return m_impl->desc();
	}
	//::google::protobuf::RepeatedPtrField<descConfig>* AllConfigs::mutable_desc(){
		//return m_impl->mutable_desc();
	//}

	//table VipAchievementConfig
	const VipAchievementConfig&  AllConfigs::vipachievement(const int id) const {
		return m_impl->vipachievement(id);
	}
	bool  AllConfigs::has_vipachievement(const int id) const {
		return m_impl->has_vipachievement(id);
	}
	const ::google::protobuf::RepeatedPtrField<VipAchievementConfig>& AllConfigs::vipachievement() const{
		return m_impl->vipachievement();
	}
	//::google::protobuf::RepeatedPtrField<VipAchievementConfig>* AllConfigs::mutable_vipachievement(){
		//return m_impl->mutable_vipachievement();
	//}

	//table Vip_privilegeConfig
	const Vip_privilegeConfig&  AllConfigs::vip_privilege(const int id) const {
		return m_impl->vip_privilege(id);
	}
	bool  AllConfigs::has_vip_privilege(const int id) const {
		return m_impl->has_vip_privilege(id);
	}
	const ::google::protobuf::RepeatedPtrField<Vip_privilegeConfig>& AllConfigs::vip_privilege() const{
		return m_impl->vip_privilege();
	}
	//::google::protobuf::RepeatedPtrField<Vip_privilegeConfig>* AllConfigs::mutable_vip_privilege(){
		//return m_impl->mutable_vip_privilege();
	//}

	//table PartucleAnimsConfig
	const PartucleAnimsConfig&  AllConfigs::partucleanims(const int id) const {
		return m_impl->partucleanims(id);
	}
	bool  AllConfigs::has_partucleanims(const int id) const {
		return m_impl->has_partucleanims(id);
	}
	const ::google::protobuf::RepeatedPtrField<PartucleAnimsConfig>& AllConfigs::partucleanims() const{
		return m_impl->partucleanims();
	}
	//::google::protobuf::RepeatedPtrField<PartucleAnimsConfig>* AllConfigs::mutable_partucleanims(){
		//return m_impl->mutable_partucleanims();
	//}

	//table PvpScoreBonusConfig
	const PvpScoreBonusConfig&  AllConfigs::pvpscorebonus(const int id) const {
		return m_impl->pvpscorebonus(id);
	}
	bool  AllConfigs::has_pvpscorebonus(const int id) const {
		return m_impl->has_pvpscorebonus(id);
	}
	const ::google::protobuf::RepeatedPtrField<PvpScoreBonusConfig>& AllConfigs::pvpscorebonus() const{
		return m_impl->pvpscorebonus();
	}
	//::google::protobuf::RepeatedPtrField<PvpScoreBonusConfig>* AllConfigs::mutable_pvpscorebonus(){
		//return m_impl->mutable_pvpscorebonus();
	//}

	//table LivenessConfig
	const LivenessConfig&  AllConfigs::liveness(const int id) const {
		return m_impl->liveness(id);
	}
	bool  AllConfigs::has_liveness(const int id) const {
		return m_impl->has_liveness(id);
	}
	const ::google::protobuf::RepeatedPtrField<LivenessConfig>& AllConfigs::liveness() const{
		return m_impl->liveness();
	}
	//::google::protobuf::RepeatedPtrField<LivenessConfig>* AllConfigs::mutable_liveness(){
		//return m_impl->mutable_liveness();
	//}

	//table WeekLivenessConfig
	const WeekLivenessConfig&  AllConfigs::weekliveness(const int id) const {
		return m_impl->weekliveness(id);
	}
	bool  AllConfigs::has_weekliveness(const int id) const {
		return m_impl->has_weekliveness(id);
	}
	const ::google::protobuf::RepeatedPtrField<WeekLivenessConfig>& AllConfigs::weekliveness() const{
		return m_impl->weekliveness();
	}
	//::google::protobuf::RepeatedPtrField<WeekLivenessConfig>* AllConfigs::mutable_weekliveness(){
		//return m_impl->mutable_weekliveness();
	//}

	//table rank_match_awardConfig
	const rank_match_awardConfig&  AllConfigs::rank_match_award(const int id) const {
		return m_impl->rank_match_award(id);
	}
	bool  AllConfigs::has_rank_match_award(const int id) const {
		return m_impl->has_rank_match_award(id);
	}
	const ::google::protobuf::RepeatedPtrField<rank_match_awardConfig>& AllConfigs::rank_match_award() const{
		return m_impl->rank_match_award();
	}
	//::google::protobuf::RepeatedPtrField<rank_match_awardConfig>* AllConfigs::mutable_rank_match_award(){
		//return m_impl->mutable_rank_match_award();
	//}

	//table BattleConfig
	const BattleConfig&  AllConfigs::battle(const int id) const {
		return m_impl->battle(id);
	}
	bool  AllConfigs::has_battle(const int id) const {
		return m_impl->has_battle(id);
	}
	const ::google::protobuf::RepeatedPtrField<BattleConfig>& AllConfigs::battle() const{
		return m_impl->battle();
	}
	//::google::protobuf::RepeatedPtrField<BattleConfig>* AllConfigs::mutable_battle(){
		//return m_impl->mutable_battle();
	//}

	//table BossInitDataConfig
	const BossInitDataConfig&  AllConfigs::bossinitdata(const int id) const {
		return m_impl->bossinitdata(id);
	}
	bool  AllConfigs::has_bossinitdata(const int id) const {
		return m_impl->has_bossinitdata(id);
	}
	const ::google::protobuf::RepeatedPtrField<BossInitDataConfig>& AllConfigs::bossinitdata() const{
		return m_impl->bossinitdata();
	}
	//::google::protobuf::RepeatedPtrField<BossInitDataConfig>* AllConfigs::mutable_bossinitdata(){
		//return m_impl->mutable_bossinitdata();
	//}

	//table Given_nameConfig
	const Given_nameConfig&  AllConfigs::given_name(const int id) const {
		return m_impl->given_name(id);
	}
	bool  AllConfigs::has_given_name(const int id) const {
		return m_impl->has_given_name(id);
	}
	const ::google::protobuf::RepeatedPtrField<Given_nameConfig>& AllConfigs::given_name() const{
		return m_impl->given_name();
	}
	//::google::protobuf::RepeatedPtrField<Given_nameConfig>* AllConfigs::mutable_given_name(){
		//return m_impl->mutable_given_name();
	//}

	//table LivenessBonusConfig
	const LivenessBonusConfig&  AllConfigs::livenessbonus(const int id) const {
		return m_impl->livenessbonus(id);
	}
	bool  AllConfigs::has_livenessbonus(const int id) const {
		return m_impl->has_livenessbonus(id);
	}
	const ::google::protobuf::RepeatedPtrField<LivenessBonusConfig>& AllConfigs::livenessbonus() const{
		return m_impl->livenessbonus();
	}
	//::google::protobuf::RepeatedPtrField<LivenessBonusConfig>* AllConfigs::mutable_livenessbonus(){
		//return m_impl->mutable_livenessbonus();
	//}

	//table MineCardCountConfig
	const MineCardCountConfig&  AllConfigs::minecardcount(const int id) const {
		return m_impl->minecardcount(id);
	}
	bool  AllConfigs::has_minecardcount(const int id) const {
		return m_impl->has_minecardcount(id);
	}
	const ::google::protobuf::RepeatedPtrField<MineCardCountConfig>& AllConfigs::minecardcount() const{
		return m_impl->minecardcount();
	}
	//::google::protobuf::RepeatedPtrField<MineCardCountConfig>* AllConfigs::mutable_minecardcount(){
		//return m_impl->mutable_minecardcount();
	//}

	//table CardGainExpConfig
	const CardGainExpConfig&  AllConfigs::cardgainexp(const int id) const {
		return m_impl->cardgainexp(id);
	}
	bool  AllConfigs::has_cardgainexp(const int id) const {
		return m_impl->has_cardgainexp(id);
	}
	const ::google::protobuf::RepeatedPtrField<CardGainExpConfig>& AllConfigs::cardgainexp() const{
		return m_impl->cardgainexp();
	}
	//::google::protobuf::RepeatedPtrField<CardGainExpConfig>* AllConfigs::mutable_cardgainexp(){
		//return m_impl->mutable_cardgainexp();
	//}

	//table UnitTypeConfig
	const UnitTypeConfig&  AllConfigs::unittype(const int id) const {
		return m_impl->unittype(id);
	}
	bool  AllConfigs::has_unittype(const int id) const {
		return m_impl->has_unittype(id);
	}
	const ::google::protobuf::RepeatedPtrField<UnitTypeConfig>& AllConfigs::unittype() const{
		return m_impl->unittype();
	}
	//::google::protobuf::RepeatedPtrField<UnitTypeConfig>* AllConfigs::mutable_unittype(){
		//return m_impl->mutable_unittype();
	//}

	//table ImmuneInitDataConfig
	const ImmuneInitDataConfig&  AllConfigs::immuneinitdata(const int id) const {
		return m_impl->immuneinitdata(id);
	}
	bool  AllConfigs::has_immuneinitdata(const int id) const {
		return m_impl->has_immuneinitdata(id);
	}
	const ::google::protobuf::RepeatedPtrField<ImmuneInitDataConfig>& AllConfigs::immuneinitdata() const{
		return m_impl->immuneinitdata();
	}
	//::google::protobuf::RepeatedPtrField<ImmuneInitDataConfig>* AllConfigs::mutable_immuneinitdata(){
		//return m_impl->mutable_immuneinitdata();
	//}

	//table PropTypeConfig
	const PropTypeConfig&  AllConfigs::proptype(const int id) const {
		return m_impl->proptype(id);
	}
	bool  AllConfigs::has_proptype(const int id) const {
		return m_impl->has_proptype(id);
	}
	const ::google::protobuf::RepeatedPtrField<PropTypeConfig>& AllConfigs::proptype() const{
		return m_impl->proptype();
	}
	//::google::protobuf::RepeatedPtrField<PropTypeConfig>* AllConfigs::mutable_proptype(){
		//return m_impl->mutable_proptype();
	//}

	//table TalentSkillConfig
	const TalentSkillConfig&  AllConfigs::talentskill(const int id) const {
		return m_impl->talentskill(id);
	}
	bool  AllConfigs::has_talentskill(const int id) const {
		return m_impl->has_talentskill(id);
	}
	const ::google::protobuf::RepeatedPtrField<TalentSkillConfig>& AllConfigs::talentskill() const{
		return m_impl->talentskill();
	}
	//::google::protobuf::RepeatedPtrField<TalentSkillConfig>* AllConfigs::mutable_talentskill(){
		//return m_impl->mutable_talentskill();
	//}

	//table PropGroupConfig
	const PropGroupConfig&  AllConfigs::propgroup(const int id) const {
		return m_impl->propgroup(id);
	}
	bool  AllConfigs::has_propgroup(const int id) const {
		return m_impl->has_propgroup(id);
	}
	const ::google::protobuf::RepeatedPtrField<PropGroupConfig>& AllConfigs::propgroup() const{
		return m_impl->propgroup();
	}
	//::google::protobuf::RepeatedPtrField<PropGroupConfig>* AllConfigs::mutable_propgroup(){
		//return m_impl->mutable_propgroup();
	//}

	//table mine_colourConfig
	const mine_colourConfig&  AllConfigs::mine_colour(const int id) const {
		return m_impl->mine_colour(id);
	}
	bool  AllConfigs::has_mine_colour(const int id) const {
		return m_impl->has_mine_colour(id);
	}
	const ::google::protobuf::RepeatedPtrField<mine_colourConfig>& AllConfigs::mine_colour() const{
		return m_impl->mine_colour();
	}
	//::google::protobuf::RepeatedPtrField<mine_colourConfig>* AllConfigs::mutable_mine_colour(){
		//return m_impl->mutable_mine_colour();
	//}

	//table ItemConfig
	const ItemConfig&  AllConfigs::item(const int id) const {
		return m_impl->item(id);
	}
	bool  AllConfigs::has_item(const int id) const {
		return m_impl->has_item(id);
	}
	const ::google::protobuf::RepeatedPtrField<ItemConfig>& AllConfigs::item() const{
		return m_impl->item();
	}
	//::google::protobuf::RepeatedPtrField<ItemConfig>* AllConfigs::mutable_item(){
		//return m_impl->mutable_item();
	//}

	//table UnitDamageIncConfig
	const UnitDamageIncConfig&  AllConfigs::unitdamageinc(const int id) const {
		return m_impl->unitdamageinc(id);
	}
	bool  AllConfigs::has_unitdamageinc(const int id) const {
		return m_impl->has_unitdamageinc(id);
	}
	const ::google::protobuf::RepeatedPtrField<UnitDamageIncConfig>& AllConfigs::unitdamageinc() const{
		return m_impl->unitdamageinc();
	}
	//::google::protobuf::RepeatedPtrField<UnitDamageIncConfig>* AllConfigs::mutable_unitdamageinc(){
		//return m_impl->mutable_unitdamageinc();
	//}

	//table WorldviewConfig
	const WorldviewConfig&  AllConfigs::worldview(const int id) const {
		return m_impl->worldview(id);
	}
	bool  AllConfigs::has_worldview(const int id) const {
		return m_impl->has_worldview(id);
	}
	const ::google::protobuf::RepeatedPtrField<WorldviewConfig>& AllConfigs::worldview() const{
		return m_impl->worldview();
	}
	//::google::protobuf::RepeatedPtrField<WorldviewConfig>* AllConfigs::mutable_worldview(){
		//return m_impl->mutable_worldview();
	//}

	//table WeChatConfig
	const WeChatConfig&  AllConfigs::wechat(const int id) const {
		return m_impl->wechat(id);
	}
	bool  AllConfigs::has_wechat(const int id) const {
		return m_impl->has_wechat(id);
	}
	const ::google::protobuf::RepeatedPtrField<WeChatConfig>& AllConfigs::wechat() const{
		return m_impl->wechat();
	}
	//::google::protobuf::RepeatedPtrField<WeChatConfig>* AllConfigs::mutable_wechat(){
		//return m_impl->mutable_wechat();
	//}

	//table VipSignUpConfig
	const VipSignUpConfig&  AllConfigs::vipsignup(const int id) const {
		return m_impl->vipsignup(id);
	}
	bool  AllConfigs::has_vipsignup(const int id) const {
		return m_impl->has_vipsignup(id);
	}
	const ::google::protobuf::RepeatedPtrField<VipSignUpConfig>& AllConfigs::vipsignup() const{
		return m_impl->vipsignup();
	}
	//::google::protobuf::RepeatedPtrField<VipSignUpConfig>* AllConfigs::mutable_vipsignup(){
		//return m_impl->mutable_vipsignup();
	//}

	//table CombineSkillEffectConfig
	const CombineSkillEffectConfig&  AllConfigs::combineskilleffect(const int id) const {
		return m_impl->combineskilleffect(id);
	}
	bool  AllConfigs::has_combineskilleffect(const int id) const {
		return m_impl->has_combineskilleffect(id);
	}
	const ::google::protobuf::RepeatedPtrField<CombineSkillEffectConfig>& AllConfigs::combineskilleffect() const{
		return m_impl->combineskilleffect();
	}
	//::google::protobuf::RepeatedPtrField<CombineSkillEffectConfig>* AllConfigs::mutable_combineskilleffect(){
		//return m_impl->mutable_combineskilleffect();
	//}

	//table chapter_awardConfig
	const chapter_awardConfig&  AllConfigs::chapter_award(const int id) const {
		return m_impl->chapter_award(id);
	}
	bool  AllConfigs::has_chapter_award(const int id) const {
		return m_impl->has_chapter_award(id);
	}
	const ::google::protobuf::RepeatedPtrField<chapter_awardConfig>& AllConfigs::chapter_award() const{
		return m_impl->chapter_award();
	}
	//::google::protobuf::RepeatedPtrField<chapter_awardConfig>* AllConfigs::mutable_chapter_award(){
		//return m_impl->mutable_chapter_award();
	//}

	//table ExchangeConfig
	const ExchangeConfig&  AllConfigs::exchange(const int id) const {
		return m_impl->exchange(id);
	}
	bool  AllConfigs::has_exchange(const int id) const {
		return m_impl->has_exchange(id);
	}
	const ::google::protobuf::RepeatedPtrField<ExchangeConfig>& AllConfigs::exchange() const{
		return m_impl->exchange();
	}
	//::google::protobuf::RepeatedPtrField<ExchangeConfig>* AllConfigs::mutable_exchange(){
		//return m_impl->mutable_exchange();
	//}

	//table TaskConfig
	const TaskConfig&  AllConfigs::task(const int id) const {
		return m_impl->task(id);
	}
	bool  AllConfigs::has_task(const int id) const {
		return m_impl->has_task(id);
	}
	const ::google::protobuf::RepeatedPtrField<TaskConfig>& AllConfigs::task() const{
		return m_impl->task();
	}
	//::google::protobuf::RepeatedPtrField<TaskConfig>* AllConfigs::mutable_task(){
		//return m_impl->mutable_task();
	//}

	//table UnitInitDataConfig
	const UnitInitDataConfig&  AllConfigs::unitinitdata(const int id) const {
		return m_impl->unitinitdata(id);
	}
	bool  AllConfigs::has_unitinitdata(const int id) const {
		return m_impl->has_unitinitdata(id);
	}
	const ::google::protobuf::RepeatedPtrField<UnitInitDataConfig>& AllConfigs::unitinitdata() const{
		return m_impl->unitinitdata();
	}
	//::google::protobuf::RepeatedPtrField<UnitInitDataConfig>* AllConfigs::mutable_unitinitdata(){
		//return m_impl->mutable_unitinitdata();
	//}

	//table EquipmentConfig
	const EquipmentConfig&  AllConfigs::equipment(const int id) const {
		return m_impl->equipment(id);
	}
	bool  AllConfigs::has_equipment(const int id) const {
		return m_impl->has_equipment(id);
	}
	const ::google::protobuf::RepeatedPtrField<EquipmentConfig>& AllConfigs::equipment() const{
		return m_impl->equipment();
	}
	//::google::protobuf::RepeatedPtrField<EquipmentConfig>* AllConfigs::mutable_equipment(){
		//return m_impl->mutable_equipment();
	//}

	//table HelpConfig
	const HelpConfig&  AllConfigs::help(const int id) const {
		return m_impl->help(id);
	}
	bool  AllConfigs::has_help(const int id) const {
		return m_impl->has_help(id);
	}
	const ::google::protobuf::RepeatedPtrField<HelpConfig>& AllConfigs::help() const{
		return m_impl->help();
	}
	//::google::protobuf::RepeatedPtrField<HelpConfig>* AllConfigs::mutable_help(){
		//return m_impl->mutable_help();
	//}

	//table activity_commodityConfig
	const activity_commodityConfig&  AllConfigs::activity_commodity(const int id) const {
		return m_impl->activity_commodity(id);
	}
	bool  AllConfigs::has_activity_commodity(const int id) const {
		return m_impl->has_activity_commodity(id);
	}
	const ::google::protobuf::RepeatedPtrField<activity_commodityConfig>& AllConfigs::activity_commodity() const{
		return m_impl->activity_commodity();
	}
	//::google::protobuf::RepeatedPtrField<activity_commodityConfig>* AllConfigs::mutable_activity_commodity(){
		//return m_impl->mutable_activity_commodity();
	//}

	//table UnitEffectConfig
	const UnitEffectConfig&  AllConfigs::uniteffect(const int id) const {
		return m_impl->uniteffect(id);
	}
	bool  AllConfigs::has_uniteffect(const int id) const {
		return m_impl->has_uniteffect(id);
	}
	const ::google::protobuf::RepeatedPtrField<UnitEffectConfig>& AllConfigs::uniteffect() const{
		return m_impl->uniteffect();
	}
	//::google::protobuf::RepeatedPtrField<UnitEffectConfig>* AllConfigs::mutable_uniteffect(){
		//return m_impl->mutable_uniteffect();
	//}

	//table FamilyConfig
	const FamilyConfig&  AllConfigs::family(const int id) const {
		return m_impl->family(id);
	}
	bool  AllConfigs::has_family(const int id) const {
		return m_impl->has_family(id);
	}
	const ::google::protobuf::RepeatedPtrField<FamilyConfig>& AllConfigs::family() const{
		return m_impl->family();
	}
	//::google::protobuf::RepeatedPtrField<FamilyConfig>* AllConfigs::mutable_family(){
		//return m_impl->mutable_family();
	//}

	//table AchievementConfig
	const AchievementConfig&  AllConfigs::achievement(const int id) const {
		return m_impl->achievement(id);
	}
	bool  AllConfigs::has_achievement(const int id) const {
		return m_impl->has_achievement(id);
	}
	const ::google::protobuf::RepeatedPtrField<AchievementConfig>& AllConfigs::achievement() const{
		return m_impl->achievement();
	}
	//::google::protobuf::RepeatedPtrField<AchievementConfig>* AllConfigs::mutable_achievement(){
		//return m_impl->mutable_achievement();
	//}

	//table Activity_RebateConfig
	const Activity_RebateConfig&  AllConfigs::activity_rebate(const int id) const {
		return m_impl->activity_rebate(id);
	}
	bool  AllConfigs::has_activity_rebate(const int id) const {
		return m_impl->has_activity_rebate(id);
	}
	const ::google::protobuf::RepeatedPtrField<Activity_RebateConfig>& AllConfigs::activity_rebate() const{
		return m_impl->activity_rebate();
	}
	//::google::protobuf::RepeatedPtrField<Activity_RebateConfig>* AllConfigs::mutable_activity_rebate(){
		//return m_impl->mutable_activity_rebate();
	//}

	//table RankConfig
	const RankConfig&  AllConfigs::rank(const int id) const {
		return m_impl->rank(id);
	}
	bool  AllConfigs::has_rank(const int id) const {
		return m_impl->has_rank(id);
	}
	const ::google::protobuf::RepeatedPtrField<RankConfig>& AllConfigs::rank() const{
		return m_impl->rank();
	}
	//::google::protobuf::RepeatedPtrField<RankConfig>* AllConfigs::mutable_rank(){
		//return m_impl->mutable_rank();
	//}

	//table TerritoryConfig
	const TerritoryConfig&  AllConfigs::territory(const int id) const {
		return m_impl->territory(id);
	}
	bool  AllConfigs::has_territory(const int id) const {
		return m_impl->has_territory(id);
	}
	const ::google::protobuf::RepeatedPtrField<TerritoryConfig>& AllConfigs::territory() const{
		return m_impl->territory();
	}
	//::google::protobuf::RepeatedPtrField<TerritoryConfig>* AllConfigs::mutable_territory(){
		//return m_impl->mutable_territory();
	//}

	//table Stage_GuideConfig
	const Stage_GuideConfig&  AllConfigs::stage_guide(const int id) const {
		return m_impl->stage_guide(id);
	}
	bool  AllConfigs::has_stage_guide(const int id) const {
		return m_impl->has_stage_guide(id);
	}
	const ::google::protobuf::RepeatedPtrField<Stage_GuideConfig>& AllConfigs::stage_guide() const{
		return m_impl->stage_guide();
	}
	//::google::protobuf::RepeatedPtrField<Stage_GuideConfig>* AllConfigs::mutable_stage_guide(){
		//return m_impl->mutable_stage_guide();
	//}

	//table ActivityConfig
	const ActivityConfig&  AllConfigs::activity(const int id) const {
		return m_impl->activity(id);
	}
	bool  AllConfigs::has_activity(const int id) const {
		return m_impl->has_activity(id);
	}
	const ::google::protobuf::RepeatedPtrField<ActivityConfig>& AllConfigs::activity() const{
		return m_impl->activity();
	}
	//::google::protobuf::RepeatedPtrField<ActivityConfig>* AllConfigs::mutable_activity(){
		//return m_impl->mutable_activity();
	//}

	//table UnitGrownConfig
	const UnitGrownConfig&  AllConfigs::unitgrown(const int id) const {
		return m_impl->unitgrown(id);
	}
	bool  AllConfigs::has_unitgrown(const int id) const {
		return m_impl->has_unitgrown(id);
	}
	const ::google::protobuf::RepeatedPtrField<UnitGrownConfig>& AllConfigs::unitgrown() const{
		return m_impl->unitgrown();
	}
	//::google::protobuf::RepeatedPtrField<UnitGrownConfig>* AllConfigs::mutable_unitgrown(){
		//return m_impl->mutable_unitgrown();
	//}

	//table Bank_levelup_timeConfig
	const Bank_levelup_timeConfig&  AllConfigs::bank_levelup_time(const int id) const {
		return m_impl->bank_levelup_time(id);
	}
	bool  AllConfigs::has_bank_levelup_time(const int id) const {
		return m_impl->has_bank_levelup_time(id);
	}
	const ::google::protobuf::RepeatedPtrField<Bank_levelup_timeConfig>& AllConfigs::bank_levelup_time() const{
		return m_impl->bank_levelup_time();
	}
	//::google::protobuf::RepeatedPtrField<Bank_levelup_timeConfig>* AllConfigs::mutable_bank_levelup_time(){
		//return m_impl->mutable_bank_levelup_time();
	//}

	//table SkeletonAnimsConfig
	const SkeletonAnimsConfig&  AllConfigs::skeletonanims(const int id) const {
		return m_impl->skeletonanims(id);
	}
	bool  AllConfigs::has_skeletonanims(const int id) const {
		return m_impl->has_skeletonanims(id);
	}
	const ::google::protobuf::RepeatedPtrField<SkeletonAnimsConfig>& AllConfigs::skeletonanims() const{
		return m_impl->skeletonanims();
	}
	//::google::protobuf::RepeatedPtrField<SkeletonAnimsConfig>* AllConfigs::mutable_skeletonanims(){
		//return m_impl->mutable_skeletonanims();
	//}

	//table ConditionConfig
	const ConditionConfig&  AllConfigs::condition(const int id) const {
		return m_impl->condition(id);
	}
	bool  AllConfigs::has_condition(const int id) const {
		return m_impl->has_condition(id);
	}
	const ::google::protobuf::RepeatedPtrField<ConditionConfig>& AllConfigs::condition() const{
		return m_impl->condition();
	}
	//::google::protobuf::RepeatedPtrField<ConditionConfig>* AllConfigs::mutable_condition(){
		//return m_impl->mutable_condition();
	//}

	//table EquipmentCombineConfig
	const EquipmentCombineConfig&  AllConfigs::equipmentcombine(const int id) const {
		return m_impl->equipmentcombine(id);
	}
	bool  AllConfigs::has_equipmentcombine(const int id) const {
		return m_impl->has_equipmentcombine(id);
	}
	const ::google::protobuf::RepeatedPtrField<EquipmentCombineConfig>& AllConfigs::equipmentcombine() const{
		return m_impl->equipmentcombine();
	}
	//::google::protobuf::RepeatedPtrField<EquipmentCombineConfig>* AllConfigs::mutable_equipmentcombine(){
		//return m_impl->mutable_equipmentcombine();
	//}

	//table BattleThemeConfig
	const BattleThemeConfig&  AllConfigs::battletheme(const int id) const {
		return m_impl->battletheme(id);
	}
	bool  AllConfigs::has_battletheme(const int id) const {
		return m_impl->has_battletheme(id);
	}
	const ::google::protobuf::RepeatedPtrField<BattleThemeConfig>& AllConfigs::battletheme() const{
		return m_impl->battletheme();
	}
	//::google::protobuf::RepeatedPtrField<BattleThemeConfig>* AllConfigs::mutable_battletheme(){
		//return m_impl->mutable_battletheme();
	//}

	//table CostConfig
	const CostConfig&  AllConfigs::cost(const int id) const {
		return m_impl->cost(id);
	}
	bool  AllConfigs::has_cost(const int id) const {
		return m_impl->has_cost(id);
	}
	const ::google::protobuf::RepeatedPtrField<CostConfig>& AllConfigs::cost() const{
		return m_impl->cost();
	}
	//::google::protobuf::RepeatedPtrField<CostConfig>* AllConfigs::mutable_cost(){
		//return m_impl->mutable_cost();
	//}

	//table EquipmentImproveCostConfig
	const EquipmentImproveCostConfig&  AllConfigs::equipmentimprovecost(const int id) const {
		return m_impl->equipmentimprovecost(id);
	}
	bool  AllConfigs::has_equipmentimprovecost(const int id) const {
		return m_impl->has_equipmentimprovecost(id);
	}
	const ::google::protobuf::RepeatedPtrField<EquipmentImproveCostConfig>& AllConfigs::equipmentimprovecost() const{
		return m_impl->equipmentimprovecost();
	}
	//::google::protobuf::RepeatedPtrField<EquipmentImproveCostConfig>* AllConfigs::mutable_equipmentimprovecost(){
		//return m_impl->mutable_equipmentimprovecost();
	//}

	//table JianghunConfig
	const JianghunConfig&  AllConfigs::jianghun(const int id) const {
		return m_impl->jianghun(id);
	}
	bool  AllConfigs::has_jianghun(const int id) const {
		return m_impl->has_jianghun(id);
	}
	const ::google::protobuf::RepeatedPtrField<JianghunConfig>& AllConfigs::jianghun() const{
		return m_impl->jianghun();
	}
	//::google::protobuf::RepeatedPtrField<JianghunConfig>* AllConfigs::mutable_jianghun(){
		//return m_impl->mutable_jianghun();
	//}

	//table CardCombineConfig
	const CardCombineConfig&  AllConfigs::cardcombine(const int id) const {
		return m_impl->cardcombine(id);
	}
	bool  AllConfigs::has_cardcombine(const int id) const {
		return m_impl->has_cardcombine(id);
	}
	const ::google::protobuf::RepeatedPtrField<CardCombineConfig>& AllConfigs::cardcombine() const{
		return m_impl->cardcombine();
	}
	//::google::protobuf::RepeatedPtrField<CardCombineConfig>* AllConfigs::mutable_cardcombine(){
		//return m_impl->mutable_cardcombine();
	//}

	//table StageConditionConfig
	const StageConditionConfig&  AllConfigs::stagecondition(const int id) const {
		return m_impl->stagecondition(id);
	}
	bool  AllConfigs::has_stagecondition(const int id) const {
		return m_impl->has_stagecondition(id);
	}
	const ::google::protobuf::RepeatedPtrField<StageConditionConfig>& AllConfigs::stagecondition() const{
		return m_impl->stagecondition();
	}
	//::google::protobuf::RepeatedPtrField<StageConditionConfig>* AllConfigs::mutable_stagecondition(){
		//return m_impl->mutable_stagecondition();
	//}

	//table CardSellConfig
	const CardSellConfig&  AllConfigs::cardsell(const int id) const {
		return m_impl->cardsell(id);
	}
	bool  AllConfigs::has_cardsell(const int id) const {
		return m_impl->has_cardsell(id);
	}
	const ::google::protobuf::RepeatedPtrField<CardSellConfig>& AllConfigs::cardsell() const{
		return m_impl->cardsell();
	}
	//::google::protobuf::RepeatedPtrField<CardSellConfig>* AllConfigs::mutable_cardsell(){
		//return m_impl->mutable_cardsell();
	//}

	//table InitialAchievementConfig
	const InitialAchievementConfig&  AllConfigs::initialachievement(const int id) const {
		return m_impl->initialachievement(id);
	}
	bool  AllConfigs::has_initialachievement(const int id) const {
		return m_impl->has_initialachievement(id);
	}
	const ::google::protobuf::RepeatedPtrField<InitialAchievementConfig>& AllConfigs::initialachievement() const{
		return m_impl->initialachievement();
	}
	//::google::protobuf::RepeatedPtrField<InitialAchievementConfig>* AllConfigs::mutable_initialachievement(){
		//return m_impl->mutable_initialachievement();
	//}

	//table MoneytreeConfig
	const MoneytreeConfig&  AllConfigs::moneytree(const int id) const {
		return m_impl->moneytree(id);
	}
	bool  AllConfigs::has_moneytree(const int id) const {
		return m_impl->has_moneytree(id);
	}
	const ::google::protobuf::RepeatedPtrField<MoneytreeConfig>& AllConfigs::moneytree() const{
		return m_impl->moneytree();
	}
	//::google::protobuf::RepeatedPtrField<MoneytreeConfig>* AllConfigs::mutable_moneytree(){
		//return m_impl->mutable_moneytree();
	//}

	//table StatusEffectConfig
	const StatusEffectConfig&  AllConfigs::statuseffect(const int id) const {
		return m_impl->statuseffect(id);
	}
	bool  AllConfigs::has_statuseffect(const int id) const {
		return m_impl->has_statuseffect(id);
	}
	const ::google::protobuf::RepeatedPtrField<StatusEffectConfig>& AllConfigs::statuseffect() const{
		return m_impl->statuseffect();
	}
	//::google::protobuf::RepeatedPtrField<StatusEffectConfig>* AllConfigs::mutable_statuseffect(){
		//return m_impl->mutable_statuseffect();
	//}

	//table award_codeConfig
	const award_codeConfig&  AllConfigs::award_code(const int id) const {
		return m_impl->award_code(id);
	}
	bool  AllConfigs::has_award_code(const int id) const {
		return m_impl->has_award_code(id);
	}
	const ::google::protobuf::RepeatedPtrField<award_codeConfig>& AllConfigs::award_code() const{
		return m_impl->award_code();
	}
	//::google::protobuf::RepeatedPtrField<award_codeConfig>* AllConfigs::mutable_award_code(){
		//return m_impl->mutable_award_code();
	//}

	//table SkillExpConfig
	const SkillExpConfig&  AllConfigs::skillexp(const int id) const {
		return m_impl->skillexp(id);
	}
	bool  AllConfigs::has_skillexp(const int id) const {
		return m_impl->has_skillexp(id);
	}
	const ::google::protobuf::RepeatedPtrField<SkillExpConfig>& AllConfigs::skillexp() const{
		return m_impl->skillexp();
	}
	//::google::protobuf::RepeatedPtrField<SkillExpConfig>* AllConfigs::mutable_skillexp(){
		//return m_impl->mutable_skillexp();
	//}

	//table friend_leadershipConfig
	const friend_leadershipConfig&  AllConfigs::friend_leadership(const int id) const {
		return m_impl->friend_leadership(id);
	}
	bool  AllConfigs::has_friend_leadership(const int id) const {
		return m_impl->has_friend_leadership(id);
	}
	const ::google::protobuf::RepeatedPtrField<friend_leadershipConfig>& AllConfigs::friend_leadership() const{
		return m_impl->friend_leadership();
	}
	//::google::protobuf::RepeatedPtrField<friend_leadershipConfig>* AllConfigs::mutable_friend_leadership(){
		//return m_impl->mutable_friend_leadership();
	//}

	//table Arena_RewardConfig
	const Arena_RewardConfig&  AllConfigs::arena_reward(const int id) const {
		return m_impl->arena_reward(id);
	}
	bool  AllConfigs::has_arena_reward(const int id) const {
		return m_impl->has_arena_reward(id);
	}
	const ::google::protobuf::RepeatedPtrField<Arena_RewardConfig>& AllConfigs::arena_reward() const{
		return m_impl->arena_reward();
	}
	//::google::protobuf::RepeatedPtrField<Arena_RewardConfig>* AllConfigs::mutable_arena_reward(){
		//return m_impl->mutable_arena_reward();
	//}

	//table SkillEffectConfig
	const SkillEffectConfig&  AllConfigs::skilleffect(const int id) const {
		return m_impl->skilleffect(id);
	}
	bool  AllConfigs::has_skilleffect(const int id) const {
		return m_impl->has_skilleffect(id);
	}
	const ::google::protobuf::RepeatedPtrField<SkillEffectConfig>& AllConfigs::skilleffect() const{
		return m_impl->skilleffect();
	}
	//::google::protobuf::RepeatedPtrField<SkillEffectConfig>* AllConfigs::mutable_skilleffect(){
		//return m_impl->mutable_skilleffect();
	//}

	//table SkillBuffConfig
	const SkillBuffConfig&  AllConfigs::skillbuff(const int id) const {
		return m_impl->skillbuff(id);
	}
	bool  AllConfigs::has_skillbuff(const int id) const {
		return m_impl->has_skillbuff(id);
	}
	const ::google::protobuf::RepeatedPtrField<SkillBuffConfig>& AllConfigs::skillbuff() const{
		return m_impl->skillbuff();
	}
	//::google::protobuf::RepeatedPtrField<SkillBuffConfig>* AllConfigs::mutable_skillbuff(){
		//return m_impl->mutable_skillbuff();
	//}

	//table SequenceAnimsConfig
	const SequenceAnimsConfig&  AllConfigs::sequenceanims(const int id) const {
		return m_impl->sequenceanims(id);
	}
	bool  AllConfigs::has_sequenceanims(const int id) const {
		return m_impl->has_sequenceanims(id);
	}
	const ::google::protobuf::RepeatedPtrField<SequenceAnimsConfig>& AllConfigs::sequenceanims() const{
		return m_impl->sequenceanims();
	}
	//::google::protobuf::RepeatedPtrField<SequenceAnimsConfig>* AllConfigs::mutable_sequenceanims(){
		//return m_impl->mutable_sequenceanims();
	//}

	//table PvpRobRateConfig
	const PvpRobRateConfig&  AllConfigs::pvprobrate(const int id) const {
		return m_impl->pvprobrate(id);
	}
	bool  AllConfigs::has_pvprobrate(const int id) const {
		return m_impl->has_pvprobrate(id);
	}
	const ::google::protobuf::RepeatedPtrField<PvpRobRateConfig>& AllConfigs::pvprobrate() const{
		return m_impl->pvprobrate();
	}
	//::google::protobuf::RepeatedPtrField<PvpRobRateConfig>* AllConfigs::mutable_pvprobrate(){
		//return m_impl->mutable_pvprobrate();
	//}

	//table TotalDamageBonusConfig
	const TotalDamageBonusConfig&  AllConfigs::totaldamagebonus(const int id) const {
		return m_impl->totaldamagebonus(id);
	}
	bool  AllConfigs::has_totaldamagebonus(const int id) const {
		return m_impl->has_totaldamagebonus(id);
	}
	const ::google::protobuf::RepeatedPtrField<TotalDamageBonusConfig>& AllConfigs::totaldamagebonus() const{
		return m_impl->totaldamagebonus();
	}
	//::google::protobuf::RepeatedPtrField<TotalDamageBonusConfig>* AllConfigs::mutable_totaldamagebonus(){
		//return m_impl->mutable_totaldamagebonus();
	//}

	//table NewcardConfig
	const NewcardConfig&  AllConfigs::newcard(const int id) const {
		return m_impl->newcard(id);
	}
	bool  AllConfigs::has_newcard(const int id) const {
		return m_impl->has_newcard(id);
	}
	const ::google::protobuf::RepeatedPtrField<NewcardConfig>& AllConfigs::newcard() const{
		return m_impl->newcard();
	}
	//::google::protobuf::RepeatedPtrField<NewcardConfig>* AllConfigs::mutable_newcard(){
		//return m_impl->mutable_newcard();
	//}

	//table MonsterConfig
	const MonsterConfig&  AllConfigs::monster(const int id) const {
		return m_impl->monster(id);
	}
	bool  AllConfigs::has_monster(const int id) const {
		return m_impl->has_monster(id);
	}
	const ::google::protobuf::RepeatedPtrField<MonsterConfig>& AllConfigs::monster() const{
		return m_impl->monster();
	}
	//::google::protobuf::RepeatedPtrField<MonsterConfig>* AllConfigs::mutable_monster(){
		//return m_impl->mutable_monster();
	//}

	//table BonusEmailConfig
	const BonusEmailConfig&  AllConfigs::bonusemail(const int id) const {
		return m_impl->bonusemail(id);
	}
	bool  AllConfigs::has_bonusemail(const int id) const {
		return m_impl->has_bonusemail(id);
	}
	const ::google::protobuf::RepeatedPtrField<BonusEmailConfig>& AllConfigs::bonusemail() const{
		return m_impl->bonusemail();
	}
	//::google::protobuf::RepeatedPtrField<BonusEmailConfig>* AllConfigs::mutable_bonusemail(){
		//return m_impl->mutable_bonusemail();
	//}

	//table ItemCombineConfig
	const ItemCombineConfig&  AllConfigs::itemcombine(const int id) const {
		return m_impl->itemcombine(id);
	}
	bool  AllConfigs::has_itemcombine(const int id) const {
		return m_impl->has_itemcombine(id);
	}
	const ::google::protobuf::RepeatedPtrField<ItemCombineConfig>& AllConfigs::itemcombine() const{
		return m_impl->itemcombine();
	}
	//::google::protobuf::RepeatedPtrField<ItemCombineConfig>* AllConfigs::mutable_itemcombine(){
		//return m_impl->mutable_itemcombine();
	//}

	//table help_noticeConfig
	const help_noticeConfig&  AllConfigs::help_notice(const int id) const {
		return m_impl->help_notice(id);
	}
	bool  AllConfigs::has_help_notice(const int id) const {
		return m_impl->has_help_notice(id);
	}
	const ::google::protobuf::RepeatedPtrField<help_noticeConfig>& AllConfigs::help_notice() const{
		return m_impl->help_notice();
	}
	//::google::protobuf::RepeatedPtrField<help_noticeConfig>* AllConfigs::mutable_help_notice(){
		//return m_impl->mutable_help_notice();
	//}
}}
