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
  __int64 v55; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  System_RuntimeFieldHandle_o v57; // 0:w1.4
  System_RuntimeFieldHandle_o v58; // 0:w1.4
  System_RuntimeFieldHandle_o v59; // 0:w1.4
  System_RuntimeFieldHandle_o v60; // 0:w1.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42ACEE6 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Field__PrivateImplementationDetails__0576E2463551A09802222B33A5BA38F57896D9DD406B6DB32A10299A54B4B5BC);
    sub_B52984(&Field__PrivateImplementationDetails__829FEE660E2799B8814849BCC3884998BB3651E975AC0C0D659AD53227033DBC);
    sub_B52984(&Field__PrivateImplementationDetails__96039A68C58EBF2F40B99A5B8F9F313745D9C4E02164BB0FCE39159471432F4B);
    sub_B52984(&Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA);
    sub_B52984(&StringLiteral_2593/*"BGM_TITLE_5"*/);
    byte_42ACEE6 = 1;
  }
  BalanceConfig_TypeInfo->static_fields->CriticalRateToAddByQuickFirstBonus = 0;
  v5 = BalanceConfig_TypeInfo;
  v61.fields.r = 1.0;
  v61.fields.g = 1.0;
  BalanceConfig_TypeInfo->static_fields->ServantLimitMax = 4;
  v61.fields.b = 1.0;
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
  v61.fields.a = 0.6;
  *(_OWORD *)&var40.methodPointer = 0uLL;
  UnityEngine_Color___ctor(v61, v1, v2, v3, v4, &var40);
  v6 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->MaskColor = *(struct UnityEngine_Color_o *)&var40.methodPointer;
  v6->static_fields->CommandCodeDetachingItemId = -1;
  v6->static_fields->FloatAfterDecimalPointMax = 1.0;
  v6->static_fields->FollowNum = 3;
  v6->static_fields->FollowFriendPoint = 25;
  p_PresentBoxFilterSvtEquipMaterial = &v6->static_fields->PresentBoxFilterSvtEquipMaterial;
  *p_PresentBoxFilterSvtEquipMaterial = 0LL;
  sub_B52920(p_PresentBoxFilterSvtEquipMaterial);
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
  sub_B52920(p_ReprintLastWarRaidEventIdList);
  v10 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->CommandCardParamUpMax = 500;
  p_EventTowerFadeOutDelayTime = &v10->static_fields->EventTowerFadeOutDelayTime;
  *p_EventTowerFadeOutDelayTime = 0LL;
  sub_B52920(p_EventTowerFadeOutDelayTime);
  v12 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->EventTowerFadeOutPlayTime = 3.0;
  v12->static_fields->MaxFriendChocolateUse = 3;
  v12->static_fields->FriendPointBoostItemEfffectId = 3;
  v12->static_fields->MainInterludeWarId = 1004;
  p_MainInterludeWarIdOnMaterial = &v12->static_fields->MainInterludeWarIdOnMaterial;
  *p_MainInterludeWarIdOnMaterial = 0LL;
  sub_B52920(p_MainInterludeWarIdOnMaterial);
  p_EventBoardGameDiceButtonPostion = &BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion;
  *p_EventBoardGameDiceButtonPostion = 0LL;
  sub_B52920(p_EventBoardGameDiceButtonPostion);
  p_EventBoardGameMapIdList = &BalanceConfig_TypeInfo->static_fields->EventBoardGameMapIdList;
  *p_EventBoardGameMapIdList = 0LL;
  sub_B52920(p_EventBoardGameMapIdList);
  v16 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->TitleFlowOld = 0;
  v16->static_fields->StoryWarId = 1003;
  v16->static_fields->OrdealCallWarId = 401;
  p_OrdealCallClearBgmName = &v16->static_fields->OrdealCallClearBgmName;
  *p_OrdealCallClearBgmName = (struct System_String_o *)StringLiteral_2593/*"BGM_TITLE_5"*/;
  sub_B52920(p_OrdealCallClearBgmName);
  p_consumeStormPodSpotId = &BalanceConfig_TypeInfo->static_fields->consumeStormPodSpotId;
  *p_consumeStormPodSpotId = 0LL;
  sub_B52920(p_consumeStormPodSpotId);
  p_StormPodHelpIds = &BalanceConfig_TypeInfo->static_fields->StormPodHelpIds;
  *p_StormPodHelpIds = 0LL;
  sub_B52920(p_StormPodHelpIds);
  p_legacyAspectMovies = &BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
  *p_legacyAspectMovies = 0LL;
  sub_B52920(p_legacyAspectMovies);
  p_fullScreenNPChrs = &BalanceConfig_TypeInfo->static_fields->fullScreenNPChrs;
  *p_fullScreenNPChrs = 0LL;
  sub_B52920(p_fullScreenNPChrs);
  p_fullScreenNPSeqIds = &BalanceConfig_TypeInfo->static_fields->fullScreenNPSeqIds;
  *p_fullScreenNPSeqIds = 0LL;
  sub_B52920(p_fullScreenNPSeqIds);
  p_UIStandFigureROffsetEffectNames = &BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames;
  *p_UIStandFigureROffsetEffectNames = 0LL;
  sub_B52920(p_UIStandFigureROffsetEffectNames);
  p_UIStandFigureROffsetImages = &BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetImages;
  *p_UIStandFigureROffsetImages = 0LL;
  sub_B52920(p_UIStandFigureROffsetImages);
  v25 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->IsWarBoardAiCalcEvalSum = 0;
  v25->static_fields->WarBoardEvalFactorsAffectRatio = 10000;
  *(_QWORD *)&v25->static_fields->StoneFragmentExchangeNoticeDispMax = 999LL;
  v25->static_fields->MapCameraMoveTimeCoefficient = 1.7;
  v25->static_fields->MapCameraMoveTimeLogarithmBase = 11000;
  v25->static_fields->MapCameraMoveEasingType = 15;
  v25->static_fields->Camera2DResetDuration = 0.644;
  v26 = sub_B5299C(int___TypeInfo, 1LL);
  if ( !v26 )
    goto LABEL_18;
  v28 = (struct System_Int32_array *)v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v26 + 32) = 311;
  p_MainChaptersWithEventId = &BalanceConfig_TypeInfo->static_fields->MainChaptersWithEventId;
  *p_MainChaptersWithEventId = v28;
  sub_B52920(p_MainChaptersWithEventId);
  v26 = sub_B5299C(int___TypeInfo, 1LL);
  if ( !v26 )
    goto LABEL_18;
  v30 = (struct System_Int32_array *)v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v26 + 32) = 2800502;
  p_TreasureDevicesForcedOpenEffect = &BalanceConfig_TypeInfo->static_fields->TreasureDevicesForcedOpenEffect;
  *p_TreasureDevicesForcedOpenEffect = v30;
  sub_B52920(p_TreasureDevicesForcedOpenEffect);
  v26 = sub_B5299C(int___TypeInfo, 1LL);
  if ( !v26 )
    goto LABEL_18;
  v32 = (struct System_Int32_array *)v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v26 + 32) = 800106;
  p_HeroineTreasureDeviceRankUpEffects = &BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects;
  *p_HeroineTreasureDeviceRankUpEffects = v32;
  sub_B52920(p_HeroineTreasureDeviceRankUpEffects);
  v34 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->HeroineLimitCountOrtinaxRefurbished = 13;
  v34->static_fields->ClassBoardReleaseQuestId = 4000100;
  v35 = (System_Array_o *)sub_B5299C(int___TypeInfo, 4LL);
  v57.fields.value = Field__PrivateImplementationDetails__0576E2463551A09802222B33A5BA38F57896D9DD406B6DB32A10299A54B4B5BC;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v35, v57, 0LL);
  p_Extra1SortOrderClassIds = &BalanceConfig_TypeInfo->static_fields->Extra1SortOrderClassIds;
  *p_Extra1SortOrderClassIds = (struct System_Int32_array *)v35;
  sub_B52920(p_Extra1SortOrderClassIds);
  v37 = (System_Array_o *)sub_B5299C(int___TypeInfo, 4LL);
  v58.fields.value = Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v37, v58, 0LL);
  p_Extra2SortOrderClassIds = &BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds;
  *p_Extra2SortOrderClassIds = (struct System_Int32_array *)v37;
  sub_B52920(p_Extra2SortOrderClassIds);
  v39 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectMoveMaxDistance = 1024;
  v39->static_fields->ClassBoardCameraSelectSecMin = 0.1;
  v39->static_fields->ClassBoardCameraSelectSecMax = 1.0;
  v39->static_fields->ClassBoardCameraSelectEasingType = 5;
  v39->static_fields->ClassBoard2DCameraDefaultSize = 1.7;
  v40 = sub_B5299C(int___TypeInfo, 0LL);
  p_NotUIChangeMapIds = &BalanceConfig_TypeInfo->static_fields->NotUIChangeMapIds;
  *p_NotUIChangeMapIds = (struct System_Int32_array *)v40;
  sub_B52920(p_NotUIChangeMapIds);
  v26 = sub_B5299C(int___TypeInfo, 1LL);
  if ( !v26 )
    goto LABEL_18;
  v42 = (struct System_Int32_array *)v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v26 + 32) = 3300100;
  p_LimitSealedDialogMaxLimitOpenIds = &BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds;
  *p_LimitSealedDialogMaxLimitOpenIds = v42;
  sub_B52920(p_LimitSealedDialogMaxLimitOpenIds);
  v26 = sub_B5299C(int___TypeInfo, 1LL);
  if ( !v26 )
    goto LABEL_18;
  v44 = (struct System_Int32_array *)v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v26 + 32) = 402;
  p_OrdealCallChapterFolderEventUIDispWarIds = &BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds;
  *p_OrdealCallChapterFolderEventUIDispWarIds = v44;
  sub_B52920(p_OrdealCallChapterFolderEventUIDispWarIds);
  v26 = sub_B5299C(int___TypeInfo, 1LL);
  if ( !v26 )
    goto LABEL_18;
  v46 = (struct System_Int32_array *)v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v26 + 32) = 80432;
  p_RecoveryFatigueDelayedChangeBgEvents = &BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents;
  *p_RecoveryFatigueDelayedChangeBgEvents = v46;
  sub_B52920(p_RecoveryFatigueDelayedChangeBgEvents);
  v26 = sub_B5299C(int___TypeInfo, 1LL);
  if ( !v26 )
