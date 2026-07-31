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

  if ( (byte_5937518 & 1) == 0 )
  {
    sub_21FFC50(&DataNameKind_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_21FFC50(&StringLiteral_22933/*"mstEventTradeGoods"*/);
    sub_21FFC50(&StringLiteral_25857/*"userGameCommon"*/);
    sub_21FFC50(&StringLiteral_22893/*"mstEventMissionConditionDetail"*/);
    sub_21FFC50(&StringLiteral_23148/*"mstTreasureBoxGift"*/);
    sub_21FFC50(&StringLiteral_22883/*"mstEventJob"*/);
    sub_21FFC50(&StringLiteral_22821/*"mstCommandCodeComment"*/);
    sub_21FFC50(&StringLiteral_22889/*"mstEventMissionAction"*/);
    sub_21FFC50(&StringLiteral_25821/*"userEventAlloutBattle"*/);
    sub_21FFC50(&StringLiteral_24117/*"reachedWaveInfo"*/);
    sub_21FFC50(&StringLiteral_22850/*"mstEventBonusFilterGroupInfo"*/);
    sub_21FFC50(&StringLiteral_25874/*"userRecommendFollower"*/);
    sub_21FFC50(&StringLiteral_23037/*"mstQuestReleaseOverwrite"*/);
    sub_21FFC50(&StringLiteral_22997/*"mstMapGimmickRelease"*/);
    sub_21FFC50(&StringLiteral_22960/*"mstGachaExtraGift"*/);
    sub_21FFC50(&StringLiteral_23412/*"npcSvtFollowerIndividuality"*/);
    sub_21FFC50(&StringLiteral_22852/*"mstEventBossStatusUi"*/);
    sub_21FFC50(&StringLiteral_25884/*"userSvtAppendPassiveSkillLv"*/);
    sub_21FFC50(&StringLiteral_22805/*"mstClassRelation"*/);
    sub_21FFC50(&StringLiteral_22759/*"mstAiAct"*/);
    sub_21FFC50(&StringLiteral_23093/*"mstSvtAnimationOverwrite"*/);
    sub_21FFC50(&StringLiteral_23039/*"mstQuestRestriction"*/);
    sub_21FFC50(&StringLiteral_22832/*"mstCv"*/);
    sub_21FFC50(&StringLiteral_25826/*"userEventDigging"*/);
    sub_21FFC50(&StringLiteral_25238/*"tblUserGame"*/);
    sub_21FFC50(&StringLiteral_22863/*"mstEventDataLostBattle"*/);
    sub_21FFC50(&StringLiteral_22853/*"mstEventBuddyPoint"*/);
    sub_21FFC50(&StringLiteral_22779/*"mstBgmRelease"*/);
    sub_21FFC50(&StringLiteral_23120/*"mstSvtMaterialTd"*/);
    sub_21FFC50(&StringLiteral_22826/*"mstCommonRelease"*/);
    sub_21FFC50(&StringLiteral_25877/*"userShopDaily"*/);
    sub_21FFC50(&StringLiteral_22945/*"mstFriendship"*/);
    sub_21FFC50(&StringLiteral_25805/*"userClassBoardSquare"*/);
    sub_21FFC50(&StringLiteral_22830/*"mstConstantLong"*/);
    sub_21FFC50(&StringLiteral_22804/*"mstClassBoardSquare"*/);
    sub_21FFC50(&StringLiteral_25888/*"userSvtCommandCode"*/);
    sub_21FFC50(&StringLiteral_23020/*"mstQuestBehavior"*/);
    sub_21FFC50(&StringLiteral_22985/*"mstItemDropEfficiency"*/);
    sub_21FFC50(&StringLiteral_23119/*"mstSvtMaterialFolder"*/);
    sub_21FFC50(&StringLiteral_23195/*"mstWarBoardStagePieceDetail"*/);
    sub_21FFC50(&StringLiteral_22934/*"mstEventTradePickup"*/);
    sub_21FFC50(&StringLiteral_22851/*"mstEventBonusFilterGroupMember"*/);
    sub_21FFC50(&StringLiteral_23025/*"mstQuestHint"*/);
    sub_21FFC50(&StringLiteral_22824/*"mstCommandSpell"*/);
    sub_21FFC50(&StringLiteral_22757/*"mstAdCheckPoint"*/);
    sub_21FFC50(&StringLiteral_23016/*"mstPrivilege"*/);
    sub_21FFC50(&StringLiteral_23026/*"mstQuestHintOverwrite"*/);
    sub_21FFC50(&StringLiteral_22786/*"mstBoardMessageRelease"*/);
    sub_21FFC50(&StringLiteral_22966/*"mstGachaRelease"*/);
    sub_21FFC50(&StringLiteral_25817/*"userDeleteReservation"*/);
    sub_21FFC50(&StringLiteral_23147/*"mstTreasureBox"*/);
    sub_21FFC50(&StringLiteral_25860/*"userImagePartsGroup"*/);
    sub_21FFC50(&StringLiteral_22841/*"mstEquipExp"*/);
    sub_21FFC50(&StringLiteral_22848/*"mstEventBoardGameTokenReward"*/);
    sub_21FFC50(&StringLiteral_23100/*"mstSvtCoin"*/);
    sub_21FFC50(&StringLiteral_23131/*"mstSvtScriptMultiple"*/);
    sub_21FFC50(&StringLiteral_23004/*"mstMaterialFolder"*/);
    sub_21FFC50(&StringLiteral_22859/*"mstEventCombineCostume"*/);
    sub_21FFC50(&StringLiteral_23022/*"mstQuestDateRange"*/);
    sub_21FFC50(&StringLiteral_23191/*"mstWarBoardStageBoss"*/);
    sub_21FFC50(&StringLiteral_22793/*"mstBuffConvert"*/);
    sub_21FFC50(&StringLiteral_25832/*"userEventMapGimmick"*/);
    sub_21FFC50(&StringLiteral_23048/*"mstQuestUseItemPickup"*/);
    sub_21FFC50(&StringLiteral_22766/*"mstAuraEffect"*/);
    sub_21FFC50(&StringLiteral_22911/*"mstEventRaceResult"*/);
    sub_21FFC50(&StringLiteral_23061/*"mstSetItem"*/);
    sub_21FFC50(&StringLiteral_23409/*"npcSvtDisplayTypeDetail"*/);
    sub_21FFC50(&StringLiteral_23085/*"mstStaffPhotoCostume"*/);
    sub_21FFC50(&StringLiteral_22971/*"mstGalleryFolderRelease"*/);
    sub_21FFC50(&StringLiteral_23051/*"mstRecover"*/);
    sub_21FFC50(&StringLiteral_22926/*"mstEventStatusQuest"*/);
    sub_21FFC50(&StringLiteral_25823/*"userEventCooltimeReward"*/);
    sub_21FFC50(&StringLiteral_23014/*"mstPaymentLimit"*/);
    sub_21FFC50(&StringLiteral_23169/*"mstWarBoardActionTrendGroup"*/);
    sub_21FFC50(&StringLiteral_25873/*"userQuestRoute"*/);
    sub_21FFC50(&StringLiteral_23077/*"mstSkillLv"*/);
    sub_21FFC50(&StringLiteral_23112/*"mstSvtGroup"*/);
    sub_21FFC50(&StringLiteral_23156/*"mstVoiceClosedMessage"*/);
    sub_21FFC50(&StringLiteral_22872/*"mstEventExpeditionPiece"*/);
    sub_21FFC50(&StringLiteral_23019/*"mstQuestAutoOrganizationAdjust"*/);
    sub_21FFC50(&StringLiteral_23121/*"mstSvtMultiPortrait"*/);
    sub_21FFC50(&StringLiteral_22875/*"mstEventFilter"*/);
    sub_21FFC50(&StringLiteral_23006/*"mstMissionNaviQuest"*/);
    sub_21FFC50(&StringLiteral_25875/*"userRecommendSupport"*/);
    sub_21FFC50(&StringLiteral_25862/*"userItem"*/);
    sub_21FFC50(&StringLiteral_22871/*"mstEventExpedition"*/);
    sub_21FFC50(&StringLiteral_22910/*"mstEventRace"*/);
    sub_21FFC50(&StringLiteral_23040/*"mstQuestRestrictionInfo"*/);
    sub_21FFC50(&StringLiteral_23038/*"mstQuestReset"*/);
    sub_21FFC50(&StringLiteral_25827/*"userEventExpedition"*/);
    sub_21FFC50(&StringLiteral_22878/*"mstEventFortificationSvt"*/);
    sub_21FFC50(&StringLiteral_23196/*"mstWarBoardStageReinforcements"*/);
    sub_21FFC50(&StringLiteral_22799/*"mstClassBoardBase"*/);
    sub_21FFC50(&StringLiteral_22837/*"mstEnemyMaster"*/);
    sub_21FFC50(&StringLiteral_22767/*"mstAuraEffectPosOverwrite"*/);
    sub_21FFC50(&StringLiteral_23055/*"mstRestrictionSlot"*/);
    sub_21FFC50(&StringLiteral_22968/*"mstGachaSub"*/);
    sub_21FFC50(&StringLiteral_22930/*"mstEventSvtPointRank"*/);
    sub_21FFC50(&StringLiteral_22903/*"mstEventPointGroup"*/);
    sub_21FFC50(&StringLiteral_22845/*"mstEventAdd"*/);
    sub_21FFC50(&StringLiteral_22839/*"mstEquip"*/);
    sub_21FFC50(&StringLiteral_22915/*"mstEventRecipeGift"*/);
    sub_21FFC50(&StringLiteral_23143/*"mstTelop"*/);
    sub_21FFC50(&StringLiteral_25886/*"userSvtCollection"*/);
    sub_21FFC50(&StringLiteral_25835/*"userEventMissionFix"*/);
    sub_21FFC50(&StringLiteral_23053/*"mstRestrictionBase"*/);
    sub_21FFC50(&StringLiteral_23145/*"mstTips"*/);
    sub_21FFC50(&StringLiteral_23084/*"mstStaffPhoto"*/);
    sub_21FFC50(&StringLiteral_22768/*"mstBankShop"*/);
    sub_21FFC50(&StringLiteral_22941/*"mstEventVoicePlay"*/);
    sub_21FFC50(&StringLiteral_23047/*"mstQuestUseItemGroup"*/);
    sub_21FFC50(&StringLiteral_22877/*"mstEventFortificationDetail"*/);
    sub_21FFC50(&StringLiteral_25842/*"userEventSuperBoss"*/);
    sub_21FFC50(&StringLiteral_22876/*"mstEventFortification"*/);
    sub_21FFC50(&StringLiteral_22928/*"mstEventSvt"*/);
    sub_21FFC50(&StringLiteral_23160/*"mstVoicePlayGroup"*/);
    sub_21FFC50(&StringLiteral_25825/*"userEventDeck"*/);
    sub_21FFC50(&StringLiteral_23079/*"mstSpotAdd"*/);
    sub_21FFC50(&StringLiteral_22817/*"mstCombineSkill"*/);
    sub_21FFC50(&StringLiteral_23188/*"mstWarBoardSquare"*/);
    sub_21FFC50(&StringLiteral_22794/*"mstBuffTypeDetail"*/);
    sub_21FFC50(&StringLiteral_23166/*"mstWarBoardActionPointClass"*/);
    sub_21FFC50(&StringLiteral_23059/*"mstSelectBonus"*/);
    sub_21FFC50(&StringLiteral_23135/*"mstSvtTransform"*/);
    sub_21FFC50(&StringLiteral_25866/*"userPresentBox"*/);
    sub_21FFC50(&StringLiteral_25843/*"userEventSvtPoint"*/);
    sub_21FFC50(&StringLiteral_25378/*"totalEventPoint"*/);
    sub_21FFC50(&StringLiteral_22819/*"mstCommandCardRankParam"*/);
    sub_21FFC50(&StringLiteral_23171/*"mstWarBoardCommonRelease"*/);
    sub_21FFC50(&StringLiteral_23091/*"mstSvt"*/);
    sub_21FFC50(&StringLiteral_25876/*"userShop"*/);
    sub_21FFC50(&StringLiteral_22846/*"mstEventBoardGameCell"*/);
    sub_21FFC50(&StringLiteral_22909/*"mstEventQuestCooltime"*/);
    sub_21FFC50(&StringLiteral_22951/*"mstFuncTypeDetail"*/);
    sub_21FFC50(&StringLiteral_23088/*"mstStatusEffectPosOverwrite"*/);
    sub_21FFC50(&StringLiteral_19991/*"eventBoostItemUsed"*/);
    sub_21FFC50(&StringLiteral_23066/*"mstShopDetail"*/);
    sub_21FFC50(&StringLiteral_22983/*"mstIndividualityPolicy"*/);
    sub_21FFC50(&StringLiteral_22989/*"mstMapButton"*/);
    sub_21FFC50(&StringLiteral_23198/*"mstWarBoardTacticalTrend"*/);
    sub_21FFC50(&StringLiteral_23090/*"mstSubEquip"*/);
    sub_21FFC50(&StringLiteral_23082/*"mstSpotPath"*/);
    sub_21FFC50(&StringLiteral_23058/*"mstRoadmap"*/);
    sub_21FFC50(&StringLiteral_22814/*"mstCombineMaterial"*/);
    sub_21FFC50(&StringLiteral_22813/*"mstCombineLimitRelease"*/);
    sub_21FFC50(&StringLiteral_23152/*"mstTreasureDeviceLv"*/);
    sub_21FFC50(&StringLiteral_22931/*"mstEventTower"*/);
    sub_21FFC50(&StringLiteral_23071/*"mstSkill"*/);
    sub_21FFC50(&StringLiteral_25861/*"userInterruptionQuest"*/);
    sub_21FFC50(&StringLiteral_23123/*"mstSvtPassiveSkill"*/);
    sub_21FFC50(&StringLiteral_23137/*"mstSvtTreasureDeviceAdd"*/);
    sub_21FFC50(&StringLiteral_22783/*"mstBlankEarthSpotAdd"*/);
    sub_21FFC50(&StringLiteral_25870/*"userQuest"*/);
    sub_21FFC50(&StringLiteral_22892/*"mstEventMissionCondition"*/);
    sub_21FFC50(&StringLiteral_23165/*"mstWarBoardActionPoint"*/);
    sub_21FFC50(&StringLiteral_25845/*"userExternalPaymentStone"*/);
    sub_21FFC50(&StringLiteral_22807/*"mstClosedMessage"*/);
    sub_21FFC50(&StringLiteral_22918/*"mstEventRewardExtra"*/);
    sub_21FFC50(&StringLiteral_22901/*"mstEventPointActivity"*/);
    sub_21FFC50(&StringLiteral_22908/*"mstEventQuest"*/);
    sub_21FFC50(&StringLiteral_22774/*"mstBattleMessageGroup"*/);
    sub_21FFC50(&StringLiteral_26006/*"viewQuestInfo"*/);
    sub_21FFC50(&StringLiteral_23127/*"mstSvtProfilePush"*/);
    sub_21FFC50(&StringLiteral_23151/*"mstTreasureDeviceDetail"*/);
    sub_21FFC50(&StringLiteral_25803/*"userBlacklist"*/);
    sub_21FFC50(&StringLiteral_22870/*"mstEventEquipSkillRelease"*/);
    sub_21FFC50(&StringLiteral_25807/*"userCoinRoom"*/);
    sub_21FFC50(&StringLiteral_22831/*"mstConstantStr"*/);
    sub_21FFC50(&StringLiteral_22869/*"mstEventEquipSkillParts"*/);
    sub_21FFC50(&StringLiteral_22970/*"mstGallery"*/);
    sub_21FFC50(&StringLiteral_25892/*"userSvtGrand"*/);
    sub_21FFC50(&StringLiteral_23089/*"mstStoneShop"*/);
    sub_21FFC50(&StringLiteral_22999/*"mstMapUpdateSchedule"*/);
    sub_21FFC50(&StringLiteral_23146/*"mstTotalLogin"*/);
    sub_21FFC50(&StringLiteral_23012/*"mstOpeningMovie"*/);
    sub_21FFC50(&StringLiteral_22829/*"mstConstant"*/);
    sub_21FFC50(&StringLiteral_23046/*"mstQuestSpotRelease"*/);
    sub_21FFC50(&StringLiteral_22822/*"mstCommandCodeSkill"*/);
    sub_21FFC50(&StringLiteral_23017/*"mstQuest"*/);
    sub_21FFC50(&StringLiteral_23141/*"mstSvtVoicePattern"*/);
    sub_21FFC50(&StringLiteral_22937/*"mstEventTutorialCond"*/);
    sub_21FFC50(&StringLiteral_22781/*"mstBlankEarthGimmickAdd"*/);
    sub_21FFC50(&StringLiteral_23164/*"mstWarBoard"*/);
    sub_21FFC50(&StringLiteral_22912/*"mstEventRaid"*/);
    sub_21FFC50(&StringLiteral_22778/*"mstBgm"*/);
    sub_21FFC50(&StringLiteral_22924/*"mstEventScriptRelease"*/);
    sub_21FFC50(&StringLiteral_25869/*"userProfile"*/);
    sub_21FFC50(&StringLiteral_22891/*"mstEventMissionAdd"*/);
    sub_21FFC50(&StringLiteral_23161/*"mstVoiceRelease"*/);
    sub_21FFC50(&StringLiteral_23035/*"mstQuestRandomGroup"*/);
    sub_21FFC50(&StringLiteral_23007/*"mstMissionNaviTransition"*/);
    sub_21FFC50(&StringLiteral_23068/*"mstShopRelease"*/);
    sub_21FFC50(&StringLiteral_25896/*"userSvtStorage"*/);
    sub_21FFC50(&StringLiteral_22964/*"mstGachaPickupCollateral"*/);
    sub_21FFC50(&StringLiteral_23049/*"mstRecommendAdviceMessage"*/);
    sub_21FFC50(&StringLiteral_23050/*"mstRecommendSupportQuest"*/);
    sub_21FFC50(&StringLiteral_25883/*"userSvtAppendPassiveSkill"*/);
    sub_21FFC50(&StringLiteral_23092/*"mstSvtAdd"*/);
    sub_21FFC50(&StringLiteral_22976/*"mstGrandGraph"*/);
    sub_21FFC50(&StringLiteral_23202/*"mstWarMessage"*/);
    sub_21FFC50(&StringLiteral_22784/*"mstBlankEarthSpotNavimenu"*/);
    sub_21FFC50(&StringLiteral_22772/*"mstBattleMasterImage"*/);
    sub_21FFC50(&StringLiteral_23073/*"mstSkillDetail"*/);
    sub_21FFC50(&StringLiteral_23001/*"mstMasterMission"*/);
    sub_21FFC50(&StringLiteral_23124/*"mstSvtPassiveSkillRelease"*/);
    sub_21FFC50(&StringLiteral_23078/*"mstSpot"*/);
    sub_21FFC50(&StringLiteral_22888/*"mstEventMission"*/);
    sub_21FFC50(&StringLiteral_22816/*"mstCombineQpSvtEquip"*/);
    sub_21FFC50(&StringLiteral_22900/*"mstEventPoint"*/);
    sub_21FFC50(&StringLiteral_22922/*"mstEventRewardSet"*/);
    sub_21FFC50(&StringLiteral_22897/*"mstEventPanelMapDetail"*/);
    sub_21FFC50(&StringLiteral_23098/*"mstSvtCardAdd"*/);
    sub_21FFC50(&StringLiteral_22988/*"mstMap"*/);
    sub_21FFC50(&StringLiteral_22866/*"mstEventDigging"*/);
    sub_21FFC50(&StringLiteral_25851/*"userGacha"*/);
    sub_21FFC50(&StringLiteral_23036/*"mstQuestRelease"*/);
    sub_21FFC50(&StringLiteral_22865/*"mstEventDetail"*/);
    sub_21FFC50(&StringLiteral_22981/*"mstImagePartsGroup"*/);
    sub_21FFC50(&StringLiteral_22998/*"mstMapLayer"*/);
    sub_21FFC50(&StringLiteral_23175/*"mstWarBoardFutureActionTrend"*/);
    sub_21FFC50(&StringLiteral_23076/*"mstSkillIndividuality"*/);
    sub_21FFC50(&StringLiteral_22790/*"mstBoxGachaBaseDetail"*/);
    sub_21FFC50(&StringLiteral_25237/*"tblFriend"*/);
    sub_21FFC50(&StringLiteral_17822/*"beforeBirthDay"*/);
    sub_21FFC50(&StringLiteral_22882/*"mstEventItemDisplayRelease"*/);
    sub_21FFC50(&StringLiteral_22972/*"mstGalleryResource"*/);
    sub_21FFC50(&StringLiteral_17742/*"battle"*/);
    sub_21FFC50(&StringLiteral_23067/*"mstShopGroup"*/);
    sub_21FFC50(&StringLiteral_22765/*"mstAttriRelation"*/);
    sub_21FFC50(&StringLiteral_25808/*"userCommandCode"*/);
    sub_21FFC50(&StringLiteral_22857/*"mstEventCampaignRelease"*/);
    sub_21FFC50(&StringLiteral_23109/*"mstSvtFilter"*/);
    sub_21FFC50(&StringLiteral_23034/*"mstQuestRacePoint"*/);
    sub_21FFC50(&StringLiteral_23065/*"mstShopDaily"*/);
    sub_21FFC50(&StringLiteral_22935/*"mstEventTradeStore"*/);
    sub_21FFC50(&StringLiteral_23589/*"otherUserGame"*/);
    sub_21FFC50(&StringLiteral_22776/*"mstBattlePointPhase"*/);
    sub_21FFC50(&StringLiteral_22881/*"mstEventItemDisplayGroup"*/);
    sub_21FFC50(&StringLiteral_22796/*"mstCard"*/);
    sub_21FFC50(&StringLiteral_22780/*"mstBlankEarthGimmick"*/);
    sub_21FFC50(&StringLiteral_22773/*"mstBattleMessage"*/);
    sub_21FFC50(&StringLiteral_23056/*"mstRestrictionSlotDetail"*/);
    sub_21FFC50(&StringLiteral_25830/*"userEventJob"*/);
    sub_21FFC50(&StringLiteral_22769/*"mstBanner"*/);
    sub_21FFC50(&StringLiteral_22838/*"mstEnemyMasterBattle"*/);
    sub_21FFC50(&StringLiteral_22880/*"mstEventItemDisplay"*/);
    sub_21FFC50(&StringLiteral_22795/*"mstCampaignInfo"*/);
    sub_21FFC50(&StringLiteral_23136/*"mstSvtTreasureDevice"*/);
    sub_21FFC50(&StringLiteral_23134/*"mstSvtSkillRelease"*/);
    sub_21FFC50(&StringLiteral_23015/*"mstPhotoFrame"*/);
    sub_21FFC50(&StringLiteral_22828/*"mstCompleteMission"*/);
    sub_21FFC50(&StringLiteral_22811/*"mstCombineLimit"*/);
    sub_21FFC50(&StringLiteral_22977/*"mstGrandGraphDetail"*/);
    sub_21FFC50(&StringLiteral_22788/*"mstBoxGacha"*/);
    sub_21FFC50(&StringLiteral_23158/*"mstVoiceMaterialCond"*/);
    sub_21FFC50(&StringLiteral_22953/*"mstGachaAdjustAdd"*/);
    sub_21FFC50(&StringLiteral_22967/*"mstGachaStoryAdjust"*/);
    sub_21FFC50(&StringLiteral_23154/*"mstUserExp"*/);
    sub_21FFC50(&StringLiteral_22942/*"mstExcludeMotionCond"*/);
    sub_21FFC50(&StringLiteral_23177/*"mstWarBoardItem"*/);
    sub_21FFC50(&StringLiteral_22840/*"mstEquipAdd"*/);
    sub_21FFC50(&StringLiteral_22833/*"mstDialogMessage"*/);
    sub_21FFC50(&StringLiteral_23411/*"npcSvtFollower"*/);
    sub_21FFC50(&StringLiteral_22771/*"mstBattleBg"*/);
    sub_21FFC50(&StringLiteral_22800/*"mstClassBoardClass"*/);
    sub_21FFC50(&StringLiteral_25836/*"userEventPoint"*/);
    sub_21FFC50(&StringLiteral_23099/*"mstSvtChange"*/);
    sub_21FFC50(&StringLiteral_23176/*"mstWarBoardIndividualityClass"*/);
    sub_21FFC50(&StringLiteral_22955/*"mstGachaBaseCollateral"*/);
    sub_21FFC50(&StringLiteral_23032/*"mstQuestPhasePresent"*/);
    sub_21FFC50(&StringLiteral_23069/*"mstShopReset"*/);
    sub_21FFC50(&StringLiteral_22895/*"mstEventMural"*/);
    sub_21FFC50(&StringLiteral_22963/*"mstGachaPickup"*/);
    sub_21FFC50(&StringLiteral_22986/*"mstItemSelect"*/);
    sub_21FFC50(&StringLiteral_23113/*"mstSvtIndividuality"*/);
    sub_21FFC50(&StringLiteral_25820/*"userEvent"*/);
    sub_21FFC50(&StringLiteral_23199/*"mstWarBoardTreasure"*/);
    sub_21FFC50(&StringLiteral_23118/*"mstSvtLvDetail"*/);
    sub_21FFC50(&StringLiteral_23184/*"mstWarBoardRatingOffset"*/);
    sub_21FFC50(&StringLiteral_23029/*"mstQuestPhaseDetail"*/);
    sub_21FFC50(&StringLiteral_23063/*"mstShopAction"*/);
    sub_21FFC50(&StringLiteral_23008/*"mstMyroomAdd"*/);
    sub_21FFC50(&StringLiteral_22929/*"mstEventSvtFatigue"*/);
    sub_21FFC50(&StringLiteral_22873/*"mstEventFactory"*/);
    sub_21FFC50(&StringLiteral_25852/*"userGachaDrawHistory"*/);
    sub_21FFC50(&StringLiteral_25847/*"userFollower"*/);
    sub_21FFC50(&StringLiteral_23185/*"mstWarBoardRatingOffsetGroup"*/);
    sub_21FFC50(&StringLiteral_25885/*"userSvtCoin"*/);
    sub_21FFC50(&StringLiteral_22923/*"mstEventScript"*/);
    sub_21FFC50(&StringLiteral_23132/*"mstSvtSkill"*/);
    sub_21FFC50(&StringLiteral_23081/*"mstSpotLayer"*/);
    sub_21FFC50(&StringLiteral_25887/*"userSvtCommandCard"*/);
    sub_21FFC50(&StringLiteral_25871/*"userQuestInfo"*/);
    sub_21FFC50(&StringLiteral_22835/*"mstEffect"*/);
    sub_21FFC50(&StringLiteral_22984/*"mstItem"*/);
    sub_21FFC50(&StringLiteral_23060/*"mstSelectBonusBase"*/);
    sub_21FFC50(&StringLiteral_22904/*"mstEventPointGroupAdd"*/);
    sub_21FFC50(&StringLiteral_23027/*"mstQuestMessage"*/);
    sub_21FFC50(&StringLiteral_23406/*"npcFollowerRelease"*/);
    sub_21FFC50(&StringLiteral_22948/*"mstFuncCategory"*/);
    sub_21FFC50(&StringLiteral_23178/*"mstWarBoardMessage"*/);
    sub_21FFC50(&StringLiteral_25856/*"userGame"*/);
    sub_21FFC50(&StringLiteral_22973/*"mstGift"*/);
    sub_21FFC50(&StringLiteral_23186/*"mstWarBoardReinforcements"*/);
    sub_21FFC50(&StringLiteral_22847/*"mstEventBoardGameToken"*/);
    sub_21FFC50(&StringLiteral_22993/*"mstMapGimmickLayer"*/);
    sub_21FFC50(&StringLiteral_23102/*"mstSvtCommandCodeUnlock"*/);
    sub_21FFC50(&StringLiteral_22763/*"mstAssist"*/);
    sub_21FFC50(&StringLiteral_26007/*"viewWaveEnemy"*/);
    sub_21FFC50(&StringLiteral_23410/*"npcSvtEquip"*/);
    sub_21FFC50(&StringLiteral_23043/*"mstQuestScriptMaterialNext"*/);
    sub_21FFC50(&StringLiteral_23108/*"mstSvtExp"*/);
    sub_21FFC50(&StringLiteral_25882/*"userSvt"*/);
    sub_21FFC50(&StringLiteral_26002/*"viewEnemy"*/);
    sub_21FFC50(&StringLiteral_22939/*"mstEventUiRelease"*/);
    sub_21FFC50(&StringLiteral_25379/*"totalEventRace"*/);
    sub_21FFC50(&StringLiteral_22943/*"mstFieldMotion"*/);
    sub_21FFC50(&StringLiteral_22885/*"mstEventJobPointBonus"*/);
    sub_21FFC50(&StringLiteral_22913/*"mstEventRandomMission"*/);
    sub_21FFC50(&StringLiteral_22920/*"mstEventRewardScene"*/);
    sub_21FFC50(&StringLiteral_22946/*"mstFriendshipSvt"*/);
    sub_21FFC50(&StringLiteral_22982/*"mstIndividualityPersonality"*/);
    sub_21FFC50(&StringLiteral_22810/*"mstCombineCostume"*/);
    sub_21FFC50(&StringLiteral_22809/*"mstCombineAppendPassiveSkill"*/);
    sub_21FFC50(&StringLiteral_22868/*"mstEventDiggingReward"*/);
    sub_21FFC50(&StringLiteral_23167/*"mstWarBoardActionTrend"*/);
    sub_21FFC50(&StringLiteral_22777/*"mstBattleScript"*/);
    sub_21FFC50(&StringLiteral_22954/*"mstGachaAppend"*/);
    sub_21FFC50(&StringLiteral_23189/*"mstWarBoardSquareIndexGroup"*/);
    sub_21FFC50(&StringLiteral_22947/*"mstFunc"*/);
    sub_21FFC50(&StringLiteral_22861/*"mstEventConquestReward"*/);
    sub_21FFC50(&StringLiteral_23172/*"mstWarBoardEffect"*/);
    sub_21FFC50(&StringLiteral_23203/*"mstWarQuestSelection"*/);
    sub_21FFC50(&StringLiteral_25814/*"userDeck"*/);
    sub_21FFC50(&StringLiteral_23002/*"mstMasterMissionDisplayInfo"*/);
    sub_21FFC50(&StringLiteral_23200/*"mstWarGroup"*/);
    sub_21FFC50(&StringLiteral_23062/*"mstShop"*/);
    sub_21FFC50(&StringLiteral_23181/*"mstWarBoardPartySkill"*/);
    sub_21FFC50(&StringLiteral_25829/*"userEventItemLinkSvt"*/);
    sub_21FFC50(&StringLiteral_22902/*"mstEventPointBuff"*/);
    sub_21FFC50(&StringLiteral_23023/*"mstQuestExtension"*/);
    sub_21FFC50(&StringLiteral_25881/*"userSupportDeck"*/);
    sub_21FFC50(&StringLiteral_23083/*"mstSpotRoad"*/);
    sub_21FFC50(&StringLiteral_23142/*"mstSvtVoiceRelation"*/);
    sub_21FFC50(&StringLiteral_22812/*"mstCombineLimitGift"*/);
    sub_21FFC50(&StringLiteral_22862/*"mstEventCooltimeReward"*/);
    sub_21FFC50(&StringLiteral_22854/*"mstEventBulletinBoard"*/);
    sub_21FFC50(&StringLiteral_22917/*"mstEventRewardBg"*/);
    sub_21FFC50(&StringLiteral_22791/*"mstBoxGachaTalk"*/);
    sub_21FFC50(&StringLiteral_25865/*"userPaymentLimit"*/);
    sub_21FFC50(&StringLiteral_22949/*"mstFuncDisp"*/);
    sub_21FFC50(&StringLiteral_23129/*"mstSvtScript"*/);
    sub_21FFC50(&StringLiteral_22990/*"mstMapCond"*/);
    sub_21FFC50(&StringLiteral_23009/*"mstMyroomAddBgDiff"*/);
    sub_21FFC50(&StringLiteral_25828/*"userEventFortification"*/);
    sub_21FFC50(&StringLiteral_23180/*"mstWarBoardOnboardSkill"*/);
    sub_21FFC50(&StringLiteral_22961/*"mstGachaGroup"*/);
    sub_21FFC50(&StringLiteral_26005/*"viewQuestEnemyInfo"*/);
    sub_21FFC50(&StringLiteral_25801/*"userAccountLinkage"*/);
    sub_21FFC50(&StringLiteral_23103/*"mstSvtComment"*/);
    sub_21FFC50(&StringLiteral_23150/*"mstTreasureDevice"*/);
    sub_21FFC50(&StringLiteral_26003/*"viewGachaFeaturedSvt"*/);
    sub_21FFC50(&StringLiteral_25864/*"userNpcSvtRecord"*/);
    sub_21FFC50(&StringLiteral_22775/*"mstBattlePoint"*/);
    sub_21FFC50(&StringLiteral_22894/*"mstEventMissionGroup"*/);
    sub_21FFC50(&StringLiteral_25872/*"userQuestRecord"*/);
    sub_21FFC50(&StringLiteral_23054/*"mstRestrictionMessage"*/);
    sub_21FFC50(&StringLiteral_22975/*"mstGiftDetail"*/);
    sub_21FFC50(&StringLiteral_22969/*"mstGachaTicket"*/);
    sub_21FFC50(&StringLiteral_23125/*"mstSvtPhoto"*/);
    sub_21FFC50(&StringLiteral_23813/*"pickupUserFollower"*/);
    sub_21FFC50(&StringLiteral_22925/*"mstEventStatus"*/);
    sub_21FFC50(&StringLiteral_23104/*"mstSvtCommentAdd"*/);
    sub_21FFC50(&StringLiteral_23122/*"mstSvtOverwrite"*/);
    sub_21FFC50(&StringLiteral_23405/*"npcFollower"*/);
    sub_21FFC50(&StringLiteral_22860/*"mstEventCommandAssist"*/);
    sub_21FFC50(&StringLiteral_20004/*"eventSvtFatigue"*/);
    sub_21FFC50(&StringLiteral_22958/*"mstGachaBonusSelectLineup"*/);
    sub_21FFC50(&StringLiteral_22855/*"mstEventBulletinBoardRelease"*/);
    sub_21FFC50(&StringLiteral_23107/*"mstSvtExceed"*/);
    sub_21FFC50(&StringLiteral_23117/*"mstSvtLimitSpoilerProtection"*/);
    sub_21FFC50(&StringLiteral_23140/*"mstSvtVoice"*/);
    sub_21FFC50(&StringLiteral_23057/*"mstRestrictionWhole"*/);
    sub_21FFC50(&StringLiteral_25854/*"userGachaExtraCount"*/);
    sub_21FFC50(&StringLiteral_22995/*"mstMapGimmickPath"*/);
    sub_21FFC50(&StringLiteral_22932/*"mstEventTowerReward"*/);
    sub_21FFC50(&StringLiteral_22806/*"mstClassRelationOverwrite"*/);
    sub_21FFC50(&StringLiteral_22758/*"mstAi"*/);
    sub_21FFC50(&StringLiteral_25804/*"userBoxGacha"*/);
    sub_21FFC50(&StringLiteral_23097/*"mstSvtCard"*/);
    sub_21FFC50(&StringLiteral_25855/*"userGachaPickupCollateral"*/);
    sub_21FFC50(&StringLiteral_25853/*"userGachaDrawLog"*/);
    sub_21FFC50(&StringLiteral_23190/*"mstWarBoardStage"*/);
    sub_21FFC50(&StringLiteral_25818/*"userEquip"*/);
    sub_21FFC50(&StringLiteral_22919/*"mstEventRewardGuideRelease"*/);
    sub_21FFC50(&StringLiteral_22801/*"mstClassBoardCommandSpell"*/);
    sub_21FFC50(&StringLiteral_23000/*"mstMasterIndividualitySelect"*/);
    sub_21FFC50(&StringLiteral_23204/*"mstWarRelease"*/);
    sub_21FFC50(&StringLiteral_22956/*"mstGachaBehavior"*/);
    sub_21FFC50(&StringLiteral_23162/*"mstWar"*/);
    sub_21FFC50(&StringLiteral_22849/*"mstEventBonusFilter"*/);
    sub_21FFC50(&StringLiteral_23045/*"mstQuestScriptRelease"*/);
    sub_21FFC50(&StringLiteral_23064/*"mstShopAdd"*/);
    sub_21FFC50(&StringLiteral_25831/*"userEventMap"*/);
    sub_21FFC50(&StringLiteral_22899/*"mstEventPanelSpot"*/);
    sub_21FFC50(&StringLiteral_22798/*"mstClass"*/);
    sub_21FFC50(&StringLiteral_25800/*"userAccessary"*/);
    sub_21FFC50(&StringLiteral_23115/*"mstSvtLimitAdd"*/);
    sub_21FFC50(&StringLiteral_23044/*"mstQuestScriptMaterialOverwrite"*/);
    sub_21FFC50(&StringLiteral_18891/*"combineExp"*/);
    sub_21FFC50(&StringLiteral_25848/*"userFormation"*/);
    sub_21FFC50(&StringLiteral_23179/*"mstWarBoardMessageScript"*/);
    sub_21FFC50(&StringLiteral_22907/*"mstEventProgressValue"*/);
    sub_21FFC50(&StringLiteral_25897/*"userSvtVoicePlayed"*/);
    sub_21FFC50(&StringLiteral_23096/*"mstSvtBattlePoint"*/);
    sub_21FFC50(&StringLiteral_23110/*"mstSvtFlag"*/);
    sub_21FFC50(&StringLiteral_22785/*"mstBoardMessage"*/);
    sub_21FFC50(&StringLiteral_22898/*"mstEventPanelScan"*/);
    sub_21FFC50(&StringLiteral_23116/*"mstSvtLimitImage"*/);
    sub_21FFC50(&StringLiteral_22867/*"mstEventDiggingBlock"*/);
    sub_21FFC50(&StringLiteral_25840/*"userEventRandomMission"*/);
    sub_21FFC50(&StringLiteral_22761/*"mstArea"*/);
    sub_21FFC50(&StringLiteral_25380/*"totalEventRaid"*/);
    sub_21FFC50(&StringLiteral_23386/*"notEndEventMissionFix"*/);
    sub_21FFC50(&StringLiteral_23070/*"mstShopScript"*/);
    sub_21FFC50(&StringLiteral_25833/*"userEventMission"*/);
    sub_21FFC50(&StringLiteral_23003/*"mstMasterPhoto"*/);
    sub_21FFC50(&StringLiteral_22890/*"mstEventMissionActionAdd"*/);
    sub_21FFC50(&StringLiteral_22818/*"mstCombineTd"*/);
    sub_21FFC50(&StringLiteral_25891/*"userSvtFirstGetTime"*/);
    sub_21FFC50(&StringLiteral_22787/*"mstBoost"*/);
    sub_21FFC50(&StringLiteral_23130/*"mstSvtScriptAdd"*/);
    sub_21FFC50(&StringLiteral_22789/*"mstBoxGachaBase"*/);
    sub_21FFC50(&StringLiteral_22770/*"mstBannerAdd"*/);
    sub_21FFC50(&StringLiteral_22756/*"mstAccessary"*/);
    sub_21FFC50(&StringLiteral_23153/*"mstTreasureDeviceSequenceWeight"*/);
    sub_21FFC50(&StringLiteral_25838/*"userEventRace"*/);
    sub_21FFC50(&StringLiteral_23024/*"mstQuestGroup"*/);
    sub_21FFC50(&StringLiteral_22906/*"mstEventPointUpperRelease"*/);
    sub_21FFC50(&StringLiteral_25895/*"userSvtLeader"*/);
    sub_21FFC50(&StringLiteral_23114/*"mstSvtLimit"*/);
    sub_21FFC50(&StringLiteral_25846/*"userFollow"*/);
    sub_21FFC50(&StringLiteral_22887/*"mstEventLocationCampaign"*/);
    sub_21FFC50(&StringLiteral_22815/*"mstCombineQp"*/);
    sub_21FFC50(&StringLiteral_22844/*"mstEvent"*/);
    sub_21FFC50(&StringLiteral_23111/*"mstSvtFlagRelease"*/);
    sub_21FFC50(&StringLiteral_22886/*"mstEventJobQuest"*/);
    sub_21FFC50(&StringLiteral_25849/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_21FFC50(&StringLiteral_25868/*"userPrivilege"*/);
    sub_21FFC50(&StringLiteral_22820/*"mstCommandCode"*/);
    sub_21FFC50(&StringLiteral_23094/*"mstSvtAppendPassiveSkill"*/);
    sub_21FFC50(&StringLiteral_22879/*"mstEventGroup"*/);
    sub_21FFC50(&StringLiteral_22957/*"mstGachaBonusSelect"*/);
    sub_21FFC50(&StringLiteral_25822/*"userEventBoardGameToken"*/);
    sub_21FFC50(&StringLiteral_23005/*"mstMissionItemDisplay"*/);
    sub_21FFC50(&StringLiteral_23010/*"mstMyroomSvtSpecialImage"*/);
    sub_21FFC50(&StringLiteral_23187/*"mstWarBoardRoad"*/);
    sub_21FFC50(&StringLiteral_22792/*"mstBuff"*/);
    sub_21FFC50(&StringLiteral_26067/*"warBoardData"*/);
    sub_21FFC50(&StringLiteral_22980/*"mstIllustrator"*/);
    sub_21FFC50(&StringLiteral_25375/*"totalBoxGacha"*/);
    sub_21FFC50(&StringLiteral_23128/*"mstSvtRarity"*/);
    sub_21FFC50(&StringLiteral_23163/*"mstWarAdd"*/);
    sub_21FFC50(&StringLiteral_22996/*"mstMapGimmickPathRelease"*/);
    sub_21FFC50(&StringLiteral_25850/*"userFriendRequestHistory"*/);
    sub_21FFC50(&StringLiteral_25798/*"user"*/);
    sub_21FFC50(&StringLiteral_18084/*"boxGachaHistory"*/);
    sub_21FFC50(&StringLiteral_22950/*"mstFuncGroup"*/);
    sub_21FFC50(&StringLiteral_22825/*"mstCommonConsume"*/);
    sub_21FFC50(&StringLiteral_23174/*"mstWarBoardEventScript"*/);
    sub_21FFC50(&StringLiteral_22974/*"mstGiftAdd"*/);
    sub_21FFC50(&StringLiteral_22938/*"mstEventUi"*/);
    sub_21FFC50(&StringLiteral_23080/*"mstSpotImage"*/);
    sub_21FFC50(&StringLiteral_23106/*"mstSvtCostumeRelease"*/);
    sub_21FFC50(&StringLiteral_25806/*"userClassStatistics"*/);
    sub_21FFC50(&StringLiteral_22991/*"mstMapGimmick"*/);
    sub_21FFC50(&StringLiteral_23031/*"mstQuestPhaseIndividuality"*/);
    sub_21FFC50(&StringLiteral_22936/*"mstEventTutorial"*/);
    sub_21FFC50(&StringLiteral_23201/*"mstWarGroupIgnore"*/);
    sub_21FFC50(&StringLiteral_23197/*"mstWarBoardStageWall"*/);
    sub_21FFC50(&StringLiteral_25844/*"userEventTrade"*/);
    sub_21FFC50(&StringLiteral_22760/*"mstAiField"*/);
    sub_21FFC50(&StringLiteral_22944/*"mstFriendPointGachaAdjust"*/);
    sub_21FFC50(&StringLiteral_23139/*"mstSvtTreasureDeviceRelease"*/);
    sub_21FFC50(&StringLiteral_23028/*"mstQuestPhase"*/);
    sub_21FFC50(&StringLiteral_25824/*"userEventDataLost"*/);
    sub_21FFC50(&StringLiteral_23095/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_21FFC50(&StringLiteral_23138/*"mstSvtTreasureDeviceDamage"*/);
    sub_21FFC50(&StringLiteral_23086/*"mstStage"*/);
    sub_21FFC50(&StringLiteral_22808/*"mstCombine"*/);
    sub_21FFC50(&StringLiteral_22856/*"mstEventCampaign"*/);
    sub_21FFC50(&StringLiteral_23194/*"mstWarBoardStageNpc"*/);
    sub_21FFC50(&StringLiteral_23780/*"paymentHistory"*/);
    sub_21FFC50(&StringLiteral_20171/*"exchangeSvt"*/);
    sub_21FFC50(&StringLiteral_23087/*"mstStageRemap"*/);
    sub_21FFC50(&StringLiteral_23052/*"mstRestriction"*/);
    sub_21FFC50(&StringLiteral_23041/*"mstQuestScript"*/);
    sub_21FFC50(&StringLiteral_22921/*"mstEventRewardSceneRelease"*/);
    sub_21FFC50(&StringLiteral_23157/*"mstVoiceCond"*/);
    sub_21FFC50(&StringLiteral_25880/*"userSubEquip"*/);
    sub_21FFC50(&StringLiteral_22914/*"mstEventRecipe"*/);
    sub_21FFC50(&StringLiteral_23105/*"mstSvtCostume"*/);
    sub_21FFC50(&StringLiteral_23126/*"mstSvtProfile"*/);
    sub_21FFC50(&StringLiteral_22827/*"mstCommonRestriction"*/);
    sub_21FFC50(&StringLiteral_25858/*"userHeelPortrait"*/);
    sub_21FFC50(&StringLiteral_23075/*"mstSkillGroupOverwrite"*/);
    sub_21FFC50(&StringLiteral_25809/*"userCommandCodeCollection"*/);
    sub_21FFC50(&StringLiteral_22823/*"mstCommandCodeSkillRelease"*/);
    sub_21FFC50(&StringLiteral_22836/*"mstEffectMovie"*/);
    sub_21FFC50(&StringLiteral_23033/*"mstQuestPickup"*/);
    sub_21FFC50(&StringLiteral_23193/*"mstWarBoardStageLayout"*/);
    sub_21FFC50(&StringLiteral_23168/*"mstWarBoardActionTrendCond"*/);
    sub_21FFC50(&StringLiteral_22858/*"mstEventCombine"*/);
    sub_21FFC50(&StringLiteral_23182/*"mstWarBoardQuest"*/);
    sub_21FFC50(&StringLiteral_23021/*"mstQuestConsumeItem"*/);
    sub_21FFC50(&StringLiteral_23030/*"mstQuestPhaseDetailAdd"*/);
    sub_21FFC50(&StringLiteral_22979/*"mstHeelPortrait"*/);
    sub_21FFC50(&StringLiteral_20172/*"exchangeSvtCoinGivenNum"*/);
    sub_21FFC50(&StringLiteral_25867/*"userPresentHistory"*/);
    sub_21FFC50(&StringLiteral_25802/*"userBgImagePartsGroup"*/);
    sub_21FFC50(&StringLiteral_22797/*"mstChaldeaGatePickup"*/);
    sub_21FFC50(&StringLiteral_23183/*"mstWarBoardRatingBase"*/);
    sub_21FFC50(&StringLiteral_22962/*"mstGachaImage"*/);
    sub_21FFC50(&StringLiteral_22842/*"mstEquipImage"*/);
    sub_21FFC50(&StringLiteral_25839/*"userEventRaid"*/);
    sub_21FFC50(&StringLiteral_23101/*"mstSvtCollection"*/);
    sub_21FFC50(&StringLiteral_20580/*"friendshipQuestDialogInfo"*/);
    sub_21FFC50(&StringLiteral_23011/*"mstNews"*/);
    sub_21FFC50(&StringLiteral_22952/*"mstGacha"*/);
    sub_21FFC50(&StringLiteral_23074/*"mstSkillGroup"*/);
    sub_21FFC50(&StringLiteral_22978/*"mstGuide"*/);
    sub_21FFC50(&StringLiteral_22965/*"mstGachaPickupCollateralGroup"*/);
    sub_21FFC50(&StringLiteral_22803/*"mstClassBoardLock"*/);
    sub_21FFC50(&StringLiteral_22834/*"mstDropAdd"*/);
    sub_21FFC50(&StringLiteral_22905/*"mstEventPointUpper"*/);
    sub_21FFC50(&StringLiteral_22782/*"mstBlankEarthSpot"*/);
    sub_21FFC50(&StringLiteral_23144/*"mstTerminalOverwrite"*/);
    sub_21FFC50(&StringLiteral_22843/*"mstEquipSkill"*/);
    sub_21FFC50(&StringLiteral_22940/*"mstEventUiValue"*/);
    sub_21FFC50(&StringLiteral_25811/*"userContinue"*/);
    sub_21FFC50(&StringLiteral_23018/*"mstQuestAdd"*/);
    sub_21FFC50(&StringLiteral_22802/*"mstClassBoardLine"*/);
    sub_21FFC50(&StringLiteral_25738/*"updateProfileDialogInfo"*/);
    sub_21FFC50(&StringLiteral_22884/*"mstEventJobPassport"*/);
    sub_21FFC50(&StringLiteral_23155/*"mstVoice"*/);
    sub_21FFC50(&StringLiteral_25834/*"userEventMissionConditionDetail"*/);
    sub_21FFC50(&StringLiteral_22762/*"mstAssetbundleKey"*/);
    sub_21FFC50(&StringLiteral_22896/*"mstEventPanelMap"*/);
    sub_21FFC50(&StringLiteral_25863/*"userLogin"*/);
    sub_21FFC50(&StringLiteral_22987/*"mstLoginQuest"*/);
    sub_21FFC50(&StringLiteral_23013/*"mstPartialMaintenance"*/);
    sub_21FFC50(&StringLiteral_25841/*"userEventSpot"*/);
    sub_21FFC50(&StringLiteral_22916/*"mstEventReward"*/);
    sub_21FFC50(&StringLiteral_22864/*"mstEventDataLostBattleReset"*/);
    sub_21FFC50(&StringLiteral_22764/*"mstAttri"*/);
    sub_21FFC50(&StringLiteral_23192/*"mstWarBoardStageDetail"*/);
    sub_21FFC50(&StringLiteral_23133/*"mstSvtSkillAdd"*/);
    sub_21FFC50(&StringLiteral_25837/*"userEventQuestCooltime"*/);
    sub_21FFC50(&StringLiteral_23042/*"mstQuestScriptBranchMaterial"*/);
    sub_21FFC50(&StringLiteral_22874/*"mstEventFatigueRecovery"*/);
    sub_21FFC50(&StringLiteral_23170/*"mstWarBoardAi"*/);
    sub_21FFC50(&StringLiteral_23149/*"mstTreasureBoxTalk"*/);
    sub_21FFC50(&StringLiteral_23173/*"mstWarBoardEvent"*/);
    sub_21FFC50(&StringLiteral_23159/*"mstVoicePlayCond"*/);
    sub_21FFC50(&StringLiteral_22959/*"mstGachaDetail"*/);
    sub_21FFC50(&StringLiteral_22927/*"mstEventSuperBoss"*/);
    sub_21FFC50(&StringLiteral_23072/*"mstSkillAdd"*/);
    byte_5937518 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3F88244 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_21FFECC(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_23091/*"mstSvt"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_23103/*"mstSvtComment"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_23126/*"mstSvtProfile"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_23162/*"mstWar"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_17742/*"battle"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_23150/*"mstTreasureDevice"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_23114/*"mstSvtLimit"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_23136/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_22798/*"mstClass"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_23129/*"mstSvtScript"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_23097/*"mstSvtCard"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_23132/*"mstSvtSkill"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_23123/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_25882/*"userSvt"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_25896/*"userSvtStorage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_23086/*"mstStage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_23112/*"mstSvtGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_22782/*"mstBlankEarthSpot"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_22783/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_23078/*"mstSpot"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_23080/*"mstSpotImage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_23083/*"mstSpotRoad"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_22991/*"mstMapGimmick"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_22973/*"mstGift"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_22974/*"mstGiftAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_23090/*"mstSubEquip"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_25798/*"user"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_25856/*"userGame"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_25814/*"userDeck"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_25886/*"userSvtCollection"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_22945/*"mstFriendship"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_22952/*"mstGacha"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_22962/*"mstGachaImage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_25851/*"userGacha"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_25855/*"userGachaPickupCollateral"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_25862/*"userItem"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_22984/*"mstItem"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_22969/*"mstGachaTicket"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_22953/*"mstGachaAdjustAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_22963/*"mstGachaPickup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_22944/*"mstFriendPointGachaAdjust"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_22955/*"mstGachaBaseCollateral"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_22756/*"mstAccessary"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_25800/*"userAccessary"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_25880/*"userSubEquip"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_25238/*"tblUserGame"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_23062/*"mstShop"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_23089/*"mstStoneShop"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_22768/*"mstBankShop"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_23070/*"mstShopScript"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_22839/*"mstEquip"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_22841/*"mstEquipExp"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_22843/*"mstEquipSkill"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_25818/*"userEquip"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_25848/*"userFormation"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_23071/*"mstSkill"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_23077/*"mstSkillLv"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_23073/*"mstSkillDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_22947/*"mstFunc"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_22792/*"mstBuff"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_22966/*"mstGachaRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_25870/*"userQuest"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_25871/*"userQuestInfo"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_25872/*"userQuestRecord"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_23154/*"mstUserExp"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_23011/*"mstNews"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_23143/*"mstTelop"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_23589/*"otherUserGame"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_25237/*"tblFriend"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_25866/*"userPresentBox"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_22844/*"mstEvent"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_23017/*"mstQuest"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_23018/*"mstQuestAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_23036/*"mstQuestRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_23028/*"mstQuestPhase"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_23029/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_23024/*"mstQuestGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_23035/*"mstQuestRandomGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_23021/*"mstQuestConsumeItem"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_23027/*"mstQuestMessage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_26006/*"viewQuestInfo"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_26002/*"viewEnemy"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_26005/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_22761/*"mstArea"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_22778/*"mstBgm"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_22908/*"mstEventQuest"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_22856/*"mstEventCampaign"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_22815/*"mstCombineQp"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_22814/*"mstCombineMaterial"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_22858/*"mstEventCombine"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_23108/*"mstSvtExp"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_22817/*"mstCombineSkill"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_22818/*"mstCombineTd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_22980/*"mstIllustrator"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_22832/*"mstCv"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_23152/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_23151/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_25847/*"userFollower"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_23405/*"npcFollower"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_23411/*"npcSvtFollower"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_25820/*"userEvent"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_25869/*"userProfile"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_25876/*"userShop"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_25877/*"userShopDaily"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_25811/*"userContinue"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_22829/*"mstConstant"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_22830/*"mstConstantLong"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_22831/*"mstConstantStr"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_22824/*"mstCommandSpell"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_22758/*"mstAi"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_22759/*"mstAiAct"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_23140/*"mstSvtVoice"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_22765/*"mstAttriRelation"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_22805/*"mstClassRelation"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_22835/*"mstEffect"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_22842/*"mstEquipImage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_22811/*"mstCombineLimit"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_22796/*"mstCard"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_22816/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_23115/*"mstSvtLimitAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_23128/*"mstSvtRarity"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_23061/*"mstSetItem"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_23051/*"mstRecover"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_22769/*"mstBanner"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_23065/*"mstShopDaily"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_23068/*"mstShopRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_22916/*"mstEventReward"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_22865/*"mstEventDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_22928/*"mstEventSvt"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_22788/*"mstBoxGacha"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_22789/*"mstBoxGachaBase"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_22791/*"mstBoxGachaTalk"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_25804/*"userBoxGacha"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_18084/*"boxGachaHistory"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_22771/*"mstBattleBg"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_23145/*"mstTips"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_25863/*"userLogin"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_23155/*"mstVoice"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_22918/*"mstEventRewardExtra"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    140,
    (Il2CppObject *)StringLiteral_22888/*"mstEventMission"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    141,
    (Il2CppObject *)StringLiteral_22892/*"mstEventMissionCondition"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    142,
    (Il2CppObject *)StringLiteral_22893/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    143,
    (Il2CppObject *)StringLiteral_22889/*"mstEventMissionAction"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    144,
    (Il2CppObject *)StringLiteral_22890/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    147,
    (Il2CppObject *)StringLiteral_22828/*"mstCompleteMission"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    145,
    (Il2CppObject *)StringLiteral_22891/*"mstEventMissionAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    146,
    (Il2CppObject *)StringLiteral_22922/*"mstEventRewardSet"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    148,
    (Il2CppObject *)StringLiteral_25833/*"userEventMission"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    149,
    (Il2CppObject *)StringLiteral_25834/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    150,
    (Il2CppObject *)StringLiteral_22790/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    151,
    (Il2CppObject *)StringLiteral_22807/*"mstClosedMessage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    152,
    (Il2CppObject *)StringLiteral_25895/*"userSvtLeader"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    153,
    (Il2CppObject *)StringLiteral_22950/*"mstFuncGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    154,
    (Il2CppObject *)StringLiteral_22912/*"mstEventRaid"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    155,
    (Il2CppObject *)StringLiteral_25380/*"totalEventRaid"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    156,
    (Il2CppObject *)StringLiteral_25839/*"userEventRaid"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    157,
    (Il2CppObject *)StringLiteral_22900/*"mstEventPoint"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    158,
    (Il2CppObject *)StringLiteral_22903/*"mstEventPointGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    159,
    (Il2CppObject *)StringLiteral_25378/*"totalEventPoint"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    160,
    (Il2CppObject *)StringLiteral_25836/*"userEventPoint"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    161,
    (Il2CppObject *)StringLiteral_25867/*"userPresentHistory"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    162,
    (Il2CppObject *)StringLiteral_23001/*"mstMasterMission"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    163,
    (Il2CppObject *)StringLiteral_23107/*"mstSvtExceed"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    164,
    (Il2CppObject *)StringLiteral_23013/*"mstPartialMaintenance"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    165,
    (Il2CppObject *)StringLiteral_22978/*"mstGuide"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    166,
    (Il2CppObject *)StringLiteral_23002/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    167,
    (Il2CppObject *)StringLiteral_22961/*"mstGachaGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    168,
    (Il2CppObject *)StringLiteral_23038/*"mstQuestReset"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    169,
    (Il2CppObject *)StringLiteral_23163/*"mstWarAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    170,
    (Il2CppObject *)StringLiteral_22880/*"mstEventItemDisplay"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    171,
    (Il2CppObject *)StringLiteral_22881/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    172,
    (Il2CppObject *)StringLiteral_22882/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    173,
    (Il2CppObject *)StringLiteral_22936/*"mstEventTutorial"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    174,
    (Il2CppObject *)StringLiteral_22937/*"mstEventTutorialCond"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    175,
    (Il2CppObject *)StringLiteral_23161/*"mstVoiceRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    176,
    (Il2CppObject *)StringLiteral_22927/*"mstEventSuperBoss"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    177,
    (Il2CppObject *)StringLiteral_25842/*"userEventSuperBoss"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    178,
    (Il2CppObject *)StringLiteral_23041/*"mstQuestScript"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    179,
    (Il2CppObject *)StringLiteral_23045/*"mstQuestScriptRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    180,
    (Il2CppObject *)StringLiteral_23004/*"mstMaterialFolder"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    181,
    (Il2CppObject *)StringLiteral_23052/*"mstRestriction"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    182,
    (Il2CppObject *)StringLiteral_23039/*"mstQuestRestriction"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    183,
    (Il2CppObject *)StringLiteral_23142/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    184,
    (Il2CppObject *)StringLiteral_23066/*"mstShopDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    185,
    (Il2CppObject *)StringLiteral_23130/*"mstSvtScriptAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    186,
    (Il2CppObject *)StringLiteral_22808/*"mstCombine"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    187,
    (Il2CppObject *)StringLiteral_22760/*"mstAiField"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    188,
    (Il2CppObject *)StringLiteral_23104/*"mstSvtCommentAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    189,
    (Il2CppObject *)StringLiteral_22875/*"mstEventFilter"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    190,
    (Il2CppObject *)StringLiteral_25881/*"userSupportDeck"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    191,
    (Il2CppObject *)StringLiteral_22920/*"mstEventRewardScene"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    192,
    (Il2CppObject *)StringLiteral_22941/*"mstEventVoicePlay"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    193,
    (Il2CppObject *)StringLiteral_22968/*"mstGachaSub"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    194,
    (Il2CppObject *)StringLiteral_22959/*"mstGachaDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    195,
    (Il2CppObject *)StringLiteral_22957/*"mstGachaBonusSelect"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    196,
    (Il2CppObject *)StringLiteral_22958/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    197,
    (Il2CppObject *)StringLiteral_23099/*"mstSvtChange"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    198,
    (Il2CppObject *)StringLiteral_23157/*"mstVoiceCond"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    199,
    (Il2CppObject *)StringLiteral_22779/*"mstBgmRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    200,
    (Il2CppObject *)StringLiteral_23008/*"mstMyroomAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    201,
    (Il2CppObject *)StringLiteral_23063/*"mstShopAction"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    202,
    (Il2CppObject *)StringLiteral_22921/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    203,
    (Il2CppObject *)StringLiteral_22988/*"mstMap"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    204,
    (Il2CppObject *)StringLiteral_22990/*"mstMapCond"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    205,
    (Il2CppObject *)StringLiteral_22989/*"mstMapButton"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    206,
    (Il2CppObject *)StringLiteral_22770/*"mstBannerAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    207,
    (Il2CppObject *)StringLiteral_23020/*"mstQuestBehavior"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    208,
    (Il2CppObject *)StringLiteral_22845/*"mstEventAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    209,
    (Il2CppObject *)StringLiteral_23146/*"mstTotalLogin"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    210,
    (Il2CppObject *)StringLiteral_23109/*"mstSvtFilter"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    211,
    (Il2CppObject *)StringLiteral_22810/*"mstCombineCostume"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    212,
    (Il2CppObject *)StringLiteral_23105/*"mstSvtCostume"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    213,
    (Il2CppObject *)StringLiteral_23106/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    214,
    (Il2CppObject *)StringLiteral_23084/*"mstStaffPhoto"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    215,
    (Il2CppObject *)StringLiteral_23085/*"mstStaffPhotoCostume"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    216,
    (Il2CppObject *)StringLiteral_25850/*"userFriendRequestHistory"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    217,
    (Il2CppObject *)StringLiteral_25803/*"userBlacklist"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    218,
    (Il2CppObject *)StringLiteral_22986/*"mstItemSelect"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    219,
    (Il2CppObject *)StringLiteral_22910/*"mstEventRace"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    220,
    (Il2CppObject *)StringLiteral_22911/*"mstEventRaceResult"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    221,
    (Il2CppObject *)StringLiteral_23034/*"mstQuestRacePoint"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    222,
    (Il2CppObject *)StringLiteral_25838/*"userEventRace"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    223,
    (Il2CppObject *)StringLiteral_22923/*"mstEventScript"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    224,
    (Il2CppObject *)StringLiteral_22924/*"mstEventScriptRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    225,
    (Il2CppObject *)StringLiteral_23082/*"mstSpotPath"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    226,
    (Il2CppObject *)StringLiteral_23079/*"mstSpotAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    227,
    (Il2CppObject *)StringLiteral_25379/*"totalEventRace"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    228,
    (Il2CppObject *)StringLiteral_22904/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    229,
    (Il2CppObject *)StringLiteral_23160/*"mstVoicePlayGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    230,
    (Il2CppObject *)StringLiteral_23159/*"mstVoicePlayCond"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    231,
    (Il2CppObject *)StringLiteral_22967/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    232,
    (Il2CppObject *)StringLiteral_23110/*"mstSvtFlag"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    233,
    (Il2CppObject *)StringLiteral_23111/*"mstSvtFlagRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    234,
    (Il2CppObject *)StringLiteral_22887/*"mstEventLocationCampaign"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    235,
    (Il2CppObject *)StringLiteral_22795/*"mstCampaignInfo"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    236,
    (Il2CppObject *)StringLiteral_22833/*"mstDialogMessage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    237,
    (Il2CppObject *)StringLiteral_23113/*"mstSvtIndividuality"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    238,
    (Il2CppObject *)StringLiteral_22785/*"mstBoardMessage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    239,
    (Il2CppObject *)StringLiteral_22786/*"mstBoardMessageRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    240,
    (Il2CppObject *)StringLiteral_22929/*"mstEventSvtFatigue"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    241,
    (Il2CppObject *)StringLiteral_25825/*"userEventDeck"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    242,
    (Il2CppObject *)StringLiteral_22931/*"mstEventTower"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    243,
    (Il2CppObject *)StringLiteral_22932/*"mstEventTowerReward"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    244,
    (Il2CppObject *)StringLiteral_22854/*"mstEventBulletinBoard"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    245,
    (Il2CppObject *)StringLiteral_22855/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    246,
    (Il2CppObject *)StringLiteral_22873/*"mstEventFactory"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    247,
    (Il2CppObject *)StringLiteral_23067/*"mstShopGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    248,
    (Il2CppObject *)StringLiteral_22766/*"mstAuraEffect"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    249,
    (Il2CppObject *)StringLiteral_22767/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    250,
    (Il2CppObject *)StringLiteral_25835/*"userEventMissionFix"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    251,
    (Il2CppObject *)StringLiteral_23386/*"notEndEventMissionFix"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    252,
    (Il2CppObject *)StringLiteral_22837/*"mstEnemyMaster"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    253,
    (Il2CppObject *)StringLiteral_22838/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    254,
    (Il2CppObject *)StringLiteral_23134/*"mstSvtSkillRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    255,
    (Il2CppObject *)StringLiteral_23124/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    256,
    (Il2CppObject *)StringLiteral_23139/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    257,
    (Il2CppObject *)StringLiteral_22997/*"mstMapGimmickRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    258,
    (Il2CppObject *)StringLiteral_22820/*"mstCommandCode"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    259,
    (Il2CppObject *)StringLiteral_23102/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    260,
    (Il2CppObject *)StringLiteral_25808/*"userCommandCode"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    261,
    (Il2CppObject *)StringLiteral_25809/*"userCommandCodeCollection"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    262,
    (Il2CppObject *)StringLiteral_25888/*"userSvtCommandCode"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    263,
    (Il2CppObject *)StringLiteral_22822/*"mstCommandCodeSkill"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    264,
    (Il2CppObject *)StringLiteral_22823/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    265,
    (Il2CppObject *)StringLiteral_22821/*"mstCommandCodeComment"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    266,
    (Il2CppObject *)StringLiteral_22925/*"mstEventStatus"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    267,
    (Il2CppObject *)StringLiteral_22926/*"mstEventStatusQuest"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    268,
    (Il2CppObject *)StringLiteral_22827/*"mstCommonRestriction"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    269,
    (Il2CppObject *)StringLiteral_22902/*"mstEventPointBuff"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    270,
    (Il2CppObject *)StringLiteral_25846/*"userFollow"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    271,
    (Il2CppObject *)StringLiteral_22919/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    272,
    (Il2CppObject *)StringLiteral_23410/*"npcSvtEquip"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    273,
    (Il2CppObject *)StringLiteral_22857/*"mstEventCampaignRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    274,
    (Il2CppObject *)StringLiteral_23119/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    275,
    (Il2CppObject *)StringLiteral_22870/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    276,
    (Il2CppObject *)StringLiteral_22901/*"mstEventPointActivity"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    277,
    (Il2CppObject *)StringLiteral_22948/*"mstFuncCategory"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    278,
    (Il2CppObject *)StringLiteral_23033/*"mstQuestPickup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    279,
    (Il2CppObject *)StringLiteral_22938/*"mstEventUi"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    280,
    (Il2CppObject *)StringLiteral_22939/*"mstEventUiRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    281,
    (Il2CppObject *)StringLiteral_22940/*"mstEventUiValue"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    282,
    (Il2CppObject *)StringLiteral_22861/*"mstEventConquestReward"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    283,
    (Il2CppObject *)StringLiteral_23406/*"npcFollowerRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    284,
    (Il2CppObject *)StringLiteral_22849/*"mstEventBonusFilter"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    285,
    (Il2CppObject *)StringLiteral_22850/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    286,
    (Il2CppObject *)StringLiteral_22851/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    287,
    (Il2CppObject *)StringLiteral_25854/*"userGachaExtraCount"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    288,
    (Il2CppObject *)StringLiteral_22819/*"mstCommandCardRankParam"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    289,
    (Il2CppObject *)StringLiteral_25887/*"userSvtCommandCard"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    290,
    (Il2CppObject *)StringLiteral_23016/*"mstPrivilege"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    291,
    (Il2CppObject *)StringLiteral_25868/*"userPrivilege"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    292,
    (Il2CppObject *)StringLiteral_23022/*"mstQuestDateRange"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    293,
    (Il2CppObject *)StringLiteral_22905/*"mstEventPointUpper"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    294,
    (Il2CppObject *)StringLiteral_22906/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    295,
    (Il2CppObject *)StringLiteral_25873/*"userQuestRoute"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    296,
    (Il2CppObject *)StringLiteral_22852/*"mstEventBossStatusUi"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    297,
    (Il2CppObject *)StringLiteral_22826/*"mstCommonRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    298,
    (Il2CppObject *)StringLiteral_23046/*"mstQuestSpotRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    299,
    (Il2CppObject *)StringLiteral_23158/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    300,
    (Il2CppObject *)StringLiteral_22806/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    301,
    (Il2CppObject *)StringLiteral_22879/*"mstEventGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    302,
    (Il2CppObject *)StringLiteral_22762/*"mstAssetbundleKey"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    303,
    (Il2CppObject *)StringLiteral_25375/*"totalBoxGacha"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    304,
    (Il2CppObject *)StringLiteral_23138/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    305,
    (Il2CppObject *)StringLiteral_20004/*"eventSvtFatigue"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    306,
    (Il2CppObject *)StringLiteral_22917/*"mstEventRewardBg"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    307,
    (Il2CppObject *)StringLiteral_22874/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    308,
    (Il2CppObject *)StringLiteral_19991/*"eventBoostItemUsed"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    309,
    (Il2CppObject *)StringLiteral_23088/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    310,
    (Il2CppObject *)StringLiteral_23030/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    311,
    (Il2CppObject *)StringLiteral_23156/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    312,
    (Il2CppObject *)StringLiteral_23087/*"mstStageRemap"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    313,
    (Il2CppObject *)StringLiteral_18891/*"combineExp"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    314,
    (Il2CppObject *)StringLiteral_22846/*"mstEventBoardGameCell"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    315,
    (Il2CppObject *)StringLiteral_22847/*"mstEventBoardGameToken"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    316,
    (Il2CppObject *)StringLiteral_22848/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    317,
    (Il2CppObject *)StringLiteral_25822/*"userEventBoardGameToken"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    318,
    (Il2CppObject *)StringLiteral_23093/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    319,
    (Il2CppObject *)StringLiteral_23012/*"mstOpeningMovie"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    320,
    (Il2CppObject *)StringLiteral_23117/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    321,
    (Il2CppObject *)StringLiteral_23813/*"pickupUserFollower"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    322,
    (Il2CppObject *)StringLiteral_23101/*"mstSvtCollection"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    323,
    (Il2CppObject *)StringLiteral_22956/*"mstGachaBehavior"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    324,
    (Il2CppObject *)StringLiteral_22909/*"mstEventQuestCooltime"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    325,
    (Il2CppObject *)StringLiteral_25837/*"userEventQuestCooltime"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    326,
    (Il2CppObject *)StringLiteral_22787/*"mstBoost"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    327,
    (Il2CppObject *)StringLiteral_23164/*"mstWarBoard"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    328,
    (Il2CppObject *)StringLiteral_23188/*"mstWarBoardSquare"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    329,
    (Il2CppObject *)StringLiteral_23187/*"mstWarBoardRoad"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    330,
    (Il2CppObject *)StringLiteral_23190/*"mstWarBoardStage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    331,
    (Il2CppObject *)StringLiteral_23165/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    332,
    (Il2CppObject *)StringLiteral_23167/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    333,
    (Il2CppObject *)StringLiteral_23198/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    334,
    (Il2CppObject *)StringLiteral_23193/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    335,
    (Il2CppObject *)StringLiteral_23194/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    336,
    (Il2CppObject *)StringLiteral_23197/*"mstWarBoardStageWall"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    337,
    (Il2CppObject *)StringLiteral_23170/*"mstWarBoardAi"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    338,
    (Il2CppObject *)StringLiteral_23183/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    339,
    (Il2CppObject *)StringLiteral_23184/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    340,
    (Il2CppObject *)StringLiteral_23177/*"mstWarBoardItem"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    341,
    (Il2CppObject *)StringLiteral_23199/*"mstWarBoardTreasure"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    342,
    (Il2CppObject *)StringLiteral_23182/*"mstWarBoardQuest"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    343,
    (Il2CppObject *)StringLiteral_26067/*"warBoardData"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    344,
    (Il2CppObject *)StringLiteral_23176/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    345,
    (Il2CppObject *)StringLiteral_23168/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    346,
    (Il2CppObject *)StringLiteral_23166/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    347,
    (Il2CppObject *)StringLiteral_23186/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    348,
    (Il2CppObject *)StringLiteral_23196/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    349,
    (Il2CppObject *)StringLiteral_22896/*"mstEventPanelMap"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    350,
    (Il2CppObject *)StringLiteral_22897/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    351,
    (Il2CppObject *)StringLiteral_22899/*"mstEventPanelSpot"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    352,
    (Il2CppObject *)StringLiteral_22898/*"mstEventPanelScan"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    353,
    (Il2CppObject *)StringLiteral_22866/*"mstEventDigging"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    354,
    (Il2CppObject *)StringLiteral_22868/*"mstEventDiggingReward"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    355,
    (Il2CppObject *)StringLiteral_22867/*"mstEventDiggingBlock"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    356,
    (Il2CppObject *)StringLiteral_25826/*"userEventDigging"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    357,
    (Il2CppObject *)StringLiteral_22825/*"mstCommonConsume"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    358,
    (Il2CppObject *)StringLiteral_25831/*"userEventMap"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    359,
    (Il2CppObject *)StringLiteral_25841/*"userEventSpot"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    360,
    (Il2CppObject *)StringLiteral_23200/*"mstWarGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    361,
    (Il2CppObject *)StringLiteral_23116/*"mstSvtLimitImage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    362,
    (Il2CppObject *)StringLiteral_20580/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    363,
    (Il2CppObject *)StringLiteral_23040/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    364,
    (Il2CppObject *)StringLiteral_22763/*"mstAssist"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    365,
    (Il2CppObject *)StringLiteral_23172/*"mstWarBoardEffect"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    366,
    (Il2CppObject *)StringLiteral_23180/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    367,
    (Il2CppObject *)StringLiteral_17822/*"beforeBirthDay"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    368,
    (Il2CppObject *)StringLiteral_22987/*"mstLoginQuest"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    369,
    (Il2CppObject *)StringLiteral_22859/*"mstEventCombineCostume"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    370,
    (Il2CppObject *)StringLiteral_23195/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    371,
    (Il2CppObject *)StringLiteral_23137/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    372,
    (Il2CppObject *)StringLiteral_23072/*"mstSkillAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    373,
    (Il2CppObject *)StringLiteral_23118/*"mstSvtLvDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    374,
    (Il2CppObject *)StringLiteral_22954/*"mstGachaAppend"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    375,
    (Il2CppObject *)StringLiteral_25853/*"userGachaDrawLog"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    376,
    (Il2CppObject *)StringLiteral_23094/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    377,
    (Il2CppObject *)StringLiteral_25883/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    378,
    (Il2CppObject *)StringLiteral_25884/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    379,
    (Il2CppObject *)StringLiteral_23095/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    380,
    (Il2CppObject *)StringLiteral_22809/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    381,
    (Il2CppObject *)StringLiteral_23100/*"mstSvtCoin"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    382,
    (Il2CppObject *)StringLiteral_25885/*"userSvtCoin"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    383,
    (Il2CppObject *)StringLiteral_23092/*"mstSvtAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    384,
    (Il2CppObject *)StringLiteral_23147/*"mstTreasureBox"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    385,
    (Il2CppObject *)StringLiteral_23148/*"mstTreasureBoxGift"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    386,
    (Il2CppObject *)StringLiteral_23149/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    387,
    (Il2CppObject *)StringLiteral_25827/*"userEventExpedition"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    388,
    (Il2CppObject *)StringLiteral_22871/*"mstEventExpedition"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    389,
    (Il2CppObject *)StringLiteral_22872/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    390,
    (Il2CppObject *)StringLiteral_22914/*"mstEventRecipe"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    391,
    (Il2CppObject *)StringLiteral_22915/*"mstEventRecipeGift"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    392,
    (Il2CppObject *)StringLiteral_25828/*"userEventFortification"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    393,
    (Il2CppObject *)StringLiteral_22876/*"mstEventFortification"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    394,
    (Il2CppObject *)StringLiteral_22877/*"mstEventFortificationDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    395,
    (Il2CppObject *)StringLiteral_22878/*"mstEventFortificationSvt"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    396,
    (Il2CppObject *)StringLiteral_25897/*"userSvtVoicePlayed"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    397,
    (Il2CppObject *)StringLiteral_25738/*"updateProfileDialogInfo"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    398,
    (Il2CppObject *)StringLiteral_23120/*"mstSvtMaterialTd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    399,
    (Il2CppObject *)StringLiteral_22772/*"mstBattleMasterImage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    400,
    (Il2CppObject *)StringLiteral_25849/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    401,
    (Il2CppObject *)StringLiteral_25840/*"userEventRandomMission"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    402,
    (Il2CppObject *)StringLiteral_22907/*"mstEventProgressValue"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    403,
    (Il2CppObject *)StringLiteral_23121/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    404,
    (Il2CppObject *)StringLiteral_22913/*"mstEventRandomMission"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    405,
    (Il2CppObject *)StringLiteral_25852/*"userGachaDrawHistory"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    406,
    (Il2CppObject *)StringLiteral_25807/*"userCoinRoom"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    407,
    (Il2CppObject *)StringLiteral_22853/*"mstEventBuddyPoint"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    408,
    (Il2CppObject *)StringLiteral_22930/*"mstEventSvtPointRank"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    409,
    (Il2CppObject *)StringLiteral_25843/*"userEventSvtPoint"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    410,
    (Il2CppObject *)StringLiteral_22943/*"mstFieldMotion"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    411,
    (Il2CppObject *)StringLiteral_25817/*"userDeleteReservation"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    412,
    (Il2CppObject *)StringLiteral_23131/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    413,
    (Il2CppObject *)StringLiteral_22840/*"mstEquipAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    414,
    (Il2CppObject *)StringLiteral_23037/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    415,
    (Il2CppObject *)StringLiteral_25821/*"userEventAlloutBattle"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    416,
    (Il2CppObject *)StringLiteral_23043/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    417,
    (Il2CppObject *)StringLiteral_22773/*"mstBattleMessage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    418,
    (Il2CppObject *)StringLiteral_22774/*"mstBattleMessageGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    419,
    (Il2CppObject *)StringLiteral_25864/*"userNpcSvtRecord"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    420,
    (Il2CppObject *)StringLiteral_22794/*"mstBuffTypeDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    421,
    (Il2CppObject *)StringLiteral_23178/*"mstWarBoardMessage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    422,
    (Il2CppObject *)StringLiteral_23181/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    423,
    (Il2CppObject *)StringLiteral_23179/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    424,
    (Il2CppObject *)StringLiteral_23203/*"mstWarQuestSelection"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    425,
    (Il2CppObject *)StringLiteral_23192/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    426,
    (Il2CppObject *)StringLiteral_23044/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    427,
    (Il2CppObject *)StringLiteral_23042/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    428,
    (Il2CppObject *)StringLiteral_22757/*"mstAdCheckPoint"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    429,
    (Il2CppObject *)StringLiteral_22975/*"mstGiftDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    430,
    (Il2CppObject *)StringLiteral_22812/*"mstCombineLimitGift"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    431,
    (Il2CppObject *)StringLiteral_22862/*"mstEventCooltimeReward"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    432,
    (Il2CppObject *)StringLiteral_25823/*"userEventCooltimeReward"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    433,
    (Il2CppObject *)StringLiteral_22800/*"mstClassBoardClass"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    434,
    (Il2CppObject *)StringLiteral_22799/*"mstClassBoardBase"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    435,
    (Il2CppObject *)StringLiteral_22802/*"mstClassBoardLine"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    436,
    (Il2CppObject *)StringLiteral_22803/*"mstClassBoardLock"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    437,
    (Il2CppObject *)StringLiteral_22804/*"mstClassBoardSquare"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    438,
    (Il2CppObject *)StringLiteral_22801/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    439,
    (Il2CppObject *)StringLiteral_25805/*"userClassBoardSquare"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    440,
    (Il2CppObject *)StringLiteral_23098/*"mstSvtCardAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    441,
    (Il2CppObject *)StringLiteral_22998/*"mstMapLayer"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    442,
    (Il2CppObject *)StringLiteral_23081/*"mstSpotLayer"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    443,
    (Il2CppObject *)StringLiteral_22993/*"mstMapGimmickLayer"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    444,
    (Il2CppObject *)StringLiteral_22863/*"mstEventDataLostBattle"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    445,
    (Il2CppObject *)StringLiteral_22864/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    446,
    (Il2CppObject *)StringLiteral_25824/*"userEventDataLost"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    447,
    (Il2CppObject *)StringLiteral_23025/*"mstQuestHint"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    448,
    (Il2CppObject *)StringLiteral_22951/*"mstFuncTypeDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    449,
    (Il2CppObject *)StringLiteral_22793/*"mstBuffConvert"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    450,
    (Il2CppObject *)StringLiteral_23074/*"mstSkillGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    451,
    (Il2CppObject *)StringLiteral_23075/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    452,
    (Il2CppObject *)StringLiteral_23076/*"mstSkillIndividuality"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    453,
    (Il2CppObject *)StringLiteral_23053/*"mstRestrictionBase"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    454,
    (Il2CppObject *)StringLiteral_23055/*"mstRestrictionSlot"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    455,
    (Il2CppObject *)StringLiteral_23056/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    456,
    (Il2CppObject *)StringLiteral_23054/*"mstRestrictionMessage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    457,
    (Il2CppObject *)StringLiteral_23057/*"mstRestrictionWhole"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    458,
    (Il2CppObject *)StringLiteral_22949/*"mstFuncDisp"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    459,
    (Il2CppObject *)StringLiteral_22860/*"mstEventCommandAssist"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    460,
    (Il2CppObject *)StringLiteral_22894/*"mstEventMissionGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    461,
    (Il2CppObject *)StringLiteral_22813/*"mstCombineLimitRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    462,
    (Il2CppObject *)StringLiteral_23153/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    463,
    (Il2CppObject *)StringLiteral_22979/*"mstHeelPortrait"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    464,
    (Il2CppObject *)StringLiteral_25858/*"userHeelPortrait"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    465,
    (Il2CppObject *)StringLiteral_23412/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    466,
    (Il2CppObject *)StringLiteral_22960/*"mstGachaExtraGift"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    467,
    (Il2CppObject *)StringLiteral_22895/*"mstEventMural"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    468,
    (Il2CppObject *)StringLiteral_26007/*"viewWaveEnemy"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    469,
    (Il2CppObject *)StringLiteral_22784/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    470,
    (Il2CppObject *)StringLiteral_22780/*"mstBlankEarthGimmick"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    471,
    (Il2CppObject *)StringLiteral_23144/*"mstTerminalOverwrite"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    472,
    (Il2CppObject *)StringLiteral_20171/*"exchangeSvt"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    473,
    (Il2CppObject *)StringLiteral_23171/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    474,
    (Il2CppObject *)StringLiteral_23173/*"mstWarBoardEvent"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    475,
    (Il2CppObject *)StringLiteral_23174/*"mstWarBoardEventScript"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    476,
    (Il2CppObject *)StringLiteral_23191/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    477,
    (Il2CppObject *)StringLiteral_23189/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    478,
    (Il2CppObject *)StringLiteral_23169/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    479,
    (Il2CppObject *)StringLiteral_23185/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    480,
    (Il2CppObject *)StringLiteral_23175/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    481,
    (Il2CppObject *)StringLiteral_23127/*"mstSvtProfilePush"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    482,
    (Il2CppObject *)StringLiteral_22995/*"mstMapGimmickPath"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    483,
    (Il2CppObject *)StringLiteral_22996/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    484,
    (Il2CppObject *)StringLiteral_23122/*"mstSvtOverwrite"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    485,
    (Il2CppObject *)StringLiteral_22983/*"mstIndividualityPolicy"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    486,
    (Il2CppObject *)StringLiteral_22982/*"mstIndividualityPersonality"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    487,
    (Il2CppObject *)StringLiteral_22764/*"mstAttri"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    488,
    (Il2CppObject *)StringLiteral_23141/*"mstSvtVoicePattern"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    489,
    (Il2CppObject *)StringLiteral_25857/*"userGameCommon"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    490,
    (Il2CppObject *)StringLiteral_23125/*"mstSvtPhoto"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    491,
    (Il2CppObject *)StringLiteral_23003/*"mstMasterPhoto"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    492,
    (Il2CppObject *)StringLiteral_23015/*"mstPhotoFrame"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    493,
    (Il2CppObject *)StringLiteral_23202/*"mstWarMessage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    494,
    (Il2CppObject *)StringLiteral_23019/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    495,
    (Il2CppObject *)StringLiteral_22942/*"mstExcludeMotionCond"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    496,
    (Il2CppObject *)StringLiteral_25861/*"userInterruptionQuest"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    497,
    (Il2CppObject *)StringLiteral_23135/*"mstSvtTransform"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    498,
    (Il2CppObject *)StringLiteral_22999/*"mstMapUpdateSchedule"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    499,
    (Il2CppObject *)StringLiteral_23032/*"mstQuestPhasePresent"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    500,
    (Il2CppObject *)StringLiteral_25801/*"userAccountLinkage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    501,
    (Il2CppObject *)StringLiteral_23007/*"mstMissionNaviTransition"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    502,
    (Il2CppObject *)StringLiteral_22933/*"mstEventTradeGoods"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    503,
    (Il2CppObject *)StringLiteral_22934/*"mstEventTradePickup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    504,
    (Il2CppObject *)StringLiteral_22935/*"mstEventTradeStore"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    505,
    (Il2CppObject *)StringLiteral_25844/*"userEventTrade"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    506,
    (Il2CppObject *)StringLiteral_23006/*"mstMissionNaviQuest"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    507,
    (Il2CppObject *)StringLiteral_23780/*"paymentHistory"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    508,
    (Il2CppObject *)StringLiteral_25845/*"userExternalPaymentStone"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    509,
    (Il2CppObject *)StringLiteral_23031/*"mstQuestPhaseIndividuality"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    510,
    (Il2CppObject *)StringLiteral_26003/*"viewGachaFeaturedSvt"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    516,
    (Il2CppObject *)StringLiteral_22836/*"mstEffectMovie"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    511,
    (Il2CppObject *)StringLiteral_22964/*"mstGachaPickupCollateral"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    512,
    (Il2CppObject *)StringLiteral_22965/*"mstGachaPickupCollateralGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    513,
    (Il2CppObject *)StringLiteral_22775/*"mstBattlePoint"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    514,
    (Il2CppObject *)StringLiteral_22776/*"mstBattlePointPhase"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    515,
    (Il2CppObject *)StringLiteral_23096/*"mstSvtBattlePoint"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    517,
    (Il2CppObject *)StringLiteral_23014/*"mstPaymentLimit"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    518,
    (Il2CppObject *)StringLiteral_25865/*"userPaymentLimit"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    519,
    (Il2CppObject *)StringLiteral_23058/*"mstRoadmap"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    520,
    (Il2CppObject *)StringLiteral_25875/*"userRecommendSupport"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    522,
    (Il2CppObject *)StringLiteral_23049/*"mstRecommendAdviceMessage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    521,
    (Il2CppObject *)StringLiteral_23050/*"mstRecommendSupportQuest"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    523,
    (Il2CppObject *)StringLiteral_25874/*"userRecommendFollower"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    524,
    (Il2CppObject *)StringLiteral_22985/*"mstItemDropEfficiency"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    525,
    (Il2CppObject *)StringLiteral_22781/*"mstBlankEarthGimmickAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    526,
    (Il2CppObject *)StringLiteral_23204/*"mstWarRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    527,
    (Il2CppObject *)StringLiteral_23060/*"mstSelectBonusBase"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    528,
    (Il2CppObject *)StringLiteral_23059/*"mstSelectBonus"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    529,
    (Il2CppObject *)StringLiteral_23010/*"mstMyroomSvtSpecialImage"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    530,
    (Il2CppObject *)StringLiteral_23069/*"mstShopReset"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    531,
    (Il2CppObject *)StringLiteral_23409/*"npcSvtDisplayTypeDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    532,
    (Il2CppObject *)StringLiteral_22946/*"mstFriendshipSvt"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    533,
    (Il2CppObject *)StringLiteral_20172/*"exchangeSvtCoinGivenNum"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    534,
    (Il2CppObject *)StringLiteral_22797/*"mstChaldeaGatePickup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    535,
    (Il2CppObject *)StringLiteral_23201/*"mstWarGroupIgnore"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    536,
    (Il2CppObject *)StringLiteral_22981/*"mstImagePartsGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    537,
    (Il2CppObject *)StringLiteral_25860/*"userImagePartsGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    538,
    (Il2CppObject *)StringLiteral_23005/*"mstMissionItemDisplay"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    539,
    (Il2CppObject *)StringLiteral_23047/*"mstQuestUseItemGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    540,
    (Il2CppObject *)StringLiteral_23048/*"mstQuestUseItemPickup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    541,
    (Il2CppObject *)StringLiteral_25829/*"userEventItemLinkSvt"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    542,
    (Il2CppObject *)StringLiteral_23026/*"mstQuestHintOverwrite"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    543,
    (Il2CppObject *)StringLiteral_24117/*"reachedWaveInfo"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    544,
    (Il2CppObject *)StringLiteral_22970/*"mstGallery"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    545,
    (Il2CppObject *)StringLiteral_22972/*"mstGalleryResource"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    546,
    (Il2CppObject *)StringLiteral_23133/*"mstSvtSkillAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    547,
    (Il2CppObject *)StringLiteral_22971/*"mstGalleryFolderRelease"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    548,
    (Il2CppObject *)StringLiteral_25891/*"userSvtFirstGetTime"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    549,
    (Il2CppObject *)StringLiteral_23023/*"mstQuestExtension"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    550,
    (Il2CppObject *)StringLiteral_25892/*"userSvtGrand"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    551,
    (Il2CppObject *)StringLiteral_22976/*"mstGrandGraph"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    552,
    (Il2CppObject *)StringLiteral_22977/*"mstGrandGraphDetail"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    553,
    (Il2CppObject *)StringLiteral_25806/*"userClassStatistics"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    554,
    (Il2CppObject *)StringLiteral_22869/*"mstEventEquipSkillParts"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    555,
    (Il2CppObject *)StringLiteral_23000/*"mstMasterIndividualitySelect"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    556,
    (Il2CppObject *)StringLiteral_23009/*"mstMyroomAddBgDiff"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    557,
    (Il2CppObject *)StringLiteral_22777/*"mstBattleScript"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    558,
    (Il2CppObject *)StringLiteral_22834/*"mstDropAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    559,
    (Il2CppObject *)StringLiteral_25802/*"userBgImagePartsGroup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    560,
    (Il2CppObject *)StringLiteral_23064/*"mstShopAdd"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    561,
    (Il2CppObject *)StringLiteral_22883/*"mstEventJob"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    562,
    (Il2CppObject *)StringLiteral_22884/*"mstEventJobPassport"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    563,
    (Il2CppObject *)StringLiteral_22885/*"mstEventJobPointBonus"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    564,
    (Il2CppObject *)StringLiteral_22886/*"mstEventJobQuest"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    565,
    (Il2CppObject *)StringLiteral_25830/*"userEventJob"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    566,
    (Il2CppObject *)StringLiteral_25832/*"userEventMapGimmick"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  DataNameKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_DataNameKind_Kind__string__o *)v1;
  sub_21FFBF4(
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

  if ( (byte_5937517 & 1) == 0 )
  {
    sub_21FFC50(&DataNameKind_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_5937517 = 1;
  }
  v4 = DataNameKind_TypeInfo;
  if ( !*(&DataNameKind_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo, method, v2);
    v4 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v4->static_fields->nameList;
  if ( !nameList )
    sub_21FFECC(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_3F88B58 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}