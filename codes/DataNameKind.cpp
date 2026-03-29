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

  if ( (byte_4D2F8AD & 1) == 0 )
  {
    sub_1C93AD4(&DataNameKind_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_1C93AD4(&StringLiteral_22133/*"mstEventTradeGoods"*/);
    sub_1C93AD4(&StringLiteral_24867/*"userGameCommon"*/);
    sub_1C93AD4(&StringLiteral_22093/*"mstEventMissionConditionDetail"*/);
    sub_1C93AD4(&StringLiteral_22346/*"mstTreasureBoxGift"*/);
    sub_1C93AD4(&StringLiteral_22025/*"mstCommandCodeComment"*/);
    sub_1C93AD4(&StringLiteral_22089/*"mstEventMissionAction"*/);
    sub_1C93AD4(&StringLiteral_24833/*"userEventAlloutBattle"*/);
    sub_1C93AD4(&StringLiteral_23254/*"reachedWaveInfo"*/);
    sub_1C93AD4(&StringLiteral_22054/*"mstEventBonusFilterGroupInfo"*/);
    sub_1C93AD4(&StringLiteral_24884/*"userRecommendFollower"*/);
    sub_1C93AD4(&StringLiteral_22237/*"mstQuestReleaseOverwrite"*/);
    sub_1C93AD4(&StringLiteral_22197/*"mstMapGimmickRelease"*/);
    sub_1C93AD4(&StringLiteral_22160/*"mstGachaExtraGift"*/);
    sub_1C93AD4(&StringLiteral_22599/*"npcSvtFollowerIndividuality"*/);
    sub_1C93AD4(&StringLiteral_22056/*"mstEventBossStatusUi"*/);
    sub_1C93AD4(&StringLiteral_24893/*"userSvtAppendPassiveSkillLv"*/);
    sub_1C93AD4(&StringLiteral_22009/*"mstClassRelation"*/);
    sub_1C93AD4(&StringLiteral_21963/*"mstAiAct"*/);
    sub_1C93AD4(&StringLiteral_22291/*"mstSvtAnimationOverwrite"*/);
    sub_1C93AD4(&StringLiteral_22239/*"mstQuestRestriction"*/);
    sub_1C93AD4(&StringLiteral_22036/*"mstCv"*/);
    sub_1C93AD4(&StringLiteral_24838/*"userEventDigging"*/);
    sub_1C93AD4(&StringLiteral_24311/*"tblUserGame"*/);
    sub_1C93AD4(&StringLiteral_22067/*"mstEventDataLostBattle"*/);
    sub_1C93AD4(&StringLiteral_22057/*"mstEventBuddyPoint"*/);
    sub_1C93AD4(&StringLiteral_21983/*"mstBgmRelease"*/);
    sub_1C93AD4(&StringLiteral_22318/*"mstSvtMaterialTd"*/);
    sub_1C93AD4(&StringLiteral_22030/*"mstCommonRelease"*/);
    sub_1C93AD4(&StringLiteral_22145/*"mstFriendship"*/);
    sub_1C93AD4(&StringLiteral_24818/*"userClassBoardSquare"*/);
    sub_1C93AD4(&StringLiteral_22034/*"mstConstantLong"*/);
    sub_1C93AD4(&StringLiteral_22008/*"mstClassBoardSquare"*/);
    sub_1C93AD4(&StringLiteral_24897/*"userSvtCommandCode"*/);
    sub_1C93AD4(&StringLiteral_22220/*"mstQuestBehavior"*/);
    sub_1C93AD4(&StringLiteral_22185/*"mstItemDropEfficiency"*/);
    sub_1C93AD4(&StringLiteral_22317/*"mstSvtMaterialFolder"*/);
    sub_1C93AD4(&StringLiteral_22393/*"mstWarBoardStagePieceDetail"*/);
    sub_1C93AD4(&StringLiteral_22134/*"mstEventTradePickup"*/);
    sub_1C93AD4(&StringLiteral_22055/*"mstEventBonusFilterGroupMember"*/);
    sub_1C93AD4(&StringLiteral_22225/*"mstQuestHint"*/);
    sub_1C93AD4(&StringLiteral_22028/*"mstCommandSpell"*/);
    sub_1C93AD4(&StringLiteral_21961/*"mstAdCheckPoint"*/);
    sub_1C93AD4(&StringLiteral_22216/*"mstPrivilege"*/);
    sub_1C93AD4(&StringLiteral_22226/*"mstQuestHintOverwrite"*/);
    sub_1C93AD4(&StringLiteral_21990/*"mstBoardMessageRelease"*/);
    sub_1C93AD4(&StringLiteral_22166/*"mstGachaRelease"*/);
    sub_1C93AD4(&StringLiteral_24829/*"userDeleteReservation"*/);
    sub_1C93AD4(&StringLiteral_22345/*"mstTreasureBox"*/);
    sub_1C93AD4(&StringLiteral_24870/*"userImagePartsGroup"*/);
    sub_1C93AD4(&StringLiteral_22045/*"mstEquipExp"*/);
    sub_1C93AD4(&StringLiteral_22052/*"mstEventBoardGameTokenReward"*/);
    sub_1C93AD4(&StringLiteral_22298/*"mstSvtCoin"*/);
    sub_1C93AD4(&StringLiteral_22329/*"mstSvtScriptMultiple"*/);
    sub_1C93AD4(&StringLiteral_22204/*"mstMaterialFolder"*/);
    sub_1C93AD4(&StringLiteral_22063/*"mstEventCombineCostume"*/);
    sub_1C93AD4(&StringLiteral_22222/*"mstQuestDateRange"*/);
    sub_1C93AD4(&StringLiteral_22389/*"mstWarBoardStageBoss"*/);
    sub_1C93AD4(&StringLiteral_21997/*"mstBuffConvert"*/);
    sub_1C93AD4(&StringLiteral_22248/*"mstQuestUseItemPickup"*/);
    sub_1C93AD4(&StringLiteral_21970/*"mstAuraEffect"*/);
    sub_1C93AD4(&StringLiteral_22111/*"mstEventRaceResult"*/);
    sub_1C93AD4(&StringLiteral_22261/*"mstSetItem"*/);
    sub_1C93AD4(&StringLiteral_22596/*"npcSvtDisplayTypeDetail"*/);
    sub_1C93AD4(&StringLiteral_22283/*"mstStaffPhotoCostume"*/);
    sub_1C93AD4(&StringLiteral_22171/*"mstGalleryFolderRelease"*/);
    sub_1C93AD4(&StringLiteral_22251/*"mstRecover"*/);
    sub_1C93AD4(&StringLiteral_22126/*"mstEventStatusQuest"*/);
    sub_1C93AD4(&StringLiteral_24835/*"userEventCooltimeReward"*/);
    sub_1C93AD4(&StringLiteral_22214/*"mstPaymentLimit"*/);
    sub_1C93AD4(&StringLiteral_22367/*"mstWarBoardActionTrendGroup"*/);
    sub_1C93AD4(&StringLiteral_24883/*"userQuestRoute"*/);
    sub_1C93AD4(&StringLiteral_22275/*"mstSkillLv"*/);
    sub_1C93AD4(&StringLiteral_22310/*"mstSvtGroup"*/);
    sub_1C93AD4(&StringLiteral_22354/*"mstVoiceClosedMessage"*/);
    sub_1C93AD4(&StringLiteral_22076/*"mstEventExpeditionPiece"*/);
    sub_1C93AD4(&StringLiteral_22219/*"mstQuestAutoOrganizationAdjust"*/);
    sub_1C93AD4(&StringLiteral_22319/*"mstSvtMultiPortrait"*/);
    sub_1C93AD4(&StringLiteral_22079/*"mstEventFilter"*/);
    sub_1C93AD4(&StringLiteral_22206/*"mstMissionNaviQuest"*/);
    sub_1C93AD4(&StringLiteral_24885/*"userRecommendSupport"*/);
    sub_1C93AD4(&StringLiteral_24872/*"userItem"*/);
    sub_1C93AD4(&StringLiteral_22075/*"mstEventExpedition"*/);
    sub_1C93AD4(&StringLiteral_22110/*"mstEventRace"*/);
    sub_1C93AD4(&StringLiteral_22240/*"mstQuestRestrictionInfo"*/);
    sub_1C93AD4(&StringLiteral_22238/*"mstQuestReset"*/);
    sub_1C93AD4(&StringLiteral_24839/*"userEventExpedition"*/);
    sub_1C93AD4(&StringLiteral_22082/*"mstEventFortificationSvt"*/);
    sub_1C93AD4(&StringLiteral_22394/*"mstWarBoardStageReinforcements"*/);
    sub_1C93AD4(&StringLiteral_22003/*"mstClassBoardBase"*/);
    sub_1C93AD4(&StringLiteral_22041/*"mstEnemyMaster"*/);
    sub_1C93AD4(&StringLiteral_21971/*"mstAuraEffectPosOverwrite"*/);
    sub_1C93AD4(&StringLiteral_22255/*"mstRestrictionSlot"*/);
    sub_1C93AD4(&StringLiteral_22168/*"mstGachaSub"*/);
    sub_1C93AD4(&StringLiteral_22130/*"mstEventSvtPointRank"*/);
    sub_1C93AD4(&StringLiteral_22103/*"mstEventPointGroup"*/);
    sub_1C93AD4(&StringLiteral_22049/*"mstEventAdd"*/);
    sub_1C93AD4(&StringLiteral_22043/*"mstEquip"*/);
    sub_1C93AD4(&StringLiteral_22115/*"mstEventRecipeGift"*/);
    sub_1C93AD4(&StringLiteral_22341/*"mstTelop"*/);
    sub_1C93AD4(&StringLiteral_24895/*"userSvtCollection"*/);
    sub_1C93AD4(&StringLiteral_24845/*"userEventMissionFix"*/);
    sub_1C93AD4(&StringLiteral_22253/*"mstRestrictionBase"*/);
    sub_1C93AD4(&StringLiteral_22343/*"mstTips"*/);
    sub_1C93AD4(&StringLiteral_22282/*"mstStaffPhoto"*/);
    sub_1C93AD4(&StringLiteral_21972/*"mstBankShop"*/);
    sub_1C93AD4(&StringLiteral_22141/*"mstEventVoicePlay"*/);
    sub_1C93AD4(&StringLiteral_22247/*"mstQuestUseItemGroup"*/);
    sub_1C93AD4(&StringLiteral_22081/*"mstEventFortificationDetail"*/);
    sub_1C93AD4(&StringLiteral_24852/*"userEventSuperBoss"*/);
    sub_1C93AD4(&StringLiteral_22080/*"mstEventFortification"*/);
    sub_1C93AD4(&StringLiteral_22128/*"mstEventSvt"*/);
    sub_1C93AD4(&StringLiteral_22358/*"mstVoicePlayGroup"*/);
    sub_1C93AD4(&StringLiteral_24837/*"userEventDeck"*/);
    sub_1C93AD4(&StringLiteral_22277/*"mstSpotAdd"*/);
    sub_1C93AD4(&StringLiteral_22021/*"mstCombineSkill"*/);
    sub_1C93AD4(&StringLiteral_22386/*"mstWarBoardSquare"*/);
    sub_1C93AD4(&StringLiteral_21998/*"mstBuffTypeDetail"*/);
    sub_1C93AD4(&StringLiteral_22364/*"mstWarBoardActionPointClass"*/);
    sub_1C93AD4(&StringLiteral_22259/*"mstSelectBonus"*/);
    sub_1C93AD4(&StringLiteral_22333/*"mstSvtTransform"*/);
    sub_1C93AD4(&StringLiteral_24876/*"userPresentBox"*/);
    sub_1C93AD4(&StringLiteral_24853/*"userEventSvtPoint"*/);
    sub_1C93AD4(&StringLiteral_24434/*"totalEventPoint"*/);
    sub_1C93AD4(&StringLiteral_22023/*"mstCommandCardRankParam"*/);
    sub_1C93AD4(&StringLiteral_22369/*"mstWarBoardCommonRelease"*/);
    sub_1C93AD4(&StringLiteral_22289/*"mstSvt"*/);
    sub_1C93AD4(&StringLiteral_24886/*"userShop"*/);
    sub_1C93AD4(&StringLiteral_22050/*"mstEventBoardGameCell"*/);
    sub_1C93AD4(&StringLiteral_22109/*"mstEventQuestCooltime"*/);
    sub_1C93AD4(&StringLiteral_22151/*"mstFuncTypeDetail"*/);
    sub_1C93AD4(&StringLiteral_22286/*"mstStatusEffectPosOverwrite"*/);
    sub_1C93AD4(&StringLiteral_19335/*"eventBoostItemUsed"*/);
    sub_1C93AD4(&StringLiteral_22264/*"mstShopDetail"*/);
    sub_1C93AD4(&StringLiteral_22183/*"mstIndividualityPolicy"*/);
    sub_1C93AD4(&StringLiteral_22189/*"mstMapButton"*/);
    sub_1C93AD4(&StringLiteral_22396/*"mstWarBoardTacticalTrend"*/);
    sub_1C93AD4(&StringLiteral_22288/*"mstSubEquip"*/);
    sub_1C93AD4(&StringLiteral_22280/*"mstSpotPath"*/);
    sub_1C93AD4(&StringLiteral_22258/*"mstRoadmap"*/);
    sub_1C93AD4(&StringLiteral_22018/*"mstCombineMaterial"*/);
    sub_1C93AD4(&StringLiteral_22017/*"mstCombineLimitRelease"*/);
    sub_1C93AD4(&StringLiteral_22350/*"mstTreasureDeviceLv"*/);
    sub_1C93AD4(&StringLiteral_22131/*"mstEventTower"*/);
    sub_1C93AD4(&StringLiteral_22269/*"mstSkill"*/);
    sub_1C93AD4(&StringLiteral_24871/*"userInterruptionQuest"*/);
    sub_1C93AD4(&StringLiteral_22321/*"mstSvtPassiveSkill"*/);
    sub_1C93AD4(&StringLiteral_22335/*"mstSvtTreasureDeviceAdd"*/);
    sub_1C93AD4(&StringLiteral_21987/*"mstBlankEarthSpotAdd"*/);
    sub_1C93AD4(&StringLiteral_24880/*"userQuest"*/);
    sub_1C93AD4(&StringLiteral_22092/*"mstEventMissionCondition"*/);
    sub_1C93AD4(&StringLiteral_22363/*"mstWarBoardActionPoint"*/);
    sub_1C93AD4(&StringLiteral_24855/*"userExternalPaymentStone"*/);
    sub_1C93AD4(&StringLiteral_22011/*"mstClosedMessage"*/);
    sub_1C93AD4(&StringLiteral_22118/*"mstEventRewardExtra"*/);
    sub_1C93AD4(&StringLiteral_22101/*"mstEventPointActivity"*/);
    sub_1C93AD4(&StringLiteral_22108/*"mstEventQuest"*/);
    sub_1C93AD4(&StringLiteral_21978/*"mstBattleMessageGroup"*/);
    sub_1C93AD4(&StringLiteral_25007/*"viewQuestInfo"*/);
    sub_1C93AD4(&StringLiteral_22325/*"mstSvtProfilePush"*/);
    sub_1C93AD4(&StringLiteral_22349/*"mstTreasureDeviceDetail"*/);
    sub_1C93AD4(&StringLiteral_24816/*"userBlacklist"*/);
    sub_1C93AD4(&StringLiteral_22074/*"mstEventEquipSkillRelease"*/);
    sub_1C93AD4(&StringLiteral_24820/*"userCoinRoom"*/);
    sub_1C93AD4(&StringLiteral_22035/*"mstConstantStr"*/);
    sub_1C93AD4(&StringLiteral_22073/*"mstEventEquipSkillParts"*/);
    sub_1C93AD4(&StringLiteral_22170/*"mstGallery"*/);
    sub_1C93AD4(&StringLiteral_24901/*"userSvtGrand"*/);
    sub_1C93AD4(&StringLiteral_22287/*"mstStoneShop"*/);
    sub_1C93AD4(&StringLiteral_22199/*"mstMapUpdateSchedule"*/);
    sub_1C93AD4(&StringLiteral_22344/*"mstTotalLogin"*/);
    sub_1C93AD4(&StringLiteral_22212/*"mstOpeningMovie"*/);
    sub_1C93AD4(&StringLiteral_22033/*"mstConstant"*/);
    sub_1C93AD4(&StringLiteral_22246/*"mstQuestSpotRelease"*/);
    sub_1C93AD4(&StringLiteral_22026/*"mstCommandCodeSkill"*/);
    sub_1C93AD4(&StringLiteral_22217/*"mstQuest"*/);
    sub_1C93AD4(&StringLiteral_22339/*"mstSvtVoicePattern"*/);
    sub_1C93AD4(&StringLiteral_22137/*"mstEventTutorialCond"*/);
    sub_1C93AD4(&StringLiteral_21985/*"mstBlankEarthGimmickAdd"*/);
    sub_1C93AD4(&StringLiteral_22362/*"mstWarBoard"*/);
    sub_1C93AD4(&StringLiteral_22112/*"mstEventRaid"*/);
    sub_1C93AD4(&StringLiteral_21982/*"mstBgm"*/);
    sub_1C93AD4(&StringLiteral_22124/*"mstEventScriptRelease"*/);
    sub_1C93AD4(&StringLiteral_24879/*"userProfile"*/);
    sub_1C93AD4(&StringLiteral_22091/*"mstEventMissionAdd"*/);
    sub_1C93AD4(&StringLiteral_22359/*"mstVoiceRelease"*/);
    sub_1C93AD4(&StringLiteral_22235/*"mstQuestRandomGroup"*/);
    sub_1C93AD4(&StringLiteral_22207/*"mstMissionNaviTransition"*/);
    sub_1C93AD4(&StringLiteral_22266/*"mstShopRelease"*/);
    sub_1C93AD4(&StringLiteral_24905/*"userSvtStorage"*/);
    sub_1C93AD4(&StringLiteral_22164/*"mstGachaPickupCollateral"*/);
    sub_1C93AD4(&StringLiteral_22249/*"mstRecommendAdviceMessage"*/);
    sub_1C93AD4(&StringLiteral_22250/*"mstRecommendSupportQuest"*/);
    sub_1C93AD4(&StringLiteral_24892/*"userSvtAppendPassiveSkill"*/);
    sub_1C93AD4(&StringLiteral_22290/*"mstSvtAdd"*/);
    sub_1C93AD4(&StringLiteral_22176/*"mstGrandGraph"*/);
    sub_1C93AD4(&StringLiteral_22400/*"mstWarMessage"*/);
    sub_1C93AD4(&StringLiteral_21988/*"mstBlankEarthSpotNavimenu"*/);
    sub_1C93AD4(&StringLiteral_21976/*"mstBattleMasterImage"*/);
    sub_1C93AD4(&StringLiteral_22271/*"mstSkillDetail"*/);
    sub_1C93AD4(&StringLiteral_22201/*"mstMasterMission"*/);
    sub_1C93AD4(&StringLiteral_22322/*"mstSvtPassiveSkillRelease"*/);
    sub_1C93AD4(&StringLiteral_22276/*"mstSpot"*/);
    sub_1C93AD4(&StringLiteral_22088/*"mstEventMission"*/);
    sub_1C93AD4(&StringLiteral_22020/*"mstCombineQpSvtEquip"*/);
    sub_1C93AD4(&StringLiteral_22100/*"mstEventPoint"*/);
    sub_1C93AD4(&StringLiteral_22122/*"mstEventRewardSet"*/);
    sub_1C93AD4(&StringLiteral_22097/*"mstEventPanelMapDetail"*/);
    sub_1C93AD4(&StringLiteral_22296/*"mstSvtCardAdd"*/);
    sub_1C93AD4(&StringLiteral_22188/*"mstMap"*/);
    sub_1C93AD4(&StringLiteral_22070/*"mstEventDigging"*/);
    sub_1C93AD4(&StringLiteral_24861/*"userGacha"*/);
    sub_1C93AD4(&StringLiteral_22236/*"mstQuestRelease"*/);
    sub_1C93AD4(&StringLiteral_22069/*"mstEventDetail"*/);
    sub_1C93AD4(&StringLiteral_22181/*"mstImagePartsGroup"*/);
    sub_1C93AD4(&StringLiteral_22198/*"mstMapLayer"*/);
    sub_1C93AD4(&StringLiteral_22373/*"mstWarBoardFutureActionTrend"*/);
    sub_1C93AD4(&StringLiteral_22274/*"mstSkillIndividuality"*/);
    sub_1C93AD4(&StringLiteral_21994/*"mstBoxGachaBaseDetail"*/);
    sub_1C93AD4(&StringLiteral_24310/*"tblFriend"*/);
    sub_1C93AD4(&StringLiteral_17252/*"beforeBirthDay"*/);
    sub_1C93AD4(&StringLiteral_22086/*"mstEventItemDisplayRelease"*/);
    sub_1C93AD4(&StringLiteral_22172/*"mstGalleryResource"*/);
    sub_1C93AD4(&StringLiteral_17176/*"battle"*/);
    sub_1C93AD4(&StringLiteral_22265/*"mstShopGroup"*/);
    sub_1C93AD4(&StringLiteral_21969/*"mstAttriRelation"*/);
    sub_1C93AD4(&StringLiteral_24821/*"userCommandCode"*/);
    sub_1C93AD4(&StringLiteral_22061/*"mstEventCampaignRelease"*/);
    sub_1C93AD4(&StringLiteral_22307/*"mstSvtFilter"*/);
    sub_1C93AD4(&StringLiteral_22234/*"mstQuestRacePoint"*/);
    sub_1C93AD4(&StringLiteral_22135/*"mstEventTradeStore"*/);
    sub_1C93AD4(&StringLiteral_22773/*"otherUserGame"*/);
    sub_1C93AD4(&StringLiteral_21980/*"mstBattlePointPhase"*/);
    sub_1C93AD4(&StringLiteral_22085/*"mstEventItemDisplayGroup"*/);
    sub_1C93AD4(&StringLiteral_22000/*"mstCard"*/);
    sub_1C93AD4(&StringLiteral_21984/*"mstBlankEarthGimmick"*/);
    sub_1C93AD4(&StringLiteral_21977/*"mstBattleMessage"*/);
    sub_1C93AD4(&StringLiteral_22256/*"mstRestrictionSlotDetail"*/);
    sub_1C93AD4(&StringLiteral_21973/*"mstBanner"*/);
    sub_1C93AD4(&StringLiteral_22042/*"mstEnemyMasterBattle"*/);
    sub_1C93AD4(&StringLiteral_22084/*"mstEventItemDisplay"*/);
    sub_1C93AD4(&StringLiteral_21999/*"mstCampaignInfo"*/);
    sub_1C93AD4(&StringLiteral_22334/*"mstSvtTreasureDevice"*/);
    sub_1C93AD4(&StringLiteral_22332/*"mstSvtSkillRelease"*/);
    sub_1C93AD4(&StringLiteral_22215/*"mstPhotoFrame"*/);
    sub_1C93AD4(&StringLiteral_22032/*"mstCompleteMission"*/);
    sub_1C93AD4(&StringLiteral_22015/*"mstCombineLimit"*/);
    sub_1C93AD4(&StringLiteral_22177/*"mstGrandGraphDetail"*/);
    sub_1C93AD4(&StringLiteral_21992/*"mstBoxGacha"*/);
    sub_1C93AD4(&StringLiteral_22356/*"mstVoiceMaterialCond"*/);
    sub_1C93AD4(&StringLiteral_22153/*"mstGachaAdjustAdd"*/);
    sub_1C93AD4(&StringLiteral_22167/*"mstGachaStoryAdjust"*/);
    sub_1C93AD4(&StringLiteral_22352/*"mstUserExp"*/);
    sub_1C93AD4(&StringLiteral_22142/*"mstExcludeMotionCond"*/);
    sub_1C93AD4(&StringLiteral_22375/*"mstWarBoardItem"*/);
    sub_1C93AD4(&StringLiteral_22044/*"mstEquipAdd"*/);
    sub_1C93AD4(&StringLiteral_22037/*"mstDialogMessage"*/);
    sub_1C93AD4(&StringLiteral_22598/*"npcSvtFollower"*/);
    sub_1C93AD4(&StringLiteral_21975/*"mstBattleBg"*/);
    sub_1C93AD4(&StringLiteral_22004/*"mstClassBoardClass"*/);
    sub_1C93AD4(&StringLiteral_24846/*"userEventPoint"*/);
    sub_1C93AD4(&StringLiteral_22297/*"mstSvtChange"*/);
    sub_1C93AD4(&StringLiteral_22374/*"mstWarBoardIndividualityClass"*/);
    sub_1C93AD4(&StringLiteral_22155/*"mstGachaBaseCollateral"*/);
    sub_1C93AD4(&StringLiteral_22232/*"mstQuestPhasePresent"*/);
    sub_1C93AD4(&StringLiteral_22267/*"mstShopReset"*/);
    sub_1C93AD4(&StringLiteral_22095/*"mstEventMural"*/);
    sub_1C93AD4(&StringLiteral_22163/*"mstGachaPickup"*/);
    sub_1C93AD4(&StringLiteral_22186/*"mstItemSelect"*/);
    sub_1C93AD4(&StringLiteral_22311/*"mstSvtIndividuality"*/);
    sub_1C93AD4(&StringLiteral_24832/*"userEvent"*/);
    sub_1C93AD4(&StringLiteral_22397/*"mstWarBoardTreasure"*/);
    sub_1C93AD4(&StringLiteral_22316/*"mstSvtLvDetail"*/);
    sub_1C93AD4(&StringLiteral_22382/*"mstWarBoardRatingOffset"*/);
    sub_1C93AD4(&StringLiteral_22229/*"mstQuestPhaseDetail"*/);
    sub_1C93AD4(&StringLiteral_22263/*"mstShopAction"*/);
    sub_1C93AD4(&StringLiteral_22208/*"mstMyroomAdd"*/);
    sub_1C93AD4(&StringLiteral_22129/*"mstEventSvtFatigue"*/);
    sub_1C93AD4(&StringLiteral_22077/*"mstEventFactory"*/);
    sub_1C93AD4(&StringLiteral_24862/*"userGachaDrawHistory"*/);
    sub_1C93AD4(&StringLiteral_24857/*"userFollower"*/);
    sub_1C93AD4(&StringLiteral_22383/*"mstWarBoardRatingOffsetGroup"*/);
    sub_1C93AD4(&StringLiteral_24894/*"userSvtCoin"*/);
    sub_1C93AD4(&StringLiteral_22123/*"mstEventScript"*/);
    sub_1C93AD4(&StringLiteral_22330/*"mstSvtSkill"*/);
    sub_1C93AD4(&StringLiteral_22279/*"mstSpotLayer"*/);
    sub_1C93AD4(&StringLiteral_24896/*"userSvtCommandCard"*/);
    sub_1C93AD4(&StringLiteral_24881/*"userQuestInfo"*/);
    sub_1C93AD4(&StringLiteral_22039/*"mstEffect"*/);
    sub_1C93AD4(&StringLiteral_22184/*"mstItem"*/);
    sub_1C93AD4(&StringLiteral_22260/*"mstSelectBonusBase"*/);
    sub_1C93AD4(&StringLiteral_22104/*"mstEventPointGroupAdd"*/);
    sub_1C93AD4(&StringLiteral_22227/*"mstQuestMessage"*/);
    sub_1C93AD4(&StringLiteral_22593/*"npcFollowerRelease"*/);
    sub_1C93AD4(&StringLiteral_22148/*"mstFuncCategory"*/);
    sub_1C93AD4(&StringLiteral_22376/*"mstWarBoardMessage"*/);
    sub_1C93AD4(&StringLiteral_24866/*"userGame"*/);
    sub_1C93AD4(&StringLiteral_22173/*"mstGift"*/);
    sub_1C93AD4(&StringLiteral_22384/*"mstWarBoardReinforcements"*/);
    sub_1C93AD4(&StringLiteral_22051/*"mstEventBoardGameToken"*/);
    sub_1C93AD4(&StringLiteral_22193/*"mstMapGimmickLayer"*/);
    sub_1C93AD4(&StringLiteral_22300/*"mstSvtCommandCodeUnlock"*/);
    sub_1C93AD4(&StringLiteral_21967/*"mstAssist"*/);
    sub_1C93AD4(&StringLiteral_25008/*"viewWaveEnemy"*/);
    sub_1C93AD4(&StringLiteral_22597/*"npcSvtEquip"*/);
    sub_1C93AD4(&StringLiteral_22243/*"mstQuestScriptMaterialNext"*/);
    sub_1C93AD4(&StringLiteral_22306/*"mstSvtExp"*/);
    sub_1C93AD4(&StringLiteral_24891/*"userSvt"*/);
    sub_1C93AD4(&StringLiteral_25004/*"viewEnemy"*/);
    sub_1C93AD4(&StringLiteral_22139/*"mstEventUiRelease"*/);
    sub_1C93AD4(&StringLiteral_24435/*"totalEventRace"*/);
    sub_1C93AD4(&StringLiteral_22143/*"mstFieldMotion"*/);
    sub_1C93AD4(&StringLiteral_22113/*"mstEventRandomMission"*/);
    sub_1C93AD4(&StringLiteral_22120/*"mstEventRewardScene"*/);
    sub_1C93AD4(&StringLiteral_22146/*"mstFriendshipSvt"*/);
    sub_1C93AD4(&StringLiteral_22182/*"mstIndividualityPersonality"*/);
    sub_1C93AD4(&StringLiteral_22014/*"mstCombineCostume"*/);
    sub_1C93AD4(&StringLiteral_22013/*"mstCombineAppendPassiveSkill"*/);
    sub_1C93AD4(&StringLiteral_22072/*"mstEventDiggingReward"*/);
    sub_1C93AD4(&StringLiteral_22365/*"mstWarBoardActionTrend"*/);
    sub_1C93AD4(&StringLiteral_21981/*"mstBattleScript"*/);
    sub_1C93AD4(&StringLiteral_22154/*"mstGachaAppend"*/);
    sub_1C93AD4(&StringLiteral_22387/*"mstWarBoardSquareIndexGroup"*/);
    sub_1C93AD4(&StringLiteral_22147/*"mstFunc"*/);
    sub_1C93AD4(&StringLiteral_22065/*"mstEventConquestReward"*/);
    sub_1C93AD4(&StringLiteral_22370/*"mstWarBoardEffect"*/);
    sub_1C93AD4(&StringLiteral_22401/*"mstWarQuestSelection"*/);
    sub_1C93AD4(&StringLiteral_24826/*"userDeck"*/);
    sub_1C93AD4(&StringLiteral_22202/*"mstMasterMissionDisplayInfo"*/);
    sub_1C93AD4(&StringLiteral_22398/*"mstWarGroup"*/);
    sub_1C93AD4(&StringLiteral_22262/*"mstShop"*/);
    sub_1C93AD4(&StringLiteral_22379/*"mstWarBoardPartySkill"*/);
    sub_1C93AD4(&StringLiteral_24841/*"userEventItemLinkSvt"*/);
    sub_1C93AD4(&StringLiteral_22102/*"mstEventPointBuff"*/);
    sub_1C93AD4(&StringLiteral_22223/*"mstQuestExtension"*/);
    sub_1C93AD4(&StringLiteral_24890/*"userSupportDeck"*/);
    sub_1C93AD4(&StringLiteral_22281/*"mstSpotRoad"*/);
    sub_1C93AD4(&StringLiteral_22340/*"mstSvtVoiceRelation"*/);
    sub_1C93AD4(&StringLiteral_22016/*"mstCombineLimitGift"*/);
    sub_1C93AD4(&StringLiteral_22066/*"mstEventCooltimeReward"*/);
    sub_1C93AD4(&StringLiteral_22058/*"mstEventBulletinBoard"*/);
    sub_1C93AD4(&StringLiteral_22117/*"mstEventRewardBg"*/);
    sub_1C93AD4(&StringLiteral_21995/*"mstBoxGachaTalk"*/);
    sub_1C93AD4(&StringLiteral_24875/*"userPaymentLimit"*/);
    sub_1C93AD4(&StringLiteral_22149/*"mstFuncDisp"*/);
    sub_1C93AD4(&StringLiteral_22327/*"mstSvtScript"*/);
    sub_1C93AD4(&StringLiteral_22190/*"mstMapCond"*/);
    sub_1C93AD4(&StringLiteral_22209/*"mstMyroomAddBgDiff"*/);
    sub_1C93AD4(&StringLiteral_24840/*"userEventFortification"*/);
    sub_1C93AD4(&StringLiteral_22378/*"mstWarBoardOnboardSkill"*/);
    sub_1C93AD4(&StringLiteral_22161/*"mstGachaGroup"*/);
    sub_1C93AD4(&StringLiteral_25006/*"viewQuestEnemyInfo"*/);
    sub_1C93AD4(&StringLiteral_24814/*"userAccountLinkage"*/);
    sub_1C93AD4(&StringLiteral_22301/*"mstSvtComment"*/);
    sub_1C93AD4(&StringLiteral_22348/*"mstTreasureDevice"*/);
    sub_1C93AD4(&StringLiteral_25005/*"viewGachaFeaturedSvt"*/);
    sub_1C93AD4(&StringLiteral_24874/*"userNpcSvtRecord"*/);
    sub_1C93AD4(&StringLiteral_21979/*"mstBattlePoint"*/);
    sub_1C93AD4(&StringLiteral_22094/*"mstEventMissionGroup"*/);
    sub_1C93AD4(&StringLiteral_24882/*"userQuestRecord"*/);
    sub_1C93AD4(&StringLiteral_22254/*"mstRestrictionMessage"*/);
    sub_1C93AD4(&StringLiteral_22175/*"mstGiftDetail"*/);
    sub_1C93AD4(&StringLiteral_22169/*"mstGachaTicket"*/);
    sub_1C93AD4(&StringLiteral_22323/*"mstSvtPhoto"*/);
    sub_1C93AD4(&StringLiteral_22971/*"pickupUserFollower"*/);
    sub_1C93AD4(&StringLiteral_22125/*"mstEventStatus"*/);
    sub_1C93AD4(&StringLiteral_22302/*"mstSvtCommentAdd"*/);
    sub_1C93AD4(&StringLiteral_22320/*"mstSvtOverwrite"*/);
    sub_1C93AD4(&StringLiteral_22592/*"npcFollower"*/);
    sub_1C93AD4(&StringLiteral_22064/*"mstEventCommandAssist"*/);
    sub_1C93AD4(&StringLiteral_19348/*"eventSvtFatigue"*/);
    sub_1C93AD4(&StringLiteral_22158/*"mstGachaBonusSelectLineup"*/);
    sub_1C93AD4(&StringLiteral_22059/*"mstEventBulletinBoardRelease"*/);
    sub_1C93AD4(&StringLiteral_22305/*"mstSvtExceed"*/);
    sub_1C93AD4(&StringLiteral_22315/*"mstSvtLimitSpoilerProtection"*/);
    sub_1C93AD4(&StringLiteral_22338/*"mstSvtVoice"*/);
    sub_1C93AD4(&StringLiteral_22257/*"mstRestrictionWhole"*/);
    sub_1C93AD4(&StringLiteral_24864/*"userGachaExtraCount"*/);
    sub_1C93AD4(&StringLiteral_22195/*"mstMapGimmickPath"*/);
    sub_1C93AD4(&StringLiteral_22132/*"mstEventTowerReward"*/);
    sub_1C93AD4(&StringLiteral_22010/*"mstClassRelationOverwrite"*/);
    sub_1C93AD4(&StringLiteral_21962/*"mstAi"*/);
    sub_1C93AD4(&StringLiteral_24817/*"userBoxGacha"*/);
    sub_1C93AD4(&StringLiteral_22295/*"mstSvtCard"*/);
    sub_1C93AD4(&StringLiteral_24865/*"userGachaPickupCollateral"*/);
    sub_1C93AD4(&StringLiteral_24863/*"userGachaDrawLog"*/);
    sub_1C93AD4(&StringLiteral_22388/*"mstWarBoardStage"*/);
    sub_1C93AD4(&StringLiteral_24830/*"userEquip"*/);
    sub_1C93AD4(&StringLiteral_22119/*"mstEventRewardGuideRelease"*/);
    sub_1C93AD4(&StringLiteral_22005/*"mstClassBoardCommandSpell"*/);
    sub_1C93AD4(&StringLiteral_22200/*"mstMasterIndividualitySelect"*/);
    sub_1C93AD4(&StringLiteral_22402/*"mstWarRelease"*/);
    sub_1C93AD4(&StringLiteral_22156/*"mstGachaBehavior"*/);
    sub_1C93AD4(&StringLiteral_22360/*"mstWar"*/);
    sub_1C93AD4(&StringLiteral_22053/*"mstEventBonusFilter"*/);
    sub_1C93AD4(&StringLiteral_22245/*"mstQuestScriptRelease"*/);
    sub_1C93AD4(&StringLiteral_24842/*"userEventMap"*/);
    sub_1C93AD4(&StringLiteral_22099/*"mstEventPanelSpot"*/);
    sub_1C93AD4(&StringLiteral_22002/*"mstClass"*/);
    sub_1C93AD4(&StringLiteral_24813/*"userAccessary"*/);
    sub_1C93AD4(&StringLiteral_22313/*"mstSvtLimitAdd"*/);
    sub_1C93AD4(&StringLiteral_22244/*"mstQuestScriptMaterialOverwrite"*/);
    sub_1C93AD4(&StringLiteral_18270/*"combineExp"*/);
    sub_1C93AD4(&StringLiteral_24858/*"userFormation"*/);
    sub_1C93AD4(&StringLiteral_22377/*"mstWarBoardMessageScript"*/);
    sub_1C93AD4(&StringLiteral_22107/*"mstEventProgressValue"*/);
    sub_1C93AD4(&StringLiteral_24906/*"userSvtVoicePlayed"*/);
    sub_1C93AD4(&StringLiteral_22294/*"mstSvtBattlePoint"*/);
    sub_1C93AD4(&StringLiteral_22308/*"mstSvtFlag"*/);
    sub_1C93AD4(&StringLiteral_21989/*"mstBoardMessage"*/);
    sub_1C93AD4(&StringLiteral_22098/*"mstEventPanelScan"*/);
    sub_1C93AD4(&StringLiteral_22314/*"mstSvtLimitImage"*/);
    sub_1C93AD4(&StringLiteral_22071/*"mstEventDiggingBlock"*/);
    sub_1C93AD4(&StringLiteral_24850/*"userEventRandomMission"*/);
    sub_1C93AD4(&StringLiteral_21965/*"mstArea"*/);
    sub_1C93AD4(&StringLiteral_24436/*"totalEventRaid"*/);
    sub_1C93AD4(&StringLiteral_22573/*"notEndEventMissionFix"*/);
    sub_1C93AD4(&StringLiteral_22268/*"mstShopScript"*/);
    sub_1C93AD4(&StringLiteral_24843/*"userEventMission"*/);
    sub_1C93AD4(&StringLiteral_22203/*"mstMasterPhoto"*/);
    sub_1C93AD4(&StringLiteral_22090/*"mstEventMissionActionAdd"*/);
    sub_1C93AD4(&StringLiteral_22022/*"mstCombineTd"*/);
    sub_1C93AD4(&StringLiteral_24900/*"userSvtFirstGetTime"*/);
    sub_1C93AD4(&StringLiteral_21991/*"mstBoost"*/);
    sub_1C93AD4(&StringLiteral_22328/*"mstSvtScriptAdd"*/);
    sub_1C93AD4(&StringLiteral_21993/*"mstBoxGachaBase"*/);
    sub_1C93AD4(&StringLiteral_21974/*"mstBannerAdd"*/);
    sub_1C93AD4(&StringLiteral_21960/*"mstAccessary"*/);
    sub_1C93AD4(&StringLiteral_22351/*"mstTreasureDeviceSequenceWeight"*/);
    sub_1C93AD4(&StringLiteral_24848/*"userEventRace"*/);
    sub_1C93AD4(&StringLiteral_22224/*"mstQuestGroup"*/);
    sub_1C93AD4(&StringLiteral_22106/*"mstEventPointUpperRelease"*/);
    sub_1C93AD4(&StringLiteral_24904/*"userSvtLeader"*/);
    sub_1C93AD4(&StringLiteral_22312/*"mstSvtLimit"*/);
    sub_1C93AD4(&StringLiteral_24856/*"userFollow"*/);
    sub_1C93AD4(&StringLiteral_22087/*"mstEventLocationCampaign"*/);
    sub_1C93AD4(&StringLiteral_22019/*"mstCombineQp"*/);
    sub_1C93AD4(&StringLiteral_22048/*"mstEvent"*/);
    sub_1C93AD4(&StringLiteral_22309/*"mstSvtFlagRelease"*/);
    sub_1C93AD4(&StringLiteral_24859/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_1C93AD4(&StringLiteral_24878/*"userPrivilege"*/);
    sub_1C93AD4(&StringLiteral_22024/*"mstCommandCode"*/);
    sub_1C93AD4(&StringLiteral_22292/*"mstSvtAppendPassiveSkill"*/);
    sub_1C93AD4(&StringLiteral_22083/*"mstEventGroup"*/);
    sub_1C93AD4(&StringLiteral_22157/*"mstGachaBonusSelect"*/);
    sub_1C93AD4(&StringLiteral_24834/*"userEventBoardGameToken"*/);
    sub_1C93AD4(&StringLiteral_22205/*"mstMissionItemDisplay"*/);
    sub_1C93AD4(&StringLiteral_22210/*"mstMyroomSvtSpecialImage"*/);
    sub_1C93AD4(&StringLiteral_22385/*"mstWarBoardRoad"*/);
    sub_1C93AD4(&StringLiteral_21996/*"mstBuff"*/);
    sub_1C93AD4(&StringLiteral_25067/*"warBoardData"*/);
    sub_1C93AD4(&StringLiteral_22180/*"mstIllustrator"*/);
    sub_1C93AD4(&StringLiteral_24431/*"totalBoxGacha"*/);
    sub_1C93AD4(&StringLiteral_22326/*"mstSvtRarity"*/);
    sub_1C93AD4(&StringLiteral_22361/*"mstWarAdd"*/);
    sub_1C93AD4(&StringLiteral_22196/*"mstMapGimmickPathRelease"*/);
    sub_1C93AD4(&StringLiteral_24860/*"userFriendRequestHistory"*/);
    sub_1C93AD4(&StringLiteral_24811/*"user"*/);
    sub_1C93AD4(&StringLiteral_17493/*"boxGachaHistory"*/);
    sub_1C93AD4(&StringLiteral_22150/*"mstFuncGroup"*/);
    sub_1C93AD4(&StringLiteral_22029/*"mstCommonConsume"*/);
    sub_1C93AD4(&StringLiteral_22372/*"mstWarBoardEventScript"*/);
    sub_1C93AD4(&StringLiteral_22174/*"mstGiftAdd"*/);
    sub_1C93AD4(&StringLiteral_22138/*"mstEventUi"*/);
    sub_1C93AD4(&StringLiteral_22278/*"mstSpotImage"*/);
    sub_1C93AD4(&StringLiteral_22304/*"mstSvtCostumeRelease"*/);
    sub_1C93AD4(&StringLiteral_24819/*"userClassStatistics"*/);
    sub_1C93AD4(&StringLiteral_22191/*"mstMapGimmick"*/);
    sub_1C93AD4(&StringLiteral_22231/*"mstQuestPhaseIndividuality"*/);
    sub_1C93AD4(&StringLiteral_22136/*"mstEventTutorial"*/);
    sub_1C93AD4(&StringLiteral_22399/*"mstWarGroupIgnore"*/);
    sub_1C93AD4(&StringLiteral_22395/*"mstWarBoardStageWall"*/);
    sub_1C93AD4(&StringLiteral_24854/*"userEventTrade"*/);
    sub_1C93AD4(&StringLiteral_21964/*"mstAiField"*/);
    sub_1C93AD4(&StringLiteral_22144/*"mstFriendPointGachaAdjust"*/);
    sub_1C93AD4(&StringLiteral_22337/*"mstSvtTreasureDeviceRelease"*/);
    sub_1C93AD4(&StringLiteral_22228/*"mstQuestPhase"*/);
    sub_1C93AD4(&StringLiteral_24836/*"userEventDataLost"*/);
    sub_1C93AD4(&StringLiteral_22293/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_1C93AD4(&StringLiteral_22336/*"mstSvtTreasureDeviceDamage"*/);
    sub_1C93AD4(&StringLiteral_22284/*"mstStage"*/);
    sub_1C93AD4(&StringLiteral_22012/*"mstCombine"*/);
    sub_1C93AD4(&StringLiteral_22060/*"mstEventCampaign"*/);
    sub_1C93AD4(&StringLiteral_22392/*"mstWarBoardStageNpc"*/);
    sub_1C93AD4(&StringLiteral_22938/*"paymentHistory"*/);
    sub_1C93AD4(&StringLiteral_19514/*"exchangeSvt"*/);
    sub_1C93AD4(&StringLiteral_22285/*"mstStageRemap"*/);
    sub_1C93AD4(&StringLiteral_22252/*"mstRestriction"*/);
    sub_1C93AD4(&StringLiteral_22241/*"mstQuestScript"*/);
    sub_1C93AD4(&StringLiteral_22121/*"mstEventRewardSceneRelease"*/);
    sub_1C93AD4(&StringLiteral_22355/*"mstVoiceCond"*/);
    sub_1C93AD4(&StringLiteral_24889/*"userSubEquip"*/);
    sub_1C93AD4(&StringLiteral_22114/*"mstEventRecipe"*/);
    sub_1C93AD4(&StringLiteral_22303/*"mstSvtCostume"*/);
    sub_1C93AD4(&StringLiteral_22324/*"mstSvtProfile"*/);
    sub_1C93AD4(&StringLiteral_22031/*"mstCommonRestriction"*/);
    sub_1C93AD4(&StringLiteral_24868/*"userHeelPortrait"*/);
    sub_1C93AD4(&StringLiteral_22273/*"mstSkillGroupOverwrite"*/);
    sub_1C93AD4(&StringLiteral_24822/*"userCommandCodeCollection"*/);
    sub_1C93AD4(&StringLiteral_22027/*"mstCommandCodeSkillRelease"*/);
    sub_1C93AD4(&StringLiteral_22040/*"mstEffectMovie"*/);
    sub_1C93AD4(&StringLiteral_22233/*"mstQuestPickup"*/);
    sub_1C93AD4(&StringLiteral_22391/*"mstWarBoardStageLayout"*/);
    sub_1C93AD4(&StringLiteral_22366/*"mstWarBoardActionTrendCond"*/);
    sub_1C93AD4(&StringLiteral_22062/*"mstEventCombine"*/);
    sub_1C93AD4(&StringLiteral_22380/*"mstWarBoardQuest"*/);
    sub_1C93AD4(&StringLiteral_22221/*"mstQuestConsumeItem"*/);
    sub_1C93AD4(&StringLiteral_22230/*"mstQuestPhaseDetailAdd"*/);
    sub_1C93AD4(&StringLiteral_22179/*"mstHeelPortrait"*/);
    sub_1C93AD4(&StringLiteral_19515/*"exchangeSvtCoinGivenNum"*/);
    sub_1C93AD4(&StringLiteral_24877/*"userPresentHistory"*/);
    sub_1C93AD4(&StringLiteral_24815/*"userBgImagePartsGroup"*/);
    sub_1C93AD4(&StringLiteral_22001/*"mstChaldeaGatePickup"*/);
    sub_1C93AD4(&StringLiteral_22381/*"mstWarBoardRatingBase"*/);
    sub_1C93AD4(&StringLiteral_22162/*"mstGachaImage"*/);
    sub_1C93AD4(&StringLiteral_22046/*"mstEquipImage"*/);
    sub_1C93AD4(&StringLiteral_24849/*"userEventRaid"*/);
    sub_1C93AD4(&StringLiteral_22299/*"mstSvtCollection"*/);
    sub_1C93AD4(&StringLiteral_19901/*"friendshipQuestDialogInfo"*/);
    sub_1C93AD4(&StringLiteral_22211/*"mstNews"*/);
    sub_1C93AD4(&StringLiteral_22152/*"mstGacha"*/);
    sub_1C93AD4(&StringLiteral_22272/*"mstSkillGroup"*/);
    sub_1C93AD4(&StringLiteral_22178/*"mstGuide"*/);
    sub_1C93AD4(&StringLiteral_22165/*"mstGachaPickupCollateralGroup"*/);
    sub_1C93AD4(&StringLiteral_22007/*"mstClassBoardLock"*/);
    sub_1C93AD4(&StringLiteral_22038/*"mstDropAdd"*/);
    sub_1C93AD4(&StringLiteral_22105/*"mstEventPointUpper"*/);
    sub_1C93AD4(&StringLiteral_21986/*"mstBlankEarthSpot"*/);
    sub_1C93AD4(&StringLiteral_22342/*"mstTerminalOverwrite"*/);
    sub_1C93AD4(&StringLiteral_22047/*"mstEquipSkill"*/);
    sub_1C93AD4(&StringLiteral_22140/*"mstEventUiValue"*/);
    sub_1C93AD4(&StringLiteral_24824/*"userContinue"*/);
    sub_1C93AD4(&StringLiteral_22218/*"mstQuestAdd"*/);
    sub_1C93AD4(&StringLiteral_22006/*"mstClassBoardLine"*/);
    sub_1C93AD4(&StringLiteral_24753/*"updateProfileDialogInfo"*/);
    sub_1C93AD4(&StringLiteral_22353/*"mstVoice"*/);
    sub_1C93AD4(&StringLiteral_24844/*"userEventMissionConditionDetail"*/);
    sub_1C93AD4(&StringLiteral_21966/*"mstAssetbundleKey"*/);
    sub_1C93AD4(&StringLiteral_22096/*"mstEventPanelMap"*/);
    sub_1C93AD4(&StringLiteral_24873/*"userLogin"*/);
    sub_1C93AD4(&StringLiteral_22187/*"mstLoginQuest"*/);
    sub_1C93AD4(&StringLiteral_22213/*"mstPartialMaintenance"*/);
    sub_1C93AD4(&StringLiteral_24851/*"userEventSpot"*/);
    sub_1C93AD4(&StringLiteral_22116/*"mstEventReward"*/);
    sub_1C93AD4(&StringLiteral_22068/*"mstEventDataLostBattleReset"*/);
    sub_1C93AD4(&StringLiteral_21968/*"mstAttri"*/);
    sub_1C93AD4(&StringLiteral_22390/*"mstWarBoardStageDetail"*/);
    sub_1C93AD4(&StringLiteral_22331/*"mstSvtSkillAdd"*/);
    sub_1C93AD4(&StringLiteral_24847/*"userEventQuestCooltime"*/);
    sub_1C93AD4(&StringLiteral_22242/*"mstQuestScriptBranchMaterial"*/);
    sub_1C93AD4(&StringLiteral_22078/*"mstEventFatigueRecovery"*/);
    sub_1C93AD4(&StringLiteral_22368/*"mstWarBoardAi"*/);
    sub_1C93AD4(&StringLiteral_22347/*"mstTreasureBoxTalk"*/);
    sub_1C93AD4(&StringLiteral_22371/*"mstWarBoardEvent"*/);
    sub_1C93AD4(&StringLiteral_22357/*"mstVoicePlayCond"*/);
    sub_1C93AD4(&StringLiteral_22159/*"mstGachaDetail"*/);
    sub_1C93AD4(&StringLiteral_22127/*"mstEventSuperBoss"*/);
    sub_1C93AD4(&StringLiteral_22270/*"mstSkillAdd"*/);
    byte_4D2F8AD = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_34F52C0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1C93D2C(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_22289/*"mstSvt"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_22301/*"mstSvtComment"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_22324/*"mstSvtProfile"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_22360/*"mstWar"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_17176/*"battle"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_22348/*"mstTreasureDevice"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_22312/*"mstSvtLimit"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_22334/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_22002/*"mstClass"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_22327/*"mstSvtScript"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_22295/*"mstSvtCard"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_22330/*"mstSvtSkill"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_22321/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_24891/*"userSvt"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_24905/*"userSvtStorage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_22284/*"mstStage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_22310/*"mstSvtGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_21986/*"mstBlankEarthSpot"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_21987/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_22276/*"mstSpot"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_22278/*"mstSpotImage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_22281/*"mstSpotRoad"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_22191/*"mstMapGimmick"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_22173/*"mstGift"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_22174/*"mstGiftAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_22288/*"mstSubEquip"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_24811/*"user"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_24866/*"userGame"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_24826/*"userDeck"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_24895/*"userSvtCollection"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_22145/*"mstFriendship"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_22152/*"mstGacha"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_22162/*"mstGachaImage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_24861/*"userGacha"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_24865/*"userGachaPickupCollateral"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24872/*"userItem"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_22184/*"mstItem"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_22169/*"mstGachaTicket"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_22153/*"mstGachaAdjustAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_22163/*"mstGachaPickup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_22144/*"mstFriendPointGachaAdjust"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_22155/*"mstGachaBaseCollateral"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_21960/*"mstAccessary"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_24813/*"userAccessary"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_24889/*"userSubEquip"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_24311/*"tblUserGame"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_22262/*"mstShop"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_22287/*"mstStoneShop"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_21972/*"mstBankShop"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_22268/*"mstShopScript"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_22043/*"mstEquip"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_22045/*"mstEquipExp"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_22047/*"mstEquipSkill"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_24830/*"userEquip"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_24858/*"userFormation"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_22269/*"mstSkill"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_22275/*"mstSkillLv"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_22271/*"mstSkillDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_22147/*"mstFunc"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_21996/*"mstBuff"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_22166/*"mstGachaRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_24880/*"userQuest"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_24881/*"userQuestInfo"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_24882/*"userQuestRecord"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_22352/*"mstUserExp"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_22211/*"mstNews"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_22341/*"mstTelop"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_22773/*"otherUserGame"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_24310/*"tblFriend"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_24876/*"userPresentBox"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_22048/*"mstEvent"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_22217/*"mstQuest"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_22218/*"mstQuestAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_22236/*"mstQuestRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_22228/*"mstQuestPhase"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_22229/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_22224/*"mstQuestGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_22235/*"mstQuestRandomGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_22221/*"mstQuestConsumeItem"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_22227/*"mstQuestMessage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_25007/*"viewQuestInfo"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_25004/*"viewEnemy"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_25006/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_21965/*"mstArea"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_21982/*"mstBgm"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_22108/*"mstEventQuest"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_22060/*"mstEventCampaign"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_22019/*"mstCombineQp"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_22018/*"mstCombineMaterial"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_22062/*"mstEventCombine"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_22306/*"mstSvtExp"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_22021/*"mstCombineSkill"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_22022/*"mstCombineTd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_22180/*"mstIllustrator"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_22036/*"mstCv"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_22350/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_22349/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_24857/*"userFollower"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_22592/*"npcFollower"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_22598/*"npcSvtFollower"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_24832/*"userEvent"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_24879/*"userProfile"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_24886/*"userShop"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_24824/*"userContinue"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_22033/*"mstConstant"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_22034/*"mstConstantLong"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_22035/*"mstConstantStr"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_22028/*"mstCommandSpell"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_21962/*"mstAi"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_21963/*"mstAiAct"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_22338/*"mstSvtVoice"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_21969/*"mstAttriRelation"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_22009/*"mstClassRelation"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_22039/*"mstEffect"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_22046/*"mstEquipImage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_22015/*"mstCombineLimit"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_22000/*"mstCard"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_22020/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_22313/*"mstSvtLimitAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_22326/*"mstSvtRarity"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_22261/*"mstSetItem"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_22251/*"mstRecover"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_21973/*"mstBanner"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_22266/*"mstShopRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_22116/*"mstEventReward"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_22069/*"mstEventDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_22128/*"mstEventSvt"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_21992/*"mstBoxGacha"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_21993/*"mstBoxGachaBase"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_21995/*"mstBoxGachaTalk"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_24817/*"userBoxGacha"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17493/*"boxGachaHistory"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_21975/*"mstBattleBg"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_22343/*"mstTips"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_24873/*"userLogin"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_22353/*"mstVoice"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_22118/*"mstEventRewardExtra"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_22088/*"mstEventMission"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_22092/*"mstEventMissionCondition"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    140,
    (Il2CppObject *)StringLiteral_22093/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    141,
    (Il2CppObject *)StringLiteral_22089/*"mstEventMissionAction"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    142,
    (Il2CppObject *)StringLiteral_22090/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    145,
    (Il2CppObject *)StringLiteral_22032/*"mstCompleteMission"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    143,
    (Il2CppObject *)StringLiteral_22091/*"mstEventMissionAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    144,
    (Il2CppObject *)StringLiteral_22122/*"mstEventRewardSet"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    146,
    (Il2CppObject *)StringLiteral_24843/*"userEventMission"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    147,
    (Il2CppObject *)StringLiteral_24844/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    148,
    (Il2CppObject *)StringLiteral_21994/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    149,
    (Il2CppObject *)StringLiteral_22011/*"mstClosedMessage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    150,
    (Il2CppObject *)StringLiteral_24904/*"userSvtLeader"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    151,
    (Il2CppObject *)StringLiteral_22150/*"mstFuncGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    152,
    (Il2CppObject *)StringLiteral_22112/*"mstEventRaid"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    153,
    (Il2CppObject *)StringLiteral_24436/*"totalEventRaid"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    154,
    (Il2CppObject *)StringLiteral_24849/*"userEventRaid"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    155,
    (Il2CppObject *)StringLiteral_22100/*"mstEventPoint"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    156,
    (Il2CppObject *)StringLiteral_22103/*"mstEventPointGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    157,
    (Il2CppObject *)StringLiteral_24434/*"totalEventPoint"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    158,
    (Il2CppObject *)StringLiteral_24846/*"userEventPoint"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    159,
    (Il2CppObject *)StringLiteral_24877/*"userPresentHistory"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    160,
    (Il2CppObject *)StringLiteral_22201/*"mstMasterMission"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    161,
    (Il2CppObject *)StringLiteral_22305/*"mstSvtExceed"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    162,
    (Il2CppObject *)StringLiteral_22213/*"mstPartialMaintenance"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    163,
    (Il2CppObject *)StringLiteral_22178/*"mstGuide"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    164,
    (Il2CppObject *)StringLiteral_22202/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    165,
    (Il2CppObject *)StringLiteral_22161/*"mstGachaGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    166,
    (Il2CppObject *)StringLiteral_22238/*"mstQuestReset"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    167,
    (Il2CppObject *)StringLiteral_22361/*"mstWarAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    168,
    (Il2CppObject *)StringLiteral_22084/*"mstEventItemDisplay"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    169,
    (Il2CppObject *)StringLiteral_22085/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    170,
    (Il2CppObject *)StringLiteral_22086/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    171,
    (Il2CppObject *)StringLiteral_22136/*"mstEventTutorial"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    172,
    (Il2CppObject *)StringLiteral_22137/*"mstEventTutorialCond"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    173,
    (Il2CppObject *)StringLiteral_22359/*"mstVoiceRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    174,
    (Il2CppObject *)StringLiteral_22127/*"mstEventSuperBoss"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    175,
    (Il2CppObject *)StringLiteral_24852/*"userEventSuperBoss"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    176,
    (Il2CppObject *)StringLiteral_22241/*"mstQuestScript"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    177,
    (Il2CppObject *)StringLiteral_22245/*"mstQuestScriptRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    178,
    (Il2CppObject *)StringLiteral_22204/*"mstMaterialFolder"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    179,
    (Il2CppObject *)StringLiteral_22252/*"mstRestriction"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    180,
    (Il2CppObject *)StringLiteral_22239/*"mstQuestRestriction"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    181,
    (Il2CppObject *)StringLiteral_22340/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    182,
    (Il2CppObject *)StringLiteral_22264/*"mstShopDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    183,
    (Il2CppObject *)StringLiteral_22328/*"mstSvtScriptAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    184,
    (Il2CppObject *)StringLiteral_22012/*"mstCombine"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    185,
    (Il2CppObject *)StringLiteral_21964/*"mstAiField"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    186,
    (Il2CppObject *)StringLiteral_22302/*"mstSvtCommentAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    187,
    (Il2CppObject *)StringLiteral_22079/*"mstEventFilter"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    188,
    (Il2CppObject *)StringLiteral_24890/*"userSupportDeck"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    189,
    (Il2CppObject *)StringLiteral_22120/*"mstEventRewardScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    190,
    (Il2CppObject *)StringLiteral_22141/*"mstEventVoicePlay"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    191,
    (Il2CppObject *)StringLiteral_22168/*"mstGachaSub"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    192,
    (Il2CppObject *)StringLiteral_22159/*"mstGachaDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    193,
    (Il2CppObject *)StringLiteral_22157/*"mstGachaBonusSelect"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    194,
    (Il2CppObject *)StringLiteral_22158/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    195,
    (Il2CppObject *)StringLiteral_22297/*"mstSvtChange"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    196,
    (Il2CppObject *)StringLiteral_22355/*"mstVoiceCond"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    197,
    (Il2CppObject *)StringLiteral_21983/*"mstBgmRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    198,
    (Il2CppObject *)StringLiteral_22208/*"mstMyroomAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    199,
    (Il2CppObject *)StringLiteral_22263/*"mstShopAction"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    200,
    (Il2CppObject *)StringLiteral_22121/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    201,
    (Il2CppObject *)StringLiteral_22188/*"mstMap"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    202,
    (Il2CppObject *)StringLiteral_22190/*"mstMapCond"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    203,
    (Il2CppObject *)StringLiteral_22189/*"mstMapButton"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    204,
    (Il2CppObject *)StringLiteral_21974/*"mstBannerAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    205,
    (Il2CppObject *)StringLiteral_22220/*"mstQuestBehavior"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    206,
    (Il2CppObject *)StringLiteral_22049/*"mstEventAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    207,
    (Il2CppObject *)StringLiteral_22344/*"mstTotalLogin"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    208,
    (Il2CppObject *)StringLiteral_22307/*"mstSvtFilter"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    209,
    (Il2CppObject *)StringLiteral_22014/*"mstCombineCostume"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    210,
    (Il2CppObject *)StringLiteral_22303/*"mstSvtCostume"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    211,
    (Il2CppObject *)StringLiteral_22304/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    212,
    (Il2CppObject *)StringLiteral_22282/*"mstStaffPhoto"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    213,
    (Il2CppObject *)StringLiteral_22283/*"mstStaffPhotoCostume"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    214,
    (Il2CppObject *)StringLiteral_24860/*"userFriendRequestHistory"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    215,
    (Il2CppObject *)StringLiteral_24816/*"userBlacklist"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    216,
    (Il2CppObject *)StringLiteral_22186/*"mstItemSelect"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    217,
    (Il2CppObject *)StringLiteral_22110/*"mstEventRace"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    218,
    (Il2CppObject *)StringLiteral_22111/*"mstEventRaceResult"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    219,
    (Il2CppObject *)StringLiteral_22234/*"mstQuestRacePoint"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    220,
    (Il2CppObject *)StringLiteral_24848/*"userEventRace"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    221,
    (Il2CppObject *)StringLiteral_22123/*"mstEventScript"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    222,
    (Il2CppObject *)StringLiteral_22124/*"mstEventScriptRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    223,
    (Il2CppObject *)StringLiteral_22280/*"mstSpotPath"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    224,
    (Il2CppObject *)StringLiteral_22277/*"mstSpotAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    225,
    (Il2CppObject *)StringLiteral_24435/*"totalEventRace"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    226,
    (Il2CppObject *)StringLiteral_22104/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    227,
    (Il2CppObject *)StringLiteral_22358/*"mstVoicePlayGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    228,
    (Il2CppObject *)StringLiteral_22357/*"mstVoicePlayCond"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    229,
    (Il2CppObject *)StringLiteral_22167/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    230,
    (Il2CppObject *)StringLiteral_22308/*"mstSvtFlag"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    231,
    (Il2CppObject *)StringLiteral_22309/*"mstSvtFlagRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    232,
    (Il2CppObject *)StringLiteral_22087/*"mstEventLocationCampaign"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    233,
    (Il2CppObject *)StringLiteral_21999/*"mstCampaignInfo"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    234,
    (Il2CppObject *)StringLiteral_22037/*"mstDialogMessage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    235,
    (Il2CppObject *)StringLiteral_22311/*"mstSvtIndividuality"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    236,
    (Il2CppObject *)StringLiteral_21989/*"mstBoardMessage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    237,
    (Il2CppObject *)StringLiteral_21990/*"mstBoardMessageRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    238,
    (Il2CppObject *)StringLiteral_22129/*"mstEventSvtFatigue"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    239,
    (Il2CppObject *)StringLiteral_24837/*"userEventDeck"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    240,
    (Il2CppObject *)StringLiteral_22131/*"mstEventTower"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    241,
    (Il2CppObject *)StringLiteral_22132/*"mstEventTowerReward"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    242,
    (Il2CppObject *)StringLiteral_22058/*"mstEventBulletinBoard"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    243,
    (Il2CppObject *)StringLiteral_22059/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    244,
    (Il2CppObject *)StringLiteral_22077/*"mstEventFactory"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    245,
    (Il2CppObject *)StringLiteral_22265/*"mstShopGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    246,
    (Il2CppObject *)StringLiteral_21970/*"mstAuraEffect"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    247,
    (Il2CppObject *)StringLiteral_21971/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    248,
    (Il2CppObject *)StringLiteral_24845/*"userEventMissionFix"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    249,
    (Il2CppObject *)StringLiteral_22573/*"notEndEventMissionFix"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    250,
    (Il2CppObject *)StringLiteral_22041/*"mstEnemyMaster"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    251,
    (Il2CppObject *)StringLiteral_22042/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    252,
    (Il2CppObject *)StringLiteral_22332/*"mstSvtSkillRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    253,
    (Il2CppObject *)StringLiteral_22322/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    254,
    (Il2CppObject *)StringLiteral_22337/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    255,
    (Il2CppObject *)StringLiteral_22197/*"mstMapGimmickRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    256,
    (Il2CppObject *)StringLiteral_22024/*"mstCommandCode"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    257,
    (Il2CppObject *)StringLiteral_22300/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    258,
    (Il2CppObject *)StringLiteral_24821/*"userCommandCode"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    259,
    (Il2CppObject *)StringLiteral_24822/*"userCommandCodeCollection"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    260,
    (Il2CppObject *)StringLiteral_24897/*"userSvtCommandCode"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    261,
    (Il2CppObject *)StringLiteral_22026/*"mstCommandCodeSkill"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    262,
    (Il2CppObject *)StringLiteral_22027/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    263,
    (Il2CppObject *)StringLiteral_22025/*"mstCommandCodeComment"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    264,
    (Il2CppObject *)StringLiteral_22125/*"mstEventStatus"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    265,
    (Il2CppObject *)StringLiteral_22126/*"mstEventStatusQuest"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    266,
    (Il2CppObject *)StringLiteral_22031/*"mstCommonRestriction"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    267,
    (Il2CppObject *)StringLiteral_22102/*"mstEventPointBuff"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    268,
    (Il2CppObject *)StringLiteral_24856/*"userFollow"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    269,
    (Il2CppObject *)StringLiteral_22119/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    270,
    (Il2CppObject *)StringLiteral_22597/*"npcSvtEquip"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    271,
    (Il2CppObject *)StringLiteral_22061/*"mstEventCampaignRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    272,
    (Il2CppObject *)StringLiteral_22317/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    273,
    (Il2CppObject *)StringLiteral_22074/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    274,
    (Il2CppObject *)StringLiteral_22101/*"mstEventPointActivity"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    275,
    (Il2CppObject *)StringLiteral_22148/*"mstFuncCategory"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    276,
    (Il2CppObject *)StringLiteral_22233/*"mstQuestPickup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    277,
    (Il2CppObject *)StringLiteral_22138/*"mstEventUi"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    278,
    (Il2CppObject *)StringLiteral_22139/*"mstEventUiRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    279,
    (Il2CppObject *)StringLiteral_22140/*"mstEventUiValue"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    280,
    (Il2CppObject *)StringLiteral_22065/*"mstEventConquestReward"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    281,
    (Il2CppObject *)StringLiteral_22593/*"npcFollowerRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    282,
    (Il2CppObject *)StringLiteral_22053/*"mstEventBonusFilter"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    283,
    (Il2CppObject *)StringLiteral_22054/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    284,
    (Il2CppObject *)StringLiteral_22055/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    285,
    (Il2CppObject *)StringLiteral_24864/*"userGachaExtraCount"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    286,
    (Il2CppObject *)StringLiteral_22023/*"mstCommandCardRankParam"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    287,
    (Il2CppObject *)StringLiteral_24896/*"userSvtCommandCard"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    288,
    (Il2CppObject *)StringLiteral_22216/*"mstPrivilege"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    289,
    (Il2CppObject *)StringLiteral_24878/*"userPrivilege"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    290,
    (Il2CppObject *)StringLiteral_22222/*"mstQuestDateRange"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    291,
    (Il2CppObject *)StringLiteral_22105/*"mstEventPointUpper"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    292,
    (Il2CppObject *)StringLiteral_22106/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    293,
    (Il2CppObject *)StringLiteral_24883/*"userQuestRoute"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    294,
    (Il2CppObject *)StringLiteral_22056/*"mstEventBossStatusUi"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    295,
    (Il2CppObject *)StringLiteral_22030/*"mstCommonRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    296,
    (Il2CppObject *)StringLiteral_22246/*"mstQuestSpotRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    297,
    (Il2CppObject *)StringLiteral_22356/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    298,
    (Il2CppObject *)StringLiteral_22010/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    299,
    (Il2CppObject *)StringLiteral_22083/*"mstEventGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    300,
    (Il2CppObject *)StringLiteral_21966/*"mstAssetbundleKey"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    301,
    (Il2CppObject *)StringLiteral_24431/*"totalBoxGacha"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    302,
    (Il2CppObject *)StringLiteral_22336/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    303,
    (Il2CppObject *)StringLiteral_19348/*"eventSvtFatigue"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    304,
    (Il2CppObject *)StringLiteral_22117/*"mstEventRewardBg"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    305,
    (Il2CppObject *)StringLiteral_22078/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    306,
    (Il2CppObject *)StringLiteral_19335/*"eventBoostItemUsed"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    307,
    (Il2CppObject *)StringLiteral_22286/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    308,
    (Il2CppObject *)StringLiteral_22230/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    309,
    (Il2CppObject *)StringLiteral_22354/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    310,
    (Il2CppObject *)StringLiteral_22285/*"mstStageRemap"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    311,
    (Il2CppObject *)StringLiteral_18270/*"combineExp"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    312,
    (Il2CppObject *)StringLiteral_22050/*"mstEventBoardGameCell"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    313,
    (Il2CppObject *)StringLiteral_22051/*"mstEventBoardGameToken"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    314,
    (Il2CppObject *)StringLiteral_22052/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    315,
    (Il2CppObject *)StringLiteral_24834/*"userEventBoardGameToken"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    316,
    (Il2CppObject *)StringLiteral_22291/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    317,
    (Il2CppObject *)StringLiteral_22212/*"mstOpeningMovie"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    318,
    (Il2CppObject *)StringLiteral_22315/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    319,
    (Il2CppObject *)StringLiteral_22971/*"pickupUserFollower"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    320,
    (Il2CppObject *)StringLiteral_22299/*"mstSvtCollection"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    321,
    (Il2CppObject *)StringLiteral_22156/*"mstGachaBehavior"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    322,
    (Il2CppObject *)StringLiteral_22109/*"mstEventQuestCooltime"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    323,
    (Il2CppObject *)StringLiteral_24847/*"userEventQuestCooltime"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    324,
    (Il2CppObject *)StringLiteral_21991/*"mstBoost"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    325,
    (Il2CppObject *)StringLiteral_22362/*"mstWarBoard"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    326,
    (Il2CppObject *)StringLiteral_22386/*"mstWarBoardSquare"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    327,
    (Il2CppObject *)StringLiteral_22385/*"mstWarBoardRoad"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    328,
    (Il2CppObject *)StringLiteral_22388/*"mstWarBoardStage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    329,
    (Il2CppObject *)StringLiteral_22363/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    330,
    (Il2CppObject *)StringLiteral_22365/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    331,
    (Il2CppObject *)StringLiteral_22396/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    332,
    (Il2CppObject *)StringLiteral_22391/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    333,
    (Il2CppObject *)StringLiteral_22392/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    334,
    (Il2CppObject *)StringLiteral_22395/*"mstWarBoardStageWall"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    335,
    (Il2CppObject *)StringLiteral_22368/*"mstWarBoardAi"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    336,
    (Il2CppObject *)StringLiteral_22381/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    337,
    (Il2CppObject *)StringLiteral_22382/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    338,
    (Il2CppObject *)StringLiteral_22375/*"mstWarBoardItem"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    339,
    (Il2CppObject *)StringLiteral_22397/*"mstWarBoardTreasure"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    340,
    (Il2CppObject *)StringLiteral_22380/*"mstWarBoardQuest"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    341,
    (Il2CppObject *)StringLiteral_25067/*"warBoardData"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    342,
    (Il2CppObject *)StringLiteral_22374/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    343,
    (Il2CppObject *)StringLiteral_22366/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    344,
    (Il2CppObject *)StringLiteral_22364/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    345,
    (Il2CppObject *)StringLiteral_22384/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    346,
    (Il2CppObject *)StringLiteral_22394/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    347,
    (Il2CppObject *)StringLiteral_22096/*"mstEventPanelMap"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    348,
    (Il2CppObject *)StringLiteral_22097/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    349,
    (Il2CppObject *)StringLiteral_22099/*"mstEventPanelSpot"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    350,
    (Il2CppObject *)StringLiteral_22098/*"mstEventPanelScan"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    351,
    (Il2CppObject *)StringLiteral_22070/*"mstEventDigging"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    352,
    (Il2CppObject *)StringLiteral_22072/*"mstEventDiggingReward"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    353,
    (Il2CppObject *)StringLiteral_22071/*"mstEventDiggingBlock"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    354,
    (Il2CppObject *)StringLiteral_24838/*"userEventDigging"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    355,
    (Il2CppObject *)StringLiteral_22029/*"mstCommonConsume"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    356,
    (Il2CppObject *)StringLiteral_24842/*"userEventMap"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    357,
    (Il2CppObject *)StringLiteral_24851/*"userEventSpot"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    358,
    (Il2CppObject *)StringLiteral_22398/*"mstWarGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    359,
    (Il2CppObject *)StringLiteral_22314/*"mstSvtLimitImage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    360,
    (Il2CppObject *)StringLiteral_19901/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    361,
    (Il2CppObject *)StringLiteral_22240/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    362,
    (Il2CppObject *)StringLiteral_21967/*"mstAssist"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    363,
    (Il2CppObject *)StringLiteral_22370/*"mstWarBoardEffect"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    364,
    (Il2CppObject *)StringLiteral_22378/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    365,
    (Il2CppObject *)StringLiteral_17252/*"beforeBirthDay"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    366,
    (Il2CppObject *)StringLiteral_22187/*"mstLoginQuest"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    367,
    (Il2CppObject *)StringLiteral_22063/*"mstEventCombineCostume"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    368,
    (Il2CppObject *)StringLiteral_22393/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    369,
    (Il2CppObject *)StringLiteral_22335/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    370,
    (Il2CppObject *)StringLiteral_22270/*"mstSkillAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    371,
    (Il2CppObject *)StringLiteral_22316/*"mstSvtLvDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    372,
    (Il2CppObject *)StringLiteral_22154/*"mstGachaAppend"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    373,
    (Il2CppObject *)StringLiteral_24863/*"userGachaDrawLog"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    374,
    (Il2CppObject *)StringLiteral_22292/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    375,
    (Il2CppObject *)StringLiteral_24892/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    376,
    (Il2CppObject *)StringLiteral_24893/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    377,
    (Il2CppObject *)StringLiteral_22293/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    378,
    (Il2CppObject *)StringLiteral_22013/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    379,
    (Il2CppObject *)StringLiteral_22298/*"mstSvtCoin"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    380,
    (Il2CppObject *)StringLiteral_24894/*"userSvtCoin"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    381,
    (Il2CppObject *)StringLiteral_22290/*"mstSvtAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    382,
    (Il2CppObject *)StringLiteral_22345/*"mstTreasureBox"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    383,
    (Il2CppObject *)StringLiteral_22346/*"mstTreasureBoxGift"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    384,
    (Il2CppObject *)StringLiteral_22347/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    385,
    (Il2CppObject *)StringLiteral_24839/*"userEventExpedition"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    386,
    (Il2CppObject *)StringLiteral_22075/*"mstEventExpedition"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    387,
    (Il2CppObject *)StringLiteral_22076/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    388,
    (Il2CppObject *)StringLiteral_22114/*"mstEventRecipe"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    389,
    (Il2CppObject *)StringLiteral_22115/*"mstEventRecipeGift"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    390,
    (Il2CppObject *)StringLiteral_24840/*"userEventFortification"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    391,
    (Il2CppObject *)StringLiteral_22080/*"mstEventFortification"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    392,
    (Il2CppObject *)StringLiteral_22081/*"mstEventFortificationDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    393,
    (Il2CppObject *)StringLiteral_22082/*"mstEventFortificationSvt"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    394,
    (Il2CppObject *)StringLiteral_24906/*"userSvtVoicePlayed"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    395,
    (Il2CppObject *)StringLiteral_24753/*"updateProfileDialogInfo"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    396,
    (Il2CppObject *)StringLiteral_22318/*"mstSvtMaterialTd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    397,
    (Il2CppObject *)StringLiteral_21976/*"mstBattleMasterImage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    398,
    (Il2CppObject *)StringLiteral_24859/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    399,
    (Il2CppObject *)StringLiteral_24850/*"userEventRandomMission"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    400,
    (Il2CppObject *)StringLiteral_22107/*"mstEventProgressValue"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    401,
    (Il2CppObject *)StringLiteral_22319/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    402,
    (Il2CppObject *)StringLiteral_22113/*"mstEventRandomMission"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    403,
    (Il2CppObject *)StringLiteral_24862/*"userGachaDrawHistory"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    404,
    (Il2CppObject *)StringLiteral_24820/*"userCoinRoom"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    405,
    (Il2CppObject *)StringLiteral_22057/*"mstEventBuddyPoint"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    406,
    (Il2CppObject *)StringLiteral_22130/*"mstEventSvtPointRank"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    407,
    (Il2CppObject *)StringLiteral_24853/*"userEventSvtPoint"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    408,
    (Il2CppObject *)StringLiteral_22143/*"mstFieldMotion"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    409,
    (Il2CppObject *)StringLiteral_24829/*"userDeleteReservation"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    410,
    (Il2CppObject *)StringLiteral_22329/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    411,
    (Il2CppObject *)StringLiteral_22044/*"mstEquipAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    412,
    (Il2CppObject *)StringLiteral_22237/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    413,
    (Il2CppObject *)StringLiteral_24833/*"userEventAlloutBattle"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    414,
    (Il2CppObject *)StringLiteral_22243/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    415,
    (Il2CppObject *)StringLiteral_21977/*"mstBattleMessage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    416,
    (Il2CppObject *)StringLiteral_21978/*"mstBattleMessageGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    417,
    (Il2CppObject *)StringLiteral_24874/*"userNpcSvtRecord"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    418,
    (Il2CppObject *)StringLiteral_21998/*"mstBuffTypeDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    419,
    (Il2CppObject *)StringLiteral_22376/*"mstWarBoardMessage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    420,
    (Il2CppObject *)StringLiteral_22379/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    421,
    (Il2CppObject *)StringLiteral_22377/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    422,
    (Il2CppObject *)StringLiteral_22401/*"mstWarQuestSelection"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    423,
    (Il2CppObject *)StringLiteral_22390/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    424,
    (Il2CppObject *)StringLiteral_22244/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    425,
    (Il2CppObject *)StringLiteral_22242/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    426,
    (Il2CppObject *)StringLiteral_21961/*"mstAdCheckPoint"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    427,
    (Il2CppObject *)StringLiteral_22175/*"mstGiftDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    428,
    (Il2CppObject *)StringLiteral_22016/*"mstCombineLimitGift"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    429,
    (Il2CppObject *)StringLiteral_22066/*"mstEventCooltimeReward"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    430,
    (Il2CppObject *)StringLiteral_24835/*"userEventCooltimeReward"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    431,
    (Il2CppObject *)StringLiteral_22004/*"mstClassBoardClass"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    432,
    (Il2CppObject *)StringLiteral_22003/*"mstClassBoardBase"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    433,
    (Il2CppObject *)StringLiteral_22006/*"mstClassBoardLine"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    434,
    (Il2CppObject *)StringLiteral_22007/*"mstClassBoardLock"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    435,
    (Il2CppObject *)StringLiteral_22008/*"mstClassBoardSquare"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    436,
    (Il2CppObject *)StringLiteral_22005/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    437,
    (Il2CppObject *)StringLiteral_24818/*"userClassBoardSquare"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    438,
    (Il2CppObject *)StringLiteral_22296/*"mstSvtCardAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    439,
    (Il2CppObject *)StringLiteral_22198/*"mstMapLayer"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    440,
    (Il2CppObject *)StringLiteral_22279/*"mstSpotLayer"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    441,
    (Il2CppObject *)StringLiteral_22193/*"mstMapGimmickLayer"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    442,
    (Il2CppObject *)StringLiteral_22067/*"mstEventDataLostBattle"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    443,
    (Il2CppObject *)StringLiteral_22068/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    444,
    (Il2CppObject *)StringLiteral_24836/*"userEventDataLost"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    445,
    (Il2CppObject *)StringLiteral_22225/*"mstQuestHint"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    446,
    (Il2CppObject *)StringLiteral_22151/*"mstFuncTypeDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    447,
    (Il2CppObject *)StringLiteral_21997/*"mstBuffConvert"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    448,
    (Il2CppObject *)StringLiteral_22272/*"mstSkillGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    449,
    (Il2CppObject *)StringLiteral_22273/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    450,
    (Il2CppObject *)StringLiteral_22274/*"mstSkillIndividuality"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    451,
    (Il2CppObject *)StringLiteral_22253/*"mstRestrictionBase"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    452,
    (Il2CppObject *)StringLiteral_22255/*"mstRestrictionSlot"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    453,
    (Il2CppObject *)StringLiteral_22256/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    454,
    (Il2CppObject *)StringLiteral_22254/*"mstRestrictionMessage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    455,
    (Il2CppObject *)StringLiteral_22257/*"mstRestrictionWhole"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    456,
    (Il2CppObject *)StringLiteral_22149/*"mstFuncDisp"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    457,
    (Il2CppObject *)StringLiteral_22064/*"mstEventCommandAssist"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    458,
    (Il2CppObject *)StringLiteral_22094/*"mstEventMissionGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    459,
    (Il2CppObject *)StringLiteral_22017/*"mstCombineLimitRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    460,
    (Il2CppObject *)StringLiteral_22351/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    461,
    (Il2CppObject *)StringLiteral_22179/*"mstHeelPortrait"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    462,
    (Il2CppObject *)StringLiteral_24868/*"userHeelPortrait"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    463,
    (Il2CppObject *)StringLiteral_22599/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    464,
    (Il2CppObject *)StringLiteral_22160/*"mstGachaExtraGift"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    465,
    (Il2CppObject *)StringLiteral_22095/*"mstEventMural"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    466,
    (Il2CppObject *)StringLiteral_25008/*"viewWaveEnemy"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    467,
    (Il2CppObject *)StringLiteral_21988/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    468,
    (Il2CppObject *)StringLiteral_21984/*"mstBlankEarthGimmick"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    469,
    (Il2CppObject *)StringLiteral_22342/*"mstTerminalOverwrite"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    470,
    (Il2CppObject *)StringLiteral_19514/*"exchangeSvt"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    471,
    (Il2CppObject *)StringLiteral_22369/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    472,
    (Il2CppObject *)StringLiteral_22371/*"mstWarBoardEvent"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    473,
    (Il2CppObject *)StringLiteral_22372/*"mstWarBoardEventScript"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    474,
    (Il2CppObject *)StringLiteral_22389/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    475,
    (Il2CppObject *)StringLiteral_22387/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    476,
    (Il2CppObject *)StringLiteral_22367/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    477,
    (Il2CppObject *)StringLiteral_22383/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    478,
    (Il2CppObject *)StringLiteral_22373/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    479,
    (Il2CppObject *)StringLiteral_22325/*"mstSvtProfilePush"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    480,
    (Il2CppObject *)StringLiteral_22195/*"mstMapGimmickPath"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    481,
    (Il2CppObject *)StringLiteral_22196/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    482,
    (Il2CppObject *)StringLiteral_22320/*"mstSvtOverwrite"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    483,
    (Il2CppObject *)StringLiteral_22183/*"mstIndividualityPolicy"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    484,
    (Il2CppObject *)StringLiteral_22182/*"mstIndividualityPersonality"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    485,
    (Il2CppObject *)StringLiteral_21968/*"mstAttri"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    486,
    (Il2CppObject *)StringLiteral_22339/*"mstSvtVoicePattern"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    487,
    (Il2CppObject *)StringLiteral_24867/*"userGameCommon"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    488,
    (Il2CppObject *)StringLiteral_22323/*"mstSvtPhoto"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    489,
    (Il2CppObject *)StringLiteral_22203/*"mstMasterPhoto"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    490,
    (Il2CppObject *)StringLiteral_22215/*"mstPhotoFrame"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    491,
    (Il2CppObject *)StringLiteral_22400/*"mstWarMessage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    492,
    (Il2CppObject *)StringLiteral_22219/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    493,
    (Il2CppObject *)StringLiteral_22142/*"mstExcludeMotionCond"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    494,
    (Il2CppObject *)StringLiteral_24871/*"userInterruptionQuest"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    495,
    (Il2CppObject *)StringLiteral_22333/*"mstSvtTransform"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    496,
    (Il2CppObject *)StringLiteral_22199/*"mstMapUpdateSchedule"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    497,
    (Il2CppObject *)StringLiteral_22232/*"mstQuestPhasePresent"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    498,
    (Il2CppObject *)StringLiteral_24814/*"userAccountLinkage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    499,
    (Il2CppObject *)StringLiteral_22207/*"mstMissionNaviTransition"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    500,
    (Il2CppObject *)StringLiteral_22133/*"mstEventTradeGoods"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    501,
    (Il2CppObject *)StringLiteral_22134/*"mstEventTradePickup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    502,
    (Il2CppObject *)StringLiteral_22135/*"mstEventTradeStore"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    503,
    (Il2CppObject *)StringLiteral_24854/*"userEventTrade"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    504,
    (Il2CppObject *)StringLiteral_22206/*"mstMissionNaviQuest"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    505,
    (Il2CppObject *)StringLiteral_22938/*"paymentHistory"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    506,
    (Il2CppObject *)StringLiteral_24855/*"userExternalPaymentStone"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    507,
    (Il2CppObject *)StringLiteral_22231/*"mstQuestPhaseIndividuality"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    508,
    (Il2CppObject *)StringLiteral_25005/*"viewGachaFeaturedSvt"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    514,
    (Il2CppObject *)StringLiteral_22040/*"mstEffectMovie"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    509,
    (Il2CppObject *)StringLiteral_22164/*"mstGachaPickupCollateral"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    510,
    (Il2CppObject *)StringLiteral_22165/*"mstGachaPickupCollateralGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    511,
    (Il2CppObject *)StringLiteral_21979/*"mstBattlePoint"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    512,
    (Il2CppObject *)StringLiteral_21980/*"mstBattlePointPhase"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    513,
    (Il2CppObject *)StringLiteral_22294/*"mstSvtBattlePoint"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    515,
    (Il2CppObject *)StringLiteral_22214/*"mstPaymentLimit"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    516,
    (Il2CppObject *)StringLiteral_24875/*"userPaymentLimit"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    517,
    (Il2CppObject *)StringLiteral_22258/*"mstRoadmap"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    518,
    (Il2CppObject *)StringLiteral_24885/*"userRecommendSupport"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    520,
    (Il2CppObject *)StringLiteral_22249/*"mstRecommendAdviceMessage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    519,
    (Il2CppObject *)StringLiteral_22250/*"mstRecommendSupportQuest"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    521,
    (Il2CppObject *)StringLiteral_24884/*"userRecommendFollower"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    522,
    (Il2CppObject *)StringLiteral_22185/*"mstItemDropEfficiency"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    523,
    (Il2CppObject *)StringLiteral_21985/*"mstBlankEarthGimmickAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    524,
    (Il2CppObject *)StringLiteral_22402/*"mstWarRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    525,
    (Il2CppObject *)StringLiteral_22260/*"mstSelectBonusBase"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    526,
    (Il2CppObject *)StringLiteral_22259/*"mstSelectBonus"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    527,
    (Il2CppObject *)StringLiteral_22210/*"mstMyroomSvtSpecialImage"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    528,
    (Il2CppObject *)StringLiteral_22267/*"mstShopReset"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    529,
    (Il2CppObject *)StringLiteral_22596/*"npcSvtDisplayTypeDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    530,
    (Il2CppObject *)StringLiteral_22146/*"mstFriendshipSvt"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    531,
    (Il2CppObject *)StringLiteral_19515/*"exchangeSvtCoinGivenNum"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    532,
    (Il2CppObject *)StringLiteral_22001/*"mstChaldeaGatePickup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    533,
    (Il2CppObject *)StringLiteral_22399/*"mstWarGroupIgnore"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    534,
    (Il2CppObject *)StringLiteral_22181/*"mstImagePartsGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    535,
    (Il2CppObject *)StringLiteral_24870/*"userImagePartsGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    536,
    (Il2CppObject *)StringLiteral_22205/*"mstMissionItemDisplay"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    537,
    (Il2CppObject *)StringLiteral_22247/*"mstQuestUseItemGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    538,
    (Il2CppObject *)StringLiteral_22248/*"mstQuestUseItemPickup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    539,
    (Il2CppObject *)StringLiteral_24841/*"userEventItemLinkSvt"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    540,
    (Il2CppObject *)StringLiteral_22226/*"mstQuestHintOverwrite"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    541,
    (Il2CppObject *)StringLiteral_23254/*"reachedWaveInfo"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    542,
    (Il2CppObject *)StringLiteral_22170/*"mstGallery"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    543,
    (Il2CppObject *)StringLiteral_22172/*"mstGalleryResource"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    544,
    (Il2CppObject *)StringLiteral_22331/*"mstSvtSkillAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    545,
    (Il2CppObject *)StringLiteral_22171/*"mstGalleryFolderRelease"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    546,
    (Il2CppObject *)StringLiteral_24900/*"userSvtFirstGetTime"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    547,
    (Il2CppObject *)StringLiteral_22223/*"mstQuestExtension"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    548,
    (Il2CppObject *)StringLiteral_24901/*"userSvtGrand"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    549,
    (Il2CppObject *)StringLiteral_22176/*"mstGrandGraph"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    550,
    (Il2CppObject *)StringLiteral_22177/*"mstGrandGraphDetail"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    551,
    (Il2CppObject *)StringLiteral_24819/*"userClassStatistics"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    552,
    (Il2CppObject *)StringLiteral_22073/*"mstEventEquipSkillParts"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    553,
    (Il2CppObject *)StringLiteral_22200/*"mstMasterIndividualitySelect"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    554,
    (Il2CppObject *)StringLiteral_22209/*"mstMyroomAddBgDiff"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    555,
    (Il2CppObject *)StringLiteral_21981/*"mstBattleScript"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    556,
    (Il2CppObject *)StringLiteral_22038/*"mstDropAdd"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    557,
    (Il2CppObject *)StringLiteral_24815/*"userBgImagePartsGroup"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  DataNameKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_DataNameKind_Kind__string__o *)v1;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)DataNameKind_TypeInfo->static_fields, (int32_t)v1, v4, v5, v6, v7, v8, v9);
}


void DataNameKind___ctor(DataNameKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *DataNameKind__GetName(int32_t kind, const MethodInfo *method)
{
  DataNameKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4D2F8AC & 1) == 0 )
  {
    sub_1C93AD4(&DataNameKind_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_4D2F8AC = 1;
  }
  v3 = DataNameKind_TypeInfo;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
    v3 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1C93D2C(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_34F5BF4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}