LABEL_18:
    sub_B52A5C(v26, v27);
  v48 = (struct System_Int32_array *)v26;
  if ( !*(_DWORD *)(v26 + 24) )
  {
LABEL_19:
    v55 = sub_B52A88(v26);
    sub_B52A28(v55, 0LL);
  }
  *(_DWORD *)(v26 + 32) = 94086401;
  p_noneDisplayFreeQuestMaterial = &BalanceConfig_TypeInfo->static_fields->noneDisplayFreeQuestMaterial;
  *p_noneDisplayFreeQuestMaterial = v48;
  sub_B52920(p_noneDisplayFreeQuestMaterial);
  v50 = (System_Array_o *)sub_B5299C(int___TypeInfo, 5LL);
  v59.fields.value = Field__PrivateImplementationDetails__829FEE660E2799B8814849BCC3884998BB3651E975AC0C0D659AD53227033DBC;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v50, v59, 0LL);
  p_NotSendTrackEventAtWarIds = &BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds;
  *p_NotSendTrackEventAtWarIds = (struct System_Int32_array *)v50;
  sub_B52920(p_NotSendTrackEventAtWarIds);
  BalanceConfig_TypeInfo->static_fields->StartingMemberFriendshipRate = 0;
  v52 = (System_Array_o *)sub_B5299C(int___TypeInfo, 6LL);
  v60.fields.value = Field__PrivateImplementationDetails__96039A68C58EBF2F40B99A5B8F9F313745D9C4E02164BB0FCE39159471432F4B;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v52, v60, 0LL);
  p_NotRequiredPlayWarIds = &BalanceConfig_TypeInfo->static_fields->NotRequiredPlayWarIds;
  *p_NotRequiredPlayWarIds = (struct System_Int32_array *)v52;
  sub_B52920(p_NotRequiredPlayWarIds);
  v54 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->IsEnableOldBlockShortestRoute = 0;
  v54->static_fields->IsEventPointMenu = 0;
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
  int32_t Value_28577068; // w22
  BalanceConfig_c *v7; // x8
  BalanceConfig_c *v8; // x8
  int64_t Value_28576492; // x0
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
  const MethodInfo *v33; // x2
  System_Int32_array *v34; // x1
  struct System_Int32_array **p_ServantIdsBirthdayBeforeValentine; // x0
  System_String_o *v36; // x0
  const MethodInfo *v37; // x2
  System_Int32_array *v38; // x0
  BalanceConfig_c *v39; // x8
  System_Int32_array *v40; // x21
  struct System_Int32_array **p_ServantIdsIgnoreFormChange; // x0
  int32_t v42; // w0
  BalanceConfig_c *v43; // x8
  int32_t v44; // w21
  int32_t v45; // w0
  int32_t v46; // w0
  BalanceConfig_c *v47; // x8
  System_String_o *v48; // x0
  BalanceConfig_c *v49; // x0
  float v50; // w21
  System_String_o *v51; // x0
  BalanceConfig_c *v52; // x0
  float v53; // w21
  System_String_o *v54; // x0
  BalanceConfig_c *v55; // x0
  float v56; // w21
  System_String_o *v57; // x0
  BalanceConfig_c *v58; // x0
  float v59; // w21
  int32_t v60; // w0
  BalanceConfig_c *v61; // x8
  int32_t v62; // w0
  BalanceConfig_c *v63; // x8
  System_String_o *v64; // x0
  System_String_o *v65; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x21
  BalanceConfig___c_c *v67; // x8
  struct BalanceConfig___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__219_0; // x22
  Il2CppObject *v70; // x23
  struct BalanceConfig___c_StaticFields *v71; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  System_Int32_array *v73; // x0
  BalanceConfig_c *v74; // x8
  System_Int32_array *v75; // x21
  struct System_Int32_array **p_PresentBoxFilterSvtEquipMaterial; // x0
  int32_t v77; // w0
  int32_t v78; // w21
  BalanceConfig_c *v79; // x0
  int32_t v80; // w0
  int32_t v81; // w21
  BalanceConfig_c *v82; // x0
  int32_t v83; // w0
  BalanceConfig_c *v84; // x8
  int32_t v85; // w21
  System_Int32_array *v86; // x1
  struct System_Int32_array **p_ReprintLastWarRaidEventIdList; // x0
  System_Int32_array *v88; // x1
  struct System_Int32_array **p_EventTowerFadeOutDelayTime; // x0
  System_Array_o *v90; // x21
  BalanceConfig_c *v91; // x0
  _QWORD *v92; // x0
  int32_t v93; // w0
  BalanceConfig_c *v94; // x8
  int v95; // w21
  System_Int32_array *v96; // x1
  struct System_Int32_array **p_EventBoardGameDiceButtonPostion; // x0
  unsigned int v98; // w8
  __int64 v99; // x21
  BalanceConfig_c *v100; // x0
  struct System_Int32_array **v101; // x0
  System_Int32_array *v102; // x0
  BalanceConfig_c *v103; // x8
  System_Int32_array *v104; // x21
  struct System_Int32_array **p_MainInterludeWarIdOnMaterial; // x0
  __int64 v106; // x21
  BalanceConfig_c *v107; // x0
  struct System_Int32_array **v108; // x0
  System_Int32_array *v109; // x0
  BalanceConfig_c *v110; // x8
  System_Int32_array *v111; // x21
  struct System_Int32_array **p_EventBoardGameMapIdList; // x0
  System_String_o *v113; // x21
  BalanceConfig_c *v114; // x0
  struct System_String_o **p_OrdealCallClearBgmName; // x0
  System_Array_o *v116; // x21
  System_Int32_array *v117; // x0
  BalanceConfig_c *v118; // x8
  System_Int32_array *v119; // x21
  struct System_Int32_array **p_consumeStormPodSpotId; // x0
  System_Int32_array *v121; // x1
  struct System_Int32_array **p_StormPodHelpIds; // x0
  System_String_array *ValueStringArray; // x1
  struct System_String_array **p_legacyAspectMovies; // x0
  System_Int32_array *v125; // x1
  struct System_Int32_array **p_fullScreenNPChrs; // x0
  System_Int32_array *v127; // x1
  struct System_Int32_array **p_fullScreenNPSeqIds; // x0
  System_String_o *v129; // x1
  struct System_String_o **p_IOS_ExaminationNewsUrl; // x0
  struct BalanceConfig_StaticFields *v131; // x9
  struct System_String_o **v132; // x0
  int32_t v133; // w0
  BalanceConfig_c *v134; // x8
  int32_t v135; // w21
  System_String_array *v136; // x1
  struct System_String_array **p_UIStandFigureROffsetEffectNames; // x0
  System_String_array *v138; // x1
  struct System_String_array **p_UIStandFigureROffsetImages; // x0
  BalanceConfig_c *v140; // x0
  __int64 v141; // x21
  __int64 v142; // x1
  __int64 v143; // x1
  __int64 v144; // x1
  __int64 v145; // x1
  __int64 v146; // x1
  __int64 v147; // x1
  __int64 v148; // x1
  BalanceConfig_c *v149; // x0
  struct System_String_array **v150; // x0
  __int64 v151; // x21
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
  __int64 v168; // x1
  __int64 v169; // x1
  BalanceConfig_c *v170; // x0
  struct System_String_array **v171; // x0
  int32_t v172; // w0
  BalanceConfig_c *v173; // x8
  int32_t v174; // w21
  bool v175; // w9
  int32_t v176; // w0
  BalanceConfig_c *v177; // x8
  int32_t v178; // w0
  BalanceConfig_c *v179; // x8
  int32_t v180; // w0
  BalanceConfig_c *v181; // x8
  int32_t v182; // w0
  BalanceConfig_c *v183; // x8
  System_Int32_array *v184; // x1
  struct System_Int32_array **p_MainChaptersWithEventId; // x0
  int32_t v186; // w0
  BalanceConfig_c *v187; // x8
  System_Int32_array *v188; // x1
  struct System_Int32_array **p_TreasureDevicesForcedOpenEffect; // x0
  System_Int32_array *v190; // x1
  struct System_Int32_array **p_HeroineTreasureDeviceRankUpEffects; // x0
  int32_t v192; // w0
  BalanceConfig_c *v193; // x8
  int32_t v194; // w0
  BalanceConfig_c *v195; // x8
  System_Int32_array *v196; // x1
  struct System_Int32_array **p_Extra1SortOrderClassIds; // x0
  System_Int32_array *v198; // x1
  struct System_Int32_array **p_Extra2SortOrderClassIds; // x0
  int32_t v200; // w0
  BalanceConfig_c *v201; // x8
  int32_t v202; // w0
  BalanceConfig_c *v203; // x8
  System_Int32_array *v204; // x1
  struct System_Int32_array **p_NotUIChangeMapIds; // x0
  System_Int32_array *v206; // x1
  struct System_Int32_array **p_LimitSealedDialogMaxLimitOpenIds; // x0
  System_Int32_array *v208; // x1
  struct System_Int32_array **p_OrdealCallChapterFolderEventUIDispWarIds; // x0
  System_Int32_array *v210; // x1
  struct System_Int32_array **p_RecoveryFatigueDelayedChangeBgEvents; // x0
  System_Int32_array *v212; // x1
  struct System_Int32_array **p_noneDisplayFreeQuestMaterial; // x0
  System_Int32_array *v214; // x1
  struct System_Int32_array **p_NotSendTrackEventAtWarIds; // x0
  int32_t v216; // w0
  BalanceConfig_c *v217; // x8
  System_Int32_array *v218; // x1
  struct System_Int32_array **p_NotRequiredPlayWarIds; // x0
  bool v220; // w9
  bool v221; // w9
  System_String_o *v222; // x1
  struct System_String_o **p_LoginQuestReturnTerminalDialogMessage; // x0
  __int64 v224; // x0
  __int64 v225; // x0
  float result; // [xsp+Ch] [xbp-54h] BYREF
  System_RuntimeFieldHandle_o v227; // 0:w1.4
  System_RuntimeFieldHandle_o v228; // 0:w1.4

  if ( (byte_42ACEE5 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ConstantLongMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Func_string__int___ctor__);
    sub_B52984(&System_Func_string__int__TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&Field__PrivateImplementationDetails__84DF4B72A51E01473BC25693E526BC603A140C4300062B4A7F64A9F7D00ABB95);
    sub_B52984(&Field__PrivateImplementationDetails__A1FBA00A0F8840358C0A54605FFD365F75E3A3D7AFF25F48F474C4E89BB0B37D);
    sub_B52984(&Method_BalanceConfig___c__Initialize_b__219_0__);
    sub_B52984(&BalanceConfig___c_TypeInfo);
    sub_B52984(&StringLiteral_8755/*"MAX_USER_ITEM"*/);
    sub_B52984(&StringLiteral_8317/*"JEKYLL_SVT_ID"*/);
    sub_B52984(&StringLiteral_1110/*"1053912:100:0"*/);
    sub_B52984(&StringLiteral_13545/*"TREASURE_DEVICES_FORCED_OPEN_EFFECT"*/);
    sub_B52984(&StringLiteral_12228/*"SHOP_DETAIL_CHECK_DIALOG_FONT_SIZE"*/);
    sub_B52984(&StringLiteral_8448/*"LIMIT_SEALED_DIALOG_MAX_LIMIT_OPEN_IDS"*/);
    sub_B52984(&StringLiteral_8754/*"MAX_USER_COMMAND_CODE"*/);
    sub_B52984(&StringLiteral_9905/*"OTHER_IMAGE_LIMIT_COUNT"*/);
    sub_B52984(&StringLiteral_8676/*"MASHU_SVT_ID3"*/);
    sub_B52984(&StringLiteral_4637/*"DISABLE_FRIENDSHIP_EXCEED"*/);
    sub_B52984(&StringLiteral_12490/*"STORMPOD_HELP_IDS"*/);
    sub_B52984(&StringLiteral_11162/*"REPRINT_LAST_WAR_RAID_EVENT_ID_LIST"*/);
    sub_B52984(&StringLiteral_16919/*"bit_result_bond"*/);
    sub_B52984(&StringLiteral_8746/*"MAX_MANA"*/);
    sub_B52984(&StringLiteral_5608/*"EVENT_BOARD_GAME_DICE_BUTTON_POS"*/);
    sub_B52984(&StringLiteral_1211/*"5047002:100:0"*/);
    sub_B52984(&StringLiteral_5781/*"EVENT_TOWER_FADEOUT_PLAY_TIME"*/);
    sub_B52984(&StringLiteral_9368/*"NONE_DISPLAY_FREE_QUEST_MATERIAL"*/);
    sub_B52984(&StringLiteral_1109/*"1053911:100:0"*/);
    sub_B52984(&StringLiteral_1108/*"1053910:100:0"*/);
    sub_B52984(&StringLiteral_7497/*"IS_WAR_BOARD_AI_FILTER_WASTE_ROUTE"*/);
    sub_B52984(&StringLiteral_19391/*"https://view.fate-go.jp/"*/);
    sub_B52984(&StringLiteral_7155/*"HYDE_SVT_ID"*/);
    sub_B52984(&StringLiteral_9793/*"OBERON_CHOCO_SVT_ID"*/);
    sub_B52984(&StringLiteral_6396/*"FIX_MAIN_SUPPORT_DECK_NUM"*/);
    sub_B52984(&StringLiteral_8674/*"MASHU_SVT_ID1"*/);
    sub_B52984(&StringLiteral_3232/*"COMBINE_SERVANT_SKILL_IDS"*/);
    sub_B52984(&StringLiteral_1105/*"1053900:100:0"*/);
    sub_B52984(&StringLiteral_9896/*"ORT_FIRST_QUEST_ID"*/);
    sub_B52984(&StringLiteral_8767/*"MEMORY_DECK_LIMIT_BY_QUEST"*/);
    sub_B52984(&StringLiteral_5611/*"EVENT_BOARD_GAME_MAP_ID_LIST"*/);
    sub_B52984(&StringLiteral_8489/*"LOGIN_QUEST_RETURN_TERMINAL_DIALOG_MESSAGE"*/);
    sub_B52984(&StringLiteral_9423/*"NPC_FRIEND_POINT"*/);
    sub_B52984(&StringLiteral_3020/*"CLASS_BOARD_2D_CAMERA_DEFAULT_SIZE"*/);
    sub_B52984(&StringLiteral_1209/*"5047000:100:0"*/);
    sub_B52984(&StringLiteral_11635/*"SAME_CLASS_MULI_EXP"*/);
    sub_B52984(&StringLiteral_8740/*"MAX_EVENT_ACTIVITY_POINT"*/);
    sub_B52984(&StringLiteral_1179/*"3D_MAP_CAMERA_MOVE_EASING_TYPE"*/);
    sub_B52984(&StringLiteral_9330/*"NEED_REBOOT_TIME"*/);
    sub_B52984(&StringLiteral_9893/*"ORDEAL_CALL_CHAPTER_FOLDER_EVENT_UI_DISP_WAR_IDS"*/);
    sub_B52984(&StringLiteral_6493/*"FREE_GACHA_RESET_AT"*/);
    sub_B52984(&StringLiteral_8758/*"MAX_USER_SVT_EQUIP"*/);
    sub_B52984(&StringLiteral_11668/*"SCENARIO_SPEED_HIGH"*/);
    sub_B52984(&StringLiteral_6527/*"FRIEND_POINT"*/);
    sub_B52984(&StringLiteral_1102/*"1053000:100:0"*/);
    sub_B52984(&StringLiteral_16934/*"bit_result_servant"*/);
    sub_B52984(&StringLiteral_5799/*"EXCLUSIVE_NPC_SERVANT_ID_START"*/);
    sub_B52984(&StringLiteral_8747/*"MAX_NEAR_PRESENT_OFFSET_NUM"*/);
    sub_B52984(&StringLiteral_11150/*"RECOVERY_FATIGUE_DELAYED_CHANGE_BG_EVENTS"*/);
    sub_B52984(&StringLiteral_10536/*"POWERUP_QUEST_WAR_ID"*/);
    sub_B52984(&StringLiteral_1210/*"5047001:100:0"*/);
    sub_B52984(&StringLiteral_12419/*"STAND_FIGURE_R_OFFSET_EFFECT_IMAGES"*/);
    sub_B52984(&StringLiteral_3256/*"COMMAND_CARD_PRM_UP_MAX"*/);
    sub_B52984(&StringLiteral_12422/*"STARTING_MEMBER_FRIENDSHIP_RATE"*/);
    sub_B52984(&StringLiteral_9902/*"ORT_THIRD_FORM_ID"*/);
    sub_B52984(&StringLiteral_12420/*"STAND_FIGURE_R_OFFSET_EFFECT_NAMES"*/);
    sub_B52984(&StringLiteral_1107/*"1053902:100:0"*/);
    sub_B52984(&StringLiteral_8677/*"MASHU_TD_GRADE_UP_QUEST_ID"*/);
    sub_B52984(&StringLiteral_8753/*"MAX_STONE"*/);
    sub_B52984(&StringLiteral_8742/*"MAX_FRIENDPOINT"*/);
    sub_B52984(&StringLiteral_9407/*"NOT_UI_CHANGE_MAP_IDS"*/);
    sub_B52984(&StringLiteral_6376/*"FES_WAR_ID"*/);
    sub_B52984(&StringLiteral_9900/*"ORT_LATE_QUEST_ID"*/);
    sub_B52984(&StringLiteral_16935/*"bit_result_skill"*/);
    sub_B52984(&StringLiteral_9897/*"ORT_LATE_PHASE_BREAK"*/);
    sub_B52984(&StringLiteral_16920/*"bit_result_command_card_exceed"*/);
    sub_B52984(&StringLiteral_3025/*"CLASS_BOARD_CAMERA_SELECT_MOVE_MAX_DISTANCE"*/);
    sub_B52984(&StringLiteral_3026/*"CLASS_BOARD_CAMERA_SELECT_SEC_MAX"*/);
    sub_B52984(&StringLiteral_8757/*"MAX_USER_SVT"*/);
    sub_B52984(&StringLiteral_9805/*"ONE_ACT"*/);
    sub_B52984(&StringLiteral_6395/*"FIX_EVENT_SUPPORT_DECK_NUM"*/);
    sub_B52984(&StringLiteral_15432/*"WAR_BOARD_EVAL_FACTORS_AFFECT_RATIO"*/);
    sub_B52984(&StringLiteral_6495/*"FRIENDPOINT_BOOST_ITEM_EFFECT_ID"*/);
    sub_B52984(&StringLiteral_16924/*"bit_result_friendship_exceed"*/);
    sub_B52984(&StringLiteral_8678/*"MASHU_TD_GRADE_UP_QUEST_PHASE"*/);
    sub_B52984(&StringLiteral_11168/*"REQUEST_TOP_HOME_EXPIRATION_DATE_SEC_UPDATE_EVENT_MAP"*/);
    sub_B52984(&StringLiteral_3024/*"CLASS_BOARD_CAMERA_SELECT_EASING_TYPE"*/);
    sub_B52984(&StringLiteral_7491/*"IS_ENABLE_OLD_BLOCK_SHORTEST_ROUTE"*/);
    sub_B52984(&StringLiteral_8654/*"MAIN_CHAPTERS_WITH_EVENT_ID"*/);
    sub_B52984(&StringLiteral_1106/*"1053901:100:0"*/);
    sub_B52984(&StringLiteral_16921/*"bit_result_extraskill"*/);
    sub_B52984(&StringLiteral_1212/*"5047900:100:0"*/);
    sub_B52984(&StringLiteral_9807/*"ONE_RP"*/);
    sub_B52984(&StringLiteral_8760/*"MAX_USER_SVT_STORAGE"*/);
    sub_B52984(&StringLiteral_9899/*"ORT_LATE_PHASE_SECOND_FORM"*/);
    sub_B52984(&StringLiteral_3390/*"CONSUME_STORMPOD_SPOT_ID"*/);
    sub_B52984(&StringLiteral_2574/*"BEFORE_CHANGE_FREE_DRAW_NUM"*/);
    sub_B52984(&StringLiteral_7496/*"IS_WAR_BOARD_AI_FILTER_NOT_ACTION"*/);
    sub_B52984(&StringLiteral_2950/*"CAMPAIGN_RESET_AT"*/);
    sub_B52984(&StringLiteral_11090/*"RAID_DEFEATED_EFFECT_TIME"*/);
    sub_B52984(&StringLiteral_6577/*"FULL_SCREEN_NP_CHRS"*/);
    sub_B52984(&StringLiteral_6415/*"FOLLOWER_REFRESH_RESET_TIME"*/);
    sub_B52984(&StringLiteral_3062/*"CLASS_BOARD_RELEASE_QUEST_ID"*/);
    sub_B52984(&StringLiteral_6448/*"FOLLOW_NUM"*/);
    sub_B52984(&StringLiteral_2946/*"CAMERA_2D_RESET_DURATION"*/);
    sub_B52984(&StringLiteral_12468/*"STONE_FRAGMENT_EXCHANGE_NOTICE_MAX"*/);
    sub_B52984(&StringLiteral_7499/*"ITEM_ID_QP"*/);
    sub_B52984(&StringLiteral_12655/*"SWIMSUIT_MELT_SVT_ID"*/);
    sub_B52984(&StringLiteral_7093/*"HEROINE_LIMIT_COUNT_ORTINAX_REFURBISHED"*/);
    sub_B52984(&StringLiteral_16931/*"bit_result_noble"*/);
    sub_B52984(&StringLiteral_5567/*"EQUIP_GET_EFFECT_ID"*/);
    sub_B52984(&StringLiteral_9394/*"NOT_FRIEND_POINT"*/);
    sub_B52984(&StringLiteral_5613/*"EVENT_BOARD_GAME_NEXT_BOARD_QUEST_ID"*/);
    sub_B52984(&StringLiteral_9898/*"ORT_LATE_PHASE_DEAD"*/);
    sub_B52984(&StringLiteral_8738/*"MAX_BLACK_LIST_NUM"*/);
    sub_B52984(&StringLiteral_8749/*"MAX_PRESENT_RECEIVE_NUM"*/);
    sub_B52984(&StringLiteral_15209/*"VALENTINE_RELEASE_AT"*/);
    sub_B52984(&StringLiteral_8700/*"MASTER_MISSION_SVT_ID1"*/);
    sub_B52984(&StringLiteral_8497/*"LOSTBELT6_CLEAR_QUEST_ID"*/);
    sub_B52984(&StringLiteral_5614/*"EVENT_BOARD_GAME_NEXT_ROUND_QUEST_ID"*/);
    sub_B52984(&StringLiteral_11167/*"REQUEST_RAID_UPDATE_EVENT_MAP"*/);
    sub_B52984(&StringLiteral_12460/*"STATUS_UP_ADJUST_ATK"*/);
    sub_B52984(&StringLiteral_1684/*"AFTRE_CHANGE_FREE_DRAW_NUM"*/);
    sub_B52984(&StringLiteral_1181/*"3D_MAP_CAMERA_MOVE_TIME_CONSTANT"*/);
    sub_B52984(&StringLiteral_6445/*"FOLLOW_FRIEND_POINT"*/);
    sub_B52984(&StringLiteral_7495/*"IS_WAR_BOARD_AI_CALC_EVAL_SUM"*/);
    sub_B52984(&StringLiteral_8744/*"MAX_FRIEND_HISTORY_NUM"*/);
    sub_B52984(&StringLiteral_11670/*"SCENARIO_SPEED_STEP"*/);
    sub_B52984(&StringLiteral_5780/*"EVENT_TOWER_FADEOUT_DELAY_TIME"*/);
    sub_B52984(&StringLiteral_8488/*"LOGIN_DAY"*/);
    sub_B52984(&StringLiteral_5511/*"ENABLE_SERIAL_CODE"*/);
    sub_B52984(&StringLiteral_8713/*"MATERIAL_MAIN_INTERLUDE_WAR_ID"*/);
    sub_B52984(&StringLiteral_5838/*"EXTRA2_SORT_ORDER_CLASS_IDS"*/);
    sub_B52984(&StringLiteral_6876/*"GACHA_DAILY_MAX_DRAW_NUM_RESET_AT"*/);
    sub_B52984(&StringLiteral_13533/*"TREASUREDEVICE_ID_MASHU3"*/);
    sub_B52984(&StringLiteral_8490/*"LOGIN_RESET_AT"*/);
    sub_B52984(&StringLiteral_1213/*"5047901:100:0"*/);
    sub_B52984(&StringLiteral_1638/*"ACCOUNTING_INITIALIZE_TIMEOUT"*/);
    sub_B52984(&StringLiteral_1216/*"5047911:100:0"*/);
    sub_B52984(&StringLiteral_7492/*"IS_EVENT_POINT_MENU"*/);
    sub_B52984(&StringLiteral_10560/*"PRESENT_BOX_FILTER_SVT_EQUIP_MATERIAL"*/);
    sub_B52984(&StringLiteral_11088/*"RACE_REWARD_RANK_MAX"*/);
    sub_B52984(&StringLiteral_9406/*"NOT_SEND_TRACK_EVENT_AT_WAR_IDS"*/);
    sub_B52984(&StringLiteral_8675/*"MASHU_SVT_ID2"*/);
    sub_B52984(&StringLiteral_11669/*"SCENARIO_SPEED_LOW"*/);
    sub_B52984(&StringLiteral_9894/*"ORDEAL_CALL_CLEAR_BGM_NAME"*/);
    sub_B52984(&StringLiteral_8751/*"MAX_RARE_PRI"*/);
    sub_B52984(&StringLiteral_5837/*"EXTRA1_SORT_ORDER_CLASS_IDS"*/);
    sub_B52984(&StringLiteral_2657/*"BP_EXPRESSION"*/);
    sub_B52984(&StringLiteral_8752/*"MAX_RP"*/);
    sub_B52984(&StringLiteral_12461/*"STATUS_UP_ADJUST_HP"*/);
    sub_B52984(&StringLiteral_9806/*"ONE_COMMAND_SPELL"*/);
    sub_B52984(&StringLiteral_14861/*"USE_TERMS_LATEST_VERSION"*/);
    sub_B52984(&StringLiteral_3137/*"CLOSE_SECRET_TREASURE_DEVICE_QUEST_CLEAR"*/);
    sub_B52984(&StringLiteral_10596/*"PRESENT_VALID_TIME"*/);
    sub_B52984(&StringLiteral_8687/*"MASTER_MISSION_ALERT_TIME"*/);
    sub_B52984(&StringLiteral_2597/*"BIRTHDAY_BEFORE_VALENTINE_SVT_ID"*/);
    sub_B52984(&StringLiteral_6578/*"FULL_SCREEN_NP_SEQ_IDS"*/);
    sub_B52984(&StringLiteral_8741/*"MAX_EVENT_POINT"*/);
    sub_B52984(&StringLiteral_8476/*"LOCATION_REWARD_DLG_COLUMN"*/);
    sub_B52984(&StringLiteral_8739/*"MAX_COMMAND_SPELL"*/);
    sub_B52984(&StringLiteral_8656/*"MAIN_INTERLUDE_WAR_ID"*/);
    sub_B52984(&StringLiteral_7361/*"IOS_EXAMINATION_NEWS_URL"*/);
    sub_B52984(&StringLiteral_1103/*"1053001:100:0"*/);
    sub_B52984(&StringLiteral_12574/*"SUPPORT_DECK_MAX"*/);
    sub_B52984(&StringLiteral_9901/*"ORT_SECONDE_FORM_ID"*/);
    sub_B52984(&StringLiteral_1180/*"3D_MAP_CAMERA_MOVE_TIME_COEFFICIENT"*/);
    sub_B52984(&StringLiteral_7311/*"IGNORE_FORM_CHANGE_SVT_ID"*/);
    sub_B52984(&StringLiteral_8756/*"MAX_USER_LV"*/);
    sub_B52984(&StringLiteral_14860/*"USE_TERMS_AGREEMENT_REQUIERD_APP_VERSION"*/);
    sub_B52984(&StringLiteral_8743/*"MAX_FRIENDPOINT_BOOST_ITEM_USE"*/);
    sub_B52984(&StringLiteral_8759/*"MAX_USER_SVT_EQUIP_STORAGE"*/);
    sub_B52984(&StringLiteral_1215/*"5047910:100:0"*/);
    sub_B52984(&StringLiteral_8750/*"MAX_QP"*/);
    sub_B52984(&StringLiteral_7493/*"IS_IOS_EXAMINATION"*/);
    sub_B52984(&StringLiteral_9401/*"NOT_REQUIRED_WAR_IDS"*/);
    sub_B52984(&StringLiteral_3027/*"CLASS_BOARD_CAMERA_SELECT_SEC_MIN"*/);
    sub_B52984(&StringLiteral_6492/*"FREE_DRAW_NUM_CHANGE_AT"*/);
    sub_B52984(&StringLiteral_5651/*"EVENT_DAILY_POINT_RESET_AT"*/);
    sub_B52984(&StringLiteral_1217/*"5047912:100:0"*/);
    sub_B52984(&StringLiteral_1104/*"1053002:100:0"*/);
    sub_B52984(&StringLiteral_4608/*"DECK_MAX"*/);
    sub_B52984(&StringLiteral_10605/*"PROLOGUE_QUEST_ID"*/);
    sub_B52984(&StringLiteral_3138/*"CLOSE_SECRET_TREASURE_DEVICE_SVT_GET"*/);
    sub_B52984(&StringLiteral_12492/*"STORY_WAR_ID"*/);
    sub_B52984(&StringLiteral_8748/*"MAX_PRESENT_BOX_NUM"*/);
    sub_B52984(&StringLiteral_11667/*"SCENARIO_SPEED_DEFAULT"*/);
    sub_B52984(&StringLiteral_13519/*"TITLE_FLOW_OLD"*/);
    sub_B52984(&StringLiteral_1182/*"3D_MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE"*/);
    sub_B52984(&StringLiteral_1160/*"20220731_BOOST_RATE_1"*/);
    sub_B52984(&StringLiteral_8418/*"LEGACY_ASPECT_MOVIES"*/);
    sub_B52984(&StringLiteral_3257/*"COMMAND_CODE_DETACHING_ITEM_ID"*/);
    sub_B52984(&StringLiteral_1214/*"5047902:100:0"*/);
    sub_B52984(&StringLiteral_5834/*"EXPIRATION_DATE"*/);
    sub_B52984(&StringLiteral_9895/*"ORDEAL_CALL_WAR_ID"*/);
    sub_B52984(&StringLiteral_7094/*"HEROINE_TREASURE_DEVICE_RANKUP_EFFECTS"*/);
    byte_42ACEE5 = 1;
  }
  result = 0.0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_286;
  MasterData_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ConstantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_286;
  v4 = (ConstantLongMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ConstantLongMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_286;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_286;
  v5 = (ConstantStrMaster_o *)Instance;
  Value_28577068 = ConstantMaster__GetValue_28577068(
                     MasterData_WarQuestSelectionMaster,
                     (System_String_o *)StringLiteral_1160/*"20220731_BOOST_RATE_1"*/,
                     200,
                     0LL);
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v7->static_fields->CriticalRateToAddByQuickFirstBonus = Value_28577068;
  BalanceConfig_TypeInfo->static_fields->QpMax = ConstantMaster__GetValue(
                                                   MasterData_WarQuestSelectionMaster,
                                                   (System_String_o *)StringLiteral_8750/*"MAX_QP"*/,
                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ManaMax = ConstantMaster__GetValue(
                                                     MasterData_WarQuestSelectionMaster,
                                                     (System_String_o *)StringLiteral_8746/*"MAX_MANA"*/,
                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->RarePriMax = ConstantMaster__GetValue(
                                                        MasterData_WarQuestSelectionMaster,
                                                        (System_String_o *)StringLiteral_8751/*"MAX_RARE_PRI"*/,
                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->StoneMax = ConstantMaster__GetValue(
                                                      MasterData_WarQuestSelectionMaster,
                                                      (System_String_o *)StringLiteral_8753/*"MAX_STONE"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->FriendPointMax = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_8742/*"MAX_FRIENDPOINT"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->UserLevelMax = ConstantMaster__GetValue(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_8756/*"MAX_USER_LV"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->UserItemMax = ConstantMaster__GetValue(
                                                         MasterData_WarQuestSelectionMaster,
                                                         (System_String_o *)StringLiteral_8755/*"MAX_USER_ITEM"*/,
                                                         0LL);
  Instance = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_8755/*"MAX_USER_ITEM"*/, 0LL);
  v8 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->UserEventItemMax = Instance;
  if ( !v4 )
    goto LABEL_286;
  Value_28576492 = ConstantLongMaster__GetValue_28576492(
                     v4,
                     (System_String_o *)StringLiteral_8741/*"MAX_EVENT_POINT"*/,
                     v8->static_fields->UserPointEventMax,
                     0LL);
  v10 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->UserPointEventMax = Value_28576492;
  BalanceConfig_TypeInfo->static_fields->UserEventActivityPointMax = ConstantLongMaster__GetValue_28576492(
                                                                       v4,
                                                                       (System_String_o *)StringLiteral_8740/*"MAX_EVENT_ACTIVITY_POINT"*/,
                                                                       v10->static_fields->UserEventActivityPointMax,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxMax = ConstantMaster__GetValue(
                                                           MasterData_WarQuestSelectionMaster,
                                                           (System_String_o *)StringLiteral_8748/*"MAX_PRESENT_BOX_NUM"*/,
                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxCheckMax = ConstantMaster__GetValue(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (System_String_o *)StringLiteral_8749/*"MAX_PRESENT_RECEIVE_NUM"*/,
                                                                0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxValidTime = ConstantMaster__GetValue(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 (System_String_o *)StringLiteral_10596/*"PRESENT_VALID_TIME"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxNearMaxOffset = ConstantMaster__GetValue(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_8747/*"MAX_NEAR_PRESENT_OFFSET_NUM"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->ServantFrameMax = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8757/*"MAX_USER_SVT"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantEquipFrameMax = ConstantMaster__GetValue(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  (System_String_o *)StringLiteral_8758/*"MAX_USER_SVT_EQUIP"*/,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCodeFrameMax = ConstantMaster__GetValue(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 (System_String_o *)StringLiteral_8754/*"MAX_USER_COMMAND_CODE"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->DeckMax = ConstantMaster__GetValue(
                                                     MasterData_WarQuestSelectionMaster,
                                                     (System_String_o *)StringLiteral_4608/*"DECK_MAX"*/,
                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->SupportDeckMax = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_12574/*"SUPPORT_DECK_MAX"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_6396/*"FIX_MAIN_SUPPORT_DECK_NUM"*/,
                                                                   0LL);
  Value = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_6395/*"FIX_EVENT_SUPPORT_DECK_NUM"*/, 0LL);
  v12 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum = Value;
  v12->static_fields->SupportMemberMax = v12->static_fields->SupportDeckMemberMax * v12->static_fields->SupportDeckMax;
  BalanceConfig_TypeInfo->static_fields->UserServantStorageMax = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_8760/*"MAX_USER_SVT_STORAGE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->UserServantEquipStorageMax = ConstantMaster__GetValue(
                                                                        MasterData_WarQuestSelectionMaster,
                                                                        (System_String_o *)StringLiteral_8759/*"MAX_USER_SVT_EQUIP_STORAGE"*/,
                                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameActRecoverCost = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_9805/*"ONE_ACT"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameRpRecoverCost = ConstantMaster__GetValue(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  (System_String_o *)StringLiteral_9807/*"ONE_RP"*/,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameRpMax = ConstantMaster__GetValue(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_8752/*"MAX_RP"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointFriend = ConstantMaster__GetValue(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 (System_String_o *)StringLiteral_6527/*"FRIEND_POINT"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointNotFriend = ConstantMaster__GetValue(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_9394/*"NOT_FRIEND_POINT"*/,
                                                                    0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointNpc = ConstantMaster__GetValue(
                                                              MasterData_WarQuestSelectionMaster,
                                                              (System_String_o *)StringLiteral_9423/*"NPC_FRIEND_POINT"*/,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime1 = ConstantMaster__GetValue(
                                                                       MasterData_WarQuestSelectionMaster,
                                                                       (System_String_o *)StringLiteral_8490/*"LOGIN_RESET_AT"*/,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2 = ConstantMaster__GetValue(
                                                                       MasterData_WarQuestSelectionMaster,
                                                                       (System_String_o *)StringLiteral_2950/*"CAMPAIGN_RESET_AT"*/,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->DailyFreeGachaResetTime = ConstantMaster__GetValue(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_6493/*"FREE_GACHA_RESET_AT"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginDay = ConstantMaster__GetValue(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (System_String_o *)StringLiteral_8488/*"LOGIN_DAY"*/,
                                                                0LL);
  v13 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_9330/*"NEED_REBOOT_TIME"*/, 0LL);
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
  v19 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_11168/*"REQUEST_TOP_HOME_EXPIRATION_DATE_SEC_UPDATE_EVENT_MAP"*/, 0LL);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v20 = System_Math__Max_45036604(1, v19, 0LL);
  v21 = BalanceConfig_TypeInfo;
  v22 = v20;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  v21->static_fields->RequestTopHomeExpirationDateSecUpdateEventMap = v22;
  v23 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_11167/*"REQUEST_RAID_UPDATE_EVENT_MAP"*/, 0LL);
  BalanceConfig_TypeInfo->static_fields->RequestRaidUpdateEventMap = System_Math__Max_45036604(1, v23, 0LL);
  BalanceConfig_TypeInfo->static_fields->RaidDefeatedEffectTime = ConstantMaster__GetValue(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_11090/*"RAID_DEFEATED_EFFECT_TIME"*/,
                                                                    0LL);
  BalanceConfig_TypeInfo->static_fields->CommandSpellMax = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8739/*"MAX_COMMAND_SPELL"*/,
                                                             0LL);
  Instance = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_9806/*"ONE_COMMAND_SPELL"*/, 0LL);
  BalanceConfig_TypeInfo->static_fields->CommandSpellRecoverCost = Instance;
  if ( !v5 )
    goto LABEL_286;
  v24 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_14860/*"USE_TERMS_AGREEMENT_REQUIERD_APP_VERSION"*/, 0LL);
  p_UseTermsAgreementRequiredAppVersion = &BalanceConfig_TypeInfo->static_fields->UseTermsAgreementRequiredAppVersion;
  *p_UseTermsAgreementRequiredAppVersion = v24;
  sub_B52920(p_UseTermsAgreementRequiredAppVersion);
  v26 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_14861/*"USE_TERMS_LATEST_VERSION"*/, 0LL);
  p_UseTermsLatestVersion = &BalanceConfig_TypeInfo->static_fields->UseTermsLatestVersion;
  *p_UseTermsLatestVersion = v26;
  sub_B52920(p_UseTermsLatestVersion);
  v28 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_7493/*"IS_IOS_EXAMINATION"*/, 0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsIOS_Examination = v28;
  BalanceConfig_TypeInfo->static_fields->SerialCodeMenuDispFlg = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_5511/*"ENABLE_SERIAL_CODE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk = ConstantMaster__GetValue(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_12460/*"STATUS_UP_ADJUST_ATK"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp = ConstantMaster__GetValue(
                                                              MasterData_WarQuestSelectionMaster,
                                                              (System_String_o *)StringLiteral_12461/*"STATUS_UP_ADJUST_HP"*/,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->SameClassMultiExp = ConstantMaster__getRateValue(
                                                               (System_String_o *)StringLiteral_11635/*"SAME_CLASS_MULI_EXP"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->SameClassExp = ConstantMaster__GetValue(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_11635/*"SAME_CLASS_MULI_EXP"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdJekyll = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8317/*"JEKYLL_SVT_ID"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdHyde = ConstantMaster__GetValue(
                                                           MasterData_WarQuestSelectionMaster,
                                                           (System_String_o *)StringLiteral_7155/*"HYDE_SVT_ID"*/,
                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdSwimsuitMelt = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_12655/*"SWIMSUIT_MELT_SVT_ID"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu1 = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8674/*"MASHU_SVT_ID1"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu2 = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8675/*"MASHU_SVT_ID2"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu3 = ConstantMaster__GetValue_28577068(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8676/*"MASHU_SVT_ID3"*/,
                                                             800102,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMission1 = ConstantMaster__GetValue(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_8700/*"MASTER_MISSION_SVT_ID1"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->TreasureDeviceIdMashu3 = ConstantMaster__GetValue(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_13533/*"TREASUREDEVICE_ID_MASHU3"*/,
                                                                    0LL);
  Instance = sub_B5299C(int___TypeInfo, 2LL);
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
                 (System_String_o *)StringLiteral_3232/*"COMBINE_SERVANT_SKILL_IDS"*/,
                 (System_Int32_array *)Instance,
                 0LL);
  p_CombineServantSkillIds = &BalanceConfig_TypeInfo->static_fields->CombineServantSkillIds;
  *p_CombineServantSkillIds = ValueArray;
  sub_B52920(p_CombineServantSkillIds);
  BalanceConfig_TypeInfo->static_fields->MashuTdGradeUpQuestId = ConstantMaster__GetValue_28577068(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_8677/*"MASHU_TD_GRADE_UP_QUEST_ID"*/,
                                                                   4000100,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->MashuTdGradeUpQuestPhase = ConstantMaster__GetValue_28577068(
                                                                      MasterData_WarQuestSelectionMaster,
                                                                      (System_String_o *)StringLiteral_8678/*"MASHU_TD_GRADE_UP_QUEST_PHASE"*/,
                                                                      3,
                                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdOberonChoco = ConstantMaster__GetValue_28577068(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  (System_String_o *)StringLiteral_9793/*"OBERON_CHOCO_SVT_ID"*/,
                                                                  9808130,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->Lostbelt6ClearQuestId = ConstantMaster__GetValue_28577068(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_8497/*"LOSTBELT6_CLEAR_QUEST_ID"*/,
                                                                   3001009,
                                                                   0LL);
  v32 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_2597/*"BIRTHDAY_BEFORE_VALENTINE_SVT_ID"*/, 0LL);
  v34 = BasicHelper__Convert2IntArray(v32, 0x2Cu, v33);
  p_ServantIdsBirthdayBeforeValentine = &BalanceConfig_TypeInfo->static_fields->ServantIdsBirthdayBeforeValentine;
  *p_ServantIdsBirthdayBeforeValentine = v34;
  sub_B52920(p_ServantIdsBirthdayBeforeValentine);
  v36 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_7311/*"IGNORE_FORM_CHANGE_SVT_ID"*/, 0LL);
  if ( v36 )
  {
    v38 = BasicHelper__Convert2IntArray(v36, 0x2Cu, v37);
    v39 = BalanceConfig_TypeInfo;
    v40 = v38;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v39 = BalanceConfig_TypeInfo;
    }
    p_ServantIdsIgnoreFormChange = &v39->static_fields->ServantIdsIgnoreFormChange;
    *p_ServantIdsIgnoreFormChange = v40;
    sub_B52920(p_ServantIdsIgnoreFormChange);
  }
  v42 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_15209/*"VALENTINE_RELEASE_AT"*/, 0LL);
  v43 = BalanceConfig_TypeInfo;
  v44 = v42;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v43 = BalanceConfig_TypeInfo;
  }
  v43->static_fields->VtReleaseAt = v44;
  BalanceConfig_TypeInfo->static_fields->BefFreeDrawNum = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_2574/*"BEFORE_CHANGE_FREE_DRAW_NUM"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->AftFreeDrawNum = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_1684/*"AFTRE_CHANGE_FREE_DRAW_NUM"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->DrawNumChangeTime = ConstantMaster__GetValue(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_6492/*"FREE_DRAW_NUM_CHANGE_AT"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerRefreshRestTime = ConstantMaster__GetValue(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_6415/*"FOLLOWER_REFRESH_RESET_TIME"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->FesWarId = ConstantMaster__GetValue(
                                                      MasterData_WarQuestSelectionMaster,
                                                      (System_String_o *)StringLiteral_6376/*"FES_WAR_ID"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->NoneExpireTime = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_5834/*"EXPIRATION_DATE"*/,
                                                            0LL);
  v45 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_2657/*"BP_EXPRESSION"*/, 0LL);
  BalanceConfig_TypeInfo->static_fields->BpExpresssionType = UnityEngine_Mathf__Clamp_41468312(v45, 0, 1, 0LL);
  BalanceConfig_TypeInfo->static_fields->MaxFriendHistoryNum = ConstantMaster__GetValue(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 (System_String_o *)StringLiteral_8744/*"MAX_FRIEND_HISTORY_NUM"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->MaxBlackListNum = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8738/*"MAX_BLACK_LIST_NUM"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->raceRewardRankMax = ConstantMaster__GetValue(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_11088/*"RACE_REWARD_RANK_MAX"*/,
                                                               0LL);
  v46 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_8687/*"MASTER_MISSION_ALERT_TIME"*/, 0LL);
  v47 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->MstMissionAlertTime = v46;
  BalanceConfig_TypeInfo->static_fields->LocationRewardDlgColumn = ConstantMaster__GetValue_28577068(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_8476/*"LOCATION_REWARD_DLG_COLUMN"*/,
                                                                     v47->static_fields->LocationRewardDlgColumn,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->CloseSecretTreasureDeviceQuestClear = ConstantMaster__GetValue(
                                                                                 MasterData_WarQuestSelectionMaster,
                                                                                 (System_String_o *)StringLiteral_3137/*"CLOSE_SECRET_TREASURE_DEVICE_QUEST_CLEAR"*/,
                                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->CloseSecretTreasureDeviceSvtGet = ConstantMaster__GetValue(
                                                                             MasterData_WarQuestSelectionMaster,
                                                                             (System_String_o *)StringLiteral_3138/*"CLOSE_SECRET_TREASURE_DEVICE_SVT_GET"*/,
                                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ItemIdQp = ConstantMaster__GetValue(
                                                      MasterData_WarQuestSelectionMaster,
                                                      (System_String_o *)StringLiteral_7499/*"ITEM_ID_QP"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->ShopDetailCheckDialogFontSize = ConstantMaster__GetValue_28577068(
                                                                           MasterData_WarQuestSelectionMaster,
                                                                           (System_String_o *)StringLiteral_12228/*"SHOP_DETAIL_CHECK_DIALOG_FONT_SIZE"*/,
                                                                           21,
                                                                           0LL);
  v48 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_11670/*"SCENARIO_SPEED_STEP"*/, 0LL);
  if ( System_Single__TryParse(v48, &result, 0LL) )
  {
    v49 = BalanceConfig_TypeInfo;
    v50 = result;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v49 = BalanceConfig_TypeInfo;
    }
    v49->static_fields->ScenarioSpeedStep = v50;
  }
  v51 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_11669/*"SCENARIO_SPEED_LOW"*/, 0LL);
  if ( System_Single__TryParse(v51, &result, 0LL) )
  {
    v52 = BalanceConfig_TypeInfo;
    v53 = result;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v52 = BalanceConfig_TypeInfo;
    }
    v52->static_fields->ScenarioSpeedLow = v53;
  }
  v54 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_11668/*"SCENARIO_SPEED_HIGH"*/, 0LL);
  if ( System_Single__TryParse(v54, &result, 0LL) )
  {
    v55 = BalanceConfig_TypeInfo;
    v56 = result;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v55 = BalanceConfig_TypeInfo;
    }
    v55->static_fields->ScenarioSpeedHigh = v56;
  }
  v57 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_11667/*"SCENARIO_SPEED_DEFAULT"*/, 0LL);
  if ( System_Single__TryParse(v57, &result, 0LL) )
  {
    v58 = BalanceConfig_TypeInfo;
    v59 = result;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v58 = BalanceConfig_TypeInfo;
    }
    v58->static_fields->ScenarioSpeedDefault = v59;
  }
  else
  {
    v58 = BalanceConfig_TypeInfo;
  }
  if ( (BYTE3(v58->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v58);
    v58 = BalanceConfig_TypeInfo;
  }
  v60 = ConstantMaster__GetValue_28577068(
          MasterData_WarQuestSelectionMaster,
          (System_String_o *)StringLiteral_10536/*"POWERUP_QUEST_WAR_ID"*/,
          v58->static_fields->PowerUpQuestWarId,
          0LL);
  v61 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->PowerUpQuestWarId = v60;
  v62 = ConstantMaster__GetValue_28577068(
          MasterData_WarQuestSelectionMaster,
          (System_String_o *)StringLiteral_1638/*"ACCOUNTING_INITIALIZE_TIMEOUT"*/,
          v61->static_fields->AccountingInitializeTimeOut,
          0LL);
  v63 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->AccountingInitializeTimeOut = v62;
  BalanceConfig_TypeInfo->static_fields->EquipGetEffectId = ConstantMaster__GetValue_28577068(
                                                              MasterData_WarQuestSelectionMaster,
                                                              (System_String_o *)StringLiteral_5567/*"EQUIP_GET_EFFECT_ID"*/,
                                                              v63->static_fields->EquipGetEffectId,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCodeDetachingItemId = ConstantMaster__GetValue_28577068(
                                                                        MasterData_WarQuestSelectionMaster,
                                                                        (System_String_o *)StringLiteral_3257/*"COMMAND_CODE_DETACHING_ITEM_ID"*/,
                                                                        -1,
                                                                        0LL);
  v64 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_10560/*"PRESENT_BOX_FILTER_SVT_EQUIP_MATERIAL"*/, 0LL);
  if ( v64 )
  {
    v65 = v64;
    Instance = sub_B5299C(char___TypeInfo, 1LL);
    if ( !Instance )
      goto LABEL_286;
    if ( !*(_DWORD *)(Instance + 24) )
      goto LABEL_285;
    *(_WORD *)(Instance + 32) = 44;
    v66 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                 v65,
                                                                 (System_Char_array *)Instance,
                                                                 0LL);
    v67 = BalanceConfig___c_TypeInfo;
    if ( (BYTE3(BalanceConfig___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig___c_TypeInfo);
      v67 = BalanceConfig___c_TypeInfo;
    }
    static_fields = v67->static_fields;
    _9__219_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__219_0;
    if ( !_9__219_0 )
    {
      if ( (BYTE3(v67->vtable._0_Equals.methodPtr) & 4) != 0 && !v67->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v67);
        static_fields = BalanceConfig___c_TypeInfo->static_fields;
      }
      v70 = (Il2CppObject *)static_fields->__9;
      _9__219_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_string__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__219_0,
        v70,
        Method_BalanceConfig___c__Initialize_b__219_0__,
        (const MethodInfo_2BC9C68 *)Method_System_Func_string__int___ctor__);
      v71 = BalanceConfig___c_TypeInfo->static_fields;
      v71->__9__219_0 = (struct System_Func_string__int__o *)_9__219_0;
      sub_B52920(&v71->__9__219_0);
    }
    v72 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v66,
                                                                 (System_Func_TSource__TResult__o *)_9__219_0,
                                                                 (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_string__int___);
    v73 = System_Linq_Enumerable__ToArray_int_(
            v72,
            (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
    v74 = BalanceConfig_TypeInfo;
    v75 = v73;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v74 = BalanceConfig_TypeInfo;
    }
    p_PresentBoxFilterSvtEquipMaterial = &v74->static_fields->PresentBoxFilterSvtEquipMaterial;
    *p_PresentBoxFilterSvtEquipMaterial = v75;
    sub_B52920(p_PresentBoxFilterSvtEquipMaterial);
  }
  v77 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_6448/*"FOLLOW_NUM"*/, 0LL);
  if ( v77 >= 1 )
  {
    v78 = v77;
    v79 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v79 = BalanceConfig_TypeInfo;
    }
    v79->static_fields->FollowNum = v78;
  }
  v80 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_6445/*"FOLLOW_FRIEND_POINT"*/, 0LL);
  if ( v80 >= 1 )
  {
    v81 = v80;
    v82 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v82 = BalanceConfig_TypeInfo;
    }
    v82->static_fields->FollowFriendPoint = v81;
  }
  v83 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_4637/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0LL);
  v84 = BalanceConfig_TypeInfo;
  v85 = v83;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v84 = BalanceConfig_TypeInfo;
  }
  v84->static_fields->DisableFriendshipExceed = v85;
  BalanceConfig_TypeInfo->static_fields->EventDailyPointResetAt = ConstantMaster__GetValue(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_5651/*"EVENT_DAILY_POINT_RESET_AT"*/,
                                                                    0LL);
  v86 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)StringLiteral_11162/*"REPRINT_LAST_WAR_RAID_EVENT_ID_LIST"*/, 0LL, 0LL);
  p_ReprintLastWarRaidEventIdList = &BalanceConfig_TypeInfo->static_fields->ReprintLastWarRaidEventIdList;
  *p_ReprintLastWarRaidEventIdList = v86;
  sub_B52920(p_ReprintLastWarRaidEventIdList);
  BalanceConfig_TypeInfo->static_fields->PrologueQuestId = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_10605/*"PROLOGUE_QUEST_ID"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCardParamUpMax = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_3256/*"COMMAND_CARD_PRM_UP_MAX"*/,
                                                                   0LL);
  v88 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)StringLiteral_5780/*"EVENT_TOWER_FADEOUT_DELAY_TIME"*/, 0LL, 0LL);
  p_EventTowerFadeOutDelayTime = &BalanceConfig_TypeInfo->static_fields->EventTowerFadeOutDelayTime;
  *p_EventTowerFadeOutDelayTime = v88;
  sub_B52920(p_EventTowerFadeOutDelayTime);
  if ( !BalanceConfig_TypeInfo->static_fields->EventTowerFadeOutDelayTime )
  {
    v90 = (System_Array_o *)sub_B5299C(int___TypeInfo, 3LL);
    v227.fields.value = Field__PrivateImplementationDetails__84DF4B72A51E01473BC25693E526BC603A140C4300062B4A7F64A9F7D00ABB95;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v90, v227, 0LL);
    v91 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v91 = BalanceConfig_TypeInfo;
    }
    v92 = &v91->static_fields->EventTowerFadeOutDelayTime;
    *v92 = v90;
    sub_B52920(v92);
  }
  v93 = ConstantMaster__GetValue_28577068(
          MasterData_WarQuestSelectionMaster,
          (System_String_o *)StringLiteral_5781/*"EVENT_TOWER_FADEOUT_PLAY_TIME"*/,
          3000,
          0LL);
  v94 = BalanceConfig_TypeInfo;
  v95 = v93;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v94 = BalanceConfig_TypeInfo;
  }
  v94->static_fields->EventTowerFadeOutPlayTime = (float)v95 / 1000.0;
  BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_8743/*"MAX_FRIENDPOINT_BOOST_ITEM_USE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->FriendPointBoostItemEfffectId = ConstantMaster__GetValue_28577068(
                                                                           MasterData_WarQuestSelectionMaster,
                                                                           (System_String_o *)StringLiteral_6495/*"FRIENDPOINT_BOOST_ITEM_EFFECT_ID"*/,
                                                                           3,
                                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->MainInterludeWarId = ConstantMaster__GetValue_28577068(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (System_String_o *)StringLiteral_8656/*"MAIN_INTERLUDE_WAR_ID"*/,
                                                                1004,
                                                                0LL);
  v96 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)StringLiteral_5608/*"EVENT_BOARD_GAME_DICE_BUTTON_POS"*/, 0LL, 0LL);
  p_EventBoardGameDiceButtonPostion = &BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion;
  *p_EventBoardGameDiceButtonPostion = v96;
  sub_B52920(p_EventBoardGameDiceButtonPostion);
  if ( !BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion )
  {
    Instance = sub_B5299C(int___TypeInfo, 3LL);
    if ( !Instance )
      goto LABEL_286;
    v98 = *(_DWORD *)(Instance + 24);
    v99 = Instance;
    if ( v98 > 1 )
    {
      *(_DWORD *)(Instance + 36) = -59;
      if ( v98 != 2 )
      {
        *(_DWORD *)(Instance + 40) = -500;
        v100 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v100 = BalanceConfig_TypeInfo;
        }
        v101 = &v100->static_fields->EventBoardGameDiceButtonPostion;
        *v101 = (struct System_Int32_array *)v99;
        sub_B52920(v101);
        goto LABEL_108;
      }
    }
