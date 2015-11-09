/********************************************************************
Filename:AllConfigs.h

Description:AllConfigs

Version:  1.0
Created time: 07/03/15 18:32:44
Revison:  none
Compiler: gcc vc

Author:   wufan, love19862003@163.com

Organization:
*********************************************************************/
#ifndef __ALLCONFIGS_H__
#define __ALLCONFIGS_H__
#include "GameConfig.pb.h"
#include <memory>
namespace DianShiTech{
namespace Config{

	class AllConfigs{
		private:
			class Impl;
			std::shared_ptr<Impl> m_impl;
		public:
			const std::string& version() const;
			AllConfigs();
			virtual ~AllConfigs();
			bool init(const std::string& path, const std::string&);
			//table ChapterConfig interface
			const ChapterConfig&  chapter(const int id) const ;
			bool  has_chapter(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<ChapterConfig>& chapter() const;
			//::google::protobuf::RepeatedPtrField<ChapterConfig>* mutable_chapter();

			//table MonsterGroupConfig interface
			const MonsterGroupConfig&  monstergroup(const int id) const ;
			bool  has_monstergroup(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<MonsterGroupConfig>& monstergroup() const;
			//::google::protobuf::RepeatedPtrField<MonsterGroupConfig>* mutable_monstergroup();

			//table rank_match_robotConfig interface
			const rank_match_robotConfig&  rank_match_robot(const int id) const ;
			bool  has_rank_match_robot(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<rank_match_robotConfig>& rank_match_robot() const;
			//::google::protobuf::RepeatedPtrField<rank_match_robotConfig>* mutable_rank_match_robot();

			//table UnitConfig interface
			const UnitConfig&  unit(const int id) const ;
			bool  has_unit(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<UnitConfig>& unit() const;
			//::google::protobuf::RepeatedPtrField<UnitConfig>* mutable_unit();

			//table Talent_initConfig interface
			const Talent_initConfig&  talent_init(const int id) const ;
			bool  has_talent_init(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<Talent_initConfig>& talent_init() const;
			//::google::protobuf::RepeatedPtrField<Talent_initConfig>* mutable_talent_init();

			//table XilianConfig interface
			const XilianConfig&  xilian(const int id) const ;
			bool  has_xilian(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<XilianConfig>& xilian() const;
			//::google::protobuf::RepeatedPtrField<XilianConfig>* mutable_xilian();

			//table SystemOpenConfig interface
			const SystemOpenConfig&  systemopen(const int id) const ;
			bool  has_systemopen(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<SystemOpenConfig>& systemopen() const;
			//::google::protobuf::RepeatedPtrField<SystemOpenConfig>* mutable_systemopen();

			//table colourConfig interface
			const colourConfig&  colour(const int id) const ;
			bool  has_colour(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<colourConfig>& colour() const;
			//::google::protobuf::RepeatedPtrField<colourConfig>* mutable_colour();

			//table TerritoryEffectConfig interface
			const TerritoryEffectConfig&  territoryeffect(const int id) const ;
			bool  has_territoryeffect(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<TerritoryEffectConfig>& territoryeffect() const;
			//::google::protobuf::RepeatedPtrField<TerritoryEffectConfig>* mutable_territoryeffect();

			//table DialogueConfig interface
			const DialogueConfig&  dialogue(const int id) const ;
			bool  has_dialogue(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<DialogueConfig>& dialogue() const;
			//::google::protobuf::RepeatedPtrField<DialogueConfig>* mutable_dialogue();

			//table GuideConfig interface
			const GuideConfig&  guide(const int id) const ;
			bool  has_guide(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<GuideConfig>& guide() const;
			//::google::protobuf::RepeatedPtrField<GuideConfig>* mutable_guide();

			//table DailyEventConfig interface
			const DailyEventConfig&  dailyevent(const int id) const ;
			bool  has_dailyevent(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<DailyEventConfig>& dailyevent() const;
			//::google::protobuf::RepeatedPtrField<DailyEventConfig>* mutable_dailyevent();

			//table BattleInitDataConfig interface
			const BattleInitDataConfig&  battleinitdata(const int id) const ;
			bool  has_battleinitdata(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<BattleInitDataConfig>& battleinitdata() const;
			//::google::protobuf::RepeatedPtrField<BattleInitDataConfig>* mutable_battleinitdata();

			//table StageConfig interface
			const StageConfig&  stage(const int id) const ;
			bool  has_stage(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<StageConfig>& stage() const;
			//::google::protobuf::RepeatedPtrField<StageConfig>* mutable_stage();

			//table SignupBonusConfig interface
			const SignupBonusConfig&  signupbonus(const int id) const ;
			bool  has_signupbonus(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<SignupBonusConfig>& signupbonus() const;
			//::google::protobuf::RepeatedPtrField<SignupBonusConfig>* mutable_signupbonus();

			//table Activity_stageConfig interface
			const Activity_stageConfig&  activity_stage(const int id) const ;
			bool  has_activity_stage(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<Activity_stageConfig>& activity_stage() const;
			//::google::protobuf::RepeatedPtrField<Activity_stageConfig>* mutable_activity_stage();

			//table SoundsConfig interface
			const SoundsConfig&  sounds(const int id) const ;
			bool  has_sounds(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<SoundsConfig>& sounds() const;
			//::google::protobuf::RepeatedPtrField<SoundsConfig>* mutable_sounds();

			//table CardLevelupExpConfig interface
			const CardLevelupExpConfig&  cardlevelupexp(const int id) const ;
			bool  has_cardlevelupexp(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<CardLevelupExpConfig>& cardlevelupexp() const;
			//::google::protobuf::RepeatedPtrField<CardLevelupExpConfig>* mutable_cardlevelupexp();

			//table DailyTaskInitDataConfig interface
			const DailyTaskInitDataConfig&  dailytaskinitdata(const int id) const ;
			bool  has_dailytaskinitdata(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<DailyTaskInitDataConfig>& dailytaskinitdata() const;
			//::google::protobuf::RepeatedPtrField<DailyTaskInitDataConfig>* mutable_dailytaskinitdata();

			//table GuideBonusConfig interface
			const GuideBonusConfig&  guidebonus(const int id) const ;
			bool  has_guidebonus(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<GuideBonusConfig>& guidebonus() const;
			//::google::protobuf::RepeatedPtrField<GuideBonusConfig>* mutable_guidebonus();

			//table PlistConfig interface
			const PlistConfig&  plist(const int id) const ;
			bool  has_plist(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<PlistConfig>& plist() const;
			//::google::protobuf::RepeatedPtrField<PlistConfig>* mutable_plist();

			//table descrptionConfig interface
			const descrptionConfig&  descrption(const int id) const ;
			bool  has_descrption(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<descrptionConfig>& descrption() const;
			//::google::protobuf::RepeatedPtrField<descrptionConfig>* mutable_descrption();

			//table PayChannelConfig interface
			const PayChannelConfig&  paychannel(const int id) const ;
			bool  has_paychannel(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<PayChannelConfig>& paychannel() const;
			//::google::protobuf::RepeatedPtrField<PayChannelConfig>* mutable_paychannel();

			//table ItemTypeConfig interface
			const ItemTypeConfig&  itemtype(const int id) const ;
			bool  has_itemtype(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<ItemTypeConfig>& itemtype() const;
			//::google::protobuf::RepeatedPtrField<ItemTypeConfig>* mutable_itemtype();

			//table CharLevelConfig interface
			const CharLevelConfig&  charlevel(const int id) const ;
			bool  has_charlevel(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<CharLevelConfig>& charlevel() const;
			//::google::protobuf::RepeatedPtrField<CharLevelConfig>* mutable_charlevel();

			//table RebateConfig interface
			const RebateConfig&  rebate(const int id) const ;
			bool  has_rebate(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<RebateConfig>& rebate() const;
			//::google::protobuf::RepeatedPtrField<RebateConfig>* mutable_rebate();

			//table PositionConfig interface
			const PositionConfig&  position(const int id) const ;
			bool  has_position(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<PositionConfig>& position() const;
			//::google::protobuf::RepeatedPtrField<PositionConfig>* mutable_position();

			//table rank_matchConfig interface
			const rank_matchConfig&  rank_match(const int id) const ;
			bool  has_rank_match(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<rank_matchConfig>& rank_match() const;
			//::google::protobuf::RepeatedPtrField<rank_matchConfig>* mutable_rank_match();

			//table System_noticeConfig interface
			const System_noticeConfig&  system_notice(const int id) const ;
			bool  has_system_notice(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<System_noticeConfig>& system_notice() const;
			//::google::protobuf::RepeatedPtrField<System_noticeConfig>* mutable_system_notice();

			//table Mission_InfoConfig interface
			const Mission_InfoConfig&  mission_info(const int id) const ;
			bool  has_mission_info(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<Mission_InfoConfig>& mission_info() const;
			//::google::protobuf::RepeatedPtrField<Mission_InfoConfig>* mutable_mission_info();

			//table Arena_RankConfig interface
			const Arena_RankConfig&  arena_rank(const int id) const ;
			bool  has_arena_rank(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<Arena_RankConfig>& arena_rank() const;
			//::google::protobuf::RepeatedPtrField<Arena_RankConfig>* mutable_arena_rank();

			//table CombineSummaryConfig interface
			const CombineSummaryConfig&  combinesummary(const int id) const ;
			bool  has_combinesummary(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<CombineSummaryConfig>& combinesummary() const;
			//::google::protobuf::RepeatedPtrField<CombineSummaryConfig>* mutable_combinesummary();

			//table PropConfig interface
			const PropConfig&  prop(const int id) const ;
			bool  has_prop(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<PropConfig>& prop() const;
			//::google::protobuf::RepeatedPtrField<PropConfig>* mutable_prop();

			//table DropConfig interface
			const DropConfig&  drop(const int id) const ;
			bool  has_drop(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<DropConfig>& drop() const;
			//::google::protobuf::RepeatedPtrField<DropConfig>* mutable_drop();

			//table CcbiAnimsConfig interface
			const CcbiAnimsConfig&  ccbianims(const int id) const ;
			bool  has_ccbianims(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<CcbiAnimsConfig>& ccbianims() const;
			//::google::protobuf::RepeatedPtrField<CcbiAnimsConfig>* mutable_ccbianims();

			//table activity_oddsConfig interface
			const activity_oddsConfig&  activity_odds(const int id) const ;
			bool  has_activity_odds(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<activity_oddsConfig>& activity_odds() const;
			//::google::protobuf::RepeatedPtrField<activity_oddsConfig>* mutable_activity_odds();

			//table store_itemConfig interface
			const store_itemConfig&  store_item(const int id) const ;
			bool  has_store_item(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<store_itemConfig>& store_item() const;
			//::google::protobuf::RepeatedPtrField<store_itemConfig>* mutable_store_item();

			//table SpriteConfig interface
			const SpriteConfig&  sprite(const int id) const ;
			bool  has_sprite(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<SpriteConfig>& sprite() const;
			//::google::protobuf::RepeatedPtrField<SpriteConfig>* mutable_sprite();

			//table BattleHelpConfig interface
			const BattleHelpConfig&  battlehelp(const int id) const ;
			bool  has_battlehelp(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<BattleHelpConfig>& battlehelp() const;
			//::google::protobuf::RepeatedPtrField<BattleHelpConfig>* mutable_battlehelp();

			//table StopWinBonusConfig interface
			const StopWinBonusConfig&  stopwinbonus(const int id) const ;
			bool  has_stopwinbonus(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<StopWinBonusConfig>& stopwinbonus() const;
			//::google::protobuf::RepeatedPtrField<StopWinBonusConfig>* mutable_stopwinbonus();

			//table CardSkillConfig interface
			const CardSkillConfig&  cardskill(const int id) const ;
			bool  has_cardskill(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<CardSkillConfig>& cardskill() const;
			//::google::protobuf::RepeatedPtrField<CardSkillConfig>* mutable_cardskill();

			//table SubBattleStoryConfig interface
			const SubBattleStoryConfig&  subbattlestory(const int id) const ;
			bool  has_subbattlestory(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<SubBattleStoryConfig>& subbattlestory() const;
			//::google::protobuf::RepeatedPtrField<SubBattleStoryConfig>* mutable_subbattlestory();

			//table MineCoinConfig interface
			const MineCoinConfig&  minecoin(const int id) const ;
			bool  has_minecoin(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<MineCoinConfig>& minecoin() const;
			//::google::protobuf::RepeatedPtrField<MineCoinConfig>* mutable_minecoin();

			//table Talent_initial_idConfig interface
			const Talent_initial_idConfig&  talent_initial_id(const int id) const ;
			bool  has_talent_initial_id(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<Talent_initial_idConfig>& talent_initial_id() const;
			//::google::protobuf::RepeatedPtrField<Talent_initial_idConfig>* mutable_talent_initial_id();

			//table char_friend_countConfig interface
			const char_friend_countConfig&  char_friend_count(const int id) const ;
			bool  has_char_friend_count(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<char_friend_countConfig>& char_friend_count() const;
			//::google::protobuf::RepeatedPtrField<char_friend_countConfig>* mutable_char_friend_count();

			//table Arena_BuffConfig interface
			const Arena_BuffConfig&  arena_buff(const int id) const ;
			bool  has_arena_buff(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<Arena_BuffConfig>& arena_buff() const;
			//::google::protobuf::RepeatedPtrField<Arena_BuffConfig>* mutable_arena_buff();

			//table CharacterInitDataConfig interface
			const CharacterInitDataConfig&  characterinitdata(const int id) const ;
			bool  has_characterinitdata(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<CharacterInitDataConfig>& characterinitdata() const;
			//::google::protobuf::RepeatedPtrField<CharacterInitDataConfig>* mutable_characterinitdata();

			//table AchievementConditionConfig interface
			const AchievementConditionConfig&  achievementcondition(const int id) const ;
			bool  has_achievementcondition(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<AchievementConditionConfig>& achievementcondition() const;
			//::google::protobuf::RepeatedPtrField<AchievementConditionConfig>* mutable_achievementcondition();

			//table MineInitDataConfig interface
			const MineInitDataConfig&  mineinitdata(const int id) const ;
			bool  has_mineinitdata(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<MineInitDataConfig>& mineinitdata() const;
			//::google::protobuf::RepeatedPtrField<MineInitDataConfig>* mutable_mineinitdata();

			//table CourseConfig interface
			const CourseConfig&  course(const int id) const ;
			bool  has_course(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<CourseConfig>& course() const;
			//::google::protobuf::RepeatedPtrField<CourseConfig>* mutable_course();

			//table activity_consume_moneyConfig interface
			const activity_consume_moneyConfig&  activity_consume_money(const int id) const ;
			bool  has_activity_consume_money(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<activity_consume_moneyConfig>& activity_consume_money() const;
			//::google::protobuf::RepeatedPtrField<activity_consume_moneyConfig>* mutable_activity_consume_money();

			//table RobotDataConfig interface
			const RobotDataConfig&  robotdata(const int id) const ;
			bool  has_robotdata(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<RobotDataConfig>& robotdata() const;
			//::google::protobuf::RepeatedPtrField<RobotDataConfig>* mutable_robotdata();

			//table ErnieBonusConfig interface
			const ErnieBonusConfig&  erniebonus(const int id) const ;
			bool  has_erniebonus(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<ErnieBonusConfig>& erniebonus() const;
			//::google::protobuf::RepeatedPtrField<ErnieBonusConfig>* mutable_erniebonus();

			//table CardSkillFixConfig interface
			const CardSkillFixConfig&  cardskillfix(const int id) const ;
			bool  has_cardskillfix(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<CardSkillFixConfig>& cardskillfix() const;
			//::google::protobuf::RepeatedPtrField<CardSkillFixConfig>* mutable_cardskillfix();

			//table VipInitDataConfig interface
			const VipInitDataConfig&  vipinitdata(const int id) const ;
			bool  has_vipinitdata(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<VipInitDataConfig>& vipinitdata() const;
			//::google::protobuf::RepeatedPtrField<VipInitDataConfig>* mutable_vipinitdata();

			//table SkillGrowConfig interface
			const SkillGrowConfig&  skillgrow(const int id) const ;
			bool  has_skillgrow(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<SkillGrowConfig>& skillgrow() const;
			//::google::protobuf::RepeatedPtrField<SkillGrowConfig>* mutable_skillgrow();

			//table storeConfig interface
			const storeConfig&  store(const int id) const ;
			bool  has_store(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<storeConfig>& store() const;
			//::google::protobuf::RepeatedPtrField<storeConfig>* mutable_store();

			//table Arena_TopConfig interface
			const Arena_TopConfig&  arena_top(const int id) const ;
			bool  has_arena_top(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<Arena_TopConfig>& arena_top() const;
			//::google::protobuf::RepeatedPtrField<Arena_TopConfig>* mutable_arena_top();

			//table FramesConfig interface
			const FramesConfig&  frames(const int id) const ;
			bool  has_frames(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<FramesConfig>& frames() const;
			//::google::protobuf::RepeatedPtrField<FramesConfig>* mutable_frames();

			//table AutoBattleInitDataConfig interface
			const AutoBattleInitDataConfig&  autobattleinitdata(const int id) const ;
			bool  has_autobattleinitdata(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<AutoBattleInitDataConfig>& autobattleinitdata() const;
			//::google::protobuf::RepeatedPtrField<AutoBattleInitDataConfig>* mutable_autobattleinitdata();

			//table AttributeTipsConfig interface
			const AttributeTipsConfig&  attributetips(const int id) const ;
			bool  has_attributetips(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<AttributeTipsConfig>& attributetips() const;
			//::google::protobuf::RepeatedPtrField<AttributeTipsConfig>* mutable_attributetips();

			//table LoginConfig interface
			const LoginConfig&  login(const int id) const ;
			bool  has_login(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<LoginConfig>& login() const;
			//::google::protobuf::RepeatedPtrField<LoginConfig>* mutable_login();

			//table AttrTypeConfig interface
			const AttrTypeConfig&  attrtype(const int id) const ;
			bool  has_attrtype(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<AttrTypeConfig>& attrtype() const;
			//::google::protobuf::RepeatedPtrField<AttrTypeConfig>* mutable_attrtype();

			//table TalentConfig interface
			const TalentConfig&  talent(const int id) const ;
			bool  has_talent(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<TalentConfig>& talent() const;
			//::google::protobuf::RepeatedPtrField<TalentConfig>* mutable_talent();

			//table descConfig interface
			const descConfig&  desc(const int id) const ;
			bool  has_desc(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<descConfig>& desc() const;
			//::google::protobuf::RepeatedPtrField<descConfig>* mutable_desc();

			//table VipAchievementConfig interface
			const VipAchievementConfig&  vipachievement(const int id) const ;
			bool  has_vipachievement(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<VipAchievementConfig>& vipachievement() const;
			//::google::protobuf::RepeatedPtrField<VipAchievementConfig>* mutable_vipachievement();

			//table Vip_privilegeConfig interface
			const Vip_privilegeConfig&  vip_privilege(const int id) const ;
			bool  has_vip_privilege(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<Vip_privilegeConfig>& vip_privilege() const;
			//::google::protobuf::RepeatedPtrField<Vip_privilegeConfig>* mutable_vip_privilege();

			//table PartucleAnimsConfig interface
			const PartucleAnimsConfig&  partucleanims(const int id) const ;
			bool  has_partucleanims(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<PartucleAnimsConfig>& partucleanims() const;
			//::google::protobuf::RepeatedPtrField<PartucleAnimsConfig>* mutable_partucleanims();

			//table PvpScoreBonusConfig interface
			const PvpScoreBonusConfig&  pvpscorebonus(const int id) const ;
			bool  has_pvpscorebonus(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<PvpScoreBonusConfig>& pvpscorebonus() const;
			//::google::protobuf::RepeatedPtrField<PvpScoreBonusConfig>* mutable_pvpscorebonus();

			//table LivenessConfig interface
			const LivenessConfig&  liveness(const int id) const ;
			bool  has_liveness(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<LivenessConfig>& liveness() const;
			//::google::protobuf::RepeatedPtrField<LivenessConfig>* mutable_liveness();

			//table WeekLivenessConfig interface
			const WeekLivenessConfig&  weekliveness(const int id) const ;
			bool  has_weekliveness(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<WeekLivenessConfig>& weekliveness() const;
			//::google::protobuf::RepeatedPtrField<WeekLivenessConfig>* mutable_weekliveness();

			//table rank_match_awardConfig interface
			const rank_match_awardConfig&  rank_match_award(const int id) const ;
			bool  has_rank_match_award(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<rank_match_awardConfig>& rank_match_award() const;
			//::google::protobuf::RepeatedPtrField<rank_match_awardConfig>* mutable_rank_match_award();

			//table BattleConfig interface
			const BattleConfig&  battle(const int id) const ;
			bool  has_battle(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<BattleConfig>& battle() const;
			//::google::protobuf::RepeatedPtrField<BattleConfig>* mutable_battle();

			//table BossInitDataConfig interface
			const BossInitDataConfig&  bossinitdata(const int id) const ;
			bool  has_bossinitdata(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<BossInitDataConfig>& bossinitdata() const;
			//::google::protobuf::RepeatedPtrField<BossInitDataConfig>* mutable_bossinitdata();

			//table Given_nameConfig interface
			const Given_nameConfig&  given_name(const int id) const ;
			bool  has_given_name(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<Given_nameConfig>& given_name() const;
			//::google::protobuf::RepeatedPtrField<Given_nameConfig>* mutable_given_name();

			//table LivenessBonusConfig interface
			const LivenessBonusConfig&  livenessbonus(const int id) const ;
			bool  has_livenessbonus(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<LivenessBonusConfig>& livenessbonus() const;
			//::google::protobuf::RepeatedPtrField<LivenessBonusConfig>* mutable_livenessbonus();

			//table MineCardCountConfig interface
			const MineCardCountConfig&  minecardcount(const int id) const ;
			bool  has_minecardcount(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<MineCardCountConfig>& minecardcount() const;
			//::google::protobuf::RepeatedPtrField<MineCardCountConfig>* mutable_minecardcount();

			//table CardGainExpConfig interface
			const CardGainExpConfig&  cardgainexp(const int id) const ;
			bool  has_cardgainexp(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<CardGainExpConfig>& cardgainexp() const;
			//::google::protobuf::RepeatedPtrField<CardGainExpConfig>* mutable_cardgainexp();

			//table UnitTypeConfig interface
			const UnitTypeConfig&  unittype(const int id) const ;
			bool  has_unittype(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<UnitTypeConfig>& unittype() const;
			//::google::protobuf::RepeatedPtrField<UnitTypeConfig>* mutable_unittype();

			//table ImmuneInitDataConfig interface
			const ImmuneInitDataConfig&  immuneinitdata(const int id) const ;
			bool  has_immuneinitdata(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<ImmuneInitDataConfig>& immuneinitdata() const;
			//::google::protobuf::RepeatedPtrField<ImmuneInitDataConfig>* mutable_immuneinitdata();

			//table PropTypeConfig interface
			const PropTypeConfig&  proptype(const int id) const ;
			bool  has_proptype(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<PropTypeConfig>& proptype() const;
			//::google::protobuf::RepeatedPtrField<PropTypeConfig>* mutable_proptype();

			//table TalentSkillConfig interface
			const TalentSkillConfig&  talentskill(const int id) const ;
			bool  has_talentskill(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<TalentSkillConfig>& talentskill() const;
			//::google::protobuf::RepeatedPtrField<TalentSkillConfig>* mutable_talentskill();

			//table PropGroupConfig interface
			const PropGroupConfig&  propgroup(const int id) const ;
			bool  has_propgroup(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<PropGroupConfig>& propgroup() const;
			//::google::protobuf::RepeatedPtrField<PropGroupConfig>* mutable_propgroup();

			//table mine_colourConfig interface
			const mine_colourConfig&  mine_colour(const int id) const ;
			bool  has_mine_colour(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<mine_colourConfig>& mine_colour() const;
			//::google::protobuf::RepeatedPtrField<mine_colourConfig>* mutable_mine_colour();

			//table ItemConfig interface
			const ItemConfig&  item(const int id) const ;
			bool  has_item(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<ItemConfig>& item() const;
			//::google::protobuf::RepeatedPtrField<ItemConfig>* mutable_item();

			//table UnitDamageIncConfig interface
			const UnitDamageIncConfig&  unitdamageinc(const int id) const ;
			bool  has_unitdamageinc(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<UnitDamageIncConfig>& unitdamageinc() const;
			//::google::protobuf::RepeatedPtrField<UnitDamageIncConfig>* mutable_unitdamageinc();

			//table WorldviewConfig interface
			const WorldviewConfig&  worldview(const int id) const ;
			bool  has_worldview(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<WorldviewConfig>& worldview() const;
			//::google::protobuf::RepeatedPtrField<WorldviewConfig>* mutable_worldview();

			//table WeChatConfig interface
			const WeChatConfig&  wechat(const int id) const ;
			bool  has_wechat(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<WeChatConfig>& wechat() const;
			//::google::protobuf::RepeatedPtrField<WeChatConfig>* mutable_wechat();

			//table VipSignUpConfig interface
			const VipSignUpConfig&  vipsignup(const int id) const ;
			bool  has_vipsignup(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<VipSignUpConfig>& vipsignup() const;
			//::google::protobuf::RepeatedPtrField<VipSignUpConfig>* mutable_vipsignup();

			//table CombineSkillEffectConfig interface
			const CombineSkillEffectConfig&  combineskilleffect(const int id) const ;
			bool  has_combineskilleffect(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<CombineSkillEffectConfig>& combineskilleffect() const;
			//::google::protobuf::RepeatedPtrField<CombineSkillEffectConfig>* mutable_combineskilleffect();

			//table chapter_awardConfig interface
			const chapter_awardConfig&  chapter_award(const int id) const ;
			bool  has_chapter_award(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<chapter_awardConfig>& chapter_award() const;
			//::google::protobuf::RepeatedPtrField<chapter_awardConfig>* mutable_chapter_award();

			//table ExchangeConfig interface
			const ExchangeConfig&  exchange(const int id) const ;
			bool  has_exchange(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<ExchangeConfig>& exchange() const;
			//::google::protobuf::RepeatedPtrField<ExchangeConfig>* mutable_exchange();

			//table TaskConfig interface
			const TaskConfig&  task(const int id) const ;
			bool  has_task(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<TaskConfig>& task() const;
			//::google::protobuf::RepeatedPtrField<TaskConfig>* mutable_task();

			//table UnitInitDataConfig interface
			const UnitInitDataConfig&  unitinitdata(const int id) const ;
			bool  has_unitinitdata(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<UnitInitDataConfig>& unitinitdata() const;
			//::google::protobuf::RepeatedPtrField<UnitInitDataConfig>* mutable_unitinitdata();

			//table EquipmentConfig interface
			const EquipmentConfig&  equipment(const int id) const ;
			bool  has_equipment(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<EquipmentConfig>& equipment() const;
			//::google::protobuf::RepeatedPtrField<EquipmentConfig>* mutable_equipment();

			//table HelpConfig interface
			const HelpConfig&  help(const int id) const ;
			bool  has_help(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<HelpConfig>& help() const;
			//::google::protobuf::RepeatedPtrField<HelpConfig>* mutable_help();

			//table activity_commodityConfig interface
			const activity_commodityConfig&  activity_commodity(const int id) const ;
			bool  has_activity_commodity(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<activity_commodityConfig>& activity_commodity() const;
			//::google::protobuf::RepeatedPtrField<activity_commodityConfig>* mutable_activity_commodity();

			//table UnitEffectConfig interface
			const UnitEffectConfig&  uniteffect(const int id) const ;
			bool  has_uniteffect(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<UnitEffectConfig>& uniteffect() const;
			//::google::protobuf::RepeatedPtrField<UnitEffectConfig>* mutable_uniteffect();

			//table FamilyConfig interface
			const FamilyConfig&  family(const int id) const ;
			bool  has_family(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<FamilyConfig>& family() const;
			//::google::protobuf::RepeatedPtrField<FamilyConfig>* mutable_family();

			//table AchievementConfig interface
			const AchievementConfig&  achievement(const int id) const ;
			bool  has_achievement(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<AchievementConfig>& achievement() const;
			//::google::protobuf::RepeatedPtrField<AchievementConfig>* mutable_achievement();

			//table Activity_RebateConfig interface
			const Activity_RebateConfig&  activity_rebate(const int id) const ;
			bool  has_activity_rebate(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<Activity_RebateConfig>& activity_rebate() const;
			//::google::protobuf::RepeatedPtrField<Activity_RebateConfig>* mutable_activity_rebate();

			//table RankConfig interface
			const RankConfig&  rank(const int id) const ;
			bool  has_rank(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<RankConfig>& rank() const;
			//::google::protobuf::RepeatedPtrField<RankConfig>* mutable_rank();

			//table TerritoryConfig interface
			const TerritoryConfig&  territory(const int id) const ;
			bool  has_territory(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<TerritoryConfig>& territory() const;
			//::google::protobuf::RepeatedPtrField<TerritoryConfig>* mutable_territory();

			//table Stage_GuideConfig interface
			const Stage_GuideConfig&  stage_guide(const int id) const ;
			bool  has_stage_guide(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<Stage_GuideConfig>& stage_guide() const;
			//::google::protobuf::RepeatedPtrField<Stage_GuideConfig>* mutable_stage_guide();

			//table ActivityConfig interface
			const ActivityConfig&  activity(const int id) const ;
			bool  has_activity(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<ActivityConfig>& activity() const;
			//::google::protobuf::RepeatedPtrField<ActivityConfig>* mutable_activity();

			//table UnitGrownConfig interface
			const UnitGrownConfig&  unitgrown(const int id) const ;
			bool  has_unitgrown(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<UnitGrownConfig>& unitgrown() const;
			//::google::protobuf::RepeatedPtrField<UnitGrownConfig>* mutable_unitgrown();

			//table Bank_levelup_timeConfig interface
			const Bank_levelup_timeConfig&  bank_levelup_time(const int id) const ;
			bool  has_bank_levelup_time(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<Bank_levelup_timeConfig>& bank_levelup_time() const;
			//::google::protobuf::RepeatedPtrField<Bank_levelup_timeConfig>* mutable_bank_levelup_time();

			//table SkeletonAnimsConfig interface
			const SkeletonAnimsConfig&  skeletonanims(const int id) const ;
			bool  has_skeletonanims(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<SkeletonAnimsConfig>& skeletonanims() const;
			//::google::protobuf::RepeatedPtrField<SkeletonAnimsConfig>* mutable_skeletonanims();

			//table ConditionConfig interface
			const ConditionConfig&  condition(const int id) const ;
			bool  has_condition(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<ConditionConfig>& condition() const;
			//::google::protobuf::RepeatedPtrField<ConditionConfig>* mutable_condition();

			//table EquipmentCombineConfig interface
			const EquipmentCombineConfig&  equipmentcombine(const int id) const ;
			bool  has_equipmentcombine(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<EquipmentCombineConfig>& equipmentcombine() const;
			//::google::protobuf::RepeatedPtrField<EquipmentCombineConfig>* mutable_equipmentcombine();

			//table BattleThemeConfig interface
			const BattleThemeConfig&  battletheme(const int id) const ;
			bool  has_battletheme(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<BattleThemeConfig>& battletheme() const;
			//::google::protobuf::RepeatedPtrField<BattleThemeConfig>* mutable_battletheme();

			//table CostConfig interface
			const CostConfig&  cost(const int id) const ;
			bool  has_cost(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<CostConfig>& cost() const;
			//::google::protobuf::RepeatedPtrField<CostConfig>* mutable_cost();

			//table EquipmentImproveCostConfig interface
			const EquipmentImproveCostConfig&  equipmentimprovecost(const int id) const ;
			bool  has_equipmentimprovecost(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<EquipmentImproveCostConfig>& equipmentimprovecost() const;
			//::google::protobuf::RepeatedPtrField<EquipmentImproveCostConfig>* mutable_equipmentimprovecost();

			//table JianghunConfig interface
			const JianghunConfig&  jianghun(const int id) const ;
			bool  has_jianghun(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<JianghunConfig>& jianghun() const;
			//::google::protobuf::RepeatedPtrField<JianghunConfig>* mutable_jianghun();

			//table CardCombineConfig interface
			const CardCombineConfig&  cardcombine(const int id) const ;
			bool  has_cardcombine(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<CardCombineConfig>& cardcombine() const;
			//::google::protobuf::RepeatedPtrField<CardCombineConfig>* mutable_cardcombine();

			//table StageConditionConfig interface
			const StageConditionConfig&  stagecondition(const int id) const ;
			bool  has_stagecondition(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<StageConditionConfig>& stagecondition() const;
			//::google::protobuf::RepeatedPtrField<StageConditionConfig>* mutable_stagecondition();

			//table CardSellConfig interface
			const CardSellConfig&  cardsell(const int id) const ;
			bool  has_cardsell(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<CardSellConfig>& cardsell() const;
			//::google::protobuf::RepeatedPtrField<CardSellConfig>* mutable_cardsell();

			//table InitialAchievementConfig interface
			const InitialAchievementConfig&  initialachievement(const int id) const ;
			bool  has_initialachievement(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<InitialAchievementConfig>& initialachievement() const;
			//::google::protobuf::RepeatedPtrField<InitialAchievementConfig>* mutable_initialachievement();

			//table MoneytreeConfig interface
			const MoneytreeConfig&  moneytree(const int id) const ;
			bool  has_moneytree(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<MoneytreeConfig>& moneytree() const;
			//::google::protobuf::RepeatedPtrField<MoneytreeConfig>* mutable_moneytree();

			//table StatusEffectConfig interface
			const StatusEffectConfig&  statuseffect(const int id) const ;
			bool  has_statuseffect(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<StatusEffectConfig>& statuseffect() const;
			//::google::protobuf::RepeatedPtrField<StatusEffectConfig>* mutable_statuseffect();

			//table award_codeConfig interface
			const award_codeConfig&  award_code(const int id) const ;
			bool  has_award_code(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<award_codeConfig>& award_code() const;
			//::google::protobuf::RepeatedPtrField<award_codeConfig>* mutable_award_code();

			//table SkillExpConfig interface
			const SkillExpConfig&  skillexp(const int id) const ;
			bool  has_skillexp(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<SkillExpConfig>& skillexp() const;
			//::google::protobuf::RepeatedPtrField<SkillExpConfig>* mutable_skillexp();

			//table friend_leadershipConfig interface
			const friend_leadershipConfig&  friend_leadership(const int id) const ;
			bool  has_friend_leadership(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<friend_leadershipConfig>& friend_leadership() const;
			//::google::protobuf::RepeatedPtrField<friend_leadershipConfig>* mutable_friend_leadership();

			//table Arena_RewardConfig interface
			const Arena_RewardConfig&  arena_reward(const int id) const ;
			bool  has_arena_reward(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<Arena_RewardConfig>& arena_reward() const;
			//::google::protobuf::RepeatedPtrField<Arena_RewardConfig>* mutable_arena_reward();

			//table SkillEffectConfig interface
			const SkillEffectConfig&  skilleffect(const int id) const ;
			bool  has_skilleffect(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<SkillEffectConfig>& skilleffect() const;
			//::google::protobuf::RepeatedPtrField<SkillEffectConfig>* mutable_skilleffect();

			//table SkillBuffConfig interface
			const SkillBuffConfig&  skillbuff(const int id) const ;
			bool  has_skillbuff(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<SkillBuffConfig>& skillbuff() const;
			//::google::protobuf::RepeatedPtrField<SkillBuffConfig>* mutable_skillbuff();

			//table SequenceAnimsConfig interface
			const SequenceAnimsConfig&  sequenceanims(const int id) const ;
			bool  has_sequenceanims(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<SequenceAnimsConfig>& sequenceanims() const;
			//::google::protobuf::RepeatedPtrField<SequenceAnimsConfig>* mutable_sequenceanims();

			//table PvpRobRateConfig interface
			const PvpRobRateConfig&  pvprobrate(const int id) const ;
			bool  has_pvprobrate(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<PvpRobRateConfig>& pvprobrate() const;
			//::google::protobuf::RepeatedPtrField<PvpRobRateConfig>* mutable_pvprobrate();

			//table TotalDamageBonusConfig interface
			const TotalDamageBonusConfig&  totaldamagebonus(const int id) const ;
			bool  has_totaldamagebonus(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<TotalDamageBonusConfig>& totaldamagebonus() const;
			//::google::protobuf::RepeatedPtrField<TotalDamageBonusConfig>* mutable_totaldamagebonus();

			//table NewcardConfig interface
			const NewcardConfig&  newcard(const int id) const ;
			bool  has_newcard(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<NewcardConfig>& newcard() const;
			//::google::protobuf::RepeatedPtrField<NewcardConfig>* mutable_newcard();

			//table MonsterConfig interface
			const MonsterConfig&  monster(const int id) const ;
			bool  has_monster(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<MonsterConfig>& monster() const;
			//::google::protobuf::RepeatedPtrField<MonsterConfig>* mutable_monster();

			//table BonusEmailConfig interface
			const BonusEmailConfig&  bonusemail(const int id) const ;
			bool  has_bonusemail(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<BonusEmailConfig>& bonusemail() const;
			//::google::protobuf::RepeatedPtrField<BonusEmailConfig>* mutable_bonusemail();

			//table ItemCombineConfig interface
			const ItemCombineConfig&  itemcombine(const int id) const ;
			bool  has_itemcombine(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<ItemCombineConfig>& itemcombine() const;
			//::google::protobuf::RepeatedPtrField<ItemCombineConfig>* mutable_itemcombine();

			//table help_noticeConfig interface
			const help_noticeConfig&  help_notice(const int id) const ;
			bool  has_help_notice(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<help_noticeConfig>& help_notice() const;
			//::google::protobuf::RepeatedPtrField<help_noticeConfig>* mutable_help_notice();

	};
}}
#endif
