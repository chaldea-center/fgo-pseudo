void DataNameKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4C3688A & 1) == 0 )
  {
    sub_1C32C20(&DataNameKind_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_1C32C20(&StringLiteral_21862/*"mstEventTradeGoods"*/);
    sub_1C32C20(&StringLiteral_24547/*"userGameCommon"*/);
    sub_1C32C20(&StringLiteral_21822/*"mstEventMissionConditionDetail"*/);
    sub_1C32C20(&StringLiteral_22075/*"mstTreasureBoxGift"*/);
    sub_1C32C20(&StringLiteral_21755/*"mstCommandCodeComment"*/);
    sub_1C32C20(&StringLiteral_21818/*"mstEventMissionAction"*/);
    sub_1C32C20(&StringLiteral_24513/*"userEventAlloutBattle"*/);
    sub_1C32C20(&StringLiteral_22965/*"reachedWaveInfo"*/);
    sub_1C32C20(&StringLiteral_21783/*"mstEventBonusFilterGroupInfo"*/);
    sub_1C32C20(&StringLiteral_24564/*"userRecommendFollower"*/);
    sub_1C32C20(&StringLiteral_21966/*"mstQuestReleaseOverwrite"*/);
    sub_1C32C20(&StringLiteral_21926/*"mstMapGimmickRelease"*/);
    sub_1C32C20(&StringLiteral_21889/*"mstGachaExtraGift"*/);
    sub_1C32C20(&StringLiteral_22326/*"npcSvtFollowerIndividuality"*/);
    sub_1C32C20(&StringLiteral_21785/*"mstEventBossStatusUi"*/);
    sub_1C32C20(&StringLiteral_24573/*"userSvtAppendPassiveSkillLv"*/);
    sub_1C32C20(&StringLiteral_21739/*"mstClassRelation"*/);
    sub_1C32C20(&StringLiteral_21693/*"mstAiAct"*/);
    sub_1C32C20(&StringLiteral_22020/*"mstSvtAnimationOverwrite"*/);
    sub_1C32C20(&StringLiteral_21968/*"mstQuestRestriction"*/);
    sub_1C32C20(&StringLiteral_21766/*"mstCv"*/);
    sub_1C32C20(&StringLiteral_24518/*"userEventDigging"*/);
    sub_1C32C20(&StringLiteral_24004/*"tblUserGame"*/);
    sub_1C32C20(&StringLiteral_21796/*"mstEventDataLostBattle"*/);
    sub_1C32C20(&StringLiteral_21786/*"mstEventBuddyPoint"*/);
    sub_1C32C20(&StringLiteral_21713/*"mstBgmRelease"*/);
    sub_1C32C20(&StringLiteral_22047/*"mstSvtMaterialTd"*/);
    sub_1C32C20(&StringLiteral_21760/*"mstCommonRelease"*/);
    sub_1C32C20(&StringLiteral_21874/*"mstFriendship"*/);
    sub_1C32C20(&StringLiteral_24498/*"userClassBoardSquare"*/);
    sub_1C32C20(&StringLiteral_21764/*"mstConstantLong"*/);
    sub_1C32C20(&StringLiteral_21738/*"mstClassBoardSquare"*/);
    sub_1C32C20(&StringLiteral_24577/*"userSvtCommandCode"*/);
    sub_1C32C20(&StringLiteral_21949/*"mstQuestBehavior"*/);
    sub_1C32C20(&StringLiteral_21914/*"mstItemDropEfficiency"*/);
    sub_1C32C20(&StringLiteral_22046/*"mstSvtMaterialFolder"*/);
    sub_1C32C20(&StringLiteral_22122/*"mstWarBoardStagePieceDetail"*/);
    sub_1C32C20(&StringLiteral_21863/*"mstEventTradePickup"*/);
    sub_1C32C20(&StringLiteral_21784/*"mstEventBonusFilterGroupMember"*/);
    sub_1C32C20(&StringLiteral_21954/*"mstQuestHint"*/);
    sub_1C32C20(&StringLiteral_21758/*"mstCommandSpell"*/);
    sub_1C32C20(&StringLiteral_21691/*"mstAdCheckPoint"*/);
    sub_1C32C20(&StringLiteral_21945/*"mstPrivilege"*/);
    sub_1C32C20(&StringLiteral_21955/*"mstQuestHintOverwrite"*/);
    sub_1C32C20(&StringLiteral_21720/*"mstBoardMessageRelease"*/);
    sub_1C32C20(&StringLiteral_21895/*"mstGachaRelease"*/);
    sub_1C32C20(&StringLiteral_24509/*"userDeleteReservation"*/);
    sub_1C32C20(&StringLiteral_22074/*"mstTreasureBox"*/);
    sub_1C32C20(&StringLiteral_24550/*"userImagePartsGroup"*/);
    sub_1C32C20(&StringLiteral_21774/*"mstEquipExp"*/);
    sub_1C32C20(&StringLiteral_21781/*"mstEventBoardGameTokenReward"*/);
    sub_1C32C20(&StringLiteral_22027/*"mstSvtCoin"*/);
    sub_1C32C20(&StringLiteral_22058/*"mstSvtScriptMultiple"*/);
    sub_1C32C20(&StringLiteral_21933/*"mstMaterialFolder"*/);
    sub_1C32C20(&StringLiteral_21792/*"mstEventCombineCostume"*/);
    sub_1C32C20(&StringLiteral_21951/*"mstQuestDateRange"*/);
    sub_1C32C20(&StringLiteral_22118/*"mstWarBoardStageBoss"*/);
    sub_1C32C20(&StringLiteral_21727/*"mstBuffConvert"*/);
    sub_1C32C20(&StringLiteral_21977/*"mstQuestUseItemPickup"*/);
    sub_1C32C20(&StringLiteral_21700/*"mstAuraEffect"*/);
    sub_1C32C20(&StringLiteral_21840/*"mstEventRaceResult"*/);
    sub_1C32C20(&StringLiteral_21990/*"mstSetItem"*/);
    sub_1C32C20(&StringLiteral_22323/*"npcSvtDisplayTypeDetail"*/);
    sub_1C32C20(&StringLiteral_22012/*"mstStaffPhotoCostume"*/);
    sub_1C32C20(&StringLiteral_21900/*"mstGalleryFolderRelease"*/);
    sub_1C32C20(&StringLiteral_21980/*"mstRecover"*/);
    sub_1C32C20(&StringLiteral_21855/*"mstEventStatusQuest"*/);
    sub_1C32C20(&StringLiteral_24515/*"userEventCooltimeReward"*/);
    sub_1C32C20(&StringLiteral_21943/*"mstPaymentLimit"*/);
    sub_1C32C20(&StringLiteral_22096/*"mstWarBoardActionTrendGroup"*/);
    sub_1C32C20(&StringLiteral_24563/*"userQuestRoute"*/);
    sub_1C32C20(&StringLiteral_22004/*"mstSkillLv"*/);
    sub_1C32C20(&StringLiteral_22039/*"mstSvtGroup"*/);
    sub_1C32C20(&StringLiteral_22083/*"mstVoiceClosedMessage"*/);
    sub_1C32C20(&StringLiteral_21805/*"mstEventExpeditionPiece"*/);
    sub_1C32C20(&StringLiteral_21948/*"mstQuestAutoOrganizationAdjust"*/);
    sub_1C32C20(&StringLiteral_22048/*"mstSvtMultiPortrait"*/);
    sub_1C32C20(&StringLiteral_21808/*"mstEventFilter"*/);
    sub_1C32C20(&StringLiteral_21935/*"mstMissionNaviQuest"*/);
    sub_1C32C20(&StringLiteral_24565/*"userRecommendSupport"*/);
    sub_1C32C20(&StringLiteral_24552/*"userItem"*/);
    sub_1C32C20(&StringLiteral_21804/*"mstEventExpedition"*/);
    sub_1C32C20(&StringLiteral_21839/*"mstEventRace"*/);
    sub_1C32C20(&StringLiteral_21969/*"mstQuestRestrictionInfo"*/);
    sub_1C32C20(&StringLiteral_21967/*"mstQuestReset"*/);
    sub_1C32C20(&StringLiteral_24519/*"userEventExpedition"*/);
    sub_1C32C20(&StringLiteral_21811/*"mstEventFortificationSvt"*/);
    sub_1C32C20(&StringLiteral_22123/*"mstWarBoardStageReinforcements"*/);
    sub_1C32C20(&StringLiteral_21733/*"mstClassBoardBase"*/);
    sub_1C32C20(&StringLiteral_21770/*"mstEnemyMaster"*/);
    sub_1C32C20(&StringLiteral_21701/*"mstAuraEffectPosOverwrite"*/);
    sub_1C32C20(&StringLiteral_21984/*"mstRestrictionSlot"*/);
    sub_1C32C20(&StringLiteral_21897/*"mstGachaSub"*/);
    sub_1C32C20(&StringLiteral_21859/*"mstEventSvtPointRank"*/);
    sub_1C32C20(&StringLiteral_21832/*"mstEventPointGroup"*/);
    sub_1C32C20(&StringLiteral_21778/*"mstEventAdd"*/);
    sub_1C32C20(&StringLiteral_21772/*"mstEquip"*/);
    sub_1C32C20(&StringLiteral_21844/*"mstEventRecipeGift"*/);
    sub_1C32C20(&StringLiteral_22070/*"mstTelop"*/);
    sub_1C32C20(&StringLiteral_24575/*"userSvtCollection"*/);
    sub_1C32C20(&StringLiteral_24525/*"userEventMissionFix"*/);
    sub_1C32C20(&StringLiteral_21982/*"mstRestrictionBase"*/);
    sub_1C32C20(&StringLiteral_22072/*"mstTips"*/);
    sub_1C32C20(&StringLiteral_22011/*"mstStaffPhoto"*/);
    sub_1C32C20(&StringLiteral_21702/*"mstBankShop"*/);
    sub_1C32C20(&StringLiteral_21870/*"mstEventVoicePlay"*/);
    sub_1C32C20(&StringLiteral_21976/*"mstQuestUseItemGroup"*/);
    sub_1C32C20(&StringLiteral_21810/*"mstEventFortificationDetail"*/);
    sub_1C32C20(&StringLiteral_24532/*"userEventSuperBoss"*/);
    sub_1C32C20(&StringLiteral_21809/*"mstEventFortification"*/);
    sub_1C32C20(&StringLiteral_21857/*"mstEventSvt"*/);
    sub_1C32C20(&StringLiteral_22087/*"mstVoicePlayGroup"*/);
    sub_1C32C20(&StringLiteral_24517/*"userEventDeck"*/);
    sub_1C32C20(&StringLiteral_22006/*"mstSpotAdd"*/);
    sub_1C32C20(&StringLiteral_21751/*"mstCombineSkill"*/);
    sub_1C32C20(&StringLiteral_22115/*"mstWarBoardSquare"*/);
    sub_1C32C20(&StringLiteral_21728/*"mstBuffTypeDetail"*/);
    sub_1C32C20(&StringLiteral_22093/*"mstWarBoardActionPointClass"*/);
    sub_1C32C20(&StringLiteral_21988/*"mstSelectBonus"*/);
    sub_1C32C20(&StringLiteral_22062/*"mstSvtTransform"*/);
    sub_1C32C20(&StringLiteral_24556/*"userPresentBox"*/);
    sub_1C32C20(&StringLiteral_24533/*"userEventSvtPoint"*/);
    sub_1C32C20(&StringLiteral_24125/*"totalEventPoint"*/);
    sub_1C32C20(&StringLiteral_21753/*"mstCommandCardRankParam"*/);
    sub_1C32C20(&StringLiteral_22098/*"mstWarBoardCommonRelease"*/);
    sub_1C32C20(&StringLiteral_22018/*"mstSvt"*/);
    sub_1C32C20(&StringLiteral_24566/*"userShop"*/);
    sub_1C32C20(&StringLiteral_21779/*"mstEventBoardGameCell"*/);
    sub_1C32C20(&StringLiteral_21838/*"mstEventQuestCooltime"*/);
    sub_1C32C20(&StringLiteral_21880/*"mstFuncTypeDetail"*/);
    sub_1C32C20(&StringLiteral_22015/*"mstStatusEffectPosOverwrite"*/);
    sub_1C32C20(&StringLiteral_19139/*"eventBoostItemUsed"*/);
    sub_1C32C20(&StringLiteral_21993/*"mstShopDetail"*/);
    sub_1C32C20(&StringLiteral_21912/*"mstIndividualityPolicy"*/);
    sub_1C32C20(&StringLiteral_21918/*"mstMapButton"*/);
    sub_1C32C20(&StringLiteral_22125/*"mstWarBoardTacticalTrend"*/);
    sub_1C32C20(&StringLiteral_22017/*"mstSubEquip"*/);
    sub_1C32C20(&StringLiteral_22009/*"mstSpotPath"*/);
    sub_1C32C20(&StringLiteral_21987/*"mstRoadmap"*/);
    sub_1C32C20(&StringLiteral_21748/*"mstCombineMaterial"*/);
    sub_1C32C20(&StringLiteral_21747/*"mstCombineLimitRelease"*/);
    sub_1C32C20(&StringLiteral_22079/*"mstTreasureDeviceLv"*/);
    sub_1C32C20(&StringLiteral_21860/*"mstEventTower"*/);
    sub_1C32C20(&StringLiteral_21998/*"mstSkill"*/);
    sub_1C32C20(&StringLiteral_24551/*"userInterruptionQuest"*/);
    sub_1C32C20(&StringLiteral_22050/*"mstSvtPassiveSkill"*/);
    sub_1C32C20(&StringLiteral_22064/*"mstSvtTreasureDeviceAdd"*/);
    sub_1C32C20(&StringLiteral_21717/*"mstBlankEarthSpotAdd"*/);
    sub_1C32C20(&StringLiteral_24560/*"userQuest"*/);
    sub_1C32C20(&StringLiteral_21821/*"mstEventMissionCondition"*/);
    sub_1C32C20(&StringLiteral_22092/*"mstWarBoardActionPoint"*/);
    sub_1C32C20(&StringLiteral_24535/*"userExternalPaymentStone"*/);
    sub_1C32C20(&StringLiteral_21741/*"mstClosedMessage"*/);
    sub_1C32C20(&StringLiteral_21847/*"mstEventRewardExtra"*/);
    sub_1C32C20(&StringLiteral_21830/*"mstEventPointActivity"*/);
    sub_1C32C20(&StringLiteral_21837/*"mstEventQuest"*/);
    sub_1C32C20(&StringLiteral_21708/*"mstBattleMessageGroup"*/);
    sub_1C32C20(&StringLiteral_24686/*"viewQuestInfo"*/);
    sub_1C32C20(&StringLiteral_22054/*"mstSvtProfilePush"*/);
    sub_1C32C20(&StringLiteral_22078/*"mstTreasureDeviceDetail"*/);
    sub_1C32C20(&StringLiteral_24496/*"userBlacklist"*/);
    sub_1C32C20(&StringLiteral_21803/*"mstEventEquipSkillRelease"*/);
    sub_1C32C20(&StringLiteral_24500/*"userCoinRoom"*/);
    sub_1C32C20(&StringLiteral_21765/*"mstConstantStr"*/);
    sub_1C32C20(&StringLiteral_21802/*"mstEventEquipSkillParts"*/);
    sub_1C32C20(&StringLiteral_21899/*"mstGallery"*/);
    sub_1C32C20(&StringLiteral_24581/*"userSvtGrand"*/);
    sub_1C32C20(&StringLiteral_22016/*"mstStoneShop"*/);
    sub_1C32C20(&StringLiteral_21928/*"mstMapUpdateSchedule"*/);
    sub_1C32C20(&StringLiteral_22073/*"mstTotalLogin"*/);
    sub_1C32C20(&StringLiteral_21941/*"mstOpeningMovie"*/);
    sub_1C32C20(&StringLiteral_21763/*"mstConstant"*/);
    sub_1C32C20(&StringLiteral_21975/*"mstQuestSpotRelease"*/);
    sub_1C32C20(&StringLiteral_21756/*"mstCommandCodeSkill"*/);
    sub_1C32C20(&StringLiteral_21946/*"mstQuest"*/);
    sub_1C32C20(&StringLiteral_22068/*"mstSvtVoicePattern"*/);
    sub_1C32C20(&StringLiteral_21866/*"mstEventTutorialCond"*/);
    sub_1C32C20(&StringLiteral_21715/*"mstBlankEarthGimmickAdd"*/);
    sub_1C32C20(&StringLiteral_22091/*"mstWarBoard"*/);
    sub_1C32C20(&StringLiteral_21841/*"mstEventRaid"*/);
    sub_1C32C20(&StringLiteral_21712/*"mstBgm"*/);
    sub_1C32C20(&StringLiteral_21853/*"mstEventScriptRelease"*/);
    sub_1C32C20(&StringLiteral_24559/*"userProfile"*/);
    sub_1C32C20(&StringLiteral_21820/*"mstEventMissionAdd"*/);
    sub_1C32C20(&StringLiteral_22088/*"mstVoiceRelease"*/);
    sub_1C32C20(&StringLiteral_21964/*"mstQuestRandomGroup"*/);
    sub_1C32C20(&StringLiteral_21936/*"mstMissionNaviTransition"*/);
    sub_1C32C20(&StringLiteral_21995/*"mstShopRelease"*/);
    sub_1C32C20(&StringLiteral_24585/*"userSvtStorage"*/);
    sub_1C32C20(&StringLiteral_21893/*"mstGachaPickupCollateral"*/);
    sub_1C32C20(&StringLiteral_21978/*"mstRecommendAdviceMessage"*/);
    sub_1C32C20(&StringLiteral_21979/*"mstRecommendSupportQuest"*/);
    sub_1C32C20(&StringLiteral_24572/*"userSvtAppendPassiveSkill"*/);
    sub_1C32C20(&StringLiteral_22019/*"mstSvtAdd"*/);
    sub_1C32C20(&StringLiteral_21905/*"mstGrandGraph"*/);
    sub_1C32C20(&StringLiteral_22129/*"mstWarMessage"*/);
    sub_1C32C20(&StringLiteral_21718/*"mstBlankEarthSpotNavimenu"*/);
    sub_1C32C20(&StringLiteral_21706/*"mstBattleMasterImage"*/);
    sub_1C32C20(&StringLiteral_22000/*"mstSkillDetail"*/);
    sub_1C32C20(&StringLiteral_21930/*"mstMasterMission"*/);
    sub_1C32C20(&StringLiteral_22051/*"mstSvtPassiveSkillRelease"*/);
    sub_1C32C20(&StringLiteral_22005/*"mstSpot"*/);
    sub_1C32C20(&StringLiteral_21817/*"mstEventMission"*/);
    sub_1C32C20(&StringLiteral_21750/*"mstCombineQpSvtEquip"*/);
    sub_1C32C20(&StringLiteral_21829/*"mstEventPoint"*/);
    sub_1C32C20(&StringLiteral_21851/*"mstEventRewardSet"*/);
    sub_1C32C20(&StringLiteral_21826/*"mstEventPanelMapDetail"*/);
    sub_1C32C20(&StringLiteral_22025/*"mstSvtCardAdd"*/);
    sub_1C32C20(&StringLiteral_21917/*"mstMap"*/);
    sub_1C32C20(&StringLiteral_21799/*"mstEventDigging"*/);
    sub_1C32C20(&StringLiteral_24541/*"userGacha"*/);
    sub_1C32C20(&StringLiteral_21965/*"mstQuestRelease"*/);
    sub_1C32C20(&StringLiteral_21798/*"mstEventDetail"*/);
    sub_1C32C20(&StringLiteral_21910/*"mstImagePartsGroup"*/);
    sub_1C32C20(&StringLiteral_21927/*"mstMapLayer"*/);
    sub_1C32C20(&StringLiteral_22102/*"mstWarBoardFutureActionTrend"*/);
    sub_1C32C20(&StringLiteral_22003/*"mstSkillIndividuality"*/);
    sub_1C32C20(&StringLiteral_21724/*"mstBoxGachaBaseDetail"*/);
    sub_1C32C20(&StringLiteral_24003/*"tblFriend"*/);
    sub_1C32C20(&StringLiteral_17124/*"beforeBirthDay"*/);
    sub_1C32C20(&StringLiteral_21815/*"mstEventItemDisplayRelease"*/);
    sub_1C32C20(&StringLiteral_21901/*"mstGalleryResource"*/);
    sub_1C32C20(&StringLiteral_17050/*"battle"*/);
    sub_1C32C20(&StringLiteral_21994/*"mstShopGroup"*/);
    sub_1C32C20(&StringLiteral_21699/*"mstAttriRelation"*/);
    sub_1C32C20(&StringLiteral_24501/*"userCommandCode"*/);
    sub_1C32C20(&StringLiteral_21790/*"mstEventCampaignRelease"*/);
    sub_1C32C20(&StringLiteral_22036/*"mstSvtFilter"*/);
    sub_1C32C20(&StringLiteral_21963/*"mstQuestRacePoint"*/);
    sub_1C32C20(&StringLiteral_21864/*"mstEventTradeStore"*/);
    sub_1C32C20(&StringLiteral_22497/*"otherUserGame"*/);
    sub_1C32C20(&StringLiteral_21710/*"mstBattlePointPhase"*/);
    sub_1C32C20(&StringLiteral_21814/*"mstEventItemDisplayGroup"*/);
    sub_1C32C20(&StringLiteral_21730/*"mstCard"*/);
    sub_1C32C20(&StringLiteral_21714/*"mstBlankEarthGimmick"*/);
    sub_1C32C20(&StringLiteral_21707/*"mstBattleMessage"*/);
    sub_1C32C20(&StringLiteral_21985/*"mstRestrictionSlotDetail"*/);
    sub_1C32C20(&StringLiteral_21703/*"mstBanner"*/);
    sub_1C32C20(&StringLiteral_21771/*"mstEnemyMasterBattle"*/);
    sub_1C32C20(&StringLiteral_21813/*"mstEventItemDisplay"*/);
    sub_1C32C20(&StringLiteral_21729/*"mstCampaignInfo"*/);
    sub_1C32C20(&StringLiteral_22063/*"mstSvtTreasureDevice"*/);
    sub_1C32C20(&StringLiteral_22061/*"mstSvtSkillRelease"*/);
    sub_1C32C20(&StringLiteral_21944/*"mstPhotoFrame"*/);
    sub_1C32C20(&StringLiteral_21762/*"mstCompleteMission"*/);
    sub_1C32C20(&StringLiteral_21745/*"mstCombineLimit"*/);
    sub_1C32C20(&StringLiteral_21906/*"mstGrandGraphDetail"*/);
    sub_1C32C20(&StringLiteral_21722/*"mstBoxGacha"*/);
    sub_1C32C20(&StringLiteral_22085/*"mstVoiceMaterialCond"*/);
    sub_1C32C20(&StringLiteral_21882/*"mstGachaAdjustAdd"*/);
    sub_1C32C20(&StringLiteral_21896/*"mstGachaStoryAdjust"*/);
    sub_1C32C20(&StringLiteral_22081/*"mstUserExp"*/);
    sub_1C32C20(&StringLiteral_21871/*"mstExcludeMotionCond"*/);
    sub_1C32C20(&StringLiteral_22104/*"mstWarBoardItem"*/);
    sub_1C32C20(&StringLiteral_21773/*"mstEquipAdd"*/);
    sub_1C32C20(&StringLiteral_21767/*"mstDialogMessage"*/);
    sub_1C32C20(&StringLiteral_22325/*"npcSvtFollower"*/);
    sub_1C32C20(&StringLiteral_21705/*"mstBattleBg"*/);
    sub_1C32C20(&StringLiteral_21734/*"mstClassBoardClass"*/);
    sub_1C32C20(&StringLiteral_24526/*"userEventPoint"*/);
    sub_1C32C20(&StringLiteral_22026/*"mstSvtChange"*/);
    sub_1C32C20(&StringLiteral_22103/*"mstWarBoardIndividualityClass"*/);
    sub_1C32C20(&StringLiteral_21884/*"mstGachaBaseCollateral"*/);
    sub_1C32C20(&StringLiteral_21961/*"mstQuestPhasePresent"*/);
    sub_1C32C20(&StringLiteral_21996/*"mstShopReset"*/);
    sub_1C32C20(&StringLiteral_21824/*"mstEventMural"*/);
    sub_1C32C20(&StringLiteral_21892/*"mstGachaPickup"*/);
    sub_1C32C20(&StringLiteral_21915/*"mstItemSelect"*/);
    sub_1C32C20(&StringLiteral_22040/*"mstSvtIndividuality"*/);
    sub_1C32C20(&StringLiteral_24512/*"userEvent"*/);
    sub_1C32C20(&StringLiteral_22126/*"mstWarBoardTreasure"*/);
    sub_1C32C20(&StringLiteral_22045/*"mstSvtLvDetail"*/);
    sub_1C32C20(&StringLiteral_22111/*"mstWarBoardRatingOffset"*/);
    sub_1C32C20(&StringLiteral_21958/*"mstQuestPhaseDetail"*/);
    sub_1C32C20(&StringLiteral_21992/*"mstShopAction"*/);
    sub_1C32C20(&StringLiteral_21937/*"mstMyroomAdd"*/);
    sub_1C32C20(&StringLiteral_21858/*"mstEventSvtFatigue"*/);
    sub_1C32C20(&StringLiteral_21806/*"mstEventFactory"*/);
    sub_1C32C20(&StringLiteral_24542/*"userGachaDrawHistory"*/);
    sub_1C32C20(&StringLiteral_24537/*"userFollower"*/);
    sub_1C32C20(&StringLiteral_22112/*"mstWarBoardRatingOffsetGroup"*/);
    sub_1C32C20(&StringLiteral_24574/*"userSvtCoin"*/);
    sub_1C32C20(&StringLiteral_21852/*"mstEventScript"*/);
    sub_1C32C20(&StringLiteral_22059/*"mstSvtSkill"*/);
    sub_1C32C20(&StringLiteral_22008/*"mstSpotLayer"*/);
    sub_1C32C20(&StringLiteral_24576/*"userSvtCommandCard"*/);
    sub_1C32C20(&StringLiteral_24561/*"userQuestInfo"*/);
    sub_1C32C20(&StringLiteral_21768/*"mstEffect"*/);
    sub_1C32C20(&StringLiteral_21913/*"mstItem"*/);
    sub_1C32C20(&StringLiteral_21989/*"mstSelectBonusBase"*/);
    sub_1C32C20(&StringLiteral_21833/*"mstEventPointGroupAdd"*/);
    sub_1C32C20(&StringLiteral_21956/*"mstQuestMessage"*/);
    sub_1C32C20(&StringLiteral_22320/*"npcFollowerRelease"*/);
    sub_1C32C20(&StringLiteral_21877/*"mstFuncCategory"*/);
    sub_1C32C20(&StringLiteral_22105/*"mstWarBoardMessage"*/);
    sub_1C32C20(&StringLiteral_24546/*"userGame"*/);
    sub_1C32C20(&StringLiteral_21902/*"mstGift"*/);
    sub_1C32C20(&StringLiteral_22113/*"mstWarBoardReinforcements"*/);
    sub_1C32C20(&StringLiteral_21780/*"mstEventBoardGameToken"*/);
    sub_1C32C20(&StringLiteral_21922/*"mstMapGimmickLayer"*/);
    sub_1C32C20(&StringLiteral_22029/*"mstSvtCommandCodeUnlock"*/);
    sub_1C32C20(&StringLiteral_21697/*"mstAssist"*/);
    sub_1C32C20(&StringLiteral_24687/*"viewWaveEnemy"*/);
    sub_1C32C20(&StringLiteral_22324/*"npcSvtEquip"*/);
    sub_1C32C20(&StringLiteral_21972/*"mstQuestScriptMaterialNext"*/);
    sub_1C32C20(&StringLiteral_22035/*"mstSvtExp"*/);
    sub_1C32C20(&StringLiteral_24571/*"userSvt"*/);
    sub_1C32C20(&StringLiteral_24683/*"viewEnemy"*/);
    sub_1C32C20(&StringLiteral_21868/*"mstEventUiRelease"*/);
    sub_1C32C20(&StringLiteral_24126/*"totalEventRace"*/);
    sub_1C32C20(&StringLiteral_21872/*"mstFieldMotion"*/);
    sub_1C32C20(&StringLiteral_21842/*"mstEventRandomMission"*/);
    sub_1C32C20(&StringLiteral_21849/*"mstEventRewardScene"*/);
    sub_1C32C20(&StringLiteral_21875/*"mstFriendshipSvt"*/);
    sub_1C32C20(&StringLiteral_21911/*"mstIndividualityPersonality"*/);
    sub_1C32C20(&StringLiteral_21744/*"mstCombineCostume"*/);
    sub_1C32C20(&StringLiteral_21743/*"mstCombineAppendPassiveSkill"*/);
    sub_1C32C20(&StringLiteral_21801/*"mstEventDiggingReward"*/);
    sub_1C32C20(&StringLiteral_22094/*"mstWarBoardActionTrend"*/);
    sub_1C32C20(&StringLiteral_21711/*"mstBattleScript"*/);
    sub_1C32C20(&StringLiteral_21883/*"mstGachaAppend"*/);
    sub_1C32C20(&StringLiteral_22116/*"mstWarBoardSquareIndexGroup"*/);
    sub_1C32C20(&StringLiteral_21876/*"mstFunc"*/);
    sub_1C32C20(&StringLiteral_21794/*"mstEventConquestReward"*/);
    sub_1C32C20(&StringLiteral_22099/*"mstWarBoardEffect"*/);
    sub_1C32C20(&StringLiteral_22130/*"mstWarQuestSelection"*/);
    sub_1C32C20(&StringLiteral_24506/*"userDeck"*/);
    sub_1C32C20(&StringLiteral_21931/*"mstMasterMissionDisplayInfo"*/);
    sub_1C32C20(&StringLiteral_22127/*"mstWarGroup"*/);
    sub_1C32C20(&StringLiteral_21991/*"mstShop"*/);
    sub_1C32C20(&StringLiteral_22108/*"mstWarBoardPartySkill"*/);
    sub_1C32C20(&StringLiteral_24521/*"userEventItemLinkSvt"*/);
    sub_1C32C20(&StringLiteral_21831/*"mstEventPointBuff"*/);
    sub_1C32C20(&StringLiteral_21952/*"mstQuestExtension"*/);
    sub_1C32C20(&StringLiteral_24570/*"userSupportDeck"*/);
    sub_1C32C20(&StringLiteral_22010/*"mstSpotRoad"*/);
    sub_1C32C20(&StringLiteral_22069/*"mstSvtVoiceRelation"*/);
    sub_1C32C20(&StringLiteral_21746/*"mstCombineLimitGift"*/);
    sub_1C32C20(&StringLiteral_21795/*"mstEventCooltimeReward"*/);
    sub_1C32C20(&StringLiteral_21787/*"mstEventBulletinBoard"*/);
    sub_1C32C20(&StringLiteral_21846/*"mstEventRewardBg"*/);
    sub_1C32C20(&StringLiteral_21725/*"mstBoxGachaTalk"*/);
    sub_1C32C20(&StringLiteral_24555/*"userPaymentLimit"*/);
    sub_1C32C20(&StringLiteral_21878/*"mstFuncDisp"*/);
    sub_1C32C20(&StringLiteral_22056/*"mstSvtScript"*/);
    sub_1C32C20(&StringLiteral_21919/*"mstMapCond"*/);
    sub_1C32C20(&StringLiteral_21938/*"mstMyroomAddBgDiff"*/);
    sub_1C32C20(&StringLiteral_24520/*"userEventFortification"*/);
    sub_1C32C20(&StringLiteral_22107/*"mstWarBoardOnboardSkill"*/);
    sub_1C32C20(&StringLiteral_21890/*"mstGachaGroup"*/);
    sub_1C32C20(&StringLiteral_24685/*"viewQuestEnemyInfo"*/);
    sub_1C32C20(&StringLiteral_24495/*"userAccountLinkage"*/);
    sub_1C32C20(&StringLiteral_22030/*"mstSvtComment"*/);
    sub_1C32C20(&StringLiteral_22077/*"mstTreasureDevice"*/);
    sub_1C32C20(&StringLiteral_24684/*"viewGachaFeaturedSvt"*/);
    sub_1C32C20(&StringLiteral_24554/*"userNpcSvtRecord"*/);
    sub_1C32C20(&StringLiteral_21709/*"mstBattlePoint"*/);
    sub_1C32C20(&StringLiteral_21823/*"mstEventMissionGroup"*/);
    sub_1C32C20(&StringLiteral_24562/*"userQuestRecord"*/);
    sub_1C32C20(&StringLiteral_21983/*"mstRestrictionMessage"*/);
    sub_1C32C20(&StringLiteral_21904/*"mstGiftDetail"*/);
    sub_1C32C20(&StringLiteral_21898/*"mstGachaTicket"*/);
    sub_1C32C20(&StringLiteral_22052/*"mstSvtPhoto"*/);
    sub_1C32C20(&StringLiteral_22690/*"pickupUserFollower"*/);
    sub_1C32C20(&StringLiteral_21854/*"mstEventStatus"*/);
    sub_1C32C20(&StringLiteral_22031/*"mstSvtCommentAdd"*/);
    sub_1C32C20(&StringLiteral_22049/*"mstSvtOverwrite"*/);
    sub_1C32C20(&StringLiteral_22319/*"npcFollower"*/);
    sub_1C32C20(&StringLiteral_21793/*"mstEventCommandAssist"*/);
    sub_1C32C20(&StringLiteral_19151/*"eventSvtFatigue"*/);
    sub_1C32C20(&StringLiteral_21887/*"mstGachaBonusSelectLineup"*/);
    sub_1C32C20(&StringLiteral_21788/*"mstEventBulletinBoardRelease"*/);
    sub_1C32C20(&StringLiteral_22034/*"mstSvtExceed"*/);
    sub_1C32C20(&StringLiteral_22044/*"mstSvtLimitSpoilerProtection"*/);
    sub_1C32C20(&StringLiteral_22067/*"mstSvtVoice"*/);
    sub_1C32C20(&StringLiteral_21986/*"mstRestrictionWhole"*/);
    sub_1C32C20(&StringLiteral_24544/*"userGachaExtraCount"*/);
    sub_1C32C20(&StringLiteral_21924/*"mstMapGimmickPath"*/);
    sub_1C32C20(&StringLiteral_21861/*"mstEventTowerReward"*/);
    sub_1C32C20(&StringLiteral_21740/*"mstClassRelationOverwrite"*/);
    sub_1C32C20(&StringLiteral_21692/*"mstAi"*/);
    sub_1C32C20(&StringLiteral_24497/*"userBoxGacha"*/);
    sub_1C32C20(&StringLiteral_22024/*"mstSvtCard"*/);
    sub_1C32C20(&StringLiteral_24545/*"userGachaPickupCollateral"*/);
    sub_1C32C20(&StringLiteral_24543/*"userGachaDrawLog"*/);
    sub_1C32C20(&StringLiteral_22117/*"mstWarBoardStage"*/);
    sub_1C32C20(&StringLiteral_24510/*"userEquip"*/);
    sub_1C32C20(&StringLiteral_21848/*"mstEventRewardGuideRelease"*/);
    sub_1C32C20(&StringLiteral_21735/*"mstClassBoardCommandSpell"*/);
    sub_1C32C20(&StringLiteral_21929/*"mstMasterIndividualitySelect"*/);
    sub_1C32C20(&StringLiteral_22131/*"mstWarRelease"*/);
    sub_1C32C20(&StringLiteral_21885/*"mstGachaBehavior"*/);
    sub_1C32C20(&StringLiteral_22089/*"mstWar"*/);
    sub_1C32C20(&StringLiteral_21782/*"mstEventBonusFilter"*/);
    sub_1C32C20(&StringLiteral_21974/*"mstQuestScriptRelease"*/);
    sub_1C32C20(&StringLiteral_24522/*"userEventMap"*/);
    sub_1C32C20(&StringLiteral_21828/*"mstEventPanelSpot"*/);
    sub_1C32C20(&StringLiteral_21732/*"mstClass"*/);
    sub_1C32C20(&StringLiteral_24494/*"userAccessary"*/);
    sub_1C32C20(&StringLiteral_22042/*"mstSvtLimitAdd"*/);
    sub_1C32C20(&StringLiteral_21973/*"mstQuestScriptMaterialOverwrite"*/);
    sub_1C32C20(&StringLiteral_18120/*"combineExp"*/);
    sub_1C32C20(&StringLiteral_24538/*"userFormation"*/);
    sub_1C32C20(&StringLiteral_22106/*"mstWarBoardMessageScript"*/);
    sub_1C32C20(&StringLiteral_21836/*"mstEventProgressValue"*/);
    sub_1C32C20(&StringLiteral_24586/*"userSvtVoicePlayed"*/);
    sub_1C32C20(&StringLiteral_22023/*"mstSvtBattlePoint"*/);
    sub_1C32C20(&StringLiteral_22037/*"mstSvtFlag"*/);
    sub_1C32C20(&StringLiteral_21719/*"mstBoardMessage"*/);
    sub_1C32C20(&StringLiteral_21827/*"mstEventPanelScan"*/);
    sub_1C32C20(&StringLiteral_22043/*"mstSvtLimitImage"*/);
    sub_1C32C20(&StringLiteral_21800/*"mstEventDiggingBlock"*/);
    sub_1C32C20(&StringLiteral_24530/*"userEventRandomMission"*/);
    sub_1C32C20(&StringLiteral_21695/*"mstArea"*/);
    sub_1C32C20(&StringLiteral_24127/*"totalEventRaid"*/);
    sub_1C32C20(&StringLiteral_22301/*"notEndEventMissionFix"*/);
    sub_1C32C20(&StringLiteral_21997/*"mstShopScript"*/);
    sub_1C32C20(&StringLiteral_24523/*"userEventMission"*/);
    sub_1C32C20(&StringLiteral_21932/*"mstMasterPhoto"*/);
    sub_1C32C20(&StringLiteral_21819/*"mstEventMissionActionAdd"*/);
    sub_1C32C20(&StringLiteral_21752/*"mstCombineTd"*/);
    sub_1C32C20(&StringLiteral_24580/*"userSvtFirstGetTime"*/);
    sub_1C32C20(&StringLiteral_21721/*"mstBoost"*/);
    sub_1C32C20(&StringLiteral_22057/*"mstSvtScriptAdd"*/);
    sub_1C32C20(&StringLiteral_21723/*"mstBoxGachaBase"*/);
    sub_1C32C20(&StringLiteral_21704/*"mstBannerAdd"*/);
    sub_1C32C20(&StringLiteral_21690/*"mstAccessary"*/);
    sub_1C32C20(&StringLiteral_22080/*"mstTreasureDeviceSequenceWeight"*/);
    sub_1C32C20(&StringLiteral_24528/*"userEventRace"*/);
    sub_1C32C20(&StringLiteral_21953/*"mstQuestGroup"*/);
    sub_1C32C20(&StringLiteral_21835/*"mstEventPointUpperRelease"*/);
    sub_1C32C20(&StringLiteral_24584/*"userSvtLeader"*/);
    sub_1C32C20(&StringLiteral_22041/*"mstSvtLimit"*/);
    sub_1C32C20(&StringLiteral_24536/*"userFollow"*/);
    sub_1C32C20(&StringLiteral_21816/*"mstEventLocationCampaign"*/);
    sub_1C32C20(&StringLiteral_21749/*"mstCombineQp"*/);
    sub_1C32C20(&StringLiteral_21777/*"mstEvent"*/);
    sub_1C32C20(&StringLiteral_22038/*"mstSvtFlagRelease"*/);
    sub_1C32C20(&StringLiteral_24539/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_1C32C20(&StringLiteral_24558/*"userPrivilege"*/);
    sub_1C32C20(&StringLiteral_21754/*"mstCommandCode"*/);
    sub_1C32C20(&StringLiteral_22021/*"mstSvtAppendPassiveSkill"*/);
    sub_1C32C20(&StringLiteral_21812/*"mstEventGroup"*/);
    sub_1C32C20(&StringLiteral_21886/*"mstGachaBonusSelect"*/);
    sub_1C32C20(&StringLiteral_24514/*"userEventBoardGameToken"*/);
    sub_1C32C20(&StringLiteral_21934/*"mstMissionItemDisplay"*/);
    sub_1C32C20(&StringLiteral_21939/*"mstMyroomSvtSpecialImage"*/);
    sub_1C32C20(&StringLiteral_22114/*"mstWarBoardRoad"*/);
    sub_1C32C20(&StringLiteral_21726/*"mstBuff"*/);
    sub_1C32C20(&StringLiteral_24740/*"warBoardData"*/);
    sub_1C32C20(&StringLiteral_21909/*"mstIllustrator"*/);
    sub_1C32C20(&StringLiteral_24122/*"totalBoxGacha"*/);
    sub_1C32C20(&StringLiteral_22055/*"mstSvtRarity"*/);
    sub_1C32C20(&StringLiteral_22090/*"mstWarAdd"*/);
    sub_1C32C20(&StringLiteral_21925/*"mstMapGimmickPathRelease"*/);
    sub_1C32C20(&StringLiteral_24540/*"userFriendRequestHistory"*/);
    sub_1C32C20(&StringLiteral_24492/*"user"*/);
    sub_1C32C20(&StringLiteral_17363/*"boxGachaHistory"*/);
    sub_1C32C20(&StringLiteral_21879/*"mstFuncGroup"*/);
    sub_1C32C20(&StringLiteral_21759/*"mstCommonConsume"*/);
    sub_1C32C20(&StringLiteral_22101/*"mstWarBoardEventScript"*/);
    sub_1C32C20(&StringLiteral_21903/*"mstGiftAdd"*/);
    sub_1C32C20(&StringLiteral_21867/*"mstEventUi"*/);
    sub_1C32C20(&StringLiteral_22007/*"mstSpotImage"*/);
    sub_1C32C20(&StringLiteral_22033/*"mstSvtCostumeRelease"*/);
    sub_1C32C20(&StringLiteral_24499/*"userClassStatistics"*/);
    sub_1C32C20(&StringLiteral_21920/*"mstMapGimmick"*/);
    sub_1C32C20(&StringLiteral_21960/*"mstQuestPhaseIndividuality"*/);
    sub_1C32C20(&StringLiteral_21865/*"mstEventTutorial"*/);
    sub_1C32C20(&StringLiteral_22128/*"mstWarGroupIgnore"*/);
    sub_1C32C20(&StringLiteral_22124/*"mstWarBoardStageWall"*/);
    sub_1C32C20(&StringLiteral_24534/*"userEventTrade"*/);
    sub_1C32C20(&StringLiteral_21694/*"mstAiField"*/);
    sub_1C32C20(&StringLiteral_21873/*"mstFriendPointGachaAdjust"*/);
    sub_1C32C20(&StringLiteral_22066/*"mstSvtTreasureDeviceRelease"*/);
    sub_1C32C20(&StringLiteral_21957/*"mstQuestPhase"*/);
    sub_1C32C20(&StringLiteral_24516/*"userEventDataLost"*/);
    sub_1C32C20(&StringLiteral_22022/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_1C32C20(&StringLiteral_22065/*"mstSvtTreasureDeviceDamage"*/);
    sub_1C32C20(&StringLiteral_22013/*"mstStage"*/);
    sub_1C32C20(&StringLiteral_21742/*"mstCombine"*/);
    sub_1C32C20(&StringLiteral_21789/*"mstEventCampaign"*/);
    sub_1C32C20(&StringLiteral_22121/*"mstWarBoardStageNpc"*/);
    sub_1C32C20(&StringLiteral_22658/*"paymentHistory"*/);
    sub_1C32C20(&StringLiteral_19317/*"exchangeSvt"*/);
    sub_1C32C20(&StringLiteral_22014/*"mstStageRemap"*/);
    sub_1C32C20(&StringLiteral_21981/*"mstRestriction"*/);
    sub_1C32C20(&StringLiteral_21970/*"mstQuestScript"*/);
    sub_1C32C20(&StringLiteral_21850/*"mstEventRewardSceneRelease"*/);
    sub_1C32C20(&StringLiteral_22084/*"mstVoiceCond"*/);
    sub_1C32C20(&StringLiteral_24569/*"userSubEquip"*/);
    sub_1C32C20(&StringLiteral_21843/*"mstEventRecipe"*/);
    sub_1C32C20(&StringLiteral_22032/*"mstSvtCostume"*/);
    sub_1C32C20(&StringLiteral_22053/*"mstSvtProfile"*/);
    sub_1C32C20(&StringLiteral_21761/*"mstCommonRestriction"*/);
    sub_1C32C20(&StringLiteral_24548/*"userHeelPortrait"*/);
    sub_1C32C20(&StringLiteral_22002/*"mstSkillGroupOverwrite"*/);
    sub_1C32C20(&StringLiteral_24502/*"userCommandCodeCollection"*/);
    sub_1C32C20(&StringLiteral_21757/*"mstCommandCodeSkillRelease"*/);
    sub_1C32C20(&StringLiteral_21769/*"mstEffectMovie"*/);
    sub_1C32C20(&StringLiteral_21962/*"mstQuestPickup"*/);
    sub_1C32C20(&StringLiteral_22120/*"mstWarBoardStageLayout"*/);
    sub_1C32C20(&StringLiteral_22095/*"mstWarBoardActionTrendCond"*/);
    sub_1C32C20(&StringLiteral_21791/*"mstEventCombine"*/);
    sub_1C32C20(&StringLiteral_22109/*"mstWarBoardQuest"*/);
    sub_1C32C20(&StringLiteral_21950/*"mstQuestConsumeItem"*/);
    sub_1C32C20(&StringLiteral_21959/*"mstQuestPhaseDetailAdd"*/);
    sub_1C32C20(&StringLiteral_21908/*"mstHeelPortrait"*/);
    sub_1C32C20(&StringLiteral_19318/*"exchangeSvtCoinGivenNum"*/);
    sub_1C32C20(&StringLiteral_24557/*"userPresentHistory"*/);
    sub_1C32C20(&StringLiteral_21731/*"mstChaldeaGatePickup"*/);
    sub_1C32C20(&StringLiteral_22110/*"mstWarBoardRatingBase"*/);
    sub_1C32C20(&StringLiteral_21891/*"mstGachaImage"*/);
    sub_1C32C20(&StringLiteral_21775/*"mstEquipImage"*/);
    sub_1C32C20(&StringLiteral_24529/*"userEventRaid"*/);
    sub_1C32C20(&StringLiteral_22028/*"mstSvtCollection"*/);
    sub_1C32C20(&StringLiteral_19688/*"friendshipQuestDialogInfo"*/);
    sub_1C32C20(&StringLiteral_21940/*"mstNews"*/);
    sub_1C32C20(&StringLiteral_21881/*"mstGacha"*/);
    sub_1C32C20(&StringLiteral_22001/*"mstSkillGroup"*/);
    sub_1C32C20(&StringLiteral_21907/*"mstGuide"*/);
    sub_1C32C20(&StringLiteral_21894/*"mstGachaPickupCollateralGroup"*/);
    sub_1C32C20(&StringLiteral_21737/*"mstClassBoardLock"*/);
    sub_1C32C20(&StringLiteral_21834/*"mstEventPointUpper"*/);
    sub_1C32C20(&StringLiteral_21716/*"mstBlankEarthSpot"*/);
    sub_1C32C20(&StringLiteral_22071/*"mstTerminalOverwrite"*/);
    sub_1C32C20(&StringLiteral_21776/*"mstEquipSkill"*/);
    sub_1C32C20(&StringLiteral_21869/*"mstEventUiValue"*/);
    sub_1C32C20(&StringLiteral_24504/*"userContinue"*/);
    sub_1C32C20(&StringLiteral_21947/*"mstQuestAdd"*/);
    sub_1C32C20(&StringLiteral_21736/*"mstClassBoardLine"*/);
    sub_1C32C20(&StringLiteral_24436/*"updateProfileDialogInfo"*/);
    sub_1C32C20(&StringLiteral_22082/*"mstVoice"*/);
    sub_1C32C20(&StringLiteral_24524/*"userEventMissionConditionDetail"*/);
    sub_1C32C20(&StringLiteral_21696/*"mstAssetbundleKey"*/);
    sub_1C32C20(&StringLiteral_21825/*"mstEventPanelMap"*/);
    sub_1C32C20(&StringLiteral_24553/*"userLogin"*/);
    sub_1C32C20(&StringLiteral_21916/*"mstLoginQuest"*/);
    sub_1C32C20(&StringLiteral_21942/*"mstPartialMaintenance"*/);
    sub_1C32C20(&StringLiteral_24531/*"userEventSpot"*/);
    sub_1C32C20(&StringLiteral_21845/*"mstEventReward"*/);
    sub_1C32C20(&StringLiteral_21797/*"mstEventDataLostBattleReset"*/);
    sub_1C32C20(&StringLiteral_21698/*"mstAttri"*/);
    sub_1C32C20(&StringLiteral_22119/*"mstWarBoardStageDetail"*/);
    sub_1C32C20(&StringLiteral_22060/*"mstSvtSkillAdd"*/);
    sub_1C32C20(&StringLiteral_24527/*"userEventQuestCooltime"*/);
    sub_1C32C20(&StringLiteral_21971/*"mstQuestScriptBranchMaterial"*/);
    sub_1C32C20(&StringLiteral_21807/*"mstEventFatigueRecovery"*/);
    sub_1C32C20(&StringLiteral_22097/*"mstWarBoardAi"*/);
    sub_1C32C20(&StringLiteral_22076/*"mstTreasureBoxTalk"*/);
    sub_1C32C20(&StringLiteral_22100/*"mstWarBoardEvent"*/);
    sub_1C32C20(&StringLiteral_22086/*"mstVoicePlayCond"*/);
    sub_1C32C20(&StringLiteral_21888/*"mstGachaDetail"*/);
    sub_1C32C20(&StringLiteral_21856/*"mstEventSuperBoss"*/);
    sub_1C32C20(&StringLiteral_21999/*"mstSkillAdd"*/);
    byte_4C3688A = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_34223E4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1C32E7C(v2);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_22018/*"mstSvt"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_22030/*"mstSvtComment"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_22053/*"mstSvtProfile"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_22089/*"mstWar"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_17050/*"battle"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_22077/*"mstTreasureDevice"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_22041/*"mstSvtLimit"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_22063/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_21732/*"mstClass"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_22056/*"mstSvtScript"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_22024/*"mstSvtCard"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_22059/*"mstSvtSkill"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_22050/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_24571/*"userSvt"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_24585/*"userSvtStorage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_22013/*"mstStage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_22039/*"mstSvtGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_21716/*"mstBlankEarthSpot"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_21717/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_22005/*"mstSpot"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_22007/*"mstSpotImage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_22010/*"mstSpotRoad"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_21920/*"mstMapGimmick"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_21902/*"mstGift"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_21903/*"mstGiftAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_22017/*"mstSubEquip"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_24492/*"user"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_24546/*"userGame"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_24506/*"userDeck"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_24575/*"userSvtCollection"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_21874/*"mstFriendship"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_21881/*"mstGacha"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_21891/*"mstGachaImage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_24541/*"userGacha"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_24545/*"userGachaPickupCollateral"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24552/*"userItem"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_21913/*"mstItem"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_21898/*"mstGachaTicket"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_21882/*"mstGachaAdjustAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_21892/*"mstGachaPickup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_21873/*"mstFriendPointGachaAdjust"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_21884/*"mstGachaBaseCollateral"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_21690/*"mstAccessary"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_24494/*"userAccessary"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_24569/*"userSubEquip"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_24004/*"tblUserGame"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_21991/*"mstShop"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_22016/*"mstStoneShop"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_21702/*"mstBankShop"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_21997/*"mstShopScript"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_21772/*"mstEquip"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_21774/*"mstEquipExp"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_21776/*"mstEquipSkill"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_24510/*"userEquip"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_24538/*"userFormation"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_21998/*"mstSkill"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_22004/*"mstSkillLv"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_22000/*"mstSkillDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_21876/*"mstFunc"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_21726/*"mstBuff"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_21895/*"mstGachaRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_24560/*"userQuest"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_24561/*"userQuestInfo"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_24562/*"userQuestRecord"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_22081/*"mstUserExp"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_21940/*"mstNews"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_22070/*"mstTelop"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_22497/*"otherUserGame"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_24003/*"tblFriend"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_24556/*"userPresentBox"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_21777/*"mstEvent"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_21946/*"mstQuest"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_21947/*"mstQuestAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_21965/*"mstQuestRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_21957/*"mstQuestPhase"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_21958/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_21953/*"mstQuestGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_21964/*"mstQuestRandomGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_21950/*"mstQuestConsumeItem"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_21956/*"mstQuestMessage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_24686/*"viewQuestInfo"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_24683/*"viewEnemy"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_24685/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_21695/*"mstArea"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_21712/*"mstBgm"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_21837/*"mstEventQuest"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_21789/*"mstEventCampaign"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_21749/*"mstCombineQp"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_21748/*"mstCombineMaterial"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_21791/*"mstEventCombine"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_22035/*"mstSvtExp"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_21751/*"mstCombineSkill"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_21752/*"mstCombineTd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_21909/*"mstIllustrator"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_21766/*"mstCv"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_22079/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_22078/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_24537/*"userFollower"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_22319/*"npcFollower"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_22325/*"npcSvtFollower"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_24512/*"userEvent"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_24559/*"userProfile"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_24566/*"userShop"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_24504/*"userContinue"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_21763/*"mstConstant"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_21764/*"mstConstantLong"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_21765/*"mstConstantStr"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_21758/*"mstCommandSpell"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_21692/*"mstAi"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_21693/*"mstAiAct"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_22067/*"mstSvtVoice"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_21699/*"mstAttriRelation"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_21739/*"mstClassRelation"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_21768/*"mstEffect"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_21775/*"mstEquipImage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_21745/*"mstCombineLimit"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_21730/*"mstCard"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_21750/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_22042/*"mstSvtLimitAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_22055/*"mstSvtRarity"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_21990/*"mstSetItem"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_21980/*"mstRecover"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_21703/*"mstBanner"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_21995/*"mstShopRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_21845/*"mstEventReward"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_21798/*"mstEventDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_21857/*"mstEventSvt"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_21722/*"mstBoxGacha"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_21723/*"mstBoxGachaBase"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_21725/*"mstBoxGachaTalk"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_24497/*"userBoxGacha"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17363/*"boxGachaHistory"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_21705/*"mstBattleBg"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_22072/*"mstTips"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_24553/*"userLogin"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_22082/*"mstVoice"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_21847/*"mstEventRewardExtra"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_21817/*"mstEventMission"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_21821/*"mstEventMissionCondition"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    140,
    (Il2CppObject *)StringLiteral_21822/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    141,
    (Il2CppObject *)StringLiteral_21818/*"mstEventMissionAction"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    142,
    (Il2CppObject *)StringLiteral_21819/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    145,
    (Il2CppObject *)StringLiteral_21762/*"mstCompleteMission"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    143,
    (Il2CppObject *)StringLiteral_21820/*"mstEventMissionAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    144,
    (Il2CppObject *)StringLiteral_21851/*"mstEventRewardSet"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    146,
    (Il2CppObject *)StringLiteral_24523/*"userEventMission"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    147,
    (Il2CppObject *)StringLiteral_24524/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    148,
    (Il2CppObject *)StringLiteral_21724/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    149,
    (Il2CppObject *)StringLiteral_21741/*"mstClosedMessage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    150,
    (Il2CppObject *)StringLiteral_24584/*"userSvtLeader"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    151,
    (Il2CppObject *)StringLiteral_21879/*"mstFuncGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    152,
    (Il2CppObject *)StringLiteral_21841/*"mstEventRaid"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    153,
    (Il2CppObject *)StringLiteral_24127/*"totalEventRaid"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    154,
    (Il2CppObject *)StringLiteral_24529/*"userEventRaid"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    155,
    (Il2CppObject *)StringLiteral_21829/*"mstEventPoint"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    156,
    (Il2CppObject *)StringLiteral_21832/*"mstEventPointGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    157,
    (Il2CppObject *)StringLiteral_24125/*"totalEventPoint"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    158,
    (Il2CppObject *)StringLiteral_24526/*"userEventPoint"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    159,
    (Il2CppObject *)StringLiteral_24557/*"userPresentHistory"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    160,
    (Il2CppObject *)StringLiteral_21930/*"mstMasterMission"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    161,
    (Il2CppObject *)StringLiteral_22034/*"mstSvtExceed"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    162,
    (Il2CppObject *)StringLiteral_21942/*"mstPartialMaintenance"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    163,
    (Il2CppObject *)StringLiteral_21907/*"mstGuide"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    164,
    (Il2CppObject *)StringLiteral_21931/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    165,
    (Il2CppObject *)StringLiteral_21890/*"mstGachaGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    166,
    (Il2CppObject *)StringLiteral_21967/*"mstQuestReset"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    167,
    (Il2CppObject *)StringLiteral_22090/*"mstWarAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    168,
    (Il2CppObject *)StringLiteral_21813/*"mstEventItemDisplay"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    169,
    (Il2CppObject *)StringLiteral_21814/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    170,
    (Il2CppObject *)StringLiteral_21815/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    171,
    (Il2CppObject *)StringLiteral_21865/*"mstEventTutorial"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    172,
    (Il2CppObject *)StringLiteral_21866/*"mstEventTutorialCond"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    173,
    (Il2CppObject *)StringLiteral_22088/*"mstVoiceRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    174,
    (Il2CppObject *)StringLiteral_21856/*"mstEventSuperBoss"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    175,
    (Il2CppObject *)StringLiteral_24532/*"userEventSuperBoss"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    176,
    (Il2CppObject *)StringLiteral_21970/*"mstQuestScript"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    177,
    (Il2CppObject *)StringLiteral_21974/*"mstQuestScriptRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    178,
    (Il2CppObject *)StringLiteral_21933/*"mstMaterialFolder"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    179,
    (Il2CppObject *)StringLiteral_21981/*"mstRestriction"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    180,
    (Il2CppObject *)StringLiteral_21968/*"mstQuestRestriction"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    181,
    (Il2CppObject *)StringLiteral_22069/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    182,
    (Il2CppObject *)StringLiteral_21993/*"mstShopDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    183,
    (Il2CppObject *)StringLiteral_22057/*"mstSvtScriptAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    184,
    (Il2CppObject *)StringLiteral_21742/*"mstCombine"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    185,
    (Il2CppObject *)StringLiteral_21694/*"mstAiField"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    186,
    (Il2CppObject *)StringLiteral_22031/*"mstSvtCommentAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    187,
    (Il2CppObject *)StringLiteral_21808/*"mstEventFilter"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    188,
    (Il2CppObject *)StringLiteral_24570/*"userSupportDeck"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    189,
    (Il2CppObject *)StringLiteral_21849/*"mstEventRewardScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    190,
    (Il2CppObject *)StringLiteral_21870/*"mstEventVoicePlay"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    191,
    (Il2CppObject *)StringLiteral_21897/*"mstGachaSub"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    192,
    (Il2CppObject *)StringLiteral_21888/*"mstGachaDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    193,
    (Il2CppObject *)StringLiteral_21886/*"mstGachaBonusSelect"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    194,
    (Il2CppObject *)StringLiteral_21887/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    195,
    (Il2CppObject *)StringLiteral_22026/*"mstSvtChange"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    196,
    (Il2CppObject *)StringLiteral_22084/*"mstVoiceCond"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    197,
    (Il2CppObject *)StringLiteral_21713/*"mstBgmRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    198,
    (Il2CppObject *)StringLiteral_21937/*"mstMyroomAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    199,
    (Il2CppObject *)StringLiteral_21992/*"mstShopAction"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    200,
    (Il2CppObject *)StringLiteral_21850/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    201,
    (Il2CppObject *)StringLiteral_21917/*"mstMap"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    202,
    (Il2CppObject *)StringLiteral_21919/*"mstMapCond"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    203,
    (Il2CppObject *)StringLiteral_21918/*"mstMapButton"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    204,
    (Il2CppObject *)StringLiteral_21704/*"mstBannerAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    205,
    (Il2CppObject *)StringLiteral_21949/*"mstQuestBehavior"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    206,
    (Il2CppObject *)StringLiteral_21778/*"mstEventAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    207,
    (Il2CppObject *)StringLiteral_22073/*"mstTotalLogin"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    208,
    (Il2CppObject *)StringLiteral_22036/*"mstSvtFilter"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    209,
    (Il2CppObject *)StringLiteral_21744/*"mstCombineCostume"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    210,
    (Il2CppObject *)StringLiteral_22032/*"mstSvtCostume"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    211,
    (Il2CppObject *)StringLiteral_22033/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    212,
    (Il2CppObject *)StringLiteral_22011/*"mstStaffPhoto"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    213,
    (Il2CppObject *)StringLiteral_22012/*"mstStaffPhotoCostume"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    214,
    (Il2CppObject *)StringLiteral_24540/*"userFriendRequestHistory"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    215,
    (Il2CppObject *)StringLiteral_24496/*"userBlacklist"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    216,
    (Il2CppObject *)StringLiteral_21915/*"mstItemSelect"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    217,
    (Il2CppObject *)StringLiteral_21839/*"mstEventRace"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    218,
    (Il2CppObject *)StringLiteral_21840/*"mstEventRaceResult"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    219,
    (Il2CppObject *)StringLiteral_21963/*"mstQuestRacePoint"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    220,
    (Il2CppObject *)StringLiteral_24528/*"userEventRace"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    221,
    (Il2CppObject *)StringLiteral_21852/*"mstEventScript"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    222,
    (Il2CppObject *)StringLiteral_21853/*"mstEventScriptRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    223,
    (Il2CppObject *)StringLiteral_22009/*"mstSpotPath"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    224,
    (Il2CppObject *)StringLiteral_22006/*"mstSpotAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    225,
    (Il2CppObject *)StringLiteral_24126/*"totalEventRace"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    226,
    (Il2CppObject *)StringLiteral_21833/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    227,
    (Il2CppObject *)StringLiteral_22087/*"mstVoicePlayGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    228,
    (Il2CppObject *)StringLiteral_22086/*"mstVoicePlayCond"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    229,
    (Il2CppObject *)StringLiteral_21896/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    230,
    (Il2CppObject *)StringLiteral_22037/*"mstSvtFlag"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    231,
    (Il2CppObject *)StringLiteral_22038/*"mstSvtFlagRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    232,
    (Il2CppObject *)StringLiteral_21816/*"mstEventLocationCampaign"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    233,
    (Il2CppObject *)StringLiteral_21729/*"mstCampaignInfo"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    234,
    (Il2CppObject *)StringLiteral_21767/*"mstDialogMessage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    235,
    (Il2CppObject *)StringLiteral_22040/*"mstSvtIndividuality"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    236,
    (Il2CppObject *)StringLiteral_21719/*"mstBoardMessage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    237,
    (Il2CppObject *)StringLiteral_21720/*"mstBoardMessageRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    238,
    (Il2CppObject *)StringLiteral_21858/*"mstEventSvtFatigue"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    239,
    (Il2CppObject *)StringLiteral_24517/*"userEventDeck"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    240,
    (Il2CppObject *)StringLiteral_21860/*"mstEventTower"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    241,
    (Il2CppObject *)StringLiteral_21861/*"mstEventTowerReward"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    242,
    (Il2CppObject *)StringLiteral_21787/*"mstEventBulletinBoard"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    243,
    (Il2CppObject *)StringLiteral_21788/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    244,
    (Il2CppObject *)StringLiteral_21806/*"mstEventFactory"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    245,
    (Il2CppObject *)StringLiteral_21994/*"mstShopGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    246,
    (Il2CppObject *)StringLiteral_21700/*"mstAuraEffect"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    247,
    (Il2CppObject *)StringLiteral_21701/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    248,
    (Il2CppObject *)StringLiteral_24525/*"userEventMissionFix"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    249,
    (Il2CppObject *)StringLiteral_22301/*"notEndEventMissionFix"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    250,
    (Il2CppObject *)StringLiteral_21770/*"mstEnemyMaster"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    251,
    (Il2CppObject *)StringLiteral_21771/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    252,
    (Il2CppObject *)StringLiteral_22061/*"mstSvtSkillRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    253,
    (Il2CppObject *)StringLiteral_22051/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    254,
    (Il2CppObject *)StringLiteral_22066/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    255,
    (Il2CppObject *)StringLiteral_21926/*"mstMapGimmickRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    256,
    (Il2CppObject *)StringLiteral_21754/*"mstCommandCode"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    257,
    (Il2CppObject *)StringLiteral_22029/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    258,
    (Il2CppObject *)StringLiteral_24501/*"userCommandCode"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    259,
    (Il2CppObject *)StringLiteral_24502/*"userCommandCodeCollection"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    260,
    (Il2CppObject *)StringLiteral_24577/*"userSvtCommandCode"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    261,
    (Il2CppObject *)StringLiteral_21756/*"mstCommandCodeSkill"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    262,
    (Il2CppObject *)StringLiteral_21757/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    263,
    (Il2CppObject *)StringLiteral_21755/*"mstCommandCodeComment"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    264,
    (Il2CppObject *)StringLiteral_21854/*"mstEventStatus"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    265,
    (Il2CppObject *)StringLiteral_21855/*"mstEventStatusQuest"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    266,
    (Il2CppObject *)StringLiteral_21761/*"mstCommonRestriction"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    267,
    (Il2CppObject *)StringLiteral_21831/*"mstEventPointBuff"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    268,
    (Il2CppObject *)StringLiteral_24536/*"userFollow"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    269,
    (Il2CppObject *)StringLiteral_21848/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    270,
    (Il2CppObject *)StringLiteral_22324/*"npcSvtEquip"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    271,
    (Il2CppObject *)StringLiteral_21790/*"mstEventCampaignRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    272,
    (Il2CppObject *)StringLiteral_22046/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    273,
    (Il2CppObject *)StringLiteral_21803/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    274,
    (Il2CppObject *)StringLiteral_21830/*"mstEventPointActivity"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    275,
    (Il2CppObject *)StringLiteral_21877/*"mstFuncCategory"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    276,
    (Il2CppObject *)StringLiteral_21962/*"mstQuestPickup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    277,
    (Il2CppObject *)StringLiteral_21867/*"mstEventUi"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    278,
    (Il2CppObject *)StringLiteral_21868/*"mstEventUiRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    279,
    (Il2CppObject *)StringLiteral_21869/*"mstEventUiValue"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    280,
    (Il2CppObject *)StringLiteral_21794/*"mstEventConquestReward"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    281,
    (Il2CppObject *)StringLiteral_22320/*"npcFollowerRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    282,
    (Il2CppObject *)StringLiteral_21782/*"mstEventBonusFilter"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    283,
    (Il2CppObject *)StringLiteral_21783/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    284,
    (Il2CppObject *)StringLiteral_21784/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    285,
    (Il2CppObject *)StringLiteral_24544/*"userGachaExtraCount"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    286,
    (Il2CppObject *)StringLiteral_21753/*"mstCommandCardRankParam"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    287,
    (Il2CppObject *)StringLiteral_24576/*"userSvtCommandCard"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    288,
    (Il2CppObject *)StringLiteral_21945/*"mstPrivilege"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    289,
    (Il2CppObject *)StringLiteral_24558/*"userPrivilege"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    290,
    (Il2CppObject *)StringLiteral_21951/*"mstQuestDateRange"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    291,
    (Il2CppObject *)StringLiteral_21834/*"mstEventPointUpper"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    292,
    (Il2CppObject *)StringLiteral_21835/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    293,
    (Il2CppObject *)StringLiteral_24563/*"userQuestRoute"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    294,
    (Il2CppObject *)StringLiteral_21785/*"mstEventBossStatusUi"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    295,
    (Il2CppObject *)StringLiteral_21760/*"mstCommonRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    296,
    (Il2CppObject *)StringLiteral_21975/*"mstQuestSpotRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    297,
    (Il2CppObject *)StringLiteral_22085/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    298,
    (Il2CppObject *)StringLiteral_21740/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    299,
    (Il2CppObject *)StringLiteral_21812/*"mstEventGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    300,
    (Il2CppObject *)StringLiteral_21696/*"mstAssetbundleKey"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    301,
    (Il2CppObject *)StringLiteral_24122/*"totalBoxGacha"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    302,
    (Il2CppObject *)StringLiteral_22065/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    303,
    (Il2CppObject *)StringLiteral_19151/*"eventSvtFatigue"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    304,
    (Il2CppObject *)StringLiteral_21846/*"mstEventRewardBg"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    305,
    (Il2CppObject *)StringLiteral_21807/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    306,
    (Il2CppObject *)StringLiteral_19139/*"eventBoostItemUsed"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    307,
    (Il2CppObject *)StringLiteral_22015/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    308,
    (Il2CppObject *)StringLiteral_21959/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    309,
    (Il2CppObject *)StringLiteral_22083/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    310,
    (Il2CppObject *)StringLiteral_22014/*"mstStageRemap"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    311,
    (Il2CppObject *)StringLiteral_18120/*"combineExp"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    312,
    (Il2CppObject *)StringLiteral_21779/*"mstEventBoardGameCell"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    313,
    (Il2CppObject *)StringLiteral_21780/*"mstEventBoardGameToken"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    314,
    (Il2CppObject *)StringLiteral_21781/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    315,
    (Il2CppObject *)StringLiteral_24514/*"userEventBoardGameToken"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    316,
    (Il2CppObject *)StringLiteral_22020/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    317,
    (Il2CppObject *)StringLiteral_21941/*"mstOpeningMovie"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    318,
    (Il2CppObject *)StringLiteral_22044/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    319,
    (Il2CppObject *)StringLiteral_22690/*"pickupUserFollower"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    320,
    (Il2CppObject *)StringLiteral_22028/*"mstSvtCollection"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    321,
    (Il2CppObject *)StringLiteral_21885/*"mstGachaBehavior"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    322,
    (Il2CppObject *)StringLiteral_21838/*"mstEventQuestCooltime"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    323,
    (Il2CppObject *)StringLiteral_24527/*"userEventQuestCooltime"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    324,
    (Il2CppObject *)StringLiteral_21721/*"mstBoost"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    325,
    (Il2CppObject *)StringLiteral_22091/*"mstWarBoard"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    326,
    (Il2CppObject *)StringLiteral_22115/*"mstWarBoardSquare"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    327,
    (Il2CppObject *)StringLiteral_22114/*"mstWarBoardRoad"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    328,
    (Il2CppObject *)StringLiteral_22117/*"mstWarBoardStage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    329,
    (Il2CppObject *)StringLiteral_22092/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    330,
    (Il2CppObject *)StringLiteral_22094/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    331,
    (Il2CppObject *)StringLiteral_22125/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    332,
    (Il2CppObject *)StringLiteral_22120/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    333,
    (Il2CppObject *)StringLiteral_22121/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    334,
    (Il2CppObject *)StringLiteral_22124/*"mstWarBoardStageWall"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    335,
    (Il2CppObject *)StringLiteral_22097/*"mstWarBoardAi"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    336,
    (Il2CppObject *)StringLiteral_22110/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    337,
    (Il2CppObject *)StringLiteral_22111/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    338,
    (Il2CppObject *)StringLiteral_22104/*"mstWarBoardItem"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    339,
    (Il2CppObject *)StringLiteral_22126/*"mstWarBoardTreasure"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    340,
    (Il2CppObject *)StringLiteral_22109/*"mstWarBoardQuest"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    341,
    (Il2CppObject *)StringLiteral_24740/*"warBoardData"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    342,
    (Il2CppObject *)StringLiteral_22103/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    343,
    (Il2CppObject *)StringLiteral_22095/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    344,
    (Il2CppObject *)StringLiteral_22093/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    345,
    (Il2CppObject *)StringLiteral_22113/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    346,
    (Il2CppObject *)StringLiteral_22123/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    347,
    (Il2CppObject *)StringLiteral_21825/*"mstEventPanelMap"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    348,
    (Il2CppObject *)StringLiteral_21826/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    349,
    (Il2CppObject *)StringLiteral_21828/*"mstEventPanelSpot"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    350,
    (Il2CppObject *)StringLiteral_21827/*"mstEventPanelScan"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    351,
    (Il2CppObject *)StringLiteral_21799/*"mstEventDigging"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    352,
    (Il2CppObject *)StringLiteral_21801/*"mstEventDiggingReward"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    353,
    (Il2CppObject *)StringLiteral_21800/*"mstEventDiggingBlock"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    354,
    (Il2CppObject *)StringLiteral_24518/*"userEventDigging"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    355,
    (Il2CppObject *)StringLiteral_21759/*"mstCommonConsume"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    356,
    (Il2CppObject *)StringLiteral_24522/*"userEventMap"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    357,
    (Il2CppObject *)StringLiteral_24531/*"userEventSpot"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    358,
    (Il2CppObject *)StringLiteral_22127/*"mstWarGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    359,
    (Il2CppObject *)StringLiteral_22043/*"mstSvtLimitImage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    360,
    (Il2CppObject *)StringLiteral_19688/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    361,
    (Il2CppObject *)StringLiteral_21969/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    362,
    (Il2CppObject *)StringLiteral_21697/*"mstAssist"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    363,
    (Il2CppObject *)StringLiteral_22099/*"mstWarBoardEffect"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    364,
    (Il2CppObject *)StringLiteral_22107/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    365,
    (Il2CppObject *)StringLiteral_17124/*"beforeBirthDay"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    366,
    (Il2CppObject *)StringLiteral_21916/*"mstLoginQuest"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    367,
    (Il2CppObject *)StringLiteral_21792/*"mstEventCombineCostume"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    368,
    (Il2CppObject *)StringLiteral_22122/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    369,
    (Il2CppObject *)StringLiteral_22064/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    370,
    (Il2CppObject *)StringLiteral_21999/*"mstSkillAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    371,
    (Il2CppObject *)StringLiteral_22045/*"mstSvtLvDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    372,
    (Il2CppObject *)StringLiteral_21883/*"mstGachaAppend"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    373,
    (Il2CppObject *)StringLiteral_24543/*"userGachaDrawLog"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    374,
    (Il2CppObject *)StringLiteral_22021/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    375,
    (Il2CppObject *)StringLiteral_24572/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    376,
    (Il2CppObject *)StringLiteral_24573/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    377,
    (Il2CppObject *)StringLiteral_22022/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    378,
    (Il2CppObject *)StringLiteral_21743/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    379,
    (Il2CppObject *)StringLiteral_22027/*"mstSvtCoin"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    380,
    (Il2CppObject *)StringLiteral_24574/*"userSvtCoin"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    381,
    (Il2CppObject *)StringLiteral_22019/*"mstSvtAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    382,
    (Il2CppObject *)StringLiteral_22074/*"mstTreasureBox"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    383,
    (Il2CppObject *)StringLiteral_22075/*"mstTreasureBoxGift"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    384,
    (Il2CppObject *)StringLiteral_22076/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    385,
    (Il2CppObject *)StringLiteral_24519/*"userEventExpedition"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    386,
    (Il2CppObject *)StringLiteral_21804/*"mstEventExpedition"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    387,
    (Il2CppObject *)StringLiteral_21805/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    388,
    (Il2CppObject *)StringLiteral_21843/*"mstEventRecipe"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    389,
    (Il2CppObject *)StringLiteral_21844/*"mstEventRecipeGift"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    390,
    (Il2CppObject *)StringLiteral_24520/*"userEventFortification"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    391,
    (Il2CppObject *)StringLiteral_21809/*"mstEventFortification"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    392,
    (Il2CppObject *)StringLiteral_21810/*"mstEventFortificationDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    393,
    (Il2CppObject *)StringLiteral_21811/*"mstEventFortificationSvt"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    394,
    (Il2CppObject *)StringLiteral_24586/*"userSvtVoicePlayed"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    395,
    (Il2CppObject *)StringLiteral_24436/*"updateProfileDialogInfo"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    396,
    (Il2CppObject *)StringLiteral_22047/*"mstSvtMaterialTd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    397,
    (Il2CppObject *)StringLiteral_21706/*"mstBattleMasterImage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    398,
    (Il2CppObject *)StringLiteral_24539/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    399,
    (Il2CppObject *)StringLiteral_24530/*"userEventRandomMission"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    400,
    (Il2CppObject *)StringLiteral_21836/*"mstEventProgressValue"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    401,
    (Il2CppObject *)StringLiteral_22048/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    402,
    (Il2CppObject *)StringLiteral_21842/*"mstEventRandomMission"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    403,
    (Il2CppObject *)StringLiteral_24542/*"userGachaDrawHistory"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    404,
    (Il2CppObject *)StringLiteral_24500/*"userCoinRoom"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    405,
    (Il2CppObject *)StringLiteral_21786/*"mstEventBuddyPoint"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    406,
    (Il2CppObject *)StringLiteral_21859/*"mstEventSvtPointRank"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    407,
    (Il2CppObject *)StringLiteral_24533/*"userEventSvtPoint"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    408,
    (Il2CppObject *)StringLiteral_21872/*"mstFieldMotion"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    409,
    (Il2CppObject *)StringLiteral_24509/*"userDeleteReservation"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    410,
    (Il2CppObject *)StringLiteral_22058/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    411,
    (Il2CppObject *)StringLiteral_21773/*"mstEquipAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    412,
    (Il2CppObject *)StringLiteral_21966/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    413,
    (Il2CppObject *)StringLiteral_24513/*"userEventAlloutBattle"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    414,
    (Il2CppObject *)StringLiteral_21972/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    415,
    (Il2CppObject *)StringLiteral_21707/*"mstBattleMessage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    416,
    (Il2CppObject *)StringLiteral_21708/*"mstBattleMessageGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    417,
    (Il2CppObject *)StringLiteral_24554/*"userNpcSvtRecord"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    418,
    (Il2CppObject *)StringLiteral_21728/*"mstBuffTypeDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    419,
    (Il2CppObject *)StringLiteral_22105/*"mstWarBoardMessage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    420,
    (Il2CppObject *)StringLiteral_22108/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    421,
    (Il2CppObject *)StringLiteral_22106/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    422,
    (Il2CppObject *)StringLiteral_22130/*"mstWarQuestSelection"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    423,
    (Il2CppObject *)StringLiteral_22119/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    424,
    (Il2CppObject *)StringLiteral_21973/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    425,
    (Il2CppObject *)StringLiteral_21971/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    426,
    (Il2CppObject *)StringLiteral_21691/*"mstAdCheckPoint"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    427,
    (Il2CppObject *)StringLiteral_21904/*"mstGiftDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    428,
    (Il2CppObject *)StringLiteral_21746/*"mstCombineLimitGift"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    429,
    (Il2CppObject *)StringLiteral_21795/*"mstEventCooltimeReward"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    430,
    (Il2CppObject *)StringLiteral_24515/*"userEventCooltimeReward"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    431,
    (Il2CppObject *)StringLiteral_21734/*"mstClassBoardClass"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    432,
    (Il2CppObject *)StringLiteral_21733/*"mstClassBoardBase"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    433,
    (Il2CppObject *)StringLiteral_21736/*"mstClassBoardLine"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    434,
    (Il2CppObject *)StringLiteral_21737/*"mstClassBoardLock"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    435,
    (Il2CppObject *)StringLiteral_21738/*"mstClassBoardSquare"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    436,
    (Il2CppObject *)StringLiteral_21735/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    437,
    (Il2CppObject *)StringLiteral_24498/*"userClassBoardSquare"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    438,
    (Il2CppObject *)StringLiteral_22025/*"mstSvtCardAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    439,
    (Il2CppObject *)StringLiteral_21927/*"mstMapLayer"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    440,
    (Il2CppObject *)StringLiteral_22008/*"mstSpotLayer"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    441,
    (Il2CppObject *)StringLiteral_21922/*"mstMapGimmickLayer"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    442,
    (Il2CppObject *)StringLiteral_21796/*"mstEventDataLostBattle"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    443,
    (Il2CppObject *)StringLiteral_21797/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    444,
    (Il2CppObject *)StringLiteral_24516/*"userEventDataLost"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    445,
    (Il2CppObject *)StringLiteral_21954/*"mstQuestHint"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    446,
    (Il2CppObject *)StringLiteral_21880/*"mstFuncTypeDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    447,
    (Il2CppObject *)StringLiteral_21727/*"mstBuffConvert"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    448,
    (Il2CppObject *)StringLiteral_22001/*"mstSkillGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    449,
    (Il2CppObject *)StringLiteral_22002/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    450,
    (Il2CppObject *)StringLiteral_22003/*"mstSkillIndividuality"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    451,
    (Il2CppObject *)StringLiteral_21982/*"mstRestrictionBase"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    452,
    (Il2CppObject *)StringLiteral_21984/*"mstRestrictionSlot"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    453,
    (Il2CppObject *)StringLiteral_21985/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    454,
    (Il2CppObject *)StringLiteral_21983/*"mstRestrictionMessage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    455,
    (Il2CppObject *)StringLiteral_21986/*"mstRestrictionWhole"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    456,
    (Il2CppObject *)StringLiteral_21878/*"mstFuncDisp"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    457,
    (Il2CppObject *)StringLiteral_21793/*"mstEventCommandAssist"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    458,
    (Il2CppObject *)StringLiteral_21823/*"mstEventMissionGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    459,
    (Il2CppObject *)StringLiteral_21747/*"mstCombineLimitRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    460,
    (Il2CppObject *)StringLiteral_22080/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    461,
    (Il2CppObject *)StringLiteral_21908/*"mstHeelPortrait"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    462,
    (Il2CppObject *)StringLiteral_24548/*"userHeelPortrait"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    463,
    (Il2CppObject *)StringLiteral_22326/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    464,
    (Il2CppObject *)StringLiteral_21889/*"mstGachaExtraGift"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    465,
    (Il2CppObject *)StringLiteral_21824/*"mstEventMural"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    466,
    (Il2CppObject *)StringLiteral_24687/*"viewWaveEnemy"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    467,
    (Il2CppObject *)StringLiteral_21718/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    468,
    (Il2CppObject *)StringLiteral_21714/*"mstBlankEarthGimmick"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    469,
    (Il2CppObject *)StringLiteral_22071/*"mstTerminalOverwrite"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    470,
    (Il2CppObject *)StringLiteral_19317/*"exchangeSvt"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    471,
    (Il2CppObject *)StringLiteral_22098/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    472,
    (Il2CppObject *)StringLiteral_22100/*"mstWarBoardEvent"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    473,
    (Il2CppObject *)StringLiteral_22101/*"mstWarBoardEventScript"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    474,
    (Il2CppObject *)StringLiteral_22118/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    475,
    (Il2CppObject *)StringLiteral_22116/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    476,
    (Il2CppObject *)StringLiteral_22096/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    477,
    (Il2CppObject *)StringLiteral_22112/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    478,
    (Il2CppObject *)StringLiteral_22102/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    479,
    (Il2CppObject *)StringLiteral_22054/*"mstSvtProfilePush"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    480,
    (Il2CppObject *)StringLiteral_21924/*"mstMapGimmickPath"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    481,
    (Il2CppObject *)StringLiteral_21925/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    482,
    (Il2CppObject *)StringLiteral_22049/*"mstSvtOverwrite"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    483,
    (Il2CppObject *)StringLiteral_21912/*"mstIndividualityPolicy"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    484,
    (Il2CppObject *)StringLiteral_21911/*"mstIndividualityPersonality"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    485,
    (Il2CppObject *)StringLiteral_21698/*"mstAttri"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    486,
    (Il2CppObject *)StringLiteral_22068/*"mstSvtVoicePattern"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    487,
    (Il2CppObject *)StringLiteral_24547/*"userGameCommon"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    488,
    (Il2CppObject *)StringLiteral_22052/*"mstSvtPhoto"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    489,
    (Il2CppObject *)StringLiteral_21932/*"mstMasterPhoto"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    490,
    (Il2CppObject *)StringLiteral_21944/*"mstPhotoFrame"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    491,
    (Il2CppObject *)StringLiteral_22129/*"mstWarMessage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    492,
    (Il2CppObject *)StringLiteral_21948/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    493,
    (Il2CppObject *)StringLiteral_21871/*"mstExcludeMotionCond"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    494,
    (Il2CppObject *)StringLiteral_24551/*"userInterruptionQuest"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    495,
    (Il2CppObject *)StringLiteral_22062/*"mstSvtTransform"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    496,
    (Il2CppObject *)StringLiteral_21928/*"mstMapUpdateSchedule"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    497,
    (Il2CppObject *)StringLiteral_21961/*"mstQuestPhasePresent"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    498,
    (Il2CppObject *)StringLiteral_24495/*"userAccountLinkage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    499,
    (Il2CppObject *)StringLiteral_21936/*"mstMissionNaviTransition"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    500,
    (Il2CppObject *)StringLiteral_21862/*"mstEventTradeGoods"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    501,
    (Il2CppObject *)StringLiteral_21863/*"mstEventTradePickup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    502,
    (Il2CppObject *)StringLiteral_21864/*"mstEventTradeStore"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    503,
    (Il2CppObject *)StringLiteral_24534/*"userEventTrade"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    504,
    (Il2CppObject *)StringLiteral_21935/*"mstMissionNaviQuest"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    505,
    (Il2CppObject *)StringLiteral_22658/*"paymentHistory"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    506,
    (Il2CppObject *)StringLiteral_24535/*"userExternalPaymentStone"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    507,
    (Il2CppObject *)StringLiteral_21960/*"mstQuestPhaseIndividuality"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    508,
    (Il2CppObject *)StringLiteral_24684/*"viewGachaFeaturedSvt"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    514,
    (Il2CppObject *)StringLiteral_21769/*"mstEffectMovie"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    509,
    (Il2CppObject *)StringLiteral_21893/*"mstGachaPickupCollateral"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    510,
    (Il2CppObject *)StringLiteral_21894/*"mstGachaPickupCollateralGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    511,
    (Il2CppObject *)StringLiteral_21709/*"mstBattlePoint"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    512,
    (Il2CppObject *)StringLiteral_21710/*"mstBattlePointPhase"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    513,
    (Il2CppObject *)StringLiteral_22023/*"mstSvtBattlePoint"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    515,
    (Il2CppObject *)StringLiteral_21943/*"mstPaymentLimit"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    516,
    (Il2CppObject *)StringLiteral_24555/*"userPaymentLimit"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    517,
    (Il2CppObject *)StringLiteral_21987/*"mstRoadmap"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    518,
    (Il2CppObject *)StringLiteral_24565/*"userRecommendSupport"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    520,
    (Il2CppObject *)StringLiteral_21978/*"mstRecommendAdviceMessage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    519,
    (Il2CppObject *)StringLiteral_21979/*"mstRecommendSupportQuest"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    521,
    (Il2CppObject *)StringLiteral_24564/*"userRecommendFollower"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    522,
    (Il2CppObject *)StringLiteral_21914/*"mstItemDropEfficiency"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    523,
    (Il2CppObject *)StringLiteral_21715/*"mstBlankEarthGimmickAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    524,
    (Il2CppObject *)StringLiteral_22131/*"mstWarRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    525,
    (Il2CppObject *)StringLiteral_21989/*"mstSelectBonusBase"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    526,
    (Il2CppObject *)StringLiteral_21988/*"mstSelectBonus"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    527,
    (Il2CppObject *)StringLiteral_21939/*"mstMyroomSvtSpecialImage"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    528,
    (Il2CppObject *)StringLiteral_21996/*"mstShopReset"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    529,
    (Il2CppObject *)StringLiteral_22323/*"npcSvtDisplayTypeDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    530,
    (Il2CppObject *)StringLiteral_21875/*"mstFriendshipSvt"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    531,
    (Il2CppObject *)StringLiteral_19318/*"exchangeSvtCoinGivenNum"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    532,
    (Il2CppObject *)StringLiteral_21731/*"mstChaldeaGatePickup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    533,
    (Il2CppObject *)StringLiteral_22128/*"mstWarGroupIgnore"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    534,
    (Il2CppObject *)StringLiteral_21910/*"mstImagePartsGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    535,
    (Il2CppObject *)StringLiteral_24550/*"userImagePartsGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    536,
    (Il2CppObject *)StringLiteral_21934/*"mstMissionItemDisplay"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    537,
    (Il2CppObject *)StringLiteral_21976/*"mstQuestUseItemGroup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    538,
    (Il2CppObject *)StringLiteral_21977/*"mstQuestUseItemPickup"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    539,
    (Il2CppObject *)StringLiteral_24521/*"userEventItemLinkSvt"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    540,
    (Il2CppObject *)StringLiteral_21955/*"mstQuestHintOverwrite"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    541,
    (Il2CppObject *)StringLiteral_22965/*"reachedWaveInfo"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    542,
    (Il2CppObject *)StringLiteral_21899/*"mstGallery"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    543,
    (Il2CppObject *)StringLiteral_21901/*"mstGalleryResource"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    544,
    (Il2CppObject *)StringLiteral_22060/*"mstSvtSkillAdd"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    545,
    (Il2CppObject *)StringLiteral_21900/*"mstGalleryFolderRelease"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    546,
    (Il2CppObject *)StringLiteral_24580/*"userSvtFirstGetTime"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    547,
    (Il2CppObject *)StringLiteral_21952/*"mstQuestExtension"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    548,
    (Il2CppObject *)StringLiteral_24581/*"userSvtGrand"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    549,
    (Il2CppObject *)StringLiteral_21905/*"mstGrandGraph"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    550,
    (Il2CppObject *)StringLiteral_21906/*"mstGrandGraphDetail"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    551,
    (Il2CppObject *)StringLiteral_24499/*"userClassStatistics"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    552,
    (Il2CppObject *)StringLiteral_21802/*"mstEventEquipSkillParts"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    553,
    (Il2CppObject *)StringLiteral_21929/*"mstMasterIndividualitySelect"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    554,
    (Il2CppObject *)StringLiteral_21938/*"mstMyroomAddBgDiff"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    555,
    (Il2CppObject *)StringLiteral_21711/*"mstBattleScript"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  DataNameKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_DataNameKind_Kind__string__o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)DataNameKind_TypeInfo->static_fields, (int32_t)v1, v3, v4);
}


void DataNameKind___ctor(DataNameKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *DataNameKind__GetName(int32_t kind, const MethodInfo *method)
{
  DataNameKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4C36889 & 1) == 0 )
  {
    sub_1C32C20(&DataNameKind_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_4C36889 = 1;
  }
  v3 = DataNameKind_TypeInfo;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
    v3 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1C32E7C(0);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_3422D18 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}