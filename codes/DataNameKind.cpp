void DataNameKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596F677 & 1) == 0 )
  {
    sub_2213A60(&DataNameKind_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_2213A60(&StringLiteral_22979/*"mstEventTradeGoods"*/);
    sub_2213A60(&StringLiteral_25905/*"userGameCommon"*/);
    sub_2213A60(&StringLiteral_22939/*"mstEventMissionConditionDetail"*/);
    sub_2213A60(&StringLiteral_23194/*"mstTreasureBoxGift"*/);
    sub_2213A60(&StringLiteral_22929/*"mstEventJob"*/);
    sub_2213A60(&StringLiteral_22867/*"mstCommandCodeComment"*/);
    sub_2213A60(&StringLiteral_22935/*"mstEventMissionAction"*/);
    sub_2213A60(&StringLiteral_25869/*"userEventAlloutBattle"*/);
    sub_2213A60(&StringLiteral_24165/*"reachedWaveInfo"*/);
    sub_2213A60(&StringLiteral_22896/*"mstEventBonusFilterGroupInfo"*/);
    sub_2213A60(&StringLiteral_25922/*"userRecommendFollower"*/);
    sub_2213A60(&StringLiteral_23083/*"mstQuestReleaseOverwrite"*/);
    sub_2213A60(&StringLiteral_23043/*"mstMapGimmickRelease"*/);
    sub_2213A60(&StringLiteral_23006/*"mstGachaExtraGift"*/);
    sub_2213A60(&StringLiteral_23459/*"npcSvtFollowerIndividuality"*/);
    sub_2213A60(&StringLiteral_22898/*"mstEventBossStatusUi"*/);
    sub_2213A60(&StringLiteral_25932/*"userSvtAppendPassiveSkillLv"*/);
    sub_2213A60(&StringLiteral_22851/*"mstClassRelation"*/);
    sub_2213A60(&StringLiteral_22805/*"mstAiAct"*/);
    sub_2213A60(&StringLiteral_23139/*"mstSvtAnimationOverwrite"*/);
    sub_2213A60(&StringLiteral_23085/*"mstQuestRestriction"*/);
    sub_2213A60(&StringLiteral_22878/*"mstCv"*/);
    sub_2213A60(&StringLiteral_25874/*"userEventDigging"*/);
    sub_2213A60(&StringLiteral_25286/*"tblUserGame"*/);
    sub_2213A60(&StringLiteral_22909/*"mstEventDataLostBattle"*/);
    sub_2213A60(&StringLiteral_22899/*"mstEventBuddyPoint"*/);
    sub_2213A60(&StringLiteral_22825/*"mstBgmRelease"*/);
    sub_2213A60(&StringLiteral_23166/*"mstSvtMaterialTd"*/);
    sub_2213A60(&StringLiteral_22872/*"mstCommonRelease"*/);
    sub_2213A60(&StringLiteral_25925/*"userShopDaily"*/);
    sub_2213A60(&StringLiteral_22991/*"mstFriendship"*/);
    sub_2213A60(&StringLiteral_25853/*"userClassBoardSquare"*/);
    sub_2213A60(&StringLiteral_22876/*"mstConstantLong"*/);
    sub_2213A60(&StringLiteral_22850/*"mstClassBoardSquare"*/);
    sub_2213A60(&StringLiteral_25936/*"userSvtCommandCode"*/);
    sub_2213A60(&StringLiteral_23066/*"mstQuestBehavior"*/);
    sub_2213A60(&StringLiteral_23031/*"mstItemDropEfficiency"*/);
    sub_2213A60(&StringLiteral_23165/*"mstSvtMaterialFolder"*/);
    sub_2213A60(&StringLiteral_23241/*"mstWarBoardStagePieceDetail"*/);
    sub_2213A60(&StringLiteral_22980/*"mstEventTradePickup"*/);
    sub_2213A60(&StringLiteral_22897/*"mstEventBonusFilterGroupMember"*/);
    sub_2213A60(&StringLiteral_23071/*"mstQuestHint"*/);
    sub_2213A60(&StringLiteral_22870/*"mstCommandSpell"*/);
    sub_2213A60(&StringLiteral_22803/*"mstAdCheckPoint"*/);
    sub_2213A60(&StringLiteral_23062/*"mstPrivilege"*/);
    sub_2213A60(&StringLiteral_23072/*"mstQuestHintOverwrite"*/);
    sub_2213A60(&StringLiteral_22832/*"mstBoardMessageRelease"*/);
    sub_2213A60(&StringLiteral_23012/*"mstGachaRelease"*/);
    sub_2213A60(&StringLiteral_25865/*"userDeleteReservation"*/);
    sub_2213A60(&StringLiteral_23193/*"mstTreasureBox"*/);
    sub_2213A60(&StringLiteral_25908/*"userImagePartsGroup"*/);
    sub_2213A60(&StringLiteral_22887/*"mstEquipExp"*/);
    sub_2213A60(&StringLiteral_22894/*"mstEventBoardGameTokenReward"*/);
    sub_2213A60(&StringLiteral_23146/*"mstSvtCoin"*/);
    sub_2213A60(&StringLiteral_23177/*"mstSvtScriptMultiple"*/);
    sub_2213A60(&StringLiteral_23050/*"mstMaterialFolder"*/);
    sub_2213A60(&StringLiteral_22905/*"mstEventCombineCostume"*/);
    sub_2213A60(&StringLiteral_23068/*"mstQuestDateRange"*/);
    sub_2213A60(&StringLiteral_23237/*"mstWarBoardStageBoss"*/);
    sub_2213A60(&StringLiteral_22839/*"mstBuffConvert"*/);
    sub_2213A60(&StringLiteral_25880/*"userEventMapGimmick"*/);
    sub_2213A60(&StringLiteral_23094/*"mstQuestUseItemPickup"*/);
    sub_2213A60(&StringLiteral_22812/*"mstAuraEffect"*/);
    sub_2213A60(&StringLiteral_22957/*"mstEventRaceResult"*/);
    sub_2213A60(&StringLiteral_23107/*"mstSetItem"*/);
    sub_2213A60(&StringLiteral_23456/*"npcSvtDisplayTypeDetail"*/);
    sub_2213A60(&StringLiteral_23131/*"mstStaffPhotoCostume"*/);
    sub_2213A60(&StringLiteral_23017/*"mstGalleryFolderRelease"*/);
    sub_2213A60(&StringLiteral_23097/*"mstRecover"*/);
    sub_2213A60(&StringLiteral_22972/*"mstEventStatusQuest"*/);
    sub_2213A60(&StringLiteral_25871/*"userEventCooltimeReward"*/);
    sub_2213A60(&StringLiteral_23060/*"mstPaymentLimit"*/);
    sub_2213A60(&StringLiteral_23215/*"mstWarBoardActionTrendGroup"*/);
    sub_2213A60(&StringLiteral_25921/*"userQuestRoute"*/);
    sub_2213A60(&StringLiteral_23123/*"mstSkillLv"*/);
    sub_2213A60(&StringLiteral_23158/*"mstSvtGroup"*/);
    sub_2213A60(&StringLiteral_23202/*"mstVoiceClosedMessage"*/);
    sub_2213A60(&StringLiteral_22918/*"mstEventExpeditionPiece"*/);
    sub_2213A60(&StringLiteral_23065/*"mstQuestAutoOrganizationAdjust"*/);
    sub_2213A60(&StringLiteral_23167/*"mstSvtMultiPortrait"*/);
    sub_2213A60(&StringLiteral_22921/*"mstEventFilter"*/);
    sub_2213A60(&StringLiteral_23052/*"mstMissionNaviQuest"*/);
    sub_2213A60(&StringLiteral_25923/*"userRecommendSupport"*/);
    sub_2213A60(&StringLiteral_25910/*"userItem"*/);
    sub_2213A60(&StringLiteral_22917/*"mstEventExpedition"*/);
    sub_2213A60(&StringLiteral_22956/*"mstEventRace"*/);
    sub_2213A60(&StringLiteral_23086/*"mstQuestRestrictionInfo"*/);
    sub_2213A60(&StringLiteral_23084/*"mstQuestReset"*/);
    sub_2213A60(&StringLiteral_25875/*"userEventExpedition"*/);
    sub_2213A60(&StringLiteral_22924/*"mstEventFortificationSvt"*/);
    sub_2213A60(&StringLiteral_23242/*"mstWarBoardStageReinforcements"*/);
    sub_2213A60(&StringLiteral_22845/*"mstClassBoardBase"*/);
    sub_2213A60(&StringLiteral_22883/*"mstEnemyMaster"*/);
    sub_2213A60(&StringLiteral_22813/*"mstAuraEffectPosOverwrite"*/);
    sub_2213A60(&StringLiteral_23101/*"mstRestrictionSlot"*/);
    sub_2213A60(&StringLiteral_23014/*"mstGachaSub"*/);
    sub_2213A60(&StringLiteral_22976/*"mstEventSvtPointRank"*/);
    sub_2213A60(&StringLiteral_22949/*"mstEventPointGroup"*/);
    sub_2213A60(&StringLiteral_22891/*"mstEventAdd"*/);
    sub_2213A60(&StringLiteral_22885/*"mstEquip"*/);
    sub_2213A60(&StringLiteral_22961/*"mstEventRecipeGift"*/);
    sub_2213A60(&StringLiteral_23189/*"mstTelop"*/);
    sub_2213A60(&StringLiteral_25934/*"userSvtCollection"*/);
    sub_2213A60(&StringLiteral_25883/*"userEventMissionFix"*/);
    sub_2213A60(&StringLiteral_23099/*"mstRestrictionBase"*/);
    sub_2213A60(&StringLiteral_23191/*"mstTips"*/);
    sub_2213A60(&StringLiteral_23130/*"mstStaffPhoto"*/);
    sub_2213A60(&StringLiteral_22814/*"mstBankShop"*/);
    sub_2213A60(&StringLiteral_22987/*"mstEventVoicePlay"*/);
    sub_2213A60(&StringLiteral_23093/*"mstQuestUseItemGroup"*/);
    sub_2213A60(&StringLiteral_22923/*"mstEventFortificationDetail"*/);
    sub_2213A60(&StringLiteral_25890/*"userEventSuperBoss"*/);
    sub_2213A60(&StringLiteral_22922/*"mstEventFortification"*/);
    sub_2213A60(&StringLiteral_22974/*"mstEventSvt"*/);
    sub_2213A60(&StringLiteral_23206/*"mstVoicePlayGroup"*/);
    sub_2213A60(&StringLiteral_25873/*"userEventDeck"*/);
    sub_2213A60(&StringLiteral_23125/*"mstSpotAdd"*/);
    sub_2213A60(&StringLiteral_22863/*"mstCombineSkill"*/);
    sub_2213A60(&StringLiteral_23234/*"mstWarBoardSquare"*/);
    sub_2213A60(&StringLiteral_22840/*"mstBuffTypeDetail"*/);
    sub_2213A60(&StringLiteral_23212/*"mstWarBoardActionPointClass"*/);
    sub_2213A60(&StringLiteral_23105/*"mstSelectBonus"*/);
    sub_2213A60(&StringLiteral_23181/*"mstSvtTransform"*/);
    sub_2213A60(&StringLiteral_25914/*"userPresentBox"*/);
    sub_2213A60(&StringLiteral_25891/*"userEventSvtPoint"*/);
    sub_2213A60(&StringLiteral_25426/*"totalEventPoint"*/);
    sub_2213A60(&StringLiteral_22865/*"mstCommandCardRankParam"*/);
    sub_2213A60(&StringLiteral_23217/*"mstWarBoardCommonRelease"*/);
    sub_2213A60(&StringLiteral_23137/*"mstSvt"*/);
    sub_2213A60(&StringLiteral_25924/*"userShop"*/);
    sub_2213A60(&StringLiteral_22892/*"mstEventBoardGameCell"*/);
    sub_2213A60(&StringLiteral_22955/*"mstEventQuestCooltime"*/);
    sub_2213A60(&StringLiteral_22997/*"mstFuncTypeDetail"*/);
    sub_2213A60(&StringLiteral_23134/*"mstStatusEffectPosOverwrite"*/);
    sub_2213A60(&StringLiteral_20033/*"eventBoostItemUsed"*/);
    sub_2213A60(&StringLiteral_23112/*"mstShopDetail"*/);
    sub_2213A60(&StringLiteral_23029/*"mstIndividualityPolicy"*/);
    sub_2213A60(&StringLiteral_23035/*"mstMapButton"*/);
    sub_2213A60(&StringLiteral_23244/*"mstWarBoardTacticalTrend"*/);
    sub_2213A60(&StringLiteral_23136/*"mstSubEquip"*/);
    sub_2213A60(&StringLiteral_23128/*"mstSpotPath"*/);
    sub_2213A60(&StringLiteral_23104/*"mstRoadmap"*/);
    sub_2213A60(&StringLiteral_22860/*"mstCombineMaterial"*/);
    sub_2213A60(&StringLiteral_22859/*"mstCombineLimitRelease"*/);
    sub_2213A60(&StringLiteral_23198/*"mstTreasureDeviceLv"*/);
    sub_2213A60(&StringLiteral_22977/*"mstEventTower"*/);
    sub_2213A60(&StringLiteral_23117/*"mstSkill"*/);
    sub_2213A60(&StringLiteral_25909/*"userInterruptionQuest"*/);
    sub_2213A60(&StringLiteral_23169/*"mstSvtPassiveSkill"*/);
    sub_2213A60(&StringLiteral_23183/*"mstSvtTreasureDeviceAdd"*/);
    sub_2213A60(&StringLiteral_22829/*"mstBlankEarthSpotAdd"*/);
    sub_2213A60(&StringLiteral_25918/*"userQuest"*/);
    sub_2213A60(&StringLiteral_22938/*"mstEventMissionCondition"*/);
    sub_2213A60(&StringLiteral_23211/*"mstWarBoardActionPoint"*/);
    sub_2213A60(&StringLiteral_25893/*"userExternalPaymentStone"*/);
    sub_2213A60(&StringLiteral_22853/*"mstClosedMessage"*/);
    sub_2213A60(&StringLiteral_22964/*"mstEventRewardExtra"*/);
    sub_2213A60(&StringLiteral_22947/*"mstEventPointActivity"*/);
    sub_2213A60(&StringLiteral_22954/*"mstEventQuest"*/);
    sub_2213A60(&StringLiteral_22820/*"mstBattleMessageGroup"*/);
    sub_2213A60(&StringLiteral_26054/*"viewQuestInfo"*/);
    sub_2213A60(&StringLiteral_23173/*"mstSvtProfilePush"*/);
    sub_2213A60(&StringLiteral_23197/*"mstTreasureDeviceDetail"*/);
    sub_2213A60(&StringLiteral_25851/*"userBlacklist"*/);
    sub_2213A60(&StringLiteral_22916/*"mstEventEquipSkillRelease"*/);
    sub_2213A60(&StringLiteral_25855/*"userCoinRoom"*/);
    sub_2213A60(&StringLiteral_22877/*"mstConstantStr"*/);
    sub_2213A60(&StringLiteral_22915/*"mstEventEquipSkillParts"*/);
    sub_2213A60(&StringLiteral_23016/*"mstGallery"*/);
    sub_2213A60(&StringLiteral_25940/*"userSvtGrand"*/);
    sub_2213A60(&StringLiteral_23135/*"mstStoneShop"*/);
    sub_2213A60(&StringLiteral_23045/*"mstMapUpdateSchedule"*/);
    sub_2213A60(&StringLiteral_23192/*"mstTotalLogin"*/);
    sub_2213A60(&StringLiteral_23058/*"mstOpeningMovie"*/);
    sub_2213A60(&StringLiteral_22875/*"mstConstant"*/);
    sub_2213A60(&StringLiteral_23092/*"mstQuestSpotRelease"*/);
    sub_2213A60(&StringLiteral_22868/*"mstCommandCodeSkill"*/);
    sub_2213A60(&StringLiteral_23063/*"mstQuest"*/);
    sub_2213A60(&StringLiteral_23187/*"mstSvtVoicePattern"*/);
    sub_2213A60(&StringLiteral_22983/*"mstEventTutorialCond"*/);
    sub_2213A60(&StringLiteral_22827/*"mstBlankEarthGimmickAdd"*/);
    sub_2213A60(&StringLiteral_23210/*"mstWarBoard"*/);
    sub_2213A60(&StringLiteral_22958/*"mstEventRaid"*/);
    sub_2213A60(&StringLiteral_22824/*"mstBgm"*/);
    sub_2213A60(&StringLiteral_22970/*"mstEventScriptRelease"*/);
    sub_2213A60(&StringLiteral_25917/*"userProfile"*/);
    sub_2213A60(&StringLiteral_22937/*"mstEventMissionAdd"*/);
    sub_2213A60(&StringLiteral_23207/*"mstVoiceRelease"*/);
    sub_2213A60(&StringLiteral_23081/*"mstQuestRandomGroup"*/);
    sub_2213A60(&StringLiteral_23053/*"mstMissionNaviTransition"*/);
    sub_2213A60(&StringLiteral_23114/*"mstShopRelease"*/);
    sub_2213A60(&StringLiteral_25944/*"userSvtStorage"*/);
    sub_2213A60(&StringLiteral_23010/*"mstGachaPickupCollateral"*/);
    sub_2213A60(&StringLiteral_23095/*"mstRecommendAdviceMessage"*/);
    sub_2213A60(&StringLiteral_23096/*"mstRecommendSupportQuest"*/);
    sub_2213A60(&StringLiteral_25931/*"userSvtAppendPassiveSkill"*/);
    sub_2213A60(&StringLiteral_23138/*"mstSvtAdd"*/);
    sub_2213A60(&StringLiteral_23022/*"mstGrandGraph"*/);
    sub_2213A60(&StringLiteral_23248/*"mstWarMessage"*/);
    sub_2213A60(&StringLiteral_22830/*"mstBlankEarthSpotNavimenu"*/);
    sub_2213A60(&StringLiteral_22818/*"mstBattleMasterImage"*/);
    sub_2213A60(&StringLiteral_23119/*"mstSkillDetail"*/);
    sub_2213A60(&StringLiteral_23047/*"mstMasterMission"*/);
    sub_2213A60(&StringLiteral_23170/*"mstSvtPassiveSkillRelease"*/);
    sub_2213A60(&StringLiteral_23124/*"mstSpot"*/);
    sub_2213A60(&StringLiteral_22934/*"mstEventMission"*/);
    sub_2213A60(&StringLiteral_22862/*"mstCombineQpSvtEquip"*/);
    sub_2213A60(&StringLiteral_22946/*"mstEventPoint"*/);
    sub_2213A60(&StringLiteral_22968/*"mstEventRewardSet"*/);
    sub_2213A60(&StringLiteral_22943/*"mstEventPanelMapDetail"*/);
    sub_2213A60(&StringLiteral_23144/*"mstSvtCardAdd"*/);
    sub_2213A60(&StringLiteral_23034/*"mstMap"*/);
    sub_2213A60(&StringLiteral_22912/*"mstEventDigging"*/);
    sub_2213A60(&StringLiteral_25899/*"userGacha"*/);
    sub_2213A60(&StringLiteral_23082/*"mstQuestRelease"*/);
    sub_2213A60(&StringLiteral_22911/*"mstEventDetail"*/);
    sub_2213A60(&StringLiteral_23027/*"mstImagePartsGroup"*/);
    sub_2213A60(&StringLiteral_23044/*"mstMapLayer"*/);
    sub_2213A60(&StringLiteral_23221/*"mstWarBoardFutureActionTrend"*/);
    sub_2213A60(&StringLiteral_23122/*"mstSkillIndividuality"*/);
    sub_2213A60(&StringLiteral_22836/*"mstBoxGachaBaseDetail"*/);
    sub_2213A60(&StringLiteral_25285/*"tblFriend"*/);
    sub_2213A60(&StringLiteral_17860/*"beforeBirthDay"*/);
    sub_2213A60(&StringLiteral_22928/*"mstEventItemDisplayRelease"*/);
    sub_2213A60(&StringLiteral_23018/*"mstGalleryResource"*/);
    sub_2213A60(&StringLiteral_17779/*"battle"*/);
    sub_2213A60(&StringLiteral_23113/*"mstShopGroup"*/);
    sub_2213A60(&StringLiteral_22811/*"mstAttriRelation"*/);
    sub_2213A60(&StringLiteral_25856/*"userCommandCode"*/);
    sub_2213A60(&StringLiteral_22903/*"mstEventCampaignRelease"*/);
    sub_2213A60(&StringLiteral_23155/*"mstSvtFilter"*/);
    sub_2213A60(&StringLiteral_23080/*"mstQuestRacePoint"*/);
    sub_2213A60(&StringLiteral_23111/*"mstShopDaily"*/);
    sub_2213A60(&StringLiteral_22981/*"mstEventTradeStore"*/);
    sub_2213A60(&StringLiteral_23636/*"otherUserGame"*/);
    sub_2213A60(&StringLiteral_22822/*"mstBattlePointPhase"*/);
    sub_2213A60(&StringLiteral_22927/*"mstEventItemDisplayGroup"*/);
    sub_2213A60(&StringLiteral_22842/*"mstCard"*/);
    sub_2213A60(&StringLiteral_22826/*"mstBlankEarthGimmick"*/);
    sub_2213A60(&StringLiteral_22819/*"mstBattleMessage"*/);
    sub_2213A60(&StringLiteral_23102/*"mstRestrictionSlotDetail"*/);
    sub_2213A60(&StringLiteral_25878/*"userEventJob"*/);
    sub_2213A60(&StringLiteral_22815/*"mstBanner"*/);
    sub_2213A60(&StringLiteral_22884/*"mstEnemyMasterBattle"*/);
    sub_2213A60(&StringLiteral_22926/*"mstEventItemDisplay"*/);
    sub_2213A60(&StringLiteral_22841/*"mstCampaignInfo"*/);
    sub_2213A60(&StringLiteral_23182/*"mstSvtTreasureDevice"*/);
    sub_2213A60(&StringLiteral_23180/*"mstSvtSkillRelease"*/);
    sub_2213A60(&StringLiteral_23061/*"mstPhotoFrame"*/);
    sub_2213A60(&StringLiteral_22874/*"mstCompleteMission"*/);
    sub_2213A60(&StringLiteral_22857/*"mstCombineLimit"*/);
    sub_2213A60(&StringLiteral_23023/*"mstGrandGraphDetail"*/);
    sub_2213A60(&StringLiteral_22834/*"mstBoxGacha"*/);
    sub_2213A60(&StringLiteral_23204/*"mstVoiceMaterialCond"*/);
    sub_2213A60(&StringLiteral_22999/*"mstGachaAdjustAdd"*/);
    sub_2213A60(&StringLiteral_23013/*"mstGachaStoryAdjust"*/);
    sub_2213A60(&StringLiteral_23200/*"mstUserExp"*/);
    sub_2213A60(&StringLiteral_22988/*"mstExcludeMotionCond"*/);
    sub_2213A60(&StringLiteral_23223/*"mstWarBoardItem"*/);
    sub_2213A60(&StringLiteral_22886/*"mstEquipAdd"*/);
    sub_2213A60(&StringLiteral_22879/*"mstDialogMessage"*/);
    sub_2213A60(&StringLiteral_23458/*"npcSvtFollower"*/);
    sub_2213A60(&StringLiteral_22817/*"mstBattleBg"*/);
    sub_2213A60(&StringLiteral_22846/*"mstClassBoardClass"*/);
    sub_2213A60(&StringLiteral_25884/*"userEventPoint"*/);
    sub_2213A60(&StringLiteral_23145/*"mstSvtChange"*/);
    sub_2213A60(&StringLiteral_23222/*"mstWarBoardIndividualityClass"*/);
    sub_2213A60(&StringLiteral_23001/*"mstGachaBaseCollateral"*/);
    sub_2213A60(&StringLiteral_23078/*"mstQuestPhasePresent"*/);
    sub_2213A60(&StringLiteral_23115/*"mstShopReset"*/);
    sub_2213A60(&StringLiteral_22941/*"mstEventMural"*/);
    sub_2213A60(&StringLiteral_23009/*"mstGachaPickup"*/);
    sub_2213A60(&StringLiteral_23032/*"mstItemSelect"*/);
    sub_2213A60(&StringLiteral_23159/*"mstSvtIndividuality"*/);
    sub_2213A60(&StringLiteral_25868/*"userEvent"*/);
    sub_2213A60(&StringLiteral_23245/*"mstWarBoardTreasure"*/);
    sub_2213A60(&StringLiteral_23164/*"mstSvtLvDetail"*/);
    sub_2213A60(&StringLiteral_23230/*"mstWarBoardRatingOffset"*/);
    sub_2213A60(&StringLiteral_23075/*"mstQuestPhaseDetail"*/);
    sub_2213A60(&StringLiteral_23109/*"mstShopAction"*/);
    sub_2213A60(&StringLiteral_23054/*"mstMyroomAdd"*/);
    sub_2213A60(&StringLiteral_22975/*"mstEventSvtFatigue"*/);
    sub_2213A60(&StringLiteral_22919/*"mstEventFactory"*/);
    sub_2213A60(&StringLiteral_25900/*"userGachaDrawHistory"*/);
    sub_2213A60(&StringLiteral_25895/*"userFollower"*/);
    sub_2213A60(&StringLiteral_23231/*"mstWarBoardRatingOffsetGroup"*/);
    sub_2213A60(&StringLiteral_25933/*"userSvtCoin"*/);
    sub_2213A60(&StringLiteral_22969/*"mstEventScript"*/);
    sub_2213A60(&StringLiteral_23178/*"mstSvtSkill"*/);
    sub_2213A60(&StringLiteral_23127/*"mstSpotLayer"*/);
    sub_2213A60(&StringLiteral_25935/*"userSvtCommandCard"*/);
    sub_2213A60(&StringLiteral_25919/*"userQuestInfo"*/);
    sub_2213A60(&StringLiteral_22881/*"mstEffect"*/);
    sub_2213A60(&StringLiteral_23030/*"mstItem"*/);
    sub_2213A60(&StringLiteral_23106/*"mstSelectBonusBase"*/);
    sub_2213A60(&StringLiteral_22950/*"mstEventPointGroupAdd"*/);
    sub_2213A60(&StringLiteral_23073/*"mstQuestMessage"*/);
    sub_2213A60(&StringLiteral_23453/*"npcFollowerRelease"*/);
    sub_2213A60(&StringLiteral_22994/*"mstFuncCategory"*/);
    sub_2213A60(&StringLiteral_23224/*"mstWarBoardMessage"*/);
    sub_2213A60(&StringLiteral_25904/*"userGame"*/);
    sub_2213A60(&StringLiteral_23019/*"mstGift"*/);
    sub_2213A60(&StringLiteral_23232/*"mstWarBoardReinforcements"*/);
    sub_2213A60(&StringLiteral_22893/*"mstEventBoardGameToken"*/);
    sub_2213A60(&StringLiteral_23039/*"mstMapGimmickLayer"*/);
    sub_2213A60(&StringLiteral_23148/*"mstSvtCommandCodeUnlock"*/);
    sub_2213A60(&StringLiteral_22809/*"mstAssist"*/);
    sub_2213A60(&StringLiteral_26055/*"viewWaveEnemy"*/);
    sub_2213A60(&StringLiteral_23457/*"npcSvtEquip"*/);
    sub_2213A60(&StringLiteral_23089/*"mstQuestScriptMaterialNext"*/);
    sub_2213A60(&StringLiteral_23154/*"mstSvtExp"*/);
    sub_2213A60(&StringLiteral_25930/*"userSvt"*/);
    sub_2213A60(&StringLiteral_26050/*"viewEnemy"*/);
    sub_2213A60(&StringLiteral_22985/*"mstEventUiRelease"*/);
    sub_2213A60(&StringLiteral_25427/*"totalEventRace"*/);
    sub_2213A60(&StringLiteral_22989/*"mstFieldMotion"*/);
    sub_2213A60(&StringLiteral_22931/*"mstEventJobPointBonus"*/);
    sub_2213A60(&StringLiteral_22959/*"mstEventRandomMission"*/);
    sub_2213A60(&StringLiteral_22966/*"mstEventRewardScene"*/);
    sub_2213A60(&StringLiteral_22992/*"mstFriendshipSvt"*/);
    sub_2213A60(&StringLiteral_23028/*"mstIndividualityPersonality"*/);
    sub_2213A60(&StringLiteral_22856/*"mstCombineCostume"*/);
    sub_2213A60(&StringLiteral_22855/*"mstCombineAppendPassiveSkill"*/);
    sub_2213A60(&StringLiteral_22914/*"mstEventDiggingReward"*/);
    sub_2213A60(&StringLiteral_23213/*"mstWarBoardActionTrend"*/);
    sub_2213A60(&StringLiteral_22823/*"mstBattleScript"*/);
    sub_2213A60(&StringLiteral_23000/*"mstGachaAppend"*/);
    sub_2213A60(&StringLiteral_23235/*"mstWarBoardSquareIndexGroup"*/);
    sub_2213A60(&StringLiteral_22993/*"mstFunc"*/);
    sub_2213A60(&StringLiteral_22907/*"mstEventConquestReward"*/);
    sub_2213A60(&StringLiteral_23218/*"mstWarBoardEffect"*/);
    sub_2213A60(&StringLiteral_23249/*"mstWarQuestSelection"*/);
    sub_2213A60(&StringLiteral_25862/*"userDeck"*/);
    sub_2213A60(&StringLiteral_23048/*"mstMasterMissionDisplayInfo"*/);
    sub_2213A60(&StringLiteral_23246/*"mstWarGroup"*/);
    sub_2213A60(&StringLiteral_23108/*"mstShop"*/);
    sub_2213A60(&StringLiteral_23227/*"mstWarBoardPartySkill"*/);
    sub_2213A60(&StringLiteral_25877/*"userEventItemLinkSvt"*/);
    sub_2213A60(&StringLiteral_22948/*"mstEventPointBuff"*/);
    sub_2213A60(&StringLiteral_23069/*"mstQuestExtension"*/);
    sub_2213A60(&StringLiteral_25929/*"userSupportDeck"*/);
    sub_2213A60(&StringLiteral_23129/*"mstSpotRoad"*/);
    sub_2213A60(&StringLiteral_23188/*"mstSvtVoiceRelation"*/);
    sub_2213A60(&StringLiteral_22858/*"mstCombineLimitGift"*/);
    sub_2213A60(&StringLiteral_22908/*"mstEventCooltimeReward"*/);
    sub_2213A60(&StringLiteral_22900/*"mstEventBulletinBoard"*/);
    sub_2213A60(&StringLiteral_22963/*"mstEventRewardBg"*/);
    sub_2213A60(&StringLiteral_22837/*"mstBoxGachaTalk"*/);
    sub_2213A60(&StringLiteral_25913/*"userPaymentLimit"*/);
    sub_2213A60(&StringLiteral_22995/*"mstFuncDisp"*/);
    sub_2213A60(&StringLiteral_23175/*"mstSvtScript"*/);
    sub_2213A60(&StringLiteral_23036/*"mstMapCond"*/);
    sub_2213A60(&StringLiteral_23055/*"mstMyroomAddBgDiff"*/);
    sub_2213A60(&StringLiteral_25876/*"userEventFortification"*/);
    sub_2213A60(&StringLiteral_23226/*"mstWarBoardOnboardSkill"*/);
    sub_2213A60(&StringLiteral_23007/*"mstGachaGroup"*/);
    sub_2213A60(&StringLiteral_26053/*"viewQuestEnemyInfo"*/);
    sub_2213A60(&StringLiteral_25849/*"userAccountLinkage"*/);
    sub_2213A60(&StringLiteral_23149/*"mstSvtComment"*/);
    sub_2213A60(&StringLiteral_23196/*"mstTreasureDevice"*/);
    sub_2213A60(&StringLiteral_26051/*"viewGachaFeaturedSvt"*/);
    sub_2213A60(&StringLiteral_25912/*"userNpcSvtRecord"*/);
    sub_2213A60(&StringLiteral_22821/*"mstBattlePoint"*/);
    sub_2213A60(&StringLiteral_22940/*"mstEventMissionGroup"*/);
    sub_2213A60(&StringLiteral_25920/*"userQuestRecord"*/);
    sub_2213A60(&StringLiteral_23100/*"mstRestrictionMessage"*/);
    sub_2213A60(&StringLiteral_23021/*"mstGiftDetail"*/);
    sub_2213A60(&StringLiteral_23015/*"mstGachaTicket"*/);
    sub_2213A60(&StringLiteral_23171/*"mstSvtPhoto"*/);
    sub_2213A60(&StringLiteral_23860/*"pickupUserFollower"*/);
    sub_2213A60(&StringLiteral_22971/*"mstEventStatus"*/);
    sub_2213A60(&StringLiteral_23150/*"mstSvtCommentAdd"*/);
    sub_2213A60(&StringLiteral_23168/*"mstSvtOverwrite"*/);
    sub_2213A60(&StringLiteral_23452/*"npcFollower"*/);
    sub_2213A60(&StringLiteral_22906/*"mstEventCommandAssist"*/);
    sub_2213A60(&StringLiteral_20046/*"eventSvtFatigue"*/);
    sub_2213A60(&StringLiteral_23004/*"mstGachaBonusSelectLineup"*/);
    sub_2213A60(&StringLiteral_22901/*"mstEventBulletinBoardRelease"*/);
    sub_2213A60(&StringLiteral_23153/*"mstSvtExceed"*/);
    sub_2213A60(&StringLiteral_23163/*"mstSvtLimitSpoilerProtection"*/);
    sub_2213A60(&StringLiteral_23186/*"mstSvtVoice"*/);
    sub_2213A60(&StringLiteral_23103/*"mstRestrictionWhole"*/);
    sub_2213A60(&StringLiteral_25902/*"userGachaExtraCount"*/);
    sub_2213A60(&StringLiteral_23041/*"mstMapGimmickPath"*/);
    sub_2213A60(&StringLiteral_22978/*"mstEventTowerReward"*/);
    sub_2213A60(&StringLiteral_22852/*"mstClassRelationOverwrite"*/);
    sub_2213A60(&StringLiteral_22804/*"mstAi"*/);
    sub_2213A60(&StringLiteral_25852/*"userBoxGacha"*/);
    sub_2213A60(&StringLiteral_23143/*"mstSvtCard"*/);
    sub_2213A60(&StringLiteral_25903/*"userGachaPickupCollateral"*/);
    sub_2213A60(&StringLiteral_25901/*"userGachaDrawLog"*/);
    sub_2213A60(&StringLiteral_23236/*"mstWarBoardStage"*/);
    sub_2213A60(&StringLiteral_25866/*"userEquip"*/);
    sub_2213A60(&StringLiteral_22965/*"mstEventRewardGuideRelease"*/);
    sub_2213A60(&StringLiteral_22847/*"mstClassBoardCommandSpell"*/);
    sub_2213A60(&StringLiteral_23046/*"mstMasterIndividualitySelect"*/);
    sub_2213A60(&StringLiteral_23250/*"mstWarRelease"*/);
    sub_2213A60(&StringLiteral_23002/*"mstGachaBehavior"*/);
    sub_2213A60(&StringLiteral_23208/*"mstWar"*/);
    sub_2213A60(&StringLiteral_22895/*"mstEventBonusFilter"*/);
    sub_2213A60(&StringLiteral_23091/*"mstQuestScriptRelease"*/);
    sub_2213A60(&StringLiteral_23110/*"mstShopAdd"*/);
    sub_2213A60(&StringLiteral_25879/*"userEventMap"*/);
    sub_2213A60(&StringLiteral_22945/*"mstEventPanelSpot"*/);
    sub_2213A60(&StringLiteral_22844/*"mstClass"*/);
    sub_2213A60(&StringLiteral_25848/*"userAccessary"*/);
    sub_2213A60(&StringLiteral_23161/*"mstSvtLimitAdd"*/);
    sub_2213A60(&StringLiteral_23090/*"mstQuestScriptMaterialOverwrite"*/);
    sub_2213A60(&StringLiteral_18929/*"combineExp"*/);
    sub_2213A60(&StringLiteral_25896/*"userFormation"*/);
    sub_2213A60(&StringLiteral_23225/*"mstWarBoardMessageScript"*/);
    sub_2213A60(&StringLiteral_22953/*"mstEventProgressValue"*/);
    sub_2213A60(&StringLiteral_25945/*"userSvtVoicePlayed"*/);
    sub_2213A60(&StringLiteral_23142/*"mstSvtBattlePoint"*/);
    sub_2213A60(&StringLiteral_23156/*"mstSvtFlag"*/);
    sub_2213A60(&StringLiteral_22831/*"mstBoardMessage"*/);
    sub_2213A60(&StringLiteral_22944/*"mstEventPanelScan"*/);
    sub_2213A60(&StringLiteral_23162/*"mstSvtLimitImage"*/);
    sub_2213A60(&StringLiteral_22913/*"mstEventDiggingBlock"*/);
    sub_2213A60(&StringLiteral_25888/*"userEventRandomMission"*/);
    sub_2213A60(&StringLiteral_22807/*"mstArea"*/);
    sub_2213A60(&StringLiteral_25428/*"totalEventRaid"*/);
    sub_2213A60(&StringLiteral_23433/*"notEndEventMissionFix"*/);
    sub_2213A60(&StringLiteral_23116/*"mstShopScript"*/);
    sub_2213A60(&StringLiteral_25881/*"userEventMission"*/);
    sub_2213A60(&StringLiteral_23049/*"mstMasterPhoto"*/);
    sub_2213A60(&StringLiteral_22936/*"mstEventMissionActionAdd"*/);
    sub_2213A60(&StringLiteral_22864/*"mstCombineTd"*/);
    sub_2213A60(&StringLiteral_25939/*"userSvtFirstGetTime"*/);
    sub_2213A60(&StringLiteral_22833/*"mstBoost"*/);
    sub_2213A60(&StringLiteral_23176/*"mstSvtScriptAdd"*/);
    sub_2213A60(&StringLiteral_22835/*"mstBoxGachaBase"*/);
    sub_2213A60(&StringLiteral_22816/*"mstBannerAdd"*/);
    sub_2213A60(&StringLiteral_22802/*"mstAccessary"*/);
    sub_2213A60(&StringLiteral_23199/*"mstTreasureDeviceSequenceWeight"*/);
    sub_2213A60(&StringLiteral_25886/*"userEventRace"*/);
    sub_2213A60(&StringLiteral_23070/*"mstQuestGroup"*/);
    sub_2213A60(&StringLiteral_22952/*"mstEventPointUpperRelease"*/);
    sub_2213A60(&StringLiteral_25943/*"userSvtLeader"*/);
    sub_2213A60(&StringLiteral_23160/*"mstSvtLimit"*/);
    sub_2213A60(&StringLiteral_25894/*"userFollow"*/);
    sub_2213A60(&StringLiteral_22933/*"mstEventLocationCampaign"*/);
    sub_2213A60(&StringLiteral_22861/*"mstCombineQp"*/);
    sub_2213A60(&StringLiteral_22890/*"mstEvent"*/);
    sub_2213A60(&StringLiteral_23157/*"mstSvtFlagRelease"*/);
    sub_2213A60(&StringLiteral_22932/*"mstEventJobQuest"*/);
    sub_2213A60(&StringLiteral_25897/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_2213A60(&StringLiteral_25916/*"userPrivilege"*/);
    sub_2213A60(&StringLiteral_22866/*"mstCommandCode"*/);
    sub_2213A60(&StringLiteral_23140/*"mstSvtAppendPassiveSkill"*/);
    sub_2213A60(&StringLiteral_22925/*"mstEventGroup"*/);
    sub_2213A60(&StringLiteral_23003/*"mstGachaBonusSelect"*/);
    sub_2213A60(&StringLiteral_25870/*"userEventBoardGameToken"*/);
    sub_2213A60(&StringLiteral_23051/*"mstMissionItemDisplay"*/);
    sub_2213A60(&StringLiteral_23056/*"mstMyroomSvtSpecialImage"*/);
    sub_2213A60(&StringLiteral_23233/*"mstWarBoardRoad"*/);
    sub_2213A60(&StringLiteral_22838/*"mstBuff"*/);
    sub_2213A60(&StringLiteral_26117/*"warBoardData"*/);
    sub_2213A60(&StringLiteral_23026/*"mstIllustrator"*/);
    sub_2213A60(&StringLiteral_25423/*"totalBoxGacha"*/);
    sub_2213A60(&StringLiteral_23174/*"mstSvtRarity"*/);
    sub_2213A60(&StringLiteral_23209/*"mstWarAdd"*/);
    sub_2213A60(&StringLiteral_23042/*"mstMapGimmickPathRelease"*/);
    sub_2213A60(&StringLiteral_25898/*"userFriendRequestHistory"*/);
    sub_2213A60(&StringLiteral_25846/*"user"*/);
    sub_2213A60(&StringLiteral_18122/*"boxGachaHistory"*/);
    sub_2213A60(&StringLiteral_22996/*"mstFuncGroup"*/);
    sub_2213A60(&StringLiteral_22871/*"mstCommonConsume"*/);
    sub_2213A60(&StringLiteral_23220/*"mstWarBoardEventScript"*/);
    sub_2213A60(&StringLiteral_23020/*"mstGiftAdd"*/);
    sub_2213A60(&StringLiteral_22984/*"mstEventUi"*/);
    sub_2213A60(&StringLiteral_23126/*"mstSpotImage"*/);
    sub_2213A60(&StringLiteral_23152/*"mstSvtCostumeRelease"*/);
    sub_2213A60(&StringLiteral_25854/*"userClassStatistics"*/);
    sub_2213A60(&StringLiteral_23037/*"mstMapGimmick"*/);
    sub_2213A60(&StringLiteral_23077/*"mstQuestPhaseIndividuality"*/);
    sub_2213A60(&StringLiteral_22982/*"mstEventTutorial"*/);
    sub_2213A60(&StringLiteral_23247/*"mstWarGroupIgnore"*/);
    sub_2213A60(&StringLiteral_23243/*"mstWarBoardStageWall"*/);
    sub_2213A60(&StringLiteral_25892/*"userEventTrade"*/);
    sub_2213A60(&StringLiteral_22806/*"mstAiField"*/);
    sub_2213A60(&StringLiteral_22990/*"mstFriendPointGachaAdjust"*/);
    sub_2213A60(&StringLiteral_23185/*"mstSvtTreasureDeviceRelease"*/);
    sub_2213A60(&StringLiteral_23074/*"mstQuestPhase"*/);
    sub_2213A60(&StringLiteral_25872/*"userEventDataLost"*/);
    sub_2213A60(&StringLiteral_23141/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_2213A60(&StringLiteral_23184/*"mstSvtTreasureDeviceDamage"*/);
    sub_2213A60(&StringLiteral_23132/*"mstStage"*/);
    sub_2213A60(&StringLiteral_22854/*"mstCombine"*/);
    sub_2213A60(&StringLiteral_22902/*"mstEventCampaign"*/);
    sub_2213A60(&StringLiteral_23240/*"mstWarBoardStageNpc"*/);
    sub_2213A60(&StringLiteral_23827/*"paymentHistory"*/);
    sub_2213A60(&StringLiteral_20213/*"exchangeSvt"*/);
    sub_2213A60(&StringLiteral_23133/*"mstStageRemap"*/);
    sub_2213A60(&StringLiteral_23098/*"mstRestriction"*/);
    sub_2213A60(&StringLiteral_23087/*"mstQuestScript"*/);
    sub_2213A60(&StringLiteral_22967/*"mstEventRewardSceneRelease"*/);
    sub_2213A60(&StringLiteral_23203/*"mstVoiceCond"*/);
    sub_2213A60(&StringLiteral_25928/*"userSubEquip"*/);
    sub_2213A60(&StringLiteral_22960/*"mstEventRecipe"*/);
    sub_2213A60(&StringLiteral_23151/*"mstSvtCostume"*/);
    sub_2213A60(&StringLiteral_23172/*"mstSvtProfile"*/);
    sub_2213A60(&StringLiteral_22873/*"mstCommonRestriction"*/);
    sub_2213A60(&StringLiteral_25906/*"userHeelPortrait"*/);
    sub_2213A60(&StringLiteral_23121/*"mstSkillGroupOverwrite"*/);
    sub_2213A60(&StringLiteral_25857/*"userCommandCodeCollection"*/);
    sub_2213A60(&StringLiteral_22869/*"mstCommandCodeSkillRelease"*/);
    sub_2213A60(&StringLiteral_22882/*"mstEffectMovie"*/);
    sub_2213A60(&StringLiteral_23079/*"mstQuestPickup"*/);
    sub_2213A60(&StringLiteral_23239/*"mstWarBoardStageLayout"*/);
    sub_2213A60(&StringLiteral_23214/*"mstWarBoardActionTrendCond"*/);
    sub_2213A60(&StringLiteral_22904/*"mstEventCombine"*/);
    sub_2213A60(&StringLiteral_23228/*"mstWarBoardQuest"*/);
    sub_2213A60(&StringLiteral_23067/*"mstQuestConsumeItem"*/);
    sub_2213A60(&StringLiteral_23076/*"mstQuestPhaseDetailAdd"*/);
    sub_2213A60(&StringLiteral_23025/*"mstHeelPortrait"*/);
    sub_2213A60(&StringLiteral_20214/*"exchangeSvtCoinGivenNum"*/);
    sub_2213A60(&StringLiteral_25915/*"userPresentHistory"*/);
    sub_2213A60(&StringLiteral_25850/*"userBgImagePartsGroup"*/);
    sub_2213A60(&StringLiteral_22843/*"mstChaldeaGatePickup"*/);
    sub_2213A60(&StringLiteral_23229/*"mstWarBoardRatingBase"*/);
    sub_2213A60(&StringLiteral_23008/*"mstGachaImage"*/);
    sub_2213A60(&StringLiteral_22888/*"mstEquipImage"*/);
    sub_2213A60(&StringLiteral_25887/*"userEventRaid"*/);
    sub_2213A60(&StringLiteral_23147/*"mstSvtCollection"*/);
    sub_2213A60(&StringLiteral_20621/*"friendshipQuestDialogInfo"*/);
    sub_2213A60(&StringLiteral_23057/*"mstNews"*/);
    sub_2213A60(&StringLiteral_22998/*"mstGacha"*/);
    sub_2213A60(&StringLiteral_23120/*"mstSkillGroup"*/);
    sub_2213A60(&StringLiteral_23024/*"mstGuide"*/);
    sub_2213A60(&StringLiteral_23011/*"mstGachaPickupCollateralGroup"*/);
    sub_2213A60(&StringLiteral_22849/*"mstClassBoardLock"*/);
    sub_2213A60(&StringLiteral_22880/*"mstDropAdd"*/);
    sub_2213A60(&StringLiteral_22951/*"mstEventPointUpper"*/);
    sub_2213A60(&StringLiteral_22828/*"mstBlankEarthSpot"*/);
    sub_2213A60(&StringLiteral_23190/*"mstTerminalOverwrite"*/);
    sub_2213A60(&StringLiteral_22889/*"mstEquipSkill"*/);
    sub_2213A60(&StringLiteral_22986/*"mstEventUiValue"*/);
    sub_2213A60(&StringLiteral_25859/*"userContinue"*/);
    sub_2213A60(&StringLiteral_23064/*"mstQuestAdd"*/);
    sub_2213A60(&StringLiteral_22848/*"mstClassBoardLine"*/);
    sub_2213A60(&StringLiteral_25786/*"updateProfileDialogInfo"*/);
    sub_2213A60(&StringLiteral_22930/*"mstEventJobPassport"*/);
    sub_2213A60(&StringLiteral_23201/*"mstVoice"*/);
    sub_2213A60(&StringLiteral_25882/*"userEventMissionConditionDetail"*/);
    sub_2213A60(&StringLiteral_22808/*"mstAssetbundleKey"*/);
    sub_2213A60(&StringLiteral_22942/*"mstEventPanelMap"*/);
    sub_2213A60(&StringLiteral_25911/*"userLogin"*/);
    sub_2213A60(&StringLiteral_23033/*"mstLoginQuest"*/);
    sub_2213A60(&StringLiteral_23059/*"mstPartialMaintenance"*/);
    sub_2213A60(&StringLiteral_25889/*"userEventSpot"*/);
    sub_2213A60(&StringLiteral_22962/*"mstEventReward"*/);
    sub_2213A60(&StringLiteral_22910/*"mstEventDataLostBattleReset"*/);
    sub_2213A60(&StringLiteral_22810/*"mstAttri"*/);
    sub_2213A60(&StringLiteral_23238/*"mstWarBoardStageDetail"*/);
    sub_2213A60(&StringLiteral_23179/*"mstSvtSkillAdd"*/);
    sub_2213A60(&StringLiteral_25885/*"userEventQuestCooltime"*/);
    sub_2213A60(&StringLiteral_23088/*"mstQuestScriptBranchMaterial"*/);
    sub_2213A60(&StringLiteral_22920/*"mstEventFatigueRecovery"*/);
    sub_2213A60(&StringLiteral_23216/*"mstWarBoardAi"*/);
    sub_2213A60(&StringLiteral_23195/*"mstTreasureBoxTalk"*/);
    sub_2213A60(&StringLiteral_23219/*"mstWarBoardEvent"*/);
    sub_2213A60(&StringLiteral_23205/*"mstVoicePlayCond"*/);
    sub_2213A60(&StringLiteral_23005/*"mstGachaDetail"*/);
    sub_2213A60(&StringLiteral_22973/*"mstEventSuperBoss"*/);
    sub_2213A60(&StringLiteral_23118/*"mstSkillAdd"*/);
    byte_596F677 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3FBB9EC *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_2213CDC(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_23137/*"mstSvt"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_23149/*"mstSvtComment"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_23172/*"mstSvtProfile"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_23208/*"mstWar"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_17779/*"battle"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_23196/*"mstTreasureDevice"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_23160/*"mstSvtLimit"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_23182/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_22844/*"mstClass"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_23175/*"mstSvtScript"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_23143/*"mstSvtCard"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_23178/*"mstSvtSkill"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_23169/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_25930/*"userSvt"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_25944/*"userSvtStorage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_23132/*"mstStage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_23158/*"mstSvtGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_22828/*"mstBlankEarthSpot"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_22829/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_23124/*"mstSpot"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_23126/*"mstSpotImage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_23129/*"mstSpotRoad"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_23037/*"mstMapGimmick"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_23019/*"mstGift"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_23020/*"mstGiftAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_23136/*"mstSubEquip"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_25846/*"user"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_25904/*"userGame"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_25862/*"userDeck"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_25934/*"userSvtCollection"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_22991/*"mstFriendship"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_22998/*"mstGacha"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_23008/*"mstGachaImage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_25899/*"userGacha"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_25903/*"userGachaPickupCollateral"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_25910/*"userItem"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_23030/*"mstItem"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_23015/*"mstGachaTicket"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_22999/*"mstGachaAdjustAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_23009/*"mstGachaPickup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_22990/*"mstFriendPointGachaAdjust"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_23001/*"mstGachaBaseCollateral"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_22802/*"mstAccessary"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_25848/*"userAccessary"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_25928/*"userSubEquip"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_25286/*"tblUserGame"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_23108/*"mstShop"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_23135/*"mstStoneShop"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_22814/*"mstBankShop"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_23116/*"mstShopScript"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_22885/*"mstEquip"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_22887/*"mstEquipExp"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_22889/*"mstEquipSkill"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_25866/*"userEquip"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_25896/*"userFormation"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_23117/*"mstSkill"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_23123/*"mstSkillLv"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_23119/*"mstSkillDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_22993/*"mstFunc"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_22838/*"mstBuff"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_23012/*"mstGachaRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_25918/*"userQuest"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_25919/*"userQuestInfo"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_25920/*"userQuestRecord"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_23200/*"mstUserExp"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_23057/*"mstNews"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_23189/*"mstTelop"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_23636/*"otherUserGame"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_25285/*"tblFriend"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_25914/*"userPresentBox"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_22890/*"mstEvent"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_23063/*"mstQuest"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_23064/*"mstQuestAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_23082/*"mstQuestRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_23074/*"mstQuestPhase"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_23075/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_23070/*"mstQuestGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_23081/*"mstQuestRandomGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_23067/*"mstQuestConsumeItem"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_23073/*"mstQuestMessage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_26054/*"viewQuestInfo"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_26050/*"viewEnemy"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_26053/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_22807/*"mstArea"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_22824/*"mstBgm"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_22954/*"mstEventQuest"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_22902/*"mstEventCampaign"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_22861/*"mstCombineQp"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_22860/*"mstCombineMaterial"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_22904/*"mstEventCombine"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_23154/*"mstSvtExp"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_22863/*"mstCombineSkill"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_22864/*"mstCombineTd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_23026/*"mstIllustrator"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_22878/*"mstCv"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_23198/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_23197/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_25895/*"userFollower"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_23452/*"npcFollower"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_23458/*"npcSvtFollower"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_25868/*"userEvent"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_25917/*"userProfile"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_25924/*"userShop"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_25925/*"userShopDaily"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_25859/*"userContinue"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_22875/*"mstConstant"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_22876/*"mstConstantLong"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_22877/*"mstConstantStr"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_22870/*"mstCommandSpell"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_22804/*"mstAi"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_22805/*"mstAiAct"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_23186/*"mstSvtVoice"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_22811/*"mstAttriRelation"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_22851/*"mstClassRelation"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_22881/*"mstEffect"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_22888/*"mstEquipImage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_22857/*"mstCombineLimit"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_22842/*"mstCard"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_22862/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_23161/*"mstSvtLimitAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_23174/*"mstSvtRarity"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_23107/*"mstSetItem"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_23097/*"mstRecover"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_22815/*"mstBanner"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_23111/*"mstShopDaily"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_23114/*"mstShopRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_22962/*"mstEventReward"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_22911/*"mstEventDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_22974/*"mstEventSvt"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_22834/*"mstBoxGacha"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_22835/*"mstBoxGachaBase"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_22837/*"mstBoxGachaTalk"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_25852/*"userBoxGacha"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_18122/*"boxGachaHistory"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_22817/*"mstBattleBg"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_23191/*"mstTips"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_25911/*"userLogin"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_23201/*"mstVoice"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_22964/*"mstEventRewardExtra"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    140,
    (Il2CppObject *)StringLiteral_22934/*"mstEventMission"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    141,
    (Il2CppObject *)StringLiteral_22938/*"mstEventMissionCondition"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    142,
    (Il2CppObject *)StringLiteral_22939/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    143,
    (Il2CppObject *)StringLiteral_22935/*"mstEventMissionAction"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    144,
    (Il2CppObject *)StringLiteral_22936/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    147,
    (Il2CppObject *)StringLiteral_22874/*"mstCompleteMission"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    145,
    (Il2CppObject *)StringLiteral_22937/*"mstEventMissionAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    146,
    (Il2CppObject *)StringLiteral_22968/*"mstEventRewardSet"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    148,
    (Il2CppObject *)StringLiteral_25881/*"userEventMission"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    149,
    (Il2CppObject *)StringLiteral_25882/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    150,
    (Il2CppObject *)StringLiteral_22836/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    151,
    (Il2CppObject *)StringLiteral_22853/*"mstClosedMessage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    152,
    (Il2CppObject *)StringLiteral_25943/*"userSvtLeader"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    153,
    (Il2CppObject *)StringLiteral_22996/*"mstFuncGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    154,
    (Il2CppObject *)StringLiteral_22958/*"mstEventRaid"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    155,
    (Il2CppObject *)StringLiteral_25428/*"totalEventRaid"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    156,
    (Il2CppObject *)StringLiteral_25887/*"userEventRaid"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    157,
    (Il2CppObject *)StringLiteral_22946/*"mstEventPoint"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    158,
    (Il2CppObject *)StringLiteral_22949/*"mstEventPointGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    159,
    (Il2CppObject *)StringLiteral_25426/*"totalEventPoint"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    160,
    (Il2CppObject *)StringLiteral_25884/*"userEventPoint"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    161,
    (Il2CppObject *)StringLiteral_25915/*"userPresentHistory"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    162,
    (Il2CppObject *)StringLiteral_23047/*"mstMasterMission"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    163,
    (Il2CppObject *)StringLiteral_23153/*"mstSvtExceed"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    164,
    (Il2CppObject *)StringLiteral_23059/*"mstPartialMaintenance"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    165,
    (Il2CppObject *)StringLiteral_23024/*"mstGuide"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    166,
    (Il2CppObject *)StringLiteral_23048/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    167,
    (Il2CppObject *)StringLiteral_23007/*"mstGachaGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    168,
    (Il2CppObject *)StringLiteral_23084/*"mstQuestReset"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    169,
    (Il2CppObject *)StringLiteral_23209/*"mstWarAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    170,
    (Il2CppObject *)StringLiteral_22926/*"mstEventItemDisplay"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    171,
    (Il2CppObject *)StringLiteral_22927/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    172,
    (Il2CppObject *)StringLiteral_22928/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    173,
    (Il2CppObject *)StringLiteral_22982/*"mstEventTutorial"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    174,
    (Il2CppObject *)StringLiteral_22983/*"mstEventTutorialCond"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    175,
    (Il2CppObject *)StringLiteral_23207/*"mstVoiceRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    176,
    (Il2CppObject *)StringLiteral_22973/*"mstEventSuperBoss"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    177,
    (Il2CppObject *)StringLiteral_25890/*"userEventSuperBoss"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    178,
    (Il2CppObject *)StringLiteral_23087/*"mstQuestScript"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    179,
    (Il2CppObject *)StringLiteral_23091/*"mstQuestScriptRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    180,
    (Il2CppObject *)StringLiteral_23050/*"mstMaterialFolder"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    181,
    (Il2CppObject *)StringLiteral_23098/*"mstRestriction"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    182,
    (Il2CppObject *)StringLiteral_23085/*"mstQuestRestriction"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    183,
    (Il2CppObject *)StringLiteral_23188/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    184,
    (Il2CppObject *)StringLiteral_23112/*"mstShopDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    185,
    (Il2CppObject *)StringLiteral_23176/*"mstSvtScriptAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    186,
    (Il2CppObject *)StringLiteral_22854/*"mstCombine"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    187,
    (Il2CppObject *)StringLiteral_22806/*"mstAiField"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    188,
    (Il2CppObject *)StringLiteral_23150/*"mstSvtCommentAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    189,
    (Il2CppObject *)StringLiteral_22921/*"mstEventFilter"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    190,
    (Il2CppObject *)StringLiteral_25929/*"userSupportDeck"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    191,
    (Il2CppObject *)StringLiteral_22966/*"mstEventRewardScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    192,
    (Il2CppObject *)StringLiteral_22987/*"mstEventVoicePlay"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    193,
    (Il2CppObject *)StringLiteral_23014/*"mstGachaSub"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    194,
    (Il2CppObject *)StringLiteral_23005/*"mstGachaDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    195,
    (Il2CppObject *)StringLiteral_23003/*"mstGachaBonusSelect"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    196,
    (Il2CppObject *)StringLiteral_23004/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    197,
    (Il2CppObject *)StringLiteral_23145/*"mstSvtChange"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    198,
    (Il2CppObject *)StringLiteral_23203/*"mstVoiceCond"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    199,
    (Il2CppObject *)StringLiteral_22825/*"mstBgmRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    200,
    (Il2CppObject *)StringLiteral_23054/*"mstMyroomAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    201,
    (Il2CppObject *)StringLiteral_23109/*"mstShopAction"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    202,
    (Il2CppObject *)StringLiteral_22967/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    203,
    (Il2CppObject *)StringLiteral_23034/*"mstMap"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    204,
    (Il2CppObject *)StringLiteral_23036/*"mstMapCond"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    205,
    (Il2CppObject *)StringLiteral_23035/*"mstMapButton"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    206,
    (Il2CppObject *)StringLiteral_22816/*"mstBannerAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    207,
    (Il2CppObject *)StringLiteral_23066/*"mstQuestBehavior"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    208,
    (Il2CppObject *)StringLiteral_22891/*"mstEventAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    209,
    (Il2CppObject *)StringLiteral_23192/*"mstTotalLogin"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    210,
    (Il2CppObject *)StringLiteral_23155/*"mstSvtFilter"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    211,
    (Il2CppObject *)StringLiteral_22856/*"mstCombineCostume"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    212,
    (Il2CppObject *)StringLiteral_23151/*"mstSvtCostume"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    213,
    (Il2CppObject *)StringLiteral_23152/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    214,
    (Il2CppObject *)StringLiteral_23130/*"mstStaffPhoto"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    215,
    (Il2CppObject *)StringLiteral_23131/*"mstStaffPhotoCostume"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    216,
    (Il2CppObject *)StringLiteral_25898/*"userFriendRequestHistory"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    217,
    (Il2CppObject *)StringLiteral_25851/*"userBlacklist"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    218,
    (Il2CppObject *)StringLiteral_23032/*"mstItemSelect"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    219,
    (Il2CppObject *)StringLiteral_22956/*"mstEventRace"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    220,
    (Il2CppObject *)StringLiteral_22957/*"mstEventRaceResult"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    221,
    (Il2CppObject *)StringLiteral_23080/*"mstQuestRacePoint"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    222,
    (Il2CppObject *)StringLiteral_25886/*"userEventRace"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    223,
    (Il2CppObject *)StringLiteral_22969/*"mstEventScript"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    224,
    (Il2CppObject *)StringLiteral_22970/*"mstEventScriptRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    225,
    (Il2CppObject *)StringLiteral_23128/*"mstSpotPath"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    226,
    (Il2CppObject *)StringLiteral_23125/*"mstSpotAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    227,
    (Il2CppObject *)StringLiteral_25427/*"totalEventRace"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    228,
    (Il2CppObject *)StringLiteral_22950/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    229,
    (Il2CppObject *)StringLiteral_23206/*"mstVoicePlayGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    230,
    (Il2CppObject *)StringLiteral_23205/*"mstVoicePlayCond"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    231,
    (Il2CppObject *)StringLiteral_23013/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    232,
    (Il2CppObject *)StringLiteral_23156/*"mstSvtFlag"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    233,
    (Il2CppObject *)StringLiteral_23157/*"mstSvtFlagRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    234,
    (Il2CppObject *)StringLiteral_22933/*"mstEventLocationCampaign"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    235,
    (Il2CppObject *)StringLiteral_22841/*"mstCampaignInfo"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    236,
    (Il2CppObject *)StringLiteral_22879/*"mstDialogMessage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    237,
    (Il2CppObject *)StringLiteral_23159/*"mstSvtIndividuality"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    238,
    (Il2CppObject *)StringLiteral_22831/*"mstBoardMessage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    239,
    (Il2CppObject *)StringLiteral_22832/*"mstBoardMessageRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    240,
    (Il2CppObject *)StringLiteral_22975/*"mstEventSvtFatigue"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    241,
    (Il2CppObject *)StringLiteral_25873/*"userEventDeck"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    242,
    (Il2CppObject *)StringLiteral_22977/*"mstEventTower"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    243,
    (Il2CppObject *)StringLiteral_22978/*"mstEventTowerReward"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    244,
    (Il2CppObject *)StringLiteral_22900/*"mstEventBulletinBoard"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    245,
    (Il2CppObject *)StringLiteral_22901/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    246,
    (Il2CppObject *)StringLiteral_22919/*"mstEventFactory"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    247,
    (Il2CppObject *)StringLiteral_23113/*"mstShopGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    248,
    (Il2CppObject *)StringLiteral_22812/*"mstAuraEffect"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    249,
    (Il2CppObject *)StringLiteral_22813/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    250,
    (Il2CppObject *)StringLiteral_25883/*"userEventMissionFix"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    251,
    (Il2CppObject *)StringLiteral_23433/*"notEndEventMissionFix"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    252,
    (Il2CppObject *)StringLiteral_22883/*"mstEnemyMaster"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    253,
    (Il2CppObject *)StringLiteral_22884/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    254,
    (Il2CppObject *)StringLiteral_23180/*"mstSvtSkillRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    255,
    (Il2CppObject *)StringLiteral_23170/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    256,
    (Il2CppObject *)StringLiteral_23185/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    257,
    (Il2CppObject *)StringLiteral_23043/*"mstMapGimmickRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    258,
    (Il2CppObject *)StringLiteral_22866/*"mstCommandCode"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    259,
    (Il2CppObject *)StringLiteral_23148/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    260,
    (Il2CppObject *)StringLiteral_25856/*"userCommandCode"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    261,
    (Il2CppObject *)StringLiteral_25857/*"userCommandCodeCollection"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    262,
    (Il2CppObject *)StringLiteral_25936/*"userSvtCommandCode"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    263,
    (Il2CppObject *)StringLiteral_22868/*"mstCommandCodeSkill"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    264,
    (Il2CppObject *)StringLiteral_22869/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    265,
    (Il2CppObject *)StringLiteral_22867/*"mstCommandCodeComment"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    266,
    (Il2CppObject *)StringLiteral_22971/*"mstEventStatus"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    267,
    (Il2CppObject *)StringLiteral_22972/*"mstEventStatusQuest"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    268,
    (Il2CppObject *)StringLiteral_22873/*"mstCommonRestriction"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    269,
    (Il2CppObject *)StringLiteral_22948/*"mstEventPointBuff"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    270,
    (Il2CppObject *)StringLiteral_25894/*"userFollow"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    271,
    (Il2CppObject *)StringLiteral_22965/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    272,
    (Il2CppObject *)StringLiteral_23457/*"npcSvtEquip"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    273,
    (Il2CppObject *)StringLiteral_22903/*"mstEventCampaignRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    274,
    (Il2CppObject *)StringLiteral_23165/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    275,
    (Il2CppObject *)StringLiteral_22916/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    276,
    (Il2CppObject *)StringLiteral_22947/*"mstEventPointActivity"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    277,
    (Il2CppObject *)StringLiteral_22994/*"mstFuncCategory"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    278,
    (Il2CppObject *)StringLiteral_23079/*"mstQuestPickup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    279,
    (Il2CppObject *)StringLiteral_22984/*"mstEventUi"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    280,
    (Il2CppObject *)StringLiteral_22985/*"mstEventUiRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    281,
    (Il2CppObject *)StringLiteral_22986/*"mstEventUiValue"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    282,
    (Il2CppObject *)StringLiteral_22907/*"mstEventConquestReward"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    283,
    (Il2CppObject *)StringLiteral_23453/*"npcFollowerRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    284,
    (Il2CppObject *)StringLiteral_22895/*"mstEventBonusFilter"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    285,
    (Il2CppObject *)StringLiteral_22896/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    286,
    (Il2CppObject *)StringLiteral_22897/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    287,
    (Il2CppObject *)StringLiteral_25902/*"userGachaExtraCount"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    288,
    (Il2CppObject *)StringLiteral_22865/*"mstCommandCardRankParam"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    289,
    (Il2CppObject *)StringLiteral_25935/*"userSvtCommandCard"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    290,
    (Il2CppObject *)StringLiteral_23062/*"mstPrivilege"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    291,
    (Il2CppObject *)StringLiteral_25916/*"userPrivilege"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    292,
    (Il2CppObject *)StringLiteral_23068/*"mstQuestDateRange"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    293,
    (Il2CppObject *)StringLiteral_22951/*"mstEventPointUpper"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    294,
    (Il2CppObject *)StringLiteral_22952/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    295,
    (Il2CppObject *)StringLiteral_25921/*"userQuestRoute"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    296,
    (Il2CppObject *)StringLiteral_22898/*"mstEventBossStatusUi"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    297,
    (Il2CppObject *)StringLiteral_22872/*"mstCommonRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    298,
    (Il2CppObject *)StringLiteral_23092/*"mstQuestSpotRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    299,
    (Il2CppObject *)StringLiteral_23204/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    300,
    (Il2CppObject *)StringLiteral_22852/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    301,
    (Il2CppObject *)StringLiteral_22925/*"mstEventGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    302,
    (Il2CppObject *)StringLiteral_22808/*"mstAssetbundleKey"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    303,
    (Il2CppObject *)StringLiteral_25423/*"totalBoxGacha"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    304,
    (Il2CppObject *)StringLiteral_23184/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    305,
    (Il2CppObject *)StringLiteral_20046/*"eventSvtFatigue"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    306,
    (Il2CppObject *)StringLiteral_22963/*"mstEventRewardBg"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    307,
    (Il2CppObject *)StringLiteral_22920/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    308,
    (Il2CppObject *)StringLiteral_20033/*"eventBoostItemUsed"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    309,
    (Il2CppObject *)StringLiteral_23134/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    310,
    (Il2CppObject *)StringLiteral_23076/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    311,
    (Il2CppObject *)StringLiteral_23202/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    312,
    (Il2CppObject *)StringLiteral_23133/*"mstStageRemap"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    313,
    (Il2CppObject *)StringLiteral_18929/*"combineExp"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    314,
    (Il2CppObject *)StringLiteral_22892/*"mstEventBoardGameCell"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    315,
    (Il2CppObject *)StringLiteral_22893/*"mstEventBoardGameToken"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    316,
    (Il2CppObject *)StringLiteral_22894/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    317,
    (Il2CppObject *)StringLiteral_25870/*"userEventBoardGameToken"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    318,
    (Il2CppObject *)StringLiteral_23139/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    319,
    (Il2CppObject *)StringLiteral_23058/*"mstOpeningMovie"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    320,
    (Il2CppObject *)StringLiteral_23163/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    321,
    (Il2CppObject *)StringLiteral_23860/*"pickupUserFollower"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    322,
    (Il2CppObject *)StringLiteral_23147/*"mstSvtCollection"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    323,
    (Il2CppObject *)StringLiteral_23002/*"mstGachaBehavior"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    324,
    (Il2CppObject *)StringLiteral_22955/*"mstEventQuestCooltime"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    325,
    (Il2CppObject *)StringLiteral_25885/*"userEventQuestCooltime"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    326,
    (Il2CppObject *)StringLiteral_22833/*"mstBoost"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    327,
    (Il2CppObject *)StringLiteral_23210/*"mstWarBoard"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    328,
    (Il2CppObject *)StringLiteral_23234/*"mstWarBoardSquare"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    329,
    (Il2CppObject *)StringLiteral_23233/*"mstWarBoardRoad"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    330,
    (Il2CppObject *)StringLiteral_23236/*"mstWarBoardStage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    331,
    (Il2CppObject *)StringLiteral_23211/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    332,
    (Il2CppObject *)StringLiteral_23213/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    333,
    (Il2CppObject *)StringLiteral_23244/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    334,
    (Il2CppObject *)StringLiteral_23239/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    335,
    (Il2CppObject *)StringLiteral_23240/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    336,
    (Il2CppObject *)StringLiteral_23243/*"mstWarBoardStageWall"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    337,
    (Il2CppObject *)StringLiteral_23216/*"mstWarBoardAi"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    338,
    (Il2CppObject *)StringLiteral_23229/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    339,
    (Il2CppObject *)StringLiteral_23230/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    340,
    (Il2CppObject *)StringLiteral_23223/*"mstWarBoardItem"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    341,
    (Il2CppObject *)StringLiteral_23245/*"mstWarBoardTreasure"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    342,
    (Il2CppObject *)StringLiteral_23228/*"mstWarBoardQuest"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    343,
    (Il2CppObject *)StringLiteral_26117/*"warBoardData"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    344,
    (Il2CppObject *)StringLiteral_23222/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    345,
    (Il2CppObject *)StringLiteral_23214/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    346,
    (Il2CppObject *)StringLiteral_23212/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    347,
    (Il2CppObject *)StringLiteral_23232/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    348,
    (Il2CppObject *)StringLiteral_23242/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    349,
    (Il2CppObject *)StringLiteral_22942/*"mstEventPanelMap"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    350,
    (Il2CppObject *)StringLiteral_22943/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    351,
    (Il2CppObject *)StringLiteral_22945/*"mstEventPanelSpot"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    352,
    (Il2CppObject *)StringLiteral_22944/*"mstEventPanelScan"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    353,
    (Il2CppObject *)StringLiteral_22912/*"mstEventDigging"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    354,
    (Il2CppObject *)StringLiteral_22914/*"mstEventDiggingReward"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    355,
    (Il2CppObject *)StringLiteral_22913/*"mstEventDiggingBlock"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    356,
    (Il2CppObject *)StringLiteral_25874/*"userEventDigging"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    357,
    (Il2CppObject *)StringLiteral_22871/*"mstCommonConsume"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    358,
    (Il2CppObject *)StringLiteral_25879/*"userEventMap"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    359,
    (Il2CppObject *)StringLiteral_25889/*"userEventSpot"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    360,
    (Il2CppObject *)StringLiteral_23246/*"mstWarGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    361,
    (Il2CppObject *)StringLiteral_23162/*"mstSvtLimitImage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    362,
    (Il2CppObject *)StringLiteral_20621/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    363,
    (Il2CppObject *)StringLiteral_23086/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    364,
    (Il2CppObject *)StringLiteral_22809/*"mstAssist"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    365,
    (Il2CppObject *)StringLiteral_23218/*"mstWarBoardEffect"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    366,
    (Il2CppObject *)StringLiteral_23226/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    367,
    (Il2CppObject *)StringLiteral_17860/*"beforeBirthDay"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    368,
    (Il2CppObject *)StringLiteral_23033/*"mstLoginQuest"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    369,
    (Il2CppObject *)StringLiteral_22905/*"mstEventCombineCostume"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    370,
    (Il2CppObject *)StringLiteral_23241/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    371,
    (Il2CppObject *)StringLiteral_23183/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    372,
    (Il2CppObject *)StringLiteral_23118/*"mstSkillAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    373,
    (Il2CppObject *)StringLiteral_23164/*"mstSvtLvDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    374,
    (Il2CppObject *)StringLiteral_23000/*"mstGachaAppend"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    375,
    (Il2CppObject *)StringLiteral_25901/*"userGachaDrawLog"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    376,
    (Il2CppObject *)StringLiteral_23140/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    377,
    (Il2CppObject *)StringLiteral_25931/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    378,
    (Il2CppObject *)StringLiteral_25932/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    379,
    (Il2CppObject *)StringLiteral_23141/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    380,
    (Il2CppObject *)StringLiteral_22855/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    381,
    (Il2CppObject *)StringLiteral_23146/*"mstSvtCoin"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    382,
    (Il2CppObject *)StringLiteral_25933/*"userSvtCoin"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    383,
    (Il2CppObject *)StringLiteral_23138/*"mstSvtAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    384,
    (Il2CppObject *)StringLiteral_23193/*"mstTreasureBox"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    385,
    (Il2CppObject *)StringLiteral_23194/*"mstTreasureBoxGift"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    386,
    (Il2CppObject *)StringLiteral_23195/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    387,
    (Il2CppObject *)StringLiteral_25875/*"userEventExpedition"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    388,
    (Il2CppObject *)StringLiteral_22917/*"mstEventExpedition"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    389,
    (Il2CppObject *)StringLiteral_22918/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    390,
    (Il2CppObject *)StringLiteral_22960/*"mstEventRecipe"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    391,
    (Il2CppObject *)StringLiteral_22961/*"mstEventRecipeGift"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    392,
    (Il2CppObject *)StringLiteral_25876/*"userEventFortification"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    393,
    (Il2CppObject *)StringLiteral_22922/*"mstEventFortification"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    394,
    (Il2CppObject *)StringLiteral_22923/*"mstEventFortificationDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    395,
    (Il2CppObject *)StringLiteral_22924/*"mstEventFortificationSvt"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    396,
    (Il2CppObject *)StringLiteral_25945/*"userSvtVoicePlayed"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    397,
    (Il2CppObject *)StringLiteral_25786/*"updateProfileDialogInfo"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    398,
    (Il2CppObject *)StringLiteral_23166/*"mstSvtMaterialTd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    399,
    (Il2CppObject *)StringLiteral_22818/*"mstBattleMasterImage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    400,
    (Il2CppObject *)StringLiteral_25897/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    401,
    (Il2CppObject *)StringLiteral_25888/*"userEventRandomMission"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    402,
    (Il2CppObject *)StringLiteral_22953/*"mstEventProgressValue"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    403,
    (Il2CppObject *)StringLiteral_23167/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    404,
    (Il2CppObject *)StringLiteral_22959/*"mstEventRandomMission"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    405,
    (Il2CppObject *)StringLiteral_25900/*"userGachaDrawHistory"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    406,
    (Il2CppObject *)StringLiteral_25855/*"userCoinRoom"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    407,
    (Il2CppObject *)StringLiteral_22899/*"mstEventBuddyPoint"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    408,
    (Il2CppObject *)StringLiteral_22976/*"mstEventSvtPointRank"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    409,
    (Il2CppObject *)StringLiteral_25891/*"userEventSvtPoint"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    410,
    (Il2CppObject *)StringLiteral_22989/*"mstFieldMotion"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    411,
    (Il2CppObject *)StringLiteral_25865/*"userDeleteReservation"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    412,
    (Il2CppObject *)StringLiteral_23177/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    413,
    (Il2CppObject *)StringLiteral_22886/*"mstEquipAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    414,
    (Il2CppObject *)StringLiteral_23083/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    415,
    (Il2CppObject *)StringLiteral_25869/*"userEventAlloutBattle"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    416,
    (Il2CppObject *)StringLiteral_23089/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    417,
    (Il2CppObject *)StringLiteral_22819/*"mstBattleMessage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    418,
    (Il2CppObject *)StringLiteral_22820/*"mstBattleMessageGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    419,
    (Il2CppObject *)StringLiteral_25912/*"userNpcSvtRecord"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    420,
    (Il2CppObject *)StringLiteral_22840/*"mstBuffTypeDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    421,
    (Il2CppObject *)StringLiteral_23224/*"mstWarBoardMessage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    422,
    (Il2CppObject *)StringLiteral_23227/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    423,
    (Il2CppObject *)StringLiteral_23225/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    424,
    (Il2CppObject *)StringLiteral_23249/*"mstWarQuestSelection"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    425,
    (Il2CppObject *)StringLiteral_23238/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    426,
    (Il2CppObject *)StringLiteral_23090/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    427,
    (Il2CppObject *)StringLiteral_23088/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    428,
    (Il2CppObject *)StringLiteral_22803/*"mstAdCheckPoint"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    429,
    (Il2CppObject *)StringLiteral_23021/*"mstGiftDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    430,
    (Il2CppObject *)StringLiteral_22858/*"mstCombineLimitGift"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    431,
    (Il2CppObject *)StringLiteral_22908/*"mstEventCooltimeReward"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    432,
    (Il2CppObject *)StringLiteral_25871/*"userEventCooltimeReward"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    433,
    (Il2CppObject *)StringLiteral_22846/*"mstClassBoardClass"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    434,
    (Il2CppObject *)StringLiteral_22845/*"mstClassBoardBase"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    435,
    (Il2CppObject *)StringLiteral_22848/*"mstClassBoardLine"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    436,
    (Il2CppObject *)StringLiteral_22849/*"mstClassBoardLock"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    437,
    (Il2CppObject *)StringLiteral_22850/*"mstClassBoardSquare"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    438,
    (Il2CppObject *)StringLiteral_22847/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    439,
    (Il2CppObject *)StringLiteral_25853/*"userClassBoardSquare"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    440,
    (Il2CppObject *)StringLiteral_23144/*"mstSvtCardAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    441,
    (Il2CppObject *)StringLiteral_23044/*"mstMapLayer"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    442,
    (Il2CppObject *)StringLiteral_23127/*"mstSpotLayer"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    443,
    (Il2CppObject *)StringLiteral_23039/*"mstMapGimmickLayer"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    444,
    (Il2CppObject *)StringLiteral_22909/*"mstEventDataLostBattle"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    445,
    (Il2CppObject *)StringLiteral_22910/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    446,
    (Il2CppObject *)StringLiteral_25872/*"userEventDataLost"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    447,
    (Il2CppObject *)StringLiteral_23071/*"mstQuestHint"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    448,
    (Il2CppObject *)StringLiteral_22997/*"mstFuncTypeDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    449,
    (Il2CppObject *)StringLiteral_22839/*"mstBuffConvert"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    450,
    (Il2CppObject *)StringLiteral_23120/*"mstSkillGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    451,
    (Il2CppObject *)StringLiteral_23121/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    452,
    (Il2CppObject *)StringLiteral_23122/*"mstSkillIndividuality"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    453,
    (Il2CppObject *)StringLiteral_23099/*"mstRestrictionBase"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    454,
    (Il2CppObject *)StringLiteral_23101/*"mstRestrictionSlot"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    455,
    (Il2CppObject *)StringLiteral_23102/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    456,
    (Il2CppObject *)StringLiteral_23100/*"mstRestrictionMessage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    457,
    (Il2CppObject *)StringLiteral_23103/*"mstRestrictionWhole"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    458,
    (Il2CppObject *)StringLiteral_22995/*"mstFuncDisp"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    459,
    (Il2CppObject *)StringLiteral_22906/*"mstEventCommandAssist"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    460,
    (Il2CppObject *)StringLiteral_22940/*"mstEventMissionGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    461,
    (Il2CppObject *)StringLiteral_22859/*"mstCombineLimitRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    462,
    (Il2CppObject *)StringLiteral_23199/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    463,
    (Il2CppObject *)StringLiteral_23025/*"mstHeelPortrait"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    464,
    (Il2CppObject *)StringLiteral_25906/*"userHeelPortrait"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    465,
    (Il2CppObject *)StringLiteral_23459/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    466,
    (Il2CppObject *)StringLiteral_23006/*"mstGachaExtraGift"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    467,
    (Il2CppObject *)StringLiteral_22941/*"mstEventMural"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    468,
    (Il2CppObject *)StringLiteral_26055/*"viewWaveEnemy"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    469,
    (Il2CppObject *)StringLiteral_22830/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    470,
    (Il2CppObject *)StringLiteral_22826/*"mstBlankEarthGimmick"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    471,
    (Il2CppObject *)StringLiteral_23190/*"mstTerminalOverwrite"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    472,
    (Il2CppObject *)StringLiteral_20213/*"exchangeSvt"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    473,
    (Il2CppObject *)StringLiteral_23217/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    474,
    (Il2CppObject *)StringLiteral_23219/*"mstWarBoardEvent"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    475,
    (Il2CppObject *)StringLiteral_23220/*"mstWarBoardEventScript"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    476,
    (Il2CppObject *)StringLiteral_23237/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    477,
    (Il2CppObject *)StringLiteral_23235/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    478,
    (Il2CppObject *)StringLiteral_23215/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    479,
    (Il2CppObject *)StringLiteral_23231/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    480,
    (Il2CppObject *)StringLiteral_23221/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    481,
    (Il2CppObject *)StringLiteral_23173/*"mstSvtProfilePush"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    482,
    (Il2CppObject *)StringLiteral_23041/*"mstMapGimmickPath"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    483,
    (Il2CppObject *)StringLiteral_23042/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    484,
    (Il2CppObject *)StringLiteral_23168/*"mstSvtOverwrite"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    485,
    (Il2CppObject *)StringLiteral_23029/*"mstIndividualityPolicy"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    486,
    (Il2CppObject *)StringLiteral_23028/*"mstIndividualityPersonality"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    487,
    (Il2CppObject *)StringLiteral_22810/*"mstAttri"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    488,
    (Il2CppObject *)StringLiteral_23187/*"mstSvtVoicePattern"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    489,
    (Il2CppObject *)StringLiteral_25905/*"userGameCommon"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    490,
    (Il2CppObject *)StringLiteral_23171/*"mstSvtPhoto"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    491,
    (Il2CppObject *)StringLiteral_23049/*"mstMasterPhoto"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    492,
    (Il2CppObject *)StringLiteral_23061/*"mstPhotoFrame"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    493,
    (Il2CppObject *)StringLiteral_23248/*"mstWarMessage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    494,
    (Il2CppObject *)StringLiteral_23065/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    495,
    (Il2CppObject *)StringLiteral_22988/*"mstExcludeMotionCond"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    496,
    (Il2CppObject *)StringLiteral_25909/*"userInterruptionQuest"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    497,
    (Il2CppObject *)StringLiteral_23181/*"mstSvtTransform"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    498,
    (Il2CppObject *)StringLiteral_23045/*"mstMapUpdateSchedule"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    499,
    (Il2CppObject *)StringLiteral_23078/*"mstQuestPhasePresent"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    500,
    (Il2CppObject *)StringLiteral_25849/*"userAccountLinkage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    501,
    (Il2CppObject *)StringLiteral_23053/*"mstMissionNaviTransition"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    502,
    (Il2CppObject *)StringLiteral_22979/*"mstEventTradeGoods"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    503,
    (Il2CppObject *)StringLiteral_22980/*"mstEventTradePickup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    504,
    (Il2CppObject *)StringLiteral_22981/*"mstEventTradeStore"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    505,
    (Il2CppObject *)StringLiteral_25892/*"userEventTrade"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    506,
    (Il2CppObject *)StringLiteral_23052/*"mstMissionNaviQuest"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    507,
    (Il2CppObject *)StringLiteral_23827/*"paymentHistory"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    508,
    (Il2CppObject *)StringLiteral_25893/*"userExternalPaymentStone"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    509,
    (Il2CppObject *)StringLiteral_23077/*"mstQuestPhaseIndividuality"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    510,
    (Il2CppObject *)StringLiteral_26051/*"viewGachaFeaturedSvt"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    516,
    (Il2CppObject *)StringLiteral_22882/*"mstEffectMovie"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    511,
    (Il2CppObject *)StringLiteral_23010/*"mstGachaPickupCollateral"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    512,
    (Il2CppObject *)StringLiteral_23011/*"mstGachaPickupCollateralGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    513,
    (Il2CppObject *)StringLiteral_22821/*"mstBattlePoint"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    514,
    (Il2CppObject *)StringLiteral_22822/*"mstBattlePointPhase"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    515,
    (Il2CppObject *)StringLiteral_23142/*"mstSvtBattlePoint"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    517,
    (Il2CppObject *)StringLiteral_23060/*"mstPaymentLimit"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    518,
    (Il2CppObject *)StringLiteral_25913/*"userPaymentLimit"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    519,
    (Il2CppObject *)StringLiteral_23104/*"mstRoadmap"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    520,
    (Il2CppObject *)StringLiteral_25923/*"userRecommendSupport"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    522,
    (Il2CppObject *)StringLiteral_23095/*"mstRecommendAdviceMessage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    521,
    (Il2CppObject *)StringLiteral_23096/*"mstRecommendSupportQuest"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    523,
    (Il2CppObject *)StringLiteral_25922/*"userRecommendFollower"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    524,
    (Il2CppObject *)StringLiteral_23031/*"mstItemDropEfficiency"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    525,
    (Il2CppObject *)StringLiteral_22827/*"mstBlankEarthGimmickAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    526,
    (Il2CppObject *)StringLiteral_23250/*"mstWarRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    527,
    (Il2CppObject *)StringLiteral_23106/*"mstSelectBonusBase"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    528,
    (Il2CppObject *)StringLiteral_23105/*"mstSelectBonus"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    529,
    (Il2CppObject *)StringLiteral_23056/*"mstMyroomSvtSpecialImage"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    530,
    (Il2CppObject *)StringLiteral_23115/*"mstShopReset"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    531,
    (Il2CppObject *)StringLiteral_23456/*"npcSvtDisplayTypeDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    532,
    (Il2CppObject *)StringLiteral_22992/*"mstFriendshipSvt"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    533,
    (Il2CppObject *)StringLiteral_20214/*"exchangeSvtCoinGivenNum"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    534,
    (Il2CppObject *)StringLiteral_22843/*"mstChaldeaGatePickup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    535,
    (Il2CppObject *)StringLiteral_23247/*"mstWarGroupIgnore"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    536,
    (Il2CppObject *)StringLiteral_23027/*"mstImagePartsGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    537,
    (Il2CppObject *)StringLiteral_25908/*"userImagePartsGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    538,
    (Il2CppObject *)StringLiteral_23051/*"mstMissionItemDisplay"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    539,
    (Il2CppObject *)StringLiteral_23093/*"mstQuestUseItemGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    540,
    (Il2CppObject *)StringLiteral_23094/*"mstQuestUseItemPickup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    541,
    (Il2CppObject *)StringLiteral_25877/*"userEventItemLinkSvt"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    542,
    (Il2CppObject *)StringLiteral_23072/*"mstQuestHintOverwrite"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    543,
    (Il2CppObject *)StringLiteral_24165/*"reachedWaveInfo"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    544,
    (Il2CppObject *)StringLiteral_23016/*"mstGallery"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    545,
    (Il2CppObject *)StringLiteral_23018/*"mstGalleryResource"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    546,
    (Il2CppObject *)StringLiteral_23179/*"mstSvtSkillAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    547,
    (Il2CppObject *)StringLiteral_23017/*"mstGalleryFolderRelease"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    548,
    (Il2CppObject *)StringLiteral_25939/*"userSvtFirstGetTime"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    549,
    (Il2CppObject *)StringLiteral_23069/*"mstQuestExtension"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    550,
    (Il2CppObject *)StringLiteral_25940/*"userSvtGrand"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    551,
    (Il2CppObject *)StringLiteral_23022/*"mstGrandGraph"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    552,
    (Il2CppObject *)StringLiteral_23023/*"mstGrandGraphDetail"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    553,
    (Il2CppObject *)StringLiteral_25854/*"userClassStatistics"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    554,
    (Il2CppObject *)StringLiteral_22915/*"mstEventEquipSkillParts"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    555,
    (Il2CppObject *)StringLiteral_23046/*"mstMasterIndividualitySelect"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    556,
    (Il2CppObject *)StringLiteral_23055/*"mstMyroomAddBgDiff"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    557,
    (Il2CppObject *)StringLiteral_22823/*"mstBattleScript"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    558,
    (Il2CppObject *)StringLiteral_22880/*"mstDropAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    559,
    (Il2CppObject *)StringLiteral_25850/*"userBgImagePartsGroup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    560,
    (Il2CppObject *)StringLiteral_23110/*"mstShopAdd"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    561,
    (Il2CppObject *)StringLiteral_22929/*"mstEventJob"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    562,
    (Il2CppObject *)StringLiteral_22930/*"mstEventJobPassport"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    563,
    (Il2CppObject *)StringLiteral_22931/*"mstEventJobPointBonus"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    564,
    (Il2CppObject *)StringLiteral_22932/*"mstEventJobQuest"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    565,
    (Il2CppObject *)StringLiteral_25878/*"userEventJob"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    566,
    (Il2CppObject *)StringLiteral_25880/*"userEventMapGimmick"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  DataNameKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_DataNameKind_Kind__string__o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)DataNameKind_TypeInfo->static_fields,
    (int32_t)v1,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void DataNameKind___ctor(DataNameKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *DataNameKind__GetName(int32_t kind, const MethodInfo *method)
{
  __int64 v2; // x2
  DataNameKind_c *v4; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_596F676 & 1) == 0 )
  {
    sub_2213A60(&DataNameKind_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_596F676 = 1;
  }
  v4 = DataNameKind_TypeInfo;
  if ( !*(&DataNameKind_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo, method, v2);
    v4 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v4->static_fields->nameList;
  if ( !nameList )
    sub_2213CDC(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_3FBC300 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}