void __fastcall DataNameKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_43548E6 & 1) == 0 )
  {
    sub_B70694(&DataNameKind_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_B70694(&StringLiteral_23417/*"userGameCommon"*/);
    sub_B70694(&StringLiteral_21054/*"mstEventMissionConditionDetail"*/);
    sub_B70694(&StringLiteral_21267/*"mstTreasureBoxGift"*/);
    sub_B70694(&StringLiteral_20989/*"mstCommandCodeComment"*/);
    sub_B70694(&StringLiteral_21050/*"mstEventMissionAction"*/);
    sub_B70694(&StringLiteral_23387/*"userEventAlloutBattle"*/);
    sub_B70694(&StringLiteral_21016/*"mstEventBonusFilterGroupInfo"*/);
    sub_B70694(&StringLiteral_21170/*"mstQuestReleaseOverwrite"*/);
    sub_B70694(&StringLiteral_21141/*"mstMapGimmickRelease"*/);
    sub_B70694(&StringLiteral_21114/*"mstGachaExtraGift"*/);
    sub_B70694(&StringLiteral_21503/*"npcSvtFollowerIndividuality"*/);
    sub_B70694(&StringLiteral_21018/*"mstEventBossStatusUi"*/);
    sub_B70694(&StringLiteral_23439/*"userSvtAppendPassiveSkillLv"*/);
    sub_B70694(&StringLiteral_20973/*"mstClassRelation"*/);
    sub_B70694(&StringLiteral_20932/*"mstAiAct"*/);
    sub_B70694(&StringLiteral_21214/*"mstSvtAnimationOverwrite"*/);
    sub_B70694(&StringLiteral_21172/*"mstQuestRestriction"*/);
    sub_B70694(&StringLiteral_21000/*"mstCv"*/);
    sub_B70694(&StringLiteral_23392/*"userEventDigging"*/);
    sub_B70694(&StringLiteral_22996/*"tblUserGame"*/);
    sub_B70694(&StringLiteral_21029/*"mstEventDataLostBattle"*/);
    sub_B70694(&StringLiteral_21019/*"mstEventBuddyPoint"*/);
    sub_B70694(&StringLiteral_20949/*"mstBgmRelease"*/);
    sub_B70694(&StringLiteral_21240/*"mstSvtMaterialTd"*/);
    sub_B70694(&StringLiteral_20994/*"mstCommonRelease"*/);
    sub_B70694(&StringLiteral_21102/*"mstFriendship"*/);
    sub_B70694(&StringLiteral_23373/*"userClassBoardSquare"*/);
    sub_B70694(&StringLiteral_20998/*"mstConstantLong"*/);
    sub_B70694(&StringLiteral_20972/*"mstClassBoardSquare"*/);
    sub_B70694(&StringLiteral_23443/*"userSvtCommandCode"*/);
    sub_B70694(&StringLiteral_21156/*"mstQuestBehavior"*/);
    sub_B70694(&StringLiteral_21239/*"mstSvtMaterialFolder"*/);
    sub_B70694(&StringLiteral_21314/*"mstWarBoardStagePieceDetail"*/);
    sub_B70694(&StringLiteral_21017/*"mstEventBonusFilterGroupMember"*/);
    sub_B70694(&StringLiteral_21160/*"mstQuestHint"*/);
    sub_B70694(&StringLiteral_20992/*"mstCommandSpell"*/);
    sub_B70694(&StringLiteral_20930/*"mstAdCheckPoint"*/);
    sub_B70694(&StringLiteral_21152/*"mstPrivilege"*/);
    sub_B70694(&StringLiteral_20955/*"mstBoardMessageRelease"*/);
    sub_B70694(&StringLiteral_21117/*"mstGachaRelease"*/);
    sub_B70694(&StringLiteral_23383/*"userDeleteReservation"*/);
    sub_B70694(&StringLiteral_21266/*"mstTreasureBox"*/);
    sub_B70694(&StringLiteral_21007/*"mstEquipExp"*/);
    sub_B70694(&StringLiteral_21014/*"mstEventBoardGameTokenReward"*/);
    sub_B70694(&StringLiteral_21220/*"mstSvtCoin"*/);
    sub_B70694(&StringLiteral_21251/*"mstSvtScriptMultiple"*/);
    sub_B70694(&StringLiteral_21147/*"mstMaterialFolder"*/);
    sub_B70694(&StringLiteral_21025/*"mstEventCombineCostume"*/);
    sub_B70694(&StringLiteral_21158/*"mstQuestDateRange"*/);
    sub_B70694(&StringLiteral_21310/*"mstWarBoardStageBoss"*/);
    sub_B70694(&StringLiteral_20962/*"mstBuffConvert"*/);
    sub_B70694(&StringLiteral_20939/*"mstAuraEffect"*/);
    sub_B70694(&StringLiteral_21072/*"mstEventRaceResult"*/);
    sub_B70694(&StringLiteral_21187/*"mstSetItem"*/);
    sub_B70694(&StringLiteral_21180/*"mstRecover"*/);
    sub_B70694(&StringLiteral_21087/*"mstEventStatusQuest"*/);
    sub_B70694(&StringLiteral_23389/*"userEventCooltimeReward"*/);
    sub_B70694(&StringLiteral_21288/*"mstWarBoardActionTrendGroup"*/);
    sub_B70694(&StringLiteral_23431/*"userQuestRoute"*/);
    sub_B70694(&StringLiteral_21200/*"mstSkillLv"*/);
    sub_B70694(&StringLiteral_21232/*"mstSvtGroup"*/);
    sub_B70694(&StringLiteral_21275/*"mstVoiceClosedMessage"*/);
    sub_B70694(&StringLiteral_21037/*"mstEventExpeditionPiece"*/);
    sub_B70694(&StringLiteral_21155/*"mstQuestAutoOrganizationAdjust"*/);
    sub_B70694(&StringLiteral_21241/*"mstSvtMultiPortrait"*/);
    sub_B70694(&StringLiteral_21040/*"mstEventFilter"*/);
    sub_B70694(&StringLiteral_23421/*"userItem"*/);
    sub_B70694(&StringLiteral_21036/*"mstEventExpedition"*/);
    sub_B70694(&StringLiteral_21071/*"mstEventRace"*/);
    sub_B70694(&StringLiteral_21173/*"mstQuestRestrictionInfo"*/);
    sub_B70694(&StringLiteral_21171/*"mstQuestReset"*/);
    sub_B70694(&StringLiteral_23393/*"userEventExpedition"*/);
    sub_B70694(&StringLiteral_21043/*"mstEventFortificationSvt"*/);
    sub_B70694(&StringLiteral_21315/*"mstWarBoardStageReinforcements"*/);
    sub_B70694(&StringLiteral_20967/*"mstClassBoardBase"*/);
    sub_B70694(&StringLiteral_21003/*"mstEnemyMaster"*/);
    sub_B70694(&StringLiteral_20940/*"mstAuraEffectPosOverwrite"*/);
    sub_B70694(&StringLiteral_21184/*"mstRestrictionSlot"*/);
    sub_B70694(&StringLiteral_21119/*"mstGachaSub"*/);
    sub_B70694(&StringLiteral_21091/*"mstEventSvtPointRank"*/);
    sub_B70694(&StringLiteral_21064/*"mstEventPointGroup"*/);
    sub_B70694(&StringLiteral_21011/*"mstEventAdd"*/);
    sub_B70694(&StringLiteral_21005/*"mstEquip"*/);
    sub_B70694(&StringLiteral_21076/*"mstEventRecipeGift"*/);
    sub_B70694(&StringLiteral_21262/*"mstTelop"*/);
    sub_B70694(&StringLiteral_23441/*"userSvtCollection"*/);
    sub_B70694(&StringLiteral_23398/*"userEventMissionFix"*/);
    sub_B70694(&StringLiteral_21182/*"mstRestrictionBase"*/);
    sub_B70694(&StringLiteral_21264/*"mstTips"*/);
    sub_B70694(&StringLiteral_20941/*"mstBankShop"*/);
    sub_B70694(&StringLiteral_21099/*"mstEventVoicePlay"*/);
    sub_B70694(&StringLiteral_21042/*"mstEventFortificationDetail"*/);
    sub_B70694(&StringLiteral_23405/*"userEventSuperBoss"*/);
    sub_B70694(&StringLiteral_21041/*"mstEventFortification"*/);
    sub_B70694(&StringLiteral_21089/*"mstEventSvt"*/);
    sub_B70694(&StringLiteral_21279/*"mstVoicePlayGroup"*/);
    sub_B70694(&StringLiteral_23391/*"userEventDeck"*/);
    sub_B70694(&StringLiteral_21202/*"mstSpotAdd"*/);
    sub_B70694(&StringLiteral_20985/*"mstCombineSkill"*/);
    sub_B70694(&StringLiteral_21307/*"mstWarBoardSquare"*/);
    sub_B70694(&StringLiteral_20963/*"mstBuffTypeDetail"*/);
    sub_B70694(&StringLiteral_21285/*"mstWarBoardActionPointClass"*/);
    sub_B70694(&StringLiteral_21254/*"mstSvtTransform"*/);
    sub_B70694(&StringLiteral_23424/*"userPresentBox"*/);
    sub_B70694(&StringLiteral_23406/*"userEventSvtPoint"*/);
    sub_B70694(&StringLiteral_23109/*"totalEventPoint"*/);
    sub_B70694(&StringLiteral_20987/*"mstCommandCardRankParam"*/);
    sub_B70694(&StringLiteral_21290/*"mstWarBoardCommonRelease"*/);
    sub_B70694(&StringLiteral_21212/*"mstSvt"*/);
    sub_B70694(&StringLiteral_23432/*"userShop"*/);
    sub_B70694(&StringLiteral_21012/*"mstEventBoardGameCell"*/);
    sub_B70694(&StringLiteral_21070/*"mstEventQuestCooltime"*/);
    sub_B70694(&StringLiteral_21107/*"mstFuncTypeDetail"*/);
    sub_B70694(&StringLiteral_21209/*"mstStatusEffectPosOverwrite"*/);
    sub_B70694(&StringLiteral_18747/*"eventBoostItemUsed"*/);
    sub_B70694(&StringLiteral_21190/*"mstShopDetail"*/);
    sub_B70694(&StringLiteral_21128/*"mstIndividualityPolicy"*/);
    sub_B70694(&StringLiteral_21133/*"mstMapButton"*/);
    sub_B70694(&StringLiteral_21317/*"mstWarBoardTacticalTrend"*/);
    sub_B70694(&StringLiteral_21211/*"mstSubEquip"*/);
    sub_B70694(&StringLiteral_21205/*"mstSpotPath"*/);
    sub_B70694(&StringLiteral_20982/*"mstCombineMaterial"*/);
    sub_B70694(&StringLiteral_20981/*"mstCombineLimitRelease"*/);
    sub_B70694(&StringLiteral_21271/*"mstTreasureDeviceLv"*/);
    sub_B70694(&StringLiteral_21092/*"mstEventTower"*/);
    sub_B70694(&StringLiteral_21194/*"mstSkill"*/);
    sub_B70694(&StringLiteral_23420/*"userInterruptionQuest"*/);
    sub_B70694(&StringLiteral_21243/*"mstSvtPassiveSkill"*/);
    sub_B70694(&StringLiteral_21256/*"mstSvtTreasureDeviceAdd"*/);
    sub_B70694(&StringLiteral_20952/*"mstBlankEarthSpotAdd"*/);
    sub_B70694(&StringLiteral_23428/*"userQuest"*/);
    sub_B70694(&StringLiteral_21053/*"mstEventMissionCondition"*/);
    sub_B70694(&StringLiteral_21284/*"mstWarBoardActionPoint"*/);
    sub_B70694(&StringLiteral_20975/*"mstClosedMessage"*/);
    sub_B70694(&StringLiteral_21079/*"mstEventRewardExtra"*/);
    sub_B70694(&StringLiteral_21062/*"mstEventPointActivity"*/);
    sub_B70694(&StringLiteral_21069/*"mstEventQuest"*/);
    sub_B70694(&StringLiteral_20947/*"mstBattleMessageGroup"*/);
    sub_B70694(&StringLiteral_23536/*"viewQuestInfo"*/);
    sub_B70694(&StringLiteral_21247/*"mstSvtProfilePush"*/);
    sub_B70694(&StringLiteral_21270/*"mstTreasureDeviceDetail"*/);
    sub_B70694(&StringLiteral_23371/*"userBlacklist"*/);
    sub_B70694(&StringLiteral_21035/*"mstEventEquipSkillRelease"*/);
    sub_B70694(&StringLiteral_23374/*"userCoinRoom"*/);
    sub_B70694(&StringLiteral_20999/*"mstConstantStr"*/);
    sub_B70694(&StringLiteral_21210/*"mstStoneShop"*/);
    sub_B70694(&StringLiteral_21143/*"mstMapUpdateSchedule"*/);
    sub_B70694(&StringLiteral_21265/*"mstTotalLogin"*/);
    sub_B70694(&StringLiteral_21150/*"mstOpeningMovie"*/);
    sub_B70694(&StringLiteral_20997/*"mstConstant"*/);
    sub_B70694(&StringLiteral_21179/*"mstQuestSpotRelease"*/);
    sub_B70694(&StringLiteral_20990/*"mstCommandCodeSkill"*/);
    sub_B70694(&StringLiteral_21153/*"mstQuest"*/);
    sub_B70694(&StringLiteral_21260/*"mstSvtVoicePattern"*/);
    sub_B70694(&StringLiteral_21095/*"mstEventTutorialCond"*/);
    sub_B70694(&StringLiteral_21283/*"mstWarBoard"*/);
    sub_B70694(&StringLiteral_21073/*"mstEventRaid"*/);
    sub_B70694(&StringLiteral_20948/*"mstBgm"*/);
    sub_B70694(&StringLiteral_21085/*"mstEventScriptRelease"*/);
    sub_B70694(&StringLiteral_23427/*"userProfile"*/);
    sub_B70694(&StringLiteral_21052/*"mstEventMissionAdd"*/);
    sub_B70694(&StringLiteral_21280/*"mstVoiceRelease"*/);
    sub_B70694(&StringLiteral_21168/*"mstQuestRandomGroup"*/);
    sub_B70694(&StringLiteral_21192/*"mstShopRelease"*/);
    sub_B70694(&StringLiteral_23448/*"userSvtStorage"*/);
    sub_B70694(&StringLiteral_23438/*"userSvtAppendPassiveSkill"*/);
    sub_B70694(&StringLiteral_21213/*"mstSvtAdd"*/);
    sub_B70694(&StringLiteral_21320/*"mstWarMessage"*/);
    sub_B70694(&StringLiteral_20953/*"mstBlankEarthSpotNavimenu"*/);
    sub_B70694(&StringLiteral_20945/*"mstBattleMasterImage"*/);
    sub_B70694(&StringLiteral_21196/*"mstSkillDetail"*/);
    sub_B70694(&StringLiteral_21144/*"mstMasterMission"*/);
    sub_B70694(&StringLiteral_21244/*"mstSvtPassiveSkillRelease"*/);
    sub_B70694(&StringLiteral_21201/*"mstSpot"*/);
    sub_B70694(&StringLiteral_21049/*"mstEventMission"*/);
    sub_B70694(&StringLiteral_20984/*"mstCombineQpSvtEquip"*/);
    sub_B70694(&StringLiteral_21061/*"mstEventPoint"*/);
    sub_B70694(&StringLiteral_21083/*"mstEventRewardSet"*/);
    sub_B70694(&StringLiteral_21058/*"mstEventPanelMapDetail"*/);
    sub_B70694(&StringLiteral_21218/*"mstSvtCardAdd"*/);
    sub_B70694(&StringLiteral_21132/*"mstMap"*/);
    sub_B70694(&StringLiteral_21032/*"mstEventDigging"*/);
    sub_B70694(&StringLiteral_23412/*"userGacha"*/);
    sub_B70694(&StringLiteral_21169/*"mstQuestRelease"*/);
    sub_B70694(&StringLiteral_21031/*"mstEventDetail"*/);
    sub_B70694(&StringLiteral_21142/*"mstMapLayer"*/);
    sub_B70694(&StringLiteral_21294/*"mstWarBoardFutureActionTrend"*/);
    sub_B70694(&StringLiteral_21199/*"mstSkillIndividuality"*/);
    sub_B70694(&StringLiteral_20959/*"mstBoxGachaBaseDetail"*/);
    sub_B70694(&StringLiteral_22995/*"tblFriend"*/);
    sub_B70694(&StringLiteral_16938/*"beforeBirthDay"*/);
    sub_B70694(&StringLiteral_21047/*"mstEventItemDisplayRelease"*/);
    sub_B70694(&StringLiteral_16874/*"battle"*/);
    sub_B70694(&StringLiteral_21191/*"mstShopGroup"*/);
    sub_B70694(&StringLiteral_20938/*"mstAttriRelation"*/);
    sub_B70694(&StringLiteral_23375/*"userCommandCode"*/);
    sub_B70694(&StringLiteral_21023/*"mstEventCampaignRelease"*/);
    sub_B70694(&StringLiteral_21229/*"mstSvtFilter"*/);
    sub_B70694(&StringLiteral_21167/*"mstQuestRacePoint"*/);
    sub_B70694(&StringLiteral_21669/*"otherUserGame"*/);
    sub_B70694(&StringLiteral_21046/*"mstEventItemDisplayGroup"*/);
    sub_B70694(&StringLiteral_20965/*"mstCard"*/);
    sub_B70694(&StringLiteral_20950/*"mstBlankEarthGimmick"*/);
    sub_B70694(&StringLiteral_20946/*"mstBattleMessage"*/);
    sub_B70694(&StringLiteral_21185/*"mstRestrictionSlotDetail"*/);
    sub_B70694(&StringLiteral_20942/*"mstBanner"*/);
    sub_B70694(&StringLiteral_21004/*"mstEnemyMasterBattle"*/);
    sub_B70694(&StringLiteral_21045/*"mstEventItemDisplay"*/);
    sub_B70694(&StringLiteral_20964/*"mstCampaignInfo"*/);
    sub_B70694(&StringLiteral_21255/*"mstSvtTreasureDevice"*/);
    sub_B70694(&StringLiteral_21253/*"mstSvtSkillRelease"*/);
    sub_B70694(&StringLiteral_20996/*"mstCompleteMission"*/);
    sub_B70694(&StringLiteral_20979/*"mstCombineLimit"*/);
    sub_B70694(&StringLiteral_20957/*"mstBoxGacha"*/);
    sub_B70694(&StringLiteral_21277/*"mstVoiceMaterialCond"*/);
    sub_B70694(&StringLiteral_21118/*"mstGachaStoryAdjust"*/);
    sub_B70694(&StringLiteral_21273/*"mstUserExp"*/);
    sub_B70694(&StringLiteral_21296/*"mstWarBoardItem"*/);
    sub_B70694(&StringLiteral_21006/*"mstEquipAdd"*/);
    sub_B70694(&StringLiteral_21001/*"mstDialogMessage"*/);
    sub_B70694(&StringLiteral_21502/*"npcSvtFollower"*/);
    sub_B70694(&StringLiteral_20944/*"mstBattleBg"*/);
    sub_B70694(&StringLiteral_20968/*"mstClassBoardClass"*/);
    sub_B70694(&StringLiteral_23399/*"userEventPoint"*/);
    sub_B70694(&StringLiteral_21219/*"mstSvtChange"*/);
    sub_B70694(&StringLiteral_21295/*"mstWarBoardIndividualityClass"*/);
    sub_B70694(&StringLiteral_21165/*"mstQuestPhasePresent"*/);
    sub_B70694(&StringLiteral_21056/*"mstEventMural"*/);
    sub_B70694(&StringLiteral_21130/*"mstItemSelect"*/);
    sub_B70694(&StringLiteral_21233/*"mstSvtIndividuality"*/);
    sub_B70694(&StringLiteral_23386/*"userEvent"*/);
    sub_B70694(&StringLiteral_21318/*"mstWarBoardTreasure"*/);
    sub_B70694(&StringLiteral_21238/*"mstSvtLvDetail"*/);
    sub_B70694(&StringLiteral_21303/*"mstWarBoardRatingOffset"*/);
    sub_B70694(&StringLiteral_21163/*"mstQuestPhaseDetail"*/);
    sub_B70694(&StringLiteral_21189/*"mstShopAction"*/);
    sub_B70694(&StringLiteral_21148/*"mstMyroomAdd"*/);
    sub_B70694(&StringLiteral_21090/*"mstEventSvtFatigue"*/);
    sub_B70694(&StringLiteral_21038/*"mstEventFactory"*/);
    sub_B70694(&StringLiteral_23413/*"userGachaDrawHistory"*/);
    sub_B70694(&StringLiteral_23408/*"userFollower"*/);
    sub_B70694(&StringLiteral_21304/*"mstWarBoardRatingOffsetGroup"*/);
    sub_B70694(&StringLiteral_23440/*"userSvtCoin"*/);
    sub_B70694(&StringLiteral_21084/*"mstEventScript"*/);
    sub_B70694(&StringLiteral_21252/*"mstSvtSkill"*/);
    sub_B70694(&StringLiteral_21204/*"mstSpotLayer"*/);
    sub_B70694(&StringLiteral_23442/*"userSvtCommandCard"*/);
    sub_B70694(&StringLiteral_23429/*"userQuestInfo"*/);
    sub_B70694(&StringLiteral_21002/*"mstEffect"*/);
    sub_B70694(&StringLiteral_21129/*"mstItem"*/);
    sub_B70694(&StringLiteral_21065/*"mstEventPointGroupAdd"*/);
    sub_B70694(&StringLiteral_21161/*"mstQuestMessage"*/);
    sub_B70694(&StringLiteral_21498/*"npcFollowerRelease"*/);
    sub_B70694(&StringLiteral_21104/*"mstFuncCategory"*/);
    sub_B70694(&StringLiteral_21297/*"mstWarBoardMessage"*/);
    sub_B70694(&StringLiteral_23416/*"userGame"*/);
    sub_B70694(&StringLiteral_21121/*"mstGift"*/);
    sub_B70694(&StringLiteral_21305/*"mstWarBoardReinforcements"*/);
    sub_B70694(&StringLiteral_21013/*"mstEventBoardGameToken"*/);
    sub_B70694(&StringLiteral_21137/*"mstMapGimmickLayer"*/);
    sub_B70694(&StringLiteral_21222/*"mstSvtCommandCodeUnlock"*/);
    sub_B70694(&StringLiteral_20936/*"mstAssist"*/);
    sub_B70694(&StringLiteral_23537/*"viewWaveEnemy"*/);
    sub_B70694(&StringLiteral_21501/*"npcSvtEquip"*/);
    sub_B70694(&StringLiteral_21176/*"mstQuestScriptMaterialNext"*/);
    sub_B70694(&StringLiteral_21228/*"mstSvtExp"*/);
    sub_B70694(&StringLiteral_23437/*"userSvt"*/);
    sub_B70694(&StringLiteral_23534/*"viewEnemy"*/);
    sub_B70694(&StringLiteral_21097/*"mstEventUiRelease"*/);
    sub_B70694(&StringLiteral_23110/*"totalEventRace"*/);
    sub_B70694(&StringLiteral_21101/*"mstFieldMotion"*/);
    sub_B70694(&StringLiteral_21074/*"mstEventRandomMission"*/);
    sub_B70694(&StringLiteral_21081/*"mstEventRewardScene"*/);
    sub_B70694(&StringLiteral_21127/*"mstIndividualityPersonality"*/);
    sub_B70694(&StringLiteral_20978/*"mstCombineCostume"*/);
    sub_B70694(&StringLiteral_20977/*"mstCombineAppendPassiveSkill"*/);
    sub_B70694(&StringLiteral_21034/*"mstEventDiggingReward"*/);
    sub_B70694(&StringLiteral_21286/*"mstWarBoardActionTrend"*/);
    sub_B70694(&StringLiteral_21109/*"mstGachaAppend"*/);
    sub_B70694(&StringLiteral_21308/*"mstWarBoardSquareIndexGroup"*/);
    sub_B70694(&StringLiteral_21103/*"mstFunc"*/);
    sub_B70694(&StringLiteral_21027/*"mstEventConquestReward"*/);
    sub_B70694(&StringLiteral_21291/*"mstWarBoardEffect"*/);
    sub_B70694(&StringLiteral_21321/*"mstWarQuestSelection"*/);
    sub_B70694(&StringLiteral_23380/*"userDeck"*/);
    sub_B70694(&StringLiteral_21145/*"mstMasterMissionDisplayInfo"*/);
    sub_B70694(&StringLiteral_21319/*"mstWarGroup"*/);
    sub_B70694(&StringLiteral_21188/*"mstShop"*/);
    sub_B70694(&StringLiteral_21300/*"mstWarBoardPartySkill"*/);
    sub_B70694(&StringLiteral_21063/*"mstEventPointBuff"*/);
    sub_B70694(&StringLiteral_23436/*"userSupportDeck"*/);
    sub_B70694(&StringLiteral_21206/*"mstSpotRoad"*/);
    sub_B70694(&StringLiteral_21261/*"mstSvtVoiceRelation"*/);
    sub_B70694(&StringLiteral_20980/*"mstCombineLimitGift"*/);
    sub_B70694(&StringLiteral_21028/*"mstEventCooltimeReward"*/);
    sub_B70694(&StringLiteral_21020/*"mstEventBulletinBoard"*/);
    sub_B70694(&StringLiteral_21078/*"mstEventRewardBg"*/);
    sub_B70694(&StringLiteral_20960/*"mstBoxGachaTalk"*/);
    sub_B70694(&StringLiteral_21105/*"mstFuncDisp"*/);
    sub_B70694(&StringLiteral_21249/*"mstSvtScript"*/);
    sub_B70694(&StringLiteral_21134/*"mstMapCond"*/);
    sub_B70694(&StringLiteral_23394/*"userEventFortification"*/);
    sub_B70694(&StringLiteral_21299/*"mstWarBoardOnboardSkill"*/);
    sub_B70694(&StringLiteral_21115/*"mstGachaGroup"*/);
    sub_B70694(&StringLiteral_23535/*"viewQuestEnemyInfo"*/);
    sub_B70694(&StringLiteral_21223/*"mstSvtComment"*/);
    sub_B70694(&StringLiteral_21269/*"mstTreasureDevice"*/);
    sub_B70694(&StringLiteral_23423/*"userNpcSvtRecord"*/);
    sub_B70694(&StringLiteral_21055/*"mstEventMissionGroup"*/);
    sub_B70694(&StringLiteral_23430/*"userQuestRecord"*/);
    sub_B70694(&StringLiteral_21183/*"mstRestrictionMessage"*/);
    sub_B70694(&StringLiteral_21123/*"mstGiftDetail"*/);
    sub_B70694(&StringLiteral_21120/*"mstGachaTicket"*/);
    sub_B70694(&StringLiteral_21245/*"mstSvtPhoto"*/);
    sub_B70694(&StringLiteral_21821/*"pickupUserFollower"*/);
    sub_B70694(&StringLiteral_21086/*"mstEventStatus"*/);
    sub_B70694(&StringLiteral_21224/*"mstSvtCommentAdd"*/);
    sub_B70694(&StringLiteral_21242/*"mstSvtOverwrite"*/);
    sub_B70694(&StringLiteral_21497/*"npcFollower"*/);
    sub_B70694(&StringLiteral_21026/*"mstEventCommandAssist"*/);
    sub_B70694(&StringLiteral_18758/*"eventSvtFatigue"*/);
    sub_B70694(&StringLiteral_21112/*"mstGachaBonusSelectLineup"*/);
    sub_B70694(&StringLiteral_21021/*"mstEventBulletinBoardRelease"*/);
    sub_B70694(&StringLiteral_21227/*"mstSvtExceed"*/);
    sub_B70694(&StringLiteral_21237/*"mstSvtLimitSpoilerProtection"*/);
    sub_B70694(&StringLiteral_21259/*"mstSvtVoice"*/);
    sub_B70694(&StringLiteral_21186/*"mstRestrictionWhole"*/);
    sub_B70694(&StringLiteral_23415/*"userGachaExtraCount"*/);
    sub_B70694(&StringLiteral_21139/*"mstMapGimmickPath"*/);
    sub_B70694(&StringLiteral_21093/*"mstEventTowerReward"*/);
    sub_B70694(&StringLiteral_20974/*"mstClassRelationOverwrite"*/);
    sub_B70694(&StringLiteral_20931/*"mstAi"*/);
    sub_B70694(&StringLiteral_23372/*"userBoxGacha"*/);
    sub_B70694(&StringLiteral_21217/*"mstSvtCard"*/);
    sub_B70694(&StringLiteral_23414/*"userGachaDrawLog"*/);
    sub_B70694(&StringLiteral_21309/*"mstWarBoardStage"*/);
    sub_B70694(&StringLiteral_23384/*"userEquip"*/);
    sub_B70694(&StringLiteral_21080/*"mstEventRewardGuideRelease"*/);
    sub_B70694(&StringLiteral_20969/*"mstClassBoardCommandSpell"*/);
    sub_B70694(&StringLiteral_21110/*"mstGachaBehavior"*/);
    sub_B70694(&StringLiteral_21281/*"mstWar"*/);
    sub_B70694(&StringLiteral_21015/*"mstEventBonusFilter"*/);
    sub_B70694(&StringLiteral_21178/*"mstQuestScriptRelease"*/);
    sub_B70694(&StringLiteral_23395/*"userEventMap"*/);
    sub_B70694(&StringLiteral_21060/*"mstEventPanelSpot"*/);
    sub_B70694(&StringLiteral_20966/*"mstClass"*/);
    sub_B70694(&StringLiteral_23370/*"userAccessary"*/);
    sub_B70694(&StringLiteral_21235/*"mstSvtLimitAdd"*/);
    sub_B70694(&StringLiteral_21177/*"mstQuestScriptMaterialOverwrite"*/);
    sub_B70694(&StringLiteral_17829/*"combineExp"*/);
    sub_B70694(&StringLiteral_23409/*"userFormation"*/);
    sub_B70694(&StringLiteral_21298/*"mstWarBoardMessageScript"*/);
    sub_B70694(&StringLiteral_21068/*"mstEventProgressValue"*/);
    sub_B70694(&StringLiteral_23449/*"userSvtVoicePlayed"*/);
    sub_B70694(&StringLiteral_21100/*"mstExcludeMotion"*/);
    sub_B70694(&StringLiteral_21230/*"mstSvtFlag"*/);
    sub_B70694(&StringLiteral_20954/*"mstBoardMessage"*/);
    sub_B70694(&StringLiteral_21059/*"mstEventPanelScan"*/);
    sub_B70694(&StringLiteral_21236/*"mstSvtLimitImage"*/);
    sub_B70694(&StringLiteral_21033/*"mstEventDiggingBlock"*/);
    sub_B70694(&StringLiteral_23403/*"userEventRandomMission"*/);
    sub_B70694(&StringLiteral_20934/*"mstArea"*/);
    sub_B70694(&StringLiteral_23111/*"totalEventRaid"*/);
    sub_B70694(&StringLiteral_21482/*"notEndEventMissionFix"*/);
    sub_B70694(&StringLiteral_21193/*"mstShopScript"*/);
    sub_B70694(&StringLiteral_23396/*"userEventMission"*/);
    sub_B70694(&StringLiteral_21146/*"mstMasterPhoto"*/);
    sub_B70694(&StringLiteral_21051/*"mstEventMissionActionAdd"*/);
    sub_B70694(&StringLiteral_20986/*"mstCombineTd"*/);
    sub_B70694(&StringLiteral_20956/*"mstBoost"*/);
    sub_B70694(&StringLiteral_21250/*"mstSvtScriptAdd"*/);
    sub_B70694(&StringLiteral_20958/*"mstBoxGachaBase"*/);
    sub_B70694(&StringLiteral_20943/*"mstBannerAdd"*/);
    sub_B70694(&StringLiteral_20929/*"mstAccessary"*/);
    sub_B70694(&StringLiteral_21272/*"mstTreasureDeviceSequenceWeight"*/);
    sub_B70694(&StringLiteral_23401/*"userEventRace"*/);
    sub_B70694(&StringLiteral_21159/*"mstQuestGroup"*/);
    sub_B70694(&StringLiteral_21067/*"mstEventPointUpperRelease"*/);
    sub_B70694(&StringLiteral_23447/*"userSvtLeader"*/);
    sub_B70694(&StringLiteral_21234/*"mstSvtLimit"*/);
    sub_B70694(&StringLiteral_23407/*"userFollow"*/);
    sub_B70694(&StringLiteral_21048/*"mstEventLocationCampaign"*/);
    sub_B70694(&StringLiteral_20983/*"mstCombineQp"*/);
    sub_B70694(&StringLiteral_21010/*"mstEvent"*/);
    sub_B70694(&StringLiteral_21231/*"mstSvtFlagRelease"*/);
    sub_B70694(&StringLiteral_23410/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_B70694(&StringLiteral_23426/*"userPrivilege"*/);
    sub_B70694(&StringLiteral_20988/*"mstCommandCode"*/);
    sub_B70694(&StringLiteral_21215/*"mstSvtAppendPassiveSkill"*/);
    sub_B70694(&StringLiteral_21044/*"mstEventGroup"*/);
    sub_B70694(&StringLiteral_21111/*"mstGachaBonusSelect"*/);
    sub_B70694(&StringLiteral_23388/*"userEventBoardGameToken"*/);
    sub_B70694(&StringLiteral_21306/*"mstWarBoardRoad"*/);
    sub_B70694(&StringLiteral_20961/*"mstBuff"*/);
    sub_B70694(&StringLiteral_23596/*"warBoardData"*/);
    sub_B70694(&StringLiteral_21126/*"mstIllustrator"*/);
    sub_B70694(&StringLiteral_23106/*"totalBoxGacha"*/);
    sub_B70694(&StringLiteral_21248/*"mstSvtRarity"*/);
    sub_B70694(&StringLiteral_21282/*"mstWarAdd"*/);
    sub_B70694(&StringLiteral_21140/*"mstMapGimmickPathRelease"*/);
    sub_B70694(&StringLiteral_23411/*"userFriendRequestHistory"*/);
    sub_B70694(&StringLiteral_23367/*"user"*/);
    sub_B70694(&StringLiteral_17150/*"boxGachaHistory"*/);
    sub_B70694(&StringLiteral_21106/*"mstFuncGroup"*/);
    sub_B70694(&StringLiteral_20993/*"mstCommonConsume"*/);
    sub_B70694(&StringLiteral_21293/*"mstWarBoardEventScript"*/);
    sub_B70694(&StringLiteral_21122/*"mstGiftAdd"*/);
    sub_B70694(&StringLiteral_21096/*"mstEventUi"*/);
    sub_B70694(&StringLiteral_21203/*"mstSpotImage"*/);
    sub_B70694(&StringLiteral_21226/*"mstSvtCostumeRelease"*/);
    sub_B70694(&StringLiteral_21135/*"mstMapGimmick"*/);
    sub_B70694(&StringLiteral_21094/*"mstEventTutorial"*/);
    sub_B70694(&StringLiteral_21316/*"mstWarBoardStageWall"*/);
    sub_B70694(&StringLiteral_20933/*"mstAiField"*/);
    sub_B70694(&StringLiteral_21258/*"mstSvtTreasureDeviceRelease"*/);
    sub_B70694(&StringLiteral_21162/*"mstQuestPhase"*/);
    sub_B70694(&StringLiteral_23390/*"userEventDataLost"*/);
    sub_B70694(&StringLiteral_21216/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_B70694(&StringLiteral_21257/*"mstSvtTreasureDeviceDamage"*/);
    sub_B70694(&StringLiteral_21207/*"mstStage"*/);
    sub_B70694(&StringLiteral_20976/*"mstCombine"*/);
    sub_B70694(&StringLiteral_21022/*"mstEventCampaign"*/);
    sub_B70694(&StringLiteral_21313/*"mstWarBoardStageNpc"*/);
    sub_B70694(&StringLiteral_18908/*"exchangeSvt"*/);
    sub_B70694(&StringLiteral_21208/*"mstStageRemap"*/);
    sub_B70694(&StringLiteral_21181/*"mstRestriction"*/);
    sub_B70694(&StringLiteral_21174/*"mstQuestScript"*/);
    sub_B70694(&StringLiteral_21082/*"mstEventRewardSceneRelease"*/);
    sub_B70694(&StringLiteral_21276/*"mstVoiceCond"*/);
    sub_B70694(&StringLiteral_23435/*"userSubEquip"*/);
    sub_B70694(&StringLiteral_21075/*"mstEventRecipe"*/);
    sub_B70694(&StringLiteral_21225/*"mstSvtCostume"*/);
    sub_B70694(&StringLiteral_21246/*"mstSvtProfile"*/);
    sub_B70694(&StringLiteral_20995/*"mstCommonRestriction"*/);
    sub_B70694(&StringLiteral_23418/*"userHeelPortrait"*/);
    sub_B70694(&StringLiteral_21198/*"mstSkillGroupOverwrite"*/);
    sub_B70694(&StringLiteral_23376/*"userCommandCodeCollection"*/);
    sub_B70694(&StringLiteral_20991/*"mstCommandCodeSkillRelease"*/);
    sub_B70694(&StringLiteral_21166/*"mstQuestPickup"*/);
    sub_B70694(&StringLiteral_21312/*"mstWarBoardStageLayout"*/);
    sub_B70694(&StringLiteral_21287/*"mstWarBoardActionTrendCond"*/);
    sub_B70694(&StringLiteral_21024/*"mstEventCombine"*/);
    sub_B70694(&StringLiteral_21301/*"mstWarBoardQuest"*/);
    sub_B70694(&StringLiteral_21157/*"mstQuestConsumeItem"*/);
    sub_B70694(&StringLiteral_21164/*"mstQuestPhaseDetailAdd"*/);
    sub_B70694(&StringLiteral_21125/*"mstHeelPortrait"*/);
    sub_B70694(&StringLiteral_23425/*"userPresentHistory"*/);
    sub_B70694(&StringLiteral_21302/*"mstWarBoardRatingBase"*/);
    sub_B70694(&StringLiteral_21116/*"mstGachaImage"*/);
    sub_B70694(&StringLiteral_21008/*"mstEquipImage"*/);
    sub_B70694(&StringLiteral_23402/*"userEventRaid"*/);
    sub_B70694(&StringLiteral_21221/*"mstSvtCollection"*/);
    sub_B70694(&StringLiteral_19207/*"friendshipQuestDialogInfo"*/);
    sub_B70694(&StringLiteral_21149/*"mstNews"*/);
    sub_B70694(&StringLiteral_21108/*"mstGacha"*/);
    sub_B70694(&StringLiteral_21197/*"mstSkillGroup"*/);
    sub_B70694(&StringLiteral_21124/*"mstGuide"*/);
    sub_B70694(&StringLiteral_20971/*"mstClassBoardLock"*/);
    sub_B70694(&StringLiteral_21066/*"mstEventPointUpper"*/);
    sub_B70694(&StringLiteral_20951/*"mstBlankEarthSpot"*/);
    sub_B70694(&StringLiteral_21263/*"mstTerminalOverwrite"*/);
    sub_B70694(&StringLiteral_21009/*"mstEquipSkill"*/);
    sub_B70694(&StringLiteral_21098/*"mstEventUiValue"*/);
    sub_B70694(&StringLiteral_23378/*"userContinue"*/);
    sub_B70694(&StringLiteral_21154/*"mstQuestAdd"*/);
    sub_B70694(&StringLiteral_20970/*"mstClassBoardLine"*/);
    sub_B70694(&StringLiteral_23319/*"updateProfileDialogInfo"*/);
    sub_B70694(&StringLiteral_21274/*"mstVoice"*/);
    sub_B70694(&StringLiteral_23397/*"userEventMissionConditionDetail"*/);
    sub_B70694(&StringLiteral_20935/*"mstAssetbundleKey"*/);
    sub_B70694(&StringLiteral_21057/*"mstEventPanelMap"*/);
    sub_B70694(&StringLiteral_23422/*"userLogin"*/);
    sub_B70694(&StringLiteral_21131/*"mstLoginQuest"*/);
    sub_B70694(&StringLiteral_21151/*"mstPartialMaintenance"*/);
    sub_B70694(&StringLiteral_23404/*"userEventSpot"*/);
    sub_B70694(&StringLiteral_21077/*"mstEventReward"*/);
    sub_B70694(&StringLiteral_21030/*"mstEventDataLostBattleReset"*/);
    sub_B70694(&StringLiteral_20937/*"mstAttri"*/);
    sub_B70694(&StringLiteral_21311/*"mstWarBoardStageDetail"*/);
    sub_B70694(&StringLiteral_23400/*"userEventQuestCooltime"*/);
    sub_B70694(&StringLiteral_21175/*"mstQuestScriptBranchMaterial"*/);
    sub_B70694(&StringLiteral_21039/*"mstEventFatigueRecovery"*/);
    sub_B70694(&StringLiteral_21289/*"mstWarBoardAi"*/);
    sub_B70694(&StringLiteral_21268/*"mstTreasureBoxTalk"*/);
    sub_B70694(&StringLiteral_21292/*"mstWarBoardEvent"*/);
    sub_B70694(&StringLiteral_21278/*"mstVoicePlayCond"*/);
    sub_B70694(&StringLiteral_21113/*"mstGachaDetail"*/);
    sub_B70694(&StringLiteral_21088/*"mstEventSuperBoss"*/);
    sub_B70694(&StringLiteral_21195/*"mstSkillAdd"*/);
    byte_43548E6 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B70764(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v1,
    (const MethodInfo_2F71470 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_B7076C(v2, v3);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    0,
    0LL,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    1,
    (System_String_o *)StringLiteral_21212/*"mstSvt"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    2,
    (System_String_o *)StringLiteral_21223/*"mstSvtComment"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    3,
    (System_String_o *)StringLiteral_21246/*"mstSvtProfile"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    4,
    (System_String_o *)StringLiteral_21281/*"mstWar"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    5,
    (System_String_o *)StringLiteral_16874/*"battle"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    6,
    (System_String_o *)StringLiteral_21269/*"mstTreasureDevice"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    7,
    (System_String_o *)StringLiteral_21234/*"mstSvtLimit"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    8,
    (System_String_o *)StringLiteral_21255/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    9,
    (System_String_o *)StringLiteral_20966/*"mstClass"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    10,
    (System_String_o *)StringLiteral_21249/*"mstSvtScript"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    11,
    (System_String_o *)StringLiteral_21217/*"mstSvtCard"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    12,
    (System_String_o *)StringLiteral_21252/*"mstSvtSkill"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    13,
    (System_String_o *)StringLiteral_21243/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    14,
    (System_String_o *)StringLiteral_23437/*"userSvt"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    15,
    (System_String_o *)StringLiteral_23448/*"userSvtStorage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    16,
    (System_String_o *)StringLiteral_21207/*"mstStage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    17,
    (System_String_o *)StringLiteral_21232/*"mstSvtGroup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    18,
    (System_String_o *)StringLiteral_20951/*"mstBlankEarthSpot"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    19,
    (System_String_o *)StringLiteral_20952/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    20,
    (System_String_o *)StringLiteral_21201/*"mstSpot"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    21,
    (System_String_o *)StringLiteral_21203/*"mstSpotImage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    22,
    (System_String_o *)StringLiteral_21206/*"mstSpotRoad"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    23,
    (System_String_o *)StringLiteral_21135/*"mstMapGimmick"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    24,
    (System_String_o *)StringLiteral_21121/*"mstGift"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    25,
    (System_String_o *)StringLiteral_21122/*"mstGiftAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    26,
    (System_String_o *)StringLiteral_21211/*"mstSubEquip"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    27,
    (System_String_o *)StringLiteral_23367/*"user"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    28,
    (System_String_o *)StringLiteral_23416/*"userGame"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    29,
    (System_String_o *)StringLiteral_23380/*"userDeck"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    30,
    (System_String_o *)StringLiteral_23441/*"userSvtCollection"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    31,
    (System_String_o *)StringLiteral_21102/*"mstFriendship"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    32,
    (System_String_o *)StringLiteral_21108/*"mstGacha"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    33,
    (System_String_o *)StringLiteral_21116/*"mstGachaImage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    34,
    (System_String_o *)StringLiteral_23412/*"userGacha"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    35,
    (System_String_o *)StringLiteral_23421/*"userItem"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    36,
    (System_String_o *)StringLiteral_21129/*"mstItem"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    37,
    (System_String_o *)StringLiteral_21120/*"mstGachaTicket"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    38,
    (System_String_o *)StringLiteral_20929/*"mstAccessary"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    39,
    (System_String_o *)StringLiteral_23370/*"userAccessary"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    40,
    (System_String_o *)StringLiteral_23435/*"userSubEquip"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    41,
    (System_String_o *)StringLiteral_22996/*"tblUserGame"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    42,
    (System_String_o *)StringLiteral_21188/*"mstShop"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    43,
    (System_String_o *)StringLiteral_21210/*"mstStoneShop"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    44,
    (System_String_o *)StringLiteral_20941/*"mstBankShop"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    45,
    (System_String_o *)StringLiteral_21193/*"mstShopScript"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    46,
    (System_String_o *)StringLiteral_21005/*"mstEquip"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    47,
    (System_String_o *)StringLiteral_21007/*"mstEquipExp"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    48,
    (System_String_o *)StringLiteral_21009/*"mstEquipSkill"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    49,
    (System_String_o *)StringLiteral_23384/*"userEquip"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    50,
    (System_String_o *)StringLiteral_23409/*"userFormation"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    51,
    (System_String_o *)StringLiteral_21194/*"mstSkill"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    52,
    (System_String_o *)StringLiteral_21200/*"mstSkillLv"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    53,
    (System_String_o *)StringLiteral_21196/*"mstSkillDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    54,
    (System_String_o *)StringLiteral_21103/*"mstFunc"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    55,
    (System_String_o *)StringLiteral_20961/*"mstBuff"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    56,
    (System_String_o *)StringLiteral_21117/*"mstGachaRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    57,
    (System_String_o *)StringLiteral_23428/*"userQuest"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    58,
    (System_String_o *)StringLiteral_23429/*"userQuestInfo"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    59,
    (System_String_o *)StringLiteral_23430/*"userQuestRecord"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    60,
    (System_String_o *)StringLiteral_21273/*"mstUserExp"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    61,
    (System_String_o *)StringLiteral_21149/*"mstNews"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    62,
    (System_String_o *)StringLiteral_21262/*"mstTelop"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    63,
    (System_String_o *)StringLiteral_21669/*"otherUserGame"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    64,
    (System_String_o *)StringLiteral_22995/*"tblFriend"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    65,
    (System_String_o *)StringLiteral_23424/*"userPresentBox"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    66,
    (System_String_o *)StringLiteral_21010/*"mstEvent"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    67,
    (System_String_o *)StringLiteral_21153/*"mstQuest"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    68,
    (System_String_o *)StringLiteral_21154/*"mstQuestAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    69,
    (System_String_o *)StringLiteral_21169/*"mstQuestRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    70,
    (System_String_o *)StringLiteral_21162/*"mstQuestPhase"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    71,
    (System_String_o *)StringLiteral_21163/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    72,
    (System_String_o *)StringLiteral_21159/*"mstQuestGroup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    73,
    (System_String_o *)StringLiteral_21168/*"mstQuestRandomGroup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    74,
    (System_String_o *)StringLiteral_21157/*"mstQuestConsumeItem"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    75,
    (System_String_o *)StringLiteral_21161/*"mstQuestMessage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    76,
    (System_String_o *)StringLiteral_23536/*"viewQuestInfo"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    77,
    (System_String_o *)StringLiteral_23534/*"viewEnemy"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    78,
    (System_String_o *)StringLiteral_23535/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    79,
    (System_String_o *)StringLiteral_20934/*"mstArea"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    80,
    (System_String_o *)StringLiteral_20948/*"mstBgm"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    81,
    (System_String_o *)StringLiteral_21069/*"mstEventQuest"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    82,
    (System_String_o *)StringLiteral_21022/*"mstEventCampaign"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    83,
    (System_String_o *)StringLiteral_20983/*"mstCombineQp"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    84,
    (System_String_o *)StringLiteral_20982/*"mstCombineMaterial"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    85,
    (System_String_o *)StringLiteral_21024/*"mstEventCombine"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    86,
    (System_String_o *)StringLiteral_21228/*"mstSvtExp"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    87,
    (System_String_o *)StringLiteral_20985/*"mstCombineSkill"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    88,
    (System_String_o *)StringLiteral_20986/*"mstCombineTd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    89,
    (System_String_o *)StringLiteral_21126/*"mstIllustrator"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    90,
    (System_String_o *)StringLiteral_21000/*"mstCv"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    91,
    (System_String_o *)StringLiteral_21271/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    92,
    (System_String_o *)StringLiteral_21270/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    93,
    (System_String_o *)StringLiteral_23408/*"userFollower"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    94,
    (System_String_o *)StringLiteral_21497/*"npcFollower"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    95,
    (System_String_o *)StringLiteral_21502/*"npcSvtFollower"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    96,
    (System_String_o *)StringLiteral_23386/*"userEvent"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    97,
    (System_String_o *)StringLiteral_23427/*"userProfile"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    98,
    (System_String_o *)StringLiteral_23432/*"userShop"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    99,
    (System_String_o *)StringLiteral_23378/*"userContinue"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    100,
    (System_String_o *)StringLiteral_20997/*"mstConstant"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    101,
    (System_String_o *)StringLiteral_20998/*"mstConstantLong"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    102,
    (System_String_o *)StringLiteral_20999/*"mstConstantStr"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    103,
    (System_String_o *)StringLiteral_20992/*"mstCommandSpell"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    104,
    (System_String_o *)StringLiteral_20931/*"mstAi"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    105,
    (System_String_o *)StringLiteral_20932/*"mstAiAct"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    106,
    (System_String_o *)StringLiteral_21259/*"mstSvtVoice"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    107,
    (System_String_o *)StringLiteral_20938/*"mstAttriRelation"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    108,
    (System_String_o *)StringLiteral_20973/*"mstClassRelation"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    109,
    (System_String_o *)StringLiteral_21002/*"mstEffect"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    110,
    (System_String_o *)StringLiteral_21008/*"mstEquipImage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    111,
    (System_String_o *)StringLiteral_20979/*"mstCombineLimit"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    112,
    (System_String_o *)StringLiteral_20965/*"mstCard"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    113,
    (System_String_o *)StringLiteral_20984/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    114,
    (System_String_o *)StringLiteral_21235/*"mstSvtLimitAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    115,
    (System_String_o *)StringLiteral_21248/*"mstSvtRarity"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    116,
    (System_String_o *)StringLiteral_21187/*"mstSetItem"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    117,
    (System_String_o *)StringLiteral_21180/*"mstRecover"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    118,
    (System_String_o *)StringLiteral_20942/*"mstBanner"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    119,
    (System_String_o *)StringLiteral_21192/*"mstShopRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    120,
    (System_String_o *)StringLiteral_21077/*"mstEventReward"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    121,
    (System_String_o *)StringLiteral_21031/*"mstEventDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    122,
    (System_String_o *)StringLiteral_21089/*"mstEventSvt"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    123,
    (System_String_o *)StringLiteral_20957/*"mstBoxGacha"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    124,
    (System_String_o *)StringLiteral_20958/*"mstBoxGachaBase"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    125,
    (System_String_o *)StringLiteral_20960/*"mstBoxGachaTalk"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    126,
    (System_String_o *)StringLiteral_23372/*"userBoxGacha"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    127,
    (System_String_o *)StringLiteral_17150/*"boxGachaHistory"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    128,
    (System_String_o *)StringLiteral_20944/*"mstBattleBg"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    129,
    (System_String_o *)StringLiteral_21264/*"mstTips"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    130,
    (System_String_o *)StringLiteral_23422/*"userLogin"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    131,
    (System_String_o *)StringLiteral_21274/*"mstVoice"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    132,
    (System_String_o *)StringLiteral_21079/*"mstEventRewardExtra"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    133,
    (System_String_o *)StringLiteral_21049/*"mstEventMission"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    134,
    (System_String_o *)StringLiteral_21053/*"mstEventMissionCondition"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    135,
    (System_String_o *)StringLiteral_21054/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    136,
    (System_String_o *)StringLiteral_21050/*"mstEventMissionAction"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    137,
    (System_String_o *)StringLiteral_21051/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    140,
    (System_String_o *)StringLiteral_20996/*"mstCompleteMission"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    138,
    (System_String_o *)StringLiteral_21052/*"mstEventMissionAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    139,
    (System_String_o *)StringLiteral_21083/*"mstEventRewardSet"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    141,
    (System_String_o *)StringLiteral_23396/*"userEventMission"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    142,
    (System_String_o *)StringLiteral_23397/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    143,
    (System_String_o *)StringLiteral_20959/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    144,
    (System_String_o *)StringLiteral_20975/*"mstClosedMessage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    145,
    (System_String_o *)StringLiteral_23447/*"userSvtLeader"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    146,
    (System_String_o *)StringLiteral_21106/*"mstFuncGroup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    147,
    (System_String_o *)StringLiteral_21073/*"mstEventRaid"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    148,
    (System_String_o *)StringLiteral_23111/*"totalEventRaid"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    149,
    (System_String_o *)StringLiteral_23402/*"userEventRaid"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    150,
    (System_String_o *)StringLiteral_21061/*"mstEventPoint"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    151,
    (System_String_o *)StringLiteral_21064/*"mstEventPointGroup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    152,
    (System_String_o *)StringLiteral_23109/*"totalEventPoint"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    153,
    (System_String_o *)StringLiteral_23399/*"userEventPoint"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    154,
    (System_String_o *)StringLiteral_23425/*"userPresentHistory"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    155,
    (System_String_o *)StringLiteral_21144/*"mstMasterMission"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    156,
    (System_String_o *)StringLiteral_21227/*"mstSvtExceed"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    157,
    (System_String_o *)StringLiteral_21151/*"mstPartialMaintenance"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    158,
    (System_String_o *)StringLiteral_21124/*"mstGuide"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    159,
    (System_String_o *)StringLiteral_21145/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    160,
    (System_String_o *)StringLiteral_21115/*"mstGachaGroup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    161,
    (System_String_o *)StringLiteral_21171/*"mstQuestReset"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    162,
    (System_String_o *)StringLiteral_21282/*"mstWarAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    163,
    (System_String_o *)StringLiteral_21045/*"mstEventItemDisplay"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    164,
    (System_String_o *)StringLiteral_21046/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    165,
    (System_String_o *)StringLiteral_21047/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    166,
    (System_String_o *)StringLiteral_21094/*"mstEventTutorial"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    167,
    (System_String_o *)StringLiteral_21095/*"mstEventTutorialCond"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    168,
    (System_String_o *)StringLiteral_21280/*"mstVoiceRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    169,
    (System_String_o *)StringLiteral_21088/*"mstEventSuperBoss"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    170,
    (System_String_o *)StringLiteral_23405/*"userEventSuperBoss"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    171,
    (System_String_o *)StringLiteral_21174/*"mstQuestScript"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    172,
    (System_String_o *)StringLiteral_21178/*"mstQuestScriptRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    173,
    (System_String_o *)StringLiteral_21147/*"mstMaterialFolder"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    174,
    (System_String_o *)StringLiteral_21181/*"mstRestriction"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    175,
    (System_String_o *)StringLiteral_21172/*"mstQuestRestriction"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    176,
    (System_String_o *)StringLiteral_21261/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    177,
    (System_String_o *)StringLiteral_21190/*"mstShopDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    178,
    (System_String_o *)StringLiteral_21250/*"mstSvtScriptAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    179,
    (System_String_o *)StringLiteral_20976/*"mstCombine"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    180,
    (System_String_o *)StringLiteral_20933/*"mstAiField"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    181,
    (System_String_o *)StringLiteral_21224/*"mstSvtCommentAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    182,
    (System_String_o *)StringLiteral_21040/*"mstEventFilter"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    183,
    (System_String_o *)StringLiteral_23436/*"userSupportDeck"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    184,
    (System_String_o *)StringLiteral_21081/*"mstEventRewardScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    185,
    (System_String_o *)StringLiteral_21099/*"mstEventVoicePlay"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    186,
    (System_String_o *)StringLiteral_21119/*"mstGachaSub"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    187,
    (System_String_o *)StringLiteral_21113/*"mstGachaDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    188,
    (System_String_o *)StringLiteral_21111/*"mstGachaBonusSelect"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    189,
    (System_String_o *)StringLiteral_21112/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    190,
    (System_String_o *)StringLiteral_21219/*"mstSvtChange"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    191,
    (System_String_o *)StringLiteral_21276/*"mstVoiceCond"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    192,
    (System_String_o *)StringLiteral_20949/*"mstBgmRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    193,
    (System_String_o *)StringLiteral_21148/*"mstMyroomAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    194,
    (System_String_o *)StringLiteral_21189/*"mstShopAction"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    195,
    (System_String_o *)StringLiteral_21082/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    196,
    (System_String_o *)StringLiteral_21132/*"mstMap"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    197,
    (System_String_o *)StringLiteral_21134/*"mstMapCond"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    198,
    (System_String_o *)StringLiteral_21133/*"mstMapButton"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    199,
    (System_String_o *)StringLiteral_20943/*"mstBannerAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    200,
    (System_String_o *)StringLiteral_21156/*"mstQuestBehavior"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    201,
    (System_String_o *)StringLiteral_21011/*"mstEventAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    202,
    (System_String_o *)StringLiteral_21265/*"mstTotalLogin"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    203,
    (System_String_o *)StringLiteral_21229/*"mstSvtFilter"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    204,
    (System_String_o *)StringLiteral_20978/*"mstCombineCostume"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    205,
    (System_String_o *)StringLiteral_21225/*"mstSvtCostume"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    206,
    (System_String_o *)StringLiteral_21226/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    207,
    (System_String_o *)StringLiteral_23411/*"userFriendRequestHistory"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    208,
    (System_String_o *)StringLiteral_23371/*"userBlacklist"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    209,
    (System_String_o *)StringLiteral_21130/*"mstItemSelect"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    210,
    (System_String_o *)StringLiteral_21071/*"mstEventRace"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    211,
    (System_String_o *)StringLiteral_21072/*"mstEventRaceResult"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    212,
    (System_String_o *)StringLiteral_21167/*"mstQuestRacePoint"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    213,
    (System_String_o *)StringLiteral_23401/*"userEventRace"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    214,
    (System_String_o *)StringLiteral_21084/*"mstEventScript"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    215,
    (System_String_o *)StringLiteral_21085/*"mstEventScriptRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    216,
    (System_String_o *)StringLiteral_21205/*"mstSpotPath"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    217,
    (System_String_o *)StringLiteral_21202/*"mstSpotAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    218,
    (System_String_o *)StringLiteral_23110/*"totalEventRace"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    219,
    (System_String_o *)StringLiteral_21065/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    220,
    (System_String_o *)StringLiteral_21279/*"mstVoicePlayGroup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    221,
    (System_String_o *)StringLiteral_21278/*"mstVoicePlayCond"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    222,
    (System_String_o *)StringLiteral_21118/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    223,
    (System_String_o *)StringLiteral_21230/*"mstSvtFlag"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    224,
    (System_String_o *)StringLiteral_21231/*"mstSvtFlagRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    225,
    (System_String_o *)StringLiteral_21048/*"mstEventLocationCampaign"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    226,
    (System_String_o *)StringLiteral_20964/*"mstCampaignInfo"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    227,
    (System_String_o *)StringLiteral_21001/*"mstDialogMessage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    228,
    (System_String_o *)StringLiteral_21233/*"mstSvtIndividuality"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    229,
    (System_String_o *)StringLiteral_20954/*"mstBoardMessage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    230,
    (System_String_o *)StringLiteral_20955/*"mstBoardMessageRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    231,
    (System_String_o *)StringLiteral_21090/*"mstEventSvtFatigue"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    232,
    (System_String_o *)StringLiteral_23391/*"userEventDeck"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    233,
    (System_String_o *)StringLiteral_21092/*"mstEventTower"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    234,
    (System_String_o *)StringLiteral_21093/*"mstEventTowerReward"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    235,
    (System_String_o *)StringLiteral_21020/*"mstEventBulletinBoard"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    236,
    (System_String_o *)StringLiteral_21021/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    237,
    (System_String_o *)StringLiteral_21038/*"mstEventFactory"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    238,
    (System_String_o *)StringLiteral_21191/*"mstShopGroup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    239,
    (System_String_o *)StringLiteral_20939/*"mstAuraEffect"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    240,
    (System_String_o *)StringLiteral_20940/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    241,
    (System_String_o *)StringLiteral_23398/*"userEventMissionFix"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    242,
    (System_String_o *)StringLiteral_21482/*"notEndEventMissionFix"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    243,
    (System_String_o *)StringLiteral_21003/*"mstEnemyMaster"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    244,
    (System_String_o *)StringLiteral_21004/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    245,
    (System_String_o *)StringLiteral_21253/*"mstSvtSkillRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    246,
    (System_String_o *)StringLiteral_21244/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    247,
    (System_String_o *)StringLiteral_21258/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    248,
    (System_String_o *)StringLiteral_21141/*"mstMapGimmickRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    249,
    (System_String_o *)StringLiteral_20988/*"mstCommandCode"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    250,
    (System_String_o *)StringLiteral_21222/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    251,
    (System_String_o *)StringLiteral_23375/*"userCommandCode"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    252,
    (System_String_o *)StringLiteral_23376/*"userCommandCodeCollection"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    253,
    (System_String_o *)StringLiteral_23443/*"userSvtCommandCode"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    254,
    (System_String_o *)StringLiteral_20990/*"mstCommandCodeSkill"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    255,
    (System_String_o *)StringLiteral_20991/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    256,
    (System_String_o *)StringLiteral_20989/*"mstCommandCodeComment"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    257,
    (System_String_o *)StringLiteral_21086/*"mstEventStatus"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    258,
    (System_String_o *)StringLiteral_21087/*"mstEventStatusQuest"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    259,
    (System_String_o *)StringLiteral_20995/*"mstCommonRestriction"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    260,
    (System_String_o *)StringLiteral_21063/*"mstEventPointBuff"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    261,
    (System_String_o *)StringLiteral_23407/*"userFollow"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    262,
    (System_String_o *)StringLiteral_21080/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    263,
    (System_String_o *)StringLiteral_21501/*"npcSvtEquip"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    264,
    (System_String_o *)StringLiteral_21023/*"mstEventCampaignRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    265,
    (System_String_o *)StringLiteral_21239/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    266,
    (System_String_o *)StringLiteral_21035/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    267,
    (System_String_o *)StringLiteral_21062/*"mstEventPointActivity"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    268,
    (System_String_o *)StringLiteral_21104/*"mstFuncCategory"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    269,
    (System_String_o *)StringLiteral_21166/*"mstQuestPickup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    270,
    (System_String_o *)StringLiteral_21096/*"mstEventUi"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    271,
    (System_String_o *)StringLiteral_21097/*"mstEventUiRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    272,
    (System_String_o *)StringLiteral_21098/*"mstEventUiValue"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    273,
    (System_String_o *)StringLiteral_21027/*"mstEventConquestReward"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    274,
    (System_String_o *)StringLiteral_21498/*"npcFollowerRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    275,
    (System_String_o *)StringLiteral_21015/*"mstEventBonusFilter"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    276,
    (System_String_o *)StringLiteral_21016/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    277,
    (System_String_o *)StringLiteral_21017/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    278,
    (System_String_o *)StringLiteral_23415/*"userGachaExtraCount"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    279,
    (System_String_o *)StringLiteral_20987/*"mstCommandCardRankParam"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    280,
    (System_String_o *)StringLiteral_23442/*"userSvtCommandCard"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    281,
    (System_String_o *)StringLiteral_21152/*"mstPrivilege"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    282,
    (System_String_o *)StringLiteral_23426/*"userPrivilege"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    283,
    (System_String_o *)StringLiteral_21158/*"mstQuestDateRange"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    284,
    (System_String_o *)StringLiteral_21066/*"mstEventPointUpper"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    285,
    (System_String_o *)StringLiteral_21067/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    286,
    (System_String_o *)StringLiteral_23431/*"userQuestRoute"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    287,
    (System_String_o *)StringLiteral_21018/*"mstEventBossStatusUi"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    288,
    (System_String_o *)StringLiteral_20994/*"mstCommonRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    289,
    (System_String_o *)StringLiteral_21179/*"mstQuestSpotRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    290,
    (System_String_o *)StringLiteral_21277/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    291,
    (System_String_o *)StringLiteral_20974/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    292,
    (System_String_o *)StringLiteral_21044/*"mstEventGroup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    293,
    (System_String_o *)StringLiteral_20935/*"mstAssetbundleKey"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    294,
    (System_String_o *)StringLiteral_23106/*"totalBoxGacha"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    295,
    (System_String_o *)StringLiteral_21257/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    296,
    (System_String_o *)StringLiteral_18758/*"eventSvtFatigue"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    297,
    (System_String_o *)StringLiteral_21078/*"mstEventRewardBg"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    298,
    (System_String_o *)StringLiteral_21039/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    299,
    (System_String_o *)StringLiteral_18747/*"eventBoostItemUsed"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    300,
    (System_String_o *)StringLiteral_21209/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    301,
    (System_String_o *)StringLiteral_21164/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    302,
    (System_String_o *)StringLiteral_21275/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    303,
    (System_String_o *)StringLiteral_21208/*"mstStageRemap"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    304,
    (System_String_o *)StringLiteral_17829/*"combineExp"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    305,
    (System_String_o *)StringLiteral_21012/*"mstEventBoardGameCell"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    306,
    (System_String_o *)StringLiteral_21013/*"mstEventBoardGameToken"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    307,
    (System_String_o *)StringLiteral_21014/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    308,
    (System_String_o *)StringLiteral_23388/*"userEventBoardGameToken"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    309,
    (System_String_o *)StringLiteral_21214/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    310,
    (System_String_o *)StringLiteral_21150/*"mstOpeningMovie"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    311,
    (System_String_o *)StringLiteral_21237/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    312,
    (System_String_o *)StringLiteral_21821/*"pickupUserFollower"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    313,
    (System_String_o *)StringLiteral_21221/*"mstSvtCollection"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    314,
    (System_String_o *)StringLiteral_21110/*"mstGachaBehavior"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    315,
    (System_String_o *)StringLiteral_21070/*"mstEventQuestCooltime"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    316,
    (System_String_o *)StringLiteral_23400/*"userEventQuestCooltime"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    317,
    (System_String_o *)StringLiteral_20956/*"mstBoost"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    318,
    (System_String_o *)StringLiteral_21283/*"mstWarBoard"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    319,
    (System_String_o *)StringLiteral_21307/*"mstWarBoardSquare"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    320,
    (System_String_o *)StringLiteral_21306/*"mstWarBoardRoad"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    321,
    (System_String_o *)StringLiteral_21309/*"mstWarBoardStage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    322,
    (System_String_o *)StringLiteral_21284/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    323,
    (System_String_o *)StringLiteral_21286/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    324,
    (System_String_o *)StringLiteral_21317/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    325,
    (System_String_o *)StringLiteral_21312/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    326,
    (System_String_o *)StringLiteral_21313/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    327,
    (System_String_o *)StringLiteral_21316/*"mstWarBoardStageWall"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    328,
    (System_String_o *)StringLiteral_21289/*"mstWarBoardAi"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    329,
    (System_String_o *)StringLiteral_21302/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    330,
    (System_String_o *)StringLiteral_21303/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    331,
    (System_String_o *)StringLiteral_21296/*"mstWarBoardItem"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    332,
    (System_String_o *)StringLiteral_21318/*"mstWarBoardTreasure"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    333,
    (System_String_o *)StringLiteral_21301/*"mstWarBoardQuest"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    334,
    (System_String_o *)StringLiteral_23596/*"warBoardData"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    335,
    (System_String_o *)StringLiteral_21295/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    336,
    (System_String_o *)StringLiteral_21287/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    337,
    (System_String_o *)StringLiteral_21285/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    338,
    (System_String_o *)StringLiteral_21305/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    339,
    (System_String_o *)StringLiteral_21315/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    340,
    (System_String_o *)StringLiteral_21057/*"mstEventPanelMap"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    341,
    (System_String_o *)StringLiteral_21058/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    342,
    (System_String_o *)StringLiteral_21060/*"mstEventPanelSpot"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    343,
    (System_String_o *)StringLiteral_21059/*"mstEventPanelScan"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    344,
    (System_String_o *)StringLiteral_21032/*"mstEventDigging"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    345,
    (System_String_o *)StringLiteral_21034/*"mstEventDiggingReward"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    346,
    (System_String_o *)StringLiteral_21033/*"mstEventDiggingBlock"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    347,
    (System_String_o *)StringLiteral_23392/*"userEventDigging"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    348,
    (System_String_o *)StringLiteral_20993/*"mstCommonConsume"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    349,
    (System_String_o *)StringLiteral_23395/*"userEventMap"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    350,
    (System_String_o *)StringLiteral_23404/*"userEventSpot"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    351,
    (System_String_o *)StringLiteral_21319/*"mstWarGroup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    352,
    (System_String_o *)StringLiteral_21236/*"mstSvtLimitImage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    353,
    (System_String_o *)StringLiteral_19207/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    354,
    (System_String_o *)StringLiteral_21173/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    355,
    (System_String_o *)StringLiteral_20936/*"mstAssist"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    356,
    (System_String_o *)StringLiteral_21291/*"mstWarBoardEffect"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    357,
    (System_String_o *)StringLiteral_21299/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    358,
    (System_String_o *)StringLiteral_16938/*"beforeBirthDay"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    359,
    (System_String_o *)StringLiteral_21131/*"mstLoginQuest"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    360,
    (System_String_o *)StringLiteral_21025/*"mstEventCombineCostume"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    361,
    (System_String_o *)StringLiteral_21314/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    362,
    (System_String_o *)StringLiteral_21256/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    363,
    (System_String_o *)StringLiteral_21195/*"mstSkillAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    364,
    (System_String_o *)StringLiteral_21238/*"mstSvtLvDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    365,
    (System_String_o *)StringLiteral_21109/*"mstGachaAppend"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    366,
    (System_String_o *)StringLiteral_23414/*"userGachaDrawLog"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    367,
    (System_String_o *)StringLiteral_21215/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    368,
    (System_String_o *)StringLiteral_23438/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    369,
    (System_String_o *)StringLiteral_23439/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    370,
    (System_String_o *)StringLiteral_21216/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    371,
    (System_String_o *)StringLiteral_20977/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    372,
    (System_String_o *)StringLiteral_21220/*"mstSvtCoin"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    373,
    (System_String_o *)StringLiteral_23440/*"userSvtCoin"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    374,
    (System_String_o *)StringLiteral_21213/*"mstSvtAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    375,
    (System_String_o *)StringLiteral_21266/*"mstTreasureBox"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    376,
    (System_String_o *)StringLiteral_21267/*"mstTreasureBoxGift"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    377,
    (System_String_o *)StringLiteral_21268/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    378,
    (System_String_o *)StringLiteral_23393/*"userEventExpedition"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    379,
    (System_String_o *)StringLiteral_21036/*"mstEventExpedition"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    380,
    (System_String_o *)StringLiteral_21037/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    381,
    (System_String_o *)StringLiteral_21075/*"mstEventRecipe"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    382,
    (System_String_o *)StringLiteral_21076/*"mstEventRecipeGift"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    383,
    (System_String_o *)StringLiteral_23394/*"userEventFortification"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    384,
    (System_String_o *)StringLiteral_21041/*"mstEventFortification"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    385,
    (System_String_o *)StringLiteral_21042/*"mstEventFortificationDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    386,
    (System_String_o *)StringLiteral_21043/*"mstEventFortificationSvt"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    387,
    (System_String_o *)StringLiteral_23449/*"userSvtVoicePlayed"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    388,
    (System_String_o *)StringLiteral_23319/*"updateProfileDialogInfo"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    389,
    (System_String_o *)StringLiteral_21240/*"mstSvtMaterialTd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    390,
    (System_String_o *)StringLiteral_20945/*"mstBattleMasterImage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    391,
    (System_String_o *)StringLiteral_23410/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    392,
    (System_String_o *)StringLiteral_23403/*"userEventRandomMission"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    393,
    (System_String_o *)StringLiteral_21068/*"mstEventProgressValue"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    394,
    (System_String_o *)StringLiteral_21241/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    395,
    (System_String_o *)StringLiteral_21074/*"mstEventRandomMission"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    396,
    (System_String_o *)StringLiteral_23413/*"userGachaDrawHistory"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    397,
    (System_String_o *)StringLiteral_23374/*"userCoinRoom"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    398,
    (System_String_o *)StringLiteral_21019/*"mstEventBuddyPoint"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    399,
    (System_String_o *)StringLiteral_21091/*"mstEventSvtPointRank"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    400,
    (System_String_o *)StringLiteral_23406/*"userEventSvtPoint"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    401,
    (System_String_o *)StringLiteral_21101/*"mstFieldMotion"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    402,
    (System_String_o *)StringLiteral_23383/*"userDeleteReservation"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    403,
    (System_String_o *)StringLiteral_21251/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    404,
    (System_String_o *)StringLiteral_21006/*"mstEquipAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    405,
    (System_String_o *)StringLiteral_21170/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    406,
    (System_String_o *)StringLiteral_23387/*"userEventAlloutBattle"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    407,
    (System_String_o *)StringLiteral_21176/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    408,
    (System_String_o *)StringLiteral_20946/*"mstBattleMessage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    409,
    (System_String_o *)StringLiteral_20947/*"mstBattleMessageGroup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    410,
    (System_String_o *)StringLiteral_23423/*"userNpcSvtRecord"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    411,
    (System_String_o *)StringLiteral_20963/*"mstBuffTypeDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    412,
    (System_String_o *)StringLiteral_21297/*"mstWarBoardMessage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    413,
    (System_String_o *)StringLiteral_21300/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    414,
    (System_String_o *)StringLiteral_21298/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    415,
    (System_String_o *)StringLiteral_21321/*"mstWarQuestSelection"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    416,
    (System_String_o *)StringLiteral_21311/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    417,
    (System_String_o *)StringLiteral_21177/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    418,
    (System_String_o *)StringLiteral_21175/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    419,
    (System_String_o *)StringLiteral_20930/*"mstAdCheckPoint"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    420,
    (System_String_o *)StringLiteral_21123/*"mstGiftDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    421,
    (System_String_o *)StringLiteral_20980/*"mstCombineLimitGift"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    422,
    (System_String_o *)StringLiteral_21028/*"mstEventCooltimeReward"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    423,
    (System_String_o *)StringLiteral_23389/*"userEventCooltimeReward"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    424,
    (System_String_o *)StringLiteral_20968/*"mstClassBoardClass"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    425,
    (System_String_o *)StringLiteral_20967/*"mstClassBoardBase"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    426,
    (System_String_o *)StringLiteral_20970/*"mstClassBoardLine"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    427,
    (System_String_o *)StringLiteral_20971/*"mstClassBoardLock"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    428,
    (System_String_o *)StringLiteral_20972/*"mstClassBoardSquare"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    429,
    (System_String_o *)StringLiteral_20969/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    430,
    (System_String_o *)StringLiteral_23373/*"userClassBoardSquare"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    431,
    (System_String_o *)StringLiteral_21218/*"mstSvtCardAdd"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    432,
    (System_String_o *)StringLiteral_21142/*"mstMapLayer"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    433,
    (System_String_o *)StringLiteral_21204/*"mstSpotLayer"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    434,
    (System_String_o *)StringLiteral_21137/*"mstMapGimmickLayer"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    435,
    (System_String_o *)StringLiteral_21029/*"mstEventDataLostBattle"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    436,
    (System_String_o *)StringLiteral_21030/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    437,
    (System_String_o *)StringLiteral_23390/*"userEventDataLost"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    438,
    (System_String_o *)StringLiteral_21160/*"mstQuestHint"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    439,
    (System_String_o *)StringLiteral_21107/*"mstFuncTypeDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    440,
    (System_String_o *)StringLiteral_20962/*"mstBuffConvert"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    441,
    (System_String_o *)StringLiteral_21197/*"mstSkillGroup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    442,
    (System_String_o *)StringLiteral_21198/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    443,
    (System_String_o *)StringLiteral_21199/*"mstSkillIndividuality"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    444,
    (System_String_o *)StringLiteral_21182/*"mstRestrictionBase"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    445,
    (System_String_o *)StringLiteral_21184/*"mstRestrictionSlot"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    446,
    (System_String_o *)StringLiteral_21185/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    447,
    (System_String_o *)StringLiteral_21183/*"mstRestrictionMessage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    448,
    (System_String_o *)StringLiteral_21186/*"mstRestrictionWhole"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    449,
    (System_String_o *)StringLiteral_21105/*"mstFuncDisp"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    450,
    (System_String_o *)StringLiteral_21026/*"mstEventCommandAssist"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    451,
    (System_String_o *)StringLiteral_21055/*"mstEventMissionGroup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    452,
    (System_String_o *)StringLiteral_20981/*"mstCombineLimitRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    453,
    (System_String_o *)StringLiteral_21272/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    454,
    (System_String_o *)StringLiteral_21125/*"mstHeelPortrait"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    455,
    (System_String_o *)StringLiteral_23418/*"userHeelPortrait"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    456,
    (System_String_o *)StringLiteral_21503/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    457,
    (System_String_o *)StringLiteral_21114/*"mstGachaExtraGift"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    458,
    (System_String_o *)StringLiteral_21056/*"mstEventMural"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    459,
    (System_String_o *)StringLiteral_23537/*"viewWaveEnemy"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    460,
    (System_String_o *)StringLiteral_20953/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    461,
    (System_String_o *)StringLiteral_20950/*"mstBlankEarthGimmick"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    462,
    (System_String_o *)StringLiteral_21263/*"mstTerminalOverwrite"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    463,
    (System_String_o *)StringLiteral_18908/*"exchangeSvt"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    464,
    (System_String_o *)StringLiteral_21290/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    465,
    (System_String_o *)StringLiteral_21292/*"mstWarBoardEvent"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    466,
    (System_String_o *)StringLiteral_21293/*"mstWarBoardEventScript"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    467,
    (System_String_o *)StringLiteral_21310/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    468,
    (System_String_o *)StringLiteral_21308/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    469,
    (System_String_o *)StringLiteral_21288/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    470,
    (System_String_o *)StringLiteral_21304/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    471,
    (System_String_o *)StringLiteral_21294/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    472,
    (System_String_o *)StringLiteral_21247/*"mstSvtProfilePush"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    473,
    (System_String_o *)StringLiteral_21139/*"mstMapGimmickPath"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    474,
    (System_String_o *)StringLiteral_21140/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    475,
    (System_String_o *)StringLiteral_21242/*"mstSvtOverwrite"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    476,
    (System_String_o *)StringLiteral_21128/*"mstIndividualityPolicy"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    477,
    (System_String_o *)StringLiteral_21127/*"mstIndividualityPersonality"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    478,
    (System_String_o *)StringLiteral_20937/*"mstAttri"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    479,
    (System_String_o *)StringLiteral_21260/*"mstSvtVoicePattern"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    480,
    (System_String_o *)StringLiteral_23417/*"userGameCommon"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    481,
    (System_String_o *)StringLiteral_21245/*"mstSvtPhoto"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    482,
    (System_String_o *)StringLiteral_21146/*"mstMasterPhoto"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    483,
    (System_String_o *)StringLiteral_21320/*"mstWarMessage"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    484,
    (System_String_o *)StringLiteral_21155/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    485,
    (System_String_o *)StringLiteral_21100/*"mstExcludeMotion"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    486,
    (System_String_o *)StringLiteral_23420/*"userInterruptionQuest"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    487,
    (System_String_o *)StringLiteral_21254/*"mstSvtTransform"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    488,
    (System_String_o *)StringLiteral_21143/*"mstMapUpdateSchedule"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    489,
    (System_String_o *)StringLiteral_21165/*"mstQuestPhasePresent"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  static_fields = (BattleServantConfConponent_o *)DataNameKind_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v5, v6, v7, v8, v9, v10);
}


void __fastcall DataNameKind___ctor(DataNameKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall DataNameKind__GetName(int32_t kind, const MethodInfo *method)
{
  DataNameKind_c *v3; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *nameList; // x0

  if ( (byte_43548E5 & 1) == 0 )
  {
    sub_B70694(&DataNameKind_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_43548E5 = 1;
  }
  v3 = DataNameKind_TypeInfo;
  if ( (BYTE3(DataNameKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataNameKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
    v3 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_B7076C(0LL, method);
  return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           nameList,
           kind,
           (const MethodInfo_2F71F60 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}