LABEL_285:
    v224 = sub_B52A88(Instance);
    sub_B52A28(v224, 0LL);
  }
LABEL_108:
  v102 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)StringLiteral_8713/*"MATERIAL_MAIN_INTERLUDE_WAR_ID"*/, 0LL, 0LL);
  v103 = BalanceConfig_TypeInfo;
  v104 = v102;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v103 = BalanceConfig_TypeInfo;
  }
  p_MainInterludeWarIdOnMaterial = &v103->static_fields->MainInterludeWarIdOnMaterial;
  *p_MainInterludeWarIdOnMaterial = v104;
  sub_B52920(p_MainInterludeWarIdOnMaterial);
  if ( !BalanceConfig_TypeInfo->static_fields->MainInterludeWarIdOnMaterial )
  {
    Instance = sub_B5299C(int___TypeInfo, 1LL);
    if ( !Instance )
      goto LABEL_286;
    v106 = Instance;
    if ( !*(_DWORD *)(Instance + 24) )
      goto LABEL_285;
    *(_DWORD *)(Instance + 32) = 307;
    v107 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v107 = BalanceConfig_TypeInfo;
    }
    v108 = &v107->static_fields->MainInterludeWarIdOnMaterial;
    *v108 = (struct System_Int32_array *)v106;
    sub_B52920(v108);
  }
  v109 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)StringLiteral_5611/*"EVENT_BOARD_GAME_MAP_ID_LIST"*/, 0LL, 0LL);
  v110 = BalanceConfig_TypeInfo;
  v111 = v109;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v110 = BalanceConfig_TypeInfo;
  }
  p_EventBoardGameMapIdList = &v110->static_fields->EventBoardGameMapIdList;
  *p_EventBoardGameMapIdList = v111;
  sub_B52920(p_EventBoardGameMapIdList);
  BalanceConfig_TypeInfo->static_fields->EventBoardGameNextBoardQuestId = ConstantMaster__GetValue_28577068(
                                                                            MasterData_WarQuestSelectionMaster,
                                                                            (System_String_o *)StringLiteral_5613/*"EVENT_BOARD_GAME_NEXT_BOARD_QUEST_ID"*/,
                                                                            94047745,
                                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->EventBoardGameNextRoundQuestId = ConstantMaster__GetValue_28577068(
                                                                            MasterData_WarQuestSelectionMaster,
                                                                            (System_String_o *)StringLiteral_5614/*"EVENT_BOARD_GAME_NEXT_ROUND_QUEST_ID"*/,
                                                                            94047744,
                                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->TitleFlowOld = ConstantMaster__GetValue_28577068(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_13519/*"TITLE_FLOW_OLD"*/,
                                                          0,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->StoryWarId = ConstantMaster__GetValue_28577068(
                                                        MasterData_WarQuestSelectionMaster,
                                                        (System_String_o *)StringLiteral_12492/*"STORY_WAR_ID"*/,
                                                        1003,
                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->OrdealCallWarId = ConstantMaster__GetValue_28577068(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_9895/*"ORDEAL_CALL_WAR_ID"*/,
                                                             401,
                                                             0LL);
  v113 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_9894/*"ORDEAL_CALL_CLEAR_BGM_NAME"*/, 0LL);
  if ( !System_String__IsNullOrEmpty(v113, 0LL) )
  {
    v114 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v114 = BalanceConfig_TypeInfo;
    }
    p_OrdealCallClearBgmName = &v114->static_fields->OrdealCallClearBgmName;
    *p_OrdealCallClearBgmName = v113;
    sub_B52920(p_OrdealCallClearBgmName);
  }
  v116 = (System_Array_o *)sub_B5299C(int___TypeInfo, 5LL);
  v228.fields.value = Field__PrivateImplementationDetails__A1FBA00A0F8840358C0A54605FFD365F75E3A3D7AFF25F48F474C4E89BB0B37D;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v116, v228, 0LL);
  v117 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)StringLiteral_3390/*"CONSUME_STORMPOD_SPOT_ID"*/, (System_Int32_array *)v116, 0LL);
  v118 = BalanceConfig_TypeInfo;
  v119 = v117;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v118 = BalanceConfig_TypeInfo;
  }
  p_consumeStormPodSpotId = &v118->static_fields->consumeStormPodSpotId;
  *p_consumeStormPodSpotId = v119;
  sub_B52920(p_consumeStormPodSpotId);
  Instance = sub_B5299C(int___TypeInfo, 1LL);
  if ( !Instance )
