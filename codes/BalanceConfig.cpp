void __fastcall BalanceConfig___cctor(const MethodInfo *method)
{
  float v1; // s4
  float v2; // s5
  float v3; // s6
  float v4; // s7
  BalanceConfig_c *v5; // x8
  BalanceConfig_c *v6; // x8
  struct System_Int32_array **p_PresentBoxFilterSvtEquipMaterial; // x0
  BalanceConfig_c *v8; // x8
  struct System_Int32_array **p_ReprintLastWarRaidEventIdList; // x0
  BalanceConfig_c *v10; // x8
  struct System_Int32_array **p_EventTowerFadeOutDelayTime; // x0
  BalanceConfig_c *v12; // x8
  struct System_Int32_array **p_MainInterludeWarIdOnMaterial; // x0
  struct System_Int32_array **p_EventBoardGameDiceButtonPostion; // x0
  struct System_Int32_array **p_EventBoardGameMapIdList; // x0
  BalanceConfig_c *v16; // x8
  struct System_String_o **p_OrdealCallClearBgmName; // x0
  struct System_Int32_array **p_consumeStormPodSpotId; // x0
  struct System_Int32_array **p_StormPodHelpIds; // x0
  struct System_String_array **p_legacyAspectMovies; // x0
  struct System_Int32_array **p_fullScreenNPChrs; // x0
  struct System_Int32_array **p_fullScreenNPSeqIds; // x0
  struct System_String_array **p_UIStandFigureROffsetEffectNames; // x0
  struct System_String_array **p_UIStandFigureROffsetImages; // x0
  BalanceConfig_c *v25; // x8
  __int64 v26; // x0
  __int64 v27; // x1
  struct System_Int32_array *v28; // x1
  struct System_Int32_array **p_MainChaptersWithEventId; // x0
  struct System_Int32_array *v30; // x1
  struct System_Int32_array **p_TreasureDevicesForcedOpenEffect; // x0
  struct System_Int32_array *v32; // x1
  struct System_Int32_array **p_HeroineTreasureDeviceRankUpEffects; // x0
  BalanceConfig_c *v34; // x8
  System_Array_o *v35; // x19
  struct System_Int32_array **p_Extra1SortOrderClassIds; // x0
  System_Array_o *v37; // x19
  struct System_Int32_array **p_Extra2SortOrderClassIds; // x0
  BalanceConfig_c *v39; // x8
  __int64 v40; // x1
  struct System_Int32_array **p_NotUIChangeMapIds; // x0
  struct System_Int32_array *v42; // x1
  struct System_Int32_array **p_LimitSealedDialogMaxLimitOpenIds; // x0
  struct System_Int32_array *v44; // x1
  struct System_Int32_array **p_OrdealCallChapterFolderEventUIDispWarIds; // x0
  struct System_Int32_array *v46; // x1
  struct System_Int32_array **p_RecoveryFatigueDelayedChangeBgEvents; // x0
  struct System_Int32_array *v48; // x1
  struct System_Int32_array **p_noneDisplayFreeQuestMaterial; // x0
  System_Array_o *v50; // x19
  struct System_Int32_array **p_NotSendTrackEventAtWarIds; // x0
  System_Array_o *v52; // x19
  struct System_Int32_array **p_NotRequiredPlayWarIds; // x0
  BalanceConfig_c *v54; // x8
  __int64 v55; // x1
  struct System_Int32_array **p_EventItemNotDispItemGetEffect; // x0
  __int64 v57; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  System_RuntimeFieldHandle_o v59; // 0:w1.4
  System_RuntimeFieldHandle_o v60; // 0:w1.4
  System_RuntimeFieldHandle_o v61; // 0:w1.4
  System_RuntimeFieldHandle_o v62; // 0:w1.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4388C71 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__0576E2463551A09802222B33A5BA38F57896D9DD406B6DB32A10299A54B4B5BC);
    sub_B775C4(&Field__PrivateImplementationDetails__829FEE660E2799B8814849BCC3884998BB3651E975AC0C0D659AD53227033DBC);
    sub_B775C4(&Field__PrivateImplementationDetails__96039A68C58EBF2F40B99A5B8F9F313745D9C4E02164BB0FCE39159471432F4B);
    sub_B775C4(&Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA);
    sub_B775C4(&StringLiteral_2669/*"BGM_TITLE_5"*/);
    byte_4388C71 = 1;
  }
  BalanceConfig_TypeInfo->static_fields->CriticalRateToAddByQuickFirstBonus = 0;
  v5 = BalanceConfig_TypeInfo;
  v63.fields.r = 1.0;
  v63.fields.g = 1.0;
  BalanceConfig_TypeInfo->static_fields->ServantLimitMax = 4;
  v63.fields.b = 1.0;
  v5->static_fields->SvtSkillListMax = 3;
  v5->static_fields->SvtPassiveSkillListMax = 20;
  v5->static_fields->SvtEquipMax = 1;
  v5->static_fields->SvtEquipSkillListMax = 20;
  v5->static_fields->SvtCommandCardMax = 5;
  v5->static_fields->UserEquipSkillListMax = 3;
  v5->static_fields->SvtAppendPassiveSkillListMax = 5;
  v5->static_fields->UserEventItemMax = 999999999;
  v5->static_fields->UserPointEventMax = 999999999LL;
  v5->static_fields->UserEventActivityPointMax = 999999999LL;
  v5->static_fields->UserRaidDamagePointMax = 0xE8D4A50FFFLL;
  v5->static_fields->UserSuperBossDamagePointMax = 0xE8D4A50FFFLL;
  v5->static_fields->PresentBoxValidTime = 31536000;
  v5->static_fields->AllUserBoxGachaTotalMax = 999999999LL;
  v5->static_fields->DeckMemberMax = 6;
  v5->static_fields->DeckMainMemberMax = 3;
  v5->static_fields->SupportDeckMemberMax = 9;
  v5->static_fields->FixMainSupportDeckNum = 3;
  v5->static_fields->FixEventSupportDeckNum = 3;
  v5->static_fields->ServantFrameUseStone = 5;
  v5->static_fields->ServantEquipFrameUseStone = 5;
  v5->static_fields->ServantCombineMax = 5;
  v5->static_fields->RequestTopHomeExpirationDateSec = 600;
  v5->static_fields->ServerTimeOverLimit = 3600LL;
  v5->static_fields->SpendApRecvItemNum = 1;
  v5->static_fields->ServantSellSelectMax = 999;
  v5->static_fields->ServantWarehouseSelectMax = 999;
  v5->static_fields->ServantIdJekyll = 0;
  v5->static_fields->ServantIdHyde = 0;
  v5->static_fields->ServantIdSwimsuitMelt = 0;
  v5->static_fields->ServantIdMashu1 = 0;
  v5->static_fields->ServantIdMashu2 = 0;
  v5->static_fields->ServantIdMashu3 = 0;
  v5->static_fields->ServantIdMission1 = 0;
  v5->static_fields->TreasureDeviceIdMashu3 = 0;
  v5->static_fields->CostumeIdMashu = 12;
  v5->static_fields->MashuTdGradeUpQuestId = 0;
  v5->static_fields->MashuTdGradeUpQuestPhase = 0;
  v5->static_fields->ServantIdOberonChoco = 0;
  v5->static_fields->Lostbelt6ClearQuestId = 0;
  v5->static_fields->VtReleaseAt = 0LL;
  v5->static_fields->LvExceedItemId = 7999;
  v5->static_fields->LvExceedNeedItemNum = 1;
  v5->static_fields->LvExceedDewDropItemId = 7998;
  v5->static_fields->itemIdForShop13 = 46;
  v5->static_fields->ApSeedItemId = 103;
  v5->static_fields->ApSeedExchangeTargetItemId = 104;
  v5->static_fields->itemIdForShop15 = 48;
  v5->static_fields->FollowerRefreshRestTime = -1;
  v5->static_fields->DefaultFontSize = 30;
  v5->static_fields->TradeApDialogWarningLabelFontSize = 22;
  v5->static_fields->ShopDetailCheckDialogFontSize = 21;
  v5->static_fields->NoneExpireTime = 1893423600;
  v5->static_fields->MstMissionAlertTime = 259200;
  v5->static_fields->raceRewardRankMax = 3;
  v5->static_fields->LocationRewardDlgColumn = 7;
  v5->static_fields->ScenarioSpeedStep = 0.1;
  v5->static_fields->ScenarioSpeedLow = 0.5;
  v5->static_fields->ScenarioSpeedHigh = 1.5;
  v5->static_fields->ScenarioSpeedDefault = 1.0;
  v5->static_fields->ScenarioTextWaitStep = 0.01;
  v5->static_fields->ScenarioTextWaitLow = 0.0;
  v5->static_fields->ScenarioTextWaitHigh = 0.1;
  v5->static_fields->ScenarioTextWaitDefaultCn = 0.0;
  v5->static_fields->ScenarioTextWaitDefaultSt = 0.05;
  v5->static_fields->ScenarioTextSpeedStep = 1.0;
  v5->static_fields->ScenarioTextSpeedLow = 0.5;
  v5->static_fields->ScenarioTextSpeedHigh = 5.0;
  v5->static_fields->ScenarioTextSpeedDefault = 3.0;
  v5->static_fields->ScenarioScrollSpeedStep = 1.0;
  v5->static_fields->ScenarioScrollSpeedLow = 0.5;
  v5->static_fields->ScenarioScrollSpeedHigh = 5.0;
  v5->static_fields->ScenarioScrollSpeedDefault = 3.0;
  v5->static_fields->ShopNewItemAddDays = 9.0;
  v5->static_fields->PowerUpQuestWarId = 1001;
  v5->static_fields->AccountingInitializeTimeOut = 60;
  v5->static_fields->EquipGetEffectId = 0;
  v63.fields.a = 0.6;
  *(_OWORD *)&var40.methodPointer = 0uLL;
  UnityEngine_Color___ctor(v63, v1, v2, v3, v4, &var40);
  v6 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->MaskColor = *(struct UnityEngine_Color_o *)&var40.methodPointer;
  v6->static_fields->CommandCodeDetachingItemId = -1;
  v6->static_fields->FloatAfterDecimalPointMax = 1.0;
  v6->static_fields->FollowNum = 3;
  v6->static_fields->FollowFriendPoint = 25;
  p_PresentBoxFilterSvtEquipMaterial = &v6->static_fields->PresentBoxFilterSvtEquipMaterial;
  *p_PresentBoxFilterSvtEquipMaterial = 0LL;
  sub_B77560(p_PresentBoxFilterSvtEquipMaterial);
  v8 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->DisableFriendshipExceed = -1;
  v8->static_fields->SupportListMax = 20;
  v8->static_fields->EventDailyPointResetAt = 10;
  v8->static_fields->FriendPointSummonQpWarning = 500;
  v8->static_fields->FriendShipExceedItemId = 1000;
  v8->static_fields->SkilExceedItemId = 6999;
  v8->static_fields->stormPodItemId = 49;
  v8->static_fields->Torch1ItemId = 51;
  v8->static_fields->Torch2ItemId = 52;
  v8->static_fields->Torch3ItemId = 53;
  p_ReprintLastWarRaidEventIdList = &v8->static_fields->ReprintLastWarRaidEventIdList;
  *p_ReprintLastWarRaidEventIdList = 0LL;
  sub_B77560(p_ReprintLastWarRaidEventIdList);
  v10 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->CommandCardParamUpMax = 500;
  p_EventTowerFadeOutDelayTime = &v10->static_fields->EventTowerFadeOutDelayTime;
  *p_EventTowerFadeOutDelayTime = 0LL;
  sub_B77560(p_EventTowerFadeOutDelayTime);
  v12 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->EventTowerFadeOutPlayTime = 3.0;
  v12->static_fields->MaxFriendChocolateUse = 3;
  v12->static_fields->FriendPointBoostItemEfffectId = 3;
  v12->static_fields->MainInterludeWarId = 1004;
  p_MainInterludeWarIdOnMaterial = &v12->static_fields->MainInterludeWarIdOnMaterial;
  *p_MainInterludeWarIdOnMaterial = 0LL;
  sub_B77560(p_MainInterludeWarIdOnMaterial);
  p_EventBoardGameDiceButtonPostion = &BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion;
  *p_EventBoardGameDiceButtonPostion = 0LL;
  sub_B77560(p_EventBoardGameDiceButtonPostion);
  p_EventBoardGameMapIdList = &BalanceConfig_TypeInfo->static_fields->EventBoardGameMapIdList;
  *p_EventBoardGameMapIdList = 0LL;
  sub_B77560(p_EventBoardGameMapIdList);
  v16 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->TitleFlowOld = 0;
  v16->static_fields->StoryWarId = 1003;
  v16->static_fields->OrdealCallWarId = 401;
  p_OrdealCallClearBgmName = &v16->static_fields->OrdealCallClearBgmName;
  *p_OrdealCallClearBgmName = (struct System_String_o *)StringLiteral_2669/*"BGM_TITLE_5"*/;
  sub_B77560(p_OrdealCallClearBgmName);
  p_consumeStormPodSpotId = &BalanceConfig_TypeInfo->static_fields->consumeStormPodSpotId;
  *p_consumeStormPodSpotId = 0LL;
  sub_B77560(p_consumeStormPodSpotId);
  p_StormPodHelpIds = &BalanceConfig_TypeInfo->static_fields->StormPodHelpIds;
  *p_StormPodHelpIds = 0LL;
  sub_B77560(p_StormPodHelpIds);
  p_legacyAspectMovies = &BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
  *p_legacyAspectMovies = 0LL;
  sub_B77560(p_legacyAspectMovies);
  p_fullScreenNPChrs = &BalanceConfig_TypeInfo->static_fields->fullScreenNPChrs;
  *p_fullScreenNPChrs = 0LL;
  sub_B77560(p_fullScreenNPChrs);
  p_fullScreenNPSeqIds = &BalanceConfig_TypeInfo->static_fields->fullScreenNPSeqIds;
  *p_fullScreenNPSeqIds = 0LL;
  sub_B77560(p_fullScreenNPSeqIds);
  p_UIStandFigureROffsetEffectNames = &BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames;
  *p_UIStandFigureROffsetEffectNames = 0LL;
  sub_B77560(p_UIStandFigureROffsetEffectNames);
  p_UIStandFigureROffsetImages = &BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetImages;
  *p_UIStandFigureROffsetImages = 0LL;
  sub_B77560(p_UIStandFigureROffsetImages);
  v25 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->IsWarBoardAiCalcEvalSum = 0;
  v25->static_fields->WarBoardEvalFactorsAffectRatio = 10000;
  *(_QWORD *)&v25->static_fields->StoneFragmentExchangeNoticeDispMax = 999LL;
  v25->static_fields->MapCameraMoveTimeCoefficient = 1.7;
  v25->static_fields->MapCameraMoveTimeLogarithmBase = 11000;
  v25->static_fields->MapCameraMoveEasingType = 15;
  v25->static_fields->Camera2DResetDuration = 0.644;
  v26 = sub_B775DC(int___TypeInfo, 1LL);
  if ( !v26 )
    goto LABEL_18;
  v28 = (struct System_Int32_array *)v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v26 + 32) = 311;
  p_MainChaptersWithEventId = &BalanceConfig_TypeInfo->static_fields->MainChaptersWithEventId;
  *p_MainChaptersWithEventId = v28;
  sub_B77560(p_MainChaptersWithEventId);
  v26 = sub_B775DC(int___TypeInfo, 1LL);
  if ( !v26 )
    goto LABEL_18;
  v30 = (struct System_Int32_array *)v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v26 + 32) = 2800502;
  p_TreasureDevicesForcedOpenEffect = &BalanceConfig_TypeInfo->static_fields->TreasureDevicesForcedOpenEffect;
  *p_TreasureDevicesForcedOpenEffect = v30;
  sub_B77560(p_TreasureDevicesForcedOpenEffect);
  v26 = sub_B775DC(int___TypeInfo, 1LL);
  if ( !v26 )
    goto LABEL_18;
  v32 = (struct System_Int32_array *)v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v26 + 32) = 800106;
  p_HeroineTreasureDeviceRankUpEffects = &BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects;
  *p_HeroineTreasureDeviceRankUpEffects = v32;
  sub_B77560(p_HeroineTreasureDeviceRankUpEffects);
  v34 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->HeroineLimitCountOrtinaxRefurbished = 13;
  v34->static_fields->ClassBoardReleaseQuestId = 4000100;
  v35 = (System_Array_o *)sub_B775DC(int___TypeInfo, 4LL);
  v59.fields.value = Field__PrivateImplementationDetails__0576E2463551A09802222B33A5BA38F57896D9DD406B6DB32A10299A54B4B5BC;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v35, v59, 0LL);
  p_Extra1SortOrderClassIds = &BalanceConfig_TypeInfo->static_fields->Extra1SortOrderClassIds;
  *p_Extra1SortOrderClassIds = (struct System_Int32_array *)v35;
  sub_B77560(p_Extra1SortOrderClassIds);
  v37 = (System_Array_o *)sub_B775DC(int___TypeInfo, 4LL);
  v60.fields.value = Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v37, v60, 0LL);
  p_Extra2SortOrderClassIds = &BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds;
  *p_Extra2SortOrderClassIds = (struct System_Int32_array *)v37;
  sub_B77560(p_Extra2SortOrderClassIds);
  v39 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectMoveMaxDistance = 1024;
  v39->static_fields->ClassBoardCameraSelectSecMin = 0.1;
  v39->static_fields->ClassBoardCameraSelectSecMax = 1.0;
  v39->static_fields->ClassBoardCameraSelectEasingType = 5;
  v39->static_fields->ClassBoard2DCameraDefaultSize = 1.7;
  v40 = sub_B775DC(int___TypeInfo, 0LL);
  p_NotUIChangeMapIds = &BalanceConfig_TypeInfo->static_fields->NotUIChangeMapIds;
  *p_NotUIChangeMapIds = (struct System_Int32_array *)v40;
  sub_B77560(p_NotUIChangeMapIds);
  v26 = sub_B775DC(int___TypeInfo, 1LL);
  if ( !v26 )
    goto LABEL_18;
  v42 = (struct System_Int32_array *)v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v26 + 32) = 3300100;
  p_LimitSealedDialogMaxLimitOpenIds = &BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds;
  *p_LimitSealedDialogMaxLimitOpenIds = v42;
  sub_B77560(p_LimitSealedDialogMaxLimitOpenIds);
  v26 = sub_B775DC(int___TypeInfo, 1LL);
  if ( !v26 )
    goto LABEL_18;
  v44 = (struct System_Int32_array *)v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v26 + 32) = 402;
  p_OrdealCallChapterFolderEventUIDispWarIds = &BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds;
  *p_OrdealCallChapterFolderEventUIDispWarIds = v44;
  sub_B77560(p_OrdealCallChapterFolderEventUIDispWarIds);
  v26 = sub_B775DC(int___TypeInfo, 1LL);
  if ( !v26 )
    goto LABEL_18;
  v46 = (struct System_Int32_array *)v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v26 + 32) = 80432;
  p_RecoveryFatigueDelayedChangeBgEvents = &BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents;
  *p_RecoveryFatigueDelayedChangeBgEvents = v46;
  sub_B77560(p_RecoveryFatigueDelayedChangeBgEvents);
  v26 = sub_B775DC(int___TypeInfo, 1LL);
  if ( !v26 )
