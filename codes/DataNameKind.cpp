void DataNameKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4C41E7A & 1) == 0 )
  {
    sub_1C37058(&DataNameKind_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
    sub_1C37058(&StringLiteral_21865/*"mstEventTradeGoods"*/);
    sub_1C37058(&StringLiteral_24552/*"userGameCommon"*/);
    sub_1C37058(&StringLiteral_21825/*"mstEventMissionConditionDetail"*/);
    sub_1C37058(&StringLiteral_22078/*"mstTreasureBoxGift"*/);
    sub_1C37058(&StringLiteral_21758/*"mstCommandCodeComment"*/);
    sub_1C37058(&StringLiteral_21821/*"mstEventMissionAction"*/);
    sub_1C37058(&StringLiteral_24518/*"userEventAlloutBattle"*/);
    sub_1C37058(&StringLiteral_22969/*"reachedWaveInfo"*/);
    sub_1C37058(&StringLiteral_21786/*"mstEventBonusFilterGroupInfo"*/);
    sub_1C37058(&StringLiteral_24569/*"userRecommendFollower"*/);
    sub_1C37058(&StringLiteral_21969/*"mstQuestReleaseOverwrite"*/);
    sub_1C37058(&StringLiteral_21929/*"mstMapGimmickRelease"*/);
    sub_1C37058(&StringLiteral_21892/*"mstGachaExtraGift"*/);
    sub_1C37058(&StringLiteral_22329/*"npcSvtFollowerIndividuality"*/);
    sub_1C37058(&StringLiteral_21788/*"mstEventBossStatusUi"*/);
    sub_1C37058(&StringLiteral_24578/*"userSvtAppendPassiveSkillLv"*/);
    sub_1C37058(&StringLiteral_21742/*"mstClassRelation"*/);
    sub_1C37058(&StringLiteral_21696/*"mstAiAct"*/);
    sub_1C37058(&StringLiteral_22023/*"mstSvtAnimationOverwrite"*/);
    sub_1C37058(&StringLiteral_21971/*"mstQuestRestriction"*/);
    sub_1C37058(&StringLiteral_21769/*"mstCv"*/);
    sub_1C37058(&StringLiteral_24523/*"userEventDigging"*/);
    sub_1C37058(&StringLiteral_24008/*"tblUserGame"*/);
    sub_1C37058(&StringLiteral_21799/*"mstEventDataLostBattle"*/);
    sub_1C37058(&StringLiteral_21789/*"mstEventBuddyPoint"*/);
    sub_1C37058(&StringLiteral_21716/*"mstBgmRelease"*/);
    sub_1C37058(&StringLiteral_22050/*"mstSvtMaterialTd"*/);
    sub_1C37058(&StringLiteral_21763/*"mstCommonRelease"*/);
    sub_1C37058(&StringLiteral_21877/*"mstFriendship"*/);
    sub_1C37058(&StringLiteral_24503/*"userClassBoardSquare"*/);
    sub_1C37058(&StringLiteral_21767/*"mstConstantLong"*/);
    sub_1C37058(&StringLiteral_21741/*"mstClassBoardSquare"*/);
    sub_1C37058(&StringLiteral_24582/*"userSvtCommandCode"*/);
    sub_1C37058(&StringLiteral_21952/*"mstQuestBehavior"*/);
    sub_1C37058(&StringLiteral_21917/*"mstItemDropEfficiency"*/);
    sub_1C37058(&StringLiteral_22049/*"mstSvtMaterialFolder"*/);
    sub_1C37058(&StringLiteral_22125/*"mstWarBoardStagePieceDetail"*/);
    sub_1C37058(&StringLiteral_21866/*"mstEventTradePickup"*/);
    sub_1C37058(&StringLiteral_21787/*"mstEventBonusFilterGroupMember"*/);
    sub_1C37058(&StringLiteral_21957/*"mstQuestHint"*/);
    sub_1C37058(&StringLiteral_21761/*"mstCommandSpell"*/);
    sub_1C37058(&StringLiteral_21694/*"mstAdCheckPoint"*/);
    sub_1C37058(&StringLiteral_21948/*"mstPrivilege"*/);
    sub_1C37058(&StringLiteral_21958/*"mstQuestHintOverwrite"*/);
    sub_1C37058(&StringLiteral_21723/*"mstBoardMessageRelease"*/);
    sub_1C37058(&StringLiteral_21898/*"mstGachaRelease"*/);
    sub_1C37058(&StringLiteral_24514/*"userDeleteReservation"*/);
    sub_1C37058(&StringLiteral_22077/*"mstTreasureBox"*/);
    sub_1C37058(&StringLiteral_24555/*"userImagePartsGroup"*/);
    sub_1C37058(&StringLiteral_21777/*"mstEquipExp"*/);
    sub_1C37058(&StringLiteral_21784/*"mstEventBoardGameTokenReward"*/);
    sub_1C37058(&StringLiteral_22030/*"mstSvtCoin"*/);
    sub_1C37058(&StringLiteral_22061/*"mstSvtScriptMultiple"*/);
    sub_1C37058(&StringLiteral_21936/*"mstMaterialFolder"*/);
    sub_1C37058(&StringLiteral_21795/*"mstEventCombineCostume"*/);
    sub_1C37058(&StringLiteral_21954/*"mstQuestDateRange"*/);
    sub_1C37058(&StringLiteral_22121/*"mstWarBoardStageBoss"*/);
    sub_1C37058(&StringLiteral_21730/*"mstBuffConvert"*/);
    sub_1C37058(&StringLiteral_21980/*"mstQuestUseItemPickup"*/);
    sub_1C37058(&StringLiteral_21703/*"mstAuraEffect"*/);
    sub_1C37058(&StringLiteral_21843/*"mstEventRaceResult"*/);
    sub_1C37058(&StringLiteral_21993/*"mstSetItem"*/);
    sub_1C37058(&StringLiteral_22326/*"npcSvtDisplayTypeDetail"*/);
    sub_1C37058(&StringLiteral_22015/*"mstStaffPhotoCostume"*/);
    sub_1C37058(&StringLiteral_21903/*"mstGalleryFolderRelease"*/);
    sub_1C37058(&StringLiteral_21983/*"mstRecover"*/);
    sub_1C37058(&StringLiteral_21858/*"mstEventStatusQuest"*/);
    sub_1C37058(&StringLiteral_24520/*"userEventCooltimeReward"*/);
    sub_1C37058(&StringLiteral_21946/*"mstPaymentLimit"*/);
    sub_1C37058(&StringLiteral_22099/*"mstWarBoardActionTrendGroup"*/);
    sub_1C37058(&StringLiteral_24568/*"userQuestRoute"*/);
    sub_1C37058(&StringLiteral_22007/*"mstSkillLv"*/);
    sub_1C37058(&StringLiteral_22042/*"mstSvtGroup"*/);
    sub_1C37058(&StringLiteral_22086/*"mstVoiceClosedMessage"*/);
    sub_1C37058(&StringLiteral_21808/*"mstEventExpeditionPiece"*/);
    sub_1C37058(&StringLiteral_21951/*"mstQuestAutoOrganizationAdjust"*/);
    sub_1C37058(&StringLiteral_22051/*"mstSvtMultiPortrait"*/);
    sub_1C37058(&StringLiteral_21811/*"mstEventFilter"*/);
    sub_1C37058(&StringLiteral_21938/*"mstMissionNaviQuest"*/);
    sub_1C37058(&StringLiteral_24570/*"userRecommendSupport"*/);
    sub_1C37058(&StringLiteral_24557/*"userItem"*/);
    sub_1C37058(&StringLiteral_21807/*"mstEventExpedition"*/);
    sub_1C37058(&StringLiteral_21842/*"mstEventRace"*/);
    sub_1C37058(&StringLiteral_21972/*"mstQuestRestrictionInfo"*/);
    sub_1C37058(&StringLiteral_21970/*"mstQuestReset"*/);
    sub_1C37058(&StringLiteral_24524/*"userEventExpedition"*/);
    sub_1C37058(&StringLiteral_21814/*"mstEventFortificationSvt"*/);
    sub_1C37058(&StringLiteral_22126/*"mstWarBoardStageReinforcements"*/);
    sub_1C37058(&StringLiteral_21736/*"mstClassBoardBase"*/);
    sub_1C37058(&StringLiteral_21773/*"mstEnemyMaster"*/);
    sub_1C37058(&StringLiteral_21704/*"mstAuraEffectPosOverwrite"*/);
    sub_1C37058(&StringLiteral_21987/*"mstRestrictionSlot"*/);
    sub_1C37058(&StringLiteral_21900/*"mstGachaSub"*/);
    sub_1C37058(&StringLiteral_21862/*"mstEventSvtPointRank"*/);
    sub_1C37058(&StringLiteral_21835/*"mstEventPointGroup"*/);
    sub_1C37058(&StringLiteral_21781/*"mstEventAdd"*/);
    sub_1C37058(&StringLiteral_21775/*"mstEquip"*/);
    sub_1C37058(&StringLiteral_21847/*"mstEventRecipeGift"*/);
    sub_1C37058(&StringLiteral_22073/*"mstTelop"*/);
    sub_1C37058(&StringLiteral_24580/*"userSvtCollection"*/);
    sub_1C37058(&StringLiteral_24530/*"userEventMissionFix"*/);
    sub_1C37058(&StringLiteral_21985/*"mstRestrictionBase"*/);
    sub_1C37058(&StringLiteral_22075/*"mstTips"*/);
    sub_1C37058(&StringLiteral_22014/*"mstStaffPhoto"*/);
    sub_1C37058(&StringLiteral_21705/*"mstBankShop"*/);
    sub_1C37058(&StringLiteral_21873/*"mstEventVoicePlay"*/);
    sub_1C37058(&StringLiteral_21979/*"mstQuestUseItemGroup"*/);
    sub_1C37058(&StringLiteral_21813/*"mstEventFortificationDetail"*/);
    sub_1C37058(&StringLiteral_24537/*"userEventSuperBoss"*/);
    sub_1C37058(&StringLiteral_21812/*"mstEventFortification"*/);
    sub_1C37058(&StringLiteral_21860/*"mstEventSvt"*/);
    sub_1C37058(&StringLiteral_22090/*"mstVoicePlayGroup"*/);
    sub_1C37058(&StringLiteral_24522/*"userEventDeck"*/);
    sub_1C37058(&StringLiteral_22009/*"mstSpotAdd"*/);
    sub_1C37058(&StringLiteral_21754/*"mstCombineSkill"*/);
    sub_1C37058(&StringLiteral_22118/*"mstWarBoardSquare"*/);
    sub_1C37058(&StringLiteral_21731/*"mstBuffTypeDetail"*/);
    sub_1C37058(&StringLiteral_22096/*"mstWarBoardActionPointClass"*/);
    sub_1C37058(&StringLiteral_21991/*"mstSelectBonus"*/);
    sub_1C37058(&StringLiteral_22065/*"mstSvtTransform"*/);
    sub_1C37058(&StringLiteral_24561/*"userPresentBox"*/);
    sub_1C37058(&StringLiteral_24538/*"userEventSvtPoint"*/);
    sub_1C37058(&StringLiteral_24129/*"totalEventPoint"*/);
    sub_1C37058(&StringLiteral_21756/*"mstCommandCardRankParam"*/);
    sub_1C37058(&StringLiteral_22101/*"mstWarBoardCommonRelease"*/);
    sub_1C37058(&StringLiteral_22021/*"mstSvt"*/);
    sub_1C37058(&StringLiteral_24571/*"userShop"*/);
    sub_1C37058(&StringLiteral_21782/*"mstEventBoardGameCell"*/);
    sub_1C37058(&StringLiteral_21841/*"mstEventQuestCooltime"*/);
    sub_1C37058(&StringLiteral_21883/*"mstFuncTypeDetail"*/);
    sub_1C37058(&StringLiteral_22018/*"mstStatusEffectPosOverwrite"*/);
    sub_1C37058(&StringLiteral_19142/*"eventBoostItemUsed"*/);
    sub_1C37058(&StringLiteral_21996/*"mstShopDetail"*/);
    sub_1C37058(&StringLiteral_21915/*"mstIndividualityPolicy"*/);
    sub_1C37058(&StringLiteral_21921/*"mstMapButton"*/);
    sub_1C37058(&StringLiteral_22128/*"mstWarBoardTacticalTrend"*/);
    sub_1C37058(&StringLiteral_22020/*"mstSubEquip"*/);
    sub_1C37058(&StringLiteral_22012/*"mstSpotPath"*/);
    sub_1C37058(&StringLiteral_21990/*"mstRoadmap"*/);
    sub_1C37058(&StringLiteral_21751/*"mstCombineMaterial"*/);
    sub_1C37058(&StringLiteral_21750/*"mstCombineLimitRelease"*/);
    sub_1C37058(&StringLiteral_22082/*"mstTreasureDeviceLv"*/);
    sub_1C37058(&StringLiteral_21863/*"mstEventTower"*/);
    sub_1C37058(&StringLiteral_22001/*"mstSkill"*/);
    sub_1C37058(&StringLiteral_24556/*"userInterruptionQuest"*/);
    sub_1C37058(&StringLiteral_22053/*"mstSvtPassiveSkill"*/);
    sub_1C37058(&StringLiteral_22067/*"mstSvtTreasureDeviceAdd"*/);
    sub_1C37058(&StringLiteral_21720/*"mstBlankEarthSpotAdd"*/);
    sub_1C37058(&StringLiteral_24565/*"userQuest"*/);
    sub_1C37058(&StringLiteral_21824/*"mstEventMissionCondition"*/);
    sub_1C37058(&StringLiteral_22095/*"mstWarBoardActionPoint"*/);
    sub_1C37058(&StringLiteral_24540/*"userExternalPaymentStone"*/);
    sub_1C37058(&StringLiteral_21744/*"mstClosedMessage"*/);
    sub_1C37058(&StringLiteral_21850/*"mstEventRewardExtra"*/);
    sub_1C37058(&StringLiteral_21833/*"mstEventPointActivity"*/);
    sub_1C37058(&StringLiteral_21840/*"mstEventQuest"*/);
    sub_1C37058(&StringLiteral_21711/*"mstBattleMessageGroup"*/);
    sub_1C37058(&StringLiteral_24691/*"viewQuestInfo"*/);
    sub_1C37058(&StringLiteral_22057/*"mstSvtProfilePush"*/);
    sub_1C37058(&StringLiteral_22081/*"mstTreasureDeviceDetail"*/);
    sub_1C37058(&StringLiteral_24501/*"userBlacklist"*/);
    sub_1C37058(&StringLiteral_21806/*"mstEventEquipSkillRelease"*/);
    sub_1C37058(&StringLiteral_24505/*"userCoinRoom"*/);
    sub_1C37058(&StringLiteral_21768/*"mstConstantStr"*/);
    sub_1C37058(&StringLiteral_21805/*"mstEventEquipSkillParts"*/);
    sub_1C37058(&StringLiteral_21902/*"mstGallery"*/);
    sub_1C37058(&StringLiteral_24586/*"userSvtGrand"*/);
    sub_1C37058(&StringLiteral_22019/*"mstStoneShop"*/);
    sub_1C37058(&StringLiteral_21931/*"mstMapUpdateSchedule"*/);
    sub_1C37058(&StringLiteral_22076/*"mstTotalLogin"*/);
    sub_1C37058(&StringLiteral_21944/*"mstOpeningMovie"*/);
    sub_1C37058(&StringLiteral_21766/*"mstConstant"*/);
    sub_1C37058(&StringLiteral_21978/*"mstQuestSpotRelease"*/);
    sub_1C37058(&StringLiteral_21759/*"mstCommandCodeSkill"*/);
    sub_1C37058(&StringLiteral_21949/*"mstQuest"*/);
    sub_1C37058(&StringLiteral_22071/*"mstSvtVoicePattern"*/);
    sub_1C37058(&StringLiteral_21869/*"mstEventTutorialCond"*/);
    sub_1C37058(&StringLiteral_21718/*"mstBlankEarthGimmickAdd"*/);
    sub_1C37058(&StringLiteral_22094/*"mstWarBoard"*/);
    sub_1C37058(&StringLiteral_21844/*"mstEventRaid"*/);
    sub_1C37058(&StringLiteral_21715/*"mstBgm"*/);
    sub_1C37058(&StringLiteral_21856/*"mstEventScriptRelease"*/);
    sub_1C37058(&StringLiteral_24564/*"userProfile"*/);
    sub_1C37058(&StringLiteral_21823/*"mstEventMissionAdd"*/);
    sub_1C37058(&StringLiteral_22091/*"mstVoiceRelease"*/);
    sub_1C37058(&StringLiteral_21967/*"mstQuestRandomGroup"*/);
    sub_1C37058(&StringLiteral_21939/*"mstMissionNaviTransition"*/);
    sub_1C37058(&StringLiteral_21998/*"mstShopRelease"*/);
    sub_1C37058(&StringLiteral_24590/*"userSvtStorage"*/);
    sub_1C37058(&StringLiteral_21896/*"mstGachaPickupCollateral"*/);
    sub_1C37058(&StringLiteral_21981/*"mstRecommendAdviceMessage"*/);
    sub_1C37058(&StringLiteral_21982/*"mstRecommendSupportQuest"*/);
    sub_1C37058(&StringLiteral_24577/*"userSvtAppendPassiveSkill"*/);
    sub_1C37058(&StringLiteral_22022/*"mstSvtAdd"*/);
    sub_1C37058(&StringLiteral_21908/*"mstGrandGraph"*/);
    sub_1C37058(&StringLiteral_22132/*"mstWarMessage"*/);
    sub_1C37058(&StringLiteral_21721/*"mstBlankEarthSpotNavimenu"*/);
    sub_1C37058(&StringLiteral_21709/*"mstBattleMasterImage"*/);
    sub_1C37058(&StringLiteral_22003/*"mstSkillDetail"*/);
    sub_1C37058(&StringLiteral_21933/*"mstMasterMission"*/);
    sub_1C37058(&StringLiteral_22054/*"mstSvtPassiveSkillRelease"*/);
    sub_1C37058(&StringLiteral_22008/*"mstSpot"*/);
    sub_1C37058(&StringLiteral_21820/*"mstEventMission"*/);
    sub_1C37058(&StringLiteral_21753/*"mstCombineQpSvtEquip"*/);
    sub_1C37058(&StringLiteral_21832/*"mstEventPoint"*/);
    sub_1C37058(&StringLiteral_21854/*"mstEventRewardSet"*/);
    sub_1C37058(&StringLiteral_21829/*"mstEventPanelMapDetail"*/);
    sub_1C37058(&StringLiteral_22028/*"mstSvtCardAdd"*/);
    sub_1C37058(&StringLiteral_21920/*"mstMap"*/);
    sub_1C37058(&StringLiteral_21802/*"mstEventDigging"*/);
    sub_1C37058(&StringLiteral_24546/*"userGacha"*/);
    sub_1C37058(&StringLiteral_21968/*"mstQuestRelease"*/);
    sub_1C37058(&StringLiteral_21801/*"mstEventDetail"*/);
    sub_1C37058(&StringLiteral_21913/*"mstImagePartsGroup"*/);
    sub_1C37058(&StringLiteral_21930/*"mstMapLayer"*/);
    sub_1C37058(&StringLiteral_22105/*"mstWarBoardFutureActionTrend"*/);
    sub_1C37058(&StringLiteral_22006/*"mstSkillIndividuality"*/);
    sub_1C37058(&StringLiteral_21727/*"mstBoxGachaBaseDetail"*/);
    sub_1C37058(&StringLiteral_24007/*"tblFriend"*/);
    sub_1C37058(&StringLiteral_17126/*"beforeBirthDay"*/);
    sub_1C37058(&StringLiteral_21818/*"mstEventItemDisplayRelease"*/);
    sub_1C37058(&StringLiteral_21904/*"mstGalleryResource"*/);
    sub_1C37058(&StringLiteral_17052/*"battle"*/);
    sub_1C37058(&StringLiteral_21997/*"mstShopGroup"*/);
    sub_1C37058(&StringLiteral_21702/*"mstAttriRelation"*/);
    sub_1C37058(&StringLiteral_24506/*"userCommandCode"*/);
    sub_1C37058(&StringLiteral_21793/*"mstEventCampaignRelease"*/);
    sub_1C37058(&StringLiteral_22039/*"mstSvtFilter"*/);
    sub_1C37058(&StringLiteral_21966/*"mstQuestRacePoint"*/);
    sub_1C37058(&StringLiteral_21867/*"mstEventTradeStore"*/);
    sub_1C37058(&StringLiteral_22500/*"otherUserGame"*/);
    sub_1C37058(&StringLiteral_21713/*"mstBattlePointPhase"*/);
    sub_1C37058(&StringLiteral_21817/*"mstEventItemDisplayGroup"*/);
    sub_1C37058(&StringLiteral_21733/*"mstCard"*/);
    sub_1C37058(&StringLiteral_21717/*"mstBlankEarthGimmick"*/);
    sub_1C37058(&StringLiteral_21710/*"mstBattleMessage"*/);
    sub_1C37058(&StringLiteral_21988/*"mstRestrictionSlotDetail"*/);
    sub_1C37058(&StringLiteral_21706/*"mstBanner"*/);
    sub_1C37058(&StringLiteral_21774/*"mstEnemyMasterBattle"*/);
    sub_1C37058(&StringLiteral_21816/*"mstEventItemDisplay"*/);
    sub_1C37058(&StringLiteral_21732/*"mstCampaignInfo"*/);
    sub_1C37058(&StringLiteral_22066/*"mstSvtTreasureDevice"*/);
    sub_1C37058(&StringLiteral_22064/*"mstSvtSkillRelease"*/);
    sub_1C37058(&StringLiteral_21947/*"mstPhotoFrame"*/);
    sub_1C37058(&StringLiteral_21765/*"mstCompleteMission"*/);
    sub_1C37058(&StringLiteral_21748/*"mstCombineLimit"*/);
    sub_1C37058(&StringLiteral_21909/*"mstGrandGraphDetail"*/);
    sub_1C37058(&StringLiteral_21725/*"mstBoxGacha"*/);
    sub_1C37058(&StringLiteral_22088/*"mstVoiceMaterialCond"*/);
    sub_1C37058(&StringLiteral_21885/*"mstGachaAdjustAdd"*/);
    sub_1C37058(&StringLiteral_21899/*"mstGachaStoryAdjust"*/);
    sub_1C37058(&StringLiteral_22084/*"mstUserExp"*/);
    sub_1C37058(&StringLiteral_21874/*"mstExcludeMotionCond"*/);
    sub_1C37058(&StringLiteral_22107/*"mstWarBoardItem"*/);
    sub_1C37058(&StringLiteral_21776/*"mstEquipAdd"*/);
    sub_1C37058(&StringLiteral_21770/*"mstDialogMessage"*/);
    sub_1C37058(&StringLiteral_22328/*"npcSvtFollower"*/);
    sub_1C37058(&StringLiteral_21708/*"mstBattleBg"*/);
    sub_1C37058(&StringLiteral_21737/*"mstClassBoardClass"*/);
    sub_1C37058(&StringLiteral_24531/*"userEventPoint"*/);
    sub_1C37058(&StringLiteral_22029/*"mstSvtChange"*/);
    sub_1C37058(&StringLiteral_22106/*"mstWarBoardIndividualityClass"*/);
    sub_1C37058(&StringLiteral_21887/*"mstGachaBaseCollateral"*/);
    sub_1C37058(&StringLiteral_21964/*"mstQuestPhasePresent"*/);
    sub_1C37058(&StringLiteral_21999/*"mstShopReset"*/);
    sub_1C37058(&StringLiteral_21827/*"mstEventMural"*/);
    sub_1C37058(&StringLiteral_21895/*"mstGachaPickup"*/);
    sub_1C37058(&StringLiteral_21918/*"mstItemSelect"*/);
    sub_1C37058(&StringLiteral_22043/*"mstSvtIndividuality"*/);
    sub_1C37058(&StringLiteral_24517/*"userEvent"*/);
    sub_1C37058(&StringLiteral_22129/*"mstWarBoardTreasure"*/);
    sub_1C37058(&StringLiteral_22048/*"mstSvtLvDetail"*/);
    sub_1C37058(&StringLiteral_22114/*"mstWarBoardRatingOffset"*/);
    sub_1C37058(&StringLiteral_21961/*"mstQuestPhaseDetail"*/);
    sub_1C37058(&StringLiteral_21995/*"mstShopAction"*/);
    sub_1C37058(&StringLiteral_21940/*"mstMyroomAdd"*/);
    sub_1C37058(&StringLiteral_21861/*"mstEventSvtFatigue"*/);
    sub_1C37058(&StringLiteral_21809/*"mstEventFactory"*/);
    sub_1C37058(&StringLiteral_24547/*"userGachaDrawHistory"*/);
    sub_1C37058(&StringLiteral_24542/*"userFollower"*/);
    sub_1C37058(&StringLiteral_22115/*"mstWarBoardRatingOffsetGroup"*/);
    sub_1C37058(&StringLiteral_24579/*"userSvtCoin"*/);
    sub_1C37058(&StringLiteral_21855/*"mstEventScript"*/);
    sub_1C37058(&StringLiteral_22062/*"mstSvtSkill"*/);
    sub_1C37058(&StringLiteral_22011/*"mstSpotLayer"*/);
    sub_1C37058(&StringLiteral_24581/*"userSvtCommandCard"*/);
    sub_1C37058(&StringLiteral_24566/*"userQuestInfo"*/);
    sub_1C37058(&StringLiteral_21771/*"mstEffect"*/);
    sub_1C37058(&StringLiteral_21916/*"mstItem"*/);
    sub_1C37058(&StringLiteral_21992/*"mstSelectBonusBase"*/);
    sub_1C37058(&StringLiteral_21836/*"mstEventPointGroupAdd"*/);
    sub_1C37058(&StringLiteral_21959/*"mstQuestMessage"*/);
    sub_1C37058(&StringLiteral_22323/*"npcFollowerRelease"*/);
    sub_1C37058(&StringLiteral_21880/*"mstFuncCategory"*/);
    sub_1C37058(&StringLiteral_22108/*"mstWarBoardMessage"*/);
    sub_1C37058(&StringLiteral_24551/*"userGame"*/);
    sub_1C37058(&StringLiteral_21905/*"mstGift"*/);
    sub_1C37058(&StringLiteral_22116/*"mstWarBoardReinforcements"*/);
    sub_1C37058(&StringLiteral_21783/*"mstEventBoardGameToken"*/);
    sub_1C37058(&StringLiteral_21925/*"mstMapGimmickLayer"*/);
    sub_1C37058(&StringLiteral_22032/*"mstSvtCommandCodeUnlock"*/);
    sub_1C37058(&StringLiteral_21700/*"mstAssist"*/);
    sub_1C37058(&StringLiteral_24692/*"viewWaveEnemy"*/);
    sub_1C37058(&StringLiteral_22327/*"npcSvtEquip"*/);
    sub_1C37058(&StringLiteral_21975/*"mstQuestScriptMaterialNext"*/);
    sub_1C37058(&StringLiteral_22038/*"mstSvtExp"*/);
    sub_1C37058(&StringLiteral_24576/*"userSvt"*/);
    sub_1C37058(&StringLiteral_24688/*"viewEnemy"*/);
    sub_1C37058(&StringLiteral_21871/*"mstEventUiRelease"*/);
    sub_1C37058(&StringLiteral_24130/*"totalEventRace"*/);
    sub_1C37058(&StringLiteral_21875/*"mstFieldMotion"*/);
    sub_1C37058(&StringLiteral_21845/*"mstEventRandomMission"*/);
    sub_1C37058(&StringLiteral_21852/*"mstEventRewardScene"*/);
    sub_1C37058(&StringLiteral_21878/*"mstFriendshipSvt"*/);
    sub_1C37058(&StringLiteral_21914/*"mstIndividualityPersonality"*/);
    sub_1C37058(&StringLiteral_21747/*"mstCombineCostume"*/);
    sub_1C37058(&StringLiteral_21746/*"mstCombineAppendPassiveSkill"*/);
    sub_1C37058(&StringLiteral_21804/*"mstEventDiggingReward"*/);
    sub_1C37058(&StringLiteral_22097/*"mstWarBoardActionTrend"*/);
    sub_1C37058(&StringLiteral_21714/*"mstBattleScript"*/);
    sub_1C37058(&StringLiteral_21886/*"mstGachaAppend"*/);
    sub_1C37058(&StringLiteral_22119/*"mstWarBoardSquareIndexGroup"*/);
    sub_1C37058(&StringLiteral_21879/*"mstFunc"*/);
    sub_1C37058(&StringLiteral_21797/*"mstEventConquestReward"*/);
    sub_1C37058(&StringLiteral_22102/*"mstWarBoardEffect"*/);
    sub_1C37058(&StringLiteral_22133/*"mstWarQuestSelection"*/);
    sub_1C37058(&StringLiteral_24511/*"userDeck"*/);
    sub_1C37058(&StringLiteral_21934/*"mstMasterMissionDisplayInfo"*/);
    sub_1C37058(&StringLiteral_22130/*"mstWarGroup"*/);
    sub_1C37058(&StringLiteral_21994/*"mstShop"*/);
    sub_1C37058(&StringLiteral_22111/*"mstWarBoardPartySkill"*/);
    sub_1C37058(&StringLiteral_24526/*"userEventItemLinkSvt"*/);
    sub_1C37058(&StringLiteral_21834/*"mstEventPointBuff"*/);
    sub_1C37058(&StringLiteral_21955/*"mstQuestExtension"*/);
    sub_1C37058(&StringLiteral_24575/*"userSupportDeck"*/);
    sub_1C37058(&StringLiteral_22013/*"mstSpotRoad"*/);
    sub_1C37058(&StringLiteral_22072/*"mstSvtVoiceRelation"*/);
    sub_1C37058(&StringLiteral_21749/*"mstCombineLimitGift"*/);
    sub_1C37058(&StringLiteral_21798/*"mstEventCooltimeReward"*/);
    sub_1C37058(&StringLiteral_21790/*"mstEventBulletinBoard"*/);
    sub_1C37058(&StringLiteral_21849/*"mstEventRewardBg"*/);
    sub_1C37058(&StringLiteral_21728/*"mstBoxGachaTalk"*/);
    sub_1C37058(&StringLiteral_24560/*"userPaymentLimit"*/);
    sub_1C37058(&StringLiteral_21881/*"mstFuncDisp"*/);
    sub_1C37058(&StringLiteral_22059/*"mstSvtScript"*/);
    sub_1C37058(&StringLiteral_21922/*"mstMapCond"*/);
    sub_1C37058(&StringLiteral_21941/*"mstMyroomAddBgDiff"*/);
    sub_1C37058(&StringLiteral_24525/*"userEventFortification"*/);
    sub_1C37058(&StringLiteral_22110/*"mstWarBoardOnboardSkill"*/);
    sub_1C37058(&StringLiteral_21893/*"mstGachaGroup"*/);
    sub_1C37058(&StringLiteral_24690/*"viewQuestEnemyInfo"*/);
    sub_1C37058(&StringLiteral_24500/*"userAccountLinkage"*/);
    sub_1C37058(&StringLiteral_22033/*"mstSvtComment"*/);
    sub_1C37058(&StringLiteral_22080/*"mstTreasureDevice"*/);
    sub_1C37058(&StringLiteral_24689/*"viewGachaFeaturedSvt"*/);
    sub_1C37058(&StringLiteral_24559/*"userNpcSvtRecord"*/);
    sub_1C37058(&StringLiteral_21712/*"mstBattlePoint"*/);
    sub_1C37058(&StringLiteral_21826/*"mstEventMissionGroup"*/);
    sub_1C37058(&StringLiteral_24567/*"userQuestRecord"*/);
    sub_1C37058(&StringLiteral_21986/*"mstRestrictionMessage"*/);
    sub_1C37058(&StringLiteral_21907/*"mstGiftDetail"*/);
    sub_1C37058(&StringLiteral_21901/*"mstGachaTicket"*/);
    sub_1C37058(&StringLiteral_22055/*"mstSvtPhoto"*/);
    sub_1C37058(&StringLiteral_22693/*"pickupUserFollower"*/);
    sub_1C37058(&StringLiteral_21857/*"mstEventStatus"*/);
    sub_1C37058(&StringLiteral_22034/*"mstSvtCommentAdd"*/);
    sub_1C37058(&StringLiteral_22052/*"mstSvtOverwrite"*/);
    sub_1C37058(&StringLiteral_22322/*"npcFollower"*/);
    sub_1C37058(&StringLiteral_21796/*"mstEventCommandAssist"*/);
    sub_1C37058(&StringLiteral_19154/*"eventSvtFatigue"*/);
    sub_1C37058(&StringLiteral_21890/*"mstGachaBonusSelectLineup"*/);
    sub_1C37058(&StringLiteral_21791/*"mstEventBulletinBoardRelease"*/);
    sub_1C37058(&StringLiteral_22037/*"mstSvtExceed"*/);
    sub_1C37058(&StringLiteral_22047/*"mstSvtLimitSpoilerProtection"*/);
    sub_1C37058(&StringLiteral_22070/*"mstSvtVoice"*/);
    sub_1C37058(&StringLiteral_21989/*"mstRestrictionWhole"*/);
    sub_1C37058(&StringLiteral_24549/*"userGachaExtraCount"*/);
    sub_1C37058(&StringLiteral_21927/*"mstMapGimmickPath"*/);
    sub_1C37058(&StringLiteral_21864/*"mstEventTowerReward"*/);
    sub_1C37058(&StringLiteral_21743/*"mstClassRelationOverwrite"*/);
    sub_1C37058(&StringLiteral_21695/*"mstAi"*/);
    sub_1C37058(&StringLiteral_24502/*"userBoxGacha"*/);
    sub_1C37058(&StringLiteral_22027/*"mstSvtCard"*/);
    sub_1C37058(&StringLiteral_24550/*"userGachaPickupCollateral"*/);
    sub_1C37058(&StringLiteral_24548/*"userGachaDrawLog"*/);
    sub_1C37058(&StringLiteral_22120/*"mstWarBoardStage"*/);
    sub_1C37058(&StringLiteral_24515/*"userEquip"*/);
    sub_1C37058(&StringLiteral_21851/*"mstEventRewardGuideRelease"*/);
    sub_1C37058(&StringLiteral_21738/*"mstClassBoardCommandSpell"*/);
    sub_1C37058(&StringLiteral_21932/*"mstMasterIndividualitySelect"*/);
    sub_1C37058(&StringLiteral_22134/*"mstWarRelease"*/);
    sub_1C37058(&StringLiteral_21888/*"mstGachaBehavior"*/);
    sub_1C37058(&StringLiteral_22092/*"mstWar"*/);
    sub_1C37058(&StringLiteral_21785/*"mstEventBonusFilter"*/);
    sub_1C37058(&StringLiteral_21977/*"mstQuestScriptRelease"*/);
    sub_1C37058(&StringLiteral_24527/*"userEventMap"*/);
    sub_1C37058(&StringLiteral_21831/*"mstEventPanelSpot"*/);
    sub_1C37058(&StringLiteral_21735/*"mstClass"*/);
    sub_1C37058(&StringLiteral_24499/*"userAccessary"*/);
    sub_1C37058(&StringLiteral_22045/*"mstSvtLimitAdd"*/);
    sub_1C37058(&StringLiteral_21976/*"mstQuestScriptMaterialOverwrite"*/);
    sub_1C37058(&StringLiteral_18122/*"combineExp"*/);
    sub_1C37058(&StringLiteral_24543/*"userFormation"*/);
    sub_1C37058(&StringLiteral_22109/*"mstWarBoardMessageScript"*/);
    sub_1C37058(&StringLiteral_21839/*"mstEventProgressValue"*/);
    sub_1C37058(&StringLiteral_24591/*"userSvtVoicePlayed"*/);
    sub_1C37058(&StringLiteral_22026/*"mstSvtBattlePoint"*/);
    sub_1C37058(&StringLiteral_22040/*"mstSvtFlag"*/);
    sub_1C37058(&StringLiteral_21722/*"mstBoardMessage"*/);
    sub_1C37058(&StringLiteral_21830/*"mstEventPanelScan"*/);
    sub_1C37058(&StringLiteral_22046/*"mstSvtLimitImage"*/);
    sub_1C37058(&StringLiteral_21803/*"mstEventDiggingBlock"*/);
    sub_1C37058(&StringLiteral_24535/*"userEventRandomMission"*/);
    sub_1C37058(&StringLiteral_21698/*"mstArea"*/);
    sub_1C37058(&StringLiteral_24131/*"totalEventRaid"*/);
    sub_1C37058(&StringLiteral_22304/*"notEndEventMissionFix"*/);
    sub_1C37058(&StringLiteral_22000/*"mstShopScript"*/);
    sub_1C37058(&StringLiteral_24528/*"userEventMission"*/);
    sub_1C37058(&StringLiteral_21935/*"mstMasterPhoto"*/);
    sub_1C37058(&StringLiteral_21822/*"mstEventMissionActionAdd"*/);
    sub_1C37058(&StringLiteral_21755/*"mstCombineTd"*/);
    sub_1C37058(&StringLiteral_24585/*"userSvtFirstGetTime"*/);
    sub_1C37058(&StringLiteral_21724/*"mstBoost"*/);
    sub_1C37058(&StringLiteral_22060/*"mstSvtScriptAdd"*/);
    sub_1C37058(&StringLiteral_21726/*"mstBoxGachaBase"*/);
    sub_1C37058(&StringLiteral_21707/*"mstBannerAdd"*/);
    sub_1C37058(&StringLiteral_21693/*"mstAccessary"*/);
    sub_1C37058(&StringLiteral_22083/*"mstTreasureDeviceSequenceWeight"*/);
    sub_1C37058(&StringLiteral_24533/*"userEventRace"*/);
    sub_1C37058(&StringLiteral_21956/*"mstQuestGroup"*/);
    sub_1C37058(&StringLiteral_21838/*"mstEventPointUpperRelease"*/);
    sub_1C37058(&StringLiteral_24589/*"userSvtLeader"*/);
    sub_1C37058(&StringLiteral_22044/*"mstSvtLimit"*/);
    sub_1C37058(&StringLiteral_24541/*"userFollow"*/);
    sub_1C37058(&StringLiteral_21819/*"mstEventLocationCampaign"*/);
    sub_1C37058(&StringLiteral_21752/*"mstCombineQp"*/);
    sub_1C37058(&StringLiteral_21780/*"mstEvent"*/);
    sub_1C37058(&StringLiteral_22041/*"mstSvtFlagRelease"*/);
    sub_1C37058(&StringLiteral_24544/*"userFriendPointGachaFreeDrawCampaignLog"*/);
    sub_1C37058(&StringLiteral_24563/*"userPrivilege"*/);
    sub_1C37058(&StringLiteral_21757/*"mstCommandCode"*/);
    sub_1C37058(&StringLiteral_22024/*"mstSvtAppendPassiveSkill"*/);
    sub_1C37058(&StringLiteral_21815/*"mstEventGroup"*/);
    sub_1C37058(&StringLiteral_21889/*"mstGachaBonusSelect"*/);
    sub_1C37058(&StringLiteral_24519/*"userEventBoardGameToken"*/);
    sub_1C37058(&StringLiteral_21937/*"mstMissionItemDisplay"*/);
    sub_1C37058(&StringLiteral_21942/*"mstMyroomSvtSpecialImage"*/);
    sub_1C37058(&StringLiteral_22117/*"mstWarBoardRoad"*/);
    sub_1C37058(&StringLiteral_21729/*"mstBuff"*/);
    sub_1C37058(&StringLiteral_24745/*"warBoardData"*/);
    sub_1C37058(&StringLiteral_21912/*"mstIllustrator"*/);
    sub_1C37058(&StringLiteral_24126/*"totalBoxGacha"*/);
    sub_1C37058(&StringLiteral_22058/*"mstSvtRarity"*/);
    sub_1C37058(&StringLiteral_22093/*"mstWarAdd"*/);
    sub_1C37058(&StringLiteral_21928/*"mstMapGimmickPathRelease"*/);
    sub_1C37058(&StringLiteral_24545/*"userFriendRequestHistory"*/);
    sub_1C37058(&StringLiteral_24497/*"user"*/);
    sub_1C37058(&StringLiteral_17365/*"boxGachaHistory"*/);
    sub_1C37058(&StringLiteral_21882/*"mstFuncGroup"*/);
    sub_1C37058(&StringLiteral_21762/*"mstCommonConsume"*/);
    sub_1C37058(&StringLiteral_22104/*"mstWarBoardEventScript"*/);
    sub_1C37058(&StringLiteral_21906/*"mstGiftAdd"*/);
    sub_1C37058(&StringLiteral_21870/*"mstEventUi"*/);
    sub_1C37058(&StringLiteral_22010/*"mstSpotImage"*/);
    sub_1C37058(&StringLiteral_22036/*"mstSvtCostumeRelease"*/);
    sub_1C37058(&StringLiteral_24504/*"userClassStatistics"*/);
    sub_1C37058(&StringLiteral_21923/*"mstMapGimmick"*/);
    sub_1C37058(&StringLiteral_21963/*"mstQuestPhaseIndividuality"*/);
    sub_1C37058(&StringLiteral_21868/*"mstEventTutorial"*/);
    sub_1C37058(&StringLiteral_22131/*"mstWarGroupIgnore"*/);
    sub_1C37058(&StringLiteral_22127/*"mstWarBoardStageWall"*/);
    sub_1C37058(&StringLiteral_24539/*"userEventTrade"*/);
    sub_1C37058(&StringLiteral_21697/*"mstAiField"*/);
    sub_1C37058(&StringLiteral_21876/*"mstFriendPointGachaAdjust"*/);
    sub_1C37058(&StringLiteral_22069/*"mstSvtTreasureDeviceRelease"*/);
    sub_1C37058(&StringLiteral_21960/*"mstQuestPhase"*/);
    sub_1C37058(&StringLiteral_24521/*"userEventDataLost"*/);
    sub_1C37058(&StringLiteral_22025/*"mstSvtAppendPassiveSkillUnlock"*/);
    sub_1C37058(&StringLiteral_22068/*"mstSvtTreasureDeviceDamage"*/);
    sub_1C37058(&StringLiteral_22016/*"mstStage"*/);
    sub_1C37058(&StringLiteral_21745/*"mstCombine"*/);
    sub_1C37058(&StringLiteral_21792/*"mstEventCampaign"*/);
    sub_1C37058(&StringLiteral_22124/*"mstWarBoardStageNpc"*/);
    sub_1C37058(&StringLiteral_22661/*"paymentHistory"*/);
    sub_1C37058(&StringLiteral_19320/*"exchangeSvt"*/);
    sub_1C37058(&StringLiteral_22017/*"mstStageRemap"*/);
    sub_1C37058(&StringLiteral_21984/*"mstRestriction"*/);
    sub_1C37058(&StringLiteral_21973/*"mstQuestScript"*/);
    sub_1C37058(&StringLiteral_21853/*"mstEventRewardSceneRelease"*/);
    sub_1C37058(&StringLiteral_22087/*"mstVoiceCond"*/);
    sub_1C37058(&StringLiteral_24574/*"userSubEquip"*/);
    sub_1C37058(&StringLiteral_21846/*"mstEventRecipe"*/);
    sub_1C37058(&StringLiteral_22035/*"mstSvtCostume"*/);
    sub_1C37058(&StringLiteral_22056/*"mstSvtProfile"*/);
    sub_1C37058(&StringLiteral_21764/*"mstCommonRestriction"*/);
    sub_1C37058(&StringLiteral_24553/*"userHeelPortrait"*/);
    sub_1C37058(&StringLiteral_22005/*"mstSkillGroupOverwrite"*/);
    sub_1C37058(&StringLiteral_24507/*"userCommandCodeCollection"*/);
    sub_1C37058(&StringLiteral_21760/*"mstCommandCodeSkillRelease"*/);
    sub_1C37058(&StringLiteral_21772/*"mstEffectMovie"*/);
    sub_1C37058(&StringLiteral_21965/*"mstQuestPickup"*/);
    sub_1C37058(&StringLiteral_22123/*"mstWarBoardStageLayout"*/);
    sub_1C37058(&StringLiteral_22098/*"mstWarBoardActionTrendCond"*/);
    sub_1C37058(&StringLiteral_21794/*"mstEventCombine"*/);
    sub_1C37058(&StringLiteral_22112/*"mstWarBoardQuest"*/);
    sub_1C37058(&StringLiteral_21953/*"mstQuestConsumeItem"*/);
    sub_1C37058(&StringLiteral_21962/*"mstQuestPhaseDetailAdd"*/);
    sub_1C37058(&StringLiteral_21911/*"mstHeelPortrait"*/);
    sub_1C37058(&StringLiteral_19321/*"exchangeSvtCoinGivenNum"*/);
    sub_1C37058(&StringLiteral_24562/*"userPresentHistory"*/);
    sub_1C37058(&StringLiteral_21734/*"mstChaldeaGatePickup"*/);
    sub_1C37058(&StringLiteral_22113/*"mstWarBoardRatingBase"*/);
    sub_1C37058(&StringLiteral_21894/*"mstGachaImage"*/);
    sub_1C37058(&StringLiteral_21778/*"mstEquipImage"*/);
    sub_1C37058(&StringLiteral_24534/*"userEventRaid"*/);
    sub_1C37058(&StringLiteral_22031/*"mstSvtCollection"*/);
    sub_1C37058(&StringLiteral_19691/*"friendshipQuestDialogInfo"*/);
    sub_1C37058(&StringLiteral_21943/*"mstNews"*/);
    sub_1C37058(&StringLiteral_21884/*"mstGacha"*/);
    sub_1C37058(&StringLiteral_22004/*"mstSkillGroup"*/);
    sub_1C37058(&StringLiteral_21910/*"mstGuide"*/);
    sub_1C37058(&StringLiteral_21897/*"mstGachaPickupCollateralGroup"*/);
    sub_1C37058(&StringLiteral_21740/*"mstClassBoardLock"*/);
    sub_1C37058(&StringLiteral_21837/*"mstEventPointUpper"*/);
    sub_1C37058(&StringLiteral_21719/*"mstBlankEarthSpot"*/);
    sub_1C37058(&StringLiteral_22074/*"mstTerminalOverwrite"*/);
    sub_1C37058(&StringLiteral_21779/*"mstEquipSkill"*/);
    sub_1C37058(&StringLiteral_21872/*"mstEventUiValue"*/);
    sub_1C37058(&StringLiteral_24509/*"userContinue"*/);
    sub_1C37058(&StringLiteral_21950/*"mstQuestAdd"*/);
    sub_1C37058(&StringLiteral_21739/*"mstClassBoardLine"*/);
    sub_1C37058(&StringLiteral_24440/*"updateProfileDialogInfo"*/);
    sub_1C37058(&StringLiteral_22085/*"mstVoice"*/);
    sub_1C37058(&StringLiteral_24529/*"userEventMissionConditionDetail"*/);
    sub_1C37058(&StringLiteral_21699/*"mstAssetbundleKey"*/);
    sub_1C37058(&StringLiteral_21828/*"mstEventPanelMap"*/);
    sub_1C37058(&StringLiteral_24558/*"userLogin"*/);
    sub_1C37058(&StringLiteral_21919/*"mstLoginQuest"*/);
    sub_1C37058(&StringLiteral_21945/*"mstPartialMaintenance"*/);
    sub_1C37058(&StringLiteral_24536/*"userEventSpot"*/);
    sub_1C37058(&StringLiteral_21848/*"mstEventReward"*/);
    sub_1C37058(&StringLiteral_21800/*"mstEventDataLostBattleReset"*/);
    sub_1C37058(&StringLiteral_21701/*"mstAttri"*/);
    sub_1C37058(&StringLiteral_22122/*"mstWarBoardStageDetail"*/);
    sub_1C37058(&StringLiteral_22063/*"mstSvtSkillAdd"*/);
    sub_1C37058(&StringLiteral_24532/*"userEventQuestCooltime"*/);
    sub_1C37058(&StringLiteral_21974/*"mstQuestScriptBranchMaterial"*/);
    sub_1C37058(&StringLiteral_21810/*"mstEventFatigueRecovery"*/);
    sub_1C37058(&StringLiteral_22100/*"mstWarBoardAi"*/);
    sub_1C37058(&StringLiteral_22079/*"mstTreasureBoxTalk"*/);
    sub_1C37058(&StringLiteral_22103/*"mstWarBoardEvent"*/);
    sub_1C37058(&StringLiteral_22089/*"mstVoicePlayCond"*/);
    sub_1C37058(&StringLiteral_21891/*"mstGachaDetail"*/);
    sub_1C37058(&StringLiteral_21859/*"mstEventSuperBoss"*/);
    sub_1C37058(&StringLiteral_22002/*"mstSkillAdd"*/);
    byte_4C41E7A = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_DataNameKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_342CC4C *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1C372B4(v2);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_22021/*"mstSvt"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_22033/*"mstSvtComment"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_22056/*"mstSvtProfile"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_22092/*"mstWar"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_17052/*"battle"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_22080/*"mstTreasureDevice"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_22044/*"mstSvtLimit"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_22066/*"mstSvtTreasureDevice"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_21735/*"mstClass"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_22059/*"mstSvtScript"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_22027/*"mstSvtCard"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_22062/*"mstSvtSkill"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_22053/*"mstSvtPassiveSkill"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_24576/*"userSvt"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_24590/*"userSvtStorage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_22016/*"mstStage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_22042/*"mstSvtGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_21719/*"mstBlankEarthSpot"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_21720/*"mstBlankEarthSpotAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_22008/*"mstSpot"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_22010/*"mstSpotImage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_22013/*"mstSpotRoad"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_21923/*"mstMapGimmick"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_21905/*"mstGift"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_21906/*"mstGiftAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_22020/*"mstSubEquip"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_24497/*"user"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_24551/*"userGame"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_24511/*"userDeck"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_24580/*"userSvtCollection"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_21877/*"mstFriendship"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_21884/*"mstGacha"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_21894/*"mstGachaImage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_24546/*"userGacha"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_24550/*"userGachaPickupCollateral"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24557/*"userItem"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_21916/*"mstItem"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_21901/*"mstGachaTicket"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_21885/*"mstGachaAdjustAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_21895/*"mstGachaPickup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_21876/*"mstFriendPointGachaAdjust"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_21887/*"mstGachaBaseCollateral"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_21693/*"mstAccessary"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_24499/*"userAccessary"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_24574/*"userSubEquip"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_24008/*"tblUserGame"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_21994/*"mstShop"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_22019/*"mstStoneShop"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_21705/*"mstBankShop"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_22000/*"mstShopScript"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_21775/*"mstEquip"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_21777/*"mstEquipExp"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_21779/*"mstEquipSkill"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_24515/*"userEquip"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_24543/*"userFormation"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_22001/*"mstSkill"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_22007/*"mstSkillLv"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_22003/*"mstSkillDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_21879/*"mstFunc"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_21729/*"mstBuff"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_21898/*"mstGachaRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_24565/*"userQuest"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_24566/*"userQuestInfo"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_24567/*"userQuestRecord"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_22084/*"mstUserExp"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_21943/*"mstNews"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_22073/*"mstTelop"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_22500/*"otherUserGame"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_24007/*"tblFriend"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_24561/*"userPresentBox"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_21780/*"mstEvent"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_21949/*"mstQuest"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_21950/*"mstQuestAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_21968/*"mstQuestRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_21960/*"mstQuestPhase"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_21961/*"mstQuestPhaseDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_21956/*"mstQuestGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_21967/*"mstQuestRandomGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_21953/*"mstQuestConsumeItem"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_21959/*"mstQuestMessage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_24691/*"viewQuestInfo"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_24688/*"viewEnemy"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_24690/*"viewQuestEnemyInfo"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_21698/*"mstArea"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_21715/*"mstBgm"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_21840/*"mstEventQuest"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_21792/*"mstEventCampaign"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_21752/*"mstCombineQp"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_21751/*"mstCombineMaterial"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_21794/*"mstEventCombine"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_22038/*"mstSvtExp"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_21754/*"mstCombineSkill"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_21755/*"mstCombineTd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_21912/*"mstIllustrator"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_21769/*"mstCv"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_22082/*"mstTreasureDeviceLv"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_22081/*"mstTreasureDeviceDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_24542/*"userFollower"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_22322/*"npcFollower"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_22328/*"npcSvtFollower"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_24517/*"userEvent"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_24564/*"userProfile"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_24571/*"userShop"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_24509/*"userContinue"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_21766/*"mstConstant"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_21767/*"mstConstantLong"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_21768/*"mstConstantStr"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_21761/*"mstCommandSpell"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_21695/*"mstAi"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_21696/*"mstAiAct"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_22070/*"mstSvtVoice"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_21702/*"mstAttriRelation"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_21742/*"mstClassRelation"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_21771/*"mstEffect"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_21778/*"mstEquipImage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_21748/*"mstCombineLimit"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_21733/*"mstCard"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_21753/*"mstCombineQpSvtEquip"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_22045/*"mstSvtLimitAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_22058/*"mstSvtRarity"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_21993/*"mstSetItem"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_21983/*"mstRecover"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_21706/*"mstBanner"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_21998/*"mstShopRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_21848/*"mstEventReward"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_21801/*"mstEventDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_21860/*"mstEventSvt"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_21725/*"mstBoxGacha"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_21726/*"mstBoxGachaBase"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_21728/*"mstBoxGachaTalk"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_24502/*"userBoxGacha"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17365/*"boxGachaHistory"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_21708/*"mstBattleBg"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_22075/*"mstTips"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_24558/*"userLogin"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_22085/*"mstVoice"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_21850/*"mstEventRewardExtra"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_21820/*"mstEventMission"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_21824/*"mstEventMissionCondition"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    140,
    (Il2CppObject *)StringLiteral_21825/*"mstEventMissionConditionDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    141,
    (Il2CppObject *)StringLiteral_21821/*"mstEventMissionAction"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    142,
    (Il2CppObject *)StringLiteral_21822/*"mstEventMissionActionAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    145,
    (Il2CppObject *)StringLiteral_21765/*"mstCompleteMission"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    143,
    (Il2CppObject *)StringLiteral_21823/*"mstEventMissionAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    144,
    (Il2CppObject *)StringLiteral_21854/*"mstEventRewardSet"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    146,
    (Il2CppObject *)StringLiteral_24528/*"userEventMission"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    147,
    (Il2CppObject *)StringLiteral_24529/*"userEventMissionConditionDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    148,
    (Il2CppObject *)StringLiteral_21727/*"mstBoxGachaBaseDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    149,
    (Il2CppObject *)StringLiteral_21744/*"mstClosedMessage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    150,
    (Il2CppObject *)StringLiteral_24589/*"userSvtLeader"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    151,
    (Il2CppObject *)StringLiteral_21882/*"mstFuncGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    152,
    (Il2CppObject *)StringLiteral_21844/*"mstEventRaid"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    153,
    (Il2CppObject *)StringLiteral_24131/*"totalEventRaid"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    154,
    (Il2CppObject *)StringLiteral_24534/*"userEventRaid"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    155,
    (Il2CppObject *)StringLiteral_21832/*"mstEventPoint"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    156,
    (Il2CppObject *)StringLiteral_21835/*"mstEventPointGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    157,
    (Il2CppObject *)StringLiteral_24129/*"totalEventPoint"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    158,
    (Il2CppObject *)StringLiteral_24531/*"userEventPoint"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    159,
    (Il2CppObject *)StringLiteral_24562/*"userPresentHistory"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    160,
    (Il2CppObject *)StringLiteral_21933/*"mstMasterMission"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    161,
    (Il2CppObject *)StringLiteral_22037/*"mstSvtExceed"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    162,
    (Il2CppObject *)StringLiteral_21945/*"mstPartialMaintenance"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    163,
    (Il2CppObject *)StringLiteral_21910/*"mstGuide"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    164,
    (Il2CppObject *)StringLiteral_21934/*"mstMasterMissionDisplayInfo"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    165,
    (Il2CppObject *)StringLiteral_21893/*"mstGachaGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    166,
    (Il2CppObject *)StringLiteral_21970/*"mstQuestReset"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    167,
    (Il2CppObject *)StringLiteral_22093/*"mstWarAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    168,
    (Il2CppObject *)StringLiteral_21816/*"mstEventItemDisplay"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    169,
    (Il2CppObject *)StringLiteral_21817/*"mstEventItemDisplayGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    170,
    (Il2CppObject *)StringLiteral_21818/*"mstEventItemDisplayRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    171,
    (Il2CppObject *)StringLiteral_21868/*"mstEventTutorial"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    172,
    (Il2CppObject *)StringLiteral_21869/*"mstEventTutorialCond"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    173,
    (Il2CppObject *)StringLiteral_22091/*"mstVoiceRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    174,
    (Il2CppObject *)StringLiteral_21859/*"mstEventSuperBoss"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    175,
    (Il2CppObject *)StringLiteral_24537/*"userEventSuperBoss"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    176,
    (Il2CppObject *)StringLiteral_21973/*"mstQuestScript"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    177,
    (Il2CppObject *)StringLiteral_21977/*"mstQuestScriptRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    178,
    (Il2CppObject *)StringLiteral_21936/*"mstMaterialFolder"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    179,
    (Il2CppObject *)StringLiteral_21984/*"mstRestriction"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    180,
    (Il2CppObject *)StringLiteral_21971/*"mstQuestRestriction"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    181,
    (Il2CppObject *)StringLiteral_22072/*"mstSvtVoiceRelation"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    182,
    (Il2CppObject *)StringLiteral_21996/*"mstShopDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    183,
    (Il2CppObject *)StringLiteral_22060/*"mstSvtScriptAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    184,
    (Il2CppObject *)StringLiteral_21745/*"mstCombine"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    185,
    (Il2CppObject *)StringLiteral_21697/*"mstAiField"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    186,
    (Il2CppObject *)StringLiteral_22034/*"mstSvtCommentAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    187,
    (Il2CppObject *)StringLiteral_21811/*"mstEventFilter"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    188,
    (Il2CppObject *)StringLiteral_24575/*"userSupportDeck"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    189,
    (Il2CppObject *)StringLiteral_21852/*"mstEventRewardScene"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    190,
    (Il2CppObject *)StringLiteral_21873/*"mstEventVoicePlay"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    191,
    (Il2CppObject *)StringLiteral_21900/*"mstGachaSub"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    192,
    (Il2CppObject *)StringLiteral_21891/*"mstGachaDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    193,
    (Il2CppObject *)StringLiteral_21889/*"mstGachaBonusSelect"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    194,
    (Il2CppObject *)StringLiteral_21890/*"mstGachaBonusSelectLineup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    195,
    (Il2CppObject *)StringLiteral_22029/*"mstSvtChange"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    196,
    (Il2CppObject *)StringLiteral_22087/*"mstVoiceCond"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    197,
    (Il2CppObject *)StringLiteral_21716/*"mstBgmRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    198,
    (Il2CppObject *)StringLiteral_21940/*"mstMyroomAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    199,
    (Il2CppObject *)StringLiteral_21995/*"mstShopAction"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    200,
    (Il2CppObject *)StringLiteral_21853/*"mstEventRewardSceneRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    201,
    (Il2CppObject *)StringLiteral_21920/*"mstMap"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    202,
    (Il2CppObject *)StringLiteral_21922/*"mstMapCond"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    203,
    (Il2CppObject *)StringLiteral_21921/*"mstMapButton"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    204,
    (Il2CppObject *)StringLiteral_21707/*"mstBannerAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    205,
    (Il2CppObject *)StringLiteral_21952/*"mstQuestBehavior"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    206,
    (Il2CppObject *)StringLiteral_21781/*"mstEventAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    207,
    (Il2CppObject *)StringLiteral_22076/*"mstTotalLogin"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    208,
    (Il2CppObject *)StringLiteral_22039/*"mstSvtFilter"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    209,
    (Il2CppObject *)StringLiteral_21747/*"mstCombineCostume"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    210,
    (Il2CppObject *)StringLiteral_22035/*"mstSvtCostume"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    211,
    (Il2CppObject *)StringLiteral_22036/*"mstSvtCostumeRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    212,
    (Il2CppObject *)StringLiteral_22014/*"mstStaffPhoto"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    213,
    (Il2CppObject *)StringLiteral_22015/*"mstStaffPhotoCostume"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    214,
    (Il2CppObject *)StringLiteral_24545/*"userFriendRequestHistory"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    215,
    (Il2CppObject *)StringLiteral_24501/*"userBlacklist"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    216,
    (Il2CppObject *)StringLiteral_21918/*"mstItemSelect"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    217,
    (Il2CppObject *)StringLiteral_21842/*"mstEventRace"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    218,
    (Il2CppObject *)StringLiteral_21843/*"mstEventRaceResult"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    219,
    (Il2CppObject *)StringLiteral_21966/*"mstQuestRacePoint"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    220,
    (Il2CppObject *)StringLiteral_24533/*"userEventRace"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    221,
    (Il2CppObject *)StringLiteral_21855/*"mstEventScript"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    222,
    (Il2CppObject *)StringLiteral_21856/*"mstEventScriptRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    223,
    (Il2CppObject *)StringLiteral_22012/*"mstSpotPath"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    224,
    (Il2CppObject *)StringLiteral_22009/*"mstSpotAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    225,
    (Il2CppObject *)StringLiteral_24130/*"totalEventRace"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    226,
    (Il2CppObject *)StringLiteral_21836/*"mstEventPointGroupAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    227,
    (Il2CppObject *)StringLiteral_22090/*"mstVoicePlayGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    228,
    (Il2CppObject *)StringLiteral_22089/*"mstVoicePlayCond"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    229,
    (Il2CppObject *)StringLiteral_21899/*"mstGachaStoryAdjust"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    230,
    (Il2CppObject *)StringLiteral_22040/*"mstSvtFlag"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    231,
    (Il2CppObject *)StringLiteral_22041/*"mstSvtFlagRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    232,
    (Il2CppObject *)StringLiteral_21819/*"mstEventLocationCampaign"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    233,
    (Il2CppObject *)StringLiteral_21732/*"mstCampaignInfo"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    234,
    (Il2CppObject *)StringLiteral_21770/*"mstDialogMessage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    235,
    (Il2CppObject *)StringLiteral_22043/*"mstSvtIndividuality"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    236,
    (Il2CppObject *)StringLiteral_21722/*"mstBoardMessage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    237,
    (Il2CppObject *)StringLiteral_21723/*"mstBoardMessageRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    238,
    (Il2CppObject *)StringLiteral_21861/*"mstEventSvtFatigue"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    239,
    (Il2CppObject *)StringLiteral_24522/*"userEventDeck"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    240,
    (Il2CppObject *)StringLiteral_21863/*"mstEventTower"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    241,
    (Il2CppObject *)StringLiteral_21864/*"mstEventTowerReward"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    242,
    (Il2CppObject *)StringLiteral_21790/*"mstEventBulletinBoard"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    243,
    (Il2CppObject *)StringLiteral_21791/*"mstEventBulletinBoardRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    244,
    (Il2CppObject *)StringLiteral_21809/*"mstEventFactory"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    245,
    (Il2CppObject *)StringLiteral_21997/*"mstShopGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    246,
    (Il2CppObject *)StringLiteral_21703/*"mstAuraEffect"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    247,
    (Il2CppObject *)StringLiteral_21704/*"mstAuraEffectPosOverwrite"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    248,
    (Il2CppObject *)StringLiteral_24530/*"userEventMissionFix"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    249,
    (Il2CppObject *)StringLiteral_22304/*"notEndEventMissionFix"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    250,
    (Il2CppObject *)StringLiteral_21773/*"mstEnemyMaster"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    251,
    (Il2CppObject *)StringLiteral_21774/*"mstEnemyMasterBattle"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    252,
    (Il2CppObject *)StringLiteral_22064/*"mstSvtSkillRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    253,
    (Il2CppObject *)StringLiteral_22054/*"mstSvtPassiveSkillRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    254,
    (Il2CppObject *)StringLiteral_22069/*"mstSvtTreasureDeviceRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    255,
    (Il2CppObject *)StringLiteral_21929/*"mstMapGimmickRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    256,
    (Il2CppObject *)StringLiteral_21757/*"mstCommandCode"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    257,
    (Il2CppObject *)StringLiteral_22032/*"mstSvtCommandCodeUnlock"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    258,
    (Il2CppObject *)StringLiteral_24506/*"userCommandCode"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    259,
    (Il2CppObject *)StringLiteral_24507/*"userCommandCodeCollection"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    260,
    (Il2CppObject *)StringLiteral_24582/*"userSvtCommandCode"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    261,
    (Il2CppObject *)StringLiteral_21759/*"mstCommandCodeSkill"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    262,
    (Il2CppObject *)StringLiteral_21760/*"mstCommandCodeSkillRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    263,
    (Il2CppObject *)StringLiteral_21758/*"mstCommandCodeComment"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    264,
    (Il2CppObject *)StringLiteral_21857/*"mstEventStatus"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    265,
    (Il2CppObject *)StringLiteral_21858/*"mstEventStatusQuest"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    266,
    (Il2CppObject *)StringLiteral_21764/*"mstCommonRestriction"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    267,
    (Il2CppObject *)StringLiteral_21834/*"mstEventPointBuff"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    268,
    (Il2CppObject *)StringLiteral_24541/*"userFollow"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    269,
    (Il2CppObject *)StringLiteral_21851/*"mstEventRewardGuideRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    270,
    (Il2CppObject *)StringLiteral_22327/*"npcSvtEquip"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    271,
    (Il2CppObject *)StringLiteral_21793/*"mstEventCampaignRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    272,
    (Il2CppObject *)StringLiteral_22049/*"mstSvtMaterialFolder"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    273,
    (Il2CppObject *)StringLiteral_21806/*"mstEventEquipSkillRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    274,
    (Il2CppObject *)StringLiteral_21833/*"mstEventPointActivity"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    275,
    (Il2CppObject *)StringLiteral_21880/*"mstFuncCategory"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    276,
    (Il2CppObject *)StringLiteral_21965/*"mstQuestPickup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    277,
    (Il2CppObject *)StringLiteral_21870/*"mstEventUi"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    278,
    (Il2CppObject *)StringLiteral_21871/*"mstEventUiRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    279,
    (Il2CppObject *)StringLiteral_21872/*"mstEventUiValue"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    280,
    (Il2CppObject *)StringLiteral_21797/*"mstEventConquestReward"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    281,
    (Il2CppObject *)StringLiteral_22323/*"npcFollowerRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    282,
    (Il2CppObject *)StringLiteral_21785/*"mstEventBonusFilter"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    283,
    (Il2CppObject *)StringLiteral_21786/*"mstEventBonusFilterGroupInfo"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    284,
    (Il2CppObject *)StringLiteral_21787/*"mstEventBonusFilterGroupMember"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    285,
    (Il2CppObject *)StringLiteral_24549/*"userGachaExtraCount"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    286,
    (Il2CppObject *)StringLiteral_21756/*"mstCommandCardRankParam"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    287,
    (Il2CppObject *)StringLiteral_24581/*"userSvtCommandCard"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    288,
    (Il2CppObject *)StringLiteral_21948/*"mstPrivilege"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    289,
    (Il2CppObject *)StringLiteral_24563/*"userPrivilege"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    290,
    (Il2CppObject *)StringLiteral_21954/*"mstQuestDateRange"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    291,
    (Il2CppObject *)StringLiteral_21837/*"mstEventPointUpper"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    292,
    (Il2CppObject *)StringLiteral_21838/*"mstEventPointUpperRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    293,
    (Il2CppObject *)StringLiteral_24568/*"userQuestRoute"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    294,
    (Il2CppObject *)StringLiteral_21788/*"mstEventBossStatusUi"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    295,
    (Il2CppObject *)StringLiteral_21763/*"mstCommonRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    296,
    (Il2CppObject *)StringLiteral_21978/*"mstQuestSpotRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    297,
    (Il2CppObject *)StringLiteral_22088/*"mstVoiceMaterialCond"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    298,
    (Il2CppObject *)StringLiteral_21743/*"mstClassRelationOverwrite"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    299,
    (Il2CppObject *)StringLiteral_21815/*"mstEventGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    300,
    (Il2CppObject *)StringLiteral_21699/*"mstAssetbundleKey"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    301,
    (Il2CppObject *)StringLiteral_24126/*"totalBoxGacha"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    302,
    (Il2CppObject *)StringLiteral_22068/*"mstSvtTreasureDeviceDamage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    303,
    (Il2CppObject *)StringLiteral_19154/*"eventSvtFatigue"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    304,
    (Il2CppObject *)StringLiteral_21849/*"mstEventRewardBg"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    305,
    (Il2CppObject *)StringLiteral_21810/*"mstEventFatigueRecovery"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    306,
    (Il2CppObject *)StringLiteral_19142/*"eventBoostItemUsed"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    307,
    (Il2CppObject *)StringLiteral_22018/*"mstStatusEffectPosOverwrite"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    308,
    (Il2CppObject *)StringLiteral_21962/*"mstQuestPhaseDetailAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    309,
    (Il2CppObject *)StringLiteral_22086/*"mstVoiceClosedMessage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    310,
    (Il2CppObject *)StringLiteral_22017/*"mstStageRemap"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    311,
    (Il2CppObject *)StringLiteral_18122/*"combineExp"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    312,
    (Il2CppObject *)StringLiteral_21782/*"mstEventBoardGameCell"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    313,
    (Il2CppObject *)StringLiteral_21783/*"mstEventBoardGameToken"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    314,
    (Il2CppObject *)StringLiteral_21784/*"mstEventBoardGameTokenReward"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    315,
    (Il2CppObject *)StringLiteral_24519/*"userEventBoardGameToken"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    316,
    (Il2CppObject *)StringLiteral_22023/*"mstSvtAnimationOverwrite"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    317,
    (Il2CppObject *)StringLiteral_21944/*"mstOpeningMovie"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    318,
    (Il2CppObject *)StringLiteral_22047/*"mstSvtLimitSpoilerProtection"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    319,
    (Il2CppObject *)StringLiteral_22693/*"pickupUserFollower"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    320,
    (Il2CppObject *)StringLiteral_22031/*"mstSvtCollection"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    321,
    (Il2CppObject *)StringLiteral_21888/*"mstGachaBehavior"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    322,
    (Il2CppObject *)StringLiteral_21841/*"mstEventQuestCooltime"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    323,
    (Il2CppObject *)StringLiteral_24532/*"userEventQuestCooltime"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    324,
    (Il2CppObject *)StringLiteral_21724/*"mstBoost"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    325,
    (Il2CppObject *)StringLiteral_22094/*"mstWarBoard"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    326,
    (Il2CppObject *)StringLiteral_22118/*"mstWarBoardSquare"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    327,
    (Il2CppObject *)StringLiteral_22117/*"mstWarBoardRoad"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    328,
    (Il2CppObject *)StringLiteral_22120/*"mstWarBoardStage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    329,
    (Il2CppObject *)StringLiteral_22095/*"mstWarBoardActionPoint"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    330,
    (Il2CppObject *)StringLiteral_22097/*"mstWarBoardActionTrend"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    331,
    (Il2CppObject *)StringLiteral_22128/*"mstWarBoardTacticalTrend"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    332,
    (Il2CppObject *)StringLiteral_22123/*"mstWarBoardStageLayout"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    333,
    (Il2CppObject *)StringLiteral_22124/*"mstWarBoardStageNpc"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    334,
    (Il2CppObject *)StringLiteral_22127/*"mstWarBoardStageWall"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    335,
    (Il2CppObject *)StringLiteral_22100/*"mstWarBoardAi"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    336,
    (Il2CppObject *)StringLiteral_22113/*"mstWarBoardRatingBase"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    337,
    (Il2CppObject *)StringLiteral_22114/*"mstWarBoardRatingOffset"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    338,
    (Il2CppObject *)StringLiteral_22107/*"mstWarBoardItem"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    339,
    (Il2CppObject *)StringLiteral_22129/*"mstWarBoardTreasure"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    340,
    (Il2CppObject *)StringLiteral_22112/*"mstWarBoardQuest"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    341,
    (Il2CppObject *)StringLiteral_24745/*"warBoardData"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    342,
    (Il2CppObject *)StringLiteral_22106/*"mstWarBoardIndividualityClass"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    343,
    (Il2CppObject *)StringLiteral_22098/*"mstWarBoardActionTrendCond"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    344,
    (Il2CppObject *)StringLiteral_22096/*"mstWarBoardActionPointClass"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    345,
    (Il2CppObject *)StringLiteral_22116/*"mstWarBoardReinforcements"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    346,
    (Il2CppObject *)StringLiteral_22126/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    347,
    (Il2CppObject *)StringLiteral_21828/*"mstEventPanelMap"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    348,
    (Il2CppObject *)StringLiteral_21829/*"mstEventPanelMapDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    349,
    (Il2CppObject *)StringLiteral_21831/*"mstEventPanelSpot"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    350,
    (Il2CppObject *)StringLiteral_21830/*"mstEventPanelScan"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    351,
    (Il2CppObject *)StringLiteral_21802/*"mstEventDigging"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    352,
    (Il2CppObject *)StringLiteral_21804/*"mstEventDiggingReward"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    353,
    (Il2CppObject *)StringLiteral_21803/*"mstEventDiggingBlock"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    354,
    (Il2CppObject *)StringLiteral_24523/*"userEventDigging"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    355,
    (Il2CppObject *)StringLiteral_21762/*"mstCommonConsume"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    356,
    (Il2CppObject *)StringLiteral_24527/*"userEventMap"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    357,
    (Il2CppObject *)StringLiteral_24536/*"userEventSpot"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    358,
    (Il2CppObject *)StringLiteral_22130/*"mstWarGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    359,
    (Il2CppObject *)StringLiteral_22046/*"mstSvtLimitImage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    360,
    (Il2CppObject *)StringLiteral_19691/*"friendshipQuestDialogInfo"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    361,
    (Il2CppObject *)StringLiteral_21972/*"mstQuestRestrictionInfo"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    362,
    (Il2CppObject *)StringLiteral_21700/*"mstAssist"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    363,
    (Il2CppObject *)StringLiteral_22102/*"mstWarBoardEffect"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    364,
    (Il2CppObject *)StringLiteral_22110/*"mstWarBoardOnboardSkill"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    365,
    (Il2CppObject *)StringLiteral_17126/*"beforeBirthDay"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    366,
    (Il2CppObject *)StringLiteral_21919/*"mstLoginQuest"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    367,
    (Il2CppObject *)StringLiteral_21795/*"mstEventCombineCostume"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    368,
    (Il2CppObject *)StringLiteral_22125/*"mstWarBoardStagePieceDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    369,
    (Il2CppObject *)StringLiteral_22067/*"mstSvtTreasureDeviceAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    370,
    (Il2CppObject *)StringLiteral_22002/*"mstSkillAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    371,
    (Il2CppObject *)StringLiteral_22048/*"mstSvtLvDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    372,
    (Il2CppObject *)StringLiteral_21886/*"mstGachaAppend"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    373,
    (Il2CppObject *)StringLiteral_24548/*"userGachaDrawLog"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    374,
    (Il2CppObject *)StringLiteral_22024/*"mstSvtAppendPassiveSkill"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    375,
    (Il2CppObject *)StringLiteral_24577/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    376,
    (Il2CppObject *)StringLiteral_24578/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    377,
    (Il2CppObject *)StringLiteral_22025/*"mstSvtAppendPassiveSkillUnlock"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    378,
    (Il2CppObject *)StringLiteral_21746/*"mstCombineAppendPassiveSkill"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    379,
    (Il2CppObject *)StringLiteral_22030/*"mstSvtCoin"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    380,
    (Il2CppObject *)StringLiteral_24579/*"userSvtCoin"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    381,
    (Il2CppObject *)StringLiteral_22022/*"mstSvtAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    382,
    (Il2CppObject *)StringLiteral_22077/*"mstTreasureBox"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    383,
    (Il2CppObject *)StringLiteral_22078/*"mstTreasureBoxGift"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    384,
    (Il2CppObject *)StringLiteral_22079/*"mstTreasureBoxTalk"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    385,
    (Il2CppObject *)StringLiteral_24524/*"userEventExpedition"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    386,
    (Il2CppObject *)StringLiteral_21807/*"mstEventExpedition"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    387,
    (Il2CppObject *)StringLiteral_21808/*"mstEventExpeditionPiece"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    388,
    (Il2CppObject *)StringLiteral_21846/*"mstEventRecipe"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    389,
    (Il2CppObject *)StringLiteral_21847/*"mstEventRecipeGift"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    390,
    (Il2CppObject *)StringLiteral_24525/*"userEventFortification"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    391,
    (Il2CppObject *)StringLiteral_21812/*"mstEventFortification"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    392,
    (Il2CppObject *)StringLiteral_21813/*"mstEventFortificationDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    393,
    (Il2CppObject *)StringLiteral_21814/*"mstEventFortificationSvt"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    394,
    (Il2CppObject *)StringLiteral_24591/*"userSvtVoicePlayed"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    395,
    (Il2CppObject *)StringLiteral_24440/*"updateProfileDialogInfo"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    396,
    (Il2CppObject *)StringLiteral_22050/*"mstSvtMaterialTd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    397,
    (Il2CppObject *)StringLiteral_21709/*"mstBattleMasterImage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    398,
    (Il2CppObject *)StringLiteral_24544/*"userFriendPointGachaFreeDrawCampaignLog"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    399,
    (Il2CppObject *)StringLiteral_24535/*"userEventRandomMission"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    400,
    (Il2CppObject *)StringLiteral_21839/*"mstEventProgressValue"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    401,
    (Il2CppObject *)StringLiteral_22051/*"mstSvtMultiPortrait"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    402,
    (Il2CppObject *)StringLiteral_21845/*"mstEventRandomMission"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    403,
    (Il2CppObject *)StringLiteral_24547/*"userGachaDrawHistory"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    404,
    (Il2CppObject *)StringLiteral_24505/*"userCoinRoom"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    405,
    (Il2CppObject *)StringLiteral_21789/*"mstEventBuddyPoint"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    406,
    (Il2CppObject *)StringLiteral_21862/*"mstEventSvtPointRank"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    407,
    (Il2CppObject *)StringLiteral_24538/*"userEventSvtPoint"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    408,
    (Il2CppObject *)StringLiteral_21875/*"mstFieldMotion"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    409,
    (Il2CppObject *)StringLiteral_24514/*"userDeleteReservation"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    410,
    (Il2CppObject *)StringLiteral_22061/*"mstSvtScriptMultiple"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    411,
    (Il2CppObject *)StringLiteral_21776/*"mstEquipAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    412,
    (Il2CppObject *)StringLiteral_21969/*"mstQuestReleaseOverwrite"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    413,
    (Il2CppObject *)StringLiteral_24518/*"userEventAlloutBattle"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    414,
    (Il2CppObject *)StringLiteral_21975/*"mstQuestScriptMaterialNext"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    415,
    (Il2CppObject *)StringLiteral_21710/*"mstBattleMessage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    416,
    (Il2CppObject *)StringLiteral_21711/*"mstBattleMessageGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    417,
    (Il2CppObject *)StringLiteral_24559/*"userNpcSvtRecord"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    418,
    (Il2CppObject *)StringLiteral_21731/*"mstBuffTypeDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    419,
    (Il2CppObject *)StringLiteral_22108/*"mstWarBoardMessage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    420,
    (Il2CppObject *)StringLiteral_22111/*"mstWarBoardPartySkill"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    421,
    (Il2CppObject *)StringLiteral_22109/*"mstWarBoardMessageScript"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    422,
    (Il2CppObject *)StringLiteral_22133/*"mstWarQuestSelection"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    423,
    (Il2CppObject *)StringLiteral_22122/*"mstWarBoardStageDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    424,
    (Il2CppObject *)StringLiteral_21976/*"mstQuestScriptMaterialOverwrite"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    425,
    (Il2CppObject *)StringLiteral_21974/*"mstQuestScriptBranchMaterial"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    426,
    (Il2CppObject *)StringLiteral_21694/*"mstAdCheckPoint"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    427,
    (Il2CppObject *)StringLiteral_21907/*"mstGiftDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    428,
    (Il2CppObject *)StringLiteral_21749/*"mstCombineLimitGift"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    429,
    (Il2CppObject *)StringLiteral_21798/*"mstEventCooltimeReward"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    430,
    (Il2CppObject *)StringLiteral_24520/*"userEventCooltimeReward"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    431,
    (Il2CppObject *)StringLiteral_21737/*"mstClassBoardClass"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    432,
    (Il2CppObject *)StringLiteral_21736/*"mstClassBoardBase"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    433,
    (Il2CppObject *)StringLiteral_21739/*"mstClassBoardLine"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    434,
    (Il2CppObject *)StringLiteral_21740/*"mstClassBoardLock"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    435,
    (Il2CppObject *)StringLiteral_21741/*"mstClassBoardSquare"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    436,
    (Il2CppObject *)StringLiteral_21738/*"mstClassBoardCommandSpell"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    437,
    (Il2CppObject *)StringLiteral_24503/*"userClassBoardSquare"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    438,
    (Il2CppObject *)StringLiteral_22028/*"mstSvtCardAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    439,
    (Il2CppObject *)StringLiteral_21930/*"mstMapLayer"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    440,
    (Il2CppObject *)StringLiteral_22011/*"mstSpotLayer"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    441,
    (Il2CppObject *)StringLiteral_21925/*"mstMapGimmickLayer"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    442,
    (Il2CppObject *)StringLiteral_21799/*"mstEventDataLostBattle"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    443,
    (Il2CppObject *)StringLiteral_21800/*"mstEventDataLostBattleReset"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    444,
    (Il2CppObject *)StringLiteral_24521/*"userEventDataLost"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    445,
    (Il2CppObject *)StringLiteral_21957/*"mstQuestHint"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    446,
    (Il2CppObject *)StringLiteral_21883/*"mstFuncTypeDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    447,
    (Il2CppObject *)StringLiteral_21730/*"mstBuffConvert"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    448,
    (Il2CppObject *)StringLiteral_22004/*"mstSkillGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    449,
    (Il2CppObject *)StringLiteral_22005/*"mstSkillGroupOverwrite"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    450,
    (Il2CppObject *)StringLiteral_22006/*"mstSkillIndividuality"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    451,
    (Il2CppObject *)StringLiteral_21985/*"mstRestrictionBase"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    452,
    (Il2CppObject *)StringLiteral_21987/*"mstRestrictionSlot"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    453,
    (Il2CppObject *)StringLiteral_21988/*"mstRestrictionSlotDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    454,
    (Il2CppObject *)StringLiteral_21986/*"mstRestrictionMessage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    455,
    (Il2CppObject *)StringLiteral_21989/*"mstRestrictionWhole"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    456,
    (Il2CppObject *)StringLiteral_21881/*"mstFuncDisp"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    457,
    (Il2CppObject *)StringLiteral_21796/*"mstEventCommandAssist"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    458,
    (Il2CppObject *)StringLiteral_21826/*"mstEventMissionGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    459,
    (Il2CppObject *)StringLiteral_21750/*"mstCombineLimitRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    460,
    (Il2CppObject *)StringLiteral_22083/*"mstTreasureDeviceSequenceWeight"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    461,
    (Il2CppObject *)StringLiteral_21911/*"mstHeelPortrait"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    462,
    (Il2CppObject *)StringLiteral_24553/*"userHeelPortrait"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    463,
    (Il2CppObject *)StringLiteral_22329/*"npcSvtFollowerIndividuality"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    464,
    (Il2CppObject *)StringLiteral_21892/*"mstGachaExtraGift"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    465,
    (Il2CppObject *)StringLiteral_21827/*"mstEventMural"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    466,
    (Il2CppObject *)StringLiteral_24692/*"viewWaveEnemy"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    467,
    (Il2CppObject *)StringLiteral_21721/*"mstBlankEarthSpotNavimenu"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    468,
    (Il2CppObject *)StringLiteral_21717/*"mstBlankEarthGimmick"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    469,
    (Il2CppObject *)StringLiteral_22074/*"mstTerminalOverwrite"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    470,
    (Il2CppObject *)StringLiteral_19320/*"exchangeSvt"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    471,
    (Il2CppObject *)StringLiteral_22101/*"mstWarBoardCommonRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    472,
    (Il2CppObject *)StringLiteral_22103/*"mstWarBoardEvent"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    473,
    (Il2CppObject *)StringLiteral_22104/*"mstWarBoardEventScript"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    474,
    (Il2CppObject *)StringLiteral_22121/*"mstWarBoardStageBoss"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    475,
    (Il2CppObject *)StringLiteral_22119/*"mstWarBoardSquareIndexGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    476,
    (Il2CppObject *)StringLiteral_22099/*"mstWarBoardActionTrendGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    477,
    (Il2CppObject *)StringLiteral_22115/*"mstWarBoardRatingOffsetGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    478,
    (Il2CppObject *)StringLiteral_22105/*"mstWarBoardFutureActionTrend"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    479,
    (Il2CppObject *)StringLiteral_22057/*"mstSvtProfilePush"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    480,
    (Il2CppObject *)StringLiteral_21927/*"mstMapGimmickPath"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    481,
    (Il2CppObject *)StringLiteral_21928/*"mstMapGimmickPathRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    482,
    (Il2CppObject *)StringLiteral_22052/*"mstSvtOverwrite"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    483,
    (Il2CppObject *)StringLiteral_21915/*"mstIndividualityPolicy"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    484,
    (Il2CppObject *)StringLiteral_21914/*"mstIndividualityPersonality"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    485,
    (Il2CppObject *)StringLiteral_21701/*"mstAttri"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    486,
    (Il2CppObject *)StringLiteral_22071/*"mstSvtVoicePattern"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    487,
    (Il2CppObject *)StringLiteral_24552/*"userGameCommon"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    488,
    (Il2CppObject *)StringLiteral_22055/*"mstSvtPhoto"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    489,
    (Il2CppObject *)StringLiteral_21935/*"mstMasterPhoto"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    490,
    (Il2CppObject *)StringLiteral_21947/*"mstPhotoFrame"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    491,
    (Il2CppObject *)StringLiteral_22132/*"mstWarMessage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    492,
    (Il2CppObject *)StringLiteral_21951/*"mstQuestAutoOrganizationAdjust"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    493,
    (Il2CppObject *)StringLiteral_21874/*"mstExcludeMotionCond"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    494,
    (Il2CppObject *)StringLiteral_24556/*"userInterruptionQuest"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    495,
    (Il2CppObject *)StringLiteral_22065/*"mstSvtTransform"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    496,
    (Il2CppObject *)StringLiteral_21931/*"mstMapUpdateSchedule"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    497,
    (Il2CppObject *)StringLiteral_21964/*"mstQuestPhasePresent"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    498,
    (Il2CppObject *)StringLiteral_24500/*"userAccountLinkage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    499,
    (Il2CppObject *)StringLiteral_21939/*"mstMissionNaviTransition"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    500,
    (Il2CppObject *)StringLiteral_21865/*"mstEventTradeGoods"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    501,
    (Il2CppObject *)StringLiteral_21866/*"mstEventTradePickup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    502,
    (Il2CppObject *)StringLiteral_21867/*"mstEventTradeStore"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    503,
    (Il2CppObject *)StringLiteral_24539/*"userEventTrade"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    504,
    (Il2CppObject *)StringLiteral_21938/*"mstMissionNaviQuest"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    505,
    (Il2CppObject *)StringLiteral_22661/*"paymentHistory"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    506,
    (Il2CppObject *)StringLiteral_24540/*"userExternalPaymentStone"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    507,
    (Il2CppObject *)StringLiteral_21963/*"mstQuestPhaseIndividuality"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    508,
    (Il2CppObject *)StringLiteral_24689/*"viewGachaFeaturedSvt"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    514,
    (Il2CppObject *)StringLiteral_21772/*"mstEffectMovie"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    509,
    (Il2CppObject *)StringLiteral_21896/*"mstGachaPickupCollateral"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    510,
    (Il2CppObject *)StringLiteral_21897/*"mstGachaPickupCollateralGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    511,
    (Il2CppObject *)StringLiteral_21712/*"mstBattlePoint"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    512,
    (Il2CppObject *)StringLiteral_21713/*"mstBattlePointPhase"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    513,
    (Il2CppObject *)StringLiteral_22026/*"mstSvtBattlePoint"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    515,
    (Il2CppObject *)StringLiteral_21946/*"mstPaymentLimit"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    516,
    (Il2CppObject *)StringLiteral_24560/*"userPaymentLimit"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    517,
    (Il2CppObject *)StringLiteral_21990/*"mstRoadmap"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    518,
    (Il2CppObject *)StringLiteral_24570/*"userRecommendSupport"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    520,
    (Il2CppObject *)StringLiteral_21981/*"mstRecommendAdviceMessage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    519,
    (Il2CppObject *)StringLiteral_21982/*"mstRecommendSupportQuest"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    521,
    (Il2CppObject *)StringLiteral_24569/*"userRecommendFollower"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    522,
    (Il2CppObject *)StringLiteral_21917/*"mstItemDropEfficiency"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    523,
    (Il2CppObject *)StringLiteral_21718/*"mstBlankEarthGimmickAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    524,
    (Il2CppObject *)StringLiteral_22134/*"mstWarRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    525,
    (Il2CppObject *)StringLiteral_21992/*"mstSelectBonusBase"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    526,
    (Il2CppObject *)StringLiteral_21991/*"mstSelectBonus"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    527,
    (Il2CppObject *)StringLiteral_21942/*"mstMyroomSvtSpecialImage"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    528,
    (Il2CppObject *)StringLiteral_21999/*"mstShopReset"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    529,
    (Il2CppObject *)StringLiteral_22326/*"npcSvtDisplayTypeDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    530,
    (Il2CppObject *)StringLiteral_21878/*"mstFriendshipSvt"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    531,
    (Il2CppObject *)StringLiteral_19321/*"exchangeSvtCoinGivenNum"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    532,
    (Il2CppObject *)StringLiteral_21734/*"mstChaldeaGatePickup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    533,
    (Il2CppObject *)StringLiteral_22131/*"mstWarGroupIgnore"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    534,
    (Il2CppObject *)StringLiteral_21913/*"mstImagePartsGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    535,
    (Il2CppObject *)StringLiteral_24555/*"userImagePartsGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    536,
    (Il2CppObject *)StringLiteral_21937/*"mstMissionItemDisplay"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    537,
    (Il2CppObject *)StringLiteral_21979/*"mstQuestUseItemGroup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    538,
    (Il2CppObject *)StringLiteral_21980/*"mstQuestUseItemPickup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    539,
    (Il2CppObject *)StringLiteral_24526/*"userEventItemLinkSvt"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    540,
    (Il2CppObject *)StringLiteral_21958/*"mstQuestHintOverwrite"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    541,
    (Il2CppObject *)StringLiteral_22969/*"reachedWaveInfo"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    542,
    (Il2CppObject *)StringLiteral_21902/*"mstGallery"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    543,
    (Il2CppObject *)StringLiteral_21904/*"mstGalleryResource"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    544,
    (Il2CppObject *)StringLiteral_22063/*"mstSvtSkillAdd"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    545,
    (Il2CppObject *)StringLiteral_21903/*"mstGalleryFolderRelease"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    546,
    (Il2CppObject *)StringLiteral_24585/*"userSvtFirstGetTime"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    547,
    (Il2CppObject *)StringLiteral_21955/*"mstQuestExtension"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    548,
    (Il2CppObject *)StringLiteral_24586/*"userSvtGrand"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    549,
    (Il2CppObject *)StringLiteral_21908/*"mstGrandGraph"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    550,
    (Il2CppObject *)StringLiteral_21909/*"mstGrandGraphDetail"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    551,
    (Il2CppObject *)StringLiteral_24504/*"userClassStatistics"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    552,
    (Il2CppObject *)StringLiteral_21805/*"mstEventEquipSkillParts"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    553,
    (Il2CppObject *)StringLiteral_21932/*"mstMasterIndividualitySelect"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    554,
    (Il2CppObject *)StringLiteral_21941/*"mstMyroomAddBgDiff"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    555,
    (Il2CppObject *)StringLiteral_21714/*"mstBattleScript"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__Add__);
  DataNameKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_DataNameKind_Kind__string__o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)DataNameKind_TypeInfo->static_fields, (int32_t)v1, v3, v4);
}


void DataNameKind___ctor(DataNameKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *DataNameKind__GetName(int32_t kind, const MethodInfo *method)
{
  DataNameKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4C41E79 & 1) == 0 )
  {
    sub_1C37058(&DataNameKind_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
    byte_4C41E79 = 1;
  }
  v3 = DataNameKind_TypeInfo;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
    v3 = DataNameKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1C372B4(0);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_342D580 *)Method_System_Collections_Generic_Dictionary_DataNameKind_Kind__string__get_Item__);
}