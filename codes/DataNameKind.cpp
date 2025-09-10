void DataNameKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C261B1 & 1) == 0 )
  {
    sub_1C2D490(&DataNameKind_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_1C2D490(&StringLiteral_21846/*"mstEventTradeGoods"*/);
    sub_1C2D490(&StringLiteral_24529/*"userGameCommon"*/);
    sub_1C2D490(&StringLiteral_21806/*"mstEventMissionConditionDetail"*/);
    sub_1C2D490(&StringLiteral_22058/*"mstTreasureBoxGift"*/);
    sub_1C2D490(&StringLiteral_21739/*"mstCommandCodeComment"*/);
    sub_1C2D490(&StringLiteral_21802/*"mstEventMissionAction"*/);
    sub_1C2D490(&StringLiteral_24495/*"userEventAlloutBattle"*/);
    sub_1C2D490(&StringLiteral_22948/*"reachedWaveInfo"*/);
    sub_1C2D490(&StringLiteral_21767/*"mstEventBonusFilterGroupInfo"*/);
    sub_1C2D490(&StringLiteral_24546/*"userRecommendFollower"*/);
    sub_1C2D490(&StringLiteral_21949/*"mstQuestReleaseOverwrite"*/);
    sub_1C2D490(&StringLiteral_21910/*"mstMapGimmickRelease"*/);
    sub_1C2D490(&StringLiteral_21873/*"mstGachaExtraGift"*/);
    sub_1C2D490(&StringLiteral_22309/*"npcSvtFollowerIndividuality"*/);
    sub_1C2D490(&StringLiteral_21769/*"mstEventBossStatusUi"*/);
    sub_1C2D490(&StringLiteral_24555/*"userSvtAppendPassiveSkillLv"*/);
    sub_1C2D490(&StringLiteral_21723/*"mstClassRelation"*/);
    sub_1C2D490(&StringLiteral_21678/*"mstAiAct"*/);
    sub_1C2D490(&StringLiteral_22003/*"mstSvtAnimationOverwrite"*/);
    sub_1C2D490(&StringLiteral_21951/*"mstQuestRestriction"*/);
    sub_1C2D490(&StringLiteral_21750/*"mstCv"*/);
    sub_1C2D490(&StringLiteral_24500/*"userEventDigging"*/);
    sub_1C2D490(&StringLiteral_23986/*"tblUserGame"*/);
    sub_1C2D490(&StringLiteral_21780/*"mstEventDataLostBattle"*/);
    sub_1C2D490(&StringLiteral_21770/*"mstEventBuddyPoint"*/);
    sub_1C2D490(&StringLiteral_21697/*"mstBgmRelease"*/);
    sub_1C2D490(&StringLiteral_22030/*"mstSvtMaterialTd"*/);
    sub_1C2D490(&StringLiteral_21744/*"mstCommonRelease"*/);
    sub_1C2D490(&StringLiteral_21858/*"mstFriendship"*/);
    sub_1C2D490(&StringLiteral_24480/*"userClassBoardSquare"*/);
    sub_1C2D490(&StringLiteral_21748/*"mstConstantLong"*/);
    sub_1C2D490(&StringLiteral_21722/*"mstClassBoardSquare"*/);
    sub_1C2D490(&StringLiteral_24559/*"userSvtCommandCode"*/);
    sub_1C2D490(&StringLiteral_21932/*"mstQuestBehavior"*/);
    sub_1C2D490(&StringLiteral_21898/*"mstItemDropEfficiency"*/);
    sub_1C2D490(&StringLiteral_22029/*"mstSvtMaterialFolder"*/);
    sub_1C2D490(&StringLiteral_22105/*"mstWarBoardStagePieceDetail"*/);
    sub_1C2D490(&StringLiteral_21847/*"mstEventTradePickup"*/);
    sub_1C2D490(&StringLiteral_21768/*"mstEventBonusFilterGroupMember"*/);
    sub_1C2D490(&StringLiteral_21937/*"mstQuestHint"*/);
    sub_1C2D490(&StringLiteral_21742/*"mstCommandSpell"*/);
    sub_1C2D490(&StringLiteral_21676/*"mstAdCheckPoint"*/);
    sub_1C2D490(&StringLiteral_21928/*"mstPrivilege"*/);
    sub_1C2D490(&StringLiteral_21938/*"mstQuestHintOverwrite"*/);
    sub_1C2D490(&StringLiteral_21704/*"mstBoardMessageRelease"*/);
    sub_1C2D490(&StringLiteral_21879/*"mstGachaRelease"*/);
    sub_1C2D490(&StringLiteral_24491/*"userDeleteReservation"*/);
    sub_1C2D490(&StringLiteral_22057/*"mstTreasureBox"*/);
    sub_1C2D490(&StringLiteral_24532/*"userImagePartsGroup"*/);
    sub_1C2D490(&StringLiteral_21758/*"mstEquipExp"*/);
    sub_1C2D490(&StringLiteral_21765/*"mstEventBoardGameTokenReward"*/);
    sub_1C2D490(&StringLiteral_22010/*"mstSvtCoin"*/);
    sub_1C2D490(&StringLiteral_22041/*"mstSvtScriptMultiple"*/);
    sub_1C2D490(&StringLiteral_21917/*"mstMaterialFolder"*/);
    sub_1C2D490(&StringLiteral_21776/*"mstEventCombineCostume"*/);
    sub_1C2D490(&StringLiteral_21934/*"mstQuestDateRange"*/);
    sub_1C2D490(&StringLiteral_22101/*"mstWarBoardStageBoss"*/);
    sub_1C2D490(&StringLiteral_21711/*"mstBuffConvert"*/);
    sub_1C2D490(&StringLiteral_21960/*"mstQuestUseItemPickup"*/);
    sub_1C2D490(&StringLiteral_21685/*"mstAuraEffect"*/);
    sub_1C2D490(&StringLiteral_21824/*"mstEventRaceResult"*/);
    sub_1C2D490(&StringLiteral_21973/*"mstSetItem"*/);
    sub_1C2D490(&StringLiteral_22306/*"npcSvtDisplayTypeDetail"*/);
    sub_1C2D490(&StringLiteral_21995/*"mstStaffPhotoCostume"*/);
    sub_1C2D490(&StringLiteral_21884/*"mstGalleryFolderRelease"*/);
    sub_1C2D490(&StringLiteral_21963/*"mstRecover"*/);
    sub_1C2D490(&StringLiteral_21839/*"mstEventStatusQuest"*/);
    sub_1C2D490(&StringLiteral_24497/*"userEventCooltimeReward"*/);
    sub_1C2D490(&StringLiteral_21926/*"mstPaymentLimit"*/);
    sub_1C2D490(&StringLiteral_22079/*"mstWarBoardActionTrendGroup"*/);
    sub_1C2D490(&StringLiteral_24545/*"userQuestRoute"*/);
    sub_1C2D490(&StringLiteral_21987/*"mstSkillLv"*/);
    sub_1C2D490(&StringLiteral_22022/*"mstSvtGroup"*/);
    sub_1C2D490(&StringLiteral_22066/*"mstVoiceClosedMessage"*/);
    sub_1C2D490(&StringLiteral_21789/*"mstEventExpeditionPiece"*/);
    sub_1C2D490(&StringLiteral_21931/*"mstQuestAutoOrganizationAdjust"*/);
    sub_1C2D490(&StringLiteral_22031/*"mstSvtMultiPortrait"*/);
    sub_1C2D490(&StringLiteral_21792/*"mstEventFilter"*/);
    sub_1C2D490(&StringLiteral_21919/*"mstMissionNaviQuest"*/);
    sub_1C2D490(&StringLiteral_24547/*"userRecommendSupport"*/);
    sub_1C2D490(&StringLiteral_24534/*"userItem"*/);
    sub_1C2D490(&StringLiteral_21788/*"mstEventExpedition"*/);
    sub_1C2D490(&StringLiteral_21823/*"mstEventRace"*/);
    sub_1C2D490(&StringLiteral_21952/*"mstQuestRestrictionInfo"*/);
    sub_1C2D490(&StringLiteral_21950/*"mstQuestReset"*/);
    sub_1C2D490(&StringLiteral_24501/*"userEventExpedition"*/);
    sub_1C2D490(&StringLiteral_21795/*"mstEventFortificationSvt"*/);
    sub_1C2D490(&StringLiteral_22106/*"mstWarBoardStageReinforcements"*/);
    sub_1C2D490(&StringLiteral_21717/*"mstClassBoardBase"*/);
    sub_1C2D490(&StringLiteral_21754/*"mstEnemyMaster"*/);
    sub_1C2D490(&StringLiteral_21686/*"mstAuraEffectPosOverwrite"*/);
    sub_1C2D490(&StringLiteral_21967/*"mstRestrictionSlot"*/);
    sub_1C2D490(&StringLiteral_21881/*"mstGachaSub"*/);
    sub_1C2D490(&StringLiteral_21843/*"mstEventSvtPointRank"*/);
    sub_1C2D490(&StringLiteral_21816/*"mstEventPointGroup"*/);
    sub_1C2D490(&StringLiteral_21762/*"mstEventAdd"*/);
    sub_1C2D490(&StringLiteral_21756/*"mstEquip"*/);
    sub_1C2D490(&StringLiteral_21828/*"mstEventRecipeGift"*/);
    sub_1C2D490(&StringLiteral_22053/*"mstTelop"*/);
    sub_1C2D490(&StringLiteral_24557/*"userSvtCollection"*/);
    sub_1C2D490(&StringLiteral_24507/*"userEventMissionFix"*/);
    sub_1C2D490(&StringLiteral_21965/*"mstRestrictionBase"*/);
    sub_1C2D490(&StringLiteral_22055/*"mstTips"*/);
    sub_1C2D490(&StringLiteral_21994/*"mstStaffPhoto"*/);
    sub_1C2D490(&StringLiteral_21687/*"mstBankShop"*/);
    sub_1C2D490(&StringLiteral_21854/*"mstEventVoicePlay"*/);
    sub_1C2D490(&StringLiteral_21959/*"mstQuestUseItemGroup"*/);
    sub_1C2D490(&StringLiteral_21794/*"mstEventFortificationDetail"*/);
    sub_1C2D490(&StringLiteral_24514/*"userEventSuperBoss"*/);
    sub_1C2D490(&StringLiteral_21793/*"mstEventFortification"*/);
    sub_1C2D490(&StringLiteral_21841/*"mstEventSvt"*/);
    sub_1C2D490(&StringLiteral_22070/*"mstVoicePlayGroup"*/);
    sub_1C2D490(&StringLiteral_24499/*"userEventDeck"*/);
    sub_1C2D490(&StringLiteral_21989/*"mstSpotAdd"*/);
    sub_1C2D490(&StringLiteral_21735/*"mstCombineSkill"*/);
    sub_1C2D490(&StringLiteral_22098/*"mstWarBoardSquare"*/);
    sub_1C2D490(&StringLiteral_21712/*"mstBuffTypeDetail"*/);
    sub_1C2D490(&StringLiteral_22076/*"mstWarBoardActionPointClass"*/);
    sub_1C2D490(&StringLiteral_21971/*"mstSelectBonus"*/);
    sub_1C2D490(&StringLiteral_22045/*"mstSvtTransform"*/);
    sub_1C2D490(&StringLiteral_24538/*"userPresentBox"*/);
    sub_1C2D490(&StringLiteral_24515/*"userEventSvtPoint"*/);
    sub_1C2D490(&StringLiteral_24107/*"totalEventPoint"*/);
    sub_1C2D490(&StringLiteral_21737/*"mstCommandCardRankParam"*/);
    sub_1C2D490(&StringLiteral_22081/*"mstWarBoardCommonRelease"*/);
    sub_1C2D490(&StringLiteral_22001/*"mstSvt"*/);
    sub_1C2D490(&StringLiteral_24548/*"userShop"*/);
    sub_1C2D490(&StringLiteral_21763/*"mstEventBoardGameCell"*/);
    sub_1C2D490(&StringLiteral_21822/*"mstEventQuestCooltime"*/);
    sub_1C2D490(&StringLiteral_21864/*"mstFuncTypeDetail"*/);
    sub_1C2D490(&StringLiteral_21998/*"mstStatusEffectPosOverwrite"*/);
    sub_1C2D490(&StringLiteral_19129/*"eventBoostItemUsed"*/);
    sub_1C2D490(&StringLiteral_21976/*"mstShopDetail"*/);
    sub_1C2D490(&StringLiteral_21896/*"mstIndividualityPolicy"*/);
    sub_1C2D490(&StringLiteral_21902/*"mstMapButton"*/);
    sub_1C2D490(&StringLiteral_22108/*"mstWarBoardTacticalTrend"*/);
    sub_1C2D490(&StringLiteral_22000/*"mstSubEquip"*/);
    sub_1C2D490(&StringLiteral_21992/*"mstSpotPath"*/);
    sub_1C2D490(&StringLiteral_21970/*"mstRoadmap"*/);
    sub_1C2D490(&StringLiteral_21732/*"mstCombineMaterial"*/);
    sub_1C2D490(&StringLiteral_21731/*"mstCombineLimitRelease"*/);
    sub_1C2D490(&StringLiteral_22062/*"mstTreasureDeviceLv"*/);
    sub_1C2D490(&StringLiteral_21844/*"mstEventTower"*/);
    sub_1C2D490(&StringLiteral_21981/*"mstSkill"*/);
    sub_1C2D490(&StringLiteral_24533/*"userInterruptionQuest"*/);
    sub_1C2D490(&StringLiteral_22033/*"mstSvtPassiveSkill"*/);
    sub_1C2D490(&StringLiteral_22047/*"mstSvtTreasureDeviceAdd"*/);
    sub_1C2D490(&StringLiteral_21701/*"mstBlankEarthSpotAdd"*/);
    sub_1C2D490(&StringLiteral_24542/*"userQuest"*/);
    sub_1C2D490(&StringLiteral_21805/*"mstEventMissionCondition"*/);
    sub_1C2D490(&StringLiteral_22075/*"mstWarBoardActionPoint"*/);
    sub_1C2D490(&StringLiteral_24517/*"userExternalPaymentStone"*/);
    sub_1C2D490(&StringLiteral_21725/*"mstClosedMessage"*/);
    sub_1C2D490(&StringLiteral_21831/*"mstEventRewardExtra"*/);
    sub_1C2D490(&StringLiteral_21814/*"mstEventPointActivity"*/);
    sub_1C2D490(&StringLiteral_21821/*"mstEventQuest"*/);
    sub_1C2D490(&StringLiteral_21693/*"mstBattleMessageGroup"*/);
    sub_1C2D490(&StringLiteral_24668/*"viewQuestInfo"*/);
    sub_1C2D490(&StringLiteral_22037/*"mstSvtProfilePush"*/);
    sub_1C2D490(&StringLiteral_22061/*"mstTreasureDeviceDetail"*/);
    sub_1C2D490(&StringLiteral_24478/*"userBlacklist"*/);
    sub_1C2D490(&StringLiteral_21787/*"mstEventEquipSkillRelease"*/);
    sub_1C2D490(&StringLiteral_24482/*"userCoinRoom"*/);
    sub_1C2D490(&StringLiteral_21749/*"mstConstantStr"*/);
    sub_1C2D490(&StringLiteral_21786/*"mstEventEquipSkillParts"*/);
    sub_1C2D490(&StringLiteral_21883/*"mstGallery"*/);
    sub_1C2D490(&StringLiteral_24563/*"userSvtGrand"*/);
    sub_1C2D490(&StringLiteral_21999/*"mstStoneShop"*/);
    sub_1C2D490(&StringLiteral_21912/*"mstMapUpdateSchedule"*/);
    sub_1C2D490(&StringLiteral_22056/*"mstTotalLogin"*/);
    sub_1C2D490(&StringLiteral_21924/*"mstOpeningMovie"*/);
    sub_1C2D490(&StringLiteral_21747/*"mstConstant"*/);
    sub_1C2D490(&StringLiteral_21958/*"mstQuestSpotRelease"*/);
    sub_1C2D490(&StringLiteral_21740/*"mstCommandCodeSkill"*/);
    sub_1C2D490(&StringLiteral_21929/*"mstQuest"*/);
    sub_1C2D490(&StringLiteral_22051/*"mstSvtVoicePattern"*/);
    sub_1C2D490(&StringLiteral_21850/*"mstEventTutorialCond"*/);
    sub_1C2D490(&StringLiteral_21699/*"mstBlankEarthGimmickAdd"*/);
    sub_1C2D490(&StringLiteral_22074/*"mstWarBoard"*/);
    sub_1C2D490(&StringLiteral_21825/*"mstEventRaid"*/);
    sub_1C2D490(&StringLiteral_21696/*"mstBgm"*/);
    sub_1C2D490(&StringLiteral_21837/*"mstEventScriptRelease"*/);
    sub_1C2D490(&StringLiteral_24541/*"userProfile"*/);
    sub_1C2D490(&StringLiteral_21804/*"mstEventMissionAdd"*/);
    sub_1C2D490(&StringLiteral_22071/*"mstVoiceRelease"*/);
    sub_1C2D490(&StringLiteral_21947/*"mstQuestRandomGroup"*/);
    sub_1C2D490(&StringLiteral_21920/*"mstMissionNaviTransition"*/);
    sub_1C2D490(&StringLiteral_21978/*"mstShopRelease"*/);
    sub_1C2D490(&StringLiteral_24567/*"userSvtStorage"*/);
    sub_1C2D490(&StringLiteral_21877/*"mstGachaPickupCollateral"*/);
    sub_1C2D490(&StringLiteral_21961/*"mstRecommendAdviceMessage"*/);
    sub_1C2D490(&StringLiteral_21962/*"mstRecommendSupportQuest"*/);
    sub_1C2D490(&StringLiteral_24554/*"userSvtAppendPassiveSkill"*/);
    sub_1C2D490(&StringLiteral_22002/*"mstSvtAdd"*/);
    sub_1C2D490(&StringLiteral_21889/*"mstGrandGraph"*/);
    sub_1C2D490(&StringLiteral_22112/*"mstWarMessage"*/);
    sub_1C2D490(&StringLiteral_21702/*"mstBlankEarthSpotNavimenu"*/);
    sub_1C2D490(&StringLiteral_21691/*"mstBattleMasterImage"*/);
    sub_1C2D490(&StringLiteral_21983/*"mstSkillDetail"*/);
    sub_1C2D490(&StringLiteral_21914/*"mstMasterMission"*/);
    sub_1C2D490(&StringLiteral_22034/*"mstSvtPassiveSkillRelease"*/);
    sub_1C2D490(&StringLiteral_21988/*"mstSpot"*/);
    sub_1C2D490(&StringLiteral_21801/*"mstEventMission"*/);
    sub_1C2D490(&StringLiteral_21734/*"mstCombineQpSvtEquip"*/);
    sub_1C2D490(&StringLiteral_21813/*"mstEventPoint"*/);
    sub_1C2D490(&StringLiteral_21835/*"mstEventRewardSet"*/);
    sub_1C2D490(&StringLiteral_21810/*"mstEventPanelMapDetail"*/);
    sub_1C2D490(&StringLiteral_22008/*"mstSvtCardAdd"*/);
    sub_1C2D490(&StringLiteral_21901/*"mstMap"*/);
    sub_1C2D490(&StringLiteral_21783/*"mstEventDigging"*/);
    sub_1C2D490(&StringLiteral_24523/*"userGacha"*/);
    sub_1C2D490(&StringLiteral_21948/*"mstQuestRelease"*/);
    sub_1C2D490(&StringLiteral_21782/*"mstEventDetail"*/);
    sub_1C2D490(&StringLiteral_21894/*"mstImagePartsGroup"*/);
    sub_1C2D490(&StringLiteral_21911/*"mstMapLayer"*/);
    sub_1C2D490(&StringLiteral_22085/*"mstWarBoardFutureActionTrend"*/);
    sub_1C2D490(&StringLiteral_21986/*"mstSkillIndividuality"*/);
    sub_1C2D490(&StringLiteral_21708/*"mstBoxGachaBaseDetail"*/);
    sub_1C2D490(&StringLiteral_23985/*"tblFriend"*/);
    sub_1C2D490(&StringLiteral_17120/*"beforeBirthDay"*/);
    sub_1C2D490(&StringLiteral_21799/*"mstEventItemDisplayRelease"*/);
    sub_1C2D490(&StringLiteral_21885/*"mstGalleryResource"*/);
    sub_1C2D490(&StringLiteral_17047/*"battle"*/);
    sub_1C2D490(&StringLiteral_21977/*"mstShopGroup"*/);
    sub_1C2D490(&StringLiteral_21684/*"mstAttriRelation"*/);
    sub_1C2D490(&StringLiteral_24483/*"userCommandCode"*/);
    sub_1C2D490(&StringLiteral_21774/*"mstEventCampaignRelease"*/);
    sub_1C2D490(&StringLiteral_22019/*"mstSvtFilter"*/);
    sub_1C2D490(&StringLiteral_21946/*"mstQuestRacePoint"*/);
    sub_1C2D490(&StringLiteral_21848/*"mstEventTradeStore"*/);
    sub_1C2D490(&StringLiteral_22480/*"otherUserGame"*/);
    sub_1C2D490(&StringLiteral_21695/*"mstBattlePointPhase"*/);
    sub_1C2D490(&StringLiteral_21798/*"mstEventItemDisplayGroup"*/);
    sub_1C2D490(&StringLiteral_21714/*"mstCard"*/);
    sub_1C2D490(&StringLiteral_21698/*"mstBlankEarthGimmick"*/);
    sub_1C2D490(&StringLiteral_21692/*"mstBattleMessage"*/);
    sub_1C2D490(&StringLiteral_21968/*"mstRestrictionSlotDetail"*/);
    sub_1C2D490(&StringLiteral_21688/*"mstBanner"*/);
    sub_1C2D490(&StringLiteral_21755/*"mstEnemyMasterBattle"*/);
    sub_1C2D490(&StringLiteral_21797/*"mstEventItemDisplay"*/);
    sub_1C2D490(&StringLiteral_21713/*"mstCampaignInfo"*/);
    sub_1C2D490(&StringLiteral_22046/*"mstSvtTreasureDevice"*/);
    sub_1C2D490(&StringLiteral_22044/*"mstSvtSkillRelease"*/);
    sub_1C2D490(&StringLiteral_21927/*"mstPhotoFrame"*/);
    sub_1C2D490(&StringLiteral_21746/*"mstCompleteMission"*/);
    sub_1C2D490(&StringLiteral_21729/*"mstCombineLimit"*/);
    sub_1C2D490(&StringLiteral_21890/*"mstGrandGraphDetail"*/);
    sub_1C2D490(&StringLiteral_21706/*"mstBoxGacha"*/);
    sub_1C2D490(&StringLiteral_22068/*"mstVoiceMaterialCond"*/);
    sub_1C2D490(&StringLiteral_21866/*"mstGachaAdjustAdd"*/);
    sub_1C2D490(&StringLiteral_21880/*"mstGachaStoryAdjust"*/);
    sub_1C2D490(&StringLiteral_22064/*"mstUserExp"*/);
    sub_1C2D490(&StringLiteral_21855/*"mstExcludeMotionCond"*/);
    sub_1C2D490(&StringLiteral_22087/*"mstWarBoardItem"*/);
    sub_1C2D490(&StringLiteral_21757/*"mstEquipAdd"*/);
    sub_1C2D490(&StringLiteral_21751/*"mstDialogMessage"*/);
    sub_1C2D490(&StringLiteral_22308/*"npcSvtFollower"*/);
    sub_1C2D490(&StringLiteral_21690/*"mstBattleBg"*/);
    sub_1C2D490(&StringLiteral_21718/*"mstClassBoardClass"*/);
    sub_1C2D490(&StringLiteral_24508/*"userEventPoint"*/);
    sub_1C2D490(&StringLiteral_22009/*"mstSvtChange"*/);
    sub_1C2D490(&StringLiteral_22086/*"mstWarBoardIndividualityClass"*/);
    sub_1C2D490(&StringLiteral_21868/*"mstGachaBaseCollateral"*/);
    sub_1C2D490(&StringLiteral_21944/*"mstQuestPhasePresent"*/);
    sub_1C2D490(&StringLiteral_21979/*"mstShopReset"*/);
    sub_1C2D490(&StringLiteral_21808/*"mstEventMural"*/);
    sub_1C2D490(&StringLiteral_21876/*"mstGachaPickup"*/);
    sub_1C2D490(&StringLiteral_21899/*"mstItemSelect"*/);
    sub_1C2D490(&StringLiteral_22023/*"mstSvtIndividuality"*/);
    sub_1C2D490(&StringLiteral_24494/*"userEvent"*/);
    sub_1C2D490(&StringLiteral_22109/*"mstWarBoardTreasure"*/);
    sub_1C2D490(&StringLiteral_22028/*"mstSvtLvDetail"*/);
    sub_1C2D490(&StringLiteral_22094/*"mstWarBoardRatingOffset"*/);
    sub_1C2D490(&StringLiteral_21941/*"mstQuestPhaseDetail"*/);
    sub_1C2D490(&StringLiteral_21975/*"mstShopAction"*/);
    sub_1C2D490(&StringLiteral_21921/*"mstMyroomAdd"*/);
    sub_1C2D490(&StringLiteral_21842/*"mstEventSvtFatigue"*/);
    sub_1C2D490(&StringLiteral_21790/*"mstEventFactory"*/);
    sub_1C2D490(&StringLiteral_24524/*"userGachaDrawHistory"*/);
    sub_1C2D490(&StringLiteral_24519/*"userFollower"*/);
    sub_1C2D490(&StringLiteral_22095/*"mstWarBoardRatingOffsetGroup"*/);
    sub_1C2D490(&StringLiteral_24556/*"userSvtCoin"*/);
    sub_1C2D490(&StringLiteral_21836/*"mstEventScript"*/);
    sub_1C2D490(&StringLiteral_22042/*"mstSvtSkill"*/);
    sub_1C2D490(&StringLiteral_21991/*"mstSpotLayer"*/);
    sub_1C2D490(&StringLiteral_24558/*"userSvtCommandCard"*/);
    sub_1C2D490(&StringLiteral_24543/*"userQuestInfo"*/);
    sub_1C2D490(&StringLiteral_21752/*"mstEffect"*/);
    sub_1C2D490(&StringLiteral_21897/*"mstItem"*/);
    sub_1C2D490(&StringLiteral_21972/*"mstSelectBonusBase"*/);
    sub_1C2D490(&StringLiteral_21817/*"mstEventPointGroupAdd"*/);
    sub_1C2D490(&StringLiteral_21939/*"mstQuestMessage"*/);
    sub_1C2D490(&StringLiteral_22303/*"npcFollowerRelease"*/);
    sub_1C2D490(&StringLiteral_21861/*"mstFuncCategory"*/);
    sub_1C2D490(&StringLiteral_22088/*"mstWarBoardMessage"*/);
    sub_1C2D490(&StringLiteral_24528/*"userGame"*/);
    sub_1C2D490(&StringLiteral_21886/*"mstGift"*/);
    sub_1C2D490(&StringLiteral_22096/*"mstWarBoardReinforcements"*/);
    sub_1C2D490(&StringLiteral_21764/*"mstEventBoardGameToken"*/);
    sub_1C2D490(&StringLiteral_21906/*"mstMapGimmickLayer"*/);
    sub_1C2D490(&StringLiteral_22012/*"mstSvtCommandCodeUnlock"*/);
    sub_1C2D490(&StringLiteral_21682/*"mstAssist"*/);
    sub_1C2D490(&StringLiteral_24669/*"viewWaveEnemy"*/);
    sub_1C2D490(&StringLiteral_22307/*"npcSvtEquip"*/);
    sub_1C2D490(&StringLiteral_21955/*"mstQuestScriptMaterialNext"*/);
    sub_1C2D490(&StringLiteral_22018/*"mstSvtExp"*/);
    sub_1C2D490(&StringLiteral_24553/*"userSvt"*/);
    sub_1C2D490(&StringLiteral_24665/*"viewEnemy"*/);
    sub_1C2D490(&StringLiteral_21852/*"mstEventUiRelease"*/);
    sub_1C2D490(&StringLiteral_24108/*"totalEventRace"*/);
    sub_1C2D490(&StringLiteral_21856/*"mstFieldMotion"*/);
    sub_1C2D490(&StringLiteral_21826/*"mstEventRandomMission"*/);
    sub_1C2D490(&StringLiteral_21833/*"mstEventRewardScene"*/);
    sub_1C2D490(&StringLiteral_21859/*"mstFriendshipSvt"*/);
    sub_1C2D490(&StringLiteral_21895/*"mstIndividualityPersonality"*/);
    sub_1C2D490(&StringLiteral_21728/*"mstCombineCostume"*/);
    sub_1C2D490(&StringLiteral_21727/*"mstCombineAppendPassiveSkill"*/);
    sub_1C2D490(&StringLiteral_21785/*"mstEventDiggingReward"*/);
    sub_1C2D490(&StringLiteral_22077/*"mstWarBoardActionTrend"*/);
    sub_1C2D490(&StringLiteral_21867/*"mstGachaAppend"*/);
    sub_1C2D490(&StringLiteral_22099/*"mstWarBoardSquareIndexGroup"*/);
    sub_1C2D490(&StringLiteral_21860/*"mstFunc"*/);
    sub_1C2D490(&StringLiteral_21778/*"mstEventConquestReward"*/);
    sub_1C2D490(&StringLiteral_22082/*"mstWarBoardEffect"*/);
    sub_1C2D490(&StringLiteral_22113/*"mstWarQuestSelection"*/);
    sub_1C2D490(&StringLiteral_24488/*"userDeck"*/);
    sub_1C2D490(&StringLiteral_21915/*"mstMasterMissionDisplayInfo"*/);
    sub_1C2D490(&StringLiteral_22110/*"mstWarGroup"*/);
    sub_1C2D490(&StringLiteral_21974/*"mstShop"*/);
    sub_1C2D490(&StringLiteral_22091/*"mstWarBoardPartySkill"*/);
    sub_1C2D490(&StringLiteral_24503/*"userEventItemLinkSvt"*/);
    sub_1C2D490(&StringLiteral_21815/*"mstEventPointBuff"*/);
    sub_1C2D490(&StringLiteral_21935/*"mstQuestExtension"*/);
    sub_1C2D490(&StringLiteral_24552/*"userSupportDeck"*/);
    sub_1C2D490(&StringLiteral_21993/*"mstSpotRoad"*/);
    sub_1C2D490(&StringLiteral_22052/*"mstSvtVoiceRelation"*/);
    sub_1C2D490(&StringLiteral_21730/*"mstCombineLimitGift"*/);
    sub_1C2D490(&StringLiteral_21779/*"mstEventCooltimeReward"*/);
    sub_1C2D490(&StringLiteral_21771/*"mstEventBulletinBoard"*/);
    sub_1C2D490(&StringLiteral_21830/*"mstEventRewardBg"*/);
    sub_1C2D490(&StringLiteral_21709/*"mstBoxGachaTalk"*/);
    sub_1C2D490(&StringLiteral_24537/*"userPaymentLimit"*/);
    sub_1C2D490(&StringLiteral_21862/*"mstFuncDisp"*/);
    sub_1C2D490(&StringLiteral_22039/*"mstSvtScript"*/);
    sub_1C2D490(&StringLiteral_21903/*"mstMapCond"*/);
    sub_1C2D490(&StringLiteral_24502/*"userEventFortification"*/);
    sub_1C2D490(&StringLiteral_22090/*"mstWarBoardOnboardSkill"*/);
    sub_1C2D490(&StringLiteral_21874/*"mstGachaGroup"*/);
    sub_1C2D490(&StringLiteral_24667/*"viewQuestEnemyInfo"*/);
    sub_1C2D490(&StringLiteral_24477/*"userAccountLinkage"*/);
    sub_1C2D490(&StringLiteral_22013/*"mstSvtComment"*/);
    sub_1C2D490(&StringLiteral_22060/*"mstTreasureDevice"*/);
    sub_1C2D490(&StringLiteral_24666/*"viewGachaFeaturedSvt"*/);
    sub_1C2D490(&StringLiteral_24536/*"userNpcSvtRecord"*/);
    sub_1C2D490(&StringLiteral_21694/*"mstBattlePoint"*/);
    sub_1C2D490(&StringLiteral_21807/*"mstEventMissionGroup"*/);
    sub_1C2D490(&StringLiteral_24544/*"userQuestRecord"*/);
    sub_1C2D490(&StringLiteral_21966/*"mstRestrictionMessage"*/);
    sub_1C2D490(&StringLiteral_21888/*"mstGiftDetail"*/);
    sub_1C2D490(&StringLiteral_21882/*"mstGachaTicket"*/);
    sub_1C2D490(&StringLiteral_22035/*"mstSvtPhoto"*/);
    sub_1C2D490(&StringLiteral_22673/*"pickupUserFollower"*/);
    sub_1C2D490(&StringLiteral_21838/*"mstEventStatus"*/);
    sub_1C2D490(&StringLiteral_22014/*"mstSvtCommentAdd"*/);
    sub_1C2D490(&StringLiteral_22032/*"mstSvtOverwrite"*/);
    sub_1C2D490(&StringLiteral_22302/*"npcFollower"*/);
    sub_1C2D490(&StringLiteral_21777/*"mstEventCommandAssist"*/);
    sub_1C2D490(&StringLiteral_19140/*"eventSvtFatigue"*/);
    sub_1C2D490(&StringLiteral_21871/*"mstGachaBonusSelectLineup"*/);
    sub_1C2D490(&StringLiteral_21772/*"mstEventBulletinBoardRelease"*/);
    sub_1C2D490(&StringLiteral_22017/*"mstSvtExceed"*/);
    sub_1C2D490(&StringLiteral_22027/*"mstSvtLimitSpoilerProtection"*/);
    sub_1C2D490(&StringLiteral_22050/*"mstSvtVoice"*/);
    sub_1C2D490(&StringLiteral_21969/*"mstRestrictionWhole"*/);
    sub_1C2D490(&StringLiteral_24526/*"userGachaExtraCount"*/);
    sub_1C2D490(&StringLiteral_21908/*"mstMapGimmickPath"*/);
    sub_1C2D490(&StringLiteral_21845/*"mstEventTowerReward"*/);
    sub_1C2D490(&StringLiteral_21724/*"mstClassRelationOverwrite"*/);
    sub_1C2D490(&StringLiteral_21677/*"mstAi"*/);
    sub_1C2D490(&StringLiteral_24479/*"userBoxGacha"*/);
    sub_1C2D490(&StringLiteral_22007/*"mstSvtCard"*/);
    sub_1C2D490(&StringLiteral_24527/*"userGachaPickupCollateral"*/);
    sub_1C2D490(&StringLiteral_24525/*"userGachaDrawLog"*/);
    sub_1C2D490(&StringLiteral_22100/*"mstWarBoardStage"*/);
    sub_1C2D490(&StringLiteral_24492/*"userEquip"*/);
    sub_1C2D490(&StringLiteral_21832/*"mstEventRewardGuideRelease"*/);
    sub_1C2D490(&StringLiteral_21719/*"mstClassBoardCommandSpell"*/);
    sub_1C2D490(&StringLiteral_21913/*"mstMasterIndividualitySelect"*/);
    sub_1C2D490(&StringLiteral_22114/*"mstWarRelease"*/);
    sub_1C2D490(&StringLiteral_21869/*"mstGachaBehavior"*/);
    sub_1C2D490(&StringLiteral_22072/*"mstWar"*/);
    sub_1C2D490(&StringLiteral_21766/*"mstEventBonusFilter"*/);
    sub_1C2D490(&StringLiteral_21957/*"mstQuestScriptRelease"*/);
    sub_1C2D490(&StringLiteral_24504/*"userEventMap"*/);
    sub_1C2D490(&StringLiteral_21812/*"mstEventPanelSpot"*/);
    sub_1C2D490(&StringLiteral_21716/*"mstClass"*/);
    sub_1C2D490(&StringLiteral_24476/*"userAccessary"*/);
    sub_1C2D490(&StringLiteral_22025/*"mstSvtLimitAdd"*/);
    sub_1C2D490(&StringLiteral_21956/*"mstQuestScriptMaterialOverwrite"*/);
    sub_1C2D490(&StringLiteral_18116/*"combineExp"*/);
    sub_1C2D490(&StringLiteral_24520/*"userFormation"*/);
    sub_1C2D490(&StringLiteral_22089/*"mstWarBoardMessageScript"*/);
    sub_1C2D490(&StringLiteral_21820/*"mstEventProgressValue"*/);
    sub_1C2D490(&StringLiteral_24568/*"userSvtVoicePlayed"*/);
    sub_1C2D490(&StringLiteral_22006/*"mstSvtBattlePoint"*/);
    sub_1C2D490(&StringLiteral_22020/*"mstSvtFlag"*/);
    sub_1C2D490(&StringLiteral_21703/*"mstBoardMessage"*/);
    sub_1C2D490(&StringLiteral_21811/*"mstEventPanelScan"*/);
    sub_1C2D490(&StringLiteral_22026/*"mstSvtLimitImage"*/);
    sub_1C2D490(&StringLiteral_21784/*"mstEventDiggingBlock"*/);
    sub_1C2D490(&StringLiteral_24512/*"userEventRandomMission"*/);
    sub_1C2D490(&StringLiteral_21680/*"mstArea"*/);
    sub_1C2D490(&StringLiteral_24109/*"totalEventRaid"*/);
    sub_1C2D490(&StringLiteral_22284/*"notEndEventMissionFix"*/);
    sub_1C2D490(&StringLiteral_21980/*"mstShopScript"*/);
    sub_1C2D490(&StringLiteral_24505/*"userEventMission"*/);
    sub_1C2D490(&StringLiteral_21916/*"mstMasterPhoto"*/);
    sub_1C2D490(&StringLiteral_21803/*"mstEventMissionActionAdd"*/);
    sub_1C2D490(&StringLiteral_21736/*"mstCombineTd"*/);
    sub_1C2D490(&StringLiteral_24562/*"userSvtFirstGetTime"*/);
    sub_1C2D490(&StringLiteral_21705/*"mstBoost"*/);
    sub_1C2D490(&StringLiteral_22040/*"mstSvtScriptAdd"*/);
    sub_1C2D490(&StringLiteral_21707/*"mstBoxGachaBase"*/);
    sub_1C2D490(&StringLiteral_21689/*"mstBannerAdd"*/);
    sub_1C2D490(&StringLiteral_21675/*"mstAccessary"*/);
    sub_1C2D490(&StringLiteral_22063/*"mstTreasureDeviceSequenceWeight"*/);
    sub_1C2D490(&StringLiteral_24510/*"userEventRace"*/);
    sub_1C2D490(&StringLiteral_21936/*"mstQuestGroup"*/);
    sub_1C2D490(&StringLiteral_21819/*"mstEventPointUpperRelease"*/);
    sub_1C2D490(&StringLiteral_24566/*"userSvtLeader"*/);
    sub_1C2D490(&StringLiteral_22024/*"mstSvtLimit"*/);
    sub_1C2D490(&StringLiteral_24518/*"userFollow"*/);
    sub_1C2D490(&StringLiteral_21800/*"mstEventLocationCampaign"*/);
    sub_1C2D490(&StringLiteral_21733/*"mstCombineQp"*/);
    sub_1C2D490(&StringLiteral_21761/*"mstEvent"*/);
    sub_1C2D490(&StringLiteral_22021/*"mstSvtFlagRelease"*/);
    sub_1C2D490(&StringLiteral_24521/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_1C2D490(&StringLiteral_24540/*"userPrivilege"*/);
    sub_1C2D490(&StringLiteral_21738/*"mstCommandCode"*/);
    sub_1C2D490(&StringLiteral_22004/*"mstSvtAppendPassiveSkill"*/);
    sub_1C2D490(&StringLiteral_21796/*"mstEventGroup"*/);
    sub_1C2D490(&StringLiteral_21870/*"mstGachaBonusSelect"*/);
    sub_1C2D490(&StringLiteral_24496/*"userEventBoardGameToken"*/);
    sub_1C2D490(&StringLiteral_21918/*"mstMissionItemDisplay"*/);
    sub_1C2D490(&StringLiteral_21922/*"mstMyroomSvtSpecialImage"*/);
    sub_1C2D490(&StringLiteral_22097/*"mstWarBoardRoad"*/);
    sub_1C2D490(&StringLiteral_21710/*"mstBuff"*/);
    sub_1C2D490(&StringLiteral_24722/*"warBoardData"*/);
    sub_1C2D490(&StringLiteral_21893/*"mstIllustrator"*/);
    sub_1C2D490(&StringLiteral_24104/*"totalBoxGacha"*/);
    sub_1C2D490(&StringLiteral_22038/*"mstSvtRarity"*/);
    sub_1C2D490(&StringLiteral_22073/*"mstWarAdd"*/);
    sub_1C2D490(&StringLiteral_21909/*"mstMapGimmickPathRelease"*/);
    sub_1C2D490(&StringLiteral_24522/*"userFriendRequestHistory"*/);
    sub_1C2D490(&StringLiteral_24474/*"user"*/);
    sub_1C2D490(&StringLiteral_17359/*"boxGachaHistory"*/);
    sub_1C2D490(&StringLiteral_21863/*"mstFuncGroup"*/);
    sub_1C2D490(&StringLiteral_21743/*"mstCommonConsume"*/);
    sub_1C2D490(&StringLiteral_22084/*"mstWarBoardEventScript"*/);
    sub_1C2D490(&StringLiteral_21887/*"mstGiftAdd"*/);
    sub_1C2D490(&StringLiteral_21851/*"mstEventUi"*/);
    sub_1C2D490(&StringLiteral_21990/*"mstSpotImage"*/);
    sub_1C2D490(&StringLiteral_22016/*"mstSvtCostumeRelease"*/);
    sub_1C2D490(&StringLiteral_24481/*"userClassStatistics"*/);
    sub_1C2D490(&StringLiteral_21904/*"mstMapGimmick"*/);
    sub_1C2D490(&StringLiteral_21943/*"mstQuestPhaseIndividuality"*/);
    sub_1C2D490(&StringLiteral_21849/*"mstEventTutorial"*/);
    sub_1C2D490(&StringLiteral_22111/*"mstWarGroupIgnore"*/);
    sub_1C2D490(&StringLiteral_22107/*"mstWarBoardStageWall"*/);
    sub_1C2D490(&StringLiteral_24516/*"userEventTrade"*/);
    sub_1C2D490(&StringLiteral_21679/*"mstAiField"*/);
    sub_1C2D490(&StringLiteral_21857/*"mstFriendPointGachaAdjust"*/);
    sub_1C2D490(&StringLiteral_22049/*"mstSvtTreasureDeviceRelease"*/);
    sub_1C2D490(&StringLiteral_21940/*"mstQuestPhase"*/);
    sub_1C2D490(&StringLiteral_24498/*"userEventDataLost"*/);
    sub_1C2D490(&StringLiteral_22005/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_1C2D490(&StringLiteral_22048/*"mstSvtTreasureDeviceDamage"*/);
    sub_1C2D490(&StringLiteral_21996/*"mstStage"*/);
    sub_1C2D490(&StringLiteral_21726/*"mstCombine"*/);
    sub_1C2D490(&StringLiteral_21773/*"mstEventCampaign"*/);
    sub_1C2D490(&StringLiteral_22104/*"mstWarBoardStageNpc"*/);
    sub_1C2D490(&StringLiteral_22641/*"paymentHistory"*/);
    sub_1C2D490(&StringLiteral_19306/*"exchangeSvt"*/);
    sub_1C2D490(&StringLiteral_21997/*"mstStageRemap"*/);
    sub_1C2D490(&StringLiteral_21964/*"mstRestriction"*/);
    sub_1C2D490(&StringLiteral_21953/*"mstQuestScript"*/);
    sub_1C2D490(&StringLiteral_21834/*"mstEventRewardSceneRelease"*/);
    sub_1C2D490(&StringLiteral_22067/*"mstVoiceCond"*/);
    sub_1C2D490(&StringLiteral_24551/*"userSubEquip"*/);
    sub_1C2D490(&StringLiteral_21827/*"mstEventRecipe"*/);
    sub_1C2D490(&StringLiteral_22015/*"mstSvtCostume"*/);
    sub_1C2D490(&StringLiteral_22036/*"mstSvtProfile"*/);
    sub_1C2D490(&StringLiteral_21745/*"mstCommonRestriction"*/);
    sub_1C2D490(&StringLiteral_24530/*"userHeelPortrait"*/);
    sub_1C2D490(&StringLiteral_21985/*"mstSkillGroupOverwrite"*/);
    sub_1C2D490(&StringLiteral_24484/*"userCommandCodeCollection"*/);
    sub_1C2D490(&StringLiteral_21741/*"mstCommandCodeSkillRelease"*/);
    sub_1C2D490(&StringLiteral_21753/*"mstEffectMovie"*/);
    sub_1C2D490(&StringLiteral_21945/*"mstQuestPickup"*/);
    sub_1C2D490(&StringLiteral_22103/*"mstWarBoardStageLayout"*/);
    sub_1C2D490(&StringLiteral_22078/*"mstWarBoardActionTrendCond"*/);
    sub_1C2D490(&StringLiteral_21775/*"mstEventCombine"*/);
    sub_1C2D490(&StringLiteral_22092/*"mstWarBoardQuest"*/);
    sub_1C2D490(&StringLiteral_21933/*"mstQuestConsumeItem"*/);
    sub_1C2D490(&StringLiteral_21942/*"mstQuestPhaseDetailAdd"*/);
    sub_1C2D490(&StringLiteral_21892/*"mstHeelPortrait"*/);
    sub_1C2D490(&StringLiteral_19307/*"exchangeSvtCoinGivenNum"*/);
    sub_1C2D490(&StringLiteral_24539/*"userPresentHistory"*/);
    sub_1C2D490(&StringLiteral_21715/*"mstChaldeaGatePickup"*/);
    sub_1C2D490(&StringLiteral_22093/*"mstWarBoardRatingBase"*/);
    sub_1C2D490(&StringLiteral_21875/*"mstGachaImage"*/);
    sub_1C2D490(&StringLiteral_21759/*"mstEquipImage"*/);
    sub_1C2D490(&StringLiteral_24511/*"userEventRaid"*/);
    sub_1C2D490(&StringLiteral_22011/*"mstSvtCollection"*/);
    sub_1C2D490(&StringLiteral_19676/*"friendshipQuestDialogInfo"*/);
    sub_1C2D490(&StringLiteral_21923/*"mstNews"*/);
    sub_1C2D490(&StringLiteral_21865/*"mstGacha"*/);
    sub_1C2D490(&StringLiteral_21984/*"mstSkillGroup"*/);
    sub_1C2D490(&StringLiteral_21891/*"mstGuide"*/);
    sub_1C2D490(&StringLiteral_21878/*"mstGachaPickupCollateralGroup"*/);
    sub_1C2D490(&StringLiteral_21721/*"mstClassBoardLock"*/);
    sub_1C2D490(&StringLiteral_21818/*"mstEventPointUpper"*/);
    sub_1C2D490(&StringLiteral_21700/*"mstBlankEarthSpot"*/);
    sub_1C2D490(&StringLiteral_22054/*"mstTerminalOverwrite"*/);
    sub_1C2D490(&StringLiteral_21760/*"mstEquipSkill"*/);
    sub_1C2D490(&StringLiteral_21853/*"mstEventUiValue"*/);
    sub_1C2D490(&StringLiteral_24486/*"userContinue"*/);
    sub_1C2D490(&StringLiteral_21930/*"mstQuestAdd"*/);
    sub_1C2D490(&StringLiteral_21720/*"mstClassBoardLine"*/);
    sub_1C2D490(&StringLiteral_24418/*"updateProfileDialogInfo"*/);
    sub_1C2D490(&StringLiteral_22065/*"mstVoice"*/);
    sub_1C2D490(&StringLiteral_24506/*"userEventMissionConditionDetail"*/);
    sub_1C2D490(&StringLiteral_21681/*"mstAssetbundleKey"*/);
    sub_1C2D490(&StringLiteral_21809/*"mstEventPanelMap"*/);
    sub_1C2D490(&StringLiteral_24535/*"userLogin"*/);
    sub_1C2D490(&StringLiteral_21900/*"mstLoginQuest"*/);
    sub_1C2D490(&StringLiteral_21925/*"mstPartialMaintenance"*/);
    sub_1C2D490(&StringLiteral_24513/*"userEventSpot"*/);
    sub_1C2D490(&StringLiteral_21829/*"mstEventReward"*/);
    sub_1C2D490(&StringLiteral_21781/*"mstEventDataLostBattleReset"*/);
    sub_1C2D490(&StringLiteral_21683/*"mstAttri"*/);
    sub_1C2D490(&StringLiteral_22102/*"mstWarBoardStageDetail"*/);
    sub_1C2D490(&StringLiteral_22043/*"mstSvtSkillAdd"*/);
    sub_1C2D490(&StringLiteral_24509/*"userEventQuestCooltime"*/);
    sub_1C2D490(&StringLiteral_21954/*"mstQuestScriptBranchMaterial"*/);
    sub_1C2D490(&StringLiteral_21791/*"mstEventFatigueRecovery"*/);
    sub_1C2D490(&StringLiteral_22080/*"mstWarBoardAi"*/);
    sub_1C2D490(&StringLiteral_22059/*"mstTreasureBoxTalk"*/);
    sub_1C2D490(&StringLiteral_22083/*"mstWarBoardEvent"*/);
    sub_1C2D490(&StringLiteral_22069/*"mstVoicePlayCond"*/);
    sub_1C2D490(&StringLiteral_21872/*"mstGachaDetail"*/);
    sub_1C2D490(&StringLiteral_21840/*"mstEventSuperBoss"*/);
    sub_1C2D490(&StringLiteral_21982/*"mstSkillAdd"*/);
    byte_4C261B1 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3413944 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1C2D6EC(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_22001/*"mstSvt"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_22013/*"mstSvtComment"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_22036/*"mstSvtProfile"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_22072/*"mstWar"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_17047/*"battle"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_22060/*"mstTreasureDevice"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_22024/*"mstSvtLimit"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_22046/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_21716/*"mstClass"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_22039/*"mstSvtScript"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_22007/*"mstSvtCard"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_22042/*"mstSvtSkill"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_22033/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_24553/*"userSvt"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_24567/*"userSvtStorage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_21996/*"mstStage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_22022/*"mstSvtGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_21700/*"mstBlankEarthSpot"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_21701/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_21988/*"mstSpot"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_21990/*"mstSpotImage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_21993/*"mstSpotRoad"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_21904/*"mstMapGimmick"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_21886/*"mstGift"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_21887/*"mstGiftAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_22000/*"mstSubEquip"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_24474/*"user"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_24528/*"userGame"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_24488/*"userDeck"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_24557/*"userSvtCollection"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_21858/*"mstFriendship"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_21865/*"mstGacha"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_21875/*"mstGachaImage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_24523/*"userGacha"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_24527/*"userGachaPickupCollateral"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24534/*"userItem"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_21897/*"mstItem"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_21882/*"mstGachaTicket"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_21866/*"mstGachaAdjustAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_21876/*"mstGachaPickup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_21857/*"mstFriendPointGachaAdjust"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_21868/*"mstGachaBaseCollateral"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_21675/*"mstAccessary"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_24476/*"userAccessary"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_24551/*"userSubEquip"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_23986/*"tblUserGame"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_21974/*"mstShop"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_21999/*"mstStoneShop"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_21687/*"mstBankShop"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_21980/*"mstShopScript"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_21756/*"mstEquip"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_21758/*"mstEquipExp"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_21760/*"mstEquipSkill"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_24492/*"userEquip"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_24520/*"userFormation"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_21981/*"mstSkill"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_21987/*"mstSkillLv"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_21983/*"mstSkillDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_21860/*"mstFunc"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_21710/*"mstBuff"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_21879/*"mstGachaRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_24542/*"userQuest"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_24543/*"userQuestInfo"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_24544/*"userQuestRecord"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_22064/*"mstUserExp"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_21923/*"mstNews"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_22053/*"mstTelop"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_22480/*"otherUserGame"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_23985/*"tblFriend"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_24538/*"userPresentBox"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_21761/*"mstEvent"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_21929/*"mstQuest"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_21930/*"mstQuestAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_21948/*"mstQuestRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_21940/*"mstQuestPhase"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_21941/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_21936/*"mstQuestGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_21947/*"mstQuestRandomGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_21933/*"mstQuestConsumeItem"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_21939/*"mstQuestMessage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_24668/*"viewQuestInfo"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_24665/*"viewEnemy"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_24667/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_21680/*"mstArea"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_21696/*"mstBgm"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_21821/*"mstEventQuest"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_21773/*"mstEventCampaign"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_21733/*"mstCombineQp"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_21732/*"mstCombineMaterial"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_21775/*"mstEventCombine"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_22018/*"mstSvtExp"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_21735/*"mstCombineSkill"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_21736/*"mstCombineTd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_21893/*"mstIllustrator"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_21750/*"mstCv"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_22062/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_22061/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_24519/*"userFollower"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_22302/*"npcFollower"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_22308/*"npcSvtFollower"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_24494/*"userEvent"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_24541/*"userProfile"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_24548/*"userShop"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_24486/*"userContinue"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_21747/*"mstConstant"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_21748/*"mstConstantLong"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_21749/*"mstConstantStr"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_21742/*"mstCommandSpell"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_21677/*"mstAi"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_21678/*"mstAiAct"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_22050/*"mstSvtVoice"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_21684/*"mstAttriRelation"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_21723/*"mstClassRelation"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_21752/*"mstEffect"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_21759/*"mstEquipImage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_21729/*"mstCombineLimit"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_21714/*"mstCard"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_21734/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_22025/*"mstSvtLimitAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_22038/*"mstSvtRarity"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_21973/*"mstSetItem"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_21963/*"mstRecover"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_21688/*"mstBanner"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_21978/*"mstShopRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_21829/*"mstEventReward"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_21782/*"mstEventDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_21841/*"mstEventSvt"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_21706/*"mstBoxGacha"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_21707/*"mstBoxGachaBase"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_21709/*"mstBoxGachaTalk"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_24479/*"userBoxGacha"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17359/*"boxGachaHistory"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_21690/*"mstBattleBg"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_22055/*"mstTips"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_24535/*"userLogin"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_22065/*"mstVoice"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_21831/*"mstEventRewardExtra"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_21801/*"mstEventMission"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_21805/*"mstEventMissionCondition"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    140,
    (Il2CppObject *)StringLiteral_21806/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    141,
    (Il2CppObject *)StringLiteral_21802/*"mstEventMissionAction"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    142,
    (Il2CppObject *)StringLiteral_21803/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    145,
    (Il2CppObject *)StringLiteral_21746/*"mstCompleteMission"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    143,
    (Il2CppObject *)StringLiteral_21804/*"mstEventMissionAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    144,
    (Il2CppObject *)StringLiteral_21835/*"mstEventRewardSet"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    146,
    (Il2CppObject *)StringLiteral_24505/*"userEventMission"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    147,
    (Il2CppObject *)StringLiteral_24506/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    148,
    (Il2CppObject *)StringLiteral_21708/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    149,
    (Il2CppObject *)StringLiteral_21725/*"mstClosedMessage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    150,
    (Il2CppObject *)StringLiteral_24566/*"userSvtLeader"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    151,
    (Il2CppObject *)StringLiteral_21863/*"mstFuncGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    152,
    (Il2CppObject *)StringLiteral_21825/*"mstEventRaid"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    153,
    (Il2CppObject *)StringLiteral_24109/*"totalEventRaid"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    154,
    (Il2CppObject *)StringLiteral_24511/*"userEventRaid"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    155,
    (Il2CppObject *)StringLiteral_21813/*"mstEventPoint"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    156,
    (Il2CppObject *)StringLiteral_21816/*"mstEventPointGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    157,
    (Il2CppObject *)StringLiteral_24107/*"totalEventPoint"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    158,
    (Il2CppObject *)StringLiteral_24508/*"userEventPoint"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    159,
    (Il2CppObject *)StringLiteral_24539/*"userPresentHistory"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    160,
    (Il2CppObject *)StringLiteral_21914/*"mstMasterMission"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    161,
    (Il2CppObject *)StringLiteral_22017/*"mstSvtExceed"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    162,
    (Il2CppObject *)StringLiteral_21925/*"mstPartialMaintenance"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    163,
    (Il2CppObject *)StringLiteral_21891/*"mstGuide"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    164,
    (Il2CppObject *)StringLiteral_21915/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    165,
    (Il2CppObject *)StringLiteral_21874/*"mstGachaGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    166,
    (Il2CppObject *)StringLiteral_21950/*"mstQuestReset"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    167,
    (Il2CppObject *)StringLiteral_22073/*"mstWarAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    168,
    (Il2CppObject *)StringLiteral_21797/*"mstEventItemDisplay"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    169,
    (Il2CppObject *)StringLiteral_21798/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    170,
    (Il2CppObject *)StringLiteral_21799/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    171,
    (Il2CppObject *)StringLiteral_21849/*"mstEventTutorial"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    172,
    (Il2CppObject *)StringLiteral_21850/*"mstEventTutorialCond"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    173,
    (Il2CppObject *)StringLiteral_22071/*"mstVoiceRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    174,
    (Il2CppObject *)StringLiteral_21840/*"mstEventSuperBoss"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    175,
    (Il2CppObject *)StringLiteral_24514/*"userEventSuperBoss"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    176,
    (Il2CppObject *)StringLiteral_21953/*"mstQuestScript"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    177,
    (Il2CppObject *)StringLiteral_21957/*"mstQuestScriptRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    178,
    (Il2CppObject *)StringLiteral_21917/*"mstMaterialFolder"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    179,
    (Il2CppObject *)StringLiteral_21964/*"mstRestriction"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    180,
    (Il2CppObject *)StringLiteral_21951/*"mstQuestRestriction"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    181,
    (Il2CppObject *)StringLiteral_22052/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    182,
    (Il2CppObject *)StringLiteral_21976/*"mstShopDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    183,
    (Il2CppObject *)StringLiteral_22040/*"mstSvtScriptAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    184,
    (Il2CppObject *)StringLiteral_21726/*"mstCombine"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    185,
    (Il2CppObject *)StringLiteral_21679/*"mstAiField"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    186,
    (Il2CppObject *)StringLiteral_22014/*"mstSvtCommentAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    187,
    (Il2CppObject *)StringLiteral_21792/*"mstEventFilter"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    188,
    (Il2CppObject *)StringLiteral_24552/*"userSupportDeck"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    189,
    (Il2CppObject *)StringLiteral_21833/*"mstEventRewardScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    190,
    (Il2CppObject *)StringLiteral_21854/*"mstEventVoicePlay"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    191,
    (Il2CppObject *)StringLiteral_21881/*"mstGachaSub"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    192,
    (Il2CppObject *)StringLiteral_21872/*"mstGachaDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    193,
    (Il2CppObject *)StringLiteral_21870/*"mstGachaBonusSelect"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    194,
    (Il2CppObject *)StringLiteral_21871/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    195,
    (Il2CppObject *)StringLiteral_22009/*"mstSvtChange"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    196,
    (Il2CppObject *)StringLiteral_22067/*"mstVoiceCond"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    197,
    (Il2CppObject *)StringLiteral_21697/*"mstBgmRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    198,
    (Il2CppObject *)StringLiteral_21921/*"mstMyroomAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    199,
    (Il2CppObject *)StringLiteral_21975/*"mstShopAction"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    200,
    (Il2CppObject *)StringLiteral_21834/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    201,
    (Il2CppObject *)StringLiteral_21901/*"mstMap"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    202,
    (Il2CppObject *)StringLiteral_21903/*"mstMapCond"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    203,
    (Il2CppObject *)StringLiteral_21902/*"mstMapButton"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    204,
    (Il2CppObject *)StringLiteral_21689/*"mstBannerAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    205,
    (Il2CppObject *)StringLiteral_21932/*"mstQuestBehavior"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    206,
    (Il2CppObject *)StringLiteral_21762/*"mstEventAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    207,
    (Il2CppObject *)StringLiteral_22056/*"mstTotalLogin"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    208,
    (Il2CppObject *)StringLiteral_22019/*"mstSvtFilter"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    209,
    (Il2CppObject *)StringLiteral_21728/*"mstCombineCostume"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    210,
    (Il2CppObject *)StringLiteral_22015/*"mstSvtCostume"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    211,
    (Il2CppObject *)StringLiteral_22016/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    212,
    (Il2CppObject *)StringLiteral_21994/*"mstStaffPhoto"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    213,
    (Il2CppObject *)StringLiteral_21995/*"mstStaffPhotoCostume"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    214,
    (Il2CppObject *)StringLiteral_24522/*"userFriendRequestHistory"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    215,
    (Il2CppObject *)StringLiteral_24478/*"userBlacklist"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    216,
    (Il2CppObject *)StringLiteral_21899/*"mstItemSelect"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    217,
    (Il2CppObject *)StringLiteral_21823/*"mstEventRace"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    218,
    (Il2CppObject *)StringLiteral_21824/*"mstEventRaceResult"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    219,
    (Il2CppObject *)StringLiteral_21946/*"mstQuestRacePoint"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    220,
    (Il2CppObject *)StringLiteral_24510/*"userEventRace"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    221,
    (Il2CppObject *)StringLiteral_21836/*"mstEventScript"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    222,
    (Il2CppObject *)StringLiteral_21837/*"mstEventScriptRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    223,
    (Il2CppObject *)StringLiteral_21992/*"mstSpotPath"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    224,
    (Il2CppObject *)StringLiteral_21989/*"mstSpotAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    225,
    (Il2CppObject *)StringLiteral_24108/*"totalEventRace"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    226,
    (Il2CppObject *)StringLiteral_21817/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    227,
    (Il2CppObject *)StringLiteral_22070/*"mstVoicePlayGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    228,
    (Il2CppObject *)StringLiteral_22069/*"mstVoicePlayCond"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    229,
    (Il2CppObject *)StringLiteral_21880/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    230,
    (Il2CppObject *)StringLiteral_22020/*"mstSvtFlag"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    231,
    (Il2CppObject *)StringLiteral_22021/*"mstSvtFlagRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    232,
    (Il2CppObject *)StringLiteral_21800/*"mstEventLocationCampaign"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    233,
    (Il2CppObject *)StringLiteral_21713/*"mstCampaignInfo"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    234,
    (Il2CppObject *)StringLiteral_21751/*"mstDialogMessage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    235,
    (Il2CppObject *)StringLiteral_22023/*"mstSvtIndividuality"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    236,
    (Il2CppObject *)StringLiteral_21703/*"mstBoardMessage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    237,
    (Il2CppObject *)StringLiteral_21704/*"mstBoardMessageRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    238,
    (Il2CppObject *)StringLiteral_21842/*"mstEventSvtFatigue"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    239,
    (Il2CppObject *)StringLiteral_24499/*"userEventDeck"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    240,
    (Il2CppObject *)StringLiteral_21844/*"mstEventTower"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    241,
    (Il2CppObject *)StringLiteral_21845/*"mstEventTowerReward"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    242,
    (Il2CppObject *)StringLiteral_21771/*"mstEventBulletinBoard"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    243,
    (Il2CppObject *)StringLiteral_21772/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    244,
    (Il2CppObject *)StringLiteral_21790/*"mstEventFactory"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    245,
    (Il2CppObject *)StringLiteral_21977/*"mstShopGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    246,
    (Il2CppObject *)StringLiteral_21685/*"mstAuraEffect"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    247,
    (Il2CppObject *)StringLiteral_21686/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    248,
    (Il2CppObject *)StringLiteral_24507/*"userEventMissionFix"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    249,
    (Il2CppObject *)StringLiteral_22284/*"notEndEventMissionFix"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    250,
    (Il2CppObject *)StringLiteral_21754/*"mstEnemyMaster"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    251,
    (Il2CppObject *)StringLiteral_21755/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    252,
    (Il2CppObject *)StringLiteral_22044/*"mstSvtSkillRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    253,
    (Il2CppObject *)StringLiteral_22034/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    254,
    (Il2CppObject *)StringLiteral_22049/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    255,
    (Il2CppObject *)StringLiteral_21910/*"mstMapGimmickRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    256,
    (Il2CppObject *)StringLiteral_21738/*"mstCommandCode"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    257,
    (Il2CppObject *)StringLiteral_22012/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    258,
    (Il2CppObject *)StringLiteral_24483/*"userCommandCode"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    259,
    (Il2CppObject *)StringLiteral_24484/*"userCommandCodeCollection"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    260,
    (Il2CppObject *)StringLiteral_24559/*"userSvtCommandCode"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    261,
    (Il2CppObject *)StringLiteral_21740/*"mstCommandCodeSkill"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    262,
    (Il2CppObject *)StringLiteral_21741/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    263,
    (Il2CppObject *)StringLiteral_21739/*"mstCommandCodeComment"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    264,
    (Il2CppObject *)StringLiteral_21838/*"mstEventStatus"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    265,
    (Il2CppObject *)StringLiteral_21839/*"mstEventStatusQuest"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    266,
    (Il2CppObject *)StringLiteral_21745/*"mstCommonRestriction"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    267,
    (Il2CppObject *)StringLiteral_21815/*"mstEventPointBuff"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    268,
    (Il2CppObject *)StringLiteral_24518/*"userFollow"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    269,
    (Il2CppObject *)StringLiteral_21832/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    270,
    (Il2CppObject *)StringLiteral_22307/*"npcSvtEquip"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    271,
    (Il2CppObject *)StringLiteral_21774/*"mstEventCampaignRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    272,
    (Il2CppObject *)StringLiteral_22029/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    273,
    (Il2CppObject *)StringLiteral_21787/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    274,
    (Il2CppObject *)StringLiteral_21814/*"mstEventPointActivity"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    275,
    (Il2CppObject *)StringLiteral_21861/*"mstFuncCategory"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    276,
    (Il2CppObject *)StringLiteral_21945/*"mstQuestPickup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    277,
    (Il2CppObject *)StringLiteral_21851/*"mstEventUi"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    278,
    (Il2CppObject *)StringLiteral_21852/*"mstEventUiRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    279,
    (Il2CppObject *)StringLiteral_21853/*"mstEventUiValue"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    280,
    (Il2CppObject *)StringLiteral_21778/*"mstEventConquestReward"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    281,
    (Il2CppObject *)StringLiteral_22303/*"npcFollowerRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    282,
    (Il2CppObject *)StringLiteral_21766/*"mstEventBonusFilter"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    283,
    (Il2CppObject *)StringLiteral_21767/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    284,
    (Il2CppObject *)StringLiteral_21768/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    285,
    (Il2CppObject *)StringLiteral_24526/*"userGachaExtraCount"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    286,
    (Il2CppObject *)StringLiteral_21737/*"mstCommandCardRankParam"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    287,
    (Il2CppObject *)StringLiteral_24558/*"userSvtCommandCard"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    288,
    (Il2CppObject *)StringLiteral_21928/*"mstPrivilege"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    289,
    (Il2CppObject *)StringLiteral_24540/*"userPrivilege"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    290,
    (Il2CppObject *)StringLiteral_21934/*"mstQuestDateRange"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    291,
    (Il2CppObject *)StringLiteral_21818/*"mstEventPointUpper"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    292,
    (Il2CppObject *)StringLiteral_21819/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    293,
    (Il2CppObject *)StringLiteral_24545/*"userQuestRoute"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    294,
    (Il2CppObject *)StringLiteral_21769/*"mstEventBossStatusUi"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    295,
    (Il2CppObject *)StringLiteral_21744/*"mstCommonRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    296,
    (Il2CppObject *)StringLiteral_21958/*"mstQuestSpotRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    297,
    (Il2CppObject *)StringLiteral_22068/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    298,
    (Il2CppObject *)StringLiteral_21724/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    299,
    (Il2CppObject *)StringLiteral_21796/*"mstEventGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    300,
    (Il2CppObject *)StringLiteral_21681/*"mstAssetbundleKey"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    301,
    (Il2CppObject *)StringLiteral_24104/*"totalBoxGacha"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    302,
    (Il2CppObject *)StringLiteral_22048/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    303,
    (Il2CppObject *)StringLiteral_19140/*"eventSvtFatigue"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    304,
    (Il2CppObject *)StringLiteral_21830/*"mstEventRewardBg"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    305,
    (Il2CppObject *)StringLiteral_21791/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    306,
    (Il2CppObject *)StringLiteral_19129/*"eventBoostItemUsed"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    307,
    (Il2CppObject *)StringLiteral_21998/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    308,
    (Il2CppObject *)StringLiteral_21942/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    309,
    (Il2CppObject *)StringLiteral_22066/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    310,
    (Il2CppObject *)StringLiteral_21997/*"mstStageRemap"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    311,
    (Il2CppObject *)StringLiteral_18116/*"combineExp"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    312,
    (Il2CppObject *)StringLiteral_21763/*"mstEventBoardGameCell"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    313,
    (Il2CppObject *)StringLiteral_21764/*"mstEventBoardGameToken"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    314,
    (Il2CppObject *)StringLiteral_21765/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    315,
    (Il2CppObject *)StringLiteral_24496/*"userEventBoardGameToken"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    316,
    (Il2CppObject *)StringLiteral_22003/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    317,
    (Il2CppObject *)StringLiteral_21924/*"mstOpeningMovie"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    318,
    (Il2CppObject *)StringLiteral_22027/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    319,
    (Il2CppObject *)StringLiteral_22673/*"pickupUserFollower"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    320,
    (Il2CppObject *)StringLiteral_22011/*"mstSvtCollection"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    321,
    (Il2CppObject *)StringLiteral_21869/*"mstGachaBehavior"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    322,
    (Il2CppObject *)StringLiteral_21822/*"mstEventQuestCooltime"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    323,
    (Il2CppObject *)StringLiteral_24509/*"userEventQuestCooltime"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    324,
    (Il2CppObject *)StringLiteral_21705/*"mstBoost"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    325,
    (Il2CppObject *)StringLiteral_22074/*"mstWarBoard"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    326,
    (Il2CppObject *)StringLiteral_22098/*"mstWarBoardSquare"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    327,
    (Il2CppObject *)StringLiteral_22097/*"mstWarBoardRoad"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    328,
    (Il2CppObject *)StringLiteral_22100/*"mstWarBoardStage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    329,
    (Il2CppObject *)StringLiteral_22075/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    330,
    (Il2CppObject *)StringLiteral_22077/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    331,
    (Il2CppObject *)StringLiteral_22108/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    332,
    (Il2CppObject *)StringLiteral_22103/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    333,
    (Il2CppObject *)StringLiteral_22104/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    334,
    (Il2CppObject *)StringLiteral_22107/*"mstWarBoardStageWall"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    335,
    (Il2CppObject *)StringLiteral_22080/*"mstWarBoardAi"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    336,
    (Il2CppObject *)StringLiteral_22093/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    337,
    (Il2CppObject *)StringLiteral_22094/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    338,
    (Il2CppObject *)StringLiteral_22087/*"mstWarBoardItem"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    339,
    (Il2CppObject *)StringLiteral_22109/*"mstWarBoardTreasure"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    340,
    (Il2CppObject *)StringLiteral_22092/*"mstWarBoardQuest"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    341,
    (Il2CppObject *)StringLiteral_24722/*"warBoardData"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    342,
    (Il2CppObject *)StringLiteral_22086/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    343,
    (Il2CppObject *)StringLiteral_22078/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    344,
    (Il2CppObject *)StringLiteral_22076/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    345,
    (Il2CppObject *)StringLiteral_22096/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    346,
    (Il2CppObject *)StringLiteral_22106/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    347,
    (Il2CppObject *)StringLiteral_21809/*"mstEventPanelMap"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    348,
    (Il2CppObject *)StringLiteral_21810/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    349,
    (Il2CppObject *)StringLiteral_21812/*"mstEventPanelSpot"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    350,
    (Il2CppObject *)StringLiteral_21811/*"mstEventPanelScan"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    351,
    (Il2CppObject *)StringLiteral_21783/*"mstEventDigging"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    352,
    (Il2CppObject *)StringLiteral_21785/*"mstEventDiggingReward"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    353,
    (Il2CppObject *)StringLiteral_21784/*"mstEventDiggingBlock"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    354,
    (Il2CppObject *)StringLiteral_24500/*"userEventDigging"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    355,
    (Il2CppObject *)StringLiteral_21743/*"mstCommonConsume"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    356,
    (Il2CppObject *)StringLiteral_24504/*"userEventMap"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    357,
    (Il2CppObject *)StringLiteral_24513/*"userEventSpot"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    358,
    (Il2CppObject *)StringLiteral_22110/*"mstWarGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    359,
    (Il2CppObject *)StringLiteral_22026/*"mstSvtLimitImage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    360,
    (Il2CppObject *)StringLiteral_19676/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    361,
    (Il2CppObject *)StringLiteral_21952/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    362,
    (Il2CppObject *)StringLiteral_21682/*"mstAssist"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    363,
    (Il2CppObject *)StringLiteral_22082/*"mstWarBoardEffect"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    364,
    (Il2CppObject *)StringLiteral_22090/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    365,
    (Il2CppObject *)StringLiteral_17120/*"beforeBirthDay"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    366,
    (Il2CppObject *)StringLiteral_21900/*"mstLoginQuest"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    367,
    (Il2CppObject *)StringLiteral_21776/*"mstEventCombineCostume"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    368,
    (Il2CppObject *)StringLiteral_22105/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    369,
    (Il2CppObject *)StringLiteral_22047/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    370,
    (Il2CppObject *)StringLiteral_21982/*"mstSkillAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    371,
    (Il2CppObject *)StringLiteral_22028/*"mstSvtLvDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    372,
    (Il2CppObject *)StringLiteral_21867/*"mstGachaAppend"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    373,
    (Il2CppObject *)StringLiteral_24525/*"userGachaDrawLog"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    374,
    (Il2CppObject *)StringLiteral_22004/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    375,
    (Il2CppObject *)StringLiteral_24554/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    376,
    (Il2CppObject *)StringLiteral_24555/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    377,
    (Il2CppObject *)StringLiteral_22005/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    378,
    (Il2CppObject *)StringLiteral_21727/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    379,
    (Il2CppObject *)StringLiteral_22010/*"mstSvtCoin"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    380,
    (Il2CppObject *)StringLiteral_24556/*"userSvtCoin"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    381,
    (Il2CppObject *)StringLiteral_22002/*"mstSvtAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    382,
    (Il2CppObject *)StringLiteral_22057/*"mstTreasureBox"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    383,
    (Il2CppObject *)StringLiteral_22058/*"mstTreasureBoxGift"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    384,
    (Il2CppObject *)StringLiteral_22059/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    385,
    (Il2CppObject *)StringLiteral_24501/*"userEventExpedition"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    386,
    (Il2CppObject *)StringLiteral_21788/*"mstEventExpedition"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    387,
    (Il2CppObject *)StringLiteral_21789/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    388,
    (Il2CppObject *)StringLiteral_21827/*"mstEventRecipe"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    389,
    (Il2CppObject *)StringLiteral_21828/*"mstEventRecipeGift"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    390,
    (Il2CppObject *)StringLiteral_24502/*"userEventFortification"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    391,
    (Il2CppObject *)StringLiteral_21793/*"mstEventFortification"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    392,
    (Il2CppObject *)StringLiteral_21794/*"mstEventFortificationDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    393,
    (Il2CppObject *)StringLiteral_21795/*"mstEventFortificationSvt"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    394,
    (Il2CppObject *)StringLiteral_24568/*"userSvtVoicePlayed"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    395,
    (Il2CppObject *)StringLiteral_24418/*"updateProfileDialogInfo"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    396,
    (Il2CppObject *)StringLiteral_22030/*"mstSvtMaterialTd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    397,
    (Il2CppObject *)StringLiteral_21691/*"mstBattleMasterImage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    398,
    (Il2CppObject *)StringLiteral_24521/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    399,
    (Il2CppObject *)StringLiteral_24512/*"userEventRandomMission"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    400,
    (Il2CppObject *)StringLiteral_21820/*"mstEventProgressValue"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    401,
    (Il2CppObject *)StringLiteral_22031/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    402,
    (Il2CppObject *)StringLiteral_21826/*"mstEventRandomMission"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    403,
    (Il2CppObject *)StringLiteral_24524/*"userGachaDrawHistory"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    404,
    (Il2CppObject *)StringLiteral_24482/*"userCoinRoom"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    405,
    (Il2CppObject *)StringLiteral_21770/*"mstEventBuddyPoint"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    406,
    (Il2CppObject *)StringLiteral_21843/*"mstEventSvtPointRank"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    407,
    (Il2CppObject *)StringLiteral_24515/*"userEventSvtPoint"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    408,
    (Il2CppObject *)StringLiteral_21856/*"mstFieldMotion"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    409,
    (Il2CppObject *)StringLiteral_24491/*"userDeleteReservation"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    410,
    (Il2CppObject *)StringLiteral_22041/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    411,
    (Il2CppObject *)StringLiteral_21757/*"mstEquipAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    412,
    (Il2CppObject *)StringLiteral_21949/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    413,
    (Il2CppObject *)StringLiteral_24495/*"userEventAlloutBattle"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    414,
    (Il2CppObject *)StringLiteral_21955/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    415,
    (Il2CppObject *)StringLiteral_21692/*"mstBattleMessage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    416,
    (Il2CppObject *)StringLiteral_21693/*"mstBattleMessageGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    417,
    (Il2CppObject *)StringLiteral_24536/*"userNpcSvtRecord"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    418,
    (Il2CppObject *)StringLiteral_21712/*"mstBuffTypeDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    419,
    (Il2CppObject *)StringLiteral_22088/*"mstWarBoardMessage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    420,
    (Il2CppObject *)StringLiteral_22091/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    421,
    (Il2CppObject *)StringLiteral_22089/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    422,
    (Il2CppObject *)StringLiteral_22113/*"mstWarQuestSelection"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    423,
    (Il2CppObject *)StringLiteral_22102/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    424,
    (Il2CppObject *)StringLiteral_21956/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    425,
    (Il2CppObject *)StringLiteral_21954/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    426,
    (Il2CppObject *)StringLiteral_21676/*"mstAdCheckPoint"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    427,
    (Il2CppObject *)StringLiteral_21888/*"mstGiftDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    428,
    (Il2CppObject *)StringLiteral_21730/*"mstCombineLimitGift"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    429,
    (Il2CppObject *)StringLiteral_21779/*"mstEventCooltimeReward"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    430,
    (Il2CppObject *)StringLiteral_24497/*"userEventCooltimeReward"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    431,
    (Il2CppObject *)StringLiteral_21718/*"mstClassBoardClass"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    432,
    (Il2CppObject *)StringLiteral_21717/*"mstClassBoardBase"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    433,
    (Il2CppObject *)StringLiteral_21720/*"mstClassBoardLine"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    434,
    (Il2CppObject *)StringLiteral_21721/*"mstClassBoardLock"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    435,
    (Il2CppObject *)StringLiteral_21722/*"mstClassBoardSquare"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    436,
    (Il2CppObject *)StringLiteral_21719/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    437,
    (Il2CppObject *)StringLiteral_24480/*"userClassBoardSquare"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    438,
    (Il2CppObject *)StringLiteral_22008/*"mstSvtCardAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    439,
    (Il2CppObject *)StringLiteral_21911/*"mstMapLayer"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    440,
    (Il2CppObject *)StringLiteral_21991/*"mstSpotLayer"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    441,
    (Il2CppObject *)StringLiteral_21906/*"mstMapGimmickLayer"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    442,
    (Il2CppObject *)StringLiteral_21780/*"mstEventDataLostBattle"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    443,
    (Il2CppObject *)StringLiteral_21781/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    444,
    (Il2CppObject *)StringLiteral_24498/*"userEventDataLost"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    445,
    (Il2CppObject *)StringLiteral_21937/*"mstQuestHint"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    446,
    (Il2CppObject *)StringLiteral_21864/*"mstFuncTypeDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    447,
    (Il2CppObject *)StringLiteral_21711/*"mstBuffConvert"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    448,
    (Il2CppObject *)StringLiteral_21984/*"mstSkillGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    449,
    (Il2CppObject *)StringLiteral_21985/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    450,
    (Il2CppObject *)StringLiteral_21986/*"mstSkillIndividuality"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    451,
    (Il2CppObject *)StringLiteral_21965/*"mstRestrictionBase"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    452,
    (Il2CppObject *)StringLiteral_21967/*"mstRestrictionSlot"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    453,
    (Il2CppObject *)StringLiteral_21968/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    454,
    (Il2CppObject *)StringLiteral_21966/*"mstRestrictionMessage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    455,
    (Il2CppObject *)StringLiteral_21969/*"mstRestrictionWhole"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    456,
    (Il2CppObject *)StringLiteral_21862/*"mstFuncDisp"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    457,
    (Il2CppObject *)StringLiteral_21777/*"mstEventCommandAssist"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    458,
    (Il2CppObject *)StringLiteral_21807/*"mstEventMissionGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    459,
    (Il2CppObject *)StringLiteral_21731/*"mstCombineLimitRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    460,
    (Il2CppObject *)StringLiteral_22063/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    461,
    (Il2CppObject *)StringLiteral_21892/*"mstHeelPortrait"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    462,
    (Il2CppObject *)StringLiteral_24530/*"userHeelPortrait"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    463,
    (Il2CppObject *)StringLiteral_22309/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    464,
    (Il2CppObject *)StringLiteral_21873/*"mstGachaExtraGift"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    465,
    (Il2CppObject *)StringLiteral_21808/*"mstEventMural"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    466,
    (Il2CppObject *)StringLiteral_24669/*"viewWaveEnemy"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    467,
    (Il2CppObject *)StringLiteral_21702/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    468,
    (Il2CppObject *)StringLiteral_21698/*"mstBlankEarthGimmick"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    469,
    (Il2CppObject *)StringLiteral_22054/*"mstTerminalOverwrite"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    470,
    (Il2CppObject *)StringLiteral_19306/*"exchangeSvt"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    471,
    (Il2CppObject *)StringLiteral_22081/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    472,
    (Il2CppObject *)StringLiteral_22083/*"mstWarBoardEvent"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    473,
    (Il2CppObject *)StringLiteral_22084/*"mstWarBoardEventScript"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    474,
    (Il2CppObject *)StringLiteral_22101/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    475,
    (Il2CppObject *)StringLiteral_22099/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    476,
    (Il2CppObject *)StringLiteral_22079/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    477,
    (Il2CppObject *)StringLiteral_22095/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    478,
    (Il2CppObject *)StringLiteral_22085/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    479,
    (Il2CppObject *)StringLiteral_22037/*"mstSvtProfilePush"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    480,
    (Il2CppObject *)StringLiteral_21908/*"mstMapGimmickPath"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    481,
    (Il2CppObject *)StringLiteral_21909/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    482,
    (Il2CppObject *)StringLiteral_22032/*"mstSvtOverwrite"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    483,
    (Il2CppObject *)StringLiteral_21896/*"mstIndividualityPolicy"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    484,
    (Il2CppObject *)StringLiteral_21895/*"mstIndividualityPersonality"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    485,
    (Il2CppObject *)StringLiteral_21683/*"mstAttri"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    486,
    (Il2CppObject *)StringLiteral_22051/*"mstSvtVoicePattern"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    487,
    (Il2CppObject *)StringLiteral_24529/*"userGameCommon"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    488,
    (Il2CppObject *)StringLiteral_22035/*"mstSvtPhoto"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    489,
    (Il2CppObject *)StringLiteral_21916/*"mstMasterPhoto"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    490,
    (Il2CppObject *)StringLiteral_21927/*"mstPhotoFrame"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    491,
    (Il2CppObject *)StringLiteral_22112/*"mstWarMessage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    492,
    (Il2CppObject *)StringLiteral_21931/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    493,
    (Il2CppObject *)StringLiteral_21855/*"mstExcludeMotionCond"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    494,
    (Il2CppObject *)StringLiteral_24533/*"userInterruptionQuest"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    495,
    (Il2CppObject *)StringLiteral_22045/*"mstSvtTransform"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    496,
    (Il2CppObject *)StringLiteral_21912/*"mstMapUpdateSchedule"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    497,
    (Il2CppObject *)StringLiteral_21944/*"mstQuestPhasePresent"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    498,
    (Il2CppObject *)StringLiteral_24477/*"userAccountLinkage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    499,
    (Il2CppObject *)StringLiteral_21920/*"mstMissionNaviTransition"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    500,
    (Il2CppObject *)StringLiteral_21846/*"mstEventTradeGoods"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    501,
    (Il2CppObject *)StringLiteral_21847/*"mstEventTradePickup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    502,
    (Il2CppObject *)StringLiteral_21848/*"mstEventTradeStore"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    503,
    (Il2CppObject *)StringLiteral_24516/*"userEventTrade"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    504,
    (Il2CppObject *)StringLiteral_21919/*"mstMissionNaviQuest"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    505,
    (Il2CppObject *)StringLiteral_22641/*"paymentHistory"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    506,
    (Il2CppObject *)StringLiteral_24517/*"userExternalPaymentStone"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    507,
    (Il2CppObject *)StringLiteral_21943/*"mstQuestPhaseIndividuality"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    508,
    (Il2CppObject *)StringLiteral_24666/*"viewGachaFeaturedSvt"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    514,
    (Il2CppObject *)StringLiteral_21753/*"mstEffectMovie"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    509,
    (Il2CppObject *)StringLiteral_21877/*"mstGachaPickupCollateral"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    510,
    (Il2CppObject *)StringLiteral_21878/*"mstGachaPickupCollateralGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    511,
    (Il2CppObject *)StringLiteral_21694/*"mstBattlePoint"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    512,
    (Il2CppObject *)StringLiteral_21695/*"mstBattlePointPhase"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    513,
    (Il2CppObject *)StringLiteral_22006/*"mstSvtBattlePoint"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    515,
    (Il2CppObject *)StringLiteral_21926/*"mstPaymentLimit"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    516,
    (Il2CppObject *)StringLiteral_24537/*"userPaymentLimit"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    517,
    (Il2CppObject *)StringLiteral_21970/*"mstRoadmap"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    518,
    (Il2CppObject *)StringLiteral_24547/*"userRecommendSupport"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    520,
    (Il2CppObject *)StringLiteral_21961/*"mstRecommendAdviceMessage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    519,
    (Il2CppObject *)StringLiteral_21962/*"mstRecommendSupportQuest"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    521,
    (Il2CppObject *)StringLiteral_24546/*"userRecommendFollower"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    522,
    (Il2CppObject *)StringLiteral_21898/*"mstItemDropEfficiency"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    523,
    (Il2CppObject *)StringLiteral_21699/*"mstBlankEarthGimmickAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    524,
    (Il2CppObject *)StringLiteral_22114/*"mstWarRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    525,
    (Il2CppObject *)StringLiteral_21972/*"mstSelectBonusBase"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    526,
    (Il2CppObject *)StringLiteral_21971/*"mstSelectBonus"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    527,
    (Il2CppObject *)StringLiteral_21922/*"mstMyroomSvtSpecialImage"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    528,
    (Il2CppObject *)StringLiteral_21979/*"mstShopReset"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    529,
    (Il2CppObject *)StringLiteral_22306/*"npcSvtDisplayTypeDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    530,
    (Il2CppObject *)StringLiteral_21859/*"mstFriendshipSvt"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    531,
    (Il2CppObject *)StringLiteral_19307/*"exchangeSvtCoinGivenNum"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    532,
    (Il2CppObject *)StringLiteral_21715/*"mstChaldeaGatePickup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    533,
    (Il2CppObject *)StringLiteral_22111/*"mstWarGroupIgnore"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    534,
    (Il2CppObject *)StringLiteral_21894/*"mstImagePartsGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    535,
    (Il2CppObject *)StringLiteral_24532/*"userImagePartsGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    536,
    (Il2CppObject *)StringLiteral_21918/*"mstMissionItemDisplay"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    537,
    (Il2CppObject *)StringLiteral_21959/*"mstQuestUseItemGroup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    538,
    (Il2CppObject *)StringLiteral_21960/*"mstQuestUseItemPickup"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    539,
    (Il2CppObject *)StringLiteral_24503/*"userEventItemLinkSvt"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    540,
    (Il2CppObject *)StringLiteral_21938/*"mstQuestHintOverwrite"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    541,
    (Il2CppObject *)StringLiteral_22948/*"reachedWaveInfo"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    542,
    (Il2CppObject *)StringLiteral_21883/*"mstGallery"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    543,
    (Il2CppObject *)StringLiteral_21885/*"mstGalleryResource"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    544,
    (Il2CppObject *)StringLiteral_22043/*"mstSvtSkillAdd"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    545,
    (Il2CppObject *)StringLiteral_21884/*"mstGalleryFolderRelease"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    546,
    (Il2CppObject *)StringLiteral_24562/*"userSvtFirstGetTime"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    547,
    (Il2CppObject *)StringLiteral_21935/*"mstQuestExtension"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    548,
    (Il2CppObject *)StringLiteral_24563/*"userSvtGrand"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    549,
    (Il2CppObject *)StringLiteral_21889/*"mstGrandGraph"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    550,
    (Il2CppObject *)StringLiteral_21890/*"mstGrandGraphDetail"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    551,
    (Il2CppObject *)StringLiteral_24481/*"userClassStatistics"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    552,
    (Il2CppObject *)StringLiteral_21786/*"mstEventEquipSkillParts"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    553,
    (Il2CppObject *)StringLiteral_21913/*"mstMasterIndividualitySelect"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  DataNameKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_DataNameKind_Kind__string__o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)DataNameKind_TypeInfo->static_fields, (int32_t)v1, v4, v5);
}


void DataNameKind___ctor(DataNameKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *DataNameKind__GetName(int32_t kind, const MethodInfo *method)
{
  DataNameKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4C261B0 & 1) == 0 )
  {
    sub_1C2D490(&DataNameKind_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_4C261B0 = 1;
  }
  v3 = DataNameKind_TypeInfo;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
    v3 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1C2D6EC(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_3414278 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}