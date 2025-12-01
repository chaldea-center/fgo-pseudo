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

  if ( (byte_4CC629C & 1) == 0 )
  {
    sub_1C713B0(&DataNameKind_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_1C713B0(&StringLiteral_21966/*"mstEventTradeGoods"*/);
    sub_1C713B0(&StringLiteral_24675/*"userGameCommon"*/);
    sub_1C713B0(&StringLiteral_21926/*"mstEventMissionConditionDetail"*/);
    sub_1C713B0(&StringLiteral_22179/*"mstTreasureBoxGift"*/);
    sub_1C713B0(&StringLiteral_21858/*"mstCommandCodeComment"*/);
    sub_1C713B0(&StringLiteral_21922/*"mstEventMissionAction"*/);
    sub_1C713B0(&StringLiteral_24641/*"userEventAlloutBattle"*/);
    sub_1C713B0(&StringLiteral_23080/*"reachedWaveInfo"*/);
    sub_1C713B0(&StringLiteral_21887/*"mstEventBonusFilterGroupInfo"*/);
    sub_1C713B0(&StringLiteral_24692/*"userRecommendFollower"*/);
    sub_1C713B0(&StringLiteral_22070/*"mstQuestReleaseOverwrite"*/);
    sub_1C713B0(&StringLiteral_22030/*"mstMapGimmickRelease"*/);
    sub_1C713B0(&StringLiteral_21993/*"mstGachaExtraGift"*/);
    sub_1C713B0(&StringLiteral_22430/*"npcSvtFollowerIndividuality"*/);
    sub_1C713B0(&StringLiteral_21889/*"mstEventBossStatusUi"*/);
    sub_1C713B0(&StringLiteral_24701/*"userSvtAppendPassiveSkillLv"*/);
    sub_1C713B0(&StringLiteral_21842/*"mstClassRelation"*/);
    sub_1C713B0(&StringLiteral_21796/*"mstAiAct"*/);
    sub_1C713B0(&StringLiteral_22124/*"mstSvtAnimationOverwrite"*/);
    sub_1C713B0(&StringLiteral_22072/*"mstQuestRestriction"*/);
    sub_1C713B0(&StringLiteral_21869/*"mstCv"*/);
    sub_1C713B0(&StringLiteral_24646/*"userEventDigging"*/);
    sub_1C713B0(&StringLiteral_24125/*"tblUserGame"*/);
    sub_1C713B0(&StringLiteral_21900/*"mstEventDataLostBattle"*/);
    sub_1C713B0(&StringLiteral_21890/*"mstEventBuddyPoint"*/);
    sub_1C713B0(&StringLiteral_21816/*"mstBgmRelease"*/);
    sub_1C713B0(&StringLiteral_22151/*"mstSvtMaterialTd"*/);
    sub_1C713B0(&StringLiteral_21863/*"mstCommonRelease"*/);
    sub_1C713B0(&StringLiteral_21978/*"mstFriendship"*/);
    sub_1C713B0(&StringLiteral_24626/*"userClassBoardSquare"*/);
    sub_1C713B0(&StringLiteral_21867/*"mstConstantLong"*/);
    sub_1C713B0(&StringLiteral_21841/*"mstClassBoardSquare"*/);
    sub_1C713B0(&StringLiteral_24705/*"userSvtCommandCode"*/);
    sub_1C713B0(&StringLiteral_22053/*"mstQuestBehavior"*/);
    sub_1C713B0(&StringLiteral_22018/*"mstItemDropEfficiency"*/);
    sub_1C713B0(&StringLiteral_22150/*"mstSvtMaterialFolder"*/);
    sub_1C713B0(&StringLiteral_22226/*"mstWarBoardStagePieceDetail"*/);
    sub_1C713B0(&StringLiteral_21967/*"mstEventTradePickup"*/);
    sub_1C713B0(&StringLiteral_21888/*"mstEventBonusFilterGroupMember"*/);
    sub_1C713B0(&StringLiteral_22058/*"mstQuestHint"*/);
    sub_1C713B0(&StringLiteral_21861/*"mstCommandSpell"*/);
    sub_1C713B0(&StringLiteral_21794/*"mstAdCheckPoint"*/);
    sub_1C713B0(&StringLiteral_22049/*"mstPrivilege"*/);
    sub_1C713B0(&StringLiteral_22059/*"mstQuestHintOverwrite"*/);
    sub_1C713B0(&StringLiteral_21823/*"mstBoardMessageRelease"*/);
    sub_1C713B0(&StringLiteral_21999/*"mstGachaRelease"*/);
    sub_1C713B0(&StringLiteral_24637/*"userDeleteReservation"*/);
    sub_1C713B0(&StringLiteral_22178/*"mstTreasureBox"*/);
    sub_1C713B0(&StringLiteral_24678/*"userImagePartsGroup"*/);
    sub_1C713B0(&StringLiteral_21878/*"mstEquipExp"*/);
    sub_1C713B0(&StringLiteral_21885/*"mstEventBoardGameTokenReward"*/);
    sub_1C713B0(&StringLiteral_22131/*"mstSvtCoin"*/);
    sub_1C713B0(&StringLiteral_22162/*"mstSvtScriptMultiple"*/);
    sub_1C713B0(&StringLiteral_22037/*"mstMaterialFolder"*/);
    sub_1C713B0(&StringLiteral_21896/*"mstEventCombineCostume"*/);
    sub_1C713B0(&StringLiteral_22055/*"mstQuestDateRange"*/);
    sub_1C713B0(&StringLiteral_22222/*"mstWarBoardStageBoss"*/);
    sub_1C713B0(&StringLiteral_21830/*"mstBuffConvert"*/);
    sub_1C713B0(&StringLiteral_22081/*"mstQuestUseItemPickup"*/);
    sub_1C713B0(&StringLiteral_21803/*"mstAuraEffect"*/);
    sub_1C713B0(&StringLiteral_21944/*"mstEventRaceResult"*/);
    sub_1C713B0(&StringLiteral_22094/*"mstSetItem"*/);
    sub_1C713B0(&StringLiteral_22427/*"npcSvtDisplayTypeDetail"*/);
    sub_1C713B0(&StringLiteral_22116/*"mstStaffPhotoCostume"*/);
    sub_1C713B0(&StringLiteral_22004/*"mstGalleryFolderRelease"*/);
    sub_1C713B0(&StringLiteral_22084/*"mstRecover"*/);
    sub_1C713B0(&StringLiteral_21959/*"mstEventStatusQuest"*/);
    sub_1C713B0(&StringLiteral_24643/*"userEventCooltimeReward"*/);
    sub_1C713B0(&StringLiteral_22047/*"mstPaymentLimit"*/);
    sub_1C713B0(&StringLiteral_22200/*"mstWarBoardActionTrendGroup"*/);
    sub_1C713B0(&StringLiteral_24691/*"userQuestRoute"*/);
    sub_1C713B0(&StringLiteral_22108/*"mstSkillLv"*/);
    sub_1C713B0(&StringLiteral_22143/*"mstSvtGroup"*/);
    sub_1C713B0(&StringLiteral_22187/*"mstVoiceClosedMessage"*/);
    sub_1C713B0(&StringLiteral_21909/*"mstEventExpeditionPiece"*/);
    sub_1C713B0(&StringLiteral_22052/*"mstQuestAutoOrganizationAdjust"*/);
    sub_1C713B0(&StringLiteral_22152/*"mstSvtMultiPortrait"*/);
    sub_1C713B0(&StringLiteral_21912/*"mstEventFilter"*/);
    sub_1C713B0(&StringLiteral_22039/*"mstMissionNaviQuest"*/);
    sub_1C713B0(&StringLiteral_24693/*"userRecommendSupport"*/);
    sub_1C713B0(&StringLiteral_24680/*"userItem"*/);
    sub_1C713B0(&StringLiteral_21908/*"mstEventExpedition"*/);
    sub_1C713B0(&StringLiteral_21943/*"mstEventRace"*/);
    sub_1C713B0(&StringLiteral_22073/*"mstQuestRestrictionInfo"*/);
    sub_1C713B0(&StringLiteral_22071/*"mstQuestReset"*/);
    sub_1C713B0(&StringLiteral_24647/*"userEventExpedition"*/);
    sub_1C713B0(&StringLiteral_21915/*"mstEventFortificationSvt"*/);
    sub_1C713B0(&StringLiteral_22227/*"mstWarBoardStageReinforcements"*/);
    sub_1C713B0(&StringLiteral_21836/*"mstClassBoardBase"*/);
    sub_1C713B0(&StringLiteral_21874/*"mstEnemyMaster"*/);
    sub_1C713B0(&StringLiteral_21804/*"mstAuraEffectPosOverwrite"*/);
    sub_1C713B0(&StringLiteral_22088/*"mstRestrictionSlot"*/);
    sub_1C713B0(&StringLiteral_22001/*"mstGachaSub"*/);
    sub_1C713B0(&StringLiteral_21963/*"mstEventSvtPointRank"*/);
    sub_1C713B0(&StringLiteral_21936/*"mstEventPointGroup"*/);
    sub_1C713B0(&StringLiteral_21882/*"mstEventAdd"*/);
    sub_1C713B0(&StringLiteral_21876/*"mstEquip"*/);
    sub_1C713B0(&StringLiteral_21948/*"mstEventRecipeGift"*/);
    sub_1C713B0(&StringLiteral_22174/*"mstTelop"*/);
    sub_1C713B0(&StringLiteral_24703/*"userSvtCollection"*/);
    sub_1C713B0(&StringLiteral_24653/*"userEventMissionFix"*/);
    sub_1C713B0(&StringLiteral_22086/*"mstRestrictionBase"*/);
    sub_1C713B0(&StringLiteral_22176/*"mstTips"*/);
    sub_1C713B0(&StringLiteral_22115/*"mstStaffPhoto"*/);
    sub_1C713B0(&StringLiteral_21805/*"mstBankShop"*/);
    sub_1C713B0(&StringLiteral_21974/*"mstEventVoicePlay"*/);
    sub_1C713B0(&StringLiteral_22080/*"mstQuestUseItemGroup"*/);
    sub_1C713B0(&StringLiteral_21914/*"mstEventFortificationDetail"*/);
    sub_1C713B0(&StringLiteral_24660/*"userEventSuperBoss"*/);
    sub_1C713B0(&StringLiteral_21913/*"mstEventFortification"*/);
    sub_1C713B0(&StringLiteral_21961/*"mstEventSvt"*/);
    sub_1C713B0(&StringLiteral_22191/*"mstVoicePlayGroup"*/);
    sub_1C713B0(&StringLiteral_24645/*"userEventDeck"*/);
    sub_1C713B0(&StringLiteral_22110/*"mstSpotAdd"*/);
    sub_1C713B0(&StringLiteral_21854/*"mstCombineSkill"*/);
    sub_1C713B0(&StringLiteral_22219/*"mstWarBoardSquare"*/);
    sub_1C713B0(&StringLiteral_21831/*"mstBuffTypeDetail"*/);
    sub_1C713B0(&StringLiteral_22197/*"mstWarBoardActionPointClass"*/);
    sub_1C713B0(&StringLiteral_22092/*"mstSelectBonus"*/);
    sub_1C713B0(&StringLiteral_22166/*"mstSvtTransform"*/);
    sub_1C713B0(&StringLiteral_24684/*"userPresentBox"*/);
    sub_1C713B0(&StringLiteral_24661/*"userEventSvtPoint"*/);
    sub_1C713B0(&StringLiteral_24247/*"totalEventPoint"*/);
    sub_1C713B0(&StringLiteral_21856/*"mstCommandCardRankParam"*/);
    sub_1C713B0(&StringLiteral_22202/*"mstWarBoardCommonRelease"*/);
    sub_1C713B0(&StringLiteral_22122/*"mstSvt"*/);
    sub_1C713B0(&StringLiteral_24694/*"userShop"*/);
    sub_1C713B0(&StringLiteral_21883/*"mstEventBoardGameCell"*/);
    sub_1C713B0(&StringLiteral_21942/*"mstEventQuestCooltime"*/);
    sub_1C713B0(&StringLiteral_21984/*"mstFuncTypeDetail"*/);
    sub_1C713B0(&StringLiteral_22119/*"mstStatusEffectPosOverwrite"*/);
    sub_1C713B0(&StringLiteral_19201/*"eventBoostItemUsed"*/);
    sub_1C713B0(&StringLiteral_22097/*"mstShopDetail"*/);
    sub_1C713B0(&StringLiteral_22016/*"mstIndividualityPolicy"*/);
    sub_1C713B0(&StringLiteral_22022/*"mstMapButton"*/);
    sub_1C713B0(&StringLiteral_22229/*"mstWarBoardTacticalTrend"*/);
    sub_1C713B0(&StringLiteral_22121/*"mstSubEquip"*/);
    sub_1C713B0(&StringLiteral_22113/*"mstSpotPath"*/);
    sub_1C713B0(&StringLiteral_22091/*"mstRoadmap"*/);
    sub_1C713B0(&StringLiteral_21851/*"mstCombineMaterial"*/);
    sub_1C713B0(&StringLiteral_21850/*"mstCombineLimitRelease"*/);
    sub_1C713B0(&StringLiteral_22183/*"mstTreasureDeviceLv"*/);
    sub_1C713B0(&StringLiteral_21964/*"mstEventTower"*/);
    sub_1C713B0(&StringLiteral_22102/*"mstSkill"*/);
    sub_1C713B0(&StringLiteral_24679/*"userInterruptionQuest"*/);
    sub_1C713B0(&StringLiteral_22154/*"mstSvtPassiveSkill"*/);
    sub_1C713B0(&StringLiteral_22168/*"mstSvtTreasureDeviceAdd"*/);
    sub_1C713B0(&StringLiteral_21820/*"mstBlankEarthSpotAdd"*/);
    sub_1C713B0(&StringLiteral_24688/*"userQuest"*/);
    sub_1C713B0(&StringLiteral_21925/*"mstEventMissionCondition"*/);
    sub_1C713B0(&StringLiteral_22196/*"mstWarBoardActionPoint"*/);
    sub_1C713B0(&StringLiteral_24663/*"userExternalPaymentStone"*/);
    sub_1C713B0(&StringLiteral_21844/*"mstClosedMessage"*/);
    sub_1C713B0(&StringLiteral_21951/*"mstEventRewardExtra"*/);
    sub_1C713B0(&StringLiteral_21934/*"mstEventPointActivity"*/);
    sub_1C713B0(&StringLiteral_21941/*"mstEventQuest"*/);
    sub_1C713B0(&StringLiteral_21811/*"mstBattleMessageGroup"*/);
    sub_1C713B0(&StringLiteral_24815/*"viewQuestInfo"*/);
    sub_1C713B0(&StringLiteral_22158/*"mstSvtProfilePush"*/);
    sub_1C713B0(&StringLiteral_22182/*"mstTreasureDeviceDetail"*/);
    sub_1C713B0(&StringLiteral_24624/*"userBlacklist"*/);
    sub_1C713B0(&StringLiteral_21907/*"mstEventEquipSkillRelease"*/);
    sub_1C713B0(&StringLiteral_24628/*"userCoinRoom"*/);
    sub_1C713B0(&StringLiteral_21868/*"mstConstantStr"*/);
    sub_1C713B0(&StringLiteral_21906/*"mstEventEquipSkillParts"*/);
    sub_1C713B0(&StringLiteral_22003/*"mstGallery"*/);
    sub_1C713B0(&StringLiteral_24709/*"userSvtGrand"*/);
    sub_1C713B0(&StringLiteral_22120/*"mstStoneShop"*/);
    sub_1C713B0(&StringLiteral_22032/*"mstMapUpdateSchedule"*/);
    sub_1C713B0(&StringLiteral_22177/*"mstTotalLogin"*/);
    sub_1C713B0(&StringLiteral_22045/*"mstOpeningMovie"*/);
    sub_1C713B0(&StringLiteral_21866/*"mstConstant"*/);
    sub_1C713B0(&StringLiteral_22079/*"mstQuestSpotRelease"*/);
    sub_1C713B0(&StringLiteral_21859/*"mstCommandCodeSkill"*/);
    sub_1C713B0(&StringLiteral_22050/*"mstQuest"*/);
    sub_1C713B0(&StringLiteral_22172/*"mstSvtVoicePattern"*/);
    sub_1C713B0(&StringLiteral_21970/*"mstEventTutorialCond"*/);
    sub_1C713B0(&StringLiteral_21818/*"mstBlankEarthGimmickAdd"*/);
    sub_1C713B0(&StringLiteral_22195/*"mstWarBoard"*/);
    sub_1C713B0(&StringLiteral_21945/*"mstEventRaid"*/);
    sub_1C713B0(&StringLiteral_21815/*"mstBgm"*/);
    sub_1C713B0(&StringLiteral_21957/*"mstEventScriptRelease"*/);
    sub_1C713B0(&StringLiteral_24687/*"userProfile"*/);
    sub_1C713B0(&StringLiteral_21924/*"mstEventMissionAdd"*/);
    sub_1C713B0(&StringLiteral_22192/*"mstVoiceRelease"*/);
    sub_1C713B0(&StringLiteral_22068/*"mstQuestRandomGroup"*/);
    sub_1C713B0(&StringLiteral_22040/*"mstMissionNaviTransition"*/);
    sub_1C713B0(&StringLiteral_22099/*"mstShopRelease"*/);
    sub_1C713B0(&StringLiteral_24713/*"userSvtStorage"*/);
    sub_1C713B0(&StringLiteral_21997/*"mstGachaPickupCollateral"*/);
    sub_1C713B0(&StringLiteral_22082/*"mstRecommendAdviceMessage"*/);
    sub_1C713B0(&StringLiteral_22083/*"mstRecommendSupportQuest"*/);
    sub_1C713B0(&StringLiteral_24700/*"userSvtAppendPassiveSkill"*/);
    sub_1C713B0(&StringLiteral_22123/*"mstSvtAdd"*/);
    sub_1C713B0(&StringLiteral_22009/*"mstGrandGraph"*/);
    sub_1C713B0(&StringLiteral_22233/*"mstWarMessage"*/);
    sub_1C713B0(&StringLiteral_21821/*"mstBlankEarthSpotNavimenu"*/);
    sub_1C713B0(&StringLiteral_21809/*"mstBattleMasterImage"*/);
    sub_1C713B0(&StringLiteral_22104/*"mstSkillDetail"*/);
    sub_1C713B0(&StringLiteral_22034/*"mstMasterMission"*/);
    sub_1C713B0(&StringLiteral_22155/*"mstSvtPassiveSkillRelease"*/);
    sub_1C713B0(&StringLiteral_22109/*"mstSpot"*/);
    sub_1C713B0(&StringLiteral_21921/*"mstEventMission"*/);
    sub_1C713B0(&StringLiteral_21853/*"mstCombineQpSvtEquip"*/);
    sub_1C713B0(&StringLiteral_21933/*"mstEventPoint"*/);
    sub_1C713B0(&StringLiteral_21955/*"mstEventRewardSet"*/);
    sub_1C713B0(&StringLiteral_21930/*"mstEventPanelMapDetail"*/);
    sub_1C713B0(&StringLiteral_22129/*"mstSvtCardAdd"*/);
    sub_1C713B0(&StringLiteral_22021/*"mstMap"*/);
    sub_1C713B0(&StringLiteral_21903/*"mstEventDigging"*/);
    sub_1C713B0(&StringLiteral_24669/*"userGacha"*/);
    sub_1C713B0(&StringLiteral_22069/*"mstQuestRelease"*/);
    sub_1C713B0(&StringLiteral_21902/*"mstEventDetail"*/);
    sub_1C713B0(&StringLiteral_22014/*"mstImagePartsGroup"*/);
    sub_1C713B0(&StringLiteral_22031/*"mstMapLayer"*/);
    sub_1C713B0(&StringLiteral_22206/*"mstWarBoardFutureActionTrend"*/);
    sub_1C713B0(&StringLiteral_22107/*"mstSkillIndividuality"*/);
    sub_1C713B0(&StringLiteral_21827/*"mstBoxGachaBaseDetail"*/);
    sub_1C713B0(&StringLiteral_24124/*"tblFriend"*/);
    sub_1C713B0(&StringLiteral_17146/*"beforeBirthDay"*/);
    sub_1C713B0(&StringLiteral_21919/*"mstEventItemDisplayRelease"*/);
    sub_1C713B0(&StringLiteral_22005/*"mstGalleryResource"*/);
    sub_1C713B0(&StringLiteral_17072/*"battle"*/);
    sub_1C713B0(&StringLiteral_22098/*"mstShopGroup"*/);
    sub_1C713B0(&StringLiteral_21802/*"mstAttriRelation"*/);
    sub_1C713B0(&StringLiteral_24629/*"userCommandCode"*/);
    sub_1C713B0(&StringLiteral_21894/*"mstEventCampaignRelease"*/);
    sub_1C713B0(&StringLiteral_22140/*"mstSvtFilter"*/);
    sub_1C713B0(&StringLiteral_22067/*"mstQuestRacePoint"*/);
    sub_1C713B0(&StringLiteral_21968/*"mstEventTradeStore"*/);
    sub_1C713B0(&StringLiteral_22604/*"otherUserGame"*/);
    sub_1C713B0(&StringLiteral_21813/*"mstBattlePointPhase"*/);
    sub_1C713B0(&StringLiteral_21918/*"mstEventItemDisplayGroup"*/);
    sub_1C713B0(&StringLiteral_21833/*"mstCard"*/);
    sub_1C713B0(&StringLiteral_21817/*"mstBlankEarthGimmick"*/);
    sub_1C713B0(&StringLiteral_21810/*"mstBattleMessage"*/);
    sub_1C713B0(&StringLiteral_22089/*"mstRestrictionSlotDetail"*/);
    sub_1C713B0(&StringLiteral_21806/*"mstBanner"*/);
    sub_1C713B0(&StringLiteral_21875/*"mstEnemyMasterBattle"*/);
    sub_1C713B0(&StringLiteral_21917/*"mstEventItemDisplay"*/);
    sub_1C713B0(&StringLiteral_21832/*"mstCampaignInfo"*/);
    sub_1C713B0(&StringLiteral_22167/*"mstSvtTreasureDevice"*/);
    sub_1C713B0(&StringLiteral_22165/*"mstSvtSkillRelease"*/);
    sub_1C713B0(&StringLiteral_22048/*"mstPhotoFrame"*/);
    sub_1C713B0(&StringLiteral_21865/*"mstCompleteMission"*/);
    sub_1C713B0(&StringLiteral_21848/*"mstCombineLimit"*/);
    sub_1C713B0(&StringLiteral_22010/*"mstGrandGraphDetail"*/);
    sub_1C713B0(&StringLiteral_21825/*"mstBoxGacha"*/);
    sub_1C713B0(&StringLiteral_22189/*"mstVoiceMaterialCond"*/);
    sub_1C713B0(&StringLiteral_21986/*"mstGachaAdjustAdd"*/);
    sub_1C713B0(&StringLiteral_22000/*"mstGachaStoryAdjust"*/);
    sub_1C713B0(&StringLiteral_22185/*"mstUserExp"*/);
    sub_1C713B0(&StringLiteral_21975/*"mstExcludeMotionCond"*/);
    sub_1C713B0(&StringLiteral_22208/*"mstWarBoardItem"*/);
    sub_1C713B0(&StringLiteral_21877/*"mstEquipAdd"*/);
    sub_1C713B0(&StringLiteral_21870/*"mstDialogMessage"*/);
    sub_1C713B0(&StringLiteral_22429/*"npcSvtFollower"*/);
    sub_1C713B0(&StringLiteral_21808/*"mstBattleBg"*/);
    sub_1C713B0(&StringLiteral_21837/*"mstClassBoardClass"*/);
    sub_1C713B0(&StringLiteral_24654/*"userEventPoint"*/);
    sub_1C713B0(&StringLiteral_22130/*"mstSvtChange"*/);
    sub_1C713B0(&StringLiteral_22207/*"mstWarBoardIndividualityClass"*/);
    sub_1C713B0(&StringLiteral_21988/*"mstGachaBaseCollateral"*/);
    sub_1C713B0(&StringLiteral_22065/*"mstQuestPhasePresent"*/);
    sub_1C713B0(&StringLiteral_22100/*"mstShopReset"*/);
    sub_1C713B0(&StringLiteral_21928/*"mstEventMural"*/);
    sub_1C713B0(&StringLiteral_21996/*"mstGachaPickup"*/);
    sub_1C713B0(&StringLiteral_22019/*"mstItemSelect"*/);
    sub_1C713B0(&StringLiteral_22144/*"mstSvtIndividuality"*/);
    sub_1C713B0(&StringLiteral_24640/*"userEvent"*/);
    sub_1C713B0(&StringLiteral_22230/*"mstWarBoardTreasure"*/);
    sub_1C713B0(&StringLiteral_22149/*"mstSvtLvDetail"*/);
    sub_1C713B0(&StringLiteral_22215/*"mstWarBoardRatingOffset"*/);
    sub_1C713B0(&StringLiteral_22062/*"mstQuestPhaseDetail"*/);
    sub_1C713B0(&StringLiteral_22096/*"mstShopAction"*/);
    sub_1C713B0(&StringLiteral_22041/*"mstMyroomAdd"*/);
    sub_1C713B0(&StringLiteral_21962/*"mstEventSvtFatigue"*/);
    sub_1C713B0(&StringLiteral_21910/*"mstEventFactory"*/);
    sub_1C713B0(&StringLiteral_24670/*"userGachaDrawHistory"*/);
    sub_1C713B0(&StringLiteral_24665/*"userFollower"*/);
    sub_1C713B0(&StringLiteral_22216/*"mstWarBoardRatingOffsetGroup"*/);
    sub_1C713B0(&StringLiteral_24702/*"userSvtCoin"*/);
    sub_1C713B0(&StringLiteral_21956/*"mstEventScript"*/);
    sub_1C713B0(&StringLiteral_22163/*"mstSvtSkill"*/);
    sub_1C713B0(&StringLiteral_22112/*"mstSpotLayer"*/);
    sub_1C713B0(&StringLiteral_24704/*"userSvtCommandCard"*/);
    sub_1C713B0(&StringLiteral_24689/*"userQuestInfo"*/);
    sub_1C713B0(&StringLiteral_21872/*"mstEffect"*/);
    sub_1C713B0(&StringLiteral_22017/*"mstItem"*/);
    sub_1C713B0(&StringLiteral_22093/*"mstSelectBonusBase"*/);
    sub_1C713B0(&StringLiteral_21937/*"mstEventPointGroupAdd"*/);
    sub_1C713B0(&StringLiteral_22060/*"mstQuestMessage"*/);
    sub_1C713B0(&StringLiteral_22424/*"npcFollowerRelease"*/);
    sub_1C713B0(&StringLiteral_21981/*"mstFuncCategory"*/);
    sub_1C713B0(&StringLiteral_22209/*"mstWarBoardMessage"*/);
    sub_1C713B0(&StringLiteral_24674/*"userGame"*/);
    sub_1C713B0(&StringLiteral_22006/*"mstGift"*/);
    sub_1C713B0(&StringLiteral_22217/*"mstWarBoardReinforcements"*/);
    sub_1C713B0(&StringLiteral_21884/*"mstEventBoardGameToken"*/);
    sub_1C713B0(&StringLiteral_22026/*"mstMapGimmickLayer"*/);
    sub_1C713B0(&StringLiteral_22133/*"mstSvtCommandCodeUnlock"*/);
    sub_1C713B0(&StringLiteral_21800/*"mstAssist"*/);
    sub_1C713B0(&StringLiteral_24816/*"viewWaveEnemy"*/);
    sub_1C713B0(&StringLiteral_22428/*"npcSvtEquip"*/);
    sub_1C713B0(&StringLiteral_22076/*"mstQuestScriptMaterialNext"*/);
    sub_1C713B0(&StringLiteral_22139/*"mstSvtExp"*/);
    sub_1C713B0(&StringLiteral_24699/*"userSvt"*/);
    sub_1C713B0(&StringLiteral_24812/*"viewEnemy"*/);
    sub_1C713B0(&StringLiteral_21972/*"mstEventUiRelease"*/);
    sub_1C713B0(&StringLiteral_24248/*"totalEventRace"*/);
    sub_1C713B0(&StringLiteral_21976/*"mstFieldMotion"*/);
    sub_1C713B0(&StringLiteral_21946/*"mstEventRandomMission"*/);
    sub_1C713B0(&StringLiteral_21953/*"mstEventRewardScene"*/);
    sub_1C713B0(&StringLiteral_21979/*"mstFriendshipSvt"*/);
    sub_1C713B0(&StringLiteral_22015/*"mstIndividualityPersonality"*/);
    sub_1C713B0(&StringLiteral_21847/*"mstCombineCostume"*/);
    sub_1C713B0(&StringLiteral_21846/*"mstCombineAppendPassiveSkill"*/);
    sub_1C713B0(&StringLiteral_21905/*"mstEventDiggingReward"*/);
    sub_1C713B0(&StringLiteral_22198/*"mstWarBoardActionTrend"*/);
    sub_1C713B0(&StringLiteral_21814/*"mstBattleScript"*/);
    sub_1C713B0(&StringLiteral_21987/*"mstGachaAppend"*/);
    sub_1C713B0(&StringLiteral_22220/*"mstWarBoardSquareIndexGroup"*/);
    sub_1C713B0(&StringLiteral_21980/*"mstFunc"*/);
    sub_1C713B0(&StringLiteral_21898/*"mstEventConquestReward"*/);
    sub_1C713B0(&StringLiteral_22203/*"mstWarBoardEffect"*/);
    sub_1C713B0(&StringLiteral_22234/*"mstWarQuestSelection"*/);
    sub_1C713B0(&StringLiteral_24634/*"userDeck"*/);
    sub_1C713B0(&StringLiteral_22035/*"mstMasterMissionDisplayInfo"*/);
    sub_1C713B0(&StringLiteral_22231/*"mstWarGroup"*/);
    sub_1C713B0(&StringLiteral_22095/*"mstShop"*/);
    sub_1C713B0(&StringLiteral_22212/*"mstWarBoardPartySkill"*/);
    sub_1C713B0(&StringLiteral_24649/*"userEventItemLinkSvt"*/);
    sub_1C713B0(&StringLiteral_21935/*"mstEventPointBuff"*/);
    sub_1C713B0(&StringLiteral_22056/*"mstQuestExtension"*/);
    sub_1C713B0(&StringLiteral_24698/*"userSupportDeck"*/);
    sub_1C713B0(&StringLiteral_22114/*"mstSpotRoad"*/);
    sub_1C713B0(&StringLiteral_22173/*"mstSvtVoiceRelation"*/);
    sub_1C713B0(&StringLiteral_21849/*"mstCombineLimitGift"*/);
    sub_1C713B0(&StringLiteral_21899/*"mstEventCooltimeReward"*/);
    sub_1C713B0(&StringLiteral_21891/*"mstEventBulletinBoard"*/);
    sub_1C713B0(&StringLiteral_21950/*"mstEventRewardBg"*/);
    sub_1C713B0(&StringLiteral_21828/*"mstBoxGachaTalk"*/);
    sub_1C713B0(&StringLiteral_24683/*"userPaymentLimit"*/);
    sub_1C713B0(&StringLiteral_21982/*"mstFuncDisp"*/);
    sub_1C713B0(&StringLiteral_22160/*"mstSvtScript"*/);
    sub_1C713B0(&StringLiteral_22023/*"mstMapCond"*/);
    sub_1C713B0(&StringLiteral_22042/*"mstMyroomAddBgDiff"*/);
    sub_1C713B0(&StringLiteral_24648/*"userEventFortification"*/);
    sub_1C713B0(&StringLiteral_22211/*"mstWarBoardOnboardSkill"*/);
    sub_1C713B0(&StringLiteral_21994/*"mstGachaGroup"*/);
    sub_1C713B0(&StringLiteral_24814/*"viewQuestEnemyInfo"*/);
    sub_1C713B0(&StringLiteral_24623/*"userAccountLinkage"*/);
    sub_1C713B0(&StringLiteral_22134/*"mstSvtComment"*/);
    sub_1C713B0(&StringLiteral_22181/*"mstTreasureDevice"*/);
    sub_1C713B0(&StringLiteral_24813/*"viewGachaFeaturedSvt"*/);
    sub_1C713B0(&StringLiteral_24682/*"userNpcSvtRecord"*/);
    sub_1C713B0(&StringLiteral_21812/*"mstBattlePoint"*/);
    sub_1C713B0(&StringLiteral_21927/*"mstEventMissionGroup"*/);
    sub_1C713B0(&StringLiteral_24690/*"userQuestRecord"*/);
    sub_1C713B0(&StringLiteral_22087/*"mstRestrictionMessage"*/);
    sub_1C713B0(&StringLiteral_22008/*"mstGiftDetail"*/);
    sub_1C713B0(&StringLiteral_22002/*"mstGachaTicket"*/);
    sub_1C713B0(&StringLiteral_22156/*"mstSvtPhoto"*/);
    sub_1C713B0(&StringLiteral_22800/*"pickupUserFollower"*/);
    sub_1C713B0(&StringLiteral_21958/*"mstEventStatus"*/);
    sub_1C713B0(&StringLiteral_22135/*"mstSvtCommentAdd"*/);
    sub_1C713B0(&StringLiteral_22153/*"mstSvtOverwrite"*/);
    sub_1C713B0(&StringLiteral_22423/*"npcFollower"*/);
    sub_1C713B0(&StringLiteral_21897/*"mstEventCommandAssist"*/);
    sub_1C713B0(&StringLiteral_19214/*"eventSvtFatigue"*/);
    sub_1C713B0(&StringLiteral_21991/*"mstGachaBonusSelectLineup"*/);
    sub_1C713B0(&StringLiteral_21892/*"mstEventBulletinBoardRelease"*/);
    sub_1C713B0(&StringLiteral_22138/*"mstSvtExceed"*/);
    sub_1C713B0(&StringLiteral_22148/*"mstSvtLimitSpoilerProtection"*/);
    sub_1C713B0(&StringLiteral_22171/*"mstSvtVoice"*/);
    sub_1C713B0(&StringLiteral_22090/*"mstRestrictionWhole"*/);
    sub_1C713B0(&StringLiteral_24672/*"userGachaExtraCount"*/);
    sub_1C713B0(&StringLiteral_22028/*"mstMapGimmickPath"*/);
    sub_1C713B0(&StringLiteral_21965/*"mstEventTowerReward"*/);
    sub_1C713B0(&StringLiteral_21843/*"mstClassRelationOverwrite"*/);
    sub_1C713B0(&StringLiteral_21795/*"mstAi"*/);
    sub_1C713B0(&StringLiteral_24625/*"userBoxGacha"*/);
    sub_1C713B0(&StringLiteral_22128/*"mstSvtCard"*/);
    sub_1C713B0(&StringLiteral_24673/*"userGachaPickupCollateral"*/);
    sub_1C713B0(&StringLiteral_24671/*"userGachaDrawLog"*/);
    sub_1C713B0(&StringLiteral_22221/*"mstWarBoardStage"*/);
    sub_1C713B0(&StringLiteral_24638/*"userEquip"*/);
    sub_1C713B0(&StringLiteral_21952/*"mstEventRewardGuideRelease"*/);
    sub_1C713B0(&StringLiteral_21838/*"mstClassBoardCommandSpell"*/);
    sub_1C713B0(&StringLiteral_22033/*"mstMasterIndividualitySelect"*/);
    sub_1C713B0(&StringLiteral_22235/*"mstWarRelease"*/);
    sub_1C713B0(&StringLiteral_21989/*"mstGachaBehavior"*/);
    sub_1C713B0(&StringLiteral_22193/*"mstWar"*/);
    sub_1C713B0(&StringLiteral_21886/*"mstEventBonusFilter"*/);
    sub_1C713B0(&StringLiteral_22078/*"mstQuestScriptRelease"*/);
    sub_1C713B0(&StringLiteral_24650/*"userEventMap"*/);
    sub_1C713B0(&StringLiteral_21932/*"mstEventPanelSpot"*/);
    sub_1C713B0(&StringLiteral_21835/*"mstClass"*/);
    sub_1C713B0(&StringLiteral_24622/*"userAccessary"*/);
    sub_1C713B0(&StringLiteral_22146/*"mstSvtLimitAdd"*/);
    sub_1C713B0(&StringLiteral_22077/*"mstQuestScriptMaterialOverwrite"*/);
    sub_1C713B0(&StringLiteral_18154/*"combineExp"*/);
    sub_1C713B0(&StringLiteral_24666/*"userFormation"*/);
    sub_1C713B0(&StringLiteral_22210/*"mstWarBoardMessageScript"*/);
    sub_1C713B0(&StringLiteral_21940/*"mstEventProgressValue"*/);
    sub_1C713B0(&StringLiteral_24714/*"userSvtVoicePlayed"*/);
    sub_1C713B0(&StringLiteral_22127/*"mstSvtBattlePoint"*/);
    sub_1C713B0(&StringLiteral_22141/*"mstSvtFlag"*/);
    sub_1C713B0(&StringLiteral_21822/*"mstBoardMessage"*/);
    sub_1C713B0(&StringLiteral_21931/*"mstEventPanelScan"*/);
    sub_1C713B0(&StringLiteral_22147/*"mstSvtLimitImage"*/);
    sub_1C713B0(&StringLiteral_21904/*"mstEventDiggingBlock"*/);
    sub_1C713B0(&StringLiteral_24658/*"userEventRandomMission"*/);
    sub_1C713B0(&StringLiteral_21798/*"mstArea"*/);
    sub_1C713B0(&StringLiteral_24249/*"totalEventRaid"*/);
    sub_1C713B0(&StringLiteral_22405/*"notEndEventMissionFix"*/);
    sub_1C713B0(&StringLiteral_22101/*"mstShopScript"*/);
    sub_1C713B0(&StringLiteral_24651/*"userEventMission"*/);
    sub_1C713B0(&StringLiteral_22036/*"mstMasterPhoto"*/);
    sub_1C713B0(&StringLiteral_21923/*"mstEventMissionActionAdd"*/);
    sub_1C713B0(&StringLiteral_21855/*"mstCombineTd"*/);
    sub_1C713B0(&StringLiteral_24708/*"userSvtFirstGetTime"*/);
    sub_1C713B0(&StringLiteral_21824/*"mstBoost"*/);
    sub_1C713B0(&StringLiteral_22161/*"mstSvtScriptAdd"*/);
    sub_1C713B0(&StringLiteral_21826/*"mstBoxGachaBase"*/);
    sub_1C713B0(&StringLiteral_21807/*"mstBannerAdd"*/);
    sub_1C713B0(&StringLiteral_21793/*"mstAccessary"*/);
    sub_1C713B0(&StringLiteral_22184/*"mstTreasureDeviceSequenceWeight"*/);
    sub_1C713B0(&StringLiteral_24656/*"userEventRace"*/);
    sub_1C713B0(&StringLiteral_22057/*"mstQuestGroup"*/);
    sub_1C713B0(&StringLiteral_21939/*"mstEventPointUpperRelease"*/);
    sub_1C713B0(&StringLiteral_24712/*"userSvtLeader"*/);
    sub_1C713B0(&StringLiteral_22145/*"mstSvtLimit"*/);
    sub_1C713B0(&StringLiteral_24664/*"userFollow"*/);
    sub_1C713B0(&StringLiteral_21920/*"mstEventLocationCampaign"*/);
    sub_1C713B0(&StringLiteral_21852/*"mstCombineQp"*/);
    sub_1C713B0(&StringLiteral_21881/*"mstEvent"*/);
    sub_1C713B0(&StringLiteral_22142/*"mstSvtFlagRelease"*/);
    sub_1C713B0(&StringLiteral_24667/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_1C713B0(&StringLiteral_24686/*"userPrivilege"*/);
    sub_1C713B0(&StringLiteral_21857/*"mstCommandCode"*/);
    sub_1C713B0(&StringLiteral_22125/*"mstSvtAppendPassiveSkill"*/);
    sub_1C713B0(&StringLiteral_21916/*"mstEventGroup"*/);
    sub_1C713B0(&StringLiteral_21990/*"mstGachaBonusSelect"*/);
    sub_1C713B0(&StringLiteral_24642/*"userEventBoardGameToken"*/);
    sub_1C713B0(&StringLiteral_22038/*"mstMissionItemDisplay"*/);
    sub_1C713B0(&StringLiteral_22043/*"mstMyroomSvtSpecialImage"*/);
    sub_1C713B0(&StringLiteral_22218/*"mstWarBoardRoad"*/);
    sub_1C713B0(&StringLiteral_21829/*"mstBuff"*/);
    sub_1C713B0(&StringLiteral_24875/*"warBoardData"*/);
    sub_1C713B0(&StringLiteral_22013/*"mstIllustrator"*/);
    sub_1C713B0(&StringLiteral_24244/*"totalBoxGacha"*/);
    sub_1C713B0(&StringLiteral_22159/*"mstSvtRarity"*/);
    sub_1C713B0(&StringLiteral_22194/*"mstWarAdd"*/);
    sub_1C713B0(&StringLiteral_22029/*"mstMapGimmickPathRelease"*/);
    sub_1C713B0(&StringLiteral_24668/*"userFriendRequestHistory"*/);
    sub_1C713B0(&StringLiteral_24620/*"user"*/);
    sub_1C713B0(&StringLiteral_17386/*"boxGachaHistory"*/);
    sub_1C713B0(&StringLiteral_21983/*"mstFuncGroup"*/);
    sub_1C713B0(&StringLiteral_21862/*"mstCommonConsume"*/);
    sub_1C713B0(&StringLiteral_22205/*"mstWarBoardEventScript"*/);
    sub_1C713B0(&StringLiteral_22007/*"mstGiftAdd"*/);
    sub_1C713B0(&StringLiteral_21971/*"mstEventUi"*/);
    sub_1C713B0(&StringLiteral_22111/*"mstSpotImage"*/);
    sub_1C713B0(&StringLiteral_22137/*"mstSvtCostumeRelease"*/);
    sub_1C713B0(&StringLiteral_24627/*"userClassStatistics"*/);
    sub_1C713B0(&StringLiteral_22024/*"mstMapGimmick"*/);
    sub_1C713B0(&StringLiteral_22064/*"mstQuestPhaseIndividuality"*/);
    sub_1C713B0(&StringLiteral_21969/*"mstEventTutorial"*/);
    sub_1C713B0(&StringLiteral_22232/*"mstWarGroupIgnore"*/);
    sub_1C713B0(&StringLiteral_22228/*"mstWarBoardStageWall"*/);
    sub_1C713B0(&StringLiteral_24662/*"userEventTrade"*/);
    sub_1C713B0(&StringLiteral_21797/*"mstAiField"*/);
    sub_1C713B0(&StringLiteral_21977/*"mstFriendPointGachaAdjust"*/);
    sub_1C713B0(&StringLiteral_22170/*"mstSvtTreasureDeviceRelease"*/);
    sub_1C713B0(&StringLiteral_22061/*"mstQuestPhase"*/);
    sub_1C713B0(&StringLiteral_24644/*"userEventDataLost"*/);
    sub_1C713B0(&StringLiteral_22126/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_1C713B0(&StringLiteral_22169/*"mstSvtTreasureDeviceDamage"*/);
    sub_1C713B0(&StringLiteral_22117/*"mstStage"*/);
    sub_1C713B0(&StringLiteral_21845/*"mstCombine"*/);
    sub_1C713B0(&StringLiteral_21893/*"mstEventCampaign"*/);
    sub_1C713B0(&StringLiteral_22225/*"mstWarBoardStageNpc"*/);
    sub_1C713B0(&StringLiteral_22767/*"paymentHistory"*/);
    sub_1C713B0(&StringLiteral_19380/*"exchangeSvt"*/);
    sub_1C713B0(&StringLiteral_22118/*"mstStageRemap"*/);
    sub_1C713B0(&StringLiteral_22085/*"mstRestriction"*/);
    sub_1C713B0(&StringLiteral_22074/*"mstQuestScript"*/);
    sub_1C713B0(&StringLiteral_21954/*"mstEventRewardSceneRelease"*/);
    sub_1C713B0(&StringLiteral_22188/*"mstVoiceCond"*/);
    sub_1C713B0(&StringLiteral_24697/*"userSubEquip"*/);
    sub_1C713B0(&StringLiteral_21947/*"mstEventRecipe"*/);
    sub_1C713B0(&StringLiteral_22136/*"mstSvtCostume"*/);
    sub_1C713B0(&StringLiteral_22157/*"mstSvtProfile"*/);
    sub_1C713B0(&StringLiteral_21864/*"mstCommonRestriction"*/);
    sub_1C713B0(&StringLiteral_24676/*"userHeelPortrait"*/);
    sub_1C713B0(&StringLiteral_22106/*"mstSkillGroupOverwrite"*/);
    sub_1C713B0(&StringLiteral_24630/*"userCommandCodeCollection"*/);
    sub_1C713B0(&StringLiteral_21860/*"mstCommandCodeSkillRelease"*/);
    sub_1C713B0(&StringLiteral_21873/*"mstEffectMovie"*/);
    sub_1C713B0(&StringLiteral_22066/*"mstQuestPickup"*/);
    sub_1C713B0(&StringLiteral_22224/*"mstWarBoardStageLayout"*/);
    sub_1C713B0(&StringLiteral_22199/*"mstWarBoardActionTrendCond"*/);
    sub_1C713B0(&StringLiteral_21895/*"mstEventCombine"*/);
    sub_1C713B0(&StringLiteral_22213/*"mstWarBoardQuest"*/);
    sub_1C713B0(&StringLiteral_22054/*"mstQuestConsumeItem"*/);
    sub_1C713B0(&StringLiteral_22063/*"mstQuestPhaseDetailAdd"*/);
    sub_1C713B0(&StringLiteral_22012/*"mstHeelPortrait"*/);
    sub_1C713B0(&StringLiteral_19381/*"exchangeSvtCoinGivenNum"*/);
    sub_1C713B0(&StringLiteral_24685/*"userPresentHistory"*/);
    sub_1C713B0(&StringLiteral_21834/*"mstChaldeaGatePickup"*/);
    sub_1C713B0(&StringLiteral_22214/*"mstWarBoardRatingBase"*/);
    sub_1C713B0(&StringLiteral_21995/*"mstGachaImage"*/);
    sub_1C713B0(&StringLiteral_21879/*"mstEquipImage"*/);
    sub_1C713B0(&StringLiteral_24657/*"userEventRaid"*/);
    sub_1C713B0(&StringLiteral_22132/*"mstSvtCollection"*/);
    sub_1C713B0(&StringLiteral_19765/*"friendshipQuestDialogInfo"*/);
    sub_1C713B0(&StringLiteral_22044/*"mstNews"*/);
    sub_1C713B0(&StringLiteral_21985/*"mstGacha"*/);
    sub_1C713B0(&StringLiteral_22105/*"mstSkillGroup"*/);
    sub_1C713B0(&StringLiteral_22011/*"mstGuide"*/);
    sub_1C713B0(&StringLiteral_21998/*"mstGachaPickupCollateralGroup"*/);
    sub_1C713B0(&StringLiteral_21840/*"mstClassBoardLock"*/);
    sub_1C713B0(&StringLiteral_21871/*"mstDropAdd"*/);
    sub_1C713B0(&StringLiteral_21938/*"mstEventPointUpper"*/);
    sub_1C713B0(&StringLiteral_21819/*"mstBlankEarthSpot"*/);
    sub_1C713B0(&StringLiteral_22175/*"mstTerminalOverwrite"*/);
    sub_1C713B0(&StringLiteral_21880/*"mstEquipSkill"*/);
    sub_1C713B0(&StringLiteral_21973/*"mstEventUiValue"*/);
    sub_1C713B0(&StringLiteral_24632/*"userContinue"*/);
    sub_1C713B0(&StringLiteral_22051/*"mstQuestAdd"*/);
    sub_1C713B0(&StringLiteral_21839/*"mstClassBoardLine"*/);
    sub_1C713B0(&StringLiteral_24563/*"updateProfileDialogInfo"*/);
    sub_1C713B0(&StringLiteral_22186/*"mstVoice"*/);
    sub_1C713B0(&StringLiteral_24652/*"userEventMissionConditionDetail"*/);
    sub_1C713B0(&StringLiteral_21799/*"mstAssetbundleKey"*/);
    sub_1C713B0(&StringLiteral_21929/*"mstEventPanelMap"*/);
    sub_1C713B0(&StringLiteral_24681/*"userLogin"*/);
    sub_1C713B0(&StringLiteral_22020/*"mstLoginQuest"*/);
    sub_1C713B0(&StringLiteral_22046/*"mstPartialMaintenance"*/);
    sub_1C713B0(&StringLiteral_24659/*"userEventSpot"*/);
    sub_1C713B0(&StringLiteral_21949/*"mstEventReward"*/);
    sub_1C713B0(&StringLiteral_21901/*"mstEventDataLostBattleReset"*/);
    sub_1C713B0(&StringLiteral_21801/*"mstAttri"*/);
    sub_1C713B0(&StringLiteral_22223/*"mstWarBoardStageDetail"*/);
    sub_1C713B0(&StringLiteral_22164/*"mstSvtSkillAdd"*/);
    sub_1C713B0(&StringLiteral_24655/*"userEventQuestCooltime"*/);
    sub_1C713B0(&StringLiteral_22075/*"mstQuestScriptBranchMaterial"*/);
    sub_1C713B0(&StringLiteral_21911/*"mstEventFatigueRecovery"*/);
    sub_1C713B0(&StringLiteral_22201/*"mstWarBoardAi"*/);
    sub_1C713B0(&StringLiteral_22180/*"mstTreasureBoxTalk"*/);
    sub_1C713B0(&StringLiteral_22204/*"mstWarBoardEvent"*/);
    sub_1C713B0(&StringLiteral_22190/*"mstVoicePlayCond"*/);
    sub_1C713B0(&StringLiteral_21992/*"mstGachaDetail"*/);
    sub_1C713B0(&StringLiteral_21960/*"mstEventSuperBoss"*/);
    sub_1C713B0(&StringLiteral_22103/*"mstSkillAdd"*/);
    byte_4CC629C = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C715FC(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3494CFC *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1C71608(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_22122/*"mstSvt"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_22134/*"mstSvtComment"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_22157/*"mstSvtProfile"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_22193/*"mstWar"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_17072/*"battle"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_22181/*"mstTreasureDevice"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_22145/*"mstSvtLimit"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_22167/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_21835/*"mstClass"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_22160/*"mstSvtScript"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_22128/*"mstSvtCard"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_22163/*"mstSvtSkill"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_22154/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_24699/*"userSvt"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_24713/*"userSvtStorage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_22117/*"mstStage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_22143/*"mstSvtGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_21819/*"mstBlankEarthSpot"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_21820/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_22109/*"mstSpot"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_22111/*"mstSpotImage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_22114/*"mstSpotRoad"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_22024/*"mstMapGimmick"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_22006/*"mstGift"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_22007/*"mstGiftAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_22121/*"mstSubEquip"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_24620/*"user"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_24674/*"userGame"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_24634/*"userDeck"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_24703/*"userSvtCollection"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_21978/*"mstFriendship"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_21985/*"mstGacha"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_21995/*"mstGachaImage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_24669/*"userGacha"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_24673/*"userGachaPickupCollateral"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24680/*"userItem"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_22017/*"mstItem"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_22002/*"mstGachaTicket"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_21986/*"mstGachaAdjustAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_21996/*"mstGachaPickup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_21977/*"mstFriendPointGachaAdjust"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_21988/*"mstGachaBaseCollateral"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_21793/*"mstAccessary"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_24622/*"userAccessary"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_24697/*"userSubEquip"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_24125/*"tblUserGame"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_22095/*"mstShop"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_22120/*"mstStoneShop"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_21805/*"mstBankShop"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_22101/*"mstShopScript"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_21876/*"mstEquip"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_21878/*"mstEquipExp"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_21880/*"mstEquipSkill"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_24638/*"userEquip"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_24666/*"userFormation"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_22102/*"mstSkill"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_22108/*"mstSkillLv"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_22104/*"mstSkillDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_21980/*"mstFunc"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_21829/*"mstBuff"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_21999/*"mstGachaRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_24688/*"userQuest"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_24689/*"userQuestInfo"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_24690/*"userQuestRecord"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_22185/*"mstUserExp"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_22044/*"mstNews"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_22174/*"mstTelop"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_22604/*"otherUserGame"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_24124/*"tblFriend"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_24684/*"userPresentBox"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_21881/*"mstEvent"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_22050/*"mstQuest"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_22051/*"mstQuestAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_22069/*"mstQuestRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_22061/*"mstQuestPhase"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_22062/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_22057/*"mstQuestGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_22068/*"mstQuestRandomGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_22054/*"mstQuestConsumeItem"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_22060/*"mstQuestMessage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_24815/*"viewQuestInfo"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_24812/*"viewEnemy"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_24814/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_21798/*"mstArea"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_21815/*"mstBgm"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_21941/*"mstEventQuest"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_21893/*"mstEventCampaign"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_21852/*"mstCombineQp"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_21851/*"mstCombineMaterial"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_21895/*"mstEventCombine"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_22139/*"mstSvtExp"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_21854/*"mstCombineSkill"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_21855/*"mstCombineTd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_22013/*"mstIllustrator"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_21869/*"mstCv"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_22183/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_22182/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_24665/*"userFollower"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_22423/*"npcFollower"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_22429/*"npcSvtFollower"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_24640/*"userEvent"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_24687/*"userProfile"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_24694/*"userShop"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_24632/*"userContinue"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_21866/*"mstConstant"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_21867/*"mstConstantLong"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_21868/*"mstConstantStr"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_21861/*"mstCommandSpell"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_21795/*"mstAi"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_21796/*"mstAiAct"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_22171/*"mstSvtVoice"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_21802/*"mstAttriRelation"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_21842/*"mstClassRelation"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_21872/*"mstEffect"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_21879/*"mstEquipImage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_21848/*"mstCombineLimit"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_21833/*"mstCard"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_21853/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_22146/*"mstSvtLimitAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_22159/*"mstSvtRarity"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_22094/*"mstSetItem"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_22084/*"mstRecover"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_21806/*"mstBanner"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_22099/*"mstShopRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_21949/*"mstEventReward"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_21902/*"mstEventDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_21961/*"mstEventSvt"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_21825/*"mstBoxGacha"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_21826/*"mstBoxGachaBase"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_21828/*"mstBoxGachaTalk"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_24625/*"userBoxGacha"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17386/*"boxGachaHistory"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_21808/*"mstBattleBg"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_22176/*"mstTips"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_24681/*"userLogin"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_22186/*"mstVoice"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_21951/*"mstEventRewardExtra"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_21921/*"mstEventMission"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_21925/*"mstEventMissionCondition"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    140,
    (Il2CppObject *)StringLiteral_21926/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    141,
    (Il2CppObject *)StringLiteral_21922/*"mstEventMissionAction"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    142,
    (Il2CppObject *)StringLiteral_21923/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    145,
    (Il2CppObject *)StringLiteral_21865/*"mstCompleteMission"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    143,
    (Il2CppObject *)StringLiteral_21924/*"mstEventMissionAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    144,
    (Il2CppObject *)StringLiteral_21955/*"mstEventRewardSet"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    146,
    (Il2CppObject *)StringLiteral_24651/*"userEventMission"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    147,
    (Il2CppObject *)StringLiteral_24652/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    148,
    (Il2CppObject *)StringLiteral_21827/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    149,
    (Il2CppObject *)StringLiteral_21844/*"mstClosedMessage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    150,
    (Il2CppObject *)StringLiteral_24712/*"userSvtLeader"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    151,
    (Il2CppObject *)StringLiteral_21983/*"mstFuncGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    152,
    (Il2CppObject *)StringLiteral_21945/*"mstEventRaid"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    153,
    (Il2CppObject *)StringLiteral_24249/*"totalEventRaid"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    154,
    (Il2CppObject *)StringLiteral_24657/*"userEventRaid"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    155,
    (Il2CppObject *)StringLiteral_21933/*"mstEventPoint"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    156,
    (Il2CppObject *)StringLiteral_21936/*"mstEventPointGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    157,
    (Il2CppObject *)StringLiteral_24247/*"totalEventPoint"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    158,
    (Il2CppObject *)StringLiteral_24654/*"userEventPoint"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    159,
    (Il2CppObject *)StringLiteral_24685/*"userPresentHistory"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    160,
    (Il2CppObject *)StringLiteral_22034/*"mstMasterMission"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    161,
    (Il2CppObject *)StringLiteral_22138/*"mstSvtExceed"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    162,
    (Il2CppObject *)StringLiteral_22046/*"mstPartialMaintenance"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    163,
    (Il2CppObject *)StringLiteral_22011/*"mstGuide"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    164,
    (Il2CppObject *)StringLiteral_22035/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    165,
    (Il2CppObject *)StringLiteral_21994/*"mstGachaGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    166,
    (Il2CppObject *)StringLiteral_22071/*"mstQuestReset"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    167,
    (Il2CppObject *)StringLiteral_22194/*"mstWarAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    168,
    (Il2CppObject *)StringLiteral_21917/*"mstEventItemDisplay"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    169,
    (Il2CppObject *)StringLiteral_21918/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    170,
    (Il2CppObject *)StringLiteral_21919/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    171,
    (Il2CppObject *)StringLiteral_21969/*"mstEventTutorial"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    172,
    (Il2CppObject *)StringLiteral_21970/*"mstEventTutorialCond"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    173,
    (Il2CppObject *)StringLiteral_22192/*"mstVoiceRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    174,
    (Il2CppObject *)StringLiteral_21960/*"mstEventSuperBoss"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    175,
    (Il2CppObject *)StringLiteral_24660/*"userEventSuperBoss"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    176,
    (Il2CppObject *)StringLiteral_22074/*"mstQuestScript"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    177,
    (Il2CppObject *)StringLiteral_22078/*"mstQuestScriptRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    178,
    (Il2CppObject *)StringLiteral_22037/*"mstMaterialFolder"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    179,
    (Il2CppObject *)StringLiteral_22085/*"mstRestriction"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    180,
    (Il2CppObject *)StringLiteral_22072/*"mstQuestRestriction"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    181,
    (Il2CppObject *)StringLiteral_22173/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    182,
    (Il2CppObject *)StringLiteral_22097/*"mstShopDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    183,
    (Il2CppObject *)StringLiteral_22161/*"mstSvtScriptAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    184,
    (Il2CppObject *)StringLiteral_21845/*"mstCombine"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    185,
    (Il2CppObject *)StringLiteral_21797/*"mstAiField"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    186,
    (Il2CppObject *)StringLiteral_22135/*"mstSvtCommentAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    187,
    (Il2CppObject *)StringLiteral_21912/*"mstEventFilter"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    188,
    (Il2CppObject *)StringLiteral_24698/*"userSupportDeck"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    189,
    (Il2CppObject *)StringLiteral_21953/*"mstEventRewardScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    190,
    (Il2CppObject *)StringLiteral_21974/*"mstEventVoicePlay"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    191,
    (Il2CppObject *)StringLiteral_22001/*"mstGachaSub"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    192,
    (Il2CppObject *)StringLiteral_21992/*"mstGachaDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    193,
    (Il2CppObject *)StringLiteral_21990/*"mstGachaBonusSelect"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    194,
    (Il2CppObject *)StringLiteral_21991/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    195,
    (Il2CppObject *)StringLiteral_22130/*"mstSvtChange"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    196,
    (Il2CppObject *)StringLiteral_22188/*"mstVoiceCond"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    197,
    (Il2CppObject *)StringLiteral_21816/*"mstBgmRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    198,
    (Il2CppObject *)StringLiteral_22041/*"mstMyroomAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    199,
    (Il2CppObject *)StringLiteral_22096/*"mstShopAction"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    200,
    (Il2CppObject *)StringLiteral_21954/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    201,
    (Il2CppObject *)StringLiteral_22021/*"mstMap"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    202,
    (Il2CppObject *)StringLiteral_22023/*"mstMapCond"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    203,
    (Il2CppObject *)StringLiteral_22022/*"mstMapButton"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    204,
    (Il2CppObject *)StringLiteral_21807/*"mstBannerAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    205,
    (Il2CppObject *)StringLiteral_22053/*"mstQuestBehavior"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    206,
    (Il2CppObject *)StringLiteral_21882/*"mstEventAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    207,
    (Il2CppObject *)StringLiteral_22177/*"mstTotalLogin"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    208,
    (Il2CppObject *)StringLiteral_22140/*"mstSvtFilter"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    209,
    (Il2CppObject *)StringLiteral_21847/*"mstCombineCostume"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    210,
    (Il2CppObject *)StringLiteral_22136/*"mstSvtCostume"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    211,
    (Il2CppObject *)StringLiteral_22137/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    212,
    (Il2CppObject *)StringLiteral_22115/*"mstStaffPhoto"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    213,
    (Il2CppObject *)StringLiteral_22116/*"mstStaffPhotoCostume"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    214,
    (Il2CppObject *)StringLiteral_24668/*"userFriendRequestHistory"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    215,
    (Il2CppObject *)StringLiteral_24624/*"userBlacklist"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    216,
    (Il2CppObject *)StringLiteral_22019/*"mstItemSelect"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    217,
    (Il2CppObject *)StringLiteral_21943/*"mstEventRace"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    218,
    (Il2CppObject *)StringLiteral_21944/*"mstEventRaceResult"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    219,
    (Il2CppObject *)StringLiteral_22067/*"mstQuestRacePoint"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    220,
    (Il2CppObject *)StringLiteral_24656/*"userEventRace"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    221,
    (Il2CppObject *)StringLiteral_21956/*"mstEventScript"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    222,
    (Il2CppObject *)StringLiteral_21957/*"mstEventScriptRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    223,
    (Il2CppObject *)StringLiteral_22113/*"mstSpotPath"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    224,
    (Il2CppObject *)StringLiteral_22110/*"mstSpotAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    225,
    (Il2CppObject *)StringLiteral_24248/*"totalEventRace"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    226,
    (Il2CppObject *)StringLiteral_21937/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    227,
    (Il2CppObject *)StringLiteral_22191/*"mstVoicePlayGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    228,
    (Il2CppObject *)StringLiteral_22190/*"mstVoicePlayCond"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    229,
    (Il2CppObject *)StringLiteral_22000/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    230,
    (Il2CppObject *)StringLiteral_22141/*"mstSvtFlag"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    231,
    (Il2CppObject *)StringLiteral_22142/*"mstSvtFlagRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    232,
    (Il2CppObject *)StringLiteral_21920/*"mstEventLocationCampaign"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    233,
    (Il2CppObject *)StringLiteral_21832/*"mstCampaignInfo"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    234,
    (Il2CppObject *)StringLiteral_21870/*"mstDialogMessage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    235,
    (Il2CppObject *)StringLiteral_22144/*"mstSvtIndividuality"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    236,
    (Il2CppObject *)StringLiteral_21822/*"mstBoardMessage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    237,
    (Il2CppObject *)StringLiteral_21823/*"mstBoardMessageRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    238,
    (Il2CppObject *)StringLiteral_21962/*"mstEventSvtFatigue"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    239,
    (Il2CppObject *)StringLiteral_24645/*"userEventDeck"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    240,
    (Il2CppObject *)StringLiteral_21964/*"mstEventTower"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    241,
    (Il2CppObject *)StringLiteral_21965/*"mstEventTowerReward"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    242,
    (Il2CppObject *)StringLiteral_21891/*"mstEventBulletinBoard"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    243,
    (Il2CppObject *)StringLiteral_21892/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    244,
    (Il2CppObject *)StringLiteral_21910/*"mstEventFactory"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    245,
    (Il2CppObject *)StringLiteral_22098/*"mstShopGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    246,
    (Il2CppObject *)StringLiteral_21803/*"mstAuraEffect"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    247,
    (Il2CppObject *)StringLiteral_21804/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    248,
    (Il2CppObject *)StringLiteral_24653/*"userEventMissionFix"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    249,
    (Il2CppObject *)StringLiteral_22405/*"notEndEventMissionFix"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    250,
    (Il2CppObject *)StringLiteral_21874/*"mstEnemyMaster"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    251,
    (Il2CppObject *)StringLiteral_21875/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    252,
    (Il2CppObject *)StringLiteral_22165/*"mstSvtSkillRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    253,
    (Il2CppObject *)StringLiteral_22155/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    254,
    (Il2CppObject *)StringLiteral_22170/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    255,
    (Il2CppObject *)StringLiteral_22030/*"mstMapGimmickRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    256,
    (Il2CppObject *)StringLiteral_21857/*"mstCommandCode"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    257,
    (Il2CppObject *)StringLiteral_22133/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    258,
    (Il2CppObject *)StringLiteral_24629/*"userCommandCode"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    259,
    (Il2CppObject *)StringLiteral_24630/*"userCommandCodeCollection"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    260,
    (Il2CppObject *)StringLiteral_24705/*"userSvtCommandCode"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    261,
    (Il2CppObject *)StringLiteral_21859/*"mstCommandCodeSkill"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    262,
    (Il2CppObject *)StringLiteral_21860/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    263,
    (Il2CppObject *)StringLiteral_21858/*"mstCommandCodeComment"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    264,
    (Il2CppObject *)StringLiteral_21958/*"mstEventStatus"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    265,
    (Il2CppObject *)StringLiteral_21959/*"mstEventStatusQuest"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    266,
    (Il2CppObject *)StringLiteral_21864/*"mstCommonRestriction"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    267,
    (Il2CppObject *)StringLiteral_21935/*"mstEventPointBuff"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    268,
    (Il2CppObject *)StringLiteral_24664/*"userFollow"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    269,
    (Il2CppObject *)StringLiteral_21952/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    270,
    (Il2CppObject *)StringLiteral_22428/*"npcSvtEquip"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    271,
    (Il2CppObject *)StringLiteral_21894/*"mstEventCampaignRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    272,
    (Il2CppObject *)StringLiteral_22150/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    273,
    (Il2CppObject *)StringLiteral_21907/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    274,
    (Il2CppObject *)StringLiteral_21934/*"mstEventPointActivity"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    275,
    (Il2CppObject *)StringLiteral_21981/*"mstFuncCategory"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    276,
    (Il2CppObject *)StringLiteral_22066/*"mstQuestPickup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    277,
    (Il2CppObject *)StringLiteral_21971/*"mstEventUi"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    278,
    (Il2CppObject *)StringLiteral_21972/*"mstEventUiRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    279,
    (Il2CppObject *)StringLiteral_21973/*"mstEventUiValue"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    280,
    (Il2CppObject *)StringLiteral_21898/*"mstEventConquestReward"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    281,
    (Il2CppObject *)StringLiteral_22424/*"npcFollowerRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    282,
    (Il2CppObject *)StringLiteral_21886/*"mstEventBonusFilter"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    283,
    (Il2CppObject *)StringLiteral_21887/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    284,
    (Il2CppObject *)StringLiteral_21888/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    285,
    (Il2CppObject *)StringLiteral_24672/*"userGachaExtraCount"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    286,
    (Il2CppObject *)StringLiteral_21856/*"mstCommandCardRankParam"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    287,
    (Il2CppObject *)StringLiteral_24704/*"userSvtCommandCard"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    288,
    (Il2CppObject *)StringLiteral_22049/*"mstPrivilege"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    289,
    (Il2CppObject *)StringLiteral_24686/*"userPrivilege"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    290,
    (Il2CppObject *)StringLiteral_22055/*"mstQuestDateRange"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    291,
    (Il2CppObject *)StringLiteral_21938/*"mstEventPointUpper"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    292,
    (Il2CppObject *)StringLiteral_21939/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    293,
    (Il2CppObject *)StringLiteral_24691/*"userQuestRoute"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    294,
    (Il2CppObject *)StringLiteral_21889/*"mstEventBossStatusUi"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    295,
    (Il2CppObject *)StringLiteral_21863/*"mstCommonRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    296,
    (Il2CppObject *)StringLiteral_22079/*"mstQuestSpotRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    297,
    (Il2CppObject *)StringLiteral_22189/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    298,
    (Il2CppObject *)StringLiteral_21843/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    299,
    (Il2CppObject *)StringLiteral_21916/*"mstEventGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    300,
    (Il2CppObject *)StringLiteral_21799/*"mstAssetbundleKey"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    301,
    (Il2CppObject *)StringLiteral_24244/*"totalBoxGacha"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    302,
    (Il2CppObject *)StringLiteral_22169/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    303,
    (Il2CppObject *)StringLiteral_19214/*"eventSvtFatigue"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    304,
    (Il2CppObject *)StringLiteral_21950/*"mstEventRewardBg"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    305,
    (Il2CppObject *)StringLiteral_21911/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    306,
    (Il2CppObject *)StringLiteral_19201/*"eventBoostItemUsed"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    307,
    (Il2CppObject *)StringLiteral_22119/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    308,
    (Il2CppObject *)StringLiteral_22063/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    309,
    (Il2CppObject *)StringLiteral_22187/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    310,
    (Il2CppObject *)StringLiteral_22118/*"mstStageRemap"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    311,
    (Il2CppObject *)StringLiteral_18154/*"combineExp"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    312,
    (Il2CppObject *)StringLiteral_21883/*"mstEventBoardGameCell"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    313,
    (Il2CppObject *)StringLiteral_21884/*"mstEventBoardGameToken"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    314,
    (Il2CppObject *)StringLiteral_21885/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    315,
    (Il2CppObject *)StringLiteral_24642/*"userEventBoardGameToken"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    316,
    (Il2CppObject *)StringLiteral_22124/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    317,
    (Il2CppObject *)StringLiteral_22045/*"mstOpeningMovie"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    318,
    (Il2CppObject *)StringLiteral_22148/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    319,
    (Il2CppObject *)StringLiteral_22800/*"pickupUserFollower"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    320,
    (Il2CppObject *)StringLiteral_22132/*"mstSvtCollection"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    321,
    (Il2CppObject *)StringLiteral_21989/*"mstGachaBehavior"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    322,
    (Il2CppObject *)StringLiteral_21942/*"mstEventQuestCooltime"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    323,
    (Il2CppObject *)StringLiteral_24655/*"userEventQuestCooltime"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    324,
    (Il2CppObject *)StringLiteral_21824/*"mstBoost"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    325,
    (Il2CppObject *)StringLiteral_22195/*"mstWarBoard"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    326,
    (Il2CppObject *)StringLiteral_22219/*"mstWarBoardSquare"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    327,
    (Il2CppObject *)StringLiteral_22218/*"mstWarBoardRoad"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    328,
    (Il2CppObject *)StringLiteral_22221/*"mstWarBoardStage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    329,
    (Il2CppObject *)StringLiteral_22196/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    330,
    (Il2CppObject *)StringLiteral_22198/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    331,
    (Il2CppObject *)StringLiteral_22229/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    332,
    (Il2CppObject *)StringLiteral_22224/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    333,
    (Il2CppObject *)StringLiteral_22225/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    334,
    (Il2CppObject *)StringLiteral_22228/*"mstWarBoardStageWall"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    335,
    (Il2CppObject *)StringLiteral_22201/*"mstWarBoardAi"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    336,
    (Il2CppObject *)StringLiteral_22214/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    337,
    (Il2CppObject *)StringLiteral_22215/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    338,
    (Il2CppObject *)StringLiteral_22208/*"mstWarBoardItem"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    339,
    (Il2CppObject *)StringLiteral_22230/*"mstWarBoardTreasure"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    340,
    (Il2CppObject *)StringLiteral_22213/*"mstWarBoardQuest"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    341,
    (Il2CppObject *)StringLiteral_24875/*"warBoardData"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    342,
    (Il2CppObject *)StringLiteral_22207/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    343,
    (Il2CppObject *)StringLiteral_22199/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    344,
    (Il2CppObject *)StringLiteral_22197/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    345,
    (Il2CppObject *)StringLiteral_22217/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    346,
    (Il2CppObject *)StringLiteral_22227/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    347,
    (Il2CppObject *)StringLiteral_21929/*"mstEventPanelMap"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    348,
    (Il2CppObject *)StringLiteral_21930/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    349,
    (Il2CppObject *)StringLiteral_21932/*"mstEventPanelSpot"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    350,
    (Il2CppObject *)StringLiteral_21931/*"mstEventPanelScan"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    351,
    (Il2CppObject *)StringLiteral_21903/*"mstEventDigging"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    352,
    (Il2CppObject *)StringLiteral_21905/*"mstEventDiggingReward"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    353,
    (Il2CppObject *)StringLiteral_21904/*"mstEventDiggingBlock"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    354,
    (Il2CppObject *)StringLiteral_24646/*"userEventDigging"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    355,
    (Il2CppObject *)StringLiteral_21862/*"mstCommonConsume"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    356,
    (Il2CppObject *)StringLiteral_24650/*"userEventMap"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    357,
    (Il2CppObject *)StringLiteral_24659/*"userEventSpot"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    358,
    (Il2CppObject *)StringLiteral_22231/*"mstWarGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    359,
    (Il2CppObject *)StringLiteral_22147/*"mstSvtLimitImage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    360,
    (Il2CppObject *)StringLiteral_19765/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    361,
    (Il2CppObject *)StringLiteral_22073/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    362,
    (Il2CppObject *)StringLiteral_21800/*"mstAssist"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    363,
    (Il2CppObject *)StringLiteral_22203/*"mstWarBoardEffect"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    364,
    (Il2CppObject *)StringLiteral_22211/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    365,
    (Il2CppObject *)StringLiteral_17146/*"beforeBirthDay"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    366,
    (Il2CppObject *)StringLiteral_22020/*"mstLoginQuest"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    367,
    (Il2CppObject *)StringLiteral_21896/*"mstEventCombineCostume"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    368,
    (Il2CppObject *)StringLiteral_22226/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    369,
    (Il2CppObject *)StringLiteral_22168/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    370,
    (Il2CppObject *)StringLiteral_22103/*"mstSkillAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    371,
    (Il2CppObject *)StringLiteral_22149/*"mstSvtLvDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    372,
    (Il2CppObject *)StringLiteral_21987/*"mstGachaAppend"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    373,
    (Il2CppObject *)StringLiteral_24671/*"userGachaDrawLog"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    374,
    (Il2CppObject *)StringLiteral_22125/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    375,
    (Il2CppObject *)StringLiteral_24700/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    376,
    (Il2CppObject *)StringLiteral_24701/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    377,
    (Il2CppObject *)StringLiteral_22126/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    378,
    (Il2CppObject *)StringLiteral_21846/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    379,
    (Il2CppObject *)StringLiteral_22131/*"mstSvtCoin"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    380,
    (Il2CppObject *)StringLiteral_24702/*"userSvtCoin"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    381,
    (Il2CppObject *)StringLiteral_22123/*"mstSvtAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    382,
    (Il2CppObject *)StringLiteral_22178/*"mstTreasureBox"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    383,
    (Il2CppObject *)StringLiteral_22179/*"mstTreasureBoxGift"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    384,
    (Il2CppObject *)StringLiteral_22180/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    385,
    (Il2CppObject *)StringLiteral_24647/*"userEventExpedition"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    386,
    (Il2CppObject *)StringLiteral_21908/*"mstEventExpedition"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    387,
    (Il2CppObject *)StringLiteral_21909/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    388,
    (Il2CppObject *)StringLiteral_21947/*"mstEventRecipe"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    389,
    (Il2CppObject *)StringLiteral_21948/*"mstEventRecipeGift"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    390,
    (Il2CppObject *)StringLiteral_24648/*"userEventFortification"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    391,
    (Il2CppObject *)StringLiteral_21913/*"mstEventFortification"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    392,
    (Il2CppObject *)StringLiteral_21914/*"mstEventFortificationDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    393,
    (Il2CppObject *)StringLiteral_21915/*"mstEventFortificationSvt"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    394,
    (Il2CppObject *)StringLiteral_24714/*"userSvtVoicePlayed"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    395,
    (Il2CppObject *)StringLiteral_24563/*"updateProfileDialogInfo"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    396,
    (Il2CppObject *)StringLiteral_22151/*"mstSvtMaterialTd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    397,
    (Il2CppObject *)StringLiteral_21809/*"mstBattleMasterImage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    398,
    (Il2CppObject *)StringLiteral_24667/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    399,
    (Il2CppObject *)StringLiteral_24658/*"userEventRandomMission"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    400,
    (Il2CppObject *)StringLiteral_21940/*"mstEventProgressValue"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    401,
    (Il2CppObject *)StringLiteral_22152/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    402,
    (Il2CppObject *)StringLiteral_21946/*"mstEventRandomMission"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    403,
    (Il2CppObject *)StringLiteral_24670/*"userGachaDrawHistory"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    404,
    (Il2CppObject *)StringLiteral_24628/*"userCoinRoom"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    405,
    (Il2CppObject *)StringLiteral_21890/*"mstEventBuddyPoint"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    406,
    (Il2CppObject *)StringLiteral_21963/*"mstEventSvtPointRank"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    407,
    (Il2CppObject *)StringLiteral_24661/*"userEventSvtPoint"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    408,
    (Il2CppObject *)StringLiteral_21976/*"mstFieldMotion"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    409,
    (Il2CppObject *)StringLiteral_24637/*"userDeleteReservation"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    410,
    (Il2CppObject *)StringLiteral_22162/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    411,
    (Il2CppObject *)StringLiteral_21877/*"mstEquipAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    412,
    (Il2CppObject *)StringLiteral_22070/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    413,
    (Il2CppObject *)StringLiteral_24641/*"userEventAlloutBattle"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    414,
    (Il2CppObject *)StringLiteral_22076/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    415,
    (Il2CppObject *)StringLiteral_21810/*"mstBattleMessage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    416,
    (Il2CppObject *)StringLiteral_21811/*"mstBattleMessageGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    417,
    (Il2CppObject *)StringLiteral_24682/*"userNpcSvtRecord"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    418,
    (Il2CppObject *)StringLiteral_21831/*"mstBuffTypeDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    419,
    (Il2CppObject *)StringLiteral_22209/*"mstWarBoardMessage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    420,
    (Il2CppObject *)StringLiteral_22212/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    421,
    (Il2CppObject *)StringLiteral_22210/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    422,
    (Il2CppObject *)StringLiteral_22234/*"mstWarQuestSelection"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    423,
    (Il2CppObject *)StringLiteral_22223/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    424,
    (Il2CppObject *)StringLiteral_22077/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    425,
    (Il2CppObject *)StringLiteral_22075/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    426,
    (Il2CppObject *)StringLiteral_21794/*"mstAdCheckPoint"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    427,
    (Il2CppObject *)StringLiteral_22008/*"mstGiftDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    428,
    (Il2CppObject *)StringLiteral_21849/*"mstCombineLimitGift"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    429,
    (Il2CppObject *)StringLiteral_21899/*"mstEventCooltimeReward"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    430,
    (Il2CppObject *)StringLiteral_24643/*"userEventCooltimeReward"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    431,
    (Il2CppObject *)StringLiteral_21837/*"mstClassBoardClass"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    432,
    (Il2CppObject *)StringLiteral_21836/*"mstClassBoardBase"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    433,
    (Il2CppObject *)StringLiteral_21839/*"mstClassBoardLine"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    434,
    (Il2CppObject *)StringLiteral_21840/*"mstClassBoardLock"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    435,
    (Il2CppObject *)StringLiteral_21841/*"mstClassBoardSquare"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    436,
    (Il2CppObject *)StringLiteral_21838/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    437,
    (Il2CppObject *)StringLiteral_24626/*"userClassBoardSquare"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    438,
    (Il2CppObject *)StringLiteral_22129/*"mstSvtCardAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    439,
    (Il2CppObject *)StringLiteral_22031/*"mstMapLayer"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    440,
    (Il2CppObject *)StringLiteral_22112/*"mstSpotLayer"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    441,
    (Il2CppObject *)StringLiteral_22026/*"mstMapGimmickLayer"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    442,
    (Il2CppObject *)StringLiteral_21900/*"mstEventDataLostBattle"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    443,
    (Il2CppObject *)StringLiteral_21901/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    444,
    (Il2CppObject *)StringLiteral_24644/*"userEventDataLost"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    445,
    (Il2CppObject *)StringLiteral_22058/*"mstQuestHint"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    446,
    (Il2CppObject *)StringLiteral_21984/*"mstFuncTypeDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    447,
    (Il2CppObject *)StringLiteral_21830/*"mstBuffConvert"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    448,
    (Il2CppObject *)StringLiteral_22105/*"mstSkillGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    449,
    (Il2CppObject *)StringLiteral_22106/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    450,
    (Il2CppObject *)StringLiteral_22107/*"mstSkillIndividuality"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    451,
    (Il2CppObject *)StringLiteral_22086/*"mstRestrictionBase"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    452,
    (Il2CppObject *)StringLiteral_22088/*"mstRestrictionSlot"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    453,
    (Il2CppObject *)StringLiteral_22089/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    454,
    (Il2CppObject *)StringLiteral_22087/*"mstRestrictionMessage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    455,
    (Il2CppObject *)StringLiteral_22090/*"mstRestrictionWhole"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    456,
    (Il2CppObject *)StringLiteral_21982/*"mstFuncDisp"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    457,
    (Il2CppObject *)StringLiteral_21897/*"mstEventCommandAssist"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    458,
    (Il2CppObject *)StringLiteral_21927/*"mstEventMissionGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    459,
    (Il2CppObject *)StringLiteral_21850/*"mstCombineLimitRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    460,
    (Il2CppObject *)StringLiteral_22184/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    461,
    (Il2CppObject *)StringLiteral_22012/*"mstHeelPortrait"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    462,
    (Il2CppObject *)StringLiteral_24676/*"userHeelPortrait"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    463,
    (Il2CppObject *)StringLiteral_22430/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    464,
    (Il2CppObject *)StringLiteral_21993/*"mstGachaExtraGift"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    465,
    (Il2CppObject *)StringLiteral_21928/*"mstEventMural"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    466,
    (Il2CppObject *)StringLiteral_24816/*"viewWaveEnemy"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    467,
    (Il2CppObject *)StringLiteral_21821/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    468,
    (Il2CppObject *)StringLiteral_21817/*"mstBlankEarthGimmick"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    469,
    (Il2CppObject *)StringLiteral_22175/*"mstTerminalOverwrite"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    470,
    (Il2CppObject *)StringLiteral_19380/*"exchangeSvt"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    471,
    (Il2CppObject *)StringLiteral_22202/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    472,
    (Il2CppObject *)StringLiteral_22204/*"mstWarBoardEvent"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    473,
    (Il2CppObject *)StringLiteral_22205/*"mstWarBoardEventScript"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    474,
    (Il2CppObject *)StringLiteral_22222/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    475,
    (Il2CppObject *)StringLiteral_22220/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    476,
    (Il2CppObject *)StringLiteral_22200/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    477,
    (Il2CppObject *)StringLiteral_22216/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    478,
    (Il2CppObject *)StringLiteral_22206/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    479,
    (Il2CppObject *)StringLiteral_22158/*"mstSvtProfilePush"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    480,
    (Il2CppObject *)StringLiteral_22028/*"mstMapGimmickPath"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    481,
    (Il2CppObject *)StringLiteral_22029/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    482,
    (Il2CppObject *)StringLiteral_22153/*"mstSvtOverwrite"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    483,
    (Il2CppObject *)StringLiteral_22016/*"mstIndividualityPolicy"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    484,
    (Il2CppObject *)StringLiteral_22015/*"mstIndividualityPersonality"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    485,
    (Il2CppObject *)StringLiteral_21801/*"mstAttri"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    486,
    (Il2CppObject *)StringLiteral_22172/*"mstSvtVoicePattern"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    487,
    (Il2CppObject *)StringLiteral_24675/*"userGameCommon"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    488,
    (Il2CppObject *)StringLiteral_22156/*"mstSvtPhoto"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    489,
    (Il2CppObject *)StringLiteral_22036/*"mstMasterPhoto"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    490,
    (Il2CppObject *)StringLiteral_22048/*"mstPhotoFrame"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    491,
    (Il2CppObject *)StringLiteral_22233/*"mstWarMessage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    492,
    (Il2CppObject *)StringLiteral_22052/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    493,
    (Il2CppObject *)StringLiteral_21975/*"mstExcludeMotionCond"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    494,
    (Il2CppObject *)StringLiteral_24679/*"userInterruptionQuest"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    495,
    (Il2CppObject *)StringLiteral_22166/*"mstSvtTransform"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    496,
    (Il2CppObject *)StringLiteral_22032/*"mstMapUpdateSchedule"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    497,
    (Il2CppObject *)StringLiteral_22065/*"mstQuestPhasePresent"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    498,
    (Il2CppObject *)StringLiteral_24623/*"userAccountLinkage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    499,
    (Il2CppObject *)StringLiteral_22040/*"mstMissionNaviTransition"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    500,
    (Il2CppObject *)StringLiteral_21966/*"mstEventTradeGoods"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    501,
    (Il2CppObject *)StringLiteral_21967/*"mstEventTradePickup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    502,
    (Il2CppObject *)StringLiteral_21968/*"mstEventTradeStore"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    503,
    (Il2CppObject *)StringLiteral_24662/*"userEventTrade"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    504,
    (Il2CppObject *)StringLiteral_22039/*"mstMissionNaviQuest"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    505,
    (Il2CppObject *)StringLiteral_22767/*"paymentHistory"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    506,
    (Il2CppObject *)StringLiteral_24663/*"userExternalPaymentStone"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    507,
    (Il2CppObject *)StringLiteral_22064/*"mstQuestPhaseIndividuality"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    508,
    (Il2CppObject *)StringLiteral_24813/*"viewGachaFeaturedSvt"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    514,
    (Il2CppObject *)StringLiteral_21873/*"mstEffectMovie"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    509,
    (Il2CppObject *)StringLiteral_21997/*"mstGachaPickupCollateral"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    510,
    (Il2CppObject *)StringLiteral_21998/*"mstGachaPickupCollateralGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    511,
    (Il2CppObject *)StringLiteral_21812/*"mstBattlePoint"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    512,
    (Il2CppObject *)StringLiteral_21813/*"mstBattlePointPhase"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    513,
    (Il2CppObject *)StringLiteral_22127/*"mstSvtBattlePoint"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    515,
    (Il2CppObject *)StringLiteral_22047/*"mstPaymentLimit"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    516,
    (Il2CppObject *)StringLiteral_24683/*"userPaymentLimit"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    517,
    (Il2CppObject *)StringLiteral_22091/*"mstRoadmap"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    518,
    (Il2CppObject *)StringLiteral_24693/*"userRecommendSupport"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    520,
    (Il2CppObject *)StringLiteral_22082/*"mstRecommendAdviceMessage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    519,
    (Il2CppObject *)StringLiteral_22083/*"mstRecommendSupportQuest"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    521,
    (Il2CppObject *)StringLiteral_24692/*"userRecommendFollower"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    522,
    (Il2CppObject *)StringLiteral_22018/*"mstItemDropEfficiency"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    523,
    (Il2CppObject *)StringLiteral_21818/*"mstBlankEarthGimmickAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    524,
    (Il2CppObject *)StringLiteral_22235/*"mstWarRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    525,
    (Il2CppObject *)StringLiteral_22093/*"mstSelectBonusBase"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    526,
    (Il2CppObject *)StringLiteral_22092/*"mstSelectBonus"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    527,
    (Il2CppObject *)StringLiteral_22043/*"mstMyroomSvtSpecialImage"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    528,
    (Il2CppObject *)StringLiteral_22100/*"mstShopReset"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    529,
    (Il2CppObject *)StringLiteral_22427/*"npcSvtDisplayTypeDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    530,
    (Il2CppObject *)StringLiteral_21979/*"mstFriendshipSvt"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    531,
    (Il2CppObject *)StringLiteral_19381/*"exchangeSvtCoinGivenNum"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    532,
    (Il2CppObject *)StringLiteral_21834/*"mstChaldeaGatePickup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    533,
    (Il2CppObject *)StringLiteral_22232/*"mstWarGroupIgnore"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    534,
    (Il2CppObject *)StringLiteral_22014/*"mstImagePartsGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    535,
    (Il2CppObject *)StringLiteral_24678/*"userImagePartsGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    536,
    (Il2CppObject *)StringLiteral_22038/*"mstMissionItemDisplay"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    537,
    (Il2CppObject *)StringLiteral_22080/*"mstQuestUseItemGroup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    538,
    (Il2CppObject *)StringLiteral_22081/*"mstQuestUseItemPickup"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    539,
    (Il2CppObject *)StringLiteral_24649/*"userEventItemLinkSvt"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    540,
    (Il2CppObject *)StringLiteral_22059/*"mstQuestHintOverwrite"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    541,
    (Il2CppObject *)StringLiteral_23080/*"reachedWaveInfo"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    542,
    (Il2CppObject *)StringLiteral_22003/*"mstGallery"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    543,
    (Il2CppObject *)StringLiteral_22005/*"mstGalleryResource"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    544,
    (Il2CppObject *)StringLiteral_22164/*"mstSvtSkillAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    545,
    (Il2CppObject *)StringLiteral_22004/*"mstGalleryFolderRelease"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    546,
    (Il2CppObject *)StringLiteral_24708/*"userSvtFirstGetTime"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    547,
    (Il2CppObject *)StringLiteral_22056/*"mstQuestExtension"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    548,
    (Il2CppObject *)StringLiteral_24709/*"userSvtGrand"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    549,
    (Il2CppObject *)StringLiteral_22009/*"mstGrandGraph"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    550,
    (Il2CppObject *)StringLiteral_22010/*"mstGrandGraphDetail"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    551,
    (Il2CppObject *)StringLiteral_24627/*"userClassStatistics"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    552,
    (Il2CppObject *)StringLiteral_21906/*"mstEventEquipSkillParts"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    553,
    (Il2CppObject *)StringLiteral_22033/*"mstMasterIndividualitySelect"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    554,
    (Il2CppObject *)StringLiteral_22042/*"mstMyroomAddBgDiff"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    555,
    (Il2CppObject *)StringLiteral_21814/*"mstBattleScript"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    556,
    (Il2CppObject *)StringLiteral_21871/*"mstDropAdd"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  DataNameKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_DataNameKind_Kind__string__o *)v1;
  sub_1C71354((GrandQuestFolderBoardItem_o *)DataNameKind_TypeInfo->static_fields, (int32_t)v1, v4, v5, v6, v7, v8, v9);
}


void DataNameKind___ctor(DataNameKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *DataNameKind__GetName(int32_t kind, const MethodInfo *method)
{
  DataNameKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4CC629B & 1) == 0 )
  {
    sub_1C713B0(&DataNameKind_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_4CC629B = 1;
  }
  v3 = DataNameKind_TypeInfo;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
    v3 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1C71608(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_3495630 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}