LABEL_18:
    sub_B7769C(v26, v27);
  v48 = (struct System_Int32_array *)v26;
  if ( !*(_DWORD *)(v26 + 24) )
  {
LABEL_19:
    v57 = sub_B776C8(v26);
    sub_B77668(v57, 0LL);
  }
  *(_DWORD *)(v26 + 32) = 94086401;
  p_noneDisplayFreeQuestMaterial = &BalanceConfig_TypeInfo->static_fields->noneDisplayFreeQuestMaterial;
  *p_noneDisplayFreeQuestMaterial = v48;
  sub_B77560(p_noneDisplayFreeQuestMaterial);
  v50 = (System_Array_o *)sub_B775DC(int___TypeInfo, 5LL);
  v61.fields.value = Field__PrivateImplementationDetails__829FEE660E2799B8814849BCC3884998BB3651E975AC0C0D659AD53227033DBC;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v50, v61, 0LL);
  p_NotSendTrackEventAtWarIds = &BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds;
  *p_NotSendTrackEventAtWarIds = (struct System_Int32_array *)v50;
  sub_B77560(p_NotSendTrackEventAtWarIds);
  BalanceConfig_TypeInfo->static_fields->StartingMemberFriendshipRate = 0;
  v52 = (System_Array_o *)sub_B775DC(int___TypeInfo, 6LL);
  v62.fields.value = Field__PrivateImplementationDetails__96039A68C58EBF2F40B99A5B8F9F313745D9C4E02164BB0FCE39159471432F4B;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v52, v62, 0LL);
  p_NotRequiredPlayWarIds = &BalanceConfig_TypeInfo->static_fields->NotRequiredPlayWarIds;
  *p_NotRequiredPlayWarIds = (struct System_Int32_array *)v52;
  sub_B77560(p_NotRequiredPlayWarIds);
  v54 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->IsEnableOldBlockShortestRoute = 0;
  v54->static_fields->IsEventPointMenu = 0;
  v55 = sub_B775DC(int___TypeInfo, 0LL);
  p_EventItemNotDispItemGetEffect = &BalanceConfig_TypeInfo->static_fields->EventItemNotDispItemGetEffect;
  *p_EventItemNotDispItemGetEffect = (struct System_Int32_array *)v55;
  sub_B77560(p_EventItemNotDispItemGetEffect);
}