LABEL_286:
    sub_B52A5C(Instance, v2);
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_285;
  *(_DWORD *)(Instance + 32) = 71;
  v121 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_12490/*"STORMPOD_HELP_IDS"*/,
           (System_Int32_array *)Instance,
           0LL);
  p_StormPodHelpIds = &BalanceConfig_TypeInfo->static_fields->StormPodHelpIds;
  *p_StormPodHelpIds = v121;
  sub_B52920(p_StormPodHelpIds);
  ValueStringArray = ConstantStrMaster__GetValueStringArray(v5, (System_String_o *)StringLiteral_8418/*"LEGACY_ASPECT_MOVIES"*/, 0LL);
  p_legacyAspectMovies = &BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
  *p_legacyAspectMovies = ValueStringArray;
  sub_B52920(p_legacyAspectMovies);
  v125 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)StringLiteral_6577/*"FULL_SCREEN_NP_CHRS"*/, 0LL, 0LL);
  p_fullScreenNPChrs = &BalanceConfig_TypeInfo->static_fields->fullScreenNPChrs;
  *p_fullScreenNPChrs = v125;
  sub_B52920(p_fullScreenNPChrs);
  v127 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)StringLiteral_6578/*"FULL_SCREEN_NP_SEQ_IDS"*/, 0LL, 0LL);
  p_fullScreenNPSeqIds = &BalanceConfig_TypeInfo->static_fields->fullScreenNPSeqIds;
  *p_fullScreenNPSeqIds = v127;
  sub_B52920(p_fullScreenNPSeqIds);
  BalanceConfig_TypeInfo->static_fields->GachaDailyMaxDrawNumResetAt = ConstantMaster__GetValue_28577068(
                                                                         MasterData_WarQuestSelectionMaster,
                                                                         (System_String_o *)StringLiteral_6876/*"GACHA_DAILY_MAX_DRAW_NUM_RESET_AT"*/,
                                                                         4,
                                                                         0LL);
  BalanceConfig_TypeInfo->static_fields->MemoryDeckLimitByQuest = ConstantMaster__GetValue_28577068(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_8767/*"MEMORY_DECK_LIMIT_BY_QUEST"*/,
                                                                    100,
                                                                    0LL);
  v129 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_7361/*"IOS_EXAMINATION_NEWS_URL"*/, 0LL);
  p_IOS_ExaminationNewsUrl = &BalanceConfig_TypeInfo->static_fields->IOS_ExaminationNewsUrl;
  *p_IOS_ExaminationNewsUrl = v129;
  sub_B52920(p_IOS_ExaminationNewsUrl);
  v131 = BalanceConfig_TypeInfo->static_fields;
  if ( !v131->IOS_ExaminationNewsUrl )
  {
    v132 = &v131->IOS_ExaminationNewsUrl;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v132 = &BalanceConfig_TypeInfo->static_fields->IOS_ExaminationNewsUrl;
    }
    *v132 = (struct System_String_o *)StringLiteral_19391/*"https://view.fate-go.jp/"*/;
    sub_B52920(v132);
  }
  v133 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_9905/*"OTHER_IMAGE_LIMIT_COUNT"*/, 0LL);
  v134 = BalanceConfig_TypeInfo;
  v135 = v133;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v134 = BalanceConfig_TypeInfo;
  }
  v134->static_fields->OtherImageLimitCount = v135;
  BalanceConfig_TypeInfo->static_fields->ExclusiveNpcServantIdStart = ConstantMaster__GetValue_28577068(
                                                                        MasterData_WarQuestSelectionMaster,
                                                                        (System_String_o *)StringLiteral_5799/*"EXCLUSIVE_NPC_SERVANT_ID_START"*/,
                                                                        9937100,
                                                                        0LL);
  v136 = ConstantStrMaster__GetValueStringArray(v5, (System_String_o *)StringLiteral_12420/*"STAND_FIGURE_R_OFFSET_EFFECT_NAMES"*/, 0LL);
  p_UIStandFigureROffsetEffectNames = &BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames;
  *p_UIStandFigureROffsetEffectNames = v136;
  sub_B52920(p_UIStandFigureROffsetEffectNames);
  v138 = ConstantStrMaster__GetValueStringArray(v5, (System_String_o *)StringLiteral_12419/*"STAND_FIGURE_R_OFFSET_EFFECT_IMAGES"*/, 0LL);
  p_UIStandFigureROffsetImages = &BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetImages;
  *p_UIStandFigureROffsetImages = v138;
  sub_B52920(p_UIStandFigureROffsetImages);
  v140 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames )
  {
    Instance = sub_B5299C(string___TypeInfo, 7LL);
    if ( !Instance )
      goto LABEL_286;
    v141 = Instance;
    Instance = StringLiteral_16919/*"bit_result_bond"*/;
    if ( StringLiteral_16919/*"bit_result_bond"*/ )
    {
      Instance = sub_B52A44(StringLiteral_16919/*"bit_result_bond"*/, *(_QWORD *)(*(_QWORD *)v141 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v142 = StringLiteral_16919/*"bit_result_bond"*/;
    }
    else
    {
      v142 = 0LL;
    }
    if ( !*(_DWORD *)(v141 + 24) )
      goto LABEL_285;
    *(_QWORD *)(v141 + 32) = v142;
    sub_B52920(v141 + 32);
    Instance = StringLiteral_16931/*"bit_result_noble"*/;
    if ( StringLiteral_16931/*"bit_result_noble"*/ )
    {
      Instance = sub_B52A44(StringLiteral_16931/*"bit_result_noble"*/, *(_QWORD *)(*(_QWORD *)v141 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v143 = StringLiteral_16931/*"bit_result_noble"*/;
    }
    else
    {
      v143 = 0LL;
    }
    if ( *(_DWORD *)(v141 + 24) <= 1u )
      goto LABEL_285;
    *(_QWORD *)(v141 + 40) = v143;
    sub_B52920(v141 + 40);
    Instance = StringLiteral_16934/*"bit_result_servant"*/;
    if ( StringLiteral_16934/*"bit_result_servant"*/ )
    {
      Instance = sub_B52A44(StringLiteral_16934/*"bit_result_servant"*/, *(_QWORD *)(*(_QWORD *)v141 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v144 = StringLiteral_16934/*"bit_result_servant"*/;
    }
    else
    {
      v144 = 0LL;
    }
    if ( *(_DWORD *)(v141 + 24) <= 2u )
      goto LABEL_285;
    *(_QWORD *)(v141 + 48) = v144;
    sub_B52920(v141 + 48);
    Instance = StringLiteral_16935/*"bit_result_skill"*/;
    if ( StringLiteral_16935/*"bit_result_skill"*/ )
    {
      Instance = sub_B52A44(StringLiteral_16935/*"bit_result_skill"*/, *(_QWORD *)(*(_QWORD *)v141 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v145 = StringLiteral_16935/*"bit_result_skill"*/;
    }
    else
    {
      v145 = 0LL;
    }
    if ( *(_DWORD *)(v141 + 24) <= 3u )
      goto LABEL_285;
    *(_QWORD *)(v141 + 56) = v145;
    sub_B52920(v141 + 56);
    Instance = StringLiteral_16920/*"bit_result_command_card_exceed"*/;
    if ( StringLiteral_16920/*"bit_result_command_card_exceed"*/ )
    {
      Instance = sub_B52A44(StringLiteral_16920/*"bit_result_command_card_exceed"*/, *(_QWORD *)(*(_QWORD *)v141 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v146 = StringLiteral_16920/*"bit_result_command_card_exceed"*/;
    }
    else
    {
      v146 = 0LL;
    }
    if ( *(_DWORD *)(v141 + 24) <= 4u )
      goto LABEL_285;
    *(_QWORD *)(v141 + 64) = v146;
    sub_B52920(v141 + 64);
    Instance = StringLiteral_16921/*"bit_result_extraskill"*/;
    if ( StringLiteral_16921/*"bit_result_extraskill"*/ )
    {
      Instance = sub_B52A44(StringLiteral_16921/*"bit_result_extraskill"*/, *(_QWORD *)(*(_QWORD *)v141 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v147 = StringLiteral_16921/*"bit_result_extraskill"*/;
    }
    else
    {
      v147 = 0LL;
    }
    if ( *(_DWORD *)(v141 + 24) <= 5u )
      goto LABEL_285;
    *(_QWORD *)(v141 + 72) = v147;
    sub_B52920(v141 + 72);
    Instance = StringLiteral_16924/*"bit_result_friendship_exceed"*/;
    if ( StringLiteral_16924/*"bit_result_friendship_exceed"*/ )
    {
      Instance = sub_B52A44(StringLiteral_16924/*"bit_result_friendship_exceed"*/, *(_QWORD *)(*(_QWORD *)v141 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v148 = StringLiteral_16924/*"bit_result_friendship_exceed"*/;
    }
    else
    {
      v148 = 0LL;
    }
    if ( *(_DWORD *)(v141 + 24) <= 6u )
      goto LABEL_285;
    *(_QWORD *)(v141 + 80) = v148;
    sub_B52920(v141 + 80);
    v149 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v149 = BalanceConfig_TypeInfo;
    }
    v150 = &v149->static_fields->UIStandFigureROffsetEffectNames;
    *v150 = (struct System_String_array *)v141;
    sub_B52920(v150);
    v140 = BalanceConfig_TypeInfo;
  }
  if ( (BYTE3(v140->vtable._0_Equals.methodPtr) & 4) != 0 && !v140->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v140);
    v140 = BalanceConfig_TypeInfo;
  }
  if ( v140->static_fields->UIStandFigureROffsetImages )
    goto LABEL_279;
  Instance = sub_B5299C(string___TypeInfo, 18LL);
  if ( !Instance )
    goto LABEL_286;
  v151 = Instance;
  Instance = StringLiteral_1105/*"1053900:100:0"*/;
  if ( StringLiteral_1105/*"1053900:100:0"*/ )
  {
    Instance = sub_B52A44(StringLiteral_1105/*"1053900:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v152 = StringLiteral_1105/*"1053900:100:0"*/;
  }
  else
  {
    v152 = 0LL;
  }
  if ( !*(_DWORD *)(v151 + 24) )
    goto LABEL_285;
  *(_QWORD *)(v151 + 32) = v152;
  sub_B52920(v151 + 32);
  Instance = StringLiteral_1108/*"1053910:100:0"*/;
  if ( StringLiteral_1108/*"1053910:100:0"*/ )
  {
    Instance = sub_B52A44(StringLiteral_1108/*"1053910:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v153 = StringLiteral_1108/*"1053910:100:0"*/;
  }
  else
  {
    v153 = 0LL;
  }
  if ( *(_DWORD *)(v151 + 24) <= 1u )
    goto LABEL_285;
  *(_QWORD *)(v151 + 40) = v153;
  sub_B52920(v151 + 40);
  Instance = StringLiteral_1106/*"1053901:100:0"*/;
  if ( StringLiteral_1106/*"1053901:100:0"*/ )
  {
    Instance = sub_B52A44(StringLiteral_1106/*"1053901:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v154 = StringLiteral_1106/*"1053901:100:0"*/;
  }
  else
  {
    v154 = 0LL;
  }
  if ( *(_DWORD *)(v151 + 24) <= 2u )
    goto LABEL_285;
  *(_QWORD *)(v151 + 48) = v154;
  sub_B52920(v151 + 48);
  Instance = StringLiteral_1109/*"1053911:100:0"*/;
  if ( StringLiteral_1109/*"1053911:100:0"*/ )
  {
    Instance = sub_B52A44(StringLiteral_1109/*"1053911:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v155 = StringLiteral_1109/*"1053911:100:0"*/;
  }
  else
  {
    v155 = 0LL;
  }
  if ( *(_DWORD *)(v151 + 24) <= 3u )
    goto LABEL_285;
  *(_QWORD *)(v151 + 56) = v155;
  sub_B52920(v151 + 56);
  Instance = StringLiteral_1107/*"1053902:100:0"*/;
  if ( StringLiteral_1107/*"1053902:100:0"*/ )
  {
    Instance = sub_B52A44(StringLiteral_1107/*"1053902:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v156 = StringLiteral_1107/*"1053902:100:0"*/;
  }
  else
  {
    v156 = 0LL;
  }
  if ( *(_DWORD *)(v151 + 24) <= 4u )
    goto LABEL_285;
  *(_QWORD *)(v151 + 64) = v156;
  sub_B52920(v151 + 64);
  Instance = StringLiteral_1110/*"1053912:100:0"*/;
  if ( StringLiteral_1110/*"1053912:100:0"*/ )
  {
    Instance = sub_B52A44(StringLiteral_1110/*"1053912:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v157 = StringLiteral_1110/*"1053912:100:0"*/;
  }
  else
  {
    v157 = 0LL;
  }
  if ( *(_DWORD *)(v151 + 24) <= 5u )
    goto LABEL_285;
  *(_QWORD *)(v151 + 72) = v157;
  sub_B52920(v151 + 72);
  Instance = StringLiteral_1102/*"1053000:100:0"*/;
  if ( StringLiteral_1102/*"1053000:100:0"*/ )
  {
    Instance = sub_B52A44(StringLiteral_1102/*"1053000:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v158 = StringLiteral_1102/*"1053000:100:0"*/;
  }
  else
  {
    v158 = 0LL;
  }
  if ( *(_DWORD *)(v151 + 24) <= 6u )
    goto LABEL_285;
  *(_QWORD *)(v151 + 80) = v158;
  sub_B52920(v151 + 80);
  Instance = StringLiteral_1103/*"1053001:100:0"*/;
  if ( StringLiteral_1103/*"1053001:100:0"*/ )
  {
    Instance = sub_B52A44(StringLiteral_1103/*"1053001:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v159 = StringLiteral_1103/*"1053001:100:0"*/;
  }
  else
  {
    v159 = 0LL;
  }
  if ( *(_DWORD *)(v151 + 24) <= 7u )
    goto LABEL_285;
  *(_QWORD *)(v151 + 88) = v159;
  sub_B52920(v151 + 88);
  Instance = StringLiteral_1104/*"1053002:100:0"*/;
  if ( StringLiteral_1104/*"1053002:100:0"*/ )
  {
    Instance = sub_B52A44(StringLiteral_1104/*"1053002:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v160 = StringLiteral_1104/*"1053002:100:0"*/;
  }
  else
  {
    v160 = 0LL;
  }
  if ( *(_DWORD *)(v151 + 24) <= 8u )
    goto LABEL_285;
  *(_QWORD *)(v151 + 96) = v160;
  sub_B52920(v151 + 96);
  Instance = StringLiteral_1212/*"5047900:100:0"*/;
  if ( StringLiteral_1212/*"5047900:100:0"*/ )
  {
    Instance = sub_B52A44(StringLiteral_1212/*"5047900:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v161 = StringLiteral_1212/*"5047900:100:0"*/;
  }
  else
  {
    v161 = 0LL;
  }
  if ( *(_DWORD *)(v151 + 24) <= 9u )
    goto LABEL_285;
  *(_QWORD *)(v151 + 104) = v161;
  sub_B52920(v151 + 104);
  Instance = StringLiteral_1215/*"5047910:100:0"*/;
  if ( StringLiteral_1215/*"5047910:100:0"*/ )
  {
    Instance = sub_B52A44(StringLiteral_1215/*"5047910:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v162 = StringLiteral_1215/*"5047910:100:0"*/;
  }
  else
  {
    v162 = 0LL;
  }
  if ( *(_DWORD *)(v151 + 24) <= 0xAu )
    goto LABEL_285;
  *(_QWORD *)(v151 + 112) = v162;
  sub_B52920(v151 + 112);
  Instance = StringLiteral_1213/*"5047901:100:0"*/;
  if ( StringLiteral_1213/*"5047901:100:0"*/ )
  {
    Instance = sub_B52A44(StringLiteral_1213/*"5047901:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v163 = StringLiteral_1213/*"5047901:100:0"*/;
  }
  else
  {
    v163 = 0LL;
  }
  if ( *(_DWORD *)(v151 + 24) <= 0xBu )
    goto LABEL_285;
  *(_QWORD *)(v151 + 120) = v163;
  sub_B52920(v151 + 120);
  Instance = StringLiteral_1216/*"5047911:100:0"*/;
  if ( StringLiteral_1216/*"5047911:100:0"*/ )
  {
    Instance = sub_B52A44(StringLiteral_1216/*"5047911:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v164 = StringLiteral_1216/*"5047911:100:0"*/;
  }
  else
  {
    v164 = 0LL;
  }
  if ( *(_DWORD *)(v151 + 24) <= 0xCu )
    goto LABEL_285;
  *(_QWORD *)(v151 + 128) = v164;
  sub_B52920(v151 + 128);
  Instance = StringLiteral_1214/*"5047902:100:0"*/;
  if ( StringLiteral_1214/*"5047902:100:0"*/ )
  {
    Instance = sub_B52A44(StringLiteral_1214/*"5047902:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v165 = StringLiteral_1214/*"5047902:100:0"*/;
  }
  else
  {
    v165 = 0LL;
  }
  if ( *(_DWORD *)(v151 + 24) <= 0xDu )
    goto LABEL_285;
  *(_QWORD *)(v151 + 136) = v165;
  sub_B52920(v151 + 136);
  Instance = StringLiteral_1217/*"5047912:100:0"*/;
  if ( StringLiteral_1217/*"5047912:100:0"*/ )
  {
    Instance = sub_B52A44(StringLiteral_1217/*"5047912:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v166 = StringLiteral_1217/*"5047912:100:0"*/;
  }
  else
  {
    v166 = 0LL;
  }
  if ( *(_DWORD *)(v151 + 24) <= 0xEu )
    goto LABEL_285;
  *(_QWORD *)(v151 + 144) = v166;
  sub_B52920(v151 + 144);
  Instance = StringLiteral_1209/*"5047000:100:0"*/;
  if ( StringLiteral_1209/*"5047000:100:0"*/ )
  {
    Instance = sub_B52A44(StringLiteral_1209/*"5047000:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v167 = StringLiteral_1209/*"5047000:100:0"*/;
  }
  else
  {
    v167 = 0LL;
  }
  if ( *(_DWORD *)(v151 + 24) <= 0xFu )
    goto LABEL_285;
  *(_QWORD *)(v151 + 152) = v167;
  sub_B52920(v151 + 152);
  Instance = StringLiteral_1210/*"5047001:100:0"*/;
  if ( StringLiteral_1210/*"5047001:100:0"*/ )
  {
    Instance = sub_B52A44(StringLiteral_1210/*"5047001:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v168 = StringLiteral_1210/*"5047001:100:0"*/;
  }
  else
  {
    v168 = 0LL;
  }
  if ( *(_DWORD *)(v151 + 24) <= 0x10u )
    goto LABEL_285;
  *(_QWORD *)(v151 + 160) = v168;
  sub_B52920(v151 + 160);
  Instance = StringLiteral_1211/*"5047002:100:0"*/;
  if ( !StringLiteral_1211/*"5047002:100:0"*/ )
  {
    v169 = 0LL;
    goto LABEL_274;
  }
  Instance = sub_B52A44(StringLiteral_1211/*"5047002:100:0"*/, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
  if ( !Instance )
  {
LABEL_287:
    v225 = sub_B52A7C();
    sub_B52A28(v225, 0LL);
  }
  v169 = StringLiteral_1211/*"5047002:100:0"*/;
LABEL_274:
  if ( *(_DWORD *)(v151 + 24) <= 0x11u )
    goto LABEL_285;
  *(_QWORD *)(v151 + 168) = v169;
  sub_B52920(v151 + 168);
  v170 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v170 = BalanceConfig_TypeInfo;
  }
  v171 = &v170->static_fields->UIStandFigureROffsetImages;
  *v171 = (struct System_String_array *)v151;
  sub_B52920(v171);
LABEL_279:
  v172 = ConstantMaster__GetValue_28577068(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7495/*"IS_WAR_BOARD_AI_CALC_EVAL_SUM"*/,
           0,
           0LL);
  v173 = BalanceConfig_TypeInfo;
  v174 = v172;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v173 = BalanceConfig_TypeInfo;
  }
  v173->static_fields->IsWarBoardAiCalcEvalSum = v174 != 0;
  BalanceConfig_TypeInfo->static_fields->WarBoardEvalFactorsAffectRatio = ConstantMaster__GetValue_28577068(
                                                                            MasterData_WarQuestSelectionMaster,
                                                                            (System_String_o *)StringLiteral_15432/*"WAR_BOARD_EVAL_FACTORS_AFFECT_RATIO"*/,
                                                                            10000,
                                                                            0LL);
  v175 = ConstantMaster__GetValue_28577068(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7496/*"IS_WAR_BOARD_AI_FILTER_NOT_ACTION"*/,
           1,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsWarBoardAiFilterNotAction = v175;
  v176 = ConstantMaster__GetValue_28577068(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7497/*"IS_WAR_BOARD_AI_FILTER_WASTE_ROUTE"*/,
           0,
           0LL);
  v177 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->IsWarBoardAiFilterWasteRoute = v176 != 0;
  BalanceConfig_TypeInfo->static_fields->StoneFragmentExchangeNoticeDispMax = ConstantMaster__GetValue_28577068(
                                                                                MasterData_WarQuestSelectionMaster,
                                                                                (System_String_o *)StringLiteral_12468/*"STONE_FRAGMENT_EXCHANGE_NOTICE_MAX"*/,
                                                                                v177->static_fields->StoneFragmentExchangeNoticeDispMax,
                                                                                0LL);
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveTimeConstant = (float)ConstantMaster__GetValue_28577068(
                                                                              MasterData_WarQuestSelectionMaster,
                                                                              (System_String_o *)StringLiteral_1181/*"3D_MAP_CAMERA_MOVE_TIME_CONSTANT"*/,
                                                                              0,
                                                                              0LL)
                                                                   / 1000.0;
  v178 = ConstantMaster__GetValue_28577068(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_1180/*"3D_MAP_CAMERA_MOVE_TIME_COEFFICIENT"*/,
           1700,
           0LL);
  v179 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveTimeCoefficient = (float)v178 / 1000.0;
  v180 = ConstantMaster__GetValue_28577068(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_1182/*"3D_MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE"*/,
           v179->static_fields->MapCameraMoveTimeLogarithmBase,
           0LL);
  v181 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveTimeLogarithmBase = v180;
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveEasingType = ConstantMaster__GetValue_28577068(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_1179/*"3D_MAP_CAMERA_MOVE_EASING_TYPE"*/,
                                                                     v181->static_fields->MapCameraMoveEasingType,
                                                                     0LL);
  v182 = ConstantMaster__GetValue_28577068(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_2946/*"CAMERA_2D_RESET_DURATION"*/,
           644,
           0LL);
  v183 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->Camera2DResetDuration = (float)v182 / 1000.0;
  v184 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_8654/*"MAIN_CHAPTERS_WITH_EVENT_ID"*/,
           v183->static_fields->MainChaptersWithEventId,
           0LL);
  p_MainChaptersWithEventId = &BalanceConfig_TypeInfo->static_fields->MainChaptersWithEventId;
  *p_MainChaptersWithEventId = v184;
  sub_B52920(p_MainChaptersWithEventId);
  BalanceConfig_TypeInfo->static_fields->OrtSecondFormId = ConstantMaster__GetValue_28577068(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_9901/*"ORT_SECONDE_FORM_ID"*/,
                                                             1,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->OrtThirdFormId = ConstantMaster__GetValue_28577068(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_9902/*"ORT_THIRD_FORM_ID"*/,
                                                            2,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->OrtFirstQuestId = ConstantMaster__GetValue_28577068(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_9896/*"ORT_FIRST_QUEST_ID"*/,
                                                             3001324,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLateQuestId = ConstantMaster__GetValue_28577068(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_9900/*"ORT_LATE_QUEST_ID"*/,
                                                            3001325,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLatePhaseBreak = ConstantMaster__GetValue_28577068(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_9897/*"ORT_LATE_PHASE_BREAK"*/,
                                                               5,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLatePhaseSecondForm = ConstantMaster__GetValue_28577068(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_9899/*"ORT_LATE_PHASE_SECOND_FORM"*/,
                                                                    6,
                                                                    0LL);
  v186 = ConstantMaster__GetValue_28577068(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_9898/*"ORT_LATE_PHASE_DEAD"*/,
           7,
           0LL);
  v187 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->OrtLatePhaseDead = v186;
  v188 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_13545/*"TREASURE_DEVICES_FORCED_OPEN_EFFECT"*/,
           v187->static_fields->TreasureDevicesForcedOpenEffect,
           0LL);
  p_TreasureDevicesForcedOpenEffect = &BalanceConfig_TypeInfo->static_fields->TreasureDevicesForcedOpenEffect;
  *p_TreasureDevicesForcedOpenEffect = v188;
  sub_B52920(p_TreasureDevicesForcedOpenEffect);
  v190 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_7094/*"HEROINE_TREASURE_DEVICE_RANKUP_EFFECTS"*/,
           BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects,
           0LL);
  p_HeroineTreasureDeviceRankUpEffects = &BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects;
  *p_HeroineTreasureDeviceRankUpEffects = v190;
  sub_B52920(p_HeroineTreasureDeviceRankUpEffects);
  v192 = ConstantMaster__GetValue_28577068(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7093/*"HEROINE_LIMIT_COUNT_ORTINAX_REFURBISHED"*/,
           BalanceConfig_TypeInfo->static_fields->HeroineLimitCountOrtinaxRefurbished,
           0LL);
  v193 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->HeroineLimitCountOrtinaxRefurbished = v192;
  v194 = ConstantMaster__GetValue_28577068(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_3062/*"CLASS_BOARD_RELEASE_QUEST_ID"*/,
           v193->static_fields->ClassBoardReleaseQuestId,
           0LL);
  v195 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ClassBoardReleaseQuestId = v194;
  v196 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_5837/*"EXTRA1_SORT_ORDER_CLASS_IDS"*/,
           v195->static_fields->Extra1SortOrderClassIds,
           0LL);
  p_Extra1SortOrderClassIds = &BalanceConfig_TypeInfo->static_fields->Extra1SortOrderClassIds;
  *p_Extra1SortOrderClassIds = v196;
  sub_B52920(p_Extra1SortOrderClassIds);
  v198 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_5838/*"EXTRA2_SORT_ORDER_CLASS_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds,
           0LL);
  p_Extra2SortOrderClassIds = &BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds;
  *p_Extra2SortOrderClassIds = v198;
  sub_B52920(p_Extra2SortOrderClassIds);
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectMoveMaxDistance = ConstantMaster__GetValue_28577068(
                                                                                   MasterData_WarQuestSelectionMaster,
                                                                                   (System_String_o *)StringLiteral_3025/*"CLASS_BOARD_CAMERA_SELECT_MOVE_MAX_DISTANCE"*/,
                                                                                   BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectMoveMaxDistance,
                                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectSecMin = (float)ConstantMaster__GetValue_28577068(
                                                                                 MasterData_WarQuestSelectionMaster,
                                                                                 (System_String_o *)StringLiteral_3027/*"CLASS_BOARD_CAMERA_SELECT_SEC_MIN"*/,
                                                                                 100,
                                                                                 0LL)
                                                                      / 1000.0;
  v200 = ConstantMaster__GetValue_28577068(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_3026/*"CLASS_BOARD_CAMERA_SELECT_SEC_MAX"*/,
           1000,
           0LL);
  v201 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectSecMax = (float)v200 / 1000.0;
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectEasingType = ConstantMaster__GetValue_28577068(
                                                                              MasterData_WarQuestSelectionMaster,
                                                                              (System_String_o *)StringLiteral_3024/*"CLASS_BOARD_CAMERA_SELECT_EASING_TYPE"*/,
                                                                              v201->static_fields->ClassBoardCameraSelectEasingType,
                                                                              0LL);
  v202 = ConstantMaster__GetValue_28577068(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_3020/*"CLASS_BOARD_2D_CAMERA_DEFAULT_SIZE"*/,
           1700,
           0LL);
  v203 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ClassBoard2DCameraDefaultSize = (float)v202 / 1000.0;
  v204 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_9407/*"NOT_UI_CHANGE_MAP_IDS"*/,
           v203->static_fields->NotUIChangeMapIds,
           0LL);
  p_NotUIChangeMapIds = &BalanceConfig_TypeInfo->static_fields->NotUIChangeMapIds;
  *p_NotUIChangeMapIds = v204;
  sub_B52920(p_NotUIChangeMapIds);
  v206 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_8448/*"LIMIT_SEALED_DIALOG_MAX_LIMIT_OPEN_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds,
           0LL);
  p_LimitSealedDialogMaxLimitOpenIds = &BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds;
  *p_LimitSealedDialogMaxLimitOpenIds = v206;
  sub_B52920(p_LimitSealedDialogMaxLimitOpenIds);
  v208 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_9893/*"ORDEAL_CALL_CHAPTER_FOLDER_EVENT_UI_DISP_WAR_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds,
           0LL);
  p_OrdealCallChapterFolderEventUIDispWarIds = &BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds;
  *p_OrdealCallChapterFolderEventUIDispWarIds = v208;
  sub_B52920(p_OrdealCallChapterFolderEventUIDispWarIds);
  v210 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_11150/*"RECOVERY_FATIGUE_DELAYED_CHANGE_BG_EVENTS"*/,
           BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents,
           0LL);
  p_RecoveryFatigueDelayedChangeBgEvents = &BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents;
  *p_RecoveryFatigueDelayedChangeBgEvents = v210;
  sub_B52920(p_RecoveryFatigueDelayedChangeBgEvents);
  Instance = sub_B5299C(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_286;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_285;
  *(_DWORD *)(Instance + 32) = 94086401;
  v212 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_9368/*"NONE_DISPLAY_FREE_QUEST_MATERIAL"*/,
           (System_Int32_array *)Instance,
           0LL);
  p_noneDisplayFreeQuestMaterial = &BalanceConfig_TypeInfo->static_fields->noneDisplayFreeQuestMaterial;
  *p_noneDisplayFreeQuestMaterial = v212;
  sub_B52920(p_noneDisplayFreeQuestMaterial);
  v214 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_9406/*"NOT_SEND_TRACK_EVENT_AT_WAR_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
           0LL);
  p_NotSendTrackEventAtWarIds = &BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds;
  *p_NotSendTrackEventAtWarIds = v214;
  sub_B52920(p_NotSendTrackEventAtWarIds);
  v216 = ConstantMaster__GetValue_28577068(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_12422/*"STARTING_MEMBER_FRIENDSHIP_RATE"*/,
           0,
           0LL);
  v217 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->StartingMemberFriendshipRate = v216;
  v218 = ConstantStrMaster__GetValueArray(
           v5,
           (System_String_o *)StringLiteral_9401/*"NOT_REQUIRED_WAR_IDS"*/,
           v217->static_fields->NotRequiredPlayWarIds,
           0LL);
  p_NotRequiredPlayWarIds = &BalanceConfig_TypeInfo->static_fields->NotRequiredPlayWarIds;
  *p_NotRequiredPlayWarIds = v218;
  sub_B52920(p_NotRequiredPlayWarIds);
  v220 = ConstantMaster__GetValue_28577068(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7491/*"IS_ENABLE_OLD_BLOCK_SHORTEST_ROUTE"*/,
           0,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsEnableOldBlockShortestRoute = v220;
  v221 = ConstantMaster__GetValue_28577068(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7492/*"IS_EVENT_POINT_MENU"*/,
           0,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsEventPointMenu = v221;
  v222 = ConstantStrMaster__GetValue(v5, (System_String_o *)StringLiteral_8489/*"LOGIN_QUEST_RETURN_TERMINAL_DIALOG_MESSAGE"*/, 0LL);
  p_LoginQuestReturnTerminalDialogMessage = &BalanceConfig_TypeInfo->static_fields->LoginQuestReturnTerminalDialogMessage;
  *p_LoginQuestReturnTerminalDialogMessage = v222;
  sub_B52920(p_LoginQuestReturnTerminalDialogMessage);
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

  if ( (byte_42AEC33 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig___c_TypeInfo);
    byte_42AEC33 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BalanceConfig___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BalanceConfig___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BalanceConfig___c___ctor(BalanceConfig___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BalanceConfig___c___Initialize_b__219_0(
        BalanceConfig___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}