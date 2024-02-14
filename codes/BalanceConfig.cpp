void __fastcall BalanceConfig___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BalanceConfig_c *v12; // x8
  BalanceConfig_c *v13; // x8
  struct System_Int32_array **p_PresentBoxFilterSvtEquipMaterial; // x0
  BalanceConfig_c *v15; // x8
  struct System_Int32_array **p_ReprintLastWarRaidEventIdList; // x0
  BalanceConfig_c *v17; // x8
  struct System_Int32_array **p_EventTowerFadeOutDelayTime; // x0
  BalanceConfig_c *v19; // x8
  struct System_Int32_array **p_MainInterludeWarIdOnMaterial; // x0
  struct System_Int32_array **p_EventBoardGameDiceButtonPostion; // x0
  struct System_Int32_array **p_EventBoardGameMapIdList; // x0
  BalanceConfig_c *v23; // x8
  __int64 v24; // x1
  struct System_String_o **p_OrdealCallClearBgmName; // x0
  struct System_Int32_array **p_consumeStormPodSpotId; // x0
  struct System_Int32_array **p_StormPodHelpIds; // x0
  struct System_String_array **p_legacyAspectMovies; // x0
  struct System_Int32_array **p_fullScreenNPChrs; // x0
  struct System_Int32_array **p_fullScreenNPSeqIds; // x0
  struct System_String_array **p_UIStandFigureROffsetEffectNames; // x0
  struct System_String_array **p_UIStandFigureROffsetImages; // x0
  BalanceConfig_c *v33; // x8
  __int64 v34; // x0
  struct System_Int32_array *v35; // x1
  struct System_Int32_array **p_MainChaptersWithEventId; // x0
  struct System_Int32_array *v37; // x1
  struct System_Int32_array **p_TreasureDevicesForcedOpenEffect; // x0
  struct System_Int32_array *v39; // x1
  struct System_Int32_array **p_HeroineTreasureDeviceRankUpEffects; // x0
  BalanceConfig_c *v41; // x8
  System_Array_o *v42; // x19
  struct System_Int32_array **p_Extra1SortOrderClassIds; // x0
  System_Array_o *v44; // x19
  struct System_Int32_array **p_Extra2SortOrderClassIds; // x0
  BalanceConfig_c *v46; // x8
  __int64 v47; // x1
  struct System_Int32_array **p_NotUIChangeMapIds; // x0
  struct System_Int32_array *v49; // x1
  struct System_Int32_array **p_LimitSealedDialogMaxLimitOpenIds; // x0
  struct System_Int32_array *v51; // x1
  struct System_Int32_array **p_OrdealCallChapterFolderEventUIDispWarIds; // x0
  struct System_Int32_array *v53; // x1
  struct System_Int32_array **p_RecoveryFatigueDelayedChangeBgEvents; // x0
  struct System_Int32_array *v55; // x1
  struct System_Int32_array **p_noneDisplayFreeQuestMaterial; // x0
  System_Array_o *v57; // x19
  struct System_Int32_array **p_NotSendTrackEventAtWarIds; // x0
  System_Array_o *v59; // x19
  struct System_Int32_array **p_NotRequiredPlayWarIds; // x0
  BalanceConfig_c *v61; // x8
  __int64 v62; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  System_RuntimeFieldHandle_o v64; // 0:w1.4
  System_RuntimeFieldHandle_o v65; // 0:w1.4
  System_RuntimeFieldHandle_o v66; // 0:w1.4
  System_RuntimeFieldHandle_o v67; // 0:w1.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421161C & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v1);
    sub_B0D8A4(&int___TypeInfo, v6);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__0576E2463551A09802222B33A5BA38F57896D9DD406B6DB32A10299A54B4B5BC,
      v7);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__829FEE660E2799B8814849BCC3884998BB3651E975AC0C0D659AD53227033DBC,
      v8);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__96039A68C58EBF2F40B99A5B8F9F313745D9C4E02164BB0FCE39159471432F4B,
      v9);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA,
      v10);
    sub_B0D8A4(&StringLiteral_2572/*"BGM_TITLE_5"*/, v11);
    byte_421161C = 1;
  }
  BalanceConfig_TypeInfo->static_fields->CriticalRateToAddByQuickFirstBonus = 0;
  v12 = BalanceConfig_TypeInfo;
  v68.fields.r = 1.0;
  v68.fields.g = 1.0;
  BalanceConfig_TypeInfo->static_fields->ServantLimitMax = 4;
  v68.fields.b = 1.0;
  v12->static_fields->SvtSkillListMax = 3;
  v12->static_fields->SvtPassiveSkillListMax = 20;
  v12->static_fields->SvtEquipMax = 1;
  v12->static_fields->SvtEquipSkillListMax = 20;
  v12->static_fields->SvtCommandCardMax = 5;
  v12->static_fields->UserEquipSkillListMax = 3;
  v12->static_fields->SvtAppendPassiveSkillListMax = 5;
  v12->static_fields->UserEventItemMax = 999999999;
  v12->static_fields->UserPointEventMax = 999999999LL;
  v12->static_fields->UserEventActivityPointMax = 999999999LL;
  v12->static_fields->UserRaidDamagePointMax = 0xE8D4A50FFFLL;
  v12->static_fields->UserSuperBossDamagePointMax = 0xE8D4A50FFFLL;
  v12->static_fields->PresentBoxValidTime = 31536000;
  v12->static_fields->AllUserBoxGachaTotalMax = 999999999LL;
  v12->static_fields->DeckMemberMax = 6;
  v12->static_fields->DeckMainMemberMax = 3;
  v12->static_fields->SupportDeckMemberMax = 9;
  v12->static_fields->FixMainSupportDeckNum = 3;
  v12->static_fields->FixEventSupportDeckNum = 3;
  v12->static_fields->ServantFrameUseStone = 5;
  v12->static_fields->ServantEquipFrameUseStone = 5;
  v12->static_fields->ServantCombineMax = 5;
  v12->static_fields->RequestTopHomeExpirationDateSec = 600;
  v12->static_fields->ServerTimeOverLimit = 3600LL;
  v12->static_fields->SpendApRecvItemNum = 1;
  v12->static_fields->ServantSellSelectMax = 999;
  v12->static_fields->ServantWarehouseSelectMax = 999;
  v12->static_fields->ServantIdJekyll = 0;
  v12->static_fields->ServantIdHyde = 0;
  v12->static_fields->ServantIdSwimsuitMelt = 0;
  v12->static_fields->ServantIdMashu1 = 0;
  v12->static_fields->ServantIdMashu2 = 0;
  v12->static_fields->ServantIdMashu3 = 0;
  v12->static_fields->ServantIdMission1 = 0;
  v12->static_fields->TreasureDeviceIdMashu3 = 0;
  v12->static_fields->CostumeIdMashu = 12;
  v12->static_fields->MashuTdGradeUpQuestId = 0;
  v12->static_fields->MashuTdGradeUpQuestPhase = 0;
  v12->static_fields->ServantIdOberonChoco = 0;
  v12->static_fields->Lostbelt6ClearQuestId = 0;
  v12->static_fields->VtReleaseAt = 0LL;
  v12->static_fields->LvExceedItemId = 7999;
  v12->static_fields->LvExceedNeedItemNum = 1;
  v12->static_fields->LvExceedDewDropItemId = 7998;
  v12->static_fields->itemIdForShop13 = 46;
  v12->static_fields->ApSeedItemId = 103;
  v12->static_fields->ApSeedExchangeTargetItemId = 104;
  v12->static_fields->itemIdForShop15 = 48;
  v12->static_fields->FollowerRefreshRestTime = -1;
  v12->static_fields->DefaultFontSize = 30;
  v12->static_fields->TradeApDialogWarningLabelFontSize = 22;
  v12->static_fields->ShopDetailCheckDialogFontSize = 21;
  v12->static_fields->NoneExpireTime = 1893423600;
  v12->static_fields->MstMissionAlertTime = 259200;
  v12->static_fields->raceRewardRankMax = 3;
  v12->static_fields->LocationRewardDlgColumn = 7;
  v12->static_fields->ScenarioSpeedStep = 0.1;
  v12->static_fields->ScenarioSpeedLow = 0.5;
  v12->static_fields->ScenarioSpeedHigh = 1.5;
  v12->static_fields->ScenarioSpeedDefault = 1.0;
  v12->static_fields->ScenarioTextWaitStep = 0.01;
  v12->static_fields->ScenarioTextWaitLow = 0.0;
  v12->static_fields->ScenarioTextWaitHigh = 0.1;
  v12->static_fields->ScenarioTextWaitDefaultCn = 0.0;
  v12->static_fields->ScenarioTextWaitDefaultSt = 0.05;
  v12->static_fields->ScenarioTextSpeedStep = 1.0;
  v12->static_fields->ScenarioTextSpeedLow = 0.5;
  v12->static_fields->ScenarioTextSpeedHigh = 5.0;
  v12->static_fields->ScenarioTextSpeedDefault = 3.0;
  v12->static_fields->ScenarioScrollSpeedStep = 1.0;
  v12->static_fields->ScenarioScrollSpeedLow = 0.5;
  v12->static_fields->ScenarioScrollSpeedHigh = 5.0;
  v12->static_fields->ScenarioScrollSpeedDefault = 3.0;
  v12->static_fields->ShopNewItemAddDays = 9.0;
  v12->static_fields->PowerUpQuestWarId = 1001;
  v12->static_fields->AccountingInitializeTimeOut = 60;
  v12->static_fields->EquipGetEffectId = 0;
  v68.fields.a = 0.6;
  *(_OWORD *)&var40.methodPointer = 0uLL;
  UnityEngine_Color___ctor(v68, v2, v3, v4, v5, &var40);
  v13 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->MaskColor = *(struct UnityEngine_Color_o *)&var40.methodPointer;
  v13->static_fields->CommandCodeDetachingItemId = -1;
  v13->static_fields->FloatAfterDecimalPointMax = 1.0;
  v13->static_fields->FollowNum = 3;
  v13->static_fields->FollowFriendPoint = 25;
  p_PresentBoxFilterSvtEquipMaterial = &v13->static_fields->PresentBoxFilterSvtEquipMaterial;
  *p_PresentBoxFilterSvtEquipMaterial = 0LL;
  sub_B0D840(p_PresentBoxFilterSvtEquipMaterial, 0LL);
  v15 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->DisableFriendshipExceed = -1;
  v15->static_fields->SupportListMax = 20;
  v15->static_fields->EventDailyPointResetAt = 10;
  v15->static_fields->FriendPointSummonQpWarning = 500;
  v15->static_fields->FriendShipExceedItemId = 1000;
  v15->static_fields->SkilExceedItemId = 6999;
  v15->static_fields->stormPodItemId = 49;
  v15->static_fields->Torch1ItemId = 51;
  v15->static_fields->Torch2ItemId = 52;
  v15->static_fields->Torch3ItemId = 53;
  p_ReprintLastWarRaidEventIdList = &v15->static_fields->ReprintLastWarRaidEventIdList;
  *p_ReprintLastWarRaidEventIdList = 0LL;
  sub_B0D840(p_ReprintLastWarRaidEventIdList, 0LL);
  v17 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->CommandCardParamUpMax = 500;
  p_EventTowerFadeOutDelayTime = &v17->static_fields->EventTowerFadeOutDelayTime;
  *p_EventTowerFadeOutDelayTime = 0LL;
  sub_B0D840(p_EventTowerFadeOutDelayTime, 0LL);
  v19 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->EventTowerFadeOutPlayTime = 3.0;
  v19->static_fields->MaxFriendChocolateUse = 3;
  v19->static_fields->FriendPointBoostItemEfffectId = 3;
  v19->static_fields->MainInterludeWarId = 1004;
  p_MainInterludeWarIdOnMaterial = &v19->static_fields->MainInterludeWarIdOnMaterial;
  *p_MainInterludeWarIdOnMaterial = 0LL;
  sub_B0D840(p_MainInterludeWarIdOnMaterial, 0LL);
  p_EventBoardGameDiceButtonPostion = &BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion;
  *p_EventBoardGameDiceButtonPostion = 0LL;
  sub_B0D840(p_EventBoardGameDiceButtonPostion, 0LL);
  p_EventBoardGameMapIdList = &BalanceConfig_TypeInfo->static_fields->EventBoardGameMapIdList;
  *p_EventBoardGameMapIdList = 0LL;
  sub_B0D840(p_EventBoardGameMapIdList, 0LL);
  v23 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->TitleFlowOld = 0;
  v23->static_fields->StoryWarId = 1003;
  v23->static_fields->OrdealCallWarId = 401;
  v24 = StringLiteral_2572/*"BGM_TITLE_5"*/;
  p_OrdealCallClearBgmName = &v23->static_fields->OrdealCallClearBgmName;
  *p_OrdealCallClearBgmName = (struct System_String_o *)StringLiteral_2572/*"BGM_TITLE_5"*/;
  sub_B0D840(p_OrdealCallClearBgmName, v24);
  p_consumeStormPodSpotId = &BalanceConfig_TypeInfo->static_fields->consumeStormPodSpotId;
  *p_consumeStormPodSpotId = 0LL;
  sub_B0D840(p_consumeStormPodSpotId, 0LL);
  p_StormPodHelpIds = &BalanceConfig_TypeInfo->static_fields->StormPodHelpIds;
  *p_StormPodHelpIds = 0LL;
  sub_B0D840(p_StormPodHelpIds, 0LL);
  p_legacyAspectMovies = &BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
  *p_legacyAspectMovies = 0LL;
  sub_B0D840(p_legacyAspectMovies, 0LL);
  p_fullScreenNPChrs = &BalanceConfig_TypeInfo->static_fields->fullScreenNPChrs;
  *p_fullScreenNPChrs = 0LL;
  sub_B0D840(p_fullScreenNPChrs, 0LL);
  p_fullScreenNPSeqIds = &BalanceConfig_TypeInfo->static_fields->fullScreenNPSeqIds;
  *p_fullScreenNPSeqIds = 0LL;
  sub_B0D840(p_fullScreenNPSeqIds, 0LL);
  p_UIStandFigureROffsetEffectNames = &BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames;
  *p_UIStandFigureROffsetEffectNames = 0LL;
  sub_B0D840(p_UIStandFigureROffsetEffectNames, 0LL);
  p_UIStandFigureROffsetImages = &BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetImages;
  *p_UIStandFigureROffsetImages = 0LL;
  sub_B0D840(p_UIStandFigureROffsetImages, 0LL);
  v33 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->IsWarBoardAiCalcEvalSum = 0;
  v33->static_fields->WarBoardEvalFactorsAffectRatio = 10000;
  *(_QWORD *)&v33->static_fields->StoneFragmentExchangeNoticeDispMax = 999LL;
  v33->static_fields->MapCameraMoveTimeCoefficient = 1.7;
  v33->static_fields->MapCameraMoveTimeLogarithmBase = 11000;
  v33->static_fields->MapCameraMoveEasingType = 15;
  v33->static_fields->Camera2DResetDuration = 0.644;
  v34 = sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !v34 )
    goto LABEL_18;
  v35 = (struct System_Int32_array *)v34;
  if ( !*(_DWORD *)(v34 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v34 + 32) = 311;
  p_MainChaptersWithEventId = &BalanceConfig_TypeInfo->static_fields->MainChaptersWithEventId;
  *p_MainChaptersWithEventId = v35;
  sub_B0D840(p_MainChaptersWithEventId, v35);
  v34 = sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !v34 )
    goto LABEL_18;
  v37 = (struct System_Int32_array *)v34;
  if ( !*(_DWORD *)(v34 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v34 + 32) = 2800502;
  p_TreasureDevicesForcedOpenEffect = &BalanceConfig_TypeInfo->static_fields->TreasureDevicesForcedOpenEffect;
  *p_TreasureDevicesForcedOpenEffect = v37;
  sub_B0D840(p_TreasureDevicesForcedOpenEffect, v37);
  v34 = sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !v34 )
    goto LABEL_18;
  v39 = (struct System_Int32_array *)v34;
  if ( !*(_DWORD *)(v34 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v34 + 32) = 800106;
  p_HeroineTreasureDeviceRankUpEffects = &BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects;
  *p_HeroineTreasureDeviceRankUpEffects = v39;
  sub_B0D840(p_HeroineTreasureDeviceRankUpEffects, v39);
  v41 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->HeroineLimitCountOrtinaxRefurbished = 13;
  v41->static_fields->ClassBoardReleaseQuestId = 4000100;
  v42 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 4LL);
  v64.fields.value = Field__PrivateImplementationDetails__0576E2463551A09802222B33A5BA38F57896D9DD406B6DB32A10299A54B4B5BC;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v42, v64, 0LL);
  p_Extra1SortOrderClassIds = &BalanceConfig_TypeInfo->static_fields->Extra1SortOrderClassIds;
  *p_Extra1SortOrderClassIds = (struct System_Int32_array *)v42;
  sub_B0D840(p_Extra1SortOrderClassIds, v42);
  v44 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 4LL);
  v65.fields.value = Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v44, v65, 0LL);
  p_Extra2SortOrderClassIds = &BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds;
  *p_Extra2SortOrderClassIds = (struct System_Int32_array *)v44;
  sub_B0D840(p_Extra2SortOrderClassIds, v44);
  v46 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectMoveMaxDistance = 1024;
  v46->static_fields->ClassBoardCameraSelectSecMin = 0.1;
  v46->static_fields->ClassBoardCameraSelectSecMax = 1.0;
  v46->static_fields->ClassBoardCameraSelectEasingType = 5;
  v46->static_fields->ClassBoard2DCameraDefaultSize = 1.7;
  v47 = sub_B0D8BC(int___TypeInfo, 0LL);
  p_NotUIChangeMapIds = &BalanceConfig_TypeInfo->static_fields->NotUIChangeMapIds;
  *p_NotUIChangeMapIds = (struct System_Int32_array *)v47;
  sub_B0D840(p_NotUIChangeMapIds, v47);
  v34 = sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !v34 )
    goto LABEL_18;
  v49 = (struct System_Int32_array *)v34;
  if ( !*(_DWORD *)(v34 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v34 + 32) = 3300100;
  p_LimitSealedDialogMaxLimitOpenIds = &BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds;
  *p_LimitSealedDialogMaxLimitOpenIds = v49;
  sub_B0D840(p_LimitSealedDialogMaxLimitOpenIds, v49);
  v34 = sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !v34 )
    goto LABEL_18;
  v51 = (struct System_Int32_array *)v34;
  if ( !*(_DWORD *)(v34 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v34 + 32) = 402;
  p_OrdealCallChapterFolderEventUIDispWarIds = &BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds;
  *p_OrdealCallChapterFolderEventUIDispWarIds = v51;
  sub_B0D840(p_OrdealCallChapterFolderEventUIDispWarIds, v51);
  v34 = sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !v34 )
    goto LABEL_18;
  v53 = (struct System_Int32_array *)v34;
  if ( !*(_DWORD *)(v34 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v34 + 32) = 80432;
  p_RecoveryFatigueDelayedChangeBgEvents = &BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents;
  *p_RecoveryFatigueDelayedChangeBgEvents = v53;
  sub_B0D840(p_RecoveryFatigueDelayedChangeBgEvents, v53);
  v34 = sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !v34 )