void __fastcall BalanceConfig___ctor(BalanceConfig_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BalanceConfig__Initialize(const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v2; // x1
  ConstantMaster_o *MasterData_WarQuestSelectionMaster; // x19
  ConstantLongMaster_o *v4; // x21
  ConstantStrMaster_o *v5; // x20
  int32_t Value_28438584; // w22
  BalanceConfig_c *v7; // x8
  BalanceConfig_c *v8; // x8
  int64_t Value_28438008; // x0
  BalanceConfig_c *v10; // x8
  int32_t Value; // w0
  BalanceConfig_c *v12; // x8
  int32_t v13; // w0
  BalanceConfig_c *v14; // x8
  ManagerConfig_c *v15; // x0
  int64_t ServerTimeOverLimit; // x23
  int64_t SERVER_TIME_OVER_LIMIT; // x21
  BalanceConfig_c *v18; // x0
  int32_t v19; // w21
  int32_t v20; // w0
  BalanceConfig_c *v21; // x8
  int32_t v22; // w21
  int32_t v23; // w0
  System_String_o *v24; // x1
  struct System_String_o **p_UseTermsAgreementRequiredAppVersion; // x0
  System_String_o *v26; // x1
  struct System_String_o **p_UseTermsLatestVersion; // x0
  bool v28; // w9
  int v29; // w9
  System_Int32_array *ValueArray; // x1
  struct System_Int32_array **p_CombineServantSkillIds; // x0
  System_String_o *v32; // x0
  System_Int32_array *v33; // x1
  struct System_Int32_array **p_ServantIdsBirthdayBeforeValentine; // x0
  System_String_o *v35; // x0
  System_Int32_array *v36; // x0
  BalanceConfig_c *v37; // x8
  System_Int32_array *v38; // x21
  struct System_Int32_array **p_ServantIdsIgnoreFormChange; // x0
  int32_t v40; // w0
  BalanceConfig_c *v41; // x8
  int32_t v42; // w21
  int32_t v43; // w0
  int32_t v44; // w0
  BalanceConfig_c *v45; // x8
  System_String_o *v46; // x0
  BalanceConfig_c *v47; // x0
  float v48; // w21
  System_String_o *v49; // x0
  BalanceConfig_c *v50; // x0
  float v51; // w21
  System_String_o *v52; // x0
  BalanceConfig_c *v53; // x0
  float v54; // w21
  System_String_o *v55; // x0
  BalanceConfig_c *v56; // x0
  float v57; // w21
  int32_t v58; // w0
  BalanceConfig_c *v59; // x8
  int32_t v60; // w0
  BalanceConfig_c *v61; // x8
  System_String_o *v62; // x0
  System_String_o *v63; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x21
  BalanceConfig___c_c *v65; // x8
  struct BalanceConfig___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__220_0; // x22
  Il2CppObject *v68; // x23
  struct BalanceConfig___c_StaticFields *v69; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  System_Int32_array *v71; // x0
  BalanceConfig_c *v72; // x8
  System_Int32_array *v73; // x21
  struct System_Int32_array **p_PresentBoxFilterSvtEquipMaterial; // x0
  int32_t v75; // w0
  int32_t v76; // w21
  BalanceConfig_c *v77; // x0
  int32_t v78; // w0
  int32_t v79; // w21
  BalanceConfig_c *v80; // x0
  int32_t v81; // w0
  BalanceConfig_c *v82; // x8
  int32_t v83; // w21
  System_Int32_array *v84; // x1
  struct System_Int32_array **p_ReprintLastWarRaidEventIdList; // x0
  System_Int32_array *v86; // x1
  struct System_Int32_array **p_EventTowerFadeOutDelayTime; // x0
  System_Array_o *v88; // x21
  BalanceConfig_c *v89; // x0
  _QWORD *v90; // x0
  int32_t v91; // w0
  BalanceConfig_c *v92; // x8
  int v93; // w21
  System_Int32_array *v94; // x1
  struct System_Int32_array **p_EventBoardGameDiceButtonPostion; // x0
  unsigned int v96; // w8
  __int64 v97; // x21
  BalanceConfig_c *v98; // x0
  struct System_Int32_array **v99; // x0
  System_Int32_array *v100; // x0
  BalanceConfig_c *v101; // x8
  System_Int32_array *v102; // x21
  struct System_Int32_array **p_MainInterludeWarIdOnMaterial; // x0
  __int64 v104; // x21
  BalanceConfig_c *v105; // x0
  struct System_Int32_array **v106; // x0
  System_Int32_array *v107; // x0
  BalanceConfig_c *v108; // x8
  System_Int32_array *v109; // x21
  struct System_Int32_array **p_EventBoardGameMapIdList; // x0
  System_String_o *v111; // x21
  BalanceConfig_c *v112; // x0
  struct System_String_o **p_OrdealCallClearBgmName; // x0
  System_Array_o *v114; // x21
  System_Int32_array *v115; // x0
  BalanceConfig_c *v116; // x8
  System_Int32_array *v117; // x21
  struct System_Int32_array **p_consumeStormPodSpotId; // x0
  System_Int32_array *v119; // x1
  struct System_Int32_array **p_StormPodHelpIds; // x0
  System_String_array *ValueStringArray; // x1
  struct System_String_array **p_legacyAspectMovies; // x0
  System_Int32_array *v123; // x1
  struct System_Int32_array **p_fullScreenNPChrs; // x0
  System_Int32_array *v125; // x1
  struct System_Int32_array **p_fullScreenNPSeqIds; // x0
  System_String_o *v127; // x1
  struct System_String_o **p_IOS_ExaminationNewsUrl; // x0
  struct BalanceConfig_StaticFields *v129; // x9
  struct System_String_o **v130; // x0
  int32_t v131; // w0
  BalanceConfig_c *v132; // x8
  int32_t v133; // w21
  System_String_array *v134; // x1
  struct System_String_array **p_UIStandFigureROffsetEffectNames; // x0
  System_String_array *v136; // x1
  struct System_String_array **p_UIStandFigureROffsetImages; // x0
  BalanceConfig_c *v138; // x0
  __int64 v139; // x21
  __int64 v140; // x1
  __int64 v141; // x1
  __int64 v142; // x1
  __int64 v143; // x1
  __int64 v144; // x1
  __int64 v145; // x1
  __int64 v146; // x1
  BalanceConfig_c *v147; // x0
  struct System_String_array **v148; // x0
  __int64 v149; // x21
  __int64 v150; // x1
  __int64 v151; // x1
  __int64 v152; // x1
  __int64 v153; // x1
  __int64 v154; // x1
  __int64 v155; // x1
  __int64 v156; // x1
  __int64 v157; // x1
  __int64 v158; // x1
  __int64 v159; // x1
  __int64 v160; // x1
  __int64 v161; // x1
  __int64 v162; // x1
  __int64 v163; // x1
  __int64 v164; // x1
  __int64 v165; // x1
  __int64 v166; // x1
  __int64 v167; // x1
  BalanceConfig_c *v168; // x0
  struct System_String_array **v169; // x0
  int32_t v170; // w0
  BalanceConfig_c *v171; // x8
  int32_t v172; // w21
  bool v173; // w9
  int32_t v174; // w0
  BalanceConfig_c *v175; // x8
  int32_t v176; // w0
  BalanceConfig_c *v177; // x8
  int32_t v178; // w0
  BalanceConfig_c *v179; // x8
  int32_t v180; // w0
  BalanceConfig_c *v181; // x8
  System_Int32_array *v182; // x1
  struct System_Int32_array **p_MainChaptersWithEventId; // x0
  int32_t v184; // w0
  BalanceConfig_c *v185; // x8
  System_Int32_array *v186; // x1
  struct System_Int32_array **p_TreasureDevicesForcedOpenEffect; // x0
  System_Int32_array *v188; // x1
  struct System_Int32_array **p_HeroineTreasureDeviceRankUpEffects; // x0
  int32_t v190; // w0
  BalanceConfig_c *v191; // x8
  int32_t v192; // w0
  BalanceConfig_c *v193; // x8
  System_Int32_array *v194; // x1
  struct System_Int32_array **p_Extra1SortOrderClassIds; // x0
  System_Int32_array *v196; // x1
  struct System_Int32_array **p_Extra2SortOrderClassIds; // x0
  int32_t v198; // w0
  BalanceConfig_c *v199; // x8
  int32_t v200; // w0
  BalanceConfig_c *v201; // x8
  System_Int32_array *v202; // x1
  struct System_Int32_array **p_NotUIChangeMapIds; // x0
  System_Int32_array *v204; // x1
  struct System_Int32_array **p_LimitSealedDialogMaxLimitOpenIds; // x0
  System_Int32_array *v206; // x1
  struct System_Int32_array **p_OrdealCallChapterFolderEventUIDispWarIds; // x0
  System_Int32_array *v208; // x1
  struct System_Int32_array **p_RecoveryFatigueDelayedChangeBgEvents; // x0
  System_Int32_array *v210; // x1
  struct System_Int32_array **p_noneDisplayFreeQuestMaterial; // x0
  System_Int32_array *v212; // x1
  struct System_Int32_array **p_NotSendTrackEventAtWarIds; // x0
  int32_t v214; // w0
  BalanceConfig_c *v215; // x8
  System_Int32_array *v216; // x1
  struct System_Int32_array **p_NotRequiredPlayWarIds; // x0
  bool v218; // w9
  bool v219; // w9
  System_String_o *v220; // x1
  struct System_String_o **p_LoginQuestReturnTerminalDialogMessage; // x0
  System_Int32_array *v222; // x1
  struct System_Int32_array **p_EventItemNotDispItemGetEffect; // x0
  __int64 v224; // x0
  __int64 v225; // x0
  float result; // [xsp+Ch] [xbp-54h] BYREF
  System_RuntimeFieldHandle_o v227; // 0:w1.4
  System_RuntimeFieldHandle_o v228; // 0:w1.4

  if ( (byte_4388C70 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ConstantLongMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Func_string__int___ctor__);
    sub_B775C4(&System_Func_string__int__TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&System_Math_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__84DF4B72A51E01473BC25693E526BC603A140C4300062B4A7F64A9F7D00ABB95);
    sub_B775C4(&Field__PrivateImplementationDetails__A1FBA00A0F8840358C0A54605FFD365F75E3A3D7AFF25F48F474C4E89BB0B37D);
    sub_B775C4(&Method_BalanceConfig___c__Initialize_b__220_0__);
    sub_B775C4(&BalanceConfig___c_TypeInfo);
    sub_B775C4(&StringLiteral_8863/*"MAX_USER_ITEM"*/);
    sub_B775C4(&StringLiteral_8425/*"JEKYLL_SVT_ID"*/);
    sub_B775C4(&StringLiteral_1121/*"1053912:100:0"*/);
    sub_B775C4(&StringLiteral_13698/*"TREASURE_DEVICES_FORCED_OPEN_EFFECT"*/);
    sub_B775C4(&StringLiteral_12371/*"SHOP_DETAIL_CHECK_DIALOG_FONT_SIZE"*/);
    sub_B775C4(&StringLiteral_8556/*"LIMIT_SEALED_DIALOG_MAX_LIMIT_OPEN_IDS"*/);
    sub_B775C4(&StringLiteral_8862/*"MAX_USER_COMMAND_CODE"*/);
    sub_B775C4(&StringLiteral_10022/*"OTHER_IMAGE_LIMIT_COUNT"*/);
    sub_B775C4(&StringLiteral_8784/*"MASHU_SVT_ID3"*/);
    sub_B775C4(&StringLiteral_4734/*"DISABLE_FRIENDSHIP_EXCEED"*/);
    sub_B775C4(&StringLiteral_12634/*"STORMPOD_HELP_IDS"*/);
    sub_B775C4(&StringLiteral_11290/*"REPRINT_LAST_WAR_RAID_EVENT_ID_LIST"*/);
    sub_B775C4(&StringLiteral_17138/*"bit_result_bond"*/);
    sub_B775C4(&StringLiteral_8854/*"MAX_MANA"*/);
    sub_B775C4(&StringLiteral_5709/*"EVENT_BOARD_GAME_DICE_BUTTON_POS"*/);
    sub_B775C4(&StringLiteral_1222/*"5047002:100:0"*/);
    sub_B775C4(&StringLiteral_5784/*"EVENT_ITEM_NOT_DISP_ITEM_GET_EFFECT"*/);
    sub_B775C4(&StringLiteral_5883/*"EVENT_TOWER_FADEOUT_PLAY_TIME"*/);
    sub_B775C4(&StringLiteral_9479/*"NONE_DISPLAY_FREE_QUEST_MATERIAL"*/);
    sub_B775C4(&StringLiteral_1120/*"1053911:100:0"*/);
    sub_B775C4(&StringLiteral_1119/*"1053910:100:0"*/);
    sub_B775C4(&StringLiteral_7605/*"IS_WAR_BOARD_AI_FILTER_WASTE_ROUTE"*/);
    sub_B775C4(&StringLiteral_19636/*"https://view.fate-go.jp/"*/);
    sub_B775C4(&StringLiteral_7262/*"HYDE_SVT_ID"*/);
    sub_B775C4(&StringLiteral_9908/*"OBERON_CHOCO_SVT_ID"*/);
    sub_B775C4(&StringLiteral_6501/*"FIX_MAIN_SUPPORT_DECK_NUM"*/);
    sub_B775C4(&StringLiteral_8782/*"MASHU_SVT_ID1"*/);
    sub_B775C4(&StringLiteral_3325/*"COMBINE_SERVANT_SKILL_IDS"*/);
    sub_B775C4(&StringLiteral_1116/*"1053900:100:0"*/);
    sub_B775C4(&StringLiteral_10013/*"ORT_FIRST_QUEST_ID"*/);
    sub_B775C4(&StringLiteral_8875/*"MEMORY_DECK_LIMIT_BY_QUEST"*/);
    sub_B775C4(&StringLiteral_5712/*"EVENT_BOARD_GAME_MAP_ID_LIST"*/);
    sub_B775C4(&StringLiteral_8597/*"LOGIN_QUEST_RETURN_TERMINAL_DIALOG_MESSAGE"*/);
    sub_B775C4(&StringLiteral_9537/*"NPC_FRIEND_POINT"*/);
    sub_B775C4(&StringLiteral_3105/*"CLASS_BOARD_2D_CAMERA_DEFAULT_SIZE"*/);
    sub_B775C4(&StringLiteral_1220/*"5047000:100:0"*/);
    sub_B775C4(&StringLiteral_11764/*"SAME_CLASS_MULI_EXP"*/);
    sub_B775C4(&StringLiteral_8848/*"MAX_EVENT_ACTIVITY_POINT"*/);
    sub_B775C4(&StringLiteral_1190/*"3D_MAP_CAMERA_MOVE_EASING_TYPE"*/);
    sub_B775C4(&StringLiteral_9441/*"NEED_REBOOT_TIME"*/);
    sub_B775C4(&StringLiteral_10010/*"ORDEAL_CALL_CHAPTER_FOLDER_EVENT_UI_DISP_WAR_IDS"*/);
    sub_B775C4(&StringLiteral_6598/*"FREE_GACHA_RESET_AT"*/);
    sub_B775C4(&StringLiteral_8866/*"MAX_USER_SVT_EQUIP"*/);
    sub_B775C4(&StringLiteral_11797/*"SCENARIO_SPEED_HIGH"*/);
    sub_B775C4(&StringLiteral_6632/*"FRIEND_POINT"*/);
    sub_B775C4(&StringLiteral_1113/*"1053000:100:0"*/);
    sub_B775C4(&StringLiteral_17153/*"bit_result_servant"*/);
    sub_B775C4(&StringLiteral_5901/*"EXCLUSIVE_NPC_SERVANT_ID_START"*/);
    sub_B775C4(&StringLiteral_8855/*"MAX_NEAR_PRESENT_OFFSET_NUM"*/);
    sub_B775C4(&StringLiteral_11278/*"RECOVERY_FATIGUE_DELAYED_CHANGE_BG_EVENTS"*/);
    sub_B775C4(&StringLiteral_10660/*"POWERUP_QUEST_WAR_ID"*/);
    sub_B775C4(&StringLiteral_1221/*"5047001:100:0"*/);
    sub_B775C4(&StringLiteral_12562/*"STAND_FIGURE_R_OFFSET_EFFECT_IMAGES"*/);
    sub_B775C4(&StringLiteral_3349/*"COMMAND_CARD_PRM_UP_MAX"*/);
    sub_B775C4(&StringLiteral_12565/*"STARTING_MEMBER_FRIENDSHIP_RATE"*/);
    sub_B775C4(&StringLiteral_10019/*"ORT_THIRD_FORM_ID"*/);
    sub_B775C4(&StringLiteral_12563/*"STAND_FIGURE_R_OFFSET_EFFECT_NAMES"*/);
    sub_B775C4(&StringLiteral_1118/*"1053902:100:0"*/);
    sub_B775C4(&StringLiteral_8785/*"MASHU_TD_GRADE_UP_QUEST_ID"*/);
    sub_B775C4(&StringLiteral_8861/*"MAX_STONE"*/);
    sub_B775C4(&StringLiteral_8850/*"MAX_FRIENDPOINT"*/);
    sub_B775C4(&StringLiteral_9520/*"NOT_UI_CHANGE_MAP_IDS"*/);
    sub_B775C4(&StringLiteral_6481/*"FES_WAR_ID"*/);
    sub_B775C4(&StringLiteral_10017/*"ORT_LATE_QUEST_ID"*/);
    sub_B775C4(&StringLiteral_17154/*"bit_result_skill"*/);
    sub_B775C4(&StringLiteral_10014/*"ORT_LATE_PHASE_BREAK"*/);
    sub_B775C4(&StringLiteral_17139/*"bit_result_command_card_exceed"*/);
    sub_B775C4(&StringLiteral_3110/*"CLASS_BOARD_CAMERA_SELECT_MOVE_MAX_DISTANCE"*/);
    sub_B775C4(&StringLiteral_3111/*"CLASS_BOARD_CAMERA_SELECT_SEC_MAX"*/);
    sub_B775C4(&StringLiteral_8865/*"MAX_USER_SVT"*/);
    sub_B775C4(&StringLiteral_9920/*"ONE_ACT"*/);
    sub_B775C4(&StringLiteral_6500/*"FIX_EVENT_SUPPORT_DECK_NUM"*/);
    sub_B775C4(&StringLiteral_15592/*"WAR_BOARD_EVAL_FACTORS_AFFECT_RATIO"*/);
    sub_B775C4(&StringLiteral_6600/*"FRIENDPOINT_BOOST_ITEM_EFFECT_ID"*/);
    sub_B775C4(&StringLiteral_17143/*"bit_result_friendship_exceed"*/);
    sub_B775C4(&StringLiteral_8786/*"MASHU_TD_GRADE_UP_QUEST_PHASE"*/);
    sub_B775C4(&StringLiteral_11296/*"REQUEST_TOP_HOME_EXPIRATION_DATE_SEC_UPDATE_EVENT_MAP"*/);
    sub_B775C4(&StringLiteral_3109/*"CLASS_BOARD_CAMERA_SELECT_EASING_TYPE"*/);
    sub_B775C4(&StringLiteral_7599/*"IS_ENABLE_OLD_BLOCK_SHORTEST_ROUTE"*/);
    sub_B775C4(&StringLiteral_8762/*"MAIN_CHAPTERS_WITH_EVENT_ID"*/);
    sub_B775C4(&StringLiteral_1117/*"1053901:100:0"*/);
    sub_B775C4(&StringLiteral_17140/*"bit_result_extraskill"*/);
    sub_B775C4(&StringLiteral_1223/*"5047900:100:0"*/);
    sub_B775C4(&StringLiteral_9922/*"ONE_RP"*/);
    sub_B775C4(&StringLiteral_8868/*"MAX_USER_SVT_STORAGE"*/);
    sub_B775C4(&StringLiteral_10016/*"ORT_LATE_PHASE_SECOND_FORM"*/);
    sub_B775C4(&StringLiteral_3483/*"CONSUME_STORMPOD_SPOT_ID"*/);
    sub_B775C4(&StringLiteral_2650/*"BEFORE_CHANGE_FREE_DRAW_NUM"*/);
    sub_B775C4(&StringLiteral_7604/*"IS_WAR_BOARD_AI_FILTER_NOT_ACTION"*/);
    sub_B775C4(&StringLiteral_3030/*"CAMPAIGN_RESET_AT"*/);
    sub_B775C4(&StringLiteral_11216/*"RAID_DEFEATED_EFFECT_TIME"*/);
    sub_B775C4(&StringLiteral_6682/*"FULL_SCREEN_NP_CHRS"*/);
    sub_B775C4(&StringLiteral_6520/*"FOLLOWER_REFRESH_RESET_TIME"*/);
    sub_B775C4(&StringLiteral_3147/*"CLASS_BOARD_RELEASE_QUEST_ID"*/);
    sub_B775C4(&StringLiteral_6553/*"FOLLOW_NUM"*/);
    sub_B775C4(&StringLiteral_3026/*"CAMERA_2D_RESET_DURATION"*/);
    sub_B775C4(&StringLiteral_12612/*"STONE_FRAGMENT_EXCHANGE_NOTICE_MAX"*/);
    sub_B775C4(&StringLiteral_7607/*"ITEM_ID_QP"*/);
    sub_B775C4(&StringLiteral_12799/*"SWIMSUIT_MELT_SVT_ID"*/);
    sub_B775C4(&StringLiteral_7200/*"HEROINE_LIMIT_COUNT_ORTINAX_REFURBISHED"*/);
    sub_B775C4(&StringLiteral_17150/*"bit_result_noble"*/);
    sub_B775C4(&StringLiteral_5668/*"EQUIP_GET_EFFECT_ID"*/);
    sub_B775C4(&StringLiteral_9507/*"NOT_FRIEND_POINT"*/);
    sub_B775C4(&StringLiteral_5714/*"EVENT_BOARD_GAME_NEXT_BOARD_QUEST_ID"*/);
    sub_B775C4(&StringLiteral_10015/*"ORT_LATE_PHASE_DEAD"*/);
    sub_B775C4(&StringLiteral_8846/*"MAX_BLACK_LIST_NUM"*/);
    sub_B775C4(&StringLiteral_8857/*"MAX_PRESENT_RECEIVE_NUM"*/);
    sub_B775C4(&StringLiteral_15369/*"VALENTINE_RELEASE_AT"*/);
    sub_B775C4(&StringLiteral_8808/*"MASTER_MISSION_SVT_ID1"*/);
    sub_B775C4(&StringLiteral_8605/*"LOSTBELT6_CLEAR_QUEST_ID"*/);
    sub_B775C4(&StringLiteral_5715/*"EVENT_BOARD_GAME_NEXT_ROUND_QUEST_ID"*/);
    sub_B775C4(&StringLiteral_11295/*"REQUEST_RAID_UPDATE_EVENT_MAP"*/);
    sub_B775C4(&StringLiteral_12604/*"STATUS_UP_ADJUST_ATK"*/);
    sub_B775C4(&StringLiteral_1738/*"AFTRE_CHANGE_FREE_DRAW_NUM"*/);
    sub_B775C4(&StringLiteral_1192/*"3D_MAP_CAMERA_MOVE_TIME_CONSTANT"*/);
    sub_B775C4(&StringLiteral_6550/*"FOLLOW_FRIEND_POINT"*/);
    sub_B775C4(&StringLiteral_7603/*"IS_WAR_BOARD_AI_CALC_EVAL_SUM"*/);
    sub_B775C4(&StringLiteral_8852/*"MAX_FRIEND_HISTORY_NUM"*/);
    sub_B775C4(&StringLiteral_11799/*"SCENARIO_SPEED_STEP"*/);
    sub_B775C4(&StringLiteral_5882/*"EVENT_TOWER_FADEOUT_DELAY_TIME"*/);
    sub_B775C4(&StringLiteral_8596/*"LOGIN_DAY"*/);
    sub_B775C4(&StringLiteral_5611/*"ENABLE_SERIAL_CODE"*/);
    sub_B775C4(&StringLiteral_8821/*"MATERIAL_MAIN_INTERLUDE_WAR_ID"*/);
    sub_B775C4(&StringLiteral_5941/*"EXTRA2_SORT_ORDER_CLASS_IDS"*/);
    sub_B775C4(&StringLiteral_6982/*"GACHA_DAILY_MAX_DRAW_NUM_RESET_AT"*/);
    sub_B775C4(&StringLiteral_13686/*"TREASUREDEVICE_ID_MASHU3"*/);
    sub_B775C4(&StringLiteral_8598/*"LOGIN_RESET_AT"*/);
    sub_B775C4(&StringLiteral_1224/*"5047901:100:0"*/);
    sub_B775C4(&StringLiteral_1650/*"ACCOUNTING_INITIALIZE_TIMEOUT"*/);
    sub_B775C4(&StringLiteral_1227/*"5047911:100:0"*/);
    sub_B775C4(&StringLiteral_7600/*"IS_EVENT_POINT_MENU"*/);
    sub_B775C4(&StringLiteral_10684/*"PRESENT_BOX_FILTER_SVT_EQUIP_MATERIAL"*/);
    sub_B775C4(&StringLiteral_11214/*"RACE_REWARD_RANK_MAX"*/);
    sub_B775C4(&StringLiteral_9519/*"NOT_SEND_TRACK_EVENT_AT_WAR_IDS"*/);
    sub_B775C4(&StringLiteral_8783/*"MASHU_SVT_ID2"*/);
    sub_B775C4(&StringLiteral_11798/*"SCENARIO_SPEED_LOW"*/);
    sub_B775C4(&StringLiteral_10011/*"ORDEAL_CALL_CLEAR_BGM_NAME"*/);
    sub_B775C4(&StringLiteral_8859/*"MAX_RARE_PRI"*/);
    sub_B775C4(&StringLiteral_5940/*"EXTRA1_SORT_ORDER_CLASS_IDS"*/);
    sub_B775C4(&StringLiteral_2733/*"BP_EXPRESSION"*/);
    sub_B775C4(&StringLiteral_8860/*"MAX_RP"*/);
    sub_B775C4(&StringLiteral_12605/*"STATUS_UP_ADJUST_HP"*/);
    sub_B775C4(&StringLiteral_9921/*"ONE_COMMAND_SPELL"*/);
    sub_B775C4(&StringLiteral_15018/*"USE_TERMS_LATEST_VERSION"*/);
    sub_B775C4(&StringLiteral_3230/*"CLOSE_SECRET_TREASURE_DEVICE_QUEST_CLEAR"*/);
    sub_B775C4(&StringLiteral_10720/*"PRESENT_VALID_TIME"*/);
    sub_B775C4(&StringLiteral_8795/*"MASTER_MISSION_ALERT_TIME"*/);
    sub_B775C4(&StringLiteral_2673/*"BIRTHDAY_BEFORE_VALENTINE_SVT_ID"*/);
    sub_B775C4(&StringLiteral_6683/*"FULL_SCREEN_NP_SEQ_IDS"*/);
    sub_B775C4(&StringLiteral_8849/*"MAX_EVENT_POINT"*/);
    sub_B775C4(&StringLiteral_8584/*"LOCATION_REWARD_DLG_COLUMN"*/);
    sub_B775C4(&StringLiteral_8847/*"MAX_COMMAND_SPELL"*/);
    sub_B775C4(&StringLiteral_8764/*"MAIN_INTERLUDE_WAR_ID"*/);
    sub_B775C4(&StringLiteral_7469/*"IOS_EXAMINATION_NEWS_URL"*/);
    sub_B775C4(&StringLiteral_1114/*"1053001:100:0"*/);
    sub_B775C4(&StringLiteral_12718/*"SUPPORT_DECK_MAX"*/);
    sub_B775C4(&StringLiteral_10018/*"ORT_SECONDE_FORM_ID"*/);
    sub_B775C4(&StringLiteral_1191/*"3D_MAP_CAMERA_MOVE_TIME_COEFFICIENT"*/);
    sub_B775C4(&StringLiteral_7418/*"IGNORE_FORM_CHANGE_SVT_ID"*/);
    sub_B775C4(&StringLiteral_8864/*"MAX_USER_LV"*/);
    sub_B775C4(&StringLiteral_15017/*"USE_TERMS_AGREEMENT_REQUIERD_APP_VERSION"*/);
    sub_B775C4(&StringLiteral_8851/*"MAX_FRIENDPOINT_BOOST_ITEM_USE"*/);
    sub_B775C4(&StringLiteral_8867/*"MAX_USER_SVT_EQUIP_STORAGE"*/);
    sub_B775C4(&StringLiteral_1226/*"5047910:100:0"*/);
    sub_B775C4(&StringLiteral_8858/*"MAX_QP"*/);
    sub_B775C4(&StringLiteral_7601/*"IS_IOS_EXAMINATION"*/);
    sub_B775C4(&StringLiteral_9514/*"NOT_REQUIRED_WAR_IDS"*/);
    sub_B775C4(&StringLiteral_3112/*"CLASS_BOARD_CAMERA_SELECT_SEC_MIN"*/);
    sub_B775C4(&StringLiteral_6597/*"FREE_DRAW_NUM_CHANGE_AT"*/);
    sub_B775C4(&StringLiteral_5752/*"EVENT_DAILY_POINT_RESET_AT"*/);
    sub_B775C4(&StringLiteral_1228/*"5047912:100:0"*/);
    sub_B775C4(&StringLiteral_1115/*"1053002:100:0"*/);
    sub_B775C4(&StringLiteral_4704/*"DECK_MAX"*/);
    sub_B775C4(&StringLiteral_10731/*"PROLOGUE_QUEST_ID"*/);
    sub_B775C4(&StringLiteral_3231/*"CLOSE_SECRET_TREASURE_DEVICE_SVT_GET"*/);
    sub_B775C4(&StringLiteral_12636/*"STORY_WAR_ID"*/);
    sub_B775C4(&StringLiteral_8856/*"MAX_PRESENT_BOX_NUM"*/);
    sub_B775C4(&StringLiteral_11796/*"SCENARIO_SPEED_DEFAULT"*/);
    sub_B775C4(&StringLiteral_13672/*"TITLE_FLOW_OLD"*/);
    sub_B775C4(&StringLiteral_1193/*"3D_MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE"*/);
    sub_B775C4(&StringLiteral_1171/*"20220731_BOOST_RATE_1"*/);
    sub_B775C4(&StringLiteral_8526/*"LEGACY_ASPECT_MOVIES"*/);
    sub_B775C4(&StringLiteral_3350/*"COMMAND_CODE_DETACHING_ITEM_ID"*/);
    sub_B775C4(&StringLiteral_1225/*"5047902:100:0"*/);
    sub_B775C4(&StringLiteral_5937/*"EXPIRATION_DATE"*/);
    sub_B775C4(&StringLiteral_10012/*"ORDEAL_CALL_WAR_ID"*/);
    sub_B775C4(&StringLiteral_7201/*"HEROINE_TREASURE_DEVICE_RANKUP_EFFECTS"*/);
    byte_4388C70 = 1;
  }
  result = 0.0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_286;
  MasterData_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ConstantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_286;
  v4 = (ConstantLongMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ConstantLongMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_286;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_286;
  v5 = (ConstantStrMaster_o *)Instance;
  Value_28438584 = ConstantMaster__GetValue_28438584(
                     MasterData_WarQuestSelectionMaster,
                     (System_String_o *)StringLiteral_1171/*"20220731_BOOST_RATE_1"*/,
                     200,
                     0LL);
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v7->static_fields->CriticalRateToAddByQuickFirstBonus = Value_28438584;
  BalanceConfig_TypeInfo->static_fields->QpMax = ConstantMaster__GetValue(
                                                   MasterData_WarQuestSelectionMaster,
                                                   (System_String_o *)StringLiteral_8858/*"MAX_QP"*/,
                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ManaMax = ConstantMaster__GetValue(
                                                     MasterData_WarQuestSelectionMaster,
                                                     (System_String_o *)StringLiteral_8854/*"MAX_MANA"*/,
                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->RarePriMax = ConstantMaster__GetValue(
                                                        MasterData_WarQuestSelectionMaster,
                                                        (System_String_o *)StringLiteral_8859/*"MAX_RARE_PRI"*/,
                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->StoneMax = ConstantMaster__GetValue(
                                                      MasterData_WarQuestSelectionMaster,
                                                      (System_String_o *)StringLiteral_8861/*"MAX_STONE"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->FriendPointMax = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_8850/*"MAX_FRIENDPOINT"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->UserLevelMax = ConstantMaster__GetValue(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_8864/*"MAX_USER_LV"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->UserItemMax = ConstantMaster__GetValue(
                                                         MasterData_WarQuestSelectionMaster,
                                                         (System_String_o *)StringLiteral_8863/*"MAX_USER_ITEM"*/,
                                                         0LL);
  Instance = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_8863/*"MAX_USER_ITEM"*/, 0LL);
  v8 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->UserEventItemMax = Instance;
  if ( !v4 )
    goto LABEL_286;
  Value_28438008 = ConstantLongMaster__GetValue_28438008(
                     v4,
                     (System_String_o *)StringLiteral_8849/*"MAX_EVENT_POINT"*/,
                     v8->static_fields->UserPointEventMax,
                     0LL);
  v10 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->UserPointEventMax = Value_28438008;
  BalanceConfig_TypeInfo->static_fields->UserEventActivityPointMax = ConstantLongMaster__GetValue_28438008(
                                                                       v4,
                                                                       (System_String_o *)StringLiteral_8848/*"MAX_EVENT_ACTIVITY_POINT"*/,
                                                                       v10->static_fields->UserEventActivityPointMax,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxMax = ConstantMaster__GetValue(
                                                           MasterData_WarQuestSelectionMaster,
                                                           (System_String_o *)StringLiteral_8856/*"MAX_PRESENT_BOX_NUM"*/,
                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxCheckMax = ConstantMaster__GetValue(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (System_String_o *)StringLiteral_8857/*"MAX_PRESENT_RECEIVE_NUM"*/,
                                                                0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxValidTime = ConstantMaster__GetValue(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 (System_String_o *)StringLiteral_10720/*"PRESENT_VALID_TIME"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxNearMaxOffset = ConstantMaster__GetValue(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_8855/*"MAX_NEAR_PRESENT_OFFSET_NUM"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->ServantFrameMax = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8865/*"MAX_USER_SVT"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantEquipFrameMax = ConstantMaster__GetValue(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  (System_String_o *)StringLiteral_8866/*"MAX_USER_SVT_EQUIP"*/,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCodeFrameMax = ConstantMaster__GetValue(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 (System_String_o *)StringLiteral_8862/*"MAX_USER_COMMAND_CODE"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->DeckMax = ConstantMaster__GetValue(
                                                     MasterData_WarQuestSelectionMaster,
                                                     (System_String_o *)StringLiteral_4704/*"DECK_MAX"*/,
                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->SupportDeckMax = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_12718/*"SUPPORT_DECK_MAX"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_6501/*"FIX_MAIN_SUPPORT_DECK_NUM"*/,
                                                                   0LL);
  Value = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_6500/*"FIX_EVENT_SUPPORT_DECK_NUM"*/, 0LL);
  v12 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum = Value;
  v12->static_fields->SupportMemberMax = v12->static_fields->SupportDeckMemberMax * v12->static_fields->SupportDeckMax;
  BalanceConfig_TypeInfo->static_fields->UserServantStorageMax = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_8868/*"MAX_USER_SVT_STORAGE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->UserServantEquipStorageMax = ConstantMaster__GetValue(
                                                                        MasterData_WarQuestSelectionMaster,
                                                                        (System_String_o *)StringLiteral_8867/*"MAX_USER_SVT_EQUIP_STORAGE"*/,
                                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameActRecoverCost = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_9920/*"ONE_ACT"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameRpRecoverCost = ConstantMaster__GetValue(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  (System_String_o *)StringLiteral_9922/*"ONE_RP"*/,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameRpMax = ConstantMaster__GetValue(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_8860/*"MAX_RP"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointFriend = ConstantMaster__GetValue(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 (System_String_o *)StringLiteral_6632/*"FRIEND_POINT"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointNotFriend = ConstantMaster__GetValue(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_9507/*"NOT_FRIEND_POINT"*/,
                                                                    0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointNpc = ConstantMaster__GetValue(
                                                              MasterData_WarQuestSelectionMaster,
                                                              (System_String_o *)StringLiteral_9537/*"NPC_FRIEND_POINT"*/,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime1 = ConstantMaster__GetValue(
                                                                       MasterData_WarQuestSelectionMaster,
                                                                       (System_String_o *)StringLiteral_8598/*"LOGIN_RESET_AT"*/,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2 = ConstantMaster__GetValue(
                                                                       MasterData_WarQuestSelectionMaster,
                                                                       (System_String_o *)StringLiteral_3030/*"CAMPAIGN_RESET_AT"*/,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->DailyFreeGachaResetTime = ConstantMaster__GetValue(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_6598/*"FREE_GACHA_RESET_AT"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginDay = ConstantMaster__GetValue(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (System_String_o *)StringLiteral_8596/*"LOGIN_DAY"*/,
                                                                0LL);
  v13 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_9441/*"NEED_REBOOT_TIME"*/, 0LL);
  v14 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ServerTimeOverLimit = v13;
  v15 = ManagerConfig_TypeInfo;
  ServerTimeOverLimit = v14->static_fields->ServerTimeOverLimit;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v15 = ManagerConfig_TypeInfo;
  }
  SERVER_TIME_OVER_LIMIT = v15->static_fields->SERVER_TIME_OVER_LIMIT;
  if ( ServerTimeOverLimit < SERVER_TIME_OVER_LIMIT )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      SERVER_TIME_OVER_LIMIT = ManagerConfig_TypeInfo->static_fields->SERVER_TIME_OVER_LIMIT;
    }
    v18 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    v18->static_fields->ServerTimeOverLimit = SERVER_TIME_OVER_LIMIT;
  }
  v19 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_11296/*"REQUEST_TOP_HOME_EXPIRATION_DATE_SEC_UPDATE_EVENT_MAP"*/, 0LL);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v20 = System_Math__Max_45851140(1, v19, 0LL);
  v21 = BalanceConfig_TypeInfo;
  v22 = v20;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  v21->static_fields->RequestTopHomeExpirationDateSecUpdateEventMap = v22;
  v23 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_11295/*"REQUEST_RAID_UPDATE_EVENT_MAP"*/, 0LL);
  BalanceConfig_TypeInfo->static_fields->RequestRaidUpdateEventMap = System_Math__Max_45851140(1, v23, 0LL);
  BalanceConfig_TypeInfo->static_fields->RaidDefeatedEffectTime = ConstantMaster__GetValue(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_11216/*"RAID_DEFEATED_EFFECT_TIME"*/,
                                                                    0LL);
  BalanceConfig_TypeInfo->static_fields->CommandSpellMax = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8847/*"MAX_COMMAND_SPELL"*/,
                                                             0LL);
  Instance = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_9921/*"ONE_COMMAND_SPELL"*/, 0LL);
  BalanceConfig_TypeInfo->static_fields->CommandSpellRecoverCost = Instance;
  if ( !v5 )
    goto LABEL_286;
  v24 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_15017/*"USE_TERMS_AGREEMENT_REQUIERD_APP_VERSION"*/, 0LL);
  p_UseTermsAgreementRequiredAppVersion = &BalanceConfig_TypeInfo->static_fields->UseTermsAgreementRequiredAppVersion;
  *p_UseTermsAgreementRequiredAppVersion = v24;
  sub_B77560(p_UseTermsAgreementRequiredAppVersion);
  v26 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_15018/*"USE_TERMS_LATEST_VERSION"*/, 0LL);
  p_UseTermsLatestVersion = &BalanceConfig_TypeInfo->static_fields->UseTermsLatestVersion;
  *p_UseTermsLatestVersion = v26;
  sub_B77560(p_UseTermsLatestVersion);
  v28 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_7601/*"IS_IOS_EXAMINATION"*/, 0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsIOS_Examination = v28;
  BalanceConfig_TypeInfo->static_fields->SerialCodeMenuDispFlg = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_5611/*"ENABLE_SERIAL_CODE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk = ConstantMaster__GetValue(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_12604/*"STATUS_UP_ADJUST_ATK"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp = ConstantMaster__GetValue(
                                                              MasterData_WarQuestSelectionMaster,
                                                              (System_String_o *)StringLiteral_12605/*"STATUS_UP_ADJUST_HP"*/,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->SameClassMultiExp = ConstantMaster__getRateValue(
                                                               (System_String_o *)StringLiteral_11764/*"SAME_CLASS_MULI_EXP"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->SameClassExp = ConstantMaster__GetValue(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_11764/*"SAME_CLASS_MULI_EXP"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdJekyll = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8425/*"JEKYLL_SVT_ID"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdHyde = ConstantMaster__GetValue(
                                                           MasterData_WarQuestSelectionMaster,
                                                           (System_String_o *)StringLiteral_7262/*"HYDE_SVT_ID"*/,
                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdSwimsuitMelt = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_12799/*"SWIMSUIT_MELT_SVT_ID"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu1 = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8782/*"MASHU_SVT_ID1"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu2 = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8783/*"MASHU_SVT_ID2"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu3 = ConstantMaster__GetValue_28438584(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8784/*"MASHU_SVT_ID3"*/,
                                                             800102,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMission1 = ConstantMaster__GetValue(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_8808/*"MASTER_MISSION_SVT_ID1"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->TreasureDeviceIdMashu3 = ConstantMaster__GetValue(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_13686/*"TREASUREDEVICE_ID_MASHU3"*/,
                                                                    0LL);
  Instance = sub_B775DC(int___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_286;
  v29 = *(_DWORD *)(Instance + 24);
  if ( !v29 )
    goto LABEL_285;
  *(_DWORD *)(Instance + 32) = 744450;
  if ( v29 == 1 )
    goto LABEL_285;
  *(_DWORD *)(Instance + 36) = 744452;
  ValueArray = ConstantStrMaster__GetValueArray(
                 v5,
                 (System_String_o *)StringLiteral_3325/*"COMBINE_SERVANT_SKILL_IDS"*/,
                 (System_Int32_array *)Instance,
                 0LL);
  p_CombineServantSkillIds = &BalanceConfig_TypeInfo->static_fields->CombineServantSkillIds;
  *p_CombineServantSkillIds = ValueArray;
  sub_B77560(p_CombineServantSkillIds);
  BalanceConfig_TypeInfo->static_fields->MashuTdGradeUpQuestId = ConstantMaster__GetValue_28438584(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_8785/*"MASHU_TD_GRADE_UP_QUEST_ID"*/,
                                                                   4000100,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->MashuTdGradeUpQuestPhase = ConstantMaster__GetValue_28438584(
                                                                      MasterData_WarQuestSelectionMaster,
                                                                      (System_String_o *)StringLiteral_8786/*"MASHU_TD_GRADE_UP_QUEST_PHASE"*/,
                                                                      3,
                                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdOberonChoco = ConstantMaster__GetValue_28438584(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  (System_String_o *)StringLiteral_9908/*"OBERON_CHOCO_SVT_ID"*/,
                                                                  9808130,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->Lostbelt6ClearQuestId = ConstantMaster__GetValue_28438584(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_8605/*"LOSTBELT6_CLEAR_QUEST_ID"*/,
                                                                   3001009,
                                                                   0LL);
  v32 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_2673/*"BIRTHDAY_BEFORE_VALENTINE_SVT_ID"*/, 0LL);
  v33 = BasicHelper__Convert2IntArray(v32, 0x2Cu, 0LL);
  p_ServantIdsBirthdayBeforeValentine = &BalanceConfig_TypeInfo->static_fields->ServantIdsBirthdayBeforeValentine;
  *p_ServantIdsBirthdayBeforeValentine = v33;
  sub_B77560(p_ServantIdsBirthdayBeforeValentine);
  v35 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_7418/*"IGNORE_FORM_CHANGE_SVT_ID"*/, 0LL);
  if ( v35 )
  {
    v36 = BasicHelper__Convert2IntArray(v35, 0x2Cu, 0LL);
    v37 = BalanceConfig_TypeInfo;
    v38 = v36;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v37 = BalanceConfig_TypeInfo;
    }
    p_ServantIdsIgnoreFormChange = &v37->static_fields->ServantIdsIgnoreFormChange;
    *p_ServantIdsIgnoreFormChange = v38;
    sub_B77560(p_ServantIdsIgnoreFormChange);
  }
  v40 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_15369/*"VALENTINE_RELEASE_AT"*/, 0LL);
  v41 = BalanceConfig_TypeInfo;
  v42 = v40;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v41 = BalanceConfig_TypeInfo;
  }
  v41->static_fields->VtReleaseAt = v42;
  BalanceConfig_TypeInfo->static_fields->BefFreeDrawNum = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_2650/*"BEFORE_CHANGE_FREE_DRAW_NUM"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->AftFreeDrawNum = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_1738/*"AFTRE_CHANGE_FREE_DRAW_NUM"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->DrawNumChangeTime = ConstantMaster__GetValue(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_6597/*"FREE_DRAW_NUM_CHANGE_AT"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerRefreshRestTime = ConstantMaster__GetValue(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_6520/*"FOLLOWER_REFRESH_RESET_TIME"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->FesWarId = ConstantMaster__GetValue(
                                                      MasterData_WarQuestSelectionMaster,
                                                      (System_String_o *)StringLiteral_6481/*"FES_WAR_ID"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->NoneExpireTime = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_5937/*"EXPIRATION_DATE"*/,
                                                            0LL);
  v43 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_2733/*"BP_EXPRESSION"*/, 0LL);
  BalanceConfig_TypeInfo->static_fields->BpExpresssionType = UnityEngine_Mathf__Clamp_41415476(v43, 0, 1, 0LL);
  BalanceConfig_TypeInfo->static_fields->MaxFriendHistoryNum = ConstantMaster__GetValue(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 (System_String_o *)StringLiteral_8852/*"MAX_FRIEND_HISTORY_NUM"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->MaxBlackListNum = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8846/*"MAX_BLACK_LIST_NUM"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->raceRewardRankMax = ConstantMaster__GetValue(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_11214/*"RACE_REWARD_RANK_MAX"*/,
                                                               0LL);
  v44 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_8795/*"MASTER_MISSION_ALERT_TIME"*/, 0LL);
  v45 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->MstMissionAlertTime = v44;
  BalanceConfig_TypeInfo->static_fields->LocationRewardDlgColumn = ConstantMaster__GetValue_28438584(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_8584/*"LOCATION_REWARD_DLG_COLUMN"*/,
                                                                     v45->static_fields->LocationRewardDlgColumn,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->CloseSecretTreasureDeviceQuestClear = ConstantMaster__GetValue(
                                                                                 MasterData_WarQuestSelectionMaster,
                                                                                 (System_String_o *)StringLiteral_3230/*"CLOSE_SECRET_TREASURE_DEVICE_QUEST_CLEAR"*/,
                                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->CloseSecretTreasureDeviceSvtGet = ConstantMaster__GetValue(
                                                                             MasterData_WarQuestSelectionMaster,
                                                                             (System_String_o *)StringLiteral_3231/*"CLOSE_SECRET_TREASURE_DEVICE_SVT_GET"*/,
                                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ItemIdQp = ConstantMaster__GetValue(
                                                      MasterData_WarQuestSelectionMaster,
                                                      (System_String_o *)StringLiteral_7607/*"ITEM_ID_QP"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->ShopDetailCheckDialogFontSize = ConstantMaster__GetValue_28438584(
                                                                           MasterData_WarQuestSelectionMaster,
                                                                           (System_String_o *)StringLiteral_12371/*"SHOP_DETAIL_CHECK_DIALOG_FONT_SIZE"*/,
                                                                           21,
                                                                           0LL);
  v46 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_11799/*"SCENARIO_SPEED_STEP"*/, 0LL);
  if ( System_Single__TryParse(v46, &result, 0LL) )
  {
    v47 = BalanceConfig_TypeInfo;
    v48 = result;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v47 = BalanceConfig_TypeInfo;
    }
    v47->static_fields->ScenarioSpeedStep = v48;
  }
  v49 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_11798/*"SCENARIO_SPEED_LOW"*/, 0LL);
  if ( System_Single__TryParse(v49, &result, 0LL) )
  {
    v50 = BalanceConfig_TypeInfo;
    v51 = result;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v50 = BalanceConfig_TypeInfo;
    }
    v50->static_fields->ScenarioSpeedLow = v51;
  }
  v52 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_11797/*"SCENARIO_SPEED_HIGH"*/, 0LL);
  if ( System_Single__TryParse(v52, &result, 0LL) )
  {
    v53 = BalanceConfig_TypeInfo;
    v54 = result;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v53 = BalanceConfig_TypeInfo;
    }
    v53->static_fields->ScenarioSpeedHigh = v54;
  }
  v55 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_11796/*"SCENARIO_SPEED_DEFAULT"*/, 0LL);
  if ( System_Single__TryParse(v55, &result, 0LL) )
  {
    v56 = BalanceConfig_TypeInfo;
    v57 = result;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v56 = BalanceConfig_TypeInfo;
    }
    v56->static_fields->ScenarioSpeedDefault = v57;
  }
  else
  {
    v56 = BalanceConfig_TypeInfo;
  }
  if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v56);
    v56 = BalanceConfig_TypeInfo;
  }
  v58 = ConstantMaster__GetValue_28438584(
          MasterData_WarQuestSelectionMaster,
          (System_String_o *)StringLiteral_10660/*"POWERUP_QUEST_WAR_ID"*/,
          v56->static_fields->PowerUpQuestWarId,
          0LL);
  v59 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->PowerUpQuestWarId = v58;
  v60 = ConstantMaster__GetValue_28438584(
          MasterData_WarQuestSelectionMaster,
          (System_String_o *)StringLiteral_1650/*"ACCOUNTING_INITIALIZE_TIMEOUT"*/,
          v59->static_fields->AccountingInitializeTimeOut,
          0LL);
  v61 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->AccountingInitializeTimeOut = v60;
  BalanceConfig_TypeInfo->static_fields->EquipGetEffectId = ConstantMaster__GetValue_28438584(
                                                              MasterData_WarQuestSelectionMaster,
                                                              (System_String_o *)StringLiteral_5668/*"EQUIP_GET_EFFECT_ID"*/,
                                                              v61->static_fields->EquipGetEffectId,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCodeDetachingItemId = ConstantMaster__GetValue_28438584(
                                                                        MasterData_WarQuestSelectionMaster,
                                                                        (System_String_o *)StringLiteral_3350/*"COMMAND_CODE_DETACHING_ITEM_ID"*/,
                                                                        -1,
                                                                        0LL);
  v62 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_10684/*"PRESENT_BOX_FILTER_SVT_EQUIP_MATERIAL"*/, 0LL);
  if ( v62 )
  {
    v63 = v62;
    Instance = sub_B775DC(char___TypeInfo, 1LL);
    if ( !Instance )
      goto LABEL_286;
    if ( !*(_DWORD *)(Instance + 24) )
      goto LABEL_285;
    *(_WORD *)(Instance + 32) = 44;
    v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                 v63,
                                                                 (System_Char_array *)Instance,
                                                                 0LL);
    v65 = BalanceConfig___c_TypeInfo;
    if ( (BYTE3(BalanceConfig___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig___c_TypeInfo);
      v65 = BalanceConfig___c_TypeInfo;
    }
    static_fields = v65->static_fields;
    _9__220_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__220_0;
    if ( !_9__220_0 )
    {
      if ( (BYTE3(v65->vtable._0_Equals.methodPtr) & 4) != 0 && !v65->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v65);
        static_fields = BalanceConfig___c_TypeInfo->static_fields;
      }
      v68 = (Il2CppObject *)static_fields->__9;
      _9__220_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_string__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__220_0,
        v68,
        Method_BalanceConfig___c__Initialize_b__220_0__,
        (const MethodInfo_29E9E70 *)Method_System_Func_string__int___ctor__);
      v69 = BalanceConfig___c_TypeInfo->static_fields;
      v69->__9__220_0 = (struct System_Func_string__int__o *)_9__220_0;
      sub_B77560(&v69->__9__220_0);
    }
    v70 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v64,
                                                                 (System_Func_TSource__TResult__o *)_9__220_0,
                                                                 (const MethodInfo_1D38B10 *)Method_System_Linq_Enumerable_Select_string__int___);
    v71 = System_Linq_Enumerable__ToArray_int_(
            v70,
            (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
    v72 = BalanceConfig_TypeInfo;
    v73 = v71;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v72 = BalanceConfig_TypeInfo;
    }
    p_PresentBoxFilterSvtEquipMaterial = &v72->static_fields->PresentBoxFilterSvtEquipMaterial;
    *p_PresentBoxFilterSvtEquipMaterial = v73;
    sub_B77560(p_PresentBoxFilterSvtEquipMaterial);
  }
  v75 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_6553/*"FOLLOW_NUM"*/, 0LL);
  if ( v75 >= 1 )
  {
    v76 = v75;
    v77 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v77 = BalanceConfig_TypeInfo;
    }
    v77->static_fields->FollowNum = v76;
  }
  v78 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_6550/*"FOLLOW_FRIEND_POINT"*/, 0LL);
  if ( v78 >= 1 )
  {
    v79 = v78;
    v80 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v80 = BalanceConfig_TypeInfo;
    }
    v80->static_fields->FollowFriendPoint = v79;
  }
  v81 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_4734/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0LL);
  v82 = BalanceConfig_TypeInfo;
  v83 = v81;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v82 = BalanceConfig_TypeInfo;
  }
  v82->static_fields->DisableFriendshipExceed = v83;
  BalanceConfig_TypeInfo->static_fields->EventDailyPointResetAt = ConstantMaster__GetValue(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_5752/*"EVENT_DAILY_POINT_RESET_AT"*/,
                                                                    0LL);
  v84 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)StringLiteral_11290/*"REPRINT_LAST_WAR_RAID_EVENT_ID_LIST"*/, 0LL, 0LL);
  p_ReprintLastWarRaidEventIdList = &BalanceConfig_TypeInfo->static_fields->ReprintLastWarRaidEventIdList;
  *p_ReprintLastWarRaidEventIdList = v84;
  sub_B77560(p_ReprintLastWarRaidEventIdList);
  BalanceConfig_TypeInfo->static_fields->PrologueQuestId = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_10731/*"PROLOGUE_QUEST_ID"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCardParamUpMax = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_3349/*"COMMAND_CARD_PRM_UP_MAX"*/,
                                                                   0LL);
  v86 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)StringLiteral_5882/*"EVENT_TOWER_FADEOUT_DELAY_TIME"*/, 0LL, 0LL);
  p_EventTowerFadeOutDelayTime = &BalanceConfig_TypeInfo->static_fields->EventTowerFadeOutDelayTime;
  *p_EventTowerFadeOutDelayTime = v86;
  sub_B77560(p_EventTowerFadeOutDelayTime);
  if ( !BalanceConfig_TypeInfo->static_fields->EventTowerFadeOutDelayTime )
  {
    v88 = (System_Array_o *)sub_B775DC(int___TypeInfo, 3LL);
    v227.fields.value = Field__PrivateImplementationDetails__84DF4B72A51E01473BC25693E526BC603A140C4300062B4A7F64A9F7D00ABB95;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v88, v227, 0LL);
    v89 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v89 = BalanceConfig_TypeInfo;
    }
    v90 = &v89->static_fields->EventTowerFadeOutDelayTime;
    *v90 = v88;
    sub_B77560(v90);
  }
  v91 = ConstantMaster__GetValue_28438584(
          MasterData_WarQuestSelectionMaster,
          (System_String_o *)StringLiteral_5883/*"EVENT_TOWER_FADEOUT_PLAY_TIME"*/,
          3000,
          0LL);
  v92 = BalanceConfig_TypeInfo;
  v93 = v91;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v92 = BalanceConfig_TypeInfo;
  }
  v92->static_fields->EventTowerFadeOutPlayTime = (float)v93 / 1000.0;
  BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_8851/*"MAX_FRIENDPOINT_BOOST_ITEM_USE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->FriendPointBoostItemEfffectId = ConstantMaster__GetValue_28438584(
                                                                           MasterData_WarQuestSelectionMaster,
                                                                           (System_String_o *)StringLiteral_6600/*"FRIENDPOINT_BOOST_ITEM_EFFECT_ID"*/,
                                                                           3,
                                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->MainInterludeWarId = ConstantMaster__GetValue_28438584(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (System_String_o *)StringLiteral_8764/*"MAIN_INTERLUDE_WAR_ID"*/,
                                                                1004,
                                                                0LL);
  v94 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)StringLiteral_5709/*"EVENT_BOARD_GAME_DICE_BUTTON_POS"*/, 0LL, 0LL);
  p_EventBoardGameDiceButtonPostion = &BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion;
  *p_EventBoardGameDiceButtonPostion = v94;
  sub_B77560(p_EventBoardGameDiceButtonPostion);
  if ( !BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion )
  {
    Instance = sub_B775DC(int___TypeInfo, 3LL);
    if ( !Instance )
      goto LABEL_286;
    v96 = *(_DWORD *)(Instance + 24);
    v97 = Instance;
    if ( v96 > 1 )
    {
      *(_DWORD *)(Instance + 36) = -59;
      if ( v96 != 2 )
      {
        *(_DWORD *)(Instance + 40) = -500;
        v98 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v98 = BalanceConfig_TypeInfo;
        }
        v99 = &v98->static_fields->EventBoardGameDiceButtonPostion;
        *v99 = (struct System_Int32_array *)v97;
        sub_B77560(v99);
        goto LABEL_108;
      }
    }
