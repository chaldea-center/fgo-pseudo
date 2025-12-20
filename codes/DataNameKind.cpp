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

  if ( (byte_4D2B6FD & 1) == 0 )
  {
    sub_1C94098(&DataNameKind_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_1C94098(&StringLiteral_22074/*"mstEventTradeGoods"*/);
    sub_1C94098(&StringLiteral_24797/*"userGameCommon"*/);
    sub_1C94098(&StringLiteral_22034/*"mstEventMissionConditionDetail"*/);
    sub_1C94098(&StringLiteral_22287/*"mstTreasureBoxGift"*/);
    sub_1C94098(&StringLiteral_21966/*"mstCommandCodeComment"*/);
    sub_1C94098(&StringLiteral_22030/*"mstEventMissionAction"*/);
    sub_1C94098(&StringLiteral_24763/*"userEventAlloutBattle"*/);
    sub_1C94098(&StringLiteral_23194/*"reachedWaveInfo"*/);
    sub_1C94098(&StringLiteral_21995/*"mstEventBonusFilterGroupInfo"*/);
    sub_1C94098(&StringLiteral_24814/*"userRecommendFollower"*/);
    sub_1C94098(&StringLiteral_22178/*"mstQuestReleaseOverwrite"*/);
    sub_1C94098(&StringLiteral_22138/*"mstMapGimmickRelease"*/);
    sub_1C94098(&StringLiteral_22101/*"mstGachaExtraGift"*/);
    sub_1C94098(&StringLiteral_22538/*"npcSvtFollowerIndividuality"*/);
    sub_1C94098(&StringLiteral_21997/*"mstEventBossStatusUi"*/);
    sub_1C94098(&StringLiteral_24823/*"userSvtAppendPassiveSkillLv"*/);
    sub_1C94098(&StringLiteral_21950/*"mstClassRelation"*/);
    sub_1C94098(&StringLiteral_21904/*"mstAiAct"*/);
    sub_1C94098(&StringLiteral_22232/*"mstSvtAnimationOverwrite"*/);
    sub_1C94098(&StringLiteral_22180/*"mstQuestRestriction"*/);
    sub_1C94098(&StringLiteral_21977/*"mstCv"*/);
    sub_1C94098(&StringLiteral_24768/*"userEventDigging"*/);
    sub_1C94098(&StringLiteral_24246/*"tblUserGame"*/);
    sub_1C94098(&StringLiteral_22008/*"mstEventDataLostBattle"*/);
    sub_1C94098(&StringLiteral_21998/*"mstEventBuddyPoint"*/);
    sub_1C94098(&StringLiteral_21924/*"mstBgmRelease"*/);
    sub_1C94098(&StringLiteral_22259/*"mstSvtMaterialTd"*/);
    sub_1C94098(&StringLiteral_21971/*"mstCommonRelease"*/);
    sub_1C94098(&StringLiteral_22086/*"mstFriendship"*/);
    sub_1C94098(&StringLiteral_24748/*"userClassBoardSquare"*/);
    sub_1C94098(&StringLiteral_21975/*"mstConstantLong"*/);
    sub_1C94098(&StringLiteral_21949/*"mstClassBoardSquare"*/);
    sub_1C94098(&StringLiteral_24827/*"userSvtCommandCode"*/);
    sub_1C94098(&StringLiteral_22161/*"mstQuestBehavior"*/);
    sub_1C94098(&StringLiteral_22126/*"mstItemDropEfficiency"*/);
    sub_1C94098(&StringLiteral_22258/*"mstSvtMaterialFolder"*/);
    sub_1C94098(&StringLiteral_22334/*"mstWarBoardStagePieceDetail"*/);
    sub_1C94098(&StringLiteral_22075/*"mstEventTradePickup"*/);
    sub_1C94098(&StringLiteral_21996/*"mstEventBonusFilterGroupMember"*/);
    sub_1C94098(&StringLiteral_22166/*"mstQuestHint"*/);
    sub_1C94098(&StringLiteral_21969/*"mstCommandSpell"*/);
    sub_1C94098(&StringLiteral_21902/*"mstAdCheckPoint"*/);
    sub_1C94098(&StringLiteral_22157/*"mstPrivilege"*/);
    sub_1C94098(&StringLiteral_22167/*"mstQuestHintOverwrite"*/);
    sub_1C94098(&StringLiteral_21931/*"mstBoardMessageRelease"*/);
    sub_1C94098(&StringLiteral_22107/*"mstGachaRelease"*/);
    sub_1C94098(&StringLiteral_24759/*"userDeleteReservation"*/);
    sub_1C94098(&StringLiteral_22286/*"mstTreasureBox"*/);
    sub_1C94098(&StringLiteral_24800/*"userImagePartsGroup"*/);
    sub_1C94098(&StringLiteral_21986/*"mstEquipExp"*/);
    sub_1C94098(&StringLiteral_21993/*"mstEventBoardGameTokenReward"*/);
    sub_1C94098(&StringLiteral_22239/*"mstSvtCoin"*/);
    sub_1C94098(&StringLiteral_22270/*"mstSvtScriptMultiple"*/);
    sub_1C94098(&StringLiteral_22145/*"mstMaterialFolder"*/);
    sub_1C94098(&StringLiteral_22004/*"mstEventCombineCostume"*/);
    sub_1C94098(&StringLiteral_22163/*"mstQuestDateRange"*/);
    sub_1C94098(&StringLiteral_22330/*"mstWarBoardStageBoss"*/);
    sub_1C94098(&StringLiteral_21938/*"mstBuffConvert"*/);
    sub_1C94098(&StringLiteral_22189/*"mstQuestUseItemPickup"*/);
    sub_1C94098(&StringLiteral_21911/*"mstAuraEffect"*/);
    sub_1C94098(&StringLiteral_22052/*"mstEventRaceResult"*/);
    sub_1C94098(&StringLiteral_22202/*"mstSetItem"*/);
    sub_1C94098(&StringLiteral_22535/*"npcSvtDisplayTypeDetail"*/);
    sub_1C94098(&StringLiteral_22224/*"mstStaffPhotoCostume"*/);
    sub_1C94098(&StringLiteral_22112/*"mstGalleryFolderRelease"*/);
    sub_1C94098(&StringLiteral_22192/*"mstRecover"*/);
    sub_1C94098(&StringLiteral_22067/*"mstEventStatusQuest"*/);
    sub_1C94098(&StringLiteral_24765/*"userEventCooltimeReward"*/);
    sub_1C94098(&StringLiteral_22155/*"mstPaymentLimit"*/);
    sub_1C94098(&StringLiteral_22308/*"mstWarBoardActionTrendGroup"*/);
    sub_1C94098(&StringLiteral_24813/*"userQuestRoute"*/);
    sub_1C94098(&StringLiteral_22216/*"mstSkillLv"*/);
    sub_1C94098(&StringLiteral_22251/*"mstSvtGroup"*/);
    sub_1C94098(&StringLiteral_22295/*"mstVoiceClosedMessage"*/);
    sub_1C94098(&StringLiteral_22017/*"mstEventExpeditionPiece"*/);
    sub_1C94098(&StringLiteral_22160/*"mstQuestAutoOrganizationAdjust"*/);
    sub_1C94098(&StringLiteral_22260/*"mstSvtMultiPortrait"*/);
    sub_1C94098(&StringLiteral_22020/*"mstEventFilter"*/);
    sub_1C94098(&StringLiteral_22147/*"mstMissionNaviQuest"*/);
    sub_1C94098(&StringLiteral_24815/*"userRecommendSupport"*/);
    sub_1C94098(&StringLiteral_24802/*"userItem"*/);
    sub_1C94098(&StringLiteral_22016/*"mstEventExpedition"*/);
    sub_1C94098(&StringLiteral_22051/*"mstEventRace"*/);
    sub_1C94098(&StringLiteral_22181/*"mstQuestRestrictionInfo"*/);
    sub_1C94098(&StringLiteral_22179/*"mstQuestReset"*/);
    sub_1C94098(&StringLiteral_24769/*"userEventExpedition"*/);
    sub_1C94098(&StringLiteral_22023/*"mstEventFortificationSvt"*/);
    sub_1C94098(&StringLiteral_22335/*"mstWarBoardStageReinforcements"*/);
    sub_1C94098(&StringLiteral_21944/*"mstClassBoardBase"*/);
    sub_1C94098(&StringLiteral_21982/*"mstEnemyMaster"*/);
    sub_1C94098(&StringLiteral_21912/*"mstAuraEffectPosOverwrite"*/);
    sub_1C94098(&StringLiteral_22196/*"mstRestrictionSlot"*/);
    sub_1C94098(&StringLiteral_22109/*"mstGachaSub"*/);
    sub_1C94098(&StringLiteral_22071/*"mstEventSvtPointRank"*/);
    sub_1C94098(&StringLiteral_22044/*"mstEventPointGroup"*/);
    sub_1C94098(&StringLiteral_21990/*"mstEventAdd"*/);
    sub_1C94098(&StringLiteral_21984/*"mstEquip"*/);
    sub_1C94098(&StringLiteral_22056/*"mstEventRecipeGift"*/);
    sub_1C94098(&StringLiteral_22282/*"mstTelop"*/);
    sub_1C94098(&StringLiteral_24825/*"userSvtCollection"*/);
    sub_1C94098(&StringLiteral_24775/*"userEventMissionFix"*/);
    sub_1C94098(&StringLiteral_22194/*"mstRestrictionBase"*/);
    sub_1C94098(&StringLiteral_22284/*"mstTips"*/);
    sub_1C94098(&StringLiteral_22223/*"mstStaffPhoto"*/);
    sub_1C94098(&StringLiteral_21913/*"mstBankShop"*/);
    sub_1C94098(&StringLiteral_22082/*"mstEventVoicePlay"*/);
    sub_1C94098(&StringLiteral_22188/*"mstQuestUseItemGroup"*/);
    sub_1C94098(&StringLiteral_22022/*"mstEventFortificationDetail"*/);
    sub_1C94098(&StringLiteral_24782/*"userEventSuperBoss"*/);
    sub_1C94098(&StringLiteral_22021/*"mstEventFortification"*/);
    sub_1C94098(&StringLiteral_22069/*"mstEventSvt"*/);
    sub_1C94098(&StringLiteral_22299/*"mstVoicePlayGroup"*/);
    sub_1C94098(&StringLiteral_24767/*"userEventDeck"*/);
    sub_1C94098(&StringLiteral_22218/*"mstSpotAdd"*/);
    sub_1C94098(&StringLiteral_21962/*"mstCombineSkill"*/);
    sub_1C94098(&StringLiteral_22327/*"mstWarBoardSquare"*/);
    sub_1C94098(&StringLiteral_21939/*"mstBuffTypeDetail"*/);
    sub_1C94098(&StringLiteral_22305/*"mstWarBoardActionPointClass"*/);
    sub_1C94098(&StringLiteral_22200/*"mstSelectBonus"*/);
    sub_1C94098(&StringLiteral_22274/*"mstSvtTransform"*/);
    sub_1C94098(&StringLiteral_24806/*"userPresentBox"*/);
    sub_1C94098(&StringLiteral_24783/*"userEventSvtPoint"*/);
    sub_1C94098(&StringLiteral_24368/*"totalEventPoint"*/);
    sub_1C94098(&StringLiteral_21964/*"mstCommandCardRankParam"*/);
    sub_1C94098(&StringLiteral_22310/*"mstWarBoardCommonRelease"*/);
    sub_1C94098(&StringLiteral_22230/*"mstSvt"*/);
    sub_1C94098(&StringLiteral_24816/*"userShop"*/);
    sub_1C94098(&StringLiteral_21991/*"mstEventBoardGameCell"*/);
    sub_1C94098(&StringLiteral_22050/*"mstEventQuestCooltime"*/);
    sub_1C94098(&StringLiteral_22092/*"mstFuncTypeDetail"*/);
    sub_1C94098(&StringLiteral_22227/*"mstStatusEffectPosOverwrite"*/);
    sub_1C94098(&StringLiteral_19286/*"eventBoostItemUsed"*/);
    sub_1C94098(&StringLiteral_22205/*"mstShopDetail"*/);
    sub_1C94098(&StringLiteral_22124/*"mstIndividualityPolicy"*/);
    sub_1C94098(&StringLiteral_22130/*"mstMapButton"*/);
    sub_1C94098(&StringLiteral_22337/*"mstWarBoardTacticalTrend"*/);
    sub_1C94098(&StringLiteral_22229/*"mstSubEquip"*/);
    sub_1C94098(&StringLiteral_22221/*"mstSpotPath"*/);
    sub_1C94098(&StringLiteral_22199/*"mstRoadmap"*/);
    sub_1C94098(&StringLiteral_21959/*"mstCombineMaterial"*/);
    sub_1C94098(&StringLiteral_21958/*"mstCombineLimitRelease"*/);
    sub_1C94098(&StringLiteral_22291/*"mstTreasureDeviceLv"*/);
    sub_1C94098(&StringLiteral_22072/*"mstEventTower"*/);
    sub_1C94098(&StringLiteral_22210/*"mstSkill"*/);
    sub_1C94098(&StringLiteral_24801/*"userInterruptionQuest"*/);
    sub_1C94098(&StringLiteral_22262/*"mstSvtPassiveSkill"*/);
    sub_1C94098(&StringLiteral_22276/*"mstSvtTreasureDeviceAdd"*/);
    sub_1C94098(&StringLiteral_21928/*"mstBlankEarthSpotAdd"*/);
    sub_1C94098(&StringLiteral_24810/*"userQuest"*/);
    sub_1C94098(&StringLiteral_22033/*"mstEventMissionCondition"*/);
    sub_1C94098(&StringLiteral_22304/*"mstWarBoardActionPoint"*/);
    sub_1C94098(&StringLiteral_24785/*"userExternalPaymentStone"*/);
    sub_1C94098(&StringLiteral_21952/*"mstClosedMessage"*/);
    sub_1C94098(&StringLiteral_22059/*"mstEventRewardExtra"*/);
    sub_1C94098(&StringLiteral_22042/*"mstEventPointActivity"*/);
    sub_1C94098(&StringLiteral_22049/*"mstEventQuest"*/);
    sub_1C94098(&StringLiteral_21919/*"mstBattleMessageGroup"*/);
    sub_1C94098(&StringLiteral_24937/*"viewQuestInfo"*/);
    sub_1C94098(&StringLiteral_22266/*"mstSvtProfilePush"*/);
    sub_1C94098(&StringLiteral_22290/*"mstTreasureDeviceDetail"*/);
    sub_1C94098(&StringLiteral_24746/*"userBlacklist"*/);
    sub_1C94098(&StringLiteral_22015/*"mstEventEquipSkillRelease"*/);
    sub_1C94098(&StringLiteral_24750/*"userCoinRoom"*/);
    sub_1C94098(&StringLiteral_21976/*"mstConstantStr"*/);
    sub_1C94098(&StringLiteral_22014/*"mstEventEquipSkillParts"*/);
    sub_1C94098(&StringLiteral_22111/*"mstGallery"*/);
    sub_1C94098(&StringLiteral_24831/*"userSvtGrand"*/);
    sub_1C94098(&StringLiteral_22228/*"mstStoneShop"*/);
    sub_1C94098(&StringLiteral_22140/*"mstMapUpdateSchedule"*/);
    sub_1C94098(&StringLiteral_22285/*"mstTotalLogin"*/);
    sub_1C94098(&StringLiteral_22153/*"mstOpeningMovie"*/);
    sub_1C94098(&StringLiteral_21974/*"mstConstant"*/);
    sub_1C94098(&StringLiteral_22187/*"mstQuestSpotRelease"*/);
    sub_1C94098(&StringLiteral_21967/*"mstCommandCodeSkill"*/);
    sub_1C94098(&StringLiteral_22158/*"mstQuest"*/);
    sub_1C94098(&StringLiteral_22280/*"mstSvtVoicePattern"*/);
    sub_1C94098(&StringLiteral_22078/*"mstEventTutorialCond"*/);
    sub_1C94098(&StringLiteral_21926/*"mstBlankEarthGimmickAdd"*/);
    sub_1C94098(&StringLiteral_22303/*"mstWarBoard"*/);
    sub_1C94098(&StringLiteral_22053/*"mstEventRaid"*/);
    sub_1C94098(&StringLiteral_21923/*"mstBgm"*/);
    sub_1C94098(&StringLiteral_22065/*"mstEventScriptRelease"*/);
    sub_1C94098(&StringLiteral_24809/*"userProfile"*/);
    sub_1C94098(&StringLiteral_22032/*"mstEventMissionAdd"*/);
    sub_1C94098(&StringLiteral_22300/*"mstVoiceRelease"*/);
    sub_1C94098(&StringLiteral_22176/*"mstQuestRandomGroup"*/);
    sub_1C94098(&StringLiteral_22148/*"mstMissionNaviTransition"*/);
    sub_1C94098(&StringLiteral_22207/*"mstShopRelease"*/);
    sub_1C94098(&StringLiteral_24835/*"userSvtStorage"*/);
    sub_1C94098(&StringLiteral_22105/*"mstGachaPickupCollateral"*/);
    sub_1C94098(&StringLiteral_22190/*"mstRecommendAdviceMessage"*/);
    sub_1C94098(&StringLiteral_22191/*"mstRecommendSupportQuest"*/);
    sub_1C94098(&StringLiteral_24822/*"userSvtAppendPassiveSkill"*/);
    sub_1C94098(&StringLiteral_22231/*"mstSvtAdd"*/);
    sub_1C94098(&StringLiteral_22117/*"mstGrandGraph"*/);
    sub_1C94098(&StringLiteral_22341/*"mstWarMessage"*/);
    sub_1C94098(&StringLiteral_21929/*"mstBlankEarthSpotNavimenu"*/);
    sub_1C94098(&StringLiteral_21917/*"mstBattleMasterImage"*/);
    sub_1C94098(&StringLiteral_22212/*"mstSkillDetail"*/);
    sub_1C94098(&StringLiteral_22142/*"mstMasterMission"*/);
    sub_1C94098(&StringLiteral_22263/*"mstSvtPassiveSkillRelease"*/);
    sub_1C94098(&StringLiteral_22217/*"mstSpot"*/);
    sub_1C94098(&StringLiteral_22029/*"mstEventMission"*/);
    sub_1C94098(&StringLiteral_21961/*"mstCombineQpSvtEquip"*/);
    sub_1C94098(&StringLiteral_22041/*"mstEventPoint"*/);
    sub_1C94098(&StringLiteral_22063/*"mstEventRewardSet"*/);
    sub_1C94098(&StringLiteral_22038/*"mstEventPanelMapDetail"*/);
    sub_1C94098(&StringLiteral_22237/*"mstSvtCardAdd"*/);
    sub_1C94098(&StringLiteral_22129/*"mstMap"*/);
    sub_1C94098(&StringLiteral_22011/*"mstEventDigging"*/);
    sub_1C94098(&StringLiteral_24791/*"userGacha"*/);
    sub_1C94098(&StringLiteral_22177/*"mstQuestRelease"*/);
    sub_1C94098(&StringLiteral_22010/*"mstEventDetail"*/);
    sub_1C94098(&StringLiteral_22122/*"mstImagePartsGroup"*/);
    sub_1C94098(&StringLiteral_22139/*"mstMapLayer"*/);
    sub_1C94098(&StringLiteral_22314/*"mstWarBoardFutureActionTrend"*/);
    sub_1C94098(&StringLiteral_22215/*"mstSkillIndividuality"*/);
    sub_1C94098(&StringLiteral_21935/*"mstBoxGachaBaseDetail"*/);
    sub_1C94098(&StringLiteral_24245/*"tblFriend"*/);
    sub_1C94098(&StringLiteral_17208/*"beforeBirthDay"*/);
    sub_1C94098(&StringLiteral_22027/*"mstEventItemDisplayRelease"*/);
    sub_1C94098(&StringLiteral_22113/*"mstGalleryResource"*/);
    sub_1C94098(&StringLiteral_17132/*"battle"*/);
    sub_1C94098(&StringLiteral_22206/*"mstShopGroup"*/);
    sub_1C94098(&StringLiteral_21910/*"mstAttriRelation"*/);
    sub_1C94098(&StringLiteral_24751/*"userCommandCode"*/);
    sub_1C94098(&StringLiteral_22002/*"mstEventCampaignRelease"*/);
    sub_1C94098(&StringLiteral_22248/*"mstSvtFilter"*/);
    sub_1C94098(&StringLiteral_22175/*"mstQuestRacePoint"*/);
    sub_1C94098(&StringLiteral_22076/*"mstEventTradeStore"*/);
    sub_1C94098(&StringLiteral_22712/*"otherUserGame"*/);
    sub_1C94098(&StringLiteral_21921/*"mstBattlePointPhase"*/);
    sub_1C94098(&StringLiteral_22026/*"mstEventItemDisplayGroup"*/);
    sub_1C94098(&StringLiteral_21941/*"mstCard"*/);
    sub_1C94098(&StringLiteral_21925/*"mstBlankEarthGimmick"*/);
    sub_1C94098(&StringLiteral_21918/*"mstBattleMessage"*/);
    sub_1C94098(&StringLiteral_22197/*"mstRestrictionSlotDetail"*/);
    sub_1C94098(&StringLiteral_21914/*"mstBanner"*/);
    sub_1C94098(&StringLiteral_21983/*"mstEnemyMasterBattle"*/);
    sub_1C94098(&StringLiteral_22025/*"mstEventItemDisplay"*/);
    sub_1C94098(&StringLiteral_21940/*"mstCampaignInfo"*/);
    sub_1C94098(&StringLiteral_22275/*"mstSvtTreasureDevice"*/);
    sub_1C94098(&StringLiteral_22273/*"mstSvtSkillRelease"*/);
    sub_1C94098(&StringLiteral_22156/*"mstPhotoFrame"*/);
    sub_1C94098(&StringLiteral_21973/*"mstCompleteMission"*/);
    sub_1C94098(&StringLiteral_21956/*"mstCombineLimit"*/);
    sub_1C94098(&StringLiteral_22118/*"mstGrandGraphDetail"*/);
    sub_1C94098(&StringLiteral_21933/*"mstBoxGacha"*/);
    sub_1C94098(&StringLiteral_22297/*"mstVoiceMaterialCond"*/);
    sub_1C94098(&StringLiteral_22094/*"mstGachaAdjustAdd"*/);
    sub_1C94098(&StringLiteral_22108/*"mstGachaStoryAdjust"*/);
    sub_1C94098(&StringLiteral_22293/*"mstUserExp"*/);
    sub_1C94098(&StringLiteral_22083/*"mstExcludeMotionCond"*/);
    sub_1C94098(&StringLiteral_22316/*"mstWarBoardItem"*/);
    sub_1C94098(&StringLiteral_21985/*"mstEquipAdd"*/);
    sub_1C94098(&StringLiteral_21978/*"mstDialogMessage"*/);
    sub_1C94098(&StringLiteral_22537/*"npcSvtFollower"*/);
    sub_1C94098(&StringLiteral_21916/*"mstBattleBg"*/);
    sub_1C94098(&StringLiteral_21945/*"mstClassBoardClass"*/);
    sub_1C94098(&StringLiteral_24776/*"userEventPoint"*/);
    sub_1C94098(&StringLiteral_22238/*"mstSvtChange"*/);
    sub_1C94098(&StringLiteral_22315/*"mstWarBoardIndividualityClass"*/);
    sub_1C94098(&StringLiteral_22096/*"mstGachaBaseCollateral"*/);
    sub_1C94098(&StringLiteral_22173/*"mstQuestPhasePresent"*/);
    sub_1C94098(&StringLiteral_22208/*"mstShopReset"*/);
    sub_1C94098(&StringLiteral_22036/*"mstEventMural"*/);
    sub_1C94098(&StringLiteral_22104/*"mstGachaPickup"*/);
    sub_1C94098(&StringLiteral_22127/*"mstItemSelect"*/);
    sub_1C94098(&StringLiteral_22252/*"mstSvtIndividuality"*/);
    sub_1C94098(&StringLiteral_24762/*"userEvent"*/);
    sub_1C94098(&StringLiteral_22338/*"mstWarBoardTreasure"*/);
    sub_1C94098(&StringLiteral_22257/*"mstSvtLvDetail"*/);
    sub_1C94098(&StringLiteral_22323/*"mstWarBoardRatingOffset"*/);
    sub_1C94098(&StringLiteral_22170/*"mstQuestPhaseDetail"*/);
    sub_1C94098(&StringLiteral_22204/*"mstShopAction"*/);
    sub_1C94098(&StringLiteral_22149/*"mstMyroomAdd"*/);
    sub_1C94098(&StringLiteral_22070/*"mstEventSvtFatigue"*/);
    sub_1C94098(&StringLiteral_22018/*"mstEventFactory"*/);
    sub_1C94098(&StringLiteral_24792/*"userGachaDrawHistory"*/);
    sub_1C94098(&StringLiteral_24787/*"userFollower"*/);
    sub_1C94098(&StringLiteral_22324/*"mstWarBoardRatingOffsetGroup"*/);
    sub_1C94098(&StringLiteral_24824/*"userSvtCoin"*/);
    sub_1C94098(&StringLiteral_22064/*"mstEventScript"*/);
    sub_1C94098(&StringLiteral_22271/*"mstSvtSkill"*/);
    sub_1C94098(&StringLiteral_22220/*"mstSpotLayer"*/);
    sub_1C94098(&StringLiteral_24826/*"userSvtCommandCard"*/);
    sub_1C94098(&StringLiteral_24811/*"userQuestInfo"*/);
    sub_1C94098(&StringLiteral_21980/*"mstEffect"*/);
    sub_1C94098(&StringLiteral_22125/*"mstItem"*/);
    sub_1C94098(&StringLiteral_22201/*"mstSelectBonusBase"*/);
    sub_1C94098(&StringLiteral_22045/*"mstEventPointGroupAdd"*/);
    sub_1C94098(&StringLiteral_22168/*"mstQuestMessage"*/);
    sub_1C94098(&StringLiteral_22532/*"npcFollowerRelease"*/);
    sub_1C94098(&StringLiteral_22089/*"mstFuncCategory"*/);
    sub_1C94098(&StringLiteral_22317/*"mstWarBoardMessage"*/);
    sub_1C94098(&StringLiteral_24796/*"userGame"*/);
    sub_1C94098(&StringLiteral_22114/*"mstGift"*/);
    sub_1C94098(&StringLiteral_22325/*"mstWarBoardReinforcements"*/);
    sub_1C94098(&StringLiteral_21992/*"mstEventBoardGameToken"*/);
    sub_1C94098(&StringLiteral_22134/*"mstMapGimmickLayer"*/);
    sub_1C94098(&StringLiteral_22241/*"mstSvtCommandCodeUnlock"*/);
    sub_1C94098(&StringLiteral_21908/*"mstAssist"*/);
    sub_1C94098(&StringLiteral_24938/*"viewWaveEnemy"*/);
    sub_1C94098(&StringLiteral_22536/*"npcSvtEquip"*/);
    sub_1C94098(&StringLiteral_22184/*"mstQuestScriptMaterialNext"*/);
    sub_1C94098(&StringLiteral_22247/*"mstSvtExp"*/);
    sub_1C94098(&StringLiteral_24821/*"userSvt"*/);
    sub_1C94098(&StringLiteral_24934/*"viewEnemy"*/);
    sub_1C94098(&StringLiteral_22080/*"mstEventUiRelease"*/);
    sub_1C94098(&StringLiteral_24369/*"totalEventRace"*/);
    sub_1C94098(&StringLiteral_22084/*"mstFieldMotion"*/);
    sub_1C94098(&StringLiteral_22054/*"mstEventRandomMission"*/);
    sub_1C94098(&StringLiteral_22061/*"mstEventRewardScene"*/);
    sub_1C94098(&StringLiteral_22087/*"mstFriendshipSvt"*/);
    sub_1C94098(&StringLiteral_22123/*"mstIndividualityPersonality"*/);
    sub_1C94098(&StringLiteral_21955/*"mstCombineCostume"*/);
    sub_1C94098(&StringLiteral_21954/*"mstCombineAppendPassiveSkill"*/);
    sub_1C94098(&StringLiteral_22013/*"mstEventDiggingReward"*/);
    sub_1C94098(&StringLiteral_22306/*"mstWarBoardActionTrend"*/);
    sub_1C94098(&StringLiteral_21922/*"mstBattleScript"*/);
    sub_1C94098(&StringLiteral_22095/*"mstGachaAppend"*/);
    sub_1C94098(&StringLiteral_22328/*"mstWarBoardSquareIndexGroup"*/);
    sub_1C94098(&StringLiteral_22088/*"mstFunc"*/);
    sub_1C94098(&StringLiteral_22006/*"mstEventConquestReward"*/);
    sub_1C94098(&StringLiteral_22311/*"mstWarBoardEffect"*/);
    sub_1C94098(&StringLiteral_22342/*"mstWarQuestSelection"*/);
    sub_1C94098(&StringLiteral_24756/*"userDeck"*/);
    sub_1C94098(&StringLiteral_22143/*"mstMasterMissionDisplayInfo"*/);
    sub_1C94098(&StringLiteral_22339/*"mstWarGroup"*/);
    sub_1C94098(&StringLiteral_22203/*"mstShop"*/);
    sub_1C94098(&StringLiteral_22320/*"mstWarBoardPartySkill"*/);
    sub_1C94098(&StringLiteral_24771/*"userEventItemLinkSvt"*/);
    sub_1C94098(&StringLiteral_22043/*"mstEventPointBuff"*/);
    sub_1C94098(&StringLiteral_22164/*"mstQuestExtension"*/);
    sub_1C94098(&StringLiteral_24820/*"userSupportDeck"*/);
    sub_1C94098(&StringLiteral_22222/*"mstSpotRoad"*/);
    sub_1C94098(&StringLiteral_22281/*"mstSvtVoiceRelation"*/);
    sub_1C94098(&StringLiteral_21957/*"mstCombineLimitGift"*/);
    sub_1C94098(&StringLiteral_22007/*"mstEventCooltimeReward"*/);
    sub_1C94098(&StringLiteral_21999/*"mstEventBulletinBoard"*/);
    sub_1C94098(&StringLiteral_22058/*"mstEventRewardBg"*/);
    sub_1C94098(&StringLiteral_21936/*"mstBoxGachaTalk"*/);
    sub_1C94098(&StringLiteral_24805/*"userPaymentLimit"*/);
    sub_1C94098(&StringLiteral_22090/*"mstFuncDisp"*/);
    sub_1C94098(&StringLiteral_22268/*"mstSvtScript"*/);
    sub_1C94098(&StringLiteral_22131/*"mstMapCond"*/);
    sub_1C94098(&StringLiteral_22150/*"mstMyroomAddBgDiff"*/);
    sub_1C94098(&StringLiteral_24770/*"userEventFortification"*/);
    sub_1C94098(&StringLiteral_22319/*"mstWarBoardOnboardSkill"*/);
    sub_1C94098(&StringLiteral_22102/*"mstGachaGroup"*/);
    sub_1C94098(&StringLiteral_24936/*"viewQuestEnemyInfo"*/);
    sub_1C94098(&StringLiteral_24745/*"userAccountLinkage"*/);
    sub_1C94098(&StringLiteral_22242/*"mstSvtComment"*/);
    sub_1C94098(&StringLiteral_22289/*"mstTreasureDevice"*/);
    sub_1C94098(&StringLiteral_24935/*"viewGachaFeaturedSvt"*/);
    sub_1C94098(&StringLiteral_24804/*"userNpcSvtRecord"*/);
    sub_1C94098(&StringLiteral_21920/*"mstBattlePoint"*/);
    sub_1C94098(&StringLiteral_22035/*"mstEventMissionGroup"*/);
    sub_1C94098(&StringLiteral_24812/*"userQuestRecord"*/);
    sub_1C94098(&StringLiteral_22195/*"mstRestrictionMessage"*/);
    sub_1C94098(&StringLiteral_22116/*"mstGiftDetail"*/);
    sub_1C94098(&StringLiteral_22110/*"mstGachaTicket"*/);
    sub_1C94098(&StringLiteral_22264/*"mstSvtPhoto"*/);
    sub_1C94098(&StringLiteral_22911/*"pickupUserFollower"*/);
    sub_1C94098(&StringLiteral_22066/*"mstEventStatus"*/);
    sub_1C94098(&StringLiteral_22243/*"mstSvtCommentAdd"*/);
    sub_1C94098(&StringLiteral_22261/*"mstSvtOverwrite"*/);
    sub_1C94098(&StringLiteral_22531/*"npcFollower"*/);
    sub_1C94098(&StringLiteral_22005/*"mstEventCommandAssist"*/);
    sub_1C94098(&StringLiteral_19299/*"eventSvtFatigue"*/);
    sub_1C94098(&StringLiteral_22099/*"mstGachaBonusSelectLineup"*/);
    sub_1C94098(&StringLiteral_22000/*"mstEventBulletinBoardRelease"*/);
    sub_1C94098(&StringLiteral_22246/*"mstSvtExceed"*/);
    sub_1C94098(&StringLiteral_22256/*"mstSvtLimitSpoilerProtection"*/);
    sub_1C94098(&StringLiteral_22279/*"mstSvtVoice"*/);
    sub_1C94098(&StringLiteral_22198/*"mstRestrictionWhole"*/);
    sub_1C94098(&StringLiteral_24794/*"userGachaExtraCount"*/);
    sub_1C94098(&StringLiteral_22136/*"mstMapGimmickPath"*/);
    sub_1C94098(&StringLiteral_22073/*"mstEventTowerReward"*/);
    sub_1C94098(&StringLiteral_21951/*"mstClassRelationOverwrite"*/);
    sub_1C94098(&StringLiteral_21903/*"mstAi"*/);
    sub_1C94098(&StringLiteral_24747/*"userBoxGacha"*/);
    sub_1C94098(&StringLiteral_22236/*"mstSvtCard"*/);
    sub_1C94098(&StringLiteral_24795/*"userGachaPickupCollateral"*/);
    sub_1C94098(&StringLiteral_24793/*"userGachaDrawLog"*/);
    sub_1C94098(&StringLiteral_22329/*"mstWarBoardStage"*/);
    sub_1C94098(&StringLiteral_24760/*"userEquip"*/);
    sub_1C94098(&StringLiteral_22060/*"mstEventRewardGuideRelease"*/);
    sub_1C94098(&StringLiteral_21946/*"mstClassBoardCommandSpell"*/);
    sub_1C94098(&StringLiteral_22141/*"mstMasterIndividualitySelect"*/);
    sub_1C94098(&StringLiteral_22343/*"mstWarRelease"*/);
    sub_1C94098(&StringLiteral_22097/*"mstGachaBehavior"*/);
    sub_1C94098(&StringLiteral_22301/*"mstWar"*/);
    sub_1C94098(&StringLiteral_21994/*"mstEventBonusFilter"*/);
    sub_1C94098(&StringLiteral_22186/*"mstQuestScriptRelease"*/);
    sub_1C94098(&StringLiteral_24772/*"userEventMap"*/);
    sub_1C94098(&StringLiteral_22040/*"mstEventPanelSpot"*/);
    sub_1C94098(&StringLiteral_21943/*"mstClass"*/);
    sub_1C94098(&StringLiteral_24744/*"userAccessary"*/);
    sub_1C94098(&StringLiteral_22254/*"mstSvtLimitAdd"*/);
    sub_1C94098(&StringLiteral_22185/*"mstQuestScriptMaterialOverwrite"*/);
    sub_1C94098(&StringLiteral_18220/*"combineExp"*/);
    sub_1C94098(&StringLiteral_24788/*"userFormation"*/);
    sub_1C94098(&StringLiteral_22318/*"mstWarBoardMessageScript"*/);
    sub_1C94098(&StringLiteral_22048/*"mstEventProgressValue"*/);
    sub_1C94098(&StringLiteral_24836/*"userSvtVoicePlayed"*/);
    sub_1C94098(&StringLiteral_22235/*"mstSvtBattlePoint"*/);
    sub_1C94098(&StringLiteral_22249/*"mstSvtFlag"*/);
    sub_1C94098(&StringLiteral_21930/*"mstBoardMessage"*/);
    sub_1C94098(&StringLiteral_22039/*"mstEventPanelScan"*/);
    sub_1C94098(&StringLiteral_22255/*"mstSvtLimitImage"*/);
    sub_1C94098(&StringLiteral_22012/*"mstEventDiggingBlock"*/);
    sub_1C94098(&StringLiteral_24780/*"userEventRandomMission"*/);
    sub_1C94098(&StringLiteral_21906/*"mstArea"*/);
    sub_1C94098(&StringLiteral_24370/*"totalEventRaid"*/);
    sub_1C94098(&StringLiteral_22513/*"notEndEventMissionFix"*/);
    sub_1C94098(&StringLiteral_22209/*"mstShopScript"*/);
    sub_1C94098(&StringLiteral_24773/*"userEventMission"*/);
    sub_1C94098(&StringLiteral_22144/*"mstMasterPhoto"*/);
    sub_1C94098(&StringLiteral_22031/*"mstEventMissionActionAdd"*/);
    sub_1C94098(&StringLiteral_21963/*"mstCombineTd"*/);
    sub_1C94098(&StringLiteral_24830/*"userSvtFirstGetTime"*/);
    sub_1C94098(&StringLiteral_21932/*"mstBoost"*/);
    sub_1C94098(&StringLiteral_22269/*"mstSvtScriptAdd"*/);
    sub_1C94098(&StringLiteral_21934/*"mstBoxGachaBase"*/);
    sub_1C94098(&StringLiteral_21915/*"mstBannerAdd"*/);
    sub_1C94098(&StringLiteral_21901/*"mstAccessary"*/);
    sub_1C94098(&StringLiteral_22292/*"mstTreasureDeviceSequenceWeight"*/);
    sub_1C94098(&StringLiteral_24778/*"userEventRace"*/);
    sub_1C94098(&StringLiteral_22165/*"mstQuestGroup"*/);
    sub_1C94098(&StringLiteral_22047/*"mstEventPointUpperRelease"*/);
    sub_1C94098(&StringLiteral_24834/*"userSvtLeader"*/);
    sub_1C94098(&StringLiteral_22253/*"mstSvtLimit"*/);
    sub_1C94098(&StringLiteral_24786/*"userFollow"*/);
    sub_1C94098(&StringLiteral_22028/*"mstEventLocationCampaign"*/);
    sub_1C94098(&StringLiteral_21960/*"mstCombineQp"*/);
    sub_1C94098(&StringLiteral_21989/*"mstEvent"*/);
    sub_1C94098(&StringLiteral_22250/*"mstSvtFlagRelease"*/);
    sub_1C94098(&StringLiteral_24789/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_1C94098(&StringLiteral_24808/*"userPrivilege"*/);
    sub_1C94098(&StringLiteral_21965/*"mstCommandCode"*/);
    sub_1C94098(&StringLiteral_22233/*"mstSvtAppendPassiveSkill"*/);
    sub_1C94098(&StringLiteral_22024/*"mstEventGroup"*/);
    sub_1C94098(&StringLiteral_22098/*"mstGachaBonusSelect"*/);
    sub_1C94098(&StringLiteral_24764/*"userEventBoardGameToken"*/);
    sub_1C94098(&StringLiteral_22146/*"mstMissionItemDisplay"*/);
    sub_1C94098(&StringLiteral_22151/*"mstMyroomSvtSpecialImage"*/);
    sub_1C94098(&StringLiteral_22326/*"mstWarBoardRoad"*/);
    sub_1C94098(&StringLiteral_21937/*"mstBuff"*/);
    sub_1C94098(&StringLiteral_24997/*"warBoardData"*/);
    sub_1C94098(&StringLiteral_22121/*"mstIllustrator"*/);
    sub_1C94098(&StringLiteral_24365/*"totalBoxGacha"*/);
    sub_1C94098(&StringLiteral_22267/*"mstSvtRarity"*/);
    sub_1C94098(&StringLiteral_22302/*"mstWarAdd"*/);
    sub_1C94098(&StringLiteral_22137/*"mstMapGimmickPathRelease"*/);
    sub_1C94098(&StringLiteral_24790/*"userFriendRequestHistory"*/);
    sub_1C94098(&StringLiteral_24742/*"user"*/);
    sub_1C94098(&StringLiteral_17448/*"boxGachaHistory"*/);
    sub_1C94098(&StringLiteral_22091/*"mstFuncGroup"*/);
    sub_1C94098(&StringLiteral_21970/*"mstCommonConsume"*/);
    sub_1C94098(&StringLiteral_22313/*"mstWarBoardEventScript"*/);
    sub_1C94098(&StringLiteral_22115/*"mstGiftAdd"*/);
    sub_1C94098(&StringLiteral_22079/*"mstEventUi"*/);
    sub_1C94098(&StringLiteral_22219/*"mstSpotImage"*/);
    sub_1C94098(&StringLiteral_22245/*"mstSvtCostumeRelease"*/);
    sub_1C94098(&StringLiteral_24749/*"userClassStatistics"*/);
    sub_1C94098(&StringLiteral_22132/*"mstMapGimmick"*/);
    sub_1C94098(&StringLiteral_22172/*"mstQuestPhaseIndividuality"*/);
    sub_1C94098(&StringLiteral_22077/*"mstEventTutorial"*/);
    sub_1C94098(&StringLiteral_22340/*"mstWarGroupIgnore"*/);
    sub_1C94098(&StringLiteral_22336/*"mstWarBoardStageWall"*/);
    sub_1C94098(&StringLiteral_24784/*"userEventTrade"*/);
    sub_1C94098(&StringLiteral_21905/*"mstAiField"*/);
    sub_1C94098(&StringLiteral_22085/*"mstFriendPointGachaAdjust"*/);
    sub_1C94098(&StringLiteral_22278/*"mstSvtTreasureDeviceRelease"*/);
    sub_1C94098(&StringLiteral_22169/*"mstQuestPhase"*/);
    sub_1C94098(&StringLiteral_24766/*"userEventDataLost"*/);
    sub_1C94098(&StringLiteral_22234/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_1C94098(&StringLiteral_22277/*"mstSvtTreasureDeviceDamage"*/);
    sub_1C94098(&StringLiteral_22225/*"mstStage"*/);
    sub_1C94098(&StringLiteral_21953/*"mstCombine"*/);
    sub_1C94098(&StringLiteral_22001/*"mstEventCampaign"*/);
    sub_1C94098(&StringLiteral_22333/*"mstWarBoardStageNpc"*/);
    sub_1C94098(&StringLiteral_22878/*"paymentHistory"*/);
    sub_1C94098(&StringLiteral_19465/*"exchangeSvt"*/);
    sub_1C94098(&StringLiteral_22226/*"mstStageRemap"*/);
    sub_1C94098(&StringLiteral_22193/*"mstRestriction"*/);
    sub_1C94098(&StringLiteral_22182/*"mstQuestScript"*/);
    sub_1C94098(&StringLiteral_22062/*"mstEventRewardSceneRelease"*/);
    sub_1C94098(&StringLiteral_22296/*"mstVoiceCond"*/);
    sub_1C94098(&StringLiteral_24819/*"userSubEquip"*/);
    sub_1C94098(&StringLiteral_22055/*"mstEventRecipe"*/);
    sub_1C94098(&StringLiteral_22244/*"mstSvtCostume"*/);
    sub_1C94098(&StringLiteral_22265/*"mstSvtProfile"*/);
    sub_1C94098(&StringLiteral_21972/*"mstCommonRestriction"*/);
    sub_1C94098(&StringLiteral_24798/*"userHeelPortrait"*/);
    sub_1C94098(&StringLiteral_22214/*"mstSkillGroupOverwrite"*/);
    sub_1C94098(&StringLiteral_24752/*"userCommandCodeCollection"*/);
    sub_1C94098(&StringLiteral_21968/*"mstCommandCodeSkillRelease"*/);
    sub_1C94098(&StringLiteral_21981/*"mstEffectMovie"*/);
    sub_1C94098(&StringLiteral_22174/*"mstQuestPickup"*/);
    sub_1C94098(&StringLiteral_22332/*"mstWarBoardStageLayout"*/);
    sub_1C94098(&StringLiteral_22307/*"mstWarBoardActionTrendCond"*/);
    sub_1C94098(&StringLiteral_22003/*"mstEventCombine"*/);
    sub_1C94098(&StringLiteral_22321/*"mstWarBoardQuest"*/);
    sub_1C94098(&StringLiteral_22162/*"mstQuestConsumeItem"*/);
    sub_1C94098(&StringLiteral_22171/*"mstQuestPhaseDetailAdd"*/);
    sub_1C94098(&StringLiteral_22120/*"mstHeelPortrait"*/);
    sub_1C94098(&StringLiteral_19466/*"exchangeSvtCoinGivenNum"*/);
    sub_1C94098(&StringLiteral_24807/*"userPresentHistory"*/);
    sub_1C94098(&StringLiteral_21942/*"mstChaldeaGatePickup"*/);
    sub_1C94098(&StringLiteral_22322/*"mstWarBoardRatingBase"*/);
    sub_1C94098(&StringLiteral_22103/*"mstGachaImage"*/);
    sub_1C94098(&StringLiteral_21987/*"mstEquipImage"*/);
    sub_1C94098(&StringLiteral_24779/*"userEventRaid"*/);
    sub_1C94098(&StringLiteral_22240/*"mstSvtCollection"*/);
    sub_1C94098(&StringLiteral_19852/*"friendshipQuestDialogInfo"*/);
    sub_1C94098(&StringLiteral_22152/*"mstNews"*/);
    sub_1C94098(&StringLiteral_22093/*"mstGacha"*/);
    sub_1C94098(&StringLiteral_22213/*"mstSkillGroup"*/);
    sub_1C94098(&StringLiteral_22119/*"mstGuide"*/);
    sub_1C94098(&StringLiteral_22106/*"mstGachaPickupCollateralGroup"*/);
    sub_1C94098(&StringLiteral_21948/*"mstClassBoardLock"*/);
    sub_1C94098(&StringLiteral_21979/*"mstDropAdd"*/);
    sub_1C94098(&StringLiteral_22046/*"mstEventPointUpper"*/);
    sub_1C94098(&StringLiteral_21927/*"mstBlankEarthSpot"*/);
    sub_1C94098(&StringLiteral_22283/*"mstTerminalOverwrite"*/);
    sub_1C94098(&StringLiteral_21988/*"mstEquipSkill"*/);
    sub_1C94098(&StringLiteral_22081/*"mstEventUiValue"*/);
    sub_1C94098(&StringLiteral_24754/*"userContinue"*/);
    sub_1C94098(&StringLiteral_22159/*"mstQuestAdd"*/);
    sub_1C94098(&StringLiteral_21947/*"mstClassBoardLine"*/);
    sub_1C94098(&StringLiteral_24685/*"updateProfileDialogInfo"*/);
    sub_1C94098(&StringLiteral_22294/*"mstVoice"*/);
    sub_1C94098(&StringLiteral_24774/*"userEventMissionConditionDetail"*/);
    sub_1C94098(&StringLiteral_21907/*"mstAssetbundleKey"*/);
    sub_1C94098(&StringLiteral_22037/*"mstEventPanelMap"*/);
    sub_1C94098(&StringLiteral_24803/*"userLogin"*/);
    sub_1C94098(&StringLiteral_22128/*"mstLoginQuest"*/);
    sub_1C94098(&StringLiteral_22154/*"mstPartialMaintenance"*/);
    sub_1C94098(&StringLiteral_24781/*"userEventSpot"*/);
    sub_1C94098(&StringLiteral_22057/*"mstEventReward"*/);
    sub_1C94098(&StringLiteral_22009/*"mstEventDataLostBattleReset"*/);
    sub_1C94098(&StringLiteral_21909/*"mstAttri"*/);
    sub_1C94098(&StringLiteral_22331/*"mstWarBoardStageDetail"*/);
    sub_1C94098(&StringLiteral_22272/*"mstSvtSkillAdd"*/);
    sub_1C94098(&StringLiteral_24777/*"userEventQuestCooltime"*/);
    sub_1C94098(&StringLiteral_22183/*"mstQuestScriptBranchMaterial"*/);
    sub_1C94098(&StringLiteral_22019/*"mstEventFatigueRecovery"*/);
    sub_1C94098(&StringLiteral_22309/*"mstWarBoardAi"*/);
    sub_1C94098(&StringLiteral_22288/*"mstTreasureBoxTalk"*/);
    sub_1C94098(&StringLiteral_22312/*"mstWarBoardEvent"*/);
    sub_1C94098(&StringLiteral_22298/*"mstVoicePlayCond"*/);
    sub_1C94098(&StringLiteral_22100/*"mstGachaDetail"*/);
    sub_1C94098(&StringLiteral_22068/*"mstEventSuperBoss"*/);
    sub_1C94098(&StringLiteral_22211/*"mstSkillAdd"*/);
    byte_4D2B6FD = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_34EA2E0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1C942F0(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_22230/*"mstSvt"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_22242/*"mstSvtComment"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_22265/*"mstSvtProfile"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_22301/*"mstWar"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_17132/*"battle"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_22289/*"mstTreasureDevice"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_22253/*"mstSvtLimit"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_22275/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_21943/*"mstClass"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_22268/*"mstSvtScript"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_22236/*"mstSvtCard"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_22271/*"mstSvtSkill"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_22262/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_24821/*"userSvt"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_24835/*"userSvtStorage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_22225/*"mstStage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_22251/*"mstSvtGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_21927/*"mstBlankEarthSpot"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_21928/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_22217/*"mstSpot"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_22219/*"mstSpotImage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_22222/*"mstSpotRoad"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_22132/*"mstMapGimmick"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_22114/*"mstGift"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_22115/*"mstGiftAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_22229/*"mstSubEquip"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_24742/*"user"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_24796/*"userGame"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_24756/*"userDeck"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_24825/*"userSvtCollection"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_22086/*"mstFriendship"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_22093/*"mstGacha"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_22103/*"mstGachaImage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_24791/*"userGacha"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_24795/*"userGachaPickupCollateral"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24802/*"userItem"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_22125/*"mstItem"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_22110/*"mstGachaTicket"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_22094/*"mstGachaAdjustAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_22104/*"mstGachaPickup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_22085/*"mstFriendPointGachaAdjust"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_22096/*"mstGachaBaseCollateral"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_21901/*"mstAccessary"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_24744/*"userAccessary"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_24819/*"userSubEquip"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_24246/*"tblUserGame"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_22203/*"mstShop"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_22228/*"mstStoneShop"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_21913/*"mstBankShop"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_22209/*"mstShopScript"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_21984/*"mstEquip"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_21986/*"mstEquipExp"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_21988/*"mstEquipSkill"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_24760/*"userEquip"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_24788/*"userFormation"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_22210/*"mstSkill"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_22216/*"mstSkillLv"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_22212/*"mstSkillDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_22088/*"mstFunc"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_21937/*"mstBuff"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_22107/*"mstGachaRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_24810/*"userQuest"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_24811/*"userQuestInfo"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_24812/*"userQuestRecord"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_22293/*"mstUserExp"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_22152/*"mstNews"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_22282/*"mstTelop"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_22712/*"otherUserGame"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_24245/*"tblFriend"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_24806/*"userPresentBox"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_21989/*"mstEvent"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_22158/*"mstQuest"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_22159/*"mstQuestAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_22177/*"mstQuestRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_22169/*"mstQuestPhase"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_22170/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_22165/*"mstQuestGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_22176/*"mstQuestRandomGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_22162/*"mstQuestConsumeItem"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_22168/*"mstQuestMessage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_24937/*"viewQuestInfo"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_24934/*"viewEnemy"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_24936/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_21906/*"mstArea"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_21923/*"mstBgm"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_22049/*"mstEventQuest"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_22001/*"mstEventCampaign"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_21960/*"mstCombineQp"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_21959/*"mstCombineMaterial"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_22003/*"mstEventCombine"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_22247/*"mstSvtExp"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_21962/*"mstCombineSkill"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_21963/*"mstCombineTd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_22121/*"mstIllustrator"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_21977/*"mstCv"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_22291/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_22290/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_24787/*"userFollower"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_22531/*"npcFollower"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_22537/*"npcSvtFollower"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_24762/*"userEvent"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_24809/*"userProfile"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_24816/*"userShop"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_24754/*"userContinue"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_21974/*"mstConstant"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_21975/*"mstConstantLong"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_21976/*"mstConstantStr"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_21969/*"mstCommandSpell"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_21903/*"mstAi"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_21904/*"mstAiAct"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_22279/*"mstSvtVoice"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_21910/*"mstAttriRelation"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_21950/*"mstClassRelation"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_21980/*"mstEffect"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_21987/*"mstEquipImage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_21956/*"mstCombineLimit"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_21941/*"mstCard"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_21961/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_22254/*"mstSvtLimitAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_22267/*"mstSvtRarity"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_22202/*"mstSetItem"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_22192/*"mstRecover"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_21914/*"mstBanner"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_22207/*"mstShopRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_22057/*"mstEventReward"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_22010/*"mstEventDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_22069/*"mstEventSvt"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_21933/*"mstBoxGacha"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_21934/*"mstBoxGachaBase"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_21936/*"mstBoxGachaTalk"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_24747/*"userBoxGacha"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17448/*"boxGachaHistory"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_21916/*"mstBattleBg"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_22284/*"mstTips"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_24803/*"userLogin"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_22294/*"mstVoice"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_22059/*"mstEventRewardExtra"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_22029/*"mstEventMission"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_22033/*"mstEventMissionCondition"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    140,
    (Il2CppObject *)StringLiteral_22034/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    141,
    (Il2CppObject *)StringLiteral_22030/*"mstEventMissionAction"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    142,
    (Il2CppObject *)StringLiteral_22031/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    145,
    (Il2CppObject *)StringLiteral_21973/*"mstCompleteMission"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    143,
    (Il2CppObject *)StringLiteral_22032/*"mstEventMissionAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    144,
    (Il2CppObject *)StringLiteral_22063/*"mstEventRewardSet"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    146,
    (Il2CppObject *)StringLiteral_24773/*"userEventMission"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    147,
    (Il2CppObject *)StringLiteral_24774/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    148,
    (Il2CppObject *)StringLiteral_21935/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    149,
    (Il2CppObject *)StringLiteral_21952/*"mstClosedMessage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    150,
    (Il2CppObject *)StringLiteral_24834/*"userSvtLeader"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    151,
    (Il2CppObject *)StringLiteral_22091/*"mstFuncGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    152,
    (Il2CppObject *)StringLiteral_22053/*"mstEventRaid"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    153,
    (Il2CppObject *)StringLiteral_24370/*"totalEventRaid"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    154,
    (Il2CppObject *)StringLiteral_24779/*"userEventRaid"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    155,
    (Il2CppObject *)StringLiteral_22041/*"mstEventPoint"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    156,
    (Il2CppObject *)StringLiteral_22044/*"mstEventPointGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    157,
    (Il2CppObject *)StringLiteral_24368/*"totalEventPoint"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    158,
    (Il2CppObject *)StringLiteral_24776/*"userEventPoint"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    159,
    (Il2CppObject *)StringLiteral_24807/*"userPresentHistory"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    160,
    (Il2CppObject *)StringLiteral_22142/*"mstMasterMission"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    161,
    (Il2CppObject *)StringLiteral_22246/*"mstSvtExceed"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    162,
    (Il2CppObject *)StringLiteral_22154/*"mstPartialMaintenance"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    163,
    (Il2CppObject *)StringLiteral_22119/*"mstGuide"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    164,
    (Il2CppObject *)StringLiteral_22143/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    165,
    (Il2CppObject *)StringLiteral_22102/*"mstGachaGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    166,
    (Il2CppObject *)StringLiteral_22179/*"mstQuestReset"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    167,
    (Il2CppObject *)StringLiteral_22302/*"mstWarAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    168,
    (Il2CppObject *)StringLiteral_22025/*"mstEventItemDisplay"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    169,
    (Il2CppObject *)StringLiteral_22026/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    170,
    (Il2CppObject *)StringLiteral_22027/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    171,
    (Il2CppObject *)StringLiteral_22077/*"mstEventTutorial"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    172,
    (Il2CppObject *)StringLiteral_22078/*"mstEventTutorialCond"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    173,
    (Il2CppObject *)StringLiteral_22300/*"mstVoiceRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    174,
    (Il2CppObject *)StringLiteral_22068/*"mstEventSuperBoss"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    175,
    (Il2CppObject *)StringLiteral_24782/*"userEventSuperBoss"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    176,
    (Il2CppObject *)StringLiteral_22182/*"mstQuestScript"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    177,
    (Il2CppObject *)StringLiteral_22186/*"mstQuestScriptRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    178,
    (Il2CppObject *)StringLiteral_22145/*"mstMaterialFolder"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    179,
    (Il2CppObject *)StringLiteral_22193/*"mstRestriction"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    180,
    (Il2CppObject *)StringLiteral_22180/*"mstQuestRestriction"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    181,
    (Il2CppObject *)StringLiteral_22281/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    182,
    (Il2CppObject *)StringLiteral_22205/*"mstShopDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    183,
    (Il2CppObject *)StringLiteral_22269/*"mstSvtScriptAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    184,
    (Il2CppObject *)StringLiteral_21953/*"mstCombine"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    185,
    (Il2CppObject *)StringLiteral_21905/*"mstAiField"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    186,
    (Il2CppObject *)StringLiteral_22243/*"mstSvtCommentAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    187,
    (Il2CppObject *)StringLiteral_22020/*"mstEventFilter"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    188,
    (Il2CppObject *)StringLiteral_24820/*"userSupportDeck"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    189,
    (Il2CppObject *)StringLiteral_22061/*"mstEventRewardScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    190,
    (Il2CppObject *)StringLiteral_22082/*"mstEventVoicePlay"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    191,
    (Il2CppObject *)StringLiteral_22109/*"mstGachaSub"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    192,
    (Il2CppObject *)StringLiteral_22100/*"mstGachaDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    193,
    (Il2CppObject *)StringLiteral_22098/*"mstGachaBonusSelect"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    194,
    (Il2CppObject *)StringLiteral_22099/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    195,
    (Il2CppObject *)StringLiteral_22238/*"mstSvtChange"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    196,
    (Il2CppObject *)StringLiteral_22296/*"mstVoiceCond"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    197,
    (Il2CppObject *)StringLiteral_21924/*"mstBgmRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    198,
    (Il2CppObject *)StringLiteral_22149/*"mstMyroomAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    199,
    (Il2CppObject *)StringLiteral_22204/*"mstShopAction"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    200,
    (Il2CppObject *)StringLiteral_22062/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    201,
    (Il2CppObject *)StringLiteral_22129/*"mstMap"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    202,
    (Il2CppObject *)StringLiteral_22131/*"mstMapCond"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    203,
    (Il2CppObject *)StringLiteral_22130/*"mstMapButton"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    204,
    (Il2CppObject *)StringLiteral_21915/*"mstBannerAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    205,
    (Il2CppObject *)StringLiteral_22161/*"mstQuestBehavior"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    206,
    (Il2CppObject *)StringLiteral_21990/*"mstEventAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    207,
    (Il2CppObject *)StringLiteral_22285/*"mstTotalLogin"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    208,
    (Il2CppObject *)StringLiteral_22248/*"mstSvtFilter"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    209,
    (Il2CppObject *)StringLiteral_21955/*"mstCombineCostume"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    210,
    (Il2CppObject *)StringLiteral_22244/*"mstSvtCostume"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    211,
    (Il2CppObject *)StringLiteral_22245/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    212,
    (Il2CppObject *)StringLiteral_22223/*"mstStaffPhoto"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    213,
    (Il2CppObject *)StringLiteral_22224/*"mstStaffPhotoCostume"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    214,
    (Il2CppObject *)StringLiteral_24790/*"userFriendRequestHistory"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    215,
    (Il2CppObject *)StringLiteral_24746/*"userBlacklist"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    216,
    (Il2CppObject *)StringLiteral_22127/*"mstItemSelect"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    217,
    (Il2CppObject *)StringLiteral_22051/*"mstEventRace"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    218,
    (Il2CppObject *)StringLiteral_22052/*"mstEventRaceResult"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    219,
    (Il2CppObject *)StringLiteral_22175/*"mstQuestRacePoint"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    220,
    (Il2CppObject *)StringLiteral_24778/*"userEventRace"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    221,
    (Il2CppObject *)StringLiteral_22064/*"mstEventScript"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    222,
    (Il2CppObject *)StringLiteral_22065/*"mstEventScriptRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    223,
    (Il2CppObject *)StringLiteral_22221/*"mstSpotPath"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    224,
    (Il2CppObject *)StringLiteral_22218/*"mstSpotAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    225,
    (Il2CppObject *)StringLiteral_24369/*"totalEventRace"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    226,
    (Il2CppObject *)StringLiteral_22045/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    227,
    (Il2CppObject *)StringLiteral_22299/*"mstVoicePlayGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    228,
    (Il2CppObject *)StringLiteral_22298/*"mstVoicePlayCond"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    229,
    (Il2CppObject *)StringLiteral_22108/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    230,
    (Il2CppObject *)StringLiteral_22249/*"mstSvtFlag"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    231,
    (Il2CppObject *)StringLiteral_22250/*"mstSvtFlagRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    232,
    (Il2CppObject *)StringLiteral_22028/*"mstEventLocationCampaign"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    233,
    (Il2CppObject *)StringLiteral_21940/*"mstCampaignInfo"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    234,
    (Il2CppObject *)StringLiteral_21978/*"mstDialogMessage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    235,
    (Il2CppObject *)StringLiteral_22252/*"mstSvtIndividuality"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    236,
    (Il2CppObject *)StringLiteral_21930/*"mstBoardMessage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    237,
    (Il2CppObject *)StringLiteral_21931/*"mstBoardMessageRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    238,
    (Il2CppObject *)StringLiteral_22070/*"mstEventSvtFatigue"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    239,
    (Il2CppObject *)StringLiteral_24767/*"userEventDeck"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    240,
    (Il2CppObject *)StringLiteral_22072/*"mstEventTower"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    241,
    (Il2CppObject *)StringLiteral_22073/*"mstEventTowerReward"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    242,
    (Il2CppObject *)StringLiteral_21999/*"mstEventBulletinBoard"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    243,
    (Il2CppObject *)StringLiteral_22000/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    244,
    (Il2CppObject *)StringLiteral_22018/*"mstEventFactory"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    245,
    (Il2CppObject *)StringLiteral_22206/*"mstShopGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    246,
    (Il2CppObject *)StringLiteral_21911/*"mstAuraEffect"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    247,
    (Il2CppObject *)StringLiteral_21912/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    248,
    (Il2CppObject *)StringLiteral_24775/*"userEventMissionFix"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    249,
    (Il2CppObject *)StringLiteral_22513/*"notEndEventMissionFix"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    250,
    (Il2CppObject *)StringLiteral_21982/*"mstEnemyMaster"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    251,
    (Il2CppObject *)StringLiteral_21983/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    252,
    (Il2CppObject *)StringLiteral_22273/*"mstSvtSkillRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    253,
    (Il2CppObject *)StringLiteral_22263/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    254,
    (Il2CppObject *)StringLiteral_22278/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    255,
    (Il2CppObject *)StringLiteral_22138/*"mstMapGimmickRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    256,
    (Il2CppObject *)StringLiteral_21965/*"mstCommandCode"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    257,
    (Il2CppObject *)StringLiteral_22241/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    258,
    (Il2CppObject *)StringLiteral_24751/*"userCommandCode"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    259,
    (Il2CppObject *)StringLiteral_24752/*"userCommandCodeCollection"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    260,
    (Il2CppObject *)StringLiteral_24827/*"userSvtCommandCode"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    261,
    (Il2CppObject *)StringLiteral_21967/*"mstCommandCodeSkill"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    262,
    (Il2CppObject *)StringLiteral_21968/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    263,
    (Il2CppObject *)StringLiteral_21966/*"mstCommandCodeComment"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    264,
    (Il2CppObject *)StringLiteral_22066/*"mstEventStatus"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    265,
    (Il2CppObject *)StringLiteral_22067/*"mstEventStatusQuest"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    266,
    (Il2CppObject *)StringLiteral_21972/*"mstCommonRestriction"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    267,
    (Il2CppObject *)StringLiteral_22043/*"mstEventPointBuff"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    268,
    (Il2CppObject *)StringLiteral_24786/*"userFollow"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    269,
    (Il2CppObject *)StringLiteral_22060/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    270,
    (Il2CppObject *)StringLiteral_22536/*"npcSvtEquip"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    271,
    (Il2CppObject *)StringLiteral_22002/*"mstEventCampaignRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    272,
    (Il2CppObject *)StringLiteral_22258/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    273,
    (Il2CppObject *)StringLiteral_22015/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    274,
    (Il2CppObject *)StringLiteral_22042/*"mstEventPointActivity"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    275,
    (Il2CppObject *)StringLiteral_22089/*"mstFuncCategory"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    276,
    (Il2CppObject *)StringLiteral_22174/*"mstQuestPickup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    277,
    (Il2CppObject *)StringLiteral_22079/*"mstEventUi"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    278,
    (Il2CppObject *)StringLiteral_22080/*"mstEventUiRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    279,
    (Il2CppObject *)StringLiteral_22081/*"mstEventUiValue"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    280,
    (Il2CppObject *)StringLiteral_22006/*"mstEventConquestReward"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    281,
    (Il2CppObject *)StringLiteral_22532/*"npcFollowerRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    282,
    (Il2CppObject *)StringLiteral_21994/*"mstEventBonusFilter"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    283,
    (Il2CppObject *)StringLiteral_21995/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    284,
    (Il2CppObject *)StringLiteral_21996/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    285,
    (Il2CppObject *)StringLiteral_24794/*"userGachaExtraCount"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    286,
    (Il2CppObject *)StringLiteral_21964/*"mstCommandCardRankParam"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    287,
    (Il2CppObject *)StringLiteral_24826/*"userSvtCommandCard"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    288,
    (Il2CppObject *)StringLiteral_22157/*"mstPrivilege"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    289,
    (Il2CppObject *)StringLiteral_24808/*"userPrivilege"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    290,
    (Il2CppObject *)StringLiteral_22163/*"mstQuestDateRange"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    291,
    (Il2CppObject *)StringLiteral_22046/*"mstEventPointUpper"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    292,
    (Il2CppObject *)StringLiteral_22047/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    293,
    (Il2CppObject *)StringLiteral_24813/*"userQuestRoute"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    294,
    (Il2CppObject *)StringLiteral_21997/*"mstEventBossStatusUi"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    295,
    (Il2CppObject *)StringLiteral_21971/*"mstCommonRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    296,
    (Il2CppObject *)StringLiteral_22187/*"mstQuestSpotRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    297,
    (Il2CppObject *)StringLiteral_22297/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    298,
    (Il2CppObject *)StringLiteral_21951/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    299,
    (Il2CppObject *)StringLiteral_22024/*"mstEventGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    300,
    (Il2CppObject *)StringLiteral_21907/*"mstAssetbundleKey"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    301,
    (Il2CppObject *)StringLiteral_24365/*"totalBoxGacha"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    302,
    (Il2CppObject *)StringLiteral_22277/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    303,
    (Il2CppObject *)StringLiteral_19299/*"eventSvtFatigue"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    304,
    (Il2CppObject *)StringLiteral_22058/*"mstEventRewardBg"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    305,
    (Il2CppObject *)StringLiteral_22019/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    306,
    (Il2CppObject *)StringLiteral_19286/*"eventBoostItemUsed"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    307,
    (Il2CppObject *)StringLiteral_22227/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    308,
    (Il2CppObject *)StringLiteral_22171/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    309,
    (Il2CppObject *)StringLiteral_22295/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    310,
    (Il2CppObject *)StringLiteral_22226/*"mstStageRemap"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    311,
    (Il2CppObject *)StringLiteral_18220/*"combineExp"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    312,
    (Il2CppObject *)StringLiteral_21991/*"mstEventBoardGameCell"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    313,
    (Il2CppObject *)StringLiteral_21992/*"mstEventBoardGameToken"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    314,
    (Il2CppObject *)StringLiteral_21993/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    315,
    (Il2CppObject *)StringLiteral_24764/*"userEventBoardGameToken"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    316,
    (Il2CppObject *)StringLiteral_22232/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    317,
    (Il2CppObject *)StringLiteral_22153/*"mstOpeningMovie"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    318,
    (Il2CppObject *)StringLiteral_22256/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    319,
    (Il2CppObject *)StringLiteral_22911/*"pickupUserFollower"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    320,
    (Il2CppObject *)StringLiteral_22240/*"mstSvtCollection"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    321,
    (Il2CppObject *)StringLiteral_22097/*"mstGachaBehavior"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    322,
    (Il2CppObject *)StringLiteral_22050/*"mstEventQuestCooltime"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    323,
    (Il2CppObject *)StringLiteral_24777/*"userEventQuestCooltime"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    324,
    (Il2CppObject *)StringLiteral_21932/*"mstBoost"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    325,
    (Il2CppObject *)StringLiteral_22303/*"mstWarBoard"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    326,
    (Il2CppObject *)StringLiteral_22327/*"mstWarBoardSquare"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    327,
    (Il2CppObject *)StringLiteral_22326/*"mstWarBoardRoad"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    328,
    (Il2CppObject *)StringLiteral_22329/*"mstWarBoardStage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    329,
    (Il2CppObject *)StringLiteral_22304/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    330,
    (Il2CppObject *)StringLiteral_22306/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    331,
    (Il2CppObject *)StringLiteral_22337/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    332,
    (Il2CppObject *)StringLiteral_22332/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    333,
    (Il2CppObject *)StringLiteral_22333/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    334,
    (Il2CppObject *)StringLiteral_22336/*"mstWarBoardStageWall"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    335,
    (Il2CppObject *)StringLiteral_22309/*"mstWarBoardAi"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    336,
    (Il2CppObject *)StringLiteral_22322/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    337,
    (Il2CppObject *)StringLiteral_22323/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    338,
    (Il2CppObject *)StringLiteral_22316/*"mstWarBoardItem"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    339,
    (Il2CppObject *)StringLiteral_22338/*"mstWarBoardTreasure"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    340,
    (Il2CppObject *)StringLiteral_22321/*"mstWarBoardQuest"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    341,
    (Il2CppObject *)StringLiteral_24997/*"warBoardData"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    342,
    (Il2CppObject *)StringLiteral_22315/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    343,
    (Il2CppObject *)StringLiteral_22307/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    344,
    (Il2CppObject *)StringLiteral_22305/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    345,
    (Il2CppObject *)StringLiteral_22325/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    346,
    (Il2CppObject *)StringLiteral_22335/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    347,
    (Il2CppObject *)StringLiteral_22037/*"mstEventPanelMap"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    348,
    (Il2CppObject *)StringLiteral_22038/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    349,
    (Il2CppObject *)StringLiteral_22040/*"mstEventPanelSpot"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    350,
    (Il2CppObject *)StringLiteral_22039/*"mstEventPanelScan"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    351,
    (Il2CppObject *)StringLiteral_22011/*"mstEventDigging"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    352,
    (Il2CppObject *)StringLiteral_22013/*"mstEventDiggingReward"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    353,
    (Il2CppObject *)StringLiteral_22012/*"mstEventDiggingBlock"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    354,
    (Il2CppObject *)StringLiteral_24768/*"userEventDigging"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    355,
    (Il2CppObject *)StringLiteral_21970/*"mstCommonConsume"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    356,
    (Il2CppObject *)StringLiteral_24772/*"userEventMap"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    357,
    (Il2CppObject *)StringLiteral_24781/*"userEventSpot"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    358,
    (Il2CppObject *)StringLiteral_22339/*"mstWarGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    359,
    (Il2CppObject *)StringLiteral_22255/*"mstSvtLimitImage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    360,
    (Il2CppObject *)StringLiteral_19852/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    361,
    (Il2CppObject *)StringLiteral_22181/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    362,
    (Il2CppObject *)StringLiteral_21908/*"mstAssist"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    363,
    (Il2CppObject *)StringLiteral_22311/*"mstWarBoardEffect"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    364,
    (Il2CppObject *)StringLiteral_22319/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    365,
    (Il2CppObject *)StringLiteral_17208/*"beforeBirthDay"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    366,
    (Il2CppObject *)StringLiteral_22128/*"mstLoginQuest"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    367,
    (Il2CppObject *)StringLiteral_22004/*"mstEventCombineCostume"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    368,
    (Il2CppObject *)StringLiteral_22334/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    369,
    (Il2CppObject *)StringLiteral_22276/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    370,
    (Il2CppObject *)StringLiteral_22211/*"mstSkillAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    371,
    (Il2CppObject *)StringLiteral_22257/*"mstSvtLvDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    372,
    (Il2CppObject *)StringLiteral_22095/*"mstGachaAppend"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    373,
    (Il2CppObject *)StringLiteral_24793/*"userGachaDrawLog"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    374,
    (Il2CppObject *)StringLiteral_22233/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    375,
    (Il2CppObject *)StringLiteral_24822/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    376,
    (Il2CppObject *)StringLiteral_24823/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    377,
    (Il2CppObject *)StringLiteral_22234/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    378,
    (Il2CppObject *)StringLiteral_21954/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    379,
    (Il2CppObject *)StringLiteral_22239/*"mstSvtCoin"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    380,
    (Il2CppObject *)StringLiteral_24824/*"userSvtCoin"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    381,
    (Il2CppObject *)StringLiteral_22231/*"mstSvtAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    382,
    (Il2CppObject *)StringLiteral_22286/*"mstTreasureBox"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    383,
    (Il2CppObject *)StringLiteral_22287/*"mstTreasureBoxGift"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    384,
    (Il2CppObject *)StringLiteral_22288/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    385,
    (Il2CppObject *)StringLiteral_24769/*"userEventExpedition"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    386,
    (Il2CppObject *)StringLiteral_22016/*"mstEventExpedition"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    387,
    (Il2CppObject *)StringLiteral_22017/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    388,
    (Il2CppObject *)StringLiteral_22055/*"mstEventRecipe"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    389,
    (Il2CppObject *)StringLiteral_22056/*"mstEventRecipeGift"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    390,
    (Il2CppObject *)StringLiteral_24770/*"userEventFortification"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    391,
    (Il2CppObject *)StringLiteral_22021/*"mstEventFortification"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    392,
    (Il2CppObject *)StringLiteral_22022/*"mstEventFortificationDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    393,
    (Il2CppObject *)StringLiteral_22023/*"mstEventFortificationSvt"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    394,
    (Il2CppObject *)StringLiteral_24836/*"userSvtVoicePlayed"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    395,
    (Il2CppObject *)StringLiteral_24685/*"updateProfileDialogInfo"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    396,
    (Il2CppObject *)StringLiteral_22259/*"mstSvtMaterialTd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    397,
    (Il2CppObject *)StringLiteral_21917/*"mstBattleMasterImage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    398,
    (Il2CppObject *)StringLiteral_24789/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    399,
    (Il2CppObject *)StringLiteral_24780/*"userEventRandomMission"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    400,
    (Il2CppObject *)StringLiteral_22048/*"mstEventProgressValue"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    401,
    (Il2CppObject *)StringLiteral_22260/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    402,
    (Il2CppObject *)StringLiteral_22054/*"mstEventRandomMission"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    403,
    (Il2CppObject *)StringLiteral_24792/*"userGachaDrawHistory"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    404,
    (Il2CppObject *)StringLiteral_24750/*"userCoinRoom"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    405,
    (Il2CppObject *)StringLiteral_21998/*"mstEventBuddyPoint"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    406,
    (Il2CppObject *)StringLiteral_22071/*"mstEventSvtPointRank"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    407,
    (Il2CppObject *)StringLiteral_24783/*"userEventSvtPoint"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    408,
    (Il2CppObject *)StringLiteral_22084/*"mstFieldMotion"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    409,
    (Il2CppObject *)StringLiteral_24759/*"userDeleteReservation"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    410,
    (Il2CppObject *)StringLiteral_22270/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    411,
    (Il2CppObject *)StringLiteral_21985/*"mstEquipAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    412,
    (Il2CppObject *)StringLiteral_22178/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    413,
    (Il2CppObject *)StringLiteral_24763/*"userEventAlloutBattle"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    414,
    (Il2CppObject *)StringLiteral_22184/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    415,
    (Il2CppObject *)StringLiteral_21918/*"mstBattleMessage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    416,
    (Il2CppObject *)StringLiteral_21919/*"mstBattleMessageGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    417,
    (Il2CppObject *)StringLiteral_24804/*"userNpcSvtRecord"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    418,
    (Il2CppObject *)StringLiteral_21939/*"mstBuffTypeDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    419,
    (Il2CppObject *)StringLiteral_22317/*"mstWarBoardMessage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    420,
    (Il2CppObject *)StringLiteral_22320/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    421,
    (Il2CppObject *)StringLiteral_22318/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    422,
    (Il2CppObject *)StringLiteral_22342/*"mstWarQuestSelection"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    423,
    (Il2CppObject *)StringLiteral_22331/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    424,
    (Il2CppObject *)StringLiteral_22185/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    425,
    (Il2CppObject *)StringLiteral_22183/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    426,
    (Il2CppObject *)StringLiteral_21902/*"mstAdCheckPoint"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    427,
    (Il2CppObject *)StringLiteral_22116/*"mstGiftDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    428,
    (Il2CppObject *)StringLiteral_21957/*"mstCombineLimitGift"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    429,
    (Il2CppObject *)StringLiteral_22007/*"mstEventCooltimeReward"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    430,
    (Il2CppObject *)StringLiteral_24765/*"userEventCooltimeReward"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    431,
    (Il2CppObject *)StringLiteral_21945/*"mstClassBoardClass"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    432,
    (Il2CppObject *)StringLiteral_21944/*"mstClassBoardBase"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    433,
    (Il2CppObject *)StringLiteral_21947/*"mstClassBoardLine"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    434,
    (Il2CppObject *)StringLiteral_21948/*"mstClassBoardLock"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    435,
    (Il2CppObject *)StringLiteral_21949/*"mstClassBoardSquare"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    436,
    (Il2CppObject *)StringLiteral_21946/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    437,
    (Il2CppObject *)StringLiteral_24748/*"userClassBoardSquare"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    438,
    (Il2CppObject *)StringLiteral_22237/*"mstSvtCardAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    439,
    (Il2CppObject *)StringLiteral_22139/*"mstMapLayer"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    440,
    (Il2CppObject *)StringLiteral_22220/*"mstSpotLayer"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    441,
    (Il2CppObject *)StringLiteral_22134/*"mstMapGimmickLayer"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    442,
    (Il2CppObject *)StringLiteral_22008/*"mstEventDataLostBattle"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    443,
    (Il2CppObject *)StringLiteral_22009/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    444,
    (Il2CppObject *)StringLiteral_24766/*"userEventDataLost"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    445,
    (Il2CppObject *)StringLiteral_22166/*"mstQuestHint"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    446,
    (Il2CppObject *)StringLiteral_22092/*"mstFuncTypeDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    447,
    (Il2CppObject *)StringLiteral_21938/*"mstBuffConvert"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    448,
    (Il2CppObject *)StringLiteral_22213/*"mstSkillGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    449,
    (Il2CppObject *)StringLiteral_22214/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    450,
    (Il2CppObject *)StringLiteral_22215/*"mstSkillIndividuality"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    451,
    (Il2CppObject *)StringLiteral_22194/*"mstRestrictionBase"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    452,
    (Il2CppObject *)StringLiteral_22196/*"mstRestrictionSlot"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    453,
    (Il2CppObject *)StringLiteral_22197/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    454,
    (Il2CppObject *)StringLiteral_22195/*"mstRestrictionMessage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    455,
    (Il2CppObject *)StringLiteral_22198/*"mstRestrictionWhole"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    456,
    (Il2CppObject *)StringLiteral_22090/*"mstFuncDisp"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    457,
    (Il2CppObject *)StringLiteral_22005/*"mstEventCommandAssist"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    458,
    (Il2CppObject *)StringLiteral_22035/*"mstEventMissionGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    459,
    (Il2CppObject *)StringLiteral_21958/*"mstCombineLimitRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    460,
    (Il2CppObject *)StringLiteral_22292/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    461,
    (Il2CppObject *)StringLiteral_22120/*"mstHeelPortrait"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    462,
    (Il2CppObject *)StringLiteral_24798/*"userHeelPortrait"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    463,
    (Il2CppObject *)StringLiteral_22538/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    464,
    (Il2CppObject *)StringLiteral_22101/*"mstGachaExtraGift"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    465,
    (Il2CppObject *)StringLiteral_22036/*"mstEventMural"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    466,
    (Il2CppObject *)StringLiteral_24938/*"viewWaveEnemy"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    467,
    (Il2CppObject *)StringLiteral_21929/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    468,
    (Il2CppObject *)StringLiteral_21925/*"mstBlankEarthGimmick"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    469,
    (Il2CppObject *)StringLiteral_22283/*"mstTerminalOverwrite"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    470,
    (Il2CppObject *)StringLiteral_19465/*"exchangeSvt"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    471,
    (Il2CppObject *)StringLiteral_22310/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    472,
    (Il2CppObject *)StringLiteral_22312/*"mstWarBoardEvent"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    473,
    (Il2CppObject *)StringLiteral_22313/*"mstWarBoardEventScript"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    474,
    (Il2CppObject *)StringLiteral_22330/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    475,
    (Il2CppObject *)StringLiteral_22328/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    476,
    (Il2CppObject *)StringLiteral_22308/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    477,
    (Il2CppObject *)StringLiteral_22324/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    478,
    (Il2CppObject *)StringLiteral_22314/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    479,
    (Il2CppObject *)StringLiteral_22266/*"mstSvtProfilePush"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    480,
    (Il2CppObject *)StringLiteral_22136/*"mstMapGimmickPath"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    481,
    (Il2CppObject *)StringLiteral_22137/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    482,
    (Il2CppObject *)StringLiteral_22261/*"mstSvtOverwrite"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    483,
    (Il2CppObject *)StringLiteral_22124/*"mstIndividualityPolicy"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    484,
    (Il2CppObject *)StringLiteral_22123/*"mstIndividualityPersonality"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    485,
    (Il2CppObject *)StringLiteral_21909/*"mstAttri"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    486,
    (Il2CppObject *)StringLiteral_22280/*"mstSvtVoicePattern"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    487,
    (Il2CppObject *)StringLiteral_24797/*"userGameCommon"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    488,
    (Il2CppObject *)StringLiteral_22264/*"mstSvtPhoto"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    489,
    (Il2CppObject *)StringLiteral_22144/*"mstMasterPhoto"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    490,
    (Il2CppObject *)StringLiteral_22156/*"mstPhotoFrame"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    491,
    (Il2CppObject *)StringLiteral_22341/*"mstWarMessage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    492,
    (Il2CppObject *)StringLiteral_22160/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    493,
    (Il2CppObject *)StringLiteral_22083/*"mstExcludeMotionCond"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    494,
    (Il2CppObject *)StringLiteral_24801/*"userInterruptionQuest"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    495,
    (Il2CppObject *)StringLiteral_22274/*"mstSvtTransform"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    496,
    (Il2CppObject *)StringLiteral_22140/*"mstMapUpdateSchedule"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    497,
    (Il2CppObject *)StringLiteral_22173/*"mstQuestPhasePresent"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    498,
    (Il2CppObject *)StringLiteral_24745/*"userAccountLinkage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    499,
    (Il2CppObject *)StringLiteral_22148/*"mstMissionNaviTransition"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    500,
    (Il2CppObject *)StringLiteral_22074/*"mstEventTradeGoods"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    501,
    (Il2CppObject *)StringLiteral_22075/*"mstEventTradePickup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    502,
    (Il2CppObject *)StringLiteral_22076/*"mstEventTradeStore"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    503,
    (Il2CppObject *)StringLiteral_24784/*"userEventTrade"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    504,
    (Il2CppObject *)StringLiteral_22147/*"mstMissionNaviQuest"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    505,
    (Il2CppObject *)StringLiteral_22878/*"paymentHistory"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    506,
    (Il2CppObject *)StringLiteral_24785/*"userExternalPaymentStone"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    507,
    (Il2CppObject *)StringLiteral_22172/*"mstQuestPhaseIndividuality"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    508,
    (Il2CppObject *)StringLiteral_24935/*"viewGachaFeaturedSvt"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    514,
    (Il2CppObject *)StringLiteral_21981/*"mstEffectMovie"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    509,
    (Il2CppObject *)StringLiteral_22105/*"mstGachaPickupCollateral"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    510,
    (Il2CppObject *)StringLiteral_22106/*"mstGachaPickupCollateralGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    511,
    (Il2CppObject *)StringLiteral_21920/*"mstBattlePoint"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    512,
    (Il2CppObject *)StringLiteral_21921/*"mstBattlePointPhase"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    513,
    (Il2CppObject *)StringLiteral_22235/*"mstSvtBattlePoint"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    515,
    (Il2CppObject *)StringLiteral_22155/*"mstPaymentLimit"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    516,
    (Il2CppObject *)StringLiteral_24805/*"userPaymentLimit"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    517,
    (Il2CppObject *)StringLiteral_22199/*"mstRoadmap"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    518,
    (Il2CppObject *)StringLiteral_24815/*"userRecommendSupport"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    520,
    (Il2CppObject *)StringLiteral_22190/*"mstRecommendAdviceMessage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    519,
    (Il2CppObject *)StringLiteral_22191/*"mstRecommendSupportQuest"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    521,
    (Il2CppObject *)StringLiteral_24814/*"userRecommendFollower"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    522,
    (Il2CppObject *)StringLiteral_22126/*"mstItemDropEfficiency"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    523,
    (Il2CppObject *)StringLiteral_21926/*"mstBlankEarthGimmickAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    524,
    (Il2CppObject *)StringLiteral_22343/*"mstWarRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    525,
    (Il2CppObject *)StringLiteral_22201/*"mstSelectBonusBase"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    526,
    (Il2CppObject *)StringLiteral_22200/*"mstSelectBonus"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    527,
    (Il2CppObject *)StringLiteral_22151/*"mstMyroomSvtSpecialImage"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    528,
    (Il2CppObject *)StringLiteral_22208/*"mstShopReset"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    529,
    (Il2CppObject *)StringLiteral_22535/*"npcSvtDisplayTypeDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    530,
    (Il2CppObject *)StringLiteral_22087/*"mstFriendshipSvt"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    531,
    (Il2CppObject *)StringLiteral_19466/*"exchangeSvtCoinGivenNum"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    532,
    (Il2CppObject *)StringLiteral_21942/*"mstChaldeaGatePickup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    533,
    (Il2CppObject *)StringLiteral_22340/*"mstWarGroupIgnore"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    534,
    (Il2CppObject *)StringLiteral_22122/*"mstImagePartsGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    535,
    (Il2CppObject *)StringLiteral_24800/*"userImagePartsGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    536,
    (Il2CppObject *)StringLiteral_22146/*"mstMissionItemDisplay"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    537,
    (Il2CppObject *)StringLiteral_22188/*"mstQuestUseItemGroup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    538,
    (Il2CppObject *)StringLiteral_22189/*"mstQuestUseItemPickup"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    539,
    (Il2CppObject *)StringLiteral_24771/*"userEventItemLinkSvt"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    540,
    (Il2CppObject *)StringLiteral_22167/*"mstQuestHintOverwrite"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    541,
    (Il2CppObject *)StringLiteral_23194/*"reachedWaveInfo"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    542,
    (Il2CppObject *)StringLiteral_22111/*"mstGallery"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    543,
    (Il2CppObject *)StringLiteral_22113/*"mstGalleryResource"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    544,
    (Il2CppObject *)StringLiteral_22272/*"mstSvtSkillAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    545,
    (Il2CppObject *)StringLiteral_22112/*"mstGalleryFolderRelease"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    546,
    (Il2CppObject *)StringLiteral_24830/*"userSvtFirstGetTime"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    547,
    (Il2CppObject *)StringLiteral_22164/*"mstQuestExtension"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    548,
    (Il2CppObject *)StringLiteral_24831/*"userSvtGrand"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    549,
    (Il2CppObject *)StringLiteral_22117/*"mstGrandGraph"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    550,
    (Il2CppObject *)StringLiteral_22118/*"mstGrandGraphDetail"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    551,
    (Il2CppObject *)StringLiteral_24749/*"userClassStatistics"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    552,
    (Il2CppObject *)StringLiteral_22014/*"mstEventEquipSkillParts"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    553,
    (Il2CppObject *)StringLiteral_22141/*"mstMasterIndividualitySelect"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    554,
    (Il2CppObject *)StringLiteral_22150/*"mstMyroomAddBgDiff"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    555,
    (Il2CppObject *)StringLiteral_21922/*"mstBattleScript"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    556,
    (Il2CppObject *)StringLiteral_21979/*"mstDropAdd"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  DataNameKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_DataNameKind_Kind__string__o *)v1;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)DataNameKind_TypeInfo->static_fields, (int32_t)v1, v4, v5, v6, v7, v8, v9);
}


void DataNameKind___ctor(DataNameKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *DataNameKind__GetName(int32_t kind, const MethodInfo *method)
{
  DataNameKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4D2B6FC & 1) == 0 )
  {
    sub_1C94098(&DataNameKind_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_4D2B6FC = 1;
  }
  v3 = DataNameKind_TypeInfo;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
    v3 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1C942F0(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_34EAC14 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}