LABEL_18:
    sub_B0D97C(v34);
  v55 = (struct System_Int32_array *)v34;
  if ( !*(_DWORD *)(v34 + 24) )
  {
LABEL_19:
    v62 = sub_B0D9A8(v34);
    sub_B0D948(v62, 0LL);
  }
  *(_DWORD *)(v34 + 32) = 94086401;
  p_noneDisplayFreeQuestMaterial = &BalanceConfig_TypeInfo->static_fields->noneDisplayFreeQuestMaterial;
  *p_noneDisplayFreeQuestMaterial = v55;
  sub_B0D840(p_noneDisplayFreeQuestMaterial, v55);
  v57 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 5LL);
  v66.fields.value = Field__PrivateImplementationDetails__829FEE660E2799B8814849BCC3884998BB3651E975AC0C0D659AD53227033DBC;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v57, v66, 0LL);
  p_NotSendTrackEventAtWarIds = &BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds;
  *p_NotSendTrackEventAtWarIds = (struct System_Int32_array *)v57;
  sub_B0D840(p_NotSendTrackEventAtWarIds, v57);
  BalanceConfig_TypeInfo->static_fields->StartingMemberFriendshipRate = 0;
  v59 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 6LL);
  v67.fields.value = Field__PrivateImplementationDetails__96039A68C58EBF2F40B99A5B8F9F313745D9C4E02164BB0FCE39159471432F4B;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v59, v67, 0LL);
  p_NotRequiredPlayWarIds = &BalanceConfig_TypeInfo->static_fields->NotRequiredPlayWarIds;
  *p_NotRequiredPlayWarIds = (struct System_Int32_array *)v59;
  sub_B0D840(p_NotRequiredPlayWarIds, v59);
  v61 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->IsEnableOldBlockShortestRoute = 0;
  v61->static_fields->IsEventPointMenu = 0;
}