LABEL_285:
    v224 = sub_B776C8(Instance);
    sub_B77668(v224, 0LL);
  }
LABEL_108:
  v100 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)StringLiteral_8821/*"MATERIAL_MAIN_INTERLUDE_WAR_ID"*/, 0LL, 0LL);
  v101 = BalanceConfig_TypeInfo;
  v102 = v100;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v101 = BalanceConfig_TypeInfo;
  }
  p_MainInterludeWarIdOnMaterial = &v101->static_fields->MainInterludeWarIdOnMaterial;
  *p_MainInterludeWarIdOnMaterial = v102;
  sub_B77560(p_MainInterludeWarIdOnMaterial);
  if ( !BalanceConfig_TypeInfo->static_fields->MainInterludeWarIdOnMaterial )
  {
    Instance = sub_B775DC(int___TypeInfo, 1LL);
    if ( !Instance )
      goto LABEL_286;
    v104 = Instance;
    if ( !*(_DWORD *)(Instance + 24) )
      goto LABEL_285;
    *(_DWORD *)(Instance + 32) = 307;
    v105 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v105 = BalanceConfig_TypeInfo;
    }
    v106 = &v105->static_fields->MainInterludeWarIdOnMaterial;
    *v106 = (struct System_Int32_array *)v104;
    sub_B77560(v106);
  }
  v107 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)StringLiteral_5712/*"EVENT_BOARD_GAME_MAP_ID_LIST"*/, 0LL, 0LL);
  v108 = BalanceConfig_TypeInfo;
  v109 = v107;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v108 = BalanceConfig_TypeInfo;
  }
  p_EventBoardGameMapIdList = &v108->static_fields->EventBoardGameMapIdList;
  *p_EventBoardGameMapIdList = v109;
  sub_B77560(p_EventBoardGameMapIdList);
  BalanceConfig_TypeInfo->static_fields->EventBoardGameNextBoardQuestId = ConstantMaster__GetValue_28438584(
                                                                            MasterData_WarQuestSelectionMaster,
                                                                            (System_String_o *)StringLiteral_5714/*"EVENT_BOARD_GAME_NEXT_BOARD_QUEST_ID"*/,
                                                                            94047745,
                                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->EventBoardGameNextRoundQuestId = ConstantMaster__GetValue_28438584(
                                                                            MasterData_WarQuestSelectionMaster,
                                                                            (System_String_o *)StringLiteral_5715/*"EVENT_BOARD_GAME_NEXT_ROUND_QUEST_ID"*/,
                                                                            94047744,
                                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->TitleFlowOld = ConstantMaster__GetValue_28438584(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_13672/*"TITLE_FLOW_OLD"*/,
                                                          0,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->StoryWarId = ConstantMaster__GetValue_28438584(
                                                        MasterData_WarQuestSelectionMaster,
                                                        (System_String_o *)StringLiteral_12636/*"STORY_WAR_ID"*/,
                                                        1003,
                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->OrdealCallWarId = ConstantMaster__GetValue_28438584(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_10012/*"ORDEAL_CALL_WAR_ID"*/,
                                                             401,
                                                             0LL);
  v111 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_10011/*"ORDEAL_CALL_CLEAR_BGM_NAME"*/, 0LL);
  if ( !System_String__IsNullOrEmpty(v111, 0LL) )
  {
    v112 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v112 = BalanceConfig_TypeInfo;
    }
    p_OrdealCallClearBgmName = &v112->static_fields->OrdealCallClearBgmName;
    *p_OrdealCallClearBgmName = v111;
    sub_B77560(p_OrdealCallClearBgmName);
  }
  v114 = (System_Array_o *)sub_B775DC(int___TypeInfo, 5LL);
  v228.fields.value = Field__PrivateImplementationDetails__A1FBA00A0F8840358C0A54605FFD365F75E3A3D7AFF25F48F474C4E89BB0B37D;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v114, v228, 0LL);
  v115 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)StringLiteral_3483/*"CONSUME_STORMPOD_SPOT_ID"*/, (System_Int32_array *)v114, 0LL);
  v116 = BalanceConfig_TypeInfo;
  v117 = v115;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v116 = BalanceConfig_TypeInfo;
  }
  p_consumeStormPodSpotId = &v116->static_fields->consumeStormPodSpotId;
  *p_consumeStormPodSpotId = v117;
  sub_B77560(p_consumeStormPodSpotId);
  Instance = sub_B775DC(int___TypeInfo, 1LL);
  if ( !Instance )
