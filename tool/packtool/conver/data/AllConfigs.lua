--Filename:AllConfigs.lua
--Version:  1.0
--Created time: 07/03/15 18:32:44
local configs={}
local function registerPb(path)
	local addr = io.open(path,"rb")
	local buffer = addr:read "*a"
	addr:close()
	protobuf.register(buffer)
end
configs.init = function(folder,data_file)
	registerPb(string.format("%s/proto/ConfigTypeGroup.pb",folder))
	registerPb(string.format("%s/proto/ChapterConfig.pb",folder))
	registerPb(string.format("%s/proto/MonsterGroupConfig.pb",folder))
	registerPb(string.format("%s/proto/rank_match_robotConfig.pb",folder))
	registerPb(string.format("%s/proto/UnitConfig.pb",folder))
	registerPb(string.format("%s/proto/Talent_initConfig.pb",folder))
	registerPb(string.format("%s/proto/XilianConfig.pb",folder))
	registerPb(string.format("%s/proto/SystemOpenConfig.pb",folder))
	registerPb(string.format("%s/proto/colourConfig.pb",folder))
	registerPb(string.format("%s/proto/TerritoryEffectConfig.pb",folder))
	registerPb(string.format("%s/proto/DialogueConfig.pb",folder))
	registerPb(string.format("%s/proto/GuideConfig.pb",folder))
	registerPb(string.format("%s/proto/DailyEventConfig.pb",folder))
	registerPb(string.format("%s/proto/BattleInitDataConfig.pb",folder))
	registerPb(string.format("%s/proto/StageConfig.pb",folder))
	registerPb(string.format("%s/proto/SignupBonusConfig.pb",folder))
	registerPb(string.format("%s/proto/Activity_stageConfig.pb",folder))
	registerPb(string.format("%s/proto/SoundsConfig.pb",folder))
	registerPb(string.format("%s/proto/CardLevelupExpConfig.pb",folder))
	registerPb(string.format("%s/proto/DailyTaskInitDataConfig.pb",folder))
	registerPb(string.format("%s/proto/GuideBonusConfig.pb",folder))
	registerPb(string.format("%s/proto/PlistConfig.pb",folder))
	registerPb(string.format("%s/proto/descrptionConfig.pb",folder))
	registerPb(string.format("%s/proto/PayChannelConfig.pb",folder))
	registerPb(string.format("%s/proto/ItemTypeConfig.pb",folder))
	registerPb(string.format("%s/proto/CharLevelConfig.pb",folder))
	registerPb(string.format("%s/proto/RebateConfig.pb",folder))
	registerPb(string.format("%s/proto/PositionConfig.pb",folder))
	registerPb(string.format("%s/proto/rank_matchConfig.pb",folder))
	registerPb(string.format("%s/proto/System_noticeConfig.pb",folder))
	registerPb(string.format("%s/proto/Mission_InfoConfig.pb",folder))
	registerPb(string.format("%s/proto/Arena_RankConfig.pb",folder))
	registerPb(string.format("%s/proto/CombineSummaryConfig.pb",folder))
	registerPb(string.format("%s/proto/PropConfig.pb",folder))
	registerPb(string.format("%s/proto/DropConfig.pb",folder))
	registerPb(string.format("%s/proto/CcbiAnimsConfig.pb",folder))
	registerPb(string.format("%s/proto/activity_oddsConfig.pb",folder))
	registerPb(string.format("%s/proto/store_itemConfig.pb",folder))
	registerPb(string.format("%s/proto/SpriteConfig.pb",folder))
	registerPb(string.format("%s/proto/BattleHelpConfig.pb",folder))
	registerPb(string.format("%s/proto/StopWinBonusConfig.pb",folder))
	registerPb(string.format("%s/proto/CardSkillConfig.pb",folder))
	registerPb(string.format("%s/proto/SubBattleStoryConfig.pb",folder))
	registerPb(string.format("%s/proto/MineCoinConfig.pb",folder))
	registerPb(string.format("%s/proto/Talent_initial_idConfig.pb",folder))
	registerPb(string.format("%s/proto/char_friend_countConfig.pb",folder))
	registerPb(string.format("%s/proto/Arena_BuffConfig.pb",folder))
	registerPb(string.format("%s/proto/CharacterInitDataConfig.pb",folder))
	registerPb(string.format("%s/proto/AchievementConditionConfig.pb",folder))
	registerPb(string.format("%s/proto/MineInitDataConfig.pb",folder))
	registerPb(string.format("%s/proto/CourseConfig.pb",folder))
	registerPb(string.format("%s/proto/activity_consume_moneyConfig.pb",folder))
	registerPb(string.format("%s/proto/RobotDataConfig.pb",folder))
	registerPb(string.format("%s/proto/ErnieBonusConfig.pb",folder))
	registerPb(string.format("%s/proto/CardSkillFixConfig.pb",folder))
	registerPb(string.format("%s/proto/VipInitDataConfig.pb",folder))
	registerPb(string.format("%s/proto/SkillGrowConfig.pb",folder))
	registerPb(string.format("%s/proto/storeConfig.pb",folder))
	registerPb(string.format("%s/proto/Arena_TopConfig.pb",folder))
	registerPb(string.format("%s/proto/FramesConfig.pb",folder))
	registerPb(string.format("%s/proto/AutoBattleInitDataConfig.pb",folder))
	registerPb(string.format("%s/proto/AttributeTipsConfig.pb",folder))
	registerPb(string.format("%s/proto/LoginConfig.pb",folder))
	registerPb(string.format("%s/proto/AttrTypeConfig.pb",folder))
	registerPb(string.format("%s/proto/TalentConfig.pb",folder))
	registerPb(string.format("%s/proto/descConfig.pb",folder))
	registerPb(string.format("%s/proto/VipAchievementConfig.pb",folder))
	registerPb(string.format("%s/proto/Vip_privilegeConfig.pb",folder))
	registerPb(string.format("%s/proto/PartucleAnimsConfig.pb",folder))
	registerPb(string.format("%s/proto/PvpScoreBonusConfig.pb",folder))
	registerPb(string.format("%s/proto/LivenessConfig.pb",folder))
	registerPb(string.format("%s/proto/WeekLivenessConfig.pb",folder))
	registerPb(string.format("%s/proto/rank_match_awardConfig.pb",folder))
	registerPb(string.format("%s/proto/BattleConfig.pb",folder))
	registerPb(string.format("%s/proto/BossInitDataConfig.pb",folder))
	registerPb(string.format("%s/proto/Given_nameConfig.pb",folder))
	registerPb(string.format("%s/proto/LivenessBonusConfig.pb",folder))
	registerPb(string.format("%s/proto/MineCardCountConfig.pb",folder))
	registerPb(string.format("%s/proto/CardGainExpConfig.pb",folder))
	registerPb(string.format("%s/proto/UnitTypeConfig.pb",folder))
	registerPb(string.format("%s/proto/ImmuneInitDataConfig.pb",folder))
	registerPb(string.format("%s/proto/PropTypeConfig.pb",folder))
	registerPb(string.format("%s/proto/TalentSkillConfig.pb",folder))
	registerPb(string.format("%s/proto/PropGroupConfig.pb",folder))
	registerPb(string.format("%s/proto/mine_colourConfig.pb",folder))
	registerPb(string.format("%s/proto/ItemConfig.pb",folder))
	registerPb(string.format("%s/proto/UnitDamageIncConfig.pb",folder))
	registerPb(string.format("%s/proto/WorldviewConfig.pb",folder))
	registerPb(string.format("%s/proto/WeChatConfig.pb",folder))
	registerPb(string.format("%s/proto/VipSignUpConfig.pb",folder))
	registerPb(string.format("%s/proto/CombineSkillEffectConfig.pb",folder))
	registerPb(string.format("%s/proto/chapter_awardConfig.pb",folder))
	registerPb(string.format("%s/proto/ExchangeConfig.pb",folder))
	registerPb(string.format("%s/proto/TaskConfig.pb",folder))
	registerPb(string.format("%s/proto/UnitInitDataConfig.pb",folder))
	registerPb(string.format("%s/proto/EquipmentConfig.pb",folder))
	registerPb(string.format("%s/proto/HelpConfig.pb",folder))
	registerPb(string.format("%s/proto/activity_commodityConfig.pb",folder))
	registerPb(string.format("%s/proto/UnitEffectConfig.pb",folder))
	registerPb(string.format("%s/proto/FamilyConfig.pb",folder))
	registerPb(string.format("%s/proto/AchievementConfig.pb",folder))
	registerPb(string.format("%s/proto/Activity_RebateConfig.pb",folder))
	registerPb(string.format("%s/proto/RankConfig.pb",folder))
	registerPb(string.format("%s/proto/TerritoryConfig.pb",folder))
	registerPb(string.format("%s/proto/Stage_GuideConfig.pb",folder))
	registerPb(string.format("%s/proto/ActivityConfig.pb",folder))
	registerPb(string.format("%s/proto/UnitGrownConfig.pb",folder))
	registerPb(string.format("%s/proto/Bank_levelup_timeConfig.pb",folder))
	registerPb(string.format("%s/proto/SkeletonAnimsConfig.pb",folder))
	registerPb(string.format("%s/proto/ConditionConfig.pb",folder))
	registerPb(string.format("%s/proto/EquipmentCombineConfig.pb",folder))
	registerPb(string.format("%s/proto/BattleThemeConfig.pb",folder))
	registerPb(string.format("%s/proto/CostConfig.pb",folder))
	registerPb(string.format("%s/proto/EquipmentImproveCostConfig.pb",folder))
	registerPb(string.format("%s/proto/JianghunConfig.pb",folder))
	registerPb(string.format("%s/proto/CardCombineConfig.pb",folder))
	registerPb(string.format("%s/proto/StageConditionConfig.pb",folder))
	registerPb(string.format("%s/proto/CardSellConfig.pb",folder))
	registerPb(string.format("%s/proto/InitialAchievementConfig.pb",folder))
	registerPb(string.format("%s/proto/MoneytreeConfig.pb",folder))
	registerPb(string.format("%s/proto/StatusEffectConfig.pb",folder))
	registerPb(string.format("%s/proto/award_codeConfig.pb",folder))
	registerPb(string.format("%s/proto/SkillExpConfig.pb",folder))
	registerPb(string.format("%s/proto/friend_leadershipConfig.pb",folder))
	registerPb(string.format("%s/proto/Arena_RewardConfig.pb",folder))
	registerPb(string.format("%s/proto/SkillEffectConfig.pb",folder))
	registerPb(string.format("%s/proto/SkillBuffConfig.pb",folder))
	registerPb(string.format("%s/proto/SequenceAnimsConfig.pb",folder))
	registerPb(string.format("%s/proto/PvpRobRateConfig.pb",folder))
	registerPb(string.format("%s/proto/TotalDamageBonusConfig.pb",folder))
	registerPb(string.format("%s/proto/NewcardConfig.pb",folder))
	registerPb(string.format("%s/proto/MonsterConfig.pb",folder))
	registerPb(string.format("%s/proto/BonusEmailConfig.pb",folder))
	registerPb(string.format("%s/proto/ItemCombineConfig.pb",folder))
	registerPb(string.format("%s/proto/help_noticeConfig.pb",folder))
	registerPb(string.format("%s/proto/GameConfig.pb",folder))
	local path = string.format("%s/%s",folder,data_file)
	local in_data = assert(io.open(path,"rb"))
	local buffer = in_data:read "*a"
	local data=protobuf.decode("DianShiTech.Config.GameConfig", buffer)
	--table Achievement
	configs.achievement={}
	for k, v in pairs(data.achievement) do
		configs.achievement[v.id]=v
	end
	--table AchievementCondition
	configs.achievementcondition={}
	for k, v in pairs(data.achievementcondition) do
		configs.achievementcondition[v.id]=v
	end
	--table Activity
	configs.activity={}
	for k, v in pairs(data.activity) do
		configs.activity[v.id]=v
	end
	--table activity_commodity
	configs.activity_commodity={}
	for k, v in pairs(data.activity_commodity) do
		configs.activity_commodity[v.id]=v
	end
	--table activity_consume_money
	configs.activity_consume_money={}
	for k, v in pairs(data.activity_consume_money) do
		configs.activity_consume_money[v.id]=v
	end
	--table activity_odds
	configs.activity_odds={}
	for k, v in pairs(data.activity_odds) do
		configs.activity_odds[v.id]=v
	end
	--table Activity_Rebate
	configs.activity_rebate={}
	for k, v in pairs(data.activity_rebate) do
		configs.activity_rebate[v.id]=v
	end
	--table Activity_stage
	configs.activity_stage={}
	for k, v in pairs(data.activity_stage) do
		configs.activity_stage[v.id]=v
	end
	--table Arena_Buff
	configs.arena_buff={}
	for k, v in pairs(data.arena_buff) do
		configs.arena_buff[v.id]=v
	end
	--table Arena_Rank
	configs.arena_rank={}
	for k, v in pairs(data.arena_rank) do
		configs.arena_rank[v.id]=v
	end
	--table Arena_Reward
	configs.arena_reward={}
	for k, v in pairs(data.arena_reward) do
		configs.arena_reward[v.id]=v
	end
	--table Arena_Top
	configs.arena_top={}
	for k, v in pairs(data.arena_top) do
		configs.arena_top[v.id]=v
	end
	--table AttributeTips
	configs.attributetips={}
	for k, v in pairs(data.attributetips) do
		configs.attributetips[v.id]=v
	end
	--table AttrType
	configs.attrtype={}
	for k, v in pairs(data.attrtype) do
		configs.attrtype[v.id]=v
	end
	--table AutoBattleInitData
	configs.autobattleinitdata={}
	for k, v in pairs(data.autobattleinitdata) do
		configs.autobattleinitdata[v.id]=v
	end
	--table award_code
	configs.award_code={}
	for k, v in pairs(data.award_code) do
		configs.award_code[v.id]=v
	end
	--table Bank_levelup_time
	configs.bank_levelup_time={}
	for k, v in pairs(data.bank_levelup_time) do
		configs.bank_levelup_time[v.id]=v
	end
	--table Battle
	configs.battle={}
	for k, v in pairs(data.battle) do
		configs.battle[v.id]=v
	end
	--table BattleHelp
	configs.battlehelp={}
	for k, v in pairs(data.battlehelp) do
		configs.battlehelp[v.id]=v
	end
	--table BattleInitData
	configs.battleinitdata={}
	for k, v in pairs(data.battleinitdata) do
		configs.battleinitdata[v.id]=v
	end
	--table BattleTheme
	configs.battletheme={}
	for k, v in pairs(data.battletheme) do
		configs.battletheme[v.id]=v
	end
	--table BonusEmail
	configs.bonusemail={}
	for k, v in pairs(data.bonusemail) do
		configs.bonusemail[v.id]=v
	end
	--table BossInitData
	configs.bossinitdata={}
	for k, v in pairs(data.bossinitdata) do
		configs.bossinitdata[v.id]=v
	end
	--table CardCombine
	configs.cardcombine={}
	for k, v in pairs(data.cardcombine) do
		configs.cardcombine[v.id]=v
	end
	--table CardGainExp
	configs.cardgainexp={}
	for k, v in pairs(data.cardgainexp) do
		configs.cardgainexp[v.id]=v
	end
	--table CardLevelupExp
	configs.cardlevelupexp={}
	for k, v in pairs(data.cardlevelupexp) do
		configs.cardlevelupexp[v.id]=v
	end
	--table CardSell
	configs.cardsell={}
	for k, v in pairs(data.cardsell) do
		configs.cardsell[v.id]=v
	end
	--table CardSkill
	configs.cardskill={}
	for k, v in pairs(data.cardskill) do
		configs.cardskill[v.id]=v
	end
	--table CardSkillFix
	configs.cardskillfix={}
	for k, v in pairs(data.cardskillfix) do
		configs.cardskillfix[v.id]=v
	end
	--table CcbiAnims
	configs.ccbianims={}
	for k, v in pairs(data.ccbianims) do
		configs.ccbianims[v.id]=v
	end
	--table Chapter
	configs.chapter={}
	for k, v in pairs(data.chapter) do
		configs.chapter[v.id]=v
	end
	--table chapter_award
	configs.chapter_award={}
	for k, v in pairs(data.chapter_award) do
		configs.chapter_award[v.id]=v
	end
	--table char_friend_count
	configs.char_friend_count={}
	for k, v in pairs(data.char_friend_count) do
		configs.char_friend_count[v.id]=v
	end
	--table CharacterInitData
	configs.characterinitdata={}
	for k, v in pairs(data.characterinitdata) do
		configs.characterinitdata[v.id]=v
	end
	--table CharLevel
	configs.charlevel={}
	for k, v in pairs(data.charlevel) do
		configs.charlevel[v.id]=v
	end
	--table colour
	configs.colour={}
	for k, v in pairs(data.colour) do
		configs.colour[v.id]=v
	end
	--table CombineSkillEffect
	configs.combineskilleffect={}
	for k, v in pairs(data.combineskilleffect) do
		configs.combineskilleffect[v.id]=v
	end
	--table CombineSummary
	configs.combinesummary={}
	for k, v in pairs(data.combinesummary) do
		configs.combinesummary[v.id]=v
	end
	--table Condition
	configs.condition={}
	for k, v in pairs(data.condition) do
		configs.condition[v.id]=v
	end
	--table Cost
	configs.cost={}
	for k, v in pairs(data.cost) do
		configs.cost[v.id]=v
	end
	--table Course
	configs.course={}
	for k, v in pairs(data.course) do
		configs.course[v.id]=v
	end
	--table DailyEvent
	configs.dailyevent={}
	for k, v in pairs(data.dailyevent) do
		configs.dailyevent[v.id]=v
	end
	--table DailyTaskInitData
	configs.dailytaskinitdata={}
	for k, v in pairs(data.dailytaskinitdata) do
		configs.dailytaskinitdata[v.id]=v
	end
	--table desc
	configs.desc={}
	for k, v in pairs(data.desc) do
		configs.desc[v.id]=v
	end
	--table descrption
	configs.descrption={}
	for k, v in pairs(data.descrption) do
		configs.descrption[v.id]=v
	end
	--table Dialogue
	configs.dialogue={}
	for k, v in pairs(data.dialogue) do
		configs.dialogue[v.id]=v
	end
	--table Drop
	configs.drop={}
	for k, v in pairs(data.drop) do
		configs.drop[v.id]=v
	end
	--table Equipment
	configs.equipment={}
	for k, v in pairs(data.equipment) do
		configs.equipment[v.id]=v
	end
	--table EquipmentCombine
	configs.equipmentcombine={}
	for k, v in pairs(data.equipmentcombine) do
		configs.equipmentcombine[v.id]=v
	end
	--table EquipmentImproveCost
	configs.equipmentimprovecost={}
	for k, v in pairs(data.equipmentimprovecost) do
		configs.equipmentimprovecost[v.id]=v
	end
	--table ErnieBonus
	configs.erniebonus={}
	for k, v in pairs(data.erniebonus) do
		configs.erniebonus[v.id]=v
	end
	--table Exchange
	configs.exchange={}
	for k, v in pairs(data.exchange) do
		configs.exchange[v.id]=v
	end
	--table Family
	configs.family={}
	for k, v in pairs(data.family) do
		configs.family[v.id]=v
	end
	--table Frames
	configs.frames={}
	for k, v in pairs(data.frames) do
		configs.frames[v.id]=v
	end
	--table friend_leadership
	configs.friend_leadership={}
	for k, v in pairs(data.friend_leadership) do
		configs.friend_leadership[v.id]=v
	end
	--table Given_name
	configs.given_name={}
	for k, v in pairs(data.given_name) do
		configs.given_name[v.id]=v
	end
	--table Guide
	configs.guide={}
	for k, v in pairs(data.guide) do
		configs.guide[v.id]=v
	end
	--table GuideBonus
	configs.guidebonus={}
	for k, v in pairs(data.guidebonus) do
		configs.guidebonus[v.id]=v
	end
	--table Help
	configs.help={}
	for k, v in pairs(data.help) do
		configs.help[v.id]=v
	end
	--table help_notice
	configs.help_notice={}
	for k, v in pairs(data.help_notice) do
		configs.help_notice[v.id]=v
	end
	--table ImmuneInitData
	configs.immuneinitdata={}
	for k, v in pairs(data.immuneinitdata) do
		configs.immuneinitdata[v.id]=v
	end
	--table InitialAchievement
	configs.initialachievement={}
	for k, v in pairs(data.initialachievement) do
		configs.initialachievement[v.id]=v
	end
	--table Item
	configs.item={}
	for k, v in pairs(data.item) do
		configs.item[v.id]=v
	end
	--table ItemCombine
	configs.itemcombine={}
	for k, v in pairs(data.itemcombine) do
		configs.itemcombine[v.id]=v
	end
	--table ItemType
	configs.itemtype={}
	for k, v in pairs(data.itemtype) do
		configs.itemtype[v.id]=v
	end
	--table Jianghun
	configs.jianghun={}
	for k, v in pairs(data.jianghun) do
		configs.jianghun[v.id]=v
	end
	--table Liveness
	configs.liveness={}
	for k, v in pairs(data.liveness) do
		configs.liveness[v.id]=v
	end
	--table LivenessBonus
	configs.livenessbonus={}
	for k, v in pairs(data.livenessbonus) do
		configs.livenessbonus[v.id]=v
	end
	--table Login
	configs.login={}
	for k, v in pairs(data.login) do
		configs.login[v.id]=v
	end
	--table mine_colour
	configs.mine_colour={}
	for k, v in pairs(data.mine_colour) do
		configs.mine_colour[v.id]=v
	end
	--table MineCardCount
	configs.minecardcount={}
	for k, v in pairs(data.minecardcount) do
		configs.minecardcount[v.id]=v
	end
	--table MineCoin
	configs.minecoin={}
	for k, v in pairs(data.minecoin) do
		configs.minecoin[v.id]=v
	end
	--table MineInitData
	configs.mineinitdata={}
	for k, v in pairs(data.mineinitdata) do
		configs.mineinitdata[v.id]=v
	end
	--table Mission_Info
	configs.mission_info={}
	for k, v in pairs(data.mission_info) do
		configs.mission_info[v.id]=v
	end
	--table Moneytree
	configs.moneytree={}
	for k, v in pairs(data.moneytree) do
		configs.moneytree[v.id]=v
	end
	--table Monster
	configs.monster={}
	for k, v in pairs(data.monster) do
		configs.monster[v.id]=v
	end
	--table MonsterGroup
	configs.monstergroup={}
	for k, v in pairs(data.monstergroup) do
		configs.monstergroup[v.id]=v
	end
	--table Newcard
	configs.newcard={}
	for k, v in pairs(data.newcard) do
		configs.newcard[v.id]=v
	end
	--table PartucleAnims
	configs.partucleanims={}
	for k, v in pairs(data.partucleanims) do
		configs.partucleanims[v.id]=v
	end
	--table PayChannel
	configs.paychannel={}
	for k, v in pairs(data.paychannel) do
		configs.paychannel[v.id]=v
	end
	--table Plist
	configs.plist={}
	for k, v in pairs(data.plist) do
		configs.plist[v.id]=v
	end
	--table Position
	configs.position={}
	for k, v in pairs(data.position) do
		configs.position[v.id]=v
	end
	--table Prop
	configs.prop={}
	for k, v in pairs(data.prop) do
		configs.prop[v.id]=v
	end
	--table PropGroup
	configs.propgroup={}
	for k, v in pairs(data.propgroup) do
		configs.propgroup[v.id]=v
	end
	--table PropType
	configs.proptype={}
	for k, v in pairs(data.proptype) do
		configs.proptype[v.id]=v
	end
	--table PvpRobRate
	configs.pvprobrate={}
	for k, v in pairs(data.pvprobrate) do
		configs.pvprobrate[v.id]=v
	end
	--table PvpScoreBonus
	configs.pvpscorebonus={}
	for k, v in pairs(data.pvpscorebonus) do
		configs.pvpscorebonus[v.id]=v
	end
	--table Rank
	configs.rank={}
	for k, v in pairs(data.rank) do
		configs.rank[v.id]=v
	end
	--table rank_match
	configs.rank_match={}
	for k, v in pairs(data.rank_match) do
		configs.rank_match[v.id]=v
	end
	--table rank_match_award
	configs.rank_match_award={}
	for k, v in pairs(data.rank_match_award) do
		configs.rank_match_award[v.id]=v
	end
	--table rank_match_robot
	configs.rank_match_robot={}
	for k, v in pairs(data.rank_match_robot) do
		configs.rank_match_robot[v.id]=v
	end
	--table Rebate
	configs.rebate={}
	for k, v in pairs(data.rebate) do
		configs.rebate[v.id]=v
	end
	--table RobotData
	configs.robotdata={}
	for k, v in pairs(data.robotdata) do
		configs.robotdata[v.id]=v
	end
	--table SequenceAnims
	configs.sequenceanims={}
	for k, v in pairs(data.sequenceanims) do
		configs.sequenceanims[v.id]=v
	end
	--table SignupBonus
	configs.signupbonus={}
	for k, v in pairs(data.signupbonus) do
		configs.signupbonus[v.id]=v
	end
	--table SkeletonAnims
	configs.skeletonanims={}
	for k, v in pairs(data.skeletonanims) do
		configs.skeletonanims[v.id]=v
	end
	--table SkillBuff
	configs.skillbuff={}
	for k, v in pairs(data.skillbuff) do
		configs.skillbuff[v.id]=v
	end
	--table SkillEffect
	configs.skilleffect={}
	for k, v in pairs(data.skilleffect) do
		configs.skilleffect[v.id]=v
	end
	--table SkillExp
	configs.skillexp={}
	for k, v in pairs(data.skillexp) do
		configs.skillexp[v.id]=v
	end
	--table SkillGrow
	configs.skillgrow={}
	for k, v in pairs(data.skillgrow) do
		configs.skillgrow[v.id]=v
	end
	--table Sounds
	configs.sounds={}
	for k, v in pairs(data.sounds) do
		configs.sounds[v.id]=v
	end
	--table Sprite
	configs.sprite={}
	for k, v in pairs(data.sprite) do
		configs.sprite[v.id]=v
	end
	--table Stage
	configs.stage={}
	for k, v in pairs(data.stage) do
		configs.stage[v.id]=v
	end
	--table Stage_Guide
	configs.stage_guide={}
	for k, v in pairs(data.stage_guide) do
		configs.stage_guide[v.id]=v
	end
	--table StageCondition
	configs.stagecondition={}
	for k, v in pairs(data.stagecondition) do
		configs.stagecondition[v.id]=v
	end
	--table StatusEffect
	configs.statuseffect={}
	for k, v in pairs(data.statuseffect) do
		configs.statuseffect[v.id]=v
	end
	--table StopWinBonus
	configs.stopwinbonus={}
	for k, v in pairs(data.stopwinbonus) do
		configs.stopwinbonus[v.id]=v
	end
	--table store
	configs.store={}
	for k, v in pairs(data.store) do
		configs.store[v.id]=v
	end
	--table store_item
	configs.store_item={}
	for k, v in pairs(data.store_item) do
		configs.store_item[v.id]=v
	end
	--table SubBattleStory
	configs.subbattlestory={}
	for k, v in pairs(data.subbattlestory) do
		configs.subbattlestory[v.id]=v
	end
	--table System_notice
	configs.system_notice={}
	for k, v in pairs(data.system_notice) do
		configs.system_notice[v.id]=v
	end
	--table SystemOpen
	configs.systemopen={}
	for k, v in pairs(data.systemopen) do
		configs.systemopen[v.id]=v
	end
	--table Talent
	configs.talent={}
	for k, v in pairs(data.talent) do
		configs.talent[v.id]=v
	end
	--table Talent_init
	configs.talent_init={}
	for k, v in pairs(data.talent_init) do
		configs.talent_init[v.id]=v
	end
	--table Talent_initial_id
	configs.talent_initial_id={}
	for k, v in pairs(data.talent_initial_id) do
		configs.talent_initial_id[v.id]=v
	end
	--table TalentSkill
	configs.talentskill={}
	for k, v in pairs(data.talentskill) do
		configs.talentskill[v.id]=v
	end
	--table Task
	configs.task={}
	for k, v in pairs(data.task) do
		configs.task[v.id]=v
	end
	--table Territory
	configs.territory={}
	for k, v in pairs(data.territory) do
		configs.territory[v.id]=v
	end
	--table TerritoryEffect
	configs.territoryeffect={}
	for k, v in pairs(data.territoryeffect) do
		configs.territoryeffect[v.id]=v
	end
	--table TotalDamageBonus
	configs.totaldamagebonus={}
	for k, v in pairs(data.totaldamagebonus) do
		configs.totaldamagebonus[v.id]=v
	end
	--table Unit
	configs.unit={}
	for k, v in pairs(data.unit) do
		configs.unit[v.id]=v
	end
	--table UnitDamageInc
	configs.unitdamageinc={}
	for k, v in pairs(data.unitdamageinc) do
		configs.unitdamageinc[v.id]=v
	end
	--table UnitEffect
	configs.uniteffect={}
	for k, v in pairs(data.uniteffect) do
		configs.uniteffect[v.id]=v
	end
	--table UnitGrown
	configs.unitgrown={}
	for k, v in pairs(data.unitgrown) do
		configs.unitgrown[v.id]=v
	end
	--table UnitInitData
	configs.unitinitdata={}
	for k, v in pairs(data.unitinitdata) do
		configs.unitinitdata[v.id]=v
	end
	--table UnitType
	configs.unittype={}
	for k, v in pairs(data.unittype) do
		configs.unittype[v.id]=v
	end
	--table Vip_privilege
	configs.vip_privilege={}
	for k, v in pairs(data.vip_privilege) do
		configs.vip_privilege[v.id]=v
	end
	--table VipAchievement
	configs.vipachievement={}
	for k, v in pairs(data.vipachievement) do
		configs.vipachievement[v.id]=v
	end
	--table VipInitData
	configs.vipinitdata={}
	for k, v in pairs(data.vipinitdata) do
		configs.vipinitdata[v.id]=v
	end
	--table VipSignUp
	configs.vipsignup={}
	for k, v in pairs(data.vipsignup) do
		configs.vipsignup[v.id]=v
	end
	--table WeChat
	configs.wechat={}
	for k, v in pairs(data.wechat) do
		configs.wechat[v.id]=v
	end
	--table WeekLiveness
	configs.weekliveness={}
	for k, v in pairs(data.weekliveness) do
		configs.weekliveness[v.id]=v
	end
	--table Worldview
	configs.worldview={}
	for k, v in pairs(data.worldview) do
		configs.worldview[v.id]=v
	end
	--table Xilian
	configs.xilian={}
	for k, v in pairs(data.xilian) do
		configs.xilian[v.id]=v
	end
	configs["data_version"]=data.version
	in_data:close()
	return configs
end
return configs
