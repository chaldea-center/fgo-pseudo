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

  if ( (byte_4CED55B & 1) == 0 )
  {
    sub_1C7BAE8(&DataNameKind_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_1C7BAE8(&StringLiteral_22069/*"mstEventTradeGoods"*/);
    sub_1C7BAE8(&StringLiteral_24798/*"userGameCommon"*/);
    sub_1C7BAE8(&StringLiteral_22029/*"mstEventMissionConditionDetail"*/);
    sub_1C7BAE8(&StringLiteral_22282/*"mstTreasureBoxGift"*/);
    sub_1C7BAE8(&StringLiteral_21961/*"mstCommandCodeComment"*/);
    sub_1C7BAE8(&StringLiteral_22025/*"mstEventMissionAction"*/);
    sub_1C7BAE8(&StringLiteral_24764/*"userEventAlloutBattle"*/);
    sub_1C7BAE8(&StringLiteral_23189/*"reachedWaveInfo"*/);
    sub_1C7BAE8(&StringLiteral_21990/*"mstEventBonusFilterGroupInfo"*/);
    sub_1C7BAE8(&StringLiteral_24815/*"userRecommendFollower"*/);
    sub_1C7BAE8(&StringLiteral_22173/*"mstQuestReleaseOverwrite"*/);
    sub_1C7BAE8(&StringLiteral_22133/*"mstMapGimmickRelease"*/);
    sub_1C7BAE8(&StringLiteral_22096/*"mstGachaExtraGift"*/);
    sub_1C7BAE8(&StringLiteral_22534/*"npcSvtFollowerIndividuality"*/);
    sub_1C7BAE8(&StringLiteral_21992/*"mstEventBossStatusUi"*/);
    sub_1C7BAE8(&StringLiteral_24824/*"userSvtAppendPassiveSkillLv"*/);
    sub_1C7BAE8(&StringLiteral_21945/*"mstClassRelation"*/);
    sub_1C7BAE8(&StringLiteral_21899/*"mstAiAct"*/);
    sub_1C7BAE8(&StringLiteral_22227/*"mstSvtAnimationOverwrite"*/);
    sub_1C7BAE8(&StringLiteral_22175/*"mstQuestRestriction"*/);
    sub_1C7BAE8(&StringLiteral_21972/*"mstCv"*/);
    sub_1C7BAE8(&StringLiteral_24769/*"userEventDigging"*/);
    sub_1C7BAE8(&StringLiteral_24244/*"tblUserGame"*/);
    sub_1C7BAE8(&StringLiteral_22003/*"mstEventDataLostBattle"*/);
    sub_1C7BAE8(&StringLiteral_21993/*"mstEventBuddyPoint"*/);
    sub_1C7BAE8(&StringLiteral_21919/*"mstBgmRelease"*/);
    sub_1C7BAE8(&StringLiteral_22254/*"mstSvtMaterialTd"*/);
    sub_1C7BAE8(&StringLiteral_21966/*"mstCommonRelease"*/);
    sub_1C7BAE8(&StringLiteral_22081/*"mstFriendship"*/);
    sub_1C7BAE8(&StringLiteral_24749/*"userClassBoardSquare"*/);
    sub_1C7BAE8(&StringLiteral_21970/*"mstConstantLong"*/);
    sub_1C7BAE8(&StringLiteral_21944/*"mstClassBoardSquare"*/);
    sub_1C7BAE8(&StringLiteral_24828/*"userSvtCommandCode"*/);
    sub_1C7BAE8(&StringLiteral_22156/*"mstQuestBehavior"*/);
    sub_1C7BAE8(&StringLiteral_22121/*"mstItemDropEfficiency"*/);
    sub_1C7BAE8(&StringLiteral_22253/*"mstSvtMaterialFolder"*/);
    sub_1C7BAE8(&StringLiteral_22329/*"mstWarBoardStagePieceDetail"*/);
    sub_1C7BAE8(&StringLiteral_22070/*"mstEventTradePickup"*/);
    sub_1C7BAE8(&StringLiteral_21991/*"mstEventBonusFilterGroupMember"*/);
    sub_1C7BAE8(&StringLiteral_22161/*"mstQuestHint"*/);
    sub_1C7BAE8(&StringLiteral_21964/*"mstCommandSpell"*/);
    sub_1C7BAE8(&StringLiteral_21897/*"mstAdCheckPoint"*/);
    sub_1C7BAE8(&StringLiteral_22152/*"mstPrivilege"*/);
    sub_1C7BAE8(&StringLiteral_22162/*"mstQuestHintOverwrite"*/);
    sub_1C7BAE8(&StringLiteral_21926/*"mstBoardMessageRelease"*/);
    sub_1C7BAE8(&StringLiteral_22102/*"mstGachaRelease"*/);
    sub_1C7BAE8(&StringLiteral_24760/*"userDeleteReservation"*/);
    sub_1C7BAE8(&StringLiteral_22281/*"mstTreasureBox"*/);
    sub_1C7BAE8(&StringLiteral_24801/*"userImagePartsGroup"*/);
    sub_1C7BAE8(&StringLiteral_21981/*"mstEquipExp"*/);
    sub_1C7BAE8(&StringLiteral_21988/*"mstEventBoardGameTokenReward"*/);
    sub_1C7BAE8(&StringLiteral_22234/*"mstSvtCoin"*/);
    sub_1C7BAE8(&StringLiteral_22265/*"mstSvtScriptMultiple"*/);
    sub_1C7BAE8(&StringLiteral_22140/*"mstMaterialFolder"*/);
    sub_1C7BAE8(&StringLiteral_21999/*"mstEventCombineCostume"*/);
    sub_1C7BAE8(&StringLiteral_22158/*"mstQuestDateRange"*/);
    sub_1C7BAE8(&StringLiteral_22325/*"mstWarBoardStageBoss"*/);
    sub_1C7BAE8(&StringLiteral_21933/*"mstBuffConvert"*/);
    sub_1C7BAE8(&StringLiteral_22184/*"mstQuestUseItemPickup"*/);
    sub_1C7BAE8(&StringLiteral_21906/*"mstAuraEffect"*/);
    sub_1C7BAE8(&StringLiteral_22047/*"mstEventRaceResult"*/);
    sub_1C7BAE8(&StringLiteral_22197/*"mstSetItem"*/);
    sub_1C7BAE8(&StringLiteral_22531/*"npcSvtDisplayTypeDetail"*/);
    sub_1C7BAE8(&StringLiteral_22219/*"mstStaffPhotoCostume"*/);
    sub_1C7BAE8(&StringLiteral_22107/*"mstGalleryFolderRelease"*/);
    sub_1C7BAE8(&StringLiteral_22187/*"mstRecover"*/);
    sub_1C7BAE8(&StringLiteral_22062/*"mstEventStatusQuest"*/);
    sub_1C7BAE8(&StringLiteral_24766/*"userEventCooltimeReward"*/);
    sub_1C7BAE8(&StringLiteral_22150/*"mstPaymentLimit"*/);
    sub_1C7BAE8(&StringLiteral_22303/*"mstWarBoardActionTrendGroup"*/);
    sub_1C7BAE8(&StringLiteral_24814/*"userQuestRoute"*/);
    sub_1C7BAE8(&StringLiteral_22211/*"mstSkillLv"*/);
    sub_1C7BAE8(&StringLiteral_22246/*"mstSvtGroup"*/);
    sub_1C7BAE8(&StringLiteral_22290/*"mstVoiceClosedMessage"*/);
    sub_1C7BAE8(&StringLiteral_22012/*"mstEventExpeditionPiece"*/);
    sub_1C7BAE8(&StringLiteral_22155/*"mstQuestAutoOrganizationAdjust"*/);
    sub_1C7BAE8(&StringLiteral_22255/*"mstSvtMultiPortrait"*/);
    sub_1C7BAE8(&StringLiteral_22015/*"mstEventFilter"*/);
    sub_1C7BAE8(&StringLiteral_22142/*"mstMissionNaviQuest"*/);
    sub_1C7BAE8(&StringLiteral_24816/*"userRecommendSupport"*/);
    sub_1C7BAE8(&StringLiteral_24803/*"userItem"*/);
    sub_1C7BAE8(&StringLiteral_22011/*"mstEventExpedition"*/);
    sub_1C7BAE8(&StringLiteral_22046/*"mstEventRace"*/);
    sub_1C7BAE8(&StringLiteral_22176/*"mstQuestRestrictionInfo"*/);
    sub_1C7BAE8(&StringLiteral_22174/*"mstQuestReset"*/);
    sub_1C7BAE8(&StringLiteral_24770/*"userEventExpedition"*/);
    sub_1C7BAE8(&StringLiteral_22018/*"mstEventFortificationSvt"*/);
    sub_1C7BAE8(&StringLiteral_22330/*"mstWarBoardStageReinforcements"*/);
    sub_1C7BAE8(&StringLiteral_21939/*"mstClassBoardBase"*/);
    sub_1C7BAE8(&StringLiteral_21977/*"mstEnemyMaster"*/);
    sub_1C7BAE8(&StringLiteral_21907/*"mstAuraEffectPosOverwrite"*/);
    sub_1C7BAE8(&StringLiteral_22191/*"mstRestrictionSlot"*/);
    sub_1C7BAE8(&StringLiteral_22104/*"mstGachaSub"*/);
    sub_1C7BAE8(&StringLiteral_22066/*"mstEventSvtPointRank"*/);
    sub_1C7BAE8(&StringLiteral_22039/*"mstEventPointGroup"*/);
    sub_1C7BAE8(&StringLiteral_21985/*"mstEventAdd"*/);
    sub_1C7BAE8(&StringLiteral_21979/*"mstEquip"*/);
    sub_1C7BAE8(&StringLiteral_22051/*"mstEventRecipeGift"*/);
    sub_1C7BAE8(&StringLiteral_22277/*"mstTelop"*/);
    sub_1C7BAE8(&StringLiteral_24826/*"userSvtCollection"*/);
    sub_1C7BAE8(&StringLiteral_24776/*"userEventMissionFix"*/);
    sub_1C7BAE8(&StringLiteral_22189/*"mstRestrictionBase"*/);
    sub_1C7BAE8(&StringLiteral_22279/*"mstTips"*/);
    sub_1C7BAE8(&StringLiteral_22218/*"mstStaffPhoto"*/);
    sub_1C7BAE8(&StringLiteral_21908/*"mstBankShop"*/);
    sub_1C7BAE8(&StringLiteral_22077/*"mstEventVoicePlay"*/);
    sub_1C7BAE8(&StringLiteral_22183/*"mstQuestUseItemGroup"*/);
    sub_1C7BAE8(&StringLiteral_22017/*"mstEventFortificationDetail"*/);
    sub_1C7BAE8(&StringLiteral_24783/*"userEventSuperBoss"*/);
    sub_1C7BAE8(&StringLiteral_22016/*"mstEventFortification"*/);
    sub_1C7BAE8(&StringLiteral_22064/*"mstEventSvt"*/);
    sub_1C7BAE8(&StringLiteral_22294/*"mstVoicePlayGroup"*/);
    sub_1C7BAE8(&StringLiteral_24768/*"userEventDeck"*/);
    sub_1C7BAE8(&StringLiteral_22213/*"mstSpotAdd"*/);
    sub_1C7BAE8(&StringLiteral_21957/*"mstCombineSkill"*/);
    sub_1C7BAE8(&StringLiteral_22322/*"mstWarBoardSquare"*/);
    sub_1C7BAE8(&StringLiteral_21934/*"mstBuffTypeDetail"*/);
    sub_1C7BAE8(&StringLiteral_22300/*"mstWarBoardActionPointClass"*/);
    sub_1C7BAE8(&StringLiteral_22195/*"mstSelectBonus"*/);
    sub_1C7BAE8(&StringLiteral_22269/*"mstSvtTransform"*/);
    sub_1C7BAE8(&StringLiteral_24807/*"userPresentBox"*/);
    sub_1C7BAE8(&StringLiteral_24784/*"userEventSvtPoint"*/);
    sub_1C7BAE8(&StringLiteral_24366/*"totalEventPoint"*/);
    sub_1C7BAE8(&StringLiteral_21959/*"mstCommandCardRankParam"*/);
    sub_1C7BAE8(&StringLiteral_22305/*"mstWarBoardCommonRelease"*/);
    sub_1C7BAE8(&StringLiteral_22225/*"mstSvt"*/);
    sub_1C7BAE8(&StringLiteral_24817/*"userShop"*/);
    sub_1C7BAE8(&StringLiteral_21986/*"mstEventBoardGameCell"*/);
    sub_1C7BAE8(&StringLiteral_22045/*"mstEventQuestCooltime"*/);
    sub_1C7BAE8(&StringLiteral_22087/*"mstFuncTypeDetail"*/);
    sub_1C7BAE8(&StringLiteral_22222/*"mstStatusEffectPosOverwrite"*/);
    sub_1C7BAE8(&StringLiteral_19283/*"eventBoostItemUsed"*/);
    sub_1C7BAE8(&StringLiteral_22200/*"mstShopDetail"*/);
    sub_1C7BAE8(&StringLiteral_22119/*"mstIndividualityPolicy"*/);
    sub_1C7BAE8(&StringLiteral_22125/*"mstMapButton"*/);
    sub_1C7BAE8(&StringLiteral_22332/*"mstWarBoardTacticalTrend"*/);
    sub_1C7BAE8(&StringLiteral_22224/*"mstSubEquip"*/);
    sub_1C7BAE8(&StringLiteral_22216/*"mstSpotPath"*/);
    sub_1C7BAE8(&StringLiteral_22194/*"mstRoadmap"*/);
    sub_1C7BAE8(&StringLiteral_21954/*"mstCombineMaterial"*/);
    sub_1C7BAE8(&StringLiteral_21953/*"mstCombineLimitRelease"*/);
    sub_1C7BAE8(&StringLiteral_22286/*"mstTreasureDeviceLv"*/);
    sub_1C7BAE8(&StringLiteral_22067/*"mstEventTower"*/);
    sub_1C7BAE8(&StringLiteral_22205/*"mstSkill"*/);
    sub_1C7BAE8(&StringLiteral_24802/*"userInterruptionQuest"*/);
    sub_1C7BAE8(&StringLiteral_22257/*"mstSvtPassiveSkill"*/);
    sub_1C7BAE8(&StringLiteral_22271/*"mstSvtTreasureDeviceAdd"*/);
    sub_1C7BAE8(&StringLiteral_21923/*"mstBlankEarthSpotAdd"*/);
    sub_1C7BAE8(&StringLiteral_24811/*"userQuest"*/);
    sub_1C7BAE8(&StringLiteral_22028/*"mstEventMissionCondition"*/);
    sub_1C7BAE8(&StringLiteral_22299/*"mstWarBoardActionPoint"*/);
    sub_1C7BAE8(&StringLiteral_24786/*"userExternalPaymentStone"*/);
    sub_1C7BAE8(&StringLiteral_21947/*"mstClosedMessage"*/);
    sub_1C7BAE8(&StringLiteral_22054/*"mstEventRewardExtra"*/);
    sub_1C7BAE8(&StringLiteral_22037/*"mstEventPointActivity"*/);
    sub_1C7BAE8(&StringLiteral_22044/*"mstEventQuest"*/);
    sub_1C7BAE8(&StringLiteral_21914/*"mstBattleMessageGroup"*/);
    sub_1C7BAE8(&StringLiteral_24938/*"viewQuestInfo"*/);
    sub_1C7BAE8(&StringLiteral_22261/*"mstSvtProfilePush"*/);
    sub_1C7BAE8(&StringLiteral_22285/*"mstTreasureDeviceDetail"*/);
    sub_1C7BAE8(&StringLiteral_24747/*"userBlacklist"*/);
    sub_1C7BAE8(&StringLiteral_22010/*"mstEventEquipSkillRelease"*/);
    sub_1C7BAE8(&StringLiteral_24751/*"userCoinRoom"*/);
    sub_1C7BAE8(&StringLiteral_21971/*"mstConstantStr"*/);
    sub_1C7BAE8(&StringLiteral_22009/*"mstEventEquipSkillParts"*/);
    sub_1C7BAE8(&StringLiteral_22106/*"mstGallery"*/);
    sub_1C7BAE8(&StringLiteral_24832/*"userSvtGrand"*/);
    sub_1C7BAE8(&StringLiteral_22223/*"mstStoneShop"*/);
    sub_1C7BAE8(&StringLiteral_22135/*"mstMapUpdateSchedule"*/);
    sub_1C7BAE8(&StringLiteral_22280/*"mstTotalLogin"*/);
    sub_1C7BAE8(&StringLiteral_22148/*"mstOpeningMovie"*/);
    sub_1C7BAE8(&StringLiteral_21969/*"mstConstant"*/);
    sub_1C7BAE8(&StringLiteral_22182/*"mstQuestSpotRelease"*/);
    sub_1C7BAE8(&StringLiteral_21962/*"mstCommandCodeSkill"*/);
    sub_1C7BAE8(&StringLiteral_22153/*"mstQuest"*/);
    sub_1C7BAE8(&StringLiteral_22275/*"mstSvtVoicePattern"*/);
    sub_1C7BAE8(&StringLiteral_22073/*"mstEventTutorialCond"*/);
    sub_1C7BAE8(&StringLiteral_21921/*"mstBlankEarthGimmickAdd"*/);
    sub_1C7BAE8(&StringLiteral_22298/*"mstWarBoard"*/);
    sub_1C7BAE8(&StringLiteral_22048/*"mstEventRaid"*/);
    sub_1C7BAE8(&StringLiteral_21918/*"mstBgm"*/);
    sub_1C7BAE8(&StringLiteral_22060/*"mstEventScriptRelease"*/);
    sub_1C7BAE8(&StringLiteral_24810/*"userProfile"*/);
    sub_1C7BAE8(&StringLiteral_22027/*"mstEventMissionAdd"*/);
    sub_1C7BAE8(&StringLiteral_22295/*"mstVoiceRelease"*/);
    sub_1C7BAE8(&StringLiteral_22171/*"mstQuestRandomGroup"*/);
    sub_1C7BAE8(&StringLiteral_22143/*"mstMissionNaviTransition"*/);
    sub_1C7BAE8(&StringLiteral_22202/*"mstShopRelease"*/);
    sub_1C7BAE8(&StringLiteral_24836/*"userSvtStorage"*/);
    sub_1C7BAE8(&StringLiteral_22100/*"mstGachaPickupCollateral"*/);
    sub_1C7BAE8(&StringLiteral_22185/*"mstRecommendAdviceMessage"*/);
    sub_1C7BAE8(&StringLiteral_22186/*"mstRecommendSupportQuest"*/);
    sub_1C7BAE8(&StringLiteral_24823/*"userSvtAppendPassiveSkill"*/);
    sub_1C7BAE8(&StringLiteral_22226/*"mstSvtAdd"*/);
    sub_1C7BAE8(&StringLiteral_22112/*"mstGrandGraph"*/);
    sub_1C7BAE8(&StringLiteral_22336/*"mstWarMessage"*/);
    sub_1C7BAE8(&StringLiteral_21924/*"mstBlankEarthSpotNavimenu"*/);
    sub_1C7BAE8(&StringLiteral_21912/*"mstBattleMasterImage"*/);
    sub_1C7BAE8(&StringLiteral_22207/*"mstSkillDetail"*/);
    sub_1C7BAE8(&StringLiteral_22137/*"mstMasterMission"*/);
    sub_1C7BAE8(&StringLiteral_22258/*"mstSvtPassiveSkillRelease"*/);
    sub_1C7BAE8(&StringLiteral_22212/*"mstSpot"*/);
    sub_1C7BAE8(&StringLiteral_22024/*"mstEventMission"*/);
    sub_1C7BAE8(&StringLiteral_21956/*"mstCombineQpSvtEquip"*/);
    sub_1C7BAE8(&StringLiteral_22036/*"mstEventPoint"*/);
    sub_1C7BAE8(&StringLiteral_22058/*"mstEventRewardSet"*/);
    sub_1C7BAE8(&StringLiteral_22033/*"mstEventPanelMapDetail"*/);
    sub_1C7BAE8(&StringLiteral_22232/*"mstSvtCardAdd"*/);
    sub_1C7BAE8(&StringLiteral_22124/*"mstMap"*/);
    sub_1C7BAE8(&StringLiteral_22006/*"mstEventDigging"*/);
    sub_1C7BAE8(&StringLiteral_24792/*"userGacha"*/);
    sub_1C7BAE8(&StringLiteral_22172/*"mstQuestRelease"*/);
    sub_1C7BAE8(&StringLiteral_22005/*"mstEventDetail"*/);
    sub_1C7BAE8(&StringLiteral_22117/*"mstImagePartsGroup"*/);
    sub_1C7BAE8(&StringLiteral_22134/*"mstMapLayer"*/);
    sub_1C7BAE8(&StringLiteral_22309/*"mstWarBoardFutureActionTrend"*/);
    sub_1C7BAE8(&StringLiteral_22210/*"mstSkillIndividuality"*/);
    sub_1C7BAE8(&StringLiteral_21930/*"mstBoxGachaBaseDetail"*/);
    sub_1C7BAE8(&StringLiteral_24243/*"tblFriend"*/);
    sub_1C7BAE8(&StringLiteral_17209/*"beforeBirthDay"*/);
    sub_1C7BAE8(&StringLiteral_22022/*"mstEventItemDisplayRelease"*/);
    sub_1C7BAE8(&StringLiteral_22108/*"mstGalleryResource"*/);
    sub_1C7BAE8(&StringLiteral_17133/*"battle"*/);
    sub_1C7BAE8(&StringLiteral_22201/*"mstShopGroup"*/);
    sub_1C7BAE8(&StringLiteral_21905/*"mstAttriRelation"*/);
    sub_1C7BAE8(&StringLiteral_24752/*"userCommandCode"*/);
    sub_1C7BAE8(&StringLiteral_21997/*"mstEventCampaignRelease"*/);
    sub_1C7BAE8(&StringLiteral_22243/*"mstSvtFilter"*/);
    sub_1C7BAE8(&StringLiteral_22170/*"mstQuestRacePoint"*/);
    sub_1C7BAE8(&StringLiteral_22071/*"mstEventTradeStore"*/);
    sub_1C7BAE8(&StringLiteral_22708/*"otherUserGame"*/);
    sub_1C7BAE8(&StringLiteral_21916/*"mstBattlePointPhase"*/);
    sub_1C7BAE8(&StringLiteral_22021/*"mstEventItemDisplayGroup"*/);
    sub_1C7BAE8(&StringLiteral_21936/*"mstCard"*/);
    sub_1C7BAE8(&StringLiteral_21920/*"mstBlankEarthGimmick"*/);
    sub_1C7BAE8(&StringLiteral_21913/*"mstBattleMessage"*/);
    sub_1C7BAE8(&StringLiteral_22192/*"mstRestrictionSlotDetail"*/);
    sub_1C7BAE8(&StringLiteral_21909/*"mstBanner"*/);
    sub_1C7BAE8(&StringLiteral_21978/*"mstEnemyMasterBattle"*/);
    sub_1C7BAE8(&StringLiteral_22020/*"mstEventItemDisplay"*/);
    sub_1C7BAE8(&StringLiteral_21935/*"mstCampaignInfo"*/);
    sub_1C7BAE8(&StringLiteral_22270/*"mstSvtTreasureDevice"*/);
    sub_1C7BAE8(&StringLiteral_22268/*"mstSvtSkillRelease"*/);
    sub_1C7BAE8(&StringLiteral_22151/*"mstPhotoFrame"*/);
    sub_1C7BAE8(&StringLiteral_21968/*"mstCompleteMission"*/);
    sub_1C7BAE8(&StringLiteral_21951/*"mstCombineLimit"*/);
    sub_1C7BAE8(&StringLiteral_22113/*"mstGrandGraphDetail"*/);
    sub_1C7BAE8(&StringLiteral_21928/*"mstBoxGacha"*/);
    sub_1C7BAE8(&StringLiteral_22292/*"mstVoiceMaterialCond"*/);
    sub_1C7BAE8(&StringLiteral_22089/*"mstGachaAdjustAdd"*/);
    sub_1C7BAE8(&StringLiteral_22103/*"mstGachaStoryAdjust"*/);
    sub_1C7BAE8(&StringLiteral_22288/*"mstUserExp"*/);
    sub_1C7BAE8(&StringLiteral_22078/*"mstExcludeMotionCond"*/);
    sub_1C7BAE8(&StringLiteral_22311/*"mstWarBoardItem"*/);
    sub_1C7BAE8(&StringLiteral_21980/*"mstEquipAdd"*/);
    sub_1C7BAE8(&StringLiteral_21973/*"mstDialogMessage"*/);
    sub_1C7BAE8(&StringLiteral_22533/*"npcSvtFollower"*/);
    sub_1C7BAE8(&StringLiteral_21911/*"mstBattleBg"*/);
    sub_1C7BAE8(&StringLiteral_21940/*"mstClassBoardClass"*/);
    sub_1C7BAE8(&StringLiteral_24777/*"userEventPoint"*/);
    sub_1C7BAE8(&StringLiteral_22233/*"mstSvtChange"*/);
    sub_1C7BAE8(&StringLiteral_22310/*"mstWarBoardIndividualityClass"*/);
    sub_1C7BAE8(&StringLiteral_22091/*"mstGachaBaseCollateral"*/);
    sub_1C7BAE8(&StringLiteral_22168/*"mstQuestPhasePresent"*/);
    sub_1C7BAE8(&StringLiteral_22203/*"mstShopReset"*/);
    sub_1C7BAE8(&StringLiteral_22031/*"mstEventMural"*/);
    sub_1C7BAE8(&StringLiteral_22099/*"mstGachaPickup"*/);
    sub_1C7BAE8(&StringLiteral_22122/*"mstItemSelect"*/);
    sub_1C7BAE8(&StringLiteral_22247/*"mstSvtIndividuality"*/);
    sub_1C7BAE8(&StringLiteral_24763/*"userEvent"*/);
    sub_1C7BAE8(&StringLiteral_22333/*"mstWarBoardTreasure"*/);
    sub_1C7BAE8(&StringLiteral_22252/*"mstSvtLvDetail"*/);
    sub_1C7BAE8(&StringLiteral_22318/*"mstWarBoardRatingOffset"*/);
    sub_1C7BAE8(&StringLiteral_22165/*"mstQuestPhaseDetail"*/);
    sub_1C7BAE8(&StringLiteral_22199/*"mstShopAction"*/);
    sub_1C7BAE8(&StringLiteral_22144/*"mstMyroomAdd"*/);
    sub_1C7BAE8(&StringLiteral_22065/*"mstEventSvtFatigue"*/);
    sub_1C7BAE8(&StringLiteral_22013/*"mstEventFactory"*/);
    sub_1C7BAE8(&StringLiteral_24793/*"userGachaDrawHistory"*/);
    sub_1C7BAE8(&StringLiteral_24788/*"userFollower"*/);
    sub_1C7BAE8(&StringLiteral_22319/*"mstWarBoardRatingOffsetGroup"*/);
    sub_1C7BAE8(&StringLiteral_24825/*"userSvtCoin"*/);
    sub_1C7BAE8(&StringLiteral_22059/*"mstEventScript"*/);
    sub_1C7BAE8(&StringLiteral_22266/*"mstSvtSkill"*/);
    sub_1C7BAE8(&StringLiteral_22215/*"mstSpotLayer"*/);
    sub_1C7BAE8(&StringLiteral_24827/*"userSvtCommandCard"*/);
    sub_1C7BAE8(&StringLiteral_24812/*"userQuestInfo"*/);
    sub_1C7BAE8(&StringLiteral_21975/*"mstEffect"*/);
    sub_1C7BAE8(&StringLiteral_22120/*"mstItem"*/);
    sub_1C7BAE8(&StringLiteral_22196/*"mstSelectBonusBase"*/);
    sub_1C7BAE8(&StringLiteral_22040/*"mstEventPointGroupAdd"*/);
    sub_1C7BAE8(&StringLiteral_22163/*"mstQuestMessage"*/);
    sub_1C7BAE8(&StringLiteral_22528/*"npcFollowerRelease"*/);
    sub_1C7BAE8(&StringLiteral_22084/*"mstFuncCategory"*/);
    sub_1C7BAE8(&StringLiteral_22312/*"mstWarBoardMessage"*/);
    sub_1C7BAE8(&StringLiteral_24797/*"userGame"*/);
    sub_1C7BAE8(&StringLiteral_22109/*"mstGift"*/);
    sub_1C7BAE8(&StringLiteral_22320/*"mstWarBoardReinforcements"*/);
    sub_1C7BAE8(&StringLiteral_21987/*"mstEventBoardGameToken"*/);
    sub_1C7BAE8(&StringLiteral_22129/*"mstMapGimmickLayer"*/);
    sub_1C7BAE8(&StringLiteral_22236/*"mstSvtCommandCodeUnlock"*/);
    sub_1C7BAE8(&StringLiteral_21903/*"mstAssist"*/);
    sub_1C7BAE8(&StringLiteral_24939/*"viewWaveEnemy"*/);
    sub_1C7BAE8(&StringLiteral_22532/*"npcSvtEquip"*/);
    sub_1C7BAE8(&StringLiteral_22179/*"mstQuestScriptMaterialNext"*/);
    sub_1C7BAE8(&StringLiteral_22242/*"mstSvtExp"*/);
    sub_1C7BAE8(&StringLiteral_24822/*"userSvt"*/);
    sub_1C7BAE8(&StringLiteral_24935/*"viewEnemy"*/);
    sub_1C7BAE8(&StringLiteral_22075/*"mstEventUiRelease"*/);
    sub_1C7BAE8(&StringLiteral_24367/*"totalEventRace"*/);
    sub_1C7BAE8(&StringLiteral_22079/*"mstFieldMotion"*/);
    sub_1C7BAE8(&StringLiteral_22049/*"mstEventRandomMission"*/);
    sub_1C7BAE8(&StringLiteral_22056/*"mstEventRewardScene"*/);
    sub_1C7BAE8(&StringLiteral_22082/*"mstFriendshipSvt"*/);
    sub_1C7BAE8(&StringLiteral_22118/*"mstIndividualityPersonality"*/);
    sub_1C7BAE8(&StringLiteral_21950/*"mstCombineCostume"*/);
    sub_1C7BAE8(&StringLiteral_21949/*"mstCombineAppendPassiveSkill"*/);
    sub_1C7BAE8(&StringLiteral_22008/*"mstEventDiggingReward"*/);
    sub_1C7BAE8(&StringLiteral_22301/*"mstWarBoardActionTrend"*/);
    sub_1C7BAE8(&StringLiteral_21917/*"mstBattleScript"*/);
    sub_1C7BAE8(&StringLiteral_22090/*"mstGachaAppend"*/);
    sub_1C7BAE8(&StringLiteral_22323/*"mstWarBoardSquareIndexGroup"*/);
    sub_1C7BAE8(&StringLiteral_22083/*"mstFunc"*/);
    sub_1C7BAE8(&StringLiteral_22001/*"mstEventConquestReward"*/);
    sub_1C7BAE8(&StringLiteral_22306/*"mstWarBoardEffect"*/);
    sub_1C7BAE8(&StringLiteral_22337/*"mstWarQuestSelection"*/);
    sub_1C7BAE8(&StringLiteral_24757/*"userDeck"*/);
    sub_1C7BAE8(&StringLiteral_22138/*"mstMasterMissionDisplayInfo"*/);
    sub_1C7BAE8(&StringLiteral_22334/*"mstWarGroup"*/);
    sub_1C7BAE8(&StringLiteral_22198/*"mstShop"*/);
    sub_1C7BAE8(&StringLiteral_22315/*"mstWarBoardPartySkill"*/);
    sub_1C7BAE8(&StringLiteral_24772/*"userEventItemLinkSvt"*/);
    sub_1C7BAE8(&StringLiteral_22038/*"mstEventPointBuff"*/);
    sub_1C7BAE8(&StringLiteral_22159/*"mstQuestExtension"*/);
    sub_1C7BAE8(&StringLiteral_24821/*"userSupportDeck"*/);
    sub_1C7BAE8(&StringLiteral_22217/*"mstSpotRoad"*/);
    sub_1C7BAE8(&StringLiteral_22276/*"mstSvtVoiceRelation"*/);
    sub_1C7BAE8(&StringLiteral_21952/*"mstCombineLimitGift"*/);
    sub_1C7BAE8(&StringLiteral_22002/*"mstEventCooltimeReward"*/);
    sub_1C7BAE8(&StringLiteral_21994/*"mstEventBulletinBoard"*/);
    sub_1C7BAE8(&StringLiteral_22053/*"mstEventRewardBg"*/);
    sub_1C7BAE8(&StringLiteral_21931/*"mstBoxGachaTalk"*/);
    sub_1C7BAE8(&StringLiteral_24806/*"userPaymentLimit"*/);
    sub_1C7BAE8(&StringLiteral_22085/*"mstFuncDisp"*/);
    sub_1C7BAE8(&StringLiteral_22263/*"mstSvtScript"*/);
    sub_1C7BAE8(&StringLiteral_22126/*"mstMapCond"*/);
    sub_1C7BAE8(&StringLiteral_22145/*"mstMyroomAddBgDiff"*/);
    sub_1C7BAE8(&StringLiteral_24771/*"userEventFortification"*/);
    sub_1C7BAE8(&StringLiteral_22314/*"mstWarBoardOnboardSkill"*/);
    sub_1C7BAE8(&StringLiteral_22097/*"mstGachaGroup"*/);
    sub_1C7BAE8(&StringLiteral_24937/*"viewQuestEnemyInfo"*/);
    sub_1C7BAE8(&StringLiteral_24745/*"userAccountLinkage"*/);
    sub_1C7BAE8(&StringLiteral_22237/*"mstSvtComment"*/);
    sub_1C7BAE8(&StringLiteral_22284/*"mstTreasureDevice"*/);
    sub_1C7BAE8(&StringLiteral_24936/*"viewGachaFeaturedSvt"*/);
    sub_1C7BAE8(&StringLiteral_24805/*"userNpcSvtRecord"*/);
    sub_1C7BAE8(&StringLiteral_21915/*"mstBattlePoint"*/);
    sub_1C7BAE8(&StringLiteral_22030/*"mstEventMissionGroup"*/);
    sub_1C7BAE8(&StringLiteral_24813/*"userQuestRecord"*/);
    sub_1C7BAE8(&StringLiteral_22190/*"mstRestrictionMessage"*/);
    sub_1C7BAE8(&StringLiteral_22111/*"mstGiftDetail"*/);
    sub_1C7BAE8(&StringLiteral_22105/*"mstGachaTicket"*/);
    sub_1C7BAE8(&StringLiteral_22259/*"mstSvtPhoto"*/);
    sub_1C7BAE8(&StringLiteral_22906/*"pickupUserFollower"*/);
    sub_1C7BAE8(&StringLiteral_22061/*"mstEventStatus"*/);
    sub_1C7BAE8(&StringLiteral_22238/*"mstSvtCommentAdd"*/);
    sub_1C7BAE8(&StringLiteral_22256/*"mstSvtOverwrite"*/);
    sub_1C7BAE8(&StringLiteral_22527/*"npcFollower"*/);
    sub_1C7BAE8(&StringLiteral_22000/*"mstEventCommandAssist"*/);
    sub_1C7BAE8(&StringLiteral_19296/*"eventSvtFatigue"*/);
    sub_1C7BAE8(&StringLiteral_22094/*"mstGachaBonusSelectLineup"*/);
    sub_1C7BAE8(&StringLiteral_21995/*"mstEventBulletinBoardRelease"*/);
    sub_1C7BAE8(&StringLiteral_22241/*"mstSvtExceed"*/);
    sub_1C7BAE8(&StringLiteral_22251/*"mstSvtLimitSpoilerProtection"*/);
    sub_1C7BAE8(&StringLiteral_22274/*"mstSvtVoice"*/);
    sub_1C7BAE8(&StringLiteral_22193/*"mstRestrictionWhole"*/);
    sub_1C7BAE8(&StringLiteral_24795/*"userGachaExtraCount"*/);
    sub_1C7BAE8(&StringLiteral_22131/*"mstMapGimmickPath"*/);
    sub_1C7BAE8(&StringLiteral_22068/*"mstEventTowerReward"*/);
    sub_1C7BAE8(&StringLiteral_21946/*"mstClassRelationOverwrite"*/);
    sub_1C7BAE8(&StringLiteral_21898/*"mstAi"*/);
    sub_1C7BAE8(&StringLiteral_24748/*"userBoxGacha"*/);
    sub_1C7BAE8(&StringLiteral_22231/*"mstSvtCard"*/);
    sub_1C7BAE8(&StringLiteral_24796/*"userGachaPickupCollateral"*/);
    sub_1C7BAE8(&StringLiteral_24794/*"userGachaDrawLog"*/);
    sub_1C7BAE8(&StringLiteral_22324/*"mstWarBoardStage"*/);
    sub_1C7BAE8(&StringLiteral_24761/*"userEquip"*/);
    sub_1C7BAE8(&StringLiteral_22055/*"mstEventRewardGuideRelease"*/);
    sub_1C7BAE8(&StringLiteral_21941/*"mstClassBoardCommandSpell"*/);
    sub_1C7BAE8(&StringLiteral_22136/*"mstMasterIndividualitySelect"*/);
    sub_1C7BAE8(&StringLiteral_22338/*"mstWarRelease"*/);
    sub_1C7BAE8(&StringLiteral_22092/*"mstGachaBehavior"*/);
    sub_1C7BAE8(&StringLiteral_22296/*"mstWar"*/);
    sub_1C7BAE8(&StringLiteral_21989/*"mstEventBonusFilter"*/);
    sub_1C7BAE8(&StringLiteral_22181/*"mstQuestScriptRelease"*/);
    sub_1C7BAE8(&StringLiteral_24773/*"userEventMap"*/);
    sub_1C7BAE8(&StringLiteral_22035/*"mstEventPanelSpot"*/);
    sub_1C7BAE8(&StringLiteral_21938/*"mstClass"*/);
    sub_1C7BAE8(&StringLiteral_24744/*"userAccessary"*/);
    sub_1C7BAE8(&StringLiteral_22249/*"mstSvtLimitAdd"*/);
    sub_1C7BAE8(&StringLiteral_22180/*"mstQuestScriptMaterialOverwrite"*/);
    sub_1C7BAE8(&StringLiteral_18220/*"combineExp"*/);
    sub_1C7BAE8(&StringLiteral_24789/*"userFormation"*/);
    sub_1C7BAE8(&StringLiteral_22313/*"mstWarBoardMessageScript"*/);
    sub_1C7BAE8(&StringLiteral_22043/*"mstEventProgressValue"*/);
    sub_1C7BAE8(&StringLiteral_24837/*"userSvtVoicePlayed"*/);
    sub_1C7BAE8(&StringLiteral_22230/*"mstSvtBattlePoint"*/);
    sub_1C7BAE8(&StringLiteral_22244/*"mstSvtFlag"*/);
    sub_1C7BAE8(&StringLiteral_21925/*"mstBoardMessage"*/);
    sub_1C7BAE8(&StringLiteral_22034/*"mstEventPanelScan"*/);
    sub_1C7BAE8(&StringLiteral_22250/*"mstSvtLimitImage"*/);
    sub_1C7BAE8(&StringLiteral_22007/*"mstEventDiggingBlock"*/);
    sub_1C7BAE8(&StringLiteral_24781/*"userEventRandomMission"*/);
    sub_1C7BAE8(&StringLiteral_21901/*"mstArea"*/);
    sub_1C7BAE8(&StringLiteral_24368/*"totalEventRaid"*/);
    sub_1C7BAE8(&StringLiteral_22509/*"notEndEventMissionFix"*/);
    sub_1C7BAE8(&StringLiteral_22204/*"mstShopScript"*/);
    sub_1C7BAE8(&StringLiteral_24774/*"userEventMission"*/);
    sub_1C7BAE8(&StringLiteral_22139/*"mstMasterPhoto"*/);
    sub_1C7BAE8(&StringLiteral_22026/*"mstEventMissionActionAdd"*/);
    sub_1C7BAE8(&StringLiteral_21958/*"mstCombineTd"*/);
    sub_1C7BAE8(&StringLiteral_24831/*"userSvtFirstGetTime"*/);
    sub_1C7BAE8(&StringLiteral_21927/*"mstBoost"*/);
    sub_1C7BAE8(&StringLiteral_22264/*"mstSvtScriptAdd"*/);
    sub_1C7BAE8(&StringLiteral_21929/*"mstBoxGachaBase"*/);
    sub_1C7BAE8(&StringLiteral_21910/*"mstBannerAdd"*/);
    sub_1C7BAE8(&StringLiteral_21896/*"mstAccessary"*/);
    sub_1C7BAE8(&StringLiteral_22287/*"mstTreasureDeviceSequenceWeight"*/);
    sub_1C7BAE8(&StringLiteral_24779/*"userEventRace"*/);
    sub_1C7BAE8(&StringLiteral_22160/*"mstQuestGroup"*/);
    sub_1C7BAE8(&StringLiteral_22042/*"mstEventPointUpperRelease"*/);
    sub_1C7BAE8(&StringLiteral_24835/*"userSvtLeader"*/);
    sub_1C7BAE8(&StringLiteral_22248/*"mstSvtLimit"*/);
    sub_1C7BAE8(&StringLiteral_24787/*"userFollow"*/);
    sub_1C7BAE8(&StringLiteral_22023/*"mstEventLocationCampaign"*/);
    sub_1C7BAE8(&StringLiteral_21955/*"mstCombineQp"*/);
    sub_1C7BAE8(&StringLiteral_21984/*"mstEvent"*/);
    sub_1C7BAE8(&StringLiteral_22245/*"mstSvtFlagRelease"*/);
    sub_1C7BAE8(&StringLiteral_24790/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_1C7BAE8(&StringLiteral_24809/*"userPrivilege"*/);
    sub_1C7BAE8(&StringLiteral_21960/*"mstCommandCode"*/);
    sub_1C7BAE8(&StringLiteral_22228/*"mstSvtAppendPassiveSkill"*/);
    sub_1C7BAE8(&StringLiteral_22019/*"mstEventGroup"*/);
    sub_1C7BAE8(&StringLiteral_22093/*"mstGachaBonusSelect"*/);
    sub_1C7BAE8(&StringLiteral_24765/*"userEventBoardGameToken"*/);
    sub_1C7BAE8(&StringLiteral_22141/*"mstMissionItemDisplay"*/);
    sub_1C7BAE8(&StringLiteral_22146/*"mstMyroomSvtSpecialImage"*/);
    sub_1C7BAE8(&StringLiteral_22321/*"mstWarBoardRoad"*/);
    sub_1C7BAE8(&StringLiteral_21932/*"mstBuff"*/);
    sub_1C7BAE8(&StringLiteral_24998/*"warBoardData"*/);
    sub_1C7BAE8(&StringLiteral_22116/*"mstIllustrator"*/);
    sub_1C7BAE8(&StringLiteral_24363/*"totalBoxGacha"*/);
    sub_1C7BAE8(&StringLiteral_22262/*"mstSvtRarity"*/);
    sub_1C7BAE8(&StringLiteral_22297/*"mstWarAdd"*/);
    sub_1C7BAE8(&StringLiteral_22132/*"mstMapGimmickPathRelease"*/);
    sub_1C7BAE8(&StringLiteral_24791/*"userFriendRequestHistory"*/);
    sub_1C7BAE8(&StringLiteral_24742/*"user"*/);
    sub_1C7BAE8(&StringLiteral_17450/*"boxGachaHistory"*/);
    sub_1C7BAE8(&StringLiteral_22086/*"mstFuncGroup"*/);
    sub_1C7BAE8(&StringLiteral_21965/*"mstCommonConsume"*/);
    sub_1C7BAE8(&StringLiteral_22308/*"mstWarBoardEventScript"*/);
    sub_1C7BAE8(&StringLiteral_22110/*"mstGiftAdd"*/);
    sub_1C7BAE8(&StringLiteral_22074/*"mstEventUi"*/);
    sub_1C7BAE8(&StringLiteral_22214/*"mstSpotImage"*/);
    sub_1C7BAE8(&StringLiteral_22240/*"mstSvtCostumeRelease"*/);
    sub_1C7BAE8(&StringLiteral_24750/*"userClassStatistics"*/);
    sub_1C7BAE8(&StringLiteral_22127/*"mstMapGimmick"*/);
    sub_1C7BAE8(&StringLiteral_22167/*"mstQuestPhaseIndividuality"*/);
    sub_1C7BAE8(&StringLiteral_22072/*"mstEventTutorial"*/);
    sub_1C7BAE8(&StringLiteral_22335/*"mstWarGroupIgnore"*/);
    sub_1C7BAE8(&StringLiteral_22331/*"mstWarBoardStageWall"*/);
    sub_1C7BAE8(&StringLiteral_24785/*"userEventTrade"*/);
    sub_1C7BAE8(&StringLiteral_21900/*"mstAiField"*/);
    sub_1C7BAE8(&StringLiteral_22080/*"mstFriendPointGachaAdjust"*/);
    sub_1C7BAE8(&StringLiteral_22273/*"mstSvtTreasureDeviceRelease"*/);
    sub_1C7BAE8(&StringLiteral_22164/*"mstQuestPhase"*/);
    sub_1C7BAE8(&StringLiteral_24767/*"userEventDataLost"*/);
    sub_1C7BAE8(&StringLiteral_22229/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_1C7BAE8(&StringLiteral_22272/*"mstSvtTreasureDeviceDamage"*/);
    sub_1C7BAE8(&StringLiteral_22220/*"mstStage"*/);
    sub_1C7BAE8(&StringLiteral_21948/*"mstCombine"*/);
    sub_1C7BAE8(&StringLiteral_21996/*"mstEventCampaign"*/);
    sub_1C7BAE8(&StringLiteral_22328/*"mstWarBoardStageNpc"*/);
    sub_1C7BAE8(&StringLiteral_22873/*"paymentHistory"*/);
    sub_1C7BAE8(&StringLiteral_19461/*"exchangeSvt"*/);
    sub_1C7BAE8(&StringLiteral_22221/*"mstStageRemap"*/);
    sub_1C7BAE8(&StringLiteral_22188/*"mstRestriction"*/);
    sub_1C7BAE8(&StringLiteral_22177/*"mstQuestScript"*/);
    sub_1C7BAE8(&StringLiteral_22057/*"mstEventRewardSceneRelease"*/);
    sub_1C7BAE8(&StringLiteral_22291/*"mstVoiceCond"*/);
    sub_1C7BAE8(&StringLiteral_24820/*"userSubEquip"*/);
    sub_1C7BAE8(&StringLiteral_22050/*"mstEventRecipe"*/);
    sub_1C7BAE8(&StringLiteral_22239/*"mstSvtCostume"*/);
    sub_1C7BAE8(&StringLiteral_22260/*"mstSvtProfile"*/);
    sub_1C7BAE8(&StringLiteral_21967/*"mstCommonRestriction"*/);
    sub_1C7BAE8(&StringLiteral_24799/*"userHeelPortrait"*/);
    sub_1C7BAE8(&StringLiteral_22209/*"mstSkillGroupOverwrite"*/);
    sub_1C7BAE8(&StringLiteral_24753/*"userCommandCodeCollection"*/);
    sub_1C7BAE8(&StringLiteral_21963/*"mstCommandCodeSkillRelease"*/);
    sub_1C7BAE8(&StringLiteral_21976/*"mstEffectMovie"*/);
    sub_1C7BAE8(&StringLiteral_22169/*"mstQuestPickup"*/);
    sub_1C7BAE8(&StringLiteral_22327/*"mstWarBoardStageLayout"*/);
    sub_1C7BAE8(&StringLiteral_22302/*"mstWarBoardActionTrendCond"*/);
    sub_1C7BAE8(&StringLiteral_21998/*"mstEventCombine"*/);
    sub_1C7BAE8(&StringLiteral_22316/*"mstWarBoardQuest"*/);
    sub_1C7BAE8(&StringLiteral_22157/*"mstQuestConsumeItem"*/);
    sub_1C7BAE8(&StringLiteral_22166/*"mstQuestPhaseDetailAdd"*/);
    sub_1C7BAE8(&StringLiteral_22115/*"mstHeelPortrait"*/);
    sub_1C7BAE8(&StringLiteral_19462/*"exchangeSvtCoinGivenNum"*/);
    sub_1C7BAE8(&StringLiteral_24808/*"userPresentHistory"*/);
    sub_1C7BAE8(&StringLiteral_24746/*"userBgImagePartsGroup"*/);
    sub_1C7BAE8(&StringLiteral_21937/*"mstChaldeaGatePickup"*/);
    sub_1C7BAE8(&StringLiteral_22317/*"mstWarBoardRatingBase"*/);
    sub_1C7BAE8(&StringLiteral_22098/*"mstGachaImage"*/);
    sub_1C7BAE8(&StringLiteral_21982/*"mstEquipImage"*/);
    sub_1C7BAE8(&StringLiteral_24780/*"userEventRaid"*/);
    sub_1C7BAE8(&StringLiteral_22235/*"mstSvtCollection"*/);
    sub_1C7BAE8(&StringLiteral_19847/*"friendshipQuestDialogInfo"*/);
    sub_1C7BAE8(&StringLiteral_22147/*"mstNews"*/);
    sub_1C7BAE8(&StringLiteral_22088/*"mstGacha"*/);
    sub_1C7BAE8(&StringLiteral_22208/*"mstSkillGroup"*/);
    sub_1C7BAE8(&StringLiteral_22114/*"mstGuide"*/);
    sub_1C7BAE8(&StringLiteral_22101/*"mstGachaPickupCollateralGroup"*/);
    sub_1C7BAE8(&StringLiteral_21943/*"mstClassBoardLock"*/);
    sub_1C7BAE8(&StringLiteral_21974/*"mstDropAdd"*/);
    sub_1C7BAE8(&StringLiteral_22041/*"mstEventPointUpper"*/);
    sub_1C7BAE8(&StringLiteral_21922/*"mstBlankEarthSpot"*/);
    sub_1C7BAE8(&StringLiteral_22278/*"mstTerminalOverwrite"*/);
    sub_1C7BAE8(&StringLiteral_21983/*"mstEquipSkill"*/);
    sub_1C7BAE8(&StringLiteral_22076/*"mstEventUiValue"*/);
    sub_1C7BAE8(&StringLiteral_24755/*"userContinue"*/);
    sub_1C7BAE8(&StringLiteral_22154/*"mstQuestAdd"*/);
    sub_1C7BAE8(&StringLiteral_21942/*"mstClassBoardLine"*/);
    sub_1C7BAE8(&StringLiteral_24684/*"updateProfileDialogInfo"*/);
    sub_1C7BAE8(&StringLiteral_22289/*"mstVoice"*/);
    sub_1C7BAE8(&StringLiteral_24775/*"userEventMissionConditionDetail"*/);
    sub_1C7BAE8(&StringLiteral_21902/*"mstAssetbundleKey"*/);
    sub_1C7BAE8(&StringLiteral_22032/*"mstEventPanelMap"*/);
    sub_1C7BAE8(&StringLiteral_24804/*"userLogin"*/);
    sub_1C7BAE8(&StringLiteral_22123/*"mstLoginQuest"*/);
    sub_1C7BAE8(&StringLiteral_22149/*"mstPartialMaintenance"*/);
    sub_1C7BAE8(&StringLiteral_24782/*"userEventSpot"*/);
    sub_1C7BAE8(&StringLiteral_22052/*"mstEventReward"*/);
    sub_1C7BAE8(&StringLiteral_22004/*"mstEventDataLostBattleReset"*/);
    sub_1C7BAE8(&StringLiteral_21904/*"mstAttri"*/);
    sub_1C7BAE8(&StringLiteral_22326/*"mstWarBoardStageDetail"*/);
    sub_1C7BAE8(&StringLiteral_22267/*"mstSvtSkillAdd"*/);
    sub_1C7BAE8(&StringLiteral_24778/*"userEventQuestCooltime"*/);
    sub_1C7BAE8(&StringLiteral_22178/*"mstQuestScriptBranchMaterial"*/);
    sub_1C7BAE8(&StringLiteral_22014/*"mstEventFatigueRecovery"*/);
    sub_1C7BAE8(&StringLiteral_22304/*"mstWarBoardAi"*/);
    sub_1C7BAE8(&StringLiteral_22283/*"mstTreasureBoxTalk"*/);
    sub_1C7BAE8(&StringLiteral_22307/*"mstWarBoardEvent"*/);
    sub_1C7BAE8(&StringLiteral_22293/*"mstVoicePlayCond"*/);
    sub_1C7BAE8(&StringLiteral_22095/*"mstGachaDetail"*/);
    sub_1C7BAE8(&StringLiteral_22063/*"mstEventSuperBoss"*/);
    sub_1C7BAE8(&StringLiteral_22206/*"mstSkillAdd"*/);
    byte_4CED55B = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_34BBB78 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1C7BD40(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_22225/*"mstSvt"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_22237/*"mstSvtComment"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_22260/*"mstSvtProfile"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_22296/*"mstWar"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_17133/*"battle"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_22284/*"mstTreasureDevice"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_22248/*"mstSvtLimit"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_22270/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_21938/*"mstClass"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_22263/*"mstSvtScript"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_22231/*"mstSvtCard"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_22266/*"mstSvtSkill"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_22257/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_24822/*"userSvt"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_24836/*"userSvtStorage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_22220/*"mstStage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_22246/*"mstSvtGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_21922/*"mstBlankEarthSpot"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_21923/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_22212/*"mstSpot"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_22214/*"mstSpotImage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_22217/*"mstSpotRoad"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_22127/*"mstMapGimmick"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_22109/*"mstGift"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_22110/*"mstGiftAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_22224/*"mstSubEquip"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_24742/*"user"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_24797/*"userGame"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_24757/*"userDeck"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_24826/*"userSvtCollection"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_22081/*"mstFriendship"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_22088/*"mstGacha"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_22098/*"mstGachaImage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_24792/*"userGacha"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_24796/*"userGachaPickupCollateral"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24803/*"userItem"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_22120/*"mstItem"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_22105/*"mstGachaTicket"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_22089/*"mstGachaAdjustAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_22099/*"mstGachaPickup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_22080/*"mstFriendPointGachaAdjust"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_22091/*"mstGachaBaseCollateral"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_21896/*"mstAccessary"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_24744/*"userAccessary"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_24820/*"userSubEquip"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_24244/*"tblUserGame"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_22198/*"mstShop"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_22223/*"mstStoneShop"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_21908/*"mstBankShop"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_22204/*"mstShopScript"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_21979/*"mstEquip"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_21981/*"mstEquipExp"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_21983/*"mstEquipSkill"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_24761/*"userEquip"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_24789/*"userFormation"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_22205/*"mstSkill"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_22211/*"mstSkillLv"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_22207/*"mstSkillDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_22083/*"mstFunc"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_21932/*"mstBuff"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_22102/*"mstGachaRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_24811/*"userQuest"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_24812/*"userQuestInfo"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_24813/*"userQuestRecord"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_22288/*"mstUserExp"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_22147/*"mstNews"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_22277/*"mstTelop"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_22708/*"otherUserGame"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_24243/*"tblFriend"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_24807/*"userPresentBox"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_21984/*"mstEvent"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_22153/*"mstQuest"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_22154/*"mstQuestAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_22172/*"mstQuestRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_22164/*"mstQuestPhase"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_22165/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_22160/*"mstQuestGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_22171/*"mstQuestRandomGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_22157/*"mstQuestConsumeItem"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_22163/*"mstQuestMessage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_24938/*"viewQuestInfo"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_24935/*"viewEnemy"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_24937/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_21901/*"mstArea"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_21918/*"mstBgm"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_22044/*"mstEventQuest"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_21996/*"mstEventCampaign"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_21955/*"mstCombineQp"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_21954/*"mstCombineMaterial"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_21998/*"mstEventCombine"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_22242/*"mstSvtExp"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_21957/*"mstCombineSkill"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_21958/*"mstCombineTd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_22116/*"mstIllustrator"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_21972/*"mstCv"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_22286/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_22285/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_24788/*"userFollower"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_22527/*"npcFollower"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_22533/*"npcSvtFollower"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_24763/*"userEvent"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_24810/*"userProfile"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_24817/*"userShop"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_24755/*"userContinue"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_21969/*"mstConstant"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_21970/*"mstConstantLong"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_21971/*"mstConstantStr"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_21964/*"mstCommandSpell"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_21898/*"mstAi"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_21899/*"mstAiAct"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_22274/*"mstSvtVoice"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_21905/*"mstAttriRelation"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_21945/*"mstClassRelation"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_21975/*"mstEffect"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_21982/*"mstEquipImage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_21951/*"mstCombineLimit"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_21936/*"mstCard"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_21956/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_22249/*"mstSvtLimitAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_22262/*"mstSvtRarity"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_22197/*"mstSetItem"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_22187/*"mstRecover"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_21909/*"mstBanner"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_22202/*"mstShopRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_22052/*"mstEventReward"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_22005/*"mstEventDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_22064/*"mstEventSvt"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_21928/*"mstBoxGacha"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_21929/*"mstBoxGachaBase"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_21931/*"mstBoxGachaTalk"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_24748/*"userBoxGacha"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17450/*"boxGachaHistory"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_21911/*"mstBattleBg"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_22279/*"mstTips"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_24804/*"userLogin"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_22289/*"mstVoice"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_22054/*"mstEventRewardExtra"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_22024/*"mstEventMission"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_22028/*"mstEventMissionCondition"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    140,
    (Il2CppObject *)StringLiteral_22029/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    141,
    (Il2CppObject *)StringLiteral_22025/*"mstEventMissionAction"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    142,
    (Il2CppObject *)StringLiteral_22026/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    145,
    (Il2CppObject *)StringLiteral_21968/*"mstCompleteMission"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    143,
    (Il2CppObject *)StringLiteral_22027/*"mstEventMissionAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    144,
    (Il2CppObject *)StringLiteral_22058/*"mstEventRewardSet"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    146,
    (Il2CppObject *)StringLiteral_24774/*"userEventMission"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    147,
    (Il2CppObject *)StringLiteral_24775/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    148,
    (Il2CppObject *)StringLiteral_21930/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    149,
    (Il2CppObject *)StringLiteral_21947/*"mstClosedMessage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    150,
    (Il2CppObject *)StringLiteral_24835/*"userSvtLeader"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    151,
    (Il2CppObject *)StringLiteral_22086/*"mstFuncGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    152,
    (Il2CppObject *)StringLiteral_22048/*"mstEventRaid"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    153,
    (Il2CppObject *)StringLiteral_24368/*"totalEventRaid"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    154,
    (Il2CppObject *)StringLiteral_24780/*"userEventRaid"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    155,
    (Il2CppObject *)StringLiteral_22036/*"mstEventPoint"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    156,
    (Il2CppObject *)StringLiteral_22039/*"mstEventPointGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    157,
    (Il2CppObject *)StringLiteral_24366/*"totalEventPoint"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    158,
    (Il2CppObject *)StringLiteral_24777/*"userEventPoint"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    159,
    (Il2CppObject *)StringLiteral_24808/*"userPresentHistory"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    160,
    (Il2CppObject *)StringLiteral_22137/*"mstMasterMission"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    161,
    (Il2CppObject *)StringLiteral_22241/*"mstSvtExceed"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    162,
    (Il2CppObject *)StringLiteral_22149/*"mstPartialMaintenance"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    163,
    (Il2CppObject *)StringLiteral_22114/*"mstGuide"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    164,
    (Il2CppObject *)StringLiteral_22138/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    165,
    (Il2CppObject *)StringLiteral_22097/*"mstGachaGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    166,
    (Il2CppObject *)StringLiteral_22174/*"mstQuestReset"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    167,
    (Il2CppObject *)StringLiteral_22297/*"mstWarAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    168,
    (Il2CppObject *)StringLiteral_22020/*"mstEventItemDisplay"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    169,
    (Il2CppObject *)StringLiteral_22021/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    170,
    (Il2CppObject *)StringLiteral_22022/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    171,
    (Il2CppObject *)StringLiteral_22072/*"mstEventTutorial"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    172,
    (Il2CppObject *)StringLiteral_22073/*"mstEventTutorialCond"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    173,
    (Il2CppObject *)StringLiteral_22295/*"mstVoiceRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    174,
    (Il2CppObject *)StringLiteral_22063/*"mstEventSuperBoss"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    175,
    (Il2CppObject *)StringLiteral_24783/*"userEventSuperBoss"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    176,
    (Il2CppObject *)StringLiteral_22177/*"mstQuestScript"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    177,
    (Il2CppObject *)StringLiteral_22181/*"mstQuestScriptRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    178,
    (Il2CppObject *)StringLiteral_22140/*"mstMaterialFolder"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    179,
    (Il2CppObject *)StringLiteral_22188/*"mstRestriction"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    180,
    (Il2CppObject *)StringLiteral_22175/*"mstQuestRestriction"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    181,
    (Il2CppObject *)StringLiteral_22276/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    182,
    (Il2CppObject *)StringLiteral_22200/*"mstShopDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    183,
    (Il2CppObject *)StringLiteral_22264/*"mstSvtScriptAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    184,
    (Il2CppObject *)StringLiteral_21948/*"mstCombine"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    185,
    (Il2CppObject *)StringLiteral_21900/*"mstAiField"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    186,
    (Il2CppObject *)StringLiteral_22238/*"mstSvtCommentAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    187,
    (Il2CppObject *)StringLiteral_22015/*"mstEventFilter"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    188,
    (Il2CppObject *)StringLiteral_24821/*"userSupportDeck"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    189,
    (Il2CppObject *)StringLiteral_22056/*"mstEventRewardScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    190,
    (Il2CppObject *)StringLiteral_22077/*"mstEventVoicePlay"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    191,
    (Il2CppObject *)StringLiteral_22104/*"mstGachaSub"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    192,
    (Il2CppObject *)StringLiteral_22095/*"mstGachaDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    193,
    (Il2CppObject *)StringLiteral_22093/*"mstGachaBonusSelect"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    194,
    (Il2CppObject *)StringLiteral_22094/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    195,
    (Il2CppObject *)StringLiteral_22233/*"mstSvtChange"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    196,
    (Il2CppObject *)StringLiteral_22291/*"mstVoiceCond"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    197,
    (Il2CppObject *)StringLiteral_21919/*"mstBgmRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    198,
    (Il2CppObject *)StringLiteral_22144/*"mstMyroomAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    199,
    (Il2CppObject *)StringLiteral_22199/*"mstShopAction"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    200,
    (Il2CppObject *)StringLiteral_22057/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    201,
    (Il2CppObject *)StringLiteral_22124/*"mstMap"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    202,
    (Il2CppObject *)StringLiteral_22126/*"mstMapCond"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    203,
    (Il2CppObject *)StringLiteral_22125/*"mstMapButton"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    204,
    (Il2CppObject *)StringLiteral_21910/*"mstBannerAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    205,
    (Il2CppObject *)StringLiteral_22156/*"mstQuestBehavior"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    206,
    (Il2CppObject *)StringLiteral_21985/*"mstEventAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    207,
    (Il2CppObject *)StringLiteral_22280/*"mstTotalLogin"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    208,
    (Il2CppObject *)StringLiteral_22243/*"mstSvtFilter"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    209,
    (Il2CppObject *)StringLiteral_21950/*"mstCombineCostume"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    210,
    (Il2CppObject *)StringLiteral_22239/*"mstSvtCostume"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    211,
    (Il2CppObject *)StringLiteral_22240/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    212,
    (Il2CppObject *)StringLiteral_22218/*"mstStaffPhoto"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    213,
    (Il2CppObject *)StringLiteral_22219/*"mstStaffPhotoCostume"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    214,
    (Il2CppObject *)StringLiteral_24791/*"userFriendRequestHistory"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    215,
    (Il2CppObject *)StringLiteral_24747/*"userBlacklist"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    216,
    (Il2CppObject *)StringLiteral_22122/*"mstItemSelect"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    217,
    (Il2CppObject *)StringLiteral_22046/*"mstEventRace"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    218,
    (Il2CppObject *)StringLiteral_22047/*"mstEventRaceResult"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    219,
    (Il2CppObject *)StringLiteral_22170/*"mstQuestRacePoint"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    220,
    (Il2CppObject *)StringLiteral_24779/*"userEventRace"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    221,
    (Il2CppObject *)StringLiteral_22059/*"mstEventScript"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    222,
    (Il2CppObject *)StringLiteral_22060/*"mstEventScriptRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    223,
    (Il2CppObject *)StringLiteral_22216/*"mstSpotPath"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    224,
    (Il2CppObject *)StringLiteral_22213/*"mstSpotAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    225,
    (Il2CppObject *)StringLiteral_24367/*"totalEventRace"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    226,
    (Il2CppObject *)StringLiteral_22040/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    227,
    (Il2CppObject *)StringLiteral_22294/*"mstVoicePlayGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    228,
    (Il2CppObject *)StringLiteral_22293/*"mstVoicePlayCond"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    229,
    (Il2CppObject *)StringLiteral_22103/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    230,
    (Il2CppObject *)StringLiteral_22244/*"mstSvtFlag"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    231,
    (Il2CppObject *)StringLiteral_22245/*"mstSvtFlagRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    232,
    (Il2CppObject *)StringLiteral_22023/*"mstEventLocationCampaign"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    233,
    (Il2CppObject *)StringLiteral_21935/*"mstCampaignInfo"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    234,
    (Il2CppObject *)StringLiteral_21973/*"mstDialogMessage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    235,
    (Il2CppObject *)StringLiteral_22247/*"mstSvtIndividuality"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    236,
    (Il2CppObject *)StringLiteral_21925/*"mstBoardMessage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    237,
    (Il2CppObject *)StringLiteral_21926/*"mstBoardMessageRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    238,
    (Il2CppObject *)StringLiteral_22065/*"mstEventSvtFatigue"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    239,
    (Il2CppObject *)StringLiteral_24768/*"userEventDeck"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    240,
    (Il2CppObject *)StringLiteral_22067/*"mstEventTower"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    241,
    (Il2CppObject *)StringLiteral_22068/*"mstEventTowerReward"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    242,
    (Il2CppObject *)StringLiteral_21994/*"mstEventBulletinBoard"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    243,
    (Il2CppObject *)StringLiteral_21995/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    244,
    (Il2CppObject *)StringLiteral_22013/*"mstEventFactory"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    245,
    (Il2CppObject *)StringLiteral_22201/*"mstShopGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    246,
    (Il2CppObject *)StringLiteral_21906/*"mstAuraEffect"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    247,
    (Il2CppObject *)StringLiteral_21907/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    248,
    (Il2CppObject *)StringLiteral_24776/*"userEventMissionFix"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    249,
    (Il2CppObject *)StringLiteral_22509/*"notEndEventMissionFix"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    250,
    (Il2CppObject *)StringLiteral_21977/*"mstEnemyMaster"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    251,
    (Il2CppObject *)StringLiteral_21978/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    252,
    (Il2CppObject *)StringLiteral_22268/*"mstSvtSkillRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    253,
    (Il2CppObject *)StringLiteral_22258/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    254,
    (Il2CppObject *)StringLiteral_22273/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    255,
    (Il2CppObject *)StringLiteral_22133/*"mstMapGimmickRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    256,
    (Il2CppObject *)StringLiteral_21960/*"mstCommandCode"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    257,
    (Il2CppObject *)StringLiteral_22236/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    258,
    (Il2CppObject *)StringLiteral_24752/*"userCommandCode"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    259,
    (Il2CppObject *)StringLiteral_24753/*"userCommandCodeCollection"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    260,
    (Il2CppObject *)StringLiteral_24828/*"userSvtCommandCode"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    261,
    (Il2CppObject *)StringLiteral_21962/*"mstCommandCodeSkill"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    262,
    (Il2CppObject *)StringLiteral_21963/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    263,
    (Il2CppObject *)StringLiteral_21961/*"mstCommandCodeComment"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    264,
    (Il2CppObject *)StringLiteral_22061/*"mstEventStatus"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    265,
    (Il2CppObject *)StringLiteral_22062/*"mstEventStatusQuest"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    266,
    (Il2CppObject *)StringLiteral_21967/*"mstCommonRestriction"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    267,
    (Il2CppObject *)StringLiteral_22038/*"mstEventPointBuff"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    268,
    (Il2CppObject *)StringLiteral_24787/*"userFollow"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    269,
    (Il2CppObject *)StringLiteral_22055/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    270,
    (Il2CppObject *)StringLiteral_22532/*"npcSvtEquip"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    271,
    (Il2CppObject *)StringLiteral_21997/*"mstEventCampaignRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    272,
    (Il2CppObject *)StringLiteral_22253/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    273,
    (Il2CppObject *)StringLiteral_22010/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    274,
    (Il2CppObject *)StringLiteral_22037/*"mstEventPointActivity"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    275,
    (Il2CppObject *)StringLiteral_22084/*"mstFuncCategory"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    276,
    (Il2CppObject *)StringLiteral_22169/*"mstQuestPickup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    277,
    (Il2CppObject *)StringLiteral_22074/*"mstEventUi"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    278,
    (Il2CppObject *)StringLiteral_22075/*"mstEventUiRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    279,
    (Il2CppObject *)StringLiteral_22076/*"mstEventUiValue"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    280,
    (Il2CppObject *)StringLiteral_22001/*"mstEventConquestReward"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    281,
    (Il2CppObject *)StringLiteral_22528/*"npcFollowerRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    282,
    (Il2CppObject *)StringLiteral_21989/*"mstEventBonusFilter"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    283,
    (Il2CppObject *)StringLiteral_21990/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    284,
    (Il2CppObject *)StringLiteral_21991/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    285,
    (Il2CppObject *)StringLiteral_24795/*"userGachaExtraCount"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    286,
    (Il2CppObject *)StringLiteral_21959/*"mstCommandCardRankParam"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    287,
    (Il2CppObject *)StringLiteral_24827/*"userSvtCommandCard"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    288,
    (Il2CppObject *)StringLiteral_22152/*"mstPrivilege"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    289,
    (Il2CppObject *)StringLiteral_24809/*"userPrivilege"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    290,
    (Il2CppObject *)StringLiteral_22158/*"mstQuestDateRange"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    291,
    (Il2CppObject *)StringLiteral_22041/*"mstEventPointUpper"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    292,
    (Il2CppObject *)StringLiteral_22042/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    293,
    (Il2CppObject *)StringLiteral_24814/*"userQuestRoute"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    294,
    (Il2CppObject *)StringLiteral_21992/*"mstEventBossStatusUi"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    295,
    (Il2CppObject *)StringLiteral_21966/*"mstCommonRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    296,
    (Il2CppObject *)StringLiteral_22182/*"mstQuestSpotRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    297,
    (Il2CppObject *)StringLiteral_22292/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    298,
    (Il2CppObject *)StringLiteral_21946/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    299,
    (Il2CppObject *)StringLiteral_22019/*"mstEventGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    300,
    (Il2CppObject *)StringLiteral_21902/*"mstAssetbundleKey"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    301,
    (Il2CppObject *)StringLiteral_24363/*"totalBoxGacha"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    302,
    (Il2CppObject *)StringLiteral_22272/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    303,
    (Il2CppObject *)StringLiteral_19296/*"eventSvtFatigue"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    304,
    (Il2CppObject *)StringLiteral_22053/*"mstEventRewardBg"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    305,
    (Il2CppObject *)StringLiteral_22014/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    306,
    (Il2CppObject *)StringLiteral_19283/*"eventBoostItemUsed"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    307,
    (Il2CppObject *)StringLiteral_22222/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    308,
    (Il2CppObject *)StringLiteral_22166/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    309,
    (Il2CppObject *)StringLiteral_22290/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    310,
    (Il2CppObject *)StringLiteral_22221/*"mstStageRemap"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    311,
    (Il2CppObject *)StringLiteral_18220/*"combineExp"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    312,
    (Il2CppObject *)StringLiteral_21986/*"mstEventBoardGameCell"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    313,
    (Il2CppObject *)StringLiteral_21987/*"mstEventBoardGameToken"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    314,
    (Il2CppObject *)StringLiteral_21988/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    315,
    (Il2CppObject *)StringLiteral_24765/*"userEventBoardGameToken"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    316,
    (Il2CppObject *)StringLiteral_22227/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    317,
    (Il2CppObject *)StringLiteral_22148/*"mstOpeningMovie"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    318,
    (Il2CppObject *)StringLiteral_22251/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    319,
    (Il2CppObject *)StringLiteral_22906/*"pickupUserFollower"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    320,
    (Il2CppObject *)StringLiteral_22235/*"mstSvtCollection"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    321,
    (Il2CppObject *)StringLiteral_22092/*"mstGachaBehavior"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    322,
    (Il2CppObject *)StringLiteral_22045/*"mstEventQuestCooltime"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    323,
    (Il2CppObject *)StringLiteral_24778/*"userEventQuestCooltime"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    324,
    (Il2CppObject *)StringLiteral_21927/*"mstBoost"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    325,
    (Il2CppObject *)StringLiteral_22298/*"mstWarBoard"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    326,
    (Il2CppObject *)StringLiteral_22322/*"mstWarBoardSquare"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    327,
    (Il2CppObject *)StringLiteral_22321/*"mstWarBoardRoad"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    328,
    (Il2CppObject *)StringLiteral_22324/*"mstWarBoardStage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    329,
    (Il2CppObject *)StringLiteral_22299/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    330,
    (Il2CppObject *)StringLiteral_22301/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    331,
    (Il2CppObject *)StringLiteral_22332/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    332,
    (Il2CppObject *)StringLiteral_22327/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    333,
    (Il2CppObject *)StringLiteral_22328/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    334,
    (Il2CppObject *)StringLiteral_22331/*"mstWarBoardStageWall"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    335,
    (Il2CppObject *)StringLiteral_22304/*"mstWarBoardAi"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    336,
    (Il2CppObject *)StringLiteral_22317/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    337,
    (Il2CppObject *)StringLiteral_22318/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    338,
    (Il2CppObject *)StringLiteral_22311/*"mstWarBoardItem"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    339,
    (Il2CppObject *)StringLiteral_22333/*"mstWarBoardTreasure"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    340,
    (Il2CppObject *)StringLiteral_22316/*"mstWarBoardQuest"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    341,
    (Il2CppObject *)StringLiteral_24998/*"warBoardData"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    342,
    (Il2CppObject *)StringLiteral_22310/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    343,
    (Il2CppObject *)StringLiteral_22302/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    344,
    (Il2CppObject *)StringLiteral_22300/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    345,
    (Il2CppObject *)StringLiteral_22320/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    346,
    (Il2CppObject *)StringLiteral_22330/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    347,
    (Il2CppObject *)StringLiteral_22032/*"mstEventPanelMap"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    348,
    (Il2CppObject *)StringLiteral_22033/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    349,
    (Il2CppObject *)StringLiteral_22035/*"mstEventPanelSpot"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    350,
    (Il2CppObject *)StringLiteral_22034/*"mstEventPanelScan"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    351,
    (Il2CppObject *)StringLiteral_22006/*"mstEventDigging"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    352,
    (Il2CppObject *)StringLiteral_22008/*"mstEventDiggingReward"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    353,
    (Il2CppObject *)StringLiteral_22007/*"mstEventDiggingBlock"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    354,
    (Il2CppObject *)StringLiteral_24769/*"userEventDigging"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    355,
    (Il2CppObject *)StringLiteral_21965/*"mstCommonConsume"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    356,
    (Il2CppObject *)StringLiteral_24773/*"userEventMap"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    357,
    (Il2CppObject *)StringLiteral_24782/*"userEventSpot"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    358,
    (Il2CppObject *)StringLiteral_22334/*"mstWarGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    359,
    (Il2CppObject *)StringLiteral_22250/*"mstSvtLimitImage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    360,
    (Il2CppObject *)StringLiteral_19847/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    361,
    (Il2CppObject *)StringLiteral_22176/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    362,
    (Il2CppObject *)StringLiteral_21903/*"mstAssist"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    363,
    (Il2CppObject *)StringLiteral_22306/*"mstWarBoardEffect"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    364,
    (Il2CppObject *)StringLiteral_22314/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    365,
    (Il2CppObject *)StringLiteral_17209/*"beforeBirthDay"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    366,
    (Il2CppObject *)StringLiteral_22123/*"mstLoginQuest"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    367,
    (Il2CppObject *)StringLiteral_21999/*"mstEventCombineCostume"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    368,
    (Il2CppObject *)StringLiteral_22329/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    369,
    (Il2CppObject *)StringLiteral_22271/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    370,
    (Il2CppObject *)StringLiteral_22206/*"mstSkillAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    371,
    (Il2CppObject *)StringLiteral_22252/*"mstSvtLvDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    372,
    (Il2CppObject *)StringLiteral_22090/*"mstGachaAppend"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    373,
    (Il2CppObject *)StringLiteral_24794/*"userGachaDrawLog"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    374,
    (Il2CppObject *)StringLiteral_22228/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    375,
    (Il2CppObject *)StringLiteral_24823/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    376,
    (Il2CppObject *)StringLiteral_24824/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    377,
    (Il2CppObject *)StringLiteral_22229/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    378,
    (Il2CppObject *)StringLiteral_21949/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    379,
    (Il2CppObject *)StringLiteral_22234/*"mstSvtCoin"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    380,
    (Il2CppObject *)StringLiteral_24825/*"userSvtCoin"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    381,
    (Il2CppObject *)StringLiteral_22226/*"mstSvtAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    382,
    (Il2CppObject *)StringLiteral_22281/*"mstTreasureBox"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    383,
    (Il2CppObject *)StringLiteral_22282/*"mstTreasureBoxGift"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    384,
    (Il2CppObject *)StringLiteral_22283/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    385,
    (Il2CppObject *)StringLiteral_24770/*"userEventExpedition"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    386,
    (Il2CppObject *)StringLiteral_22011/*"mstEventExpedition"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    387,
    (Il2CppObject *)StringLiteral_22012/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    388,
    (Il2CppObject *)StringLiteral_22050/*"mstEventRecipe"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    389,
    (Il2CppObject *)StringLiteral_22051/*"mstEventRecipeGift"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    390,
    (Il2CppObject *)StringLiteral_24771/*"userEventFortification"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    391,
    (Il2CppObject *)StringLiteral_22016/*"mstEventFortification"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    392,
    (Il2CppObject *)StringLiteral_22017/*"mstEventFortificationDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    393,
    (Il2CppObject *)StringLiteral_22018/*"mstEventFortificationSvt"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    394,
    (Il2CppObject *)StringLiteral_24837/*"userSvtVoicePlayed"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    395,
    (Il2CppObject *)StringLiteral_24684/*"updateProfileDialogInfo"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    396,
    (Il2CppObject *)StringLiteral_22254/*"mstSvtMaterialTd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    397,
    (Il2CppObject *)StringLiteral_21912/*"mstBattleMasterImage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    398,
    (Il2CppObject *)StringLiteral_24790/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    399,
    (Il2CppObject *)StringLiteral_24781/*"userEventRandomMission"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    400,
    (Il2CppObject *)StringLiteral_22043/*"mstEventProgressValue"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    401,
    (Il2CppObject *)StringLiteral_22255/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    402,
    (Il2CppObject *)StringLiteral_22049/*"mstEventRandomMission"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    403,
    (Il2CppObject *)StringLiteral_24793/*"userGachaDrawHistory"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    404,
    (Il2CppObject *)StringLiteral_24751/*"userCoinRoom"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    405,
    (Il2CppObject *)StringLiteral_21993/*"mstEventBuddyPoint"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    406,
    (Il2CppObject *)StringLiteral_22066/*"mstEventSvtPointRank"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    407,
    (Il2CppObject *)StringLiteral_24784/*"userEventSvtPoint"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    408,
    (Il2CppObject *)StringLiteral_22079/*"mstFieldMotion"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    409,
    (Il2CppObject *)StringLiteral_24760/*"userDeleteReservation"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    410,
    (Il2CppObject *)StringLiteral_22265/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    411,
    (Il2CppObject *)StringLiteral_21980/*"mstEquipAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    412,
    (Il2CppObject *)StringLiteral_22173/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    413,
    (Il2CppObject *)StringLiteral_24764/*"userEventAlloutBattle"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    414,
    (Il2CppObject *)StringLiteral_22179/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    415,
    (Il2CppObject *)StringLiteral_21913/*"mstBattleMessage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    416,
    (Il2CppObject *)StringLiteral_21914/*"mstBattleMessageGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    417,
    (Il2CppObject *)StringLiteral_24805/*"userNpcSvtRecord"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    418,
    (Il2CppObject *)StringLiteral_21934/*"mstBuffTypeDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    419,
    (Il2CppObject *)StringLiteral_22312/*"mstWarBoardMessage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    420,
    (Il2CppObject *)StringLiteral_22315/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    421,
    (Il2CppObject *)StringLiteral_22313/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    422,
    (Il2CppObject *)StringLiteral_22337/*"mstWarQuestSelection"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    423,
    (Il2CppObject *)StringLiteral_22326/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    424,
    (Il2CppObject *)StringLiteral_22180/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    425,
    (Il2CppObject *)StringLiteral_22178/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    426,
    (Il2CppObject *)StringLiteral_21897/*"mstAdCheckPoint"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    427,
    (Il2CppObject *)StringLiteral_22111/*"mstGiftDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    428,
    (Il2CppObject *)StringLiteral_21952/*"mstCombineLimitGift"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    429,
    (Il2CppObject *)StringLiteral_22002/*"mstEventCooltimeReward"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    430,
    (Il2CppObject *)StringLiteral_24766/*"userEventCooltimeReward"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    431,
    (Il2CppObject *)StringLiteral_21940/*"mstClassBoardClass"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    432,
    (Il2CppObject *)StringLiteral_21939/*"mstClassBoardBase"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    433,
    (Il2CppObject *)StringLiteral_21942/*"mstClassBoardLine"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    434,
    (Il2CppObject *)StringLiteral_21943/*"mstClassBoardLock"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    435,
    (Il2CppObject *)StringLiteral_21944/*"mstClassBoardSquare"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    436,
    (Il2CppObject *)StringLiteral_21941/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    437,
    (Il2CppObject *)StringLiteral_24749/*"userClassBoardSquare"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    438,
    (Il2CppObject *)StringLiteral_22232/*"mstSvtCardAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    439,
    (Il2CppObject *)StringLiteral_22134/*"mstMapLayer"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    440,
    (Il2CppObject *)StringLiteral_22215/*"mstSpotLayer"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    441,
    (Il2CppObject *)StringLiteral_22129/*"mstMapGimmickLayer"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    442,
    (Il2CppObject *)StringLiteral_22003/*"mstEventDataLostBattle"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    443,
    (Il2CppObject *)StringLiteral_22004/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    444,
    (Il2CppObject *)StringLiteral_24767/*"userEventDataLost"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    445,
    (Il2CppObject *)StringLiteral_22161/*"mstQuestHint"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    446,
    (Il2CppObject *)StringLiteral_22087/*"mstFuncTypeDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    447,
    (Il2CppObject *)StringLiteral_21933/*"mstBuffConvert"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    448,
    (Il2CppObject *)StringLiteral_22208/*"mstSkillGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    449,
    (Il2CppObject *)StringLiteral_22209/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    450,
    (Il2CppObject *)StringLiteral_22210/*"mstSkillIndividuality"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    451,
    (Il2CppObject *)StringLiteral_22189/*"mstRestrictionBase"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    452,
    (Il2CppObject *)StringLiteral_22191/*"mstRestrictionSlot"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    453,
    (Il2CppObject *)StringLiteral_22192/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    454,
    (Il2CppObject *)StringLiteral_22190/*"mstRestrictionMessage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    455,
    (Il2CppObject *)StringLiteral_22193/*"mstRestrictionWhole"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    456,
    (Il2CppObject *)StringLiteral_22085/*"mstFuncDisp"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    457,
    (Il2CppObject *)StringLiteral_22000/*"mstEventCommandAssist"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    458,
    (Il2CppObject *)StringLiteral_22030/*"mstEventMissionGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    459,
    (Il2CppObject *)StringLiteral_21953/*"mstCombineLimitRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    460,
    (Il2CppObject *)StringLiteral_22287/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    461,
    (Il2CppObject *)StringLiteral_22115/*"mstHeelPortrait"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    462,
    (Il2CppObject *)StringLiteral_24799/*"userHeelPortrait"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    463,
    (Il2CppObject *)StringLiteral_22534/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    464,
    (Il2CppObject *)StringLiteral_22096/*"mstGachaExtraGift"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    465,
    (Il2CppObject *)StringLiteral_22031/*"mstEventMural"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    466,
    (Il2CppObject *)StringLiteral_24939/*"viewWaveEnemy"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    467,
    (Il2CppObject *)StringLiteral_21924/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    468,
    (Il2CppObject *)StringLiteral_21920/*"mstBlankEarthGimmick"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    469,
    (Il2CppObject *)StringLiteral_22278/*"mstTerminalOverwrite"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    470,
    (Il2CppObject *)StringLiteral_19461/*"exchangeSvt"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    471,
    (Il2CppObject *)StringLiteral_22305/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    472,
    (Il2CppObject *)StringLiteral_22307/*"mstWarBoardEvent"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    473,
    (Il2CppObject *)StringLiteral_22308/*"mstWarBoardEventScript"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    474,
    (Il2CppObject *)StringLiteral_22325/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    475,
    (Il2CppObject *)StringLiteral_22323/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    476,
    (Il2CppObject *)StringLiteral_22303/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    477,
    (Il2CppObject *)StringLiteral_22319/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    478,
    (Il2CppObject *)StringLiteral_22309/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    479,
    (Il2CppObject *)StringLiteral_22261/*"mstSvtProfilePush"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    480,
    (Il2CppObject *)StringLiteral_22131/*"mstMapGimmickPath"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    481,
    (Il2CppObject *)StringLiteral_22132/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    482,
    (Il2CppObject *)StringLiteral_22256/*"mstSvtOverwrite"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    483,
    (Il2CppObject *)StringLiteral_22119/*"mstIndividualityPolicy"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    484,
    (Il2CppObject *)StringLiteral_22118/*"mstIndividualityPersonality"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    485,
    (Il2CppObject *)StringLiteral_21904/*"mstAttri"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    486,
    (Il2CppObject *)StringLiteral_22275/*"mstSvtVoicePattern"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    487,
    (Il2CppObject *)StringLiteral_24798/*"userGameCommon"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    488,
    (Il2CppObject *)StringLiteral_22259/*"mstSvtPhoto"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    489,
    (Il2CppObject *)StringLiteral_22139/*"mstMasterPhoto"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    490,
    (Il2CppObject *)StringLiteral_22151/*"mstPhotoFrame"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    491,
    (Il2CppObject *)StringLiteral_22336/*"mstWarMessage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    492,
    (Il2CppObject *)StringLiteral_22155/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    493,
    (Il2CppObject *)StringLiteral_22078/*"mstExcludeMotionCond"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    494,
    (Il2CppObject *)StringLiteral_24802/*"userInterruptionQuest"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    495,
    (Il2CppObject *)StringLiteral_22269/*"mstSvtTransform"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    496,
    (Il2CppObject *)StringLiteral_22135/*"mstMapUpdateSchedule"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    497,
    (Il2CppObject *)StringLiteral_22168/*"mstQuestPhasePresent"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    498,
    (Il2CppObject *)StringLiteral_24745/*"userAccountLinkage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    499,
    (Il2CppObject *)StringLiteral_22143/*"mstMissionNaviTransition"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    500,
    (Il2CppObject *)StringLiteral_22069/*"mstEventTradeGoods"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    501,
    (Il2CppObject *)StringLiteral_22070/*"mstEventTradePickup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    502,
    (Il2CppObject *)StringLiteral_22071/*"mstEventTradeStore"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    503,
    (Il2CppObject *)StringLiteral_24785/*"userEventTrade"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    504,
    (Il2CppObject *)StringLiteral_22142/*"mstMissionNaviQuest"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    505,
    (Il2CppObject *)StringLiteral_22873/*"paymentHistory"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    506,
    (Il2CppObject *)StringLiteral_24786/*"userExternalPaymentStone"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    507,
    (Il2CppObject *)StringLiteral_22167/*"mstQuestPhaseIndividuality"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    508,
    (Il2CppObject *)StringLiteral_24936/*"viewGachaFeaturedSvt"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    514,
    (Il2CppObject *)StringLiteral_21976/*"mstEffectMovie"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    509,
    (Il2CppObject *)StringLiteral_22100/*"mstGachaPickupCollateral"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    510,
    (Il2CppObject *)StringLiteral_22101/*"mstGachaPickupCollateralGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    511,
    (Il2CppObject *)StringLiteral_21915/*"mstBattlePoint"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    512,
    (Il2CppObject *)StringLiteral_21916/*"mstBattlePointPhase"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    513,
    (Il2CppObject *)StringLiteral_22230/*"mstSvtBattlePoint"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    515,
    (Il2CppObject *)StringLiteral_22150/*"mstPaymentLimit"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    516,
    (Il2CppObject *)StringLiteral_24806/*"userPaymentLimit"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    517,
    (Il2CppObject *)StringLiteral_22194/*"mstRoadmap"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    518,
    (Il2CppObject *)StringLiteral_24816/*"userRecommendSupport"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    520,
    (Il2CppObject *)StringLiteral_22185/*"mstRecommendAdviceMessage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    519,
    (Il2CppObject *)StringLiteral_22186/*"mstRecommendSupportQuest"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    521,
    (Il2CppObject *)StringLiteral_24815/*"userRecommendFollower"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    522,
    (Il2CppObject *)StringLiteral_22121/*"mstItemDropEfficiency"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    523,
    (Il2CppObject *)StringLiteral_21921/*"mstBlankEarthGimmickAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    524,
    (Il2CppObject *)StringLiteral_22338/*"mstWarRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    525,
    (Il2CppObject *)StringLiteral_22196/*"mstSelectBonusBase"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    526,
    (Il2CppObject *)StringLiteral_22195/*"mstSelectBonus"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    527,
    (Il2CppObject *)StringLiteral_22146/*"mstMyroomSvtSpecialImage"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    528,
    (Il2CppObject *)StringLiteral_22203/*"mstShopReset"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    529,
    (Il2CppObject *)StringLiteral_22531/*"npcSvtDisplayTypeDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    530,
    (Il2CppObject *)StringLiteral_22082/*"mstFriendshipSvt"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    531,
    (Il2CppObject *)StringLiteral_19462/*"exchangeSvtCoinGivenNum"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    532,
    (Il2CppObject *)StringLiteral_21937/*"mstChaldeaGatePickup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    533,
    (Il2CppObject *)StringLiteral_22335/*"mstWarGroupIgnore"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    534,
    (Il2CppObject *)StringLiteral_22117/*"mstImagePartsGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    535,
    (Il2CppObject *)StringLiteral_24801/*"userImagePartsGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    536,
    (Il2CppObject *)StringLiteral_22141/*"mstMissionItemDisplay"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    537,
    (Il2CppObject *)StringLiteral_22183/*"mstQuestUseItemGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    538,
    (Il2CppObject *)StringLiteral_22184/*"mstQuestUseItemPickup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    539,
    (Il2CppObject *)StringLiteral_24772/*"userEventItemLinkSvt"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    540,
    (Il2CppObject *)StringLiteral_22162/*"mstQuestHintOverwrite"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    541,
    (Il2CppObject *)StringLiteral_23189/*"reachedWaveInfo"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    542,
    (Il2CppObject *)StringLiteral_22106/*"mstGallery"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    543,
    (Il2CppObject *)StringLiteral_22108/*"mstGalleryResource"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    544,
    (Il2CppObject *)StringLiteral_22267/*"mstSvtSkillAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    545,
    (Il2CppObject *)StringLiteral_22107/*"mstGalleryFolderRelease"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    546,
    (Il2CppObject *)StringLiteral_24831/*"userSvtFirstGetTime"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    547,
    (Il2CppObject *)StringLiteral_22159/*"mstQuestExtension"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    548,
    (Il2CppObject *)StringLiteral_24832/*"userSvtGrand"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    549,
    (Il2CppObject *)StringLiteral_22112/*"mstGrandGraph"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    550,
    (Il2CppObject *)StringLiteral_22113/*"mstGrandGraphDetail"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    551,
    (Il2CppObject *)StringLiteral_24750/*"userClassStatistics"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    552,
    (Il2CppObject *)StringLiteral_22009/*"mstEventEquipSkillParts"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    553,
    (Il2CppObject *)StringLiteral_22136/*"mstMasterIndividualitySelect"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    554,
    (Il2CppObject *)StringLiteral_22145/*"mstMyroomAddBgDiff"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    555,
    (Il2CppObject *)StringLiteral_21917/*"mstBattleScript"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    556,
    (Il2CppObject *)StringLiteral_21974/*"mstDropAdd"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    557,
    (Il2CppObject *)StringLiteral_24746/*"userBgImagePartsGroup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  DataNameKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_DataNameKind_Kind__string__o *)v1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)DataNameKind_TypeInfo->static_fields, (int32_t)v1, v4, v5, v6, v7, v8, v9);
}


void DataNameKind___ctor(DataNameKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *DataNameKind__GetName(int32_t kind, const MethodInfo *method)
{
  DataNameKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4CED55A & 1) == 0 )
  {
    sub_1C7BAE8(&DataNameKind_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_4CED55A = 1;
  }
  v3 = DataNameKind_TypeInfo;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
    v3 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1C7BD40(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_34BC4AC *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}