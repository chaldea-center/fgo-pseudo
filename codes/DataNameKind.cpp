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

  if ( (byte_438E0E2 & 1) == 0 )
  {
    sub_B775C4(&DataNameKind_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_B775C4(&StringLiteral_23519/*"userGameCommon"*/);
    sub_B775C4(&StringLiteral_21150/*"mstEventMissionConditionDetail"*/);
    sub_B775C4(&StringLiteral_21363/*"mstTreasureBoxGift"*/);
    sub_B775C4(&StringLiteral_21085/*"mstCommandCodeComment"*/);
    sub_B775C4(&StringLiteral_21146/*"mstEventMissionAction"*/);
    sub_B775C4(&StringLiteral_23489/*"userEventAlloutBattle"*/);
    sub_B775C4(&StringLiteral_21112/*"mstEventBonusFilterGroupInfo"*/);
    sub_B775C4(&StringLiteral_21266/*"mstQuestReleaseOverwrite"*/);
    sub_B775C4(&StringLiteral_21237/*"mstMapGimmickRelease"*/);
    sub_B775C4(&StringLiteral_21210/*"mstGachaExtraGift"*/);
    sub_B775C4(&StringLiteral_21600/*"npcSvtFollowerIndividuality"*/);
    sub_B775C4(&StringLiteral_21114/*"mstEventBossStatusUi"*/);
    sub_B775C4(&StringLiteral_23541/*"userSvtAppendPassiveSkillLv"*/);
    sub_B775C4(&StringLiteral_21069/*"mstClassRelation"*/);
    sub_B775C4(&StringLiteral_21028/*"mstAiAct"*/);
    sub_B775C4(&StringLiteral_21310/*"mstSvtAnimationOverwrite"*/);
    sub_B775C4(&StringLiteral_21268/*"mstQuestRestriction"*/);
    sub_B775C4(&StringLiteral_21096/*"mstCv"*/);
    sub_B775C4(&StringLiteral_23494/*"userEventDigging"*/);
    sub_B775C4(&StringLiteral_23097/*"tblUserGame"*/);
    sub_B775C4(&StringLiteral_21125/*"mstEventDataLostBattle"*/);
    sub_B775C4(&StringLiteral_21115/*"mstEventBuddyPoint"*/);
    sub_B775C4(&StringLiteral_21045/*"mstBgmRelease"*/);
    sub_B775C4(&StringLiteral_21336/*"mstSvtMaterialTd"*/);
    sub_B775C4(&StringLiteral_21090/*"mstCommonRelease"*/);
    sub_B775C4(&StringLiteral_21198/*"mstFriendship"*/);
    sub_B775C4(&StringLiteral_23475/*"userClassBoardSquare"*/);
    sub_B775C4(&StringLiteral_21094/*"mstConstantLong"*/);
    sub_B775C4(&StringLiteral_21068/*"mstClassBoardSquare"*/);
    sub_B775C4(&StringLiteral_23545/*"userSvtCommandCode"*/);
    sub_B775C4(&StringLiteral_21252/*"mstQuestBehavior"*/);
    sub_B775C4(&StringLiteral_21335/*"mstSvtMaterialFolder"*/);
    sub_B775C4(&StringLiteral_21410/*"mstWarBoardStagePieceDetail"*/);
    sub_B775C4(&StringLiteral_21113/*"mstEventBonusFilterGroupMember"*/);
    sub_B775C4(&StringLiteral_21256/*"mstQuestHint"*/);
    sub_B775C4(&StringLiteral_21088/*"mstCommandSpell"*/);
    sub_B775C4(&StringLiteral_21026/*"mstAdCheckPoint"*/);
    sub_B775C4(&StringLiteral_21248/*"mstPrivilege"*/);
    sub_B775C4(&StringLiteral_21051/*"mstBoardMessageRelease"*/);
    sub_B775C4(&StringLiteral_21213/*"mstGachaRelease"*/);
    sub_B775C4(&StringLiteral_23485/*"userDeleteReservation"*/);
    sub_B775C4(&StringLiteral_21362/*"mstTreasureBox"*/);
    sub_B775C4(&StringLiteral_21103/*"mstEquipExp"*/);
    sub_B775C4(&StringLiteral_21110/*"mstEventBoardGameTokenReward"*/);
    sub_B775C4(&StringLiteral_21316/*"mstSvtCoin"*/);
    sub_B775C4(&StringLiteral_21347/*"mstSvtScriptMultiple"*/);
    sub_B775C4(&StringLiteral_21243/*"mstMaterialFolder"*/);
    sub_B775C4(&StringLiteral_21121/*"mstEventCombineCostume"*/);
    sub_B775C4(&StringLiteral_21254/*"mstQuestDateRange"*/);
    sub_B775C4(&StringLiteral_21406/*"mstWarBoardStageBoss"*/);
    sub_B775C4(&StringLiteral_21058/*"mstBuffConvert"*/);
    sub_B775C4(&StringLiteral_21035/*"mstAuraEffect"*/);
    sub_B775C4(&StringLiteral_21168/*"mstEventRaceResult"*/);
    sub_B775C4(&StringLiteral_21283/*"mstSetItem"*/);
    sub_B775C4(&StringLiteral_21276/*"mstRecover"*/);
    sub_B775C4(&StringLiteral_21183/*"mstEventStatusQuest"*/);
    sub_B775C4(&StringLiteral_23491/*"userEventCooltimeReward"*/);
    sub_B775C4(&StringLiteral_21384/*"mstWarBoardActionTrendGroup"*/);
    sub_B775C4(&StringLiteral_23533/*"userQuestRoute"*/);
    sub_B775C4(&StringLiteral_21296/*"mstSkillLv"*/);
    sub_B775C4(&StringLiteral_21328/*"mstSvtGroup"*/);
    sub_B775C4(&StringLiteral_21371/*"mstVoiceClosedMessage"*/);
    sub_B775C4(&StringLiteral_21133/*"mstEventExpeditionPiece"*/);
    sub_B775C4(&StringLiteral_21251/*"mstQuestAutoOrganizationAdjust"*/);
    sub_B775C4(&StringLiteral_21337/*"mstSvtMultiPortrait"*/);
    sub_B775C4(&StringLiteral_21136/*"mstEventFilter"*/);
    sub_B775C4(&StringLiteral_23523/*"userItem"*/);
    sub_B775C4(&StringLiteral_21132/*"mstEventExpedition"*/);
    sub_B775C4(&StringLiteral_21167/*"mstEventRace"*/);
    sub_B775C4(&StringLiteral_21269/*"mstQuestRestrictionInfo"*/);
    sub_B775C4(&StringLiteral_21267/*"mstQuestReset"*/);
    sub_B775C4(&StringLiteral_23495/*"userEventExpedition"*/);
    sub_B775C4(&StringLiteral_21139/*"mstEventFortificationSvt"*/);
    sub_B775C4(&StringLiteral_21411/*"mstWarBoardStageReinforcements"*/);
    sub_B775C4(&StringLiteral_21063/*"mstClassBoardBase"*/);
    sub_B775C4(&StringLiteral_21099/*"mstEnemyMaster"*/);
    sub_B775C4(&StringLiteral_21036/*"mstAuraEffectPosOverwrite"*/);
    sub_B775C4(&StringLiteral_21280/*"mstRestrictionSlot"*/);
    sub_B775C4(&StringLiteral_21215/*"mstGachaSub"*/);
    sub_B775C4(&StringLiteral_21187/*"mstEventSvtPointRank"*/);
    sub_B775C4(&StringLiteral_21160/*"mstEventPointGroup"*/);
    sub_B775C4(&StringLiteral_21107/*"mstEventAdd"*/);
    sub_B775C4(&StringLiteral_21101/*"mstEquip"*/);
    sub_B775C4(&StringLiteral_21172/*"mstEventRecipeGift"*/);
    sub_B775C4(&StringLiteral_21358/*"mstTelop"*/);
    sub_B775C4(&StringLiteral_23543/*"userSvtCollection"*/);
    sub_B775C4(&StringLiteral_23500/*"userEventMissionFix"*/);
    sub_B775C4(&StringLiteral_21278/*"mstRestrictionBase"*/);
    sub_B775C4(&StringLiteral_21360/*"mstTips"*/);
    sub_B775C4(&StringLiteral_21037/*"mstBankShop"*/);
    sub_B775C4(&StringLiteral_21195/*"mstEventVoicePlay"*/);
    sub_B775C4(&StringLiteral_21138/*"mstEventFortificationDetail"*/);
    sub_B775C4(&StringLiteral_23507/*"userEventSuperBoss"*/);
    sub_B775C4(&StringLiteral_21137/*"mstEventFortification"*/);
    sub_B775C4(&StringLiteral_21185/*"mstEventSvt"*/);
    sub_B775C4(&StringLiteral_21375/*"mstVoicePlayGroup"*/);
    sub_B775C4(&StringLiteral_23493/*"userEventDeck"*/);
    sub_B775C4(&StringLiteral_21298/*"mstSpotAdd"*/);
    sub_B775C4(&StringLiteral_21081/*"mstCombineSkill"*/);
    sub_B775C4(&StringLiteral_21403/*"mstWarBoardSquare"*/);
    sub_B775C4(&StringLiteral_21059/*"mstBuffTypeDetail"*/);
    sub_B775C4(&StringLiteral_21381/*"mstWarBoardActionPointClass"*/);
    sub_B775C4(&StringLiteral_21350/*"mstSvtTransform"*/);
    sub_B775C4(&StringLiteral_23526/*"userPresentBox"*/);
    sub_B775C4(&StringLiteral_23508/*"userEventSvtPoint"*/);
    sub_B775C4(&StringLiteral_23210/*"totalEventPoint"*/);
    sub_B775C4(&StringLiteral_21083/*"mstCommandCardRankParam"*/);
    sub_B775C4(&StringLiteral_21386/*"mstWarBoardCommonRelease"*/);
    sub_B775C4(&StringLiteral_21308/*"mstSvt"*/);
    sub_B775C4(&StringLiteral_23534/*"userShop"*/);
    sub_B775C4(&StringLiteral_21108/*"mstEventBoardGameCell"*/);
    sub_B775C4(&StringLiteral_21166/*"mstEventQuestCooltime"*/);
    sub_B775C4(&StringLiteral_21203/*"mstFuncTypeDetail"*/);
    sub_B775C4(&StringLiteral_21305/*"mstStatusEffectPosOverwrite"*/);
    sub_B775C4(&StringLiteral_18835/*"eventBoostItemUsed"*/);
    sub_B775C4(&StringLiteral_21286/*"mstShopDetail"*/);
    sub_B775C4(&StringLiteral_21224/*"mstIndividualityPolicy"*/);
    sub_B775C4(&StringLiteral_21229/*"mstMapButton"*/);
    sub_B775C4(&StringLiteral_21413/*"mstWarBoardTacticalTrend"*/);
    sub_B775C4(&StringLiteral_21307/*"mstSubEquip"*/);
    sub_B775C4(&StringLiteral_21301/*"mstSpotPath"*/);
    sub_B775C4(&StringLiteral_21078/*"mstCombineMaterial"*/);
    sub_B775C4(&StringLiteral_21077/*"mstCombineLimitRelease"*/);
    sub_B775C4(&StringLiteral_21367/*"mstTreasureDeviceLv"*/);
    sub_B775C4(&StringLiteral_21188/*"mstEventTower"*/);
    sub_B775C4(&StringLiteral_21290/*"mstSkill"*/);
    sub_B775C4(&StringLiteral_23522/*"userInterruptionQuest"*/);
    sub_B775C4(&StringLiteral_21339/*"mstSvtPassiveSkill"*/);
    sub_B775C4(&StringLiteral_21352/*"mstSvtTreasureDeviceAdd"*/);
    sub_B775C4(&StringLiteral_21048/*"mstBlankEarthSpotAdd"*/);
    sub_B775C4(&StringLiteral_23530/*"userQuest"*/);
    sub_B775C4(&StringLiteral_21149/*"mstEventMissionCondition"*/);
    sub_B775C4(&StringLiteral_21380/*"mstWarBoardActionPoint"*/);
    sub_B775C4(&StringLiteral_21071/*"mstClosedMessage"*/);
    sub_B775C4(&StringLiteral_21175/*"mstEventRewardExtra"*/);
    sub_B775C4(&StringLiteral_21158/*"mstEventPointActivity"*/);
    sub_B775C4(&StringLiteral_21165/*"mstEventQuest"*/);
    sub_B775C4(&StringLiteral_21043/*"mstBattleMessageGroup"*/);
    sub_B775C4(&StringLiteral_23638/*"viewQuestInfo"*/);
    sub_B775C4(&StringLiteral_21343/*"mstSvtProfilePush"*/);
    sub_B775C4(&StringLiteral_21366/*"mstTreasureDeviceDetail"*/);
    sub_B775C4(&StringLiteral_23473/*"userBlacklist"*/);
    sub_B775C4(&StringLiteral_21131/*"mstEventEquipSkillRelease"*/);
    sub_B775C4(&StringLiteral_23476/*"userCoinRoom"*/);
    sub_B775C4(&StringLiteral_21095/*"mstConstantStr"*/);
    sub_B775C4(&StringLiteral_21306/*"mstStoneShop"*/);
    sub_B775C4(&StringLiteral_21239/*"mstMapUpdateSchedule"*/);
    sub_B775C4(&StringLiteral_21361/*"mstTotalLogin"*/);
    sub_B775C4(&StringLiteral_21246/*"mstOpeningMovie"*/);
    sub_B775C4(&StringLiteral_21093/*"mstConstant"*/);
    sub_B775C4(&StringLiteral_21275/*"mstQuestSpotRelease"*/);
    sub_B775C4(&StringLiteral_21086/*"mstCommandCodeSkill"*/);
    sub_B775C4(&StringLiteral_21249/*"mstQuest"*/);
    sub_B775C4(&StringLiteral_21356/*"mstSvtVoicePattern"*/);
    sub_B775C4(&StringLiteral_21191/*"mstEventTutorialCond"*/);
    sub_B775C4(&StringLiteral_21379/*"mstWarBoard"*/);
    sub_B775C4(&StringLiteral_21169/*"mstEventRaid"*/);
    sub_B775C4(&StringLiteral_21044/*"mstBgm"*/);
    sub_B775C4(&StringLiteral_21181/*"mstEventScriptRelease"*/);
    sub_B775C4(&StringLiteral_23529/*"userProfile"*/);
    sub_B775C4(&StringLiteral_21148/*"mstEventMissionAdd"*/);
    sub_B775C4(&StringLiteral_21376/*"mstVoiceRelease"*/);
    sub_B775C4(&StringLiteral_21264/*"mstQuestRandomGroup"*/);
    sub_B775C4(&StringLiteral_21288/*"mstShopRelease"*/);
    sub_B775C4(&StringLiteral_23550/*"userSvtStorage"*/);
    sub_B775C4(&StringLiteral_23540/*"userSvtAppendPassiveSkill"*/);
    sub_B775C4(&StringLiteral_21309/*"mstSvtAdd"*/);
    sub_B775C4(&StringLiteral_21416/*"mstWarMessage"*/);
    sub_B775C4(&StringLiteral_21049/*"mstBlankEarthSpotNavimenu"*/);
    sub_B775C4(&StringLiteral_21041/*"mstBattleMasterImage"*/);
    sub_B775C4(&StringLiteral_21292/*"mstSkillDetail"*/);
    sub_B775C4(&StringLiteral_21240/*"mstMasterMission"*/);
    sub_B775C4(&StringLiteral_21340/*"mstSvtPassiveSkillRelease"*/);
    sub_B775C4(&StringLiteral_21297/*"mstSpot"*/);
    sub_B775C4(&StringLiteral_21145/*"mstEventMission"*/);
    sub_B775C4(&StringLiteral_21080/*"mstCombineQpSvtEquip"*/);
    sub_B775C4(&StringLiteral_21157/*"mstEventPoint"*/);
    sub_B775C4(&StringLiteral_21179/*"mstEventRewardSet"*/);
    sub_B775C4(&StringLiteral_21154/*"mstEventPanelMapDetail"*/);
    sub_B775C4(&StringLiteral_21314/*"mstSvtCardAdd"*/);
    sub_B775C4(&StringLiteral_21228/*"mstMap"*/);
    sub_B775C4(&StringLiteral_21128/*"mstEventDigging"*/);
    sub_B775C4(&StringLiteral_23514/*"userGacha"*/);
    sub_B775C4(&StringLiteral_21265/*"mstQuestRelease"*/);
    sub_B775C4(&StringLiteral_21127/*"mstEventDetail"*/);
    sub_B775C4(&StringLiteral_21238/*"mstMapLayer"*/);
    sub_B775C4(&StringLiteral_21390/*"mstWarBoardFutureActionTrend"*/);
    sub_B775C4(&StringLiteral_21295/*"mstSkillIndividuality"*/);
    sub_B775C4(&StringLiteral_21055/*"mstBoxGachaBaseDetail"*/);
    sub_B775C4(&StringLiteral_23096/*"tblFriend"*/);
    sub_B775C4(&StringLiteral_17020/*"beforeBirthDay"*/);
    sub_B775C4(&StringLiteral_21143/*"mstEventItemDisplayRelease"*/);
    sub_B775C4(&StringLiteral_16956/*"battle"*/);
    sub_B775C4(&StringLiteral_21287/*"mstShopGroup"*/);
    sub_B775C4(&StringLiteral_21034/*"mstAttriRelation"*/);
    sub_B775C4(&StringLiteral_23477/*"userCommandCode"*/);
    sub_B775C4(&StringLiteral_21119/*"mstEventCampaignRelease"*/);
    sub_B775C4(&StringLiteral_21325/*"mstSvtFilter"*/);
    sub_B775C4(&StringLiteral_21263/*"mstQuestRacePoint"*/);
    sub_B775C4(&StringLiteral_21766/*"otherUserGame"*/);
    sub_B775C4(&StringLiteral_21142/*"mstEventItemDisplayGroup"*/);
    sub_B775C4(&StringLiteral_21061/*"mstCard"*/);
    sub_B775C4(&StringLiteral_21046/*"mstBlankEarthGimmick"*/);
    sub_B775C4(&StringLiteral_21042/*"mstBattleMessage"*/);
    sub_B775C4(&StringLiteral_21281/*"mstRestrictionSlotDetail"*/);
    sub_B775C4(&StringLiteral_21038/*"mstBanner"*/);
    sub_B775C4(&StringLiteral_21100/*"mstEnemyMasterBattle"*/);
    sub_B775C4(&StringLiteral_21141/*"mstEventItemDisplay"*/);
    sub_B775C4(&StringLiteral_21060/*"mstCampaignInfo"*/);
    sub_B775C4(&StringLiteral_21351/*"mstSvtTreasureDevice"*/);
    sub_B775C4(&StringLiteral_21349/*"mstSvtSkillRelease"*/);
    sub_B775C4(&StringLiteral_21092/*"mstCompleteMission"*/);
    sub_B775C4(&StringLiteral_21075/*"mstCombineLimit"*/);
    sub_B775C4(&StringLiteral_21053/*"mstBoxGacha"*/);
    sub_B775C4(&StringLiteral_21373/*"mstVoiceMaterialCond"*/);
    sub_B775C4(&StringLiteral_21214/*"mstGachaStoryAdjust"*/);
    sub_B775C4(&StringLiteral_21369/*"mstUserExp"*/);
    sub_B775C4(&StringLiteral_21392/*"mstWarBoardItem"*/);
    sub_B775C4(&StringLiteral_21102/*"mstEquipAdd"*/);
    sub_B775C4(&StringLiteral_21097/*"mstDialogMessage"*/);
    sub_B775C4(&StringLiteral_21599/*"npcSvtFollower"*/);
    sub_B775C4(&StringLiteral_21040/*"mstBattleBg"*/);
    sub_B775C4(&StringLiteral_21064/*"mstClassBoardClass"*/);
    sub_B775C4(&StringLiteral_23501/*"userEventPoint"*/);
    sub_B775C4(&StringLiteral_21315/*"mstSvtChange"*/);
    sub_B775C4(&StringLiteral_21391/*"mstWarBoardIndividualityClass"*/);
    sub_B775C4(&StringLiteral_21261/*"mstQuestPhasePresent"*/);
    sub_B775C4(&StringLiteral_21152/*"mstEventMural"*/);
    sub_B775C4(&StringLiteral_21226/*"mstItemSelect"*/);
    sub_B775C4(&StringLiteral_21329/*"mstSvtIndividuality"*/);
    sub_B775C4(&StringLiteral_23488/*"userEvent"*/);
    sub_B775C4(&StringLiteral_21414/*"mstWarBoardTreasure"*/);
    sub_B775C4(&StringLiteral_21334/*"mstSvtLvDetail"*/);
    sub_B775C4(&StringLiteral_21399/*"mstWarBoardRatingOffset"*/);
    sub_B775C4(&StringLiteral_21259/*"mstQuestPhaseDetail"*/);
    sub_B775C4(&StringLiteral_21285/*"mstShopAction"*/);
    sub_B775C4(&StringLiteral_21244/*"mstMyroomAdd"*/);
    sub_B775C4(&StringLiteral_21186/*"mstEventSvtFatigue"*/);
    sub_B775C4(&StringLiteral_21134/*"mstEventFactory"*/);
    sub_B775C4(&StringLiteral_23515/*"userGachaDrawHistory"*/);
    sub_B775C4(&StringLiteral_23510/*"userFollower"*/);
    sub_B775C4(&StringLiteral_21400/*"mstWarBoardRatingOffsetGroup"*/);
    sub_B775C4(&StringLiteral_23542/*"userSvtCoin"*/);
    sub_B775C4(&StringLiteral_21180/*"mstEventScript"*/);
    sub_B775C4(&StringLiteral_21348/*"mstSvtSkill"*/);
    sub_B775C4(&StringLiteral_21300/*"mstSpotLayer"*/);
    sub_B775C4(&StringLiteral_23544/*"userSvtCommandCard"*/);
    sub_B775C4(&StringLiteral_23531/*"userQuestInfo"*/);
    sub_B775C4(&StringLiteral_21098/*"mstEffect"*/);
    sub_B775C4(&StringLiteral_21225/*"mstItem"*/);
    sub_B775C4(&StringLiteral_21161/*"mstEventPointGroupAdd"*/);
    sub_B775C4(&StringLiteral_21257/*"mstQuestMessage"*/);
    sub_B775C4(&StringLiteral_21595/*"npcFollowerRelease"*/);
    sub_B775C4(&StringLiteral_21200/*"mstFuncCategory"*/);
    sub_B775C4(&StringLiteral_21393/*"mstWarBoardMessage"*/);
    sub_B775C4(&StringLiteral_23518/*"userGame"*/);
    sub_B775C4(&StringLiteral_21217/*"mstGift"*/);
    sub_B775C4(&StringLiteral_21401/*"mstWarBoardReinforcements"*/);
    sub_B775C4(&StringLiteral_21109/*"mstEventBoardGameToken"*/);
    sub_B775C4(&StringLiteral_21233/*"mstMapGimmickLayer"*/);
    sub_B775C4(&StringLiteral_21318/*"mstSvtCommandCodeUnlock"*/);
    sub_B775C4(&StringLiteral_21032/*"mstAssist"*/);
    sub_B775C4(&StringLiteral_23639/*"viewWaveEnemy"*/);
    sub_B775C4(&StringLiteral_21598/*"npcSvtEquip"*/);
    sub_B775C4(&StringLiteral_21272/*"mstQuestScriptMaterialNext"*/);
    sub_B775C4(&StringLiteral_21324/*"mstSvtExp"*/);
    sub_B775C4(&StringLiteral_23539/*"userSvt"*/);
    sub_B775C4(&StringLiteral_23636/*"viewEnemy"*/);
    sub_B775C4(&StringLiteral_21193/*"mstEventUiRelease"*/);
    sub_B775C4(&StringLiteral_23211/*"totalEventRace"*/);
    sub_B775C4(&StringLiteral_21197/*"mstFieldMotion"*/);
    sub_B775C4(&StringLiteral_21170/*"mstEventRandomMission"*/);
    sub_B775C4(&StringLiteral_21177/*"mstEventRewardScene"*/);
    sub_B775C4(&StringLiteral_21223/*"mstIndividualityPersonality"*/);
    sub_B775C4(&StringLiteral_21074/*"mstCombineCostume"*/);
    sub_B775C4(&StringLiteral_21073/*"mstCombineAppendPassiveSkill"*/);
    sub_B775C4(&StringLiteral_21130/*"mstEventDiggingReward"*/);
    sub_B775C4(&StringLiteral_21382/*"mstWarBoardActionTrend"*/);
    sub_B775C4(&StringLiteral_21205/*"mstGachaAppend"*/);
    sub_B775C4(&StringLiteral_21404/*"mstWarBoardSquareIndexGroup"*/);
    sub_B775C4(&StringLiteral_21199/*"mstFunc"*/);
    sub_B775C4(&StringLiteral_21123/*"mstEventConquestReward"*/);
    sub_B775C4(&StringLiteral_21387/*"mstWarBoardEffect"*/);
    sub_B775C4(&StringLiteral_21417/*"mstWarQuestSelection"*/);
    sub_B775C4(&StringLiteral_23482/*"userDeck"*/);
    sub_B775C4(&StringLiteral_21241/*"mstMasterMissionDisplayInfo"*/);
    sub_B775C4(&StringLiteral_21415/*"mstWarGroup"*/);
    sub_B775C4(&StringLiteral_21284/*"mstShop"*/);
    sub_B775C4(&StringLiteral_21396/*"mstWarBoardPartySkill"*/);
    sub_B775C4(&StringLiteral_21159/*"mstEventPointBuff"*/);
    sub_B775C4(&StringLiteral_23538/*"userSupportDeck"*/);
    sub_B775C4(&StringLiteral_21302/*"mstSpotRoad"*/);
    sub_B775C4(&StringLiteral_21357/*"mstSvtVoiceRelation"*/);
    sub_B775C4(&StringLiteral_21076/*"mstCombineLimitGift"*/);
    sub_B775C4(&StringLiteral_21124/*"mstEventCooltimeReward"*/);
    sub_B775C4(&StringLiteral_21116/*"mstEventBulletinBoard"*/);
    sub_B775C4(&StringLiteral_21174/*"mstEventRewardBg"*/);
    sub_B775C4(&StringLiteral_21056/*"mstBoxGachaTalk"*/);
    sub_B775C4(&StringLiteral_21201/*"mstFuncDisp"*/);
    sub_B775C4(&StringLiteral_21345/*"mstSvtScript"*/);
    sub_B775C4(&StringLiteral_21230/*"mstMapCond"*/);
    sub_B775C4(&StringLiteral_23496/*"userEventFortification"*/);
    sub_B775C4(&StringLiteral_21395/*"mstWarBoardOnboardSkill"*/);
    sub_B775C4(&StringLiteral_21211/*"mstGachaGroup"*/);
    sub_B775C4(&StringLiteral_23637/*"viewQuestEnemyInfo"*/);
    sub_B775C4(&StringLiteral_23472/*"userAccountLinkage"*/);
    sub_B775C4(&StringLiteral_21319/*"mstSvtComment"*/);
    sub_B775C4(&StringLiteral_21365/*"mstTreasureDevice"*/);
    sub_B775C4(&StringLiteral_23525/*"userNpcSvtRecord"*/);
    sub_B775C4(&StringLiteral_21151/*"mstEventMissionGroup"*/);
    sub_B775C4(&StringLiteral_23532/*"userQuestRecord"*/);
    sub_B775C4(&StringLiteral_21279/*"mstRestrictionMessage"*/);
    sub_B775C4(&StringLiteral_21219/*"mstGiftDetail"*/);
    sub_B775C4(&StringLiteral_21216/*"mstGachaTicket"*/);
    sub_B775C4(&StringLiteral_21341/*"mstSvtPhoto"*/);
    sub_B775C4(&StringLiteral_21920/*"pickupUserFollower"*/);
    sub_B775C4(&StringLiteral_21182/*"mstEventStatus"*/);
    sub_B775C4(&StringLiteral_21320/*"mstSvtCommentAdd"*/);
    sub_B775C4(&StringLiteral_21338/*"mstSvtOverwrite"*/);
    sub_B775C4(&StringLiteral_21594/*"npcFollower"*/);
    sub_B775C4(&StringLiteral_21122/*"mstEventCommandAssist"*/);
    sub_B775C4(&StringLiteral_18846/*"eventSvtFatigue"*/);
    sub_B775C4(&StringLiteral_21208/*"mstGachaBonusSelectLineup"*/);
    sub_B775C4(&StringLiteral_21117/*"mstEventBulletinBoardRelease"*/);
    sub_B775C4(&StringLiteral_21323/*"mstSvtExceed"*/);
    sub_B775C4(&StringLiteral_21333/*"mstSvtLimitSpoilerProtection"*/);
    sub_B775C4(&StringLiteral_21355/*"mstSvtVoice"*/);
    sub_B775C4(&StringLiteral_21282/*"mstRestrictionWhole"*/);
    sub_B775C4(&StringLiteral_23517/*"userGachaExtraCount"*/);
    sub_B775C4(&StringLiteral_21235/*"mstMapGimmickPath"*/);
    sub_B775C4(&StringLiteral_21189/*"mstEventTowerReward"*/);
    sub_B775C4(&StringLiteral_21070/*"mstClassRelationOverwrite"*/);
    sub_B775C4(&StringLiteral_21027/*"mstAi"*/);
    sub_B775C4(&StringLiteral_23474/*"userBoxGacha"*/);
    sub_B775C4(&StringLiteral_21313/*"mstSvtCard"*/);
    sub_B775C4(&StringLiteral_23516/*"userGachaDrawLog"*/);
    sub_B775C4(&StringLiteral_21405/*"mstWarBoardStage"*/);
    sub_B775C4(&StringLiteral_23486/*"userEquip"*/);
    sub_B775C4(&StringLiteral_21176/*"mstEventRewardGuideRelease"*/);
    sub_B775C4(&StringLiteral_21065/*"mstClassBoardCommandSpell"*/);
    sub_B775C4(&StringLiteral_21206/*"mstGachaBehavior"*/);
    sub_B775C4(&StringLiteral_21377/*"mstWar"*/);
    sub_B775C4(&StringLiteral_21111/*"mstEventBonusFilter"*/);
    sub_B775C4(&StringLiteral_21274/*"mstQuestScriptRelease"*/);
    sub_B775C4(&StringLiteral_23497/*"userEventMap"*/);
    sub_B775C4(&StringLiteral_21156/*"mstEventPanelSpot"*/);
    sub_B775C4(&StringLiteral_21062/*"mstClass"*/);
    sub_B775C4(&StringLiteral_23471/*"userAccessary"*/);
    sub_B775C4(&StringLiteral_21331/*"mstSvtLimitAdd"*/);
    sub_B775C4(&StringLiteral_21273/*"mstQuestScriptMaterialOverwrite"*/);
    sub_B775C4(&StringLiteral_17917/*"combineExp"*/);
    sub_B775C4(&StringLiteral_23511/*"userFormation"*/);
    sub_B775C4(&StringLiteral_21394/*"mstWarBoardMessageScript"*/);
    sub_B775C4(&StringLiteral_21164/*"mstEventProgressValue"*/);
    sub_B775C4(&StringLiteral_23551/*"userSvtVoicePlayed"*/);
    sub_B775C4(&StringLiteral_21196/*"mstExcludeMotion"*/);
    sub_B775C4(&StringLiteral_21326/*"mstSvtFlag"*/);
    sub_B775C4(&StringLiteral_21050/*"mstBoardMessage"*/);
    sub_B775C4(&StringLiteral_21155/*"mstEventPanelScan"*/);
    sub_B775C4(&StringLiteral_21332/*"mstSvtLimitImage"*/);
    sub_B775C4(&StringLiteral_21129/*"mstEventDiggingBlock"*/);
    sub_B775C4(&StringLiteral_23505/*"userEventRandomMission"*/);
    sub_B775C4(&StringLiteral_21030/*"mstArea"*/);
    sub_B775C4(&StringLiteral_23212/*"totalEventRaid"*/);
    sub_B775C4(&StringLiteral_21578/*"notEndEventMissionFix"*/);
    sub_B775C4(&StringLiteral_21289/*"mstShopScript"*/);
    sub_B775C4(&StringLiteral_23498/*"userEventMission"*/);
    sub_B775C4(&StringLiteral_21242/*"mstMasterPhoto"*/);
    sub_B775C4(&StringLiteral_21147/*"mstEventMissionActionAdd"*/);
    sub_B775C4(&StringLiteral_21082/*"mstCombineTd"*/);
    sub_B775C4(&StringLiteral_21052/*"mstBoost"*/);
    sub_B775C4(&StringLiteral_21346/*"mstSvtScriptAdd"*/);
    sub_B775C4(&StringLiteral_21054/*"mstBoxGachaBase"*/);
    sub_B775C4(&StringLiteral_21039/*"mstBannerAdd"*/);
    sub_B775C4(&StringLiteral_21025/*"mstAccessary"*/);
    sub_B775C4(&StringLiteral_21368/*"mstTreasureDeviceSequenceWeight"*/);
    sub_B775C4(&StringLiteral_23503/*"userEventRace"*/);
    sub_B775C4(&StringLiteral_21255/*"mstQuestGroup"*/);
    sub_B775C4(&StringLiteral_21163/*"mstEventPointUpperRelease"*/);
    sub_B775C4(&StringLiteral_23549/*"userSvtLeader"*/);
    sub_B775C4(&StringLiteral_21330/*"mstSvtLimit"*/);
    sub_B775C4(&StringLiteral_23509/*"userFollow"*/);
    sub_B775C4(&StringLiteral_21144/*"mstEventLocationCampaign"*/);
    sub_B775C4(&StringLiteral_21079/*"mstCombineQp"*/);
    sub_B775C4(&StringLiteral_21106/*"mstEvent"*/);
    sub_B775C4(&StringLiteral_21327/*"mstSvtFlagRelease"*/);
    sub_B775C4(&StringLiteral_23512/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_B775C4(&StringLiteral_23528/*"userPrivilege"*/);
    sub_B775C4(&StringLiteral_21084/*"mstCommandCode"*/);
    sub_B775C4(&StringLiteral_21311/*"mstSvtAppendPassiveSkill"*/);
    sub_B775C4(&StringLiteral_21140/*"mstEventGroup"*/);
    sub_B775C4(&StringLiteral_21207/*"mstGachaBonusSelect"*/);
    sub_B775C4(&StringLiteral_23490/*"userEventBoardGameToken"*/);
    sub_B775C4(&StringLiteral_21402/*"mstWarBoardRoad"*/);
    sub_B775C4(&StringLiteral_21057/*"mstBuff"*/);
    sub_B775C4(&StringLiteral_23698/*"warBoardData"*/);
    sub_B775C4(&StringLiteral_21222/*"mstIllustrator"*/);
    sub_B775C4(&StringLiteral_23207/*"totalBoxGacha"*/);
    sub_B775C4(&StringLiteral_21344/*"mstSvtRarity"*/);
    sub_B775C4(&StringLiteral_21378/*"mstWarAdd"*/);
    sub_B775C4(&StringLiteral_21236/*"mstMapGimmickPathRelease"*/);
    sub_B775C4(&StringLiteral_23513/*"userFriendRequestHistory"*/);
    sub_B775C4(&StringLiteral_23468/*"user"*/);
    sub_B775C4(&StringLiteral_17233/*"boxGachaHistory"*/);
    sub_B775C4(&StringLiteral_21202/*"mstFuncGroup"*/);
    sub_B775C4(&StringLiteral_21089/*"mstCommonConsume"*/);
    sub_B775C4(&StringLiteral_21389/*"mstWarBoardEventScript"*/);
    sub_B775C4(&StringLiteral_21218/*"mstGiftAdd"*/);
    sub_B775C4(&StringLiteral_21192/*"mstEventUi"*/);
    sub_B775C4(&StringLiteral_21299/*"mstSpotImage"*/);
    sub_B775C4(&StringLiteral_21322/*"mstSvtCostumeRelease"*/);
    sub_B775C4(&StringLiteral_21231/*"mstMapGimmick"*/);
    sub_B775C4(&StringLiteral_21190/*"mstEventTutorial"*/);
    sub_B775C4(&StringLiteral_21412/*"mstWarBoardStageWall"*/);
    sub_B775C4(&StringLiteral_21029/*"mstAiField"*/);
    sub_B775C4(&StringLiteral_21354/*"mstSvtTreasureDeviceRelease"*/);
    sub_B775C4(&StringLiteral_21258/*"mstQuestPhase"*/);
    sub_B775C4(&StringLiteral_23492/*"userEventDataLost"*/);
    sub_B775C4(&StringLiteral_21312/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_B775C4(&StringLiteral_21353/*"mstSvtTreasureDeviceDamage"*/);
    sub_B775C4(&StringLiteral_21303/*"mstStage"*/);
    sub_B775C4(&StringLiteral_21072/*"mstCombine"*/);
    sub_B775C4(&StringLiteral_21118/*"mstEventCampaign"*/);
    sub_B775C4(&StringLiteral_21409/*"mstWarBoardStageNpc"*/);
    sub_B775C4(&StringLiteral_18996/*"exchangeSvt"*/);
    sub_B775C4(&StringLiteral_21304/*"mstStageRemap"*/);
    sub_B775C4(&StringLiteral_21277/*"mstRestriction"*/);
    sub_B775C4(&StringLiteral_21270/*"mstQuestScript"*/);
    sub_B775C4(&StringLiteral_21178/*"mstEventRewardSceneRelease"*/);
    sub_B775C4(&StringLiteral_21372/*"mstVoiceCond"*/);
    sub_B775C4(&StringLiteral_23537/*"userSubEquip"*/);
    sub_B775C4(&StringLiteral_21171/*"mstEventRecipe"*/);
    sub_B775C4(&StringLiteral_21321/*"mstSvtCostume"*/);
    sub_B775C4(&StringLiteral_21342/*"mstSvtProfile"*/);
    sub_B775C4(&StringLiteral_21091/*"mstCommonRestriction"*/);
    sub_B775C4(&StringLiteral_23520/*"userHeelPortrait"*/);
    sub_B775C4(&StringLiteral_21294/*"mstSkillGroupOverwrite"*/);
    sub_B775C4(&StringLiteral_23478/*"userCommandCodeCollection"*/);
    sub_B775C4(&StringLiteral_21087/*"mstCommandCodeSkillRelease"*/);
    sub_B775C4(&StringLiteral_21262/*"mstQuestPickup"*/);
    sub_B775C4(&StringLiteral_21408/*"mstWarBoardStageLayout"*/);
    sub_B775C4(&StringLiteral_21383/*"mstWarBoardActionTrendCond"*/);
    sub_B775C4(&StringLiteral_21120/*"mstEventCombine"*/);
    sub_B775C4(&StringLiteral_21397/*"mstWarBoardQuest"*/);
    sub_B775C4(&StringLiteral_21253/*"mstQuestConsumeItem"*/);
    sub_B775C4(&StringLiteral_21260/*"mstQuestPhaseDetailAdd"*/);
    sub_B775C4(&StringLiteral_21221/*"mstHeelPortrait"*/);
    sub_B775C4(&StringLiteral_23527/*"userPresentHistory"*/);
    sub_B775C4(&StringLiteral_21398/*"mstWarBoardRatingBase"*/);
    sub_B775C4(&StringLiteral_21212/*"mstGachaImage"*/);
    sub_B775C4(&StringLiteral_21104/*"mstEquipImage"*/);
    sub_B775C4(&StringLiteral_23504/*"userEventRaid"*/);
    sub_B775C4(&StringLiteral_21317/*"mstSvtCollection"*/);
    sub_B775C4(&StringLiteral_19295/*"friendshipQuestDialogInfo"*/);
    sub_B775C4(&StringLiteral_21245/*"mstNews"*/);
    sub_B775C4(&StringLiteral_21204/*"mstGacha"*/);
    sub_B775C4(&StringLiteral_21293/*"mstSkillGroup"*/);
    sub_B775C4(&StringLiteral_21220/*"mstGuide"*/);
    sub_B775C4(&StringLiteral_21067/*"mstClassBoardLock"*/);
    sub_B775C4(&StringLiteral_21162/*"mstEventPointUpper"*/);
    sub_B775C4(&StringLiteral_21047/*"mstBlankEarthSpot"*/);
    sub_B775C4(&StringLiteral_21359/*"mstTerminalOverwrite"*/);
    sub_B775C4(&StringLiteral_21105/*"mstEquipSkill"*/);
    sub_B775C4(&StringLiteral_21194/*"mstEventUiValue"*/);
    sub_B775C4(&StringLiteral_23480/*"userContinue"*/);
    sub_B775C4(&StringLiteral_21250/*"mstQuestAdd"*/);
    sub_B775C4(&StringLiteral_21066/*"mstClassBoardLine"*/);
    sub_B775C4(&StringLiteral_23420/*"updateProfileDialogInfo"*/);
    sub_B775C4(&StringLiteral_21370/*"mstVoice"*/);
    sub_B775C4(&StringLiteral_23499/*"userEventMissionConditionDetail"*/);
    sub_B775C4(&StringLiteral_21031/*"mstAssetbundleKey"*/);
    sub_B775C4(&StringLiteral_21153/*"mstEventPanelMap"*/);
    sub_B775C4(&StringLiteral_23524/*"userLogin"*/);
    sub_B775C4(&StringLiteral_21227/*"mstLoginQuest"*/);
    sub_B775C4(&StringLiteral_21247/*"mstPartialMaintenance"*/);
    sub_B775C4(&StringLiteral_23506/*"userEventSpot"*/);
    sub_B775C4(&StringLiteral_21173/*"mstEventReward"*/);
    sub_B775C4(&StringLiteral_21126/*"mstEventDataLostBattleReset"*/);
    sub_B775C4(&StringLiteral_21033/*"mstAttri"*/);
    sub_B775C4(&StringLiteral_21407/*"mstWarBoardStageDetail"*/);
    sub_B775C4(&StringLiteral_23502/*"userEventQuestCooltime"*/);
    sub_B775C4(&StringLiteral_21271/*"mstQuestScriptBranchMaterial"*/);
    sub_B775C4(&StringLiteral_21135/*"mstEventFatigueRecovery"*/);
    sub_B775C4(&StringLiteral_21385/*"mstWarBoardAi"*/);
    sub_B775C4(&StringLiteral_21364/*"mstTreasureBoxTalk"*/);
    sub_B775C4(&StringLiteral_21388/*"mstWarBoardEvent"*/);
    sub_B775C4(&StringLiteral_21374/*"mstVoicePlayCond"*/);
    sub_B775C4(&StringLiteral_21209/*"mstGachaDetail"*/);
    sub_B775C4(&StringLiteral_21184/*"mstEventSuperBoss"*/);
    sub_B775C4(&StringLiteral_21291/*"mstSkillAdd"*/);
    byte_438E0E2 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B77694(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v1,
    (const MethodInfo_2F9F080 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_B7769C(v2, v3);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    0,
    0LL,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    1,
    (System_String_o *)StringLiteral_21308/*"mstSvt"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    2,
    (System_String_o *)StringLiteral_21319/*"mstSvtComment"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    3,
    (System_String_o *)StringLiteral_21342/*"mstSvtProfile"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    4,
    (System_String_o *)StringLiteral_21377/*"mstWar"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    5,
    (System_String_o *)StringLiteral_16956/*"battle"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    6,
    (System_String_o *)StringLiteral_21365/*"mstTreasureDevice"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    7,
    (System_String_o *)StringLiteral_21330/*"mstSvtLimit"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    8,
    (System_String_o *)StringLiteral_21351/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    9,
    (System_String_o *)StringLiteral_21062/*"mstClass"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    10,
    (System_String_o *)StringLiteral_21345/*"mstSvtScript"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    11,
    (System_String_o *)StringLiteral_21313/*"mstSvtCard"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    12,
    (System_String_o *)StringLiteral_21348/*"mstSvtSkill"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    13,
    (System_String_o *)StringLiteral_21339/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    14,
    (System_String_o *)StringLiteral_23539/*"userSvt"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    15,
    (System_String_o *)StringLiteral_23550/*"userSvtStorage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    16,
    (System_String_o *)StringLiteral_21303/*"mstStage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    17,
    (System_String_o *)StringLiteral_21328/*"mstSvtGroup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    18,
    (System_String_o *)StringLiteral_21047/*"mstBlankEarthSpot"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    19,
    (System_String_o *)StringLiteral_21048/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    20,
    (System_String_o *)StringLiteral_21297/*"mstSpot"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    21,
    (System_String_o *)StringLiteral_21299/*"mstSpotImage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    22,
    (System_String_o *)StringLiteral_21302/*"mstSpotRoad"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    23,
    (System_String_o *)StringLiteral_21231/*"mstMapGimmick"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    24,
    (System_String_o *)StringLiteral_21217/*"mstGift"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    25,
    (System_String_o *)StringLiteral_21218/*"mstGiftAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    26,
    (System_String_o *)StringLiteral_21307/*"mstSubEquip"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    27,
    (System_String_o *)StringLiteral_23468/*"user"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    28,
    (System_String_o *)StringLiteral_23518/*"userGame"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    29,
    (System_String_o *)StringLiteral_23482/*"userDeck"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    30,
    (System_String_o *)StringLiteral_23543/*"userSvtCollection"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    31,
    (System_String_o *)StringLiteral_21198/*"mstFriendship"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    32,
    (System_String_o *)StringLiteral_21204/*"mstGacha"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    33,
    (System_String_o *)StringLiteral_21212/*"mstGachaImage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    34,
    (System_String_o *)StringLiteral_23514/*"userGacha"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    35,
    (System_String_o *)StringLiteral_23523/*"userItem"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    36,
    (System_String_o *)StringLiteral_21225/*"mstItem"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    37,
    (System_String_o *)StringLiteral_21216/*"mstGachaTicket"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    38,
    (System_String_o *)StringLiteral_21025/*"mstAccessary"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    39,
    (System_String_o *)StringLiteral_23471/*"userAccessary"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    40,
    (System_String_o *)StringLiteral_23537/*"userSubEquip"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    41,
    (System_String_o *)StringLiteral_23097/*"tblUserGame"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    42,
    (System_String_o *)StringLiteral_21284/*"mstShop"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    43,
    (System_String_o *)StringLiteral_21306/*"mstStoneShop"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    44,
    (System_String_o *)StringLiteral_21037/*"mstBankShop"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    45,
    (System_String_o *)StringLiteral_21289/*"mstShopScript"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    46,
    (System_String_o *)StringLiteral_21101/*"mstEquip"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    47,
    (System_String_o *)StringLiteral_21103/*"mstEquipExp"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    48,
    (System_String_o *)StringLiteral_21105/*"mstEquipSkill"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    49,
    (System_String_o *)StringLiteral_23486/*"userEquip"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    50,
    (System_String_o *)StringLiteral_23511/*"userFormation"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    51,
    (System_String_o *)StringLiteral_21290/*"mstSkill"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    52,
    (System_String_o *)StringLiteral_21296/*"mstSkillLv"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    53,
    (System_String_o *)StringLiteral_21292/*"mstSkillDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    54,
    (System_String_o *)StringLiteral_21199/*"mstFunc"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    55,
    (System_String_o *)StringLiteral_21057/*"mstBuff"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    56,
    (System_String_o *)StringLiteral_21213/*"mstGachaRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    57,
    (System_String_o *)StringLiteral_23530/*"userQuest"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    58,
    (System_String_o *)StringLiteral_23531/*"userQuestInfo"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    59,
    (System_String_o *)StringLiteral_23532/*"userQuestRecord"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    60,
    (System_String_o *)StringLiteral_21369/*"mstUserExp"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    61,
    (System_String_o *)StringLiteral_21245/*"mstNews"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    62,
    (System_String_o *)StringLiteral_21358/*"mstTelop"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    63,
    (System_String_o *)StringLiteral_21766/*"otherUserGame"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    64,
    (System_String_o *)StringLiteral_23096/*"tblFriend"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    65,
    (System_String_o *)StringLiteral_23526/*"userPresentBox"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    66,
    (System_String_o *)StringLiteral_21106/*"mstEvent"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    67,
    (System_String_o *)StringLiteral_21249/*"mstQuest"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    68,
    (System_String_o *)StringLiteral_21250/*"mstQuestAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    69,
    (System_String_o *)StringLiteral_21265/*"mstQuestRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    70,
    (System_String_o *)StringLiteral_21258/*"mstQuestPhase"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    71,
    (System_String_o *)StringLiteral_21259/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    72,
    (System_String_o *)StringLiteral_21255/*"mstQuestGroup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    73,
    (System_String_o *)StringLiteral_21264/*"mstQuestRandomGroup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    74,
    (System_String_o *)StringLiteral_21253/*"mstQuestConsumeItem"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    75,
    (System_String_o *)StringLiteral_21257/*"mstQuestMessage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    76,
    (System_String_o *)StringLiteral_23638/*"viewQuestInfo"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    77,
    (System_String_o *)StringLiteral_23636/*"viewEnemy"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    78,
    (System_String_o *)StringLiteral_23637/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    79,
    (System_String_o *)StringLiteral_21030/*"mstArea"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    80,
    (System_String_o *)StringLiteral_21044/*"mstBgm"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    81,
    (System_String_o *)StringLiteral_21165/*"mstEventQuest"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    82,
    (System_String_o *)StringLiteral_21118/*"mstEventCampaign"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    83,
    (System_String_o *)StringLiteral_21079/*"mstCombineQp"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    84,
    (System_String_o *)StringLiteral_21078/*"mstCombineMaterial"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    85,
    (System_String_o *)StringLiteral_21120/*"mstEventCombine"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    86,
    (System_String_o *)StringLiteral_21324/*"mstSvtExp"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    87,
    (System_String_o *)StringLiteral_21081/*"mstCombineSkill"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    88,
    (System_String_o *)StringLiteral_21082/*"mstCombineTd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    89,
    (System_String_o *)StringLiteral_21222/*"mstIllustrator"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    90,
    (System_String_o *)StringLiteral_21096/*"mstCv"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    91,
    (System_String_o *)StringLiteral_21367/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    92,
    (System_String_o *)StringLiteral_21366/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    93,
    (System_String_o *)StringLiteral_23510/*"userFollower"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    94,
    (System_String_o *)StringLiteral_21594/*"npcFollower"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    95,
    (System_String_o *)StringLiteral_21599/*"npcSvtFollower"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    96,
    (System_String_o *)StringLiteral_23488/*"userEvent"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    97,
    (System_String_o *)StringLiteral_23529/*"userProfile"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    98,
    (System_String_o *)StringLiteral_23534/*"userShop"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    99,
    (System_String_o *)StringLiteral_23480/*"userContinue"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    100,
    (System_String_o *)StringLiteral_21093/*"mstConstant"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    101,
    (System_String_o *)StringLiteral_21094/*"mstConstantLong"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    102,
    (System_String_o *)StringLiteral_21095/*"mstConstantStr"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    103,
    (System_String_o *)StringLiteral_21088/*"mstCommandSpell"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    104,
    (System_String_o *)StringLiteral_21027/*"mstAi"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    105,
    (System_String_o *)StringLiteral_21028/*"mstAiAct"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    106,
    (System_String_o *)StringLiteral_21355/*"mstSvtVoice"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    107,
    (System_String_o *)StringLiteral_21034/*"mstAttriRelation"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    108,
    (System_String_o *)StringLiteral_21069/*"mstClassRelation"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    109,
    (System_String_o *)StringLiteral_21098/*"mstEffect"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    110,
    (System_String_o *)StringLiteral_21104/*"mstEquipImage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    111,
    (System_String_o *)StringLiteral_21075/*"mstCombineLimit"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    112,
    (System_String_o *)StringLiteral_21061/*"mstCard"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    113,
    (System_String_o *)StringLiteral_21080/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    114,
    (System_String_o *)StringLiteral_21331/*"mstSvtLimitAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    115,
    (System_String_o *)StringLiteral_21344/*"mstSvtRarity"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    116,
    (System_String_o *)StringLiteral_21283/*"mstSetItem"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    117,
    (System_String_o *)StringLiteral_21276/*"mstRecover"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    118,
    (System_String_o *)StringLiteral_21038/*"mstBanner"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    119,
    (System_String_o *)StringLiteral_21288/*"mstShopRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    120,
    (System_String_o *)StringLiteral_21173/*"mstEventReward"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    121,
    (System_String_o *)StringLiteral_21127/*"mstEventDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    122,
    (System_String_o *)StringLiteral_21185/*"mstEventSvt"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    123,
    (System_String_o *)StringLiteral_21053/*"mstBoxGacha"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    124,
    (System_String_o *)StringLiteral_21054/*"mstBoxGachaBase"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    125,
    (System_String_o *)StringLiteral_21056/*"mstBoxGachaTalk"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    126,
    (System_String_o *)StringLiteral_23474/*"userBoxGacha"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    127,
    (System_String_o *)StringLiteral_17233/*"boxGachaHistory"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    128,
    (System_String_o *)StringLiteral_21040/*"mstBattleBg"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    129,
    (System_String_o *)StringLiteral_21360/*"mstTips"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    130,
    (System_String_o *)StringLiteral_23524/*"userLogin"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    131,
    (System_String_o *)StringLiteral_21370/*"mstVoice"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    132,
    (System_String_o *)StringLiteral_21175/*"mstEventRewardExtra"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    133,
    (System_String_o *)StringLiteral_21145/*"mstEventMission"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    134,
    (System_String_o *)StringLiteral_21149/*"mstEventMissionCondition"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    135,
    (System_String_o *)StringLiteral_21150/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    136,
    (System_String_o *)StringLiteral_21146/*"mstEventMissionAction"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    137,
    (System_String_o *)StringLiteral_21147/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    140,
    (System_String_o *)StringLiteral_21092/*"mstCompleteMission"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    138,
    (System_String_o *)StringLiteral_21148/*"mstEventMissionAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    139,
    (System_String_o *)StringLiteral_21179/*"mstEventRewardSet"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    141,
    (System_String_o *)StringLiteral_23498/*"userEventMission"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    142,
    (System_String_o *)StringLiteral_23499/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    143,
    (System_String_o *)StringLiteral_21055/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    144,
    (System_String_o *)StringLiteral_21071/*"mstClosedMessage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    145,
    (System_String_o *)StringLiteral_23549/*"userSvtLeader"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    146,
    (System_String_o *)StringLiteral_21202/*"mstFuncGroup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    147,
    (System_String_o *)StringLiteral_21169/*"mstEventRaid"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    148,
    (System_String_o *)StringLiteral_23212/*"totalEventRaid"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    149,
    (System_String_o *)StringLiteral_23504/*"userEventRaid"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    150,
    (System_String_o *)StringLiteral_21157/*"mstEventPoint"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    151,
    (System_String_o *)StringLiteral_21160/*"mstEventPointGroup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    152,
    (System_String_o *)StringLiteral_23210/*"totalEventPoint"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    153,
    (System_String_o *)StringLiteral_23501/*"userEventPoint"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    154,
    (System_String_o *)StringLiteral_23527/*"userPresentHistory"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    155,
    (System_String_o *)StringLiteral_21240/*"mstMasterMission"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    156,
    (System_String_o *)StringLiteral_21323/*"mstSvtExceed"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    157,
    (System_String_o *)StringLiteral_21247/*"mstPartialMaintenance"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    158,
    (System_String_o *)StringLiteral_21220/*"mstGuide"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    159,
    (System_String_o *)StringLiteral_21241/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    160,
    (System_String_o *)StringLiteral_21211/*"mstGachaGroup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    161,
    (System_String_o *)StringLiteral_21267/*"mstQuestReset"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    162,
    (System_String_o *)StringLiteral_21378/*"mstWarAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    163,
    (System_String_o *)StringLiteral_21141/*"mstEventItemDisplay"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    164,
    (System_String_o *)StringLiteral_21142/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    165,
    (System_String_o *)StringLiteral_21143/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    166,
    (System_String_o *)StringLiteral_21190/*"mstEventTutorial"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    167,
    (System_String_o *)StringLiteral_21191/*"mstEventTutorialCond"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    168,
    (System_String_o *)StringLiteral_21376/*"mstVoiceRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    169,
    (System_String_o *)StringLiteral_21184/*"mstEventSuperBoss"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    170,
    (System_String_o *)StringLiteral_23507/*"userEventSuperBoss"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    171,
    (System_String_o *)StringLiteral_21270/*"mstQuestScript"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    172,
    (System_String_o *)StringLiteral_21274/*"mstQuestScriptRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    173,
    (System_String_o *)StringLiteral_21243/*"mstMaterialFolder"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    174,
    (System_String_o *)StringLiteral_21277/*"mstRestriction"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    175,
    (System_String_o *)StringLiteral_21268/*"mstQuestRestriction"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    176,
    (System_String_o *)StringLiteral_21357/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    177,
    (System_String_o *)StringLiteral_21286/*"mstShopDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    178,
    (System_String_o *)StringLiteral_21346/*"mstSvtScriptAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    179,
    (System_String_o *)StringLiteral_21072/*"mstCombine"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    180,
    (System_String_o *)StringLiteral_21029/*"mstAiField"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    181,
    (System_String_o *)StringLiteral_21320/*"mstSvtCommentAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    182,
    (System_String_o *)StringLiteral_21136/*"mstEventFilter"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    183,
    (System_String_o *)StringLiteral_23538/*"userSupportDeck"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    184,
    (System_String_o *)StringLiteral_21177/*"mstEventRewardScene"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    185,
    (System_String_o *)StringLiteral_21195/*"mstEventVoicePlay"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    186,
    (System_String_o *)StringLiteral_21215/*"mstGachaSub"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    187,
    (System_String_o *)StringLiteral_21209/*"mstGachaDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    188,
    (System_String_o *)StringLiteral_21207/*"mstGachaBonusSelect"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    189,
    (System_String_o *)StringLiteral_21208/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    190,
    (System_String_o *)StringLiteral_21315/*"mstSvtChange"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    191,
    (System_String_o *)StringLiteral_21372/*"mstVoiceCond"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    192,
    (System_String_o *)StringLiteral_21045/*"mstBgmRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    193,
    (System_String_o *)StringLiteral_21244/*"mstMyroomAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    194,
    (System_String_o *)StringLiteral_21285/*"mstShopAction"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    195,
    (System_String_o *)StringLiteral_21178/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    196,
    (System_String_o *)StringLiteral_21228/*"mstMap"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    197,
    (System_String_o *)StringLiteral_21230/*"mstMapCond"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    198,
    (System_String_o *)StringLiteral_21229/*"mstMapButton"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    199,
    (System_String_o *)StringLiteral_21039/*"mstBannerAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    200,
    (System_String_o *)StringLiteral_21252/*"mstQuestBehavior"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    201,
    (System_String_o *)StringLiteral_21107/*"mstEventAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    202,
    (System_String_o *)StringLiteral_21361/*"mstTotalLogin"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    203,
    (System_String_o *)StringLiteral_21325/*"mstSvtFilter"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    204,
    (System_String_o *)StringLiteral_21074/*"mstCombineCostume"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    205,
    (System_String_o *)StringLiteral_21321/*"mstSvtCostume"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    206,
    (System_String_o *)StringLiteral_21322/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    207,
    (System_String_o *)StringLiteral_23513/*"userFriendRequestHistory"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    208,
    (System_String_o *)StringLiteral_23473/*"userBlacklist"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    209,
    (System_String_o *)StringLiteral_21226/*"mstItemSelect"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    210,
    (System_String_o *)StringLiteral_21167/*"mstEventRace"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    211,
    (System_String_o *)StringLiteral_21168/*"mstEventRaceResult"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    212,
    (System_String_o *)StringLiteral_21263/*"mstQuestRacePoint"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    213,
    (System_String_o *)StringLiteral_23503/*"userEventRace"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    214,
    (System_String_o *)StringLiteral_21180/*"mstEventScript"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    215,
    (System_String_o *)StringLiteral_21181/*"mstEventScriptRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    216,
    (System_String_o *)StringLiteral_21301/*"mstSpotPath"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    217,
    (System_String_o *)StringLiteral_21298/*"mstSpotAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    218,
    (System_String_o *)StringLiteral_23211/*"totalEventRace"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    219,
    (System_String_o *)StringLiteral_21161/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    220,
    (System_String_o *)StringLiteral_21375/*"mstVoicePlayGroup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    221,
    (System_String_o *)StringLiteral_21374/*"mstVoicePlayCond"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    222,
    (System_String_o *)StringLiteral_21214/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    223,
    (System_String_o *)StringLiteral_21326/*"mstSvtFlag"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    224,
    (System_String_o *)StringLiteral_21327/*"mstSvtFlagRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    225,
    (System_String_o *)StringLiteral_21144/*"mstEventLocationCampaign"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    226,
    (System_String_o *)StringLiteral_21060/*"mstCampaignInfo"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    227,
    (System_String_o *)StringLiteral_21097/*"mstDialogMessage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    228,
    (System_String_o *)StringLiteral_21329/*"mstSvtIndividuality"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    229,
    (System_String_o *)StringLiteral_21050/*"mstBoardMessage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    230,
    (System_String_o *)StringLiteral_21051/*"mstBoardMessageRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    231,
    (System_String_o *)StringLiteral_21186/*"mstEventSvtFatigue"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    232,
    (System_String_o *)StringLiteral_23493/*"userEventDeck"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    233,
    (System_String_o *)StringLiteral_21188/*"mstEventTower"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    234,
    (System_String_o *)StringLiteral_21189/*"mstEventTowerReward"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    235,
    (System_String_o *)StringLiteral_21116/*"mstEventBulletinBoard"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    236,
    (System_String_o *)StringLiteral_21117/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    237,
    (System_String_o *)StringLiteral_21134/*"mstEventFactory"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    238,
    (System_String_o *)StringLiteral_21287/*"mstShopGroup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    239,
    (System_String_o *)StringLiteral_21035/*"mstAuraEffect"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    240,
    (System_String_o *)StringLiteral_21036/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    241,
    (System_String_o *)StringLiteral_23500/*"userEventMissionFix"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    242,
    (System_String_o *)StringLiteral_21578/*"notEndEventMissionFix"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    243,
    (System_String_o *)StringLiteral_21099/*"mstEnemyMaster"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    244,
    (System_String_o *)StringLiteral_21100/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    245,
    (System_String_o *)StringLiteral_21349/*"mstSvtSkillRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    246,
    (System_String_o *)StringLiteral_21340/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    247,
    (System_String_o *)StringLiteral_21354/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    248,
    (System_String_o *)StringLiteral_21237/*"mstMapGimmickRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    249,
    (System_String_o *)StringLiteral_21084/*"mstCommandCode"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    250,
    (System_String_o *)StringLiteral_21318/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    251,
    (System_String_o *)StringLiteral_23477/*"userCommandCode"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    252,
    (System_String_o *)StringLiteral_23478/*"userCommandCodeCollection"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    253,
    (System_String_o *)StringLiteral_23545/*"userSvtCommandCode"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    254,
    (System_String_o *)StringLiteral_21086/*"mstCommandCodeSkill"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    255,
    (System_String_o *)StringLiteral_21087/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    256,
    (System_String_o *)StringLiteral_21085/*"mstCommandCodeComment"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    257,
    (System_String_o *)StringLiteral_21182/*"mstEventStatus"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    258,
    (System_String_o *)StringLiteral_21183/*"mstEventStatusQuest"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    259,
    (System_String_o *)StringLiteral_21091/*"mstCommonRestriction"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    260,
    (System_String_o *)StringLiteral_21159/*"mstEventPointBuff"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    261,
    (System_String_o *)StringLiteral_23509/*"userFollow"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    262,
    (System_String_o *)StringLiteral_21176/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    263,
    (System_String_o *)StringLiteral_21598/*"npcSvtEquip"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    264,
    (System_String_o *)StringLiteral_21119/*"mstEventCampaignRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    265,
    (System_String_o *)StringLiteral_21335/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    266,
    (System_String_o *)StringLiteral_21131/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    267,
    (System_String_o *)StringLiteral_21158/*"mstEventPointActivity"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    268,
    (System_String_o *)StringLiteral_21200/*"mstFuncCategory"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    269,
    (System_String_o *)StringLiteral_21262/*"mstQuestPickup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    270,
    (System_String_o *)StringLiteral_21192/*"mstEventUi"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    271,
    (System_String_o *)StringLiteral_21193/*"mstEventUiRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    272,
    (System_String_o *)StringLiteral_21194/*"mstEventUiValue"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    273,
    (System_String_o *)StringLiteral_21123/*"mstEventConquestReward"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    274,
    (System_String_o *)StringLiteral_21595/*"npcFollowerRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    275,
    (System_String_o *)StringLiteral_21111/*"mstEventBonusFilter"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    276,
    (System_String_o *)StringLiteral_21112/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    277,
    (System_String_o *)StringLiteral_21113/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    278,
    (System_String_o *)StringLiteral_23517/*"userGachaExtraCount"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    279,
    (System_String_o *)StringLiteral_21083/*"mstCommandCardRankParam"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    280,
    (System_String_o *)StringLiteral_23544/*"userSvtCommandCard"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    281,
    (System_String_o *)StringLiteral_21248/*"mstPrivilege"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    282,
    (System_String_o *)StringLiteral_23528/*"userPrivilege"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    283,
    (System_String_o *)StringLiteral_21254/*"mstQuestDateRange"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    284,
    (System_String_o *)StringLiteral_21162/*"mstEventPointUpper"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    285,
    (System_String_o *)StringLiteral_21163/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    286,
    (System_String_o *)StringLiteral_23533/*"userQuestRoute"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    287,
    (System_String_o *)StringLiteral_21114/*"mstEventBossStatusUi"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    288,
    (System_String_o *)StringLiteral_21090/*"mstCommonRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    289,
    (System_String_o *)StringLiteral_21275/*"mstQuestSpotRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    290,
    (System_String_o *)StringLiteral_21373/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    291,
    (System_String_o *)StringLiteral_21070/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    292,
    (System_String_o *)StringLiteral_21140/*"mstEventGroup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    293,
    (System_String_o *)StringLiteral_21031/*"mstAssetbundleKey"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    294,
    (System_String_o *)StringLiteral_23207/*"totalBoxGacha"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    295,
    (System_String_o *)StringLiteral_21353/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    296,
    (System_String_o *)StringLiteral_18846/*"eventSvtFatigue"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    297,
    (System_String_o *)StringLiteral_21174/*"mstEventRewardBg"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    298,
    (System_String_o *)StringLiteral_21135/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    299,
    (System_String_o *)StringLiteral_18835/*"eventBoostItemUsed"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    300,
    (System_String_o *)StringLiteral_21305/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    301,
    (System_String_o *)StringLiteral_21260/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    302,
    (System_String_o *)StringLiteral_21371/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    303,
    (System_String_o *)StringLiteral_21304/*"mstStageRemap"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    304,
    (System_String_o *)StringLiteral_17917/*"combineExp"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    305,
    (System_String_o *)StringLiteral_21108/*"mstEventBoardGameCell"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    306,
    (System_String_o *)StringLiteral_21109/*"mstEventBoardGameToken"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    307,
    (System_String_o *)StringLiteral_21110/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    308,
    (System_String_o *)StringLiteral_23490/*"userEventBoardGameToken"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    309,
    (System_String_o *)StringLiteral_21310/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    310,
    (System_String_o *)StringLiteral_21246/*"mstOpeningMovie"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    311,
    (System_String_o *)StringLiteral_21333/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    312,
    (System_String_o *)StringLiteral_21920/*"pickupUserFollower"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    313,
    (System_String_o *)StringLiteral_21317/*"mstSvtCollection"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    314,
    (System_String_o *)StringLiteral_21206/*"mstGachaBehavior"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    315,
    (System_String_o *)StringLiteral_21166/*"mstEventQuestCooltime"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    316,
    (System_String_o *)StringLiteral_23502/*"userEventQuestCooltime"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    317,
    (System_String_o *)StringLiteral_21052/*"mstBoost"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    318,
    (System_String_o *)StringLiteral_21379/*"mstWarBoard"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    319,
    (System_String_o *)StringLiteral_21403/*"mstWarBoardSquare"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    320,
    (System_String_o *)StringLiteral_21402/*"mstWarBoardRoad"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    321,
    (System_String_o *)StringLiteral_21405/*"mstWarBoardStage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    322,
    (System_String_o *)StringLiteral_21380/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    323,
    (System_String_o *)StringLiteral_21382/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    324,
    (System_String_o *)StringLiteral_21413/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    325,
    (System_String_o *)StringLiteral_21408/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    326,
    (System_String_o *)StringLiteral_21409/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    327,
    (System_String_o *)StringLiteral_21412/*"mstWarBoardStageWall"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    328,
    (System_String_o *)StringLiteral_21385/*"mstWarBoardAi"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    329,
    (System_String_o *)StringLiteral_21398/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    330,
    (System_String_o *)StringLiteral_21399/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    331,
    (System_String_o *)StringLiteral_21392/*"mstWarBoardItem"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    332,
    (System_String_o *)StringLiteral_21414/*"mstWarBoardTreasure"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    333,
    (System_String_o *)StringLiteral_21397/*"mstWarBoardQuest"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    334,
    (System_String_o *)StringLiteral_23698/*"warBoardData"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    335,
    (System_String_o *)StringLiteral_21391/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    336,
    (System_String_o *)StringLiteral_21383/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    337,
    (System_String_o *)StringLiteral_21381/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    338,
    (System_String_o *)StringLiteral_21401/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    339,
    (System_String_o *)StringLiteral_21411/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    340,
    (System_String_o *)StringLiteral_21153/*"mstEventPanelMap"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    341,
    (System_String_o *)StringLiteral_21154/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    342,
    (System_String_o *)StringLiteral_21156/*"mstEventPanelSpot"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    343,
    (System_String_o *)StringLiteral_21155/*"mstEventPanelScan"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    344,
    (System_String_o *)StringLiteral_21128/*"mstEventDigging"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    345,
    (System_String_o *)StringLiteral_21130/*"mstEventDiggingReward"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    346,
    (System_String_o *)StringLiteral_21129/*"mstEventDiggingBlock"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    347,
    (System_String_o *)StringLiteral_23494/*"userEventDigging"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    348,
    (System_String_o *)StringLiteral_21089/*"mstCommonConsume"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    349,
    (System_String_o *)StringLiteral_23497/*"userEventMap"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    350,
    (System_String_o *)StringLiteral_23506/*"userEventSpot"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    351,
    (System_String_o *)StringLiteral_21415/*"mstWarGroup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    352,
    (System_String_o *)StringLiteral_21332/*"mstSvtLimitImage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    353,
    (System_String_o *)StringLiteral_19295/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    354,
    (System_String_o *)StringLiteral_21269/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    355,
    (System_String_o *)StringLiteral_21032/*"mstAssist"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    356,
    (System_String_o *)StringLiteral_21387/*"mstWarBoardEffect"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    357,
    (System_String_o *)StringLiteral_21395/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    358,
    (System_String_o *)StringLiteral_17020/*"beforeBirthDay"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    359,
    (System_String_o *)StringLiteral_21227/*"mstLoginQuest"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    360,
    (System_String_o *)StringLiteral_21121/*"mstEventCombineCostume"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    361,
    (System_String_o *)StringLiteral_21410/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    362,
    (System_String_o *)StringLiteral_21352/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    363,
    (System_String_o *)StringLiteral_21291/*"mstSkillAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    364,
    (System_String_o *)StringLiteral_21334/*"mstSvtLvDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    365,
    (System_String_o *)StringLiteral_21205/*"mstGachaAppend"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    366,
    (System_String_o *)StringLiteral_23516/*"userGachaDrawLog"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    367,
    (System_String_o *)StringLiteral_21311/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    368,
    (System_String_o *)StringLiteral_23540/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    369,
    (System_String_o *)StringLiteral_23541/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    370,
    (System_String_o *)StringLiteral_21312/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    371,
    (System_String_o *)StringLiteral_21073/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    372,
    (System_String_o *)StringLiteral_21316/*"mstSvtCoin"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    373,
    (System_String_o *)StringLiteral_23542/*"userSvtCoin"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    374,
    (System_String_o *)StringLiteral_21309/*"mstSvtAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    375,
    (System_String_o *)StringLiteral_21362/*"mstTreasureBox"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    376,
    (System_String_o *)StringLiteral_21363/*"mstTreasureBoxGift"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    377,
    (System_String_o *)StringLiteral_21364/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    378,
    (System_String_o *)StringLiteral_23495/*"userEventExpedition"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    379,
    (System_String_o *)StringLiteral_21132/*"mstEventExpedition"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    380,
    (System_String_o *)StringLiteral_21133/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    381,
    (System_String_o *)StringLiteral_21171/*"mstEventRecipe"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    382,
    (System_String_o *)StringLiteral_21172/*"mstEventRecipeGift"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    383,
    (System_String_o *)StringLiteral_23496/*"userEventFortification"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    384,
    (System_String_o *)StringLiteral_21137/*"mstEventFortification"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    385,
    (System_String_o *)StringLiteral_21138/*"mstEventFortificationDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    386,
    (System_String_o *)StringLiteral_21139/*"mstEventFortificationSvt"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    387,
    (System_String_o *)StringLiteral_23551/*"userSvtVoicePlayed"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    388,
    (System_String_o *)StringLiteral_23420/*"updateProfileDialogInfo"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    389,
    (System_String_o *)StringLiteral_21336/*"mstSvtMaterialTd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    390,
    (System_String_o *)StringLiteral_21041/*"mstBattleMasterImage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    391,
    (System_String_o *)StringLiteral_23512/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    392,
    (System_String_o *)StringLiteral_23505/*"userEventRandomMission"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    393,
    (System_String_o *)StringLiteral_21164/*"mstEventProgressValue"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    394,
    (System_String_o *)StringLiteral_21337/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    395,
    (System_String_o *)StringLiteral_21170/*"mstEventRandomMission"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    396,
    (System_String_o *)StringLiteral_23515/*"userGachaDrawHistory"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    397,
    (System_String_o *)StringLiteral_23476/*"userCoinRoom"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    398,
    (System_String_o *)StringLiteral_21115/*"mstEventBuddyPoint"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    399,
    (System_String_o *)StringLiteral_21187/*"mstEventSvtPointRank"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    400,
    (System_String_o *)StringLiteral_23508/*"userEventSvtPoint"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    401,
    (System_String_o *)StringLiteral_21197/*"mstFieldMotion"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    402,
    (System_String_o *)StringLiteral_23485/*"userDeleteReservation"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    403,
    (System_String_o *)StringLiteral_21347/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    404,
    (System_String_o *)StringLiteral_21102/*"mstEquipAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    405,
    (System_String_o *)StringLiteral_21266/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    406,
    (System_String_o *)StringLiteral_23489/*"userEventAlloutBattle"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    407,
    (System_String_o *)StringLiteral_21272/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    408,
    (System_String_o *)StringLiteral_21042/*"mstBattleMessage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    409,
    (System_String_o *)StringLiteral_21043/*"mstBattleMessageGroup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    410,
    (System_String_o *)StringLiteral_23525/*"userNpcSvtRecord"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    411,
    (System_String_o *)StringLiteral_21059/*"mstBuffTypeDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    412,
    (System_String_o *)StringLiteral_21393/*"mstWarBoardMessage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    413,
    (System_String_o *)StringLiteral_21396/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    414,
    (System_String_o *)StringLiteral_21394/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    415,
    (System_String_o *)StringLiteral_21417/*"mstWarQuestSelection"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    416,
    (System_String_o *)StringLiteral_21407/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    417,
    (System_String_o *)StringLiteral_21273/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    418,
    (System_String_o *)StringLiteral_21271/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    419,
    (System_String_o *)StringLiteral_21026/*"mstAdCheckPoint"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    420,
    (System_String_o *)StringLiteral_21219/*"mstGiftDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    421,
    (System_String_o *)StringLiteral_21076/*"mstCombineLimitGift"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    422,
    (System_String_o *)StringLiteral_21124/*"mstEventCooltimeReward"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    423,
    (System_String_o *)StringLiteral_23491/*"userEventCooltimeReward"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    424,
    (System_String_o *)StringLiteral_21064/*"mstClassBoardClass"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    425,
    (System_String_o *)StringLiteral_21063/*"mstClassBoardBase"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    426,
    (System_String_o *)StringLiteral_21066/*"mstClassBoardLine"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    427,
    (System_String_o *)StringLiteral_21067/*"mstClassBoardLock"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    428,
    (System_String_o *)StringLiteral_21068/*"mstClassBoardSquare"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    429,
    (System_String_o *)StringLiteral_21065/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    430,
    (System_String_o *)StringLiteral_23475/*"userClassBoardSquare"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    431,
    (System_String_o *)StringLiteral_21314/*"mstSvtCardAdd"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    432,
    (System_String_o *)StringLiteral_21238/*"mstMapLayer"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    433,
    (System_String_o *)StringLiteral_21300/*"mstSpotLayer"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    434,
    (System_String_o *)StringLiteral_21233/*"mstMapGimmickLayer"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    435,
    (System_String_o *)StringLiteral_21125/*"mstEventDataLostBattle"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    436,
    (System_String_o *)StringLiteral_21126/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    437,
    (System_String_o *)StringLiteral_23492/*"userEventDataLost"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    438,
    (System_String_o *)StringLiteral_21256/*"mstQuestHint"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    439,
    (System_String_o *)StringLiteral_21203/*"mstFuncTypeDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    440,
    (System_String_o *)StringLiteral_21058/*"mstBuffConvert"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    441,
    (System_String_o *)StringLiteral_21293/*"mstSkillGroup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    442,
    (System_String_o *)StringLiteral_21294/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    443,
    (System_String_o *)StringLiteral_21295/*"mstSkillIndividuality"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    444,
    (System_String_o *)StringLiteral_21278/*"mstRestrictionBase"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    445,
    (System_String_o *)StringLiteral_21280/*"mstRestrictionSlot"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    446,
    (System_String_o *)StringLiteral_21281/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    447,
    (System_String_o *)StringLiteral_21279/*"mstRestrictionMessage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    448,
    (System_String_o *)StringLiteral_21282/*"mstRestrictionWhole"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    449,
    (System_String_o *)StringLiteral_21201/*"mstFuncDisp"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    450,
    (System_String_o *)StringLiteral_21122/*"mstEventCommandAssist"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    451,
    (System_String_o *)StringLiteral_21151/*"mstEventMissionGroup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    452,
    (System_String_o *)StringLiteral_21077/*"mstCombineLimitRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    453,
    (System_String_o *)StringLiteral_21368/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    454,
    (System_String_o *)StringLiteral_21221/*"mstHeelPortrait"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    455,
    (System_String_o *)StringLiteral_23520/*"userHeelPortrait"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    456,
    (System_String_o *)StringLiteral_21600/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    457,
    (System_String_o *)StringLiteral_21210/*"mstGachaExtraGift"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    458,
    (System_String_o *)StringLiteral_21152/*"mstEventMural"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    459,
    (System_String_o *)StringLiteral_23639/*"viewWaveEnemy"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    460,
    (System_String_o *)StringLiteral_21049/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    461,
    (System_String_o *)StringLiteral_21046/*"mstBlankEarthGimmick"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    462,
    (System_String_o *)StringLiteral_21359/*"mstTerminalOverwrite"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    463,
    (System_String_o *)StringLiteral_18996/*"exchangeSvt"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    464,
    (System_String_o *)StringLiteral_21386/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    465,
    (System_String_o *)StringLiteral_21388/*"mstWarBoardEvent"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    466,
    (System_String_o *)StringLiteral_21389/*"mstWarBoardEventScript"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    467,
    (System_String_o *)StringLiteral_21406/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    468,
    (System_String_o *)StringLiteral_21404/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    469,
    (System_String_o *)StringLiteral_21384/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    470,
    (System_String_o *)StringLiteral_21400/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    471,
    (System_String_o *)StringLiteral_21390/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    472,
    (System_String_o *)StringLiteral_21343/*"mstSvtProfilePush"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    473,
    (System_String_o *)StringLiteral_21235/*"mstMapGimmickPath"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    474,
    (System_String_o *)StringLiteral_21236/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    475,
    (System_String_o *)StringLiteral_21338/*"mstSvtOverwrite"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    476,
    (System_String_o *)StringLiteral_21224/*"mstIndividualityPolicy"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    477,
    (System_String_o *)StringLiteral_21223/*"mstIndividualityPersonality"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    478,
    (System_String_o *)StringLiteral_21033/*"mstAttri"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    479,
    (System_String_o *)StringLiteral_21356/*"mstSvtVoicePattern"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    480,
    (System_String_o *)StringLiteral_23519/*"userGameCommon"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    481,
    (System_String_o *)StringLiteral_21341/*"mstSvtPhoto"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    482,
    (System_String_o *)StringLiteral_21242/*"mstMasterPhoto"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    483,
    (System_String_o *)StringLiteral_21416/*"mstWarMessage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    484,
    (System_String_o *)StringLiteral_21251/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    485,
    (System_String_o *)StringLiteral_21196/*"mstExcludeMotion"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    486,
    (System_String_o *)StringLiteral_23522/*"userInterruptionQuest"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    487,
    (System_String_o *)StringLiteral_21350/*"mstSvtTransform"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    488,
    (System_String_o *)StringLiteral_21239/*"mstMapUpdateSchedule"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    489,
    (System_String_o *)StringLiteral_21261/*"mstQuestPhasePresent"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    490,
    (System_String_o *)StringLiteral_23472/*"userAccountLinkage"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  static_fields = (BattleServantConfConponent_o *)DataNameKind_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v5, v6, v7, v8, v9, v10);
}


void __fastcall DataNameKind___ctor(DataNameKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall DataNameKind__GetName(int32_t kind, const MethodInfo *method)
{
  DataNameKind_c *v3; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *nameList; // x0

  if ( (byte_438E0E1 & 1) == 0 )
  {
    sub_B775C4(&DataNameKind_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_438E0E1 = 1;
  }
  v3 = DataNameKind_TypeInfo;
  if ( (BYTE3(DataNameKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataNameKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
    v3 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_B7769C(0LL, method);
  return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           nameList,
           kind,
           (const MethodInfo_2F9FB70 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}