void __fastcall BalanceConfig___ctor(BalanceConfig_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BalanceConfig__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x1
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x1
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x1
  __int64 v87; // x1
  __int64 v88; // x1
  __int64 v89; // x1
  __int64 v90; // x1
  __int64 v91; // x1
  __int64 v92; // x1
  __int64 v93; // x1
  __int64 v94; // x1
  __int64 v95; // x1
  __int64 v96; // x1
  __int64 v97; // x1
  __int64 v98; // x1
  __int64 v99; // x1
  __int64 v100; // x1
  __int64 v101; // x1
  __int64 v102; // x1
  __int64 v103; // x1
  __int64 v104; // x1
  __int64 v105; // x1
  __int64 v106; // x1
  __int64 v107; // x1
  __int64 v108; // x1
  __int64 v109; // x1
  __int64 v110; // x1
  __int64 v111; // x1
  __int64 v112; // x1
  __int64 v113; // x1
  __int64 v114; // x1
  __int64 v115; // x1
  __int64 v116; // x1
  __int64 v117; // x1
  __int64 v118; // x1
  __int64 v119; // x1
  __int64 v120; // x1
  __int64 v121; // x1
  __int64 v122; // x1
  __int64 v123; // x1
  __int64 v124; // x1
  __int64 v125; // x1
  __int64 v126; // x1
  __int64 v127; // x1
  __int64 v128; // x1
  __int64 v129; // x1
  __int64 v130; // x1
  __int64 v131; // x1
  __int64 v132; // x1
  __int64 v133; // x1
  __int64 v134; // x1
  __int64 v135; // x1
  __int64 v136; // x1
  __int64 v137; // x1
  __int64 v138; // x1
  __int64 v139; // x1
  __int64 v140; // x1
  __int64 v141; // x1
  __int64 v142; // x1
  __int64 v143; // x1
  __int64 v144; // x1
  __int64 v145; // x1
  __int64 v146; // x1
  __int64 v147; // x1
  __int64 v148; // x1
  __int64 v149; // x1
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
  __int64 v168; // x1
  __int64 v169; // x1
  __int64 v170; // x1
  __int64 v171; // x1
  __int64 v172; // x1
  __int64 v173; // x1
  __int64 v174; // x1
  __int64 v175; // x1
  __int64 v176; // x1
  __int64 v177; // x1
  __int64 v178; // x1
  __int64 v179; // x1
  __int64 v180; // x1
  __int64 v181; // x1
  __int64 v182; // x1
  __int64 v183; // x1
  __int64 v184; // x1
  __int64 v185; // x1
  __int64 v186; // x1
  __int64 v187; // x1
  __int64 v188; // x1
  __int64 v189; // x1
  __int64 v190; // x1
  __int64 v191; // x1
  __int64 v192; // x1
  __int64 v193; // x1
  __int64 v194; // x1
  __int64 v195; // x1
  __int64 v196; // x1
  __int64 v197; // x1
  __int64 v198; // x1
  __int64 v199; // x1
  __int64 v200; // x1
  __int64 v201; // x1
  __int64 v202; // x1
  __int64 v203; // x1
  __int64 Instance; // x0
  ConstantMaster_o *MasterData_WarQuestSelectionMaster; // x19
  ConstantLongMaster_o *v206; // x21
  ConstantStrMaster_o *v207; // x20
  int32_t Value_27713676; // w22
  BalanceConfig_c *v209; // x8
  BalanceConfig_c *v210; // x8
  int64_t Value_27713100; // x0
  BalanceConfig_c *v212; // x8
  int32_t Value; // w0
  BalanceConfig_c *v214; // x8
  int32_t v215; // w0
  BalanceConfig_c *v216; // x8
  ManagerConfig_c *v217; // x0
  int64_t ServerTimeOverLimit; // x23
  int64_t SERVER_TIME_OVER_LIMIT; // x21
  BalanceConfig_c *v220; // x0
  int32_t v221; // w21
  int32_t v222; // w0
  BalanceConfig_c *v223; // x8
  int32_t v224; // w21
  int32_t v225; // w0
  System_String_o *v226; // x1
  struct System_String_o **p_UseTermsAgreementRequiredAppVersion; // x0
  System_String_o *v228; // x1
  struct System_String_o **p_UseTermsLatestVersion; // x0
  bool v230; // w9
  int v231; // w9
  System_Int32_array *ValueArray; // x1
  struct System_Int32_array **p_CombineServantSkillIds; // x0
  System_String_o *v234; // x0
  const MethodInfo *v235; // x2
  System_Int32_array *v236; // x1
  struct System_Int32_array **p_ServantIdsBirthdayBeforeValentine; // x0
  System_String_o *v238; // x0
  const MethodInfo *v239; // x2
  System_Int32_array *v240; // x0
  BalanceConfig_c *v241; // x8
  System_Int32_array *v242; // x21
  struct System_Int32_array **p_ServantIdsIgnoreFormChange; // x0
  int32_t v244; // w0
  BalanceConfig_c *v245; // x8
  int32_t v246; // w21
  int32_t v247; // w0
  int32_t v248; // w0
  BalanceConfig_c *v249; // x8
  System_String_o *v250; // x0
  BalanceConfig_c *v251; // x0
  float v252; // w21
  System_String_o *v253; // x0
  BalanceConfig_c *v254; // x0
  float v255; // w21
  System_String_o *v256; // x0
  BalanceConfig_c *v257; // x0
  float v258; // w21
  System_String_o *v259; // x0
  BalanceConfig_c *v260; // x0
  float v261; // w21
  int32_t v262; // w0
  BalanceConfig_c *v263; // x8
  int32_t v264; // w0
  BalanceConfig_c *v265; // x8
  System_String_o *v266; // x0
  System_String_o *v267; // x21
  __int64 v268; // x1
  __int64 v269; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v270; // x21
  BalanceConfig___c_c *v271; // x8
  struct BalanceConfig___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__218_0; // x22
  Il2CppObject *v274; // x23
  struct BalanceConfig___c_StaticFields *v275; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v276; // x0
  System_Int32_array *v277; // x0
  BalanceConfig_c *v278; // x8
  System_Int32_array *v279; // x21
  struct System_Int32_array **p_PresentBoxFilterSvtEquipMaterial; // x0
  int32_t v281; // w0
  int32_t v282; // w21
  BalanceConfig_c *v283; // x0
  int32_t v284; // w0
  int32_t v285; // w21
  BalanceConfig_c *v286; // x0
  int32_t v287; // w0
  BalanceConfig_c *v288; // x8
  int32_t v289; // w21
  System_Int32_array *v290; // x1
  struct System_Int32_array **p_ReprintLastWarRaidEventIdList; // x0
  System_Int32_array *v292; // x1
  struct System_Int32_array **p_EventTowerFadeOutDelayTime; // x0
  System_Array_o *v294; // x21
  BalanceConfig_c *v295; // x0
  _QWORD *v296; // x0
  int32_t v297; // w0
  BalanceConfig_c *v298; // x8
  int v299; // w21
  System_Int32_array *v300; // x1
  struct System_Int32_array **p_EventBoardGameDiceButtonPostion; // x0
  unsigned int v302; // w8
  __int64 v303; // x21
  BalanceConfig_c *v304; // x0
  struct System_Int32_array **v305; // x0
  System_Int32_array *v306; // x0
  BalanceConfig_c *v307; // x8
  System_Int32_array *v308; // x21
  struct System_Int32_array **p_MainInterludeWarIdOnMaterial; // x0
  __int64 v310; // x21
  BalanceConfig_c *v311; // x0
  struct System_Int32_array **v312; // x0
  System_Int32_array *v313; // x0
  BalanceConfig_c *v314; // x8
  System_Int32_array *v315; // x21
  struct System_Int32_array **p_EventBoardGameMapIdList; // x0
  System_String_o *v317; // x21
  BalanceConfig_c *v318; // x0
  struct System_String_o **p_OrdealCallClearBgmName; // x0
  System_Array_o *v320; // x21
  System_Int32_array *v321; // x0
  BalanceConfig_c *v322; // x8
  System_Int32_array *v323; // x21
  struct System_Int32_array **p_consumeStormPodSpotId; // x0
  System_Int32_array *v325; // x1
  struct System_Int32_array **p_StormPodHelpIds; // x0
  System_String_array *ValueStringArray; // x1
  struct System_String_array **p_legacyAspectMovies; // x0
  System_Int32_array *v329; // x1
  struct System_Int32_array **p_fullScreenNPChrs; // x0
  System_Int32_array *v331; // x1
  struct System_Int32_array **p_fullScreenNPSeqIds; // x0
  System_String_o *v333; // x1
  struct System_String_o **p_IOS_ExaminationNewsUrl; // x0
  struct BalanceConfig_StaticFields *v335; // x9
  struct System_String_o **v336; // x0
  __int64 v337; // x1
  int32_t v338; // w0
  BalanceConfig_c *v339; // x8
  int32_t v340; // w21
  System_String_array *v341; // x1
  struct System_String_array **p_UIStandFigureROffsetEffectNames; // x0
  System_String_array *v343; // x1
  struct System_String_array **p_UIStandFigureROffsetImages; // x0
  BalanceConfig_c *v345; // x0
  __int64 v346; // x21
  __int64 v347; // x1
  __int64 v348; // x1
  __int64 v349; // x1
  __int64 v350; // x1
  __int64 v351; // x1
  __int64 v352; // x1
  __int64 v353; // x1
  BalanceConfig_c *v354; // x0
  struct System_String_array **v355; // x0
  __int64 v356; // x21
  __int64 v357; // x1
  __int64 v358; // x1
  __int64 v359; // x1
  __int64 v360; // x1
  __int64 v361; // x1
  __int64 v362; // x1
  __int64 v363; // x1
  __int64 v364; // x1
  __int64 v365; // x1
  __int64 v366; // x1
  __int64 v367; // x1
  __int64 v368; // x1
  __int64 v369; // x1
  __int64 v370; // x1
  __int64 v371; // x1
  __int64 v372; // x1
  __int64 v373; // x1
  __int64 v374; // x1
  BalanceConfig_c *v375; // x0
  struct System_String_array **v376; // x0
  int32_t v377; // w0
  BalanceConfig_c *v378; // x8
  int32_t v379; // w21
  bool v380; // w9
  int32_t v381; // w0
  BalanceConfig_c *v382; // x8
  int32_t v383; // w0
  BalanceConfig_c *v384; // x8
  int32_t v385; // w0
  BalanceConfig_c *v386; // x8
  int32_t v387; // w0
  BalanceConfig_c *v388; // x8
  System_Int32_array *v389; // x1
  struct System_Int32_array **p_MainChaptersWithEventId; // x0
  int32_t v391; // w0
  BalanceConfig_c *v392; // x8
  System_Int32_array *v393; // x1
  struct System_Int32_array **p_TreasureDevicesForcedOpenEffect; // x0
  System_Int32_array *v395; // x1
  struct System_Int32_array **p_HeroineTreasureDeviceRankUpEffects; // x0
  int32_t v397; // w0
  BalanceConfig_c *v398; // x8
  int32_t v399; // w0
  BalanceConfig_c *v400; // x8
  System_Int32_array *v401; // x1
  struct System_Int32_array **p_Extra1SortOrderClassIds; // x0
  System_Int32_array *v403; // x1
  struct System_Int32_array **p_Extra2SortOrderClassIds; // x0
  int32_t v405; // w0
  BalanceConfig_c *v406; // x8
  int32_t v407; // w0
  BalanceConfig_c *v408; // x8
  System_Int32_array *v409; // x1
  struct System_Int32_array **p_NotUIChangeMapIds; // x0
  System_Int32_array *v411; // x1
  struct System_Int32_array **p_LimitSealedDialogMaxLimitOpenIds; // x0
  System_Int32_array *v413; // x1
  struct System_Int32_array **p_OrdealCallChapterFolderEventUIDispWarIds; // x0
  System_Int32_array *v415; // x1
  struct System_Int32_array **p_RecoveryFatigueDelayedChangeBgEvents; // x0
  System_Int32_array *v417; // x1
  struct System_Int32_array **p_noneDisplayFreeQuestMaterial; // x0
  System_Int32_array *v419; // x1
  struct System_Int32_array **p_NotSendTrackEventAtWarIds; // x0
  int32_t v421; // w0
  BalanceConfig_c *v422; // x8
  System_Int32_array *v423; // x1
  struct System_Int32_array **p_NotRequiredPlayWarIds; // x0
  bool v425; // w9
  __int64 v426; // x0
  __int64 v427; // x0
  float result; // [xsp+Ch] [xbp-54h] BYREF
  System_RuntimeFieldHandle_o v429; // 0:w1.4
  System_RuntimeFieldHandle_o v430; // 0:w1.4

  if ( (byte_421161B & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v1);
    sub_B0D8A4(&char___TypeInfo, v2);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ConstantLongMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ConstantMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ConstantStrMaster___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_string__int___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B0D8A4(&Method_System_Func_string__int___ctor__, v8);
    sub_B0D8A4(&System_Func_string__int__TypeInfo, v9);
    sub_B0D8A4(&int___TypeInfo, v10);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v11);
    sub_B0D8A4(&System_Math_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B0D8A4(&string___TypeInfo, v14);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__84DF4B72A51E01473BC25693E526BC603A140C4300062B4A7F64A9F7D00ABB95,
      v15);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__A1FBA00A0F8840358C0A54605FFD365F75E3A3D7AFF25F48F474C4E89BB0B37D,
      v16);
    sub_B0D8A4(&Method_BalanceConfig___c__Initialize_b__218_0__, v17);
    sub_B0D8A4(&BalanceConfig___c_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_8724/*"MAX_USER_ITEM"*/, v19);
    sub_B0D8A4(&StringLiteral_8291/*"JEKYLL_SVT_ID"*/, v20);
    sub_B0D8A4(&StringLiteral_1101/*"1053912:100:0"*/, v21);
    sub_B0D8A4(&StringLiteral_13492/*"TREASURE_DEVICES_FORCED_OPEN_EFFECT"*/, v22);
    sub_B0D8A4(&StringLiteral_12177/*"SHOP_DETAIL_CHECK_DIALOG_FONT_SIZE"*/, v23);
    sub_B0D8A4(&StringLiteral_8422/*"LIMIT_SEALED_DIALOG_MAX_LIMIT_OPEN_IDS"*/, v24);
    sub_B0D8A4(&StringLiteral_8723/*"MAX_USER_COMMAND_CODE"*/, v25);
    sub_B0D8A4(&StringLiteral_9865/*"OTHER_IMAGE_LIMIT_COUNT"*/, v26);
    sub_B0D8A4(&StringLiteral_8648/*"MASHU_SVT_ID3"*/, v27);
    sub_B0D8A4(&StringLiteral_4613/*"DISABLE_FRIENDSHIP_EXCEED"*/, v28);
    sub_B0D8A4(&StringLiteral_12439/*"STORMPOD_HELP_IDS"*/, v29);
    sub_B0D8A4(&StringLiteral_11102/*"REPRINT_LAST_WAR_RAID_EVENT_ID_LIST"*/, v30);
    sub_B0D8A4(&StringLiteral_16853/*"bit_result_bond"*/, v31);
    sub_B0D8A4(&StringLiteral_8715/*"MAX_MANA"*/, v32);
    sub_B0D8A4(&StringLiteral_5582/*"EVENT_BOARD_GAME_DICE_BUTTON_POS"*/, v33);
    sub_B0D8A4(&StringLiteral_1203/*"5047002:100:0"*/, v34);
    sub_B0D8A4(&StringLiteral_5755/*"EVENT_TOWER_FADEOUT_PLAY_TIME"*/, v35);
    sub_B0D8A4(&StringLiteral_9334/*"NONE_DISPLAY_FREE_QUEST_MATERIAL"*/, v36);
    sub_B0D8A4(&StringLiteral_1100/*"1053911:100:0"*/, v37);
    sub_B0D8A4(&StringLiteral_1099/*"1053910:100:0"*/, v38);
    sub_B0D8A4(&StringLiteral_7471/*"IS_WAR_BOARD_AI_FILTER_WASTE_ROUTE"*/, v39);
    sub_B0D8A4(&StringLiteral_19306/*"https://view.fate-go.jp/"*/, v40);
    sub_B0D8A4(&StringLiteral_7129/*"HYDE_SVT_ID"*/, v41);
    sub_B0D8A4(&StringLiteral_9759/*"OBERON_CHOCO_SVT_ID"*/, v42);
    sub_B0D8A4(&StringLiteral_6370/*"FIX_MAIN_SUPPORT_DECK_NUM"*/, v43);
    sub_B0D8A4(&StringLiteral_8646/*"MASHU_SVT_ID1"*/, v44);
    sub_B0D8A4(&StringLiteral_3212/*"COMBINE_SERVANT_SKILL_IDS"*/, v45);
    sub_B0D8A4(&StringLiteral_1096/*"1053900:100:0"*/, v46);
    sub_B0D8A4(&StringLiteral_9856/*"ORT_FIRST_QUEST_ID"*/, v47);
    sub_B0D8A4(&StringLiteral_8736/*"MEMORY_DECK_LIMIT_BY_QUEST"*/, v48);
    sub_B0D8A4(&StringLiteral_5585/*"EVENT_BOARD_GAME_MAP_ID_LIST"*/, v49);
    sub_B0D8A4(&StringLiteral_9389/*"NPC_FRIEND_POINT"*/, v50);
    sub_B0D8A4(&StringLiteral_3000/*"CLASS_BOARD_2D_CAMERA_DEFAULT_SIZE"*/, v51);
    sub_B0D8A4(&StringLiteral_1201/*"5047000:100:0"*/, v52);
    sub_B0D8A4(&StringLiteral_11575/*"SAME_CLASS_MULI_EXP"*/, v53);
    sub_B0D8A4(&StringLiteral_8709/*"MAX_EVENT_ACTIVITY_POINT"*/, v54);
    sub_B0D8A4(&StringLiteral_1171/*"3D_MAP_CAMERA_MOVE_EASING_TYPE"*/, v55);
    sub_B0D8A4(&StringLiteral_9296/*"NEED_REBOOT_TIME"*/, v56);
    sub_B0D8A4(&StringLiteral_9853/*"ORDEAL_CALL_CHAPTER_FOLDER_EVENT_UI_DISP_WAR_IDS"*/, v57);
    sub_B0D8A4(&StringLiteral_6467/*"FREE_GACHA_RESET_AT"*/, v58);
    sub_B0D8A4(&StringLiteral_8727/*"MAX_USER_SVT_EQUIP"*/, v59);
    sub_B0D8A4(&StringLiteral_11608/*"SCENARIO_SPEED_HIGH"*/, v60);
    sub_B0D8A4(&StringLiteral_6501/*"FRIEND_POINT"*/, v61);
    sub_B0D8A4(&StringLiteral_1093/*"1053000:100:0"*/, v62);
    sub_B0D8A4(&StringLiteral_16868/*"bit_result_servant"*/, v63);
    sub_B0D8A4(&StringLiteral_5773/*"EXCLUSIVE_NPC_SERVANT_ID_START"*/, v64);
    sub_B0D8A4(&StringLiteral_8716/*"MAX_NEAR_PRESENT_OFFSET_NUM"*/, v65);
    sub_B0D8A4(&StringLiteral_11090/*"RECOVERY_FATIGUE_DELAYED_CHANGE_BG_EVENTS"*/, v66);
    sub_B0D8A4(&StringLiteral_10488/*"POWERUP_QUEST_WAR_ID"*/, v67);
    sub_B0D8A4(&StringLiteral_1202/*"5047001:100:0"*/, v68);
    sub_B0D8A4(&StringLiteral_12368/*"STAND_FIGURE_R_OFFSET_EFFECT_IMAGES"*/, v69);
    sub_B0D8A4(&StringLiteral_3236/*"COMMAND_CARD_PRM_UP_MAX"*/, v70);
    sub_B0D8A4(&StringLiteral_12371/*"STARTING_MEMBER_FRIENDSHIP_RATE"*/, v71);
    sub_B0D8A4(&StringLiteral_9862/*"ORT_THIRD_FORM_ID"*/, v72);
    sub_B0D8A4(&StringLiteral_12369/*"STAND_FIGURE_R_OFFSET_EFFECT_NAMES"*/, v73);
    sub_B0D8A4(&StringLiteral_1098/*"1053902:100:0"*/, v74);
    sub_B0D8A4(&StringLiteral_8649/*"MASHU_TD_GRADE_UP_QUEST_ID"*/, v75);
    sub_B0D8A4(&StringLiteral_8722/*"MAX_STONE"*/, v76);
    sub_B0D8A4(&StringLiteral_8711/*"MAX_FRIENDPOINT"*/, v77);
    sub_B0D8A4(&StringLiteral_9373/*"NOT_UI_CHANGE_MAP_IDS"*/, v78);
    sub_B0D8A4(&StringLiteral_6350/*"FES_WAR_ID"*/, v79);
    sub_B0D8A4(&StringLiteral_9860/*"ORT_LATE_QUEST_ID"*/, v80);
    sub_B0D8A4(&StringLiteral_16869/*"bit_result_skill"*/, v81);
    sub_B0D8A4(&StringLiteral_9857/*"ORT_LATE_PHASE_BREAK"*/, v82);
    sub_B0D8A4(&StringLiteral_16854/*"bit_result_command_card_exceed"*/, v83);
    sub_B0D8A4(&StringLiteral_3005/*"CLASS_BOARD_CAMERA_SELECT_MOVE_MAX_DISTANCE"*/, v84);
    sub_B0D8A4(&StringLiteral_3006/*"CLASS_BOARD_CAMERA_SELECT_SEC_MAX"*/, v85);
    sub_B0D8A4(&StringLiteral_8726/*"MAX_USER_SVT"*/, v86);
    sub_B0D8A4(&StringLiteral_9771/*"ONE_ACT"*/, v87);
    sub_B0D8A4(&StringLiteral_6369/*"FIX_EVENT_SUPPORT_DECK_NUM"*/, v88);
    sub_B0D8A4(&StringLiteral_15379/*"WAR_BOARD_EVAL_FACTORS_AFFECT_RATIO"*/, v89);
    sub_B0D8A4(&StringLiteral_6469/*"FRIENDPOINT_BOOST_ITEM_EFFECT_ID"*/, v90);
    sub_B0D8A4(&StringLiteral_16858/*"bit_result_friendship_exceed"*/, v91);
    sub_B0D8A4(&StringLiteral_8650/*"MASHU_TD_GRADE_UP_QUEST_PHASE"*/, v92);
    sub_B0D8A4(&StringLiteral_11108/*"REQUEST_TOP_HOME_EXPIRATION_DATE_SEC_UPDATE_EVENT_MAP"*/, v93);
    sub_B0D8A4(&StringLiteral_3004/*"CLASS_BOARD_CAMERA_SELECT_EASING_TYPE"*/, v94);
    sub_B0D8A4(&StringLiteral_7465/*"IS_ENABLE_OLD_BLOCK_SHORTEST_ROUTE"*/, v95);
    sub_B0D8A4(&StringLiteral_8626/*"MAIN_CHAPTERS_WITH_EVENT_ID"*/, v96);
    sub_B0D8A4(&StringLiteral_1097/*"1053901:100:0"*/, v97);
    sub_B0D8A4(&StringLiteral_16855/*"bit_result_extraskill"*/, v98);
    sub_B0D8A4(&StringLiteral_1204/*"5047900:100:0"*/, v99);
    sub_B0D8A4(&StringLiteral_9773/*"ONE_RP"*/, v100);
    sub_B0D8A4(&StringLiteral_8729/*"MAX_USER_SVT_STORAGE"*/, v101);
    sub_B0D8A4(&StringLiteral_9859/*"ORT_LATE_PHASE_SECOND_FORM"*/, v102);
    sub_B0D8A4(&StringLiteral_3370/*"CONSUME_STORMPOD_SPOT_ID"*/, v103);
    sub_B0D8A4(&StringLiteral_2553/*"BEFORE_CHANGE_FREE_DRAW_NUM"*/, v104);
    sub_B0D8A4(&StringLiteral_7470/*"IS_WAR_BOARD_AI_FILTER_NOT_ACTION"*/, v105);
    sub_B0D8A4(&StringLiteral_2931/*"CAMPAIGN_RESET_AT"*/, v106);
    sub_B0D8A4(&StringLiteral_11030/*"RAID_DEFEATED_EFFECT_TIME"*/, v107);
    sub_B0D8A4(&StringLiteral_6551/*"FULL_SCREEN_NP_CHRS"*/, v108);
    sub_B0D8A4(&StringLiteral_6389/*"FOLLOWER_REFRESH_RESET_TIME"*/, v109);
    sub_B0D8A4(&StringLiteral_3042/*"CLASS_BOARD_RELEASE_QUEST_ID"*/, v110);
    sub_B0D8A4(&StringLiteral_6422/*"FOLLOW_NUM"*/, v111);
    sub_B0D8A4(&StringLiteral_2927/*"CAMERA_2D_RESET_DURATION"*/, v112);
    sub_B0D8A4(&StringLiteral_12417/*"STONE_FRAGMENT_EXCHANGE_NOTICE_MAX"*/, v113);
    sub_B0D8A4(&StringLiteral_7473/*"ITEM_ID_QP"*/, v114);
    sub_B0D8A4(&StringLiteral_12604/*"SWIMSUIT_MELT_SVT_ID"*/, v115);
    sub_B0D8A4(&StringLiteral_7067/*"HEROINE_LIMIT_COUNT_ORTINAX_REFURBISHED"*/, v116);
    sub_B0D8A4(&StringLiteral_16865/*"bit_result_noble"*/, v117);
    sub_B0D8A4(&StringLiteral_5541/*"EQUIP_GET_EFFECT_ID"*/, v118);
    sub_B0D8A4(&StringLiteral_9360/*"NOT_FRIEND_POINT"*/, v119);
    sub_B0D8A4(&StringLiteral_5587/*"EVENT_BOARD_GAME_NEXT_BOARD_QUEST_ID"*/, v120);
    sub_B0D8A4(&StringLiteral_9858/*"ORT_LATE_PHASE_DEAD"*/, v121);
    sub_B0D8A4(&StringLiteral_8707/*"MAX_BLACK_LIST_NUM"*/, v122);
    sub_B0D8A4(&StringLiteral_8718/*"MAX_PRESENT_RECEIVE_NUM"*/, v123);
    sub_B0D8A4(&StringLiteral_15156/*"VALENTINE_RELEASE_AT"*/, v124);
    sub_B0D8A4(&StringLiteral_8672/*"MASTER_MISSION_SVT_ID1"*/, v125);
    sub_B0D8A4(&StringLiteral_8470/*"LOSTBELT6_CLEAR_QUEST_ID"*/, v126);
    sub_B0D8A4(&StringLiteral_5588/*"EVENT_BOARD_GAME_NEXT_ROUND_QUEST_ID"*/, v127);
    sub_B0D8A4(&StringLiteral_11107/*"REQUEST_RAID_UPDATE_EVENT_MAP"*/, v128);
    sub_B0D8A4(&StringLiteral_12409/*"STATUS_UP_ADJUST_ATK"*/, v129);
    sub_B0D8A4(&StringLiteral_1672/*"AFTRE_CHANGE_FREE_DRAW_NUM"*/, v130);
    sub_B0D8A4(&StringLiteral_1173/*"3D_MAP_CAMERA_MOVE_TIME_CONSTANT"*/, v131);
    sub_B0D8A4(&StringLiteral_6419/*"FOLLOW_FRIEND_POINT"*/, v132);
    sub_B0D8A4(&StringLiteral_7469/*"IS_WAR_BOARD_AI_CALC_EVAL_SUM"*/, v133);
    sub_B0D8A4(&StringLiteral_8713/*"MAX_FRIEND_HISTORY_NUM"*/, v134);
    sub_B0D8A4(&StringLiteral_11610/*"SCENARIO_SPEED_STEP"*/, v135);
    sub_B0D8A4(&StringLiteral_5754/*"EVENT_TOWER_FADEOUT_DELAY_TIME"*/, v136);
    sub_B0D8A4(&StringLiteral_8462/*"LOGIN_DAY"*/, v137);
    sub_B0D8A4(&StringLiteral_5485/*"ENABLE_SERIAL_CODE"*/, v138);
    sub_B0D8A4(&StringLiteral_8682/*"MATERIAL_MAIN_INTERLUDE_WAR_ID"*/, v139);
    sub_B0D8A4(&StringLiteral_5812/*"EXTRA2_SORT_ORDER_CLASS_IDS"*/, v140);
    sub_B0D8A4(&StringLiteral_6849/*"GACHA_DAILY_MAX_DRAW_NUM_RESET_AT"*/, v141);
    sub_B0D8A4(&StringLiteral_13480/*"TREASUREDEVICE_ID_MASHU3"*/, v142);
    sub_B0D8A4(&StringLiteral_8463/*"LOGIN_RESET_AT"*/, v143);
    sub_B0D8A4(&StringLiteral_1205/*"5047901:100:0"*/, v144);
    sub_B0D8A4(&StringLiteral_1626/*"ACCOUNTING_INITIALIZE_TIMEOUT"*/, v145);
    sub_B0D8A4(&StringLiteral_1208/*"5047911:100:0"*/, v146);
    sub_B0D8A4(&StringLiteral_7466/*"IS_EVENT_POINT_MENU"*/, v147);
    sub_B0D8A4(&StringLiteral_10512/*"PRESENT_BOX_FILTER_SVT_EQUIP_MATERIAL"*/, v148);
    sub_B0D8A4(&StringLiteral_11028/*"RACE_REWARD_RANK_MAX"*/, v149);
    sub_B0D8A4(&StringLiteral_9372/*"NOT_SEND_TRACK_EVENT_AT_WAR_IDS"*/, v150);
    sub_B0D8A4(&StringLiteral_8647/*"MASHU_SVT_ID2"*/, v151);
    sub_B0D8A4(&StringLiteral_11609/*"SCENARIO_SPEED_LOW"*/, v152);
    sub_B0D8A4(&StringLiteral_9854/*"ORDEAL_CALL_CLEAR_BGM_NAME"*/, v153);
    sub_B0D8A4(&StringLiteral_8720/*"MAX_RARE_PRI"*/, v154);
    sub_B0D8A4(&StringLiteral_5811/*"EXTRA1_SORT_ORDER_CLASS_IDS"*/, v155);
    sub_B0D8A4(&StringLiteral_2636/*"BP_EXPRESSION"*/, v156);
    sub_B0D8A4(&StringLiteral_8721/*"MAX_RP"*/, v157);
    sub_B0D8A4(&StringLiteral_12410/*"STATUS_UP_ADJUST_HP"*/, v158);
    sub_B0D8A4(&StringLiteral_9772/*"ONE_COMMAND_SPELL"*/, v159);
    sub_B0D8A4(&StringLiteral_14808/*"USE_TERMS_LATEST_VERSION"*/, v160);
    sub_B0D8A4(&StringLiteral_3117/*"CLOSE_SECRET_TREASURE_DEVICE_QUEST_CLEAR"*/, v161);
    sub_B0D8A4(&StringLiteral_10548/*"PRESENT_VALID_TIME"*/, v162);
    sub_B0D8A4(&StringLiteral_8659/*"MASTER_MISSION_ALERT_TIME"*/, v163);
    sub_B0D8A4(&StringLiteral_2576/*"BIRTHDAY_BEFORE_VALENTINE_SVT_ID"*/, v164);
    sub_B0D8A4(&StringLiteral_6552/*"FULL_SCREEN_NP_SEQ_IDS"*/, v165);
    sub_B0D8A4(&StringLiteral_8710/*"MAX_EVENT_POINT"*/, v166);
    sub_B0D8A4(&StringLiteral_8450/*"LOCATION_REWARD_DLG_COLUMN"*/, v167);
    sub_B0D8A4(&StringLiteral_8708/*"MAX_COMMAND_SPELL"*/, v168);
    sub_B0D8A4(&StringLiteral_8628/*"MAIN_INTERLUDE_WAR_ID"*/, v169);
    sub_B0D8A4(&StringLiteral_7335/*"IOS_EXAMINATION_NEWS_URL"*/, v170);
    sub_B0D8A4(&StringLiteral_1094/*"1053001:100:0"*/, v171);
    sub_B0D8A4(&StringLiteral_12523/*"SUPPORT_DECK_MAX"*/, v172);
    sub_B0D8A4(&StringLiteral_9861/*"ORT_SECONDE_FORM_ID"*/, v173);
    sub_B0D8A4(&StringLiteral_1172/*"3D_MAP_CAMERA_MOVE_TIME_COEFFICIENT"*/, v174);
    sub_B0D8A4(&StringLiteral_7285/*"IGNORE_FORM_CHANGE_SVT_ID"*/, v175);
    sub_B0D8A4(&StringLiteral_8725/*"MAX_USER_LV"*/, v176);
    sub_B0D8A4(&StringLiteral_14807/*"USE_TERMS_AGREEMENT_REQUIERD_APP_VERSION"*/, v177);
    sub_B0D8A4(&StringLiteral_8712/*"MAX_FRIENDPOINT_BOOST_ITEM_USE"*/, v178);
    sub_B0D8A4(&StringLiteral_8728/*"MAX_USER_SVT_EQUIP_STORAGE"*/, v179);
    sub_B0D8A4(&StringLiteral_1207/*"5047910:100:0"*/, v180);
    sub_B0D8A4(&StringLiteral_8719/*"MAX_QP"*/, v181);
    sub_B0D8A4(&StringLiteral_7467/*"IS_IOS_EXAMINATION"*/, v182);
    sub_B0D8A4(&StringLiteral_9367/*"NOT_REQUIRED_WAR_IDS"*/, v183);
    sub_B0D8A4(&StringLiteral_3007/*"CLASS_BOARD_CAMERA_SELECT_SEC_MIN"*/, v184);
    sub_B0D8A4(&StringLiteral_6466/*"FREE_DRAW_NUM_CHANGE_AT"*/, v185);
    sub_B0D8A4(&StringLiteral_5625/*"EVENT_DAILY_POINT_RESET_AT"*/, v186);
    sub_B0D8A4(&StringLiteral_1209/*"5047912:100:0"*/, v187);
    sub_B0D8A4(&StringLiteral_1095/*"1053002:100:0"*/, v188);
    sub_B0D8A4(&StringLiteral_4584/*"DECK_MAX"*/, v189);
    sub_B0D8A4(&StringLiteral_10557/*"PROLOGUE_QUEST_ID"*/, v190);
    sub_B0D8A4(&StringLiteral_3118/*"CLOSE_SECRET_TREASURE_DEVICE_SVT_GET"*/, v191);
    sub_B0D8A4(&StringLiteral_12441/*"STORY_WAR_ID"*/, v192);
    sub_B0D8A4(&StringLiteral_8717/*"MAX_PRESENT_BOX_NUM"*/, v193);
    sub_B0D8A4(&StringLiteral_11607/*"SCENARIO_SPEED_DEFAULT"*/, v194);
    sub_B0D8A4(&StringLiteral_13466/*"TITLE_FLOW_OLD"*/, v195);
    sub_B0D8A4(&StringLiteral_1174/*"3D_MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE"*/, v196);
    sub_B0D8A4(&StringLiteral_1151/*"20220731_BOOST_RATE_1"*/, v197);
    sub_B0D8A4(&StringLiteral_8392/*"LEGACY_ASPECT_MOVIES"*/, v198);
    sub_B0D8A4(&StringLiteral_3237/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, v199);
    sub_B0D8A4(&StringLiteral_1206/*"5047902:100:0"*/, v200);
    sub_B0D8A4(&StringLiteral_5808/*"EXPIRATION_DATE"*/, v201);
    sub_B0D8A4(&StringLiteral_9855/*"ORDEAL_CALL_WAR_ID"*/, v202);
    sub_B0D8A4(&StringLiteral_7068/*"HEROINE_TREASURE_DEVICE_RANKUP_EFFECTS"*/, v203);
    byte_421161B = 1;
  }
  result = 0.0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_286;
  MasterData_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ConstantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_286;
  v206 = (ConstantLongMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ConstantLongMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_286;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_286;
  v207 = (ConstantStrMaster_o *)Instance;
  Value_27713676 = ConstantMaster__GetValue_27713676(
                     MasterData_WarQuestSelectionMaster,
                     (System_String_o *)StringLiteral_1151/*"20220731_BOOST_RATE_1"*/,
                     200,
                     0LL);
  v209 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v209 = BalanceConfig_TypeInfo;
  }
  v209->static_fields->CriticalRateToAddByQuickFirstBonus = Value_27713676;
  BalanceConfig_TypeInfo->static_fields->QpMax = ConstantMaster__GetValue(
                                                   MasterData_WarQuestSelectionMaster,
                                                   (System_String_o *)StringLiteral_8719/*"MAX_QP"*/,
                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ManaMax = ConstantMaster__GetValue(
                                                     MasterData_WarQuestSelectionMaster,
                                                     (System_String_o *)StringLiteral_8715/*"MAX_MANA"*/,
                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->RarePriMax = ConstantMaster__GetValue(
                                                        MasterData_WarQuestSelectionMaster,
                                                        (System_String_o *)StringLiteral_8720/*"MAX_RARE_PRI"*/,
                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->StoneMax = ConstantMaster__GetValue(
                                                      MasterData_WarQuestSelectionMaster,
                                                      (System_String_o *)StringLiteral_8722/*"MAX_STONE"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->FriendPointMax = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_8711/*"MAX_FRIENDPOINT"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->UserLevelMax = ConstantMaster__GetValue(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_8725/*"MAX_USER_LV"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->UserItemMax = ConstantMaster__GetValue(
                                                         MasterData_WarQuestSelectionMaster,
                                                         (System_String_o *)StringLiteral_8724/*"MAX_USER_ITEM"*/,
                                                         0LL);
  Instance = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_8724/*"MAX_USER_ITEM"*/, 0LL);
  v210 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->UserEventItemMax = Instance;
  if ( !v206 )
    goto LABEL_286;
  Value_27713100 = ConstantLongMaster__GetValue_27713100(
                     v206,
                     (System_String_o *)StringLiteral_8710/*"MAX_EVENT_POINT"*/,
                     v210->static_fields->UserPointEventMax,
                     0LL);
  v212 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->UserPointEventMax = Value_27713100;
  BalanceConfig_TypeInfo->static_fields->UserEventActivityPointMax = ConstantLongMaster__GetValue_27713100(
                                                                       v206,
                                                                       (System_String_o *)StringLiteral_8709/*"MAX_EVENT_ACTIVITY_POINT"*/,
                                                                       v212->static_fields->UserEventActivityPointMax,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxMax = ConstantMaster__GetValue(
                                                           MasterData_WarQuestSelectionMaster,
                                                           (System_String_o *)StringLiteral_8717/*"MAX_PRESENT_BOX_NUM"*/,
                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxCheckMax = ConstantMaster__GetValue(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (System_String_o *)StringLiteral_8718/*"MAX_PRESENT_RECEIVE_NUM"*/,
                                                                0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxValidTime = ConstantMaster__GetValue(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 (System_String_o *)StringLiteral_10548/*"PRESENT_VALID_TIME"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxNearMaxOffset = ConstantMaster__GetValue(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_8716/*"MAX_NEAR_PRESENT_OFFSET_NUM"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->ServantFrameMax = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8726/*"MAX_USER_SVT"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantEquipFrameMax = ConstantMaster__GetValue(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  (System_String_o *)StringLiteral_8727/*"MAX_USER_SVT_EQUIP"*/,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCodeFrameMax = ConstantMaster__GetValue(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 (System_String_o *)StringLiteral_8723/*"MAX_USER_COMMAND_CODE"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->DeckMax = ConstantMaster__GetValue(
                                                     MasterData_WarQuestSelectionMaster,
                                                     (System_String_o *)StringLiteral_4584/*"DECK_MAX"*/,
                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->SupportDeckMax = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_12523/*"SUPPORT_DECK_MAX"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_6370/*"FIX_MAIN_SUPPORT_DECK_NUM"*/,
                                                                   0LL);
  Value = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_6369/*"FIX_EVENT_SUPPORT_DECK_NUM"*/, 0LL);
  v214 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum = Value;
  v214->static_fields->SupportMemberMax = v214->static_fields->SupportDeckMemberMax
                                        * v214->static_fields->SupportDeckMax;
  BalanceConfig_TypeInfo->static_fields->UserServantStorageMax = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_8729/*"MAX_USER_SVT_STORAGE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->UserServantEquipStorageMax = ConstantMaster__GetValue(
                                                                        MasterData_WarQuestSelectionMaster,
                                                                        (System_String_o *)StringLiteral_8728/*"MAX_USER_SVT_EQUIP_STORAGE"*/,
                                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameActRecoverCost = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_9771/*"ONE_ACT"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameRpRecoverCost = ConstantMaster__GetValue(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  (System_String_o *)StringLiteral_9773/*"ONE_RP"*/,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameRpMax = ConstantMaster__GetValue(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_8721/*"MAX_RP"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointFriend = ConstantMaster__GetValue(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 (System_String_o *)StringLiteral_6501/*"FRIEND_POINT"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointNotFriend = ConstantMaster__GetValue(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_9360/*"NOT_FRIEND_POINT"*/,
                                                                    0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointNpc = ConstantMaster__GetValue(
                                                              MasterData_WarQuestSelectionMaster,
                                                              (System_String_o *)StringLiteral_9389/*"NPC_FRIEND_POINT"*/,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime1 = ConstantMaster__GetValue(
                                                                       MasterData_WarQuestSelectionMaster,
                                                                       (System_String_o *)StringLiteral_8463/*"LOGIN_RESET_AT"*/,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2 = ConstantMaster__GetValue(
                                                                       MasterData_WarQuestSelectionMaster,
                                                                       (System_String_o *)StringLiteral_2931/*"CAMPAIGN_RESET_AT"*/,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->DailyFreeGachaResetTime = ConstantMaster__GetValue(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_6467/*"FREE_GACHA_RESET_AT"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginDay = ConstantMaster__GetValue(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (System_String_o *)StringLiteral_8462/*"LOGIN_DAY"*/,
                                                                0LL);
  v215 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_9296/*"NEED_REBOOT_TIME"*/, 0LL);
  v216 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ServerTimeOverLimit = v215;
  v217 = ManagerConfig_TypeInfo;
  ServerTimeOverLimit = v216->static_fields->ServerTimeOverLimit;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v217 = ManagerConfig_TypeInfo;
  }
  SERVER_TIME_OVER_LIMIT = v217->static_fields->SERVER_TIME_OVER_LIMIT;
  if ( ServerTimeOverLimit < SERVER_TIME_OVER_LIMIT )
  {
    if ( (BYTE3(v217->vtable._0_Equals.methodPtr) & 4) != 0 && !v217->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v217);
      SERVER_TIME_OVER_LIMIT = ManagerConfig_TypeInfo->static_fields->SERVER_TIME_OVER_LIMIT;
    }
    v220 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v220 = BalanceConfig_TypeInfo;
    }
    v220->static_fields->ServerTimeOverLimit = SERVER_TIME_OVER_LIMIT;
  }
  v221 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_11108/*"REQUEST_TOP_HOME_EXPIRATION_DATE_SEC_UPDATE_EVENT_MAP"*/, 0LL);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v222 = System_Math__Max_44559528(1, v221, 0LL);
  v223 = BalanceConfig_TypeInfo;
  v224 = v222;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v223 = BalanceConfig_TypeInfo;
  }
  v223->static_fields->RequestTopHomeExpirationDateSecUpdateEventMap = v224;
  v225 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_11107/*"REQUEST_RAID_UPDATE_EVENT_MAP"*/, 0LL);
  BalanceConfig_TypeInfo->static_fields->RequestRaidUpdateEventMap = System_Math__Max_44559528(1, v225, 0LL);
  BalanceConfig_TypeInfo->static_fields->RaidDefeatedEffectTime = ConstantMaster__GetValue(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_11030/*"RAID_DEFEATED_EFFECT_TIME"*/,
                                                                    0LL);
  BalanceConfig_TypeInfo->static_fields->CommandSpellMax = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8708/*"MAX_COMMAND_SPELL"*/,
                                                             0LL);
  Instance = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_9772/*"ONE_COMMAND_SPELL"*/, 0LL);
  BalanceConfig_TypeInfo->static_fields->CommandSpellRecoverCost = Instance;
  if ( !v207 )
    goto LABEL_286;
  v226 = ConstantStrMaster__GetValue(v207, (System_String_o *)StringLiteral_14807/*"USE_TERMS_AGREEMENT_REQUIERD_APP_VERSION"*/, 0LL);
  p_UseTermsAgreementRequiredAppVersion = &BalanceConfig_TypeInfo->static_fields->UseTermsAgreementRequiredAppVersion;
  *p_UseTermsAgreementRequiredAppVersion = v226;
  sub_B0D840(p_UseTermsAgreementRequiredAppVersion, v226);
  v228 = ConstantStrMaster__GetValue(v207, (System_String_o *)StringLiteral_14808/*"USE_TERMS_LATEST_VERSION"*/, 0LL);
  p_UseTermsLatestVersion = &BalanceConfig_TypeInfo->static_fields->UseTermsLatestVersion;
  *p_UseTermsLatestVersion = v228;
  sub_B0D840(p_UseTermsLatestVersion, v228);
  v230 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_7467/*"IS_IOS_EXAMINATION"*/, 0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsIOS_Examination = v230;
  BalanceConfig_TypeInfo->static_fields->SerialCodeMenuDispFlg = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_5485/*"ENABLE_SERIAL_CODE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk = ConstantMaster__GetValue(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_12409/*"STATUS_UP_ADJUST_ATK"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp = ConstantMaster__GetValue(
                                                              MasterData_WarQuestSelectionMaster,
                                                              (System_String_o *)StringLiteral_12410/*"STATUS_UP_ADJUST_HP"*/,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->SameClassMultiExp = ConstantMaster__getRateValue(
                                                               (System_String_o *)StringLiteral_11575/*"SAME_CLASS_MULI_EXP"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->SameClassExp = ConstantMaster__GetValue(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_11575/*"SAME_CLASS_MULI_EXP"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdJekyll = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8291/*"JEKYLL_SVT_ID"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdHyde = ConstantMaster__GetValue(
                                                           MasterData_WarQuestSelectionMaster,
                                                           (System_String_o *)StringLiteral_7129/*"HYDE_SVT_ID"*/,
                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdSwimsuitMelt = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_12604/*"SWIMSUIT_MELT_SVT_ID"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu1 = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8646/*"MASHU_SVT_ID1"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu2 = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8647/*"MASHU_SVT_ID2"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu3 = ConstantMaster__GetValue_27713676(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8648/*"MASHU_SVT_ID3"*/,
                                                             800102,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMission1 = ConstantMaster__GetValue(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_8672/*"MASTER_MISSION_SVT_ID1"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->TreasureDeviceIdMashu3 = ConstantMaster__GetValue(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_13480/*"TREASUREDEVICE_ID_MASHU3"*/,
                                                                    0LL);
  Instance = sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_286;
  v231 = *(_DWORD *)(Instance + 24);
  if ( !v231 )
    goto LABEL_285;
  *(_DWORD *)(Instance + 32) = 744450;
  if ( v231 == 1 )
    goto LABEL_285;
  *(_DWORD *)(Instance + 36) = 744452;
  ValueArray = ConstantStrMaster__GetValueArray(
                 v207,
                 (System_String_o *)StringLiteral_3212/*"COMBINE_SERVANT_SKILL_IDS"*/,
                 (System_Int32_array *)Instance,
                 0LL);
  p_CombineServantSkillIds = &BalanceConfig_TypeInfo->static_fields->CombineServantSkillIds;
  *p_CombineServantSkillIds = ValueArray;
  sub_B0D840(p_CombineServantSkillIds, ValueArray);
  BalanceConfig_TypeInfo->static_fields->MashuTdGradeUpQuestId = ConstantMaster__GetValue_27713676(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_8649/*"MASHU_TD_GRADE_UP_QUEST_ID"*/,
                                                                   4000100,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->MashuTdGradeUpQuestPhase = ConstantMaster__GetValue_27713676(
                                                                      MasterData_WarQuestSelectionMaster,
                                                                      (System_String_o *)StringLiteral_8650/*"MASHU_TD_GRADE_UP_QUEST_PHASE"*/,
                                                                      3,
                                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdOberonChoco = ConstantMaster__GetValue_27713676(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  (System_String_o *)StringLiteral_9759/*"OBERON_CHOCO_SVT_ID"*/,
                                                                  9808130,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->Lostbelt6ClearQuestId = ConstantMaster__GetValue_27713676(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_8470/*"LOSTBELT6_CLEAR_QUEST_ID"*/,
                                                                   3001009,
                                                                   0LL);
  v234 = ConstantStrMaster__GetValue(v207, (System_String_o *)StringLiteral_2576/*"BIRTHDAY_BEFORE_VALENTINE_SVT_ID"*/, 0LL);
  v236 = BasicHelper__Convert2IntArray(v234, 0x2Cu, v235);
  p_ServantIdsBirthdayBeforeValentine = &BalanceConfig_TypeInfo->static_fields->ServantIdsBirthdayBeforeValentine;
  *p_ServantIdsBirthdayBeforeValentine = v236;
  sub_B0D840(p_ServantIdsBirthdayBeforeValentine, v236);
  v238 = ConstantStrMaster__GetValue(v207, (System_String_o *)StringLiteral_7285/*"IGNORE_FORM_CHANGE_SVT_ID"*/, 0LL);
  if ( v238 )
  {
    v240 = BasicHelper__Convert2IntArray(v238, 0x2Cu, v239);
    v241 = BalanceConfig_TypeInfo;
    v242 = v240;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v241 = BalanceConfig_TypeInfo;
    }
    p_ServantIdsIgnoreFormChange = &v241->static_fields->ServantIdsIgnoreFormChange;
    *p_ServantIdsIgnoreFormChange = v242;
    sub_B0D840(p_ServantIdsIgnoreFormChange, v242);
  }
  v244 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_15156/*"VALENTINE_RELEASE_AT"*/, 0LL);
  v245 = BalanceConfig_TypeInfo;
  v246 = v244;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v245 = BalanceConfig_TypeInfo;
  }
  v245->static_fields->VtReleaseAt = v246;
  BalanceConfig_TypeInfo->static_fields->BefFreeDrawNum = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_2553/*"BEFORE_CHANGE_FREE_DRAW_NUM"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->AftFreeDrawNum = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_1672/*"AFTRE_CHANGE_FREE_DRAW_NUM"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->DrawNumChangeTime = ConstantMaster__GetValue(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_6466/*"FREE_DRAW_NUM_CHANGE_AT"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerRefreshRestTime = ConstantMaster__GetValue(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_6389/*"FOLLOWER_REFRESH_RESET_TIME"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->FesWarId = ConstantMaster__GetValue(
                                                      MasterData_WarQuestSelectionMaster,
                                                      (System_String_o *)StringLiteral_6350/*"FES_WAR_ID"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->NoneExpireTime = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_5808/*"EXPIRATION_DATE"*/,
                                                            0LL);
  v247 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_2636/*"BP_EXPRESSION"*/, 0LL);
  BalanceConfig_TypeInfo->static_fields->BpExpresssionType = UnityEngine_Mathf__Clamp_40762168(v247, 0, 1, 0LL);
  BalanceConfig_TypeInfo->static_fields->MaxFriendHistoryNum = ConstantMaster__GetValue(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 (System_String_o *)StringLiteral_8713/*"MAX_FRIEND_HISTORY_NUM"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->MaxBlackListNum = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8707/*"MAX_BLACK_LIST_NUM"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->raceRewardRankMax = ConstantMaster__GetValue(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_11028/*"RACE_REWARD_RANK_MAX"*/,
                                                               0LL);
  v248 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_8659/*"MASTER_MISSION_ALERT_TIME"*/, 0LL);
  v249 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->MstMissionAlertTime = v248;
  BalanceConfig_TypeInfo->static_fields->LocationRewardDlgColumn = ConstantMaster__GetValue_27713676(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_8450/*"LOCATION_REWARD_DLG_COLUMN"*/,
                                                                     v249->static_fields->LocationRewardDlgColumn,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->CloseSecretTreasureDeviceQuestClear = ConstantMaster__GetValue(
                                                                                 MasterData_WarQuestSelectionMaster,
                                                                                 (System_String_o *)StringLiteral_3117/*"CLOSE_SECRET_TREASURE_DEVICE_QUEST_CLEAR"*/,
                                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->CloseSecretTreasureDeviceSvtGet = ConstantMaster__GetValue(
                                                                             MasterData_WarQuestSelectionMaster,
                                                                             (System_String_o *)StringLiteral_3118/*"CLOSE_SECRET_TREASURE_DEVICE_SVT_GET"*/,
                                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ItemIdQp = ConstantMaster__GetValue(
                                                      MasterData_WarQuestSelectionMaster,
                                                      (System_String_o *)StringLiteral_7473/*"ITEM_ID_QP"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->ShopDetailCheckDialogFontSize = ConstantMaster__GetValue_27713676(
                                                                           MasterData_WarQuestSelectionMaster,
                                                                           (System_String_o *)StringLiteral_12177/*"SHOP_DETAIL_CHECK_DIALOG_FONT_SIZE"*/,
                                                                           21,
                                                                           0LL);
  v250 = ConstantStrMaster__GetValue(v207, (System_String_o *)StringLiteral_11610/*"SCENARIO_SPEED_STEP"*/, 0LL);
  if ( System_Single__TryParse(v250, &result, 0LL) )
  {
    v251 = BalanceConfig_TypeInfo;
    v252 = result;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v251 = BalanceConfig_TypeInfo;
    }
    v251->static_fields->ScenarioSpeedStep = v252;
  }
  v253 = ConstantStrMaster__GetValue(v207, (System_String_o *)StringLiteral_11609/*"SCENARIO_SPEED_LOW"*/, 0LL);
  if ( System_Single__TryParse(v253, &result, 0LL) )
  {
    v254 = BalanceConfig_TypeInfo;
    v255 = result;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v254 = BalanceConfig_TypeInfo;
    }
    v254->static_fields->ScenarioSpeedLow = v255;
  }
  v256 = ConstantStrMaster__GetValue(v207, (System_String_o *)StringLiteral_11608/*"SCENARIO_SPEED_HIGH"*/, 0LL);
  if ( System_Single__TryParse(v256, &result, 0LL) )
  {
    v257 = BalanceConfig_TypeInfo;
    v258 = result;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v257 = BalanceConfig_TypeInfo;
    }
    v257->static_fields->ScenarioSpeedHigh = v258;
  }
  v259 = ConstantStrMaster__GetValue(v207, (System_String_o *)StringLiteral_11607/*"SCENARIO_SPEED_DEFAULT"*/, 0LL);
  if ( System_Single__TryParse(v259, &result, 0LL) )
  {
    v260 = BalanceConfig_TypeInfo;
    v261 = result;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v260 = BalanceConfig_TypeInfo;
    }
    v260->static_fields->ScenarioSpeedDefault = v261;
  }
  else
  {
    v260 = BalanceConfig_TypeInfo;
  }
  if ( (BYTE3(v260->vtable._0_Equals.methodPtr) & 4) != 0 && !v260->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v260);
    v260 = BalanceConfig_TypeInfo;
  }
  v262 = ConstantMaster__GetValue_27713676(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_10488/*"POWERUP_QUEST_WAR_ID"*/,
           v260->static_fields->PowerUpQuestWarId,
           0LL);
  v263 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->PowerUpQuestWarId = v262;
  v264 = ConstantMaster__GetValue_27713676(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_1626/*"ACCOUNTING_INITIALIZE_TIMEOUT"*/,
           v263->static_fields->AccountingInitializeTimeOut,
           0LL);
  v265 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->AccountingInitializeTimeOut = v264;
  BalanceConfig_TypeInfo->static_fields->EquipGetEffectId = ConstantMaster__GetValue_27713676(
                                                              MasterData_WarQuestSelectionMaster,
                                                              (System_String_o *)StringLiteral_5541/*"EQUIP_GET_EFFECT_ID"*/,
                                                              v265->static_fields->EquipGetEffectId,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCodeDetachingItemId = ConstantMaster__GetValue_27713676(
                                                                        MasterData_WarQuestSelectionMaster,
                                                                        (System_String_o *)StringLiteral_3237/*"COMMAND_CODE_DETACHING_ITEM_ID"*/,
                                                                        -1,
                                                                        0LL);
  v266 = ConstantStrMaster__GetValue(v207, (System_String_o *)StringLiteral_10512/*"PRESENT_BOX_FILTER_SVT_EQUIP_MATERIAL"*/, 0LL);
  if ( v266 )
  {
    v267 = v266;
    Instance = sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !Instance )
      goto LABEL_286;
    if ( !*(_DWORD *)(Instance + 24) )
      goto LABEL_285;
    *(_WORD *)(Instance + 32) = 44;
    v270 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                  v267,
                                                                  (System_Char_array *)Instance,
                                                                  0LL);
    v271 = BalanceConfig___c_TypeInfo;
    if ( (BYTE3(BalanceConfig___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig___c_TypeInfo);
      v271 = BalanceConfig___c_TypeInfo;
    }
    static_fields = v271->static_fields;
    _9__218_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__218_0;
    if ( !_9__218_0 )
    {
      if ( (BYTE3(v271->vtable._0_Equals.methodPtr) & 4) != 0 && !v271->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v271);
        static_fields = BalanceConfig___c_TypeInfo->static_fields;
      }
      v274 = (Il2CppObject *)static_fields->__9;
      _9__218_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                    System_Func_string__int__TypeInfo,
                                                                                    v268,
                                                                                    v269);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__218_0,
        v274,
        Method_BalanceConfig___c__Initialize_b__218_0__,
        (const MethodInfo_2619564 *)Method_System_Func_string__int___ctor__);
      v275 = BalanceConfig___c_TypeInfo->static_fields;
      v275->__9__218_0 = (struct System_Func_string__int__o *)_9__218_0;
      sub_B0D840(&v275->__9__218_0, _9__218_0);
    }
    v276 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                  v270,
                                                                  (System_Func_TSource__TResult__o *)_9__218_0,
                                                                  (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_string__int___);
    v277 = System_Linq_Enumerable__ToArray_int_(
             v276,
             (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    v278 = BalanceConfig_TypeInfo;
    v279 = v277;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v278 = BalanceConfig_TypeInfo;
    }
    p_PresentBoxFilterSvtEquipMaterial = &v278->static_fields->PresentBoxFilterSvtEquipMaterial;
    *p_PresentBoxFilterSvtEquipMaterial = v279;
    sub_B0D840(p_PresentBoxFilterSvtEquipMaterial, v279);
  }
  v281 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_6422/*"FOLLOW_NUM"*/, 0LL);
  if ( v281 >= 1 )
  {
    v282 = v281;
    v283 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v283 = BalanceConfig_TypeInfo;
    }
    v283->static_fields->FollowNum = v282;
  }
  v284 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_6419/*"FOLLOW_FRIEND_POINT"*/, 0LL);
  if ( v284 >= 1 )
  {
    v285 = v284;
    v286 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v286 = BalanceConfig_TypeInfo;
    }
    v286->static_fields->FollowFriendPoint = v285;
  }
  v287 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_4613/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0LL);
  v288 = BalanceConfig_TypeInfo;
  v289 = v287;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v288 = BalanceConfig_TypeInfo;
  }
  v288->static_fields->DisableFriendshipExceed = v289;
  BalanceConfig_TypeInfo->static_fields->EventDailyPointResetAt = ConstantMaster__GetValue(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_5625/*"EVENT_DAILY_POINT_RESET_AT"*/,
                                                                    0LL);
  v290 = ConstantStrMaster__GetValueArray(v207, (System_String_o *)StringLiteral_11102/*"REPRINT_LAST_WAR_RAID_EVENT_ID_LIST"*/, 0LL, 0LL);
  p_ReprintLastWarRaidEventIdList = &BalanceConfig_TypeInfo->static_fields->ReprintLastWarRaidEventIdList;
  *p_ReprintLastWarRaidEventIdList = v290;
  sub_B0D840(p_ReprintLastWarRaidEventIdList, v290);
  BalanceConfig_TypeInfo->static_fields->PrologueQuestId = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_10557/*"PROLOGUE_QUEST_ID"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCardParamUpMax = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_3236/*"COMMAND_CARD_PRM_UP_MAX"*/,
                                                                   0LL);
  v292 = ConstantStrMaster__GetValueArray(v207, (System_String_o *)StringLiteral_5754/*"EVENT_TOWER_FADEOUT_DELAY_TIME"*/, 0LL, 0LL);
  p_EventTowerFadeOutDelayTime = &BalanceConfig_TypeInfo->static_fields->EventTowerFadeOutDelayTime;
  *p_EventTowerFadeOutDelayTime = v292;
  sub_B0D840(p_EventTowerFadeOutDelayTime, v292);
  if ( !BalanceConfig_TypeInfo->static_fields->EventTowerFadeOutDelayTime )
  {
    v294 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 3LL);
    v429.fields.value = Field__PrivateImplementationDetails__84DF4B72A51E01473BC25693E526BC603A140C4300062B4A7F64A9F7D00ABB95;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v294, v429, 0LL);
    v295 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v295 = BalanceConfig_TypeInfo;
    }
    v296 = &v295->static_fields->EventTowerFadeOutDelayTime;
    *v296 = v294;
    sub_B0D840(v296, v294);
  }
  v297 = ConstantMaster__GetValue_27713676(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_5755/*"EVENT_TOWER_FADEOUT_PLAY_TIME"*/,
           3000,
           0LL);
  v298 = BalanceConfig_TypeInfo;
  v299 = v297;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v298 = BalanceConfig_TypeInfo;
  }
  v298->static_fields->EventTowerFadeOutPlayTime = (float)v299 / 1000.0;
  BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_8712/*"MAX_FRIENDPOINT_BOOST_ITEM_USE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->FriendPointBoostItemEfffectId = ConstantMaster__GetValue_27713676(
                                                                           MasterData_WarQuestSelectionMaster,
                                                                           (System_String_o *)StringLiteral_6469/*"FRIENDPOINT_BOOST_ITEM_EFFECT_ID"*/,
                                                                           3,
                                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->MainInterludeWarId = ConstantMaster__GetValue_27713676(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (System_String_o *)StringLiteral_8628/*"MAIN_INTERLUDE_WAR_ID"*/,
                                                                1004,
                                                                0LL);
  v300 = ConstantStrMaster__GetValueArray(v207, (System_String_o *)StringLiteral_5582/*"EVENT_BOARD_GAME_DICE_BUTTON_POS"*/, 0LL, 0LL);
  p_EventBoardGameDiceButtonPostion = &BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion;
  *p_EventBoardGameDiceButtonPostion = v300;
  sub_B0D840(p_EventBoardGameDiceButtonPostion, v300);
  if ( !BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion )
  {
    Instance = sub_B0D8BC(int___TypeInfo, 3LL);
    if ( !Instance )
      goto LABEL_286;
    v302 = *(_DWORD *)(Instance + 24);
    v303 = Instance;
    if ( v302 > 1 )
    {
      *(_DWORD *)(Instance + 36) = -59;
      if ( v302 != 2 )
      {
        *(_DWORD *)(Instance + 40) = -500;
        v304 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v304 = BalanceConfig_TypeInfo;
        }
        v305 = &v304->static_fields->EventBoardGameDiceButtonPostion;
        *v305 = (struct System_Int32_array *)v303;
        sub_B0D840(v305, v303);
        goto LABEL_108;
      }
    }
