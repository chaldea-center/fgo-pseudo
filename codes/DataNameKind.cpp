void DataNameKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C55C1C & 1) == 0 )
  {
    sub_1C3E564(&DataNameKind_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_1C3E564(&StringLiteral_21883/*"mstEventTradeGoods"*/);
    sub_1C3E564(&StringLiteral_24572/*"userGameCommon"*/);
    sub_1C3E564(&StringLiteral_21843/*"mstEventMissionConditionDetail"*/);
    sub_1C3E564(&StringLiteral_22096/*"mstTreasureBoxGift"*/);
    sub_1C3E564(&StringLiteral_21776/*"mstCommandCodeComment"*/);
    sub_1C3E564(&StringLiteral_21839/*"mstEventMissionAction"*/);
    sub_1C3E564(&StringLiteral_24538/*"userEventAlloutBattle"*/);
    sub_1C3E564(&StringLiteral_22988/*"reachedWaveInfo"*/);
    sub_1C3E564(&StringLiteral_21804/*"mstEventBonusFilterGroupInfo"*/);
    sub_1C3E564(&StringLiteral_24589/*"userRecommendFollower"*/);
    sub_1C3E564(&StringLiteral_21987/*"mstQuestReleaseOverwrite"*/);
    sub_1C3E564(&StringLiteral_21947/*"mstMapGimmickRelease"*/);
    sub_1C3E564(&StringLiteral_21910/*"mstGachaExtraGift"*/);
    sub_1C3E564(&StringLiteral_22347/*"npcSvtFollowerIndividuality"*/);
    sub_1C3E564(&StringLiteral_21806/*"mstEventBossStatusUi"*/);
    sub_1C3E564(&StringLiteral_24598/*"userSvtAppendPassiveSkillLv"*/);
    sub_1C3E564(&StringLiteral_21760/*"mstClassRelation"*/);
    sub_1C3E564(&StringLiteral_21714/*"mstAiAct"*/);
    sub_1C3E564(&StringLiteral_22041/*"mstSvtAnimationOverwrite"*/);
    sub_1C3E564(&StringLiteral_21989/*"mstQuestRestriction"*/);
    sub_1C3E564(&StringLiteral_21787/*"mstCv"*/);
    sub_1C3E564(&StringLiteral_24543/*"userEventDigging"*/);
    sub_1C3E564(&StringLiteral_24028/*"tblUserGame"*/);
    sub_1C3E564(&StringLiteral_21817/*"mstEventDataLostBattle"*/);
    sub_1C3E564(&StringLiteral_21807/*"mstEventBuddyPoint"*/);
    sub_1C3E564(&StringLiteral_21734/*"mstBgmRelease"*/);
    sub_1C3E564(&StringLiteral_22068/*"mstSvtMaterialTd"*/);
    sub_1C3E564(&StringLiteral_21781/*"mstCommonRelease"*/);
    sub_1C3E564(&StringLiteral_21895/*"mstFriendship"*/);
    sub_1C3E564(&StringLiteral_24523/*"userClassBoardSquare"*/);
    sub_1C3E564(&StringLiteral_21785/*"mstConstantLong"*/);
    sub_1C3E564(&StringLiteral_21759/*"mstClassBoardSquare"*/);
    sub_1C3E564(&StringLiteral_24602/*"userSvtCommandCode"*/);
    sub_1C3E564(&StringLiteral_21970/*"mstQuestBehavior"*/);
    sub_1C3E564(&StringLiteral_21935/*"mstItemDropEfficiency"*/);
    sub_1C3E564(&StringLiteral_22067/*"mstSvtMaterialFolder"*/);
    sub_1C3E564(&StringLiteral_22143/*"mstWarBoardStagePieceDetail"*/);
    sub_1C3E564(&StringLiteral_21884/*"mstEventTradePickup"*/);
    sub_1C3E564(&StringLiteral_21805/*"mstEventBonusFilterGroupMember"*/);
    sub_1C3E564(&StringLiteral_21975/*"mstQuestHint"*/);
    sub_1C3E564(&StringLiteral_21779/*"mstCommandSpell"*/);
    sub_1C3E564(&StringLiteral_21712/*"mstAdCheckPoint"*/);
    sub_1C3E564(&StringLiteral_21966/*"mstPrivilege"*/);
    sub_1C3E564(&StringLiteral_21976/*"mstQuestHintOverwrite"*/);
    sub_1C3E564(&StringLiteral_21741/*"mstBoardMessageRelease"*/);
    sub_1C3E564(&StringLiteral_21916/*"mstGachaRelease"*/);
    sub_1C3E564(&StringLiteral_24534/*"userDeleteReservation"*/);
    sub_1C3E564(&StringLiteral_22095/*"mstTreasureBox"*/);
    sub_1C3E564(&StringLiteral_24575/*"userImagePartsGroup"*/);
    sub_1C3E564(&StringLiteral_21795/*"mstEquipExp"*/);
    sub_1C3E564(&StringLiteral_21802/*"mstEventBoardGameTokenReward"*/);
    sub_1C3E564(&StringLiteral_22048/*"mstSvtCoin"*/);
    sub_1C3E564(&StringLiteral_22079/*"mstSvtScriptMultiple"*/);
    sub_1C3E564(&StringLiteral_21954/*"mstMaterialFolder"*/);
    sub_1C3E564(&StringLiteral_21813/*"mstEventCombineCostume"*/);
    sub_1C3E564(&StringLiteral_21972/*"mstQuestDateRange"*/);
    sub_1C3E564(&StringLiteral_22139/*"mstWarBoardStageBoss"*/);
    sub_1C3E564(&StringLiteral_21748/*"mstBuffConvert"*/);
    sub_1C3E564(&StringLiteral_21998/*"mstQuestUseItemPickup"*/);
    sub_1C3E564(&StringLiteral_21721/*"mstAuraEffect"*/);
    sub_1C3E564(&StringLiteral_21861/*"mstEventRaceResult"*/);
    sub_1C3E564(&StringLiteral_22011/*"mstSetItem"*/);
    sub_1C3E564(&StringLiteral_22344/*"npcSvtDisplayTypeDetail"*/);
    sub_1C3E564(&StringLiteral_22033/*"mstStaffPhotoCostume"*/);
    sub_1C3E564(&StringLiteral_21921/*"mstGalleryFolderRelease"*/);
    sub_1C3E564(&StringLiteral_22001/*"mstRecover"*/);
    sub_1C3E564(&StringLiteral_21876/*"mstEventStatusQuest"*/);
    sub_1C3E564(&StringLiteral_24540/*"userEventCooltimeReward"*/);
    sub_1C3E564(&StringLiteral_21964/*"mstPaymentLimit"*/);
    sub_1C3E564(&StringLiteral_22117/*"mstWarBoardActionTrendGroup"*/);
    sub_1C3E564(&StringLiteral_24588/*"userQuestRoute"*/);
    sub_1C3E564(&StringLiteral_22025/*"mstSkillLv"*/);
    sub_1C3E564(&StringLiteral_22060/*"mstSvtGroup"*/);
    sub_1C3E564(&StringLiteral_22104/*"mstVoiceClosedMessage"*/);
    sub_1C3E564(&StringLiteral_21826/*"mstEventExpeditionPiece"*/);
    sub_1C3E564(&StringLiteral_21969/*"mstQuestAutoOrganizationAdjust"*/);
    sub_1C3E564(&StringLiteral_22069/*"mstSvtMultiPortrait"*/);
    sub_1C3E564(&StringLiteral_21829/*"mstEventFilter"*/);
    sub_1C3E564(&StringLiteral_21956/*"mstMissionNaviQuest"*/);
    sub_1C3E564(&StringLiteral_24590/*"userRecommendSupport"*/);
    sub_1C3E564(&StringLiteral_24577/*"userItem"*/);
    sub_1C3E564(&StringLiteral_21825/*"mstEventExpedition"*/);
    sub_1C3E564(&StringLiteral_21860/*"mstEventRace"*/);
    sub_1C3E564(&StringLiteral_21990/*"mstQuestRestrictionInfo"*/);
    sub_1C3E564(&StringLiteral_21988/*"mstQuestReset"*/);
    sub_1C3E564(&StringLiteral_24544/*"userEventExpedition"*/);
    sub_1C3E564(&StringLiteral_21832/*"mstEventFortificationSvt"*/);
    sub_1C3E564(&StringLiteral_22144/*"mstWarBoardStageReinforcements"*/);
    sub_1C3E564(&StringLiteral_21754/*"mstClassBoardBase"*/);
    sub_1C3E564(&StringLiteral_21791/*"mstEnemyMaster"*/);
    sub_1C3E564(&StringLiteral_21722/*"mstAuraEffectPosOverwrite"*/);
    sub_1C3E564(&StringLiteral_22005/*"mstRestrictionSlot"*/);
    sub_1C3E564(&StringLiteral_21918/*"mstGachaSub"*/);
    sub_1C3E564(&StringLiteral_21880/*"mstEventSvtPointRank"*/);
    sub_1C3E564(&StringLiteral_21853/*"mstEventPointGroup"*/);
    sub_1C3E564(&StringLiteral_21799/*"mstEventAdd"*/);
    sub_1C3E564(&StringLiteral_21793/*"mstEquip"*/);
    sub_1C3E564(&StringLiteral_21865/*"mstEventRecipeGift"*/);
    sub_1C3E564(&StringLiteral_22091/*"mstTelop"*/);
    sub_1C3E564(&StringLiteral_24600/*"userSvtCollection"*/);
    sub_1C3E564(&StringLiteral_24550/*"userEventMissionFix"*/);
    sub_1C3E564(&StringLiteral_22003/*"mstRestrictionBase"*/);
    sub_1C3E564(&StringLiteral_22093/*"mstTips"*/);
    sub_1C3E564(&StringLiteral_22032/*"mstStaffPhoto"*/);
    sub_1C3E564(&StringLiteral_21723/*"mstBankShop"*/);
    sub_1C3E564(&StringLiteral_21891/*"mstEventVoicePlay"*/);
    sub_1C3E564(&StringLiteral_21997/*"mstQuestUseItemGroup"*/);
    sub_1C3E564(&StringLiteral_21831/*"mstEventFortificationDetail"*/);
    sub_1C3E564(&StringLiteral_24557/*"userEventSuperBoss"*/);
    sub_1C3E564(&StringLiteral_21830/*"mstEventFortification"*/);
    sub_1C3E564(&StringLiteral_21878/*"mstEventSvt"*/);
    sub_1C3E564(&StringLiteral_22108/*"mstVoicePlayGroup"*/);
    sub_1C3E564(&StringLiteral_24542/*"userEventDeck"*/);
    sub_1C3E564(&StringLiteral_22027/*"mstSpotAdd"*/);
    sub_1C3E564(&StringLiteral_21772/*"mstCombineSkill"*/);
    sub_1C3E564(&StringLiteral_22136/*"mstWarBoardSquare"*/);
    sub_1C3E564(&StringLiteral_21749/*"mstBuffTypeDetail"*/);
    sub_1C3E564(&StringLiteral_22114/*"mstWarBoardActionPointClass"*/);
    sub_1C3E564(&StringLiteral_22009/*"mstSelectBonus"*/);
    sub_1C3E564(&StringLiteral_22083/*"mstSvtTransform"*/);
    sub_1C3E564(&StringLiteral_24581/*"userPresentBox"*/);
    sub_1C3E564(&StringLiteral_24558/*"userEventSvtPoint"*/);
    sub_1C3E564(&StringLiteral_24149/*"totalEventPoint"*/);
    sub_1C3E564(&StringLiteral_21774/*"mstCommandCardRankParam"*/);
    sub_1C3E564(&StringLiteral_22119/*"mstWarBoardCommonRelease"*/);
    sub_1C3E564(&StringLiteral_22039/*"mstSvt"*/);
    sub_1C3E564(&StringLiteral_24591/*"userShop"*/);
    sub_1C3E564(&StringLiteral_21800/*"mstEventBoardGameCell"*/);
    sub_1C3E564(&StringLiteral_21859/*"mstEventQuestCooltime"*/);
    sub_1C3E564(&StringLiteral_21901/*"mstFuncTypeDetail"*/);
    sub_1C3E564(&StringLiteral_22036/*"mstStatusEffectPosOverwrite"*/);
    sub_1C3E564(&StringLiteral_19160/*"eventBoostItemUsed"*/);
    sub_1C3E564(&StringLiteral_22014/*"mstShopDetail"*/);
    sub_1C3E564(&StringLiteral_21933/*"mstIndividualityPolicy"*/);
    sub_1C3E564(&StringLiteral_21939/*"mstMapButton"*/);
    sub_1C3E564(&StringLiteral_22146/*"mstWarBoardTacticalTrend"*/);
    sub_1C3E564(&StringLiteral_22038/*"mstSubEquip"*/);
    sub_1C3E564(&StringLiteral_22030/*"mstSpotPath"*/);
    sub_1C3E564(&StringLiteral_22008/*"mstRoadmap"*/);
    sub_1C3E564(&StringLiteral_21769/*"mstCombineMaterial"*/);
    sub_1C3E564(&StringLiteral_21768/*"mstCombineLimitRelease"*/);
    sub_1C3E564(&StringLiteral_22100/*"mstTreasureDeviceLv"*/);
    sub_1C3E564(&StringLiteral_21881/*"mstEventTower"*/);
    sub_1C3E564(&StringLiteral_22019/*"mstSkill"*/);
    sub_1C3E564(&StringLiteral_24576/*"userInterruptionQuest"*/);
    sub_1C3E564(&StringLiteral_22071/*"mstSvtPassiveSkill"*/);
    sub_1C3E564(&StringLiteral_22085/*"mstSvtTreasureDeviceAdd"*/);
    sub_1C3E564(&StringLiteral_21738/*"mstBlankEarthSpotAdd"*/);
    sub_1C3E564(&StringLiteral_24585/*"userQuest"*/);
    sub_1C3E564(&StringLiteral_21842/*"mstEventMissionCondition"*/);
    sub_1C3E564(&StringLiteral_22113/*"mstWarBoardActionPoint"*/);
    sub_1C3E564(&StringLiteral_24560/*"userExternalPaymentStone"*/);
    sub_1C3E564(&StringLiteral_21762/*"mstClosedMessage"*/);
    sub_1C3E564(&StringLiteral_21868/*"mstEventRewardExtra"*/);
    sub_1C3E564(&StringLiteral_21851/*"mstEventPointActivity"*/);
    sub_1C3E564(&StringLiteral_21858/*"mstEventQuest"*/);
    sub_1C3E564(&StringLiteral_21729/*"mstBattleMessageGroup"*/);
    sub_1C3E564(&StringLiteral_24711/*"viewQuestInfo"*/);
    sub_1C3E564(&StringLiteral_22075/*"mstSvtProfilePush"*/);
    sub_1C3E564(&StringLiteral_22099/*"mstTreasureDeviceDetail"*/);
    sub_1C3E564(&StringLiteral_24521/*"userBlacklist"*/);
    sub_1C3E564(&StringLiteral_21824/*"mstEventEquipSkillRelease"*/);
    sub_1C3E564(&StringLiteral_24525/*"userCoinRoom"*/);
    sub_1C3E564(&StringLiteral_21786/*"mstConstantStr"*/);
    sub_1C3E564(&StringLiteral_21823/*"mstEventEquipSkillParts"*/);
    sub_1C3E564(&StringLiteral_21920/*"mstGallery"*/);
    sub_1C3E564(&StringLiteral_24606/*"userSvtGrand"*/);
    sub_1C3E564(&StringLiteral_22037/*"mstStoneShop"*/);
    sub_1C3E564(&StringLiteral_21949/*"mstMapUpdateSchedule"*/);
    sub_1C3E564(&StringLiteral_22094/*"mstTotalLogin"*/);
    sub_1C3E564(&StringLiteral_21962/*"mstOpeningMovie"*/);
    sub_1C3E564(&StringLiteral_21784/*"mstConstant"*/);
    sub_1C3E564(&StringLiteral_21996/*"mstQuestSpotRelease"*/);
    sub_1C3E564(&StringLiteral_21777/*"mstCommandCodeSkill"*/);
    sub_1C3E564(&StringLiteral_21967/*"mstQuest"*/);
    sub_1C3E564(&StringLiteral_22089/*"mstSvtVoicePattern"*/);
    sub_1C3E564(&StringLiteral_21887/*"mstEventTutorialCond"*/);
    sub_1C3E564(&StringLiteral_21736/*"mstBlankEarthGimmickAdd"*/);
    sub_1C3E564(&StringLiteral_22112/*"mstWarBoard"*/);
    sub_1C3E564(&StringLiteral_21862/*"mstEventRaid"*/);
    sub_1C3E564(&StringLiteral_21733/*"mstBgm"*/);
    sub_1C3E564(&StringLiteral_21874/*"mstEventScriptRelease"*/);
    sub_1C3E564(&StringLiteral_24584/*"userProfile"*/);
    sub_1C3E564(&StringLiteral_21841/*"mstEventMissionAdd"*/);
    sub_1C3E564(&StringLiteral_22109/*"mstVoiceRelease"*/);
    sub_1C3E564(&StringLiteral_21985/*"mstQuestRandomGroup"*/);
    sub_1C3E564(&StringLiteral_21957/*"mstMissionNaviTransition"*/);
    sub_1C3E564(&StringLiteral_22016/*"mstShopRelease"*/);
    sub_1C3E564(&StringLiteral_24610/*"userSvtStorage"*/);
    sub_1C3E564(&StringLiteral_21914/*"mstGachaPickupCollateral"*/);
    sub_1C3E564(&StringLiteral_21999/*"mstRecommendAdviceMessage"*/);
    sub_1C3E564(&StringLiteral_22000/*"mstRecommendSupportQuest"*/);
    sub_1C3E564(&StringLiteral_24597/*"userSvtAppendPassiveSkill"*/);
    sub_1C3E564(&StringLiteral_22040/*"mstSvtAdd"*/);
    sub_1C3E564(&StringLiteral_21926/*"mstGrandGraph"*/);
    sub_1C3E564(&StringLiteral_22150/*"mstWarMessage"*/);
    sub_1C3E564(&StringLiteral_21739/*"mstBlankEarthSpotNavimenu"*/);
    sub_1C3E564(&StringLiteral_21727/*"mstBattleMasterImage"*/);
    sub_1C3E564(&StringLiteral_22021/*"mstSkillDetail"*/);
    sub_1C3E564(&StringLiteral_21951/*"mstMasterMission"*/);
    sub_1C3E564(&StringLiteral_22072/*"mstSvtPassiveSkillRelease"*/);
    sub_1C3E564(&StringLiteral_22026/*"mstSpot"*/);
    sub_1C3E564(&StringLiteral_21838/*"mstEventMission"*/);
    sub_1C3E564(&StringLiteral_21771/*"mstCombineQpSvtEquip"*/);
    sub_1C3E564(&StringLiteral_21850/*"mstEventPoint"*/);
    sub_1C3E564(&StringLiteral_21872/*"mstEventRewardSet"*/);
    sub_1C3E564(&StringLiteral_21847/*"mstEventPanelMapDetail"*/);
    sub_1C3E564(&StringLiteral_22046/*"mstSvtCardAdd"*/);
    sub_1C3E564(&StringLiteral_21938/*"mstMap"*/);
    sub_1C3E564(&StringLiteral_21820/*"mstEventDigging"*/);
    sub_1C3E564(&StringLiteral_24566/*"userGacha"*/);
    sub_1C3E564(&StringLiteral_21986/*"mstQuestRelease"*/);
    sub_1C3E564(&StringLiteral_21819/*"mstEventDetail"*/);
    sub_1C3E564(&StringLiteral_21931/*"mstImagePartsGroup"*/);
    sub_1C3E564(&StringLiteral_21948/*"mstMapLayer"*/);
    sub_1C3E564(&StringLiteral_22123/*"mstWarBoardFutureActionTrend"*/);
    sub_1C3E564(&StringLiteral_22024/*"mstSkillIndividuality"*/);
    sub_1C3E564(&StringLiteral_21745/*"mstBoxGachaBaseDetail"*/);
    sub_1C3E564(&StringLiteral_24027/*"tblFriend"*/);
    sub_1C3E564(&StringLiteral_17142/*"beforeBirthDay"*/);
    sub_1C3E564(&StringLiteral_21836/*"mstEventItemDisplayRelease"*/);
    sub_1C3E564(&StringLiteral_21922/*"mstGalleryResource"*/);
    sub_1C3E564(&StringLiteral_17068/*"battle"*/);
    sub_1C3E564(&StringLiteral_22015/*"mstShopGroup"*/);
    sub_1C3E564(&StringLiteral_21720/*"mstAttriRelation"*/);
    sub_1C3E564(&StringLiteral_24526/*"userCommandCode"*/);
    sub_1C3E564(&StringLiteral_21811/*"mstEventCampaignRelease"*/);
    sub_1C3E564(&StringLiteral_22057/*"mstSvtFilter"*/);
    sub_1C3E564(&StringLiteral_21984/*"mstQuestRacePoint"*/);
    sub_1C3E564(&StringLiteral_21885/*"mstEventTradeStore"*/);
    sub_1C3E564(&StringLiteral_22518/*"otherUserGame"*/);
    sub_1C3E564(&StringLiteral_21731/*"mstBattlePointPhase"*/);
    sub_1C3E564(&StringLiteral_21835/*"mstEventItemDisplayGroup"*/);
    sub_1C3E564(&StringLiteral_21751/*"mstCard"*/);
    sub_1C3E564(&StringLiteral_21735/*"mstBlankEarthGimmick"*/);
    sub_1C3E564(&StringLiteral_21728/*"mstBattleMessage"*/);
    sub_1C3E564(&StringLiteral_22006/*"mstRestrictionSlotDetail"*/);
    sub_1C3E564(&StringLiteral_21724/*"mstBanner"*/);
    sub_1C3E564(&StringLiteral_21792/*"mstEnemyMasterBattle"*/);
    sub_1C3E564(&StringLiteral_21834/*"mstEventItemDisplay"*/);
    sub_1C3E564(&StringLiteral_21750/*"mstCampaignInfo"*/);
    sub_1C3E564(&StringLiteral_22084/*"mstSvtTreasureDevice"*/);
    sub_1C3E564(&StringLiteral_22082/*"mstSvtSkillRelease"*/);
    sub_1C3E564(&StringLiteral_21965/*"mstPhotoFrame"*/);
    sub_1C3E564(&StringLiteral_21783/*"mstCompleteMission"*/);
    sub_1C3E564(&StringLiteral_21766/*"mstCombineLimit"*/);
    sub_1C3E564(&StringLiteral_21927/*"mstGrandGraphDetail"*/);
    sub_1C3E564(&StringLiteral_21743/*"mstBoxGacha"*/);
    sub_1C3E564(&StringLiteral_22106/*"mstVoiceMaterialCond"*/);
    sub_1C3E564(&StringLiteral_21903/*"mstGachaAdjustAdd"*/);
    sub_1C3E564(&StringLiteral_21917/*"mstGachaStoryAdjust"*/);
    sub_1C3E564(&StringLiteral_22102/*"mstUserExp"*/);
    sub_1C3E564(&StringLiteral_21892/*"mstExcludeMotionCond"*/);
    sub_1C3E564(&StringLiteral_22125/*"mstWarBoardItem"*/);
    sub_1C3E564(&StringLiteral_21794/*"mstEquipAdd"*/);
    sub_1C3E564(&StringLiteral_21788/*"mstDialogMessage"*/);
    sub_1C3E564(&StringLiteral_22346/*"npcSvtFollower"*/);
    sub_1C3E564(&StringLiteral_21726/*"mstBattleBg"*/);
    sub_1C3E564(&StringLiteral_21755/*"mstClassBoardClass"*/);
    sub_1C3E564(&StringLiteral_24551/*"userEventPoint"*/);
    sub_1C3E564(&StringLiteral_22047/*"mstSvtChange"*/);
    sub_1C3E564(&StringLiteral_22124/*"mstWarBoardIndividualityClass"*/);
    sub_1C3E564(&StringLiteral_21905/*"mstGachaBaseCollateral"*/);
    sub_1C3E564(&StringLiteral_21982/*"mstQuestPhasePresent"*/);
    sub_1C3E564(&StringLiteral_22017/*"mstShopReset"*/);
    sub_1C3E564(&StringLiteral_21845/*"mstEventMural"*/);
    sub_1C3E564(&StringLiteral_21913/*"mstGachaPickup"*/);
    sub_1C3E564(&StringLiteral_21936/*"mstItemSelect"*/);
    sub_1C3E564(&StringLiteral_22061/*"mstSvtIndividuality"*/);
    sub_1C3E564(&StringLiteral_24537/*"userEvent"*/);
    sub_1C3E564(&StringLiteral_22147/*"mstWarBoardTreasure"*/);
    sub_1C3E564(&StringLiteral_22066/*"mstSvtLvDetail"*/);
    sub_1C3E564(&StringLiteral_22132/*"mstWarBoardRatingOffset"*/);
    sub_1C3E564(&StringLiteral_21979/*"mstQuestPhaseDetail"*/);
    sub_1C3E564(&StringLiteral_22013/*"mstShopAction"*/);
    sub_1C3E564(&StringLiteral_21958/*"mstMyroomAdd"*/);
    sub_1C3E564(&StringLiteral_21879/*"mstEventSvtFatigue"*/);
    sub_1C3E564(&StringLiteral_21827/*"mstEventFactory"*/);
    sub_1C3E564(&StringLiteral_24567/*"userGachaDrawHistory"*/);
    sub_1C3E564(&StringLiteral_24562/*"userFollower"*/);
    sub_1C3E564(&StringLiteral_22133/*"mstWarBoardRatingOffsetGroup"*/);
    sub_1C3E564(&StringLiteral_24599/*"userSvtCoin"*/);
    sub_1C3E564(&StringLiteral_21873/*"mstEventScript"*/);
    sub_1C3E564(&StringLiteral_22080/*"mstSvtSkill"*/);
    sub_1C3E564(&StringLiteral_22029/*"mstSpotLayer"*/);
    sub_1C3E564(&StringLiteral_24601/*"userSvtCommandCard"*/);
    sub_1C3E564(&StringLiteral_24586/*"userQuestInfo"*/);
    sub_1C3E564(&StringLiteral_21789/*"mstEffect"*/);
    sub_1C3E564(&StringLiteral_21934/*"mstItem"*/);
    sub_1C3E564(&StringLiteral_22010/*"mstSelectBonusBase"*/);
    sub_1C3E564(&StringLiteral_21854/*"mstEventPointGroupAdd"*/);
    sub_1C3E564(&StringLiteral_21977/*"mstQuestMessage"*/);
    sub_1C3E564(&StringLiteral_22341/*"npcFollowerRelease"*/);
    sub_1C3E564(&StringLiteral_21898/*"mstFuncCategory"*/);
    sub_1C3E564(&StringLiteral_22126/*"mstWarBoardMessage"*/);
    sub_1C3E564(&StringLiteral_24571/*"userGame"*/);
    sub_1C3E564(&StringLiteral_21923/*"mstGift"*/);
    sub_1C3E564(&StringLiteral_22134/*"mstWarBoardReinforcements"*/);
    sub_1C3E564(&StringLiteral_21801/*"mstEventBoardGameToken"*/);
    sub_1C3E564(&StringLiteral_21943/*"mstMapGimmickLayer"*/);
    sub_1C3E564(&StringLiteral_22050/*"mstSvtCommandCodeUnlock"*/);
    sub_1C3E564(&StringLiteral_21718/*"mstAssist"*/);
    sub_1C3E564(&StringLiteral_24712/*"viewWaveEnemy"*/);
    sub_1C3E564(&StringLiteral_22345/*"npcSvtEquip"*/);
    sub_1C3E564(&StringLiteral_21993/*"mstQuestScriptMaterialNext"*/);
    sub_1C3E564(&StringLiteral_22056/*"mstSvtExp"*/);
    sub_1C3E564(&StringLiteral_24596/*"userSvt"*/);
    sub_1C3E564(&StringLiteral_24708/*"viewEnemy"*/);
    sub_1C3E564(&StringLiteral_21889/*"mstEventUiRelease"*/);
    sub_1C3E564(&StringLiteral_24150/*"totalEventRace"*/);
    sub_1C3E564(&StringLiteral_21893/*"mstFieldMotion"*/);
    sub_1C3E564(&StringLiteral_21863/*"mstEventRandomMission"*/);
    sub_1C3E564(&StringLiteral_21870/*"mstEventRewardScene"*/);
    sub_1C3E564(&StringLiteral_21896/*"mstFriendshipSvt"*/);
    sub_1C3E564(&StringLiteral_21932/*"mstIndividualityPersonality"*/);
    sub_1C3E564(&StringLiteral_21765/*"mstCombineCostume"*/);
    sub_1C3E564(&StringLiteral_21764/*"mstCombineAppendPassiveSkill"*/);
    sub_1C3E564(&StringLiteral_21822/*"mstEventDiggingReward"*/);
    sub_1C3E564(&StringLiteral_22115/*"mstWarBoardActionTrend"*/);
    sub_1C3E564(&StringLiteral_21732/*"mstBattleScript"*/);
    sub_1C3E564(&StringLiteral_21904/*"mstGachaAppend"*/);
    sub_1C3E564(&StringLiteral_22137/*"mstWarBoardSquareIndexGroup"*/);
    sub_1C3E564(&StringLiteral_21897/*"mstFunc"*/);
    sub_1C3E564(&StringLiteral_21815/*"mstEventConquestReward"*/);
    sub_1C3E564(&StringLiteral_22120/*"mstWarBoardEffect"*/);
    sub_1C3E564(&StringLiteral_22151/*"mstWarQuestSelection"*/);
    sub_1C3E564(&StringLiteral_24531/*"userDeck"*/);
    sub_1C3E564(&StringLiteral_21952/*"mstMasterMissionDisplayInfo"*/);
    sub_1C3E564(&StringLiteral_22148/*"mstWarGroup"*/);
    sub_1C3E564(&StringLiteral_22012/*"mstShop"*/);
    sub_1C3E564(&StringLiteral_22129/*"mstWarBoardPartySkill"*/);
    sub_1C3E564(&StringLiteral_24546/*"userEventItemLinkSvt"*/);
    sub_1C3E564(&StringLiteral_21852/*"mstEventPointBuff"*/);
    sub_1C3E564(&StringLiteral_21973/*"mstQuestExtension"*/);
    sub_1C3E564(&StringLiteral_24595/*"userSupportDeck"*/);
    sub_1C3E564(&StringLiteral_22031/*"mstSpotRoad"*/);
    sub_1C3E564(&StringLiteral_22090/*"mstSvtVoiceRelation"*/);
    sub_1C3E564(&StringLiteral_21767/*"mstCombineLimitGift"*/);
    sub_1C3E564(&StringLiteral_21816/*"mstEventCooltimeReward"*/);
    sub_1C3E564(&StringLiteral_21808/*"mstEventBulletinBoard"*/);
    sub_1C3E564(&StringLiteral_21867/*"mstEventRewardBg"*/);
    sub_1C3E564(&StringLiteral_21746/*"mstBoxGachaTalk"*/);
    sub_1C3E564(&StringLiteral_24580/*"userPaymentLimit"*/);
    sub_1C3E564(&StringLiteral_21899/*"mstFuncDisp"*/);
    sub_1C3E564(&StringLiteral_22077/*"mstSvtScript"*/);
    sub_1C3E564(&StringLiteral_21940/*"mstMapCond"*/);
    sub_1C3E564(&StringLiteral_21959/*"mstMyroomAddBgDiff"*/);
    sub_1C3E564(&StringLiteral_24545/*"userEventFortification"*/);
    sub_1C3E564(&StringLiteral_22128/*"mstWarBoardOnboardSkill"*/);
    sub_1C3E564(&StringLiteral_21911/*"mstGachaGroup"*/);
    sub_1C3E564(&StringLiteral_24710/*"viewQuestEnemyInfo"*/);
    sub_1C3E564(&StringLiteral_24520/*"userAccountLinkage"*/);
    sub_1C3E564(&StringLiteral_22051/*"mstSvtComment"*/);
    sub_1C3E564(&StringLiteral_22098/*"mstTreasureDevice"*/);
    sub_1C3E564(&StringLiteral_24709/*"viewGachaFeaturedSvt"*/);
    sub_1C3E564(&StringLiteral_24579/*"userNpcSvtRecord"*/);
    sub_1C3E564(&StringLiteral_21730/*"mstBattlePoint"*/);
    sub_1C3E564(&StringLiteral_21844/*"mstEventMissionGroup"*/);
    sub_1C3E564(&StringLiteral_24587/*"userQuestRecord"*/);
    sub_1C3E564(&StringLiteral_22004/*"mstRestrictionMessage"*/);
    sub_1C3E564(&StringLiteral_21925/*"mstGiftDetail"*/);
    sub_1C3E564(&StringLiteral_21919/*"mstGachaTicket"*/);
    sub_1C3E564(&StringLiteral_22073/*"mstSvtPhoto"*/);
    sub_1C3E564(&StringLiteral_22712/*"pickupUserFollower"*/);
    sub_1C3E564(&StringLiteral_21875/*"mstEventStatus"*/);
    sub_1C3E564(&StringLiteral_22052/*"mstSvtCommentAdd"*/);
    sub_1C3E564(&StringLiteral_22070/*"mstSvtOverwrite"*/);
    sub_1C3E564(&StringLiteral_22340/*"npcFollower"*/);
    sub_1C3E564(&StringLiteral_21814/*"mstEventCommandAssist"*/);
    sub_1C3E564(&StringLiteral_19172/*"eventSvtFatigue"*/);
    sub_1C3E564(&StringLiteral_21908/*"mstGachaBonusSelectLineup"*/);
    sub_1C3E564(&StringLiteral_21809/*"mstEventBulletinBoardRelease"*/);
    sub_1C3E564(&StringLiteral_22055/*"mstSvtExceed"*/);
    sub_1C3E564(&StringLiteral_22065/*"mstSvtLimitSpoilerProtection"*/);
    sub_1C3E564(&StringLiteral_22088/*"mstSvtVoice"*/);
    sub_1C3E564(&StringLiteral_22007/*"mstRestrictionWhole"*/);
    sub_1C3E564(&StringLiteral_24569/*"userGachaExtraCount"*/);
    sub_1C3E564(&StringLiteral_21945/*"mstMapGimmickPath"*/);
    sub_1C3E564(&StringLiteral_21882/*"mstEventTowerReward"*/);
    sub_1C3E564(&StringLiteral_21761/*"mstClassRelationOverwrite"*/);
    sub_1C3E564(&StringLiteral_21713/*"mstAi"*/);
    sub_1C3E564(&StringLiteral_24522/*"userBoxGacha"*/);
    sub_1C3E564(&StringLiteral_22045/*"mstSvtCard"*/);
    sub_1C3E564(&StringLiteral_24570/*"userGachaPickupCollateral"*/);
    sub_1C3E564(&StringLiteral_24568/*"userGachaDrawLog"*/);
    sub_1C3E564(&StringLiteral_22138/*"mstWarBoardStage"*/);
    sub_1C3E564(&StringLiteral_24535/*"userEquip"*/);
    sub_1C3E564(&StringLiteral_21869/*"mstEventRewardGuideRelease"*/);
    sub_1C3E564(&StringLiteral_21756/*"mstClassBoardCommandSpell"*/);
    sub_1C3E564(&StringLiteral_21950/*"mstMasterIndividualitySelect"*/);
    sub_1C3E564(&StringLiteral_22152/*"mstWarRelease"*/);
    sub_1C3E564(&StringLiteral_21906/*"mstGachaBehavior"*/);
    sub_1C3E564(&StringLiteral_22110/*"mstWar"*/);
    sub_1C3E564(&StringLiteral_21803/*"mstEventBonusFilter"*/);
    sub_1C3E564(&StringLiteral_21995/*"mstQuestScriptRelease"*/);
    sub_1C3E564(&StringLiteral_24547/*"userEventMap"*/);
    sub_1C3E564(&StringLiteral_21849/*"mstEventPanelSpot"*/);
    sub_1C3E564(&StringLiteral_21753/*"mstClass"*/);
    sub_1C3E564(&StringLiteral_24519/*"userAccessary"*/);
    sub_1C3E564(&StringLiteral_22063/*"mstSvtLimitAdd"*/);
    sub_1C3E564(&StringLiteral_21994/*"mstQuestScriptMaterialOverwrite"*/);
    sub_1C3E564(&StringLiteral_18139/*"combineExp"*/);
    sub_1C3E564(&StringLiteral_24563/*"userFormation"*/);
    sub_1C3E564(&StringLiteral_22127/*"mstWarBoardMessageScript"*/);
    sub_1C3E564(&StringLiteral_21857/*"mstEventProgressValue"*/);
    sub_1C3E564(&StringLiteral_24611/*"userSvtVoicePlayed"*/);
    sub_1C3E564(&StringLiteral_22044/*"mstSvtBattlePoint"*/);
    sub_1C3E564(&StringLiteral_22058/*"mstSvtFlag"*/);
    sub_1C3E564(&StringLiteral_21740/*"mstBoardMessage"*/);
    sub_1C3E564(&StringLiteral_21848/*"mstEventPanelScan"*/);
    sub_1C3E564(&StringLiteral_22064/*"mstSvtLimitImage"*/);
    sub_1C3E564(&StringLiteral_21821/*"mstEventDiggingBlock"*/);
    sub_1C3E564(&StringLiteral_24555/*"userEventRandomMission"*/);
    sub_1C3E564(&StringLiteral_21716/*"mstArea"*/);
    sub_1C3E564(&StringLiteral_24151/*"totalEventRaid"*/);
    sub_1C3E564(&StringLiteral_22322/*"notEndEventMissionFix"*/);
    sub_1C3E564(&StringLiteral_22018/*"mstShopScript"*/);
    sub_1C3E564(&StringLiteral_24548/*"userEventMission"*/);
    sub_1C3E564(&StringLiteral_21953/*"mstMasterPhoto"*/);
    sub_1C3E564(&StringLiteral_21840/*"mstEventMissionActionAdd"*/);
    sub_1C3E564(&StringLiteral_21773/*"mstCombineTd"*/);
    sub_1C3E564(&StringLiteral_24605/*"userSvtFirstGetTime"*/);
    sub_1C3E564(&StringLiteral_21742/*"mstBoost"*/);
    sub_1C3E564(&StringLiteral_22078/*"mstSvtScriptAdd"*/);
    sub_1C3E564(&StringLiteral_21744/*"mstBoxGachaBase"*/);
    sub_1C3E564(&StringLiteral_21725/*"mstBannerAdd"*/);
    sub_1C3E564(&StringLiteral_21711/*"mstAccessary"*/);
    sub_1C3E564(&StringLiteral_22101/*"mstTreasureDeviceSequenceWeight"*/);
    sub_1C3E564(&StringLiteral_24553/*"userEventRace"*/);
    sub_1C3E564(&StringLiteral_21974/*"mstQuestGroup"*/);
    sub_1C3E564(&StringLiteral_21856/*"mstEventPointUpperRelease"*/);
    sub_1C3E564(&StringLiteral_24609/*"userSvtLeader"*/);
    sub_1C3E564(&StringLiteral_22062/*"mstSvtLimit"*/);
    sub_1C3E564(&StringLiteral_24561/*"userFollow"*/);
    sub_1C3E564(&StringLiteral_21837/*"mstEventLocationCampaign"*/);
    sub_1C3E564(&StringLiteral_21770/*"mstCombineQp"*/);
    sub_1C3E564(&StringLiteral_21798/*"mstEvent"*/);
    sub_1C3E564(&StringLiteral_22059/*"mstSvtFlagRelease"*/);
    sub_1C3E564(&StringLiteral_24564/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_1C3E564(&StringLiteral_24583/*"userPrivilege"*/);
    sub_1C3E564(&StringLiteral_21775/*"mstCommandCode"*/);
    sub_1C3E564(&StringLiteral_22042/*"mstSvtAppendPassiveSkill"*/);
    sub_1C3E564(&StringLiteral_21833/*"mstEventGroup"*/);
    sub_1C3E564(&StringLiteral_21907/*"mstGachaBonusSelect"*/);
    sub_1C3E564(&StringLiteral_24539/*"userEventBoardGameToken"*/);
    sub_1C3E564(&StringLiteral_21955/*"mstMissionItemDisplay"*/);
    sub_1C3E564(&StringLiteral_21960/*"mstMyroomSvtSpecialImage"*/);
    sub_1C3E564(&StringLiteral_22135/*"mstWarBoardRoad"*/);
    sub_1C3E564(&StringLiteral_21747/*"mstBuff"*/);
    sub_1C3E564(&StringLiteral_24765/*"warBoardData"*/);
    sub_1C3E564(&StringLiteral_21930/*"mstIllustrator"*/);
    sub_1C3E564(&StringLiteral_24146/*"totalBoxGacha"*/);
    sub_1C3E564(&StringLiteral_22076/*"mstSvtRarity"*/);
    sub_1C3E564(&StringLiteral_22111/*"mstWarAdd"*/);
    sub_1C3E564(&StringLiteral_21946/*"mstMapGimmickPathRelease"*/);
    sub_1C3E564(&StringLiteral_24565/*"userFriendRequestHistory"*/);
    sub_1C3E564(&StringLiteral_24517/*"user"*/);
    sub_1C3E564(&StringLiteral_17381/*"boxGachaHistory"*/);
    sub_1C3E564(&StringLiteral_21900/*"mstFuncGroup"*/);
    sub_1C3E564(&StringLiteral_21780/*"mstCommonConsume"*/);
    sub_1C3E564(&StringLiteral_22122/*"mstWarBoardEventScript"*/);
    sub_1C3E564(&StringLiteral_21924/*"mstGiftAdd"*/);
    sub_1C3E564(&StringLiteral_21888/*"mstEventUi"*/);
    sub_1C3E564(&StringLiteral_22028/*"mstSpotImage"*/);
    sub_1C3E564(&StringLiteral_22054/*"mstSvtCostumeRelease"*/);
    sub_1C3E564(&StringLiteral_24524/*"userClassStatistics"*/);
    sub_1C3E564(&StringLiteral_21941/*"mstMapGimmick"*/);
    sub_1C3E564(&StringLiteral_21981/*"mstQuestPhaseIndividuality"*/);
    sub_1C3E564(&StringLiteral_21886/*"mstEventTutorial"*/);
    sub_1C3E564(&StringLiteral_22149/*"mstWarGroupIgnore"*/);
    sub_1C3E564(&StringLiteral_22145/*"mstWarBoardStageWall"*/);
    sub_1C3E564(&StringLiteral_24559/*"userEventTrade"*/);
    sub_1C3E564(&StringLiteral_21715/*"mstAiField"*/);
    sub_1C3E564(&StringLiteral_21894/*"mstFriendPointGachaAdjust"*/);
    sub_1C3E564(&StringLiteral_22087/*"mstSvtTreasureDeviceRelease"*/);
    sub_1C3E564(&StringLiteral_21978/*"mstQuestPhase"*/);
    sub_1C3E564(&StringLiteral_24541/*"userEventDataLost"*/);
    sub_1C3E564(&StringLiteral_22043/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_1C3E564(&StringLiteral_22086/*"mstSvtTreasureDeviceDamage"*/);
    sub_1C3E564(&StringLiteral_22034/*"mstStage"*/);
    sub_1C3E564(&StringLiteral_21763/*"mstCombine"*/);
    sub_1C3E564(&StringLiteral_21810/*"mstEventCampaign"*/);
    sub_1C3E564(&StringLiteral_22142/*"mstWarBoardStageNpc"*/);
    sub_1C3E564(&StringLiteral_22680/*"paymentHistory"*/);
    sub_1C3E564(&StringLiteral_19338/*"exchangeSvt"*/);
    sub_1C3E564(&StringLiteral_22035/*"mstStageRemap"*/);
    sub_1C3E564(&StringLiteral_22002/*"mstRestriction"*/);
    sub_1C3E564(&StringLiteral_21991/*"mstQuestScript"*/);
    sub_1C3E564(&StringLiteral_21871/*"mstEventRewardSceneRelease"*/);
    sub_1C3E564(&StringLiteral_22105/*"mstVoiceCond"*/);
    sub_1C3E564(&StringLiteral_24594/*"userSubEquip"*/);
    sub_1C3E564(&StringLiteral_21864/*"mstEventRecipe"*/);
    sub_1C3E564(&StringLiteral_22053/*"mstSvtCostume"*/);
    sub_1C3E564(&StringLiteral_22074/*"mstSvtProfile"*/);
    sub_1C3E564(&StringLiteral_21782/*"mstCommonRestriction"*/);
    sub_1C3E564(&StringLiteral_24573/*"userHeelPortrait"*/);
    sub_1C3E564(&StringLiteral_22023/*"mstSkillGroupOverwrite"*/);
    sub_1C3E564(&StringLiteral_24527/*"userCommandCodeCollection"*/);
    sub_1C3E564(&StringLiteral_21778/*"mstCommandCodeSkillRelease"*/);
    sub_1C3E564(&StringLiteral_21790/*"mstEffectMovie"*/);
    sub_1C3E564(&StringLiteral_21983/*"mstQuestPickup"*/);
    sub_1C3E564(&StringLiteral_22141/*"mstWarBoardStageLayout"*/);
    sub_1C3E564(&StringLiteral_22116/*"mstWarBoardActionTrendCond"*/);
    sub_1C3E564(&StringLiteral_21812/*"mstEventCombine"*/);
    sub_1C3E564(&StringLiteral_22130/*"mstWarBoardQuest"*/);
    sub_1C3E564(&StringLiteral_21971/*"mstQuestConsumeItem"*/);
    sub_1C3E564(&StringLiteral_21980/*"mstQuestPhaseDetailAdd"*/);
    sub_1C3E564(&StringLiteral_21929/*"mstHeelPortrait"*/);
    sub_1C3E564(&StringLiteral_19339/*"exchangeSvtCoinGivenNum"*/);
    sub_1C3E564(&StringLiteral_24582/*"userPresentHistory"*/);
    sub_1C3E564(&StringLiteral_21752/*"mstChaldeaGatePickup"*/);
    sub_1C3E564(&StringLiteral_22131/*"mstWarBoardRatingBase"*/);
    sub_1C3E564(&StringLiteral_21912/*"mstGachaImage"*/);
    sub_1C3E564(&StringLiteral_21796/*"mstEquipImage"*/);
    sub_1C3E564(&StringLiteral_24554/*"userEventRaid"*/);
    sub_1C3E564(&StringLiteral_22049/*"mstSvtCollection"*/);
    sub_1C3E564(&StringLiteral_19709/*"friendshipQuestDialogInfo"*/);
    sub_1C3E564(&StringLiteral_21961/*"mstNews"*/);
    sub_1C3E564(&StringLiteral_21902/*"mstGacha"*/);
    sub_1C3E564(&StringLiteral_22022/*"mstSkillGroup"*/);
    sub_1C3E564(&StringLiteral_21928/*"mstGuide"*/);
    sub_1C3E564(&StringLiteral_21915/*"mstGachaPickupCollateralGroup"*/);
    sub_1C3E564(&StringLiteral_21758/*"mstClassBoardLock"*/);
    sub_1C3E564(&StringLiteral_21855/*"mstEventPointUpper"*/);
    sub_1C3E564(&StringLiteral_21737/*"mstBlankEarthSpot"*/);
    sub_1C3E564(&StringLiteral_22092/*"mstTerminalOverwrite"*/);
    sub_1C3E564(&StringLiteral_21797/*"mstEquipSkill"*/);
    sub_1C3E564(&StringLiteral_21890/*"mstEventUiValue"*/);
    sub_1C3E564(&StringLiteral_24529/*"userContinue"*/);
    sub_1C3E564(&StringLiteral_21968/*"mstQuestAdd"*/);
    sub_1C3E564(&StringLiteral_21757/*"mstClassBoardLine"*/);
    sub_1C3E564(&StringLiteral_24460/*"updateProfileDialogInfo"*/);
    sub_1C3E564(&StringLiteral_22103/*"mstVoice"*/);
    sub_1C3E564(&StringLiteral_24549/*"userEventMissionConditionDetail"*/);
    sub_1C3E564(&StringLiteral_21717/*"mstAssetbundleKey"*/);
    sub_1C3E564(&StringLiteral_21846/*"mstEventPanelMap"*/);
    sub_1C3E564(&StringLiteral_24578/*"userLogin"*/);
    sub_1C3E564(&StringLiteral_21937/*"mstLoginQuest"*/);
    sub_1C3E564(&StringLiteral_21963/*"mstPartialMaintenance"*/);
    sub_1C3E564(&StringLiteral_24556/*"userEventSpot"*/);
    sub_1C3E564(&StringLiteral_21866/*"mstEventReward"*/);
    sub_1C3E564(&StringLiteral_21818/*"mstEventDataLostBattleReset"*/);
    sub_1C3E564(&StringLiteral_21719/*"mstAttri"*/);
    sub_1C3E564(&StringLiteral_22140/*"mstWarBoardStageDetail"*/);
    sub_1C3E564(&StringLiteral_22081/*"mstSvtSkillAdd"*/);
    sub_1C3E564(&StringLiteral_24552/*"userEventQuestCooltime"*/);
    sub_1C3E564(&StringLiteral_21992/*"mstQuestScriptBranchMaterial"*/);
    sub_1C3E564(&StringLiteral_21828/*"mstEventFatigueRecovery"*/);
    sub_1C3E564(&StringLiteral_22118/*"mstWarBoardAi"*/);
    sub_1C3E564(&StringLiteral_22097/*"mstTreasureBoxTalk"*/);
    sub_1C3E564(&StringLiteral_22121/*"mstWarBoardEvent"*/);
    sub_1C3E564(&StringLiteral_22107/*"mstVoicePlayCond"*/);
    sub_1C3E564(&StringLiteral_21909/*"mstGachaDetail"*/);
    sub_1C3E564(&StringLiteral_21877/*"mstEventSuperBoss"*/);
    sub_1C3E564(&StringLiteral_22020/*"mstSkillAdd"*/);
    byte_4C55C1C = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_343EDFC *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1C3E7C0(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_22039/*"mstSvt"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_22051/*"mstSvtComment"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_22074/*"mstSvtProfile"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_22110/*"mstWar"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_17068/*"battle"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_22098/*"mstTreasureDevice"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_22062/*"mstSvtLimit"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_22084/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_21753/*"mstClass"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_22077/*"mstSvtScript"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_22045/*"mstSvtCard"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_22080/*"mstSvtSkill"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_22071/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_24596/*"userSvt"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_24610/*"userSvtStorage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_22034/*"mstStage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_22060/*"mstSvtGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_21737/*"mstBlankEarthSpot"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_21738/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_22026/*"mstSpot"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_22028/*"mstSpotImage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_22031/*"mstSpotRoad"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_21941/*"mstMapGimmick"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_21923/*"mstGift"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_21924/*"mstGiftAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_22038/*"mstSubEquip"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_24517/*"user"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_24571/*"userGame"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_24531/*"userDeck"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_24600/*"userSvtCollection"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_21895/*"mstFriendship"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_21902/*"mstGacha"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_21912/*"mstGachaImage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_24566/*"userGacha"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_24570/*"userGachaPickupCollateral"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24577/*"userItem"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_21934/*"mstItem"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_21919/*"mstGachaTicket"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_21903/*"mstGachaAdjustAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_21913/*"mstGachaPickup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_21894/*"mstFriendPointGachaAdjust"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_21905/*"mstGachaBaseCollateral"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_21711/*"mstAccessary"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_24519/*"userAccessary"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_24594/*"userSubEquip"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_24028/*"tblUserGame"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_22012/*"mstShop"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_22037/*"mstStoneShop"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_21723/*"mstBankShop"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_22018/*"mstShopScript"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_21793/*"mstEquip"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_21795/*"mstEquipExp"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_21797/*"mstEquipSkill"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_24535/*"userEquip"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_24563/*"userFormation"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_22019/*"mstSkill"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_22025/*"mstSkillLv"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_22021/*"mstSkillDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_21897/*"mstFunc"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_21747/*"mstBuff"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_21916/*"mstGachaRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_24585/*"userQuest"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_24586/*"userQuestInfo"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_24587/*"userQuestRecord"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_22102/*"mstUserExp"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_21961/*"mstNews"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_22091/*"mstTelop"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_22518/*"otherUserGame"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_24027/*"tblFriend"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_24581/*"userPresentBox"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_21798/*"mstEvent"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_21967/*"mstQuest"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_21968/*"mstQuestAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_21986/*"mstQuestRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_21978/*"mstQuestPhase"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_21979/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_21974/*"mstQuestGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_21985/*"mstQuestRandomGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_21971/*"mstQuestConsumeItem"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_21977/*"mstQuestMessage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_24711/*"viewQuestInfo"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_24708/*"viewEnemy"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_24710/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_21716/*"mstArea"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_21733/*"mstBgm"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_21858/*"mstEventQuest"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_21810/*"mstEventCampaign"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_21770/*"mstCombineQp"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_21769/*"mstCombineMaterial"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_21812/*"mstEventCombine"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_22056/*"mstSvtExp"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_21772/*"mstCombineSkill"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_21773/*"mstCombineTd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_21930/*"mstIllustrator"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_21787/*"mstCv"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_22100/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_22099/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_24562/*"userFollower"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_22340/*"npcFollower"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_22346/*"npcSvtFollower"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_24537/*"userEvent"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_24584/*"userProfile"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_24591/*"userShop"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_24529/*"userContinue"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_21784/*"mstConstant"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_21785/*"mstConstantLong"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_21786/*"mstConstantStr"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_21779/*"mstCommandSpell"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_21713/*"mstAi"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_21714/*"mstAiAct"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_22088/*"mstSvtVoice"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_21720/*"mstAttriRelation"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_21760/*"mstClassRelation"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_21789/*"mstEffect"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_21796/*"mstEquipImage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_21766/*"mstCombineLimit"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_21751/*"mstCard"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_21771/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_22063/*"mstSvtLimitAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_22076/*"mstSvtRarity"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_22011/*"mstSetItem"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_22001/*"mstRecover"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_21724/*"mstBanner"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_22016/*"mstShopRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_21866/*"mstEventReward"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_21819/*"mstEventDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_21878/*"mstEventSvt"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_21743/*"mstBoxGacha"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_21744/*"mstBoxGachaBase"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_21746/*"mstBoxGachaTalk"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_24522/*"userBoxGacha"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17381/*"boxGachaHistory"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_21726/*"mstBattleBg"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_22093/*"mstTips"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_24578/*"userLogin"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_22103/*"mstVoice"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_21868/*"mstEventRewardExtra"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_21838/*"mstEventMission"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_21842/*"mstEventMissionCondition"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    140,
    (Il2CppObject *)StringLiteral_21843/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    141,
    (Il2CppObject *)StringLiteral_21839/*"mstEventMissionAction"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    142,
    (Il2CppObject *)StringLiteral_21840/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    145,
    (Il2CppObject *)StringLiteral_21783/*"mstCompleteMission"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    143,
    (Il2CppObject *)StringLiteral_21841/*"mstEventMissionAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    144,
    (Il2CppObject *)StringLiteral_21872/*"mstEventRewardSet"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    146,
    (Il2CppObject *)StringLiteral_24548/*"userEventMission"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    147,
    (Il2CppObject *)StringLiteral_24549/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    148,
    (Il2CppObject *)StringLiteral_21745/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    149,
    (Il2CppObject *)StringLiteral_21762/*"mstClosedMessage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    150,
    (Il2CppObject *)StringLiteral_24609/*"userSvtLeader"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    151,
    (Il2CppObject *)StringLiteral_21900/*"mstFuncGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    152,
    (Il2CppObject *)StringLiteral_21862/*"mstEventRaid"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    153,
    (Il2CppObject *)StringLiteral_24151/*"totalEventRaid"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    154,
    (Il2CppObject *)StringLiteral_24554/*"userEventRaid"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    155,
    (Il2CppObject *)StringLiteral_21850/*"mstEventPoint"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    156,
    (Il2CppObject *)StringLiteral_21853/*"mstEventPointGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    157,
    (Il2CppObject *)StringLiteral_24149/*"totalEventPoint"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    158,
    (Il2CppObject *)StringLiteral_24551/*"userEventPoint"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    159,
    (Il2CppObject *)StringLiteral_24582/*"userPresentHistory"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    160,
    (Il2CppObject *)StringLiteral_21951/*"mstMasterMission"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    161,
    (Il2CppObject *)StringLiteral_22055/*"mstSvtExceed"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    162,
    (Il2CppObject *)StringLiteral_21963/*"mstPartialMaintenance"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    163,
    (Il2CppObject *)StringLiteral_21928/*"mstGuide"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    164,
    (Il2CppObject *)StringLiteral_21952/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    165,
    (Il2CppObject *)StringLiteral_21911/*"mstGachaGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    166,
    (Il2CppObject *)StringLiteral_21988/*"mstQuestReset"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    167,
    (Il2CppObject *)StringLiteral_22111/*"mstWarAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    168,
    (Il2CppObject *)StringLiteral_21834/*"mstEventItemDisplay"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    169,
    (Il2CppObject *)StringLiteral_21835/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    170,
    (Il2CppObject *)StringLiteral_21836/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    171,
    (Il2CppObject *)StringLiteral_21886/*"mstEventTutorial"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    172,
    (Il2CppObject *)StringLiteral_21887/*"mstEventTutorialCond"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    173,
    (Il2CppObject *)StringLiteral_22109/*"mstVoiceRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    174,
    (Il2CppObject *)StringLiteral_21877/*"mstEventSuperBoss"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    175,
    (Il2CppObject *)StringLiteral_24557/*"userEventSuperBoss"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    176,
    (Il2CppObject *)StringLiteral_21991/*"mstQuestScript"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    177,
    (Il2CppObject *)StringLiteral_21995/*"mstQuestScriptRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    178,
    (Il2CppObject *)StringLiteral_21954/*"mstMaterialFolder"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    179,
    (Il2CppObject *)StringLiteral_22002/*"mstRestriction"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    180,
    (Il2CppObject *)StringLiteral_21989/*"mstQuestRestriction"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    181,
    (Il2CppObject *)StringLiteral_22090/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    182,
    (Il2CppObject *)StringLiteral_22014/*"mstShopDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    183,
    (Il2CppObject *)StringLiteral_22078/*"mstSvtScriptAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    184,
    (Il2CppObject *)StringLiteral_21763/*"mstCombine"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    185,
    (Il2CppObject *)StringLiteral_21715/*"mstAiField"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    186,
    (Il2CppObject *)StringLiteral_22052/*"mstSvtCommentAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    187,
    (Il2CppObject *)StringLiteral_21829/*"mstEventFilter"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    188,
    (Il2CppObject *)StringLiteral_24595/*"userSupportDeck"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    189,
    (Il2CppObject *)StringLiteral_21870/*"mstEventRewardScene"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    190,
    (Il2CppObject *)StringLiteral_21891/*"mstEventVoicePlay"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    191,
    (Il2CppObject *)StringLiteral_21918/*"mstGachaSub"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    192,
    (Il2CppObject *)StringLiteral_21909/*"mstGachaDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    193,
    (Il2CppObject *)StringLiteral_21907/*"mstGachaBonusSelect"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    194,
    (Il2CppObject *)StringLiteral_21908/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    195,
    (Il2CppObject *)StringLiteral_22047/*"mstSvtChange"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    196,
    (Il2CppObject *)StringLiteral_22105/*"mstVoiceCond"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    197,
    (Il2CppObject *)StringLiteral_21734/*"mstBgmRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    198,
    (Il2CppObject *)StringLiteral_21958/*"mstMyroomAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    199,
    (Il2CppObject *)StringLiteral_22013/*"mstShopAction"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    200,
    (Il2CppObject *)StringLiteral_21871/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    201,
    (Il2CppObject *)StringLiteral_21938/*"mstMap"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    202,
    (Il2CppObject *)StringLiteral_21940/*"mstMapCond"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    203,
    (Il2CppObject *)StringLiteral_21939/*"mstMapButton"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    204,
    (Il2CppObject *)StringLiteral_21725/*"mstBannerAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    205,
    (Il2CppObject *)StringLiteral_21970/*"mstQuestBehavior"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    206,
    (Il2CppObject *)StringLiteral_21799/*"mstEventAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    207,
    (Il2CppObject *)StringLiteral_22094/*"mstTotalLogin"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    208,
    (Il2CppObject *)StringLiteral_22057/*"mstSvtFilter"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    209,
    (Il2CppObject *)StringLiteral_21765/*"mstCombineCostume"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    210,
    (Il2CppObject *)StringLiteral_22053/*"mstSvtCostume"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    211,
    (Il2CppObject *)StringLiteral_22054/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    212,
    (Il2CppObject *)StringLiteral_22032/*"mstStaffPhoto"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    213,
    (Il2CppObject *)StringLiteral_22033/*"mstStaffPhotoCostume"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    214,
    (Il2CppObject *)StringLiteral_24565/*"userFriendRequestHistory"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    215,
    (Il2CppObject *)StringLiteral_24521/*"userBlacklist"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    216,
    (Il2CppObject *)StringLiteral_21936/*"mstItemSelect"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    217,
    (Il2CppObject *)StringLiteral_21860/*"mstEventRace"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    218,
    (Il2CppObject *)StringLiteral_21861/*"mstEventRaceResult"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    219,
    (Il2CppObject *)StringLiteral_21984/*"mstQuestRacePoint"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    220,
    (Il2CppObject *)StringLiteral_24553/*"userEventRace"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    221,
    (Il2CppObject *)StringLiteral_21873/*"mstEventScript"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    222,
    (Il2CppObject *)StringLiteral_21874/*"mstEventScriptRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    223,
    (Il2CppObject *)StringLiteral_22030/*"mstSpotPath"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    224,
    (Il2CppObject *)StringLiteral_22027/*"mstSpotAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    225,
    (Il2CppObject *)StringLiteral_24150/*"totalEventRace"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    226,
    (Il2CppObject *)StringLiteral_21854/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    227,
    (Il2CppObject *)StringLiteral_22108/*"mstVoicePlayGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    228,
    (Il2CppObject *)StringLiteral_22107/*"mstVoicePlayCond"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    229,
    (Il2CppObject *)StringLiteral_21917/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    230,
    (Il2CppObject *)StringLiteral_22058/*"mstSvtFlag"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    231,
    (Il2CppObject *)StringLiteral_22059/*"mstSvtFlagRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    232,
    (Il2CppObject *)StringLiteral_21837/*"mstEventLocationCampaign"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    233,
    (Il2CppObject *)StringLiteral_21750/*"mstCampaignInfo"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    234,
    (Il2CppObject *)StringLiteral_21788/*"mstDialogMessage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    235,
    (Il2CppObject *)StringLiteral_22061/*"mstSvtIndividuality"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    236,
    (Il2CppObject *)StringLiteral_21740/*"mstBoardMessage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    237,
    (Il2CppObject *)StringLiteral_21741/*"mstBoardMessageRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    238,
    (Il2CppObject *)StringLiteral_21879/*"mstEventSvtFatigue"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    239,
    (Il2CppObject *)StringLiteral_24542/*"userEventDeck"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    240,
    (Il2CppObject *)StringLiteral_21881/*"mstEventTower"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    241,
    (Il2CppObject *)StringLiteral_21882/*"mstEventTowerReward"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    242,
    (Il2CppObject *)StringLiteral_21808/*"mstEventBulletinBoard"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    243,
    (Il2CppObject *)StringLiteral_21809/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    244,
    (Il2CppObject *)StringLiteral_21827/*"mstEventFactory"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    245,
    (Il2CppObject *)StringLiteral_22015/*"mstShopGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    246,
    (Il2CppObject *)StringLiteral_21721/*"mstAuraEffect"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    247,
    (Il2CppObject *)StringLiteral_21722/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    248,
    (Il2CppObject *)StringLiteral_24550/*"userEventMissionFix"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    249,
    (Il2CppObject *)StringLiteral_22322/*"notEndEventMissionFix"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    250,
    (Il2CppObject *)StringLiteral_21791/*"mstEnemyMaster"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    251,
    (Il2CppObject *)StringLiteral_21792/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    252,
    (Il2CppObject *)StringLiteral_22082/*"mstSvtSkillRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    253,
    (Il2CppObject *)StringLiteral_22072/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    254,
    (Il2CppObject *)StringLiteral_22087/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    255,
    (Il2CppObject *)StringLiteral_21947/*"mstMapGimmickRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    256,
    (Il2CppObject *)StringLiteral_21775/*"mstCommandCode"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    257,
    (Il2CppObject *)StringLiteral_22050/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    258,
    (Il2CppObject *)StringLiteral_24526/*"userCommandCode"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    259,
    (Il2CppObject *)StringLiteral_24527/*"userCommandCodeCollection"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    260,
    (Il2CppObject *)StringLiteral_24602/*"userSvtCommandCode"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    261,
    (Il2CppObject *)StringLiteral_21777/*"mstCommandCodeSkill"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    262,
    (Il2CppObject *)StringLiteral_21778/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    263,
    (Il2CppObject *)StringLiteral_21776/*"mstCommandCodeComment"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    264,
    (Il2CppObject *)StringLiteral_21875/*"mstEventStatus"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    265,
    (Il2CppObject *)StringLiteral_21876/*"mstEventStatusQuest"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    266,
    (Il2CppObject *)StringLiteral_21782/*"mstCommonRestriction"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    267,
    (Il2CppObject *)StringLiteral_21852/*"mstEventPointBuff"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    268,
    (Il2CppObject *)StringLiteral_24561/*"userFollow"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    269,
    (Il2CppObject *)StringLiteral_21869/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    270,
    (Il2CppObject *)StringLiteral_22345/*"npcSvtEquip"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    271,
    (Il2CppObject *)StringLiteral_21811/*"mstEventCampaignRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    272,
    (Il2CppObject *)StringLiteral_22067/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    273,
    (Il2CppObject *)StringLiteral_21824/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    274,
    (Il2CppObject *)StringLiteral_21851/*"mstEventPointActivity"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    275,
    (Il2CppObject *)StringLiteral_21898/*"mstFuncCategory"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    276,
    (Il2CppObject *)StringLiteral_21983/*"mstQuestPickup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    277,
    (Il2CppObject *)StringLiteral_21888/*"mstEventUi"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    278,
    (Il2CppObject *)StringLiteral_21889/*"mstEventUiRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    279,
    (Il2CppObject *)StringLiteral_21890/*"mstEventUiValue"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    280,
    (Il2CppObject *)StringLiteral_21815/*"mstEventConquestReward"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    281,
    (Il2CppObject *)StringLiteral_22341/*"npcFollowerRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    282,
    (Il2CppObject *)StringLiteral_21803/*"mstEventBonusFilter"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    283,
    (Il2CppObject *)StringLiteral_21804/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    284,
    (Il2CppObject *)StringLiteral_21805/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    285,
    (Il2CppObject *)StringLiteral_24569/*"userGachaExtraCount"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    286,
    (Il2CppObject *)StringLiteral_21774/*"mstCommandCardRankParam"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    287,
    (Il2CppObject *)StringLiteral_24601/*"userSvtCommandCard"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    288,
    (Il2CppObject *)StringLiteral_21966/*"mstPrivilege"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    289,
    (Il2CppObject *)StringLiteral_24583/*"userPrivilege"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    290,
    (Il2CppObject *)StringLiteral_21972/*"mstQuestDateRange"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    291,
    (Il2CppObject *)StringLiteral_21855/*"mstEventPointUpper"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    292,
    (Il2CppObject *)StringLiteral_21856/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    293,
    (Il2CppObject *)StringLiteral_24588/*"userQuestRoute"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    294,
    (Il2CppObject *)StringLiteral_21806/*"mstEventBossStatusUi"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    295,
    (Il2CppObject *)StringLiteral_21781/*"mstCommonRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    296,
    (Il2CppObject *)StringLiteral_21996/*"mstQuestSpotRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    297,
    (Il2CppObject *)StringLiteral_22106/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    298,
    (Il2CppObject *)StringLiteral_21761/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    299,
    (Il2CppObject *)StringLiteral_21833/*"mstEventGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    300,
    (Il2CppObject *)StringLiteral_21717/*"mstAssetbundleKey"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    301,
    (Il2CppObject *)StringLiteral_24146/*"totalBoxGacha"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    302,
    (Il2CppObject *)StringLiteral_22086/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    303,
    (Il2CppObject *)StringLiteral_19172/*"eventSvtFatigue"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    304,
    (Il2CppObject *)StringLiteral_21867/*"mstEventRewardBg"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    305,
    (Il2CppObject *)StringLiteral_21828/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    306,
    (Il2CppObject *)StringLiteral_19160/*"eventBoostItemUsed"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    307,
    (Il2CppObject *)StringLiteral_22036/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    308,
    (Il2CppObject *)StringLiteral_21980/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    309,
    (Il2CppObject *)StringLiteral_22104/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    310,
    (Il2CppObject *)StringLiteral_22035/*"mstStageRemap"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    311,
    (Il2CppObject *)StringLiteral_18139/*"combineExp"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    312,
    (Il2CppObject *)StringLiteral_21800/*"mstEventBoardGameCell"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    313,
    (Il2CppObject *)StringLiteral_21801/*"mstEventBoardGameToken"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    314,
    (Il2CppObject *)StringLiteral_21802/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    315,
    (Il2CppObject *)StringLiteral_24539/*"userEventBoardGameToken"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    316,
    (Il2CppObject *)StringLiteral_22041/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    317,
    (Il2CppObject *)StringLiteral_21962/*"mstOpeningMovie"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    318,
    (Il2CppObject *)StringLiteral_22065/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    319,
    (Il2CppObject *)StringLiteral_22712/*"pickupUserFollower"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    320,
    (Il2CppObject *)StringLiteral_22049/*"mstSvtCollection"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    321,
    (Il2CppObject *)StringLiteral_21906/*"mstGachaBehavior"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    322,
    (Il2CppObject *)StringLiteral_21859/*"mstEventQuestCooltime"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    323,
    (Il2CppObject *)StringLiteral_24552/*"userEventQuestCooltime"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    324,
    (Il2CppObject *)StringLiteral_21742/*"mstBoost"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    325,
    (Il2CppObject *)StringLiteral_22112/*"mstWarBoard"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    326,
    (Il2CppObject *)StringLiteral_22136/*"mstWarBoardSquare"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    327,
    (Il2CppObject *)StringLiteral_22135/*"mstWarBoardRoad"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    328,
    (Il2CppObject *)StringLiteral_22138/*"mstWarBoardStage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    329,
    (Il2CppObject *)StringLiteral_22113/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    330,
    (Il2CppObject *)StringLiteral_22115/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    331,
    (Il2CppObject *)StringLiteral_22146/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    332,
    (Il2CppObject *)StringLiteral_22141/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    333,
    (Il2CppObject *)StringLiteral_22142/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    334,
    (Il2CppObject *)StringLiteral_22145/*"mstWarBoardStageWall"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    335,
    (Il2CppObject *)StringLiteral_22118/*"mstWarBoardAi"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    336,
    (Il2CppObject *)StringLiteral_22131/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    337,
    (Il2CppObject *)StringLiteral_22132/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    338,
    (Il2CppObject *)StringLiteral_22125/*"mstWarBoardItem"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    339,
    (Il2CppObject *)StringLiteral_22147/*"mstWarBoardTreasure"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    340,
    (Il2CppObject *)StringLiteral_22130/*"mstWarBoardQuest"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    341,
    (Il2CppObject *)StringLiteral_24765/*"warBoardData"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    342,
    (Il2CppObject *)StringLiteral_22124/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    343,
    (Il2CppObject *)StringLiteral_22116/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    344,
    (Il2CppObject *)StringLiteral_22114/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    345,
    (Il2CppObject *)StringLiteral_22134/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    346,
    (Il2CppObject *)StringLiteral_22144/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    347,
    (Il2CppObject *)StringLiteral_21846/*"mstEventPanelMap"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    348,
    (Il2CppObject *)StringLiteral_21847/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    349,
    (Il2CppObject *)StringLiteral_21849/*"mstEventPanelSpot"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    350,
    (Il2CppObject *)StringLiteral_21848/*"mstEventPanelScan"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    351,
    (Il2CppObject *)StringLiteral_21820/*"mstEventDigging"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    352,
    (Il2CppObject *)StringLiteral_21822/*"mstEventDiggingReward"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    353,
    (Il2CppObject *)StringLiteral_21821/*"mstEventDiggingBlock"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    354,
    (Il2CppObject *)StringLiteral_24543/*"userEventDigging"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    355,
    (Il2CppObject *)StringLiteral_21780/*"mstCommonConsume"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    356,
    (Il2CppObject *)StringLiteral_24547/*"userEventMap"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    357,
    (Il2CppObject *)StringLiteral_24556/*"userEventSpot"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    358,
    (Il2CppObject *)StringLiteral_22148/*"mstWarGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    359,
    (Il2CppObject *)StringLiteral_22064/*"mstSvtLimitImage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    360,
    (Il2CppObject *)StringLiteral_19709/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    361,
    (Il2CppObject *)StringLiteral_21990/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    362,
    (Il2CppObject *)StringLiteral_21718/*"mstAssist"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    363,
    (Il2CppObject *)StringLiteral_22120/*"mstWarBoardEffect"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    364,
    (Il2CppObject *)StringLiteral_22128/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    365,
    (Il2CppObject *)StringLiteral_17142/*"beforeBirthDay"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    366,
    (Il2CppObject *)StringLiteral_21937/*"mstLoginQuest"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    367,
    (Il2CppObject *)StringLiteral_21813/*"mstEventCombineCostume"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    368,
    (Il2CppObject *)StringLiteral_22143/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    369,
    (Il2CppObject *)StringLiteral_22085/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    370,
    (Il2CppObject *)StringLiteral_22020/*"mstSkillAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    371,
    (Il2CppObject *)StringLiteral_22066/*"mstSvtLvDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    372,
    (Il2CppObject *)StringLiteral_21904/*"mstGachaAppend"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    373,
    (Il2CppObject *)StringLiteral_24568/*"userGachaDrawLog"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    374,
    (Il2CppObject *)StringLiteral_22042/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    375,
    (Il2CppObject *)StringLiteral_24597/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    376,
    (Il2CppObject *)StringLiteral_24598/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    377,
    (Il2CppObject *)StringLiteral_22043/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    378,
    (Il2CppObject *)StringLiteral_21764/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    379,
    (Il2CppObject *)StringLiteral_22048/*"mstSvtCoin"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    380,
    (Il2CppObject *)StringLiteral_24599/*"userSvtCoin"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    381,
    (Il2CppObject *)StringLiteral_22040/*"mstSvtAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    382,
    (Il2CppObject *)StringLiteral_22095/*"mstTreasureBox"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    383,
    (Il2CppObject *)StringLiteral_22096/*"mstTreasureBoxGift"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    384,
    (Il2CppObject *)StringLiteral_22097/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    385,
    (Il2CppObject *)StringLiteral_24544/*"userEventExpedition"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    386,
    (Il2CppObject *)StringLiteral_21825/*"mstEventExpedition"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    387,
    (Il2CppObject *)StringLiteral_21826/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    388,
    (Il2CppObject *)StringLiteral_21864/*"mstEventRecipe"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    389,
    (Il2CppObject *)StringLiteral_21865/*"mstEventRecipeGift"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    390,
    (Il2CppObject *)StringLiteral_24545/*"userEventFortification"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    391,
    (Il2CppObject *)StringLiteral_21830/*"mstEventFortification"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    392,
    (Il2CppObject *)StringLiteral_21831/*"mstEventFortificationDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    393,
    (Il2CppObject *)StringLiteral_21832/*"mstEventFortificationSvt"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    394,
    (Il2CppObject *)StringLiteral_24611/*"userSvtVoicePlayed"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    395,
    (Il2CppObject *)StringLiteral_24460/*"updateProfileDialogInfo"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    396,
    (Il2CppObject *)StringLiteral_22068/*"mstSvtMaterialTd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    397,
    (Il2CppObject *)StringLiteral_21727/*"mstBattleMasterImage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    398,
    (Il2CppObject *)StringLiteral_24564/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    399,
    (Il2CppObject *)StringLiteral_24555/*"userEventRandomMission"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    400,
    (Il2CppObject *)StringLiteral_21857/*"mstEventProgressValue"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    401,
    (Il2CppObject *)StringLiteral_22069/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    402,
    (Il2CppObject *)StringLiteral_21863/*"mstEventRandomMission"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    403,
    (Il2CppObject *)StringLiteral_24567/*"userGachaDrawHistory"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    404,
    (Il2CppObject *)StringLiteral_24525/*"userCoinRoom"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    405,
    (Il2CppObject *)StringLiteral_21807/*"mstEventBuddyPoint"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    406,
    (Il2CppObject *)StringLiteral_21880/*"mstEventSvtPointRank"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    407,
    (Il2CppObject *)StringLiteral_24558/*"userEventSvtPoint"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    408,
    (Il2CppObject *)StringLiteral_21893/*"mstFieldMotion"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    409,
    (Il2CppObject *)StringLiteral_24534/*"userDeleteReservation"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    410,
    (Il2CppObject *)StringLiteral_22079/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    411,
    (Il2CppObject *)StringLiteral_21794/*"mstEquipAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    412,
    (Il2CppObject *)StringLiteral_21987/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    413,
    (Il2CppObject *)StringLiteral_24538/*"userEventAlloutBattle"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    414,
    (Il2CppObject *)StringLiteral_21993/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    415,
    (Il2CppObject *)StringLiteral_21728/*"mstBattleMessage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    416,
    (Il2CppObject *)StringLiteral_21729/*"mstBattleMessageGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    417,
    (Il2CppObject *)StringLiteral_24579/*"userNpcSvtRecord"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    418,
    (Il2CppObject *)StringLiteral_21749/*"mstBuffTypeDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    419,
    (Il2CppObject *)StringLiteral_22126/*"mstWarBoardMessage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    420,
    (Il2CppObject *)StringLiteral_22129/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    421,
    (Il2CppObject *)StringLiteral_22127/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    422,
    (Il2CppObject *)StringLiteral_22151/*"mstWarQuestSelection"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    423,
    (Il2CppObject *)StringLiteral_22140/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    424,
    (Il2CppObject *)StringLiteral_21994/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    425,
    (Il2CppObject *)StringLiteral_21992/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    426,
    (Il2CppObject *)StringLiteral_21712/*"mstAdCheckPoint"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    427,
    (Il2CppObject *)StringLiteral_21925/*"mstGiftDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    428,
    (Il2CppObject *)StringLiteral_21767/*"mstCombineLimitGift"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    429,
    (Il2CppObject *)StringLiteral_21816/*"mstEventCooltimeReward"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    430,
    (Il2CppObject *)StringLiteral_24540/*"userEventCooltimeReward"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    431,
    (Il2CppObject *)StringLiteral_21755/*"mstClassBoardClass"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    432,
    (Il2CppObject *)StringLiteral_21754/*"mstClassBoardBase"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    433,
    (Il2CppObject *)StringLiteral_21757/*"mstClassBoardLine"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    434,
    (Il2CppObject *)StringLiteral_21758/*"mstClassBoardLock"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    435,
    (Il2CppObject *)StringLiteral_21759/*"mstClassBoardSquare"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    436,
    (Il2CppObject *)StringLiteral_21756/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    437,
    (Il2CppObject *)StringLiteral_24523/*"userClassBoardSquare"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    438,
    (Il2CppObject *)StringLiteral_22046/*"mstSvtCardAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    439,
    (Il2CppObject *)StringLiteral_21948/*"mstMapLayer"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    440,
    (Il2CppObject *)StringLiteral_22029/*"mstSpotLayer"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    441,
    (Il2CppObject *)StringLiteral_21943/*"mstMapGimmickLayer"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    442,
    (Il2CppObject *)StringLiteral_21817/*"mstEventDataLostBattle"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    443,
    (Il2CppObject *)StringLiteral_21818/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    444,
    (Il2CppObject *)StringLiteral_24541/*"userEventDataLost"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    445,
    (Il2CppObject *)StringLiteral_21975/*"mstQuestHint"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    446,
    (Il2CppObject *)StringLiteral_21901/*"mstFuncTypeDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    447,
    (Il2CppObject *)StringLiteral_21748/*"mstBuffConvert"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    448,
    (Il2CppObject *)StringLiteral_22022/*"mstSkillGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    449,
    (Il2CppObject *)StringLiteral_22023/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    450,
    (Il2CppObject *)StringLiteral_22024/*"mstSkillIndividuality"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    451,
    (Il2CppObject *)StringLiteral_22003/*"mstRestrictionBase"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    452,
    (Il2CppObject *)StringLiteral_22005/*"mstRestrictionSlot"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    453,
    (Il2CppObject *)StringLiteral_22006/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    454,
    (Il2CppObject *)StringLiteral_22004/*"mstRestrictionMessage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    455,
    (Il2CppObject *)StringLiteral_22007/*"mstRestrictionWhole"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    456,
    (Il2CppObject *)StringLiteral_21899/*"mstFuncDisp"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    457,
    (Il2CppObject *)StringLiteral_21814/*"mstEventCommandAssist"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    458,
    (Il2CppObject *)StringLiteral_21844/*"mstEventMissionGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    459,
    (Il2CppObject *)StringLiteral_21768/*"mstCombineLimitRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    460,
    (Il2CppObject *)StringLiteral_22101/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    461,
    (Il2CppObject *)StringLiteral_21929/*"mstHeelPortrait"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    462,
    (Il2CppObject *)StringLiteral_24573/*"userHeelPortrait"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    463,
    (Il2CppObject *)StringLiteral_22347/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    464,
    (Il2CppObject *)StringLiteral_21910/*"mstGachaExtraGift"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    465,
    (Il2CppObject *)StringLiteral_21845/*"mstEventMural"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    466,
    (Il2CppObject *)StringLiteral_24712/*"viewWaveEnemy"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    467,
    (Il2CppObject *)StringLiteral_21739/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    468,
    (Il2CppObject *)StringLiteral_21735/*"mstBlankEarthGimmick"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    469,
    (Il2CppObject *)StringLiteral_22092/*"mstTerminalOverwrite"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    470,
    (Il2CppObject *)StringLiteral_19338/*"exchangeSvt"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    471,
    (Il2CppObject *)StringLiteral_22119/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    472,
    (Il2CppObject *)StringLiteral_22121/*"mstWarBoardEvent"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    473,
    (Il2CppObject *)StringLiteral_22122/*"mstWarBoardEventScript"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    474,
    (Il2CppObject *)StringLiteral_22139/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    475,
    (Il2CppObject *)StringLiteral_22137/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    476,
    (Il2CppObject *)StringLiteral_22117/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    477,
    (Il2CppObject *)StringLiteral_22133/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    478,
    (Il2CppObject *)StringLiteral_22123/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    479,
    (Il2CppObject *)StringLiteral_22075/*"mstSvtProfilePush"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    480,
    (Il2CppObject *)StringLiteral_21945/*"mstMapGimmickPath"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    481,
    (Il2CppObject *)StringLiteral_21946/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    482,
    (Il2CppObject *)StringLiteral_22070/*"mstSvtOverwrite"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    483,
    (Il2CppObject *)StringLiteral_21933/*"mstIndividualityPolicy"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    484,
    (Il2CppObject *)StringLiteral_21932/*"mstIndividualityPersonality"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    485,
    (Il2CppObject *)StringLiteral_21719/*"mstAttri"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    486,
    (Il2CppObject *)StringLiteral_22089/*"mstSvtVoicePattern"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    487,
    (Il2CppObject *)StringLiteral_24572/*"userGameCommon"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    488,
    (Il2CppObject *)StringLiteral_22073/*"mstSvtPhoto"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    489,
    (Il2CppObject *)StringLiteral_21953/*"mstMasterPhoto"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    490,
    (Il2CppObject *)StringLiteral_21965/*"mstPhotoFrame"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    491,
    (Il2CppObject *)StringLiteral_22150/*"mstWarMessage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    492,
    (Il2CppObject *)StringLiteral_21969/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    493,
    (Il2CppObject *)StringLiteral_21892/*"mstExcludeMotionCond"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    494,
    (Il2CppObject *)StringLiteral_24576/*"userInterruptionQuest"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    495,
    (Il2CppObject *)StringLiteral_22083/*"mstSvtTransform"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    496,
    (Il2CppObject *)StringLiteral_21949/*"mstMapUpdateSchedule"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    497,
    (Il2CppObject *)StringLiteral_21982/*"mstQuestPhasePresent"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    498,
    (Il2CppObject *)StringLiteral_24520/*"userAccountLinkage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    499,
    (Il2CppObject *)StringLiteral_21957/*"mstMissionNaviTransition"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    500,
    (Il2CppObject *)StringLiteral_21883/*"mstEventTradeGoods"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    501,
    (Il2CppObject *)StringLiteral_21884/*"mstEventTradePickup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    502,
    (Il2CppObject *)StringLiteral_21885/*"mstEventTradeStore"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    503,
    (Il2CppObject *)StringLiteral_24559/*"userEventTrade"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    504,
    (Il2CppObject *)StringLiteral_21956/*"mstMissionNaviQuest"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    505,
    (Il2CppObject *)StringLiteral_22680/*"paymentHistory"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    506,
    (Il2CppObject *)StringLiteral_24560/*"userExternalPaymentStone"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    507,
    (Il2CppObject *)StringLiteral_21981/*"mstQuestPhaseIndividuality"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    508,
    (Il2CppObject *)StringLiteral_24709/*"viewGachaFeaturedSvt"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    514,
    (Il2CppObject *)StringLiteral_21790/*"mstEffectMovie"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    509,
    (Il2CppObject *)StringLiteral_21914/*"mstGachaPickupCollateral"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    510,
    (Il2CppObject *)StringLiteral_21915/*"mstGachaPickupCollateralGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    511,
    (Il2CppObject *)StringLiteral_21730/*"mstBattlePoint"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    512,
    (Il2CppObject *)StringLiteral_21731/*"mstBattlePointPhase"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    513,
    (Il2CppObject *)StringLiteral_22044/*"mstSvtBattlePoint"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    515,
    (Il2CppObject *)StringLiteral_21964/*"mstPaymentLimit"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    516,
    (Il2CppObject *)StringLiteral_24580/*"userPaymentLimit"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    517,
    (Il2CppObject *)StringLiteral_22008/*"mstRoadmap"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    518,
    (Il2CppObject *)StringLiteral_24590/*"userRecommendSupport"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    520,
    (Il2CppObject *)StringLiteral_21999/*"mstRecommendAdviceMessage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    519,
    (Il2CppObject *)StringLiteral_22000/*"mstRecommendSupportQuest"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    521,
    (Il2CppObject *)StringLiteral_24589/*"userRecommendFollower"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    522,
    (Il2CppObject *)StringLiteral_21935/*"mstItemDropEfficiency"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    523,
    (Il2CppObject *)StringLiteral_21736/*"mstBlankEarthGimmickAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    524,
    (Il2CppObject *)StringLiteral_22152/*"mstWarRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    525,
    (Il2CppObject *)StringLiteral_22010/*"mstSelectBonusBase"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    526,
    (Il2CppObject *)StringLiteral_22009/*"mstSelectBonus"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    527,
    (Il2CppObject *)StringLiteral_21960/*"mstMyroomSvtSpecialImage"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    528,
    (Il2CppObject *)StringLiteral_22017/*"mstShopReset"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    529,
    (Il2CppObject *)StringLiteral_22344/*"npcSvtDisplayTypeDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    530,
    (Il2CppObject *)StringLiteral_21896/*"mstFriendshipSvt"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    531,
    (Il2CppObject *)StringLiteral_19339/*"exchangeSvtCoinGivenNum"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    532,
    (Il2CppObject *)StringLiteral_21752/*"mstChaldeaGatePickup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    533,
    (Il2CppObject *)StringLiteral_22149/*"mstWarGroupIgnore"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    534,
    (Il2CppObject *)StringLiteral_21931/*"mstImagePartsGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    535,
    (Il2CppObject *)StringLiteral_24575/*"userImagePartsGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    536,
    (Il2CppObject *)StringLiteral_21955/*"mstMissionItemDisplay"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    537,
    (Il2CppObject *)StringLiteral_21997/*"mstQuestUseItemGroup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    538,
    (Il2CppObject *)StringLiteral_21998/*"mstQuestUseItemPickup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    539,
    (Il2CppObject *)StringLiteral_24546/*"userEventItemLinkSvt"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    540,
    (Il2CppObject *)StringLiteral_21976/*"mstQuestHintOverwrite"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    541,
    (Il2CppObject *)StringLiteral_22988/*"reachedWaveInfo"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    542,
    (Il2CppObject *)StringLiteral_21920/*"mstGallery"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    543,
    (Il2CppObject *)StringLiteral_21922/*"mstGalleryResource"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    544,
    (Il2CppObject *)StringLiteral_22081/*"mstSvtSkillAdd"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    545,
    (Il2CppObject *)StringLiteral_21921/*"mstGalleryFolderRelease"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    546,
    (Il2CppObject *)StringLiteral_24605/*"userSvtFirstGetTime"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    547,
    (Il2CppObject *)StringLiteral_21973/*"mstQuestExtension"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    548,
    (Il2CppObject *)StringLiteral_24606/*"userSvtGrand"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    549,
    (Il2CppObject *)StringLiteral_21926/*"mstGrandGraph"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    550,
    (Il2CppObject *)StringLiteral_21927/*"mstGrandGraphDetail"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    551,
    (Il2CppObject *)StringLiteral_24524/*"userClassStatistics"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    552,
    (Il2CppObject *)StringLiteral_21823/*"mstEventEquipSkillParts"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    553,
    (Il2CppObject *)StringLiteral_21950/*"mstMasterIndividualitySelect"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    554,
    (Il2CppObject *)StringLiteral_21959/*"mstMyroomAddBgDiff"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    555,
    (Il2CppObject *)StringLiteral_21732/*"mstBattleScript"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  DataNameKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_DataNameKind_Kind__string__o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)DataNameKind_TypeInfo->static_fields, (int32_t)v1, v4, v5);
}


void DataNameKind___ctor(DataNameKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *DataNameKind__GetName(int32_t kind, const MethodInfo *method)
{
  DataNameKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4C55C1B & 1) == 0 )
  {
    sub_1C3E564(&DataNameKind_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_4C55C1B = 1;
  }
  v3 = DataNameKind_TypeInfo;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
    v3 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1C3E7C0(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_343F730 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}