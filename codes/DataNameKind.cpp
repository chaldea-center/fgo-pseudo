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

  if ( (byte_42AF672 & 1) == 0 )
  {
    sub_B52984(&DataNameKind_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_B52984(&StringLiteral_23230/*"userGameCommon"*/);
    sub_B52984(&StringLiteral_20888/*"mstEventMissionConditionDetail"*/);
    sub_B52984(&StringLiteral_21098/*"mstTreasureBoxGift"*/);
    sub_B52984(&StringLiteral_20823/*"mstCommandCodeComment"*/);
    sub_B52984(&StringLiteral_20884/*"mstEventMissionAction"*/);
    sub_B52984(&StringLiteral_23200/*"userEventAlloutBattle"*/);
    sub_B52984(&StringLiteral_20850/*"mstEventBonusFilterGroupInfo"*/);
    sub_B52984(&StringLiteral_21002/*"mstQuestReleaseOverwrite"*/);
    sub_B52984(&StringLiteral_20975/*"mstMapGimmickRelease"*/);
    sub_B52984(&StringLiteral_20948/*"mstGachaExtraGift"*/);
    sub_B52984(&StringLiteral_21332/*"npcSvtFollowerIndividuality"*/);
    sub_B52984(&StringLiteral_20852/*"mstEventBossStatusUi"*/);
    sub_B52984(&StringLiteral_23251/*"userSvtAppendPassiveSkillLv"*/);
    sub_B52984(&StringLiteral_20807/*"mstClassRelation"*/);
    sub_B52984(&StringLiteral_20767/*"mstAiAct"*/);
    sub_B52984(&StringLiteral_21046/*"mstSvtAnimationOverwrite"*/);
    sub_B52984(&StringLiteral_21004/*"mstQuestRestriction"*/);
    sub_B52984(&StringLiteral_20834/*"mstCv"*/);
    sub_B52984(&StringLiteral_23205/*"userEventDigging"*/);
    sub_B52984(&StringLiteral_22810/*"tblUserGame"*/);
    sub_B52984(&StringLiteral_20863/*"mstEventDataLostBattle"*/);
    sub_B52984(&StringLiteral_20853/*"mstEventBuddyPoint"*/);
    sub_B52984(&StringLiteral_20784/*"mstBgmRelease"*/);
    sub_B52984(&StringLiteral_21072/*"mstSvtMaterialTd"*/);
    sub_B52984(&StringLiteral_20828/*"mstCommonRelease"*/);
    sub_B52984(&StringLiteral_20936/*"mstFriendship"*/);
    sub_B52984(&StringLiteral_23186/*"userClassBoardSquare"*/);
    sub_B52984(&StringLiteral_20832/*"mstConstantLong"*/);
    sub_B52984(&StringLiteral_20806/*"mstClassBoardSquare"*/);
    sub_B52984(&StringLiteral_23255/*"userSvtCommandCode"*/);
    sub_B52984(&StringLiteral_20989/*"mstQuestBehavior"*/);
    sub_B52984(&StringLiteral_21071/*"mstSvtMaterialFolder"*/);
    sub_B52984(&StringLiteral_21145/*"mstWarBoardStagePieceDetail"*/);
    sub_B52984(&StringLiteral_20851/*"mstEventBonusFilterGroupMember"*/);
    sub_B52984(&StringLiteral_20993/*"mstQuestHint"*/);
    sub_B52984(&StringLiteral_20826/*"mstCommandSpell"*/);
    sub_B52984(&StringLiteral_20765/*"mstAdCheckPoint"*/);
    sub_B52984(&StringLiteral_20985/*"mstPrivilege"*/);
    sub_B52984(&StringLiteral_20789/*"mstBoardMessageRelease"*/);
    sub_B52984(&StringLiteral_20951/*"mstGachaRelease"*/);
    sub_B52984(&StringLiteral_23196/*"userDeleteReservation"*/);
    sub_B52984(&StringLiteral_21097/*"mstTreasureBox"*/);
    sub_B52984(&StringLiteral_20841/*"mstEquipExp"*/);
    sub_B52984(&StringLiteral_20848/*"mstEventBoardGameTokenReward"*/);
    sub_B52984(&StringLiteral_21052/*"mstSvtCoin"*/);
    sub_B52984(&StringLiteral_21083/*"mstSvtScriptMultiple"*/);
    sub_B52984(&StringLiteral_20980/*"mstMaterialFolder"*/);
    sub_B52984(&StringLiteral_20859/*"mstEventCombineCostume"*/);
    sub_B52984(&StringLiteral_20991/*"mstQuestDateRange"*/);
    sub_B52984(&StringLiteral_21141/*"mstWarBoardStageBoss"*/);
    sub_B52984(&StringLiteral_20796/*"mstBuffConvert"*/);
    sub_B52984(&StringLiteral_20774/*"mstAuraEffect"*/);
    sub_B52984(&StringLiteral_20906/*"mstEventRaceResult"*/);
    sub_B52984(&StringLiteral_21019/*"mstSetItem"*/);
    sub_B52984(&StringLiteral_21012/*"mstRecover"*/);
    sub_B52984(&StringLiteral_20921/*"mstEventStatusQuest"*/);
    sub_B52984(&StringLiteral_23202/*"userEventCooltimeReward"*/);
    sub_B52984(&StringLiteral_21119/*"mstWarBoardActionTrendGroup"*/);
    sub_B52984(&StringLiteral_23243/*"userQuestRoute"*/);
    sub_B52984(&StringLiteral_21032/*"mstSkillLv"*/);
    sub_B52984(&StringLiteral_21064/*"mstSvtGroup"*/);
    sub_B52984(&StringLiteral_21106/*"mstVoiceClosedMessage"*/);
    sub_B52984(&StringLiteral_20871/*"mstEventExpeditionPiece"*/);
    sub_B52984(&StringLiteral_20988/*"mstQuestAutoOrganizationAdjust"*/);
    sub_B52984(&StringLiteral_21073/*"mstSvtMultiPortrait"*/);
    sub_B52984(&StringLiteral_20874/*"mstEventFilter"*/);
    sub_B52984(&StringLiteral_23233/*"userItem"*/);
    sub_B52984(&StringLiteral_20870/*"mstEventExpedition"*/);
    sub_B52984(&StringLiteral_20905/*"mstEventRace"*/);
    sub_B52984(&StringLiteral_21005/*"mstQuestRestrictionInfo"*/);
    sub_B52984(&StringLiteral_21003/*"mstQuestReset"*/);
    sub_B52984(&StringLiteral_23206/*"userEventExpedition"*/);
    sub_B52984(&StringLiteral_20877/*"mstEventFortificationSvt"*/);
    sub_B52984(&StringLiteral_21146/*"mstWarBoardStageReinforcements"*/);
    sub_B52984(&StringLiteral_20801/*"mstClassBoardBase"*/);
    sub_B52984(&StringLiteral_20837/*"mstEnemyMaster"*/);
    sub_B52984(&StringLiteral_20775/*"mstAuraEffectPosOverwrite"*/);
    sub_B52984(&StringLiteral_21016/*"mstRestrictionSlot"*/);
    sub_B52984(&StringLiteral_20953/*"mstGachaSub"*/);
    sub_B52984(&StringLiteral_20925/*"mstEventSvtPointRank"*/);
    sub_B52984(&StringLiteral_20898/*"mstEventPointGroup"*/);
    sub_B52984(&StringLiteral_20845/*"mstEventAdd"*/);
    sub_B52984(&StringLiteral_20839/*"mstEquip"*/);
    sub_B52984(&StringLiteral_20910/*"mstEventRecipeGift"*/);
    sub_B52984(&StringLiteral_21093/*"mstTelop"*/);
    sub_B52984(&StringLiteral_23253/*"userSvtCollection"*/);
    sub_B52984(&StringLiteral_23211/*"userEventMissionFix"*/);
    sub_B52984(&StringLiteral_21014/*"mstRestrictionBase"*/);
    sub_B52984(&StringLiteral_21095/*"mstTips"*/);
    sub_B52984(&StringLiteral_20776/*"mstBankShop"*/);
    sub_B52984(&StringLiteral_20933/*"mstEventVoicePlay"*/);
    sub_B52984(&StringLiteral_20876/*"mstEventFortificationDetail"*/);
    sub_B52984(&StringLiteral_23218/*"userEventSuperBoss"*/);
    sub_B52984(&StringLiteral_20875/*"mstEventFortification"*/);
    sub_B52984(&StringLiteral_20923/*"mstEventSvt"*/);
    sub_B52984(&StringLiteral_21110/*"mstVoicePlayGroup"*/);
    sub_B52984(&StringLiteral_23204/*"userEventDeck"*/);
    sub_B52984(&StringLiteral_21034/*"mstSpotAdd"*/);
    sub_B52984(&StringLiteral_20819/*"mstCombineSkill"*/);
    sub_B52984(&StringLiteral_21138/*"mstWarBoardSquare"*/);
    sub_B52984(&StringLiteral_20797/*"mstBuffTypeDetail"*/);
    sub_B52984(&StringLiteral_21116/*"mstWarBoardActionPointClass"*/);
    sub_B52984(&StringLiteral_23236/*"userPresentBox"*/);
    sub_B52984(&StringLiteral_23219/*"userEventSvtPoint"*/);
    sub_B52984(&StringLiteral_22922/*"totalEventPoint"*/);
    sub_B52984(&StringLiteral_20821/*"mstCommandCardRankParam"*/);
    sub_B52984(&StringLiteral_21121/*"mstWarBoardCommonRelease"*/);
    sub_B52984(&StringLiteral_21044/*"mstSvt"*/);
    sub_B52984(&StringLiteral_23244/*"userShop"*/);
    sub_B52984(&StringLiteral_20846/*"mstEventBoardGameCell"*/);
    sub_B52984(&StringLiteral_20904/*"mstEventQuestCooltime"*/);
    sub_B52984(&StringLiteral_20941/*"mstFuncTypeDetail"*/);
    sub_B52984(&StringLiteral_21041/*"mstStatusEffectPosOverwrite"*/);
    sub_B52984(&StringLiteral_18602/*"eventBoostItemUsed"*/);
    sub_B52984(&StringLiteral_21022/*"mstShopDetail"*/);
    sub_B52984(&StringLiteral_20962/*"mstIndividualityPolicy"*/);
    sub_B52984(&StringLiteral_20967/*"mstMapButton"*/);
    sub_B52984(&StringLiteral_21148/*"mstWarBoardTacticalTrend"*/);
    sub_B52984(&StringLiteral_21043/*"mstSubEquip"*/);
    sub_B52984(&StringLiteral_21037/*"mstSpotPath"*/);
    sub_B52984(&StringLiteral_20816/*"mstCombineMaterial"*/);
    sub_B52984(&StringLiteral_20815/*"mstCombineLimitRelease"*/);
    sub_B52984(&StringLiteral_21102/*"mstTreasureDeviceLv"*/);
    sub_B52984(&StringLiteral_20926/*"mstEventTower"*/);
    sub_B52984(&StringLiteral_21026/*"mstSkill"*/);
    sub_B52984(&StringLiteral_21075/*"mstSvtPassiveSkill"*/);
    sub_B52984(&StringLiteral_21087/*"mstSvtTreasureDeviceAdd"*/);
    sub_B52984(&StringLiteral_20786/*"mstBlankEarthSpotAdd"*/);
    sub_B52984(&StringLiteral_23240/*"userQuest"*/);
    sub_B52984(&StringLiteral_20887/*"mstEventMissionCondition"*/);
    sub_B52984(&StringLiteral_21115/*"mstWarBoardActionPoint"*/);
    sub_B52984(&StringLiteral_20809/*"mstClosedMessage"*/);
    sub_B52984(&StringLiteral_20913/*"mstEventRewardExtra"*/);
    sub_B52984(&StringLiteral_20896/*"mstEventPointActivity"*/);
    sub_B52984(&StringLiteral_20903/*"mstEventQuest"*/);
    sub_B52984(&StringLiteral_20782/*"mstBattleMessageGroup"*/);
    sub_B52984(&StringLiteral_23348/*"viewQuestInfo"*/);
    sub_B52984(&StringLiteral_21079/*"mstSvtProfilePush"*/);
    sub_B52984(&StringLiteral_21101/*"mstTreasureDeviceDetail"*/);
    sub_B52984(&StringLiteral_23184/*"userBlacklist"*/);
    sub_B52984(&StringLiteral_20869/*"mstEventEquipSkillRelease"*/);
    sub_B52984(&StringLiteral_23187/*"userCoinRoom"*/);
    sub_B52984(&StringLiteral_20833/*"mstConstantStr"*/);
    sub_B52984(&StringLiteral_21042/*"mstStoneShop"*/);
    sub_B52984(&StringLiteral_21096/*"mstTotalLogin"*/);
    sub_B52984(&StringLiteral_20983/*"mstOpeningMovie"*/);
    sub_B52984(&StringLiteral_20831/*"mstConstant"*/);
    sub_B52984(&StringLiteral_21011/*"mstQuestSpotRelease"*/);
    sub_B52984(&StringLiteral_20824/*"mstCommandCodeSkill"*/);
    sub_B52984(&StringLiteral_20986/*"mstQuest"*/);
    sub_B52984(&StringLiteral_21091/*"mstSvtVoicePattern"*/);
    sub_B52984(&StringLiteral_20929/*"mstEventTutorialCond"*/);
    sub_B52984(&StringLiteral_21114/*"mstWarBoard"*/);
    sub_B52984(&StringLiteral_20907/*"mstEventRaid"*/);
    sub_B52984(&StringLiteral_20783/*"mstBgm"*/);
    sub_B52984(&StringLiteral_20919/*"mstEventScriptRelease"*/);
    sub_B52984(&StringLiteral_23239/*"userProfile"*/);
    sub_B52984(&StringLiteral_20886/*"mstEventMissionAdd"*/);
    sub_B52984(&StringLiteral_21111/*"mstVoiceRelease"*/);
    sub_B52984(&StringLiteral_21000/*"mstQuestRandomGroup"*/);
    sub_B52984(&StringLiteral_21024/*"mstShopRelease"*/);
    sub_B52984(&StringLiteral_23260/*"userSvtStorage"*/);
    sub_B52984(&StringLiteral_23250/*"userSvtAppendPassiveSkill"*/);
    sub_B52984(&StringLiteral_21045/*"mstSvtAdd"*/);
    sub_B52984(&StringLiteral_21151/*"mstWarMessage"*/);
    sub_B52984(&StringLiteral_20787/*"mstBlankEarthSpotNavimenu"*/);
    sub_B52984(&StringLiteral_20780/*"mstBattleMasterImage"*/);
    sub_B52984(&StringLiteral_21028/*"mstSkillDetail"*/);
    sub_B52984(&StringLiteral_20977/*"mstMasterMission"*/);
    sub_B52984(&StringLiteral_21076/*"mstSvtPassiveSkillRelease"*/);
    sub_B52984(&StringLiteral_21033/*"mstSpot"*/);
    sub_B52984(&StringLiteral_20883/*"mstEventMission"*/);
    sub_B52984(&StringLiteral_20818/*"mstCombineQpSvtEquip"*/);
    sub_B52984(&StringLiteral_20895/*"mstEventPoint"*/);
    sub_B52984(&StringLiteral_20917/*"mstEventRewardSet"*/);
    sub_B52984(&StringLiteral_20892/*"mstEventPanelMapDetail"*/);
    sub_B52984(&StringLiteral_21050/*"mstSvtCardAdd"*/);
    sub_B52984(&StringLiteral_20966/*"mstMap"*/);
    sub_B52984(&StringLiteral_20866/*"mstEventDigging"*/);
    sub_B52984(&StringLiteral_23225/*"userGacha"*/);
    sub_B52984(&StringLiteral_21001/*"mstQuestRelease"*/);
    sub_B52984(&StringLiteral_20865/*"mstEventDetail"*/);
    sub_B52984(&StringLiteral_20976/*"mstMapLayer"*/);
    sub_B52984(&StringLiteral_21125/*"mstWarBoardFutureActionTrend"*/);
    sub_B52984(&StringLiteral_21031/*"mstSkillIndividuality"*/);
    sub_B52984(&StringLiteral_20793/*"mstBoxGachaBaseDetail"*/);
    sub_B52984(&StringLiteral_22809/*"tblFriend"*/);
    sub_B52984(&StringLiteral_16803/*"beforeBirthDay"*/);
    sub_B52984(&StringLiteral_20881/*"mstEventItemDisplayRelease"*/);
    sub_B52984(&StringLiteral_16745/*"battle"*/);
    sub_B52984(&StringLiteral_21023/*"mstShopGroup"*/);
    sub_B52984(&StringLiteral_20773/*"mstAttriRelation"*/);
    sub_B52984(&StringLiteral_23188/*"userCommandCode"*/);
    sub_B52984(&StringLiteral_20857/*"mstEventCampaignRelease"*/);
    sub_B52984(&StringLiteral_21061/*"mstSvtFilter"*/);
    sub_B52984(&StringLiteral_20999/*"mstQuestRacePoint"*/);
    sub_B52984(&StringLiteral_21497/*"otherUserGame"*/);
    sub_B52984(&StringLiteral_20880/*"mstEventItemDisplayGroup"*/);
    sub_B52984(&StringLiteral_20799/*"mstCard"*/);
    sub_B52984(&StringLiteral_20781/*"mstBattleMessage"*/);
    sub_B52984(&StringLiteral_21017/*"mstRestrictionSlotDetail"*/);
    sub_B52984(&StringLiteral_20777/*"mstBanner"*/);
    sub_B52984(&StringLiteral_20838/*"mstEnemyMasterBattle"*/);
    sub_B52984(&StringLiteral_20879/*"mstEventItemDisplay"*/);
    sub_B52984(&StringLiteral_20798/*"mstCampaignInfo"*/);
    sub_B52984(&StringLiteral_21086/*"mstSvtTreasureDevice"*/);
    sub_B52984(&StringLiteral_21085/*"mstSvtSkillRelease"*/);
    sub_B52984(&StringLiteral_20830/*"mstCompleteMission"*/);
    sub_B52984(&StringLiteral_20813/*"mstCombineLimit"*/);
    sub_B52984(&StringLiteral_20791/*"mstBoxGacha"*/);
    sub_B52984(&StringLiteral_21108/*"mstVoiceMaterialCond"*/);
    sub_B52984(&StringLiteral_20952/*"mstGachaStoryAdjust"*/);
    sub_B52984(&StringLiteral_21104/*"mstUserExp"*/);
    sub_B52984(&StringLiteral_21127/*"mstWarBoardItem"*/);
    sub_B52984(&StringLiteral_20840/*"mstEquipAdd"*/);
    sub_B52984(&StringLiteral_20835/*"mstDialogMessage"*/);
    sub_B52984(&StringLiteral_21331/*"npcSvtFollower"*/);
    sub_B52984(&StringLiteral_20779/*"mstBattleBg"*/);
    sub_B52984(&StringLiteral_20802/*"mstClassBoardClass"*/);
    sub_B52984(&StringLiteral_23212/*"userEventPoint"*/);
    sub_B52984(&StringLiteral_21051/*"mstSvtChange"*/);
    sub_B52984(&StringLiteral_21126/*"mstWarBoardIndividualityClass"*/);
    sub_B52984(&StringLiteral_20890/*"mstEventMural"*/);
    sub_B52984(&StringLiteral_20964/*"mstItemSelect"*/);
    sub_B52984(&StringLiteral_21065/*"mstSvtIndividuality"*/);
    sub_B52984(&StringLiteral_23199/*"userEvent"*/);
    sub_B52984(&StringLiteral_21149/*"mstWarBoardTreasure"*/);
    sub_B52984(&StringLiteral_21070/*"mstSvtLvDetail"*/);
    sub_B52984(&StringLiteral_21134/*"mstWarBoardRatingOffset"*/);
    sub_B52984(&StringLiteral_20996/*"mstQuestPhaseDetail"*/);
    sub_B52984(&StringLiteral_21021/*"mstShopAction"*/);
    sub_B52984(&StringLiteral_20981/*"mstMyroomAdd"*/);
    sub_B52984(&StringLiteral_20924/*"mstEventSvtFatigue"*/);
    sub_B52984(&StringLiteral_20872/*"mstEventFactory"*/);
    sub_B52984(&StringLiteral_23226/*"userGachaDrawHistory"*/);
    sub_B52984(&StringLiteral_23221/*"userFollower"*/);
    sub_B52984(&StringLiteral_21135/*"mstWarBoardRatingOffsetGroup"*/);
    sub_B52984(&StringLiteral_23252/*"userSvtCoin"*/);
    sub_B52984(&StringLiteral_20918/*"mstEventScript"*/);
    sub_B52984(&StringLiteral_21084/*"mstSvtSkill"*/);
    sub_B52984(&StringLiteral_21036/*"mstSpotLayer"*/);
    sub_B52984(&StringLiteral_23254/*"userSvtCommandCard"*/);
    sub_B52984(&StringLiteral_23241/*"userQuestInfo"*/);
    sub_B52984(&StringLiteral_20836/*"mstEffect"*/);
    sub_B52984(&StringLiteral_20963/*"mstItem"*/);
    sub_B52984(&StringLiteral_20899/*"mstEventPointGroupAdd"*/);
    sub_B52984(&StringLiteral_20994/*"mstQuestMessage"*/);
    sub_B52984(&StringLiteral_21327/*"npcFollowerRelease"*/);
    sub_B52984(&StringLiteral_20938/*"mstFuncCategory"*/);
    sub_B52984(&StringLiteral_21128/*"mstWarBoardMessage"*/);
    sub_B52984(&StringLiteral_23229/*"userGame"*/);
    sub_B52984(&StringLiteral_20955/*"mstGift"*/);
    sub_B52984(&StringLiteral_21136/*"mstWarBoardReinforcements"*/);
    sub_B52984(&StringLiteral_20847/*"mstEventBoardGameToken"*/);
    sub_B52984(&StringLiteral_20971/*"mstMapGimmickLayer"*/);
    sub_B52984(&StringLiteral_21054/*"mstSvtCommandCodeUnlock"*/);
    sub_B52984(&StringLiteral_20771/*"mstAssist"*/);
    sub_B52984(&StringLiteral_23349/*"viewWaveEnemy"*/);
    sub_B52984(&StringLiteral_21330/*"npcSvtEquip"*/);
    sub_B52984(&StringLiteral_21008/*"mstQuestScriptMaterialNext"*/);
    sub_B52984(&StringLiteral_21060/*"mstSvtExp"*/);
    sub_B52984(&StringLiteral_23249/*"userSvt"*/);
    sub_B52984(&StringLiteral_23346/*"viewEnemy"*/);
    sub_B52984(&StringLiteral_20931/*"mstEventUiRelease"*/);
    sub_B52984(&StringLiteral_22923/*"totalEventRace"*/);
    sub_B52984(&StringLiteral_20935/*"mstFieldMotion"*/);
    sub_B52984(&StringLiteral_20908/*"mstEventRandomMission"*/);
    sub_B52984(&StringLiteral_20915/*"mstEventRewardScene"*/);
    sub_B52984(&StringLiteral_20961/*"mstIndividualityPersonality"*/);
    sub_B52984(&StringLiteral_20812/*"mstCombineCostume"*/);
    sub_B52984(&StringLiteral_20811/*"mstCombineAppendPassiveSkill"*/);
    sub_B52984(&StringLiteral_20868/*"mstEventDiggingReward"*/);
    sub_B52984(&StringLiteral_21117/*"mstWarBoardActionTrend"*/);
    sub_B52984(&StringLiteral_20943/*"mstGachaAppend"*/);
    sub_B52984(&StringLiteral_21139/*"mstWarBoardSquareIndexGroup"*/);
    sub_B52984(&StringLiteral_20937/*"mstFunc"*/);
    sub_B52984(&StringLiteral_20861/*"mstEventConquestReward"*/);
    sub_B52984(&StringLiteral_21122/*"mstWarBoardEffect"*/);
    sub_B52984(&StringLiteral_21152/*"mstWarQuestSelection"*/);
    sub_B52984(&StringLiteral_23193/*"userDeck"*/);
    sub_B52984(&StringLiteral_20978/*"mstMasterMissionDisplayInfo"*/);
    sub_B52984(&StringLiteral_21150/*"mstWarGroup"*/);
    sub_B52984(&StringLiteral_21020/*"mstShop"*/);
    sub_B52984(&StringLiteral_21131/*"mstWarBoardPartySkill"*/);
    sub_B52984(&StringLiteral_20897/*"mstEventPointBuff"*/);
    sub_B52984(&StringLiteral_23248/*"userSupportDeck"*/);
    sub_B52984(&StringLiteral_21038/*"mstSpotRoad"*/);
    sub_B52984(&StringLiteral_21092/*"mstSvtVoiceRelation"*/);
    sub_B52984(&StringLiteral_20814/*"mstCombineLimitGift"*/);
    sub_B52984(&StringLiteral_20862/*"mstEventCooltimeReward"*/);
    sub_B52984(&StringLiteral_20854/*"mstEventBulletinBoard"*/);
    sub_B52984(&StringLiteral_20912/*"mstEventRewardBg"*/);
    sub_B52984(&StringLiteral_20794/*"mstBoxGachaTalk"*/);
    sub_B52984(&StringLiteral_20939/*"mstFuncDisp"*/);
    sub_B52984(&StringLiteral_21081/*"mstSvtScript"*/);
    sub_B52984(&StringLiteral_20968/*"mstMapCond"*/);
    sub_B52984(&StringLiteral_23207/*"userEventFortification"*/);
    sub_B52984(&StringLiteral_21130/*"mstWarBoardOnboardSkill"*/);
    sub_B52984(&StringLiteral_20949/*"mstGachaGroup"*/);
    sub_B52984(&StringLiteral_23347/*"viewQuestEnemyInfo"*/);
    sub_B52984(&StringLiteral_21055/*"mstSvtComment"*/);
    sub_B52984(&StringLiteral_21100/*"mstTreasureDevice"*/);
    sub_B52984(&StringLiteral_23235/*"userNpcSvtRecord"*/);
    sub_B52984(&StringLiteral_20889/*"mstEventMissionGroup"*/);
    sub_B52984(&StringLiteral_23242/*"userQuestRecord"*/);
    sub_B52984(&StringLiteral_21015/*"mstRestrictionMessage"*/);
    sub_B52984(&StringLiteral_20957/*"mstGiftDetail"*/);
    sub_B52984(&StringLiteral_20954/*"mstGachaTicket"*/);
    sub_B52984(&StringLiteral_21077/*"mstSvtPhoto"*/);
    sub_B52984(&StringLiteral_21644/*"pickupUserFollower"*/);
    sub_B52984(&StringLiteral_20920/*"mstEventStatus"*/);
    sub_B52984(&StringLiteral_21056/*"mstSvtCommentAdd"*/);
    sub_B52984(&StringLiteral_21074/*"mstSvtOverwrite"*/);
    sub_B52984(&StringLiteral_21326/*"npcFollower"*/);
    sub_B52984(&StringLiteral_20860/*"mstEventCommandAssist"*/);
    sub_B52984(&StringLiteral_18613/*"eventSvtFatigue"*/);
    sub_B52984(&StringLiteral_20946/*"mstGachaBonusSelectLineup"*/);
    sub_B52984(&StringLiteral_20855/*"mstEventBulletinBoardRelease"*/);
    sub_B52984(&StringLiteral_21059/*"mstSvtExceed"*/);
    sub_B52984(&StringLiteral_21069/*"mstSvtLimitSpoilerProtection"*/);
    sub_B52984(&StringLiteral_21090/*"mstSvtVoice"*/);
    sub_B52984(&StringLiteral_21018/*"mstRestrictionWhole"*/);
    sub_B52984(&StringLiteral_23228/*"userGachaExtraCount"*/);
    sub_B52984(&StringLiteral_20973/*"mstMapGimmickPath"*/);
    sub_B52984(&StringLiteral_20927/*"mstEventTowerReward"*/);
    sub_B52984(&StringLiteral_20808/*"mstClassRelationOverwrite"*/);
    sub_B52984(&StringLiteral_20766/*"mstAi"*/);
    sub_B52984(&StringLiteral_23185/*"userBoxGacha"*/);
    sub_B52984(&StringLiteral_21049/*"mstSvtCard"*/);
    sub_B52984(&StringLiteral_23227/*"userGachaDrawLog"*/);
    sub_B52984(&StringLiteral_21140/*"mstWarBoardStage"*/);
    sub_B52984(&StringLiteral_23197/*"userEquip"*/);
    sub_B52984(&StringLiteral_20914/*"mstEventRewardGuideRelease"*/);
    sub_B52984(&StringLiteral_20803/*"mstClassBoardCommandSpell"*/);
    sub_B52984(&StringLiteral_20944/*"mstGachaBehavior"*/);
    sub_B52984(&StringLiteral_21112/*"mstWar"*/);
    sub_B52984(&StringLiteral_20849/*"mstEventBonusFilter"*/);
    sub_B52984(&StringLiteral_21010/*"mstQuestScriptRelease"*/);
    sub_B52984(&StringLiteral_23208/*"userEventMap"*/);
    sub_B52984(&StringLiteral_20894/*"mstEventPanelSpot"*/);
    sub_B52984(&StringLiteral_20800/*"mstClass"*/);
    sub_B52984(&StringLiteral_23183/*"userAccessary"*/);
    sub_B52984(&StringLiteral_21067/*"mstSvtLimitAdd"*/);
    sub_B52984(&StringLiteral_21009/*"mstQuestScriptMaterialOverwrite"*/);
    sub_B52984(&StringLiteral_17688/*"combineExp"*/);
    sub_B52984(&StringLiteral_23222/*"userFormation"*/);
    sub_B52984(&StringLiteral_21129/*"mstWarBoardMessageScript"*/);
    sub_B52984(&StringLiteral_20902/*"mstEventProgressValue"*/);
    sub_B52984(&StringLiteral_23261/*"userSvtVoicePlayed"*/);
    sub_B52984(&StringLiteral_20934/*"mstExcludeMotion"*/);
    sub_B52984(&StringLiteral_21062/*"mstSvtFlag"*/);
    sub_B52984(&StringLiteral_20788/*"mstBoardMessage"*/);
    sub_B52984(&StringLiteral_20893/*"mstEventPanelScan"*/);
    sub_B52984(&StringLiteral_21068/*"mstSvtLimitImage"*/);
    sub_B52984(&StringLiteral_20867/*"mstEventDiggingBlock"*/);
    sub_B52984(&StringLiteral_23216/*"userEventRandomMission"*/);
    sub_B52984(&StringLiteral_20769/*"mstArea"*/);
    sub_B52984(&StringLiteral_22924/*"totalEventRaid"*/);
    sub_B52984(&StringLiteral_21311/*"notEndEventMissionFix"*/);
    sub_B52984(&StringLiteral_21025/*"mstShopScript"*/);
    sub_B52984(&StringLiteral_23209/*"userEventMission"*/);
    sub_B52984(&StringLiteral_20979/*"mstMasterPhoto"*/);
    sub_B52984(&StringLiteral_20885/*"mstEventMissionActionAdd"*/);
    sub_B52984(&StringLiteral_20820/*"mstCombineTd"*/);
    sub_B52984(&StringLiteral_20790/*"mstBoost"*/);
    sub_B52984(&StringLiteral_21082/*"mstSvtScriptAdd"*/);
    sub_B52984(&StringLiteral_20792/*"mstBoxGachaBase"*/);
    sub_B52984(&StringLiteral_20778/*"mstBannerAdd"*/);
    sub_B52984(&StringLiteral_20764/*"mstAccessary"*/);
    sub_B52984(&StringLiteral_21103/*"mstTreasureDeviceSequenceWeight"*/);
    sub_B52984(&StringLiteral_23214/*"userEventRace"*/);
    sub_B52984(&StringLiteral_20992/*"mstQuestGroup"*/);
    sub_B52984(&StringLiteral_20901/*"mstEventPointUpperRelease"*/);
    sub_B52984(&StringLiteral_23259/*"userSvtLeader"*/);
    sub_B52984(&StringLiteral_21066/*"mstSvtLimit"*/);
    sub_B52984(&StringLiteral_23220/*"userFollow"*/);
    sub_B52984(&StringLiteral_20882/*"mstEventLocationCampaign"*/);
    sub_B52984(&StringLiteral_20817/*"mstCombineQp"*/);
    sub_B52984(&StringLiteral_20844/*"mstEvent"*/);
    sub_B52984(&StringLiteral_21063/*"mstSvtFlagRelease"*/);
    sub_B52984(&StringLiteral_23223/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_B52984(&StringLiteral_23238/*"userPrivilege"*/);
    sub_B52984(&StringLiteral_20822/*"mstCommandCode"*/);
    sub_B52984(&StringLiteral_21047/*"mstSvtAppendPassiveSkill"*/);
    sub_B52984(&StringLiteral_20878/*"mstEventGroup"*/);
    sub_B52984(&StringLiteral_20945/*"mstGachaBonusSelect"*/);
    sub_B52984(&StringLiteral_23201/*"userEventBoardGameToken"*/);
    sub_B52984(&StringLiteral_21137/*"mstWarBoardRoad"*/);
    sub_B52984(&StringLiteral_20795/*"mstBuff"*/);
    sub_B52984(&StringLiteral_23407/*"warBoardData"*/);
    sub_B52984(&StringLiteral_20960/*"mstIllustrator"*/);
    sub_B52984(&StringLiteral_22919/*"totalBoxGacha"*/);
    sub_B52984(&StringLiteral_21080/*"mstSvtRarity"*/);
    sub_B52984(&StringLiteral_21113/*"mstWarAdd"*/);
    sub_B52984(&StringLiteral_20974/*"mstMapGimmickPathRelease"*/);
    sub_B52984(&StringLiteral_23224/*"userFriendRequestHistory"*/);
    sub_B52984(&StringLiteral_23180/*"user"*/);
    sub_B52984(&StringLiteral_17013/*"boxGachaHistory"*/);
    sub_B52984(&StringLiteral_20940/*"mstFuncGroup"*/);
    sub_B52984(&StringLiteral_20827/*"mstCommonConsume"*/);
    sub_B52984(&StringLiteral_21124/*"mstWarBoardEventScript"*/);
    sub_B52984(&StringLiteral_20956/*"mstGiftAdd"*/);
    sub_B52984(&StringLiteral_20930/*"mstEventUi"*/);
    sub_B52984(&StringLiteral_21035/*"mstSpotImage"*/);
    sub_B52984(&StringLiteral_21058/*"mstSvtCostumeRelease"*/);
    sub_B52984(&StringLiteral_20969/*"mstMapGimmick"*/);
    sub_B52984(&StringLiteral_20928/*"mstEventTutorial"*/);
    sub_B52984(&StringLiteral_21147/*"mstWarBoardStageWall"*/);
    sub_B52984(&StringLiteral_20768/*"mstAiField"*/);
    sub_B52984(&StringLiteral_21089/*"mstSvtTreasureDeviceRelease"*/);
    sub_B52984(&StringLiteral_20995/*"mstQuestPhase"*/);
    sub_B52984(&StringLiteral_23203/*"userEventDataLost"*/);
    sub_B52984(&StringLiteral_21048/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_B52984(&StringLiteral_21088/*"mstSvtTreasureDeviceDamage"*/);
    sub_B52984(&StringLiteral_21039/*"mstStage"*/);
    sub_B52984(&StringLiteral_20810/*"mstCombine"*/);
    sub_B52984(&StringLiteral_20856/*"mstEventCampaign"*/);
    sub_B52984(&StringLiteral_21144/*"mstWarBoardStageNpc"*/);
    sub_B52984(&StringLiteral_18763/*"exchangeSvt"*/);
    sub_B52984(&StringLiteral_21040/*"mstStageRemap"*/);
    sub_B52984(&StringLiteral_21013/*"mstRestriction"*/);
    sub_B52984(&StringLiteral_21006/*"mstQuestScript"*/);
    sub_B52984(&StringLiteral_20916/*"mstEventRewardSceneRelease"*/);
    sub_B52984(&StringLiteral_21107/*"mstVoiceCond"*/);
    sub_B52984(&StringLiteral_23247/*"userSubEquip"*/);
    sub_B52984(&StringLiteral_20909/*"mstEventRecipe"*/);
    sub_B52984(&StringLiteral_21057/*"mstSvtCostume"*/);
    sub_B52984(&StringLiteral_21078/*"mstSvtProfile"*/);
    sub_B52984(&StringLiteral_20829/*"mstCommonRestriction"*/);
    sub_B52984(&StringLiteral_23231/*"userHeelPortrait"*/);
    sub_B52984(&StringLiteral_21030/*"mstSkillGroupOverwrite"*/);
    sub_B52984(&StringLiteral_23189/*"userCommandCodeCollection"*/);
    sub_B52984(&StringLiteral_20825/*"mstCommandCodeSkillRelease"*/);
    sub_B52984(&StringLiteral_20998/*"mstQuestPickup"*/);
    sub_B52984(&StringLiteral_21143/*"mstWarBoardStageLayout"*/);
    sub_B52984(&StringLiteral_21118/*"mstWarBoardActionTrendCond"*/);
    sub_B52984(&StringLiteral_20858/*"mstEventCombine"*/);
    sub_B52984(&StringLiteral_21132/*"mstWarBoardQuest"*/);
    sub_B52984(&StringLiteral_20990/*"mstQuestConsumeItem"*/);
    sub_B52984(&StringLiteral_20997/*"mstQuestPhaseDetailAdd"*/);
    sub_B52984(&StringLiteral_20959/*"mstHeelPortrait"*/);
    sub_B52984(&StringLiteral_23237/*"userPresentHistory"*/);
    sub_B52984(&StringLiteral_21133/*"mstWarBoardRatingBase"*/);
    sub_B52984(&StringLiteral_20950/*"mstGachaImage"*/);
    sub_B52984(&StringLiteral_20842/*"mstEquipImage"*/);
    sub_B52984(&StringLiteral_23215/*"userEventRaid"*/);
    sub_B52984(&StringLiteral_21053/*"mstSvtCollection"*/);
    sub_B52984(&StringLiteral_19055/*"friendshipQuestDialogInfo"*/);
    sub_B52984(&StringLiteral_20982/*"mstNews"*/);
    sub_B52984(&StringLiteral_20942/*"mstGacha"*/);
    sub_B52984(&StringLiteral_21029/*"mstSkillGroup"*/);
    sub_B52984(&StringLiteral_20958/*"mstGuide"*/);
    sub_B52984(&StringLiteral_20805/*"mstClassBoardLock"*/);
    sub_B52984(&StringLiteral_20900/*"mstEventPointUpper"*/);
    sub_B52984(&StringLiteral_20785/*"mstBlankEarthSpot"*/);
    sub_B52984(&StringLiteral_21094/*"mstTerminalOverwrite"*/);
    sub_B52984(&StringLiteral_20843/*"mstEquipSkill"*/);
    sub_B52984(&StringLiteral_20932/*"mstEventUiValue"*/);
    sub_B52984(&StringLiteral_23191/*"userContinue"*/);
    sub_B52984(&StringLiteral_20987/*"mstQuestAdd"*/);
    sub_B52984(&StringLiteral_20804/*"mstClassBoardLine"*/);
    sub_B52984(&StringLiteral_23132/*"updateProfileDialogInfo"*/);
    sub_B52984(&StringLiteral_21105/*"mstVoice"*/);
    sub_B52984(&StringLiteral_23210/*"userEventMissionConditionDetail"*/);
    sub_B52984(&StringLiteral_20770/*"mstAssetbundleKey"*/);
    sub_B52984(&StringLiteral_20891/*"mstEventPanelMap"*/);
    sub_B52984(&StringLiteral_23234/*"userLogin"*/);
    sub_B52984(&StringLiteral_20965/*"mstLoginQuest"*/);
    sub_B52984(&StringLiteral_20984/*"mstPartialMaintenance"*/);
    sub_B52984(&StringLiteral_23217/*"userEventSpot"*/);
    sub_B52984(&StringLiteral_20911/*"mstEventReward"*/);
    sub_B52984(&StringLiteral_20864/*"mstEventDataLostBattleReset"*/);
    sub_B52984(&StringLiteral_20772/*"mstAttri"*/);
    sub_B52984(&StringLiteral_21142/*"mstWarBoardStageDetail"*/);
    sub_B52984(&StringLiteral_23213/*"userEventQuestCooltime"*/);
    sub_B52984(&StringLiteral_21007/*"mstQuestScriptBranchMaterial"*/);
    sub_B52984(&StringLiteral_20873/*"mstEventFatigueRecovery"*/);
    sub_B52984(&StringLiteral_21120/*"mstWarBoardAi"*/);
    sub_B52984(&StringLiteral_21099/*"mstTreasureBoxTalk"*/);
    sub_B52984(&StringLiteral_21123/*"mstWarBoardEvent"*/);
    sub_B52984(&StringLiteral_21109/*"mstVoicePlayCond"*/);
    sub_B52984(&StringLiteral_20947/*"mstGachaDetail"*/);
    sub_B52984(&StringLiteral_20922/*"mstEventSuperBoss"*/);
    sub_B52984(&StringLiteral_21027/*"mstSkillAdd"*/);
    byte_42AF672 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B52A54(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v1,
    (const MethodInfo_2F3E9EC *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_B52A5C(v2, v3);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    0,
    0LL,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    1,
    (System_String_o *)StringLiteral_21044/*"mstSvt"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    2,
    (System_String_o *)StringLiteral_21055/*"mstSvtComment"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    3,
    (System_String_o *)StringLiteral_21078/*"mstSvtProfile"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    4,
    (System_String_o *)StringLiteral_21112/*"mstWar"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    5,
    (System_String_o *)StringLiteral_16745/*"battle"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    6,
    (System_String_o *)StringLiteral_21100/*"mstTreasureDevice"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    7,
    (System_String_o *)StringLiteral_21066/*"mstSvtLimit"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    8,
    (System_String_o *)StringLiteral_21086/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    9,
    (System_String_o *)StringLiteral_20800/*"mstClass"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    10,
    (System_String_o *)StringLiteral_21081/*"mstSvtScript"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    11,
    (System_String_o *)StringLiteral_21049/*"mstSvtCard"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    12,
    (System_String_o *)StringLiteral_21084/*"mstSvtSkill"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    13,
    (System_String_o *)StringLiteral_21075/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    14,
    (System_String_o *)StringLiteral_23249/*"userSvt"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    15,
    (System_String_o *)StringLiteral_23260/*"userSvtStorage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    16,
    (System_String_o *)StringLiteral_21039/*"mstStage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    17,
    (System_String_o *)StringLiteral_21064/*"mstSvtGroup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    18,
    (System_String_o *)StringLiteral_20785/*"mstBlankEarthSpot"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    19,
    (System_String_o *)StringLiteral_20786/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    20,
    (System_String_o *)StringLiteral_21033/*"mstSpot"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    21,
    (System_String_o *)StringLiteral_21035/*"mstSpotImage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    22,
    (System_String_o *)StringLiteral_21038/*"mstSpotRoad"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    23,
    (System_String_o *)StringLiteral_20969/*"mstMapGimmick"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    24,
    (System_String_o *)StringLiteral_20955/*"mstGift"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    25,
    (System_String_o *)StringLiteral_20956/*"mstGiftAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    26,
    (System_String_o *)StringLiteral_21043/*"mstSubEquip"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    27,
    (System_String_o *)StringLiteral_23180/*"user"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    28,
    (System_String_o *)StringLiteral_23229/*"userGame"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    29,
    (System_String_o *)StringLiteral_23193/*"userDeck"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    30,
    (System_String_o *)StringLiteral_23253/*"userSvtCollection"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    31,
    (System_String_o *)StringLiteral_20936/*"mstFriendship"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    32,
    (System_String_o *)StringLiteral_20942/*"mstGacha"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    33,
    (System_String_o *)StringLiteral_20950/*"mstGachaImage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    34,
    (System_String_o *)StringLiteral_23225/*"userGacha"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    35,
    (System_String_o *)StringLiteral_23233/*"userItem"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    36,
    (System_String_o *)StringLiteral_20963/*"mstItem"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    37,
    (System_String_o *)StringLiteral_20954/*"mstGachaTicket"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    38,
    (System_String_o *)StringLiteral_20764/*"mstAccessary"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    39,
    (System_String_o *)StringLiteral_23183/*"userAccessary"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    40,
    (System_String_o *)StringLiteral_23247/*"userSubEquip"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    41,
    (System_String_o *)StringLiteral_22810/*"tblUserGame"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    42,
    (System_String_o *)StringLiteral_21020/*"mstShop"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    43,
    (System_String_o *)StringLiteral_21042/*"mstStoneShop"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    44,
    (System_String_o *)StringLiteral_20776/*"mstBankShop"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    45,
    (System_String_o *)StringLiteral_21025/*"mstShopScript"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    46,
    (System_String_o *)StringLiteral_20839/*"mstEquip"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    47,
    (System_String_o *)StringLiteral_20841/*"mstEquipExp"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    48,
    (System_String_o *)StringLiteral_20843/*"mstEquipSkill"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    49,
    (System_String_o *)StringLiteral_23197/*"userEquip"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    50,
    (System_String_o *)StringLiteral_23222/*"userFormation"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    51,
    (System_String_o *)StringLiteral_21026/*"mstSkill"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    52,
    (System_String_o *)StringLiteral_21032/*"mstSkillLv"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    53,
    (System_String_o *)StringLiteral_21028/*"mstSkillDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    54,
    (System_String_o *)StringLiteral_20937/*"mstFunc"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    55,
    (System_String_o *)StringLiteral_20795/*"mstBuff"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    56,
    (System_String_o *)StringLiteral_20951/*"mstGachaRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    57,
    (System_String_o *)StringLiteral_23240/*"userQuest"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    58,
    (System_String_o *)StringLiteral_23241/*"userQuestInfo"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    59,
    (System_String_o *)StringLiteral_23242/*"userQuestRecord"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    60,
    (System_String_o *)StringLiteral_21104/*"mstUserExp"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    61,
    (System_String_o *)StringLiteral_20982/*"mstNews"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    62,
    (System_String_o *)StringLiteral_21093/*"mstTelop"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    63,
    (System_String_o *)StringLiteral_21497/*"otherUserGame"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    64,
    (System_String_o *)StringLiteral_22809/*"tblFriend"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    65,
    (System_String_o *)StringLiteral_23236/*"userPresentBox"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    66,
    (System_String_o *)StringLiteral_20844/*"mstEvent"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    67,
    (System_String_o *)StringLiteral_20986/*"mstQuest"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    68,
    (System_String_o *)StringLiteral_20987/*"mstQuestAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    69,
    (System_String_o *)StringLiteral_21001/*"mstQuestRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    70,
    (System_String_o *)StringLiteral_20995/*"mstQuestPhase"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    71,
    (System_String_o *)StringLiteral_20996/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    72,
    (System_String_o *)StringLiteral_20992/*"mstQuestGroup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    73,
    (System_String_o *)StringLiteral_21000/*"mstQuestRandomGroup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    74,
    (System_String_o *)StringLiteral_20990/*"mstQuestConsumeItem"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    75,
    (System_String_o *)StringLiteral_20994/*"mstQuestMessage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    76,
    (System_String_o *)StringLiteral_23348/*"viewQuestInfo"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    77,
    (System_String_o *)StringLiteral_23346/*"viewEnemy"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    78,
    (System_String_o *)StringLiteral_23347/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    79,
    (System_String_o *)StringLiteral_20769/*"mstArea"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    80,
    (System_String_o *)StringLiteral_20783/*"mstBgm"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    81,
    (System_String_o *)StringLiteral_20903/*"mstEventQuest"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    82,
    (System_String_o *)StringLiteral_20856/*"mstEventCampaign"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    83,
    (System_String_o *)StringLiteral_20817/*"mstCombineQp"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    84,
    (System_String_o *)StringLiteral_20816/*"mstCombineMaterial"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    85,
    (System_String_o *)StringLiteral_20858/*"mstEventCombine"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    86,
    (System_String_o *)StringLiteral_21060/*"mstSvtExp"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    87,
    (System_String_o *)StringLiteral_20819/*"mstCombineSkill"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    88,
    (System_String_o *)StringLiteral_20820/*"mstCombineTd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    89,
    (System_String_o *)StringLiteral_20960/*"mstIllustrator"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    90,
    (System_String_o *)StringLiteral_20834/*"mstCv"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    91,
    (System_String_o *)StringLiteral_21102/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    92,
    (System_String_o *)StringLiteral_21101/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    93,
    (System_String_o *)StringLiteral_23221/*"userFollower"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    94,
    (System_String_o *)StringLiteral_21326/*"npcFollower"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    95,
    (System_String_o *)StringLiteral_21331/*"npcSvtFollower"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    96,
    (System_String_o *)StringLiteral_23199/*"userEvent"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    97,
    (System_String_o *)StringLiteral_23239/*"userProfile"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    98,
    (System_String_o *)StringLiteral_23244/*"userShop"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    99,
    (System_String_o *)StringLiteral_23191/*"userContinue"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    100,
    (System_String_o *)StringLiteral_20831/*"mstConstant"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    101,
    (System_String_o *)StringLiteral_20832/*"mstConstantLong"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    102,
    (System_String_o *)StringLiteral_20833/*"mstConstantStr"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    103,
    (System_String_o *)StringLiteral_20826/*"mstCommandSpell"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    104,
    (System_String_o *)StringLiteral_20766/*"mstAi"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    105,
    (System_String_o *)StringLiteral_20767/*"mstAiAct"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    106,
    (System_String_o *)StringLiteral_21090/*"mstSvtVoice"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    107,
    (System_String_o *)StringLiteral_20773/*"mstAttriRelation"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    108,
    (System_String_o *)StringLiteral_20807/*"mstClassRelation"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    109,
    (System_String_o *)StringLiteral_20836/*"mstEffect"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    110,
    (System_String_o *)StringLiteral_20842/*"mstEquipImage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    111,
    (System_String_o *)StringLiteral_20813/*"mstCombineLimit"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    112,
    (System_String_o *)StringLiteral_20799/*"mstCard"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    113,
    (System_String_o *)StringLiteral_20818/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    114,
    (System_String_o *)StringLiteral_21067/*"mstSvtLimitAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    115,
    (System_String_o *)StringLiteral_21080/*"mstSvtRarity"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    116,
    (System_String_o *)StringLiteral_21019/*"mstSetItem"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    117,
    (System_String_o *)StringLiteral_21012/*"mstRecover"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    118,
    (System_String_o *)StringLiteral_20777/*"mstBanner"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    119,
    (System_String_o *)StringLiteral_21024/*"mstShopRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    120,
    (System_String_o *)StringLiteral_20911/*"mstEventReward"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    121,
    (System_String_o *)StringLiteral_20865/*"mstEventDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    122,
    (System_String_o *)StringLiteral_20923/*"mstEventSvt"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    123,
    (System_String_o *)StringLiteral_20791/*"mstBoxGacha"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    124,
    (System_String_o *)StringLiteral_20792/*"mstBoxGachaBase"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    125,
    (System_String_o *)StringLiteral_20794/*"mstBoxGachaTalk"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    126,
    (System_String_o *)StringLiteral_23185/*"userBoxGacha"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    127,
    (System_String_o *)StringLiteral_17013/*"boxGachaHistory"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    128,
    (System_String_o *)StringLiteral_20779/*"mstBattleBg"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    129,
    (System_String_o *)StringLiteral_21095/*"mstTips"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    130,
    (System_String_o *)StringLiteral_23234/*"userLogin"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    131,
    (System_String_o *)StringLiteral_21105/*"mstVoice"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    132,
    (System_String_o *)StringLiteral_20913/*"mstEventRewardExtra"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    133,
    (System_String_o *)StringLiteral_20883/*"mstEventMission"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    134,
    (System_String_o *)StringLiteral_20887/*"mstEventMissionCondition"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    135,
    (System_String_o *)StringLiteral_20888/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    136,
    (System_String_o *)StringLiteral_20884/*"mstEventMissionAction"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    137,
    (System_String_o *)StringLiteral_20885/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    140,
    (System_String_o *)StringLiteral_20830/*"mstCompleteMission"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    138,
    (System_String_o *)StringLiteral_20886/*"mstEventMissionAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    139,
    (System_String_o *)StringLiteral_20917/*"mstEventRewardSet"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    141,
    (System_String_o *)StringLiteral_23209/*"userEventMission"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    142,
    (System_String_o *)StringLiteral_23210/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    143,
    (System_String_o *)StringLiteral_20793/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    144,
    (System_String_o *)StringLiteral_20809/*"mstClosedMessage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    145,
    (System_String_o *)StringLiteral_23259/*"userSvtLeader"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    146,
    (System_String_o *)StringLiteral_20940/*"mstFuncGroup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    147,
    (System_String_o *)StringLiteral_20907/*"mstEventRaid"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    148,
    (System_String_o *)StringLiteral_22924/*"totalEventRaid"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    149,
    (System_String_o *)StringLiteral_23215/*"userEventRaid"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    150,
    (System_String_o *)StringLiteral_20895/*"mstEventPoint"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    151,
    (System_String_o *)StringLiteral_20898/*"mstEventPointGroup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    152,
    (System_String_o *)StringLiteral_22922/*"totalEventPoint"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    153,
    (System_String_o *)StringLiteral_23212/*"userEventPoint"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    154,
    (System_String_o *)StringLiteral_23237/*"userPresentHistory"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    155,
    (System_String_o *)StringLiteral_20977/*"mstMasterMission"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    156,
    (System_String_o *)StringLiteral_21059/*"mstSvtExceed"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    157,
    (System_String_o *)StringLiteral_20984/*"mstPartialMaintenance"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    158,
    (System_String_o *)StringLiteral_20958/*"mstGuide"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    159,
    (System_String_o *)StringLiteral_20978/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    160,
    (System_String_o *)StringLiteral_20949/*"mstGachaGroup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    161,
    (System_String_o *)StringLiteral_21003/*"mstQuestReset"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    162,
    (System_String_o *)StringLiteral_21113/*"mstWarAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    163,
    (System_String_o *)StringLiteral_20879/*"mstEventItemDisplay"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    164,
    (System_String_o *)StringLiteral_20880/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    165,
    (System_String_o *)StringLiteral_20881/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    166,
    (System_String_o *)StringLiteral_20928/*"mstEventTutorial"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    167,
    (System_String_o *)StringLiteral_20929/*"mstEventTutorialCond"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    168,
    (System_String_o *)StringLiteral_21111/*"mstVoiceRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    169,
    (System_String_o *)StringLiteral_20922/*"mstEventSuperBoss"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    170,
    (System_String_o *)StringLiteral_23218/*"userEventSuperBoss"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    171,
    (System_String_o *)StringLiteral_21006/*"mstQuestScript"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    172,
    (System_String_o *)StringLiteral_21010/*"mstQuestScriptRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    173,
    (System_String_o *)StringLiteral_20980/*"mstMaterialFolder"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    174,
    (System_String_o *)StringLiteral_21013/*"mstRestriction"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    175,
    (System_String_o *)StringLiteral_21004/*"mstQuestRestriction"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    176,
    (System_String_o *)StringLiteral_21092/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    177,
    (System_String_o *)StringLiteral_21022/*"mstShopDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    178,
    (System_String_o *)StringLiteral_21082/*"mstSvtScriptAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    179,
    (System_String_o *)StringLiteral_20810/*"mstCombine"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    180,
    (System_String_o *)StringLiteral_20768/*"mstAiField"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    181,
    (System_String_o *)StringLiteral_21056/*"mstSvtCommentAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    182,
    (System_String_o *)StringLiteral_20874/*"mstEventFilter"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    183,
    (System_String_o *)StringLiteral_23248/*"userSupportDeck"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    184,
    (System_String_o *)StringLiteral_20915/*"mstEventRewardScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    185,
    (System_String_o *)StringLiteral_20933/*"mstEventVoicePlay"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    186,
    (System_String_o *)StringLiteral_20953/*"mstGachaSub"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    187,
    (System_String_o *)StringLiteral_20947/*"mstGachaDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    188,
    (System_String_o *)StringLiteral_20945/*"mstGachaBonusSelect"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    189,
    (System_String_o *)StringLiteral_20946/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    190,
    (System_String_o *)StringLiteral_21051/*"mstSvtChange"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    191,
    (System_String_o *)StringLiteral_21107/*"mstVoiceCond"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    192,
    (System_String_o *)StringLiteral_20784/*"mstBgmRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    193,
    (System_String_o *)StringLiteral_20981/*"mstMyroomAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    194,
    (System_String_o *)StringLiteral_21021/*"mstShopAction"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    195,
    (System_String_o *)StringLiteral_20916/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    196,
    (System_String_o *)StringLiteral_20966/*"mstMap"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    197,
    (System_String_o *)StringLiteral_20968/*"mstMapCond"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    198,
    (System_String_o *)StringLiteral_20967/*"mstMapButton"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    199,
    (System_String_o *)StringLiteral_20778/*"mstBannerAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    200,
    (System_String_o *)StringLiteral_20989/*"mstQuestBehavior"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    201,
    (System_String_o *)StringLiteral_20845/*"mstEventAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    202,
    (System_String_o *)StringLiteral_21096/*"mstTotalLogin"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    203,
    (System_String_o *)StringLiteral_21061/*"mstSvtFilter"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    204,
    (System_String_o *)StringLiteral_20812/*"mstCombineCostume"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    205,
    (System_String_o *)StringLiteral_21057/*"mstSvtCostume"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    206,
    (System_String_o *)StringLiteral_21058/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    207,
    (System_String_o *)StringLiteral_23224/*"userFriendRequestHistory"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    208,
    (System_String_o *)StringLiteral_23184/*"userBlacklist"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    209,
    (System_String_o *)StringLiteral_20964/*"mstItemSelect"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    210,
    (System_String_o *)StringLiteral_20905/*"mstEventRace"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    211,
    (System_String_o *)StringLiteral_20906/*"mstEventRaceResult"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    212,
    (System_String_o *)StringLiteral_20999/*"mstQuestRacePoint"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    213,
    (System_String_o *)StringLiteral_23214/*"userEventRace"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    214,
    (System_String_o *)StringLiteral_20918/*"mstEventScript"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    215,
    (System_String_o *)StringLiteral_20919/*"mstEventScriptRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    216,
    (System_String_o *)StringLiteral_21037/*"mstSpotPath"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    217,
    (System_String_o *)StringLiteral_21034/*"mstSpotAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    218,
    (System_String_o *)StringLiteral_22923/*"totalEventRace"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    219,
    (System_String_o *)StringLiteral_20899/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    220,
    (System_String_o *)StringLiteral_21110/*"mstVoicePlayGroup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    221,
    (System_String_o *)StringLiteral_21109/*"mstVoicePlayCond"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    222,
    (System_String_o *)StringLiteral_20952/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    223,
    (System_String_o *)StringLiteral_21062/*"mstSvtFlag"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    224,
    (System_String_o *)StringLiteral_21063/*"mstSvtFlagRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    225,
    (System_String_o *)StringLiteral_20882/*"mstEventLocationCampaign"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    226,
    (System_String_o *)StringLiteral_20798/*"mstCampaignInfo"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    227,
    (System_String_o *)StringLiteral_20835/*"mstDialogMessage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    228,
    (System_String_o *)StringLiteral_21065/*"mstSvtIndividuality"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    229,
    (System_String_o *)StringLiteral_20788/*"mstBoardMessage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    230,
    (System_String_o *)StringLiteral_20789/*"mstBoardMessageRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    231,
    (System_String_o *)StringLiteral_20924/*"mstEventSvtFatigue"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    232,
    (System_String_o *)StringLiteral_23204/*"userEventDeck"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    233,
    (System_String_o *)StringLiteral_20926/*"mstEventTower"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    234,
    (System_String_o *)StringLiteral_20927/*"mstEventTowerReward"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    235,
    (System_String_o *)StringLiteral_20854/*"mstEventBulletinBoard"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    236,
    (System_String_o *)StringLiteral_20855/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    237,
    (System_String_o *)StringLiteral_20872/*"mstEventFactory"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    238,
    (System_String_o *)StringLiteral_21023/*"mstShopGroup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    239,
    (System_String_o *)StringLiteral_20774/*"mstAuraEffect"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    240,
    (System_String_o *)StringLiteral_20775/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    241,
    (System_String_o *)StringLiteral_23211/*"userEventMissionFix"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    242,
    (System_String_o *)StringLiteral_21311/*"notEndEventMissionFix"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    243,
    (System_String_o *)StringLiteral_20837/*"mstEnemyMaster"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    244,
    (System_String_o *)StringLiteral_20838/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    245,
    (System_String_o *)StringLiteral_21085/*"mstSvtSkillRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    246,
    (System_String_o *)StringLiteral_21076/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    247,
    (System_String_o *)StringLiteral_21089/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    248,
    (System_String_o *)StringLiteral_20975/*"mstMapGimmickRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    249,
    (System_String_o *)StringLiteral_20822/*"mstCommandCode"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    250,
    (System_String_o *)StringLiteral_21054/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    251,
    (System_String_o *)StringLiteral_23188/*"userCommandCode"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    252,
    (System_String_o *)StringLiteral_23189/*"userCommandCodeCollection"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    253,
    (System_String_o *)StringLiteral_23255/*"userSvtCommandCode"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    254,
    (System_String_o *)StringLiteral_20824/*"mstCommandCodeSkill"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    255,
    (System_String_o *)StringLiteral_20825/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    256,
    (System_String_o *)StringLiteral_20823/*"mstCommandCodeComment"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    257,
    (System_String_o *)StringLiteral_20920/*"mstEventStatus"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    258,
    (System_String_o *)StringLiteral_20921/*"mstEventStatusQuest"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    259,
    (System_String_o *)StringLiteral_20829/*"mstCommonRestriction"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    260,
    (System_String_o *)StringLiteral_20897/*"mstEventPointBuff"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    261,
    (System_String_o *)StringLiteral_23220/*"userFollow"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    262,
    (System_String_o *)StringLiteral_20914/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    263,
    (System_String_o *)StringLiteral_21330/*"npcSvtEquip"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    264,
    (System_String_o *)StringLiteral_20857/*"mstEventCampaignRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    265,
    (System_String_o *)StringLiteral_21071/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    266,
    (System_String_o *)StringLiteral_20869/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    267,
    (System_String_o *)StringLiteral_20896/*"mstEventPointActivity"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    268,
    (System_String_o *)StringLiteral_20938/*"mstFuncCategory"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    269,
    (System_String_o *)StringLiteral_20998/*"mstQuestPickup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    270,
    (System_String_o *)StringLiteral_20930/*"mstEventUi"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    271,
    (System_String_o *)StringLiteral_20931/*"mstEventUiRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    272,
    (System_String_o *)StringLiteral_20932/*"mstEventUiValue"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    273,
    (System_String_o *)StringLiteral_20861/*"mstEventConquestReward"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    274,
    (System_String_o *)StringLiteral_21327/*"npcFollowerRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    275,
    (System_String_o *)StringLiteral_20849/*"mstEventBonusFilter"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    276,
    (System_String_o *)StringLiteral_20850/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    277,
    (System_String_o *)StringLiteral_20851/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    278,
    (System_String_o *)StringLiteral_23228/*"userGachaExtraCount"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    279,
    (System_String_o *)StringLiteral_20821/*"mstCommandCardRankParam"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    280,
    (System_String_o *)StringLiteral_23254/*"userSvtCommandCard"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    281,
    (System_String_o *)StringLiteral_20985/*"mstPrivilege"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    282,
    (System_String_o *)StringLiteral_23238/*"userPrivilege"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    283,
    (System_String_o *)StringLiteral_20991/*"mstQuestDateRange"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    284,
    (System_String_o *)StringLiteral_20900/*"mstEventPointUpper"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    285,
    (System_String_o *)StringLiteral_20901/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    286,
    (System_String_o *)StringLiteral_23243/*"userQuestRoute"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    287,
    (System_String_o *)StringLiteral_20852/*"mstEventBossStatusUi"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    288,
    (System_String_o *)StringLiteral_20828/*"mstCommonRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    289,
    (System_String_o *)StringLiteral_21011/*"mstQuestSpotRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    290,
    (System_String_o *)StringLiteral_21108/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    291,
    (System_String_o *)StringLiteral_20808/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    292,
    (System_String_o *)StringLiteral_20878/*"mstEventGroup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    293,
    (System_String_o *)StringLiteral_20770/*"mstAssetbundleKey"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    294,
    (System_String_o *)StringLiteral_22919/*"totalBoxGacha"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    295,
    (System_String_o *)StringLiteral_21088/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    296,
    (System_String_o *)StringLiteral_18613/*"eventSvtFatigue"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    297,
    (System_String_o *)StringLiteral_20912/*"mstEventRewardBg"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    298,
    (System_String_o *)StringLiteral_20873/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    299,
    (System_String_o *)StringLiteral_18602/*"eventBoostItemUsed"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    300,
    (System_String_o *)StringLiteral_21041/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    301,
    (System_String_o *)StringLiteral_20997/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    302,
    (System_String_o *)StringLiteral_21106/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    303,
    (System_String_o *)StringLiteral_21040/*"mstStageRemap"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    304,
    (System_String_o *)StringLiteral_17688/*"combineExp"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    305,
    (System_String_o *)StringLiteral_20846/*"mstEventBoardGameCell"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    306,
    (System_String_o *)StringLiteral_20847/*"mstEventBoardGameToken"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    307,
    (System_String_o *)StringLiteral_20848/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    308,
    (System_String_o *)StringLiteral_23201/*"userEventBoardGameToken"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    309,
    (System_String_o *)StringLiteral_21046/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    310,
    (System_String_o *)StringLiteral_20983/*"mstOpeningMovie"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    311,
    (System_String_o *)StringLiteral_21069/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    312,
    (System_String_o *)StringLiteral_21644/*"pickupUserFollower"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    313,
    (System_String_o *)StringLiteral_21053/*"mstSvtCollection"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    314,
    (System_String_o *)StringLiteral_20944/*"mstGachaBehavior"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    315,
    (System_String_o *)StringLiteral_20904/*"mstEventQuestCooltime"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    316,
    (System_String_o *)StringLiteral_23213/*"userEventQuestCooltime"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    317,
    (System_String_o *)StringLiteral_20790/*"mstBoost"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    318,
    (System_String_o *)StringLiteral_21114/*"mstWarBoard"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    319,
    (System_String_o *)StringLiteral_21138/*"mstWarBoardSquare"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    320,
    (System_String_o *)StringLiteral_21137/*"mstWarBoardRoad"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    321,
    (System_String_o *)StringLiteral_21140/*"mstWarBoardStage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    322,
    (System_String_o *)StringLiteral_21115/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    323,
    (System_String_o *)StringLiteral_21117/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    324,
    (System_String_o *)StringLiteral_21148/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    325,
    (System_String_o *)StringLiteral_21143/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    326,
    (System_String_o *)StringLiteral_21144/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    327,
    (System_String_o *)StringLiteral_21147/*"mstWarBoardStageWall"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    328,
    (System_String_o *)StringLiteral_21120/*"mstWarBoardAi"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    329,
    (System_String_o *)StringLiteral_21133/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    330,
    (System_String_o *)StringLiteral_21134/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    331,
    (System_String_o *)StringLiteral_21127/*"mstWarBoardItem"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    332,
    (System_String_o *)StringLiteral_21149/*"mstWarBoardTreasure"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    333,
    (System_String_o *)StringLiteral_21132/*"mstWarBoardQuest"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    334,
    (System_String_o *)StringLiteral_23407/*"warBoardData"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    335,
    (System_String_o *)StringLiteral_21126/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    336,
    (System_String_o *)StringLiteral_21118/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    337,
    (System_String_o *)StringLiteral_21116/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    338,
    (System_String_o *)StringLiteral_21136/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    339,
    (System_String_o *)StringLiteral_21146/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    340,
    (System_String_o *)StringLiteral_20891/*"mstEventPanelMap"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    341,
    (System_String_o *)StringLiteral_20892/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    342,
    (System_String_o *)StringLiteral_20894/*"mstEventPanelSpot"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    343,
    (System_String_o *)StringLiteral_20893/*"mstEventPanelScan"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    344,
    (System_String_o *)StringLiteral_20866/*"mstEventDigging"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    345,
    (System_String_o *)StringLiteral_20868/*"mstEventDiggingReward"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    346,
    (System_String_o *)StringLiteral_20867/*"mstEventDiggingBlock"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    347,
    (System_String_o *)StringLiteral_23205/*"userEventDigging"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    348,
    (System_String_o *)StringLiteral_20827/*"mstCommonConsume"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    349,
    (System_String_o *)StringLiteral_23208/*"userEventMap"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    350,
    (System_String_o *)StringLiteral_23217/*"userEventSpot"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    351,
    (System_String_o *)StringLiteral_21150/*"mstWarGroup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    352,
    (System_String_o *)StringLiteral_21068/*"mstSvtLimitImage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    353,
    (System_String_o *)StringLiteral_19055/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    354,
    (System_String_o *)StringLiteral_21005/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    355,
    (System_String_o *)StringLiteral_20771/*"mstAssist"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    356,
    (System_String_o *)StringLiteral_21122/*"mstWarBoardEffect"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    357,
    (System_String_o *)StringLiteral_21130/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    358,
    (System_String_o *)StringLiteral_16803/*"beforeBirthDay"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    359,
    (System_String_o *)StringLiteral_20965/*"mstLoginQuest"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    360,
    (System_String_o *)StringLiteral_20859/*"mstEventCombineCostume"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    361,
    (System_String_o *)StringLiteral_21145/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    362,
    (System_String_o *)StringLiteral_21087/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    363,
    (System_String_o *)StringLiteral_21027/*"mstSkillAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    364,
    (System_String_o *)StringLiteral_21070/*"mstSvtLvDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    365,
    (System_String_o *)StringLiteral_20943/*"mstGachaAppend"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    366,
    (System_String_o *)StringLiteral_23227/*"userGachaDrawLog"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    367,
    (System_String_o *)StringLiteral_21047/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    368,
    (System_String_o *)StringLiteral_23250/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    369,
    (System_String_o *)StringLiteral_23251/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    370,
    (System_String_o *)StringLiteral_21048/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    371,
    (System_String_o *)StringLiteral_20811/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    372,
    (System_String_o *)StringLiteral_21052/*"mstSvtCoin"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    373,
    (System_String_o *)StringLiteral_23252/*"userSvtCoin"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    374,
    (System_String_o *)StringLiteral_21045/*"mstSvtAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    375,
    (System_String_o *)StringLiteral_21097/*"mstTreasureBox"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    376,
    (System_String_o *)StringLiteral_21098/*"mstTreasureBoxGift"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    377,
    (System_String_o *)StringLiteral_21099/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    378,
    (System_String_o *)StringLiteral_23206/*"userEventExpedition"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    379,
    (System_String_o *)StringLiteral_20870/*"mstEventExpedition"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    380,
    (System_String_o *)StringLiteral_20871/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    381,
    (System_String_o *)StringLiteral_20909/*"mstEventRecipe"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    382,
    (System_String_o *)StringLiteral_20910/*"mstEventRecipeGift"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    383,
    (System_String_o *)StringLiteral_23207/*"userEventFortification"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    384,
    (System_String_o *)StringLiteral_20875/*"mstEventFortification"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    385,
    (System_String_o *)StringLiteral_20876/*"mstEventFortificationDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    386,
    (System_String_o *)StringLiteral_20877/*"mstEventFortificationSvt"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    387,
    (System_String_o *)StringLiteral_23261/*"userSvtVoicePlayed"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    388,
    (System_String_o *)StringLiteral_23132/*"updateProfileDialogInfo"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    389,
    (System_String_o *)StringLiteral_21072/*"mstSvtMaterialTd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    390,
    (System_String_o *)StringLiteral_20780/*"mstBattleMasterImage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    391,
    (System_String_o *)StringLiteral_23223/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    392,
    (System_String_o *)StringLiteral_23216/*"userEventRandomMission"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    393,
    (System_String_o *)StringLiteral_20902/*"mstEventProgressValue"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    394,
    (System_String_o *)StringLiteral_21073/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    395,
    (System_String_o *)StringLiteral_20908/*"mstEventRandomMission"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    396,
    (System_String_o *)StringLiteral_23226/*"userGachaDrawHistory"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    397,
    (System_String_o *)StringLiteral_23187/*"userCoinRoom"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    398,
    (System_String_o *)StringLiteral_20853/*"mstEventBuddyPoint"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    399,
    (System_String_o *)StringLiteral_20925/*"mstEventSvtPointRank"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    400,
    (System_String_o *)StringLiteral_23219/*"userEventSvtPoint"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    401,
    (System_String_o *)StringLiteral_20935/*"mstFieldMotion"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    402,
    (System_String_o *)StringLiteral_23196/*"userDeleteReservation"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    403,
    (System_String_o *)StringLiteral_21083/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    404,
    (System_String_o *)StringLiteral_20840/*"mstEquipAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    405,
    (System_String_o *)StringLiteral_21002/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    406,
    (System_String_o *)StringLiteral_23200/*"userEventAlloutBattle"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    407,
    (System_String_o *)StringLiteral_21008/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    408,
    (System_String_o *)StringLiteral_20781/*"mstBattleMessage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    409,
    (System_String_o *)StringLiteral_20782/*"mstBattleMessageGroup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    410,
    (System_String_o *)StringLiteral_23235/*"userNpcSvtRecord"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    411,
    (System_String_o *)StringLiteral_20797/*"mstBuffTypeDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    412,
    (System_String_o *)StringLiteral_21128/*"mstWarBoardMessage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    413,
    (System_String_o *)StringLiteral_21131/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    414,
    (System_String_o *)StringLiteral_21129/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    415,
    (System_String_o *)StringLiteral_21152/*"mstWarQuestSelection"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    416,
    (System_String_o *)StringLiteral_21142/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    417,
    (System_String_o *)StringLiteral_21009/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    418,
    (System_String_o *)StringLiteral_21007/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    419,
    (System_String_o *)StringLiteral_20765/*"mstAdCheckPoint"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    420,
    (System_String_o *)StringLiteral_20957/*"mstGiftDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    421,
    (System_String_o *)StringLiteral_20814/*"mstCombineLimitGift"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    422,
    (System_String_o *)StringLiteral_20862/*"mstEventCooltimeReward"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    423,
    (System_String_o *)StringLiteral_23202/*"userEventCooltimeReward"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    424,
    (System_String_o *)StringLiteral_20802/*"mstClassBoardClass"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    425,
    (System_String_o *)StringLiteral_20801/*"mstClassBoardBase"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    426,
    (System_String_o *)StringLiteral_20804/*"mstClassBoardLine"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    427,
    (System_String_o *)StringLiteral_20805/*"mstClassBoardLock"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    428,
    (System_String_o *)StringLiteral_20806/*"mstClassBoardSquare"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    429,
    (System_String_o *)StringLiteral_20803/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    430,
    (System_String_o *)StringLiteral_23186/*"userClassBoardSquare"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    431,
    (System_String_o *)StringLiteral_21050/*"mstSvtCardAdd"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    432,
    (System_String_o *)StringLiteral_20976/*"mstMapLayer"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    433,
    (System_String_o *)StringLiteral_21036/*"mstSpotLayer"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    434,
    (System_String_o *)StringLiteral_20971/*"mstMapGimmickLayer"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    435,
    (System_String_o *)StringLiteral_20863/*"mstEventDataLostBattle"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    436,
    (System_String_o *)StringLiteral_20864/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    437,
    (System_String_o *)StringLiteral_23203/*"userEventDataLost"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    438,
    (System_String_o *)StringLiteral_20993/*"mstQuestHint"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    439,
    (System_String_o *)StringLiteral_20941/*"mstFuncTypeDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    440,
    (System_String_o *)StringLiteral_20796/*"mstBuffConvert"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    441,
    (System_String_o *)StringLiteral_21029/*"mstSkillGroup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    442,
    (System_String_o *)StringLiteral_21030/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    443,
    (System_String_o *)StringLiteral_21031/*"mstSkillIndividuality"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    444,
    (System_String_o *)StringLiteral_21014/*"mstRestrictionBase"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    445,
    (System_String_o *)StringLiteral_21016/*"mstRestrictionSlot"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    446,
    (System_String_o *)StringLiteral_21017/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    447,
    (System_String_o *)StringLiteral_21015/*"mstRestrictionMessage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    448,
    (System_String_o *)StringLiteral_21018/*"mstRestrictionWhole"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    449,
    (System_String_o *)StringLiteral_20939/*"mstFuncDisp"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    450,
    (System_String_o *)StringLiteral_20860/*"mstEventCommandAssist"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    451,
    (System_String_o *)StringLiteral_20889/*"mstEventMissionGroup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    452,
    (System_String_o *)StringLiteral_20815/*"mstCombineLimitRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    453,
    (System_String_o *)StringLiteral_21103/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    454,
    (System_String_o *)StringLiteral_20959/*"mstHeelPortrait"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    455,
    (System_String_o *)StringLiteral_23231/*"userHeelPortrait"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    456,
    (System_String_o *)StringLiteral_21332/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    457,
    (System_String_o *)StringLiteral_20948/*"mstGachaExtraGift"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    458,
    (System_String_o *)StringLiteral_20890/*"mstEventMural"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    459,
    (System_String_o *)StringLiteral_23349/*"viewWaveEnemy"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    460,
    (System_String_o *)StringLiteral_20787/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    461,
    (System_String_o *)StringLiteral_21094/*"mstTerminalOverwrite"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    462,
    (System_String_o *)StringLiteral_18763/*"exchangeSvt"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    463,
    (System_String_o *)StringLiteral_21121/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    464,
    (System_String_o *)StringLiteral_21123/*"mstWarBoardEvent"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    465,
    (System_String_o *)StringLiteral_21124/*"mstWarBoardEventScript"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    466,
    (System_String_o *)StringLiteral_21141/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    467,
    (System_String_o *)StringLiteral_21139/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    468,
    (System_String_o *)StringLiteral_21119/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    469,
    (System_String_o *)StringLiteral_21135/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    470,
    (System_String_o *)StringLiteral_21125/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    471,
    (System_String_o *)StringLiteral_21079/*"mstSvtProfilePush"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    472,
    (System_String_o *)StringLiteral_20973/*"mstMapGimmickPath"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    473,
    (System_String_o *)StringLiteral_20974/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    474,
    (System_String_o *)StringLiteral_21074/*"mstSvtOverwrite"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    475,
    (System_String_o *)StringLiteral_20962/*"mstIndividualityPolicy"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    476,
    (System_String_o *)StringLiteral_20961/*"mstIndividualityPersonality"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    477,
    (System_String_o *)StringLiteral_20772/*"mstAttri"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    478,
    (System_String_o *)StringLiteral_21091/*"mstSvtVoicePattern"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    479,
    (System_String_o *)StringLiteral_23230/*"userGameCommon"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    480,
    (System_String_o *)StringLiteral_21077/*"mstSvtPhoto"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    481,
    (System_String_o *)StringLiteral_20979/*"mstMasterPhoto"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    482,
    (System_String_o *)StringLiteral_21151/*"mstWarMessage"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    483,
    (System_String_o *)StringLiteral_20988/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    484,
    (System_String_o *)StringLiteral_20934/*"mstExcludeMotion"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  static_fields = (BattleServantConfConponent_o *)DataNameKind_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v5, v6, v7, v8, v9, v10);
}


void __fastcall DataNameKind___ctor(DataNameKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall DataNameKind__GetName(int32_t kind, const MethodInfo *method)
{
  DataNameKind_c *v3; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *nameList; // x0

  if ( (byte_42AF671 & 1) == 0 )
  {
    sub_B52984(&DataNameKind_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_42AF671 = 1;
  }
  v3 = DataNameKind_TypeInfo;
  if ( (BYTE3(DataNameKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataNameKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
    v3 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_B52A5C(0LL, method);
  return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           nameList,
           kind,
           (const MethodInfo_2F3F4DC *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}