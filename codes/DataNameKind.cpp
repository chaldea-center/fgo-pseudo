void __fastcall DataNameKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5A142 & 1) == 0 )
  {
    sub_1B885B0(&DataNameKind_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_1B885B0(&StringLiteral_21716/*"mstEventTradeGoods"*/);
    sub_1B885B0(&StringLiteral_24422/*"userGameCommon"*/);
    sub_1B885B0(&StringLiteral_21676/*"mstEventMissionConditionDetail"*/);
    sub_1B885B0(&StringLiteral_21906/*"mstTreasureBoxGift"*/);
    sub_1B885B0(&StringLiteral_21610/*"mstCommandCodeComment"*/);
    sub_1B885B0(&StringLiteral_21672/*"mstEventMissionAction"*/);
    sub_1B885B0(&StringLiteral_24389/*"userEventAlloutBattle"*/);
    sub_1B885B0(&StringLiteral_21638/*"mstEventBonusFilterGroupInfo"*/);
    sub_1B885B0(&StringLiteral_24438/*"userRecommendFollower"*/);
    sub_1B885B0(&StringLiteral_21803/*"mstQuestReleaseOverwrite"*/);
    sub_1B885B0(&StringLiteral_21769/*"mstMapGimmickRelease"*/);
    sub_1B885B0(&StringLiteral_21739/*"mstGachaExtraGift"*/);
    sub_1B885B0(&StringLiteral_22168/*"npcSvtFollowerIndividuality"*/);
    sub_1B885B0(&StringLiteral_21640/*"mstEventBossStatusUi"*/);
    sub_1B885B0(&StringLiteral_24447/*"userSvtAppendPassiveSkillLv"*/);
    sub_1B885B0(&StringLiteral_21594/*"mstClassRelation"*/);
    sub_1B885B0(&StringLiteral_21550/*"mstAiAct"*/);
    sub_1B885B0(&StringLiteral_21852/*"mstSvtAnimationOverwrite"*/);
    sub_1B885B0(&StringLiteral_21805/*"mstQuestRestriction"*/);
    sub_1B885B0(&StringLiteral_21621/*"mstCv"*/);
    sub_1B885B0(&StringLiteral_24394/*"userEventDigging"*/);
    sub_1B885B0(&StringLiteral_23863/*"tblUserGame"*/);
    sub_1B885B0(&StringLiteral_21651/*"mstEventDataLostBattle"*/);
    sub_1B885B0(&StringLiteral_21641/*"mstEventBuddyPoint"*/);
    sub_1B885B0(&StringLiteral_21569/*"mstBgmRelease"*/);
    sub_1B885B0(&StringLiteral_21879/*"mstSvtMaterialTd"*/);
    sub_1B885B0(&StringLiteral_21615/*"mstCommonRelease"*/);
    sub_1B885B0(&StringLiteral_21727/*"mstFriendship"*/);
    sub_1B885B0(&StringLiteral_24375/*"userClassBoardSquare"*/);
    sub_1B885B0(&StringLiteral_21619/*"mstConstantLong"*/);
    sub_1B885B0(&StringLiteral_21593/*"mstClassBoardSquare"*/);
    sub_1B885B0(&StringLiteral_24451/*"userSvtCommandCode"*/);
    sub_1B885B0(&StringLiteral_21788/*"mstQuestBehavior"*/);
    sub_1B885B0(&StringLiteral_21757/*"mstItemDropEfficiency"*/);
    sub_1B885B0(&StringLiteral_21878/*"mstSvtMaterialFolder"*/);
    sub_1B885B0(&StringLiteral_21953/*"mstWarBoardStagePieceDetail"*/);
    sub_1B885B0(&StringLiteral_21717/*"mstEventTradePickup"*/);
    sub_1B885B0(&StringLiteral_21639/*"mstEventBonusFilterGroupMember"*/);
    sub_1B885B0(&StringLiteral_21792/*"mstQuestHint"*/);
    sub_1B885B0(&StringLiteral_21613/*"mstCommandSpell"*/);
    sub_1B885B0(&StringLiteral_21548/*"mstAdCheckPoint"*/);
    sub_1B885B0(&StringLiteral_21784/*"mstPrivilege"*/);
    sub_1B885B0(&StringLiteral_21576/*"mstBoardMessageRelease"*/);
    sub_1B885B0(&StringLiteral_21744/*"mstGachaRelease"*/);
    sub_1B885B0(&StringLiteral_24385/*"userDeleteReservation"*/);
    sub_1B885B0(&StringLiteral_21905/*"mstTreasureBox"*/);
    sub_1B885B0(&StringLiteral_21629/*"mstEquipExp"*/);
    sub_1B885B0(&StringLiteral_21636/*"mstEventBoardGameTokenReward"*/);
    sub_1B885B0(&StringLiteral_21859/*"mstSvtCoin"*/);
    sub_1B885B0(&StringLiteral_21890/*"mstSvtScriptMultiple"*/);
    sub_1B885B0(&StringLiteral_21775/*"mstMaterialFolder"*/);
    sub_1B885B0(&StringLiteral_21647/*"mstEventCombineCostume"*/);
    sub_1B885B0(&StringLiteral_21790/*"mstQuestDateRange"*/);
    sub_1B885B0(&StringLiteral_21949/*"mstWarBoardStageBoss"*/);
    sub_1B885B0(&StringLiteral_21583/*"mstBuffConvert"*/);
    sub_1B885B0(&StringLiteral_21557/*"mstAuraEffect"*/);
    sub_1B885B0(&StringLiteral_21694/*"mstEventRaceResult"*/);
    sub_1B885B0(&StringLiteral_21825/*"mstSetItem"*/);
    sub_1B885B0(&StringLiteral_21815/*"mstRecover"*/);
    sub_1B885B0(&StringLiteral_21709/*"mstEventStatusQuest"*/);
    sub_1B885B0(&StringLiteral_24391/*"userEventCooltimeReward"*/);
    sub_1B885B0(&StringLiteral_21783/*"mstPaymentLimit"*/);
    sub_1B885B0(&StringLiteral_21927/*"mstWarBoardActionTrendGroup"*/);
    sub_1B885B0(&StringLiteral_24437/*"userQuestRoute"*/);
    sub_1B885B0(&StringLiteral_21838/*"mstSkillLv"*/);
    sub_1B885B0(&StringLiteral_21871/*"mstSvtGroup"*/);
    sub_1B885B0(&StringLiteral_21914/*"mstVoiceClosedMessage"*/);
    sub_1B885B0(&StringLiteral_21659/*"mstEventExpeditionPiece"*/);
    sub_1B885B0(&StringLiteral_21787/*"mstQuestAutoOrganizationAdjust"*/);
    sub_1B885B0(&StringLiteral_21880/*"mstSvtMultiPortrait"*/);
    sub_1B885B0(&StringLiteral_21662/*"mstEventFilter"*/);
    sub_1B885B0(&StringLiteral_21776/*"mstMissionNaviQuest"*/);
    sub_1B885B0(&StringLiteral_24439/*"userRecommendSupport"*/);
    sub_1B885B0(&StringLiteral_24426/*"userItem"*/);
    sub_1B885B0(&StringLiteral_21658/*"mstEventExpedition"*/);
    sub_1B885B0(&StringLiteral_21693/*"mstEventRace"*/);
    sub_1B885B0(&StringLiteral_21806/*"mstQuestRestrictionInfo"*/);
    sub_1B885B0(&StringLiteral_21804/*"mstQuestReset"*/);
    sub_1B885B0(&StringLiteral_24395/*"userEventExpedition"*/);
    sub_1B885B0(&StringLiteral_21665/*"mstEventFortificationSvt"*/);
    sub_1B885B0(&StringLiteral_21954/*"mstWarBoardStageReinforcements"*/);
    sub_1B885B0(&StringLiteral_21588/*"mstClassBoardBase"*/);
    sub_1B885B0(&StringLiteral_21625/*"mstEnemyMaster"*/);
    sub_1B885B0(&StringLiteral_21558/*"mstAuraEffectPosOverwrite"*/);
    sub_1B885B0(&StringLiteral_21819/*"mstRestrictionSlot"*/);
    sub_1B885B0(&StringLiteral_21746/*"mstGachaSub"*/);
    sub_1B885B0(&StringLiteral_21713/*"mstEventSvtPointRank"*/);
    sub_1B885B0(&StringLiteral_21686/*"mstEventPointGroup"*/);
    sub_1B885B0(&StringLiteral_21633/*"mstEventAdd"*/);
    sub_1B885B0(&StringLiteral_21627/*"mstEquip"*/);
    sub_1B885B0(&StringLiteral_21698/*"mstEventRecipeGift"*/);
    sub_1B885B0(&StringLiteral_21901/*"mstTelop"*/);
    sub_1B885B0(&StringLiteral_24449/*"userSvtCollection"*/);
    sub_1B885B0(&StringLiteral_24400/*"userEventMissionFix"*/);
    sub_1B885B0(&StringLiteral_21817/*"mstRestrictionBase"*/);
    sub_1B885B0(&StringLiteral_21903/*"mstTips"*/);
    sub_1B885B0(&StringLiteral_21559/*"mstBankShop"*/);
    sub_1B885B0(&StringLiteral_21724/*"mstEventVoicePlay"*/);
    sub_1B885B0(&StringLiteral_21664/*"mstEventFortificationDetail"*/);
    sub_1B885B0(&StringLiteral_24407/*"userEventSuperBoss"*/);
    sub_1B885B0(&StringLiteral_21663/*"mstEventFortification"*/);
    sub_1B885B0(&StringLiteral_21711/*"mstEventSvt"*/);
    sub_1B885B0(&StringLiteral_21918/*"mstVoicePlayGroup"*/);
    sub_1B885B0(&StringLiteral_24393/*"userEventDeck"*/);
    sub_1B885B0(&StringLiteral_21840/*"mstSpotAdd"*/);
    sub_1B885B0(&StringLiteral_21606/*"mstCombineSkill"*/);
    sub_1B885B0(&StringLiteral_21946/*"mstWarBoardSquare"*/);
    sub_1B885B0(&StringLiteral_21584/*"mstBuffTypeDetail"*/);
    sub_1B885B0(&StringLiteral_21924/*"mstWarBoardActionPointClass"*/);
    sub_1B885B0(&StringLiteral_21823/*"mstSelectBonus"*/);
    sub_1B885B0(&StringLiteral_21893/*"mstSvtTransform"*/);
    sub_1B885B0(&StringLiteral_24430/*"userPresentBox"*/);
    sub_1B885B0(&StringLiteral_24408/*"userEventSvtPoint"*/);
    sub_1B885B0(&StringLiteral_23991/*"totalEventPoint"*/);
    sub_1B885B0(&StringLiteral_21608/*"mstCommandCardRankParam"*/);
    sub_1B885B0(&StringLiteral_21929/*"mstWarBoardCommonRelease"*/);
    sub_1B885B0(&StringLiteral_21850/*"mstSvt"*/);
    sub_1B885B0(&StringLiteral_24440/*"userShop"*/);
    sub_1B885B0(&StringLiteral_21634/*"mstEventBoardGameCell"*/);
    sub_1B885B0(&StringLiteral_21692/*"mstEventQuestCooltime"*/);
    sub_1B885B0(&StringLiteral_21732/*"mstFuncTypeDetail"*/);
    sub_1B885B0(&StringLiteral_21847/*"mstStatusEffectPosOverwrite"*/);
    sub_1B885B0(&StringLiteral_19128/*"eventBoostItemUsed"*/);
    sub_1B885B0(&StringLiteral_21828/*"mstShopDetail"*/);
    sub_1B885B0(&StringLiteral_21755/*"mstIndividualityPolicy"*/);
    sub_1B885B0(&StringLiteral_21761/*"mstMapButton"*/);
    sub_1B885B0(&StringLiteral_21956/*"mstWarBoardTacticalTrend"*/);
    sub_1B885B0(&StringLiteral_21849/*"mstSubEquip"*/);
    sub_1B885B0(&StringLiteral_21843/*"mstSpotPath"*/);
    sub_1B885B0(&StringLiteral_21822/*"mstRoadmap"*/);
    sub_1B885B0(&StringLiteral_21603/*"mstCombineMaterial"*/);
    sub_1B885B0(&StringLiteral_21602/*"mstCombineLimitRelease"*/);
    sub_1B885B0(&StringLiteral_21910/*"mstTreasureDeviceLv"*/);
    sub_1B885B0(&StringLiteral_21714/*"mstEventTower"*/);
    sub_1B885B0(&StringLiteral_21832/*"mstSkill"*/);
    sub_1B885B0(&StringLiteral_24425/*"userInterruptionQuest"*/);
    sub_1B885B0(&StringLiteral_21882/*"mstSvtPassiveSkill"*/);
    sub_1B885B0(&StringLiteral_21895/*"mstSvtTreasureDeviceAdd"*/);
    sub_1B885B0(&StringLiteral_21573/*"mstBlankEarthSpotAdd"*/);
    sub_1B885B0(&StringLiteral_24434/*"userQuest"*/);
    sub_1B885B0(&StringLiteral_21675/*"mstEventMissionCondition"*/);
    sub_1B885B0(&StringLiteral_21923/*"mstWarBoardActionPoint"*/);
    sub_1B885B0(&StringLiteral_24410/*"userExternalPaymentStone"*/);
    sub_1B885B0(&StringLiteral_21596/*"mstClosedMessage"*/);
    sub_1B885B0(&StringLiteral_21701/*"mstEventRewardExtra"*/);
    sub_1B885B0(&StringLiteral_21684/*"mstEventPointActivity"*/);
    sub_1B885B0(&StringLiteral_21691/*"mstEventQuest"*/);
    sub_1B885B0(&StringLiteral_21565/*"mstBattleMessageGroup"*/);
    sub_1B885B0(&StringLiteral_24558/*"viewQuestInfo"*/);
    sub_1B885B0(&StringLiteral_21886/*"mstSvtProfilePush"*/);
    sub_1B885B0(&StringLiteral_21909/*"mstTreasureDeviceDetail"*/);
    sub_1B885B0(&StringLiteral_24373/*"userBlacklist"*/);
    sub_1B885B0(&StringLiteral_21657/*"mstEventEquipSkillRelease"*/);
    sub_1B885B0(&StringLiteral_24376/*"userCoinRoom"*/);
    sub_1B885B0(&StringLiteral_21620/*"mstConstantStr"*/);
    sub_1B885B0(&StringLiteral_21848/*"mstStoneShop"*/);
    sub_1B885B0(&StringLiteral_21771/*"mstMapUpdateSchedule"*/);
    sub_1B885B0(&StringLiteral_21904/*"mstTotalLogin"*/);
    sub_1B885B0(&StringLiteral_21781/*"mstOpeningMovie"*/);
    sub_1B885B0(&StringLiteral_21618/*"mstConstant"*/);
    sub_1B885B0(&StringLiteral_21812/*"mstQuestSpotRelease"*/);
    sub_1B885B0(&StringLiteral_21611/*"mstCommandCodeSkill"*/);
    sub_1B885B0(&StringLiteral_21785/*"mstQuest"*/);
    sub_1B885B0(&StringLiteral_21899/*"mstSvtVoicePattern"*/);
    sub_1B885B0(&StringLiteral_21720/*"mstEventTutorialCond"*/);
    sub_1B885B0(&StringLiteral_21571/*"mstBlankEarthGimmickAdd"*/);
    sub_1B885B0(&StringLiteral_21922/*"mstWarBoard"*/);
    sub_1B885B0(&StringLiteral_21695/*"mstEventRaid"*/);
    sub_1B885B0(&StringLiteral_21568/*"mstBgm"*/);
    sub_1B885B0(&StringLiteral_21707/*"mstEventScriptRelease"*/);
    sub_1B885B0(&StringLiteral_24433/*"userProfile"*/);
    sub_1B885B0(&StringLiteral_21674/*"mstEventMissionAdd"*/);
    sub_1B885B0(&StringLiteral_21919/*"mstVoiceRelease"*/);
    sub_1B885B0(&StringLiteral_21801/*"mstQuestRandomGroup"*/);
    sub_1B885B0(&StringLiteral_21777/*"mstMissionNaviTransition"*/);
    sub_1B885B0(&StringLiteral_21830/*"mstShopRelease"*/);
    sub_1B885B0(&StringLiteral_24456/*"userSvtStorage"*/);
    sub_1B885B0(&StringLiteral_21742/*"mstGachaPickupCollateral"*/);
    sub_1B885B0(&StringLiteral_21813/*"mstRecommendAdviceMessage"*/);
    sub_1B885B0(&StringLiteral_21814/*"mstRecommendSupportQuest"*/);
    sub_1B885B0(&StringLiteral_24446/*"userSvtAppendPassiveSkill"*/);
    sub_1B885B0(&StringLiteral_21851/*"mstSvtAdd"*/);
    sub_1B885B0(&StringLiteral_21959/*"mstWarMessage"*/);
    sub_1B885B0(&StringLiteral_21574/*"mstBlankEarthSpotNavimenu"*/);
    sub_1B885B0(&StringLiteral_21563/*"mstBattleMasterImage"*/);
    sub_1B885B0(&StringLiteral_21834/*"mstSkillDetail"*/);
    sub_1B885B0(&StringLiteral_21772/*"mstMasterMission"*/);
    sub_1B885B0(&StringLiteral_21883/*"mstSvtPassiveSkillRelease"*/);
    sub_1B885B0(&StringLiteral_21839/*"mstSpot"*/);
    sub_1B885B0(&StringLiteral_21671/*"mstEventMission"*/);
    sub_1B885B0(&StringLiteral_21605/*"mstCombineQpSvtEquip"*/);
    sub_1B885B0(&StringLiteral_21683/*"mstEventPoint"*/);
    sub_1B885B0(&StringLiteral_21705/*"mstEventRewardSet"*/);
    sub_1B885B0(&StringLiteral_21680/*"mstEventPanelMapDetail"*/);
    sub_1B885B0(&StringLiteral_21857/*"mstSvtCardAdd"*/);
    sub_1B885B0(&StringLiteral_21760/*"mstMap"*/);
    sub_1B885B0(&StringLiteral_21654/*"mstEventDigging"*/);
    sub_1B885B0(&StringLiteral_24416/*"userGacha"*/);
    sub_1B885B0(&StringLiteral_21802/*"mstQuestRelease"*/);
    sub_1B885B0(&StringLiteral_21653/*"mstEventDetail"*/);
    sub_1B885B0(&StringLiteral_21770/*"mstMapLayer"*/);
    sub_1B885B0(&StringLiteral_21933/*"mstWarBoardFutureActionTrend"*/);
    sub_1B885B0(&StringLiteral_21837/*"mstSkillIndividuality"*/);
    sub_1B885B0(&StringLiteral_21580/*"mstBoxGachaBaseDetail"*/);
    sub_1B885B0(&StringLiteral_23862/*"tblFriend"*/);
    sub_1B885B0(&StringLiteral_17156/*"beforeBirthDay"*/);
    sub_1B885B0(&StringLiteral_21669/*"mstEventItemDisplayRelease"*/);
    sub_1B885B0(&StringLiteral_17090/*"battle"*/);
    sub_1B885B0(&StringLiteral_21829/*"mstShopGroup"*/);
    sub_1B885B0(&StringLiteral_21556/*"mstAttriRelation"*/);
    sub_1B885B0(&StringLiteral_24377/*"userCommandCode"*/);
    sub_1B885B0(&StringLiteral_21645/*"mstEventCampaignRelease"*/);
    sub_1B885B0(&StringLiteral_21868/*"mstSvtFilter"*/);
    sub_1B885B0(&StringLiteral_21800/*"mstQuestRacePoint"*/);
    sub_1B885B0(&StringLiteral_21718/*"mstEventTradeStore"*/);
    sub_1B885B0(&StringLiteral_22346/*"otherUserGame"*/);
    sub_1B885B0(&StringLiteral_21567/*"mstBattlePointPhase"*/);
    sub_1B885B0(&StringLiteral_21668/*"mstEventItemDisplayGroup"*/);
    sub_1B885B0(&StringLiteral_21586/*"mstCard"*/);
    sub_1B885B0(&StringLiteral_21570/*"mstBlankEarthGimmick"*/);
    sub_1B885B0(&StringLiteral_21564/*"mstBattleMessage"*/);
    sub_1B885B0(&StringLiteral_21820/*"mstRestrictionSlotDetail"*/);
    sub_1B885B0(&StringLiteral_21560/*"mstBanner"*/);
    sub_1B885B0(&StringLiteral_21626/*"mstEnemyMasterBattle"*/);
    sub_1B885B0(&StringLiteral_21667/*"mstEventItemDisplay"*/);
    sub_1B885B0(&StringLiteral_21585/*"mstCampaignInfo"*/);
    sub_1B885B0(&StringLiteral_21894/*"mstSvtTreasureDevice"*/);
    sub_1B885B0(&StringLiteral_21892/*"mstSvtSkillRelease"*/);
    sub_1B885B0(&StringLiteral_21617/*"mstCompleteMission"*/);
    sub_1B885B0(&StringLiteral_21600/*"mstCombineLimit"*/);
    sub_1B885B0(&StringLiteral_21578/*"mstBoxGacha"*/);
    sub_1B885B0(&StringLiteral_21916/*"mstVoiceMaterialCond"*/);
    sub_1B885B0(&StringLiteral_21745/*"mstGachaStoryAdjust"*/);
    sub_1B885B0(&StringLiteral_21912/*"mstUserExp"*/);
    sub_1B885B0(&StringLiteral_21725/*"mstExcludeMotionCond"*/);
    sub_1B885B0(&StringLiteral_21935/*"mstWarBoardItem"*/);
    sub_1B885B0(&StringLiteral_21628/*"mstEquipAdd"*/);
    sub_1B885B0(&StringLiteral_21622/*"mstDialogMessage"*/);
    sub_1B885B0(&StringLiteral_22167/*"npcSvtFollower"*/);
    sub_1B885B0(&StringLiteral_21562/*"mstBattleBg"*/);
    sub_1B885B0(&StringLiteral_21589/*"mstClassBoardClass"*/);
    sub_1B885B0(&StringLiteral_24401/*"userEventPoint"*/);
    sub_1B885B0(&StringLiteral_21858/*"mstSvtChange"*/);
    sub_1B885B0(&StringLiteral_21934/*"mstWarBoardIndividualityClass"*/);
    sub_1B885B0(&StringLiteral_21798/*"mstQuestPhasePresent"*/);
    sub_1B885B0(&StringLiteral_21678/*"mstEventMural"*/);
    sub_1B885B0(&StringLiteral_21758/*"mstItemSelect"*/);
    sub_1B885B0(&StringLiteral_21872/*"mstSvtIndividuality"*/);
    sub_1B885B0(&StringLiteral_24388/*"userEvent"*/);
    sub_1B885B0(&StringLiteral_21957/*"mstWarBoardTreasure"*/);
    sub_1B885B0(&StringLiteral_21877/*"mstSvtLvDetail"*/);
    sub_1B885B0(&StringLiteral_21942/*"mstWarBoardRatingOffset"*/);
    sub_1B885B0(&StringLiteral_21795/*"mstQuestPhaseDetail"*/);
    sub_1B885B0(&StringLiteral_21827/*"mstShopAction"*/);
    sub_1B885B0(&StringLiteral_21778/*"mstMyroomAdd"*/);
    sub_1B885B0(&StringLiteral_21712/*"mstEventSvtFatigue"*/);
    sub_1B885B0(&StringLiteral_21660/*"mstEventFactory"*/);
    sub_1B885B0(&StringLiteral_24417/*"userGachaDrawHistory"*/);
    sub_1B885B0(&StringLiteral_24412/*"userFollower"*/);
    sub_1B885B0(&StringLiteral_21943/*"mstWarBoardRatingOffsetGroup"*/);
    sub_1B885B0(&StringLiteral_24448/*"userSvtCoin"*/);
    sub_1B885B0(&StringLiteral_21706/*"mstEventScript"*/);
    sub_1B885B0(&StringLiteral_21891/*"mstSvtSkill"*/);
    sub_1B885B0(&StringLiteral_21842/*"mstSpotLayer"*/);
    sub_1B885B0(&StringLiteral_24450/*"userSvtCommandCard"*/);
    sub_1B885B0(&StringLiteral_24435/*"userQuestInfo"*/);
    sub_1B885B0(&StringLiteral_21623/*"mstEffect"*/);
    sub_1B885B0(&StringLiteral_21756/*"mstItem"*/);
    sub_1B885B0(&StringLiteral_21824/*"mstSelectBonusBase"*/);
    sub_1B885B0(&StringLiteral_21687/*"mstEventPointGroupAdd"*/);
    sub_1B885B0(&StringLiteral_21793/*"mstQuestMessage"*/);
    sub_1B885B0(&StringLiteral_22163/*"npcFollowerRelease"*/);
    sub_1B885B0(&StringLiteral_21729/*"mstFuncCategory"*/);
    sub_1B885B0(&StringLiteral_21936/*"mstWarBoardMessage"*/);
    sub_1B885B0(&StringLiteral_24421/*"userGame"*/);
    sub_1B885B0(&StringLiteral_21748/*"mstGift"*/);
    sub_1B885B0(&StringLiteral_21944/*"mstWarBoardReinforcements"*/);
    sub_1B885B0(&StringLiteral_21635/*"mstEventBoardGameToken"*/);
    sub_1B885B0(&StringLiteral_21765/*"mstMapGimmickLayer"*/);
    sub_1B885B0(&StringLiteral_21861/*"mstSvtCommandCodeUnlock"*/);
    sub_1B885B0(&StringLiteral_21554/*"mstAssist"*/);
    sub_1B885B0(&StringLiteral_24559/*"viewWaveEnemy"*/);
    sub_1B885B0(&StringLiteral_22166/*"npcSvtEquip"*/);
    sub_1B885B0(&StringLiteral_21809/*"mstQuestScriptMaterialNext"*/);
    sub_1B885B0(&StringLiteral_21867/*"mstSvtExp"*/);
    sub_1B885B0(&StringLiteral_24445/*"userSvt"*/);
    sub_1B885B0(&StringLiteral_24555/*"viewEnemy"*/);
    sub_1B885B0(&StringLiteral_21722/*"mstEventUiRelease"*/);
    sub_1B885B0(&StringLiteral_23992/*"totalEventRace"*/);
    sub_1B885B0(&StringLiteral_21726/*"mstFieldMotion"*/);
    sub_1B885B0(&StringLiteral_21696/*"mstEventRandomMission"*/);
    sub_1B885B0(&StringLiteral_21703/*"mstEventRewardScene"*/);
    sub_1B885B0(&StringLiteral_21754/*"mstIndividualityPersonality"*/);
    sub_1B885B0(&StringLiteral_21599/*"mstCombineCostume"*/);
    sub_1B885B0(&StringLiteral_21598/*"mstCombineAppendPassiveSkill"*/);
    sub_1B885B0(&StringLiteral_21656/*"mstEventDiggingReward"*/);
    sub_1B885B0(&StringLiteral_21925/*"mstWarBoardActionTrend"*/);
    sub_1B885B0(&StringLiteral_21734/*"mstGachaAppend"*/);
    sub_1B885B0(&StringLiteral_21947/*"mstWarBoardSquareIndexGroup"*/);
    sub_1B885B0(&StringLiteral_21728/*"mstFunc"*/);
    sub_1B885B0(&StringLiteral_21649/*"mstEventConquestReward"*/);
    sub_1B885B0(&StringLiteral_21930/*"mstWarBoardEffect"*/);
    sub_1B885B0(&StringLiteral_21960/*"mstWarQuestSelection"*/);
    sub_1B885B0(&StringLiteral_24382/*"userDeck"*/);
    sub_1B885B0(&StringLiteral_21773/*"mstMasterMissionDisplayInfo"*/);
    sub_1B885B0(&StringLiteral_21958/*"mstWarGroup"*/);
    sub_1B885B0(&StringLiteral_21826/*"mstShop"*/);
    sub_1B885B0(&StringLiteral_21939/*"mstWarBoardPartySkill"*/);
    sub_1B885B0(&StringLiteral_21685/*"mstEventPointBuff"*/);
    sub_1B885B0(&StringLiteral_24444/*"userSupportDeck"*/);
    sub_1B885B0(&StringLiteral_21844/*"mstSpotRoad"*/);
    sub_1B885B0(&StringLiteral_21900/*"mstSvtVoiceRelation"*/);
    sub_1B885B0(&StringLiteral_21601/*"mstCombineLimitGift"*/);
    sub_1B885B0(&StringLiteral_21650/*"mstEventCooltimeReward"*/);
    sub_1B885B0(&StringLiteral_21642/*"mstEventBulletinBoard"*/);
    sub_1B885B0(&StringLiteral_21700/*"mstEventRewardBg"*/);
    sub_1B885B0(&StringLiteral_21581/*"mstBoxGachaTalk"*/);
    sub_1B885B0(&StringLiteral_24429/*"userPaymentLimit"*/);
    sub_1B885B0(&StringLiteral_21730/*"mstFuncDisp"*/);
    sub_1B885B0(&StringLiteral_21888/*"mstSvtScript"*/);
    sub_1B885B0(&StringLiteral_21762/*"mstMapCond"*/);
    sub_1B885B0(&StringLiteral_24396/*"userEventFortification"*/);
    sub_1B885B0(&StringLiteral_21938/*"mstWarBoardOnboardSkill"*/);
    sub_1B885B0(&StringLiteral_21740/*"mstGachaGroup"*/);
    sub_1B885B0(&StringLiteral_24557/*"viewQuestEnemyInfo"*/);
    sub_1B885B0(&StringLiteral_24372/*"userAccountLinkage"*/);
    sub_1B885B0(&StringLiteral_21862/*"mstSvtComment"*/);
    sub_1B885B0(&StringLiteral_21908/*"mstTreasureDevice"*/);
    sub_1B885B0(&StringLiteral_24556/*"viewGachaFeaturedSvt"*/);
    sub_1B885B0(&StringLiteral_24428/*"userNpcSvtRecord"*/);
    sub_1B885B0(&StringLiteral_21566/*"mstBattlePoint"*/);
    sub_1B885B0(&StringLiteral_21677/*"mstEventMissionGroup"*/);
    sub_1B885B0(&StringLiteral_24436/*"userQuestRecord"*/);
    sub_1B885B0(&StringLiteral_21818/*"mstRestrictionMessage"*/);
    sub_1B885B0(&StringLiteral_21750/*"mstGiftDetail"*/);
    sub_1B885B0(&StringLiteral_21747/*"mstGachaTicket"*/);
    sub_1B885B0(&StringLiteral_21884/*"mstSvtPhoto"*/);
    sub_1B885B0(&StringLiteral_22527/*"pickupUserFollower"*/);
    sub_1B885B0(&StringLiteral_21708/*"mstEventStatus"*/);
    sub_1B885B0(&StringLiteral_21863/*"mstSvtCommentAdd"*/);
    sub_1B885B0(&StringLiteral_21881/*"mstSvtOverwrite"*/);
    sub_1B885B0(&StringLiteral_22162/*"npcFollower"*/);
    sub_1B885B0(&StringLiteral_21648/*"mstEventCommandAssist"*/);
    sub_1B885B0(&StringLiteral_19139/*"eventSvtFatigue"*/);
    sub_1B885B0(&StringLiteral_21737/*"mstGachaBonusSelectLineup"*/);
    sub_1B885B0(&StringLiteral_21643/*"mstEventBulletinBoardRelease"*/);
    sub_1B885B0(&StringLiteral_21866/*"mstSvtExceed"*/);
    sub_1B885B0(&StringLiteral_21876/*"mstSvtLimitSpoilerProtection"*/);
    sub_1B885B0(&StringLiteral_21898/*"mstSvtVoice"*/);
    sub_1B885B0(&StringLiteral_21821/*"mstRestrictionWhole"*/);
    sub_1B885B0(&StringLiteral_24419/*"userGachaExtraCount"*/);
    sub_1B885B0(&StringLiteral_21767/*"mstMapGimmickPath"*/);
    sub_1B885B0(&StringLiteral_21715/*"mstEventTowerReward"*/);
    sub_1B885B0(&StringLiteral_21595/*"mstClassRelationOverwrite"*/);
    sub_1B885B0(&StringLiteral_21549/*"mstAi"*/);
    sub_1B885B0(&StringLiteral_24374/*"userBoxGacha"*/);
    sub_1B885B0(&StringLiteral_21856/*"mstSvtCard"*/);
    sub_1B885B0(&StringLiteral_24420/*"userGachaPickupCollateral"*/);
    sub_1B885B0(&StringLiteral_24418/*"userGachaDrawLog"*/);
    sub_1B885B0(&StringLiteral_21948/*"mstWarBoardStage"*/);
    sub_1B885B0(&StringLiteral_24386/*"userEquip"*/);
    sub_1B885B0(&StringLiteral_21702/*"mstEventRewardGuideRelease"*/);
    sub_1B885B0(&StringLiteral_21590/*"mstClassBoardCommandSpell"*/);
    sub_1B885B0(&StringLiteral_21961/*"mstWarRelease"*/);
    sub_1B885B0(&StringLiteral_21735/*"mstGachaBehavior"*/);
    sub_1B885B0(&StringLiteral_21920/*"mstWar"*/);
    sub_1B885B0(&StringLiteral_21637/*"mstEventBonusFilter"*/);
    sub_1B885B0(&StringLiteral_21811/*"mstQuestScriptRelease"*/);
    sub_1B885B0(&StringLiteral_24397/*"userEventMap"*/);
    sub_1B885B0(&StringLiteral_21682/*"mstEventPanelSpot"*/);
    sub_1B885B0(&StringLiteral_21587/*"mstClass"*/);
    sub_1B885B0(&StringLiteral_24371/*"userAccessary"*/);
    sub_1B885B0(&StringLiteral_21874/*"mstSvtLimitAdd"*/);
    sub_1B885B0(&StringLiteral_21810/*"mstQuestScriptMaterialOverwrite"*/);
    sub_1B885B0(&StringLiteral_18118/*"combineExp"*/);
    sub_1B885B0(&StringLiteral_24413/*"userFormation"*/);
    sub_1B885B0(&StringLiteral_21937/*"mstWarBoardMessageScript"*/);
    sub_1B885B0(&StringLiteral_21690/*"mstEventProgressValue"*/);
    sub_1B885B0(&StringLiteral_24457/*"userSvtVoicePlayed"*/);
    sub_1B885B0(&StringLiteral_21855/*"mstSvtBattlePoint"*/);
    sub_1B885B0(&StringLiteral_21869/*"mstSvtFlag"*/);
    sub_1B885B0(&StringLiteral_21575/*"mstBoardMessage"*/);
    sub_1B885B0(&StringLiteral_21681/*"mstEventPanelScan"*/);
    sub_1B885B0(&StringLiteral_21875/*"mstSvtLimitImage"*/);
    sub_1B885B0(&StringLiteral_21655/*"mstEventDiggingBlock"*/);
    sub_1B885B0(&StringLiteral_24405/*"userEventRandomMission"*/);
    sub_1B885B0(&StringLiteral_21552/*"mstArea"*/);
    sub_1B885B0(&StringLiteral_23993/*"totalEventRaid"*/);
    sub_1B885B0(&StringLiteral_22144/*"notEndEventMissionFix"*/);
    sub_1B885B0(&StringLiteral_21831/*"mstShopScript"*/);
    sub_1B885B0(&StringLiteral_24398/*"userEventMission"*/);
    sub_1B885B0(&StringLiteral_21774/*"mstMasterPhoto"*/);
    sub_1B885B0(&StringLiteral_21673/*"mstEventMissionActionAdd"*/);
    sub_1B885B0(&StringLiteral_21607/*"mstCombineTd"*/);
    sub_1B885B0(&StringLiteral_21577/*"mstBoost"*/);
    sub_1B885B0(&StringLiteral_21889/*"mstSvtScriptAdd"*/);
    sub_1B885B0(&StringLiteral_21579/*"mstBoxGachaBase"*/);
    sub_1B885B0(&StringLiteral_21561/*"mstBannerAdd"*/);
    sub_1B885B0(&StringLiteral_21547/*"mstAccessary"*/);
    sub_1B885B0(&StringLiteral_21911/*"mstTreasureDeviceSequenceWeight"*/);
    sub_1B885B0(&StringLiteral_24403/*"userEventRace"*/);
    sub_1B885B0(&StringLiteral_21791/*"mstQuestGroup"*/);
    sub_1B885B0(&StringLiteral_21689/*"mstEventPointUpperRelease"*/);
    sub_1B885B0(&StringLiteral_24455/*"userSvtLeader"*/);
    sub_1B885B0(&StringLiteral_21873/*"mstSvtLimit"*/);
    sub_1B885B0(&StringLiteral_24411/*"userFollow"*/);
    sub_1B885B0(&StringLiteral_21670/*"mstEventLocationCampaign"*/);
    sub_1B885B0(&StringLiteral_21604/*"mstCombineQp"*/);
    sub_1B885B0(&StringLiteral_21632/*"mstEvent"*/);
    sub_1B885B0(&StringLiteral_21870/*"mstSvtFlagRelease"*/);
    sub_1B885B0(&StringLiteral_24414/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_1B885B0(&StringLiteral_24432/*"userPrivilege"*/);
    sub_1B885B0(&StringLiteral_21609/*"mstCommandCode"*/);
    sub_1B885B0(&StringLiteral_21853/*"mstSvtAppendPassiveSkill"*/);
    sub_1B885B0(&StringLiteral_21666/*"mstEventGroup"*/);
    sub_1B885B0(&StringLiteral_21736/*"mstGachaBonusSelect"*/);
    sub_1B885B0(&StringLiteral_24390/*"userEventBoardGameToken"*/);
    sub_1B885B0(&StringLiteral_21779/*"mstMyroomSvtSpecialImage"*/);
    sub_1B885B0(&StringLiteral_21945/*"mstWarBoardRoad"*/);
    sub_1B885B0(&StringLiteral_21582/*"mstBuff"*/);
    sub_1B885B0(&StringLiteral_24626/*"warBoardData"*/);
    sub_1B885B0(&StringLiteral_21753/*"mstIllustrator"*/);
    sub_1B885B0(&StringLiteral_23988/*"totalBoxGacha"*/);
    sub_1B885B0(&StringLiteral_21887/*"mstSvtRarity"*/);
    sub_1B885B0(&StringLiteral_21921/*"mstWarAdd"*/);
    sub_1B885B0(&StringLiteral_21768/*"mstMapGimmickPathRelease"*/);
    sub_1B885B0(&StringLiteral_24415/*"userFriendRequestHistory"*/);
    sub_1B885B0(&StringLiteral_24368/*"user"*/);
    sub_1B885B0(&StringLiteral_17394/*"boxGachaHistory"*/);
    sub_1B885B0(&StringLiteral_21731/*"mstFuncGroup"*/);
    sub_1B885B0(&StringLiteral_21614/*"mstCommonConsume"*/);
    sub_1B885B0(&StringLiteral_21932/*"mstWarBoardEventScript"*/);
    sub_1B885B0(&StringLiteral_21749/*"mstGiftAdd"*/);
    sub_1B885B0(&StringLiteral_21721/*"mstEventUi"*/);
    sub_1B885B0(&StringLiteral_21841/*"mstSpotImage"*/);
    sub_1B885B0(&StringLiteral_21865/*"mstSvtCostumeRelease"*/);
    sub_1B885B0(&StringLiteral_21763/*"mstMapGimmick"*/);
    sub_1B885B0(&StringLiteral_21797/*"mstQuestPhaseIndividuality"*/);
    sub_1B885B0(&StringLiteral_21719/*"mstEventTutorial"*/);
    sub_1B885B0(&StringLiteral_21955/*"mstWarBoardStageWall"*/);
    sub_1B885B0(&StringLiteral_24409/*"userEventTrade"*/);
    sub_1B885B0(&StringLiteral_21551/*"mstAiField"*/);
    sub_1B885B0(&StringLiteral_21897/*"mstSvtTreasureDeviceRelease"*/);
    sub_1B885B0(&StringLiteral_21794/*"mstQuestPhase"*/);
    sub_1B885B0(&StringLiteral_24392/*"userEventDataLost"*/);
    sub_1B885B0(&StringLiteral_21854/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_1B885B0(&StringLiteral_21896/*"mstSvtTreasureDeviceDamage"*/);
    sub_1B885B0(&StringLiteral_21845/*"mstStage"*/);
    sub_1B885B0(&StringLiteral_21597/*"mstCombine"*/);
    sub_1B885B0(&StringLiteral_21644/*"mstEventCampaign"*/);
    sub_1B885B0(&StringLiteral_21952/*"mstWarBoardStageNpc"*/);
    sub_1B885B0(&StringLiteral_22489/*"paymentHistory"*/);
    sub_1B885B0(&StringLiteral_19301/*"exchangeSvt"*/);
    sub_1B885B0(&StringLiteral_21846/*"mstStageRemap"*/);
    sub_1B885B0(&StringLiteral_21816/*"mstRestriction"*/);
    sub_1B885B0(&StringLiteral_21807/*"mstQuestScript"*/);
    sub_1B885B0(&StringLiteral_21704/*"mstEventRewardSceneRelease"*/);
    sub_1B885B0(&StringLiteral_21915/*"mstVoiceCond"*/);
    sub_1B885B0(&StringLiteral_24443/*"userSubEquip"*/);
    sub_1B885B0(&StringLiteral_21697/*"mstEventRecipe"*/);
    sub_1B885B0(&StringLiteral_21864/*"mstSvtCostume"*/);
    sub_1B885B0(&StringLiteral_21885/*"mstSvtProfile"*/);
    sub_1B885B0(&StringLiteral_21616/*"mstCommonRestriction"*/);
    sub_1B885B0(&StringLiteral_24423/*"userHeelPortrait"*/);
    sub_1B885B0(&StringLiteral_21836/*"mstSkillGroupOverwrite"*/);
    sub_1B885B0(&StringLiteral_24378/*"userCommandCodeCollection"*/);
    sub_1B885B0(&StringLiteral_21612/*"mstCommandCodeSkillRelease"*/);
    sub_1B885B0(&StringLiteral_21624/*"mstEffectMovie"*/);
    sub_1B885B0(&StringLiteral_21799/*"mstQuestPickup"*/);
    sub_1B885B0(&StringLiteral_21951/*"mstWarBoardStageLayout"*/);
    sub_1B885B0(&StringLiteral_21926/*"mstWarBoardActionTrendCond"*/);
    sub_1B885B0(&StringLiteral_21646/*"mstEventCombine"*/);
    sub_1B885B0(&StringLiteral_21940/*"mstWarBoardQuest"*/);
    sub_1B885B0(&StringLiteral_21789/*"mstQuestConsumeItem"*/);
    sub_1B885B0(&StringLiteral_21796/*"mstQuestPhaseDetailAdd"*/);
    sub_1B885B0(&StringLiteral_21752/*"mstHeelPortrait"*/);
    sub_1B885B0(&StringLiteral_24431/*"userPresentHistory"*/);
    sub_1B885B0(&StringLiteral_21941/*"mstWarBoardRatingBase"*/);
    sub_1B885B0(&StringLiteral_21741/*"mstGachaImage"*/);
    sub_1B885B0(&StringLiteral_21630/*"mstEquipImage"*/);
    sub_1B885B0(&StringLiteral_24404/*"userEventRaid"*/);
    sub_1B885B0(&StringLiteral_21860/*"mstSvtCollection"*/);
    sub_1B885B0(&StringLiteral_19655/*"friendshipQuestDialogInfo"*/);
    sub_1B885B0(&StringLiteral_21780/*"mstNews"*/);
    sub_1B885B0(&StringLiteral_21733/*"mstGacha"*/);
    sub_1B885B0(&StringLiteral_21835/*"mstSkillGroup"*/);
    sub_1B885B0(&StringLiteral_21751/*"mstGuide"*/);
    sub_1B885B0(&StringLiteral_21743/*"mstGachaPickupCollateralGroup"*/);
    sub_1B885B0(&StringLiteral_21592/*"mstClassBoardLock"*/);
    sub_1B885B0(&StringLiteral_21688/*"mstEventPointUpper"*/);
    sub_1B885B0(&StringLiteral_21572/*"mstBlankEarthSpot"*/);
    sub_1B885B0(&StringLiteral_21902/*"mstTerminalOverwrite"*/);
    sub_1B885B0(&StringLiteral_21631/*"mstEquipSkill"*/);
    sub_1B885B0(&StringLiteral_21723/*"mstEventUiValue"*/);
    sub_1B885B0(&StringLiteral_24380/*"userContinue"*/);
    sub_1B885B0(&StringLiteral_21786/*"mstQuestAdd"*/);
    sub_1B885B0(&StringLiteral_21591/*"mstClassBoardLine"*/);
    sub_1B885B0(&StringLiteral_24311/*"updateProfileDialogInfo"*/);
    sub_1B885B0(&StringLiteral_21913/*"mstVoice"*/);
    sub_1B885B0(&StringLiteral_24399/*"userEventMissionConditionDetail"*/);
    sub_1B885B0(&StringLiteral_21553/*"mstAssetbundleKey"*/);
    sub_1B885B0(&StringLiteral_21679/*"mstEventPanelMap"*/);
    sub_1B885B0(&StringLiteral_24427/*"userLogin"*/);
    sub_1B885B0(&StringLiteral_21759/*"mstLoginQuest"*/);
    sub_1B885B0(&StringLiteral_21782/*"mstPartialMaintenance"*/);
    sub_1B885B0(&StringLiteral_24406/*"userEventSpot"*/);
    sub_1B885B0(&StringLiteral_21699/*"mstEventReward"*/);
    sub_1B885B0(&StringLiteral_21652/*"mstEventDataLostBattleReset"*/);
    sub_1B885B0(&StringLiteral_21555/*"mstAttri"*/);
    sub_1B885B0(&StringLiteral_21950/*"mstWarBoardStageDetail"*/);
    sub_1B885B0(&StringLiteral_24402/*"userEventQuestCooltime"*/);
    sub_1B885B0(&StringLiteral_21808/*"mstQuestScriptBranchMaterial"*/);
    sub_1B885B0(&StringLiteral_21661/*"mstEventFatigueRecovery"*/);
    sub_1B885B0(&StringLiteral_21928/*"mstWarBoardAi"*/);
    sub_1B885B0(&StringLiteral_21907/*"mstTreasureBoxTalk"*/);
    sub_1B885B0(&StringLiteral_21931/*"mstWarBoardEvent"*/);
    sub_1B885B0(&StringLiteral_21917/*"mstVoicePlayCond"*/);
    sub_1B885B0(&StringLiteral_21738/*"mstGachaDetail"*/);
    sub_1B885B0(&StringLiteral_21710/*"mstEventSuperBoss"*/);
    sub_1B885B0(&StringLiteral_21833/*"mstSkillAdd"*/);
    byte_4A5A142 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_319C86C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1B8880C(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0LL,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_21850/*"mstSvt"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_21862/*"mstSvtComment"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_21885/*"mstSvtProfile"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_21920/*"mstWar"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_17090/*"battle"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_21908/*"mstTreasureDevice"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_21873/*"mstSvtLimit"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_21894/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_21587/*"mstClass"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_21888/*"mstSvtScript"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_21856/*"mstSvtCard"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_21891/*"mstSvtSkill"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_21882/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_24445/*"userSvt"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_24456/*"userSvtStorage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_21845/*"mstStage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_21871/*"mstSvtGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_21572/*"mstBlankEarthSpot"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_21573/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_21839/*"mstSpot"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_21841/*"mstSpotImage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_21844/*"mstSpotRoad"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_21763/*"mstMapGimmick"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_21748/*"mstGift"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_21749/*"mstGiftAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_21849/*"mstSubEquip"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_24368/*"user"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_24421/*"userGame"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_24382/*"userDeck"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_24449/*"userSvtCollection"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_21727/*"mstFriendship"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_21733/*"mstGacha"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_21741/*"mstGachaImage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_24416/*"userGacha"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_24420/*"userGachaPickupCollateral"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24426/*"userItem"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_21756/*"mstItem"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_21747/*"mstGachaTicket"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_21547/*"mstAccessary"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_24371/*"userAccessary"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_24443/*"userSubEquip"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_23863/*"tblUserGame"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_21826/*"mstShop"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_21848/*"mstStoneShop"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_21559/*"mstBankShop"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_21831/*"mstShopScript"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_21627/*"mstEquip"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_21629/*"mstEquipExp"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_21631/*"mstEquipSkill"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_24386/*"userEquip"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_24413/*"userFormation"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_21832/*"mstSkill"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_21838/*"mstSkillLv"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_21834/*"mstSkillDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_21728/*"mstFunc"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_21582/*"mstBuff"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_21744/*"mstGachaRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_24434/*"userQuest"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_24435/*"userQuestInfo"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_24436/*"userQuestRecord"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_21912/*"mstUserExp"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_21780/*"mstNews"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_21901/*"mstTelop"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_22346/*"otherUserGame"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_23862/*"tblFriend"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_24430/*"userPresentBox"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_21632/*"mstEvent"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_21785/*"mstQuest"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_21786/*"mstQuestAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_21802/*"mstQuestRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_21794/*"mstQuestPhase"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_21795/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_21791/*"mstQuestGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_21801/*"mstQuestRandomGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_21789/*"mstQuestConsumeItem"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_21793/*"mstQuestMessage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_24558/*"viewQuestInfo"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_24555/*"viewEnemy"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_24557/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_21552/*"mstArea"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_21568/*"mstBgm"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_21691/*"mstEventQuest"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_21644/*"mstEventCampaign"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_21604/*"mstCombineQp"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_21603/*"mstCombineMaterial"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_21646/*"mstEventCombine"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_21867/*"mstSvtExp"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_21606/*"mstCombineSkill"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_21607/*"mstCombineTd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_21753/*"mstIllustrator"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_21621/*"mstCv"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_21910/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_21909/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_24412/*"userFollower"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_22162/*"npcFollower"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_22167/*"npcSvtFollower"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_24388/*"userEvent"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_24433/*"userProfile"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_24440/*"userShop"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_24380/*"userContinue"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_21618/*"mstConstant"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_21619/*"mstConstantLong"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_21620/*"mstConstantStr"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_21613/*"mstCommandSpell"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_21549/*"mstAi"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_21550/*"mstAiAct"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_21898/*"mstSvtVoice"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_21556/*"mstAttriRelation"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_21594/*"mstClassRelation"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_21623/*"mstEffect"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_21630/*"mstEquipImage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_21600/*"mstCombineLimit"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_21586/*"mstCard"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_21605/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_21874/*"mstSvtLimitAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_21887/*"mstSvtRarity"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_21825/*"mstSetItem"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_21815/*"mstRecover"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_21560/*"mstBanner"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_21830/*"mstShopRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_21699/*"mstEventReward"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_21653/*"mstEventDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_21711/*"mstEventSvt"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_21578/*"mstBoxGacha"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_21579/*"mstBoxGachaBase"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_21581/*"mstBoxGachaTalk"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_24374/*"userBoxGacha"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_17394/*"boxGachaHistory"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_21562/*"mstBattleBg"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_21903/*"mstTips"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_24427/*"userLogin"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_21913/*"mstVoice"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_21701/*"mstEventRewardExtra"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_21671/*"mstEventMission"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_21675/*"mstEventMissionCondition"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_21676/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_21672/*"mstEventMissionAction"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_21673/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    141,
    (Il2CppObject *)StringLiteral_21617/*"mstCompleteMission"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_21674/*"mstEventMissionAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    140,
    (Il2CppObject *)StringLiteral_21705/*"mstEventRewardSet"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    142,
    (Il2CppObject *)StringLiteral_24398/*"userEventMission"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    143,
    (Il2CppObject *)StringLiteral_24399/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    144,
    (Il2CppObject *)StringLiteral_21580/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    145,
    (Il2CppObject *)StringLiteral_21596/*"mstClosedMessage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    146,
    (Il2CppObject *)StringLiteral_24455/*"userSvtLeader"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    147,
    (Il2CppObject *)StringLiteral_21731/*"mstFuncGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    148,
    (Il2CppObject *)StringLiteral_21695/*"mstEventRaid"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    149,
    (Il2CppObject *)StringLiteral_23993/*"totalEventRaid"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    150,
    (Il2CppObject *)StringLiteral_24404/*"userEventRaid"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    151,
    (Il2CppObject *)StringLiteral_21683/*"mstEventPoint"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    152,
    (Il2CppObject *)StringLiteral_21686/*"mstEventPointGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    153,
    (Il2CppObject *)StringLiteral_23991/*"totalEventPoint"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    154,
    (Il2CppObject *)StringLiteral_24401/*"userEventPoint"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    155,
    (Il2CppObject *)StringLiteral_24431/*"userPresentHistory"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    156,
    (Il2CppObject *)StringLiteral_21772/*"mstMasterMission"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    157,
    (Il2CppObject *)StringLiteral_21866/*"mstSvtExceed"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    158,
    (Il2CppObject *)StringLiteral_21782/*"mstPartialMaintenance"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    159,
    (Il2CppObject *)StringLiteral_21751/*"mstGuide"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    160,
    (Il2CppObject *)StringLiteral_21773/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    161,
    (Il2CppObject *)StringLiteral_21740/*"mstGachaGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    162,
    (Il2CppObject *)StringLiteral_21804/*"mstQuestReset"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    163,
    (Il2CppObject *)StringLiteral_21921/*"mstWarAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    164,
    (Il2CppObject *)StringLiteral_21667/*"mstEventItemDisplay"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    165,
    (Il2CppObject *)StringLiteral_21668/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    166,
    (Il2CppObject *)StringLiteral_21669/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    167,
    (Il2CppObject *)StringLiteral_21719/*"mstEventTutorial"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    168,
    (Il2CppObject *)StringLiteral_21720/*"mstEventTutorialCond"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    169,
    (Il2CppObject *)StringLiteral_21919/*"mstVoiceRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    170,
    (Il2CppObject *)StringLiteral_21710/*"mstEventSuperBoss"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    171,
    (Il2CppObject *)StringLiteral_24407/*"userEventSuperBoss"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    172,
    (Il2CppObject *)StringLiteral_21807/*"mstQuestScript"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    173,
    (Il2CppObject *)StringLiteral_21811/*"mstQuestScriptRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    174,
    (Il2CppObject *)StringLiteral_21775/*"mstMaterialFolder"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    175,
    (Il2CppObject *)StringLiteral_21816/*"mstRestriction"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    176,
    (Il2CppObject *)StringLiteral_21805/*"mstQuestRestriction"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    177,
    (Il2CppObject *)StringLiteral_21900/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    178,
    (Il2CppObject *)StringLiteral_21828/*"mstShopDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    179,
    (Il2CppObject *)StringLiteral_21889/*"mstSvtScriptAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    180,
    (Il2CppObject *)StringLiteral_21597/*"mstCombine"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    181,
    (Il2CppObject *)StringLiteral_21551/*"mstAiField"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    182,
    (Il2CppObject *)StringLiteral_21863/*"mstSvtCommentAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    183,
    (Il2CppObject *)StringLiteral_21662/*"mstEventFilter"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    184,
    (Il2CppObject *)StringLiteral_24444/*"userSupportDeck"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    185,
    (Il2CppObject *)StringLiteral_21703/*"mstEventRewardScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    186,
    (Il2CppObject *)StringLiteral_21724/*"mstEventVoicePlay"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    187,
    (Il2CppObject *)StringLiteral_21746/*"mstGachaSub"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    188,
    (Il2CppObject *)StringLiteral_21738/*"mstGachaDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    189,
    (Il2CppObject *)StringLiteral_21736/*"mstGachaBonusSelect"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    190,
    (Il2CppObject *)StringLiteral_21737/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    191,
    (Il2CppObject *)StringLiteral_21858/*"mstSvtChange"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    192,
    (Il2CppObject *)StringLiteral_21915/*"mstVoiceCond"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    193,
    (Il2CppObject *)StringLiteral_21569/*"mstBgmRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    194,
    (Il2CppObject *)StringLiteral_21778/*"mstMyroomAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    195,
    (Il2CppObject *)StringLiteral_21827/*"mstShopAction"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    196,
    (Il2CppObject *)StringLiteral_21704/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    197,
    (Il2CppObject *)StringLiteral_21760/*"mstMap"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    198,
    (Il2CppObject *)StringLiteral_21762/*"mstMapCond"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    199,
    (Il2CppObject *)StringLiteral_21761/*"mstMapButton"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    200,
    (Il2CppObject *)StringLiteral_21561/*"mstBannerAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    201,
    (Il2CppObject *)StringLiteral_21788/*"mstQuestBehavior"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    202,
    (Il2CppObject *)StringLiteral_21633/*"mstEventAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    203,
    (Il2CppObject *)StringLiteral_21904/*"mstTotalLogin"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    204,
    (Il2CppObject *)StringLiteral_21868/*"mstSvtFilter"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    205,
    (Il2CppObject *)StringLiteral_21599/*"mstCombineCostume"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    206,
    (Il2CppObject *)StringLiteral_21864/*"mstSvtCostume"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    207,
    (Il2CppObject *)StringLiteral_21865/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    208,
    (Il2CppObject *)StringLiteral_24415/*"userFriendRequestHistory"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    209,
    (Il2CppObject *)StringLiteral_24373/*"userBlacklist"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    210,
    (Il2CppObject *)StringLiteral_21758/*"mstItemSelect"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    211,
    (Il2CppObject *)StringLiteral_21693/*"mstEventRace"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    212,
    (Il2CppObject *)StringLiteral_21694/*"mstEventRaceResult"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    213,
    (Il2CppObject *)StringLiteral_21800/*"mstQuestRacePoint"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    214,
    (Il2CppObject *)StringLiteral_24403/*"userEventRace"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    215,
    (Il2CppObject *)StringLiteral_21706/*"mstEventScript"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    216,
    (Il2CppObject *)StringLiteral_21707/*"mstEventScriptRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    217,
    (Il2CppObject *)StringLiteral_21843/*"mstSpotPath"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    218,
    (Il2CppObject *)StringLiteral_21840/*"mstSpotAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    219,
    (Il2CppObject *)StringLiteral_23992/*"totalEventRace"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    220,
    (Il2CppObject *)StringLiteral_21687/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    221,
    (Il2CppObject *)StringLiteral_21918/*"mstVoicePlayGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    222,
    (Il2CppObject *)StringLiteral_21917/*"mstVoicePlayCond"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    223,
    (Il2CppObject *)StringLiteral_21745/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    224,
    (Il2CppObject *)StringLiteral_21869/*"mstSvtFlag"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    225,
    (Il2CppObject *)StringLiteral_21870/*"mstSvtFlagRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    226,
    (Il2CppObject *)StringLiteral_21670/*"mstEventLocationCampaign"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    227,
    (Il2CppObject *)StringLiteral_21585/*"mstCampaignInfo"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    228,
    (Il2CppObject *)StringLiteral_21622/*"mstDialogMessage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    229,
    (Il2CppObject *)StringLiteral_21872/*"mstSvtIndividuality"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    230,
    (Il2CppObject *)StringLiteral_21575/*"mstBoardMessage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    231,
    (Il2CppObject *)StringLiteral_21576/*"mstBoardMessageRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    232,
    (Il2CppObject *)StringLiteral_21712/*"mstEventSvtFatigue"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    233,
    (Il2CppObject *)StringLiteral_24393/*"userEventDeck"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    234,
    (Il2CppObject *)StringLiteral_21714/*"mstEventTower"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    235,
    (Il2CppObject *)StringLiteral_21715/*"mstEventTowerReward"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    236,
    (Il2CppObject *)StringLiteral_21642/*"mstEventBulletinBoard"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    237,
    (Il2CppObject *)StringLiteral_21643/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    238,
    (Il2CppObject *)StringLiteral_21660/*"mstEventFactory"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    239,
    (Il2CppObject *)StringLiteral_21829/*"mstShopGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    240,
    (Il2CppObject *)StringLiteral_21557/*"mstAuraEffect"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    241,
    (Il2CppObject *)StringLiteral_21558/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    242,
    (Il2CppObject *)StringLiteral_24400/*"userEventMissionFix"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    243,
    (Il2CppObject *)StringLiteral_22144/*"notEndEventMissionFix"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    244,
    (Il2CppObject *)StringLiteral_21625/*"mstEnemyMaster"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    245,
    (Il2CppObject *)StringLiteral_21626/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    246,
    (Il2CppObject *)StringLiteral_21892/*"mstSvtSkillRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    247,
    (Il2CppObject *)StringLiteral_21883/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    248,
    (Il2CppObject *)StringLiteral_21897/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    249,
    (Il2CppObject *)StringLiteral_21769/*"mstMapGimmickRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    250,
    (Il2CppObject *)StringLiteral_21609/*"mstCommandCode"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    251,
    (Il2CppObject *)StringLiteral_21861/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    252,
    (Il2CppObject *)StringLiteral_24377/*"userCommandCode"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    253,
    (Il2CppObject *)StringLiteral_24378/*"userCommandCodeCollection"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    254,
    (Il2CppObject *)StringLiteral_24451/*"userSvtCommandCode"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    255,
    (Il2CppObject *)StringLiteral_21611/*"mstCommandCodeSkill"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    256,
    (Il2CppObject *)StringLiteral_21612/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    257,
    (Il2CppObject *)StringLiteral_21610/*"mstCommandCodeComment"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    258,
    (Il2CppObject *)StringLiteral_21708/*"mstEventStatus"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    259,
    (Il2CppObject *)StringLiteral_21709/*"mstEventStatusQuest"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    260,
    (Il2CppObject *)StringLiteral_21616/*"mstCommonRestriction"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    261,
    (Il2CppObject *)StringLiteral_21685/*"mstEventPointBuff"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    262,
    (Il2CppObject *)StringLiteral_24411/*"userFollow"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    263,
    (Il2CppObject *)StringLiteral_21702/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    264,
    (Il2CppObject *)StringLiteral_22166/*"npcSvtEquip"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    265,
    (Il2CppObject *)StringLiteral_21645/*"mstEventCampaignRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    266,
    (Il2CppObject *)StringLiteral_21878/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    267,
    (Il2CppObject *)StringLiteral_21657/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    268,
    (Il2CppObject *)StringLiteral_21684/*"mstEventPointActivity"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    269,
    (Il2CppObject *)StringLiteral_21729/*"mstFuncCategory"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    270,
    (Il2CppObject *)StringLiteral_21799/*"mstQuestPickup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    271,
    (Il2CppObject *)StringLiteral_21721/*"mstEventUi"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    272,
    (Il2CppObject *)StringLiteral_21722/*"mstEventUiRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    273,
    (Il2CppObject *)StringLiteral_21723/*"mstEventUiValue"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    274,
    (Il2CppObject *)StringLiteral_21649/*"mstEventConquestReward"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    275,
    (Il2CppObject *)StringLiteral_22163/*"npcFollowerRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    276,
    (Il2CppObject *)StringLiteral_21637/*"mstEventBonusFilter"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    277,
    (Il2CppObject *)StringLiteral_21638/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    278,
    (Il2CppObject *)StringLiteral_21639/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    279,
    (Il2CppObject *)StringLiteral_24419/*"userGachaExtraCount"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    280,
    (Il2CppObject *)StringLiteral_21608/*"mstCommandCardRankParam"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    281,
    (Il2CppObject *)StringLiteral_24450/*"userSvtCommandCard"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    282,
    (Il2CppObject *)StringLiteral_21784/*"mstPrivilege"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    283,
    (Il2CppObject *)StringLiteral_24432/*"userPrivilege"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    284,
    (Il2CppObject *)StringLiteral_21790/*"mstQuestDateRange"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    285,
    (Il2CppObject *)StringLiteral_21688/*"mstEventPointUpper"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    286,
    (Il2CppObject *)StringLiteral_21689/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    287,
    (Il2CppObject *)StringLiteral_24437/*"userQuestRoute"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    288,
    (Il2CppObject *)StringLiteral_21640/*"mstEventBossStatusUi"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    289,
    (Il2CppObject *)StringLiteral_21615/*"mstCommonRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    290,
    (Il2CppObject *)StringLiteral_21812/*"mstQuestSpotRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    291,
    (Il2CppObject *)StringLiteral_21916/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    292,
    (Il2CppObject *)StringLiteral_21595/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    293,
    (Il2CppObject *)StringLiteral_21666/*"mstEventGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    294,
    (Il2CppObject *)StringLiteral_21553/*"mstAssetbundleKey"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    295,
    (Il2CppObject *)StringLiteral_23988/*"totalBoxGacha"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    296,
    (Il2CppObject *)StringLiteral_21896/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    297,
    (Il2CppObject *)StringLiteral_19139/*"eventSvtFatigue"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    298,
    (Il2CppObject *)StringLiteral_21700/*"mstEventRewardBg"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    299,
    (Il2CppObject *)StringLiteral_21661/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    300,
    (Il2CppObject *)StringLiteral_19128/*"eventBoostItemUsed"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    301,
    (Il2CppObject *)StringLiteral_21847/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    302,
    (Il2CppObject *)StringLiteral_21796/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    303,
    (Il2CppObject *)StringLiteral_21914/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    304,
    (Il2CppObject *)StringLiteral_21846/*"mstStageRemap"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    305,
    (Il2CppObject *)StringLiteral_18118/*"combineExp"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    306,
    (Il2CppObject *)StringLiteral_21634/*"mstEventBoardGameCell"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    307,
    (Il2CppObject *)StringLiteral_21635/*"mstEventBoardGameToken"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    308,
    (Il2CppObject *)StringLiteral_21636/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    309,
    (Il2CppObject *)StringLiteral_24390/*"userEventBoardGameToken"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    310,
    (Il2CppObject *)StringLiteral_21852/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    311,
    (Il2CppObject *)StringLiteral_21781/*"mstOpeningMovie"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    312,
    (Il2CppObject *)StringLiteral_21876/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    313,
    (Il2CppObject *)StringLiteral_22527/*"pickupUserFollower"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    314,
    (Il2CppObject *)StringLiteral_21860/*"mstSvtCollection"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    315,
    (Il2CppObject *)StringLiteral_21735/*"mstGachaBehavior"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    316,
    (Il2CppObject *)StringLiteral_21692/*"mstEventQuestCooltime"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    317,
    (Il2CppObject *)StringLiteral_24402/*"userEventQuestCooltime"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    318,
    (Il2CppObject *)StringLiteral_21577/*"mstBoost"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    319,
    (Il2CppObject *)StringLiteral_21922/*"mstWarBoard"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    320,
    (Il2CppObject *)StringLiteral_21946/*"mstWarBoardSquare"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    321,
    (Il2CppObject *)StringLiteral_21945/*"mstWarBoardRoad"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    322,
    (Il2CppObject *)StringLiteral_21948/*"mstWarBoardStage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    323,
    (Il2CppObject *)StringLiteral_21923/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    324,
    (Il2CppObject *)StringLiteral_21925/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    325,
    (Il2CppObject *)StringLiteral_21956/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    326,
    (Il2CppObject *)StringLiteral_21951/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    327,
    (Il2CppObject *)StringLiteral_21952/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    328,
    (Il2CppObject *)StringLiteral_21955/*"mstWarBoardStageWall"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    329,
    (Il2CppObject *)StringLiteral_21928/*"mstWarBoardAi"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    330,
    (Il2CppObject *)StringLiteral_21941/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    331,
    (Il2CppObject *)StringLiteral_21942/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    332,
    (Il2CppObject *)StringLiteral_21935/*"mstWarBoardItem"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    333,
    (Il2CppObject *)StringLiteral_21957/*"mstWarBoardTreasure"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    334,
    (Il2CppObject *)StringLiteral_21940/*"mstWarBoardQuest"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    335,
    (Il2CppObject *)StringLiteral_24626/*"warBoardData"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    336,
    (Il2CppObject *)StringLiteral_21934/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    337,
    (Il2CppObject *)StringLiteral_21926/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    338,
    (Il2CppObject *)StringLiteral_21924/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    339,
    (Il2CppObject *)StringLiteral_21944/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    340,
    (Il2CppObject *)StringLiteral_21954/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    341,
    (Il2CppObject *)StringLiteral_21679/*"mstEventPanelMap"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    342,
    (Il2CppObject *)StringLiteral_21680/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    343,
    (Il2CppObject *)StringLiteral_21682/*"mstEventPanelSpot"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    344,
    (Il2CppObject *)StringLiteral_21681/*"mstEventPanelScan"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    345,
    (Il2CppObject *)StringLiteral_21654/*"mstEventDigging"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    346,
    (Il2CppObject *)StringLiteral_21656/*"mstEventDiggingReward"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    347,
    (Il2CppObject *)StringLiteral_21655/*"mstEventDiggingBlock"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    348,
    (Il2CppObject *)StringLiteral_24394/*"userEventDigging"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    349,
    (Il2CppObject *)StringLiteral_21614/*"mstCommonConsume"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    350,
    (Il2CppObject *)StringLiteral_24397/*"userEventMap"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    351,
    (Il2CppObject *)StringLiteral_24406/*"userEventSpot"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    352,
    (Il2CppObject *)StringLiteral_21958/*"mstWarGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    353,
    (Il2CppObject *)StringLiteral_21875/*"mstSvtLimitImage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    354,
    (Il2CppObject *)StringLiteral_19655/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    355,
    (Il2CppObject *)StringLiteral_21806/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    356,
    (Il2CppObject *)StringLiteral_21554/*"mstAssist"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    357,
    (Il2CppObject *)StringLiteral_21930/*"mstWarBoardEffect"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    358,
    (Il2CppObject *)StringLiteral_21938/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    359,
    (Il2CppObject *)StringLiteral_17156/*"beforeBirthDay"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    360,
    (Il2CppObject *)StringLiteral_21759/*"mstLoginQuest"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    361,
    (Il2CppObject *)StringLiteral_21647/*"mstEventCombineCostume"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    362,
    (Il2CppObject *)StringLiteral_21953/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    363,
    (Il2CppObject *)StringLiteral_21895/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    364,
    (Il2CppObject *)StringLiteral_21833/*"mstSkillAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    365,
    (Il2CppObject *)StringLiteral_21877/*"mstSvtLvDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    366,
    (Il2CppObject *)StringLiteral_21734/*"mstGachaAppend"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    367,
    (Il2CppObject *)StringLiteral_24418/*"userGachaDrawLog"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    368,
    (Il2CppObject *)StringLiteral_21853/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    369,
    (Il2CppObject *)StringLiteral_24446/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    370,
    (Il2CppObject *)StringLiteral_24447/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    371,
    (Il2CppObject *)StringLiteral_21854/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    372,
    (Il2CppObject *)StringLiteral_21598/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    373,
    (Il2CppObject *)StringLiteral_21859/*"mstSvtCoin"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    374,
    (Il2CppObject *)StringLiteral_24448/*"userSvtCoin"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    375,
    (Il2CppObject *)StringLiteral_21851/*"mstSvtAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    376,
    (Il2CppObject *)StringLiteral_21905/*"mstTreasureBox"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    377,
    (Il2CppObject *)StringLiteral_21906/*"mstTreasureBoxGift"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    378,
    (Il2CppObject *)StringLiteral_21907/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    379,
    (Il2CppObject *)StringLiteral_24395/*"userEventExpedition"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    380,
    (Il2CppObject *)StringLiteral_21658/*"mstEventExpedition"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    381,
    (Il2CppObject *)StringLiteral_21659/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    382,
    (Il2CppObject *)StringLiteral_21697/*"mstEventRecipe"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    383,
    (Il2CppObject *)StringLiteral_21698/*"mstEventRecipeGift"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    384,
    (Il2CppObject *)StringLiteral_24396/*"userEventFortification"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    385,
    (Il2CppObject *)StringLiteral_21663/*"mstEventFortification"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    386,
    (Il2CppObject *)StringLiteral_21664/*"mstEventFortificationDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    387,
    (Il2CppObject *)StringLiteral_21665/*"mstEventFortificationSvt"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    388,
    (Il2CppObject *)StringLiteral_24457/*"userSvtVoicePlayed"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    389,
    (Il2CppObject *)StringLiteral_24311/*"updateProfileDialogInfo"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    390,
    (Il2CppObject *)StringLiteral_21879/*"mstSvtMaterialTd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    391,
    (Il2CppObject *)StringLiteral_21563/*"mstBattleMasterImage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    392,
    (Il2CppObject *)StringLiteral_24414/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    393,
    (Il2CppObject *)StringLiteral_24405/*"userEventRandomMission"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    394,
    (Il2CppObject *)StringLiteral_21690/*"mstEventProgressValue"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    395,
    (Il2CppObject *)StringLiteral_21880/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    396,
    (Il2CppObject *)StringLiteral_21696/*"mstEventRandomMission"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    397,
    (Il2CppObject *)StringLiteral_24417/*"userGachaDrawHistory"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    398,
    (Il2CppObject *)StringLiteral_24376/*"userCoinRoom"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    399,
    (Il2CppObject *)StringLiteral_21641/*"mstEventBuddyPoint"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    400,
    (Il2CppObject *)StringLiteral_21713/*"mstEventSvtPointRank"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    401,
    (Il2CppObject *)StringLiteral_24408/*"userEventSvtPoint"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    402,
    (Il2CppObject *)StringLiteral_21726/*"mstFieldMotion"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    403,
    (Il2CppObject *)StringLiteral_24385/*"userDeleteReservation"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    404,
    (Il2CppObject *)StringLiteral_21890/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    405,
    (Il2CppObject *)StringLiteral_21628/*"mstEquipAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    406,
    (Il2CppObject *)StringLiteral_21803/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    407,
    (Il2CppObject *)StringLiteral_24389/*"userEventAlloutBattle"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    408,
    (Il2CppObject *)StringLiteral_21809/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    409,
    (Il2CppObject *)StringLiteral_21564/*"mstBattleMessage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    410,
    (Il2CppObject *)StringLiteral_21565/*"mstBattleMessageGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    411,
    (Il2CppObject *)StringLiteral_24428/*"userNpcSvtRecord"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    412,
    (Il2CppObject *)StringLiteral_21584/*"mstBuffTypeDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    413,
    (Il2CppObject *)StringLiteral_21936/*"mstWarBoardMessage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    414,
    (Il2CppObject *)StringLiteral_21939/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    415,
    (Il2CppObject *)StringLiteral_21937/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    416,
    (Il2CppObject *)StringLiteral_21960/*"mstWarQuestSelection"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    417,
    (Il2CppObject *)StringLiteral_21950/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    418,
    (Il2CppObject *)StringLiteral_21810/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    419,
    (Il2CppObject *)StringLiteral_21808/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    420,
    (Il2CppObject *)StringLiteral_21548/*"mstAdCheckPoint"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    421,
    (Il2CppObject *)StringLiteral_21750/*"mstGiftDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    422,
    (Il2CppObject *)StringLiteral_21601/*"mstCombineLimitGift"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    423,
    (Il2CppObject *)StringLiteral_21650/*"mstEventCooltimeReward"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    424,
    (Il2CppObject *)StringLiteral_24391/*"userEventCooltimeReward"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    425,
    (Il2CppObject *)StringLiteral_21589/*"mstClassBoardClass"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    426,
    (Il2CppObject *)StringLiteral_21588/*"mstClassBoardBase"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    427,
    (Il2CppObject *)StringLiteral_21591/*"mstClassBoardLine"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    428,
    (Il2CppObject *)StringLiteral_21592/*"mstClassBoardLock"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    429,
    (Il2CppObject *)StringLiteral_21593/*"mstClassBoardSquare"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    430,
    (Il2CppObject *)StringLiteral_21590/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    431,
    (Il2CppObject *)StringLiteral_24375/*"userClassBoardSquare"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    432,
    (Il2CppObject *)StringLiteral_21857/*"mstSvtCardAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    433,
    (Il2CppObject *)StringLiteral_21770/*"mstMapLayer"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    434,
    (Il2CppObject *)StringLiteral_21842/*"mstSpotLayer"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    435,
    (Il2CppObject *)StringLiteral_21765/*"mstMapGimmickLayer"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    436,
    (Il2CppObject *)StringLiteral_21651/*"mstEventDataLostBattle"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    437,
    (Il2CppObject *)StringLiteral_21652/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    438,
    (Il2CppObject *)StringLiteral_24392/*"userEventDataLost"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    439,
    (Il2CppObject *)StringLiteral_21792/*"mstQuestHint"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    440,
    (Il2CppObject *)StringLiteral_21732/*"mstFuncTypeDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    441,
    (Il2CppObject *)StringLiteral_21583/*"mstBuffConvert"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    442,
    (Il2CppObject *)StringLiteral_21835/*"mstSkillGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    443,
    (Il2CppObject *)StringLiteral_21836/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    444,
    (Il2CppObject *)StringLiteral_21837/*"mstSkillIndividuality"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    445,
    (Il2CppObject *)StringLiteral_21817/*"mstRestrictionBase"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    446,
    (Il2CppObject *)StringLiteral_21819/*"mstRestrictionSlot"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    447,
    (Il2CppObject *)StringLiteral_21820/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    448,
    (Il2CppObject *)StringLiteral_21818/*"mstRestrictionMessage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    449,
    (Il2CppObject *)StringLiteral_21821/*"mstRestrictionWhole"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    450,
    (Il2CppObject *)StringLiteral_21730/*"mstFuncDisp"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    451,
    (Il2CppObject *)StringLiteral_21648/*"mstEventCommandAssist"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    452,
    (Il2CppObject *)StringLiteral_21677/*"mstEventMissionGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    453,
    (Il2CppObject *)StringLiteral_21602/*"mstCombineLimitRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    454,
    (Il2CppObject *)StringLiteral_21911/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    455,
    (Il2CppObject *)StringLiteral_21752/*"mstHeelPortrait"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    456,
    (Il2CppObject *)StringLiteral_24423/*"userHeelPortrait"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    457,
    (Il2CppObject *)StringLiteral_22168/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    458,
    (Il2CppObject *)StringLiteral_21739/*"mstGachaExtraGift"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    459,
    (Il2CppObject *)StringLiteral_21678/*"mstEventMural"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    460,
    (Il2CppObject *)StringLiteral_24559/*"viewWaveEnemy"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    461,
    (Il2CppObject *)StringLiteral_21574/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    462,
    (Il2CppObject *)StringLiteral_21570/*"mstBlankEarthGimmick"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    463,
    (Il2CppObject *)StringLiteral_21902/*"mstTerminalOverwrite"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    464,
    (Il2CppObject *)StringLiteral_19301/*"exchangeSvt"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    465,
    (Il2CppObject *)StringLiteral_21929/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    466,
    (Il2CppObject *)StringLiteral_21931/*"mstWarBoardEvent"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    467,
    (Il2CppObject *)StringLiteral_21932/*"mstWarBoardEventScript"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    468,
    (Il2CppObject *)StringLiteral_21949/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    469,
    (Il2CppObject *)StringLiteral_21947/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    470,
    (Il2CppObject *)StringLiteral_21927/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    471,
    (Il2CppObject *)StringLiteral_21943/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    472,
    (Il2CppObject *)StringLiteral_21933/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    473,
    (Il2CppObject *)StringLiteral_21886/*"mstSvtProfilePush"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    474,
    (Il2CppObject *)StringLiteral_21767/*"mstMapGimmickPath"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    475,
    (Il2CppObject *)StringLiteral_21768/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    476,
    (Il2CppObject *)StringLiteral_21881/*"mstSvtOverwrite"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    477,
    (Il2CppObject *)StringLiteral_21755/*"mstIndividualityPolicy"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    478,
    (Il2CppObject *)StringLiteral_21754/*"mstIndividualityPersonality"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    479,
    (Il2CppObject *)StringLiteral_21555/*"mstAttri"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    480,
    (Il2CppObject *)StringLiteral_21899/*"mstSvtVoicePattern"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    481,
    (Il2CppObject *)StringLiteral_24422/*"userGameCommon"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    482,
    (Il2CppObject *)StringLiteral_21884/*"mstSvtPhoto"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    483,
    (Il2CppObject *)StringLiteral_21774/*"mstMasterPhoto"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    484,
    (Il2CppObject *)StringLiteral_21959/*"mstWarMessage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    485,
    (Il2CppObject *)StringLiteral_21787/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    486,
    (Il2CppObject *)StringLiteral_21725/*"mstExcludeMotionCond"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    487,
    (Il2CppObject *)StringLiteral_24425/*"userInterruptionQuest"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    488,
    (Il2CppObject *)StringLiteral_21893/*"mstSvtTransform"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    489,
    (Il2CppObject *)StringLiteral_21771/*"mstMapUpdateSchedule"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    490,
    (Il2CppObject *)StringLiteral_21798/*"mstQuestPhasePresent"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    491,
    (Il2CppObject *)StringLiteral_24372/*"userAccountLinkage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    492,
    (Il2CppObject *)StringLiteral_21777/*"mstMissionNaviTransition"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    493,
    (Il2CppObject *)StringLiteral_21716/*"mstEventTradeGoods"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    494,
    (Il2CppObject *)StringLiteral_21717/*"mstEventTradePickup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    495,
    (Il2CppObject *)StringLiteral_21718/*"mstEventTradeStore"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    496,
    (Il2CppObject *)StringLiteral_24409/*"userEventTrade"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    497,
    (Il2CppObject *)StringLiteral_21776/*"mstMissionNaviQuest"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    498,
    (Il2CppObject *)StringLiteral_22489/*"paymentHistory"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    499,
    (Il2CppObject *)StringLiteral_24410/*"userExternalPaymentStone"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    500,
    (Il2CppObject *)StringLiteral_21797/*"mstQuestPhaseIndividuality"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    501,
    (Il2CppObject *)StringLiteral_24556/*"viewGachaFeaturedSvt"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    507,
    (Il2CppObject *)StringLiteral_21624/*"mstEffectMovie"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    502,
    (Il2CppObject *)StringLiteral_21742/*"mstGachaPickupCollateral"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    503,
    (Il2CppObject *)StringLiteral_21743/*"mstGachaPickupCollateralGroup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    504,
    (Il2CppObject *)StringLiteral_21566/*"mstBattlePoint"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    505,
    (Il2CppObject *)StringLiteral_21567/*"mstBattlePointPhase"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    506,
    (Il2CppObject *)StringLiteral_21855/*"mstSvtBattlePoint"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    508,
    (Il2CppObject *)StringLiteral_21783/*"mstPaymentLimit"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    509,
    (Il2CppObject *)StringLiteral_24429/*"userPaymentLimit"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    510,
    (Il2CppObject *)StringLiteral_21822/*"mstRoadmap"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    511,
    (Il2CppObject *)StringLiteral_24439/*"userRecommendSupport"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    513,
    (Il2CppObject *)StringLiteral_21813/*"mstRecommendAdviceMessage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    512,
    (Il2CppObject *)StringLiteral_21814/*"mstRecommendSupportQuest"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    514,
    (Il2CppObject *)StringLiteral_24438/*"userRecommendFollower"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    515,
    (Il2CppObject *)StringLiteral_21757/*"mstItemDropEfficiency"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    516,
    (Il2CppObject *)StringLiteral_21571/*"mstBlankEarthGimmickAdd"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    517,
    (Il2CppObject *)StringLiteral_21961/*"mstWarRelease"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    518,
    (Il2CppObject *)StringLiteral_21824/*"mstSelectBonusBase"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    519,
    (Il2CppObject *)StringLiteral_21823/*"mstSelectBonus"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    520,
    (Il2CppObject *)StringLiteral_21779/*"mstMyroomSvtSpecialImage"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  DataNameKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_DataNameKind_Kind__string__o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)DataNameKind_TypeInfo->static_fields, (int32_t)v1, v4, v5);
}


void __fastcall DataNameKind___ctor(DataNameKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall DataNameKind__GetName(int32_t kind, const MethodInfo *method)
{
  DataNameKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4A5A141 & 1) == 0 )
  {
    sub_1B885B0(&DataNameKind_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_4A5A141 = 1;
  }
  v3 = DataNameKind_TypeInfo;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
    v3 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1B8880C(0LL, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_319D1A0 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}