LABEL_285:
    v426 = sub_B0D9A8(Instance);
    sub_B0D948(v426, 0LL);
  }
LABEL_108:
  v306 = ConstantStrMaster__GetValueArray(v207, (System_String_o *)StringLiteral_8682/*"MATERIAL_MAIN_INTERLUDE_WAR_ID"*/, 0LL, 0LL);
  v307 = BalanceConfig_TypeInfo;
  v308 = v306;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v307 = BalanceConfig_TypeInfo;
  }
  p_MainInterludeWarIdOnMaterial = &v307->static_fields->MainInterludeWarIdOnMaterial;
  *p_MainInterludeWarIdOnMaterial = v308;
  sub_B0D840(p_MainInterludeWarIdOnMaterial, v308);
  if ( !BalanceConfig_TypeInfo->static_fields->MainInterludeWarIdOnMaterial )
  {
    Instance = sub_B0D8BC(int___TypeInfo, 1LL);
    if ( !Instance )
      goto LABEL_286;
    v310 = Instance;
    if ( !*(_DWORD *)(Instance + 24) )
      goto LABEL_285;
    *(_DWORD *)(Instance + 32) = 307;
    v311 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v311 = BalanceConfig_TypeInfo;
    }
    v312 = &v311->static_fields->MainInterludeWarIdOnMaterial;
    *v312 = (struct System_Int32_array *)v310;
    sub_B0D840(v312, v310);
  }
  v313 = ConstantStrMaster__GetValueArray(v207, (System_String_o *)StringLiteral_5585/*"EVENT_BOARD_GAME_MAP_ID_LIST"*/, 0LL, 0LL);
  v314 = BalanceConfig_TypeInfo;
  v315 = v313;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v314 = BalanceConfig_TypeInfo;
  }
  p_EventBoardGameMapIdList = &v314->static_fields->EventBoardGameMapIdList;
  *p_EventBoardGameMapIdList = v315;
  sub_B0D840(p_EventBoardGameMapIdList, v315);
  BalanceConfig_TypeInfo->static_fields->EventBoardGameNextBoardQuestId = ConstantMaster__GetValue_27713676(
                                                                            MasterData_WarQuestSelectionMaster,
                                                                            (System_String_o *)StringLiteral_5587/*"EVENT_BOARD_GAME_NEXT_BOARD_QUEST_ID"*/,
                                                                            94047745,
                                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->EventBoardGameNextRoundQuestId = ConstantMaster__GetValue_27713676(
                                                                            MasterData_WarQuestSelectionMaster,
                                                                            (System_String_o *)StringLiteral_5588/*"EVENT_BOARD_GAME_NEXT_ROUND_QUEST_ID"*/,
                                                                            94047744,
                                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->TitleFlowOld = ConstantMaster__GetValue_27713676(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_13466/*"TITLE_FLOW_OLD"*/,
                                                          0,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->StoryWarId = ConstantMaster__GetValue_27713676(
                                                        MasterData_WarQuestSelectionMaster,
                                                        (System_String_o *)StringLiteral_12441/*"STORY_WAR_ID"*/,
                                                        1003,
                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->OrdealCallWarId = ConstantMaster__GetValue_27713676(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_9855/*"ORDEAL_CALL_WAR_ID"*/,
                                                             401,
                                                             0LL);
  v317 = ConstantStrMaster__GetValue(v207, (System_String_o *)StringLiteral_9854/*"ORDEAL_CALL_CLEAR_BGM_NAME"*/, 0LL);
  if ( !System_String__IsNullOrEmpty(v317, 0LL) )
  {
    v318 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v318 = BalanceConfig_TypeInfo;
    }
    p_OrdealCallClearBgmName = &v318->static_fields->OrdealCallClearBgmName;
    *p_OrdealCallClearBgmName = v317;
    sub_B0D840(p_OrdealCallClearBgmName, v317);
  }
  v320 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 5LL);
  v430.fields.value = Field__PrivateImplementationDetails__A1FBA00A0F8840358C0A54605FFD365F75E3A3D7AFF25F48F474C4E89BB0B37D;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v320, v430, 0LL);
  v321 = ConstantStrMaster__GetValueArray(v207, (System_String_o *)StringLiteral_3370/*"CONSUME_STORMPOD_SPOT_ID"*/, (System_Int32_array *)v320, 0LL);
  v322 = BalanceConfig_TypeInfo;
  v323 = v321;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v322 = BalanceConfig_TypeInfo;
  }
  p_consumeStormPodSpotId = &v322->static_fields->consumeStormPodSpotId;
  *p_consumeStormPodSpotId = v323;
  sub_B0D840(p_consumeStormPodSpotId, v323);
  Instance = sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !Instance )
