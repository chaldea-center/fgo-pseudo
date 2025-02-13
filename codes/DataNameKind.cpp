void __fastcall DataNameKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDB4D5 & 1) == 0 )
  {
    sub_1C21E38(&DataNameKind_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_1C21E38(&StringLiteral_22106/*"mstEventTradeGoods"*/);
    sub_1C21E38(&StringLiteral_24862/*"userGameCommon"*/);
    sub_1C21E38(&StringLiteral_22066/*"mstEventMissionConditionDetail"*/);
    sub_1C21E38(&StringLiteral_22306/*"mstTreasureBoxGift"*/);
    sub_1C21E38(&StringLiteral_22000/*"mstCommandCodeComment"*/);
    sub_1C21E38(&StringLiteral_22062/*"mstEventMissionAction"*/);
    sub_1C21E38(&StringLiteral_24828/*"userEventAlloutBattle"*/);
    sub_1C21E38(&StringLiteral_22028/*"mstEventBonusFilterGroupInfo"*/);
    sub_1C21E38(&StringLiteral_24879/*"userRecommendFollower"*/);
    sub_1C21E38(&StringLiteral_22200/*"mstQuestReleaseOverwrite"*/);
    sub_1C21E38(&StringLiteral_22165/*"mstMapGimmickRelease"*/);
    sub_1C21E38(&StringLiteral_22133/*"mstGachaExtraGift"*/);
    sub_1C21E38(&StringLiteral_22575/*"npcSvtFollowerIndividuality"*/);
    sub_1C21E38(&StringLiteral_22030/*"mstEventBossStatusUi"*/);
    sub_1C21E38(&StringLiteral_24888/*"userSvtAppendPassiveSkillLv"*/);
    sub_1C21E38(&StringLiteral_21984/*"mstClassRelation"*/);
    sub_1C21E38(&StringLiteral_21939/*"mstAiAct"*/);
    sub_1C21E38(&StringLiteral_22252/*"mstSvtAnimationOverwrite"*/);
    sub_1C21E38(&StringLiteral_22202/*"mstQuestRestriction"*/);
    sub_1C21E38(&StringLiteral_22011/*"mstCv"*/);
    sub_1C21E38(&StringLiteral_24833/*"userEventDigging"*/);
    sub_1C21E38(&StringLiteral_24294/*"tblUserGame"*/);
    sub_1C21E38(&StringLiteral_22041/*"mstEventDataLostBattle"*/);
    sub_1C21E38(&StringLiteral_22031/*"mstEventBuddyPoint"*/);
    sub_1C21E38(&StringLiteral_21958/*"mstBgmRelease"*/);
    sub_1C21E38(&StringLiteral_22279/*"mstSvtMaterialTd"*/);
    sub_1C21E38(&StringLiteral_22005/*"mstCommonRelease"*/);
    sub_1C21E38(&StringLiteral_22118/*"mstFriendship"*/);
    sub_1C21E38(&StringLiteral_24814/*"userClassBoardSquare"*/);
    sub_1C21E38(&StringLiteral_22009/*"mstConstantLong"*/);
    sub_1C21E38(&StringLiteral_21983/*"mstClassBoardSquare"*/);
    sub_1C21E38(&StringLiteral_24892/*"userSvtCommandCode"*/);
    sub_1C21E38(&StringLiteral_22185/*"mstQuestBehavior"*/);
    sub_1C21E38(&StringLiteral_22153/*"mstItemDropEfficiency"*/);
    sub_1C21E38(&StringLiteral_22278/*"mstSvtMaterialFolder"*/);
    sub_1C21E38(&StringLiteral_22353/*"mstWarBoardStagePieceDetail"*/);
    sub_1C21E38(&StringLiteral_22107/*"mstEventTradePickup"*/);
    sub_1C21E38(&StringLiteral_22029/*"mstEventBonusFilterGroupMember"*/);
    sub_1C21E38(&StringLiteral_22189/*"mstQuestHint"*/);
    sub_1C21E38(&StringLiteral_22003/*"mstCommandSpell"*/);
    sub_1C21E38(&StringLiteral_21937/*"mstAdCheckPoint"*/);
    sub_1C21E38(&StringLiteral_22181/*"mstPrivilege"*/);
    sub_1C21E38(&StringLiteral_21965/*"mstBoardMessageRelease"*/);
    sub_1C21E38(&StringLiteral_22139/*"mstGachaRelease"*/);
    sub_1C21E38(&StringLiteral_24824/*"userDeleteReservation"*/);
    sub_1C21E38(&StringLiteral_22305/*"mstTreasureBox"*/);
    sub_1C21E38(&StringLiteral_24865/*"userImagePartsGroup"*/);
    sub_1C21E38(&StringLiteral_22019/*"mstEquipExp"*/);
    sub_1C21E38(&StringLiteral_22026/*"mstEventBoardGameTokenReward"*/);
    sub_1C21E38(&StringLiteral_22259/*"mstSvtCoin"*/);
    sub_1C21E38(&StringLiteral_22290/*"mstSvtScriptMultiple"*/);
    sub_1C21E38(&StringLiteral_22171/*"mstMaterialFolder"*/);
    sub_1C21E38(&StringLiteral_22037/*"mstEventCombineCostume"*/);
    sub_1C21E38(&StringLiteral_22187/*"mstQuestDateRange"*/);
    sub_1C21E38(&StringLiteral_22349/*"mstWarBoardStageBoss"*/);
    sub_1C21E38(&StringLiteral_21972/*"mstBuffConvert"*/);
    sub_1C21E38(&StringLiteral_22211/*"mstQuestUseItemPickup"*/);
    sub_1C21E38(&StringLiteral_21946/*"mstAuraEffect"*/);
    sub_1C21E38(&StringLiteral_22084/*"mstEventRaceResult"*/);
    sub_1C21E38(&StringLiteral_22224/*"mstSetItem"*/);
    sub_1C21E38(&StringLiteral_22572/*"npcSvtDisplayTypeDetail"*/);
    sub_1C21E38(&StringLiteral_22214/*"mstRecover"*/);
    sub_1C21E38(&StringLiteral_22099/*"mstEventStatusQuest"*/);
    sub_1C21E38(&StringLiteral_24830/*"userEventCooltimeReward"*/);
    sub_1C21E38(&StringLiteral_22180/*"mstPaymentLimit"*/);
    sub_1C21E38(&StringLiteral_22327/*"mstWarBoardActionTrendGroup"*/);
    sub_1C21E38(&StringLiteral_24878/*"userQuestRoute"*/);
    sub_1C21E38(&StringLiteral_22238/*"mstSkillLv"*/);
    sub_1C21E38(&StringLiteral_22271/*"mstSvtGroup"*/);
    sub_1C21E38(&StringLiteral_22314/*"mstVoiceClosedMessage"*/);
    sub_1C21E38(&StringLiteral_22049/*"mstEventExpeditionPiece"*/);
    sub_1C21E38(&StringLiteral_22184/*"mstQuestAutoOrganizationAdjust"*/);
    sub_1C21E38(&StringLiteral_22280/*"mstSvtMultiPortrait"*/);
    sub_1C21E38(&StringLiteral_22052/*"mstEventFilter"*/);
    sub_1C21E38(&StringLiteral_22173/*"mstMissionNaviQuest"*/);
    sub_1C21E38(&StringLiteral_24880/*"userRecommendSupport"*/);
    sub_1C21E38(&StringLiteral_24867/*"userItem"*/);
    sub_1C21E38(&StringLiteral_22048/*"mstEventExpedition"*/);
    sub_1C21E38(&StringLiteral_22083/*"mstEventRace"*/);
    sub_1C21E38(&StringLiteral_22203/*"mstQuestRestrictionInfo"*/);
    sub_1C21E38(&StringLiteral_22201/*"mstQuestReset"*/);
    sub_1C21E38(&StringLiteral_24834/*"userEventExpedition"*/);
    sub_1C21E38(&StringLiteral_22055/*"mstEventFortificationSvt"*/);
    sub_1C21E38(&StringLiteral_22354/*"mstWarBoardStageReinforcements"*/);
    sub_1C21E38(&StringLiteral_21978/*"mstClassBoardBase"*/);
    sub_1C21E38(&StringLiteral_22015/*"mstEnemyMaster"*/);
    sub_1C21E38(&StringLiteral_21947/*"mstAuraEffectPosOverwrite"*/);
    sub_1C21E38(&StringLiteral_22218/*"mstRestrictionSlot"*/);
    sub_1C21E38(&StringLiteral_22141/*"mstGachaSub"*/);
    sub_1C21E38(&StringLiteral_22103/*"mstEventSvtPointRank"*/);
    sub_1C21E38(&StringLiteral_22076/*"mstEventPointGroup"*/);
    sub_1C21E38(&StringLiteral_22023/*"mstEventAdd"*/);
    sub_1C21E38(&StringLiteral_22017/*"mstEquip"*/);
    sub_1C21E38(&StringLiteral_22088/*"mstEventRecipeGift"*/);
    sub_1C21E38(&StringLiteral_22301/*"mstTelop"*/);
    sub_1C21E38(&StringLiteral_24890/*"userSvtCollection"*/);
    sub_1C21E38(&StringLiteral_24840/*"userEventMissionFix"*/);
    sub_1C21E38(&StringLiteral_22216/*"mstRestrictionBase"*/);
    sub_1C21E38(&StringLiteral_22303/*"mstTips"*/);
    sub_1C21E38(&StringLiteral_21948/*"mstBankShop"*/);
    sub_1C21E38(&StringLiteral_22114/*"mstEventVoicePlay"*/);
    sub_1C21E38(&StringLiteral_22210/*"mstQuestUseItemGroup"*/);
    sub_1C21E38(&StringLiteral_22054/*"mstEventFortificationDetail"*/);
    sub_1C21E38(&StringLiteral_24847/*"userEventSuperBoss"*/);
    sub_1C21E38(&StringLiteral_22053/*"mstEventFortification"*/);
    sub_1C21E38(&StringLiteral_22101/*"mstEventSvt"*/);
    sub_1C21E38(&StringLiteral_22318/*"mstVoicePlayGroup"*/);
    sub_1C21E38(&StringLiteral_24832/*"userEventDeck"*/);
    sub_1C21E38(&StringLiteral_22240/*"mstSpotAdd"*/);
    sub_1C21E38(&StringLiteral_21996/*"mstCombineSkill"*/);
    sub_1C21E38(&StringLiteral_22346/*"mstWarBoardSquare"*/);
    sub_1C21E38(&StringLiteral_21973/*"mstBuffTypeDetail"*/);
    sub_1C21E38(&StringLiteral_22324/*"mstWarBoardActionPointClass"*/);
    sub_1C21E38(&StringLiteral_22222/*"mstSelectBonus"*/);
    sub_1C21E38(&StringLiteral_22293/*"mstSvtTransform"*/);
    sub_1C21E38(&StringLiteral_24871/*"userPresentBox"*/);
    sub_1C21E38(&StringLiteral_24848/*"userEventSvtPoint"*/);
    sub_1C21E38(&StringLiteral_24423/*"totalEventPoint"*/);
    sub_1C21E38(&StringLiteral_21998/*"mstCommandCardRankParam"*/);
    sub_1C21E38(&StringLiteral_22329/*"mstWarBoardCommonRelease"*/);
    sub_1C21E38(&StringLiteral_22250/*"mstSvt"*/);
    sub_1C21E38(&StringLiteral_24881/*"userShop"*/);
    sub_1C21E38(&StringLiteral_22024/*"mstEventBoardGameCell"*/);
    sub_1C21E38(&StringLiteral_22082/*"mstEventQuestCooltime"*/);
    sub_1C21E38(&StringLiteral_22124/*"mstFuncTypeDetail"*/);
    sub_1C21E38(&StringLiteral_22247/*"mstStatusEffectPosOverwrite"*/);
    sub_1C21E38(&StringLiteral_19456/*"eventBoostItemUsed"*/);
    sub_1C21E38(&StringLiteral_22227/*"mstShopDetail"*/);
    sub_1C21E38(&StringLiteral_22151/*"mstIndividualityPolicy"*/);
    sub_1C21E38(&StringLiteral_22157/*"mstMapButton"*/);
    sub_1C21E38(&StringLiteral_22356/*"mstWarBoardTacticalTrend"*/);
    sub_1C21E38(&StringLiteral_22249/*"mstSubEquip"*/);
    sub_1C21E38(&StringLiteral_22243/*"mstSpotPath"*/);
    sub_1C21E38(&StringLiteral_22221/*"mstRoadmap"*/);
    sub_1C21E38(&StringLiteral_21993/*"mstCombineMaterial"*/);
    sub_1C21E38(&StringLiteral_21992/*"mstCombineLimitRelease"*/);
    sub_1C21E38(&StringLiteral_22310/*"mstTreasureDeviceLv"*/);
    sub_1C21E38(&StringLiteral_22104/*"mstEventTower"*/);
    sub_1C21E38(&StringLiteral_22232/*"mstSkill"*/);
    sub_1C21E38(&StringLiteral_24866/*"userInterruptionQuest"*/);
    sub_1C21E38(&StringLiteral_22282/*"mstSvtPassiveSkill"*/);
    sub_1C21E38(&StringLiteral_22295/*"mstSvtTreasureDeviceAdd"*/);
    sub_1C21E38(&StringLiteral_21962/*"mstBlankEarthSpotAdd"*/);
    sub_1C21E38(&StringLiteral_24875/*"userQuest"*/);
    sub_1C21E38(&StringLiteral_22065/*"mstEventMissionCondition"*/);
    sub_1C21E38(&StringLiteral_22323/*"mstWarBoardActionPoint"*/);
    sub_1C21E38(&StringLiteral_24850/*"userExternalPaymentStone"*/);
    sub_1C21E38(&StringLiteral_21986/*"mstClosedMessage"*/);
    sub_1C21E38(&StringLiteral_22091/*"mstEventRewardExtra"*/);
    sub_1C21E38(&StringLiteral_22074/*"mstEventPointActivity"*/);
    sub_1C21E38(&StringLiteral_22081/*"mstEventQuest"*/);
    sub_1C21E38(&StringLiteral_21954/*"mstBattleMessageGroup"*/);
    sub_1C21E38(&StringLiteral_24999/*"viewQuestInfo"*/);
    sub_1C21E38(&StringLiteral_22286/*"mstSvtProfilePush"*/);
    sub_1C21E38(&StringLiteral_22309/*"mstTreasureDeviceDetail"*/);
    sub_1C21E38(&StringLiteral_24812/*"userBlacklist"*/);
    sub_1C21E38(&StringLiteral_22047/*"mstEventEquipSkillRelease"*/);
    sub_1C21E38(&StringLiteral_24815/*"userCoinRoom"*/);
    sub_1C21E38(&StringLiteral_22010/*"mstConstantStr"*/);
    sub_1C21E38(&StringLiteral_22248/*"mstStoneShop"*/);
    sub_1C21E38(&StringLiteral_22167/*"mstMapUpdateSchedule"*/);
    sub_1C21E38(&StringLiteral_22304/*"mstTotalLogin"*/);
    sub_1C21E38(&StringLiteral_22178/*"mstOpeningMovie"*/);
    sub_1C21E38(&StringLiteral_22008/*"mstConstant"*/);
    sub_1C21E38(&StringLiteral_22209/*"mstQuestSpotRelease"*/);
    sub_1C21E38(&StringLiteral_22001/*"mstCommandCodeSkill"*/);
    sub_1C21E38(&StringLiteral_22182/*"mstQuest"*/);
    sub_1C21E38(&StringLiteral_22299/*"mstSvtVoicePattern"*/);
    sub_1C21E38(&StringLiteral_22110/*"mstEventTutorialCond"*/);
    sub_1C21E38(&StringLiteral_21960/*"mstBlankEarthGimmickAdd"*/);
    sub_1C21E38(&StringLiteral_22322/*"mstWarBoard"*/);
    sub_1C21E38(&StringLiteral_22085/*"mstEventRaid"*/);
    sub_1C21E38(&StringLiteral_21957/*"mstBgm"*/);
    sub_1C21E38(&StringLiteral_22097/*"mstEventScriptRelease"*/);
    sub_1C21E38(&StringLiteral_24874/*"userProfile"*/);
    sub_1C21E38(&StringLiteral_22064/*"mstEventMissionAdd"*/);
    sub_1C21E38(&StringLiteral_22319/*"mstVoiceRelease"*/);
    sub_1C21E38(&StringLiteral_22198/*"mstQuestRandomGroup"*/);
    sub_1C21E38(&StringLiteral_22174/*"mstMissionNaviTransition"*/);
    sub_1C21E38(&StringLiteral_22229/*"mstShopRelease"*/);
    sub_1C21E38(&StringLiteral_24897/*"userSvtStorage"*/);
    sub_1C21E38(&StringLiteral_22137/*"mstGachaPickupCollateral"*/);
    sub_1C21E38(&StringLiteral_22212/*"mstRecommendAdviceMessage"*/);
    sub_1C21E38(&StringLiteral_22213/*"mstRecommendSupportQuest"*/);
    sub_1C21E38(&StringLiteral_24887/*"userSvtAppendPassiveSkill"*/);
    sub_1C21E38(&StringLiteral_22251/*"mstSvtAdd"*/);
    sub_1C21E38(&StringLiteral_22360/*"mstWarMessage"*/);
    sub_1C21E38(&StringLiteral_21963/*"mstBlankEarthSpotNavimenu"*/);
    sub_1C21E38(&StringLiteral_21952/*"mstBattleMasterImage"*/);
    sub_1C21E38(&StringLiteral_22234/*"mstSkillDetail"*/);
    sub_1C21E38(&StringLiteral_22168/*"mstMasterMission"*/);
    sub_1C21E38(&StringLiteral_22283/*"mstSvtPassiveSkillRelease"*/);
    sub_1C21E38(&StringLiteral_22239/*"mstSpot"*/);
    sub_1C21E38(&StringLiteral_22061/*"mstEventMission"*/);
    sub_1C21E38(&StringLiteral_21995/*"mstCombineQpSvtEquip"*/);
    sub_1C21E38(&StringLiteral_22073/*"mstEventPoint"*/);
    sub_1C21E38(&StringLiteral_22095/*"mstEventRewardSet"*/);
    sub_1C21E38(&StringLiteral_22070/*"mstEventPanelMapDetail"*/);
    sub_1C21E38(&StringLiteral_22257/*"mstSvtCardAdd"*/);
    sub_1C21E38(&StringLiteral_22156/*"mstMap"*/);
    sub_1C21E38(&StringLiteral_22044/*"mstEventDigging"*/);
    sub_1C21E38(&StringLiteral_24856/*"userGacha"*/);
    sub_1C21E38(&StringLiteral_22199/*"mstQuestRelease"*/);
    sub_1C21E38(&StringLiteral_22043/*"mstEventDetail"*/);
    sub_1C21E38(&StringLiteral_22149/*"mstImagePartsGroup"*/);
    sub_1C21E38(&StringLiteral_22166/*"mstMapLayer"*/);
    sub_1C21E38(&StringLiteral_22333/*"mstWarBoardFutureActionTrend"*/);
    sub_1C21E38(&StringLiteral_22237/*"mstSkillIndividuality"*/);
    sub_1C21E38(&StringLiteral_21969/*"mstBoxGachaBaseDetail"*/);
    sub_1C21E38(&StringLiteral_24293/*"tblFriend"*/);
    sub_1C21E38(&StringLiteral_17444/*"beforeBirthDay"*/);
    sub_1C21E38(&StringLiteral_22059/*"mstEventItemDisplayRelease"*/);
    sub_1C21E38(&StringLiteral_17377/*"battle"*/);
    sub_1C21E38(&StringLiteral_22228/*"mstShopGroup"*/);
    sub_1C21E38(&StringLiteral_21945/*"mstAttriRelation"*/);
    sub_1C21E38(&StringLiteral_24816/*"userCommandCode"*/);
    sub_1C21E38(&StringLiteral_22035/*"mstEventCampaignRelease"*/);
    sub_1C21E38(&StringLiteral_22268/*"mstSvtFilter"*/);
    sub_1C21E38(&StringLiteral_22197/*"mstQuestRacePoint"*/);
    sub_1C21E38(&StringLiteral_22108/*"mstEventTradeStore"*/);
    sub_1C21E38(&StringLiteral_22753/*"otherUserGame"*/);
    sub_1C21E38(&StringLiteral_21956/*"mstBattlePointPhase"*/);
    sub_1C21E38(&StringLiteral_22058/*"mstEventItemDisplayGroup"*/);
    sub_1C21E38(&StringLiteral_21975/*"mstCard"*/);
    sub_1C21E38(&StringLiteral_21959/*"mstBlankEarthGimmick"*/);
    sub_1C21E38(&StringLiteral_21953/*"mstBattleMessage"*/);
    sub_1C21E38(&StringLiteral_22219/*"mstRestrictionSlotDetail"*/);
    sub_1C21E38(&StringLiteral_21949/*"mstBanner"*/);
    sub_1C21E38(&StringLiteral_22016/*"mstEnemyMasterBattle"*/);
    sub_1C21E38(&StringLiteral_22057/*"mstEventItemDisplay"*/);
    sub_1C21E38(&StringLiteral_21974/*"mstCampaignInfo"*/);
    sub_1C21E38(&StringLiteral_22294/*"mstSvtTreasureDevice"*/);
    sub_1C21E38(&StringLiteral_22292/*"mstSvtSkillRelease"*/);
    sub_1C21E38(&StringLiteral_22007/*"mstCompleteMission"*/);
    sub_1C21E38(&StringLiteral_21990/*"mstCombineLimit"*/);
    sub_1C21E38(&StringLiteral_21967/*"mstBoxGacha"*/);
    sub_1C21E38(&StringLiteral_22316/*"mstVoiceMaterialCond"*/);
    sub_1C21E38(&StringLiteral_22126/*"mstGachaAdjustAdd"*/);
    sub_1C21E38(&StringLiteral_22140/*"mstGachaStoryAdjust"*/);
    sub_1C21E38(&StringLiteral_22312/*"mstUserExp"*/);
    sub_1C21E38(&StringLiteral_22115/*"mstExcludeMotionCond"*/);
    sub_1C21E38(&StringLiteral_22335/*"mstWarBoardItem"*/);
    sub_1C21E38(&StringLiteral_22018/*"mstEquipAdd"*/);
    sub_1C21E38(&StringLiteral_22012/*"mstDialogMessage"*/);
    sub_1C21E38(&StringLiteral_22574/*"npcSvtFollower"*/);
    sub_1C21E38(&StringLiteral_21951/*"mstBattleBg"*/);
    sub_1C21E38(&StringLiteral_21979/*"mstClassBoardClass"*/);
    sub_1C21E38(&StringLiteral_24841/*"userEventPoint"*/);
    sub_1C21E38(&StringLiteral_22258/*"mstSvtChange"*/);
    sub_1C21E38(&StringLiteral_22334/*"mstWarBoardIndividualityClass"*/);
    sub_1C21E38(&StringLiteral_22128/*"mstGachaBaseCollateral"*/);
    sub_1C21E38(&StringLiteral_22195/*"mstQuestPhasePresent"*/);
    sub_1C21E38(&StringLiteral_22230/*"mstShopReset"*/);
    sub_1C21E38(&StringLiteral_22068/*"mstEventMural"*/);
    sub_1C21E38(&StringLiteral_22136/*"mstGachaPickup"*/);
    sub_1C21E38(&StringLiteral_22154/*"mstItemSelect"*/);
    sub_1C21E38(&StringLiteral_22272/*"mstSvtIndividuality"*/);
    sub_1C21E38(&StringLiteral_24827/*"userEvent"*/);
    sub_1C21E38(&StringLiteral_22357/*"mstWarBoardTreasure"*/);
    sub_1C21E38(&StringLiteral_22277/*"mstSvtLvDetail"*/);
    sub_1C21E38(&StringLiteral_22342/*"mstWarBoardRatingOffset"*/);
    sub_1C21E38(&StringLiteral_22192/*"mstQuestPhaseDetail"*/);
    sub_1C21E38(&StringLiteral_22226/*"mstShopAction"*/);
    sub_1C21E38(&StringLiteral_22175/*"mstMyroomAdd"*/);
    sub_1C21E38(&StringLiteral_22102/*"mstEventSvtFatigue"*/);
    sub_1C21E38(&StringLiteral_22050/*"mstEventFactory"*/);
    sub_1C21E38(&StringLiteral_24857/*"userGachaDrawHistory"*/);
    sub_1C21E38(&StringLiteral_24852/*"userFollower"*/);
    sub_1C21E38(&StringLiteral_22343/*"mstWarBoardRatingOffsetGroup"*/);
    sub_1C21E38(&StringLiteral_24889/*"userSvtCoin"*/);
    sub_1C21E38(&StringLiteral_22096/*"mstEventScript"*/);
    sub_1C21E38(&StringLiteral_22291/*"mstSvtSkill"*/);
    sub_1C21E38(&StringLiteral_22242/*"mstSpotLayer"*/);
    sub_1C21E38(&StringLiteral_24891/*"userSvtCommandCard"*/);
    sub_1C21E38(&StringLiteral_24876/*"userQuestInfo"*/);
    sub_1C21E38(&StringLiteral_22013/*"mstEffect"*/);
    sub_1C21E38(&StringLiteral_22152/*"mstItem"*/);
    sub_1C21E38(&StringLiteral_22223/*"mstSelectBonusBase"*/);
    sub_1C21E38(&StringLiteral_22077/*"mstEventPointGroupAdd"*/);
    sub_1C21E38(&StringLiteral_22190/*"mstQuestMessage"*/);
    sub_1C21E38(&StringLiteral_22569/*"npcFollowerRelease"*/);
    sub_1C21E38(&StringLiteral_22121/*"mstFuncCategory"*/);
    sub_1C21E38(&StringLiteral_22336/*"mstWarBoardMessage"*/);
    sub_1C21E38(&StringLiteral_24861/*"userGame"*/);
    sub_1C21E38(&StringLiteral_22143/*"mstGift"*/);
    sub_1C21E38(&StringLiteral_22344/*"mstWarBoardReinforcements"*/);
    sub_1C21E38(&StringLiteral_22025/*"mstEventBoardGameToken"*/);
    sub_1C21E38(&StringLiteral_22161/*"mstMapGimmickLayer"*/);
    sub_1C21E38(&StringLiteral_22261/*"mstSvtCommandCodeUnlock"*/);
    sub_1C21E38(&StringLiteral_21943/*"mstAssist"*/);
    sub_1C21E38(&StringLiteral_25000/*"viewWaveEnemy"*/);
    sub_1C21E38(&StringLiteral_22573/*"npcSvtEquip"*/);
    sub_1C21E38(&StringLiteral_22206/*"mstQuestScriptMaterialNext"*/);
    sub_1C21E38(&StringLiteral_22267/*"mstSvtExp"*/);
    sub_1C21E38(&StringLiteral_24886/*"userSvt"*/);
    sub_1C21E38(&StringLiteral_24996/*"viewEnemy"*/);
    sub_1C21E38(&StringLiteral_22112/*"mstEventUiRelease"*/);
    sub_1C21E38(&StringLiteral_24424/*"totalEventRace"*/);
    sub_1C21E38(&StringLiteral_22116/*"mstFieldMotion"*/);
    sub_1C21E38(&StringLiteral_22086/*"mstEventRandomMission"*/);
    sub_1C21E38(&StringLiteral_22093/*"mstEventRewardScene"*/);
    sub_1C21E38(&StringLiteral_22119/*"mstFriendshipSvt"*/);
    sub_1C21E38(&StringLiteral_22150/*"mstIndividualityPersonality"*/);
    sub_1C21E38(&StringLiteral_21989/*"mstCombineCostume"*/);
    sub_1C21E38(&StringLiteral_21988/*"mstCombineAppendPassiveSkill"*/);
    sub_1C21E38(&StringLiteral_22046/*"mstEventDiggingReward"*/);
    sub_1C21E38(&StringLiteral_22325/*"mstWarBoardActionTrend"*/);
    sub_1C21E38(&StringLiteral_22127/*"mstGachaAppend"*/);
    sub_1C21E38(&StringLiteral_22347/*"mstWarBoardSquareIndexGroup"*/);
    sub_1C21E38(&StringLiteral_22120/*"mstFunc"*/);
    sub_1C21E38(&StringLiteral_22039/*"mstEventConquestReward"*/);
    sub_1C21E38(&StringLiteral_22330/*"mstWarBoardEffect"*/);
    sub_1C21E38(&StringLiteral_22361/*"mstWarQuestSelection"*/);
    sub_1C21E38(&StringLiteral_24821/*"userDeck"*/);
    sub_1C21E38(&StringLiteral_22169/*"mstMasterMissionDisplayInfo"*/);
    sub_1C21E38(&StringLiteral_22358/*"mstWarGroup"*/);
    sub_1C21E38(&StringLiteral_22225/*"mstShop"*/);
    sub_1C21E38(&StringLiteral_22339/*"mstWarBoardPartySkill"*/);
    sub_1C21E38(&StringLiteral_24836/*"userEventItemLinkSvt"*/);
    sub_1C21E38(&StringLiteral_22075/*"mstEventPointBuff"*/);
    sub_1C21E38(&StringLiteral_24885/*"userSupportDeck"*/);
    sub_1C21E38(&StringLiteral_22244/*"mstSpotRoad"*/);
    sub_1C21E38(&StringLiteral_22300/*"mstSvtVoiceRelation"*/);
    sub_1C21E38(&StringLiteral_21991/*"mstCombineLimitGift"*/);
    sub_1C21E38(&StringLiteral_22040/*"mstEventCooltimeReward"*/);
    sub_1C21E38(&StringLiteral_22032/*"mstEventBulletinBoard"*/);
    sub_1C21E38(&StringLiteral_22090/*"mstEventRewardBg"*/);
    sub_1C21E38(&StringLiteral_21970/*"mstBoxGachaTalk"*/);
    sub_1C21E38(&StringLiteral_24870/*"userPaymentLimit"*/);
    sub_1C21E38(&StringLiteral_22122/*"mstFuncDisp"*/);
    sub_1C21E38(&StringLiteral_22288/*"mstSvtScript"*/);
    sub_1C21E38(&StringLiteral_22158/*"mstMapCond"*/);
    sub_1C21E38(&StringLiteral_24835/*"userEventFortification"*/);
    sub_1C21E38(&StringLiteral_22338/*"mstWarBoardOnboardSkill"*/);
    sub_1C21E38(&StringLiteral_22134/*"mstGachaGroup"*/);
    sub_1C21E38(&StringLiteral_24998/*"viewQuestEnemyInfo"*/);
    sub_1C21E38(&StringLiteral_24811/*"userAccountLinkage"*/);
    sub_1C21E38(&StringLiteral_22262/*"mstSvtComment"*/);
    sub_1C21E38(&StringLiteral_22308/*"mstTreasureDevice"*/);
    sub_1C21E38(&StringLiteral_24997/*"viewGachaFeaturedSvt"*/);
    sub_1C21E38(&StringLiteral_24869/*"userNpcSvtRecord"*/);
    sub_1C21E38(&StringLiteral_21955/*"mstBattlePoint"*/);
    sub_1C21E38(&StringLiteral_22067/*"mstEventMissionGroup"*/);
    sub_1C21E38(&StringLiteral_24877/*"userQuestRecord"*/);
    sub_1C21E38(&StringLiteral_22217/*"mstRestrictionMessage"*/);
    sub_1C21E38(&StringLiteral_22145/*"mstGiftDetail"*/);
    sub_1C21E38(&StringLiteral_22142/*"mstGachaTicket"*/);
    sub_1C21E38(&StringLiteral_22284/*"mstSvtPhoto"*/);
    sub_1C21E38(&StringLiteral_22938/*"pickupUserFollower"*/);
    sub_1C21E38(&StringLiteral_22098/*"mstEventStatus"*/);
    sub_1C21E38(&StringLiteral_22263/*"mstSvtCommentAdd"*/);
    sub_1C21E38(&StringLiteral_22281/*"mstSvtOverwrite"*/);
    sub_1C21E38(&StringLiteral_22568/*"npcFollower"*/);
    sub_1C21E38(&StringLiteral_22038/*"mstEventCommandAssist"*/);
    sub_1C21E38(&StringLiteral_19467/*"eventSvtFatigue"*/);
    sub_1C21E38(&StringLiteral_22131/*"mstGachaBonusSelectLineup"*/);
    sub_1C21E38(&StringLiteral_22033/*"mstEventBulletinBoardRelease"*/);
    sub_1C21E38(&StringLiteral_22266/*"mstSvtExceed"*/);
    sub_1C21E38(&StringLiteral_22276/*"mstSvtLimitSpoilerProtection"*/);
    sub_1C21E38(&StringLiteral_22298/*"mstSvtVoice"*/);
    sub_1C21E38(&StringLiteral_22220/*"mstRestrictionWhole"*/);
    sub_1C21E38(&StringLiteral_24859/*"userGachaExtraCount"*/);
    sub_1C21E38(&StringLiteral_22163/*"mstMapGimmickPath"*/);
    sub_1C21E38(&StringLiteral_22105/*"mstEventTowerReward"*/);
    sub_1C21E38(&StringLiteral_21985/*"mstClassRelationOverwrite"*/);
    sub_1C21E38(&StringLiteral_21938/*"mstAi"*/);
    sub_1C21E38(&StringLiteral_24813/*"userBoxGacha"*/);
    sub_1C21E38(&StringLiteral_22256/*"mstSvtCard"*/);
    sub_1C21E38(&StringLiteral_24860/*"userGachaPickupCollateral"*/);
    sub_1C21E38(&StringLiteral_24858/*"userGachaDrawLog"*/);
    sub_1C21E38(&StringLiteral_22348/*"mstWarBoardStage"*/);
    sub_1C21E38(&StringLiteral_24825/*"userEquip"*/);
    sub_1C21E38(&StringLiteral_22092/*"mstEventRewardGuideRelease"*/);
    sub_1C21E38(&StringLiteral_21980/*"mstClassBoardCommandSpell"*/);
    sub_1C21E38(&StringLiteral_22362/*"mstWarRelease"*/);
    sub_1C21E38(&StringLiteral_22129/*"mstGachaBehavior"*/);
    sub_1C21E38(&StringLiteral_22320/*"mstWar"*/);
    sub_1C21E38(&StringLiteral_22027/*"mstEventBonusFilter"*/);
    sub_1C21E38(&StringLiteral_22208/*"mstQuestScriptRelease"*/);
    sub_1C21E38(&StringLiteral_24837/*"userEventMap"*/);
    sub_1C21E38(&StringLiteral_22072/*"mstEventPanelSpot"*/);
    sub_1C21E38(&StringLiteral_21977/*"mstClass"*/);
    sub_1C21E38(&StringLiteral_24810/*"userAccessary"*/);
    sub_1C21E38(&StringLiteral_22274/*"mstSvtLimitAdd"*/);
    sub_1C21E38(&StringLiteral_22207/*"mstQuestScriptMaterialOverwrite"*/);
    sub_1C21E38(&StringLiteral_18427/*"combineExp"*/);
    sub_1C21E38(&StringLiteral_24853/*"userFormation"*/);
    sub_1C21E38(&StringLiteral_22337/*"mstWarBoardMessageScript"*/);
    sub_1C21E38(&StringLiteral_22080/*"mstEventProgressValue"*/);
    sub_1C21E38(&StringLiteral_24898/*"userSvtVoicePlayed"*/);
    sub_1C21E38(&StringLiteral_22255/*"mstSvtBattlePoint"*/);
    sub_1C21E38(&StringLiteral_22269/*"mstSvtFlag"*/);
    sub_1C21E38(&StringLiteral_21964/*"mstBoardMessage"*/);
    sub_1C21E38(&StringLiteral_22071/*"mstEventPanelScan"*/);
    sub_1C21E38(&StringLiteral_22275/*"mstSvtLimitImage"*/);
    sub_1C21E38(&StringLiteral_22045/*"mstEventDiggingBlock"*/);
    sub_1C21E38(&StringLiteral_24845/*"userEventRandomMission"*/);
    sub_1C21E38(&StringLiteral_21941/*"mstArea"*/);
    sub_1C21E38(&StringLiteral_24425/*"totalEventRaid"*/);
    sub_1C21E38(&StringLiteral_22549/*"notEndEventMissionFix"*/);
    sub_1C21E38(&StringLiteral_22231/*"mstShopScript"*/);
    sub_1C21E38(&StringLiteral_24838/*"userEventMission"*/);
    sub_1C21E38(&StringLiteral_22170/*"mstMasterPhoto"*/);
    sub_1C21E38(&StringLiteral_22063/*"mstEventMissionActionAdd"*/);
    sub_1C21E38(&StringLiteral_21997/*"mstCombineTd"*/);
    sub_1C21E38(&StringLiteral_21966/*"mstBoost"*/);
    sub_1C21E38(&StringLiteral_22289/*"mstSvtScriptAdd"*/);
    sub_1C21E38(&StringLiteral_21968/*"mstBoxGachaBase"*/);
    sub_1C21E38(&StringLiteral_21950/*"mstBannerAdd"*/);
    sub_1C21E38(&StringLiteral_21936/*"mstAccessary"*/);
    sub_1C21E38(&StringLiteral_22311/*"mstTreasureDeviceSequenceWeight"*/);
    sub_1C21E38(&StringLiteral_24843/*"userEventRace"*/);
    sub_1C21E38(&StringLiteral_22188/*"mstQuestGroup"*/);
    sub_1C21E38(&StringLiteral_22079/*"mstEventPointUpperRelease"*/);
    sub_1C21E38(&StringLiteral_24896/*"userSvtLeader"*/);
    sub_1C21E38(&StringLiteral_22273/*"mstSvtLimit"*/);
    sub_1C21E38(&StringLiteral_24851/*"userFollow"*/);
    sub_1C21E38(&StringLiteral_22060/*"mstEventLocationCampaign"*/);
    sub_1C21E38(&StringLiteral_21994/*"mstCombineQp"*/);
    sub_1C21E38(&StringLiteral_22022/*"mstEvent"*/);
    sub_1C21E38(&StringLiteral_22270/*"mstSvtFlagRelease"*/);
    sub_1C21E38(&StringLiteral_24854/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_1C21E38(&StringLiteral_24873/*"userPrivilege"*/);
    sub_1C21E38(&StringLiteral_21999/*"mstCommandCode"*/);
    sub_1C21E38(&StringLiteral_22253/*"mstSvtAppendPassiveSkill"*/);
    sub_1C21E38(&StringLiteral_22056/*"mstEventGroup"*/);
    sub_1C21E38(&StringLiteral_22130/*"mstGachaBonusSelect"*/);
    sub_1C21E38(&StringLiteral_24829/*"userEventBoardGameToken"*/);
    sub_1C21E38(&StringLiteral_22172/*"mstMissionItemDisplay"*/);
    sub_1C21E38(&StringLiteral_22176/*"mstMyroomSvtSpecialImage"*/);
    sub_1C21E38(&StringLiteral_22345/*"mstWarBoardRoad"*/);
    sub_1C21E38(&StringLiteral_21971/*"mstBuff"*/);
    sub_1C21E38(&StringLiteral_25067/*"warBoardData"*/);
    sub_1C21E38(&StringLiteral_22148/*"mstIllustrator"*/);
    sub_1C21E38(&StringLiteral_24420/*"totalBoxGacha"*/);
    sub_1C21E38(&StringLiteral_22287/*"mstSvtRarity"*/);
    sub_1C21E38(&StringLiteral_22321/*"mstWarAdd"*/);
    sub_1C21E38(&StringLiteral_22164/*"mstMapGimmickPathRelease"*/);
    sub_1C21E38(&StringLiteral_24855/*"userFriendRequestHistory"*/);
    sub_1C21E38(&StringLiteral_24807/*"user"*/);
    sub_1C21E38(&StringLiteral_17683/*"boxGachaHistory"*/);
    sub_1C21E38(&StringLiteral_22123/*"mstFuncGroup"*/);
    sub_1C21E38(&StringLiteral_22004/*"mstCommonConsume"*/);
    sub_1C21E38(&StringLiteral_22332/*"mstWarBoardEventScript"*/);
    sub_1C21E38(&StringLiteral_22144/*"mstGiftAdd"*/);
    sub_1C21E38(&StringLiteral_22111/*"mstEventUi"*/);
    sub_1C21E38(&StringLiteral_22241/*"mstSpotImage"*/);
    sub_1C21E38(&StringLiteral_22265/*"mstSvtCostumeRelease"*/);
    sub_1C21E38(&StringLiteral_22159/*"mstMapGimmick"*/);
    sub_1C21E38(&StringLiteral_22194/*"mstQuestPhaseIndividuality"*/);
    sub_1C21E38(&StringLiteral_22109/*"mstEventTutorial"*/);
    sub_1C21E38(&StringLiteral_22359/*"mstWarGroupIgnore"*/);
    sub_1C21E38(&StringLiteral_22355/*"mstWarBoardStageWall"*/);
    sub_1C21E38(&StringLiteral_24849/*"userEventTrade"*/);
    sub_1C21E38(&StringLiteral_21940/*"mstAiField"*/);
    sub_1C21E38(&StringLiteral_22117/*"mstFriendPointGachaAdjust"*/);
    sub_1C21E38(&StringLiteral_22297/*"mstSvtTreasureDeviceRelease"*/);
    sub_1C21E38(&StringLiteral_22191/*"mstQuestPhase"*/);
    sub_1C21E38(&StringLiteral_24831/*"userEventDataLost"*/);
    sub_1C21E38(&StringLiteral_22254/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_1C21E38(&StringLiteral_22296/*"mstSvtTreasureDeviceDamage"*/);
    sub_1C21E38(&StringLiteral_22245/*"mstStage"*/);
    sub_1C21E38(&StringLiteral_21987/*"mstCombine"*/);
    sub_1C21E38(&StringLiteral_22034/*"mstEventCampaign"*/);
    sub_1C21E38(&StringLiteral_22352/*"mstWarBoardStageNpc"*/);
    sub_1C21E38(&StringLiteral_22900/*"paymentHistory"*/);
    sub_1C21E38(&StringLiteral_19633/*"exchangeSvt"*/);
    sub_1C21E38(&StringLiteral_22246/*"mstStageRemap"*/);
    sub_1C21E38(&StringLiteral_22215/*"mstRestriction"*/);
    sub_1C21E38(&StringLiteral_22204/*"mstQuestScript"*/);
    sub_1C21E38(&StringLiteral_22094/*"mstEventRewardSceneRelease"*/);
    sub_1C21E38(&StringLiteral_22315/*"mstVoiceCond"*/);
    sub_1C21E38(&StringLiteral_24884/*"userSubEquip"*/);
    sub_1C21E38(&StringLiteral_22087/*"mstEventRecipe"*/);
    sub_1C21E38(&StringLiteral_22264/*"mstSvtCostume"*/);
    sub_1C21E38(&StringLiteral_22285/*"mstSvtProfile"*/);
    sub_1C21E38(&StringLiteral_22006/*"mstCommonRestriction"*/);
    sub_1C21E38(&StringLiteral_24863/*"userHeelPortrait"*/);
    sub_1C21E38(&StringLiteral_22236/*"mstSkillGroupOverwrite"*/);
    sub_1C21E38(&StringLiteral_24817/*"userCommandCodeCollection"*/);
    sub_1C21E38(&StringLiteral_22002/*"mstCommandCodeSkillRelease"*/);
    sub_1C21E38(&StringLiteral_22014/*"mstEffectMovie"*/);
    sub_1C21E38(&StringLiteral_22196/*"mstQuestPickup"*/);
    sub_1C21E38(&StringLiteral_22351/*"mstWarBoardStageLayout"*/);
    sub_1C21E38(&StringLiteral_22326/*"mstWarBoardActionTrendCond"*/);
    sub_1C21E38(&StringLiteral_22036/*"mstEventCombine"*/);
    sub_1C21E38(&StringLiteral_22340/*"mstWarBoardQuest"*/);
    sub_1C21E38(&StringLiteral_22186/*"mstQuestConsumeItem"*/);
    sub_1C21E38(&StringLiteral_22193/*"mstQuestPhaseDetailAdd"*/);
    sub_1C21E38(&StringLiteral_22147/*"mstHeelPortrait"*/);
    sub_1C21E38(&StringLiteral_19634/*"exchangeSvtCoinGivenNum"*/);
    sub_1C21E38(&StringLiteral_24872/*"userPresentHistory"*/);
    sub_1C21E38(&StringLiteral_21976/*"mstChaldeaGatePickup"*/);
    sub_1C21E38(&StringLiteral_22341/*"mstWarBoardRatingBase"*/);
    sub_1C21E38(&StringLiteral_22135/*"mstGachaImage"*/);
    sub_1C21E38(&StringLiteral_22020/*"mstEquipImage"*/);
    sub_1C21E38(&StringLiteral_24844/*"userEventRaid"*/);
    sub_1C21E38(&StringLiteral_22260/*"mstSvtCollection"*/);
    sub_1C21E38(&StringLiteral_19989/*"friendshipQuestDialogInfo"*/);
    sub_1C21E38(&StringLiteral_22177/*"mstNews"*/);
    sub_1C21E38(&StringLiteral_22125/*"mstGacha"*/);
    sub_1C21E38(&StringLiteral_22235/*"mstSkillGroup"*/);
    sub_1C21E38(&StringLiteral_22146/*"mstGuide"*/);
    sub_1C21E38(&StringLiteral_22138/*"mstGachaPickupCollateralGroup"*/);
    sub_1C21E38(&StringLiteral_21982/*"mstClassBoardLock"*/);
    sub_1C21E38(&StringLiteral_22078/*"mstEventPointUpper"*/);
    sub_1C21E38(&StringLiteral_21961/*"mstBlankEarthSpot"*/);
    sub_1C21E38(&StringLiteral_22302/*"mstTerminalOverwrite"*/);
    sub_1C21E38(&StringLiteral_22021/*"mstEquipSkill"*/);
    sub_1C21E38(&StringLiteral_22113/*"mstEventUiValue"*/);
    sub_1C21E38(&StringLiteral_24819/*"userContinue"*/);
    sub_1C21E38(&StringLiteral_22183/*"mstQuestAdd"*/);
    sub_1C21E38(&StringLiteral_21981/*"mstClassBoardLine"*/);
    sub_1C21E38(&StringLiteral_24746/*"updateProfileDialogInfo"*/);
    sub_1C21E38(&StringLiteral_22313/*"mstVoice"*/);
    sub_1C21E38(&StringLiteral_24839/*"userEventMissionConditionDetail"*/);
    sub_1C21E38(&StringLiteral_21942/*"mstAssetbundleKey"*/);
    sub_1C21E38(&StringLiteral_22069/*"mstEventPanelMap"*/);
    sub_1C21E38(&StringLiteral_24868/*"userLogin"*/);
    sub_1C21E38(&StringLiteral_22155/*"mstLoginQuest"*/);
    sub_1C21E38(&StringLiteral_22179/*"mstPartialMaintenance"*/);
    sub_1C21E38(&StringLiteral_24846/*"userEventSpot"*/);
    sub_1C21E38(&StringLiteral_22089/*"mstEventReward"*/);
    sub_1C21E38(&StringLiteral_22042/*"mstEventDataLostBattleReset"*/);
    sub_1C21E38(&StringLiteral_21944/*"mstAttri"*/);
    sub_1C21E38(&StringLiteral_22350/*"mstWarBoardStageDetail"*/);
    sub_1C21E38(&StringLiteral_24842/*"userEventQuestCooltime"*/);
    sub_1C21E38(&StringLiteral_22205/*"mstQuestScriptBranchMaterial"*/);
    sub_1C21E38(&StringLiteral_22051/*"mstEventFatigueRecovery"*/);
    sub_1C21E38(&StringLiteral_22328/*"mstWarBoardAi"*/);
    sub_1C21E38(&StringLiteral_22307/*"mstTreasureBoxTalk"*/);
    sub_1C21E38(&StringLiteral_22331/*"mstWarBoardEvent"*/);
    sub_1C21E38(&StringLiteral_22317/*"mstVoicePlayCond"*/);
    sub_1C21E38(&StringLiteral_22132/*"mstGachaDetail"*/);
    sub_1C21E38(&StringLiteral_22100/*"mstEventSuperBoss"*/);
    sub_1C21E38(&StringLiteral_22233/*"mstSkillAdd"*/);
    byte_4BDB4D5 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_32E58A4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1C22094(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0LL,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_22250/*"mstSvt"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_22262/*"mstSvtComment"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_22285/*"mstSvtProfile"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_22320/*"mstWar"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_17377/*"battle"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_22308/*"mstTreasureDevice"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_22273/*"mstSvtLimit"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_22294/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_21977/*"mstClass"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_22288/*"mstSvtScript"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_22256/*"mstSvtCard"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_22291/*"mstSvtSkill"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_22282/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_24886/*"userSvt"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_24897/*"userSvtStorage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_22245/*"mstStage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_22271/*"mstSvtGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_21961/*"mstBlankEarthSpot"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_21962/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_22239/*"mstSpot"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_22241/*"mstSpotImage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_22244/*"mstSpotRoad"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_22159/*"mstMapGimmick"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_22143/*"mstGift"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_22144/*"mstGiftAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_22249/*"mstSubEquip"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_24807/*"user"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_24861/*"userGame"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_24821/*"userDeck"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_24890/*"userSvtCollection"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_22118/*"mstFriendship"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_22125/*"mstGacha"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_22135/*"mstGachaImage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_24856/*"userGacha"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_24860/*"userGachaPickupCollateral"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24867/*"userItem"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_22152/*"mstItem"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_22142/*"mstGachaTicket"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_22126/*"mstGachaAdjustAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_22136/*"mstGachaPickup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_22117/*"mstFriendPointGachaAdjust"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_22128/*"mstGachaBaseCollateral"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_21936/*"mstAccessary"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_24810/*"userAccessary"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_24884/*"userSubEquip"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_24294/*"tblUserGame"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_22225/*"mstShop"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_22248/*"mstStoneShop"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_21948/*"mstBankShop"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_22231/*"mstShopScript"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_22017/*"mstEquip"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_22019/*"mstEquipExp"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_22021/*"mstEquipSkill"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_24825/*"userEquip"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_24853/*"userFormation"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_22232/*"mstSkill"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_22238/*"mstSkillLv"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_22234/*"mstSkillDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_22120/*"mstFunc"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_21971/*"mstBuff"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_22139/*"mstGachaRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_24875/*"userQuest"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_24876/*"userQuestInfo"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_24877/*"userQuestRecord"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_22312/*"mstUserExp"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_22177/*"mstNews"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_22301/*"mstTelop"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_22753/*"otherUserGame"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_24293/*"tblFriend"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_24871/*"userPresentBox"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_22022/*"mstEvent"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_22182/*"mstQuest"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_22183/*"mstQuestAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_22199/*"mstQuestRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_22191/*"mstQuestPhase"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_22192/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_22188/*"mstQuestGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_22198/*"mstQuestRandomGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_22186/*"mstQuestConsumeItem"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_22190/*"mstQuestMessage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_24999/*"viewQuestInfo"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_24996/*"viewEnemy"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_24998/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_21941/*"mstArea"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_21957/*"mstBgm"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_22081/*"mstEventQuest"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_22034/*"mstEventCampaign"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_21994/*"mstCombineQp"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_21993/*"mstCombineMaterial"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_22036/*"mstEventCombine"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_22267/*"mstSvtExp"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_21996/*"mstCombineSkill"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_21997/*"mstCombineTd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_22148/*"mstIllustrator"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_22011/*"mstCv"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_22310/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_22309/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_24852/*"userFollower"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_22568/*"npcFollower"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_22574/*"npcSvtFollower"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_24827/*"userEvent"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_24874/*"userProfile"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_24881/*"userShop"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_24819/*"userContinue"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_22008/*"mstConstant"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_22009/*"mstConstantLong"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_22010/*"mstConstantStr"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_22003/*"mstCommandSpell"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_21938/*"mstAi"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_21939/*"mstAiAct"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_22298/*"mstSvtVoice"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_21945/*"mstAttriRelation"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_21984/*"mstClassRelation"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_22013/*"mstEffect"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_22020/*"mstEquipImage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_21990/*"mstCombineLimit"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_21975/*"mstCard"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_21995/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_22274/*"mstSvtLimitAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_22287/*"mstSvtRarity"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_22224/*"mstSetItem"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_22214/*"mstRecover"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_21949/*"mstBanner"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_22229/*"mstShopRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_22089/*"mstEventReward"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_22043/*"mstEventDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_22101/*"mstEventSvt"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_21967/*"mstBoxGacha"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_21968/*"mstBoxGachaBase"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_21970/*"mstBoxGachaTalk"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_24813/*"userBoxGacha"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17683/*"boxGachaHistory"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_21951/*"mstBattleBg"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_22303/*"mstTips"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_24868/*"userLogin"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_22313/*"mstVoice"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_22091/*"mstEventRewardExtra"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_22061/*"mstEventMission"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_22065/*"mstEventMissionCondition"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    140,
    (Il2CppObject *)StringLiteral_22066/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    141,
    (Il2CppObject *)StringLiteral_22062/*"mstEventMissionAction"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    142,
    (Il2CppObject *)StringLiteral_22063/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    145,
    (Il2CppObject *)StringLiteral_22007/*"mstCompleteMission"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    143,
    (Il2CppObject *)StringLiteral_22064/*"mstEventMissionAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    144,
    (Il2CppObject *)StringLiteral_22095/*"mstEventRewardSet"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    146,
    (Il2CppObject *)StringLiteral_24838/*"userEventMission"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    147,
    (Il2CppObject *)StringLiteral_24839/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    148,
    (Il2CppObject *)StringLiteral_21969/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    149,
    (Il2CppObject *)StringLiteral_21986/*"mstClosedMessage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    150,
    (Il2CppObject *)StringLiteral_24896/*"userSvtLeader"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    151,
    (Il2CppObject *)StringLiteral_22123/*"mstFuncGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    152,
    (Il2CppObject *)StringLiteral_22085/*"mstEventRaid"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    153,
    (Il2CppObject *)StringLiteral_24425/*"totalEventRaid"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    154,
    (Il2CppObject *)StringLiteral_24844/*"userEventRaid"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    155,
    (Il2CppObject *)StringLiteral_22073/*"mstEventPoint"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    156,
    (Il2CppObject *)StringLiteral_22076/*"mstEventPointGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    157,
    (Il2CppObject *)StringLiteral_24423/*"totalEventPoint"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    158,
    (Il2CppObject *)StringLiteral_24841/*"userEventPoint"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    159,
    (Il2CppObject *)StringLiteral_24872/*"userPresentHistory"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    160,
    (Il2CppObject *)StringLiteral_22168/*"mstMasterMission"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    161,
    (Il2CppObject *)StringLiteral_22266/*"mstSvtExceed"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    162,
    (Il2CppObject *)StringLiteral_22179/*"mstPartialMaintenance"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    163,
    (Il2CppObject *)StringLiteral_22146/*"mstGuide"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    164,
    (Il2CppObject *)StringLiteral_22169/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    165,
    (Il2CppObject *)StringLiteral_22134/*"mstGachaGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    166,
    (Il2CppObject *)StringLiteral_22201/*"mstQuestReset"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    167,
    (Il2CppObject *)StringLiteral_22321/*"mstWarAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    168,
    (Il2CppObject *)StringLiteral_22057/*"mstEventItemDisplay"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    169,
    (Il2CppObject *)StringLiteral_22058/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    170,
    (Il2CppObject *)StringLiteral_22059/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    171,
    (Il2CppObject *)StringLiteral_22109/*"mstEventTutorial"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    172,
    (Il2CppObject *)StringLiteral_22110/*"mstEventTutorialCond"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    173,
    (Il2CppObject *)StringLiteral_22319/*"mstVoiceRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    174,
    (Il2CppObject *)StringLiteral_22100/*"mstEventSuperBoss"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    175,
    (Il2CppObject *)StringLiteral_24847/*"userEventSuperBoss"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    176,
    (Il2CppObject *)StringLiteral_22204/*"mstQuestScript"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    177,
    (Il2CppObject *)StringLiteral_22208/*"mstQuestScriptRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    178,
    (Il2CppObject *)StringLiteral_22171/*"mstMaterialFolder"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    179,
    (Il2CppObject *)StringLiteral_22215/*"mstRestriction"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    180,
    (Il2CppObject *)StringLiteral_22202/*"mstQuestRestriction"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    181,
    (Il2CppObject *)StringLiteral_22300/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    182,
    (Il2CppObject *)StringLiteral_22227/*"mstShopDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    183,
    (Il2CppObject *)StringLiteral_22289/*"mstSvtScriptAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    184,
    (Il2CppObject *)StringLiteral_21987/*"mstCombine"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    185,
    (Il2CppObject *)StringLiteral_21940/*"mstAiField"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    186,
    (Il2CppObject *)StringLiteral_22263/*"mstSvtCommentAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    187,
    (Il2CppObject *)StringLiteral_22052/*"mstEventFilter"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    188,
    (Il2CppObject *)StringLiteral_24885/*"userSupportDeck"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    189,
    (Il2CppObject *)StringLiteral_22093/*"mstEventRewardScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    190,
    (Il2CppObject *)StringLiteral_22114/*"mstEventVoicePlay"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    191,
    (Il2CppObject *)StringLiteral_22141/*"mstGachaSub"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    192,
    (Il2CppObject *)StringLiteral_22132/*"mstGachaDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    193,
    (Il2CppObject *)StringLiteral_22130/*"mstGachaBonusSelect"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    194,
    (Il2CppObject *)StringLiteral_22131/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    195,
    (Il2CppObject *)StringLiteral_22258/*"mstSvtChange"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    196,
    (Il2CppObject *)StringLiteral_22315/*"mstVoiceCond"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    197,
    (Il2CppObject *)StringLiteral_21958/*"mstBgmRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    198,
    (Il2CppObject *)StringLiteral_22175/*"mstMyroomAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    199,
    (Il2CppObject *)StringLiteral_22226/*"mstShopAction"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    200,
    (Il2CppObject *)StringLiteral_22094/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    201,
    (Il2CppObject *)StringLiteral_22156/*"mstMap"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    202,
    (Il2CppObject *)StringLiteral_22158/*"mstMapCond"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    203,
    (Il2CppObject *)StringLiteral_22157/*"mstMapButton"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    204,
    (Il2CppObject *)StringLiteral_21950/*"mstBannerAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    205,
    (Il2CppObject *)StringLiteral_22185/*"mstQuestBehavior"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    206,
    (Il2CppObject *)StringLiteral_22023/*"mstEventAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    207,
    (Il2CppObject *)StringLiteral_22304/*"mstTotalLogin"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    208,
    (Il2CppObject *)StringLiteral_22268/*"mstSvtFilter"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    209,
    (Il2CppObject *)StringLiteral_21989/*"mstCombineCostume"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    210,
    (Il2CppObject *)StringLiteral_22264/*"mstSvtCostume"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    211,
    (Il2CppObject *)StringLiteral_22265/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    212,
    (Il2CppObject *)StringLiteral_24855/*"userFriendRequestHistory"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    213,
    (Il2CppObject *)StringLiteral_24812/*"userBlacklist"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    214,
    (Il2CppObject *)StringLiteral_22154/*"mstItemSelect"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    215,
    (Il2CppObject *)StringLiteral_22083/*"mstEventRace"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    216,
    (Il2CppObject *)StringLiteral_22084/*"mstEventRaceResult"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    217,
    (Il2CppObject *)StringLiteral_22197/*"mstQuestRacePoint"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    218,
    (Il2CppObject *)StringLiteral_24843/*"userEventRace"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    219,
    (Il2CppObject *)StringLiteral_22096/*"mstEventScript"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    220,
    (Il2CppObject *)StringLiteral_22097/*"mstEventScriptRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    221,
    (Il2CppObject *)StringLiteral_22243/*"mstSpotPath"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    222,
    (Il2CppObject *)StringLiteral_22240/*"mstSpotAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    223,
    (Il2CppObject *)StringLiteral_24424/*"totalEventRace"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    224,
    (Il2CppObject *)StringLiteral_22077/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    225,
    (Il2CppObject *)StringLiteral_22318/*"mstVoicePlayGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    226,
    (Il2CppObject *)StringLiteral_22317/*"mstVoicePlayCond"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    227,
    (Il2CppObject *)StringLiteral_22140/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    228,
    (Il2CppObject *)StringLiteral_22269/*"mstSvtFlag"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    229,
    (Il2CppObject *)StringLiteral_22270/*"mstSvtFlagRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    230,
    (Il2CppObject *)StringLiteral_22060/*"mstEventLocationCampaign"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    231,
    (Il2CppObject *)StringLiteral_21974/*"mstCampaignInfo"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    232,
    (Il2CppObject *)StringLiteral_22012/*"mstDialogMessage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    233,
    (Il2CppObject *)StringLiteral_22272/*"mstSvtIndividuality"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    234,
    (Il2CppObject *)StringLiteral_21964/*"mstBoardMessage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    235,
    (Il2CppObject *)StringLiteral_21965/*"mstBoardMessageRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    236,
    (Il2CppObject *)StringLiteral_22102/*"mstEventSvtFatigue"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    237,
    (Il2CppObject *)StringLiteral_24832/*"userEventDeck"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    238,
    (Il2CppObject *)StringLiteral_22104/*"mstEventTower"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    239,
    (Il2CppObject *)StringLiteral_22105/*"mstEventTowerReward"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    240,
    (Il2CppObject *)StringLiteral_22032/*"mstEventBulletinBoard"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    241,
    (Il2CppObject *)StringLiteral_22033/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    242,
    (Il2CppObject *)StringLiteral_22050/*"mstEventFactory"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    243,
    (Il2CppObject *)StringLiteral_22228/*"mstShopGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    244,
    (Il2CppObject *)StringLiteral_21946/*"mstAuraEffect"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    245,
    (Il2CppObject *)StringLiteral_21947/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    246,
    (Il2CppObject *)StringLiteral_24840/*"userEventMissionFix"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    247,
    (Il2CppObject *)StringLiteral_22549/*"notEndEventMissionFix"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    248,
    (Il2CppObject *)StringLiteral_22015/*"mstEnemyMaster"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    249,
    (Il2CppObject *)StringLiteral_22016/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    250,
    (Il2CppObject *)StringLiteral_22292/*"mstSvtSkillRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    251,
    (Il2CppObject *)StringLiteral_22283/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    252,
    (Il2CppObject *)StringLiteral_22297/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    253,
    (Il2CppObject *)StringLiteral_22165/*"mstMapGimmickRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    254,
    (Il2CppObject *)StringLiteral_21999/*"mstCommandCode"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    255,
    (Il2CppObject *)StringLiteral_22261/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    256,
    (Il2CppObject *)StringLiteral_24816/*"userCommandCode"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    257,
    (Il2CppObject *)StringLiteral_24817/*"userCommandCodeCollection"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    258,
    (Il2CppObject *)StringLiteral_24892/*"userSvtCommandCode"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    259,
    (Il2CppObject *)StringLiteral_22001/*"mstCommandCodeSkill"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    260,
    (Il2CppObject *)StringLiteral_22002/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    261,
    (Il2CppObject *)StringLiteral_22000/*"mstCommandCodeComment"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    262,
    (Il2CppObject *)StringLiteral_22098/*"mstEventStatus"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    263,
    (Il2CppObject *)StringLiteral_22099/*"mstEventStatusQuest"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    264,
    (Il2CppObject *)StringLiteral_22006/*"mstCommonRestriction"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    265,
    (Il2CppObject *)StringLiteral_22075/*"mstEventPointBuff"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    266,
    (Il2CppObject *)StringLiteral_24851/*"userFollow"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    267,
    (Il2CppObject *)StringLiteral_22092/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    268,
    (Il2CppObject *)StringLiteral_22573/*"npcSvtEquip"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    269,
    (Il2CppObject *)StringLiteral_22035/*"mstEventCampaignRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    270,
    (Il2CppObject *)StringLiteral_22278/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    271,
    (Il2CppObject *)StringLiteral_22047/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    272,
    (Il2CppObject *)StringLiteral_22074/*"mstEventPointActivity"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    273,
    (Il2CppObject *)StringLiteral_22121/*"mstFuncCategory"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    274,
    (Il2CppObject *)StringLiteral_22196/*"mstQuestPickup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    275,
    (Il2CppObject *)StringLiteral_22111/*"mstEventUi"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    276,
    (Il2CppObject *)StringLiteral_22112/*"mstEventUiRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    277,
    (Il2CppObject *)StringLiteral_22113/*"mstEventUiValue"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    278,
    (Il2CppObject *)StringLiteral_22039/*"mstEventConquestReward"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    279,
    (Il2CppObject *)StringLiteral_22569/*"npcFollowerRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    280,
    (Il2CppObject *)StringLiteral_22027/*"mstEventBonusFilter"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    281,
    (Il2CppObject *)StringLiteral_22028/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    282,
    (Il2CppObject *)StringLiteral_22029/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    283,
    (Il2CppObject *)StringLiteral_24859/*"userGachaExtraCount"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    284,
    (Il2CppObject *)StringLiteral_21998/*"mstCommandCardRankParam"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    285,
    (Il2CppObject *)StringLiteral_24891/*"userSvtCommandCard"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    286,
    (Il2CppObject *)StringLiteral_22181/*"mstPrivilege"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    287,
    (Il2CppObject *)StringLiteral_24873/*"userPrivilege"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    288,
    (Il2CppObject *)StringLiteral_22187/*"mstQuestDateRange"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    289,
    (Il2CppObject *)StringLiteral_22078/*"mstEventPointUpper"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    290,
    (Il2CppObject *)StringLiteral_22079/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    291,
    (Il2CppObject *)StringLiteral_24878/*"userQuestRoute"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    292,
    (Il2CppObject *)StringLiteral_22030/*"mstEventBossStatusUi"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    293,
    (Il2CppObject *)StringLiteral_22005/*"mstCommonRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    294,
    (Il2CppObject *)StringLiteral_22209/*"mstQuestSpotRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    295,
    (Il2CppObject *)StringLiteral_22316/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    296,
    (Il2CppObject *)StringLiteral_21985/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    297,
    (Il2CppObject *)StringLiteral_22056/*"mstEventGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    298,
    (Il2CppObject *)StringLiteral_21942/*"mstAssetbundleKey"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    299,
    (Il2CppObject *)StringLiteral_24420/*"totalBoxGacha"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    300,
    (Il2CppObject *)StringLiteral_22296/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    301,
    (Il2CppObject *)StringLiteral_19467/*"eventSvtFatigue"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    302,
    (Il2CppObject *)StringLiteral_22090/*"mstEventRewardBg"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    303,
    (Il2CppObject *)StringLiteral_22051/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    304,
    (Il2CppObject *)StringLiteral_19456/*"eventBoostItemUsed"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    305,
    (Il2CppObject *)StringLiteral_22247/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    306,
    (Il2CppObject *)StringLiteral_22193/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    307,
    (Il2CppObject *)StringLiteral_22314/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    308,
    (Il2CppObject *)StringLiteral_22246/*"mstStageRemap"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    309,
    (Il2CppObject *)StringLiteral_18427/*"combineExp"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    310,
    (Il2CppObject *)StringLiteral_22024/*"mstEventBoardGameCell"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    311,
    (Il2CppObject *)StringLiteral_22025/*"mstEventBoardGameToken"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    312,
    (Il2CppObject *)StringLiteral_22026/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    313,
    (Il2CppObject *)StringLiteral_24829/*"userEventBoardGameToken"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    314,
    (Il2CppObject *)StringLiteral_22252/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    315,
    (Il2CppObject *)StringLiteral_22178/*"mstOpeningMovie"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    316,
    (Il2CppObject *)StringLiteral_22276/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    317,
    (Il2CppObject *)StringLiteral_22938/*"pickupUserFollower"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    318,
    (Il2CppObject *)StringLiteral_22260/*"mstSvtCollection"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    319,
    (Il2CppObject *)StringLiteral_22129/*"mstGachaBehavior"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    320,
    (Il2CppObject *)StringLiteral_22082/*"mstEventQuestCooltime"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    321,
    (Il2CppObject *)StringLiteral_24842/*"userEventQuestCooltime"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    322,
    (Il2CppObject *)StringLiteral_21966/*"mstBoost"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    323,
    (Il2CppObject *)StringLiteral_22322/*"mstWarBoard"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    324,
    (Il2CppObject *)StringLiteral_22346/*"mstWarBoardSquare"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    325,
    (Il2CppObject *)StringLiteral_22345/*"mstWarBoardRoad"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    326,
    (Il2CppObject *)StringLiteral_22348/*"mstWarBoardStage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    327,
    (Il2CppObject *)StringLiteral_22323/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    328,
    (Il2CppObject *)StringLiteral_22325/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    329,
    (Il2CppObject *)StringLiteral_22356/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    330,
    (Il2CppObject *)StringLiteral_22351/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    331,
    (Il2CppObject *)StringLiteral_22352/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    332,
    (Il2CppObject *)StringLiteral_22355/*"mstWarBoardStageWall"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    333,
    (Il2CppObject *)StringLiteral_22328/*"mstWarBoardAi"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    334,
    (Il2CppObject *)StringLiteral_22341/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    335,
    (Il2CppObject *)StringLiteral_22342/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    336,
    (Il2CppObject *)StringLiteral_22335/*"mstWarBoardItem"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    337,
    (Il2CppObject *)StringLiteral_22357/*"mstWarBoardTreasure"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    338,
    (Il2CppObject *)StringLiteral_22340/*"mstWarBoardQuest"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    339,
    (Il2CppObject *)StringLiteral_25067/*"warBoardData"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    340,
    (Il2CppObject *)StringLiteral_22334/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    341,
    (Il2CppObject *)StringLiteral_22326/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    342,
    (Il2CppObject *)StringLiteral_22324/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    343,
    (Il2CppObject *)StringLiteral_22344/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    344,
    (Il2CppObject *)StringLiteral_22354/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    345,
    (Il2CppObject *)StringLiteral_22069/*"mstEventPanelMap"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    346,
    (Il2CppObject *)StringLiteral_22070/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    347,
    (Il2CppObject *)StringLiteral_22072/*"mstEventPanelSpot"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    348,
    (Il2CppObject *)StringLiteral_22071/*"mstEventPanelScan"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    349,
    (Il2CppObject *)StringLiteral_22044/*"mstEventDigging"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    350,
    (Il2CppObject *)StringLiteral_22046/*"mstEventDiggingReward"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    351,
    (Il2CppObject *)StringLiteral_22045/*"mstEventDiggingBlock"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    352,
    (Il2CppObject *)StringLiteral_24833/*"userEventDigging"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    353,
    (Il2CppObject *)StringLiteral_22004/*"mstCommonConsume"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    354,
    (Il2CppObject *)StringLiteral_24837/*"userEventMap"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    355,
    (Il2CppObject *)StringLiteral_24846/*"userEventSpot"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    356,
    (Il2CppObject *)StringLiteral_22358/*"mstWarGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    357,
    (Il2CppObject *)StringLiteral_22275/*"mstSvtLimitImage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    358,
    (Il2CppObject *)StringLiteral_19989/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    359,
    (Il2CppObject *)StringLiteral_22203/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    360,
    (Il2CppObject *)StringLiteral_21943/*"mstAssist"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    361,
    (Il2CppObject *)StringLiteral_22330/*"mstWarBoardEffect"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    362,
    (Il2CppObject *)StringLiteral_22338/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    363,
    (Il2CppObject *)StringLiteral_17444/*"beforeBirthDay"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    364,
    (Il2CppObject *)StringLiteral_22155/*"mstLoginQuest"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    365,
    (Il2CppObject *)StringLiteral_22037/*"mstEventCombineCostume"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    366,
    (Il2CppObject *)StringLiteral_22353/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    367,
    (Il2CppObject *)StringLiteral_22295/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    368,
    (Il2CppObject *)StringLiteral_22233/*"mstSkillAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    369,
    (Il2CppObject *)StringLiteral_22277/*"mstSvtLvDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    370,
    (Il2CppObject *)StringLiteral_22127/*"mstGachaAppend"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    371,
    (Il2CppObject *)StringLiteral_24858/*"userGachaDrawLog"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    372,
    (Il2CppObject *)StringLiteral_22253/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    373,
    (Il2CppObject *)StringLiteral_24887/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    374,
    (Il2CppObject *)StringLiteral_24888/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    375,
    (Il2CppObject *)StringLiteral_22254/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    376,
    (Il2CppObject *)StringLiteral_21988/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    377,
    (Il2CppObject *)StringLiteral_22259/*"mstSvtCoin"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    378,
    (Il2CppObject *)StringLiteral_24889/*"userSvtCoin"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    379,
    (Il2CppObject *)StringLiteral_22251/*"mstSvtAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    380,
    (Il2CppObject *)StringLiteral_22305/*"mstTreasureBox"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    381,
    (Il2CppObject *)StringLiteral_22306/*"mstTreasureBoxGift"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    382,
    (Il2CppObject *)StringLiteral_22307/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    383,
    (Il2CppObject *)StringLiteral_24834/*"userEventExpedition"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    384,
    (Il2CppObject *)StringLiteral_22048/*"mstEventExpedition"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    385,
    (Il2CppObject *)StringLiteral_22049/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    386,
    (Il2CppObject *)StringLiteral_22087/*"mstEventRecipe"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    387,
    (Il2CppObject *)StringLiteral_22088/*"mstEventRecipeGift"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    388,
    (Il2CppObject *)StringLiteral_24835/*"userEventFortification"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    389,
    (Il2CppObject *)StringLiteral_22053/*"mstEventFortification"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    390,
    (Il2CppObject *)StringLiteral_22054/*"mstEventFortificationDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    391,
    (Il2CppObject *)StringLiteral_22055/*"mstEventFortificationSvt"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    392,
    (Il2CppObject *)StringLiteral_24898/*"userSvtVoicePlayed"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    393,
    (Il2CppObject *)StringLiteral_24746/*"updateProfileDialogInfo"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    394,
    (Il2CppObject *)StringLiteral_22279/*"mstSvtMaterialTd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    395,
    (Il2CppObject *)StringLiteral_21952/*"mstBattleMasterImage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    396,
    (Il2CppObject *)StringLiteral_24854/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    397,
    (Il2CppObject *)StringLiteral_24845/*"userEventRandomMission"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    398,
    (Il2CppObject *)StringLiteral_22080/*"mstEventProgressValue"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    399,
    (Il2CppObject *)StringLiteral_22280/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    400,
    (Il2CppObject *)StringLiteral_22086/*"mstEventRandomMission"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    401,
    (Il2CppObject *)StringLiteral_24857/*"userGachaDrawHistory"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    402,
    (Il2CppObject *)StringLiteral_24815/*"userCoinRoom"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    403,
    (Il2CppObject *)StringLiteral_22031/*"mstEventBuddyPoint"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    404,
    (Il2CppObject *)StringLiteral_22103/*"mstEventSvtPointRank"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    405,
    (Il2CppObject *)StringLiteral_24848/*"userEventSvtPoint"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    406,
    (Il2CppObject *)StringLiteral_22116/*"mstFieldMotion"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    407,
    (Il2CppObject *)StringLiteral_24824/*"userDeleteReservation"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    408,
    (Il2CppObject *)StringLiteral_22290/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    409,
    (Il2CppObject *)StringLiteral_22018/*"mstEquipAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    410,
    (Il2CppObject *)StringLiteral_22200/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    411,
    (Il2CppObject *)StringLiteral_24828/*"userEventAlloutBattle"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    412,
    (Il2CppObject *)StringLiteral_22206/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    413,
    (Il2CppObject *)StringLiteral_21953/*"mstBattleMessage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    414,
    (Il2CppObject *)StringLiteral_21954/*"mstBattleMessageGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    415,
    (Il2CppObject *)StringLiteral_24869/*"userNpcSvtRecord"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    416,
    (Il2CppObject *)StringLiteral_21973/*"mstBuffTypeDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    417,
    (Il2CppObject *)StringLiteral_22336/*"mstWarBoardMessage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    418,
    (Il2CppObject *)StringLiteral_22339/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    419,
    (Il2CppObject *)StringLiteral_22337/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    420,
    (Il2CppObject *)StringLiteral_22361/*"mstWarQuestSelection"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    421,
    (Il2CppObject *)StringLiteral_22350/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    422,
    (Il2CppObject *)StringLiteral_22207/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    423,
    (Il2CppObject *)StringLiteral_22205/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    424,
    (Il2CppObject *)StringLiteral_21937/*"mstAdCheckPoint"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    425,
    (Il2CppObject *)StringLiteral_22145/*"mstGiftDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    426,
    (Il2CppObject *)StringLiteral_21991/*"mstCombineLimitGift"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    427,
    (Il2CppObject *)StringLiteral_22040/*"mstEventCooltimeReward"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    428,
    (Il2CppObject *)StringLiteral_24830/*"userEventCooltimeReward"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    429,
    (Il2CppObject *)StringLiteral_21979/*"mstClassBoardClass"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    430,
    (Il2CppObject *)StringLiteral_21978/*"mstClassBoardBase"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    431,
    (Il2CppObject *)StringLiteral_21981/*"mstClassBoardLine"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    432,
    (Il2CppObject *)StringLiteral_21982/*"mstClassBoardLock"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    433,
    (Il2CppObject *)StringLiteral_21983/*"mstClassBoardSquare"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    434,
    (Il2CppObject *)StringLiteral_21980/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    435,
    (Il2CppObject *)StringLiteral_24814/*"userClassBoardSquare"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    436,
    (Il2CppObject *)StringLiteral_22257/*"mstSvtCardAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    437,
    (Il2CppObject *)StringLiteral_22166/*"mstMapLayer"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    438,
    (Il2CppObject *)StringLiteral_22242/*"mstSpotLayer"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    439,
    (Il2CppObject *)StringLiteral_22161/*"mstMapGimmickLayer"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    440,
    (Il2CppObject *)StringLiteral_22041/*"mstEventDataLostBattle"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    441,
    (Il2CppObject *)StringLiteral_22042/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    442,
    (Il2CppObject *)StringLiteral_24831/*"userEventDataLost"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    443,
    (Il2CppObject *)StringLiteral_22189/*"mstQuestHint"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    444,
    (Il2CppObject *)StringLiteral_22124/*"mstFuncTypeDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    445,
    (Il2CppObject *)StringLiteral_21972/*"mstBuffConvert"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    446,
    (Il2CppObject *)StringLiteral_22235/*"mstSkillGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    447,
    (Il2CppObject *)StringLiteral_22236/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    448,
    (Il2CppObject *)StringLiteral_22237/*"mstSkillIndividuality"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    449,
    (Il2CppObject *)StringLiteral_22216/*"mstRestrictionBase"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    450,
    (Il2CppObject *)StringLiteral_22218/*"mstRestrictionSlot"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    451,
    (Il2CppObject *)StringLiteral_22219/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    452,
    (Il2CppObject *)StringLiteral_22217/*"mstRestrictionMessage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    453,
    (Il2CppObject *)StringLiteral_22220/*"mstRestrictionWhole"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    454,
    (Il2CppObject *)StringLiteral_22122/*"mstFuncDisp"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    455,
    (Il2CppObject *)StringLiteral_22038/*"mstEventCommandAssist"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    456,
    (Il2CppObject *)StringLiteral_22067/*"mstEventMissionGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    457,
    (Il2CppObject *)StringLiteral_21992/*"mstCombineLimitRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    458,
    (Il2CppObject *)StringLiteral_22311/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    459,
    (Il2CppObject *)StringLiteral_22147/*"mstHeelPortrait"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    460,
    (Il2CppObject *)StringLiteral_24863/*"userHeelPortrait"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    461,
    (Il2CppObject *)StringLiteral_22575/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    462,
    (Il2CppObject *)StringLiteral_22133/*"mstGachaExtraGift"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    463,
    (Il2CppObject *)StringLiteral_22068/*"mstEventMural"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    464,
    (Il2CppObject *)StringLiteral_25000/*"viewWaveEnemy"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    465,
    (Il2CppObject *)StringLiteral_21963/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    466,
    (Il2CppObject *)StringLiteral_21959/*"mstBlankEarthGimmick"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    467,
    (Il2CppObject *)StringLiteral_22302/*"mstTerminalOverwrite"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    468,
    (Il2CppObject *)StringLiteral_19633/*"exchangeSvt"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    469,
    (Il2CppObject *)StringLiteral_22329/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    470,
    (Il2CppObject *)StringLiteral_22331/*"mstWarBoardEvent"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    471,
    (Il2CppObject *)StringLiteral_22332/*"mstWarBoardEventScript"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    472,
    (Il2CppObject *)StringLiteral_22349/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    473,
    (Il2CppObject *)StringLiteral_22347/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    474,
    (Il2CppObject *)StringLiteral_22327/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    475,
    (Il2CppObject *)StringLiteral_22343/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    476,
    (Il2CppObject *)StringLiteral_22333/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    477,
    (Il2CppObject *)StringLiteral_22286/*"mstSvtProfilePush"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    478,
    (Il2CppObject *)StringLiteral_22163/*"mstMapGimmickPath"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    479,
    (Il2CppObject *)StringLiteral_22164/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    480,
    (Il2CppObject *)StringLiteral_22281/*"mstSvtOverwrite"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    481,
    (Il2CppObject *)StringLiteral_22151/*"mstIndividualityPolicy"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    482,
    (Il2CppObject *)StringLiteral_22150/*"mstIndividualityPersonality"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    483,
    (Il2CppObject *)StringLiteral_21944/*"mstAttri"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    484,
    (Il2CppObject *)StringLiteral_22299/*"mstSvtVoicePattern"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    485,
    (Il2CppObject *)StringLiteral_24862/*"userGameCommon"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    486,
    (Il2CppObject *)StringLiteral_22284/*"mstSvtPhoto"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    487,
    (Il2CppObject *)StringLiteral_22170/*"mstMasterPhoto"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    488,
    (Il2CppObject *)StringLiteral_22360/*"mstWarMessage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    489,
    (Il2CppObject *)StringLiteral_22184/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    490,
    (Il2CppObject *)StringLiteral_22115/*"mstExcludeMotionCond"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    491,
    (Il2CppObject *)StringLiteral_24866/*"userInterruptionQuest"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    492,
    (Il2CppObject *)StringLiteral_22293/*"mstSvtTransform"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    493,
    (Il2CppObject *)StringLiteral_22167/*"mstMapUpdateSchedule"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    494,
    (Il2CppObject *)StringLiteral_22195/*"mstQuestPhasePresent"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    495,
    (Il2CppObject *)StringLiteral_24811/*"userAccountLinkage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    496,
    (Il2CppObject *)StringLiteral_22174/*"mstMissionNaviTransition"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    497,
    (Il2CppObject *)StringLiteral_22106/*"mstEventTradeGoods"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    498,
    (Il2CppObject *)StringLiteral_22107/*"mstEventTradePickup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    499,
    (Il2CppObject *)StringLiteral_22108/*"mstEventTradeStore"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    500,
    (Il2CppObject *)StringLiteral_24849/*"userEventTrade"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    501,
    (Il2CppObject *)StringLiteral_22173/*"mstMissionNaviQuest"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    502,
    (Il2CppObject *)StringLiteral_22900/*"paymentHistory"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    503,
    (Il2CppObject *)StringLiteral_24850/*"userExternalPaymentStone"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    504,
    (Il2CppObject *)StringLiteral_22194/*"mstQuestPhaseIndividuality"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    505,
    (Il2CppObject *)StringLiteral_24997/*"viewGachaFeaturedSvt"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    511,
    (Il2CppObject *)StringLiteral_22014/*"mstEffectMovie"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    506,
    (Il2CppObject *)StringLiteral_22137/*"mstGachaPickupCollateral"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    507,
    (Il2CppObject *)StringLiteral_22138/*"mstGachaPickupCollateralGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    508,
    (Il2CppObject *)StringLiteral_21955/*"mstBattlePoint"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    509,
    (Il2CppObject *)StringLiteral_21956/*"mstBattlePointPhase"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    510,
    (Il2CppObject *)StringLiteral_22255/*"mstSvtBattlePoint"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    512,
    (Il2CppObject *)StringLiteral_22180/*"mstPaymentLimit"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    513,
    (Il2CppObject *)StringLiteral_24870/*"userPaymentLimit"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    514,
    (Il2CppObject *)StringLiteral_22221/*"mstRoadmap"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    515,
    (Il2CppObject *)StringLiteral_24880/*"userRecommendSupport"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    517,
    (Il2CppObject *)StringLiteral_22212/*"mstRecommendAdviceMessage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    516,
    (Il2CppObject *)StringLiteral_22213/*"mstRecommendSupportQuest"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    518,
    (Il2CppObject *)StringLiteral_24879/*"userRecommendFollower"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    519,
    (Il2CppObject *)StringLiteral_22153/*"mstItemDropEfficiency"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    520,
    (Il2CppObject *)StringLiteral_21960/*"mstBlankEarthGimmickAdd"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    521,
    (Il2CppObject *)StringLiteral_22362/*"mstWarRelease"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    522,
    (Il2CppObject *)StringLiteral_22223/*"mstSelectBonusBase"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    523,
    (Il2CppObject *)StringLiteral_22222/*"mstSelectBonus"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    524,
    (Il2CppObject *)StringLiteral_22176/*"mstMyroomSvtSpecialImage"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    525,
    (Il2CppObject *)StringLiteral_22230/*"mstShopReset"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    526,
    (Il2CppObject *)StringLiteral_22572/*"npcSvtDisplayTypeDetail"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    527,
    (Il2CppObject *)StringLiteral_22119/*"mstFriendshipSvt"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    528,
    (Il2CppObject *)StringLiteral_19634/*"exchangeSvtCoinGivenNum"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    529,
    (Il2CppObject *)StringLiteral_21976/*"mstChaldeaGatePickup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    530,
    (Il2CppObject *)StringLiteral_22359/*"mstWarGroupIgnore"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    531,
    (Il2CppObject *)StringLiteral_22149/*"mstImagePartsGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    532,
    (Il2CppObject *)StringLiteral_24865/*"userImagePartsGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    533,
    (Il2CppObject *)StringLiteral_22172/*"mstMissionItemDisplay"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    534,
    (Il2CppObject *)StringLiteral_22210/*"mstQuestUseItemGroup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    535,
    (Il2CppObject *)StringLiteral_22211/*"mstQuestUseItemPickup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    536,
    (Il2CppObject *)StringLiteral_24836/*"userEventItemLinkSvt"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  DataNameKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_DataNameKind_Kind__string__o *)v1;
  sub_1C21DDC((PartyOrganizationUtility_o *)DataNameKind_TypeInfo->static_fields, (int64_t)v1, v4, v5, v6, v7, v8, v9);
}


void __fastcall DataNameKind___ctor(DataNameKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall DataNameKind__GetName(int32_t kind, const MethodInfo *method)
{
  DataNameKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4BDB4D4 & 1) == 0 )
  {
    sub_1C21E38(&DataNameKind_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_4BDB4D4 = 1;
  }
  v3 = DataNameKind_TypeInfo;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
    v3 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1C22094(0LL, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_32E61D8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}