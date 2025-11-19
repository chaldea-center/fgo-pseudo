void DataNameKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB517D & 1) == 0 )
  {
    sub_1C6BA08(&DataNameKind_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_1C6BA08(&StringLiteral_21951/*"mstEventTradeGoods"*/);
    sub_1C6BA08(&StringLiteral_24655/*"userGameCommon"*/);
    sub_1C6BA08(&StringLiteral_21911/*"mstEventMissionConditionDetail"*/);
    sub_1C6BA08(&StringLiteral_22164/*"mstTreasureBoxGift"*/);
    sub_1C6BA08(&StringLiteral_21843/*"mstCommandCodeComment"*/);
    sub_1C6BA08(&StringLiteral_21907/*"mstEventMissionAction"*/);
    sub_1C6BA08(&StringLiteral_24621/*"userEventAlloutBattle"*/);
    sub_1C6BA08(&StringLiteral_23062/*"reachedWaveInfo"*/);
    sub_1C6BA08(&StringLiteral_21872/*"mstEventBonusFilterGroupInfo"*/);
    sub_1C6BA08(&StringLiteral_24672/*"userRecommendFollower"*/);
    sub_1C6BA08(&StringLiteral_22055/*"mstQuestReleaseOverwrite"*/);
    sub_1C6BA08(&StringLiteral_22015/*"mstMapGimmickRelease"*/);
    sub_1C6BA08(&StringLiteral_21978/*"mstGachaExtraGift"*/);
    sub_1C6BA08(&StringLiteral_22415/*"npcSvtFollowerIndividuality"*/);
    sub_1C6BA08(&StringLiteral_21874/*"mstEventBossStatusUi"*/);
    sub_1C6BA08(&StringLiteral_24681/*"userSvtAppendPassiveSkillLv"*/);
    sub_1C6BA08(&StringLiteral_21827/*"mstClassRelation"*/);
    sub_1C6BA08(&StringLiteral_21781/*"mstAiAct"*/);
    sub_1C6BA08(&StringLiteral_22109/*"mstSvtAnimationOverwrite"*/);
    sub_1C6BA08(&StringLiteral_22057/*"mstQuestRestriction"*/);
    sub_1C6BA08(&StringLiteral_21854/*"mstCv"*/);
    sub_1C6BA08(&StringLiteral_24626/*"userEventDigging"*/);
    sub_1C6BA08(&StringLiteral_24105/*"tblUserGame"*/);
    sub_1C6BA08(&StringLiteral_21885/*"mstEventDataLostBattle"*/);
    sub_1C6BA08(&StringLiteral_21875/*"mstEventBuddyPoint"*/);
    sub_1C6BA08(&StringLiteral_21801/*"mstBgmRelease"*/);
    sub_1C6BA08(&StringLiteral_22136/*"mstSvtMaterialTd"*/);
    sub_1C6BA08(&StringLiteral_21848/*"mstCommonRelease"*/);
    sub_1C6BA08(&StringLiteral_21963/*"mstFriendship"*/);
    sub_1C6BA08(&StringLiteral_24606/*"userClassBoardSquare"*/);
    sub_1C6BA08(&StringLiteral_21852/*"mstConstantLong"*/);
    sub_1C6BA08(&StringLiteral_21826/*"mstClassBoardSquare"*/);
    sub_1C6BA08(&StringLiteral_24685/*"userSvtCommandCode"*/);
    sub_1C6BA08(&StringLiteral_22038/*"mstQuestBehavior"*/);
    sub_1C6BA08(&StringLiteral_22003/*"mstItemDropEfficiency"*/);
    sub_1C6BA08(&StringLiteral_22135/*"mstSvtMaterialFolder"*/);
    sub_1C6BA08(&StringLiteral_22211/*"mstWarBoardStagePieceDetail"*/);
    sub_1C6BA08(&StringLiteral_21952/*"mstEventTradePickup"*/);
    sub_1C6BA08(&StringLiteral_21873/*"mstEventBonusFilterGroupMember"*/);
    sub_1C6BA08(&StringLiteral_22043/*"mstQuestHint"*/);
    sub_1C6BA08(&StringLiteral_21846/*"mstCommandSpell"*/);
    sub_1C6BA08(&StringLiteral_21779/*"mstAdCheckPoint"*/);
    sub_1C6BA08(&StringLiteral_22034/*"mstPrivilege"*/);
    sub_1C6BA08(&StringLiteral_22044/*"mstQuestHintOverwrite"*/);
    sub_1C6BA08(&StringLiteral_21808/*"mstBoardMessageRelease"*/);
    sub_1C6BA08(&StringLiteral_21984/*"mstGachaRelease"*/);
    sub_1C6BA08(&StringLiteral_24617/*"userDeleteReservation"*/);
    sub_1C6BA08(&StringLiteral_22163/*"mstTreasureBox"*/);
    sub_1C6BA08(&StringLiteral_24658/*"userImagePartsGroup"*/);
    sub_1C6BA08(&StringLiteral_21863/*"mstEquipExp"*/);
    sub_1C6BA08(&StringLiteral_21870/*"mstEventBoardGameTokenReward"*/);
    sub_1C6BA08(&StringLiteral_22116/*"mstSvtCoin"*/);
    sub_1C6BA08(&StringLiteral_22147/*"mstSvtScriptMultiple"*/);
    sub_1C6BA08(&StringLiteral_22022/*"mstMaterialFolder"*/);
    sub_1C6BA08(&StringLiteral_21881/*"mstEventCombineCostume"*/);
    sub_1C6BA08(&StringLiteral_22040/*"mstQuestDateRange"*/);
    sub_1C6BA08(&StringLiteral_22207/*"mstWarBoardStageBoss"*/);
    sub_1C6BA08(&StringLiteral_21815/*"mstBuffConvert"*/);
    sub_1C6BA08(&StringLiteral_22066/*"mstQuestUseItemPickup"*/);
    sub_1C6BA08(&StringLiteral_21788/*"mstAuraEffect"*/);
    sub_1C6BA08(&StringLiteral_21929/*"mstEventRaceResult"*/);
    sub_1C6BA08(&StringLiteral_22079/*"mstSetItem"*/);
    sub_1C6BA08(&StringLiteral_22412/*"npcSvtDisplayTypeDetail"*/);
    sub_1C6BA08(&StringLiteral_22101/*"mstStaffPhotoCostume"*/);
    sub_1C6BA08(&StringLiteral_21989/*"mstGalleryFolderRelease"*/);
    sub_1C6BA08(&StringLiteral_22069/*"mstRecover"*/);
    sub_1C6BA08(&StringLiteral_21944/*"mstEventStatusQuest"*/);
    sub_1C6BA08(&StringLiteral_24623/*"userEventCooltimeReward"*/);
    sub_1C6BA08(&StringLiteral_22032/*"mstPaymentLimit"*/);
    sub_1C6BA08(&StringLiteral_22185/*"mstWarBoardActionTrendGroup"*/);
    sub_1C6BA08(&StringLiteral_24671/*"userQuestRoute"*/);
    sub_1C6BA08(&StringLiteral_22093/*"mstSkillLv"*/);
    sub_1C6BA08(&StringLiteral_22128/*"mstSvtGroup"*/);
    sub_1C6BA08(&StringLiteral_22172/*"mstVoiceClosedMessage"*/);
    sub_1C6BA08(&StringLiteral_21894/*"mstEventExpeditionPiece"*/);
    sub_1C6BA08(&StringLiteral_22037/*"mstQuestAutoOrganizationAdjust"*/);
    sub_1C6BA08(&StringLiteral_22137/*"mstSvtMultiPortrait"*/);
    sub_1C6BA08(&StringLiteral_21897/*"mstEventFilter"*/);
    sub_1C6BA08(&StringLiteral_22024/*"mstMissionNaviQuest"*/);
    sub_1C6BA08(&StringLiteral_24673/*"userRecommendSupport"*/);
    sub_1C6BA08(&StringLiteral_24660/*"userItem"*/);
    sub_1C6BA08(&StringLiteral_21893/*"mstEventExpedition"*/);
    sub_1C6BA08(&StringLiteral_21928/*"mstEventRace"*/);
    sub_1C6BA08(&StringLiteral_22058/*"mstQuestRestrictionInfo"*/);
    sub_1C6BA08(&StringLiteral_22056/*"mstQuestReset"*/);
    sub_1C6BA08(&StringLiteral_24627/*"userEventExpedition"*/);
    sub_1C6BA08(&StringLiteral_21900/*"mstEventFortificationSvt"*/);
    sub_1C6BA08(&StringLiteral_22212/*"mstWarBoardStageReinforcements"*/);
    sub_1C6BA08(&StringLiteral_21821/*"mstClassBoardBase"*/);
    sub_1C6BA08(&StringLiteral_21859/*"mstEnemyMaster"*/);
    sub_1C6BA08(&StringLiteral_21789/*"mstAuraEffectPosOverwrite"*/);
    sub_1C6BA08(&StringLiteral_22073/*"mstRestrictionSlot"*/);
    sub_1C6BA08(&StringLiteral_21986/*"mstGachaSub"*/);
    sub_1C6BA08(&StringLiteral_21948/*"mstEventSvtPointRank"*/);
    sub_1C6BA08(&StringLiteral_21921/*"mstEventPointGroup"*/);
    sub_1C6BA08(&StringLiteral_21867/*"mstEventAdd"*/);
    sub_1C6BA08(&StringLiteral_21861/*"mstEquip"*/);
    sub_1C6BA08(&StringLiteral_21933/*"mstEventRecipeGift"*/);
    sub_1C6BA08(&StringLiteral_22159/*"mstTelop"*/);
    sub_1C6BA08(&StringLiteral_24683/*"userSvtCollection"*/);
    sub_1C6BA08(&StringLiteral_24633/*"userEventMissionFix"*/);
    sub_1C6BA08(&StringLiteral_22071/*"mstRestrictionBase"*/);
    sub_1C6BA08(&StringLiteral_22161/*"mstTips"*/);
    sub_1C6BA08(&StringLiteral_22100/*"mstStaffPhoto"*/);
    sub_1C6BA08(&StringLiteral_21790/*"mstBankShop"*/);
    sub_1C6BA08(&StringLiteral_21959/*"mstEventVoicePlay"*/);
    sub_1C6BA08(&StringLiteral_22065/*"mstQuestUseItemGroup"*/);
    sub_1C6BA08(&StringLiteral_21899/*"mstEventFortificationDetail"*/);
    sub_1C6BA08(&StringLiteral_24640/*"userEventSuperBoss"*/);
    sub_1C6BA08(&StringLiteral_21898/*"mstEventFortification"*/);
    sub_1C6BA08(&StringLiteral_21946/*"mstEventSvt"*/);
    sub_1C6BA08(&StringLiteral_22176/*"mstVoicePlayGroup"*/);
    sub_1C6BA08(&StringLiteral_24625/*"userEventDeck"*/);
    sub_1C6BA08(&StringLiteral_22095/*"mstSpotAdd"*/);
    sub_1C6BA08(&StringLiteral_21839/*"mstCombineSkill"*/);
    sub_1C6BA08(&StringLiteral_22204/*"mstWarBoardSquare"*/);
    sub_1C6BA08(&StringLiteral_21816/*"mstBuffTypeDetail"*/);
    sub_1C6BA08(&StringLiteral_22182/*"mstWarBoardActionPointClass"*/);
    sub_1C6BA08(&StringLiteral_22077/*"mstSelectBonus"*/);
    sub_1C6BA08(&StringLiteral_22151/*"mstSvtTransform"*/);
    sub_1C6BA08(&StringLiteral_24664/*"userPresentBox"*/);
    sub_1C6BA08(&StringLiteral_24641/*"userEventSvtPoint"*/);
    sub_1C6BA08(&StringLiteral_24227/*"totalEventPoint"*/);
    sub_1C6BA08(&StringLiteral_21841/*"mstCommandCardRankParam"*/);
    sub_1C6BA08(&StringLiteral_22187/*"mstWarBoardCommonRelease"*/);
    sub_1C6BA08(&StringLiteral_22107/*"mstSvt"*/);
    sub_1C6BA08(&StringLiteral_24674/*"userShop"*/);
    sub_1C6BA08(&StringLiteral_21868/*"mstEventBoardGameCell"*/);
    sub_1C6BA08(&StringLiteral_21927/*"mstEventQuestCooltime"*/);
    sub_1C6BA08(&StringLiteral_21969/*"mstFuncTypeDetail"*/);
    sub_1C6BA08(&StringLiteral_22104/*"mstStatusEffectPosOverwrite"*/);
    sub_1C6BA08(&StringLiteral_19191/*"eventBoostItemUsed"*/);
    sub_1C6BA08(&StringLiteral_22082/*"mstShopDetail"*/);
    sub_1C6BA08(&StringLiteral_22001/*"mstIndividualityPolicy"*/);
    sub_1C6BA08(&StringLiteral_22007/*"mstMapButton"*/);
    sub_1C6BA08(&StringLiteral_22214/*"mstWarBoardTacticalTrend"*/);
    sub_1C6BA08(&StringLiteral_22106/*"mstSubEquip"*/);
    sub_1C6BA08(&StringLiteral_22098/*"mstSpotPath"*/);
    sub_1C6BA08(&StringLiteral_22076/*"mstRoadmap"*/);
    sub_1C6BA08(&StringLiteral_21836/*"mstCombineMaterial"*/);
    sub_1C6BA08(&StringLiteral_21835/*"mstCombineLimitRelease"*/);
    sub_1C6BA08(&StringLiteral_22168/*"mstTreasureDeviceLv"*/);
    sub_1C6BA08(&StringLiteral_21949/*"mstEventTower"*/);
    sub_1C6BA08(&StringLiteral_22087/*"mstSkill"*/);
    sub_1C6BA08(&StringLiteral_24659/*"userInterruptionQuest"*/);
    sub_1C6BA08(&StringLiteral_22139/*"mstSvtPassiveSkill"*/);
    sub_1C6BA08(&StringLiteral_22153/*"mstSvtTreasureDeviceAdd"*/);
    sub_1C6BA08(&StringLiteral_21805/*"mstBlankEarthSpotAdd"*/);
    sub_1C6BA08(&StringLiteral_24668/*"userQuest"*/);
    sub_1C6BA08(&StringLiteral_21910/*"mstEventMissionCondition"*/);
    sub_1C6BA08(&StringLiteral_22181/*"mstWarBoardActionPoint"*/);
    sub_1C6BA08(&StringLiteral_24643/*"userExternalPaymentStone"*/);
    sub_1C6BA08(&StringLiteral_21829/*"mstClosedMessage"*/);
    sub_1C6BA08(&StringLiteral_21936/*"mstEventRewardExtra"*/);
    sub_1C6BA08(&StringLiteral_21919/*"mstEventPointActivity"*/);
    sub_1C6BA08(&StringLiteral_21926/*"mstEventQuest"*/);
    sub_1C6BA08(&StringLiteral_21796/*"mstBattleMessageGroup"*/);
    sub_1C6BA08(&StringLiteral_24795/*"viewQuestInfo"*/);
    sub_1C6BA08(&StringLiteral_22143/*"mstSvtProfilePush"*/);
    sub_1C6BA08(&StringLiteral_22167/*"mstTreasureDeviceDetail"*/);
    sub_1C6BA08(&StringLiteral_24604/*"userBlacklist"*/);
    sub_1C6BA08(&StringLiteral_21892/*"mstEventEquipSkillRelease"*/);
    sub_1C6BA08(&StringLiteral_24608/*"userCoinRoom"*/);
    sub_1C6BA08(&StringLiteral_21853/*"mstConstantStr"*/);
    sub_1C6BA08(&StringLiteral_21891/*"mstEventEquipSkillParts"*/);
    sub_1C6BA08(&StringLiteral_21988/*"mstGallery"*/);
    sub_1C6BA08(&StringLiteral_24689/*"userSvtGrand"*/);
    sub_1C6BA08(&StringLiteral_22105/*"mstStoneShop"*/);
    sub_1C6BA08(&StringLiteral_22017/*"mstMapUpdateSchedule"*/);
    sub_1C6BA08(&StringLiteral_22162/*"mstTotalLogin"*/);
    sub_1C6BA08(&StringLiteral_22030/*"mstOpeningMovie"*/);
    sub_1C6BA08(&StringLiteral_21851/*"mstConstant"*/);
    sub_1C6BA08(&StringLiteral_22064/*"mstQuestSpotRelease"*/);
    sub_1C6BA08(&StringLiteral_21844/*"mstCommandCodeSkill"*/);
    sub_1C6BA08(&StringLiteral_22035/*"mstQuest"*/);
    sub_1C6BA08(&StringLiteral_22157/*"mstSvtVoicePattern"*/);
    sub_1C6BA08(&StringLiteral_21955/*"mstEventTutorialCond"*/);
    sub_1C6BA08(&StringLiteral_21803/*"mstBlankEarthGimmickAdd"*/);
    sub_1C6BA08(&StringLiteral_22180/*"mstWarBoard"*/);
    sub_1C6BA08(&StringLiteral_21930/*"mstEventRaid"*/);
    sub_1C6BA08(&StringLiteral_21800/*"mstBgm"*/);
    sub_1C6BA08(&StringLiteral_21942/*"mstEventScriptRelease"*/);
    sub_1C6BA08(&StringLiteral_24667/*"userProfile"*/);
    sub_1C6BA08(&StringLiteral_21909/*"mstEventMissionAdd"*/);
    sub_1C6BA08(&StringLiteral_22177/*"mstVoiceRelease"*/);
    sub_1C6BA08(&StringLiteral_22053/*"mstQuestRandomGroup"*/);
    sub_1C6BA08(&StringLiteral_22025/*"mstMissionNaviTransition"*/);
    sub_1C6BA08(&StringLiteral_22084/*"mstShopRelease"*/);
    sub_1C6BA08(&StringLiteral_24693/*"userSvtStorage"*/);
    sub_1C6BA08(&StringLiteral_21982/*"mstGachaPickupCollateral"*/);
    sub_1C6BA08(&StringLiteral_22067/*"mstRecommendAdviceMessage"*/);
    sub_1C6BA08(&StringLiteral_22068/*"mstRecommendSupportQuest"*/);
    sub_1C6BA08(&StringLiteral_24680/*"userSvtAppendPassiveSkill"*/);
    sub_1C6BA08(&StringLiteral_22108/*"mstSvtAdd"*/);
    sub_1C6BA08(&StringLiteral_21994/*"mstGrandGraph"*/);
    sub_1C6BA08(&StringLiteral_22218/*"mstWarMessage"*/);
    sub_1C6BA08(&StringLiteral_21806/*"mstBlankEarthSpotNavimenu"*/);
    sub_1C6BA08(&StringLiteral_21794/*"mstBattleMasterImage"*/);
    sub_1C6BA08(&StringLiteral_22089/*"mstSkillDetail"*/);
    sub_1C6BA08(&StringLiteral_22019/*"mstMasterMission"*/);
    sub_1C6BA08(&StringLiteral_22140/*"mstSvtPassiveSkillRelease"*/);
    sub_1C6BA08(&StringLiteral_22094/*"mstSpot"*/);
    sub_1C6BA08(&StringLiteral_21906/*"mstEventMission"*/);
    sub_1C6BA08(&StringLiteral_21838/*"mstCombineQpSvtEquip"*/);
    sub_1C6BA08(&StringLiteral_21918/*"mstEventPoint"*/);
    sub_1C6BA08(&StringLiteral_21940/*"mstEventRewardSet"*/);
    sub_1C6BA08(&StringLiteral_21915/*"mstEventPanelMapDetail"*/);
    sub_1C6BA08(&StringLiteral_22114/*"mstSvtCardAdd"*/);
    sub_1C6BA08(&StringLiteral_22006/*"mstMap"*/);
    sub_1C6BA08(&StringLiteral_21888/*"mstEventDigging"*/);
    sub_1C6BA08(&StringLiteral_24649/*"userGacha"*/);
    sub_1C6BA08(&StringLiteral_22054/*"mstQuestRelease"*/);
    sub_1C6BA08(&StringLiteral_21887/*"mstEventDetail"*/);
    sub_1C6BA08(&StringLiteral_21999/*"mstImagePartsGroup"*/);
    sub_1C6BA08(&StringLiteral_22016/*"mstMapLayer"*/);
    sub_1C6BA08(&StringLiteral_22191/*"mstWarBoardFutureActionTrend"*/);
    sub_1C6BA08(&StringLiteral_22092/*"mstSkillIndividuality"*/);
    sub_1C6BA08(&StringLiteral_21812/*"mstBoxGachaBaseDetail"*/);
    sub_1C6BA08(&StringLiteral_24104/*"tblFriend"*/);
    sub_1C6BA08(&StringLiteral_17139/*"beforeBirthDay"*/);
    sub_1C6BA08(&StringLiteral_21904/*"mstEventItemDisplayRelease"*/);
    sub_1C6BA08(&StringLiteral_21990/*"mstGalleryResource"*/);
    sub_1C6BA08(&StringLiteral_17065/*"battle"*/);
    sub_1C6BA08(&StringLiteral_22083/*"mstShopGroup"*/);
    sub_1C6BA08(&StringLiteral_21787/*"mstAttriRelation"*/);
    sub_1C6BA08(&StringLiteral_24609/*"userCommandCode"*/);
    sub_1C6BA08(&StringLiteral_21879/*"mstEventCampaignRelease"*/);
    sub_1C6BA08(&StringLiteral_22125/*"mstSvtFilter"*/);
    sub_1C6BA08(&StringLiteral_22052/*"mstQuestRacePoint"*/);
    sub_1C6BA08(&StringLiteral_21953/*"mstEventTradeStore"*/);
    sub_1C6BA08(&StringLiteral_22587/*"otherUserGame"*/);
    sub_1C6BA08(&StringLiteral_21798/*"mstBattlePointPhase"*/);
    sub_1C6BA08(&StringLiteral_21903/*"mstEventItemDisplayGroup"*/);
    sub_1C6BA08(&StringLiteral_21818/*"mstCard"*/);
    sub_1C6BA08(&StringLiteral_21802/*"mstBlankEarthGimmick"*/);
    sub_1C6BA08(&StringLiteral_21795/*"mstBattleMessage"*/);
    sub_1C6BA08(&StringLiteral_22074/*"mstRestrictionSlotDetail"*/);
    sub_1C6BA08(&StringLiteral_21791/*"mstBanner"*/);
    sub_1C6BA08(&StringLiteral_21860/*"mstEnemyMasterBattle"*/);
    sub_1C6BA08(&StringLiteral_21902/*"mstEventItemDisplay"*/);
    sub_1C6BA08(&StringLiteral_21817/*"mstCampaignInfo"*/);
    sub_1C6BA08(&StringLiteral_22152/*"mstSvtTreasureDevice"*/);
    sub_1C6BA08(&StringLiteral_22150/*"mstSvtSkillRelease"*/);
    sub_1C6BA08(&StringLiteral_22033/*"mstPhotoFrame"*/);
    sub_1C6BA08(&StringLiteral_21850/*"mstCompleteMission"*/);
    sub_1C6BA08(&StringLiteral_21833/*"mstCombineLimit"*/);
    sub_1C6BA08(&StringLiteral_21995/*"mstGrandGraphDetail"*/);
    sub_1C6BA08(&StringLiteral_21810/*"mstBoxGacha"*/);
    sub_1C6BA08(&StringLiteral_22174/*"mstVoiceMaterialCond"*/);
    sub_1C6BA08(&StringLiteral_21971/*"mstGachaAdjustAdd"*/);
    sub_1C6BA08(&StringLiteral_21985/*"mstGachaStoryAdjust"*/);
    sub_1C6BA08(&StringLiteral_22170/*"mstUserExp"*/);
    sub_1C6BA08(&StringLiteral_21960/*"mstExcludeMotionCond"*/);
    sub_1C6BA08(&StringLiteral_22193/*"mstWarBoardItem"*/);
    sub_1C6BA08(&StringLiteral_21862/*"mstEquipAdd"*/);
    sub_1C6BA08(&StringLiteral_21855/*"mstDialogMessage"*/);
    sub_1C6BA08(&StringLiteral_22414/*"npcSvtFollower"*/);
    sub_1C6BA08(&StringLiteral_21793/*"mstBattleBg"*/);
    sub_1C6BA08(&StringLiteral_21822/*"mstClassBoardClass"*/);
    sub_1C6BA08(&StringLiteral_24634/*"userEventPoint"*/);
    sub_1C6BA08(&StringLiteral_22115/*"mstSvtChange"*/);
    sub_1C6BA08(&StringLiteral_22192/*"mstWarBoardIndividualityClass"*/);
    sub_1C6BA08(&StringLiteral_21973/*"mstGachaBaseCollateral"*/);
    sub_1C6BA08(&StringLiteral_22050/*"mstQuestPhasePresent"*/);
    sub_1C6BA08(&StringLiteral_22085/*"mstShopReset"*/);
    sub_1C6BA08(&StringLiteral_21913/*"mstEventMural"*/);
    sub_1C6BA08(&StringLiteral_21981/*"mstGachaPickup"*/);
    sub_1C6BA08(&StringLiteral_22004/*"mstItemSelect"*/);
    sub_1C6BA08(&StringLiteral_22129/*"mstSvtIndividuality"*/);
    sub_1C6BA08(&StringLiteral_24620/*"userEvent"*/);
    sub_1C6BA08(&StringLiteral_22215/*"mstWarBoardTreasure"*/);
    sub_1C6BA08(&StringLiteral_22134/*"mstSvtLvDetail"*/);
    sub_1C6BA08(&StringLiteral_22200/*"mstWarBoardRatingOffset"*/);
    sub_1C6BA08(&StringLiteral_22047/*"mstQuestPhaseDetail"*/);
    sub_1C6BA08(&StringLiteral_22081/*"mstShopAction"*/);
    sub_1C6BA08(&StringLiteral_22026/*"mstMyroomAdd"*/);
    sub_1C6BA08(&StringLiteral_21947/*"mstEventSvtFatigue"*/);
    sub_1C6BA08(&StringLiteral_21895/*"mstEventFactory"*/);
    sub_1C6BA08(&StringLiteral_24650/*"userGachaDrawHistory"*/);
    sub_1C6BA08(&StringLiteral_24645/*"userFollower"*/);
    sub_1C6BA08(&StringLiteral_22201/*"mstWarBoardRatingOffsetGroup"*/);
    sub_1C6BA08(&StringLiteral_24682/*"userSvtCoin"*/);
    sub_1C6BA08(&StringLiteral_21941/*"mstEventScript"*/);
    sub_1C6BA08(&StringLiteral_22148/*"mstSvtSkill"*/);
    sub_1C6BA08(&StringLiteral_22097/*"mstSpotLayer"*/);
    sub_1C6BA08(&StringLiteral_24684/*"userSvtCommandCard"*/);
    sub_1C6BA08(&StringLiteral_24669/*"userQuestInfo"*/);
    sub_1C6BA08(&StringLiteral_21857/*"mstEffect"*/);
    sub_1C6BA08(&StringLiteral_22002/*"mstItem"*/);
    sub_1C6BA08(&StringLiteral_22078/*"mstSelectBonusBase"*/);
    sub_1C6BA08(&StringLiteral_21922/*"mstEventPointGroupAdd"*/);
    sub_1C6BA08(&StringLiteral_22045/*"mstQuestMessage"*/);
    sub_1C6BA08(&StringLiteral_22409/*"npcFollowerRelease"*/);
    sub_1C6BA08(&StringLiteral_21966/*"mstFuncCategory"*/);
    sub_1C6BA08(&StringLiteral_22194/*"mstWarBoardMessage"*/);
    sub_1C6BA08(&StringLiteral_24654/*"userGame"*/);
    sub_1C6BA08(&StringLiteral_21991/*"mstGift"*/);
    sub_1C6BA08(&StringLiteral_22202/*"mstWarBoardReinforcements"*/);
    sub_1C6BA08(&StringLiteral_21869/*"mstEventBoardGameToken"*/);
    sub_1C6BA08(&StringLiteral_22011/*"mstMapGimmickLayer"*/);
    sub_1C6BA08(&StringLiteral_22118/*"mstSvtCommandCodeUnlock"*/);
    sub_1C6BA08(&StringLiteral_21785/*"mstAssist"*/);
    sub_1C6BA08(&StringLiteral_24796/*"viewWaveEnemy"*/);
    sub_1C6BA08(&StringLiteral_22413/*"npcSvtEquip"*/);
    sub_1C6BA08(&StringLiteral_22061/*"mstQuestScriptMaterialNext"*/);
    sub_1C6BA08(&StringLiteral_22124/*"mstSvtExp"*/);
    sub_1C6BA08(&StringLiteral_24679/*"userSvt"*/);
    sub_1C6BA08(&StringLiteral_24792/*"viewEnemy"*/);
    sub_1C6BA08(&StringLiteral_21957/*"mstEventUiRelease"*/);
    sub_1C6BA08(&StringLiteral_24228/*"totalEventRace"*/);
    sub_1C6BA08(&StringLiteral_21961/*"mstFieldMotion"*/);
    sub_1C6BA08(&StringLiteral_21931/*"mstEventRandomMission"*/);
    sub_1C6BA08(&StringLiteral_21938/*"mstEventRewardScene"*/);
    sub_1C6BA08(&StringLiteral_21964/*"mstFriendshipSvt"*/);
    sub_1C6BA08(&StringLiteral_22000/*"mstIndividualityPersonality"*/);
    sub_1C6BA08(&StringLiteral_21832/*"mstCombineCostume"*/);
    sub_1C6BA08(&StringLiteral_21831/*"mstCombineAppendPassiveSkill"*/);
    sub_1C6BA08(&StringLiteral_21890/*"mstEventDiggingReward"*/);
    sub_1C6BA08(&StringLiteral_22183/*"mstWarBoardActionTrend"*/);
    sub_1C6BA08(&StringLiteral_21799/*"mstBattleScript"*/);
    sub_1C6BA08(&StringLiteral_21972/*"mstGachaAppend"*/);
    sub_1C6BA08(&StringLiteral_22205/*"mstWarBoardSquareIndexGroup"*/);
    sub_1C6BA08(&StringLiteral_21965/*"mstFunc"*/);
    sub_1C6BA08(&StringLiteral_21883/*"mstEventConquestReward"*/);
    sub_1C6BA08(&StringLiteral_22188/*"mstWarBoardEffect"*/);
    sub_1C6BA08(&StringLiteral_22219/*"mstWarQuestSelection"*/);
    sub_1C6BA08(&StringLiteral_24614/*"userDeck"*/);
    sub_1C6BA08(&StringLiteral_22020/*"mstMasterMissionDisplayInfo"*/);
    sub_1C6BA08(&StringLiteral_22216/*"mstWarGroup"*/);
    sub_1C6BA08(&StringLiteral_22080/*"mstShop"*/);
    sub_1C6BA08(&StringLiteral_22197/*"mstWarBoardPartySkill"*/);
    sub_1C6BA08(&StringLiteral_24629/*"userEventItemLinkSvt"*/);
    sub_1C6BA08(&StringLiteral_21920/*"mstEventPointBuff"*/);
    sub_1C6BA08(&StringLiteral_22041/*"mstQuestExtension"*/);
    sub_1C6BA08(&StringLiteral_24678/*"userSupportDeck"*/);
    sub_1C6BA08(&StringLiteral_22099/*"mstSpotRoad"*/);
    sub_1C6BA08(&StringLiteral_22158/*"mstSvtVoiceRelation"*/);
    sub_1C6BA08(&StringLiteral_21834/*"mstCombineLimitGift"*/);
    sub_1C6BA08(&StringLiteral_21884/*"mstEventCooltimeReward"*/);
    sub_1C6BA08(&StringLiteral_21876/*"mstEventBulletinBoard"*/);
    sub_1C6BA08(&StringLiteral_21935/*"mstEventRewardBg"*/);
    sub_1C6BA08(&StringLiteral_21813/*"mstBoxGachaTalk"*/);
    sub_1C6BA08(&StringLiteral_24663/*"userPaymentLimit"*/);
    sub_1C6BA08(&StringLiteral_21967/*"mstFuncDisp"*/);
    sub_1C6BA08(&StringLiteral_22145/*"mstSvtScript"*/);
    sub_1C6BA08(&StringLiteral_22008/*"mstMapCond"*/);
    sub_1C6BA08(&StringLiteral_22027/*"mstMyroomAddBgDiff"*/);
    sub_1C6BA08(&StringLiteral_24628/*"userEventFortification"*/);
    sub_1C6BA08(&StringLiteral_22196/*"mstWarBoardOnboardSkill"*/);
    sub_1C6BA08(&StringLiteral_21979/*"mstGachaGroup"*/);
    sub_1C6BA08(&StringLiteral_24794/*"viewQuestEnemyInfo"*/);
    sub_1C6BA08(&StringLiteral_24603/*"userAccountLinkage"*/);
    sub_1C6BA08(&StringLiteral_22119/*"mstSvtComment"*/);
    sub_1C6BA08(&StringLiteral_22166/*"mstTreasureDevice"*/);
    sub_1C6BA08(&StringLiteral_24793/*"viewGachaFeaturedSvt"*/);
    sub_1C6BA08(&StringLiteral_24662/*"userNpcSvtRecord"*/);
    sub_1C6BA08(&StringLiteral_21797/*"mstBattlePoint"*/);
    sub_1C6BA08(&StringLiteral_21912/*"mstEventMissionGroup"*/);
    sub_1C6BA08(&StringLiteral_24670/*"userQuestRecord"*/);
    sub_1C6BA08(&StringLiteral_22072/*"mstRestrictionMessage"*/);
    sub_1C6BA08(&StringLiteral_21993/*"mstGiftDetail"*/);
    sub_1C6BA08(&StringLiteral_21987/*"mstGachaTicket"*/);
    sub_1C6BA08(&StringLiteral_22141/*"mstSvtPhoto"*/);
    sub_1C6BA08(&StringLiteral_22782/*"pickupUserFollower"*/);
    sub_1C6BA08(&StringLiteral_21943/*"mstEventStatus"*/);
    sub_1C6BA08(&StringLiteral_22120/*"mstSvtCommentAdd"*/);
    sub_1C6BA08(&StringLiteral_22138/*"mstSvtOverwrite"*/);
    sub_1C6BA08(&StringLiteral_22408/*"npcFollower"*/);
    sub_1C6BA08(&StringLiteral_21882/*"mstEventCommandAssist"*/);
    sub_1C6BA08(&StringLiteral_19203/*"eventSvtFatigue"*/);
    sub_1C6BA08(&StringLiteral_21976/*"mstGachaBonusSelectLineup"*/);
    sub_1C6BA08(&StringLiteral_21877/*"mstEventBulletinBoardRelease"*/);
    sub_1C6BA08(&StringLiteral_22123/*"mstSvtExceed"*/);
    sub_1C6BA08(&StringLiteral_22133/*"mstSvtLimitSpoilerProtection"*/);
    sub_1C6BA08(&StringLiteral_22156/*"mstSvtVoice"*/);
    sub_1C6BA08(&StringLiteral_22075/*"mstRestrictionWhole"*/);
    sub_1C6BA08(&StringLiteral_24652/*"userGachaExtraCount"*/);
    sub_1C6BA08(&StringLiteral_22013/*"mstMapGimmickPath"*/);
    sub_1C6BA08(&StringLiteral_21950/*"mstEventTowerReward"*/);
    sub_1C6BA08(&StringLiteral_21828/*"mstClassRelationOverwrite"*/);
    sub_1C6BA08(&StringLiteral_21780/*"mstAi"*/);
    sub_1C6BA08(&StringLiteral_24605/*"userBoxGacha"*/);
    sub_1C6BA08(&StringLiteral_22113/*"mstSvtCard"*/);
    sub_1C6BA08(&StringLiteral_24653/*"userGachaPickupCollateral"*/);
    sub_1C6BA08(&StringLiteral_24651/*"userGachaDrawLog"*/);
    sub_1C6BA08(&StringLiteral_22206/*"mstWarBoardStage"*/);
    sub_1C6BA08(&StringLiteral_24618/*"userEquip"*/);
    sub_1C6BA08(&StringLiteral_21937/*"mstEventRewardGuideRelease"*/);
    sub_1C6BA08(&StringLiteral_21823/*"mstClassBoardCommandSpell"*/);
    sub_1C6BA08(&StringLiteral_22018/*"mstMasterIndividualitySelect"*/);
    sub_1C6BA08(&StringLiteral_22220/*"mstWarRelease"*/);
    sub_1C6BA08(&StringLiteral_21974/*"mstGachaBehavior"*/);
    sub_1C6BA08(&StringLiteral_22178/*"mstWar"*/);
    sub_1C6BA08(&StringLiteral_21871/*"mstEventBonusFilter"*/);
    sub_1C6BA08(&StringLiteral_22063/*"mstQuestScriptRelease"*/);
    sub_1C6BA08(&StringLiteral_24630/*"userEventMap"*/);
    sub_1C6BA08(&StringLiteral_21917/*"mstEventPanelSpot"*/);
    sub_1C6BA08(&StringLiteral_21820/*"mstClass"*/);
    sub_1C6BA08(&StringLiteral_24602/*"userAccessary"*/);
    sub_1C6BA08(&StringLiteral_22131/*"mstSvtLimitAdd"*/);
    sub_1C6BA08(&StringLiteral_22062/*"mstQuestScriptMaterialOverwrite"*/);
    sub_1C6BA08(&StringLiteral_18145/*"combineExp"*/);
    sub_1C6BA08(&StringLiteral_24646/*"userFormation"*/);
    sub_1C6BA08(&StringLiteral_22195/*"mstWarBoardMessageScript"*/);
    sub_1C6BA08(&StringLiteral_21925/*"mstEventProgressValue"*/);
    sub_1C6BA08(&StringLiteral_24694/*"userSvtVoicePlayed"*/);
    sub_1C6BA08(&StringLiteral_22112/*"mstSvtBattlePoint"*/);
    sub_1C6BA08(&StringLiteral_22126/*"mstSvtFlag"*/);
    sub_1C6BA08(&StringLiteral_21807/*"mstBoardMessage"*/);
    sub_1C6BA08(&StringLiteral_21916/*"mstEventPanelScan"*/);
    sub_1C6BA08(&StringLiteral_22132/*"mstSvtLimitImage"*/);
    sub_1C6BA08(&StringLiteral_21889/*"mstEventDiggingBlock"*/);
    sub_1C6BA08(&StringLiteral_24638/*"userEventRandomMission"*/);
    sub_1C6BA08(&StringLiteral_21783/*"mstArea"*/);
    sub_1C6BA08(&StringLiteral_24229/*"totalEventRaid"*/);
    sub_1C6BA08(&StringLiteral_22390/*"notEndEventMissionFix"*/);
    sub_1C6BA08(&StringLiteral_22086/*"mstShopScript"*/);
    sub_1C6BA08(&StringLiteral_24631/*"userEventMission"*/);
    sub_1C6BA08(&StringLiteral_22021/*"mstMasterPhoto"*/);
    sub_1C6BA08(&StringLiteral_21908/*"mstEventMissionActionAdd"*/);
    sub_1C6BA08(&StringLiteral_21840/*"mstCombineTd"*/);
    sub_1C6BA08(&StringLiteral_24688/*"userSvtFirstGetTime"*/);
    sub_1C6BA08(&StringLiteral_21809/*"mstBoost"*/);
    sub_1C6BA08(&StringLiteral_22146/*"mstSvtScriptAdd"*/);
    sub_1C6BA08(&StringLiteral_21811/*"mstBoxGachaBase"*/);
    sub_1C6BA08(&StringLiteral_21792/*"mstBannerAdd"*/);
    sub_1C6BA08(&StringLiteral_21778/*"mstAccessary"*/);
    sub_1C6BA08(&StringLiteral_22169/*"mstTreasureDeviceSequenceWeight"*/);
    sub_1C6BA08(&StringLiteral_24636/*"userEventRace"*/);
    sub_1C6BA08(&StringLiteral_22042/*"mstQuestGroup"*/);
    sub_1C6BA08(&StringLiteral_21924/*"mstEventPointUpperRelease"*/);
    sub_1C6BA08(&StringLiteral_24692/*"userSvtLeader"*/);
    sub_1C6BA08(&StringLiteral_22130/*"mstSvtLimit"*/);
    sub_1C6BA08(&StringLiteral_24644/*"userFollow"*/);
    sub_1C6BA08(&StringLiteral_21905/*"mstEventLocationCampaign"*/);
    sub_1C6BA08(&StringLiteral_21837/*"mstCombineQp"*/);
    sub_1C6BA08(&StringLiteral_21866/*"mstEvent"*/);
    sub_1C6BA08(&StringLiteral_22127/*"mstSvtFlagRelease"*/);
    sub_1C6BA08(&StringLiteral_24647/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_1C6BA08(&StringLiteral_24666/*"userPrivilege"*/);
    sub_1C6BA08(&StringLiteral_21842/*"mstCommandCode"*/);
    sub_1C6BA08(&StringLiteral_22110/*"mstSvtAppendPassiveSkill"*/);
    sub_1C6BA08(&StringLiteral_21901/*"mstEventGroup"*/);
    sub_1C6BA08(&StringLiteral_21975/*"mstGachaBonusSelect"*/);
    sub_1C6BA08(&StringLiteral_24622/*"userEventBoardGameToken"*/);
    sub_1C6BA08(&StringLiteral_22023/*"mstMissionItemDisplay"*/);
    sub_1C6BA08(&StringLiteral_22028/*"mstMyroomSvtSpecialImage"*/);
    sub_1C6BA08(&StringLiteral_22203/*"mstWarBoardRoad"*/);
    sub_1C6BA08(&StringLiteral_21814/*"mstBuff"*/);
    sub_1C6BA08(&StringLiteral_24855/*"warBoardData"*/);
    sub_1C6BA08(&StringLiteral_21998/*"mstIllustrator"*/);
    sub_1C6BA08(&StringLiteral_24224/*"totalBoxGacha"*/);
    sub_1C6BA08(&StringLiteral_22144/*"mstSvtRarity"*/);
    sub_1C6BA08(&StringLiteral_22179/*"mstWarAdd"*/);
    sub_1C6BA08(&StringLiteral_22014/*"mstMapGimmickPathRelease"*/);
    sub_1C6BA08(&StringLiteral_24648/*"userFriendRequestHistory"*/);
    sub_1C6BA08(&StringLiteral_24600/*"user"*/);
    sub_1C6BA08(&StringLiteral_17379/*"boxGachaHistory"*/);
    sub_1C6BA08(&StringLiteral_21968/*"mstFuncGroup"*/);
    sub_1C6BA08(&StringLiteral_21847/*"mstCommonConsume"*/);
    sub_1C6BA08(&StringLiteral_22190/*"mstWarBoardEventScript"*/);
    sub_1C6BA08(&StringLiteral_21992/*"mstGiftAdd"*/);
    sub_1C6BA08(&StringLiteral_21956/*"mstEventUi"*/);
    sub_1C6BA08(&StringLiteral_22096/*"mstSpotImage"*/);
    sub_1C6BA08(&StringLiteral_22122/*"mstSvtCostumeRelease"*/);
    sub_1C6BA08(&StringLiteral_24607/*"userClassStatistics"*/);
    sub_1C6BA08(&StringLiteral_22009/*"mstMapGimmick"*/);
    sub_1C6BA08(&StringLiteral_22049/*"mstQuestPhaseIndividuality"*/);
    sub_1C6BA08(&StringLiteral_21954/*"mstEventTutorial"*/);
    sub_1C6BA08(&StringLiteral_22217/*"mstWarGroupIgnore"*/);
    sub_1C6BA08(&StringLiteral_22213/*"mstWarBoardStageWall"*/);
    sub_1C6BA08(&StringLiteral_24642/*"userEventTrade"*/);
    sub_1C6BA08(&StringLiteral_21782/*"mstAiField"*/);
    sub_1C6BA08(&StringLiteral_21962/*"mstFriendPointGachaAdjust"*/);
    sub_1C6BA08(&StringLiteral_22155/*"mstSvtTreasureDeviceRelease"*/);
    sub_1C6BA08(&StringLiteral_22046/*"mstQuestPhase"*/);
    sub_1C6BA08(&StringLiteral_24624/*"userEventDataLost"*/);
    sub_1C6BA08(&StringLiteral_22111/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_1C6BA08(&StringLiteral_22154/*"mstSvtTreasureDeviceDamage"*/);
    sub_1C6BA08(&StringLiteral_22102/*"mstStage"*/);
    sub_1C6BA08(&StringLiteral_21830/*"mstCombine"*/);
    sub_1C6BA08(&StringLiteral_21878/*"mstEventCampaign"*/);
    sub_1C6BA08(&StringLiteral_22210/*"mstWarBoardStageNpc"*/);
    sub_1C6BA08(&StringLiteral_22749/*"paymentHistory"*/);
    sub_1C6BA08(&StringLiteral_19369/*"exchangeSvt"*/);
    sub_1C6BA08(&StringLiteral_22103/*"mstStageRemap"*/);
    sub_1C6BA08(&StringLiteral_22070/*"mstRestriction"*/);
    sub_1C6BA08(&StringLiteral_22059/*"mstQuestScript"*/);
    sub_1C6BA08(&StringLiteral_21939/*"mstEventRewardSceneRelease"*/);
    sub_1C6BA08(&StringLiteral_22173/*"mstVoiceCond"*/);
    sub_1C6BA08(&StringLiteral_24677/*"userSubEquip"*/);
    sub_1C6BA08(&StringLiteral_21932/*"mstEventRecipe"*/);
    sub_1C6BA08(&StringLiteral_22121/*"mstSvtCostume"*/);
    sub_1C6BA08(&StringLiteral_22142/*"mstSvtProfile"*/);
    sub_1C6BA08(&StringLiteral_21849/*"mstCommonRestriction"*/);
    sub_1C6BA08(&StringLiteral_24656/*"userHeelPortrait"*/);
    sub_1C6BA08(&StringLiteral_22091/*"mstSkillGroupOverwrite"*/);
    sub_1C6BA08(&StringLiteral_24610/*"userCommandCodeCollection"*/);
    sub_1C6BA08(&StringLiteral_21845/*"mstCommandCodeSkillRelease"*/);
    sub_1C6BA08(&StringLiteral_21858/*"mstEffectMovie"*/);
    sub_1C6BA08(&StringLiteral_22051/*"mstQuestPickup"*/);
    sub_1C6BA08(&StringLiteral_22209/*"mstWarBoardStageLayout"*/);
    sub_1C6BA08(&StringLiteral_22184/*"mstWarBoardActionTrendCond"*/);
    sub_1C6BA08(&StringLiteral_21880/*"mstEventCombine"*/);
    sub_1C6BA08(&StringLiteral_22198/*"mstWarBoardQuest"*/);
    sub_1C6BA08(&StringLiteral_22039/*"mstQuestConsumeItem"*/);
    sub_1C6BA08(&StringLiteral_22048/*"mstQuestPhaseDetailAdd"*/);
    sub_1C6BA08(&StringLiteral_21997/*"mstHeelPortrait"*/);
    sub_1C6BA08(&StringLiteral_19370/*"exchangeSvtCoinGivenNum"*/);
    sub_1C6BA08(&StringLiteral_24665/*"userPresentHistory"*/);
    sub_1C6BA08(&StringLiteral_21819/*"mstChaldeaGatePickup"*/);
    sub_1C6BA08(&StringLiteral_22199/*"mstWarBoardRatingBase"*/);
    sub_1C6BA08(&StringLiteral_21980/*"mstGachaImage"*/);
    sub_1C6BA08(&StringLiteral_21864/*"mstEquipImage"*/);
    sub_1C6BA08(&StringLiteral_24637/*"userEventRaid"*/);
    sub_1C6BA08(&StringLiteral_22117/*"mstSvtCollection"*/);
    sub_1C6BA08(&StringLiteral_19754/*"friendshipQuestDialogInfo"*/);
    sub_1C6BA08(&StringLiteral_22029/*"mstNews"*/);
    sub_1C6BA08(&StringLiteral_21970/*"mstGacha"*/);
    sub_1C6BA08(&StringLiteral_22090/*"mstSkillGroup"*/);
    sub_1C6BA08(&StringLiteral_21996/*"mstGuide"*/);
    sub_1C6BA08(&StringLiteral_21983/*"mstGachaPickupCollateralGroup"*/);
    sub_1C6BA08(&StringLiteral_21825/*"mstClassBoardLock"*/);
    sub_1C6BA08(&StringLiteral_21856/*"mstDropAdd"*/);
    sub_1C6BA08(&StringLiteral_21923/*"mstEventPointUpper"*/);
    sub_1C6BA08(&StringLiteral_21804/*"mstBlankEarthSpot"*/);
    sub_1C6BA08(&StringLiteral_22160/*"mstTerminalOverwrite"*/);
    sub_1C6BA08(&StringLiteral_21865/*"mstEquipSkill"*/);
    sub_1C6BA08(&StringLiteral_21958/*"mstEventUiValue"*/);
    sub_1C6BA08(&StringLiteral_24612/*"userContinue"*/);
    sub_1C6BA08(&StringLiteral_22036/*"mstQuestAdd"*/);
    sub_1C6BA08(&StringLiteral_21824/*"mstClassBoardLine"*/);
    sub_1C6BA08(&StringLiteral_24543/*"updateProfileDialogInfo"*/);
    sub_1C6BA08(&StringLiteral_22171/*"mstVoice"*/);
    sub_1C6BA08(&StringLiteral_24632/*"userEventMissionConditionDetail"*/);
    sub_1C6BA08(&StringLiteral_21784/*"mstAssetbundleKey"*/);
    sub_1C6BA08(&StringLiteral_21914/*"mstEventPanelMap"*/);
    sub_1C6BA08(&StringLiteral_24661/*"userLogin"*/);
    sub_1C6BA08(&StringLiteral_22005/*"mstLoginQuest"*/);
    sub_1C6BA08(&StringLiteral_22031/*"mstPartialMaintenance"*/);
    sub_1C6BA08(&StringLiteral_24639/*"userEventSpot"*/);
    sub_1C6BA08(&StringLiteral_21934/*"mstEventReward"*/);
    sub_1C6BA08(&StringLiteral_21886/*"mstEventDataLostBattleReset"*/);
    sub_1C6BA08(&StringLiteral_21786/*"mstAttri"*/);
    sub_1C6BA08(&StringLiteral_22208/*"mstWarBoardStageDetail"*/);
    sub_1C6BA08(&StringLiteral_22149/*"mstSvtSkillAdd"*/);
    sub_1C6BA08(&StringLiteral_24635/*"userEventQuestCooltime"*/);
    sub_1C6BA08(&StringLiteral_22060/*"mstQuestScriptBranchMaterial"*/);
    sub_1C6BA08(&StringLiteral_21896/*"mstEventFatigueRecovery"*/);
    sub_1C6BA08(&StringLiteral_22186/*"mstWarBoardAi"*/);
    sub_1C6BA08(&StringLiteral_22165/*"mstTreasureBoxTalk"*/);
    sub_1C6BA08(&StringLiteral_22189/*"mstWarBoardEvent"*/);
    sub_1C6BA08(&StringLiteral_22175/*"mstVoicePlayCond"*/);
    sub_1C6BA08(&StringLiteral_21977/*"mstGachaDetail"*/);
    sub_1C6BA08(&StringLiteral_21945/*"mstEventSuperBoss"*/);
    sub_1C6BA08(&StringLiteral_22088/*"mstSkillAdd"*/);
    byte_4CB517D = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3484F58 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1C6BC60(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_22107/*"mstSvt"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_22119/*"mstSvtComment"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_22142/*"mstSvtProfile"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_22178/*"mstWar"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_17065/*"battle"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_22166/*"mstTreasureDevice"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_22130/*"mstSvtLimit"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_22152/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_21820/*"mstClass"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_22145/*"mstSvtScript"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_22113/*"mstSvtCard"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_22148/*"mstSvtSkill"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_22139/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_24679/*"userSvt"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_24693/*"userSvtStorage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_22102/*"mstStage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_22128/*"mstSvtGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_21804/*"mstBlankEarthSpot"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_21805/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_22094/*"mstSpot"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_22096/*"mstSpotImage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_22099/*"mstSpotRoad"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_22009/*"mstMapGimmick"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_21991/*"mstGift"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_21992/*"mstGiftAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_22106/*"mstSubEquip"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_24600/*"user"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_24654/*"userGame"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_24614/*"userDeck"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_24683/*"userSvtCollection"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_21963/*"mstFriendship"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_21970/*"mstGacha"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_21980/*"mstGachaImage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_24649/*"userGacha"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_24653/*"userGachaPickupCollateral"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24660/*"userItem"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_22002/*"mstItem"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_21987/*"mstGachaTicket"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_21971/*"mstGachaAdjustAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_21981/*"mstGachaPickup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_21962/*"mstFriendPointGachaAdjust"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_21973/*"mstGachaBaseCollateral"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_21778/*"mstAccessary"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_24602/*"userAccessary"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_24677/*"userSubEquip"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_24105/*"tblUserGame"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_22080/*"mstShop"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_22105/*"mstStoneShop"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_21790/*"mstBankShop"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_22086/*"mstShopScript"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_21861/*"mstEquip"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_21863/*"mstEquipExp"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_21865/*"mstEquipSkill"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_24618/*"userEquip"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_24646/*"userFormation"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_22087/*"mstSkill"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_22093/*"mstSkillLv"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_22089/*"mstSkillDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_21965/*"mstFunc"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_21814/*"mstBuff"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_21984/*"mstGachaRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_24668/*"userQuest"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_24669/*"userQuestInfo"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_24670/*"userQuestRecord"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_22170/*"mstUserExp"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_22029/*"mstNews"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_22159/*"mstTelop"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_22587/*"otherUserGame"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_24104/*"tblFriend"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_24664/*"userPresentBox"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_21866/*"mstEvent"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_22035/*"mstQuest"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_22036/*"mstQuestAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_22054/*"mstQuestRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_22046/*"mstQuestPhase"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_22047/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_22042/*"mstQuestGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_22053/*"mstQuestRandomGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_22039/*"mstQuestConsumeItem"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_22045/*"mstQuestMessage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_24795/*"viewQuestInfo"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_24792/*"viewEnemy"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_24794/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_21783/*"mstArea"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_21800/*"mstBgm"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_21926/*"mstEventQuest"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_21878/*"mstEventCampaign"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_21837/*"mstCombineQp"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_21836/*"mstCombineMaterial"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_21880/*"mstEventCombine"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_22124/*"mstSvtExp"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_21839/*"mstCombineSkill"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_21840/*"mstCombineTd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_21998/*"mstIllustrator"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_21854/*"mstCv"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_22168/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_22167/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_24645/*"userFollower"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_22408/*"npcFollower"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_22414/*"npcSvtFollower"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_24620/*"userEvent"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_24667/*"userProfile"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_24674/*"userShop"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_24612/*"userContinue"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_21851/*"mstConstant"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_21852/*"mstConstantLong"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_21853/*"mstConstantStr"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_21846/*"mstCommandSpell"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_21780/*"mstAi"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_21781/*"mstAiAct"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_22156/*"mstSvtVoice"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_21787/*"mstAttriRelation"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_21827/*"mstClassRelation"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_21857/*"mstEffect"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_21864/*"mstEquipImage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_21833/*"mstCombineLimit"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_21818/*"mstCard"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_21838/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_22131/*"mstSvtLimitAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_22144/*"mstSvtRarity"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_22079/*"mstSetItem"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_22069/*"mstRecover"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_21791/*"mstBanner"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_22084/*"mstShopRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_21934/*"mstEventReward"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_21887/*"mstEventDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_21946/*"mstEventSvt"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_21810/*"mstBoxGacha"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_21811/*"mstBoxGachaBase"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_21813/*"mstBoxGachaTalk"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_24605/*"userBoxGacha"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17379/*"boxGachaHistory"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_21793/*"mstBattleBg"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_22161/*"mstTips"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_24661/*"userLogin"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_22171/*"mstVoice"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_21936/*"mstEventRewardExtra"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_21906/*"mstEventMission"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_21910/*"mstEventMissionCondition"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    140,
    (Il2CppObject *)StringLiteral_21911/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    141,
    (Il2CppObject *)StringLiteral_21907/*"mstEventMissionAction"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    142,
    (Il2CppObject *)StringLiteral_21908/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    145,
    (Il2CppObject *)StringLiteral_21850/*"mstCompleteMission"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    143,
    (Il2CppObject *)StringLiteral_21909/*"mstEventMissionAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    144,
    (Il2CppObject *)StringLiteral_21940/*"mstEventRewardSet"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    146,
    (Il2CppObject *)StringLiteral_24631/*"userEventMission"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    147,
    (Il2CppObject *)StringLiteral_24632/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    148,
    (Il2CppObject *)StringLiteral_21812/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    149,
    (Il2CppObject *)StringLiteral_21829/*"mstClosedMessage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    150,
    (Il2CppObject *)StringLiteral_24692/*"userSvtLeader"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    151,
    (Il2CppObject *)StringLiteral_21968/*"mstFuncGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    152,
    (Il2CppObject *)StringLiteral_21930/*"mstEventRaid"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    153,
    (Il2CppObject *)StringLiteral_24229/*"totalEventRaid"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    154,
    (Il2CppObject *)StringLiteral_24637/*"userEventRaid"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    155,
    (Il2CppObject *)StringLiteral_21918/*"mstEventPoint"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    156,
    (Il2CppObject *)StringLiteral_21921/*"mstEventPointGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    157,
    (Il2CppObject *)StringLiteral_24227/*"totalEventPoint"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    158,
    (Il2CppObject *)StringLiteral_24634/*"userEventPoint"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    159,
    (Il2CppObject *)StringLiteral_24665/*"userPresentHistory"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    160,
    (Il2CppObject *)StringLiteral_22019/*"mstMasterMission"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    161,
    (Il2CppObject *)StringLiteral_22123/*"mstSvtExceed"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    162,
    (Il2CppObject *)StringLiteral_22031/*"mstPartialMaintenance"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    163,
    (Il2CppObject *)StringLiteral_21996/*"mstGuide"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    164,
    (Il2CppObject *)StringLiteral_22020/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    165,
    (Il2CppObject *)StringLiteral_21979/*"mstGachaGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    166,
    (Il2CppObject *)StringLiteral_22056/*"mstQuestReset"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    167,
    (Il2CppObject *)StringLiteral_22179/*"mstWarAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    168,
    (Il2CppObject *)StringLiteral_21902/*"mstEventItemDisplay"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    169,
    (Il2CppObject *)StringLiteral_21903/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    170,
    (Il2CppObject *)StringLiteral_21904/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    171,
    (Il2CppObject *)StringLiteral_21954/*"mstEventTutorial"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    172,
    (Il2CppObject *)StringLiteral_21955/*"mstEventTutorialCond"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    173,
    (Il2CppObject *)StringLiteral_22177/*"mstVoiceRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    174,
    (Il2CppObject *)StringLiteral_21945/*"mstEventSuperBoss"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    175,
    (Il2CppObject *)StringLiteral_24640/*"userEventSuperBoss"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    176,
    (Il2CppObject *)StringLiteral_22059/*"mstQuestScript"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    177,
    (Il2CppObject *)StringLiteral_22063/*"mstQuestScriptRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    178,
    (Il2CppObject *)StringLiteral_22022/*"mstMaterialFolder"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    179,
    (Il2CppObject *)StringLiteral_22070/*"mstRestriction"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    180,
    (Il2CppObject *)StringLiteral_22057/*"mstQuestRestriction"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    181,
    (Il2CppObject *)StringLiteral_22158/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    182,
    (Il2CppObject *)StringLiteral_22082/*"mstShopDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    183,
    (Il2CppObject *)StringLiteral_22146/*"mstSvtScriptAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    184,
    (Il2CppObject *)StringLiteral_21830/*"mstCombine"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    185,
    (Il2CppObject *)StringLiteral_21782/*"mstAiField"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    186,
    (Il2CppObject *)StringLiteral_22120/*"mstSvtCommentAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    187,
    (Il2CppObject *)StringLiteral_21897/*"mstEventFilter"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    188,
    (Il2CppObject *)StringLiteral_24678/*"userSupportDeck"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    189,
    (Il2CppObject *)StringLiteral_21938/*"mstEventRewardScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    190,
    (Il2CppObject *)StringLiteral_21959/*"mstEventVoicePlay"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    191,
    (Il2CppObject *)StringLiteral_21986/*"mstGachaSub"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    192,
    (Il2CppObject *)StringLiteral_21977/*"mstGachaDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    193,
    (Il2CppObject *)StringLiteral_21975/*"mstGachaBonusSelect"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    194,
    (Il2CppObject *)StringLiteral_21976/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    195,
    (Il2CppObject *)StringLiteral_22115/*"mstSvtChange"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    196,
    (Il2CppObject *)StringLiteral_22173/*"mstVoiceCond"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    197,
    (Il2CppObject *)StringLiteral_21801/*"mstBgmRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    198,
    (Il2CppObject *)StringLiteral_22026/*"mstMyroomAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    199,
    (Il2CppObject *)StringLiteral_22081/*"mstShopAction"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    200,
    (Il2CppObject *)StringLiteral_21939/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    201,
    (Il2CppObject *)StringLiteral_22006/*"mstMap"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    202,
    (Il2CppObject *)StringLiteral_22008/*"mstMapCond"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    203,
    (Il2CppObject *)StringLiteral_22007/*"mstMapButton"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    204,
    (Il2CppObject *)StringLiteral_21792/*"mstBannerAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    205,
    (Il2CppObject *)StringLiteral_22038/*"mstQuestBehavior"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    206,
    (Il2CppObject *)StringLiteral_21867/*"mstEventAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    207,
    (Il2CppObject *)StringLiteral_22162/*"mstTotalLogin"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    208,
    (Il2CppObject *)StringLiteral_22125/*"mstSvtFilter"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    209,
    (Il2CppObject *)StringLiteral_21832/*"mstCombineCostume"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    210,
    (Il2CppObject *)StringLiteral_22121/*"mstSvtCostume"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    211,
    (Il2CppObject *)StringLiteral_22122/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    212,
    (Il2CppObject *)StringLiteral_22100/*"mstStaffPhoto"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    213,
    (Il2CppObject *)StringLiteral_22101/*"mstStaffPhotoCostume"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    214,
    (Il2CppObject *)StringLiteral_24648/*"userFriendRequestHistory"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    215,
    (Il2CppObject *)StringLiteral_24604/*"userBlacklist"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    216,
    (Il2CppObject *)StringLiteral_22004/*"mstItemSelect"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    217,
    (Il2CppObject *)StringLiteral_21928/*"mstEventRace"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    218,
    (Il2CppObject *)StringLiteral_21929/*"mstEventRaceResult"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    219,
    (Il2CppObject *)StringLiteral_22052/*"mstQuestRacePoint"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    220,
    (Il2CppObject *)StringLiteral_24636/*"userEventRace"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    221,
    (Il2CppObject *)StringLiteral_21941/*"mstEventScript"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    222,
    (Il2CppObject *)StringLiteral_21942/*"mstEventScriptRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    223,
    (Il2CppObject *)StringLiteral_22098/*"mstSpotPath"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    224,
    (Il2CppObject *)StringLiteral_22095/*"mstSpotAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    225,
    (Il2CppObject *)StringLiteral_24228/*"totalEventRace"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    226,
    (Il2CppObject *)StringLiteral_21922/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    227,
    (Il2CppObject *)StringLiteral_22176/*"mstVoicePlayGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    228,
    (Il2CppObject *)StringLiteral_22175/*"mstVoicePlayCond"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    229,
    (Il2CppObject *)StringLiteral_21985/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    230,
    (Il2CppObject *)StringLiteral_22126/*"mstSvtFlag"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    231,
    (Il2CppObject *)StringLiteral_22127/*"mstSvtFlagRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    232,
    (Il2CppObject *)StringLiteral_21905/*"mstEventLocationCampaign"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    233,
    (Il2CppObject *)StringLiteral_21817/*"mstCampaignInfo"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    234,
    (Il2CppObject *)StringLiteral_21855/*"mstDialogMessage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    235,
    (Il2CppObject *)StringLiteral_22129/*"mstSvtIndividuality"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    236,
    (Il2CppObject *)StringLiteral_21807/*"mstBoardMessage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    237,
    (Il2CppObject *)StringLiteral_21808/*"mstBoardMessageRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    238,
    (Il2CppObject *)StringLiteral_21947/*"mstEventSvtFatigue"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    239,
    (Il2CppObject *)StringLiteral_24625/*"userEventDeck"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    240,
    (Il2CppObject *)StringLiteral_21949/*"mstEventTower"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    241,
    (Il2CppObject *)StringLiteral_21950/*"mstEventTowerReward"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    242,
    (Il2CppObject *)StringLiteral_21876/*"mstEventBulletinBoard"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    243,
    (Il2CppObject *)StringLiteral_21877/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    244,
    (Il2CppObject *)StringLiteral_21895/*"mstEventFactory"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    245,
    (Il2CppObject *)StringLiteral_22083/*"mstShopGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    246,
    (Il2CppObject *)StringLiteral_21788/*"mstAuraEffect"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    247,
    (Il2CppObject *)StringLiteral_21789/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    248,
    (Il2CppObject *)StringLiteral_24633/*"userEventMissionFix"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    249,
    (Il2CppObject *)StringLiteral_22390/*"notEndEventMissionFix"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    250,
    (Il2CppObject *)StringLiteral_21859/*"mstEnemyMaster"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    251,
    (Il2CppObject *)StringLiteral_21860/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    252,
    (Il2CppObject *)StringLiteral_22150/*"mstSvtSkillRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    253,
    (Il2CppObject *)StringLiteral_22140/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    254,
    (Il2CppObject *)StringLiteral_22155/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    255,
    (Il2CppObject *)StringLiteral_22015/*"mstMapGimmickRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    256,
    (Il2CppObject *)StringLiteral_21842/*"mstCommandCode"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    257,
    (Il2CppObject *)StringLiteral_22118/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    258,
    (Il2CppObject *)StringLiteral_24609/*"userCommandCode"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    259,
    (Il2CppObject *)StringLiteral_24610/*"userCommandCodeCollection"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    260,
    (Il2CppObject *)StringLiteral_24685/*"userSvtCommandCode"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    261,
    (Il2CppObject *)StringLiteral_21844/*"mstCommandCodeSkill"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    262,
    (Il2CppObject *)StringLiteral_21845/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    263,
    (Il2CppObject *)StringLiteral_21843/*"mstCommandCodeComment"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    264,
    (Il2CppObject *)StringLiteral_21943/*"mstEventStatus"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    265,
    (Il2CppObject *)StringLiteral_21944/*"mstEventStatusQuest"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    266,
    (Il2CppObject *)StringLiteral_21849/*"mstCommonRestriction"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    267,
    (Il2CppObject *)StringLiteral_21920/*"mstEventPointBuff"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    268,
    (Il2CppObject *)StringLiteral_24644/*"userFollow"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    269,
    (Il2CppObject *)StringLiteral_21937/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    270,
    (Il2CppObject *)StringLiteral_22413/*"npcSvtEquip"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    271,
    (Il2CppObject *)StringLiteral_21879/*"mstEventCampaignRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    272,
    (Il2CppObject *)StringLiteral_22135/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    273,
    (Il2CppObject *)StringLiteral_21892/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    274,
    (Il2CppObject *)StringLiteral_21919/*"mstEventPointActivity"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    275,
    (Il2CppObject *)StringLiteral_21966/*"mstFuncCategory"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    276,
    (Il2CppObject *)StringLiteral_22051/*"mstQuestPickup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    277,
    (Il2CppObject *)StringLiteral_21956/*"mstEventUi"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    278,
    (Il2CppObject *)StringLiteral_21957/*"mstEventUiRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    279,
    (Il2CppObject *)StringLiteral_21958/*"mstEventUiValue"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    280,
    (Il2CppObject *)StringLiteral_21883/*"mstEventConquestReward"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    281,
    (Il2CppObject *)StringLiteral_22409/*"npcFollowerRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    282,
    (Il2CppObject *)StringLiteral_21871/*"mstEventBonusFilter"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    283,
    (Il2CppObject *)StringLiteral_21872/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    284,
    (Il2CppObject *)StringLiteral_21873/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    285,
    (Il2CppObject *)StringLiteral_24652/*"userGachaExtraCount"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    286,
    (Il2CppObject *)StringLiteral_21841/*"mstCommandCardRankParam"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    287,
    (Il2CppObject *)StringLiteral_24684/*"userSvtCommandCard"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    288,
    (Il2CppObject *)StringLiteral_22034/*"mstPrivilege"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    289,
    (Il2CppObject *)StringLiteral_24666/*"userPrivilege"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    290,
    (Il2CppObject *)StringLiteral_22040/*"mstQuestDateRange"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    291,
    (Il2CppObject *)StringLiteral_21923/*"mstEventPointUpper"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    292,
    (Il2CppObject *)StringLiteral_21924/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    293,
    (Il2CppObject *)StringLiteral_24671/*"userQuestRoute"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    294,
    (Il2CppObject *)StringLiteral_21874/*"mstEventBossStatusUi"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    295,
    (Il2CppObject *)StringLiteral_21848/*"mstCommonRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    296,
    (Il2CppObject *)StringLiteral_22064/*"mstQuestSpotRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    297,
    (Il2CppObject *)StringLiteral_22174/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    298,
    (Il2CppObject *)StringLiteral_21828/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    299,
    (Il2CppObject *)StringLiteral_21901/*"mstEventGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    300,
    (Il2CppObject *)StringLiteral_21784/*"mstAssetbundleKey"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    301,
    (Il2CppObject *)StringLiteral_24224/*"totalBoxGacha"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    302,
    (Il2CppObject *)StringLiteral_22154/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    303,
    (Il2CppObject *)StringLiteral_19203/*"eventSvtFatigue"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    304,
    (Il2CppObject *)StringLiteral_21935/*"mstEventRewardBg"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    305,
    (Il2CppObject *)StringLiteral_21896/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    306,
    (Il2CppObject *)StringLiteral_19191/*"eventBoostItemUsed"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    307,
    (Il2CppObject *)StringLiteral_22104/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    308,
    (Il2CppObject *)StringLiteral_22048/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    309,
    (Il2CppObject *)StringLiteral_22172/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    310,
    (Il2CppObject *)StringLiteral_22103/*"mstStageRemap"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    311,
    (Il2CppObject *)StringLiteral_18145/*"combineExp"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    312,
    (Il2CppObject *)StringLiteral_21868/*"mstEventBoardGameCell"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    313,
    (Il2CppObject *)StringLiteral_21869/*"mstEventBoardGameToken"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    314,
    (Il2CppObject *)StringLiteral_21870/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    315,
    (Il2CppObject *)StringLiteral_24622/*"userEventBoardGameToken"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    316,
    (Il2CppObject *)StringLiteral_22109/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    317,
    (Il2CppObject *)StringLiteral_22030/*"mstOpeningMovie"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    318,
    (Il2CppObject *)StringLiteral_22133/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    319,
    (Il2CppObject *)StringLiteral_22782/*"pickupUserFollower"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    320,
    (Il2CppObject *)StringLiteral_22117/*"mstSvtCollection"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    321,
    (Il2CppObject *)StringLiteral_21974/*"mstGachaBehavior"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    322,
    (Il2CppObject *)StringLiteral_21927/*"mstEventQuestCooltime"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    323,
    (Il2CppObject *)StringLiteral_24635/*"userEventQuestCooltime"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    324,
    (Il2CppObject *)StringLiteral_21809/*"mstBoost"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    325,
    (Il2CppObject *)StringLiteral_22180/*"mstWarBoard"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    326,
    (Il2CppObject *)StringLiteral_22204/*"mstWarBoardSquare"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    327,
    (Il2CppObject *)StringLiteral_22203/*"mstWarBoardRoad"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    328,
    (Il2CppObject *)StringLiteral_22206/*"mstWarBoardStage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    329,
    (Il2CppObject *)StringLiteral_22181/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    330,
    (Il2CppObject *)StringLiteral_22183/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    331,
    (Il2CppObject *)StringLiteral_22214/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    332,
    (Il2CppObject *)StringLiteral_22209/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    333,
    (Il2CppObject *)StringLiteral_22210/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    334,
    (Il2CppObject *)StringLiteral_22213/*"mstWarBoardStageWall"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    335,
    (Il2CppObject *)StringLiteral_22186/*"mstWarBoardAi"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    336,
    (Il2CppObject *)StringLiteral_22199/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    337,
    (Il2CppObject *)StringLiteral_22200/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    338,
    (Il2CppObject *)StringLiteral_22193/*"mstWarBoardItem"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    339,
    (Il2CppObject *)StringLiteral_22215/*"mstWarBoardTreasure"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    340,
    (Il2CppObject *)StringLiteral_22198/*"mstWarBoardQuest"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    341,
    (Il2CppObject *)StringLiteral_24855/*"warBoardData"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    342,
    (Il2CppObject *)StringLiteral_22192/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    343,
    (Il2CppObject *)StringLiteral_22184/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    344,
    (Il2CppObject *)StringLiteral_22182/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    345,
    (Il2CppObject *)StringLiteral_22202/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    346,
    (Il2CppObject *)StringLiteral_22212/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    347,
    (Il2CppObject *)StringLiteral_21914/*"mstEventPanelMap"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    348,
    (Il2CppObject *)StringLiteral_21915/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    349,
    (Il2CppObject *)StringLiteral_21917/*"mstEventPanelSpot"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    350,
    (Il2CppObject *)StringLiteral_21916/*"mstEventPanelScan"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    351,
    (Il2CppObject *)StringLiteral_21888/*"mstEventDigging"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    352,
    (Il2CppObject *)StringLiteral_21890/*"mstEventDiggingReward"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    353,
    (Il2CppObject *)StringLiteral_21889/*"mstEventDiggingBlock"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    354,
    (Il2CppObject *)StringLiteral_24626/*"userEventDigging"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    355,
    (Il2CppObject *)StringLiteral_21847/*"mstCommonConsume"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    356,
    (Il2CppObject *)StringLiteral_24630/*"userEventMap"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    357,
    (Il2CppObject *)StringLiteral_24639/*"userEventSpot"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    358,
    (Il2CppObject *)StringLiteral_22216/*"mstWarGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    359,
    (Il2CppObject *)StringLiteral_22132/*"mstSvtLimitImage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    360,
    (Il2CppObject *)StringLiteral_19754/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    361,
    (Il2CppObject *)StringLiteral_22058/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    362,
    (Il2CppObject *)StringLiteral_21785/*"mstAssist"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    363,
    (Il2CppObject *)StringLiteral_22188/*"mstWarBoardEffect"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    364,
    (Il2CppObject *)StringLiteral_22196/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    365,
    (Il2CppObject *)StringLiteral_17139/*"beforeBirthDay"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    366,
    (Il2CppObject *)StringLiteral_22005/*"mstLoginQuest"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    367,
    (Il2CppObject *)StringLiteral_21881/*"mstEventCombineCostume"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    368,
    (Il2CppObject *)StringLiteral_22211/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    369,
    (Il2CppObject *)StringLiteral_22153/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    370,
    (Il2CppObject *)StringLiteral_22088/*"mstSkillAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    371,
    (Il2CppObject *)StringLiteral_22134/*"mstSvtLvDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    372,
    (Il2CppObject *)StringLiteral_21972/*"mstGachaAppend"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    373,
    (Il2CppObject *)StringLiteral_24651/*"userGachaDrawLog"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    374,
    (Il2CppObject *)StringLiteral_22110/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    375,
    (Il2CppObject *)StringLiteral_24680/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    376,
    (Il2CppObject *)StringLiteral_24681/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    377,
    (Il2CppObject *)StringLiteral_22111/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    378,
    (Il2CppObject *)StringLiteral_21831/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    379,
    (Il2CppObject *)StringLiteral_22116/*"mstSvtCoin"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    380,
    (Il2CppObject *)StringLiteral_24682/*"userSvtCoin"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    381,
    (Il2CppObject *)StringLiteral_22108/*"mstSvtAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    382,
    (Il2CppObject *)StringLiteral_22163/*"mstTreasureBox"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    383,
    (Il2CppObject *)StringLiteral_22164/*"mstTreasureBoxGift"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    384,
    (Il2CppObject *)StringLiteral_22165/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    385,
    (Il2CppObject *)StringLiteral_24627/*"userEventExpedition"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    386,
    (Il2CppObject *)StringLiteral_21893/*"mstEventExpedition"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    387,
    (Il2CppObject *)StringLiteral_21894/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    388,
    (Il2CppObject *)StringLiteral_21932/*"mstEventRecipe"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    389,
    (Il2CppObject *)StringLiteral_21933/*"mstEventRecipeGift"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    390,
    (Il2CppObject *)StringLiteral_24628/*"userEventFortification"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    391,
    (Il2CppObject *)StringLiteral_21898/*"mstEventFortification"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    392,
    (Il2CppObject *)StringLiteral_21899/*"mstEventFortificationDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    393,
    (Il2CppObject *)StringLiteral_21900/*"mstEventFortificationSvt"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    394,
    (Il2CppObject *)StringLiteral_24694/*"userSvtVoicePlayed"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    395,
    (Il2CppObject *)StringLiteral_24543/*"updateProfileDialogInfo"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    396,
    (Il2CppObject *)StringLiteral_22136/*"mstSvtMaterialTd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    397,
    (Il2CppObject *)StringLiteral_21794/*"mstBattleMasterImage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    398,
    (Il2CppObject *)StringLiteral_24647/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    399,
    (Il2CppObject *)StringLiteral_24638/*"userEventRandomMission"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    400,
    (Il2CppObject *)StringLiteral_21925/*"mstEventProgressValue"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    401,
    (Il2CppObject *)StringLiteral_22137/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    402,
    (Il2CppObject *)StringLiteral_21931/*"mstEventRandomMission"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    403,
    (Il2CppObject *)StringLiteral_24650/*"userGachaDrawHistory"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    404,
    (Il2CppObject *)StringLiteral_24608/*"userCoinRoom"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    405,
    (Il2CppObject *)StringLiteral_21875/*"mstEventBuddyPoint"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    406,
    (Il2CppObject *)StringLiteral_21948/*"mstEventSvtPointRank"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    407,
    (Il2CppObject *)StringLiteral_24641/*"userEventSvtPoint"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    408,
    (Il2CppObject *)StringLiteral_21961/*"mstFieldMotion"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    409,
    (Il2CppObject *)StringLiteral_24617/*"userDeleteReservation"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    410,
    (Il2CppObject *)StringLiteral_22147/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    411,
    (Il2CppObject *)StringLiteral_21862/*"mstEquipAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    412,
    (Il2CppObject *)StringLiteral_22055/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    413,
    (Il2CppObject *)StringLiteral_24621/*"userEventAlloutBattle"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    414,
    (Il2CppObject *)StringLiteral_22061/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    415,
    (Il2CppObject *)StringLiteral_21795/*"mstBattleMessage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    416,
    (Il2CppObject *)StringLiteral_21796/*"mstBattleMessageGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    417,
    (Il2CppObject *)StringLiteral_24662/*"userNpcSvtRecord"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    418,
    (Il2CppObject *)StringLiteral_21816/*"mstBuffTypeDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    419,
    (Il2CppObject *)StringLiteral_22194/*"mstWarBoardMessage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    420,
    (Il2CppObject *)StringLiteral_22197/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    421,
    (Il2CppObject *)StringLiteral_22195/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    422,
    (Il2CppObject *)StringLiteral_22219/*"mstWarQuestSelection"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    423,
    (Il2CppObject *)StringLiteral_22208/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    424,
    (Il2CppObject *)StringLiteral_22062/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    425,
    (Il2CppObject *)StringLiteral_22060/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    426,
    (Il2CppObject *)StringLiteral_21779/*"mstAdCheckPoint"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    427,
    (Il2CppObject *)StringLiteral_21993/*"mstGiftDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    428,
    (Il2CppObject *)StringLiteral_21834/*"mstCombineLimitGift"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    429,
    (Il2CppObject *)StringLiteral_21884/*"mstEventCooltimeReward"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    430,
    (Il2CppObject *)StringLiteral_24623/*"userEventCooltimeReward"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    431,
    (Il2CppObject *)StringLiteral_21822/*"mstClassBoardClass"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    432,
    (Il2CppObject *)StringLiteral_21821/*"mstClassBoardBase"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    433,
    (Il2CppObject *)StringLiteral_21824/*"mstClassBoardLine"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    434,
    (Il2CppObject *)StringLiteral_21825/*"mstClassBoardLock"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    435,
    (Il2CppObject *)StringLiteral_21826/*"mstClassBoardSquare"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    436,
    (Il2CppObject *)StringLiteral_21823/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    437,
    (Il2CppObject *)StringLiteral_24606/*"userClassBoardSquare"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    438,
    (Il2CppObject *)StringLiteral_22114/*"mstSvtCardAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    439,
    (Il2CppObject *)StringLiteral_22016/*"mstMapLayer"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    440,
    (Il2CppObject *)StringLiteral_22097/*"mstSpotLayer"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    441,
    (Il2CppObject *)StringLiteral_22011/*"mstMapGimmickLayer"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    442,
    (Il2CppObject *)StringLiteral_21885/*"mstEventDataLostBattle"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    443,
    (Il2CppObject *)StringLiteral_21886/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    444,
    (Il2CppObject *)StringLiteral_24624/*"userEventDataLost"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    445,
    (Il2CppObject *)StringLiteral_22043/*"mstQuestHint"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    446,
    (Il2CppObject *)StringLiteral_21969/*"mstFuncTypeDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    447,
    (Il2CppObject *)StringLiteral_21815/*"mstBuffConvert"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    448,
    (Il2CppObject *)StringLiteral_22090/*"mstSkillGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    449,
    (Il2CppObject *)StringLiteral_22091/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    450,
    (Il2CppObject *)StringLiteral_22092/*"mstSkillIndividuality"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    451,
    (Il2CppObject *)StringLiteral_22071/*"mstRestrictionBase"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    452,
    (Il2CppObject *)StringLiteral_22073/*"mstRestrictionSlot"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    453,
    (Il2CppObject *)StringLiteral_22074/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    454,
    (Il2CppObject *)StringLiteral_22072/*"mstRestrictionMessage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    455,
    (Il2CppObject *)StringLiteral_22075/*"mstRestrictionWhole"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    456,
    (Il2CppObject *)StringLiteral_21967/*"mstFuncDisp"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    457,
    (Il2CppObject *)StringLiteral_21882/*"mstEventCommandAssist"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    458,
    (Il2CppObject *)StringLiteral_21912/*"mstEventMissionGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    459,
    (Il2CppObject *)StringLiteral_21835/*"mstCombineLimitRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    460,
    (Il2CppObject *)StringLiteral_22169/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    461,
    (Il2CppObject *)StringLiteral_21997/*"mstHeelPortrait"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    462,
    (Il2CppObject *)StringLiteral_24656/*"userHeelPortrait"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    463,
    (Il2CppObject *)StringLiteral_22415/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    464,
    (Il2CppObject *)StringLiteral_21978/*"mstGachaExtraGift"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    465,
    (Il2CppObject *)StringLiteral_21913/*"mstEventMural"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    466,
    (Il2CppObject *)StringLiteral_24796/*"viewWaveEnemy"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    467,
    (Il2CppObject *)StringLiteral_21806/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    468,
    (Il2CppObject *)StringLiteral_21802/*"mstBlankEarthGimmick"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    469,
    (Il2CppObject *)StringLiteral_22160/*"mstTerminalOverwrite"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    470,
    (Il2CppObject *)StringLiteral_19369/*"exchangeSvt"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    471,
    (Il2CppObject *)StringLiteral_22187/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    472,
    (Il2CppObject *)StringLiteral_22189/*"mstWarBoardEvent"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    473,
    (Il2CppObject *)StringLiteral_22190/*"mstWarBoardEventScript"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    474,
    (Il2CppObject *)StringLiteral_22207/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    475,
    (Il2CppObject *)StringLiteral_22205/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    476,
    (Il2CppObject *)StringLiteral_22185/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    477,
    (Il2CppObject *)StringLiteral_22201/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    478,
    (Il2CppObject *)StringLiteral_22191/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    479,
    (Il2CppObject *)StringLiteral_22143/*"mstSvtProfilePush"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    480,
    (Il2CppObject *)StringLiteral_22013/*"mstMapGimmickPath"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    481,
    (Il2CppObject *)StringLiteral_22014/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    482,
    (Il2CppObject *)StringLiteral_22138/*"mstSvtOverwrite"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    483,
    (Il2CppObject *)StringLiteral_22001/*"mstIndividualityPolicy"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    484,
    (Il2CppObject *)StringLiteral_22000/*"mstIndividualityPersonality"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    485,
    (Il2CppObject *)StringLiteral_21786/*"mstAttri"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    486,
    (Il2CppObject *)StringLiteral_22157/*"mstSvtVoicePattern"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    487,
    (Il2CppObject *)StringLiteral_24655/*"userGameCommon"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    488,
    (Il2CppObject *)StringLiteral_22141/*"mstSvtPhoto"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    489,
    (Il2CppObject *)StringLiteral_22021/*"mstMasterPhoto"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    490,
    (Il2CppObject *)StringLiteral_22033/*"mstPhotoFrame"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    491,
    (Il2CppObject *)StringLiteral_22218/*"mstWarMessage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    492,
    (Il2CppObject *)StringLiteral_22037/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    493,
    (Il2CppObject *)StringLiteral_21960/*"mstExcludeMotionCond"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    494,
    (Il2CppObject *)StringLiteral_24659/*"userInterruptionQuest"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    495,
    (Il2CppObject *)StringLiteral_22151/*"mstSvtTransform"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    496,
    (Il2CppObject *)StringLiteral_22017/*"mstMapUpdateSchedule"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    497,
    (Il2CppObject *)StringLiteral_22050/*"mstQuestPhasePresent"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    498,
    (Il2CppObject *)StringLiteral_24603/*"userAccountLinkage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    499,
    (Il2CppObject *)StringLiteral_22025/*"mstMissionNaviTransition"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    500,
    (Il2CppObject *)StringLiteral_21951/*"mstEventTradeGoods"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    501,
    (Il2CppObject *)StringLiteral_21952/*"mstEventTradePickup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    502,
    (Il2CppObject *)StringLiteral_21953/*"mstEventTradeStore"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    503,
    (Il2CppObject *)StringLiteral_24642/*"userEventTrade"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    504,
    (Il2CppObject *)StringLiteral_22024/*"mstMissionNaviQuest"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    505,
    (Il2CppObject *)StringLiteral_22749/*"paymentHistory"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    506,
    (Il2CppObject *)StringLiteral_24643/*"userExternalPaymentStone"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    507,
    (Il2CppObject *)StringLiteral_22049/*"mstQuestPhaseIndividuality"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    508,
    (Il2CppObject *)StringLiteral_24793/*"viewGachaFeaturedSvt"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    514,
    (Il2CppObject *)StringLiteral_21858/*"mstEffectMovie"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    509,
    (Il2CppObject *)StringLiteral_21982/*"mstGachaPickupCollateral"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    510,
    (Il2CppObject *)StringLiteral_21983/*"mstGachaPickupCollateralGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    511,
    (Il2CppObject *)StringLiteral_21797/*"mstBattlePoint"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    512,
    (Il2CppObject *)StringLiteral_21798/*"mstBattlePointPhase"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    513,
    (Il2CppObject *)StringLiteral_22112/*"mstSvtBattlePoint"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    515,
    (Il2CppObject *)StringLiteral_22032/*"mstPaymentLimit"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    516,
    (Il2CppObject *)StringLiteral_24663/*"userPaymentLimit"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    517,
    (Il2CppObject *)StringLiteral_22076/*"mstRoadmap"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    518,
    (Il2CppObject *)StringLiteral_24673/*"userRecommendSupport"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    520,
    (Il2CppObject *)StringLiteral_22067/*"mstRecommendAdviceMessage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    519,
    (Il2CppObject *)StringLiteral_22068/*"mstRecommendSupportQuest"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    521,
    (Il2CppObject *)StringLiteral_24672/*"userRecommendFollower"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    522,
    (Il2CppObject *)StringLiteral_22003/*"mstItemDropEfficiency"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    523,
    (Il2CppObject *)StringLiteral_21803/*"mstBlankEarthGimmickAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    524,
    (Il2CppObject *)StringLiteral_22220/*"mstWarRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    525,
    (Il2CppObject *)StringLiteral_22078/*"mstSelectBonusBase"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    526,
    (Il2CppObject *)StringLiteral_22077/*"mstSelectBonus"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    527,
    (Il2CppObject *)StringLiteral_22028/*"mstMyroomSvtSpecialImage"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    528,
    (Il2CppObject *)StringLiteral_22085/*"mstShopReset"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    529,
    (Il2CppObject *)StringLiteral_22412/*"npcSvtDisplayTypeDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    530,
    (Il2CppObject *)StringLiteral_21964/*"mstFriendshipSvt"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    531,
    (Il2CppObject *)StringLiteral_19370/*"exchangeSvtCoinGivenNum"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    532,
    (Il2CppObject *)StringLiteral_21819/*"mstChaldeaGatePickup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    533,
    (Il2CppObject *)StringLiteral_22217/*"mstWarGroupIgnore"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    534,
    (Il2CppObject *)StringLiteral_21999/*"mstImagePartsGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    535,
    (Il2CppObject *)StringLiteral_24658/*"userImagePartsGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    536,
    (Il2CppObject *)StringLiteral_22023/*"mstMissionItemDisplay"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    537,
    (Il2CppObject *)StringLiteral_22065/*"mstQuestUseItemGroup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    538,
    (Il2CppObject *)StringLiteral_22066/*"mstQuestUseItemPickup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    539,
    (Il2CppObject *)StringLiteral_24629/*"userEventItemLinkSvt"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    540,
    (Il2CppObject *)StringLiteral_22044/*"mstQuestHintOverwrite"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    541,
    (Il2CppObject *)StringLiteral_23062/*"reachedWaveInfo"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    542,
    (Il2CppObject *)StringLiteral_21988/*"mstGallery"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    543,
    (Il2CppObject *)StringLiteral_21990/*"mstGalleryResource"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    544,
    (Il2CppObject *)StringLiteral_22149/*"mstSvtSkillAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    545,
    (Il2CppObject *)StringLiteral_21989/*"mstGalleryFolderRelease"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    546,
    (Il2CppObject *)StringLiteral_24688/*"userSvtFirstGetTime"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    547,
    (Il2CppObject *)StringLiteral_22041/*"mstQuestExtension"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    548,
    (Il2CppObject *)StringLiteral_24689/*"userSvtGrand"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    549,
    (Il2CppObject *)StringLiteral_21994/*"mstGrandGraph"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    550,
    (Il2CppObject *)StringLiteral_21995/*"mstGrandGraphDetail"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    551,
    (Il2CppObject *)StringLiteral_24607/*"userClassStatistics"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    552,
    (Il2CppObject *)StringLiteral_21891/*"mstEventEquipSkillParts"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    553,
    (Il2CppObject *)StringLiteral_22018/*"mstMasterIndividualitySelect"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    554,
    (Il2CppObject *)StringLiteral_22027/*"mstMyroomAddBgDiff"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    555,
    (Il2CppObject *)StringLiteral_21799/*"mstBattleScript"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    556,
    (Il2CppObject *)StringLiteral_21856/*"mstDropAdd"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  DataNameKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_DataNameKind_Kind__string__o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)DataNameKind_TypeInfo->static_fields, (int32_t)v1, v4, v5);
}


void DataNameKind___ctor(DataNameKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *DataNameKind__GetName(int32_t kind, const MethodInfo *method)
{
  DataNameKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4CB517C & 1) == 0 )
  {
    sub_1C6BA08(&DataNameKind_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_4CB517C = 1;
  }
  v3 = DataNameKind_TypeInfo;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
    v3 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1C6BC60(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_348588C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}