LABEL_286:
    sub_B0D97C(Instance);
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_285;
  *(_DWORD *)(Instance + 32) = 71;
  v325 = ConstantStrMaster__GetValueArray(
           v207,
           (System_String_o *)StringLiteral_12439/*"STORMPOD_HELP_IDS"*/,
           (System_Int32_array *)Instance,
           0LL);
  p_StormPodHelpIds = &BalanceConfig_TypeInfo->static_fields->StormPodHelpIds;
  *p_StormPodHelpIds = v325;
  sub_B0D840(p_StormPodHelpIds, v325);
  ValueStringArray = ConstantStrMaster__GetValueStringArray(v207, (System_String_o *)StringLiteral_8392/*"LEGACY_ASPECT_MOVIES"*/, 0LL);
  p_legacyAspectMovies = &BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
  *p_legacyAspectMovies = ValueStringArray;
  sub_B0D840(p_legacyAspectMovies, ValueStringArray);
  v329 = ConstantStrMaster__GetValueArray(v207, (System_String_o *)StringLiteral_6551/*"FULL_SCREEN_NP_CHRS"*/, 0LL, 0LL);
  p_fullScreenNPChrs = &BalanceConfig_TypeInfo->static_fields->fullScreenNPChrs;
  *p_fullScreenNPChrs = v329;
  sub_B0D840(p_fullScreenNPChrs, v329);
  v331 = ConstantStrMaster__GetValueArray(v207, (System_String_o *)StringLiteral_6552/*"FULL_SCREEN_NP_SEQ_IDS"*/, 0LL, 0LL);
  p_fullScreenNPSeqIds = &BalanceConfig_TypeInfo->static_fields->fullScreenNPSeqIds;
  *p_fullScreenNPSeqIds = v331;
  sub_B0D840(p_fullScreenNPSeqIds, v331);
  BalanceConfig_TypeInfo->static_fields->GachaDailyMaxDrawNumResetAt = ConstantMaster__GetValue_27713676(
                                                                         MasterData_WarQuestSelectionMaster,
                                                                         (System_String_o *)StringLiteral_6849/*"GACHA_DAILY_MAX_DRAW_NUM_RESET_AT"*/,
                                                                         4,
                                                                         0LL);
  BalanceConfig_TypeInfo->static_fields->MemoryDeckLimitByQuest = ConstantMaster__GetValue_27713676(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_8736/*"MEMORY_DECK_LIMIT_BY_QUEST"*/,
                                                                    100,
                                                                    0LL);
  v333 = ConstantStrMaster__GetValue(v207, (System_String_o *)StringLiteral_7335/*"IOS_EXAMINATION_NEWS_URL"*/, 0LL);
  p_IOS_ExaminationNewsUrl = &BalanceConfig_TypeInfo->static_fields->IOS_ExaminationNewsUrl;
  *p_IOS_ExaminationNewsUrl = v333;
  sub_B0D840(p_IOS_ExaminationNewsUrl, v333);
  v335 = BalanceConfig_TypeInfo->static_fields;
  if ( !v335->IOS_ExaminationNewsUrl )
  {
    v336 = &v335->IOS_ExaminationNewsUrl;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v336 = &BalanceConfig_TypeInfo->static_fields->IOS_ExaminationNewsUrl;
    }
    v337 = StringLiteral_19306/*"https://view.fate-go.jp/"*/;
    *v336 = (struct System_String_o *)StringLiteral_19306/*"https://view.fate-go.jp/"*/;
    sub_B0D840(v336, v337);
  }
  v338 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_9865/*"OTHER_IMAGE_LIMIT_COUNT"*/, 0LL);
  v339 = BalanceConfig_TypeInfo;
  v340 = v338;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v339 = BalanceConfig_TypeInfo;
  }
  v339->static_fields->OtherImageLimitCount = v340;
  BalanceConfig_TypeInfo->static_fields->ExclusiveNpcServantIdStart = ConstantMaster__GetValue_27713676(
                                                                        MasterData_WarQuestSelectionMaster,
                                                                        (System_String_o *)StringLiteral_5773/*"EXCLUSIVE_NPC_SERVANT_ID_START"*/,
                                                                        9937100,
                                                                        0LL);
  v341 = ConstantStrMaster__GetValueStringArray(v207, (System_String_o *)StringLiteral_12369/*"STAND_FIGURE_R_OFFSET_EFFECT_NAMES"*/, 0LL);
  p_UIStandFigureROffsetEffectNames = &BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames;
  *p_UIStandFigureROffsetEffectNames = v341;
  sub_B0D840(p_UIStandFigureROffsetEffectNames, v341);
  v343 = ConstantStrMaster__GetValueStringArray(v207, (System_String_o *)StringLiteral_12368/*"STAND_FIGURE_R_OFFSET_EFFECT_IMAGES"*/, 0LL);
  p_UIStandFigureROffsetImages = &BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetImages;
  *p_UIStandFigureROffsetImages = v343;
  sub_B0D840(p_UIStandFigureROffsetImages, v343);
  v345 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames )
  {
    Instance = sub_B0D8BC(string___TypeInfo, 7LL);
    if ( !Instance )
      goto LABEL_286;
    v346 = Instance;
    Instance = StringLiteral_16853/*"bit_result_bond"*/;
    if ( StringLiteral_16853/*"bit_result_bond"*/ )
    {
      Instance = sub_B0D964(StringLiteral_16853/*"bit_result_bond"*/, *(_QWORD *)(*(_QWORD *)v346 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v347 = StringLiteral_16853/*"bit_result_bond"*/;
    }
    else
    {
      v347 = 0LL;
    }
    if ( !*(_DWORD *)(v346 + 24) )
      goto LABEL_285;
    *(_QWORD *)(v346 + 32) = v347;
    sub_B0D840(v346 + 32, v347);
    Instance = StringLiteral_16865/*"bit_result_noble"*/;
    if ( StringLiteral_16865/*"bit_result_noble"*/ )
    {
      Instance = sub_B0D964(StringLiteral_16865/*"bit_result_noble"*/, *(_QWORD *)(*(_QWORD *)v346 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v348 = StringLiteral_16865/*"bit_result_noble"*/;
    }
    else
    {
      v348 = 0LL;
    }
    if ( *(_DWORD *)(v346 + 24) <= 1u )
      goto LABEL_285;
    *(_QWORD *)(v346 + 40) = v348;
    sub_B0D840(v346 + 40, v348);
    Instance = StringLiteral_16868/*"bit_result_servant"*/;
    if ( StringLiteral_16868/*"bit_result_servant"*/ )
    {
      Instance = sub_B0D964(StringLiteral_16868/*"bit_result_servant"*/, *(_QWORD *)(*(_QWORD *)v346 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v349 = StringLiteral_16868/*"bit_result_servant"*/;
    }
    else
    {
      v349 = 0LL;
    }
    if ( *(_DWORD *)(v346 + 24) <= 2u )
      goto LABEL_285;
    *(_QWORD *)(v346 + 48) = v349;
    sub_B0D840(v346 + 48, v349);
    Instance = StringLiteral_16869/*"bit_result_skill"*/;
    if ( StringLiteral_16869/*"bit_result_skill"*/ )
    {
      Instance = sub_B0D964(StringLiteral_16869/*"bit_result_skill"*/, *(_QWORD *)(*(_QWORD *)v346 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v350 = StringLiteral_16869/*"bit_result_skill"*/;
    }
    else
    {
      v350 = 0LL;
    }
    if ( *(_DWORD *)(v346 + 24) <= 3u )
      goto LABEL_285;
    *(_QWORD *)(v346 + 56) = v350;
    sub_B0D840(v346 + 56, v350);
    Instance = StringLiteral_16854/*"bit_result_command_card_exceed"*/;
    if ( StringLiteral_16854/*"bit_result_command_card_exceed"*/ )
    {
      Instance = sub_B0D964(StringLiteral_16854/*"bit_result_command_card_exceed"*/, *(_QWORD *)(*(_QWORD *)v346 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v351 = StringLiteral_16854/*"bit_result_command_card_exceed"*/;
    }
    else
    {
      v351 = 0LL;
    }
    if ( *(_DWORD *)(v346 + 24) <= 4u )
      goto LABEL_285;
    *(_QWORD *)(v346 + 64) = v351;
    sub_B0D840(v346 + 64, v351);
    Instance = StringLiteral_16855/*"bit_result_extraskill"*/;
    if ( StringLiteral_16855/*"bit_result_extraskill"*/ )
    {
      Instance = sub_B0D964(StringLiteral_16855/*"bit_result_extraskill"*/, *(_QWORD *)(*(_QWORD *)v346 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v352 = StringLiteral_16855/*"bit_result_extraskill"*/;
    }
    else
    {
      v352 = 0LL;
    }
    if ( *(_DWORD *)(v346 + 24) <= 5u )
      goto LABEL_285;
    *(_QWORD *)(v346 + 72) = v352;
    sub_B0D840(v346 + 72, v352);
    Instance = StringLiteral_16858/*"bit_result_friendship_exceed"*/;
    if ( StringLiteral_16858/*"bit_result_friendship_exceed"*/ )
    {
      Instance = sub_B0D964(StringLiteral_16858/*"bit_result_friendship_exceed"*/, *(_QWORD *)(*(_QWORD *)v346 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v353 = StringLiteral_16858/*"bit_result_friendship_exceed"*/;
    }
    else
    {
      v353 = 0LL;
    }
    if ( *(_DWORD *)(v346 + 24) <= 6u )
      goto LABEL_285;
    *(_QWORD *)(v346 + 80) = v353;
    sub_B0D840(v346 + 80, v353);
    v354 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v354 = BalanceConfig_TypeInfo;
    }
    v355 = &v354->static_fields->UIStandFigureROffsetEffectNames;
    *v355 = (struct System_String_array *)v346;
    sub_B0D840(v355, v346);
    v345 = BalanceConfig_TypeInfo;
  }
  if ( (BYTE3(v345->vtable._0_Equals.methodPtr) & 4) != 0 && !v345->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v345);
    v345 = BalanceConfig_TypeInfo;
  }
  if ( v345->static_fields->UIStandFigureROffsetImages )
    goto LABEL_279;
  Instance = sub_B0D8BC(string___TypeInfo, 18LL);
  if ( !Instance )
    goto LABEL_286;
  v356 = Instance;
  Instance = StringLiteral_1096/*"1053900:100:0"*/;
  if ( StringLiteral_1096/*"1053900:100:0"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1096/*"1053900:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v357 = StringLiteral_1096/*"1053900:100:0"*/;
  }
  else
  {
    v357 = 0LL;
  }
  if ( !*(_DWORD *)(v356 + 24) )
    goto LABEL_285;
  *(_QWORD *)(v356 + 32) = v357;
  sub_B0D840(v356 + 32, v357);
  Instance = StringLiteral_1099/*"1053910:100:0"*/;
  if ( StringLiteral_1099/*"1053910:100:0"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1099/*"1053910:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v358 = StringLiteral_1099/*"1053910:100:0"*/;
  }
  else
  {
    v358 = 0LL;
  }
  if ( *(_DWORD *)(v356 + 24) <= 1u )
    goto LABEL_285;
  *(_QWORD *)(v356 + 40) = v358;
  sub_B0D840(v356 + 40, v358);
  Instance = StringLiteral_1097/*"1053901:100:0"*/;
  if ( StringLiteral_1097/*"1053901:100:0"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1097/*"1053901:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v359 = StringLiteral_1097/*"1053901:100:0"*/;
  }
  else
  {
    v359 = 0LL;
  }
  if ( *(_DWORD *)(v356 + 24) <= 2u )
    goto LABEL_285;
  *(_QWORD *)(v356 + 48) = v359;
  sub_B0D840(v356 + 48, v359);
  Instance = StringLiteral_1100/*"1053911:100:0"*/;
  if ( StringLiteral_1100/*"1053911:100:0"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1100/*"1053911:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v360 = StringLiteral_1100/*"1053911:100:0"*/;
  }
  else
  {
    v360 = 0LL;
  }
  if ( *(_DWORD *)(v356 + 24) <= 3u )
    goto LABEL_285;
  *(_QWORD *)(v356 + 56) = v360;
  sub_B0D840(v356 + 56, v360);
  Instance = StringLiteral_1098/*"1053902:100:0"*/;
  if ( StringLiteral_1098/*"1053902:100:0"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1098/*"1053902:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v361 = StringLiteral_1098/*"1053902:100:0"*/;
  }
  else
  {
    v361 = 0LL;
  }
  if ( *(_DWORD *)(v356 + 24) <= 4u )
    goto LABEL_285;
  *(_QWORD *)(v356 + 64) = v361;
  sub_B0D840(v356 + 64, v361);
  Instance = StringLiteral_1101/*"1053912:100:0"*/;
  if ( StringLiteral_1101/*"1053912:100:0"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1101/*"1053912:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v362 = StringLiteral_1101/*"1053912:100:0"*/;
  }
  else
  {
    v362 = 0LL;
  }
  if ( *(_DWORD *)(v356 + 24) <= 5u )
    goto LABEL_285;
  *(_QWORD *)(v356 + 72) = v362;
  sub_B0D840(v356 + 72, v362);
  Instance = StringLiteral_1093/*"1053000:100:0"*/;
  if ( StringLiteral_1093/*"1053000:100:0"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1093/*"1053000:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v363 = StringLiteral_1093/*"1053000:100:0"*/;
  }
  else
  {
    v363 = 0LL;
  }
  if ( *(_DWORD *)(v356 + 24) <= 6u )
    goto LABEL_285;
  *(_QWORD *)(v356 + 80) = v363;
  sub_B0D840(v356 + 80, v363);
  Instance = StringLiteral_1094/*"1053001:100:0"*/;
  if ( StringLiteral_1094/*"1053001:100:0"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1094/*"1053001:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v364 = StringLiteral_1094/*"1053001:100:0"*/;
  }
  else
  {
    v364 = 0LL;
  }
  if ( *(_DWORD *)(v356 + 24) <= 7u )
    goto LABEL_285;
  *(_QWORD *)(v356 + 88) = v364;
  sub_B0D840(v356 + 88, v364);
  Instance = StringLiteral_1095/*"1053002:100:0"*/;
  if ( StringLiteral_1095/*"1053002:100:0"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1095/*"1053002:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v365 = StringLiteral_1095/*"1053002:100:0"*/;
  }
  else
  {
    v365 = 0LL;
  }
  if ( *(_DWORD *)(v356 + 24) <= 8u )
    goto LABEL_285;
  *(_QWORD *)(v356 + 96) = v365;
  sub_B0D840(v356 + 96, v365);
  Instance = StringLiteral_1204/*"5047900:100:0"*/;
  if ( StringLiteral_1204/*"5047900:100:0"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1204/*"5047900:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v366 = StringLiteral_1204/*"5047900:100:0"*/;
  }
  else
  {
    v366 = 0LL;
  }
  if ( *(_DWORD *)(v356 + 24) <= 9u )
    goto LABEL_285;
  *(_QWORD *)(v356 + 104) = v366;
  sub_B0D840(v356 + 104, v366);
  Instance = StringLiteral_1207/*"5047910:100:0"*/;
  if ( StringLiteral_1207/*"5047910:100:0"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1207/*"5047910:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v367 = StringLiteral_1207/*"5047910:100:0"*/;
  }
  else
  {
    v367 = 0LL;
  }
  if ( *(_DWORD *)(v356 + 24) <= 0xAu )
    goto LABEL_285;
  *(_QWORD *)(v356 + 112) = v367;
  sub_B0D840(v356 + 112, v367);
  Instance = StringLiteral_1205/*"5047901:100:0"*/;
  if ( StringLiteral_1205/*"5047901:100:0"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1205/*"5047901:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v368 = StringLiteral_1205/*"5047901:100:0"*/;
  }
  else
  {
    v368 = 0LL;
  }
  if ( *(_DWORD *)(v356 + 24) <= 0xBu )
    goto LABEL_285;
  *(_QWORD *)(v356 + 120) = v368;
  sub_B0D840(v356 + 120, v368);
  Instance = StringLiteral_1208/*"5047911:100:0"*/;
  if ( StringLiteral_1208/*"5047911:100:0"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1208/*"5047911:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v369 = StringLiteral_1208/*"5047911:100:0"*/;
  }
  else
  {
    v369 = 0LL;
  }
  if ( *(_DWORD *)(v356 + 24) <= 0xCu )
    goto LABEL_285;
  *(_QWORD *)(v356 + 128) = v369;
  sub_B0D840(v356 + 128, v369);
  Instance = StringLiteral_1206/*"5047902:100:0"*/;
  if ( StringLiteral_1206/*"5047902:100:0"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1206/*"5047902:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v370 = StringLiteral_1206/*"5047902:100:0"*/;
  }
  else
  {
    v370 = 0LL;
  }
  if ( *(_DWORD *)(v356 + 24) <= 0xDu )
    goto LABEL_285;
  *(_QWORD *)(v356 + 136) = v370;
  sub_B0D840(v356 + 136, v370);
  Instance = StringLiteral_1209/*"5047912:100:0"*/;
  if ( StringLiteral_1209/*"5047912:100:0"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1209/*"5047912:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v371 = StringLiteral_1209/*"5047912:100:0"*/;
  }
  else
  {
    v371 = 0LL;
  }
  if ( *(_DWORD *)(v356 + 24) <= 0xEu )
    goto LABEL_285;
  *(_QWORD *)(v356 + 144) = v371;
  sub_B0D840(v356 + 144, v371);
  Instance = StringLiteral_1201/*"5047000:100:0"*/;
  if ( StringLiteral_1201/*"5047000:100:0"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1201/*"5047000:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v372 = StringLiteral_1201/*"5047000:100:0"*/;
  }
  else
  {
    v372 = 0LL;
  }
  if ( *(_DWORD *)(v356 + 24) <= 0xFu )
    goto LABEL_285;
  *(_QWORD *)(v356 + 152) = v372;
  sub_B0D840(v356 + 152, v372);
  Instance = StringLiteral_1202/*"5047001:100:0"*/;
  if ( StringLiteral_1202/*"5047001:100:0"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1202/*"5047001:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v373 = StringLiteral_1202/*"5047001:100:0"*/;
  }
  else
  {
    v373 = 0LL;
  }
  if ( *(_DWORD *)(v356 + 24) <= 0x10u )
    goto LABEL_285;
  *(_QWORD *)(v356 + 160) = v373;
  sub_B0D840(v356 + 160, v373);
  Instance = StringLiteral_1203/*"5047002:100:0"*/;
  if ( !StringLiteral_1203/*"5047002:100:0"*/ )
  {
    v374 = 0LL;
    goto LABEL_274;
  }
  Instance = sub_B0D964(StringLiteral_1203/*"5047002:100:0"*/, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
  if ( !Instance )
  {
LABEL_287:
    v427 = sub_B0D99C();
    sub_B0D948(v427, 0LL);
  }
  v374 = StringLiteral_1203/*"5047002:100:0"*/;
LABEL_274:
  if ( *(_DWORD *)(v356 + 24) <= 0x11u )
    goto LABEL_285;
  *(_QWORD *)(v356 + 168) = v374;
  sub_B0D840(v356 + 168, v374);
  v375 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v375 = BalanceConfig_TypeInfo;
  }
  v376 = &v375->static_fields->UIStandFigureROffsetImages;
  *v376 = (struct System_String_array *)v356;
  sub_B0D840(v376, v356);
LABEL_279:
  v377 = ConstantMaster__GetValue_27713676(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7469/*"IS_WAR_BOARD_AI_CALC_EVAL_SUM"*/,
           0,
           0LL);
  v378 = BalanceConfig_TypeInfo;
  v379 = v377;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v378 = BalanceConfig_TypeInfo;
  }
  v378->static_fields->IsWarBoardAiCalcEvalSum = v379 != 0;
  BalanceConfig_TypeInfo->static_fields->WarBoardEvalFactorsAffectRatio = ConstantMaster__GetValue_27713676(
                                                                            MasterData_WarQuestSelectionMaster,
                                                                            (System_String_o *)StringLiteral_15379/*"WAR_BOARD_EVAL_FACTORS_AFFECT_RATIO"*/,
                                                                            10000,
                                                                            0LL);
  v380 = ConstantMaster__GetValue_27713676(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7470/*"IS_WAR_BOARD_AI_FILTER_NOT_ACTION"*/,
           1,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsWarBoardAiFilterNotAction = v380;
  v381 = ConstantMaster__GetValue_27713676(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7471/*"IS_WAR_BOARD_AI_FILTER_WASTE_ROUTE"*/,
           0,
           0LL);
  v382 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->IsWarBoardAiFilterWasteRoute = v381 != 0;
  BalanceConfig_TypeInfo->static_fields->StoneFragmentExchangeNoticeDispMax = ConstantMaster__GetValue_27713676(
                                                                                MasterData_WarQuestSelectionMaster,
                                                                                (System_String_o *)StringLiteral_12417/*"STONE_FRAGMENT_EXCHANGE_NOTICE_MAX"*/,
                                                                                v382->static_fields->StoneFragmentExchangeNoticeDispMax,
                                                                                0LL);
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveTimeConstant = (float)ConstantMaster__GetValue_27713676(
                                                                              MasterData_WarQuestSelectionMaster,
                                                                              (System_String_o *)StringLiteral_1173/*"3D_MAP_CAMERA_MOVE_TIME_CONSTANT"*/,
                                                                              0,
                                                                              0LL)
                                                                   / 1000.0;
  v383 = ConstantMaster__GetValue_27713676(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_1172/*"3D_MAP_CAMERA_MOVE_TIME_COEFFICIENT"*/,
           1700,
           0LL);
  v384 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveTimeCoefficient = (float)v383 / 1000.0;
  v385 = ConstantMaster__GetValue_27713676(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_1174/*"3D_MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE"*/,
           v384->static_fields->MapCameraMoveTimeLogarithmBase,
           0LL);
  v386 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveTimeLogarithmBase = v385;
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveEasingType = ConstantMaster__GetValue_27713676(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_1171/*"3D_MAP_CAMERA_MOVE_EASING_TYPE"*/,
                                                                     v386->static_fields->MapCameraMoveEasingType,
                                                                     0LL);
  v387 = ConstantMaster__GetValue_27713676(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_2927/*"CAMERA_2D_RESET_DURATION"*/,
           644,
           0LL);
  v388 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->Camera2DResetDuration = (float)v387 / 1000.0;
  v389 = ConstantStrMaster__GetValueArray(
           v207,
           (System_String_o *)StringLiteral_8626/*"MAIN_CHAPTERS_WITH_EVENT_ID"*/,
           v388->static_fields->MainChaptersWithEventId,
           0LL);
  p_MainChaptersWithEventId = &BalanceConfig_TypeInfo->static_fields->MainChaptersWithEventId;
  *p_MainChaptersWithEventId = v389;
  sub_B0D840(p_MainChaptersWithEventId, v389);
  BalanceConfig_TypeInfo->static_fields->OrtSecondFormId = ConstantMaster__GetValue_27713676(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_9861/*"ORT_SECONDE_FORM_ID"*/,
                                                             1,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->OrtThirdFormId = ConstantMaster__GetValue_27713676(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_9862/*"ORT_THIRD_FORM_ID"*/,
                                                            2,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->OrtFirstQuestId = ConstantMaster__GetValue_27713676(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_9856/*"ORT_FIRST_QUEST_ID"*/,
                                                             3001324,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLateQuestId = ConstantMaster__GetValue_27713676(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_9860/*"ORT_LATE_QUEST_ID"*/,
                                                            3001325,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLatePhaseBreak = ConstantMaster__GetValue_27713676(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_9857/*"ORT_LATE_PHASE_BREAK"*/,
                                                               5,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLatePhaseSecondForm = ConstantMaster__GetValue_27713676(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_9859/*"ORT_LATE_PHASE_SECOND_FORM"*/,
                                                                    6,
                                                                    0LL);
  v391 = ConstantMaster__GetValue_27713676(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_9858/*"ORT_LATE_PHASE_DEAD"*/,
           7,
           0LL);
  v392 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->OrtLatePhaseDead = v391;
  v393 = ConstantStrMaster__GetValueArray(
           v207,
           (System_String_o *)StringLiteral_13492/*"TREASURE_DEVICES_FORCED_OPEN_EFFECT"*/,
           v392->static_fields->TreasureDevicesForcedOpenEffect,
           0LL);
  p_TreasureDevicesForcedOpenEffect = &BalanceConfig_TypeInfo->static_fields->TreasureDevicesForcedOpenEffect;
  *p_TreasureDevicesForcedOpenEffect = v393;
  sub_B0D840(p_TreasureDevicesForcedOpenEffect, v393);
  v395 = ConstantStrMaster__GetValueArray(
           v207,
           (System_String_o *)StringLiteral_7068/*"HEROINE_TREASURE_DEVICE_RANKUP_EFFECTS"*/,
           BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects,
           0LL);
  p_HeroineTreasureDeviceRankUpEffects = &BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects;
  *p_HeroineTreasureDeviceRankUpEffects = v395;
  sub_B0D840(p_HeroineTreasureDeviceRankUpEffects, v395);
  v397 = ConstantMaster__GetValue_27713676(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7067/*"HEROINE_LIMIT_COUNT_ORTINAX_REFURBISHED"*/,
           BalanceConfig_TypeInfo->static_fields->HeroineLimitCountOrtinaxRefurbished,
           0LL);
  v398 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->HeroineLimitCountOrtinaxRefurbished = v397;
  v399 = ConstantMaster__GetValue_27713676(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_3042/*"CLASS_BOARD_RELEASE_QUEST_ID"*/,
           v398->static_fields->ClassBoardReleaseQuestId,
           0LL);
  v400 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ClassBoardReleaseQuestId = v399;
  v401 = ConstantStrMaster__GetValueArray(
           v207,
           (System_String_o *)StringLiteral_5811/*"EXTRA1_SORT_ORDER_CLASS_IDS"*/,
           v400->static_fields->Extra1SortOrderClassIds,
           0LL);
  p_Extra1SortOrderClassIds = &BalanceConfig_TypeInfo->static_fields->Extra1SortOrderClassIds;
  *p_Extra1SortOrderClassIds = v401;
  sub_B0D840(p_Extra1SortOrderClassIds, v401);
  v403 = ConstantStrMaster__GetValueArray(
           v207,
           (System_String_o *)StringLiteral_5812/*"EXTRA2_SORT_ORDER_CLASS_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds,
           0LL);
  p_Extra2SortOrderClassIds = &BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds;
  *p_Extra2SortOrderClassIds = v403;
  sub_B0D840(p_Extra2SortOrderClassIds, v403);
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectMoveMaxDistance = ConstantMaster__GetValue_27713676(
                                                                                   MasterData_WarQuestSelectionMaster,
                                                                                   (System_String_o *)StringLiteral_3005/*"CLASS_BOARD_CAMERA_SELECT_MOVE_MAX_DISTANCE"*/,
                                                                                   BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectMoveMaxDistance,
                                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectSecMin = (float)ConstantMaster__GetValue_27713676(
                                                                                 MasterData_WarQuestSelectionMaster,
                                                                                 (System_String_o *)StringLiteral_3007/*"CLASS_BOARD_CAMERA_SELECT_SEC_MIN"*/,
                                                                                 100,
                                                                                 0LL)
                                                                      / 1000.0;
  v405 = ConstantMaster__GetValue_27713676(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_3006/*"CLASS_BOARD_CAMERA_SELECT_SEC_MAX"*/,
           1000,
           0LL);
  v406 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectSecMax = (float)v405 / 1000.0;
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectEasingType = ConstantMaster__GetValue_27713676(
                                                                              MasterData_WarQuestSelectionMaster,
                                                                              (System_String_o *)StringLiteral_3004/*"CLASS_BOARD_CAMERA_SELECT_EASING_TYPE"*/,
                                                                              v406->static_fields->ClassBoardCameraSelectEasingType,
                                                                              0LL);
  v407 = ConstantMaster__GetValue_27713676(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_3000/*"CLASS_BOARD_2D_CAMERA_DEFAULT_SIZE"*/,
           1700,
           0LL);
  v408 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ClassBoard2DCameraDefaultSize = (float)v407 / 1000.0;
  v409 = ConstantStrMaster__GetValueArray(
           v207,
           (System_String_o *)StringLiteral_9373/*"NOT_UI_CHANGE_MAP_IDS"*/,
           v408->static_fields->NotUIChangeMapIds,
           0LL);
  p_NotUIChangeMapIds = &BalanceConfig_TypeInfo->static_fields->NotUIChangeMapIds;
  *p_NotUIChangeMapIds = v409;
  sub_B0D840(p_NotUIChangeMapIds, v409);
  v411 = ConstantStrMaster__GetValueArray(
           v207,
           (System_String_o *)StringLiteral_8422/*"LIMIT_SEALED_DIALOG_MAX_LIMIT_OPEN_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds,
           0LL);
  p_LimitSealedDialogMaxLimitOpenIds = &BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds;
  *p_LimitSealedDialogMaxLimitOpenIds = v411;
  sub_B0D840(p_LimitSealedDialogMaxLimitOpenIds, v411);
  v413 = ConstantStrMaster__GetValueArray(
           v207,
           (System_String_o *)StringLiteral_9853/*"ORDEAL_CALL_CHAPTER_FOLDER_EVENT_UI_DISP_WAR_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds,
           0LL);
  p_OrdealCallChapterFolderEventUIDispWarIds = &BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds;
  *p_OrdealCallChapterFolderEventUIDispWarIds = v413;
  sub_B0D840(p_OrdealCallChapterFolderEventUIDispWarIds, v413);
  v415 = ConstantStrMaster__GetValueArray(
           v207,
           (System_String_o *)StringLiteral_11090/*"RECOVERY_FATIGUE_DELAYED_CHANGE_BG_EVENTS"*/,
           BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents,
           0LL);
  p_RecoveryFatigueDelayedChangeBgEvents = &BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents;
  *p_RecoveryFatigueDelayedChangeBgEvents = v415;
  sub_B0D840(p_RecoveryFatigueDelayedChangeBgEvents, v415);
  Instance = sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_286;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_285;
  *(_DWORD *)(Instance + 32) = 94086401;
  v417 = ConstantStrMaster__GetValueArray(
           v207,
           (System_String_o *)StringLiteral_9334/*"NONE_DISPLAY_FREE_QUEST_MATERIAL"*/,
           (System_Int32_array *)Instance,
           0LL);
  p_noneDisplayFreeQuestMaterial = &BalanceConfig_TypeInfo->static_fields->noneDisplayFreeQuestMaterial;
  *p_noneDisplayFreeQuestMaterial = v417;
  sub_B0D840(p_noneDisplayFreeQuestMaterial, v417);
  v419 = ConstantStrMaster__GetValueArray(
           v207,
           (System_String_o *)StringLiteral_9372/*"NOT_SEND_TRACK_EVENT_AT_WAR_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
           0LL);
  p_NotSendTrackEventAtWarIds = &BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds;
  *p_NotSendTrackEventAtWarIds = v419;
  sub_B0D840(p_NotSendTrackEventAtWarIds, v419);
  v421 = ConstantMaster__GetValue_27713676(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_12371/*"STARTING_MEMBER_FRIENDSHIP_RATE"*/,
           0,
           0LL);
  v422 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->StartingMemberFriendshipRate = v421;
  v423 = ConstantStrMaster__GetValueArray(
           v207,
           (System_String_o *)StringLiteral_9367/*"NOT_REQUIRED_WAR_IDS"*/,
           v422->static_fields->NotRequiredPlayWarIds,
           0LL);
  p_NotRequiredPlayWarIds = &BalanceConfig_TypeInfo->static_fields->NotRequiredPlayWarIds;
  *p_NotRequiredPlayWarIds = v423;
  sub_B0D840(p_NotRequiredPlayWarIds, v423);
  v425 = ConstantMaster__GetValue_27713676(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7465/*"IS_ENABLE_OLD_BLOCK_SHORTEST_ROUTE"*/,
           0,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsEnableOldBlockShortestRoute = v425;
  BalanceConfig_TypeInfo->static_fields->IsEventPointMenu = ConstantMaster__GetValue_27713676(
                                                              MasterData_WarQuestSelectionMaster,
                                                              (System_String_o *)StringLiteral_7466/*"IS_EVENT_POINT_MENU"*/,
                                                              0,
                                                              0LL) != 0;
}


void __fastcall BalanceConfig___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213995 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig___c_TypeInfo, v1);
    byte_4213995 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BalanceConfig___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BalanceConfig___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
}


void __fastcall BalanceConfig___c___ctor(BalanceConfig___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BalanceConfig___c___Initialize_b__218_0(
        BalanceConfig___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}