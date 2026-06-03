void DataNameKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4E7656C & 1) == 0 )
  {
    sub_1D0F0B4(&DataNameKind_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_1D0F0B4(&StringLiteral_22297/*"mstEventTradeGoods"*/);
    sub_1D0F0B4(&StringLiteral_25064/*"userGameCommon"*/);
    sub_1D0F0B4(&StringLiteral_22257/*"mstEventMissionConditionDetail"*/);
    sub_1D0F0B4(&StringLiteral_22511/*"mstTreasureBoxGift"*/);
    sub_1D0F0B4(&StringLiteral_22189/*"mstCommandCodeComment"*/);
    sub_1D0F0B4(&StringLiteral_22253/*"mstEventMissionAction"*/);
    sub_1D0F0B4(&StringLiteral_25030/*"userEventAlloutBattle"*/);
    sub_1D0F0B4(&StringLiteral_23437/*"reachedWaveInfo"*/);
    sub_1D0F0B4(&StringLiteral_22218/*"mstEventBonusFilterGroupInfo"*/);
    sub_1D0F0B4(&StringLiteral_25081/*"userRecommendFollower"*/);
    sub_1D0F0B4(&StringLiteral_22401/*"mstQuestReleaseOverwrite"*/);
    sub_1D0F0B4(&StringLiteral_22361/*"mstMapGimmickRelease"*/);
    sub_1D0F0B4(&StringLiteral_22324/*"mstGachaExtraGift"*/);
    sub_1D0F0B4(&StringLiteral_22765/*"npcSvtFollowerIndividuality"*/);
    sub_1D0F0B4(&StringLiteral_22220/*"mstEventBossStatusUi"*/);
    sub_1D0F0B4(&StringLiteral_25090/*"userSvtAppendPassiveSkillLv"*/);
    sub_1D0F0B4(&StringLiteral_22173/*"mstClassRelation"*/);
    sub_1D0F0B4(&StringLiteral_22127/*"mstAiAct"*/);
    sub_1D0F0B4(&StringLiteral_22456/*"mstSvtAnimationOverwrite"*/);
    sub_1D0F0B4(&StringLiteral_22403/*"mstQuestRestriction"*/);
    sub_1D0F0B4(&StringLiteral_22200/*"mstCv"*/);
    sub_1D0F0B4(&StringLiteral_25035/*"userEventDigging"*/);
    sub_1D0F0B4(&StringLiteral_24500/*"tblUserGame"*/);
    sub_1D0F0B4(&StringLiteral_22231/*"mstEventDataLostBattle"*/);
    sub_1D0F0B4(&StringLiteral_22221/*"mstEventBuddyPoint"*/);
    sub_1D0F0B4(&StringLiteral_22147/*"mstBgmRelease"*/);
    sub_1D0F0B4(&StringLiteral_22483/*"mstSvtMaterialTd"*/);
    sub_1D0F0B4(&StringLiteral_22194/*"mstCommonRelease"*/);
    sub_1D0F0B4(&StringLiteral_22309/*"mstFriendship"*/);
    sub_1D0F0B4(&StringLiteral_25015/*"userClassBoardSquare"*/);
    sub_1D0F0B4(&StringLiteral_22198/*"mstConstantLong"*/);
    sub_1D0F0B4(&StringLiteral_22172/*"mstClassBoardSquare"*/);
    sub_1D0F0B4(&StringLiteral_25094/*"userSvtCommandCode"*/);
    sub_1D0F0B4(&StringLiteral_22384/*"mstQuestBehavior"*/);
    sub_1D0F0B4(&StringLiteral_22349/*"mstItemDropEfficiency"*/);
    sub_1D0F0B4(&StringLiteral_22482/*"mstSvtMaterialFolder"*/);
    sub_1D0F0B4(&StringLiteral_22558/*"mstWarBoardStagePieceDetail"*/);
    sub_1D0F0B4(&StringLiteral_22298/*"mstEventTradePickup"*/);
    sub_1D0F0B4(&StringLiteral_22219/*"mstEventBonusFilterGroupMember"*/);
    sub_1D0F0B4(&StringLiteral_22389/*"mstQuestHint"*/);
    sub_1D0F0B4(&StringLiteral_22192/*"mstCommandSpell"*/);
    sub_1D0F0B4(&StringLiteral_22125/*"mstAdCheckPoint"*/);
    sub_1D0F0B4(&StringLiteral_22380/*"mstPrivilege"*/);
    sub_1D0F0B4(&StringLiteral_22390/*"mstQuestHintOverwrite"*/);
    sub_1D0F0B4(&StringLiteral_22154/*"mstBoardMessageRelease"*/);
    sub_1D0F0B4(&StringLiteral_22330/*"mstGachaRelease"*/);
    sub_1D0F0B4(&StringLiteral_25026/*"userDeleteReservation"*/);
    sub_1D0F0B4(&StringLiteral_22510/*"mstTreasureBox"*/);
    sub_1D0F0B4(&StringLiteral_25067/*"userImagePartsGroup"*/);
    sub_1D0F0B4(&StringLiteral_22209/*"mstEquipExp"*/);
    sub_1D0F0B4(&StringLiteral_22216/*"mstEventBoardGameTokenReward"*/);
    sub_1D0F0B4(&StringLiteral_22463/*"mstSvtCoin"*/);
    sub_1D0F0B4(&StringLiteral_22494/*"mstSvtScriptMultiple"*/);
    sub_1D0F0B4(&StringLiteral_22368/*"mstMaterialFolder"*/);
    sub_1D0F0B4(&StringLiteral_22227/*"mstEventCombineCostume"*/);
    sub_1D0F0B4(&StringLiteral_22386/*"mstQuestDateRange"*/);
    sub_1D0F0B4(&StringLiteral_22554/*"mstWarBoardStageBoss"*/);
    sub_1D0F0B4(&StringLiteral_22161/*"mstBuffConvert"*/);
    sub_1D0F0B4(&StringLiteral_22412/*"mstQuestUseItemPickup"*/);
    sub_1D0F0B4(&StringLiteral_22134/*"mstAuraEffect"*/);
    sub_1D0F0B4(&StringLiteral_22275/*"mstEventRaceResult"*/);
    sub_1D0F0B4(&StringLiteral_22425/*"mstSetItem"*/);
    sub_1D0F0B4(&StringLiteral_22762/*"npcSvtDisplayTypeDetail"*/);
    sub_1D0F0B4(&StringLiteral_22448/*"mstStaffPhotoCostume"*/);
    sub_1D0F0B4(&StringLiteral_22335/*"mstGalleryFolderRelease"*/);
    sub_1D0F0B4(&StringLiteral_22415/*"mstRecover"*/);
    sub_1D0F0B4(&StringLiteral_22290/*"mstEventStatusQuest"*/);
    sub_1D0F0B4(&StringLiteral_25032/*"userEventCooltimeReward"*/);
    sub_1D0F0B4(&StringLiteral_22378/*"mstPaymentLimit"*/);
    sub_1D0F0B4(&StringLiteral_22532/*"mstWarBoardActionTrendGroup"*/);
    sub_1D0F0B4(&StringLiteral_25080/*"userQuestRoute"*/);
    sub_1D0F0B4(&StringLiteral_22440/*"mstSkillLv"*/);
    sub_1D0F0B4(&StringLiteral_22475/*"mstSvtGroup"*/);
    sub_1D0F0B4(&StringLiteral_22519/*"mstVoiceClosedMessage"*/);
    sub_1D0F0B4(&StringLiteral_22240/*"mstEventExpeditionPiece"*/);
    sub_1D0F0B4(&StringLiteral_22383/*"mstQuestAutoOrganizationAdjust"*/);
    sub_1D0F0B4(&StringLiteral_22484/*"mstSvtMultiPortrait"*/);
    sub_1D0F0B4(&StringLiteral_22243/*"mstEventFilter"*/);
    sub_1D0F0B4(&StringLiteral_22370/*"mstMissionNaviQuest"*/);
    sub_1D0F0B4(&StringLiteral_25082/*"userRecommendSupport"*/);
    sub_1D0F0B4(&StringLiteral_25069/*"userItem"*/);
    sub_1D0F0B4(&StringLiteral_22239/*"mstEventExpedition"*/);
    sub_1D0F0B4(&StringLiteral_22274/*"mstEventRace"*/);
    sub_1D0F0B4(&StringLiteral_22404/*"mstQuestRestrictionInfo"*/);
    sub_1D0F0B4(&StringLiteral_22402/*"mstQuestReset"*/);
    sub_1D0F0B4(&StringLiteral_25036/*"userEventExpedition"*/);
    sub_1D0F0B4(&StringLiteral_22246/*"mstEventFortificationSvt"*/);
    sub_1D0F0B4(&StringLiteral_22559/*"mstWarBoardStageReinforcements"*/);
    sub_1D0F0B4(&StringLiteral_22167/*"mstClassBoardBase"*/);
    sub_1D0F0B4(&StringLiteral_22205/*"mstEnemyMaster"*/);
    sub_1D0F0B4(&StringLiteral_22135/*"mstAuraEffectPosOverwrite"*/);
    sub_1D0F0B4(&StringLiteral_22419/*"mstRestrictionSlot"*/);
    sub_1D0F0B4(&StringLiteral_22332/*"mstGachaSub"*/);
    sub_1D0F0B4(&StringLiteral_22294/*"mstEventSvtPointRank"*/);
    sub_1D0F0B4(&StringLiteral_22267/*"mstEventPointGroup"*/);
    sub_1D0F0B4(&StringLiteral_22213/*"mstEventAdd"*/);
    sub_1D0F0B4(&StringLiteral_22207/*"mstEquip"*/);
    sub_1D0F0B4(&StringLiteral_22279/*"mstEventRecipeGift"*/);
    sub_1D0F0B4(&StringLiteral_22506/*"mstTelop"*/);
    sub_1D0F0B4(&StringLiteral_25092/*"userSvtCollection"*/);
    sub_1D0F0B4(&StringLiteral_25042/*"userEventMissionFix"*/);
    sub_1D0F0B4(&StringLiteral_22417/*"mstRestrictionBase"*/);
    sub_1D0F0B4(&StringLiteral_22508/*"mstTips"*/);
    sub_1D0F0B4(&StringLiteral_22447/*"mstStaffPhoto"*/);
    sub_1D0F0B4(&StringLiteral_22136/*"mstBankShop"*/);
    sub_1D0F0B4(&StringLiteral_22305/*"mstEventVoicePlay"*/);
    sub_1D0F0B4(&StringLiteral_22411/*"mstQuestUseItemGroup"*/);
    sub_1D0F0B4(&StringLiteral_22245/*"mstEventFortificationDetail"*/);
    sub_1D0F0B4(&StringLiteral_25049/*"userEventSuperBoss"*/);
    sub_1D0F0B4(&StringLiteral_22244/*"mstEventFortification"*/);
    sub_1D0F0B4(&StringLiteral_22292/*"mstEventSvt"*/);
    sub_1D0F0B4(&StringLiteral_22523/*"mstVoicePlayGroup"*/);
    sub_1D0F0B4(&StringLiteral_25034/*"userEventDeck"*/);
    sub_1D0F0B4(&StringLiteral_22442/*"mstSpotAdd"*/);
    sub_1D0F0B4(&StringLiteral_22185/*"mstCombineSkill"*/);
    sub_1D0F0B4(&StringLiteral_22551/*"mstWarBoardSquare"*/);
    sub_1D0F0B4(&StringLiteral_22162/*"mstBuffTypeDetail"*/);
    sub_1D0F0B4(&StringLiteral_22529/*"mstWarBoardActionPointClass"*/);
    sub_1D0F0B4(&StringLiteral_22423/*"mstSelectBonus"*/);
    sub_1D0F0B4(&StringLiteral_22498/*"mstSvtTransform"*/);
    sub_1D0F0B4(&StringLiteral_25073/*"userPresentBox"*/);
    sub_1D0F0B4(&StringLiteral_25050/*"userEventSvtPoint"*/);
    sub_1D0F0B4(&StringLiteral_24628/*"totalEventPoint"*/);
    sub_1D0F0B4(&StringLiteral_22187/*"mstCommandCardRankParam"*/);
    sub_1D0F0B4(&StringLiteral_22534/*"mstWarBoardCommonRelease"*/);
    sub_1D0F0B4(&StringLiteral_22454/*"mstSvt"*/);
    sub_1D0F0B4(&StringLiteral_25083/*"userShop"*/);
    sub_1D0F0B4(&StringLiteral_22214/*"mstEventBoardGameCell"*/);
    sub_1D0F0B4(&StringLiteral_22273/*"mstEventQuestCooltime"*/);
    sub_1D0F0B4(&StringLiteral_22315/*"mstFuncTypeDetail"*/);
    sub_1D0F0B4(&StringLiteral_22451/*"mstStatusEffectPosOverwrite"*/);
    sub_1D0F0B4(&StringLiteral_19475/*"eventBoostItemUsed"*/);
    sub_1D0F0B4(&StringLiteral_22429/*"mstShopDetail"*/);
    sub_1D0F0B4(&StringLiteral_22347/*"mstIndividualityPolicy"*/);
    sub_1D0F0B4(&StringLiteral_22353/*"mstMapButton"*/);
    sub_1D0F0B4(&StringLiteral_22561/*"mstWarBoardTacticalTrend"*/);
    sub_1D0F0B4(&StringLiteral_22453/*"mstSubEquip"*/);
    sub_1D0F0B4(&StringLiteral_22445/*"mstSpotPath"*/);
    sub_1D0F0B4(&StringLiteral_22422/*"mstRoadmap"*/);
    sub_1D0F0B4(&StringLiteral_22182/*"mstCombineMaterial"*/);
    sub_1D0F0B4(&StringLiteral_22181/*"mstCombineLimitRelease"*/);
    sub_1D0F0B4(&StringLiteral_22515/*"mstTreasureDeviceLv"*/);
    sub_1D0F0B4(&StringLiteral_22295/*"mstEventTower"*/);
    sub_1D0F0B4(&StringLiteral_22434/*"mstSkill"*/);
    sub_1D0F0B4(&StringLiteral_25068/*"userInterruptionQuest"*/);
    sub_1D0F0B4(&StringLiteral_22486/*"mstSvtPassiveSkill"*/);
    sub_1D0F0B4(&StringLiteral_22500/*"mstSvtTreasureDeviceAdd"*/);
    sub_1D0F0B4(&StringLiteral_22151/*"mstBlankEarthSpotAdd"*/);
    sub_1D0F0B4(&StringLiteral_25077/*"userQuest"*/);
    sub_1D0F0B4(&StringLiteral_22256/*"mstEventMissionCondition"*/);
    sub_1D0F0B4(&StringLiteral_22528/*"mstWarBoardActionPoint"*/);
    sub_1D0F0B4(&StringLiteral_25052/*"userExternalPaymentStone"*/);
    sub_1D0F0B4(&StringLiteral_22175/*"mstClosedMessage"*/);
    sub_1D0F0B4(&StringLiteral_22282/*"mstEventRewardExtra"*/);
    sub_1D0F0B4(&StringLiteral_22265/*"mstEventPointActivity"*/);
    sub_1D0F0B4(&StringLiteral_22272/*"mstEventQuest"*/);
    sub_1D0F0B4(&StringLiteral_22142/*"mstBattleMessageGroup"*/);
    sub_1D0F0B4(&StringLiteral_25204/*"viewQuestInfo"*/);
    sub_1D0F0B4(&StringLiteral_22490/*"mstSvtProfilePush"*/);
    sub_1D0F0B4(&StringLiteral_22514/*"mstTreasureDeviceDetail"*/);
    sub_1D0F0B4(&StringLiteral_25013/*"userBlacklist"*/);
    sub_1D0F0B4(&StringLiteral_22238/*"mstEventEquipSkillRelease"*/);
    sub_1D0F0B4(&StringLiteral_25017/*"userCoinRoom"*/);
    sub_1D0F0B4(&StringLiteral_22199/*"mstConstantStr"*/);
    sub_1D0F0B4(&StringLiteral_22237/*"mstEventEquipSkillParts"*/);
    sub_1D0F0B4(&StringLiteral_22334/*"mstGallery"*/);
    sub_1D0F0B4(&StringLiteral_25098/*"userSvtGrand"*/);
    sub_1D0F0B4(&StringLiteral_22452/*"mstStoneShop"*/);
    sub_1D0F0B4(&StringLiteral_22363/*"mstMapUpdateSchedule"*/);
    sub_1D0F0B4(&StringLiteral_22509/*"mstTotalLogin"*/);
    sub_1D0F0B4(&StringLiteral_22376/*"mstOpeningMovie"*/);
    sub_1D0F0B4(&StringLiteral_22197/*"mstConstant"*/);
    sub_1D0F0B4(&StringLiteral_22410/*"mstQuestSpotRelease"*/);
    sub_1D0F0B4(&StringLiteral_22190/*"mstCommandCodeSkill"*/);
    sub_1D0F0B4(&StringLiteral_22381/*"mstQuest"*/);
    sub_1D0F0B4(&StringLiteral_22504/*"mstSvtVoicePattern"*/);
    sub_1D0F0B4(&StringLiteral_22301/*"mstEventTutorialCond"*/);
    sub_1D0F0B4(&StringLiteral_22149/*"mstBlankEarthGimmickAdd"*/);
    sub_1D0F0B4(&StringLiteral_22527/*"mstWarBoard"*/);
    sub_1D0F0B4(&StringLiteral_22276/*"mstEventRaid"*/);
    sub_1D0F0B4(&StringLiteral_22146/*"mstBgm"*/);
    sub_1D0F0B4(&StringLiteral_22288/*"mstEventScriptRelease"*/);
    sub_1D0F0B4(&StringLiteral_25076/*"userProfile"*/);
    sub_1D0F0B4(&StringLiteral_22255/*"mstEventMissionAdd"*/);
    sub_1D0F0B4(&StringLiteral_22524/*"mstVoiceRelease"*/);
    sub_1D0F0B4(&StringLiteral_22399/*"mstQuestRandomGroup"*/);
    sub_1D0F0B4(&StringLiteral_22371/*"mstMissionNaviTransition"*/);
    sub_1D0F0B4(&StringLiteral_22431/*"mstShopRelease"*/);
    sub_1D0F0B4(&StringLiteral_25102/*"userSvtStorage"*/);
    sub_1D0F0B4(&StringLiteral_22328/*"mstGachaPickupCollateral"*/);
    sub_1D0F0B4(&StringLiteral_22413/*"mstRecommendAdviceMessage"*/);
    sub_1D0F0B4(&StringLiteral_22414/*"mstRecommendSupportQuest"*/);
    sub_1D0F0B4(&StringLiteral_25089/*"userSvtAppendPassiveSkill"*/);
    sub_1D0F0B4(&StringLiteral_22455/*"mstSvtAdd"*/);
    sub_1D0F0B4(&StringLiteral_22340/*"mstGrandGraph"*/);
    sub_1D0F0B4(&StringLiteral_22565/*"mstWarMessage"*/);
    sub_1D0F0B4(&StringLiteral_22152/*"mstBlankEarthSpotNavimenu"*/);
    sub_1D0F0B4(&StringLiteral_22140/*"mstBattleMasterImage"*/);
    sub_1D0F0B4(&StringLiteral_22436/*"mstSkillDetail"*/);
    sub_1D0F0B4(&StringLiteral_22365/*"mstMasterMission"*/);
    sub_1D0F0B4(&StringLiteral_22487/*"mstSvtPassiveSkillRelease"*/);
    sub_1D0F0B4(&StringLiteral_22441/*"mstSpot"*/);
    sub_1D0F0B4(&StringLiteral_22252/*"mstEventMission"*/);
    sub_1D0F0B4(&StringLiteral_22184/*"mstCombineQpSvtEquip"*/);
    sub_1D0F0B4(&StringLiteral_22264/*"mstEventPoint"*/);
    sub_1D0F0B4(&StringLiteral_22286/*"mstEventRewardSet"*/);
    sub_1D0F0B4(&StringLiteral_22261/*"mstEventPanelMapDetail"*/);
    sub_1D0F0B4(&StringLiteral_22461/*"mstSvtCardAdd"*/);
    sub_1D0F0B4(&StringLiteral_22352/*"mstMap"*/);
    sub_1D0F0B4(&StringLiteral_22234/*"mstEventDigging"*/);
    sub_1D0F0B4(&StringLiteral_25058/*"userGacha"*/);
    sub_1D0F0B4(&StringLiteral_22400/*"mstQuestRelease"*/);
    sub_1D0F0B4(&StringLiteral_22233/*"mstEventDetail"*/);
    sub_1D0F0B4(&StringLiteral_22345/*"mstImagePartsGroup"*/);
    sub_1D0F0B4(&StringLiteral_22362/*"mstMapLayer"*/);
    sub_1D0F0B4(&StringLiteral_22538/*"mstWarBoardFutureActionTrend"*/);
    sub_1D0F0B4(&StringLiteral_22439/*"mstSkillIndividuality"*/);
    sub_1D0F0B4(&StringLiteral_22158/*"mstBoxGachaBaseDetail"*/);
    sub_1D0F0B4(&StringLiteral_24499/*"tblFriend"*/);
    sub_1D0F0B4(&StringLiteral_17380/*"beforeBirthDay"*/);
    sub_1D0F0B4(&StringLiteral_22250/*"mstEventItemDisplayRelease"*/);
    sub_1D0F0B4(&StringLiteral_22336/*"mstGalleryResource"*/);
    sub_1D0F0B4(&StringLiteral_17300/*"battle"*/);
    sub_1D0F0B4(&StringLiteral_22430/*"mstShopGroup"*/);
    sub_1D0F0B4(&StringLiteral_22133/*"mstAttriRelation"*/);
    sub_1D0F0B4(&StringLiteral_25018/*"userCommandCode"*/);
    sub_1D0F0B4(&StringLiteral_22225/*"mstEventCampaignRelease"*/);
    sub_1D0F0B4(&StringLiteral_22472/*"mstSvtFilter"*/);
    sub_1D0F0B4(&StringLiteral_22398/*"mstQuestRacePoint"*/);
    sub_1D0F0B4(&StringLiteral_22299/*"mstEventTradeStore"*/);
    sub_1D0F0B4(&StringLiteral_22939/*"otherUserGame"*/);
    sub_1D0F0B4(&StringLiteral_22144/*"mstBattlePointPhase"*/);
    sub_1D0F0B4(&StringLiteral_22249/*"mstEventItemDisplayGroup"*/);
    sub_1D0F0B4(&StringLiteral_22164/*"mstCard"*/);
    sub_1D0F0B4(&StringLiteral_22148/*"mstBlankEarthGimmick"*/);
    sub_1D0F0B4(&StringLiteral_22141/*"mstBattleMessage"*/);
    sub_1D0F0B4(&StringLiteral_22420/*"mstRestrictionSlotDetail"*/);
    sub_1D0F0B4(&StringLiteral_22137/*"mstBanner"*/);
    sub_1D0F0B4(&StringLiteral_22206/*"mstEnemyMasterBattle"*/);
    sub_1D0F0B4(&StringLiteral_22248/*"mstEventItemDisplay"*/);
    sub_1D0F0B4(&StringLiteral_22163/*"mstCampaignInfo"*/);
    sub_1D0F0B4(&StringLiteral_22499/*"mstSvtTreasureDevice"*/);
    sub_1D0F0B4(&StringLiteral_22497/*"mstSvtSkillRelease"*/);
    sub_1D0F0B4(&StringLiteral_22379/*"mstPhotoFrame"*/);
    sub_1D0F0B4(&StringLiteral_22196/*"mstCompleteMission"*/);
    sub_1D0F0B4(&StringLiteral_22179/*"mstCombineLimit"*/);
    sub_1D0F0B4(&StringLiteral_22341/*"mstGrandGraphDetail"*/);
    sub_1D0F0B4(&StringLiteral_22156/*"mstBoxGacha"*/);
    sub_1D0F0B4(&StringLiteral_22521/*"mstVoiceMaterialCond"*/);
    sub_1D0F0B4(&StringLiteral_22317/*"mstGachaAdjustAdd"*/);
    sub_1D0F0B4(&StringLiteral_22331/*"mstGachaStoryAdjust"*/);
    sub_1D0F0B4(&StringLiteral_22517/*"mstUserExp"*/);
    sub_1D0F0B4(&StringLiteral_22306/*"mstExcludeMotionCond"*/);
    sub_1D0F0B4(&StringLiteral_22540/*"mstWarBoardItem"*/);
    sub_1D0F0B4(&StringLiteral_22208/*"mstEquipAdd"*/);
    sub_1D0F0B4(&StringLiteral_22201/*"mstDialogMessage"*/);
    sub_1D0F0B4(&StringLiteral_22764/*"npcSvtFollower"*/);
    sub_1D0F0B4(&StringLiteral_22139/*"mstBattleBg"*/);
    sub_1D0F0B4(&StringLiteral_22168/*"mstClassBoardClass"*/);
    sub_1D0F0B4(&StringLiteral_25043/*"userEventPoint"*/);
    sub_1D0F0B4(&StringLiteral_22462/*"mstSvtChange"*/);
    sub_1D0F0B4(&StringLiteral_22539/*"mstWarBoardIndividualityClass"*/);
    sub_1D0F0B4(&StringLiteral_22319/*"mstGachaBaseCollateral"*/);
    sub_1D0F0B4(&StringLiteral_22396/*"mstQuestPhasePresent"*/);
    sub_1D0F0B4(&StringLiteral_22432/*"mstShopReset"*/);
    sub_1D0F0B4(&StringLiteral_22259/*"mstEventMural"*/);
    sub_1D0F0B4(&StringLiteral_22327/*"mstGachaPickup"*/);
    sub_1D0F0B4(&StringLiteral_22350/*"mstItemSelect"*/);
    sub_1D0F0B4(&StringLiteral_22476/*"mstSvtIndividuality"*/);
    sub_1D0F0B4(&StringLiteral_25029/*"userEvent"*/);
    sub_1D0F0B4(&StringLiteral_22562/*"mstWarBoardTreasure"*/);
    sub_1D0F0B4(&StringLiteral_22481/*"mstSvtLvDetail"*/);
    sub_1D0F0B4(&StringLiteral_22547/*"mstWarBoardRatingOffset"*/);
    sub_1D0F0B4(&StringLiteral_22393/*"mstQuestPhaseDetail"*/);
    sub_1D0F0B4(&StringLiteral_22427/*"mstShopAction"*/);
    sub_1D0F0B4(&StringLiteral_22372/*"mstMyroomAdd"*/);
    sub_1D0F0B4(&StringLiteral_22293/*"mstEventSvtFatigue"*/);
    sub_1D0F0B4(&StringLiteral_22241/*"mstEventFactory"*/);
    sub_1D0F0B4(&StringLiteral_25059/*"userGachaDrawHistory"*/);
    sub_1D0F0B4(&StringLiteral_25054/*"userFollower"*/);
    sub_1D0F0B4(&StringLiteral_22548/*"mstWarBoardRatingOffsetGroup"*/);
    sub_1D0F0B4(&StringLiteral_25091/*"userSvtCoin"*/);
    sub_1D0F0B4(&StringLiteral_22287/*"mstEventScript"*/);
    sub_1D0F0B4(&StringLiteral_22495/*"mstSvtSkill"*/);
    sub_1D0F0B4(&StringLiteral_22444/*"mstSpotLayer"*/);
    sub_1D0F0B4(&StringLiteral_25093/*"userSvtCommandCard"*/);
    sub_1D0F0B4(&StringLiteral_25078/*"userQuestInfo"*/);
    sub_1D0F0B4(&StringLiteral_22203/*"mstEffect"*/);
    sub_1D0F0B4(&StringLiteral_22348/*"mstItem"*/);
    sub_1D0F0B4(&StringLiteral_22424/*"mstSelectBonusBase"*/);
    sub_1D0F0B4(&StringLiteral_22268/*"mstEventPointGroupAdd"*/);
    sub_1D0F0B4(&StringLiteral_22391/*"mstQuestMessage"*/);
    sub_1D0F0B4(&StringLiteral_22759/*"npcFollowerRelease"*/);
    sub_1D0F0B4(&StringLiteral_22312/*"mstFuncCategory"*/);
    sub_1D0F0B4(&StringLiteral_22541/*"mstWarBoardMessage"*/);
    sub_1D0F0B4(&StringLiteral_25063/*"userGame"*/);
    sub_1D0F0B4(&StringLiteral_22337/*"mstGift"*/);
    sub_1D0F0B4(&StringLiteral_22549/*"mstWarBoardReinforcements"*/);
    sub_1D0F0B4(&StringLiteral_22215/*"mstEventBoardGameToken"*/);
    sub_1D0F0B4(&StringLiteral_22357/*"mstMapGimmickLayer"*/);
    sub_1D0F0B4(&StringLiteral_22465/*"mstSvtCommandCodeUnlock"*/);
    sub_1D0F0B4(&StringLiteral_22131/*"mstAssist"*/);
    sub_1D0F0B4(&StringLiteral_25205/*"viewWaveEnemy"*/);
    sub_1D0F0B4(&StringLiteral_22763/*"npcSvtEquip"*/);
    sub_1D0F0B4(&StringLiteral_22407/*"mstQuestScriptMaterialNext"*/);
    sub_1D0F0B4(&StringLiteral_22471/*"mstSvtExp"*/);
    sub_1D0F0B4(&StringLiteral_25088/*"userSvt"*/);
    sub_1D0F0B4(&StringLiteral_25201/*"viewEnemy"*/);
    sub_1D0F0B4(&StringLiteral_22303/*"mstEventUiRelease"*/);
    sub_1D0F0B4(&StringLiteral_24629/*"totalEventRace"*/);
    sub_1D0F0B4(&StringLiteral_22307/*"mstFieldMotion"*/);
    sub_1D0F0B4(&StringLiteral_22277/*"mstEventRandomMission"*/);
    sub_1D0F0B4(&StringLiteral_22284/*"mstEventRewardScene"*/);
    sub_1D0F0B4(&StringLiteral_22310/*"mstFriendshipSvt"*/);
    sub_1D0F0B4(&StringLiteral_22346/*"mstIndividualityPersonality"*/);
    sub_1D0F0B4(&StringLiteral_22178/*"mstCombineCostume"*/);
    sub_1D0F0B4(&StringLiteral_22177/*"mstCombineAppendPassiveSkill"*/);
    sub_1D0F0B4(&StringLiteral_22236/*"mstEventDiggingReward"*/);
    sub_1D0F0B4(&StringLiteral_22530/*"mstWarBoardActionTrend"*/);
    sub_1D0F0B4(&StringLiteral_22145/*"mstBattleScript"*/);
    sub_1D0F0B4(&StringLiteral_22318/*"mstGachaAppend"*/);
    sub_1D0F0B4(&StringLiteral_22552/*"mstWarBoardSquareIndexGroup"*/);
    sub_1D0F0B4(&StringLiteral_22311/*"mstFunc"*/);
    sub_1D0F0B4(&StringLiteral_22229/*"mstEventConquestReward"*/);
    sub_1D0F0B4(&StringLiteral_22535/*"mstWarBoardEffect"*/);
    sub_1D0F0B4(&StringLiteral_22566/*"mstWarQuestSelection"*/);
    sub_1D0F0B4(&StringLiteral_25023/*"userDeck"*/);
    sub_1D0F0B4(&StringLiteral_22366/*"mstMasterMissionDisplayInfo"*/);
    sub_1D0F0B4(&StringLiteral_22563/*"mstWarGroup"*/);
    sub_1D0F0B4(&StringLiteral_22426/*"mstShop"*/);
    sub_1D0F0B4(&StringLiteral_22544/*"mstWarBoardPartySkill"*/);
    sub_1D0F0B4(&StringLiteral_25038/*"userEventItemLinkSvt"*/);
    sub_1D0F0B4(&StringLiteral_22266/*"mstEventPointBuff"*/);
    sub_1D0F0B4(&StringLiteral_22387/*"mstQuestExtension"*/);
    sub_1D0F0B4(&StringLiteral_25087/*"userSupportDeck"*/);
    sub_1D0F0B4(&StringLiteral_22446/*"mstSpotRoad"*/);
    sub_1D0F0B4(&StringLiteral_22505/*"mstSvtVoiceRelation"*/);
    sub_1D0F0B4(&StringLiteral_22180/*"mstCombineLimitGift"*/);
    sub_1D0F0B4(&StringLiteral_22230/*"mstEventCooltimeReward"*/);
    sub_1D0F0B4(&StringLiteral_22222/*"mstEventBulletinBoard"*/);
    sub_1D0F0B4(&StringLiteral_22281/*"mstEventRewardBg"*/);
    sub_1D0F0B4(&StringLiteral_22159/*"mstBoxGachaTalk"*/);
    sub_1D0F0B4(&StringLiteral_25072/*"userPaymentLimit"*/);
    sub_1D0F0B4(&StringLiteral_22313/*"mstFuncDisp"*/);
    sub_1D0F0B4(&StringLiteral_22492/*"mstSvtScript"*/);
    sub_1D0F0B4(&StringLiteral_22354/*"mstMapCond"*/);
    sub_1D0F0B4(&StringLiteral_22373/*"mstMyroomAddBgDiff"*/);
    sub_1D0F0B4(&StringLiteral_25037/*"userEventFortification"*/);
    sub_1D0F0B4(&StringLiteral_22543/*"mstWarBoardOnboardSkill"*/);
    sub_1D0F0B4(&StringLiteral_22325/*"mstGachaGroup"*/);
    sub_1D0F0B4(&StringLiteral_25203/*"viewQuestEnemyInfo"*/);
    sub_1D0F0B4(&StringLiteral_25011/*"userAccountLinkage"*/);
    sub_1D0F0B4(&StringLiteral_22466/*"mstSvtComment"*/);
    sub_1D0F0B4(&StringLiteral_22513/*"mstTreasureDevice"*/);
    sub_1D0F0B4(&StringLiteral_25202/*"viewGachaFeaturedSvt"*/);
    sub_1D0F0B4(&StringLiteral_25071/*"userNpcSvtRecord"*/);
    sub_1D0F0B4(&StringLiteral_22143/*"mstBattlePoint"*/);
    sub_1D0F0B4(&StringLiteral_22258/*"mstEventMissionGroup"*/);
    sub_1D0F0B4(&StringLiteral_25079/*"userQuestRecord"*/);
    sub_1D0F0B4(&StringLiteral_22418/*"mstRestrictionMessage"*/);
    sub_1D0F0B4(&StringLiteral_22339/*"mstGiftDetail"*/);
    sub_1D0F0B4(&StringLiteral_22333/*"mstGachaTicket"*/);
    sub_1D0F0B4(&StringLiteral_22488/*"mstSvtPhoto"*/);
    sub_1D0F0B4(&StringLiteral_23148/*"pickupUserFollower"*/);
    sub_1D0F0B4(&StringLiteral_22289/*"mstEventStatus"*/);
    sub_1D0F0B4(&StringLiteral_22467/*"mstSvtCommentAdd"*/);
    sub_1D0F0B4(&StringLiteral_22485/*"mstSvtOverwrite"*/);
    sub_1D0F0B4(&StringLiteral_22758/*"npcFollower"*/);
    sub_1D0F0B4(&StringLiteral_22228/*"mstEventCommandAssist"*/);
    sub_1D0F0B4(&StringLiteral_19488/*"eventSvtFatigue"*/);
    sub_1D0F0B4(&StringLiteral_22322/*"mstGachaBonusSelectLineup"*/);
    sub_1D0F0B4(&StringLiteral_22223/*"mstEventBulletinBoardRelease"*/);
    sub_1D0F0B4(&StringLiteral_22470/*"mstSvtExceed"*/);
    sub_1D0F0B4(&StringLiteral_22480/*"mstSvtLimitSpoilerProtection"*/);
    sub_1D0F0B4(&StringLiteral_22503/*"mstSvtVoice"*/);
    sub_1D0F0B4(&StringLiteral_22421/*"mstRestrictionWhole"*/);
    sub_1D0F0B4(&StringLiteral_25061/*"userGachaExtraCount"*/);
    sub_1D0F0B4(&StringLiteral_22359/*"mstMapGimmickPath"*/);
    sub_1D0F0B4(&StringLiteral_22296/*"mstEventTowerReward"*/);
    sub_1D0F0B4(&StringLiteral_22174/*"mstClassRelationOverwrite"*/);
    sub_1D0F0B4(&StringLiteral_22126/*"mstAi"*/);
    sub_1D0F0B4(&StringLiteral_25014/*"userBoxGacha"*/);
    sub_1D0F0B4(&StringLiteral_22460/*"mstSvtCard"*/);
    sub_1D0F0B4(&StringLiteral_25062/*"userGachaPickupCollateral"*/);
    sub_1D0F0B4(&StringLiteral_25060/*"userGachaDrawLog"*/);
    sub_1D0F0B4(&StringLiteral_22553/*"mstWarBoardStage"*/);
    sub_1D0F0B4(&StringLiteral_25027/*"userEquip"*/);
    sub_1D0F0B4(&StringLiteral_22283/*"mstEventRewardGuideRelease"*/);
    sub_1D0F0B4(&StringLiteral_22169/*"mstClassBoardCommandSpell"*/);
    sub_1D0F0B4(&StringLiteral_22364/*"mstMasterIndividualitySelect"*/);
    sub_1D0F0B4(&StringLiteral_22567/*"mstWarRelease"*/);
    sub_1D0F0B4(&StringLiteral_22320/*"mstGachaBehavior"*/);
    sub_1D0F0B4(&StringLiteral_22525/*"mstWar"*/);
    sub_1D0F0B4(&StringLiteral_22217/*"mstEventBonusFilter"*/);
    sub_1D0F0B4(&StringLiteral_22409/*"mstQuestScriptRelease"*/);
    sub_1D0F0B4(&StringLiteral_22428/*"mstShopAdd"*/);
    sub_1D0F0B4(&StringLiteral_25039/*"userEventMap"*/);
    sub_1D0F0B4(&StringLiteral_22263/*"mstEventPanelSpot"*/);
    sub_1D0F0B4(&StringLiteral_22166/*"mstClass"*/);
    sub_1D0F0B4(&StringLiteral_25010/*"userAccessary"*/);
    sub_1D0F0B4(&StringLiteral_22478/*"mstSvtLimitAdd"*/);
    sub_1D0F0B4(&StringLiteral_22408/*"mstQuestScriptMaterialOverwrite"*/);
    sub_1D0F0B4(&StringLiteral_18406/*"combineExp"*/);
    sub_1D0F0B4(&StringLiteral_25055/*"userFormation"*/);
    sub_1D0F0B4(&StringLiteral_22542/*"mstWarBoardMessageScript"*/);
    sub_1D0F0B4(&StringLiteral_22271/*"mstEventProgressValue"*/);
    sub_1D0F0B4(&StringLiteral_25103/*"userSvtVoicePlayed"*/);
    sub_1D0F0B4(&StringLiteral_22459/*"mstSvtBattlePoint"*/);
    sub_1D0F0B4(&StringLiteral_22473/*"mstSvtFlag"*/);
    sub_1D0F0B4(&StringLiteral_22153/*"mstBoardMessage"*/);
    sub_1D0F0B4(&StringLiteral_22262/*"mstEventPanelScan"*/);
    sub_1D0F0B4(&StringLiteral_22479/*"mstSvtLimitImage"*/);
    sub_1D0F0B4(&StringLiteral_22235/*"mstEventDiggingBlock"*/);
    sub_1D0F0B4(&StringLiteral_25047/*"userEventRandomMission"*/);
    sub_1D0F0B4(&StringLiteral_22129/*"mstArea"*/);
    sub_1D0F0B4(&StringLiteral_24630/*"totalEventRaid"*/);
    sub_1D0F0B4(&StringLiteral_22739/*"notEndEventMissionFix"*/);
    sub_1D0F0B4(&StringLiteral_22433/*"mstShopScript"*/);
    sub_1D0F0B4(&StringLiteral_25040/*"userEventMission"*/);
    sub_1D0F0B4(&StringLiteral_22367/*"mstMasterPhoto"*/);
    sub_1D0F0B4(&StringLiteral_22254/*"mstEventMissionActionAdd"*/);
    sub_1D0F0B4(&StringLiteral_22186/*"mstCombineTd"*/);
    sub_1D0F0B4(&StringLiteral_25097/*"userSvtFirstGetTime"*/);
    sub_1D0F0B4(&StringLiteral_22155/*"mstBoost"*/);
    sub_1D0F0B4(&StringLiteral_22493/*"mstSvtScriptAdd"*/);
    sub_1D0F0B4(&StringLiteral_22157/*"mstBoxGachaBase"*/);
    sub_1D0F0B4(&StringLiteral_22138/*"mstBannerAdd"*/);
    sub_1D0F0B4(&StringLiteral_22124/*"mstAccessary"*/);
    sub_1D0F0B4(&StringLiteral_22516/*"mstTreasureDeviceSequenceWeight"*/);
    sub_1D0F0B4(&StringLiteral_25045/*"userEventRace"*/);
    sub_1D0F0B4(&StringLiteral_22388/*"mstQuestGroup"*/);
    sub_1D0F0B4(&StringLiteral_22270/*"mstEventPointUpperRelease"*/);
    sub_1D0F0B4(&StringLiteral_25101/*"userSvtLeader"*/);
    sub_1D0F0B4(&StringLiteral_22477/*"mstSvtLimit"*/);
    sub_1D0F0B4(&StringLiteral_25053/*"userFollow"*/);
    sub_1D0F0B4(&StringLiteral_22251/*"mstEventLocationCampaign"*/);
    sub_1D0F0B4(&StringLiteral_22183/*"mstCombineQp"*/);
    sub_1D0F0B4(&StringLiteral_22212/*"mstEvent"*/);
    sub_1D0F0B4(&StringLiteral_22474/*"mstSvtFlagRelease"*/);
    sub_1D0F0B4(&StringLiteral_25056/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_1D0F0B4(&StringLiteral_25075/*"userPrivilege"*/);
    sub_1D0F0B4(&StringLiteral_22188/*"mstCommandCode"*/);
    sub_1D0F0B4(&StringLiteral_22457/*"mstSvtAppendPassiveSkill"*/);
    sub_1D0F0B4(&StringLiteral_22247/*"mstEventGroup"*/);
    sub_1D0F0B4(&StringLiteral_22321/*"mstGachaBonusSelect"*/);
    sub_1D0F0B4(&StringLiteral_25031/*"userEventBoardGameToken"*/);
    sub_1D0F0B4(&StringLiteral_22369/*"mstMissionItemDisplay"*/);
    sub_1D0F0B4(&StringLiteral_22374/*"mstMyroomSvtSpecialImage"*/);
    sub_1D0F0B4(&StringLiteral_22550/*"mstWarBoardRoad"*/);
    sub_1D0F0B4(&StringLiteral_22160/*"mstBuff"*/);
    sub_1D0F0B4(&StringLiteral_25264/*"warBoardData"*/);
    sub_1D0F0B4(&StringLiteral_22344/*"mstIllustrator"*/);
    sub_1D0F0B4(&StringLiteral_24625/*"totalBoxGacha"*/);
    sub_1D0F0B4(&StringLiteral_22491/*"mstSvtRarity"*/);
    sub_1D0F0B4(&StringLiteral_22526/*"mstWarAdd"*/);
    sub_1D0F0B4(&StringLiteral_22360/*"mstMapGimmickPathRelease"*/);
    sub_1D0F0B4(&StringLiteral_25057/*"userFriendRequestHistory"*/);
    sub_1D0F0B4(&StringLiteral_25008/*"user"*/);
    sub_1D0F0B4(&StringLiteral_17622/*"boxGachaHistory"*/);
    sub_1D0F0B4(&StringLiteral_22314/*"mstFuncGroup"*/);
    sub_1D0F0B4(&StringLiteral_22193/*"mstCommonConsume"*/);
    sub_1D0F0B4(&StringLiteral_22537/*"mstWarBoardEventScript"*/);
    sub_1D0F0B4(&StringLiteral_22338/*"mstGiftAdd"*/);
    sub_1D0F0B4(&StringLiteral_22302/*"mstEventUi"*/);
    sub_1D0F0B4(&StringLiteral_22443/*"mstSpotImage"*/);
    sub_1D0F0B4(&StringLiteral_22469/*"mstSvtCostumeRelease"*/);
    sub_1D0F0B4(&StringLiteral_25016/*"userClassStatistics"*/);
    sub_1D0F0B4(&StringLiteral_22355/*"mstMapGimmick"*/);
    sub_1D0F0B4(&StringLiteral_22395/*"mstQuestPhaseIndividuality"*/);
    sub_1D0F0B4(&StringLiteral_22300/*"mstEventTutorial"*/);
    sub_1D0F0B4(&StringLiteral_22564/*"mstWarGroupIgnore"*/);
    sub_1D0F0B4(&StringLiteral_22560/*"mstWarBoardStageWall"*/);
    sub_1D0F0B4(&StringLiteral_25051/*"userEventTrade"*/);
    sub_1D0F0B4(&StringLiteral_22128/*"mstAiField"*/);
    sub_1D0F0B4(&StringLiteral_22308/*"mstFriendPointGachaAdjust"*/);
    sub_1D0F0B4(&StringLiteral_22502/*"mstSvtTreasureDeviceRelease"*/);
    sub_1D0F0B4(&StringLiteral_22392/*"mstQuestPhase"*/);
    sub_1D0F0B4(&StringLiteral_25033/*"userEventDataLost"*/);
    sub_1D0F0B4(&StringLiteral_22458/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_1D0F0B4(&StringLiteral_22501/*"mstSvtTreasureDeviceDamage"*/);
    sub_1D0F0B4(&StringLiteral_22449/*"mstStage"*/);
    sub_1D0F0B4(&StringLiteral_22176/*"mstCombine"*/);
    sub_1D0F0B4(&StringLiteral_22224/*"mstEventCampaign"*/);
    sub_1D0F0B4(&StringLiteral_22557/*"mstWarBoardStageNpc"*/);
    sub_1D0F0B4(&StringLiteral_23115/*"paymentHistory"*/);
    sub_1D0F0B4(&StringLiteral_19654/*"exchangeSvt"*/);
    sub_1D0F0B4(&StringLiteral_22450/*"mstStageRemap"*/);
    sub_1D0F0B4(&StringLiteral_22416/*"mstRestriction"*/);
    sub_1D0F0B4(&StringLiteral_22405/*"mstQuestScript"*/);
    sub_1D0F0B4(&StringLiteral_22285/*"mstEventRewardSceneRelease"*/);
    sub_1D0F0B4(&StringLiteral_22520/*"mstVoiceCond"*/);
    sub_1D0F0B4(&StringLiteral_25086/*"userSubEquip"*/);
    sub_1D0F0B4(&StringLiteral_22278/*"mstEventRecipe"*/);
    sub_1D0F0B4(&StringLiteral_22468/*"mstSvtCostume"*/);
    sub_1D0F0B4(&StringLiteral_22489/*"mstSvtProfile"*/);
    sub_1D0F0B4(&StringLiteral_22195/*"mstCommonRestriction"*/);
    sub_1D0F0B4(&StringLiteral_25065/*"userHeelPortrait"*/);
    sub_1D0F0B4(&StringLiteral_22438/*"mstSkillGroupOverwrite"*/);
    sub_1D0F0B4(&StringLiteral_25019/*"userCommandCodeCollection"*/);
    sub_1D0F0B4(&StringLiteral_22191/*"mstCommandCodeSkillRelease"*/);
    sub_1D0F0B4(&StringLiteral_22204/*"mstEffectMovie"*/);
    sub_1D0F0B4(&StringLiteral_22397/*"mstQuestPickup"*/);
    sub_1D0F0B4(&StringLiteral_22556/*"mstWarBoardStageLayout"*/);
    sub_1D0F0B4(&StringLiteral_22531/*"mstWarBoardActionTrendCond"*/);
    sub_1D0F0B4(&StringLiteral_22226/*"mstEventCombine"*/);
    sub_1D0F0B4(&StringLiteral_22545/*"mstWarBoardQuest"*/);
    sub_1D0F0B4(&StringLiteral_22385/*"mstQuestConsumeItem"*/);
    sub_1D0F0B4(&StringLiteral_22394/*"mstQuestPhaseDetailAdd"*/);
    sub_1D0F0B4(&StringLiteral_22343/*"mstHeelPortrait"*/);
    sub_1D0F0B4(&StringLiteral_19655/*"exchangeSvtCoinGivenNum"*/);
    sub_1D0F0B4(&StringLiteral_25074/*"userPresentHistory"*/);
    sub_1D0F0B4(&StringLiteral_25012/*"userBgImagePartsGroup"*/);
    sub_1D0F0B4(&StringLiteral_22165/*"mstChaldeaGatePickup"*/);
    sub_1D0F0B4(&StringLiteral_22546/*"mstWarBoardRatingBase"*/);
    sub_1D0F0B4(&StringLiteral_22326/*"mstGachaImage"*/);
    sub_1D0F0B4(&StringLiteral_22210/*"mstEquipImage"*/);
    sub_1D0F0B4(&StringLiteral_25046/*"userEventRaid"*/);
    sub_1D0F0B4(&StringLiteral_22464/*"mstSvtCollection"*/);
    sub_1D0F0B4(&StringLiteral_20055/*"friendshipQuestDialogInfo"*/);
    sub_1D0F0B4(&StringLiteral_22375/*"mstNews"*/);
    sub_1D0F0B4(&StringLiteral_22316/*"mstGacha"*/);
    sub_1D0F0B4(&StringLiteral_22437/*"mstSkillGroup"*/);
    sub_1D0F0B4(&StringLiteral_22342/*"mstGuide"*/);
    sub_1D0F0B4(&StringLiteral_22329/*"mstGachaPickupCollateralGroup"*/);
    sub_1D0F0B4(&StringLiteral_22171/*"mstClassBoardLock"*/);
    sub_1D0F0B4(&StringLiteral_22202/*"mstDropAdd"*/);
    sub_1D0F0B4(&StringLiteral_22269/*"mstEventPointUpper"*/);
    sub_1D0F0B4(&StringLiteral_22150/*"mstBlankEarthSpot"*/);
    sub_1D0F0B4(&StringLiteral_22507/*"mstTerminalOverwrite"*/);
    sub_1D0F0B4(&StringLiteral_22211/*"mstEquipSkill"*/);
    sub_1D0F0B4(&StringLiteral_22304/*"mstEventUiValue"*/);
    sub_1D0F0B4(&StringLiteral_25021/*"userContinue"*/);
    sub_1D0F0B4(&StringLiteral_22382/*"mstQuestAdd"*/);
    sub_1D0F0B4(&StringLiteral_22170/*"mstClassBoardLine"*/);
    sub_1D0F0B4(&StringLiteral_24949/*"updateProfileDialogInfo"*/);
    sub_1D0F0B4(&StringLiteral_22518/*"mstVoice"*/);
    sub_1D0F0B4(&StringLiteral_25041/*"userEventMissionConditionDetail"*/);
    sub_1D0F0B4(&StringLiteral_22130/*"mstAssetbundleKey"*/);
    sub_1D0F0B4(&StringLiteral_22260/*"mstEventPanelMap"*/);
    sub_1D0F0B4(&StringLiteral_25070/*"userLogin"*/);
    sub_1D0F0B4(&StringLiteral_22351/*"mstLoginQuest"*/);
    sub_1D0F0B4(&StringLiteral_22377/*"mstPartialMaintenance"*/);
    sub_1D0F0B4(&StringLiteral_25048/*"userEventSpot"*/);
    sub_1D0F0B4(&StringLiteral_22280/*"mstEventReward"*/);
    sub_1D0F0B4(&StringLiteral_22232/*"mstEventDataLostBattleReset"*/);
    sub_1D0F0B4(&StringLiteral_22132/*"mstAttri"*/);
    sub_1D0F0B4(&StringLiteral_22555/*"mstWarBoardStageDetail"*/);
    sub_1D0F0B4(&StringLiteral_22496/*"mstSvtSkillAdd"*/);
    sub_1D0F0B4(&StringLiteral_25044/*"userEventQuestCooltime"*/);
    sub_1D0F0B4(&StringLiteral_22406/*"mstQuestScriptBranchMaterial"*/);
    sub_1D0F0B4(&StringLiteral_22242/*"mstEventFatigueRecovery"*/);
    sub_1D0F0B4(&StringLiteral_22533/*"mstWarBoardAi"*/);
    sub_1D0F0B4(&StringLiteral_22512/*"mstTreasureBoxTalk"*/);
    sub_1D0F0B4(&StringLiteral_22536/*"mstWarBoardEvent"*/);
    sub_1D0F0B4(&StringLiteral_22522/*"mstVoicePlayCond"*/);
    sub_1D0F0B4(&StringLiteral_22323/*"mstGachaDetail"*/);
    sub_1D0F0B4(&StringLiteral_22291/*"mstEventSuperBoss"*/);
    sub_1D0F0B4(&StringLiteral_22435/*"mstSkillAdd"*/);
    byte_4E7656C = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1D0F300(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_35C7DCC *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1D0F30C(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_22454/*"mstSvt"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_22466/*"mstSvtComment"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_22489/*"mstSvtProfile"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_22525/*"mstWar"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_17300/*"battle"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_22513/*"mstTreasureDevice"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_22477/*"mstSvtLimit"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_22499/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_22166/*"mstClass"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_22492/*"mstSvtScript"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_22460/*"mstSvtCard"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_22495/*"mstSvtSkill"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_22486/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_25088/*"userSvt"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_25102/*"userSvtStorage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_22449/*"mstStage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_22475/*"mstSvtGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_22150/*"mstBlankEarthSpot"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_22151/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_22441/*"mstSpot"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_22443/*"mstSpotImage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_22446/*"mstSpotRoad"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_22355/*"mstMapGimmick"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_22337/*"mstGift"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_22338/*"mstGiftAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_22453/*"mstSubEquip"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_25008/*"user"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_25063/*"userGame"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_25023/*"userDeck"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_25092/*"userSvtCollection"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_22309/*"mstFriendship"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_22316/*"mstGacha"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_22326/*"mstGachaImage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_25058/*"userGacha"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_25062/*"userGachaPickupCollateral"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_25069/*"userItem"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_22348/*"mstItem"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_22333/*"mstGachaTicket"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_22317/*"mstGachaAdjustAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_22327/*"mstGachaPickup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_22308/*"mstFriendPointGachaAdjust"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_22319/*"mstGachaBaseCollateral"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_22124/*"mstAccessary"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_25010/*"userAccessary"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_25086/*"userSubEquip"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_24500/*"tblUserGame"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_22426/*"mstShop"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_22452/*"mstStoneShop"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_22136/*"mstBankShop"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_22433/*"mstShopScript"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_22207/*"mstEquip"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_22209/*"mstEquipExp"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_22211/*"mstEquipSkill"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_25027/*"userEquip"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_25055/*"userFormation"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_22434/*"mstSkill"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_22440/*"mstSkillLv"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_22436/*"mstSkillDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_22311/*"mstFunc"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_22160/*"mstBuff"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_22330/*"mstGachaRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_25077/*"userQuest"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_25078/*"userQuestInfo"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_25079/*"userQuestRecord"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_22517/*"mstUserExp"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_22375/*"mstNews"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_22506/*"mstTelop"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_22939/*"otherUserGame"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_24499/*"tblFriend"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_25073/*"userPresentBox"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_22212/*"mstEvent"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_22381/*"mstQuest"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_22382/*"mstQuestAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_22400/*"mstQuestRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_22392/*"mstQuestPhase"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_22393/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_22388/*"mstQuestGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_22399/*"mstQuestRandomGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_22385/*"mstQuestConsumeItem"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_22391/*"mstQuestMessage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_25204/*"viewQuestInfo"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_25201/*"viewEnemy"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_25203/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_22129/*"mstArea"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_22146/*"mstBgm"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_22272/*"mstEventQuest"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_22224/*"mstEventCampaign"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_22183/*"mstCombineQp"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_22182/*"mstCombineMaterial"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_22226/*"mstEventCombine"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_22471/*"mstSvtExp"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_22185/*"mstCombineSkill"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_22186/*"mstCombineTd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_22344/*"mstIllustrator"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_22200/*"mstCv"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_22515/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_22514/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_25054/*"userFollower"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_22758/*"npcFollower"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_22764/*"npcSvtFollower"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_25029/*"userEvent"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_25076/*"userProfile"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_25083/*"userShop"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_25021/*"userContinue"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_22197/*"mstConstant"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_22198/*"mstConstantLong"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_22199/*"mstConstantStr"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_22192/*"mstCommandSpell"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_22126/*"mstAi"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_22127/*"mstAiAct"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_22503/*"mstSvtVoice"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_22133/*"mstAttriRelation"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_22173/*"mstClassRelation"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_22203/*"mstEffect"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_22210/*"mstEquipImage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_22179/*"mstCombineLimit"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_22164/*"mstCard"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_22184/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_22478/*"mstSvtLimitAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_22491/*"mstSvtRarity"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_22425/*"mstSetItem"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_22415/*"mstRecover"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_22137/*"mstBanner"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_22431/*"mstShopRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_22280/*"mstEventReward"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_22233/*"mstEventDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_22292/*"mstEventSvt"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_22156/*"mstBoxGacha"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_22157/*"mstBoxGachaBase"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_22159/*"mstBoxGachaTalk"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_25014/*"userBoxGacha"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17622/*"boxGachaHistory"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_22139/*"mstBattleBg"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_22508/*"mstTips"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_25070/*"userLogin"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_22518/*"mstVoice"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_22282/*"mstEventRewardExtra"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_22252/*"mstEventMission"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_22256/*"mstEventMissionCondition"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    140,
    (Il2CppObject *)StringLiteral_22257/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    141,
    (Il2CppObject *)StringLiteral_22253/*"mstEventMissionAction"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    142,
    (Il2CppObject *)StringLiteral_22254/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    145,
    (Il2CppObject *)StringLiteral_22196/*"mstCompleteMission"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    143,
    (Il2CppObject *)StringLiteral_22255/*"mstEventMissionAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    144,
    (Il2CppObject *)StringLiteral_22286/*"mstEventRewardSet"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    146,
    (Il2CppObject *)StringLiteral_25040/*"userEventMission"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    147,
    (Il2CppObject *)StringLiteral_25041/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    148,
    (Il2CppObject *)StringLiteral_22158/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    149,
    (Il2CppObject *)StringLiteral_22175/*"mstClosedMessage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    150,
    (Il2CppObject *)StringLiteral_25101/*"userSvtLeader"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    151,
    (Il2CppObject *)StringLiteral_22314/*"mstFuncGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    152,
    (Il2CppObject *)StringLiteral_22276/*"mstEventRaid"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    153,
    (Il2CppObject *)StringLiteral_24630/*"totalEventRaid"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    154,
    (Il2CppObject *)StringLiteral_25046/*"userEventRaid"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    155,
    (Il2CppObject *)StringLiteral_22264/*"mstEventPoint"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    156,
    (Il2CppObject *)StringLiteral_22267/*"mstEventPointGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    157,
    (Il2CppObject *)StringLiteral_24628/*"totalEventPoint"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    158,
    (Il2CppObject *)StringLiteral_25043/*"userEventPoint"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    159,
    (Il2CppObject *)StringLiteral_25074/*"userPresentHistory"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    160,
    (Il2CppObject *)StringLiteral_22365/*"mstMasterMission"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    161,
    (Il2CppObject *)StringLiteral_22470/*"mstSvtExceed"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    162,
    (Il2CppObject *)StringLiteral_22377/*"mstPartialMaintenance"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    163,
    (Il2CppObject *)StringLiteral_22342/*"mstGuide"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    164,
    (Il2CppObject *)StringLiteral_22366/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    165,
    (Il2CppObject *)StringLiteral_22325/*"mstGachaGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    166,
    (Il2CppObject *)StringLiteral_22402/*"mstQuestReset"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    167,
    (Il2CppObject *)StringLiteral_22526/*"mstWarAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    168,
    (Il2CppObject *)StringLiteral_22248/*"mstEventItemDisplay"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    169,
    (Il2CppObject *)StringLiteral_22249/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    170,
    (Il2CppObject *)StringLiteral_22250/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    171,
    (Il2CppObject *)StringLiteral_22300/*"mstEventTutorial"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    172,
    (Il2CppObject *)StringLiteral_22301/*"mstEventTutorialCond"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    173,
    (Il2CppObject *)StringLiteral_22524/*"mstVoiceRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    174,
    (Il2CppObject *)StringLiteral_22291/*"mstEventSuperBoss"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    175,
    (Il2CppObject *)StringLiteral_25049/*"userEventSuperBoss"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    176,
    (Il2CppObject *)StringLiteral_22405/*"mstQuestScript"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    177,
    (Il2CppObject *)StringLiteral_22409/*"mstQuestScriptRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    178,
    (Il2CppObject *)StringLiteral_22368/*"mstMaterialFolder"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    179,
    (Il2CppObject *)StringLiteral_22416/*"mstRestriction"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    180,
    (Il2CppObject *)StringLiteral_22403/*"mstQuestRestriction"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    181,
    (Il2CppObject *)StringLiteral_22505/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    182,
    (Il2CppObject *)StringLiteral_22429/*"mstShopDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    183,
    (Il2CppObject *)StringLiteral_22493/*"mstSvtScriptAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    184,
    (Il2CppObject *)StringLiteral_22176/*"mstCombine"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    185,
    (Il2CppObject *)StringLiteral_22128/*"mstAiField"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    186,
    (Il2CppObject *)StringLiteral_22467/*"mstSvtCommentAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    187,
    (Il2CppObject *)StringLiteral_22243/*"mstEventFilter"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    188,
    (Il2CppObject *)StringLiteral_25087/*"userSupportDeck"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    189,
    (Il2CppObject *)StringLiteral_22284/*"mstEventRewardScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    190,
    (Il2CppObject *)StringLiteral_22305/*"mstEventVoicePlay"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    191,
    (Il2CppObject *)StringLiteral_22332/*"mstGachaSub"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    192,
    (Il2CppObject *)StringLiteral_22323/*"mstGachaDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    193,
    (Il2CppObject *)StringLiteral_22321/*"mstGachaBonusSelect"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    194,
    (Il2CppObject *)StringLiteral_22322/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    195,
    (Il2CppObject *)StringLiteral_22462/*"mstSvtChange"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    196,
    (Il2CppObject *)StringLiteral_22520/*"mstVoiceCond"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    197,
    (Il2CppObject *)StringLiteral_22147/*"mstBgmRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    198,
    (Il2CppObject *)StringLiteral_22372/*"mstMyroomAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    199,
    (Il2CppObject *)StringLiteral_22427/*"mstShopAction"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    200,
    (Il2CppObject *)StringLiteral_22285/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    201,
    (Il2CppObject *)StringLiteral_22352/*"mstMap"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    202,
    (Il2CppObject *)StringLiteral_22354/*"mstMapCond"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    203,
    (Il2CppObject *)StringLiteral_22353/*"mstMapButton"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    204,
    (Il2CppObject *)StringLiteral_22138/*"mstBannerAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    205,
    (Il2CppObject *)StringLiteral_22384/*"mstQuestBehavior"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    206,
    (Il2CppObject *)StringLiteral_22213/*"mstEventAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    207,
    (Il2CppObject *)StringLiteral_22509/*"mstTotalLogin"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    208,
    (Il2CppObject *)StringLiteral_22472/*"mstSvtFilter"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    209,
    (Il2CppObject *)StringLiteral_22178/*"mstCombineCostume"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    210,
    (Il2CppObject *)StringLiteral_22468/*"mstSvtCostume"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    211,
    (Il2CppObject *)StringLiteral_22469/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    212,
    (Il2CppObject *)StringLiteral_22447/*"mstStaffPhoto"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    213,
    (Il2CppObject *)StringLiteral_22448/*"mstStaffPhotoCostume"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    214,
    (Il2CppObject *)StringLiteral_25057/*"userFriendRequestHistory"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    215,
    (Il2CppObject *)StringLiteral_25013/*"userBlacklist"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    216,
    (Il2CppObject *)StringLiteral_22350/*"mstItemSelect"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    217,
    (Il2CppObject *)StringLiteral_22274/*"mstEventRace"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    218,
    (Il2CppObject *)StringLiteral_22275/*"mstEventRaceResult"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    219,
    (Il2CppObject *)StringLiteral_22398/*"mstQuestRacePoint"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    220,
    (Il2CppObject *)StringLiteral_25045/*"userEventRace"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    221,
    (Il2CppObject *)StringLiteral_22287/*"mstEventScript"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    222,
    (Il2CppObject *)StringLiteral_22288/*"mstEventScriptRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    223,
    (Il2CppObject *)StringLiteral_22445/*"mstSpotPath"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    224,
    (Il2CppObject *)StringLiteral_22442/*"mstSpotAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    225,
    (Il2CppObject *)StringLiteral_24629/*"totalEventRace"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    226,
    (Il2CppObject *)StringLiteral_22268/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    227,
    (Il2CppObject *)StringLiteral_22523/*"mstVoicePlayGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    228,
    (Il2CppObject *)StringLiteral_22522/*"mstVoicePlayCond"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    229,
    (Il2CppObject *)StringLiteral_22331/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    230,
    (Il2CppObject *)StringLiteral_22473/*"mstSvtFlag"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    231,
    (Il2CppObject *)StringLiteral_22474/*"mstSvtFlagRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    232,
    (Il2CppObject *)StringLiteral_22251/*"mstEventLocationCampaign"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    233,
    (Il2CppObject *)StringLiteral_22163/*"mstCampaignInfo"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    234,
    (Il2CppObject *)StringLiteral_22201/*"mstDialogMessage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    235,
    (Il2CppObject *)StringLiteral_22476/*"mstSvtIndividuality"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    236,
    (Il2CppObject *)StringLiteral_22153/*"mstBoardMessage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    237,
    (Il2CppObject *)StringLiteral_22154/*"mstBoardMessageRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    238,
    (Il2CppObject *)StringLiteral_22293/*"mstEventSvtFatigue"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    239,
    (Il2CppObject *)StringLiteral_25034/*"userEventDeck"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    240,
    (Il2CppObject *)StringLiteral_22295/*"mstEventTower"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    241,
    (Il2CppObject *)StringLiteral_22296/*"mstEventTowerReward"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    242,
    (Il2CppObject *)StringLiteral_22222/*"mstEventBulletinBoard"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    243,
    (Il2CppObject *)StringLiteral_22223/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    244,
    (Il2CppObject *)StringLiteral_22241/*"mstEventFactory"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    245,
    (Il2CppObject *)StringLiteral_22430/*"mstShopGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    246,
    (Il2CppObject *)StringLiteral_22134/*"mstAuraEffect"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    247,
    (Il2CppObject *)StringLiteral_22135/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    248,
    (Il2CppObject *)StringLiteral_25042/*"userEventMissionFix"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    249,
    (Il2CppObject *)StringLiteral_22739/*"notEndEventMissionFix"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    250,
    (Il2CppObject *)StringLiteral_22205/*"mstEnemyMaster"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    251,
    (Il2CppObject *)StringLiteral_22206/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    252,
    (Il2CppObject *)StringLiteral_22497/*"mstSvtSkillRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    253,
    (Il2CppObject *)StringLiteral_22487/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    254,
    (Il2CppObject *)StringLiteral_22502/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    255,
    (Il2CppObject *)StringLiteral_22361/*"mstMapGimmickRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    256,
    (Il2CppObject *)StringLiteral_22188/*"mstCommandCode"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    257,
    (Il2CppObject *)StringLiteral_22465/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    258,
    (Il2CppObject *)StringLiteral_25018/*"userCommandCode"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    259,
    (Il2CppObject *)StringLiteral_25019/*"userCommandCodeCollection"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    260,
    (Il2CppObject *)StringLiteral_25094/*"userSvtCommandCode"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    261,
    (Il2CppObject *)StringLiteral_22190/*"mstCommandCodeSkill"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    262,
    (Il2CppObject *)StringLiteral_22191/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    263,
    (Il2CppObject *)StringLiteral_22189/*"mstCommandCodeComment"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    264,
    (Il2CppObject *)StringLiteral_22289/*"mstEventStatus"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    265,
    (Il2CppObject *)StringLiteral_22290/*"mstEventStatusQuest"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    266,
    (Il2CppObject *)StringLiteral_22195/*"mstCommonRestriction"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    267,
    (Il2CppObject *)StringLiteral_22266/*"mstEventPointBuff"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    268,
    (Il2CppObject *)StringLiteral_25053/*"userFollow"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    269,
    (Il2CppObject *)StringLiteral_22283/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    270,
    (Il2CppObject *)StringLiteral_22763/*"npcSvtEquip"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    271,
    (Il2CppObject *)StringLiteral_22225/*"mstEventCampaignRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    272,
    (Il2CppObject *)StringLiteral_22482/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    273,
    (Il2CppObject *)StringLiteral_22238/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    274,
    (Il2CppObject *)StringLiteral_22265/*"mstEventPointActivity"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    275,
    (Il2CppObject *)StringLiteral_22312/*"mstFuncCategory"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    276,
    (Il2CppObject *)StringLiteral_22397/*"mstQuestPickup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    277,
    (Il2CppObject *)StringLiteral_22302/*"mstEventUi"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    278,
    (Il2CppObject *)StringLiteral_22303/*"mstEventUiRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    279,
    (Il2CppObject *)StringLiteral_22304/*"mstEventUiValue"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    280,
    (Il2CppObject *)StringLiteral_22229/*"mstEventConquestReward"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    281,
    (Il2CppObject *)StringLiteral_22759/*"npcFollowerRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    282,
    (Il2CppObject *)StringLiteral_22217/*"mstEventBonusFilter"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    283,
    (Il2CppObject *)StringLiteral_22218/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    284,
    (Il2CppObject *)StringLiteral_22219/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    285,
    (Il2CppObject *)StringLiteral_25061/*"userGachaExtraCount"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    286,
    (Il2CppObject *)StringLiteral_22187/*"mstCommandCardRankParam"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    287,
    (Il2CppObject *)StringLiteral_25093/*"userSvtCommandCard"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    288,
    (Il2CppObject *)StringLiteral_22380/*"mstPrivilege"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    289,
    (Il2CppObject *)StringLiteral_25075/*"userPrivilege"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    290,
    (Il2CppObject *)StringLiteral_22386/*"mstQuestDateRange"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    291,
    (Il2CppObject *)StringLiteral_22269/*"mstEventPointUpper"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    292,
    (Il2CppObject *)StringLiteral_22270/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    293,
    (Il2CppObject *)StringLiteral_25080/*"userQuestRoute"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    294,
    (Il2CppObject *)StringLiteral_22220/*"mstEventBossStatusUi"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    295,
    (Il2CppObject *)StringLiteral_22194/*"mstCommonRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    296,
    (Il2CppObject *)StringLiteral_22410/*"mstQuestSpotRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    297,
    (Il2CppObject *)StringLiteral_22521/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    298,
    (Il2CppObject *)StringLiteral_22174/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    299,
    (Il2CppObject *)StringLiteral_22247/*"mstEventGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    300,
    (Il2CppObject *)StringLiteral_22130/*"mstAssetbundleKey"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    301,
    (Il2CppObject *)StringLiteral_24625/*"totalBoxGacha"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    302,
    (Il2CppObject *)StringLiteral_22501/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    303,
    (Il2CppObject *)StringLiteral_19488/*"eventSvtFatigue"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    304,
    (Il2CppObject *)StringLiteral_22281/*"mstEventRewardBg"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    305,
    (Il2CppObject *)StringLiteral_22242/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    306,
    (Il2CppObject *)StringLiteral_19475/*"eventBoostItemUsed"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    307,
    (Il2CppObject *)StringLiteral_22451/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    308,
    (Il2CppObject *)StringLiteral_22394/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    309,
    (Il2CppObject *)StringLiteral_22519/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    310,
    (Il2CppObject *)StringLiteral_22450/*"mstStageRemap"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    311,
    (Il2CppObject *)StringLiteral_18406/*"combineExp"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    312,
    (Il2CppObject *)StringLiteral_22214/*"mstEventBoardGameCell"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    313,
    (Il2CppObject *)StringLiteral_22215/*"mstEventBoardGameToken"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    314,
    (Il2CppObject *)StringLiteral_22216/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    315,
    (Il2CppObject *)StringLiteral_25031/*"userEventBoardGameToken"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    316,
    (Il2CppObject *)StringLiteral_22456/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    317,
    (Il2CppObject *)StringLiteral_22376/*"mstOpeningMovie"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    318,
    (Il2CppObject *)StringLiteral_22480/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    319,
    (Il2CppObject *)StringLiteral_23148/*"pickupUserFollower"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    320,
    (Il2CppObject *)StringLiteral_22464/*"mstSvtCollection"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    321,
    (Il2CppObject *)StringLiteral_22320/*"mstGachaBehavior"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    322,
    (Il2CppObject *)StringLiteral_22273/*"mstEventQuestCooltime"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    323,
    (Il2CppObject *)StringLiteral_25044/*"userEventQuestCooltime"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    324,
    (Il2CppObject *)StringLiteral_22155/*"mstBoost"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    325,
    (Il2CppObject *)StringLiteral_22527/*"mstWarBoard"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    326,
    (Il2CppObject *)StringLiteral_22551/*"mstWarBoardSquare"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    327,
    (Il2CppObject *)StringLiteral_22550/*"mstWarBoardRoad"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    328,
    (Il2CppObject *)StringLiteral_22553/*"mstWarBoardStage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    329,
    (Il2CppObject *)StringLiteral_22528/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    330,
    (Il2CppObject *)StringLiteral_22530/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    331,
    (Il2CppObject *)StringLiteral_22561/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    332,
    (Il2CppObject *)StringLiteral_22556/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    333,
    (Il2CppObject *)StringLiteral_22557/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    334,
    (Il2CppObject *)StringLiteral_22560/*"mstWarBoardStageWall"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    335,
    (Il2CppObject *)StringLiteral_22533/*"mstWarBoardAi"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    336,
    (Il2CppObject *)StringLiteral_22546/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    337,
    (Il2CppObject *)StringLiteral_22547/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    338,
    (Il2CppObject *)StringLiteral_22540/*"mstWarBoardItem"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    339,
    (Il2CppObject *)StringLiteral_22562/*"mstWarBoardTreasure"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    340,
    (Il2CppObject *)StringLiteral_22545/*"mstWarBoardQuest"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    341,
    (Il2CppObject *)StringLiteral_25264/*"warBoardData"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    342,
    (Il2CppObject *)StringLiteral_22539/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    343,
    (Il2CppObject *)StringLiteral_22531/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    344,
    (Il2CppObject *)StringLiteral_22529/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    345,
    (Il2CppObject *)StringLiteral_22549/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    346,
    (Il2CppObject *)StringLiteral_22559/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    347,
    (Il2CppObject *)StringLiteral_22260/*"mstEventPanelMap"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    348,
    (Il2CppObject *)StringLiteral_22261/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    349,
    (Il2CppObject *)StringLiteral_22263/*"mstEventPanelSpot"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    350,
    (Il2CppObject *)StringLiteral_22262/*"mstEventPanelScan"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    351,
    (Il2CppObject *)StringLiteral_22234/*"mstEventDigging"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    352,
    (Il2CppObject *)StringLiteral_22236/*"mstEventDiggingReward"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    353,
    (Il2CppObject *)StringLiteral_22235/*"mstEventDiggingBlock"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    354,
    (Il2CppObject *)StringLiteral_25035/*"userEventDigging"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    355,
    (Il2CppObject *)StringLiteral_22193/*"mstCommonConsume"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    356,
    (Il2CppObject *)StringLiteral_25039/*"userEventMap"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    357,
    (Il2CppObject *)StringLiteral_25048/*"userEventSpot"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    358,
    (Il2CppObject *)StringLiteral_22563/*"mstWarGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    359,
    (Il2CppObject *)StringLiteral_22479/*"mstSvtLimitImage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    360,
    (Il2CppObject *)StringLiteral_20055/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    361,
    (Il2CppObject *)StringLiteral_22404/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    362,
    (Il2CppObject *)StringLiteral_22131/*"mstAssist"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    363,
    (Il2CppObject *)StringLiteral_22535/*"mstWarBoardEffect"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    364,
    (Il2CppObject *)StringLiteral_22543/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    365,
    (Il2CppObject *)StringLiteral_17380/*"beforeBirthDay"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    366,
    (Il2CppObject *)StringLiteral_22351/*"mstLoginQuest"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    367,
    (Il2CppObject *)StringLiteral_22227/*"mstEventCombineCostume"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    368,
    (Il2CppObject *)StringLiteral_22558/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    369,
    (Il2CppObject *)StringLiteral_22500/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    370,
    (Il2CppObject *)StringLiteral_22435/*"mstSkillAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    371,
    (Il2CppObject *)StringLiteral_22481/*"mstSvtLvDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    372,
    (Il2CppObject *)StringLiteral_22318/*"mstGachaAppend"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    373,
    (Il2CppObject *)StringLiteral_25060/*"userGachaDrawLog"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    374,
    (Il2CppObject *)StringLiteral_22457/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    375,
    (Il2CppObject *)StringLiteral_25089/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    376,
    (Il2CppObject *)StringLiteral_25090/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    377,
    (Il2CppObject *)StringLiteral_22458/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    378,
    (Il2CppObject *)StringLiteral_22177/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    379,
    (Il2CppObject *)StringLiteral_22463/*"mstSvtCoin"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    380,
    (Il2CppObject *)StringLiteral_25091/*"userSvtCoin"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    381,
    (Il2CppObject *)StringLiteral_22455/*"mstSvtAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    382,
    (Il2CppObject *)StringLiteral_22510/*"mstTreasureBox"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    383,
    (Il2CppObject *)StringLiteral_22511/*"mstTreasureBoxGift"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    384,
    (Il2CppObject *)StringLiteral_22512/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    385,
    (Il2CppObject *)StringLiteral_25036/*"userEventExpedition"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    386,
    (Il2CppObject *)StringLiteral_22239/*"mstEventExpedition"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    387,
    (Il2CppObject *)StringLiteral_22240/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    388,
    (Il2CppObject *)StringLiteral_22278/*"mstEventRecipe"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    389,
    (Il2CppObject *)StringLiteral_22279/*"mstEventRecipeGift"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    390,
    (Il2CppObject *)StringLiteral_25037/*"userEventFortification"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    391,
    (Il2CppObject *)StringLiteral_22244/*"mstEventFortification"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    392,
    (Il2CppObject *)StringLiteral_22245/*"mstEventFortificationDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    393,
    (Il2CppObject *)StringLiteral_22246/*"mstEventFortificationSvt"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    394,
    (Il2CppObject *)StringLiteral_25103/*"userSvtVoicePlayed"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    395,
    (Il2CppObject *)StringLiteral_24949/*"updateProfileDialogInfo"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    396,
    (Il2CppObject *)StringLiteral_22483/*"mstSvtMaterialTd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    397,
    (Il2CppObject *)StringLiteral_22140/*"mstBattleMasterImage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    398,
    (Il2CppObject *)StringLiteral_25056/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    399,
    (Il2CppObject *)StringLiteral_25047/*"userEventRandomMission"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    400,
    (Il2CppObject *)StringLiteral_22271/*"mstEventProgressValue"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    401,
    (Il2CppObject *)StringLiteral_22484/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    402,
    (Il2CppObject *)StringLiteral_22277/*"mstEventRandomMission"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    403,
    (Il2CppObject *)StringLiteral_25059/*"userGachaDrawHistory"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    404,
    (Il2CppObject *)StringLiteral_25017/*"userCoinRoom"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    405,
    (Il2CppObject *)StringLiteral_22221/*"mstEventBuddyPoint"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    406,
    (Il2CppObject *)StringLiteral_22294/*"mstEventSvtPointRank"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    407,
    (Il2CppObject *)StringLiteral_25050/*"userEventSvtPoint"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    408,
    (Il2CppObject *)StringLiteral_22307/*"mstFieldMotion"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    409,
    (Il2CppObject *)StringLiteral_25026/*"userDeleteReservation"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    410,
    (Il2CppObject *)StringLiteral_22494/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    411,
    (Il2CppObject *)StringLiteral_22208/*"mstEquipAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    412,
    (Il2CppObject *)StringLiteral_22401/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    413,
    (Il2CppObject *)StringLiteral_25030/*"userEventAlloutBattle"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    414,
    (Il2CppObject *)StringLiteral_22407/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    415,
    (Il2CppObject *)StringLiteral_22141/*"mstBattleMessage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    416,
    (Il2CppObject *)StringLiteral_22142/*"mstBattleMessageGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    417,
    (Il2CppObject *)StringLiteral_25071/*"userNpcSvtRecord"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    418,
    (Il2CppObject *)StringLiteral_22162/*"mstBuffTypeDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    419,
    (Il2CppObject *)StringLiteral_22541/*"mstWarBoardMessage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    420,
    (Il2CppObject *)StringLiteral_22544/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    421,
    (Il2CppObject *)StringLiteral_22542/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    422,
    (Il2CppObject *)StringLiteral_22566/*"mstWarQuestSelection"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    423,
    (Il2CppObject *)StringLiteral_22555/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    424,
    (Il2CppObject *)StringLiteral_22408/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    425,
    (Il2CppObject *)StringLiteral_22406/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    426,
    (Il2CppObject *)StringLiteral_22125/*"mstAdCheckPoint"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    427,
    (Il2CppObject *)StringLiteral_22339/*"mstGiftDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    428,
    (Il2CppObject *)StringLiteral_22180/*"mstCombineLimitGift"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    429,
    (Il2CppObject *)StringLiteral_22230/*"mstEventCooltimeReward"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    430,
    (Il2CppObject *)StringLiteral_25032/*"userEventCooltimeReward"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    431,
    (Il2CppObject *)StringLiteral_22168/*"mstClassBoardClass"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    432,
    (Il2CppObject *)StringLiteral_22167/*"mstClassBoardBase"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    433,
    (Il2CppObject *)StringLiteral_22170/*"mstClassBoardLine"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    434,
    (Il2CppObject *)StringLiteral_22171/*"mstClassBoardLock"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    435,
    (Il2CppObject *)StringLiteral_22172/*"mstClassBoardSquare"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    436,
    (Il2CppObject *)StringLiteral_22169/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    437,
    (Il2CppObject *)StringLiteral_25015/*"userClassBoardSquare"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    438,
    (Il2CppObject *)StringLiteral_22461/*"mstSvtCardAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    439,
    (Il2CppObject *)StringLiteral_22362/*"mstMapLayer"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    440,
    (Il2CppObject *)StringLiteral_22444/*"mstSpotLayer"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    441,
    (Il2CppObject *)StringLiteral_22357/*"mstMapGimmickLayer"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    442,
    (Il2CppObject *)StringLiteral_22231/*"mstEventDataLostBattle"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    443,
    (Il2CppObject *)StringLiteral_22232/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    444,
    (Il2CppObject *)StringLiteral_25033/*"userEventDataLost"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    445,
    (Il2CppObject *)StringLiteral_22389/*"mstQuestHint"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    446,
    (Il2CppObject *)StringLiteral_22315/*"mstFuncTypeDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    447,
    (Il2CppObject *)StringLiteral_22161/*"mstBuffConvert"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    448,
    (Il2CppObject *)StringLiteral_22437/*"mstSkillGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    449,
    (Il2CppObject *)StringLiteral_22438/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    450,
    (Il2CppObject *)StringLiteral_22439/*"mstSkillIndividuality"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    451,
    (Il2CppObject *)StringLiteral_22417/*"mstRestrictionBase"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    452,
    (Il2CppObject *)StringLiteral_22419/*"mstRestrictionSlot"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    453,
    (Il2CppObject *)StringLiteral_22420/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    454,
    (Il2CppObject *)StringLiteral_22418/*"mstRestrictionMessage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    455,
    (Il2CppObject *)StringLiteral_22421/*"mstRestrictionWhole"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    456,
    (Il2CppObject *)StringLiteral_22313/*"mstFuncDisp"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    457,
    (Il2CppObject *)StringLiteral_22228/*"mstEventCommandAssist"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    458,
    (Il2CppObject *)StringLiteral_22258/*"mstEventMissionGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    459,
    (Il2CppObject *)StringLiteral_22181/*"mstCombineLimitRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    460,
    (Il2CppObject *)StringLiteral_22516/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    461,
    (Il2CppObject *)StringLiteral_22343/*"mstHeelPortrait"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    462,
    (Il2CppObject *)StringLiteral_25065/*"userHeelPortrait"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    463,
    (Il2CppObject *)StringLiteral_22765/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    464,
    (Il2CppObject *)StringLiteral_22324/*"mstGachaExtraGift"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    465,
    (Il2CppObject *)StringLiteral_22259/*"mstEventMural"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    466,
    (Il2CppObject *)StringLiteral_25205/*"viewWaveEnemy"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    467,
    (Il2CppObject *)StringLiteral_22152/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    468,
    (Il2CppObject *)StringLiteral_22148/*"mstBlankEarthGimmick"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    469,
    (Il2CppObject *)StringLiteral_22507/*"mstTerminalOverwrite"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    470,
    (Il2CppObject *)StringLiteral_19654/*"exchangeSvt"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    471,
    (Il2CppObject *)StringLiteral_22534/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    472,
    (Il2CppObject *)StringLiteral_22536/*"mstWarBoardEvent"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    473,
    (Il2CppObject *)StringLiteral_22537/*"mstWarBoardEventScript"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    474,
    (Il2CppObject *)StringLiteral_22554/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    475,
    (Il2CppObject *)StringLiteral_22552/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    476,
    (Il2CppObject *)StringLiteral_22532/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    477,
    (Il2CppObject *)StringLiteral_22548/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    478,
    (Il2CppObject *)StringLiteral_22538/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    479,
    (Il2CppObject *)StringLiteral_22490/*"mstSvtProfilePush"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    480,
    (Il2CppObject *)StringLiteral_22359/*"mstMapGimmickPath"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    481,
    (Il2CppObject *)StringLiteral_22360/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    482,
    (Il2CppObject *)StringLiteral_22485/*"mstSvtOverwrite"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    483,
    (Il2CppObject *)StringLiteral_22347/*"mstIndividualityPolicy"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    484,
    (Il2CppObject *)StringLiteral_22346/*"mstIndividualityPersonality"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    485,
    (Il2CppObject *)StringLiteral_22132/*"mstAttri"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    486,
    (Il2CppObject *)StringLiteral_22504/*"mstSvtVoicePattern"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    487,
    (Il2CppObject *)StringLiteral_25064/*"userGameCommon"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    488,
    (Il2CppObject *)StringLiteral_22488/*"mstSvtPhoto"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    489,
    (Il2CppObject *)StringLiteral_22367/*"mstMasterPhoto"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    490,
    (Il2CppObject *)StringLiteral_22379/*"mstPhotoFrame"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    491,
    (Il2CppObject *)StringLiteral_22565/*"mstWarMessage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    492,
    (Il2CppObject *)StringLiteral_22383/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    493,
    (Il2CppObject *)StringLiteral_22306/*"mstExcludeMotionCond"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    494,
    (Il2CppObject *)StringLiteral_25068/*"userInterruptionQuest"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    495,
    (Il2CppObject *)StringLiteral_22498/*"mstSvtTransform"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    496,
    (Il2CppObject *)StringLiteral_22363/*"mstMapUpdateSchedule"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    497,
    (Il2CppObject *)StringLiteral_22396/*"mstQuestPhasePresent"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    498,
    (Il2CppObject *)StringLiteral_25011/*"userAccountLinkage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    499,
    (Il2CppObject *)StringLiteral_22371/*"mstMissionNaviTransition"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    500,
    (Il2CppObject *)StringLiteral_22297/*"mstEventTradeGoods"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    501,
    (Il2CppObject *)StringLiteral_22298/*"mstEventTradePickup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    502,
    (Il2CppObject *)StringLiteral_22299/*"mstEventTradeStore"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    503,
    (Il2CppObject *)StringLiteral_25051/*"userEventTrade"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    504,
    (Il2CppObject *)StringLiteral_22370/*"mstMissionNaviQuest"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    505,
    (Il2CppObject *)StringLiteral_23115/*"paymentHistory"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    506,
    (Il2CppObject *)StringLiteral_25052/*"userExternalPaymentStone"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    507,
    (Il2CppObject *)StringLiteral_22395/*"mstQuestPhaseIndividuality"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    508,
    (Il2CppObject *)StringLiteral_25202/*"viewGachaFeaturedSvt"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    514,
    (Il2CppObject *)StringLiteral_22204/*"mstEffectMovie"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    509,
    (Il2CppObject *)StringLiteral_22328/*"mstGachaPickupCollateral"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    510,
    (Il2CppObject *)StringLiteral_22329/*"mstGachaPickupCollateralGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    511,
    (Il2CppObject *)StringLiteral_22143/*"mstBattlePoint"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    512,
    (Il2CppObject *)StringLiteral_22144/*"mstBattlePointPhase"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    513,
    (Il2CppObject *)StringLiteral_22459/*"mstSvtBattlePoint"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    515,
    (Il2CppObject *)StringLiteral_22378/*"mstPaymentLimit"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    516,
    (Il2CppObject *)StringLiteral_25072/*"userPaymentLimit"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    517,
    (Il2CppObject *)StringLiteral_22422/*"mstRoadmap"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    518,
    (Il2CppObject *)StringLiteral_25082/*"userRecommendSupport"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    520,
    (Il2CppObject *)StringLiteral_22413/*"mstRecommendAdviceMessage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    519,
    (Il2CppObject *)StringLiteral_22414/*"mstRecommendSupportQuest"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    521,
    (Il2CppObject *)StringLiteral_25081/*"userRecommendFollower"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    522,
    (Il2CppObject *)StringLiteral_22349/*"mstItemDropEfficiency"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    523,
    (Il2CppObject *)StringLiteral_22149/*"mstBlankEarthGimmickAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    524,
    (Il2CppObject *)StringLiteral_22567/*"mstWarRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    525,
    (Il2CppObject *)StringLiteral_22424/*"mstSelectBonusBase"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    526,
    (Il2CppObject *)StringLiteral_22423/*"mstSelectBonus"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    527,
    (Il2CppObject *)StringLiteral_22374/*"mstMyroomSvtSpecialImage"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    528,
    (Il2CppObject *)StringLiteral_22432/*"mstShopReset"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    529,
    (Il2CppObject *)StringLiteral_22762/*"npcSvtDisplayTypeDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    530,
    (Il2CppObject *)StringLiteral_22310/*"mstFriendshipSvt"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    531,
    (Il2CppObject *)StringLiteral_19655/*"exchangeSvtCoinGivenNum"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    532,
    (Il2CppObject *)StringLiteral_22165/*"mstChaldeaGatePickup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    533,
    (Il2CppObject *)StringLiteral_22564/*"mstWarGroupIgnore"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    534,
    (Il2CppObject *)StringLiteral_22345/*"mstImagePartsGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    535,
    (Il2CppObject *)StringLiteral_25067/*"userImagePartsGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    536,
    (Il2CppObject *)StringLiteral_22369/*"mstMissionItemDisplay"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    537,
    (Il2CppObject *)StringLiteral_22411/*"mstQuestUseItemGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    538,
    (Il2CppObject *)StringLiteral_22412/*"mstQuestUseItemPickup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    539,
    (Il2CppObject *)StringLiteral_25038/*"userEventItemLinkSvt"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    540,
    (Il2CppObject *)StringLiteral_22390/*"mstQuestHintOverwrite"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    541,
    (Il2CppObject *)StringLiteral_23437/*"reachedWaveInfo"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    542,
    (Il2CppObject *)StringLiteral_22334/*"mstGallery"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    543,
    (Il2CppObject *)StringLiteral_22336/*"mstGalleryResource"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    544,
    (Il2CppObject *)StringLiteral_22496/*"mstSvtSkillAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    545,
    (Il2CppObject *)StringLiteral_22335/*"mstGalleryFolderRelease"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    546,
    (Il2CppObject *)StringLiteral_25097/*"userSvtFirstGetTime"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    547,
    (Il2CppObject *)StringLiteral_22387/*"mstQuestExtension"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    548,
    (Il2CppObject *)StringLiteral_25098/*"userSvtGrand"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    549,
    (Il2CppObject *)StringLiteral_22340/*"mstGrandGraph"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    550,
    (Il2CppObject *)StringLiteral_22341/*"mstGrandGraphDetail"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    551,
    (Il2CppObject *)StringLiteral_25016/*"userClassStatistics"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    552,
    (Il2CppObject *)StringLiteral_22237/*"mstEventEquipSkillParts"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    553,
    (Il2CppObject *)StringLiteral_22364/*"mstMasterIndividualitySelect"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    554,
    (Il2CppObject *)StringLiteral_22373/*"mstMyroomAddBgDiff"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    555,
    (Il2CppObject *)StringLiteral_22145/*"mstBattleScript"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    556,
    (Il2CppObject *)StringLiteral_22202/*"mstDropAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    557,
    (Il2CppObject *)StringLiteral_25012/*"userBgImagePartsGroup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    558,
    (Il2CppObject *)StringLiteral_22428/*"mstShopAdd"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  DataNameKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_DataNameKind_Kind__string__o *)v1;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)DataNameKind_TypeInfo->static_fields, (int32_t)v1, v4, v5, v6, v7, v8, v9);
}


void DataNameKind___ctor(DataNameKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *DataNameKind__GetName(int32_t kind, const MethodInfo *method)
{
  DataNameKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4E7656B & 1) == 0 )
  {
    sub_1D0F0B4(&DataNameKind_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_4E7656B = 1;
  }
  v3 = DataNameKind_TypeInfo;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
    v3 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1D0F30C(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_35C8700 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}