LABEL_286:
    sub_B7769C(Instance, v2);
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_285;
  *(_DWORD *)(Instance + 32) = 71;
  v119 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_12634/*"STORMPOD_HELP_IDS"*/,
           (System_Int32_array *)Instance,
           0LL);
  p_StormPodHelpIds = &BalanceConfig_TypeInfo->static_fields->StormPodHelpIds;
  *p_StormPodHelpIds = v119;
  sub_B77560(p_StormPodHelpIds);
  ValueStringArray = ConstantStrMaster__GetValueStringArray(v5, (System_String_o *)StringLiteral_8526/*"LEGACY_ASPECT_MOVIES"*/, 0LL);
  p_legacyAspectMovies = &BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
  *p_legacyAspectMovies = ValueStringArray;
  sub_B77560(p_legacyAspectMovies);
  v123 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)StringLiteral_6682/*"FULL_SCREEN_NP_CHRS"*/, 0LL, 0LL);
  p_fullScreenNPChrs = &BalanceConfig_TypeInfo->static_fields->fullScreenNPChrs;
  *p_fullScreenNPChrs = v123;
  sub_B77560(p_fullScreenNPChrs);
  v125 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)StringLiteral_6683/*"FULL_SCREEN_NP_SEQ_IDS"*/, 0LL, 0LL);
  p_fullScreenNPSeqIds = &BalanceConfig_TypeInfo->static_fields->fullScreenNPSeqIds;
  *p_fullScreenNPSeqIds = v125;
  sub_B77560(p_fullScreenNPSeqIds);
  BalanceConfig_TypeInfo->static_fields->GachaDailyMaxDrawNumResetAt = ConstantMaster__GetValue_28438584(
                                                                         MasterData_WarQuestSelectionMaster,
                                                                         (System_String_o *)StringLiteral_6982/*"GACHA_DAILY_MAX_DRAW_NUM_RESET_AT"*/,
                                                                         4,
                                                                         0LL);
  BalanceConfig_TypeInfo->static_fields->MemoryDeckLimitByQuest = ConstantMaster__GetValue_28438584(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_8875/*"MEMORY_DECK_LIMIT_BY_QUEST"*/,
                                                                    100,
                                                                    0LL);
  v127 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_7469/*"IOS_EXAMINATION_NEWS_URL"*/, 0LL);
  p_IOS_ExaminationNewsUrl = &BalanceConfig_TypeInfo->static_fields->IOS_ExaminationNewsUrl;
  *p_IOS_ExaminationNewsUrl = v127;
  sub_B77560(p_IOS_ExaminationNewsUrl);
  v129 = BalanceConfig_TypeInfo->static_fields;
  if ( !v129->IOS_ExaminationNewsUrl )
  {
    v130 = &v129->IOS_ExaminationNewsUrl;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v130 = &BalanceConfig_TypeInfo->static_fields->IOS_ExaminationNewsUrl;
    }
    *v130 = (struct System_String_o *)StringLiteral_19636/*"https://view.fate-go.jp/"*/;
    sub_B77560(v130);
  }
  v131 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_10022/*"OTHER_IMAGE_LIMIT_COUNT"*/, 0LL);
  v132 = BalanceConfig_TypeInfo;
  v133 = v131;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v132 = BalanceConfig_TypeInfo;
  }
  v132->static_fields->OtherImageLimitCount = v133;
  BalanceConfig_TypeInfo->static_fields->ExclusiveNpcServantIdStart = ConstantMaster__GetValue_28438584(
                                                                        MasterData_WarQuestSelectionMaster,
                                                                        (System_String_o *)StringLiteral_5901/*"EXCLUSIVE_NPC_SERVANT_ID_START"*/,
                                                                        9937100,
                                                                        0LL);
  v134 = ConstantStrMaster__GetValueStringArray(v5, (System_String_o *)StringLiteral_12563/*"STAND_FIGURE_R_OFFSET_EFFECT_NAMES"*/, 0LL);
  p_UIStandFigureROffsetEffectNames = &BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames;
  *p_UIStandFigureROffsetEffectNames = v134;
  sub_B77560(p_UIStandFigureROffsetEffectNames);
  v136 = ConstantStrMaster__GetValueStringArray(v5, (System_String_o *)StringLiteral_12562/*"STAND_FIGURE_R_OFFSET_EFFECT_IMAGES"*/, 0LL);
  p_UIStandFigureROffsetImages = &BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetImages;
  *p_UIStandFigureROffsetImages = v136;
  sub_B77560(p_UIStandFigureROffsetImages);
  v138 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames )
  {
    Instance = sub_B775DC(string___TypeInfo, 7LL);
    if ( !Instance )
      goto LABEL_286;
    v139 = Instance;
    Instance = StringLiteral_17138/*"bit_result_bond"*/;
    if ( StringLiteral_17138/*"bit_result_bond"*/ )
    {
      Instance = sub_B77684(StringLiteral_17138/*"bit_result_bond"*/, *(_QWORD *)(*(_QWORD *)v139 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v140 = StringLiteral_17138/*"bit_result_bond"*/;
    }
    else
    {
      v140 = 0LL;
    }
    if ( !*(_DWORD *)(v139 + 24) )
      goto LABEL_285;
    *(_QWORD *)(v139 + 32) = v140;
    sub_B77560(v139 + 32);
    Instance = StringLiteral_17150/*"bit_result_noble"*/;
    if ( StringLiteral_17150/*"bit_result_noble"*/ )
    {
      Instance = sub_B77684(StringLiteral_17150/*"bit_result_noble"*/, *(_QWORD *)(*(_QWORD *)v139 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v141 = StringLiteral_17150/*"bit_result_noble"*/;
    }
    else
    {
      v141 = 0LL;
    }
    if ( *(_DWORD *)(v139 + 24) <= 1u )
      goto LABEL_285;
    *(_QWORD *)(v139 + 40) = v141;
    sub_B77560(v139 + 40);
    Instance = StringLiteral_17153/*"bit_result_servant"*/;
    if ( StringLiteral_17153/*"bit_result_servant"*/ )
    {
      Instance = sub_B77684(StringLiteral_17153/*"bit_result_servant"*/, *(_QWORD *)(*(_QWORD *)v139 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v142 = StringLiteral_17153/*"bit_result_servant"*/;
    }
    else
    {
      v142 = 0LL;
    }
    if ( *(_DWORD *)(v139 + 24) <= 2u )
      goto LABEL_285;
    *(_QWORD *)(v139 + 48) = v142;
    sub_B77560(v139 + 48);
    Instance = StringLiteral_17154/*"bit_result_skill"*/;
    if ( StringLiteral_17154/*"bit_result_skill"*/ )
    {
      Instance = sub_B77684(StringLiteral_17154/*"bit_result_skill"*/, *(_QWORD *)(*(_QWORD *)v139 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v143 = StringLiteral_17154/*"bit_result_skill"*/;
    }
    else
    {
      v143 = 0LL;
    }
    if ( *(_DWORD *)(v139 + 24) <= 3u )
      goto LABEL_285;
    *(_QWORD *)(v139 + 56) = v143;
    sub_B77560(v139 + 56);
    Instance = StringLiteral_17139/*"bit_result_command_card_exceed"*/;
    if ( StringLiteral_17139/*"bit_result_command_card_exceed"*/ )
    {
      Instance = sub_B77684(StringLiteral_17139/*"bit_result_command_card_exceed"*/, *(_QWORD *)(*(_QWORD *)v139 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v144 = StringLiteral_17139/*"bit_result_command_card_exceed"*/;
    }
    else
    {
      v144 = 0LL;
    }
    if ( *(_DWORD *)(v139 + 24) <= 4u )
      goto LABEL_285;
    *(_QWORD *)(v139 + 64) = v144;
    sub_B77560(v139 + 64);
    Instance = StringLiteral_17140/*"bit_result_extraskill"*/;
    if ( StringLiteral_17140/*"bit_result_extraskill"*/ )
    {
      Instance = sub_B77684(StringLiteral_17140/*"bit_result_extraskill"*/, *(_QWORD *)(*(_QWORD *)v139 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v145 = StringLiteral_17140/*"bit_result_extraskill"*/;
    }
    else
    {
      v145 = 0LL;
    }
    if ( *(_DWORD *)(v139 + 24) <= 5u )
      goto LABEL_285;
    *(_QWORD *)(v139 + 72) = v145;
    sub_B77560(v139 + 72);
    Instance = StringLiteral_17143/*"bit_result_friendship_exceed"*/;
    if ( StringLiteral_17143/*"bit_result_friendship_exceed"*/ )
    {
      Instance = sub_B77684(StringLiteral_17143/*"bit_result_friendship_exceed"*/, *(_QWORD *)(*(_QWORD *)v139 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v146 = StringLiteral_17143/*"bit_result_friendship_exceed"*/;
    }
    else
    {
      v146 = 0LL;
    }
    if ( *(_DWORD *)(v139 + 24) <= 6u )
      goto LABEL_285;
    *(_QWORD *)(v139 + 80) = v146;
    sub_B77560(v139 + 80);
    v147 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v147 = BalanceConfig_TypeInfo;
    }
    v148 = &v147->static_fields->UIStandFigureROffsetEffectNames;
    *v148 = (struct System_String_array *)v139;
    sub_B77560(v148);
    v138 = BalanceConfig_TypeInfo;
  }
  if ( (BYTE3(v138->vtable._0_Equals.methodPtr) & 4) != 0 && !v138->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v138);
    v138 = BalanceConfig_TypeInfo;
  }
  if ( v138->static_fields->UIStandFigureROffsetImages )
    goto LABEL_279;
  Instance = sub_B775DC(string___TypeInfo, 18LL);
  if ( !Instance )
    goto LABEL_286;
  v149 = Instance;
  Instance = StringLiteral_1116/*"1053900:100:0"*/;
  if ( StringLiteral_1116/*"1053900:100:0"*/ )
  {
    Instance = sub_B77684(StringLiteral_1116/*"1053900:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v150 = StringLiteral_1116/*"1053900:100:0"*/;
  }
  else
  {
    v150 = 0LL;
  }
  if ( !*(_DWORD *)(v149 + 24) )
    goto LABEL_285;
  *(_QWORD *)(v149 + 32) = v150;
  sub_B77560(v149 + 32);
  Instance = StringLiteral_1119/*"1053910:100:0"*/;
  if ( StringLiteral_1119/*"1053910:100:0"*/ )
  {
    Instance = sub_B77684(StringLiteral_1119/*"1053910:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v151 = StringLiteral_1119/*"1053910:100:0"*/;
  }
  else
  {
    v151 = 0LL;
  }
  if ( *(_DWORD *)(v149 + 24) <= 1u )
    goto LABEL_285;
  *(_QWORD *)(v149 + 40) = v151;
  sub_B77560(v149 + 40);
  Instance = StringLiteral_1117/*"1053901:100:0"*/;
  if ( StringLiteral_1117/*"1053901:100:0"*/ )
  {
    Instance = sub_B77684(StringLiteral_1117/*"1053901:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v152 = StringLiteral_1117/*"1053901:100:0"*/;
  }
  else
  {
    v152 = 0LL;
  }
  if ( *(_DWORD *)(v149 + 24) <= 2u )
    goto LABEL_285;
  *(_QWORD *)(v149 + 48) = v152;
  sub_B77560(v149 + 48);
  Instance = StringLiteral_1120/*"1053911:100:0"*/;
  if ( StringLiteral_1120/*"1053911:100:0"*/ )
  {
    Instance = sub_B77684(StringLiteral_1120/*"1053911:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v153 = StringLiteral_1120/*"1053911:100:0"*/;
  }
  else
  {
    v153 = 0LL;
  }
  if ( *(_DWORD *)(v149 + 24) <= 3u )
    goto LABEL_285;
  *(_QWORD *)(v149 + 56) = v153;
  sub_B77560(v149 + 56);
  Instance = StringLiteral_1118/*"1053902:100:0"*/;
  if ( StringLiteral_1118/*"1053902:100:0"*/ )
  {
    Instance = sub_B77684(StringLiteral_1118/*"1053902:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v154 = StringLiteral_1118/*"1053902:100:0"*/;
  }
  else
  {
    v154 = 0LL;
  }
  if ( *(_DWORD *)(v149 + 24) <= 4u )
    goto LABEL_285;
  *(_QWORD *)(v149 + 64) = v154;
  sub_B77560(v149 + 64);
  Instance = StringLiteral_1121/*"1053912:100:0"*/;
  if ( StringLiteral_1121/*"1053912:100:0"*/ )
  {
    Instance = sub_B77684(StringLiteral_1121/*"1053912:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v155 = StringLiteral_1121/*"1053912:100:0"*/;
  }
  else
  {
    v155 = 0LL;
  }
  if ( *(_DWORD *)(v149 + 24) <= 5u )
    goto LABEL_285;
  *(_QWORD *)(v149 + 72) = v155;
  sub_B77560(v149 + 72);
  Instance = StringLiteral_1113/*"1053000:100:0"*/;
  if ( StringLiteral_1113/*"1053000:100:0"*/ )
  {
    Instance = sub_B77684(StringLiteral_1113/*"1053000:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v156 = StringLiteral_1113/*"1053000:100:0"*/;
  }
  else
  {
    v156 = 0LL;
  }
  if ( *(_DWORD *)(v149 + 24) <= 6u )
    goto LABEL_285;
  *(_QWORD *)(v149 + 80) = v156;
  sub_B77560(v149 + 80);
  Instance = StringLiteral_1114/*"1053001:100:0"*/;
  if ( StringLiteral_1114/*"1053001:100:0"*/ )
  {
    Instance = sub_B77684(StringLiteral_1114/*"1053001:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v157 = StringLiteral_1114/*"1053001:100:0"*/;
  }
  else
  {
    v157 = 0LL;
  }
  if ( *(_DWORD *)(v149 + 24) <= 7u )
    goto LABEL_285;
  *(_QWORD *)(v149 + 88) = v157;
  sub_B77560(v149 + 88);
  Instance = StringLiteral_1115/*"1053002:100:0"*/;
  if ( StringLiteral_1115/*"1053002:100:0"*/ )
  {
    Instance = sub_B77684(StringLiteral_1115/*"1053002:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v158 = StringLiteral_1115/*"1053002:100:0"*/;
  }
  else
  {
    v158 = 0LL;
  }
  if ( *(_DWORD *)(v149 + 24) <= 8u )
    goto LABEL_285;
  *(_QWORD *)(v149 + 96) = v158;
  sub_B77560(v149 + 96);
  Instance = StringLiteral_1223/*"5047900:100:0"*/;
  if ( StringLiteral_1223/*"5047900:100:0"*/ )
  {
    Instance = sub_B77684(StringLiteral_1223/*"5047900:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v159 = StringLiteral_1223/*"5047900:100:0"*/;
  }
  else
  {
    v159 = 0LL;
  }
  if ( *(_DWORD *)(v149 + 24) <= 9u )
    goto LABEL_285;
  *(_QWORD *)(v149 + 104) = v159;
  sub_B77560(v149 + 104);
  Instance = StringLiteral_1226/*"5047910:100:0"*/;
  if ( StringLiteral_1226/*"5047910:100:0"*/ )
  {
    Instance = sub_B77684(StringLiteral_1226/*"5047910:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v160 = StringLiteral_1226/*"5047910:100:0"*/;
  }
  else
  {
    v160 = 0LL;
  }
  if ( *(_DWORD *)(v149 + 24) <= 0xAu )
    goto LABEL_285;
  *(_QWORD *)(v149 + 112) = v160;
  sub_B77560(v149 + 112);
  Instance = StringLiteral_1224/*"5047901:100:0"*/;
  if ( StringLiteral_1224/*"5047901:100:0"*/ )
  {
    Instance = sub_B77684(StringLiteral_1224/*"5047901:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v161 = StringLiteral_1224/*"5047901:100:0"*/;
  }
  else
  {
    v161 = 0LL;
  }
  if ( *(_DWORD *)(v149 + 24) <= 0xBu )
    goto LABEL_285;
  *(_QWORD *)(v149 + 120) = v161;
  sub_B77560(v149 + 120);
  Instance = StringLiteral_1227/*"5047911:100:0"*/;
  if ( StringLiteral_1227/*"5047911:100:0"*/ )
  {
    Instance = sub_B77684(StringLiteral_1227/*"5047911:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v162 = StringLiteral_1227/*"5047911:100:0"*/;
  }
  else
  {
    v162 = 0LL;
  }
  if ( *(_DWORD *)(v149 + 24) <= 0xCu )
    goto LABEL_285;
  *(_QWORD *)(v149 + 128) = v162;
  sub_B77560(v149 + 128);
  Instance = StringLiteral_1225/*"5047902:100:0"*/;
  if ( StringLiteral_1225/*"5047902:100:0"*/ )
  {
    Instance = sub_B77684(StringLiteral_1225/*"5047902:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v163 = StringLiteral_1225/*"5047902:100:0"*/;
  }
  else
  {
    v163 = 0LL;
  }
  if ( *(_DWORD *)(v149 + 24) <= 0xDu )
    goto LABEL_285;
  *(_QWORD *)(v149 + 136) = v163;
  sub_B77560(v149 + 136);
  Instance = StringLiteral_1228/*"5047912:100:0"*/;
  if ( StringLiteral_1228/*"5047912:100:0"*/ )
  {
    Instance = sub_B77684(StringLiteral_1228/*"5047912:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v164 = StringLiteral_1228/*"5047912:100:0"*/;
  }
  else
  {
    v164 = 0LL;
  }
  if ( *(_DWORD *)(v149 + 24) <= 0xEu )
    goto LABEL_285;
  *(_QWORD *)(v149 + 144) = v164;
  sub_B77560(v149 + 144);
  Instance = StringLiteral_1220/*"5047000:100:0"*/;
  if ( StringLiteral_1220/*"5047000:100:0"*/ )
  {
    Instance = sub_B77684(StringLiteral_1220/*"5047000:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v165 = StringLiteral_1220/*"5047000:100:0"*/;
  }
  else
  {
    v165 = 0LL;
  }
  if ( *(_DWORD *)(v149 + 24) <= 0xFu )
    goto LABEL_285;
  *(_QWORD *)(v149 + 152) = v165;
  sub_B77560(v149 + 152);
  Instance = StringLiteral_1221/*"5047001:100:0"*/;
  if ( StringLiteral_1221/*"5047001:100:0"*/ )
  {
    Instance = sub_B77684(StringLiteral_1221/*"5047001:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v166 = StringLiteral_1221/*"5047001:100:0"*/;
  }
  else
  {
    v166 = 0LL;
  }
  if ( *(_DWORD *)(v149 + 24) <= 0x10u )
    goto LABEL_285;
  *(_QWORD *)(v149 + 160) = v166;
  sub_B77560(v149 + 160);
  Instance = StringLiteral_1222/*"5047002:100:0"*/;
  if ( !StringLiteral_1222/*"5047002:100:0"*/ )
  {
    v167 = 0LL;
    goto LABEL_274;
  }
  Instance = sub_B77684(StringLiteral_1222/*"5047002:100:0"*/, *(_QWORD *)(*(_QWORD *)v149 + 64LL));
  if ( !Instance )
  {
LABEL_287:
    v225 = sub_B776BC();
    sub_B77668(v225, 0LL);
  }
  v167 = StringLiteral_1222/*"5047002:100:0"*/;
LABEL_274:
  if ( *(_DWORD *)(v149 + 24) <= 0x11u )
    goto LABEL_285;
  *(_QWORD *)(v149 + 168) = v167;
  sub_B77560(v149 + 168);
  v168 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v168 = BalanceConfig_TypeInfo;
  }
  v169 = &v168->static_fields->UIStandFigureROffsetImages;
  *v169 = (struct System_String_array *)v149;
  sub_B77560(v169);
LABEL_279:
  v170 = ConstantMaster__GetValue_28438584(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7603/*"IS_WAR_BOARD_AI_CALC_EVAL_SUM"*/,
           0,
           0LL);
  v171 = BalanceConfig_TypeInfo;
  v172 = v170;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v171 = BalanceConfig_TypeInfo;
  }
  v171->static_fields->IsWarBoardAiCalcEvalSum = v172 != 0;
  BalanceConfig_TypeInfo->static_fields->WarBoardEvalFactorsAffectRatio = ConstantMaster__GetValue_28438584(
                                                                            MasterData_WarQuestSelectionMaster,
                                                                            (System_String_o *)StringLiteral_15592/*"WAR_BOARD_EVAL_FACTORS_AFFECT_RATIO"*/,
                                                                            10000,
                                                                            0LL);
  v173 = ConstantMaster__GetValue_28438584(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7604/*"IS_WAR_BOARD_AI_FILTER_NOT_ACTION"*/,
           1,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsWarBoardAiFilterNotAction = v173;
  v174 = ConstantMaster__GetValue_28438584(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7605/*"IS_WAR_BOARD_AI_FILTER_WASTE_ROUTE"*/,
           0,
           0LL);
  v175 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->IsWarBoardAiFilterWasteRoute = v174 != 0;
  BalanceConfig_TypeInfo->static_fields->StoneFragmentExchangeNoticeDispMax = ConstantMaster__GetValue_28438584(
                                                                                MasterData_WarQuestSelectionMaster,
                                                                                (System_String_o *)StringLiteral_12612/*"STONE_FRAGMENT_EXCHANGE_NOTICE_MAX"*/,
                                                                                v175->static_fields->StoneFragmentExchangeNoticeDispMax,
                                                                                0LL);
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveTimeConstant = (float)ConstantMaster__GetValue_28438584(
                                                                              MasterData_WarQuestSelectionMaster,
                                                                              (System_String_o *)StringLiteral_1192/*"3D_MAP_CAMERA_MOVE_TIME_CONSTANT"*/,
                                                                              0,
                                                                              0LL)
                                                                   / 1000.0;
  v176 = ConstantMaster__GetValue_28438584(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_1191/*"3D_MAP_CAMERA_MOVE_TIME_COEFFICIENT"*/,
           1700,
           0LL);
  v177 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveTimeCoefficient = (float)v176 / 1000.0;
  v178 = ConstantMaster__GetValue_28438584(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_1193/*"3D_MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE"*/,
           v177->static_fields->MapCameraMoveTimeLogarithmBase,
           0LL);
  v179 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveTimeLogarithmBase = v178;
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveEasingType = ConstantMaster__GetValue_28438584(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_1190/*"3D_MAP_CAMERA_MOVE_EASING_TYPE"*/,
                                                                     v179->static_fields->MapCameraMoveEasingType,
                                                                     0LL);
  v180 = ConstantMaster__GetValue_28438584(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_3026/*"CAMERA_2D_RESET_DURATION"*/,
           644,
           0LL);
  v181 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->Camera2DResetDuration = (float)v180 / 1000.0;
  v182 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_8762/*"MAIN_CHAPTERS_WITH_EVENT_ID"*/,
           v181->static_fields->MainChaptersWithEventId,
           0LL);
  p_MainChaptersWithEventId = &BalanceConfig_TypeInfo->static_fields->MainChaptersWithEventId;
  *p_MainChaptersWithEventId = v182;
  sub_B77560(p_MainChaptersWithEventId);
  BalanceConfig_TypeInfo->static_fields->OrtSecondFormId = ConstantMaster__GetValue_28438584(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_10018/*"ORT_SECONDE_FORM_ID"*/,
                                                             1,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->OrtThirdFormId = ConstantMaster__GetValue_28438584(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_10019/*"ORT_THIRD_FORM_ID"*/,
                                                            2,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->OrtFirstQuestId = ConstantMaster__GetValue_28438584(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_10013/*"ORT_FIRST_QUEST_ID"*/,
                                                             3001324,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLateQuestId = ConstantMaster__GetValue_28438584(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_10017/*"ORT_LATE_QUEST_ID"*/,
                                                            3001325,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLatePhaseBreak = ConstantMaster__GetValue_28438584(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_10014/*"ORT_LATE_PHASE_BREAK"*/,
                                                               5,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLatePhaseSecondForm = ConstantMaster__GetValue_28438584(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_10016/*"ORT_LATE_PHASE_SECOND_FORM"*/,
                                                                    6,
                                                                    0LL);
  v184 = ConstantMaster__GetValue_28438584(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_10015/*"ORT_LATE_PHASE_DEAD"*/,
           7,
           0LL);
  v185 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->OrtLatePhaseDead = v184;
  v186 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_13698/*"TREASURE_DEVICES_FORCED_OPEN_EFFECT"*/,
           v185->static_fields->TreasureDevicesForcedOpenEffect,
           0LL);
  p_TreasureDevicesForcedOpenEffect = &BalanceConfig_TypeInfo->static_fields->TreasureDevicesForcedOpenEffect;
  *p_TreasureDevicesForcedOpenEffect = v186;
  sub_B77560(p_TreasureDevicesForcedOpenEffect);
  v188 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_7201/*"HEROINE_TREASURE_DEVICE_RANKUP_EFFECTS"*/,
           BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects,
           0LL);
  p_HeroineTreasureDeviceRankUpEffects = &BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects;
  *p_HeroineTreasureDeviceRankUpEffects = v188;
  sub_B77560(p_HeroineTreasureDeviceRankUpEffects);
  v190 = ConstantMaster__GetValue_28438584(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7200/*"HEROINE_LIMIT_COUNT_ORTINAX_REFURBISHED"*/,
           BalanceConfig_TypeInfo->static_fields->HeroineLimitCountOrtinaxRefurbished,
           0LL);
  v191 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->HeroineLimitCountOrtinaxRefurbished = v190;
  v192 = ConstantMaster__GetValue_28438584(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_3147/*"CLASS_BOARD_RELEASE_QUEST_ID"*/,
           v191->static_fields->ClassBoardReleaseQuestId,
           0LL);
  v193 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ClassBoardReleaseQuestId = v192;
  v194 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_5940/*"EXTRA1_SORT_ORDER_CLASS_IDS"*/,
           v193->static_fields->Extra1SortOrderClassIds,
           0LL);
  p_Extra1SortOrderClassIds = &BalanceConfig_TypeInfo->static_fields->Extra1SortOrderClassIds;
  *p_Extra1SortOrderClassIds = v194;
  sub_B77560(p_Extra1SortOrderClassIds);
  v196 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_5941/*"EXTRA2_SORT_ORDER_CLASS_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds,
           0LL);
  p_Extra2SortOrderClassIds = &BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds;
  *p_Extra2SortOrderClassIds = v196;
  sub_B77560(p_Extra2SortOrderClassIds);
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectMoveMaxDistance = ConstantMaster__GetValue_28438584(
                                                                                   MasterData_WarQuestSelectionMaster,
                                                                                   (System_String_o *)StringLiteral_3110/*"CLASS_BOARD_CAMERA_SELECT_MOVE_MAX_DISTANCE"*/,
                                                                                   BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectMoveMaxDistance,
                                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectSecMin = (float)ConstantMaster__GetValue_28438584(
                                                                                 MasterData_WarQuestSelectionMaster,
                                                                                 (System_String_o *)StringLiteral_3112/*"CLASS_BOARD_CAMERA_SELECT_SEC_MIN"*/,
                                                                                 100,
                                                                                 0LL)
                                                                      / 1000.0;
  v198 = ConstantMaster__GetValue_28438584(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_3111/*"CLASS_BOARD_CAMERA_SELECT_SEC_MAX"*/,
           1000,
           0LL);
  v199 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectSecMax = (float)v198 / 1000.0;
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectEasingType = ConstantMaster__GetValue_28438584(
                                                                              MasterData_WarQuestSelectionMaster,
                                                                              (System_String_o *)StringLiteral_3109/*"CLASS_BOARD_CAMERA_SELECT_EASING_TYPE"*/,
                                                                              v199->static_fields->ClassBoardCameraSelectEasingType,
                                                                              0LL);
  v200 = ConstantMaster__GetValue_28438584(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_3105/*"CLASS_BOARD_2D_CAMERA_DEFAULT_SIZE"*/,
           1700,
           0LL);
  v201 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ClassBoard2DCameraDefaultSize = (float)v200 / 1000.0;
  v202 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_9520/*"NOT_UI_CHANGE_MAP_IDS"*/,
           v201->static_fields->NotUIChangeMapIds,
           0LL);
  p_NotUIChangeMapIds = &BalanceConfig_TypeInfo->static_fields->NotUIChangeMapIds;
  *p_NotUIChangeMapIds = v202;
  sub_B77560(p_NotUIChangeMapIds);
  v204 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_8556/*"LIMIT_SEALED_DIALOG_MAX_LIMIT_OPEN_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds,
           0LL);
  p_LimitSealedDialogMaxLimitOpenIds = &BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds;
  *p_LimitSealedDialogMaxLimitOpenIds = v204;
  sub_B77560(p_LimitSealedDialogMaxLimitOpenIds);
  v206 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_10010/*"ORDEAL_CALL_CHAPTER_FOLDER_EVENT_UI_DISP_WAR_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds,
           0LL);
  p_OrdealCallChapterFolderEventUIDispWarIds = &BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds;
  *p_OrdealCallChapterFolderEventUIDispWarIds = v206;
  sub_B77560(p_OrdealCallChapterFolderEventUIDispWarIds);
  v208 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_11278/*"RECOVERY_FATIGUE_DELAYED_CHANGE_BG_EVENTS"*/,
           BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents,
           0LL);
  p_RecoveryFatigueDelayedChangeBgEvents = &BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents;
  *p_RecoveryFatigueDelayedChangeBgEvents = v208;
  sub_B77560(p_RecoveryFatigueDelayedChangeBgEvents);
  Instance = sub_B775DC(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_286;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_285;
  *(_DWORD *)(Instance + 32) = 94086401;
  v210 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_9479/*"NONE_DISPLAY_FREE_QUEST_MATERIAL"*/,
           (System_Int32_array *)Instance,
           0LL);
  p_noneDisplayFreeQuestMaterial = &BalanceConfig_TypeInfo->static_fields->noneDisplayFreeQuestMaterial;
  *p_noneDisplayFreeQuestMaterial = v210;
  sub_B77560(p_noneDisplayFreeQuestMaterial);
  v212 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_9519/*"NOT_SEND_TRACK_EVENT_AT_WAR_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
           0LL);
  p_NotSendTrackEventAtWarIds = &BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds;
  *p_NotSendTrackEventAtWarIds = v212;
  sub_B77560(p_NotSendTrackEventAtWarIds);
  v214 = ConstantMaster__GetValue_28438584(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_12565/*"STARTING_MEMBER_FRIENDSHIP_RATE"*/,
           0,
           0LL);
  v215 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->StartingMemberFriendshipRate = v214;
  v216 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_9514/*"NOT_REQUIRED_WAR_IDS"*/,
           v215->static_fields->NotRequiredPlayWarIds,
           0LL);
  p_NotRequiredPlayWarIds = &BalanceConfig_TypeInfo->static_fields->NotRequiredPlayWarIds;
  *p_NotRequiredPlayWarIds = v216;
  sub_B77560(p_NotRequiredPlayWarIds);
  v218 = ConstantMaster__GetValue_28438584(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7599/*"IS_ENABLE_OLD_BLOCK_SHORTEST_ROUTE"*/,
           0,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsEnableOldBlockShortestRoute = v218;
  v219 = ConstantMaster__GetValue_28438584(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7600/*"IS_EVENT_POINT_MENU"*/,
           0,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsEventPointMenu = v219;
  v220 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_8597/*"LOGIN_QUEST_RETURN_TERMINAL_DIALOG_MESSAGE"*/, 0LL);
  p_LoginQuestReturnTerminalDialogMessage = &BalanceConfig_TypeInfo->static_fields->LoginQuestReturnTerminalDialogMessage;
  *p_LoginQuestReturnTerminalDialogMessage = v220;
  sub_B77560(p_LoginQuestReturnTerminalDialogMessage);
  v222 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)StringLiteral_5784/*"EVENT_ITEM_NOT_DISP_ITEM_GET_EFFECT"*/, 0LL, 0LL);
  p_EventItemNotDispItemGetEffect = &BalanceConfig_TypeInfo->static_fields->EventItemNotDispItemGetEffect;
  *p_EventItemNotDispItemGetEffect = v222;
  sub_B77560(p_EventItemNotDispItemGetEffect);
}


void __fastcall BalanceConfig___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4389F69 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig___c_TypeInfo);
    byte_4389F69 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BalanceConfig___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BalanceConfig___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BalanceConfig___c___ctor(BalanceConfig___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BalanceConfig___c___Initialize_b__220_0(
        BalanceConfig___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}