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

  if ( (byte_4E038F8 & 1) == 0 )
  {
    sub_1CE6700(&DataNameKind_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_1CE6700(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_1CE6700(&StringLiteral_22204/*"mstEventTradeGoods"*/);
    sub_1CE6700(&StringLiteral_24955/*"userGameCommon"*/);
    sub_1CE6700(&StringLiteral_22164/*"mstEventMissionConditionDetail"*/);
    sub_1CE6700(&StringLiteral_22418/*"mstTreasureBoxGift"*/);
    sub_1CE6700(&StringLiteral_22096/*"mstCommandCodeComment"*/);
    sub_1CE6700(&StringLiteral_22160/*"mstEventMissionAction"*/);
    sub_1CE6700(&StringLiteral_24921/*"userEventAlloutBattle"*/);
    sub_1CE6700(&StringLiteral_23335/*"reachedWaveInfo"*/);
    sub_1CE6700(&StringLiteral_22125/*"mstEventBonusFilterGroupInfo"*/);
    sub_1CE6700(&StringLiteral_24972/*"userRecommendFollower"*/);
    sub_1CE6700(&StringLiteral_22308/*"mstQuestReleaseOverwrite"*/);
    sub_1CE6700(&StringLiteral_22268/*"mstMapGimmickRelease"*/);
    sub_1CE6700(&StringLiteral_22231/*"mstGachaExtraGift"*/);
    sub_1CE6700(&StringLiteral_22672/*"npcSvtFollowerIndividuality"*/);
    sub_1CE6700(&StringLiteral_22127/*"mstEventBossStatusUi"*/);
    sub_1CE6700(&StringLiteral_24981/*"userSvtAppendPassiveSkillLv"*/);
    sub_1CE6700(&StringLiteral_22080/*"mstClassRelation"*/);
    sub_1CE6700(&StringLiteral_22034/*"mstAiAct"*/);
    sub_1CE6700(&StringLiteral_22363/*"mstSvtAnimationOverwrite"*/);
    sub_1CE6700(&StringLiteral_22310/*"mstQuestRestriction"*/);
    sub_1CE6700(&StringLiteral_22107/*"mstCv"*/);
    sub_1CE6700(&StringLiteral_24926/*"userEventDigging"*/);
    sub_1CE6700(&StringLiteral_24394/*"tblUserGame"*/);
    sub_1CE6700(&StringLiteral_22138/*"mstEventDataLostBattle"*/);
    sub_1CE6700(&StringLiteral_22128/*"mstEventBuddyPoint"*/);
    sub_1CE6700(&StringLiteral_22054/*"mstBgmRelease"*/);
    sub_1CE6700(&StringLiteral_22390/*"mstSvtMaterialTd"*/);
    sub_1CE6700(&StringLiteral_22101/*"mstCommonRelease"*/);
    sub_1CE6700(&StringLiteral_22216/*"mstFriendship"*/);
    sub_1CE6700(&StringLiteral_24906/*"userClassBoardSquare"*/);
    sub_1CE6700(&StringLiteral_22105/*"mstConstantLong"*/);
    sub_1CE6700(&StringLiteral_22079/*"mstClassBoardSquare"*/);
    sub_1CE6700(&StringLiteral_24985/*"userSvtCommandCode"*/);
    sub_1CE6700(&StringLiteral_22291/*"mstQuestBehavior"*/);
    sub_1CE6700(&StringLiteral_22256/*"mstItemDropEfficiency"*/);
    sub_1CE6700(&StringLiteral_22389/*"mstSvtMaterialFolder"*/);
    sub_1CE6700(&StringLiteral_22465/*"mstWarBoardStagePieceDetail"*/);
    sub_1CE6700(&StringLiteral_22205/*"mstEventTradePickup"*/);
    sub_1CE6700(&StringLiteral_22126/*"mstEventBonusFilterGroupMember"*/);
    sub_1CE6700(&StringLiteral_22296/*"mstQuestHint"*/);
    sub_1CE6700(&StringLiteral_22099/*"mstCommandSpell"*/);
    sub_1CE6700(&StringLiteral_22032/*"mstAdCheckPoint"*/);
    sub_1CE6700(&StringLiteral_22287/*"mstPrivilege"*/);
    sub_1CE6700(&StringLiteral_22297/*"mstQuestHintOverwrite"*/);
    sub_1CE6700(&StringLiteral_22061/*"mstBoardMessageRelease"*/);
    sub_1CE6700(&StringLiteral_22237/*"mstGachaRelease"*/);
    sub_1CE6700(&StringLiteral_24917/*"userDeleteReservation"*/);
    sub_1CE6700(&StringLiteral_22417/*"mstTreasureBox"*/);
    sub_1CE6700(&StringLiteral_24958/*"userImagePartsGroup"*/);
    sub_1CE6700(&StringLiteral_22116/*"mstEquipExp"*/);
    sub_1CE6700(&StringLiteral_22123/*"mstEventBoardGameTokenReward"*/);
    sub_1CE6700(&StringLiteral_22370/*"mstSvtCoin"*/);
    sub_1CE6700(&StringLiteral_22401/*"mstSvtScriptMultiple"*/);
    sub_1CE6700(&StringLiteral_22275/*"mstMaterialFolder"*/);
    sub_1CE6700(&StringLiteral_22134/*"mstEventCombineCostume"*/);
    sub_1CE6700(&StringLiteral_22293/*"mstQuestDateRange"*/);
    sub_1CE6700(&StringLiteral_22461/*"mstWarBoardStageBoss"*/);
    sub_1CE6700(&StringLiteral_22068/*"mstBuffConvert"*/);
    sub_1CE6700(&StringLiteral_22319/*"mstQuestUseItemPickup"*/);
    sub_1CE6700(&StringLiteral_22041/*"mstAuraEffect"*/);
    sub_1CE6700(&StringLiteral_22182/*"mstEventRaceResult"*/);
    sub_1CE6700(&StringLiteral_22332/*"mstSetItem"*/);
    sub_1CE6700(&StringLiteral_22669/*"npcSvtDisplayTypeDetail"*/);
    sub_1CE6700(&StringLiteral_22355/*"mstStaffPhotoCostume"*/);
    sub_1CE6700(&StringLiteral_22242/*"mstGalleryFolderRelease"*/);
    sub_1CE6700(&StringLiteral_22322/*"mstRecover"*/);
    sub_1CE6700(&StringLiteral_22197/*"mstEventStatusQuest"*/);
    sub_1CE6700(&StringLiteral_24923/*"userEventCooltimeReward"*/);
    sub_1CE6700(&StringLiteral_22285/*"mstPaymentLimit"*/);
    sub_1CE6700(&StringLiteral_22439/*"mstWarBoardActionTrendGroup"*/);
    sub_1CE6700(&StringLiteral_24971/*"userQuestRoute"*/);
    sub_1CE6700(&StringLiteral_22347/*"mstSkillLv"*/);
    sub_1CE6700(&StringLiteral_22382/*"mstSvtGroup"*/);
    sub_1CE6700(&StringLiteral_22426/*"mstVoiceClosedMessage"*/);
    sub_1CE6700(&StringLiteral_22147/*"mstEventExpeditionPiece"*/);
    sub_1CE6700(&StringLiteral_22290/*"mstQuestAutoOrganizationAdjust"*/);
    sub_1CE6700(&StringLiteral_22391/*"mstSvtMultiPortrait"*/);
    sub_1CE6700(&StringLiteral_22150/*"mstEventFilter"*/);
    sub_1CE6700(&StringLiteral_22277/*"mstMissionNaviQuest"*/);
    sub_1CE6700(&StringLiteral_24973/*"userRecommendSupport"*/);
    sub_1CE6700(&StringLiteral_24960/*"userItem"*/);
    sub_1CE6700(&StringLiteral_22146/*"mstEventExpedition"*/);
    sub_1CE6700(&StringLiteral_22181/*"mstEventRace"*/);
    sub_1CE6700(&StringLiteral_22311/*"mstQuestRestrictionInfo"*/);
    sub_1CE6700(&StringLiteral_22309/*"mstQuestReset"*/);
    sub_1CE6700(&StringLiteral_24927/*"userEventExpedition"*/);
    sub_1CE6700(&StringLiteral_22153/*"mstEventFortificationSvt"*/);
    sub_1CE6700(&StringLiteral_22466/*"mstWarBoardStageReinforcements"*/);
    sub_1CE6700(&StringLiteral_22074/*"mstClassBoardBase"*/);
    sub_1CE6700(&StringLiteral_22112/*"mstEnemyMaster"*/);
    sub_1CE6700(&StringLiteral_22042/*"mstAuraEffectPosOverwrite"*/);
    sub_1CE6700(&StringLiteral_22326/*"mstRestrictionSlot"*/);
    sub_1CE6700(&StringLiteral_22239/*"mstGachaSub"*/);
    sub_1CE6700(&StringLiteral_22201/*"mstEventSvtPointRank"*/);
    sub_1CE6700(&StringLiteral_22174/*"mstEventPointGroup"*/);
    sub_1CE6700(&StringLiteral_22120/*"mstEventAdd"*/);
    sub_1CE6700(&StringLiteral_22114/*"mstEquip"*/);
    sub_1CE6700(&StringLiteral_22186/*"mstEventRecipeGift"*/);
    sub_1CE6700(&StringLiteral_22413/*"mstTelop"*/);
    sub_1CE6700(&StringLiteral_24983/*"userSvtCollection"*/);
    sub_1CE6700(&StringLiteral_24933/*"userEventMissionFix"*/);
    sub_1CE6700(&StringLiteral_22324/*"mstRestrictionBase"*/);
    sub_1CE6700(&StringLiteral_22415/*"mstTips"*/);
    sub_1CE6700(&StringLiteral_22354/*"mstStaffPhoto"*/);
    sub_1CE6700(&StringLiteral_22043/*"mstBankShop"*/);
    sub_1CE6700(&StringLiteral_22212/*"mstEventVoicePlay"*/);
    sub_1CE6700(&StringLiteral_22318/*"mstQuestUseItemGroup"*/);
    sub_1CE6700(&StringLiteral_22152/*"mstEventFortificationDetail"*/);
    sub_1CE6700(&StringLiteral_24940/*"userEventSuperBoss"*/);
    sub_1CE6700(&StringLiteral_22151/*"mstEventFortification"*/);
    sub_1CE6700(&StringLiteral_22199/*"mstEventSvt"*/);
    sub_1CE6700(&StringLiteral_22430/*"mstVoicePlayGroup"*/);
    sub_1CE6700(&StringLiteral_24925/*"userEventDeck"*/);
    sub_1CE6700(&StringLiteral_22349/*"mstSpotAdd"*/);
    sub_1CE6700(&StringLiteral_22092/*"mstCombineSkill"*/);
    sub_1CE6700(&StringLiteral_22458/*"mstWarBoardSquare"*/);
    sub_1CE6700(&StringLiteral_22069/*"mstBuffTypeDetail"*/);
    sub_1CE6700(&StringLiteral_22436/*"mstWarBoardActionPointClass"*/);
    sub_1CE6700(&StringLiteral_22330/*"mstSelectBonus"*/);
    sub_1CE6700(&StringLiteral_22405/*"mstSvtTransform"*/);
    sub_1CE6700(&StringLiteral_24964/*"userPresentBox"*/);
    sub_1CE6700(&StringLiteral_24941/*"userEventSvtPoint"*/);
    sub_1CE6700(&StringLiteral_24520/*"totalEventPoint"*/);
    sub_1CE6700(&StringLiteral_22094/*"mstCommandCardRankParam"*/);
    sub_1CE6700(&StringLiteral_22441/*"mstWarBoardCommonRelease"*/);
    sub_1CE6700(&StringLiteral_22361/*"mstSvt"*/);
    sub_1CE6700(&StringLiteral_24974/*"userShop"*/);
    sub_1CE6700(&StringLiteral_22121/*"mstEventBoardGameCell"*/);
    sub_1CE6700(&StringLiteral_22180/*"mstEventQuestCooltime"*/);
    sub_1CE6700(&StringLiteral_22222/*"mstFuncTypeDetail"*/);
    sub_1CE6700(&StringLiteral_22358/*"mstStatusEffectPosOverwrite"*/);
    sub_1CE6700(&StringLiteral_19396/*"eventBoostItemUsed"*/);
    sub_1CE6700(&StringLiteral_22336/*"mstShopDetail"*/);
    sub_1CE6700(&StringLiteral_22254/*"mstIndividualityPolicy"*/);
    sub_1CE6700(&StringLiteral_22260/*"mstMapButton"*/);
    sub_1CE6700(&StringLiteral_22468/*"mstWarBoardTacticalTrend"*/);
    sub_1CE6700(&StringLiteral_22360/*"mstSubEquip"*/);
    sub_1CE6700(&StringLiteral_22352/*"mstSpotPath"*/);
    sub_1CE6700(&StringLiteral_22329/*"mstRoadmap"*/);
    sub_1CE6700(&StringLiteral_22089/*"mstCombineMaterial"*/);
    sub_1CE6700(&StringLiteral_22088/*"mstCombineLimitRelease"*/);
    sub_1CE6700(&StringLiteral_22422/*"mstTreasureDeviceLv"*/);
    sub_1CE6700(&StringLiteral_22202/*"mstEventTower"*/);
    sub_1CE6700(&StringLiteral_22341/*"mstSkill"*/);
    sub_1CE6700(&StringLiteral_24959/*"userInterruptionQuest"*/);
    sub_1CE6700(&StringLiteral_22393/*"mstSvtPassiveSkill"*/);
    sub_1CE6700(&StringLiteral_22407/*"mstSvtTreasureDeviceAdd"*/);
    sub_1CE6700(&StringLiteral_22058/*"mstBlankEarthSpotAdd"*/);
    sub_1CE6700(&StringLiteral_24968/*"userQuest"*/);
    sub_1CE6700(&StringLiteral_22163/*"mstEventMissionCondition"*/);
    sub_1CE6700(&StringLiteral_22435/*"mstWarBoardActionPoint"*/);
    sub_1CE6700(&StringLiteral_24943/*"userExternalPaymentStone"*/);
    sub_1CE6700(&StringLiteral_22082/*"mstClosedMessage"*/);
    sub_1CE6700(&StringLiteral_22189/*"mstEventRewardExtra"*/);
    sub_1CE6700(&StringLiteral_22172/*"mstEventPointActivity"*/);
    sub_1CE6700(&StringLiteral_22179/*"mstEventQuest"*/);
    sub_1CE6700(&StringLiteral_22049/*"mstBattleMessageGroup"*/);
    sub_1CE6700(&StringLiteral_25095/*"viewQuestInfo"*/);
    sub_1CE6700(&StringLiteral_22397/*"mstSvtProfilePush"*/);
    sub_1CE6700(&StringLiteral_22421/*"mstTreasureDeviceDetail"*/);
    sub_1CE6700(&StringLiteral_24904/*"userBlacklist"*/);
    sub_1CE6700(&StringLiteral_22145/*"mstEventEquipSkillRelease"*/);
    sub_1CE6700(&StringLiteral_24908/*"userCoinRoom"*/);
    sub_1CE6700(&StringLiteral_22106/*"mstConstantStr"*/);
    sub_1CE6700(&StringLiteral_22144/*"mstEventEquipSkillParts"*/);
    sub_1CE6700(&StringLiteral_22241/*"mstGallery"*/);
    sub_1CE6700(&StringLiteral_24989/*"userSvtGrand"*/);
    sub_1CE6700(&StringLiteral_22359/*"mstStoneShop"*/);
    sub_1CE6700(&StringLiteral_22270/*"mstMapUpdateSchedule"*/);
    sub_1CE6700(&StringLiteral_22416/*"mstTotalLogin"*/);
    sub_1CE6700(&StringLiteral_22283/*"mstOpeningMovie"*/);
    sub_1CE6700(&StringLiteral_22104/*"mstConstant"*/);
    sub_1CE6700(&StringLiteral_22317/*"mstQuestSpotRelease"*/);
    sub_1CE6700(&StringLiteral_22097/*"mstCommandCodeSkill"*/);
    sub_1CE6700(&StringLiteral_22288/*"mstQuest"*/);
    sub_1CE6700(&StringLiteral_22411/*"mstSvtVoicePattern"*/);
    sub_1CE6700(&StringLiteral_22208/*"mstEventTutorialCond"*/);
    sub_1CE6700(&StringLiteral_22056/*"mstBlankEarthGimmickAdd"*/);
    sub_1CE6700(&StringLiteral_22434/*"mstWarBoard"*/);
    sub_1CE6700(&StringLiteral_22183/*"mstEventRaid"*/);
    sub_1CE6700(&StringLiteral_22053/*"mstBgm"*/);
    sub_1CE6700(&StringLiteral_22195/*"mstEventScriptRelease"*/);
    sub_1CE6700(&StringLiteral_24967/*"userProfile"*/);
    sub_1CE6700(&StringLiteral_22162/*"mstEventMissionAdd"*/);
    sub_1CE6700(&StringLiteral_22431/*"mstVoiceRelease"*/);
    sub_1CE6700(&StringLiteral_22306/*"mstQuestRandomGroup"*/);
    sub_1CE6700(&StringLiteral_22278/*"mstMissionNaviTransition"*/);
    sub_1CE6700(&StringLiteral_22338/*"mstShopRelease"*/);
    sub_1CE6700(&StringLiteral_24993/*"userSvtStorage"*/);
    sub_1CE6700(&StringLiteral_22235/*"mstGachaPickupCollateral"*/);
    sub_1CE6700(&StringLiteral_22320/*"mstRecommendAdviceMessage"*/);
    sub_1CE6700(&StringLiteral_22321/*"mstRecommendSupportQuest"*/);
    sub_1CE6700(&StringLiteral_24980/*"userSvtAppendPassiveSkill"*/);
    sub_1CE6700(&StringLiteral_22362/*"mstSvtAdd"*/);
    sub_1CE6700(&StringLiteral_22247/*"mstGrandGraph"*/);
    sub_1CE6700(&StringLiteral_22472/*"mstWarMessage"*/);
    sub_1CE6700(&StringLiteral_22059/*"mstBlankEarthSpotNavimenu"*/);
    sub_1CE6700(&StringLiteral_22047/*"mstBattleMasterImage"*/);
    sub_1CE6700(&StringLiteral_22343/*"mstSkillDetail"*/);
    sub_1CE6700(&StringLiteral_22272/*"mstMasterMission"*/);
    sub_1CE6700(&StringLiteral_22394/*"mstSvtPassiveSkillRelease"*/);
    sub_1CE6700(&StringLiteral_22348/*"mstSpot"*/);
    sub_1CE6700(&StringLiteral_22159/*"mstEventMission"*/);
    sub_1CE6700(&StringLiteral_22091/*"mstCombineQpSvtEquip"*/);
    sub_1CE6700(&StringLiteral_22171/*"mstEventPoint"*/);
    sub_1CE6700(&StringLiteral_22193/*"mstEventRewardSet"*/);
    sub_1CE6700(&StringLiteral_22168/*"mstEventPanelMapDetail"*/);
    sub_1CE6700(&StringLiteral_22368/*"mstSvtCardAdd"*/);
    sub_1CE6700(&StringLiteral_22259/*"mstMap"*/);
    sub_1CE6700(&StringLiteral_22141/*"mstEventDigging"*/);
    sub_1CE6700(&StringLiteral_24949/*"userGacha"*/);
    sub_1CE6700(&StringLiteral_22307/*"mstQuestRelease"*/);
    sub_1CE6700(&StringLiteral_22140/*"mstEventDetail"*/);
    sub_1CE6700(&StringLiteral_22252/*"mstImagePartsGroup"*/);
    sub_1CE6700(&StringLiteral_22269/*"mstMapLayer"*/);
    sub_1CE6700(&StringLiteral_22445/*"mstWarBoardFutureActionTrend"*/);
    sub_1CE6700(&StringLiteral_22346/*"mstSkillIndividuality"*/);
    sub_1CE6700(&StringLiteral_22065/*"mstBoxGachaBaseDetail"*/);
    sub_1CE6700(&StringLiteral_24393/*"tblFriend"*/);
    sub_1CE6700(&StringLiteral_17307/*"beforeBirthDay"*/);
    sub_1CE6700(&StringLiteral_22157/*"mstEventItemDisplayRelease"*/);
    sub_1CE6700(&StringLiteral_22243/*"mstGalleryResource"*/);
    sub_1CE6700(&StringLiteral_17229/*"battle"*/);
    sub_1CE6700(&StringLiteral_22337/*"mstShopGroup"*/);
    sub_1CE6700(&StringLiteral_22040/*"mstAttriRelation"*/);
    sub_1CE6700(&StringLiteral_24909/*"userCommandCode"*/);
    sub_1CE6700(&StringLiteral_22132/*"mstEventCampaignRelease"*/);
    sub_1CE6700(&StringLiteral_22379/*"mstSvtFilter"*/);
    sub_1CE6700(&StringLiteral_22305/*"mstQuestRacePoint"*/);
    sub_1CE6700(&StringLiteral_22206/*"mstEventTradeStore"*/);
    sub_1CE6700(&StringLiteral_22846/*"otherUserGame"*/);
    sub_1CE6700(&StringLiteral_22051/*"mstBattlePointPhase"*/);
    sub_1CE6700(&StringLiteral_22156/*"mstEventItemDisplayGroup"*/);
    sub_1CE6700(&StringLiteral_22071/*"mstCard"*/);
    sub_1CE6700(&StringLiteral_22055/*"mstBlankEarthGimmick"*/);
    sub_1CE6700(&StringLiteral_22048/*"mstBattleMessage"*/);
    sub_1CE6700(&StringLiteral_22327/*"mstRestrictionSlotDetail"*/);
    sub_1CE6700(&StringLiteral_22044/*"mstBanner"*/);
    sub_1CE6700(&StringLiteral_22113/*"mstEnemyMasterBattle"*/);
    sub_1CE6700(&StringLiteral_22155/*"mstEventItemDisplay"*/);
    sub_1CE6700(&StringLiteral_22070/*"mstCampaignInfo"*/);
    sub_1CE6700(&StringLiteral_22406/*"mstSvtTreasureDevice"*/);
    sub_1CE6700(&StringLiteral_22404/*"mstSvtSkillRelease"*/);
    sub_1CE6700(&StringLiteral_22286/*"mstPhotoFrame"*/);
    sub_1CE6700(&StringLiteral_22103/*"mstCompleteMission"*/);
    sub_1CE6700(&StringLiteral_22086/*"mstCombineLimit"*/);
    sub_1CE6700(&StringLiteral_22248/*"mstGrandGraphDetail"*/);
    sub_1CE6700(&StringLiteral_22063/*"mstBoxGacha"*/);
    sub_1CE6700(&StringLiteral_22428/*"mstVoiceMaterialCond"*/);
    sub_1CE6700(&StringLiteral_22224/*"mstGachaAdjustAdd"*/);
    sub_1CE6700(&StringLiteral_22238/*"mstGachaStoryAdjust"*/);
    sub_1CE6700(&StringLiteral_22424/*"mstUserExp"*/);
    sub_1CE6700(&StringLiteral_22213/*"mstExcludeMotionCond"*/);
    sub_1CE6700(&StringLiteral_22447/*"mstWarBoardItem"*/);
    sub_1CE6700(&StringLiteral_22115/*"mstEquipAdd"*/);
    sub_1CE6700(&StringLiteral_22108/*"mstDialogMessage"*/);
    sub_1CE6700(&StringLiteral_22671/*"npcSvtFollower"*/);
    sub_1CE6700(&StringLiteral_22046/*"mstBattleBg"*/);
    sub_1CE6700(&StringLiteral_22075/*"mstClassBoardClass"*/);
    sub_1CE6700(&StringLiteral_24934/*"userEventPoint"*/);
    sub_1CE6700(&StringLiteral_22369/*"mstSvtChange"*/);
    sub_1CE6700(&StringLiteral_22446/*"mstWarBoardIndividualityClass"*/);
    sub_1CE6700(&StringLiteral_22226/*"mstGachaBaseCollateral"*/);
    sub_1CE6700(&StringLiteral_22303/*"mstQuestPhasePresent"*/);
    sub_1CE6700(&StringLiteral_22339/*"mstShopReset"*/);
    sub_1CE6700(&StringLiteral_22166/*"mstEventMural"*/);
    sub_1CE6700(&StringLiteral_22234/*"mstGachaPickup"*/);
    sub_1CE6700(&StringLiteral_22257/*"mstItemSelect"*/);
    sub_1CE6700(&StringLiteral_22383/*"mstSvtIndividuality"*/);
    sub_1CE6700(&StringLiteral_24920/*"userEvent"*/);
    sub_1CE6700(&StringLiteral_22469/*"mstWarBoardTreasure"*/);
    sub_1CE6700(&StringLiteral_22388/*"mstSvtLvDetail"*/);
    sub_1CE6700(&StringLiteral_22454/*"mstWarBoardRatingOffset"*/);
    sub_1CE6700(&StringLiteral_22300/*"mstQuestPhaseDetail"*/);
    sub_1CE6700(&StringLiteral_22334/*"mstShopAction"*/);
    sub_1CE6700(&StringLiteral_22279/*"mstMyroomAdd"*/);
    sub_1CE6700(&StringLiteral_22200/*"mstEventSvtFatigue"*/);
    sub_1CE6700(&StringLiteral_22148/*"mstEventFactory"*/);
    sub_1CE6700(&StringLiteral_24950/*"userGachaDrawHistory"*/);
    sub_1CE6700(&StringLiteral_24945/*"userFollower"*/);
    sub_1CE6700(&StringLiteral_22455/*"mstWarBoardRatingOffsetGroup"*/);
    sub_1CE6700(&StringLiteral_24982/*"userSvtCoin"*/);
    sub_1CE6700(&StringLiteral_22194/*"mstEventScript"*/);
    sub_1CE6700(&StringLiteral_22402/*"mstSvtSkill"*/);
    sub_1CE6700(&StringLiteral_22351/*"mstSpotLayer"*/);
    sub_1CE6700(&StringLiteral_24984/*"userSvtCommandCard"*/);
    sub_1CE6700(&StringLiteral_24969/*"userQuestInfo"*/);
    sub_1CE6700(&StringLiteral_22110/*"mstEffect"*/);
    sub_1CE6700(&StringLiteral_22255/*"mstItem"*/);
    sub_1CE6700(&StringLiteral_22331/*"mstSelectBonusBase"*/);
    sub_1CE6700(&StringLiteral_22175/*"mstEventPointGroupAdd"*/);
    sub_1CE6700(&StringLiteral_22298/*"mstQuestMessage"*/);
    sub_1CE6700(&StringLiteral_22666/*"npcFollowerRelease"*/);
    sub_1CE6700(&StringLiteral_22219/*"mstFuncCategory"*/);
    sub_1CE6700(&StringLiteral_22448/*"mstWarBoardMessage"*/);
    sub_1CE6700(&StringLiteral_24954/*"userGame"*/);
    sub_1CE6700(&StringLiteral_22244/*"mstGift"*/);
    sub_1CE6700(&StringLiteral_22456/*"mstWarBoardReinforcements"*/);
    sub_1CE6700(&StringLiteral_22122/*"mstEventBoardGameToken"*/);
    sub_1CE6700(&StringLiteral_22264/*"mstMapGimmickLayer"*/);
    sub_1CE6700(&StringLiteral_22372/*"mstSvtCommandCodeUnlock"*/);
    sub_1CE6700(&StringLiteral_22038/*"mstAssist"*/);
    sub_1CE6700(&StringLiteral_25096/*"viewWaveEnemy"*/);
    sub_1CE6700(&StringLiteral_22670/*"npcSvtEquip"*/);
    sub_1CE6700(&StringLiteral_22314/*"mstQuestScriptMaterialNext"*/);
    sub_1CE6700(&StringLiteral_22378/*"mstSvtExp"*/);
    sub_1CE6700(&StringLiteral_24979/*"userSvt"*/);
    sub_1CE6700(&StringLiteral_25092/*"viewEnemy"*/);
    sub_1CE6700(&StringLiteral_22210/*"mstEventUiRelease"*/);
    sub_1CE6700(&StringLiteral_24521/*"totalEventRace"*/);
    sub_1CE6700(&StringLiteral_22214/*"mstFieldMotion"*/);
    sub_1CE6700(&StringLiteral_22184/*"mstEventRandomMission"*/);
    sub_1CE6700(&StringLiteral_22191/*"mstEventRewardScene"*/);
    sub_1CE6700(&StringLiteral_22217/*"mstFriendshipSvt"*/);
    sub_1CE6700(&StringLiteral_22253/*"mstIndividualityPersonality"*/);
    sub_1CE6700(&StringLiteral_22085/*"mstCombineCostume"*/);
    sub_1CE6700(&StringLiteral_22084/*"mstCombineAppendPassiveSkill"*/);
    sub_1CE6700(&StringLiteral_22143/*"mstEventDiggingReward"*/);
    sub_1CE6700(&StringLiteral_22437/*"mstWarBoardActionTrend"*/);
    sub_1CE6700(&StringLiteral_22052/*"mstBattleScript"*/);
    sub_1CE6700(&StringLiteral_22225/*"mstGachaAppend"*/);
    sub_1CE6700(&StringLiteral_22459/*"mstWarBoardSquareIndexGroup"*/);
    sub_1CE6700(&StringLiteral_22218/*"mstFunc"*/);
    sub_1CE6700(&StringLiteral_22136/*"mstEventConquestReward"*/);
    sub_1CE6700(&StringLiteral_22442/*"mstWarBoardEffect"*/);
    sub_1CE6700(&StringLiteral_22473/*"mstWarQuestSelection"*/);
    sub_1CE6700(&StringLiteral_24914/*"userDeck"*/);
    sub_1CE6700(&StringLiteral_22273/*"mstMasterMissionDisplayInfo"*/);
    sub_1CE6700(&StringLiteral_22470/*"mstWarGroup"*/);
    sub_1CE6700(&StringLiteral_22333/*"mstShop"*/);
    sub_1CE6700(&StringLiteral_22451/*"mstWarBoardPartySkill"*/);
    sub_1CE6700(&StringLiteral_24929/*"userEventItemLinkSvt"*/);
    sub_1CE6700(&StringLiteral_22173/*"mstEventPointBuff"*/);
    sub_1CE6700(&StringLiteral_22294/*"mstQuestExtension"*/);
    sub_1CE6700(&StringLiteral_24978/*"userSupportDeck"*/);
    sub_1CE6700(&StringLiteral_22353/*"mstSpotRoad"*/);
    sub_1CE6700(&StringLiteral_22412/*"mstSvtVoiceRelation"*/);
    sub_1CE6700(&StringLiteral_22087/*"mstCombineLimitGift"*/);
    sub_1CE6700(&StringLiteral_22137/*"mstEventCooltimeReward"*/);
    sub_1CE6700(&StringLiteral_22129/*"mstEventBulletinBoard"*/);
    sub_1CE6700(&StringLiteral_22188/*"mstEventRewardBg"*/);
    sub_1CE6700(&StringLiteral_22066/*"mstBoxGachaTalk"*/);
    sub_1CE6700(&StringLiteral_24963/*"userPaymentLimit"*/);
    sub_1CE6700(&StringLiteral_22220/*"mstFuncDisp"*/);
    sub_1CE6700(&StringLiteral_22399/*"mstSvtScript"*/);
    sub_1CE6700(&StringLiteral_22261/*"mstMapCond"*/);
    sub_1CE6700(&StringLiteral_22280/*"mstMyroomAddBgDiff"*/);
    sub_1CE6700(&StringLiteral_24928/*"userEventFortification"*/);
    sub_1CE6700(&StringLiteral_22450/*"mstWarBoardOnboardSkill"*/);
    sub_1CE6700(&StringLiteral_22232/*"mstGachaGroup"*/);
    sub_1CE6700(&StringLiteral_25094/*"viewQuestEnemyInfo"*/);
    sub_1CE6700(&StringLiteral_24902/*"userAccountLinkage"*/);
    sub_1CE6700(&StringLiteral_22373/*"mstSvtComment"*/);
    sub_1CE6700(&StringLiteral_22420/*"mstTreasureDevice"*/);
    sub_1CE6700(&StringLiteral_25093/*"viewGachaFeaturedSvt"*/);
    sub_1CE6700(&StringLiteral_24962/*"userNpcSvtRecord"*/);
    sub_1CE6700(&StringLiteral_22050/*"mstBattlePoint"*/);
    sub_1CE6700(&StringLiteral_22165/*"mstEventMissionGroup"*/);
    sub_1CE6700(&StringLiteral_24970/*"userQuestRecord"*/);
    sub_1CE6700(&StringLiteral_22325/*"mstRestrictionMessage"*/);
    sub_1CE6700(&StringLiteral_22246/*"mstGiftDetail"*/);
    sub_1CE6700(&StringLiteral_22240/*"mstGachaTicket"*/);
    sub_1CE6700(&StringLiteral_22395/*"mstSvtPhoto"*/);
    sub_1CE6700(&StringLiteral_23049/*"pickupUserFollower"*/);
    sub_1CE6700(&StringLiteral_22196/*"mstEventStatus"*/);
    sub_1CE6700(&StringLiteral_22374/*"mstSvtCommentAdd"*/);
    sub_1CE6700(&StringLiteral_22392/*"mstSvtOverwrite"*/);
    sub_1CE6700(&StringLiteral_22665/*"npcFollower"*/);
    sub_1CE6700(&StringLiteral_22135/*"mstEventCommandAssist"*/);
    sub_1CE6700(&StringLiteral_19409/*"eventSvtFatigue"*/);
    sub_1CE6700(&StringLiteral_22229/*"mstGachaBonusSelectLineup"*/);
    sub_1CE6700(&StringLiteral_22130/*"mstEventBulletinBoardRelease"*/);
    sub_1CE6700(&StringLiteral_22377/*"mstSvtExceed"*/);
    sub_1CE6700(&StringLiteral_22387/*"mstSvtLimitSpoilerProtection"*/);
    sub_1CE6700(&StringLiteral_22410/*"mstSvtVoice"*/);
    sub_1CE6700(&StringLiteral_22328/*"mstRestrictionWhole"*/);
    sub_1CE6700(&StringLiteral_24952/*"userGachaExtraCount"*/);
    sub_1CE6700(&StringLiteral_22266/*"mstMapGimmickPath"*/);
    sub_1CE6700(&StringLiteral_22203/*"mstEventTowerReward"*/);
    sub_1CE6700(&StringLiteral_22081/*"mstClassRelationOverwrite"*/);
    sub_1CE6700(&StringLiteral_22033/*"mstAi"*/);
    sub_1CE6700(&StringLiteral_24905/*"userBoxGacha"*/);
    sub_1CE6700(&StringLiteral_22367/*"mstSvtCard"*/);
    sub_1CE6700(&StringLiteral_24953/*"userGachaPickupCollateral"*/);
    sub_1CE6700(&StringLiteral_24951/*"userGachaDrawLog"*/);
    sub_1CE6700(&StringLiteral_22460/*"mstWarBoardStage"*/);
    sub_1CE6700(&StringLiteral_24918/*"userEquip"*/);
    sub_1CE6700(&StringLiteral_22190/*"mstEventRewardGuideRelease"*/);
    sub_1CE6700(&StringLiteral_22076/*"mstClassBoardCommandSpell"*/);
    sub_1CE6700(&StringLiteral_22271/*"mstMasterIndividualitySelect"*/);
    sub_1CE6700(&StringLiteral_22474/*"mstWarRelease"*/);
    sub_1CE6700(&StringLiteral_22227/*"mstGachaBehavior"*/);
    sub_1CE6700(&StringLiteral_22432/*"mstWar"*/);
    sub_1CE6700(&StringLiteral_22124/*"mstEventBonusFilter"*/);
    sub_1CE6700(&StringLiteral_22316/*"mstQuestScriptRelease"*/);
    sub_1CE6700(&StringLiteral_22335/*"mstShopAdd"*/);
    sub_1CE6700(&StringLiteral_24930/*"userEventMap"*/);
    sub_1CE6700(&StringLiteral_22170/*"mstEventPanelSpot"*/);
    sub_1CE6700(&StringLiteral_22073/*"mstClass"*/);
    sub_1CE6700(&StringLiteral_24901/*"userAccessary"*/);
    sub_1CE6700(&StringLiteral_22385/*"mstSvtLimitAdd"*/);
    sub_1CE6700(&StringLiteral_22315/*"mstQuestScriptMaterialOverwrite"*/);
    sub_1CE6700(&StringLiteral_18328/*"combineExp"*/);
    sub_1CE6700(&StringLiteral_24946/*"userFormation"*/);
    sub_1CE6700(&StringLiteral_22449/*"mstWarBoardMessageScript"*/);
    sub_1CE6700(&StringLiteral_22178/*"mstEventProgressValue"*/);
    sub_1CE6700(&StringLiteral_24994/*"userSvtVoicePlayed"*/);
    sub_1CE6700(&StringLiteral_22366/*"mstSvtBattlePoint"*/);
    sub_1CE6700(&StringLiteral_22380/*"mstSvtFlag"*/);
    sub_1CE6700(&StringLiteral_22060/*"mstBoardMessage"*/);
    sub_1CE6700(&StringLiteral_22169/*"mstEventPanelScan"*/);
    sub_1CE6700(&StringLiteral_22386/*"mstSvtLimitImage"*/);
    sub_1CE6700(&StringLiteral_22142/*"mstEventDiggingBlock"*/);
    sub_1CE6700(&StringLiteral_24938/*"userEventRandomMission"*/);
    sub_1CE6700(&StringLiteral_22036/*"mstArea"*/);
    sub_1CE6700(&StringLiteral_24522/*"totalEventRaid"*/);
    sub_1CE6700(&StringLiteral_22646/*"notEndEventMissionFix"*/);
    sub_1CE6700(&StringLiteral_22340/*"mstShopScript"*/);
    sub_1CE6700(&StringLiteral_24931/*"userEventMission"*/);
    sub_1CE6700(&StringLiteral_22274/*"mstMasterPhoto"*/);
    sub_1CE6700(&StringLiteral_22161/*"mstEventMissionActionAdd"*/);
    sub_1CE6700(&StringLiteral_22093/*"mstCombineTd"*/);
    sub_1CE6700(&StringLiteral_24988/*"userSvtFirstGetTime"*/);
    sub_1CE6700(&StringLiteral_22062/*"mstBoost"*/);
    sub_1CE6700(&StringLiteral_22400/*"mstSvtScriptAdd"*/);
    sub_1CE6700(&StringLiteral_22064/*"mstBoxGachaBase"*/);
    sub_1CE6700(&StringLiteral_22045/*"mstBannerAdd"*/);
    sub_1CE6700(&StringLiteral_22031/*"mstAccessary"*/);
    sub_1CE6700(&StringLiteral_22423/*"mstTreasureDeviceSequenceWeight"*/);
    sub_1CE6700(&StringLiteral_24936/*"userEventRace"*/);
    sub_1CE6700(&StringLiteral_22295/*"mstQuestGroup"*/);
    sub_1CE6700(&StringLiteral_22177/*"mstEventPointUpperRelease"*/);
    sub_1CE6700(&StringLiteral_24992/*"userSvtLeader"*/);
    sub_1CE6700(&StringLiteral_22384/*"mstSvtLimit"*/);
    sub_1CE6700(&StringLiteral_24944/*"userFollow"*/);
    sub_1CE6700(&StringLiteral_22158/*"mstEventLocationCampaign"*/);
    sub_1CE6700(&StringLiteral_22090/*"mstCombineQp"*/);
    sub_1CE6700(&StringLiteral_22119/*"mstEvent"*/);
    sub_1CE6700(&StringLiteral_22381/*"mstSvtFlagRelease"*/);
    sub_1CE6700(&StringLiteral_24947/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_1CE6700(&StringLiteral_24966/*"userPrivilege"*/);
    sub_1CE6700(&StringLiteral_22095/*"mstCommandCode"*/);
    sub_1CE6700(&StringLiteral_22364/*"mstSvtAppendPassiveSkill"*/);
    sub_1CE6700(&StringLiteral_22154/*"mstEventGroup"*/);
    sub_1CE6700(&StringLiteral_22228/*"mstGachaBonusSelect"*/);
    sub_1CE6700(&StringLiteral_24922/*"userEventBoardGameToken"*/);
    sub_1CE6700(&StringLiteral_22276/*"mstMissionItemDisplay"*/);
    sub_1CE6700(&StringLiteral_22281/*"mstMyroomSvtSpecialImage"*/);
    sub_1CE6700(&StringLiteral_22457/*"mstWarBoardRoad"*/);
    sub_1CE6700(&StringLiteral_22067/*"mstBuff"*/);
    sub_1CE6700(&StringLiteral_25155/*"warBoardData"*/);
    sub_1CE6700(&StringLiteral_22251/*"mstIllustrator"*/);
    sub_1CE6700(&StringLiteral_24517/*"totalBoxGacha"*/);
    sub_1CE6700(&StringLiteral_22398/*"mstSvtRarity"*/);
    sub_1CE6700(&StringLiteral_22433/*"mstWarAdd"*/);
    sub_1CE6700(&StringLiteral_22267/*"mstMapGimmickPathRelease"*/);
    sub_1CE6700(&StringLiteral_24948/*"userFriendRequestHistory"*/);
    sub_1CE6700(&StringLiteral_24899/*"user"*/);
    sub_1CE6700(&StringLiteral_17548/*"boxGachaHistory"*/);
    sub_1CE6700(&StringLiteral_22221/*"mstFuncGroup"*/);
    sub_1CE6700(&StringLiteral_22100/*"mstCommonConsume"*/);
    sub_1CE6700(&StringLiteral_22444/*"mstWarBoardEventScript"*/);
    sub_1CE6700(&StringLiteral_22245/*"mstGiftAdd"*/);
    sub_1CE6700(&StringLiteral_22209/*"mstEventUi"*/);
    sub_1CE6700(&StringLiteral_22350/*"mstSpotImage"*/);
    sub_1CE6700(&StringLiteral_22376/*"mstSvtCostumeRelease"*/);
    sub_1CE6700(&StringLiteral_24907/*"userClassStatistics"*/);
    sub_1CE6700(&StringLiteral_22262/*"mstMapGimmick"*/);
    sub_1CE6700(&StringLiteral_22302/*"mstQuestPhaseIndividuality"*/);
    sub_1CE6700(&StringLiteral_22207/*"mstEventTutorial"*/);
    sub_1CE6700(&StringLiteral_22471/*"mstWarGroupIgnore"*/);
    sub_1CE6700(&StringLiteral_22467/*"mstWarBoardStageWall"*/);
    sub_1CE6700(&StringLiteral_24942/*"userEventTrade"*/);
    sub_1CE6700(&StringLiteral_22035/*"mstAiField"*/);
    sub_1CE6700(&StringLiteral_22215/*"mstFriendPointGachaAdjust"*/);
    sub_1CE6700(&StringLiteral_22409/*"mstSvtTreasureDeviceRelease"*/);
    sub_1CE6700(&StringLiteral_22299/*"mstQuestPhase"*/);
    sub_1CE6700(&StringLiteral_24924/*"userEventDataLost"*/);
    sub_1CE6700(&StringLiteral_22365/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_1CE6700(&StringLiteral_22408/*"mstSvtTreasureDeviceDamage"*/);
    sub_1CE6700(&StringLiteral_22356/*"mstStage"*/);
    sub_1CE6700(&StringLiteral_22083/*"mstCombine"*/);
    sub_1CE6700(&StringLiteral_22131/*"mstEventCampaign"*/);
    sub_1CE6700(&StringLiteral_22464/*"mstWarBoardStageNpc"*/);
    sub_1CE6700(&StringLiteral_23016/*"paymentHistory"*/);
    sub_1CE6700(&StringLiteral_19575/*"exchangeSvt"*/);
    sub_1CE6700(&StringLiteral_22357/*"mstStageRemap"*/);
    sub_1CE6700(&StringLiteral_22323/*"mstRestriction"*/);
    sub_1CE6700(&StringLiteral_22312/*"mstQuestScript"*/);
    sub_1CE6700(&StringLiteral_22192/*"mstEventRewardSceneRelease"*/);
    sub_1CE6700(&StringLiteral_22427/*"mstVoiceCond"*/);
    sub_1CE6700(&StringLiteral_24977/*"userSubEquip"*/);
    sub_1CE6700(&StringLiteral_22185/*"mstEventRecipe"*/);
    sub_1CE6700(&StringLiteral_22375/*"mstSvtCostume"*/);
    sub_1CE6700(&StringLiteral_22396/*"mstSvtProfile"*/);
    sub_1CE6700(&StringLiteral_22102/*"mstCommonRestriction"*/);
    sub_1CE6700(&StringLiteral_24956/*"userHeelPortrait"*/);
    sub_1CE6700(&StringLiteral_22345/*"mstSkillGroupOverwrite"*/);
    sub_1CE6700(&StringLiteral_24910/*"userCommandCodeCollection"*/);
    sub_1CE6700(&StringLiteral_22098/*"mstCommandCodeSkillRelease"*/);
    sub_1CE6700(&StringLiteral_22111/*"mstEffectMovie"*/);
    sub_1CE6700(&StringLiteral_22304/*"mstQuestPickup"*/);
    sub_1CE6700(&StringLiteral_22463/*"mstWarBoardStageLayout"*/);
    sub_1CE6700(&StringLiteral_22438/*"mstWarBoardActionTrendCond"*/);
    sub_1CE6700(&StringLiteral_22133/*"mstEventCombine"*/);
    sub_1CE6700(&StringLiteral_22452/*"mstWarBoardQuest"*/);
    sub_1CE6700(&StringLiteral_22292/*"mstQuestConsumeItem"*/);
    sub_1CE6700(&StringLiteral_22301/*"mstQuestPhaseDetailAdd"*/);
    sub_1CE6700(&StringLiteral_22250/*"mstHeelPortrait"*/);
    sub_1CE6700(&StringLiteral_19576/*"exchangeSvtCoinGivenNum"*/);
    sub_1CE6700(&StringLiteral_24965/*"userPresentHistory"*/);
    sub_1CE6700(&StringLiteral_24903/*"userBgImagePartsGroup"*/);
    sub_1CE6700(&StringLiteral_22072/*"mstChaldeaGatePickup"*/);
    sub_1CE6700(&StringLiteral_22453/*"mstWarBoardRatingBase"*/);
    sub_1CE6700(&StringLiteral_22233/*"mstGachaImage"*/);
    sub_1CE6700(&StringLiteral_22117/*"mstEquipImage"*/);
    sub_1CE6700(&StringLiteral_24937/*"userEventRaid"*/);
    sub_1CE6700(&StringLiteral_22371/*"mstSvtCollection"*/);
    sub_1CE6700(&StringLiteral_19967/*"friendshipQuestDialogInfo"*/);
    sub_1CE6700(&StringLiteral_22282/*"mstNews"*/);
    sub_1CE6700(&StringLiteral_22223/*"mstGacha"*/);
    sub_1CE6700(&StringLiteral_22344/*"mstSkillGroup"*/);
    sub_1CE6700(&StringLiteral_22249/*"mstGuide"*/);
    sub_1CE6700(&StringLiteral_22236/*"mstGachaPickupCollateralGroup"*/);
    sub_1CE6700(&StringLiteral_22078/*"mstClassBoardLock"*/);
    sub_1CE6700(&StringLiteral_22109/*"mstDropAdd"*/);
    sub_1CE6700(&StringLiteral_22176/*"mstEventPointUpper"*/);
    sub_1CE6700(&StringLiteral_22057/*"mstBlankEarthSpot"*/);
    sub_1CE6700(&StringLiteral_22414/*"mstTerminalOverwrite"*/);
    sub_1CE6700(&StringLiteral_22118/*"mstEquipSkill"*/);
    sub_1CE6700(&StringLiteral_22211/*"mstEventUiValue"*/);
    sub_1CE6700(&StringLiteral_24912/*"userContinue"*/);
    sub_1CE6700(&StringLiteral_22289/*"mstQuestAdd"*/);
    sub_1CE6700(&StringLiteral_22077/*"mstClassBoardLine"*/);
    sub_1CE6700(&StringLiteral_24841/*"updateProfileDialogInfo"*/);
    sub_1CE6700(&StringLiteral_22425/*"mstVoice"*/);
    sub_1CE6700(&StringLiteral_24932/*"userEventMissionConditionDetail"*/);
    sub_1CE6700(&StringLiteral_22037/*"mstAssetbundleKey"*/);
    sub_1CE6700(&StringLiteral_22167/*"mstEventPanelMap"*/);
    sub_1CE6700(&StringLiteral_24961/*"userLogin"*/);
    sub_1CE6700(&StringLiteral_22258/*"mstLoginQuest"*/);
    sub_1CE6700(&StringLiteral_22284/*"mstPartialMaintenance"*/);
    sub_1CE6700(&StringLiteral_24939/*"userEventSpot"*/);
    sub_1CE6700(&StringLiteral_22187/*"mstEventReward"*/);
    sub_1CE6700(&StringLiteral_22139/*"mstEventDataLostBattleReset"*/);
    sub_1CE6700(&StringLiteral_22039/*"mstAttri"*/);
    sub_1CE6700(&StringLiteral_22462/*"mstWarBoardStageDetail"*/);
    sub_1CE6700(&StringLiteral_22403/*"mstSvtSkillAdd"*/);
    sub_1CE6700(&StringLiteral_24935/*"userEventQuestCooltime"*/);
    sub_1CE6700(&StringLiteral_22313/*"mstQuestScriptBranchMaterial"*/);
    sub_1CE6700(&StringLiteral_22149/*"mstEventFatigueRecovery"*/);
    sub_1CE6700(&StringLiteral_22440/*"mstWarBoardAi"*/);
    sub_1CE6700(&StringLiteral_22419/*"mstTreasureBoxTalk"*/);
    sub_1CE6700(&StringLiteral_22443/*"mstWarBoardEvent"*/);
    sub_1CE6700(&StringLiteral_22429/*"mstVoicePlayCond"*/);
    sub_1CE6700(&StringLiteral_22230/*"mstGachaDetail"*/);
    sub_1CE6700(&StringLiteral_22198/*"mstEventSuperBoss"*/);
    sub_1CE6700(&StringLiteral_22342/*"mstSkillAdd"*/);
    byte_4E038F8 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1CE694C(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_357B178 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1CE6958(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_22361/*"mstSvt"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_22373/*"mstSvtComment"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_22396/*"mstSvtProfile"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_22432/*"mstWar"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_17229/*"battle"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_22420/*"mstTreasureDevice"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_22384/*"mstSvtLimit"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_22406/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_22073/*"mstClass"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_22399/*"mstSvtScript"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_22367/*"mstSvtCard"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_22402/*"mstSvtSkill"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_22393/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_24979/*"userSvt"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_24993/*"userSvtStorage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_22356/*"mstStage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_22382/*"mstSvtGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_22057/*"mstBlankEarthSpot"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_22058/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_22348/*"mstSpot"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_22350/*"mstSpotImage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_22353/*"mstSpotRoad"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_22262/*"mstMapGimmick"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_22244/*"mstGift"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_22245/*"mstGiftAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_22360/*"mstSubEquip"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_24899/*"user"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_24954/*"userGame"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_24914/*"userDeck"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_24983/*"userSvtCollection"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_22216/*"mstFriendship"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_22223/*"mstGacha"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_22233/*"mstGachaImage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_24949/*"userGacha"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_24953/*"userGachaPickupCollateral"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24960/*"userItem"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_22255/*"mstItem"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_22240/*"mstGachaTicket"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_22224/*"mstGachaAdjustAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_22234/*"mstGachaPickup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_22215/*"mstFriendPointGachaAdjust"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_22226/*"mstGachaBaseCollateral"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_22031/*"mstAccessary"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_24901/*"userAccessary"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_24977/*"userSubEquip"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_24394/*"tblUserGame"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_22333/*"mstShop"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_22359/*"mstStoneShop"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_22043/*"mstBankShop"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_22340/*"mstShopScript"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_22114/*"mstEquip"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_22116/*"mstEquipExp"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_22118/*"mstEquipSkill"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_24918/*"userEquip"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_24946/*"userFormation"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_22341/*"mstSkill"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_22347/*"mstSkillLv"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_22343/*"mstSkillDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_22218/*"mstFunc"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_22067/*"mstBuff"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_22237/*"mstGachaRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_24968/*"userQuest"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_24969/*"userQuestInfo"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_24970/*"userQuestRecord"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_22424/*"mstUserExp"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_22282/*"mstNews"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_22413/*"mstTelop"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_22846/*"otherUserGame"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_24393/*"tblFriend"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_24964/*"userPresentBox"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_22119/*"mstEvent"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_22288/*"mstQuest"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_22289/*"mstQuestAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_22307/*"mstQuestRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_22299/*"mstQuestPhase"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_22300/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_22295/*"mstQuestGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_22306/*"mstQuestRandomGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_22292/*"mstQuestConsumeItem"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_22298/*"mstQuestMessage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_25095/*"viewQuestInfo"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_25092/*"viewEnemy"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_25094/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_22036/*"mstArea"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_22053/*"mstBgm"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_22179/*"mstEventQuest"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_22131/*"mstEventCampaign"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_22090/*"mstCombineQp"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_22089/*"mstCombineMaterial"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_22133/*"mstEventCombine"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_22378/*"mstSvtExp"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_22092/*"mstCombineSkill"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_22093/*"mstCombineTd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_22251/*"mstIllustrator"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_22107/*"mstCv"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_22422/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_22421/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_24945/*"userFollower"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_22665/*"npcFollower"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_22671/*"npcSvtFollower"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_24920/*"userEvent"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_24967/*"userProfile"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_24974/*"userShop"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_24912/*"userContinue"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_22104/*"mstConstant"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_22105/*"mstConstantLong"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_22106/*"mstConstantStr"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_22099/*"mstCommandSpell"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_22033/*"mstAi"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_22034/*"mstAiAct"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_22410/*"mstSvtVoice"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_22040/*"mstAttriRelation"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_22080/*"mstClassRelation"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_22110/*"mstEffect"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_22117/*"mstEquipImage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_22086/*"mstCombineLimit"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_22071/*"mstCard"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_22091/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_22385/*"mstSvtLimitAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_22398/*"mstSvtRarity"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_22332/*"mstSetItem"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_22322/*"mstRecover"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_22044/*"mstBanner"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_22338/*"mstShopRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_22187/*"mstEventReward"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_22140/*"mstEventDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_22199/*"mstEventSvt"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_22063/*"mstBoxGacha"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_22064/*"mstBoxGachaBase"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_22066/*"mstBoxGachaTalk"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_24905/*"userBoxGacha"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17548/*"boxGachaHistory"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_22046/*"mstBattleBg"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_22415/*"mstTips"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_24961/*"userLogin"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_22425/*"mstVoice"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_22189/*"mstEventRewardExtra"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_22159/*"mstEventMission"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_22163/*"mstEventMissionCondition"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    140,
    (Il2CppObject *)StringLiteral_22164/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    141,
    (Il2CppObject *)StringLiteral_22160/*"mstEventMissionAction"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    142,
    (Il2CppObject *)StringLiteral_22161/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    145,
    (Il2CppObject *)StringLiteral_22103/*"mstCompleteMission"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    143,
    (Il2CppObject *)StringLiteral_22162/*"mstEventMissionAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    144,
    (Il2CppObject *)StringLiteral_22193/*"mstEventRewardSet"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    146,
    (Il2CppObject *)StringLiteral_24931/*"userEventMission"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    147,
    (Il2CppObject *)StringLiteral_24932/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    148,
    (Il2CppObject *)StringLiteral_22065/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    149,
    (Il2CppObject *)StringLiteral_22082/*"mstClosedMessage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    150,
    (Il2CppObject *)StringLiteral_24992/*"userSvtLeader"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    151,
    (Il2CppObject *)StringLiteral_22221/*"mstFuncGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    152,
    (Il2CppObject *)StringLiteral_22183/*"mstEventRaid"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    153,
    (Il2CppObject *)StringLiteral_24522/*"totalEventRaid"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    154,
    (Il2CppObject *)StringLiteral_24937/*"userEventRaid"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    155,
    (Il2CppObject *)StringLiteral_22171/*"mstEventPoint"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    156,
    (Il2CppObject *)StringLiteral_22174/*"mstEventPointGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    157,
    (Il2CppObject *)StringLiteral_24520/*"totalEventPoint"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    158,
    (Il2CppObject *)StringLiteral_24934/*"userEventPoint"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    159,
    (Il2CppObject *)StringLiteral_24965/*"userPresentHistory"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    160,
    (Il2CppObject *)StringLiteral_22272/*"mstMasterMission"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    161,
    (Il2CppObject *)StringLiteral_22377/*"mstSvtExceed"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    162,
    (Il2CppObject *)StringLiteral_22284/*"mstPartialMaintenance"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    163,
    (Il2CppObject *)StringLiteral_22249/*"mstGuide"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    164,
    (Il2CppObject *)StringLiteral_22273/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    165,
    (Il2CppObject *)StringLiteral_22232/*"mstGachaGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    166,
    (Il2CppObject *)StringLiteral_22309/*"mstQuestReset"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    167,
    (Il2CppObject *)StringLiteral_22433/*"mstWarAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    168,
    (Il2CppObject *)StringLiteral_22155/*"mstEventItemDisplay"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    169,
    (Il2CppObject *)StringLiteral_22156/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    170,
    (Il2CppObject *)StringLiteral_22157/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    171,
    (Il2CppObject *)StringLiteral_22207/*"mstEventTutorial"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    172,
    (Il2CppObject *)StringLiteral_22208/*"mstEventTutorialCond"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    173,
    (Il2CppObject *)StringLiteral_22431/*"mstVoiceRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    174,
    (Il2CppObject *)StringLiteral_22198/*"mstEventSuperBoss"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    175,
    (Il2CppObject *)StringLiteral_24940/*"userEventSuperBoss"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    176,
    (Il2CppObject *)StringLiteral_22312/*"mstQuestScript"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    177,
    (Il2CppObject *)StringLiteral_22316/*"mstQuestScriptRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    178,
    (Il2CppObject *)StringLiteral_22275/*"mstMaterialFolder"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    179,
    (Il2CppObject *)StringLiteral_22323/*"mstRestriction"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    180,
    (Il2CppObject *)StringLiteral_22310/*"mstQuestRestriction"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    181,
    (Il2CppObject *)StringLiteral_22412/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    182,
    (Il2CppObject *)StringLiteral_22336/*"mstShopDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    183,
    (Il2CppObject *)StringLiteral_22400/*"mstSvtScriptAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    184,
    (Il2CppObject *)StringLiteral_22083/*"mstCombine"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    185,
    (Il2CppObject *)StringLiteral_22035/*"mstAiField"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    186,
    (Il2CppObject *)StringLiteral_22374/*"mstSvtCommentAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    187,
    (Il2CppObject *)StringLiteral_22150/*"mstEventFilter"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    188,
    (Il2CppObject *)StringLiteral_24978/*"userSupportDeck"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    189,
    (Il2CppObject *)StringLiteral_22191/*"mstEventRewardScene"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    190,
    (Il2CppObject *)StringLiteral_22212/*"mstEventVoicePlay"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    191,
    (Il2CppObject *)StringLiteral_22239/*"mstGachaSub"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    192,
    (Il2CppObject *)StringLiteral_22230/*"mstGachaDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    193,
    (Il2CppObject *)StringLiteral_22228/*"mstGachaBonusSelect"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    194,
    (Il2CppObject *)StringLiteral_22229/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    195,
    (Il2CppObject *)StringLiteral_22369/*"mstSvtChange"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    196,
    (Il2CppObject *)StringLiteral_22427/*"mstVoiceCond"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    197,
    (Il2CppObject *)StringLiteral_22054/*"mstBgmRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    198,
    (Il2CppObject *)StringLiteral_22279/*"mstMyroomAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    199,
    (Il2CppObject *)StringLiteral_22334/*"mstShopAction"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    200,
    (Il2CppObject *)StringLiteral_22192/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    201,
    (Il2CppObject *)StringLiteral_22259/*"mstMap"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    202,
    (Il2CppObject *)StringLiteral_22261/*"mstMapCond"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    203,
    (Il2CppObject *)StringLiteral_22260/*"mstMapButton"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    204,
    (Il2CppObject *)StringLiteral_22045/*"mstBannerAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    205,
    (Il2CppObject *)StringLiteral_22291/*"mstQuestBehavior"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    206,
    (Il2CppObject *)StringLiteral_22120/*"mstEventAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    207,
    (Il2CppObject *)StringLiteral_22416/*"mstTotalLogin"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    208,
    (Il2CppObject *)StringLiteral_22379/*"mstSvtFilter"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    209,
    (Il2CppObject *)StringLiteral_22085/*"mstCombineCostume"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    210,
    (Il2CppObject *)StringLiteral_22375/*"mstSvtCostume"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    211,
    (Il2CppObject *)StringLiteral_22376/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    212,
    (Il2CppObject *)StringLiteral_22354/*"mstStaffPhoto"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    213,
    (Il2CppObject *)StringLiteral_22355/*"mstStaffPhotoCostume"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    214,
    (Il2CppObject *)StringLiteral_24948/*"userFriendRequestHistory"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    215,
    (Il2CppObject *)StringLiteral_24904/*"userBlacklist"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    216,
    (Il2CppObject *)StringLiteral_22257/*"mstItemSelect"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    217,
    (Il2CppObject *)StringLiteral_22181/*"mstEventRace"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    218,
    (Il2CppObject *)StringLiteral_22182/*"mstEventRaceResult"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    219,
    (Il2CppObject *)StringLiteral_22305/*"mstQuestRacePoint"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    220,
    (Il2CppObject *)StringLiteral_24936/*"userEventRace"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    221,
    (Il2CppObject *)StringLiteral_22194/*"mstEventScript"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    222,
    (Il2CppObject *)StringLiteral_22195/*"mstEventScriptRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    223,
    (Il2CppObject *)StringLiteral_22352/*"mstSpotPath"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    224,
    (Il2CppObject *)StringLiteral_22349/*"mstSpotAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    225,
    (Il2CppObject *)StringLiteral_24521/*"totalEventRace"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    226,
    (Il2CppObject *)StringLiteral_22175/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    227,
    (Il2CppObject *)StringLiteral_22430/*"mstVoicePlayGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    228,
    (Il2CppObject *)StringLiteral_22429/*"mstVoicePlayCond"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    229,
    (Il2CppObject *)StringLiteral_22238/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    230,
    (Il2CppObject *)StringLiteral_22380/*"mstSvtFlag"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    231,
    (Il2CppObject *)StringLiteral_22381/*"mstSvtFlagRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    232,
    (Il2CppObject *)StringLiteral_22158/*"mstEventLocationCampaign"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    233,
    (Il2CppObject *)StringLiteral_22070/*"mstCampaignInfo"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    234,
    (Il2CppObject *)StringLiteral_22108/*"mstDialogMessage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    235,
    (Il2CppObject *)StringLiteral_22383/*"mstSvtIndividuality"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    236,
    (Il2CppObject *)StringLiteral_22060/*"mstBoardMessage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    237,
    (Il2CppObject *)StringLiteral_22061/*"mstBoardMessageRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    238,
    (Il2CppObject *)StringLiteral_22200/*"mstEventSvtFatigue"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    239,
    (Il2CppObject *)StringLiteral_24925/*"userEventDeck"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    240,
    (Il2CppObject *)StringLiteral_22202/*"mstEventTower"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    241,
    (Il2CppObject *)StringLiteral_22203/*"mstEventTowerReward"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    242,
    (Il2CppObject *)StringLiteral_22129/*"mstEventBulletinBoard"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    243,
    (Il2CppObject *)StringLiteral_22130/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    244,
    (Il2CppObject *)StringLiteral_22148/*"mstEventFactory"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    245,
    (Il2CppObject *)StringLiteral_22337/*"mstShopGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    246,
    (Il2CppObject *)StringLiteral_22041/*"mstAuraEffect"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    247,
    (Il2CppObject *)StringLiteral_22042/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    248,
    (Il2CppObject *)StringLiteral_24933/*"userEventMissionFix"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    249,
    (Il2CppObject *)StringLiteral_22646/*"notEndEventMissionFix"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    250,
    (Il2CppObject *)StringLiteral_22112/*"mstEnemyMaster"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    251,
    (Il2CppObject *)StringLiteral_22113/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    252,
    (Il2CppObject *)StringLiteral_22404/*"mstSvtSkillRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    253,
    (Il2CppObject *)StringLiteral_22394/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    254,
    (Il2CppObject *)StringLiteral_22409/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    255,
    (Il2CppObject *)StringLiteral_22268/*"mstMapGimmickRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    256,
    (Il2CppObject *)StringLiteral_22095/*"mstCommandCode"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    257,
    (Il2CppObject *)StringLiteral_22372/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    258,
    (Il2CppObject *)StringLiteral_24909/*"userCommandCode"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    259,
    (Il2CppObject *)StringLiteral_24910/*"userCommandCodeCollection"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    260,
    (Il2CppObject *)StringLiteral_24985/*"userSvtCommandCode"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    261,
    (Il2CppObject *)StringLiteral_22097/*"mstCommandCodeSkill"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    262,
    (Il2CppObject *)StringLiteral_22098/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    263,
    (Il2CppObject *)StringLiteral_22096/*"mstCommandCodeComment"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    264,
    (Il2CppObject *)StringLiteral_22196/*"mstEventStatus"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    265,
    (Il2CppObject *)StringLiteral_22197/*"mstEventStatusQuest"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    266,
    (Il2CppObject *)StringLiteral_22102/*"mstCommonRestriction"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    267,
    (Il2CppObject *)StringLiteral_22173/*"mstEventPointBuff"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    268,
    (Il2CppObject *)StringLiteral_24944/*"userFollow"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    269,
    (Il2CppObject *)StringLiteral_22190/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    270,
    (Il2CppObject *)StringLiteral_22670/*"npcSvtEquip"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    271,
    (Il2CppObject *)StringLiteral_22132/*"mstEventCampaignRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    272,
    (Il2CppObject *)StringLiteral_22389/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    273,
    (Il2CppObject *)StringLiteral_22145/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    274,
    (Il2CppObject *)StringLiteral_22172/*"mstEventPointActivity"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    275,
    (Il2CppObject *)StringLiteral_22219/*"mstFuncCategory"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    276,
    (Il2CppObject *)StringLiteral_22304/*"mstQuestPickup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    277,
    (Il2CppObject *)StringLiteral_22209/*"mstEventUi"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    278,
    (Il2CppObject *)StringLiteral_22210/*"mstEventUiRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    279,
    (Il2CppObject *)StringLiteral_22211/*"mstEventUiValue"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    280,
    (Il2CppObject *)StringLiteral_22136/*"mstEventConquestReward"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    281,
    (Il2CppObject *)StringLiteral_22666/*"npcFollowerRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    282,
    (Il2CppObject *)StringLiteral_22124/*"mstEventBonusFilter"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    283,
    (Il2CppObject *)StringLiteral_22125/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    284,
    (Il2CppObject *)StringLiteral_22126/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    285,
    (Il2CppObject *)StringLiteral_24952/*"userGachaExtraCount"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    286,
    (Il2CppObject *)StringLiteral_22094/*"mstCommandCardRankParam"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    287,
    (Il2CppObject *)StringLiteral_24984/*"userSvtCommandCard"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    288,
    (Il2CppObject *)StringLiteral_22287/*"mstPrivilege"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    289,
    (Il2CppObject *)StringLiteral_24966/*"userPrivilege"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    290,
    (Il2CppObject *)StringLiteral_22293/*"mstQuestDateRange"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    291,
    (Il2CppObject *)StringLiteral_22176/*"mstEventPointUpper"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    292,
    (Il2CppObject *)StringLiteral_22177/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    293,
    (Il2CppObject *)StringLiteral_24971/*"userQuestRoute"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    294,
    (Il2CppObject *)StringLiteral_22127/*"mstEventBossStatusUi"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    295,
    (Il2CppObject *)StringLiteral_22101/*"mstCommonRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    296,
    (Il2CppObject *)StringLiteral_22317/*"mstQuestSpotRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    297,
    (Il2CppObject *)StringLiteral_22428/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    298,
    (Il2CppObject *)StringLiteral_22081/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    299,
    (Il2CppObject *)StringLiteral_22154/*"mstEventGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    300,
    (Il2CppObject *)StringLiteral_22037/*"mstAssetbundleKey"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    301,
    (Il2CppObject *)StringLiteral_24517/*"totalBoxGacha"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    302,
    (Il2CppObject *)StringLiteral_22408/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    303,
    (Il2CppObject *)StringLiteral_19409/*"eventSvtFatigue"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    304,
    (Il2CppObject *)StringLiteral_22188/*"mstEventRewardBg"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    305,
    (Il2CppObject *)StringLiteral_22149/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    306,
    (Il2CppObject *)StringLiteral_19396/*"eventBoostItemUsed"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    307,
    (Il2CppObject *)StringLiteral_22358/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    308,
    (Il2CppObject *)StringLiteral_22301/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    309,
    (Il2CppObject *)StringLiteral_22426/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    310,
    (Il2CppObject *)StringLiteral_22357/*"mstStageRemap"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    311,
    (Il2CppObject *)StringLiteral_18328/*"combineExp"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    312,
    (Il2CppObject *)StringLiteral_22121/*"mstEventBoardGameCell"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    313,
    (Il2CppObject *)StringLiteral_22122/*"mstEventBoardGameToken"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    314,
    (Il2CppObject *)StringLiteral_22123/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    315,
    (Il2CppObject *)StringLiteral_24922/*"userEventBoardGameToken"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    316,
    (Il2CppObject *)StringLiteral_22363/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    317,
    (Il2CppObject *)StringLiteral_22283/*"mstOpeningMovie"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    318,
    (Il2CppObject *)StringLiteral_22387/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    319,
    (Il2CppObject *)StringLiteral_23049/*"pickupUserFollower"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    320,
    (Il2CppObject *)StringLiteral_22371/*"mstSvtCollection"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    321,
    (Il2CppObject *)StringLiteral_22227/*"mstGachaBehavior"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    322,
    (Il2CppObject *)StringLiteral_22180/*"mstEventQuestCooltime"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    323,
    (Il2CppObject *)StringLiteral_24935/*"userEventQuestCooltime"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    324,
    (Il2CppObject *)StringLiteral_22062/*"mstBoost"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    325,
    (Il2CppObject *)StringLiteral_22434/*"mstWarBoard"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    326,
    (Il2CppObject *)StringLiteral_22458/*"mstWarBoardSquare"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    327,
    (Il2CppObject *)StringLiteral_22457/*"mstWarBoardRoad"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    328,
    (Il2CppObject *)StringLiteral_22460/*"mstWarBoardStage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    329,
    (Il2CppObject *)StringLiteral_22435/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    330,
    (Il2CppObject *)StringLiteral_22437/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    331,
    (Il2CppObject *)StringLiteral_22468/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    332,
    (Il2CppObject *)StringLiteral_22463/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    333,
    (Il2CppObject *)StringLiteral_22464/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    334,
    (Il2CppObject *)StringLiteral_22467/*"mstWarBoardStageWall"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    335,
    (Il2CppObject *)StringLiteral_22440/*"mstWarBoardAi"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    336,
    (Il2CppObject *)StringLiteral_22453/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    337,
    (Il2CppObject *)StringLiteral_22454/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    338,
    (Il2CppObject *)StringLiteral_22447/*"mstWarBoardItem"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    339,
    (Il2CppObject *)StringLiteral_22469/*"mstWarBoardTreasure"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    340,
    (Il2CppObject *)StringLiteral_22452/*"mstWarBoardQuest"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    341,
    (Il2CppObject *)StringLiteral_25155/*"warBoardData"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    342,
    (Il2CppObject *)StringLiteral_22446/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    343,
    (Il2CppObject *)StringLiteral_22438/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    344,
    (Il2CppObject *)StringLiteral_22436/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    345,
    (Il2CppObject *)StringLiteral_22456/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    346,
    (Il2CppObject *)StringLiteral_22466/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    347,
    (Il2CppObject *)StringLiteral_22167/*"mstEventPanelMap"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    348,
    (Il2CppObject *)StringLiteral_22168/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    349,
    (Il2CppObject *)StringLiteral_22170/*"mstEventPanelSpot"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    350,
    (Il2CppObject *)StringLiteral_22169/*"mstEventPanelScan"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    351,
    (Il2CppObject *)StringLiteral_22141/*"mstEventDigging"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    352,
    (Il2CppObject *)StringLiteral_22143/*"mstEventDiggingReward"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    353,
    (Il2CppObject *)StringLiteral_22142/*"mstEventDiggingBlock"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    354,
    (Il2CppObject *)StringLiteral_24926/*"userEventDigging"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    355,
    (Il2CppObject *)StringLiteral_22100/*"mstCommonConsume"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    356,
    (Il2CppObject *)StringLiteral_24930/*"userEventMap"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    357,
    (Il2CppObject *)StringLiteral_24939/*"userEventSpot"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    358,
    (Il2CppObject *)StringLiteral_22470/*"mstWarGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    359,
    (Il2CppObject *)StringLiteral_22386/*"mstSvtLimitImage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    360,
    (Il2CppObject *)StringLiteral_19967/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    361,
    (Il2CppObject *)StringLiteral_22311/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    362,
    (Il2CppObject *)StringLiteral_22038/*"mstAssist"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    363,
    (Il2CppObject *)StringLiteral_22442/*"mstWarBoardEffect"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    364,
    (Il2CppObject *)StringLiteral_22450/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    365,
    (Il2CppObject *)StringLiteral_17307/*"beforeBirthDay"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    366,
    (Il2CppObject *)StringLiteral_22258/*"mstLoginQuest"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    367,
    (Il2CppObject *)StringLiteral_22134/*"mstEventCombineCostume"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    368,
    (Il2CppObject *)StringLiteral_22465/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    369,
    (Il2CppObject *)StringLiteral_22407/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    370,
    (Il2CppObject *)StringLiteral_22342/*"mstSkillAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    371,
    (Il2CppObject *)StringLiteral_22388/*"mstSvtLvDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    372,
    (Il2CppObject *)StringLiteral_22225/*"mstGachaAppend"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    373,
    (Il2CppObject *)StringLiteral_24951/*"userGachaDrawLog"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    374,
    (Il2CppObject *)StringLiteral_22364/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    375,
    (Il2CppObject *)StringLiteral_24980/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    376,
    (Il2CppObject *)StringLiteral_24981/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    377,
    (Il2CppObject *)StringLiteral_22365/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    378,
    (Il2CppObject *)StringLiteral_22084/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    379,
    (Il2CppObject *)StringLiteral_22370/*"mstSvtCoin"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    380,
    (Il2CppObject *)StringLiteral_24982/*"userSvtCoin"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    381,
    (Il2CppObject *)StringLiteral_22362/*"mstSvtAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    382,
    (Il2CppObject *)StringLiteral_22417/*"mstTreasureBox"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    383,
    (Il2CppObject *)StringLiteral_22418/*"mstTreasureBoxGift"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    384,
    (Il2CppObject *)StringLiteral_22419/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    385,
    (Il2CppObject *)StringLiteral_24927/*"userEventExpedition"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    386,
    (Il2CppObject *)StringLiteral_22146/*"mstEventExpedition"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    387,
    (Il2CppObject *)StringLiteral_22147/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    388,
    (Il2CppObject *)StringLiteral_22185/*"mstEventRecipe"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    389,
    (Il2CppObject *)StringLiteral_22186/*"mstEventRecipeGift"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    390,
    (Il2CppObject *)StringLiteral_24928/*"userEventFortification"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    391,
    (Il2CppObject *)StringLiteral_22151/*"mstEventFortification"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    392,
    (Il2CppObject *)StringLiteral_22152/*"mstEventFortificationDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    393,
    (Il2CppObject *)StringLiteral_22153/*"mstEventFortificationSvt"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    394,
    (Il2CppObject *)StringLiteral_24994/*"userSvtVoicePlayed"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    395,
    (Il2CppObject *)StringLiteral_24841/*"updateProfileDialogInfo"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    396,
    (Il2CppObject *)StringLiteral_22390/*"mstSvtMaterialTd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    397,
    (Il2CppObject *)StringLiteral_22047/*"mstBattleMasterImage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    398,
    (Il2CppObject *)StringLiteral_24947/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    399,
    (Il2CppObject *)StringLiteral_24938/*"userEventRandomMission"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    400,
    (Il2CppObject *)StringLiteral_22178/*"mstEventProgressValue"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    401,
    (Il2CppObject *)StringLiteral_22391/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    402,
    (Il2CppObject *)StringLiteral_22184/*"mstEventRandomMission"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    403,
    (Il2CppObject *)StringLiteral_24950/*"userGachaDrawHistory"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    404,
    (Il2CppObject *)StringLiteral_24908/*"userCoinRoom"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    405,
    (Il2CppObject *)StringLiteral_22128/*"mstEventBuddyPoint"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    406,
    (Il2CppObject *)StringLiteral_22201/*"mstEventSvtPointRank"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    407,
    (Il2CppObject *)StringLiteral_24941/*"userEventSvtPoint"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    408,
    (Il2CppObject *)StringLiteral_22214/*"mstFieldMotion"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    409,
    (Il2CppObject *)StringLiteral_24917/*"userDeleteReservation"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    410,
    (Il2CppObject *)StringLiteral_22401/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    411,
    (Il2CppObject *)StringLiteral_22115/*"mstEquipAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    412,
    (Il2CppObject *)StringLiteral_22308/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    413,
    (Il2CppObject *)StringLiteral_24921/*"userEventAlloutBattle"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    414,
    (Il2CppObject *)StringLiteral_22314/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    415,
    (Il2CppObject *)StringLiteral_22048/*"mstBattleMessage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    416,
    (Il2CppObject *)StringLiteral_22049/*"mstBattleMessageGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    417,
    (Il2CppObject *)StringLiteral_24962/*"userNpcSvtRecord"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    418,
    (Il2CppObject *)StringLiteral_22069/*"mstBuffTypeDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    419,
    (Il2CppObject *)StringLiteral_22448/*"mstWarBoardMessage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    420,
    (Il2CppObject *)StringLiteral_22451/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    421,
    (Il2CppObject *)StringLiteral_22449/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    422,
    (Il2CppObject *)StringLiteral_22473/*"mstWarQuestSelection"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    423,
    (Il2CppObject *)StringLiteral_22462/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    424,
    (Il2CppObject *)StringLiteral_22315/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    425,
    (Il2CppObject *)StringLiteral_22313/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    426,
    (Il2CppObject *)StringLiteral_22032/*"mstAdCheckPoint"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    427,
    (Il2CppObject *)StringLiteral_22246/*"mstGiftDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    428,
    (Il2CppObject *)StringLiteral_22087/*"mstCombineLimitGift"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    429,
    (Il2CppObject *)StringLiteral_22137/*"mstEventCooltimeReward"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    430,
    (Il2CppObject *)StringLiteral_24923/*"userEventCooltimeReward"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    431,
    (Il2CppObject *)StringLiteral_22075/*"mstClassBoardClass"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    432,
    (Il2CppObject *)StringLiteral_22074/*"mstClassBoardBase"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    433,
    (Il2CppObject *)StringLiteral_22077/*"mstClassBoardLine"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    434,
    (Il2CppObject *)StringLiteral_22078/*"mstClassBoardLock"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    435,
    (Il2CppObject *)StringLiteral_22079/*"mstClassBoardSquare"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    436,
    (Il2CppObject *)StringLiteral_22076/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    437,
    (Il2CppObject *)StringLiteral_24906/*"userClassBoardSquare"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    438,
    (Il2CppObject *)StringLiteral_22368/*"mstSvtCardAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    439,
    (Il2CppObject *)StringLiteral_22269/*"mstMapLayer"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    440,
    (Il2CppObject *)StringLiteral_22351/*"mstSpotLayer"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    441,
    (Il2CppObject *)StringLiteral_22264/*"mstMapGimmickLayer"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    442,
    (Il2CppObject *)StringLiteral_22138/*"mstEventDataLostBattle"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    443,
    (Il2CppObject *)StringLiteral_22139/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    444,
    (Il2CppObject *)StringLiteral_24924/*"userEventDataLost"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    445,
    (Il2CppObject *)StringLiteral_22296/*"mstQuestHint"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    446,
    (Il2CppObject *)StringLiteral_22222/*"mstFuncTypeDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    447,
    (Il2CppObject *)StringLiteral_22068/*"mstBuffConvert"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    448,
    (Il2CppObject *)StringLiteral_22344/*"mstSkillGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    449,
    (Il2CppObject *)StringLiteral_22345/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    450,
    (Il2CppObject *)StringLiteral_22346/*"mstSkillIndividuality"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    451,
    (Il2CppObject *)StringLiteral_22324/*"mstRestrictionBase"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    452,
    (Il2CppObject *)StringLiteral_22326/*"mstRestrictionSlot"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    453,
    (Il2CppObject *)StringLiteral_22327/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    454,
    (Il2CppObject *)StringLiteral_22325/*"mstRestrictionMessage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    455,
    (Il2CppObject *)StringLiteral_22328/*"mstRestrictionWhole"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    456,
    (Il2CppObject *)StringLiteral_22220/*"mstFuncDisp"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    457,
    (Il2CppObject *)StringLiteral_22135/*"mstEventCommandAssist"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    458,
    (Il2CppObject *)StringLiteral_22165/*"mstEventMissionGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    459,
    (Il2CppObject *)StringLiteral_22088/*"mstCombineLimitRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    460,
    (Il2CppObject *)StringLiteral_22423/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    461,
    (Il2CppObject *)StringLiteral_22250/*"mstHeelPortrait"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    462,
    (Il2CppObject *)StringLiteral_24956/*"userHeelPortrait"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    463,
    (Il2CppObject *)StringLiteral_22672/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    464,
    (Il2CppObject *)StringLiteral_22231/*"mstGachaExtraGift"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    465,
    (Il2CppObject *)StringLiteral_22166/*"mstEventMural"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    466,
    (Il2CppObject *)StringLiteral_25096/*"viewWaveEnemy"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    467,
    (Il2CppObject *)StringLiteral_22059/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    468,
    (Il2CppObject *)StringLiteral_22055/*"mstBlankEarthGimmick"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    469,
    (Il2CppObject *)StringLiteral_22414/*"mstTerminalOverwrite"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    470,
    (Il2CppObject *)StringLiteral_19575/*"exchangeSvt"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    471,
    (Il2CppObject *)StringLiteral_22441/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    472,
    (Il2CppObject *)StringLiteral_22443/*"mstWarBoardEvent"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    473,
    (Il2CppObject *)StringLiteral_22444/*"mstWarBoardEventScript"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    474,
    (Il2CppObject *)StringLiteral_22461/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    475,
    (Il2CppObject *)StringLiteral_22459/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    476,
    (Il2CppObject *)StringLiteral_22439/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    477,
    (Il2CppObject *)StringLiteral_22455/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    478,
    (Il2CppObject *)StringLiteral_22445/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    479,
    (Il2CppObject *)StringLiteral_22397/*"mstSvtProfilePush"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    480,
    (Il2CppObject *)StringLiteral_22266/*"mstMapGimmickPath"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    481,
    (Il2CppObject *)StringLiteral_22267/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    482,
    (Il2CppObject *)StringLiteral_22392/*"mstSvtOverwrite"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    483,
    (Il2CppObject *)StringLiteral_22254/*"mstIndividualityPolicy"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    484,
    (Il2CppObject *)StringLiteral_22253/*"mstIndividualityPersonality"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    485,
    (Il2CppObject *)StringLiteral_22039/*"mstAttri"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    486,
    (Il2CppObject *)StringLiteral_22411/*"mstSvtVoicePattern"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    487,
    (Il2CppObject *)StringLiteral_24955/*"userGameCommon"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    488,
    (Il2CppObject *)StringLiteral_22395/*"mstSvtPhoto"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    489,
    (Il2CppObject *)StringLiteral_22274/*"mstMasterPhoto"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    490,
    (Il2CppObject *)StringLiteral_22286/*"mstPhotoFrame"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    491,
    (Il2CppObject *)StringLiteral_22472/*"mstWarMessage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    492,
    (Il2CppObject *)StringLiteral_22290/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    493,
    (Il2CppObject *)StringLiteral_22213/*"mstExcludeMotionCond"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    494,
    (Il2CppObject *)StringLiteral_24959/*"userInterruptionQuest"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    495,
    (Il2CppObject *)StringLiteral_22405/*"mstSvtTransform"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    496,
    (Il2CppObject *)StringLiteral_22270/*"mstMapUpdateSchedule"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    497,
    (Il2CppObject *)StringLiteral_22303/*"mstQuestPhasePresent"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    498,
    (Il2CppObject *)StringLiteral_24902/*"userAccountLinkage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    499,
    (Il2CppObject *)StringLiteral_22278/*"mstMissionNaviTransition"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    500,
    (Il2CppObject *)StringLiteral_22204/*"mstEventTradeGoods"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    501,
    (Il2CppObject *)StringLiteral_22205/*"mstEventTradePickup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    502,
    (Il2CppObject *)StringLiteral_22206/*"mstEventTradeStore"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    503,
    (Il2CppObject *)StringLiteral_24942/*"userEventTrade"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    504,
    (Il2CppObject *)StringLiteral_22277/*"mstMissionNaviQuest"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    505,
    (Il2CppObject *)StringLiteral_23016/*"paymentHistory"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    506,
    (Il2CppObject *)StringLiteral_24943/*"userExternalPaymentStone"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    507,
    (Il2CppObject *)StringLiteral_22302/*"mstQuestPhaseIndividuality"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    508,
    (Il2CppObject *)StringLiteral_25093/*"viewGachaFeaturedSvt"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    514,
    (Il2CppObject *)StringLiteral_22111/*"mstEffectMovie"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    509,
    (Il2CppObject *)StringLiteral_22235/*"mstGachaPickupCollateral"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    510,
    (Il2CppObject *)StringLiteral_22236/*"mstGachaPickupCollateralGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    511,
    (Il2CppObject *)StringLiteral_22050/*"mstBattlePoint"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    512,
    (Il2CppObject *)StringLiteral_22051/*"mstBattlePointPhase"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    513,
    (Il2CppObject *)StringLiteral_22366/*"mstSvtBattlePoint"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    515,
    (Il2CppObject *)StringLiteral_22285/*"mstPaymentLimit"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    516,
    (Il2CppObject *)StringLiteral_24963/*"userPaymentLimit"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    517,
    (Il2CppObject *)StringLiteral_22329/*"mstRoadmap"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    518,
    (Il2CppObject *)StringLiteral_24973/*"userRecommendSupport"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    520,
    (Il2CppObject *)StringLiteral_22320/*"mstRecommendAdviceMessage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    519,
    (Il2CppObject *)StringLiteral_22321/*"mstRecommendSupportQuest"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    521,
    (Il2CppObject *)StringLiteral_24972/*"userRecommendFollower"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    522,
    (Il2CppObject *)StringLiteral_22256/*"mstItemDropEfficiency"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    523,
    (Il2CppObject *)StringLiteral_22056/*"mstBlankEarthGimmickAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    524,
    (Il2CppObject *)StringLiteral_22474/*"mstWarRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    525,
    (Il2CppObject *)StringLiteral_22331/*"mstSelectBonusBase"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    526,
    (Il2CppObject *)StringLiteral_22330/*"mstSelectBonus"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    527,
    (Il2CppObject *)StringLiteral_22281/*"mstMyroomSvtSpecialImage"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    528,
    (Il2CppObject *)StringLiteral_22339/*"mstShopReset"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    529,
    (Il2CppObject *)StringLiteral_22669/*"npcSvtDisplayTypeDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    530,
    (Il2CppObject *)StringLiteral_22217/*"mstFriendshipSvt"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    531,
    (Il2CppObject *)StringLiteral_19576/*"exchangeSvtCoinGivenNum"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    532,
    (Il2CppObject *)StringLiteral_22072/*"mstChaldeaGatePickup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    533,
    (Il2CppObject *)StringLiteral_22471/*"mstWarGroupIgnore"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    534,
    (Il2CppObject *)StringLiteral_22252/*"mstImagePartsGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    535,
    (Il2CppObject *)StringLiteral_24958/*"userImagePartsGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    536,
    (Il2CppObject *)StringLiteral_22276/*"mstMissionItemDisplay"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    537,
    (Il2CppObject *)StringLiteral_22318/*"mstQuestUseItemGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    538,
    (Il2CppObject *)StringLiteral_22319/*"mstQuestUseItemPickup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    539,
    (Il2CppObject *)StringLiteral_24929/*"userEventItemLinkSvt"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    540,
    (Il2CppObject *)StringLiteral_22297/*"mstQuestHintOverwrite"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    541,
    (Il2CppObject *)StringLiteral_23335/*"reachedWaveInfo"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    542,
    (Il2CppObject *)StringLiteral_22241/*"mstGallery"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    543,
    (Il2CppObject *)StringLiteral_22243/*"mstGalleryResource"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    544,
    (Il2CppObject *)StringLiteral_22403/*"mstSvtSkillAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    545,
    (Il2CppObject *)StringLiteral_22242/*"mstGalleryFolderRelease"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    546,
    (Il2CppObject *)StringLiteral_24988/*"userSvtFirstGetTime"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    547,
    (Il2CppObject *)StringLiteral_22294/*"mstQuestExtension"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    548,
    (Il2CppObject *)StringLiteral_24989/*"userSvtGrand"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    549,
    (Il2CppObject *)StringLiteral_22247/*"mstGrandGraph"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    550,
    (Il2CppObject *)StringLiteral_22248/*"mstGrandGraphDetail"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    551,
    (Il2CppObject *)StringLiteral_24907/*"userClassStatistics"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    552,
    (Il2CppObject *)StringLiteral_22144/*"mstEventEquipSkillParts"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    553,
    (Il2CppObject *)StringLiteral_22271/*"mstMasterIndividualitySelect"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    554,
    (Il2CppObject *)StringLiteral_22280/*"mstMyroomAddBgDiff"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    555,
    (Il2CppObject *)StringLiteral_22052/*"mstBattleScript"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    556,
    (Il2CppObject *)StringLiteral_22109/*"mstDropAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    557,
    (Il2CppObject *)StringLiteral_24903/*"userBgImagePartsGroup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    558,
    (Il2CppObject *)StringLiteral_22335/*"mstShopAdd"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  DataNameKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_DataNameKind_Kind__string__o *)v1;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)DataNameKind_TypeInfo->static_fields, (int32_t)v1, v4, v5, v6, v7, v8, v9);
}


void DataNameKind___ctor(DataNameKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *DataNameKind__GetName(int32_t kind, const MethodInfo *method)
{
  DataNameKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4E038F7 & 1) == 0 )
  {
    sub_1CE6700(&DataNameKind_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_4E038F7 = 1;
  }
  v3 = DataNameKind_TypeInfo;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
    v3 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1CE6958(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_357BAAC *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}