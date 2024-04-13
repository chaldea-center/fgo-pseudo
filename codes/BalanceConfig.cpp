void __fastcall BalanceConfig___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  float v4; // s4
  float v5; // s5
  float v6; // s6
  float v7; // s7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  BalanceConfig_c *v26; // x8
  BalanceConfig_c *v27; // x8
  struct System_Int32_array **p_PresentBoxFilterSvtEquipMaterial; // x0
  BalanceConfig_c *v29; // x8
  struct System_Int32_array **p_ReprintLastWarRaidEventIdList; // x0
  BalanceConfig_c *v31; // x8
  struct System_Int32_array **p_EventTowerFadeOutDelayTime; // x0
  BalanceConfig_c *v33; // x8
  struct System_Int32_array **p_MainInterludeWarIdOnMaterial; // x0
  struct System_Int32_array **p_EventBoardGameDiceButtonPostion; // x0
  struct System_Int32_array **p_EventBoardGameMapIdList; // x0
  BalanceConfig_c *v37; // x8
  struct System_String_o **p_OrdealCallClearBgmName; // x0
  struct System_Int32_array **p_consumeStormPodSpotId; // x0
  struct System_Int32_array **p_StormPodHelpIds; // x0
  struct System_String_array **p_legacyAspectMovies; // x0
  struct System_Int32_array **p_fullScreenNPChrs; // x0
  struct System_Int32_array **p_fullScreenNPSeqIds; // x0
  struct System_String_array **p_UIStandFigureROffsetEffectNames; // x0
  struct System_String_array **p_UIStandFigureROffsetImages; // x0
  BalanceConfig_c *v46; // x8
  __int64 v47; // x0
  __int64 v48; // x1
  struct System_Int32_array *v49; // x1
  struct System_Int32_array **p_MainChaptersWithEventId; // x0
  struct System_Int32_array *v51; // x1
  struct System_Int32_array **p_TreasureDevicesForcedOpenEffect; // x0
  struct System_Int32_array *v53; // x1
  struct System_Int32_array **p_HeroineTreasureDeviceRankUpEffects; // x0
  BalanceConfig_c *v55; // x8
  System_Array_o *v56; // x19
  struct System_Int32_array **p_Extra1SortOrderClassIds; // x0
  System_Array_o *v58; // x19
  struct System_Int32_array **p_Extra2SortOrderClassIds; // x0
  BalanceConfig_c *v60; // x8
  __int64 v61; // x1
  struct System_Int32_array **p_NotUIChangeMapIds; // x0
  struct System_Int32_array *v63; // x1
  struct System_Int32_array **p_LimitSealedDialogMaxLimitOpenIds; // x0
  struct System_Int32_array *v65; // x1
  struct System_Int32_array **p_OrdealCallChapterFolderEventUIDispWarIds; // x0
  struct System_Int32_array *v67; // x1
  struct System_Int32_array **p_RecoveryFatigueDelayedChangeBgEvents; // x0
  struct System_Int32_array *v69; // x1
  struct System_Int32_array **p_noneDisplayFreeQuestMaterial; // x0
  System_Array_o *v71; // x19
  struct System_Int32_array **p_NotSendTrackEventAtWarIds; // x0
  System_Array_o *v73; // x19
  struct System_Int32_array **p_NotRequiredPlayWarIds; // x0
  BalanceConfig_c *v75; // x8
  __int64 v76; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  System_RuntimeFieldHandle_o v78; // 0:w1.4
  System_RuntimeFieldHandle_o v79; // 0:w1.4
  System_RuntimeFieldHandle_o v80; // 0:w1.4
  System_RuntimeFieldHandle_o v81; // 0:w1.4
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E660B & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__0576E2463551A09802222B33A5BA38F57896D9DD406B6DB32A10299A54B4B5BC,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__829FEE660E2799B8814849BCC3884998BB3651E975AC0C0D659AD53227033DBC,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__96039A68C58EBF2F40B99A5B8F9F313745D9C4E02164BB0FCE39159471432F4B,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA,
      v20,
      v21,
      v22);
    sub_B5D5C4(&StringLiteral_2615/*"BGM_TITLE_5"*/, v23, v24, v25);
    byte_42E660B = 1;
  }
  BalanceConfig_TypeInfo->static_fields->CriticalRateToAddByQuickFirstBonus = 0;
  v26 = BalanceConfig_TypeInfo;
  v82.fields.r = 1.0;
  v82.fields.g = 1.0;
  BalanceConfig_TypeInfo->static_fields->ServantLimitMax = 4;
  v82.fields.b = 1.0;
  v26->static_fields->SvtSkillListMax = 3;
  v26->static_fields->SvtPassiveSkillListMax = 20;
  v26->static_fields->SvtEquipMax = 1;
  v26->static_fields->SvtEquipSkillListMax = 20;
  v26->static_fields->SvtCommandCardMax = 5;
  v26->static_fields->UserEquipSkillListMax = 3;
  v26->static_fields->SvtAppendPassiveSkillListMax = 5;
  v26->static_fields->UserEventItemMax = 999999999;
  v26->static_fields->UserPointEventMax = 999999999LL;
  v26->static_fields->UserEventActivityPointMax = 999999999LL;
  v26->static_fields->UserRaidDamagePointMax = 0xE8D4A50FFFLL;
  v26->static_fields->UserSuperBossDamagePointMax = 0xE8D4A50FFFLL;
  v26->static_fields->PresentBoxValidTime = 31536000;
  v26->static_fields->AllUserBoxGachaTotalMax = 999999999LL;
  v26->static_fields->DeckMemberMax = 6;
  v26->static_fields->DeckMainMemberMax = 3;
  v26->static_fields->SupportDeckMemberMax = 9;
  v26->static_fields->FixMainSupportDeckNum = 3;
  v26->static_fields->FixEventSupportDeckNum = 3;
  v26->static_fields->ServantFrameUseStone = 5;
  v26->static_fields->ServantEquipFrameUseStone = 5;
  v26->static_fields->ServantCombineMax = 5;
  v26->static_fields->RequestTopHomeExpirationDateSec = 600;
  v26->static_fields->ServerTimeOverLimit = 3600LL;
  v26->static_fields->SpendApRecvItemNum = 1;
  v26->static_fields->ServantSellSelectMax = 999;
  v26->static_fields->ServantWarehouseSelectMax = 999;
  v26->static_fields->ServantIdJekyll = 0;
  v26->static_fields->ServantIdHyde = 0;
  v26->static_fields->ServantIdSwimsuitMelt = 0;
  v26->static_fields->ServantIdMashu1 = 0;
  v26->static_fields->ServantIdMashu2 = 0;
  v26->static_fields->ServantIdMashu3 = 0;
  v26->static_fields->ServantIdMission1 = 0;
  v26->static_fields->TreasureDeviceIdMashu3 = 0;
  v26->static_fields->CostumeIdMashu = 12;
  v26->static_fields->MashuTdGradeUpQuestId = 0;
  v26->static_fields->MashuTdGradeUpQuestPhase = 0;
  v26->static_fields->ServantIdOberonChoco = 0;
  v26->static_fields->Lostbelt6ClearQuestId = 0;
  v26->static_fields->VtReleaseAt = 0LL;
  v26->static_fields->LvExceedItemId = 7999;
  v26->static_fields->LvExceedNeedItemNum = 1;
  v26->static_fields->LvExceedDewDropItemId = 7998;
  v26->static_fields->itemIdForShop13 = 46;
  v26->static_fields->ApSeedItemId = 103;
  v26->static_fields->ApSeedExchangeTargetItemId = 104;
  v26->static_fields->itemIdForShop15 = 48;
  v26->static_fields->FollowerRefreshRestTime = -1;
  v26->static_fields->DefaultFontSize = 30;
  v26->static_fields->TradeApDialogWarningLabelFontSize = 22;
  v26->static_fields->ShopDetailCheckDialogFontSize = 21;
  v26->static_fields->NoneExpireTime = 1893423600;
  v26->static_fields->MstMissionAlertTime = 259200;
  v26->static_fields->raceRewardRankMax = 3;
  v26->static_fields->LocationRewardDlgColumn = 7;
  v26->static_fields->ScenarioSpeedStep = 0.1;
  v26->static_fields->ScenarioSpeedLow = 0.5;
  v26->static_fields->ScenarioSpeedHigh = 1.5;
  v26->static_fields->ScenarioSpeedDefault = 1.0;
  v26->static_fields->ScenarioTextWaitStep = 0.01;
  v26->static_fields->ScenarioTextWaitLow = 0.0;
  v26->static_fields->ScenarioTextWaitHigh = 0.1;
  v26->static_fields->ScenarioTextWaitDefaultCn = 0.0;
  v26->static_fields->ScenarioTextWaitDefaultSt = 0.05;
  v26->static_fields->ScenarioTextSpeedStep = 1.0;
  v26->static_fields->ScenarioTextSpeedLow = 0.5;
  v26->static_fields->ScenarioTextSpeedHigh = 5.0;
  v26->static_fields->ScenarioTextSpeedDefault = 3.0;
  v26->static_fields->ScenarioScrollSpeedStep = 1.0;
  v26->static_fields->ScenarioScrollSpeedLow = 0.5;
  v26->static_fields->ScenarioScrollSpeedHigh = 5.0;
  v26->static_fields->ScenarioScrollSpeedDefault = 3.0;
  v26->static_fields->ShopNewItemAddDays = 9.0;
  v26->static_fields->PowerUpQuestWarId = 1001;
  v26->static_fields->AccountingInitializeTimeOut = 60;
  v26->static_fields->EquipGetEffectId = 0;
  v82.fields.a = 0.6;
  *(_OWORD *)&var40.methodPointer = 0uLL;
  UnityEngine_Color___ctor(v82, v4, v5, v6, v7, &var40);
  v27 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->MaskColor = *(struct UnityEngine_Color_o *)&var40.methodPointer;
  v27->static_fields->CommandCodeDetachingItemId = -1;
  v27->static_fields->FloatAfterDecimalPointMax = 1.0;
  v27->static_fields->FollowNum = 3;
  v27->static_fields->FollowFriendPoint = 25;
  p_PresentBoxFilterSvtEquipMaterial = &v27->static_fields->PresentBoxFilterSvtEquipMaterial;
  *p_PresentBoxFilterSvtEquipMaterial = 0LL;
  sub_B5D560(p_PresentBoxFilterSvtEquipMaterial);
  v29 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->DisableFriendshipExceed = -1;
  v29->static_fields->SupportListMax = 20;
  v29->static_fields->EventDailyPointResetAt = 10;
  v29->static_fields->FriendPointSummonQpWarning = 500;
  v29->static_fields->FriendShipExceedItemId = 1000;
  v29->static_fields->SkilExceedItemId = 6999;
  v29->static_fields->stormPodItemId = 49;
  v29->static_fields->Torch1ItemId = 51;
  v29->static_fields->Torch2ItemId = 52;
  v29->static_fields->Torch3ItemId = 53;
  p_ReprintLastWarRaidEventIdList = &v29->static_fields->ReprintLastWarRaidEventIdList;
  *p_ReprintLastWarRaidEventIdList = 0LL;
  sub_B5D560(p_ReprintLastWarRaidEventIdList);
  v31 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->CommandCardParamUpMax = 500;
  p_EventTowerFadeOutDelayTime = &v31->static_fields->EventTowerFadeOutDelayTime;
  *p_EventTowerFadeOutDelayTime = 0LL;
  sub_B5D560(p_EventTowerFadeOutDelayTime);
  v33 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->EventTowerFadeOutPlayTime = 3.0;
  v33->static_fields->MaxFriendChocolateUse = 3;
  v33->static_fields->FriendPointBoostItemEfffectId = 3;
  v33->static_fields->MainInterludeWarId = 1004;
  p_MainInterludeWarIdOnMaterial = &v33->static_fields->MainInterludeWarIdOnMaterial;
  *p_MainInterludeWarIdOnMaterial = 0LL;
  sub_B5D560(p_MainInterludeWarIdOnMaterial);
  p_EventBoardGameDiceButtonPostion = &BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion;
  *p_EventBoardGameDiceButtonPostion = 0LL;
  sub_B5D560(p_EventBoardGameDiceButtonPostion);
  p_EventBoardGameMapIdList = &BalanceConfig_TypeInfo->static_fields->EventBoardGameMapIdList;
  *p_EventBoardGameMapIdList = 0LL;
  sub_B5D560(p_EventBoardGameMapIdList);
  v37 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->TitleFlowOld = 0;
  v37->static_fields->StoryWarId = 1003;
  v37->static_fields->OrdealCallWarId = 401;
  p_OrdealCallClearBgmName = &v37->static_fields->OrdealCallClearBgmName;
  *p_OrdealCallClearBgmName = (struct System_String_o *)StringLiteral_2615/*"BGM_TITLE_5"*/;
  sub_B5D560(p_OrdealCallClearBgmName);
  p_consumeStormPodSpotId = &BalanceConfig_TypeInfo->static_fields->consumeStormPodSpotId;
  *p_consumeStormPodSpotId = 0LL;
  sub_B5D560(p_consumeStormPodSpotId);
  p_StormPodHelpIds = &BalanceConfig_TypeInfo->static_fields->StormPodHelpIds;
  *p_StormPodHelpIds = 0LL;
  sub_B5D560(p_StormPodHelpIds);
  p_legacyAspectMovies = &BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
  *p_legacyAspectMovies = 0LL;
  sub_B5D560(p_legacyAspectMovies);
  p_fullScreenNPChrs = &BalanceConfig_TypeInfo->static_fields->fullScreenNPChrs;
  *p_fullScreenNPChrs = 0LL;
  sub_B5D560(p_fullScreenNPChrs);
  p_fullScreenNPSeqIds = &BalanceConfig_TypeInfo->static_fields->fullScreenNPSeqIds;
  *p_fullScreenNPSeqIds = 0LL;
  sub_B5D560(p_fullScreenNPSeqIds);
  p_UIStandFigureROffsetEffectNames = &BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames;
  *p_UIStandFigureROffsetEffectNames = 0LL;
  sub_B5D560(p_UIStandFigureROffsetEffectNames);
  p_UIStandFigureROffsetImages = &BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetImages;
  *p_UIStandFigureROffsetImages = 0LL;
  sub_B5D560(p_UIStandFigureROffsetImages);
  v46 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->IsWarBoardAiCalcEvalSum = 0;
  v46->static_fields->WarBoardEvalFactorsAffectRatio = 10000;
  *(_QWORD *)&v46->static_fields->StoneFragmentExchangeNoticeDispMax = 999LL;
  v46->static_fields->MapCameraMoveTimeCoefficient = 1.7;
  v46->static_fields->MapCameraMoveTimeLogarithmBase = 11000;
  v46->static_fields->MapCameraMoveEasingType = 15;
  v46->static_fields->Camera2DResetDuration = 0.644;
  v47 = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v47 )
    goto LABEL_18;
  v49 = (struct System_Int32_array *)v47;
  if ( !*(_DWORD *)(v47 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v47 + 32) = 311;
  p_MainChaptersWithEventId = &BalanceConfig_TypeInfo->static_fields->MainChaptersWithEventId;
  *p_MainChaptersWithEventId = v49;
  sub_B5D560(p_MainChaptersWithEventId);
  v47 = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v47 )
    goto LABEL_18;
  v51 = (struct System_Int32_array *)v47;
  if ( !*(_DWORD *)(v47 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v47 + 32) = 2800502;
  p_TreasureDevicesForcedOpenEffect = &BalanceConfig_TypeInfo->static_fields->TreasureDevicesForcedOpenEffect;
  *p_TreasureDevicesForcedOpenEffect = v51;
  sub_B5D560(p_TreasureDevicesForcedOpenEffect);
  v47 = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v47 )
    goto LABEL_18;
  v53 = (struct System_Int32_array *)v47;
  if ( !*(_DWORD *)(v47 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v47 + 32) = 800106;
  p_HeroineTreasureDeviceRankUpEffects = &BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects;
  *p_HeroineTreasureDeviceRankUpEffects = v53;
  sub_B5D560(p_HeroineTreasureDeviceRankUpEffects);
  v55 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->HeroineLimitCountOrtinaxRefurbished = 13;
  v55->static_fields->ClassBoardReleaseQuestId = 4000100;
  v56 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 4LL);
  v78.fields.value = Field__PrivateImplementationDetails__0576E2463551A09802222B33A5BA38F57896D9DD406B6DB32A10299A54B4B5BC;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v56, v78, 0LL);
  p_Extra1SortOrderClassIds = &BalanceConfig_TypeInfo->static_fields->Extra1SortOrderClassIds;
  *p_Extra1SortOrderClassIds = (struct System_Int32_array *)v56;
  sub_B5D560(p_Extra1SortOrderClassIds);
  v58 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 4LL);
  v79.fields.value = Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v58, v79, 0LL);
  p_Extra2SortOrderClassIds = &BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds;
  *p_Extra2SortOrderClassIds = (struct System_Int32_array *)v58;
  sub_B5D560(p_Extra2SortOrderClassIds);
  v60 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectMoveMaxDistance = 1024;
  v60->static_fields->ClassBoardCameraSelectSecMin = 0.1;
  v60->static_fields->ClassBoardCameraSelectSecMax = 1.0;
  v60->static_fields->ClassBoardCameraSelectEasingType = 5;
  v60->static_fields->ClassBoard2DCameraDefaultSize = 1.7;
  v61 = sub_B5D5DC(int___TypeInfo, 0LL);
  p_NotUIChangeMapIds = &BalanceConfig_TypeInfo->static_fields->NotUIChangeMapIds;
  *p_NotUIChangeMapIds = (struct System_Int32_array *)v61;
  sub_B5D560(p_NotUIChangeMapIds);
  v47 = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v47 )
    goto LABEL_18;
  v63 = (struct System_Int32_array *)v47;
  if ( !*(_DWORD *)(v47 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v47 + 32) = 3300100;
  p_LimitSealedDialogMaxLimitOpenIds = &BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds;
  *p_LimitSealedDialogMaxLimitOpenIds = v63;
  sub_B5D560(p_LimitSealedDialogMaxLimitOpenIds);
  v47 = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v47 )
    goto LABEL_18;
  v65 = (struct System_Int32_array *)v47;
  if ( !*(_DWORD *)(v47 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v47 + 32) = 402;
  p_OrdealCallChapterFolderEventUIDispWarIds = &BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds;
  *p_OrdealCallChapterFolderEventUIDispWarIds = v65;
  sub_B5D560(p_OrdealCallChapterFolderEventUIDispWarIds);
  v47 = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v47 )
    goto LABEL_18;
  v67 = (struct System_Int32_array *)v47;
  if ( !*(_DWORD *)(v47 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v47 + 32) = 80432;
  p_RecoveryFatigueDelayedChangeBgEvents = &BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents;
  *p_RecoveryFatigueDelayedChangeBgEvents = v67;
  sub_B5D560(p_RecoveryFatigueDelayedChangeBgEvents);
  v47 = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v47 )
LABEL_18:
    sub_B5D69C(v47, v48);
  v69 = (struct System_Int32_array *)v47;
  if ( !*(_DWORD *)(v47 + 24) )
  {
LABEL_19:
    v76 = sub_B5D6C8(v47);
    sub_B5D668(v76, 0LL);
  }
  *(_DWORD *)(v47 + 32) = 94086401;
  p_noneDisplayFreeQuestMaterial = &BalanceConfig_TypeInfo->static_fields->noneDisplayFreeQuestMaterial;
  *p_noneDisplayFreeQuestMaterial = v69;
  sub_B5D560(p_noneDisplayFreeQuestMaterial);
  v71 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 5LL);
  v80.fields.value = Field__PrivateImplementationDetails__829FEE660E2799B8814849BCC3884998BB3651E975AC0C0D659AD53227033DBC;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v71, v80, 0LL);
  p_NotSendTrackEventAtWarIds = &BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds;
  *p_NotSendTrackEventAtWarIds = (struct System_Int32_array *)v71;
  sub_B5D560(p_NotSendTrackEventAtWarIds);
  BalanceConfig_TypeInfo->static_fields->StartingMemberFriendshipRate = 0;
  v73 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 6LL);
  v81.fields.value = Field__PrivateImplementationDetails__96039A68C58EBF2F40B99A5B8F9F313745D9C4E02164BB0FCE39159471432F4B;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v73, v81, 0LL);
  p_NotRequiredPlayWarIds = &BalanceConfig_TypeInfo->static_fields->NotRequiredPlayWarIds;
  *p_NotRequiredPlayWarIds = (struct System_Int32_array *)v73;
  sub_B5D560(p_NotRequiredPlayWarIds);
  v75 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->IsEnableOldBlockShortestRoute = 0;
  v75->static_fields->IsEventPointMenu = 0;
}


void __fastcall BalanceConfig___ctor(BalanceConfig_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BalanceConfig__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  int v118; // w1
  int v119; // w2
  __int64 v120; // x3
  int v121; // w1
  int v122; // w2
  __int64 v123; // x3
  int v124; // w1
  int v125; // w2
  __int64 v126; // x3
  int v127; // w1
  int v128; // w2
  __int64 v129; // x3
  int v130; // w1
  int v131; // w2
  __int64 v132; // x3
  int v133; // w1
  int v134; // w2
  __int64 v135; // x3
  int v136; // w1
  int v137; // w2
  __int64 v138; // x3
  int v139; // w1
  int v140; // w2
  __int64 v141; // x3
  int v142; // w1
  int v143; // w2
  __int64 v144; // x3
  int v145; // w1
  int v146; // w2
  __int64 v147; // x3
  int v148; // w1
  int v149; // w2
  __int64 v150; // x3
  int v151; // w1
  int v152; // w2
  __int64 v153; // x3
  int v154; // w1
  int v155; // w2
  __int64 v156; // x3
  int v157; // w1
  int v158; // w2
  __int64 v159; // x3
  int v160; // w1
  int v161; // w2
  __int64 v162; // x3
  int v163; // w1
  int v164; // w2
  __int64 v165; // x3
  int v166; // w1
  int v167; // w2
  __int64 v168; // x3
  int v169; // w1
  int v170; // w2
  __int64 v171; // x3
  int v172; // w1
  int v173; // w2
  __int64 v174; // x3
  int v175; // w1
  int v176; // w2
  __int64 v177; // x3
  int v178; // w1
  int v179; // w2
  __int64 v180; // x3
  int v181; // w1
  int v182; // w2
  __int64 v183; // x3
  int v184; // w1
  int v185; // w2
  __int64 v186; // x3
  int v187; // w1
  int v188; // w2
  __int64 v189; // x3
  int v190; // w1
  int v191; // w2
  __int64 v192; // x3
  int v193; // w1
  int v194; // w2
  __int64 v195; // x3
  int v196; // w1
  int v197; // w2
  __int64 v198; // x3
  int v199; // w1
  int v200; // w2
  __int64 v201; // x3
  int v202; // w1
  int v203; // w2
  __int64 v204; // x3
  int v205; // w1
  int v206; // w2
  __int64 v207; // x3
  int v208; // w1
  int v209; // w2
  __int64 v210; // x3
  int v211; // w1
  int v212; // w2
  __int64 v213; // x3
  int v214; // w1
  int v215; // w2
  __int64 v216; // x3
  int v217; // w1
  int v218; // w2
  __int64 v219; // x3
  int v220; // w1
  int v221; // w2
  __int64 v222; // x3
  int v223; // w1
  int v224; // w2
  __int64 v225; // x3
  int v226; // w1
  int v227; // w2
  __int64 v228; // x3
  int v229; // w1
  int v230; // w2
  __int64 v231; // x3
  int v232; // w1
  int v233; // w2
  __int64 v234; // x3
  int v235; // w1
  int v236; // w2
  __int64 v237; // x3
  int v238; // w1
  int v239; // w2
  __int64 v240; // x3
  int v241; // w1
  int v242; // w2
  __int64 v243; // x3
  int v244; // w1
  int v245; // w2
  __int64 v246; // x3
  int v247; // w1
  int v248; // w2
  __int64 v249; // x3
  int v250; // w1
  int v251; // w2
  __int64 v252; // x3
  int v253; // w1
  int v254; // w2
  __int64 v255; // x3
  int v256; // w1
  int v257; // w2
  __int64 v258; // x3
  int v259; // w1
  int v260; // w2
  __int64 v261; // x3
  int v262; // w1
  int v263; // w2
  __int64 v264; // x3
  int v265; // w1
  int v266; // w2
  __int64 v267; // x3
  int v268; // w1
  int v269; // w2
  __int64 v270; // x3
  int v271; // w1
  int v272; // w2
  __int64 v273; // x3
  int v274; // w1
  int v275; // w2
  __int64 v276; // x3
  int v277; // w1
  int v278; // w2
  __int64 v279; // x3
  int v280; // w1
  int v281; // w2
  __int64 v282; // x3
  int v283; // w1
  int v284; // w2
  __int64 v285; // x3
  int v286; // w1
  int v287; // w2
  __int64 v288; // x3
  int v289; // w1
  int v290; // w2
  __int64 v291; // x3
  int v292; // w1
  int v293; // w2
  __int64 v294; // x3
  int v295; // w1
  int v296; // w2
  __int64 v297; // x3
  int v298; // w1
  int v299; // w2
  __int64 v300; // x3
  int v301; // w1
  int v302; // w2
  __int64 v303; // x3
  int v304; // w1
  int v305; // w2
  __int64 v306; // x3
  int v307; // w1
  int v308; // w2
  __int64 v309; // x3
  int v310; // w1
  int v311; // w2
  __int64 v312; // x3
  int v313; // w1
  int v314; // w2
  __int64 v315; // x3
  int v316; // w1
  int v317; // w2
  __int64 v318; // x3
  int v319; // w1
  int v320; // w2
  __int64 v321; // x3
  int v322; // w1
  int v323; // w2
  __int64 v324; // x3
  int v325; // w1
  int v326; // w2
  __int64 v327; // x3
  int v328; // w1
  int v329; // w2
  __int64 v330; // x3
  int v331; // w1
  int v332; // w2
  __int64 v333; // x3
  int v334; // w1
  int v335; // w2
  __int64 v336; // x3
  int v337; // w1
  int v338; // w2
  __int64 v339; // x3
  int v340; // w1
  int v341; // w2
  __int64 v342; // x3
  int v343; // w1
  int v344; // w2
  __int64 v345; // x3
  int v346; // w1
  int v347; // w2
  __int64 v348; // x3
  int v349; // w1
  int v350; // w2
  __int64 v351; // x3
  int v352; // w1
  int v353; // w2
  __int64 v354; // x3
  int v355; // w1
  int v356; // w2
  __int64 v357; // x3
  int v358; // w1
  int v359; // w2
  __int64 v360; // x3
  int v361; // w1
  int v362; // w2
  __int64 v363; // x3
  int v364; // w1
  int v365; // w2
  __int64 v366; // x3
  int v367; // w1
  int v368; // w2
  __int64 v369; // x3
  int v370; // w1
  int v371; // w2
  __int64 v372; // x3
  int v373; // w1
  int v374; // w2
  __int64 v375; // x3
  int v376; // w1
  int v377; // w2
  __int64 v378; // x3
  int v379; // w1
  int v380; // w2
  __int64 v381; // x3
  int v382; // w1
  int v383; // w2
  __int64 v384; // x3
  int v385; // w1
  int v386; // w2
  __int64 v387; // x3
  int v388; // w1
  int v389; // w2
  __int64 v390; // x3
  int v391; // w1
  int v392; // w2
  __int64 v393; // x3
  int v394; // w1
  int v395; // w2
  __int64 v396; // x3
  int v397; // w1
  int v398; // w2
  __int64 v399; // x3
  int v400; // w1
  int v401; // w2
  __int64 v402; // x3
  int v403; // w1
  int v404; // w2
  __int64 v405; // x3
  int v406; // w1
  int v407; // w2
  __int64 v408; // x3
  int v409; // w1
  int v410; // w2
  __int64 v411; // x3
  int v412; // w1
  int v413; // w2
  __int64 v414; // x3
  int v415; // w1
  int v416; // w2
  __int64 v417; // x3
  int v418; // w1
  int v419; // w2
  __int64 v420; // x3
  int v421; // w1
  int v422; // w2
  __int64 v423; // x3
  int v424; // w1
  int v425; // w2
  __int64 v426; // x3
  int v427; // w1
  int v428; // w2
  __int64 v429; // x3
  int v430; // w1
  int v431; // w2
  __int64 v432; // x3
  int v433; // w1
  int v434; // w2
  __int64 v435; // x3
  int v436; // w1
  int v437; // w2
  __int64 v438; // x3
  int v439; // w1
  int v440; // w2
  __int64 v441; // x3
  int v442; // w1
  int v443; // w2
  __int64 v444; // x3
  int v445; // w1
  int v446; // w2
  __int64 v447; // x3
  int v448; // w1
  int v449; // w2
  __int64 v450; // x3
  int v451; // w1
  int v452; // w2
  __int64 v453; // x3
  int v454; // w1
  int v455; // w2
  __int64 v456; // x3
  int v457; // w1
  int v458; // w2
  __int64 v459; // x3
  int v460; // w1
  int v461; // w2
  __int64 v462; // x3
  int v463; // w1
  int v464; // w2
  __int64 v465; // x3
  int v466; // w1
  int v467; // w2
  __int64 v468; // x3
  int v469; // w1
  int v470; // w2
  __int64 v471; // x3
  int v472; // w1
  int v473; // w2
  __int64 v474; // x3
  int v475; // w1
  int v476; // w2
  __int64 v477; // x3
  int v478; // w1
  int v479; // w2
  __int64 v480; // x3
  int v481; // w1
  int v482; // w2
  __int64 v483; // x3
  int v484; // w1
  int v485; // w2
  __int64 v486; // x3
  int v487; // w1
  int v488; // w2
  __int64 v489; // x3
  int v490; // w1
  int v491; // w2
  __int64 v492; // x3
  int v493; // w1
  int v494; // w2
  __int64 v495; // x3
  int v496; // w1
  int v497; // w2
  __int64 v498; // x3
  int v499; // w1
  int v500; // w2
  __int64 v501; // x3
  int v502; // w1
  int v503; // w2
  __int64 v504; // x3
  int v505; // w1
  int v506; // w2
  __int64 v507; // x3
  int v508; // w1
  int v509; // w2
  __int64 v510; // x3
  int v511; // w1
  int v512; // w2
  __int64 v513; // x3
  int v514; // w1
  int v515; // w2
  __int64 v516; // x3
  int v517; // w1
  int v518; // w2
  __int64 v519; // x3
  int v520; // w1
  int v521; // w2
  __int64 v522; // x3
  int v523; // w1
  int v524; // w2
  __int64 v525; // x3
  int v526; // w1
  int v527; // w2
  __int64 v528; // x3
  int v529; // w1
  int v530; // w2
  __int64 v531; // x3
  int v532; // w1
  int v533; // w2
  __int64 v534; // x3
  int v535; // w1
  int v536; // w2
  __int64 v537; // x3
  int v538; // w1
  int v539; // w2
  __int64 v540; // x3
  int v541; // w1
  int v542; // w2
  __int64 v543; // x3
  int v544; // w1
  int v545; // w2
  __int64 v546; // x3
  int v547; // w1
  int v548; // w2
  __int64 v549; // x3
  int v550; // w1
  int v551; // w2
  __int64 v552; // x3
  int v553; // w1
  int v554; // w2
  __int64 v555; // x3
  int v556; // w1
  int v557; // w2
  __int64 v558; // x3
  int v559; // w1
  int v560; // w2
  __int64 v561; // x3
  int v562; // w1
  int v563; // w2
  __int64 v564; // x3
  int v565; // w1
  int v566; // w2
  __int64 v567; // x3
  int v568; // w1
  int v569; // w2
  __int64 v570; // x3
  int v571; // w1
  int v572; // w2
  __int64 v573; // x3
  int v574; // w1
  int v575; // w2
  __int64 v576; // x3
  int v577; // w1
  int v578; // w2
  __int64 v579; // x3
  int v580; // w1
  int v581; // w2
  __int64 v582; // x3
  int v583; // w1
  int v584; // w2
  __int64 v585; // x3
  int v586; // w1
  int v587; // w2
  __int64 v588; // x3
  int v589; // w1
  int v590; // w2
  __int64 v591; // x3
  int v592; // w1
  int v593; // w2
  __int64 v594; // x3
  int v595; // w1
  int v596; // w2
  __int64 v597; // x3
  int v598; // w1
  int v599; // w2
  __int64 v600; // x3
  int v601; // w1
  int v602; // w2
  __int64 v603; // x3
  int v604; // w1
  int v605; // w2
  __int64 v606; // x3
  int v607; // w1
  int v608; // w2
  __int64 v609; // x3
  int v610; // w1
  int v611; // w2
  __int64 v612; // x3
  __int64 Instance; // x0
  __int64 v614; // x1
  ConstantMaster_o *MasterData_WarQuestSelectionMaster; // x19
  ConstantLongMaster_o *v616; // x21
  ConstantStrMaster_o *v617; // x20
  int32_t Value_28723684; // w22
  BalanceConfig_c *v619; // x8
  BalanceConfig_c *v620; // x8
  int64_t Value_28723108; // x0
  BalanceConfig_c *v622; // x8
  int32_t Value; // w0
  BalanceConfig_c *v624; // x8
  int32_t v625; // w0
  BalanceConfig_c *v626; // x8
  ManagerConfig_c *v627; // x0
  int64_t ServerTimeOverLimit; // x23
  int64_t SERVER_TIME_OVER_LIMIT; // x21
  BalanceConfig_c *v630; // x0
  int32_t v631; // w21
  int32_t v632; // w0
  BalanceConfig_c *v633; // x8
  int32_t v634; // w21
  int32_t v635; // w0
  System_String_o *v636; // x1
  struct System_String_o **p_UseTermsAgreementRequiredAppVersion; // x0
  System_String_o *v638; // x1
  struct System_String_o **p_UseTermsLatestVersion; // x0
  bool v640; // w9
  int v641; // w9
  System_Int32_array *ValueArray; // x1
  struct System_Int32_array **p_CombineServantSkillIds; // x0
  System_String_o *v644; // x0
  const MethodInfo *v645; // x2
  System_Int32_array *v646; // x1
  struct System_Int32_array **p_ServantIdsBirthdayBeforeValentine; // x0
  System_String_o *v648; // x0
  const MethodInfo *v649; // x2
  System_Int32_array *v650; // x0
  BalanceConfig_c *v651; // x8
  System_Int32_array *v652; // x21
  struct System_Int32_array **p_ServantIdsIgnoreFormChange; // x0
  int32_t v654; // w0
  BalanceConfig_c *v655; // x8
  int32_t v656; // w21
  int32_t v657; // w0
  int32_t v658; // w0
  BalanceConfig_c *v659; // x8
  System_String_o *v660; // x0
  BalanceConfig_c *v661; // x0
  float v662; // w21
  System_String_o *v663; // x0
  BalanceConfig_c *v664; // x0
  float v665; // w21
  System_String_o *v666; // x0
  BalanceConfig_c *v667; // x0
  float v668; // w21
  System_String_o *v669; // x0
  BalanceConfig_c *v670; // x0
  float v671; // w21
  int32_t v672; // w0
  BalanceConfig_c *v673; // x8
  int32_t v674; // w0
  BalanceConfig_c *v675; // x8
  System_String_o *v676; // x0
  System_String_o *v677; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v678; // x21
  BalanceConfig___c_c *v679; // x8
  struct BalanceConfig___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__219_0; // x22
  Il2CppObject *v682; // x23
  struct BalanceConfig___c_StaticFields *v683; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v684; // x0
  System_Int32_array *v685; // x0
  BalanceConfig_c *v686; // x8
  System_Int32_array *v687; // x21
  struct System_Int32_array **p_PresentBoxFilterSvtEquipMaterial; // x0
  int32_t v689; // w0
  int32_t v690; // w21
  BalanceConfig_c *v691; // x0
  int32_t v692; // w0
  int32_t v693; // w21
  BalanceConfig_c *v694; // x0
  int32_t v695; // w0
  BalanceConfig_c *v696; // x8
  int32_t v697; // w21
  System_Int32_array *v698; // x1
  struct System_Int32_array **p_ReprintLastWarRaidEventIdList; // x0
  System_Int32_array *v700; // x1
  struct System_Int32_array **p_EventTowerFadeOutDelayTime; // x0
  System_Array_o *v702; // x21
  BalanceConfig_c *v703; // x0
  _QWORD *v704; // x0
  int32_t v705; // w0
  BalanceConfig_c *v706; // x8
  int v707; // w21
  System_Int32_array *v708; // x1
  struct System_Int32_array **p_EventBoardGameDiceButtonPostion; // x0
  unsigned int v710; // w8
  __int64 v711; // x21
  BalanceConfig_c *v712; // x0
  struct System_Int32_array **v713; // x0
  System_Int32_array *v714; // x0
  BalanceConfig_c *v715; // x8
  System_Int32_array *v716; // x21
  struct System_Int32_array **p_MainInterludeWarIdOnMaterial; // x0
  __int64 v718; // x21
  BalanceConfig_c *v719; // x0
  struct System_Int32_array **v720; // x0
  System_Int32_array *v721; // x0
  BalanceConfig_c *v722; // x8
  System_Int32_array *v723; // x21
  struct System_Int32_array **p_EventBoardGameMapIdList; // x0
  System_String_o *v725; // x21
  BalanceConfig_c *v726; // x0
  struct System_String_o **p_OrdealCallClearBgmName; // x0
  System_Array_o *v728; // x21
  System_Int32_array *v729; // x0
  BalanceConfig_c *v730; // x8
  System_Int32_array *v731; // x21
  struct System_Int32_array **p_consumeStormPodSpotId; // x0
  System_Int32_array *v733; // x1
  struct System_Int32_array **p_StormPodHelpIds; // x0
  System_String_array *ValueStringArray; // x1
  struct System_String_array **p_legacyAspectMovies; // x0
  System_Int32_array *v737; // x1
  struct System_Int32_array **p_fullScreenNPChrs; // x0
  System_Int32_array *v739; // x1
  struct System_Int32_array **p_fullScreenNPSeqIds; // x0
  System_String_o *v741; // x1
  struct System_String_o **p_IOS_ExaminationNewsUrl; // x0
  struct BalanceConfig_StaticFields *v743; // x9
  struct System_String_o **v744; // x0
  int32_t v745; // w0
  BalanceConfig_c *v746; // x8
  int32_t v747; // w21
  System_String_array *v748; // x1
  struct System_String_array **p_UIStandFigureROffsetEffectNames; // x0
  System_String_array *v750; // x1
  struct System_String_array **p_UIStandFigureROffsetImages; // x0
  BalanceConfig_c *v752; // x0
  __int64 v753; // x21
  __int64 v754; // x1
  __int64 v755; // x1
  __int64 v756; // x1
  __int64 v757; // x1
  __int64 v758; // x1
  __int64 v759; // x1
  __int64 v760; // x1
  BalanceConfig_c *v761; // x0
  struct System_String_array **v762; // x0
  __int64 v763; // x21
  __int64 v764; // x1
  __int64 v765; // x1
  __int64 v766; // x1
  __int64 v767; // x1
  __int64 v768; // x1
  __int64 v769; // x1
  __int64 v770; // x1
  __int64 v771; // x1
  __int64 v772; // x1
  __int64 v773; // x1
  __int64 v774; // x1
  __int64 v775; // x1
  __int64 v776; // x1
  __int64 v777; // x1
  __int64 v778; // x1
  __int64 v779; // x1
  __int64 v780; // x1
  __int64 v781; // x1
  BalanceConfig_c *v782; // x0
  struct System_String_array **v783; // x0
  int32_t v784; // w0
  BalanceConfig_c *v785; // x8
  int32_t v786; // w21
  bool v787; // w9
  int32_t v788; // w0
  BalanceConfig_c *v789; // x8
  int32_t v790; // w0
  BalanceConfig_c *v791; // x8
  int32_t v792; // w0
  BalanceConfig_c *v793; // x8
  int32_t v794; // w0
  BalanceConfig_c *v795; // x8
  System_Int32_array *v796; // x1
  struct System_Int32_array **p_MainChaptersWithEventId; // x0
  int32_t v798; // w0
  BalanceConfig_c *v799; // x8
  System_Int32_array *v800; // x1
  struct System_Int32_array **p_TreasureDevicesForcedOpenEffect; // x0
  System_Int32_array *v802; // x1
  struct System_Int32_array **p_HeroineTreasureDeviceRankUpEffects; // x0
  int32_t v804; // w0
  BalanceConfig_c *v805; // x8
  int32_t v806; // w0
  BalanceConfig_c *v807; // x8
  System_Int32_array *v808; // x1
  struct System_Int32_array **p_Extra1SortOrderClassIds; // x0
  System_Int32_array *v810; // x1
  struct System_Int32_array **p_Extra2SortOrderClassIds; // x0
  int32_t v812; // w0
  BalanceConfig_c *v813; // x8
  int32_t v814; // w0
  BalanceConfig_c *v815; // x8
  System_Int32_array *v816; // x1
  struct System_Int32_array **p_NotUIChangeMapIds; // x0
  System_Int32_array *v818; // x1
  struct System_Int32_array **p_LimitSealedDialogMaxLimitOpenIds; // x0
  System_Int32_array *v820; // x1
  struct System_Int32_array **p_OrdealCallChapterFolderEventUIDispWarIds; // x0
  System_Int32_array *v822; // x1
  struct System_Int32_array **p_RecoveryFatigueDelayedChangeBgEvents; // x0
  System_Int32_array *v824; // x1
  struct System_Int32_array **p_noneDisplayFreeQuestMaterial; // x0
  System_Int32_array *v826; // x1
  struct System_Int32_array **p_NotSendTrackEventAtWarIds; // x0
  int32_t v828; // w0
  BalanceConfig_c *v829; // x8
  System_Int32_array *v830; // x1
  struct System_Int32_array **p_NotRequiredPlayWarIds; // x0
  bool v832; // w9
  bool v833; // w9
  System_String_o *v834; // x1
  struct System_String_o **p_LoginQuestReturnTerminalDialogMessage; // x0
  __int64 v836; // x0
  __int64 v837; // x0
  float result; // [xsp+Ch] [xbp-54h] BYREF
  System_RuntimeFieldHandle_o v839; // 0:w1.4
  System_RuntimeFieldHandle_o v840; // 0:w1.4

  if ( (byte_42E660A & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&char___TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantLongMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantStrMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_string__int___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v19, v20, v21);
    sub_B5D5C4(&Method_System_Func_string__int___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Func_string__int__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&int___TypeInfo, v28, v29, v30);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&System_Math_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    sub_B5D5C4(&string___TypeInfo, v40, v41, v42);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__84DF4B72A51E01473BC25693E526BC603A140C4300062B4A7F64A9F7D00ABB95,
      v43,
      v44,
      v45);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__A1FBA00A0F8840358C0A54605FFD365F75E3A3D7AFF25F48F474C4E89BB0B37D,
      v46,
      v47,
      v48);
    sub_B5D5C4(&Method_BalanceConfig___c__Initialize_b__219_0__, v49, v50, v51);
    sub_B5D5C4(&BalanceConfig___c_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_8792/*"MAX_USER_ITEM"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_8354/*"JEKYLL_SVT_ID"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_1114/*"1053912:100:0"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_13604/*"TREASURE_DEVICES_FORCED_OPEN_EFFECT"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_12286/*"SHOP_DETAIL_CHECK_DIALOG_FONT_SIZE"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_8485/*"LIMIT_SEALED_DIALOG_MAX_LIMIT_OPEN_IDS"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_8791/*"MAX_USER_COMMAND_CODE"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_9947/*"OTHER_IMAGE_LIMIT_COUNT"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_8713/*"MASHU_SVT_ID3"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_4671/*"DISABLE_FRIENDSHIP_EXCEED"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_12549/*"STORMPOD_HELP_IDS"*/, v85, v86, v87);
    sub_B5D5C4(&StringLiteral_11208/*"REPRINT_LAST_WAR_RAID_EVENT_ID_LIST"*/, v88, v89, v90);
    sub_B5D5C4(&StringLiteral_17010/*"bit_result_bond"*/, v91, v92, v93);
    sub_B5D5C4(&StringLiteral_8783/*"MAX_MANA"*/, v94, v95, v96);
    sub_B5D5C4(&StringLiteral_5643/*"EVENT_BOARD_GAME_DICE_BUTTON_POS"*/, v97, v98, v99);
    sub_B5D5C4(&StringLiteral_1216/*"5047002:100:0"*/, v100, v101, v102);
    sub_B5D5C4(&StringLiteral_5816/*"EVENT_TOWER_FADEOUT_PLAY_TIME"*/, v103, v104, v105);
    sub_B5D5C4(&StringLiteral_9406/*"NONE_DISPLAY_FREE_QUEST_MATERIAL"*/, v106, v107, v108);
    sub_B5D5C4(&StringLiteral_1113/*"1053911:100:0"*/, v109, v110, v111);
    sub_B5D5C4(&StringLiteral_1112/*"1053910:100:0"*/, v112, v113, v114);
    sub_B5D5C4(&StringLiteral_7534/*"IS_WAR_BOARD_AI_FILTER_WASTE_ROUTE"*/, v115, v116, v117);
    sub_B5D5C4(&StringLiteral_19488/*"https://view.fate-go.jp/"*/, v118, v119, v120);
    sub_B5D5C4(&StringLiteral_7191/*"HYDE_SVT_ID"*/, v121, v122, v123);
    sub_B5D5C4(&StringLiteral_9833/*"OBERON_CHOCO_SVT_ID"*/, v124, v125, v126);
    sub_B5D5C4(&StringLiteral_6432/*"FIX_MAIN_SUPPORT_DECK_NUM"*/, v127, v128, v129);
    sub_B5D5C4(&StringLiteral_8711/*"MASHU_SVT_ID1"*/, v130, v131, v132);
    sub_B5D5C4(&StringLiteral_3265/*"COMBINE_SERVANT_SKILL_IDS"*/, v133, v134, v135);
    sub_B5D5C4(&StringLiteral_1109/*"1053900:100:0"*/, v136, v137, v138);
    sub_B5D5C4(&StringLiteral_9938/*"ORT_FIRST_QUEST_ID"*/, v139, v140, v141);
    sub_B5D5C4(&StringLiteral_8804/*"MEMORY_DECK_LIMIT_BY_QUEST"*/, v142, v143, v144);
    sub_B5D5C4(&StringLiteral_5646/*"EVENT_BOARD_GAME_MAP_ID_LIST"*/, v145, v146, v147);
    sub_B5D5C4(&StringLiteral_8526/*"LOGIN_QUEST_RETURN_TERMINAL_DIALOG_MESSAGE"*/, v148, v149, v150);
    sub_B5D5C4(&StringLiteral_9462/*"NPC_FRIEND_POINT"*/, v151, v152, v153);
    sub_B5D5C4(&StringLiteral_3047/*"CLASS_BOARD_2D_CAMERA_DEFAULT_SIZE"*/, v154, v155, v156);
    sub_B5D5C4(&StringLiteral_1214/*"5047000:100:0"*/, v157, v158, v159);
    sub_B5D5C4(&StringLiteral_11681/*"SAME_CLASS_MULI_EXP"*/, v160, v161, v162);
    sub_B5D5C4(&StringLiteral_8777/*"MAX_EVENT_ACTIVITY_POINT"*/, v163, v164, v165);
    sub_B5D5C4(&StringLiteral_1184/*"3D_MAP_CAMERA_MOVE_EASING_TYPE"*/, v166, v167, v168);
    sub_B5D5C4(&StringLiteral_9368/*"NEED_REBOOT_TIME"*/, v169, v170, v171);
    sub_B5D5C4(&StringLiteral_9935/*"ORDEAL_CALL_CHAPTER_FOLDER_EVENT_UI_DISP_WAR_IDS"*/, v172, v173, v174);
    sub_B5D5C4(&StringLiteral_6529/*"FREE_GACHA_RESET_AT"*/, v175, v176, v177);
    sub_B5D5C4(&StringLiteral_8795/*"MAX_USER_SVT_EQUIP"*/, v178, v179, v180);
    sub_B5D5C4(&StringLiteral_11714/*"SCENARIO_SPEED_HIGH"*/, v181, v182, v183);
    sub_B5D5C4(&StringLiteral_6563/*"FRIEND_POINT"*/, v184, v185, v186);
    sub_B5D5C4(&StringLiteral_1106/*"1053000:100:0"*/, v187, v188, v189);
    sub_B5D5C4(&StringLiteral_17025/*"bit_result_servant"*/, v190, v191, v192);
    sub_B5D5C4(&StringLiteral_5834/*"EXCLUSIVE_NPC_SERVANT_ID_START"*/, v193, v194, v195);
    sub_B5D5C4(&StringLiteral_8784/*"MAX_NEAR_PRESENT_OFFSET_NUM"*/, v196, v197, v198);
    sub_B5D5C4(&StringLiteral_11196/*"RECOVERY_FATIGUE_DELAYED_CHANGE_BG_EVENTS"*/, v199, v200, v201);
    sub_B5D5C4(&StringLiteral_10580/*"POWERUP_QUEST_WAR_ID"*/, v202, v203, v204);
    sub_B5D5C4(&StringLiteral_1215/*"5047001:100:0"*/, v205, v206, v207);
    sub_B5D5C4(&StringLiteral_12477/*"STAND_FIGURE_R_OFFSET_EFFECT_IMAGES"*/, v208, v209, v210);
    sub_B5D5C4(&StringLiteral_3289/*"COMMAND_CARD_PRM_UP_MAX"*/, v211, v212, v213);
    sub_B5D5C4(&StringLiteral_12480/*"STARTING_MEMBER_FRIENDSHIP_RATE"*/, v214, v215, v216);
    sub_B5D5C4(&StringLiteral_9944/*"ORT_THIRD_FORM_ID"*/, v217, v218, v219);
    sub_B5D5C4(&StringLiteral_12478/*"STAND_FIGURE_R_OFFSET_EFFECT_NAMES"*/, v220, v221, v222);
    sub_B5D5C4(&StringLiteral_1111/*"1053902:100:0"*/, v223, v224, v225);
    sub_B5D5C4(&StringLiteral_8714/*"MASHU_TD_GRADE_UP_QUEST_ID"*/, v226, v227, v228);
    sub_B5D5C4(&StringLiteral_8790/*"MAX_STONE"*/, v229, v230, v231);
    sub_B5D5C4(&StringLiteral_8779/*"MAX_FRIENDPOINT"*/, v232, v233, v234);
    sub_B5D5C4(&StringLiteral_9446/*"NOT_UI_CHANGE_MAP_IDS"*/, v235, v236, v237);
    sub_B5D5C4(&StringLiteral_6412/*"FES_WAR_ID"*/, v238, v239, v240);
    sub_B5D5C4(&StringLiteral_9942/*"ORT_LATE_QUEST_ID"*/, v241, v242, v243);
    sub_B5D5C4(&StringLiteral_17026/*"bit_result_skill"*/, v244, v245, v246);
    sub_B5D5C4(&StringLiteral_9939/*"ORT_LATE_PHASE_BREAK"*/, v247, v248, v249);
    sub_B5D5C4(&StringLiteral_17011/*"bit_result_command_card_exceed"*/, v250, v251, v252);
    sub_B5D5C4(&StringLiteral_3052/*"CLASS_BOARD_CAMERA_SELECT_MOVE_MAX_DISTANCE"*/, v253, v254, v255);
    sub_B5D5C4(&StringLiteral_3053/*"CLASS_BOARD_CAMERA_SELECT_SEC_MAX"*/, v256, v257, v258);
    sub_B5D5C4(&StringLiteral_8794/*"MAX_USER_SVT"*/, v259, v260, v261);
    sub_B5D5C4(&StringLiteral_9845/*"ONE_ACT"*/, v262, v263, v264);
    sub_B5D5C4(&StringLiteral_6431/*"FIX_EVENT_SUPPORT_DECK_NUM"*/, v265, v266, v267);
    sub_B5D5C4(&StringLiteral_15491/*"WAR_BOARD_EVAL_FACTORS_AFFECT_RATIO"*/, v268, v269, v270);
    sub_B5D5C4(&StringLiteral_6531/*"FRIENDPOINT_BOOST_ITEM_EFFECT_ID"*/, v271, v272, v273);
    sub_B5D5C4(&StringLiteral_17015/*"bit_result_friendship_exceed"*/, v274, v275, v276);
    sub_B5D5C4(&StringLiteral_8715/*"MASHU_TD_GRADE_UP_QUEST_PHASE"*/, v277, v278, v279);
    sub_B5D5C4(&StringLiteral_11214/*"REQUEST_TOP_HOME_EXPIRATION_DATE_SEC_UPDATE_EVENT_MAP"*/, v280, v281, v282);
    sub_B5D5C4(&StringLiteral_3051/*"CLASS_BOARD_CAMERA_SELECT_EASING_TYPE"*/, v283, v284, v285);
    sub_B5D5C4(&StringLiteral_7528/*"IS_ENABLE_OLD_BLOCK_SHORTEST_ROUTE"*/, v286, v287, v288);
    sub_B5D5C4(&StringLiteral_8691/*"MAIN_CHAPTERS_WITH_EVENT_ID"*/, v289, v290, v291);
    sub_B5D5C4(&StringLiteral_1110/*"1053901:100:0"*/, v292, v293, v294);
    sub_B5D5C4(&StringLiteral_17012/*"bit_result_extraskill"*/, v295, v296, v297);
    sub_B5D5C4(&StringLiteral_1217/*"5047900:100:0"*/, v298, v299, v300);
    sub_B5D5C4(&StringLiteral_9847/*"ONE_RP"*/, v301, v302, v303);
    sub_B5D5C4(&StringLiteral_8797/*"MAX_USER_SVT_STORAGE"*/, v304, v305, v306);
    sub_B5D5C4(&StringLiteral_9941/*"ORT_LATE_PHASE_SECOND_FORM"*/, v307, v308, v309);
    sub_B5D5C4(&StringLiteral_3423/*"CONSUME_STORMPOD_SPOT_ID"*/, v310, v311, v312);
    sub_B5D5C4(&StringLiteral_2596/*"BEFORE_CHANGE_FREE_DRAW_NUM"*/, v313, v314, v315);
    sub_B5D5C4(&StringLiteral_7533/*"IS_WAR_BOARD_AI_FILTER_NOT_ACTION"*/, v316, v317, v318);
    sub_B5D5C4(&StringLiteral_2975/*"CAMPAIGN_RESET_AT"*/, v319, v320, v321);
    sub_B5D5C4(&StringLiteral_11136/*"RAID_DEFEATED_EFFECT_TIME"*/, v322, v323, v324);
    sub_B5D5C4(&StringLiteral_6613/*"FULL_SCREEN_NP_CHRS"*/, v325, v326, v327);
    sub_B5D5C4(&StringLiteral_6451/*"FOLLOWER_REFRESH_RESET_TIME"*/, v328, v329, v330);
    sub_B5D5C4(&StringLiteral_3089/*"CLASS_BOARD_RELEASE_QUEST_ID"*/, v331, v332, v333);
    sub_B5D5C4(&StringLiteral_6484/*"FOLLOW_NUM"*/, v334, v335, v336);
    sub_B5D5C4(&StringLiteral_2971/*"CAMERA_2D_RESET_DURATION"*/, v337, v338, v339);
    sub_B5D5C4(&StringLiteral_12527/*"STONE_FRAGMENT_EXCHANGE_NOTICE_MAX"*/, v340, v341, v342);
    sub_B5D5C4(&StringLiteral_7536/*"ITEM_ID_QP"*/, v343, v344, v345);
    sub_B5D5C4(&StringLiteral_12714/*"SWIMSUIT_MELT_SVT_ID"*/, v346, v347, v348);
    sub_B5D5C4(&StringLiteral_7129/*"HEROINE_LIMIT_COUNT_ORTINAX_REFURBISHED"*/, v349, v350, v351);
    sub_B5D5C4(&StringLiteral_17022/*"bit_result_noble"*/, v352, v353, v354);
    sub_B5D5C4(&StringLiteral_5602/*"EQUIP_GET_EFFECT_ID"*/, v355, v356, v357);
    sub_B5D5C4(&StringLiteral_9433/*"NOT_FRIEND_POINT"*/, v358, v359, v360);
    sub_B5D5C4(&StringLiteral_5648/*"EVENT_BOARD_GAME_NEXT_BOARD_QUEST_ID"*/, v361, v362, v363);
    sub_B5D5C4(&StringLiteral_9940/*"ORT_LATE_PHASE_DEAD"*/, v364, v365, v366);
    sub_B5D5C4(&StringLiteral_8775/*"MAX_BLACK_LIST_NUM"*/, v367, v368, v369);
    sub_B5D5C4(&StringLiteral_8786/*"MAX_PRESENT_RECEIVE_NUM"*/, v370, v371, v372);
    sub_B5D5C4(&StringLiteral_15268/*"VALENTINE_RELEASE_AT"*/, v373, v374, v375);
    sub_B5D5C4(&StringLiteral_8737/*"MASTER_MISSION_SVT_ID1"*/, v376, v377, v378);
    sub_B5D5C4(&StringLiteral_8534/*"LOSTBELT6_CLEAR_QUEST_ID"*/, v379, v380, v381);
    sub_B5D5C4(&StringLiteral_5649/*"EVENT_BOARD_GAME_NEXT_ROUND_QUEST_ID"*/, v382, v383, v384);
    sub_B5D5C4(&StringLiteral_11213/*"REQUEST_RAID_UPDATE_EVENT_MAP"*/, v385, v386, v387);
    sub_B5D5C4(&StringLiteral_12519/*"STATUS_UP_ADJUST_ATK"*/, v388, v389, v390);
    sub_B5D5C4(&StringLiteral_1689/*"AFTRE_CHANGE_FREE_DRAW_NUM"*/, v391, v392, v393);
    sub_B5D5C4(&StringLiteral_1186/*"3D_MAP_CAMERA_MOVE_TIME_CONSTANT"*/, v394, v395, v396);
    sub_B5D5C4(&StringLiteral_6481/*"FOLLOW_FRIEND_POINT"*/, v397, v398, v399);
    sub_B5D5C4(&StringLiteral_7532/*"IS_WAR_BOARD_AI_CALC_EVAL_SUM"*/, v400, v401, v402);
    sub_B5D5C4(&StringLiteral_8781/*"MAX_FRIEND_HISTORY_NUM"*/, v403, v404, v405);
    sub_B5D5C4(&StringLiteral_11716/*"SCENARIO_SPEED_STEP"*/, v406, v407, v408);
    sub_B5D5C4(&StringLiteral_5815/*"EVENT_TOWER_FADEOUT_DELAY_TIME"*/, v409, v410, v411);
    sub_B5D5C4(&StringLiteral_8525/*"LOGIN_DAY"*/, v412, v413, v414);
    sub_B5D5C4(&StringLiteral_5546/*"ENABLE_SERIAL_CODE"*/, v415, v416, v417);
    sub_B5D5C4(&StringLiteral_8750/*"MATERIAL_MAIN_INTERLUDE_WAR_ID"*/, v418, v419, v420);
    sub_B5D5C4(&StringLiteral_5873/*"EXTRA2_SORT_ORDER_CLASS_IDS"*/, v421, v422, v423);
    sub_B5D5C4(&StringLiteral_6912/*"GACHA_DAILY_MAX_DRAW_NUM_RESET_AT"*/, v424, v425, v426);
    sub_B5D5C4(&StringLiteral_13592/*"TREASUREDEVICE_ID_MASHU3"*/, v427, v428, v429);
    sub_B5D5C4(&StringLiteral_8527/*"LOGIN_RESET_AT"*/, v430, v431, v432);
    sub_B5D5C4(&StringLiteral_1218/*"5047901:100:0"*/, v433, v434, v435);
    sub_B5D5C4(&StringLiteral_1643/*"ACCOUNTING_INITIALIZE_TIMEOUT"*/, v436, v437, v438);
    sub_B5D5C4(&StringLiteral_1221/*"5047911:100:0"*/, v439, v440, v441);
    sub_B5D5C4(&StringLiteral_7529/*"IS_EVENT_POINT_MENU"*/, v442, v443, v444);
    sub_B5D5C4(&StringLiteral_10604/*"PRESENT_BOX_FILTER_SVT_EQUIP_MATERIAL"*/, v445, v446, v447);
    sub_B5D5C4(&StringLiteral_11134/*"RACE_REWARD_RANK_MAX"*/, v448, v449, v450);
    sub_B5D5C4(&StringLiteral_9445/*"NOT_SEND_TRACK_EVENT_AT_WAR_IDS"*/, v451, v452, v453);
    sub_B5D5C4(&StringLiteral_8712/*"MASHU_SVT_ID2"*/, v454, v455, v456);
    sub_B5D5C4(&StringLiteral_11715/*"SCENARIO_SPEED_LOW"*/, v457, v458, v459);
    sub_B5D5C4(&StringLiteral_9936/*"ORDEAL_CALL_CLEAR_BGM_NAME"*/, v460, v461, v462);
    sub_B5D5C4(&StringLiteral_8788/*"MAX_RARE_PRI"*/, v463, v464, v465);
    sub_B5D5C4(&StringLiteral_5872/*"EXTRA1_SORT_ORDER_CLASS_IDS"*/, v466, v467, v468);
    sub_B5D5C4(&StringLiteral_2679/*"BP_EXPRESSION"*/, v469, v470, v471);
    sub_B5D5C4(&StringLiteral_8789/*"MAX_RP"*/, v472, v473, v474);
    sub_B5D5C4(&StringLiteral_12520/*"STATUS_UP_ADJUST_HP"*/, v475, v476, v477);
    sub_B5D5C4(&StringLiteral_9846/*"ONE_COMMAND_SPELL"*/, v478, v479, v480);
    sub_B5D5C4(&StringLiteral_14920/*"USE_TERMS_LATEST_VERSION"*/, v481, v482, v483);
    sub_B5D5C4(&StringLiteral_3170/*"CLOSE_SECRET_TREASURE_DEVICE_QUEST_CLEAR"*/, v484, v485, v486);
    sub_B5D5C4(&StringLiteral_10640/*"PRESENT_VALID_TIME"*/, v487, v488, v489);
    sub_B5D5C4(&StringLiteral_8724/*"MASTER_MISSION_ALERT_TIME"*/, v490, v491, v492);
    sub_B5D5C4(&StringLiteral_2619/*"BIRTHDAY_BEFORE_VALENTINE_SVT_ID"*/, v493, v494, v495);
    sub_B5D5C4(&StringLiteral_6614/*"FULL_SCREEN_NP_SEQ_IDS"*/, v496, v497, v498);
    sub_B5D5C4(&StringLiteral_8778/*"MAX_EVENT_POINT"*/, v499, v500, v501);
    sub_B5D5C4(&StringLiteral_8513/*"LOCATION_REWARD_DLG_COLUMN"*/, v502, v503, v504);
    sub_B5D5C4(&StringLiteral_8776/*"MAX_COMMAND_SPELL"*/, v505, v506, v507);
    sub_B5D5C4(&StringLiteral_8693/*"MAIN_INTERLUDE_WAR_ID"*/, v508, v509, v510);
    sub_B5D5C4(&StringLiteral_7398/*"IOS_EXAMINATION_NEWS_URL"*/, v511, v512, v513);
    sub_B5D5C4(&StringLiteral_1107/*"1053001:100:0"*/, v514, v515, v516);
    sub_B5D5C4(&StringLiteral_12633/*"SUPPORT_DECK_MAX"*/, v517, v518, v519);
    sub_B5D5C4(&StringLiteral_9943/*"ORT_SECONDE_FORM_ID"*/, v520, v521, v522);
    sub_B5D5C4(&StringLiteral_1185/*"3D_MAP_CAMERA_MOVE_TIME_COEFFICIENT"*/, v523, v524, v525);
    sub_B5D5C4(&StringLiteral_7347/*"IGNORE_FORM_CHANGE_SVT_ID"*/, v526, v527, v528);
    sub_B5D5C4(&StringLiteral_8793/*"MAX_USER_LV"*/, v529, v530, v531);
    sub_B5D5C4(&StringLiteral_14919/*"USE_TERMS_AGREEMENT_REQUIERD_APP_VERSION"*/, v532, v533, v534);
    sub_B5D5C4(&StringLiteral_8780/*"MAX_FRIENDPOINT_BOOST_ITEM_USE"*/, v535, v536, v537);
    sub_B5D5C4(&StringLiteral_8796/*"MAX_USER_SVT_EQUIP_STORAGE"*/, v538, v539, v540);
    sub_B5D5C4(&StringLiteral_1220/*"5047910:100:0"*/, v541, v542, v543);
    sub_B5D5C4(&StringLiteral_8787/*"MAX_QP"*/, v544, v545, v546);
    sub_B5D5C4(&StringLiteral_7530/*"IS_IOS_EXAMINATION"*/, v547, v548, v549);
    sub_B5D5C4(&StringLiteral_9440/*"NOT_REQUIRED_WAR_IDS"*/, v550, v551, v552);
    sub_B5D5C4(&StringLiteral_3054/*"CLASS_BOARD_CAMERA_SELECT_SEC_MIN"*/, v553, v554, v555);
    sub_B5D5C4(&StringLiteral_6528/*"FREE_DRAW_NUM_CHANGE_AT"*/, v556, v557, v558);
    sub_B5D5C4(&StringLiteral_5686/*"EVENT_DAILY_POINT_RESET_AT"*/, v559, v560, v561);
    sub_B5D5C4(&StringLiteral_1222/*"5047912:100:0"*/, v562, v563, v564);
    sub_B5D5C4(&StringLiteral_1108/*"1053002:100:0"*/, v565, v566, v567);
    sub_B5D5C4(&StringLiteral_4642/*"DECK_MAX"*/, v568, v569, v570);
    sub_B5D5C4(&StringLiteral_10651/*"PROLOGUE_QUEST_ID"*/, v571, v572, v573);
    sub_B5D5C4(&StringLiteral_3171/*"CLOSE_SECRET_TREASURE_DEVICE_SVT_GET"*/, v574, v575, v576);
    sub_B5D5C4(&StringLiteral_12551/*"STORY_WAR_ID"*/, v577, v578, v579);
    sub_B5D5C4(&StringLiteral_8785/*"MAX_PRESENT_BOX_NUM"*/, v580, v581, v582);
    sub_B5D5C4(&StringLiteral_11713/*"SCENARIO_SPEED_DEFAULT"*/, v583, v584, v585);
    sub_B5D5C4(&StringLiteral_13578/*"TITLE_FLOW_OLD"*/, v586, v587, v588);
    sub_B5D5C4(&StringLiteral_1187/*"3D_MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE"*/, v589, v590, v591);
    sub_B5D5C4(&StringLiteral_1164/*"20220731_BOOST_RATE_1"*/, v592, v593, v594);
    sub_B5D5C4(&StringLiteral_8455/*"LEGACY_ASPECT_MOVIES"*/, v595, v596, v597);
    sub_B5D5C4(&StringLiteral_3290/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, v598, v599, v600);
    sub_B5D5C4(&StringLiteral_1219/*"5047902:100:0"*/, v601, v602, v603);
    sub_B5D5C4(&StringLiteral_5869/*"EXPIRATION_DATE"*/, v604, v605, v606);
    sub_B5D5C4(&StringLiteral_9937/*"ORDEAL_CALL_WAR_ID"*/, v607, v608, v609);
    sub_B5D5C4(&StringLiteral_7130/*"HEROINE_TREASURE_DEVICE_RANKUP_EFFECTS"*/, v610, v611, v612);
    byte_42E660A = 1;
  }
  result = 0.0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_286;
  MasterData_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_286;
  v616 = (ConstantLongMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantLongMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_286;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_286;
  v617 = (ConstantStrMaster_o *)Instance;
  Value_28723684 = ConstantMaster__GetValue_28723684(
                     MasterData_WarQuestSelectionMaster,
                     (System_String_o *)StringLiteral_1164/*"20220731_BOOST_RATE_1"*/,
                     200,
                     0LL);
  v619 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v619 = BalanceConfig_TypeInfo;
  }
  v619->static_fields->CriticalRateToAddByQuickFirstBonus = Value_28723684;
  BalanceConfig_TypeInfo->static_fields->QpMax = ConstantMaster__GetValue(
                                                   MasterData_WarQuestSelectionMaster,
                                                   (System_String_o *)StringLiteral_8787/*"MAX_QP"*/,
                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ManaMax = ConstantMaster__GetValue(
                                                     MasterData_WarQuestSelectionMaster,
                                                     (System_String_o *)StringLiteral_8783/*"MAX_MANA"*/,
                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->RarePriMax = ConstantMaster__GetValue(
                                                        MasterData_WarQuestSelectionMaster,
                                                        (System_String_o *)StringLiteral_8788/*"MAX_RARE_PRI"*/,
                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->StoneMax = ConstantMaster__GetValue(
                                                      MasterData_WarQuestSelectionMaster,
                                                      (System_String_o *)StringLiteral_8790/*"MAX_STONE"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->FriendPointMax = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_8779/*"MAX_FRIENDPOINT"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->UserLevelMax = ConstantMaster__GetValue(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_8793/*"MAX_USER_LV"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->UserItemMax = ConstantMaster__GetValue(
                                                         MasterData_WarQuestSelectionMaster,
                                                         (System_String_o *)StringLiteral_8792/*"MAX_USER_ITEM"*/,
                                                         0LL);
  Instance = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_8792/*"MAX_USER_ITEM"*/, 0LL);
  v620 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->UserEventItemMax = Instance;
  if ( !v616 )
    goto LABEL_286;
  Value_28723108 = ConstantLongMaster__GetValue_28723108(
                     v616,
                     (System_String_o *)StringLiteral_8778/*"MAX_EVENT_POINT"*/,
                     v620->static_fields->UserPointEventMax,
                     0LL);
  v622 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->UserPointEventMax = Value_28723108;
  BalanceConfig_TypeInfo->static_fields->UserEventActivityPointMax = ConstantLongMaster__GetValue_28723108(
                                                                       v616,
                                                                       (System_String_o *)StringLiteral_8777/*"MAX_EVENT_ACTIVITY_POINT"*/,
                                                                       v622->static_fields->UserEventActivityPointMax,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxMax = ConstantMaster__GetValue(
                                                           MasterData_WarQuestSelectionMaster,
                                                           (System_String_o *)StringLiteral_8785/*"MAX_PRESENT_BOX_NUM"*/,
                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxCheckMax = ConstantMaster__GetValue(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (System_String_o *)StringLiteral_8786/*"MAX_PRESENT_RECEIVE_NUM"*/,
                                                                0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxValidTime = ConstantMaster__GetValue(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 (System_String_o *)StringLiteral_10640/*"PRESENT_VALID_TIME"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxNearMaxOffset = ConstantMaster__GetValue(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_8784/*"MAX_NEAR_PRESENT_OFFSET_NUM"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->ServantFrameMax = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8794/*"MAX_USER_SVT"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantEquipFrameMax = ConstantMaster__GetValue(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  (System_String_o *)StringLiteral_8795/*"MAX_USER_SVT_EQUIP"*/,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCodeFrameMax = ConstantMaster__GetValue(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 (System_String_o *)StringLiteral_8791/*"MAX_USER_COMMAND_CODE"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->DeckMax = ConstantMaster__GetValue(
                                                     MasterData_WarQuestSelectionMaster,
                                                     (System_String_o *)StringLiteral_4642/*"DECK_MAX"*/,
                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->SupportDeckMax = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_12633/*"SUPPORT_DECK_MAX"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_6432/*"FIX_MAIN_SUPPORT_DECK_NUM"*/,
                                                                   0LL);
  Value = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_6431/*"FIX_EVENT_SUPPORT_DECK_NUM"*/, 0LL);
  v624 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum = Value;
  v624->static_fields->SupportMemberMax = v624->static_fields->SupportDeckMemberMax
                                        * v624->static_fields->SupportDeckMax;
  BalanceConfig_TypeInfo->static_fields->UserServantStorageMax = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_8797/*"MAX_USER_SVT_STORAGE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->UserServantEquipStorageMax = ConstantMaster__GetValue(
                                                                        MasterData_WarQuestSelectionMaster,
                                                                        (System_String_o *)StringLiteral_8796/*"MAX_USER_SVT_EQUIP_STORAGE"*/,
                                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameActRecoverCost = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_9845/*"ONE_ACT"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameRpRecoverCost = ConstantMaster__GetValue(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  (System_String_o *)StringLiteral_9847/*"ONE_RP"*/,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameRpMax = ConstantMaster__GetValue(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_8789/*"MAX_RP"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointFriend = ConstantMaster__GetValue(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 (System_String_o *)StringLiteral_6563/*"FRIEND_POINT"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointNotFriend = ConstantMaster__GetValue(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_9433/*"NOT_FRIEND_POINT"*/,
                                                                    0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointNpc = ConstantMaster__GetValue(
                                                              MasterData_WarQuestSelectionMaster,
                                                              (System_String_o *)StringLiteral_9462/*"NPC_FRIEND_POINT"*/,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime1 = ConstantMaster__GetValue(
                                                                       MasterData_WarQuestSelectionMaster,
                                                                       (System_String_o *)StringLiteral_8527/*"LOGIN_RESET_AT"*/,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2 = ConstantMaster__GetValue(
                                                                       MasterData_WarQuestSelectionMaster,
                                                                       (System_String_o *)StringLiteral_2975/*"CAMPAIGN_RESET_AT"*/,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->DailyFreeGachaResetTime = ConstantMaster__GetValue(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_6529/*"FREE_GACHA_RESET_AT"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginDay = ConstantMaster__GetValue(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (System_String_o *)StringLiteral_8525/*"LOGIN_DAY"*/,
                                                                0LL);
  v625 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_9368/*"NEED_REBOOT_TIME"*/, 0LL);
  v626 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ServerTimeOverLimit = v625;
  v627 = ManagerConfig_TypeInfo;
  ServerTimeOverLimit = v626->static_fields->ServerTimeOverLimit;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v627 = ManagerConfig_TypeInfo;
  }
  SERVER_TIME_OVER_LIMIT = v627->static_fields->SERVER_TIME_OVER_LIMIT;
  if ( ServerTimeOverLimit < SERVER_TIME_OVER_LIMIT )
  {
    if ( (BYTE3(v627->vtable._0_Equals.methodPtr) & 4) != 0 && !v627->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v627);
      SERVER_TIME_OVER_LIMIT = ManagerConfig_TypeInfo->static_fields->SERVER_TIME_OVER_LIMIT;
    }
    v630 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v630 = BalanceConfig_TypeInfo;
    }
    v630->static_fields->ServerTimeOverLimit = SERVER_TIME_OVER_LIMIT;
  }
  v631 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_11214/*"REQUEST_TOP_HOME_EXPIRATION_DATE_SEC_UPDATE_EVENT_MAP"*/, 0LL);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v632 = System_Math__Max_45149472(1, v631, 0LL);
  v633 = BalanceConfig_TypeInfo;
  v634 = v632;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v633 = BalanceConfig_TypeInfo;
  }
  v633->static_fields->RequestTopHomeExpirationDateSecUpdateEventMap = v634;
  v635 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_11213/*"REQUEST_RAID_UPDATE_EVENT_MAP"*/, 0LL);
  BalanceConfig_TypeInfo->static_fields->RequestRaidUpdateEventMap = System_Math__Max_45149472(1, v635, 0LL);
  BalanceConfig_TypeInfo->static_fields->RaidDefeatedEffectTime = ConstantMaster__GetValue(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_11136/*"RAID_DEFEATED_EFFECT_TIME"*/,
                                                                    0LL);
  BalanceConfig_TypeInfo->static_fields->CommandSpellMax = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8776/*"MAX_COMMAND_SPELL"*/,
                                                             0LL);
  Instance = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_9846/*"ONE_COMMAND_SPELL"*/, 0LL);
  BalanceConfig_TypeInfo->static_fields->CommandSpellRecoverCost = Instance;
  if ( !v617 )
    goto LABEL_286;
  v636 = ConstantStrMaster__GetValue(v617, (System_String_o *)StringLiteral_14919/*"USE_TERMS_AGREEMENT_REQUIERD_APP_VERSION"*/, 0LL);
  p_UseTermsAgreementRequiredAppVersion = &BalanceConfig_TypeInfo->static_fields->UseTermsAgreementRequiredAppVersion;
  *p_UseTermsAgreementRequiredAppVersion = v636;
  sub_B5D560(p_UseTermsAgreementRequiredAppVersion);
  v638 = ConstantStrMaster__GetValue(v617, (System_String_o *)StringLiteral_14920/*"USE_TERMS_LATEST_VERSION"*/, 0LL);
  p_UseTermsLatestVersion = &BalanceConfig_TypeInfo->static_fields->UseTermsLatestVersion;
  *p_UseTermsLatestVersion = v638;
  sub_B5D560(p_UseTermsLatestVersion);
  v640 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_7530/*"IS_IOS_EXAMINATION"*/, 0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsIOS_Examination = v640;
  BalanceConfig_TypeInfo->static_fields->SerialCodeMenuDispFlg = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_5546/*"ENABLE_SERIAL_CODE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk = ConstantMaster__GetValue(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_12519/*"STATUS_UP_ADJUST_ATK"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp = ConstantMaster__GetValue(
                                                              MasterData_WarQuestSelectionMaster,
                                                              (System_String_o *)StringLiteral_12520/*"STATUS_UP_ADJUST_HP"*/,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->SameClassMultiExp = ConstantMaster__getRateValue(
                                                               (System_String_o *)StringLiteral_11681/*"SAME_CLASS_MULI_EXP"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->SameClassExp = ConstantMaster__GetValue(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_11681/*"SAME_CLASS_MULI_EXP"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdJekyll = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8354/*"JEKYLL_SVT_ID"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdHyde = ConstantMaster__GetValue(
                                                           MasterData_WarQuestSelectionMaster,
                                                           (System_String_o *)StringLiteral_7191/*"HYDE_SVT_ID"*/,
                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdSwimsuitMelt = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_12714/*"SWIMSUIT_MELT_SVT_ID"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu1 = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8711/*"MASHU_SVT_ID1"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu2 = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8712/*"MASHU_SVT_ID2"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu3 = ConstantMaster__GetValue_28723684(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8713/*"MASHU_SVT_ID3"*/,
                                                             800102,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMission1 = ConstantMaster__GetValue(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_8737/*"MASTER_MISSION_SVT_ID1"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->TreasureDeviceIdMashu3 = ConstantMaster__GetValue(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_13592/*"TREASUREDEVICE_ID_MASHU3"*/,
                                                                    0LL);
  Instance = sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_286;
  v641 = *(_DWORD *)(Instance + 24);
  if ( !v641 )
    goto LABEL_285;
  *(_DWORD *)(Instance + 32) = 744450;
  if ( v641 == 1 )
    goto LABEL_285;
  *(_DWORD *)(Instance + 36) = 744452;
  ValueArray = ConstantStrMaster__GetValueArray(
                 v617,
                 (System_String_o *)StringLiteral_3265/*"COMBINE_SERVANT_SKILL_IDS"*/,
                 (System_Int32_array *)Instance,
                 0LL);
  p_CombineServantSkillIds = &BalanceConfig_TypeInfo->static_fields->CombineServantSkillIds;
  *p_CombineServantSkillIds = ValueArray;
  sub_B5D560(p_CombineServantSkillIds);
  BalanceConfig_TypeInfo->static_fields->MashuTdGradeUpQuestId = ConstantMaster__GetValue_28723684(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_8714/*"MASHU_TD_GRADE_UP_QUEST_ID"*/,
                                                                   4000100,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->MashuTdGradeUpQuestPhase = ConstantMaster__GetValue_28723684(
                                                                      MasterData_WarQuestSelectionMaster,
                                                                      (System_String_o *)StringLiteral_8715/*"MASHU_TD_GRADE_UP_QUEST_PHASE"*/,
                                                                      3,
                                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdOberonChoco = ConstantMaster__GetValue_28723684(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  (System_String_o *)StringLiteral_9833/*"OBERON_CHOCO_SVT_ID"*/,
                                                                  9808130,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->Lostbelt6ClearQuestId = ConstantMaster__GetValue_28723684(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_8534/*"LOSTBELT6_CLEAR_QUEST_ID"*/,
                                                                   3001009,
                                                                   0LL);
  v644 = ConstantStrMaster__GetValue(v617, (System_String_o *)StringLiteral_2619/*"BIRTHDAY_BEFORE_VALENTINE_SVT_ID"*/, 0LL);
  v646 = BasicHelper__Convert2IntArray(v644, 0x2Cu, v645);
  p_ServantIdsBirthdayBeforeValentine = &BalanceConfig_TypeInfo->static_fields->ServantIdsBirthdayBeforeValentine;
  *p_ServantIdsBirthdayBeforeValentine = v646;
  sub_B5D560(p_ServantIdsBirthdayBeforeValentine);
  v648 = ConstantStrMaster__GetValue(v617, (System_String_o *)StringLiteral_7347/*"IGNORE_FORM_CHANGE_SVT_ID"*/, 0LL);
  if ( v648 )
  {
    v650 = BasicHelper__Convert2IntArray(v648, 0x2Cu, v649);
    v651 = BalanceConfig_TypeInfo;
    v652 = v650;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v651 = BalanceConfig_TypeInfo;
    }
    p_ServantIdsIgnoreFormChange = &v651->static_fields->ServantIdsIgnoreFormChange;
    *p_ServantIdsIgnoreFormChange = v652;
    sub_B5D560(p_ServantIdsIgnoreFormChange);
  }
  v654 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_15268/*"VALENTINE_RELEASE_AT"*/, 0LL);
  v655 = BalanceConfig_TypeInfo;
  v656 = v654;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v655 = BalanceConfig_TypeInfo;
  }
  v655->static_fields->VtReleaseAt = v656;
  BalanceConfig_TypeInfo->static_fields->BefFreeDrawNum = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_2596/*"BEFORE_CHANGE_FREE_DRAW_NUM"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->AftFreeDrawNum = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_1689/*"AFTRE_CHANGE_FREE_DRAW_NUM"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->DrawNumChangeTime = ConstantMaster__GetValue(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_6528/*"FREE_DRAW_NUM_CHANGE_AT"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerRefreshRestTime = ConstantMaster__GetValue(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_6451/*"FOLLOWER_REFRESH_RESET_TIME"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->FesWarId = ConstantMaster__GetValue(
                                                      MasterData_WarQuestSelectionMaster,
                                                      (System_String_o *)StringLiteral_6412/*"FES_WAR_ID"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->NoneExpireTime = ConstantMaster__GetValue(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_5869/*"EXPIRATION_DATE"*/,
                                                            0LL);
  v657 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_2679/*"BP_EXPRESSION"*/, 0LL);
  BalanceConfig_TypeInfo->static_fields->BpExpresssionType = UnityEngine_Mathf__Clamp_41572460(v657, 0, 1, 0LL);
  BalanceConfig_TypeInfo->static_fields->MaxFriendHistoryNum = ConstantMaster__GetValue(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 (System_String_o *)StringLiteral_8781/*"MAX_FRIEND_HISTORY_NUM"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->MaxBlackListNum = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_8775/*"MAX_BLACK_LIST_NUM"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->raceRewardRankMax = ConstantMaster__GetValue(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_11134/*"RACE_REWARD_RANK_MAX"*/,
                                                               0LL);
  v658 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_8724/*"MASTER_MISSION_ALERT_TIME"*/, 0LL);
  v659 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->MstMissionAlertTime = v658;
  BalanceConfig_TypeInfo->static_fields->LocationRewardDlgColumn = ConstantMaster__GetValue_28723684(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_8513/*"LOCATION_REWARD_DLG_COLUMN"*/,
                                                                     v659->static_fields->LocationRewardDlgColumn,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->CloseSecretTreasureDeviceQuestClear = ConstantMaster__GetValue(
                                                                                 MasterData_WarQuestSelectionMaster,
                                                                                 (System_String_o *)StringLiteral_3170/*"CLOSE_SECRET_TREASURE_DEVICE_QUEST_CLEAR"*/,
                                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->CloseSecretTreasureDeviceSvtGet = ConstantMaster__GetValue(
                                                                             MasterData_WarQuestSelectionMaster,
                                                                             (System_String_o *)StringLiteral_3171/*"CLOSE_SECRET_TREASURE_DEVICE_SVT_GET"*/,
                                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ItemIdQp = ConstantMaster__GetValue(
                                                      MasterData_WarQuestSelectionMaster,
                                                      (System_String_o *)StringLiteral_7536/*"ITEM_ID_QP"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->ShopDetailCheckDialogFontSize = ConstantMaster__GetValue_28723684(
                                                                           MasterData_WarQuestSelectionMaster,
                                                                           (System_String_o *)StringLiteral_12286/*"SHOP_DETAIL_CHECK_DIALOG_FONT_SIZE"*/,
                                                                           21,
                                                                           0LL);
  v660 = ConstantStrMaster__GetValue(v617, (System_String_o *)StringLiteral_11716/*"SCENARIO_SPEED_STEP"*/, 0LL);
  if ( System_Single__TryParse(v660, &result, 0LL) )
  {
    v661 = BalanceConfig_TypeInfo;
    v662 = result;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v661 = BalanceConfig_TypeInfo;
    }
    v661->static_fields->ScenarioSpeedStep = v662;
  }
  v663 = ConstantStrMaster__GetValue(v617, (System_String_o *)StringLiteral_11715/*"SCENARIO_SPEED_LOW"*/, 0LL);
  if ( System_Single__TryParse(v663, &result, 0LL) )
  {
    v664 = BalanceConfig_TypeInfo;
    v665 = result;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v664 = BalanceConfig_TypeInfo;
    }
    v664->static_fields->ScenarioSpeedLow = v665;
  }
  v666 = ConstantStrMaster__GetValue(v617, (System_String_o *)StringLiteral_11714/*"SCENARIO_SPEED_HIGH"*/, 0LL);
  if ( System_Single__TryParse(v666, &result, 0LL) )
  {
    v667 = BalanceConfig_TypeInfo;
    v668 = result;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v667 = BalanceConfig_TypeInfo;
    }
    v667->static_fields->ScenarioSpeedHigh = v668;
  }
  v669 = ConstantStrMaster__GetValue(v617, (System_String_o *)StringLiteral_11713/*"SCENARIO_SPEED_DEFAULT"*/, 0LL);
  if ( System_Single__TryParse(v669, &result, 0LL) )
  {
    v670 = BalanceConfig_TypeInfo;
    v671 = result;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v670 = BalanceConfig_TypeInfo;
    }
    v670->static_fields->ScenarioSpeedDefault = v671;
  }
  else
  {
    v670 = BalanceConfig_TypeInfo;
  }
  if ( (BYTE3(v670->vtable._0_Equals.methodPtr) & 4) != 0 && !v670->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v670);
    v670 = BalanceConfig_TypeInfo;
  }
  v672 = ConstantMaster__GetValue_28723684(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_10580/*"POWERUP_QUEST_WAR_ID"*/,
           v670->static_fields->PowerUpQuestWarId,
           0LL);
  v673 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->PowerUpQuestWarId = v672;
  v674 = ConstantMaster__GetValue_28723684(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_1643/*"ACCOUNTING_INITIALIZE_TIMEOUT"*/,
           v673->static_fields->AccountingInitializeTimeOut,
           0LL);
  v675 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->AccountingInitializeTimeOut = v674;
  BalanceConfig_TypeInfo->static_fields->EquipGetEffectId = ConstantMaster__GetValue_28723684(
                                                              MasterData_WarQuestSelectionMaster,
                                                              (System_String_o *)StringLiteral_5602/*"EQUIP_GET_EFFECT_ID"*/,
                                                              v675->static_fields->EquipGetEffectId,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCodeDetachingItemId = ConstantMaster__GetValue_28723684(
                                                                        MasterData_WarQuestSelectionMaster,
                                                                        (System_String_o *)StringLiteral_3290/*"COMMAND_CODE_DETACHING_ITEM_ID"*/,
                                                                        -1,
                                                                        0LL);
  v676 = ConstantStrMaster__GetValue(v617, (System_String_o *)StringLiteral_10604/*"PRESENT_BOX_FILTER_SVT_EQUIP_MATERIAL"*/, 0LL);
  if ( v676 )
  {
    v677 = v676;
    Instance = sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !Instance )
      goto LABEL_286;
    if ( !*(_DWORD *)(Instance + 24) )
      goto LABEL_285;
    *(_WORD *)(Instance + 32) = 44;
    v678 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                  v677,
                                                                  (System_Char_array *)Instance,
                                                                  0LL);
    v679 = BalanceConfig___c_TypeInfo;
    if ( (BYTE3(BalanceConfig___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig___c_TypeInfo);
      v679 = BalanceConfig___c_TypeInfo;
    }
    static_fields = v679->static_fields;
    _9__219_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__219_0;
    if ( !_9__219_0 )
    {
      if ( (BYTE3(v679->vtable._0_Equals.methodPtr) & 4) != 0 && !v679->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v679);
        static_fields = BalanceConfig___c_TypeInfo->static_fields;
      }
      v682 = (Il2CppObject *)static_fields->__9;
      _9__219_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_string__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__219_0,
        v682,
        Method_BalanceConfig___c__Initialize_b__219_0__,
        (const MethodInfo_2C2F87C *)Method_System_Func_string__int___ctor__);
      v683 = BalanceConfig___c_TypeInfo->static_fields;
      v683->__9__219_0 = (struct System_Func_string__int__o *)_9__219_0;
      sub_B5D560(&v683->__9__219_0);
    }
    v684 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                  v678,
                                                                  (System_Func_TSource__TResult__o *)_9__219_0,
                                                                  (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_string__int___);
    v685 = System_Linq_Enumerable__ToArray_int_(
             v684,
             (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    v686 = BalanceConfig_TypeInfo;
    v687 = v685;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v686 = BalanceConfig_TypeInfo;
    }
    p_PresentBoxFilterSvtEquipMaterial = &v686->static_fields->PresentBoxFilterSvtEquipMaterial;
    *p_PresentBoxFilterSvtEquipMaterial = v687;
    sub_B5D560(p_PresentBoxFilterSvtEquipMaterial);
  }
  v689 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_6484/*"FOLLOW_NUM"*/, 0LL);
  if ( v689 >= 1 )
  {
    v690 = v689;
    v691 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v691 = BalanceConfig_TypeInfo;
    }
    v691->static_fields->FollowNum = v690;
  }
  v692 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_6481/*"FOLLOW_FRIEND_POINT"*/, 0LL);
  if ( v692 >= 1 )
  {
    v693 = v692;
    v694 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v694 = BalanceConfig_TypeInfo;
    }
    v694->static_fields->FollowFriendPoint = v693;
  }
  v695 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_4671/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0LL);
  v696 = BalanceConfig_TypeInfo;
  v697 = v695;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v696 = BalanceConfig_TypeInfo;
  }
  v696->static_fields->DisableFriendshipExceed = v697;
  BalanceConfig_TypeInfo->static_fields->EventDailyPointResetAt = ConstantMaster__GetValue(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_5686/*"EVENT_DAILY_POINT_RESET_AT"*/,
                                                                    0LL);
  v698 = ConstantStrMaster__GetValueArray(v617, (System_String_o *)StringLiteral_11208/*"REPRINT_LAST_WAR_RAID_EVENT_ID_LIST"*/, 0LL, 0LL);
  p_ReprintLastWarRaidEventIdList = &BalanceConfig_TypeInfo->static_fields->ReprintLastWarRaidEventIdList;
  *p_ReprintLastWarRaidEventIdList = v698;
  sub_B5D560(p_ReprintLastWarRaidEventIdList);
  BalanceConfig_TypeInfo->static_fields->PrologueQuestId = ConstantMaster__GetValue(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_10651/*"PROLOGUE_QUEST_ID"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCardParamUpMax = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_3289/*"COMMAND_CARD_PRM_UP_MAX"*/,
                                                                   0LL);
  v700 = ConstantStrMaster__GetValueArray(v617, (System_String_o *)StringLiteral_5815/*"EVENT_TOWER_FADEOUT_DELAY_TIME"*/, 0LL, 0LL);
  p_EventTowerFadeOutDelayTime = &BalanceConfig_TypeInfo->static_fields->EventTowerFadeOutDelayTime;
  *p_EventTowerFadeOutDelayTime = v700;
  sub_B5D560(p_EventTowerFadeOutDelayTime);
  if ( !BalanceConfig_TypeInfo->static_fields->EventTowerFadeOutDelayTime )
  {
    v702 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 3LL);
    v839.fields.value = Field__PrivateImplementationDetails__84DF4B72A51E01473BC25693E526BC603A140C4300062B4A7F64A9F7D00ABB95;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v702, v839, 0LL);
    v703 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v703 = BalanceConfig_TypeInfo;
    }
    v704 = &v703->static_fields->EventTowerFadeOutDelayTime;
    *v704 = v702;
    sub_B5D560(v704);
  }
  v705 = ConstantMaster__GetValue_28723684(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_5816/*"EVENT_TOWER_FADEOUT_PLAY_TIME"*/,
           3000,
           0LL);
  v706 = BalanceConfig_TypeInfo;
  v707 = v705;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v706 = BalanceConfig_TypeInfo;
  }
  v706->static_fields->EventTowerFadeOutPlayTime = (float)v707 / 1000.0;
  BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse = ConstantMaster__GetValue(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   (System_String_o *)StringLiteral_8780/*"MAX_FRIENDPOINT_BOOST_ITEM_USE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->FriendPointBoostItemEfffectId = ConstantMaster__GetValue_28723684(
                                                                           MasterData_WarQuestSelectionMaster,
                                                                           (System_String_o *)StringLiteral_6531/*"FRIENDPOINT_BOOST_ITEM_EFFECT_ID"*/,
                                                                           3,
                                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->MainInterludeWarId = ConstantMaster__GetValue_28723684(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (System_String_o *)StringLiteral_8693/*"MAIN_INTERLUDE_WAR_ID"*/,
                                                                1004,
                                                                0LL);
  v708 = ConstantStrMaster__GetValueArray(v617, (System_String_o *)StringLiteral_5643/*"EVENT_BOARD_GAME_DICE_BUTTON_POS"*/, 0LL, 0LL);
  p_EventBoardGameDiceButtonPostion = &BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion;
  *p_EventBoardGameDiceButtonPostion = v708;
  sub_B5D560(p_EventBoardGameDiceButtonPostion);
  if ( !BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion )
  {
    Instance = sub_B5D5DC(int___TypeInfo, 3LL);
    if ( !Instance )
      goto LABEL_286;
    v710 = *(_DWORD *)(Instance + 24);
    v711 = Instance;
    if ( v710 > 1 )
    {
      *(_DWORD *)(Instance + 36) = -59;
      if ( v710 != 2 )
      {
        *(_DWORD *)(Instance + 40) = -500;
        v712 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v712 = BalanceConfig_TypeInfo;
        }
        v713 = &v712->static_fields->EventBoardGameDiceButtonPostion;
        *v713 = (struct System_Int32_array *)v711;
        sub_B5D560(v713);
        goto LABEL_108;
      }
    }
LABEL_285:
    v836 = sub_B5D6C8(Instance);
    sub_B5D668(v836, 0LL);
  }
LABEL_108:
  v714 = ConstantStrMaster__GetValueArray(v617, (System_String_o *)StringLiteral_8750/*"MATERIAL_MAIN_INTERLUDE_WAR_ID"*/, 0LL, 0LL);
  v715 = BalanceConfig_TypeInfo;
  v716 = v714;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v715 = BalanceConfig_TypeInfo;
  }
  p_MainInterludeWarIdOnMaterial = &v715->static_fields->MainInterludeWarIdOnMaterial;
  *p_MainInterludeWarIdOnMaterial = v716;
  sub_B5D560(p_MainInterludeWarIdOnMaterial);
  if ( !BalanceConfig_TypeInfo->static_fields->MainInterludeWarIdOnMaterial )
  {
    Instance = sub_B5D5DC(int___TypeInfo, 1LL);
    if ( !Instance )
      goto LABEL_286;
    v718 = Instance;
    if ( !*(_DWORD *)(Instance + 24) )
      goto LABEL_285;
    *(_DWORD *)(Instance + 32) = 307;
    v719 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v719 = BalanceConfig_TypeInfo;
    }
    v720 = &v719->static_fields->MainInterludeWarIdOnMaterial;
    *v720 = (struct System_Int32_array *)v718;
    sub_B5D560(v720);
  }
  v721 = ConstantStrMaster__GetValueArray(v617, (System_String_o *)StringLiteral_5646/*"EVENT_BOARD_GAME_MAP_ID_LIST"*/, 0LL, 0LL);
  v722 = BalanceConfig_TypeInfo;
  v723 = v721;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v722 = BalanceConfig_TypeInfo;
  }
  p_EventBoardGameMapIdList = &v722->static_fields->EventBoardGameMapIdList;
  *p_EventBoardGameMapIdList = v723;
  sub_B5D560(p_EventBoardGameMapIdList);
  BalanceConfig_TypeInfo->static_fields->EventBoardGameNextBoardQuestId = ConstantMaster__GetValue_28723684(
                                                                            MasterData_WarQuestSelectionMaster,
                                                                            (System_String_o *)StringLiteral_5648/*"EVENT_BOARD_GAME_NEXT_BOARD_QUEST_ID"*/,
                                                                            94047745,
                                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->EventBoardGameNextRoundQuestId = ConstantMaster__GetValue_28723684(
                                                                            MasterData_WarQuestSelectionMaster,
                                                                            (System_String_o *)StringLiteral_5649/*"EVENT_BOARD_GAME_NEXT_ROUND_QUEST_ID"*/,
                                                                            94047744,
                                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->TitleFlowOld = ConstantMaster__GetValue_28723684(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_13578/*"TITLE_FLOW_OLD"*/,
                                                          0,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->StoryWarId = ConstantMaster__GetValue_28723684(
                                                        MasterData_WarQuestSelectionMaster,
                                                        (System_String_o *)StringLiteral_12551/*"STORY_WAR_ID"*/,
                                                        1003,
                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->OrdealCallWarId = ConstantMaster__GetValue_28723684(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_9937/*"ORDEAL_CALL_WAR_ID"*/,
                                                             401,
                                                             0LL);
  v725 = ConstantStrMaster__GetValue(v617, (System_String_o *)StringLiteral_9936/*"ORDEAL_CALL_CLEAR_BGM_NAME"*/, 0LL);
  if ( !System_String__IsNullOrEmpty(v725, 0LL) )
  {
    v726 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v726 = BalanceConfig_TypeInfo;
    }
    p_OrdealCallClearBgmName = &v726->static_fields->OrdealCallClearBgmName;
    *p_OrdealCallClearBgmName = v725;
    sub_B5D560(p_OrdealCallClearBgmName);
  }
  v728 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 5LL);
  v840.fields.value = Field__PrivateImplementationDetails__A1FBA00A0F8840358C0A54605FFD365F75E3A3D7AFF25F48F474C4E89BB0B37D;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v728, v840, 0LL);
  v729 = ConstantStrMaster__GetValueArray(v617, (System_String_o *)StringLiteral_3423/*"CONSUME_STORMPOD_SPOT_ID"*/, (System_Int32_array *)v728, 0LL);
  v730 = BalanceConfig_TypeInfo;
  v731 = v729;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v730 = BalanceConfig_TypeInfo;
  }
  p_consumeStormPodSpotId = &v730->static_fields->consumeStormPodSpotId;
  *p_consumeStormPodSpotId = v731;
  sub_B5D560(p_consumeStormPodSpotId);
  Instance = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !Instance )
LABEL_286:
    sub_B5D69C(Instance, v614);
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_285;
  *(_DWORD *)(Instance + 32) = 71;
  v733 = ConstantStrMaster__GetValueArray(
           v617,
           (System_String_o *)StringLiteral_12549/*"STORMPOD_HELP_IDS"*/,
           (System_Int32_array *)Instance,
           0LL);
  p_StormPodHelpIds = &BalanceConfig_TypeInfo->static_fields->StormPodHelpIds;
  *p_StormPodHelpIds = v733;
  sub_B5D560(p_StormPodHelpIds);
  ValueStringArray = ConstantStrMaster__GetValueStringArray(v617, (System_String_o *)StringLiteral_8455/*"LEGACY_ASPECT_MOVIES"*/, 0LL);
  p_legacyAspectMovies = &BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
  *p_legacyAspectMovies = ValueStringArray;
  sub_B5D560(p_legacyAspectMovies);
  v737 = ConstantStrMaster__GetValueArray(v617, (System_String_o *)StringLiteral_6613/*"FULL_SCREEN_NP_CHRS"*/, 0LL, 0LL);
  p_fullScreenNPChrs = &BalanceConfig_TypeInfo->static_fields->fullScreenNPChrs;
  *p_fullScreenNPChrs = v737;
  sub_B5D560(p_fullScreenNPChrs);
  v739 = ConstantStrMaster__GetValueArray(v617, (System_String_o *)StringLiteral_6614/*"FULL_SCREEN_NP_SEQ_IDS"*/, 0LL, 0LL);
  p_fullScreenNPSeqIds = &BalanceConfig_TypeInfo->static_fields->fullScreenNPSeqIds;
  *p_fullScreenNPSeqIds = v739;
  sub_B5D560(p_fullScreenNPSeqIds);
  BalanceConfig_TypeInfo->static_fields->GachaDailyMaxDrawNumResetAt = ConstantMaster__GetValue_28723684(
                                                                         MasterData_WarQuestSelectionMaster,
                                                                         (System_String_o *)StringLiteral_6912/*"GACHA_DAILY_MAX_DRAW_NUM_RESET_AT"*/,
                                                                         4,
                                                                         0LL);
  BalanceConfig_TypeInfo->static_fields->MemoryDeckLimitByQuest = ConstantMaster__GetValue_28723684(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_8804/*"MEMORY_DECK_LIMIT_BY_QUEST"*/,
                                                                    100,
                                                                    0LL);
  v741 = ConstantStrMaster__GetValue(v617, (System_String_o *)StringLiteral_7398/*"IOS_EXAMINATION_NEWS_URL"*/, 0LL);
  p_IOS_ExaminationNewsUrl = &BalanceConfig_TypeInfo->static_fields->IOS_ExaminationNewsUrl;
  *p_IOS_ExaminationNewsUrl = v741;
  sub_B5D560(p_IOS_ExaminationNewsUrl);
  v743 = BalanceConfig_TypeInfo->static_fields;
  if ( !v743->IOS_ExaminationNewsUrl )
  {
    v744 = &v743->IOS_ExaminationNewsUrl;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v744 = &BalanceConfig_TypeInfo->static_fields->IOS_ExaminationNewsUrl;
    }
    *v744 = (struct System_String_o *)StringLiteral_19488/*"https://view.fate-go.jp/"*/;
    sub_B5D560(v744);
  }
  v745 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_9947/*"OTHER_IMAGE_LIMIT_COUNT"*/, 0LL);
  v746 = BalanceConfig_TypeInfo;
  v747 = v745;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v746 = BalanceConfig_TypeInfo;
  }
  v746->static_fields->OtherImageLimitCount = v747;
  BalanceConfig_TypeInfo->static_fields->ExclusiveNpcServantIdStart = ConstantMaster__GetValue_28723684(
                                                                        MasterData_WarQuestSelectionMaster,
                                                                        (System_String_o *)StringLiteral_5834/*"EXCLUSIVE_NPC_SERVANT_ID_START"*/,
                                                                        9937100,
                                                                        0LL);
  v748 = ConstantStrMaster__GetValueStringArray(v617, (System_String_o *)StringLiteral_12478/*"STAND_FIGURE_R_OFFSET_EFFECT_NAMES"*/, 0LL);
  p_UIStandFigureROffsetEffectNames = &BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames;
  *p_UIStandFigureROffsetEffectNames = v748;
  sub_B5D560(p_UIStandFigureROffsetEffectNames);
  v750 = ConstantStrMaster__GetValueStringArray(v617, (System_String_o *)StringLiteral_12477/*"STAND_FIGURE_R_OFFSET_EFFECT_IMAGES"*/, 0LL);
  p_UIStandFigureROffsetImages = &BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetImages;
  *p_UIStandFigureROffsetImages = v750;
  sub_B5D560(p_UIStandFigureROffsetImages);
  v752 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames )
  {
    Instance = sub_B5D5DC(string___TypeInfo, 7LL);
    if ( !Instance )
      goto LABEL_286;
    v753 = Instance;
    Instance = StringLiteral_17010/*"bit_result_bond"*/;
    if ( StringLiteral_17010/*"bit_result_bond"*/ )
    {
      Instance = sub_B5D684(StringLiteral_17010/*"bit_result_bond"*/, *(_QWORD *)(*(_QWORD *)v753 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v754 = StringLiteral_17010/*"bit_result_bond"*/;
    }
    else
    {
      v754 = 0LL;
    }
    if ( !*(_DWORD *)(v753 + 24) )
      goto LABEL_285;
    *(_QWORD *)(v753 + 32) = v754;
    sub_B5D560(v753 + 32);
    Instance = StringLiteral_17022/*"bit_result_noble"*/;
    if ( StringLiteral_17022/*"bit_result_noble"*/ )
    {
      Instance = sub_B5D684(StringLiteral_17022/*"bit_result_noble"*/, *(_QWORD *)(*(_QWORD *)v753 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v755 = StringLiteral_17022/*"bit_result_noble"*/;
    }
    else
    {
      v755 = 0LL;
    }
    if ( *(_DWORD *)(v753 + 24) <= 1u )
      goto LABEL_285;
    *(_QWORD *)(v753 + 40) = v755;
    sub_B5D560(v753 + 40);
    Instance = StringLiteral_17025/*"bit_result_servant"*/;
    if ( StringLiteral_17025/*"bit_result_servant"*/ )
    {
      Instance = sub_B5D684(StringLiteral_17025/*"bit_result_servant"*/, *(_QWORD *)(*(_QWORD *)v753 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v756 = StringLiteral_17025/*"bit_result_servant"*/;
    }
    else
    {
      v756 = 0LL;
    }
    if ( *(_DWORD *)(v753 + 24) <= 2u )
      goto LABEL_285;
    *(_QWORD *)(v753 + 48) = v756;
    sub_B5D560(v753 + 48);
    Instance = StringLiteral_17026/*"bit_result_skill"*/;
    if ( StringLiteral_17026/*"bit_result_skill"*/ )
    {
      Instance = sub_B5D684(StringLiteral_17026/*"bit_result_skill"*/, *(_QWORD *)(*(_QWORD *)v753 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v757 = StringLiteral_17026/*"bit_result_skill"*/;
    }
    else
    {
      v757 = 0LL;
    }
    if ( *(_DWORD *)(v753 + 24) <= 3u )
      goto LABEL_285;
    *(_QWORD *)(v753 + 56) = v757;
    sub_B5D560(v753 + 56);
    Instance = StringLiteral_17011/*"bit_result_command_card_exceed"*/;
    if ( StringLiteral_17011/*"bit_result_command_card_exceed"*/ )
    {
      Instance = sub_B5D684(StringLiteral_17011/*"bit_result_command_card_exceed"*/, *(_QWORD *)(*(_QWORD *)v753 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v758 = StringLiteral_17011/*"bit_result_command_card_exceed"*/;
    }
    else
    {
      v758 = 0LL;
    }
    if ( *(_DWORD *)(v753 + 24) <= 4u )
      goto LABEL_285;
    *(_QWORD *)(v753 + 64) = v758;
    sub_B5D560(v753 + 64);
    Instance = StringLiteral_17012/*"bit_result_extraskill"*/;
    if ( StringLiteral_17012/*"bit_result_extraskill"*/ )
    {
      Instance = sub_B5D684(StringLiteral_17012/*"bit_result_extraskill"*/, *(_QWORD *)(*(_QWORD *)v753 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v759 = StringLiteral_17012/*"bit_result_extraskill"*/;
    }
    else
    {
      v759 = 0LL;
    }
    if ( *(_DWORD *)(v753 + 24) <= 5u )
      goto LABEL_285;
    *(_QWORD *)(v753 + 72) = v759;
    sub_B5D560(v753 + 72);
    Instance = StringLiteral_17015/*"bit_result_friendship_exceed"*/;
    if ( StringLiteral_17015/*"bit_result_friendship_exceed"*/ )
    {
      Instance = sub_B5D684(StringLiteral_17015/*"bit_result_friendship_exceed"*/, *(_QWORD *)(*(_QWORD *)v753 + 64LL));
      if ( !Instance )
        goto LABEL_287;
      v760 = StringLiteral_17015/*"bit_result_friendship_exceed"*/;
    }
    else
    {
      v760 = 0LL;
    }
    if ( *(_DWORD *)(v753 + 24) <= 6u )
      goto LABEL_285;
    *(_QWORD *)(v753 + 80) = v760;
    sub_B5D560(v753 + 80);
    v761 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v761 = BalanceConfig_TypeInfo;
    }
    v762 = &v761->static_fields->UIStandFigureROffsetEffectNames;
    *v762 = (struct System_String_array *)v753;
    sub_B5D560(v762);
    v752 = BalanceConfig_TypeInfo;
  }
  if ( (BYTE3(v752->vtable._0_Equals.methodPtr) & 4) != 0 && !v752->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v752);
    v752 = BalanceConfig_TypeInfo;
  }
  if ( v752->static_fields->UIStandFigureROffsetImages )
    goto LABEL_279;
  Instance = sub_B5D5DC(string___TypeInfo, 18LL);
  if ( !Instance )
    goto LABEL_286;
  v763 = Instance;
  Instance = StringLiteral_1109/*"1053900:100:0"*/;
  if ( StringLiteral_1109/*"1053900:100:0"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1109/*"1053900:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v764 = StringLiteral_1109/*"1053900:100:0"*/;
  }
  else
  {
    v764 = 0LL;
  }
  if ( !*(_DWORD *)(v763 + 24) )
    goto LABEL_285;
  *(_QWORD *)(v763 + 32) = v764;
  sub_B5D560(v763 + 32);
  Instance = StringLiteral_1112/*"1053910:100:0"*/;
  if ( StringLiteral_1112/*"1053910:100:0"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1112/*"1053910:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v765 = StringLiteral_1112/*"1053910:100:0"*/;
  }
  else
  {
    v765 = 0LL;
  }
  if ( *(_DWORD *)(v763 + 24) <= 1u )
    goto LABEL_285;
  *(_QWORD *)(v763 + 40) = v765;
  sub_B5D560(v763 + 40);
  Instance = StringLiteral_1110/*"1053901:100:0"*/;
  if ( StringLiteral_1110/*"1053901:100:0"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1110/*"1053901:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v766 = StringLiteral_1110/*"1053901:100:0"*/;
  }
  else
  {
    v766 = 0LL;
  }
  if ( *(_DWORD *)(v763 + 24) <= 2u )
    goto LABEL_285;
  *(_QWORD *)(v763 + 48) = v766;
  sub_B5D560(v763 + 48);
  Instance = StringLiteral_1113/*"1053911:100:0"*/;
  if ( StringLiteral_1113/*"1053911:100:0"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1113/*"1053911:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v767 = StringLiteral_1113/*"1053911:100:0"*/;
  }
  else
  {
    v767 = 0LL;
  }
  if ( *(_DWORD *)(v763 + 24) <= 3u )
    goto LABEL_285;
  *(_QWORD *)(v763 + 56) = v767;
  sub_B5D560(v763 + 56);
  Instance = StringLiteral_1111/*"1053902:100:0"*/;
  if ( StringLiteral_1111/*"1053902:100:0"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1111/*"1053902:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v768 = StringLiteral_1111/*"1053902:100:0"*/;
  }
  else
  {
    v768 = 0LL;
  }
  if ( *(_DWORD *)(v763 + 24) <= 4u )
    goto LABEL_285;
  *(_QWORD *)(v763 + 64) = v768;
  sub_B5D560(v763 + 64);
  Instance = StringLiteral_1114/*"1053912:100:0"*/;
  if ( StringLiteral_1114/*"1053912:100:0"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1114/*"1053912:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v769 = StringLiteral_1114/*"1053912:100:0"*/;
  }
  else
  {
    v769 = 0LL;
  }
  if ( *(_DWORD *)(v763 + 24) <= 5u )
    goto LABEL_285;
  *(_QWORD *)(v763 + 72) = v769;
  sub_B5D560(v763 + 72);
  Instance = StringLiteral_1106/*"1053000:100:0"*/;
  if ( StringLiteral_1106/*"1053000:100:0"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1106/*"1053000:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v770 = StringLiteral_1106/*"1053000:100:0"*/;
  }
  else
  {
    v770 = 0LL;
  }
  if ( *(_DWORD *)(v763 + 24) <= 6u )
    goto LABEL_285;
  *(_QWORD *)(v763 + 80) = v770;
  sub_B5D560(v763 + 80);
  Instance = StringLiteral_1107/*"1053001:100:0"*/;
  if ( StringLiteral_1107/*"1053001:100:0"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1107/*"1053001:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v771 = StringLiteral_1107/*"1053001:100:0"*/;
  }
  else
  {
    v771 = 0LL;
  }
  if ( *(_DWORD *)(v763 + 24) <= 7u )
    goto LABEL_285;
  *(_QWORD *)(v763 + 88) = v771;
  sub_B5D560(v763 + 88);
  Instance = StringLiteral_1108/*"1053002:100:0"*/;
  if ( StringLiteral_1108/*"1053002:100:0"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1108/*"1053002:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v772 = StringLiteral_1108/*"1053002:100:0"*/;
  }
  else
  {
    v772 = 0LL;
  }
  if ( *(_DWORD *)(v763 + 24) <= 8u )
    goto LABEL_285;
  *(_QWORD *)(v763 + 96) = v772;
  sub_B5D560(v763 + 96);
  Instance = StringLiteral_1217/*"5047900:100:0"*/;
  if ( StringLiteral_1217/*"5047900:100:0"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1217/*"5047900:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v773 = StringLiteral_1217/*"5047900:100:0"*/;
  }
  else
  {
    v773 = 0LL;
  }
  if ( *(_DWORD *)(v763 + 24) <= 9u )
    goto LABEL_285;
  *(_QWORD *)(v763 + 104) = v773;
  sub_B5D560(v763 + 104);
  Instance = StringLiteral_1220/*"5047910:100:0"*/;
  if ( StringLiteral_1220/*"5047910:100:0"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1220/*"5047910:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v774 = StringLiteral_1220/*"5047910:100:0"*/;
  }
  else
  {
    v774 = 0LL;
  }
  if ( *(_DWORD *)(v763 + 24) <= 0xAu )
    goto LABEL_285;
  *(_QWORD *)(v763 + 112) = v774;
  sub_B5D560(v763 + 112);
  Instance = StringLiteral_1218/*"5047901:100:0"*/;
  if ( StringLiteral_1218/*"5047901:100:0"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1218/*"5047901:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v775 = StringLiteral_1218/*"5047901:100:0"*/;
  }
  else
  {
    v775 = 0LL;
  }
  if ( *(_DWORD *)(v763 + 24) <= 0xBu )
    goto LABEL_285;
  *(_QWORD *)(v763 + 120) = v775;
  sub_B5D560(v763 + 120);
  Instance = StringLiteral_1221/*"5047911:100:0"*/;
  if ( StringLiteral_1221/*"5047911:100:0"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1221/*"5047911:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v776 = StringLiteral_1221/*"5047911:100:0"*/;
  }
  else
  {
    v776 = 0LL;
  }
  if ( *(_DWORD *)(v763 + 24) <= 0xCu )
    goto LABEL_285;
  *(_QWORD *)(v763 + 128) = v776;
  sub_B5D560(v763 + 128);
  Instance = StringLiteral_1219/*"5047902:100:0"*/;
  if ( StringLiteral_1219/*"5047902:100:0"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1219/*"5047902:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v777 = StringLiteral_1219/*"5047902:100:0"*/;
  }
  else
  {
    v777 = 0LL;
  }
  if ( *(_DWORD *)(v763 + 24) <= 0xDu )
    goto LABEL_285;
  *(_QWORD *)(v763 + 136) = v777;
  sub_B5D560(v763 + 136);
  Instance = StringLiteral_1222/*"5047912:100:0"*/;
  if ( StringLiteral_1222/*"5047912:100:0"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1222/*"5047912:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v778 = StringLiteral_1222/*"5047912:100:0"*/;
  }
  else
  {
    v778 = 0LL;
  }
  if ( *(_DWORD *)(v763 + 24) <= 0xEu )
    goto LABEL_285;
  *(_QWORD *)(v763 + 144) = v778;
  sub_B5D560(v763 + 144);
  Instance = StringLiteral_1214/*"5047000:100:0"*/;
  if ( StringLiteral_1214/*"5047000:100:0"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1214/*"5047000:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v779 = StringLiteral_1214/*"5047000:100:0"*/;
  }
  else
  {
    v779 = 0LL;
  }
  if ( *(_DWORD *)(v763 + 24) <= 0xFu )
    goto LABEL_285;
  *(_QWORD *)(v763 + 152) = v779;
  sub_B5D560(v763 + 152);
  Instance = StringLiteral_1215/*"5047001:100:0"*/;
  if ( StringLiteral_1215/*"5047001:100:0"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1215/*"5047001:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
    if ( !Instance )
      goto LABEL_287;
    v780 = StringLiteral_1215/*"5047001:100:0"*/;
  }
  else
  {
    v780 = 0LL;
  }
  if ( *(_DWORD *)(v763 + 24) <= 0x10u )
    goto LABEL_285;
  *(_QWORD *)(v763 + 160) = v780;
  sub_B5D560(v763 + 160);
  Instance = StringLiteral_1216/*"5047002:100:0"*/;
  if ( !StringLiteral_1216/*"5047002:100:0"*/ )
  {
    v781 = 0LL;
    goto LABEL_274;
  }
  Instance = sub_B5D684(StringLiteral_1216/*"5047002:100:0"*/, *(_QWORD *)(*(_QWORD *)v763 + 64LL));
  if ( !Instance )
  {
LABEL_287:
    v837 = sub_B5D6BC();
    sub_B5D668(v837, 0LL);
  }
  v781 = StringLiteral_1216/*"5047002:100:0"*/;
LABEL_274:
  if ( *(_DWORD *)(v763 + 24) <= 0x11u )
    goto LABEL_285;
  *(_QWORD *)(v763 + 168) = v781;
  sub_B5D560(v763 + 168);
  v782 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v782 = BalanceConfig_TypeInfo;
  }
  v783 = &v782->static_fields->UIStandFigureROffsetImages;
  *v783 = (struct System_String_array *)v763;
  sub_B5D560(v783);
LABEL_279:
  v784 = ConstantMaster__GetValue_28723684(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7532/*"IS_WAR_BOARD_AI_CALC_EVAL_SUM"*/,
           0,
           0LL);
  v785 = BalanceConfig_TypeInfo;
  v786 = v784;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v785 = BalanceConfig_TypeInfo;
  }
  v785->static_fields->IsWarBoardAiCalcEvalSum = v786 != 0;
  BalanceConfig_TypeInfo->static_fields->WarBoardEvalFactorsAffectRatio = ConstantMaster__GetValue_28723684(
                                                                            MasterData_WarQuestSelectionMaster,
                                                                            (System_String_o *)StringLiteral_15491/*"WAR_BOARD_EVAL_FACTORS_AFFECT_RATIO"*/,
                                                                            10000,
                                                                            0LL);
  v787 = ConstantMaster__GetValue_28723684(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7533/*"IS_WAR_BOARD_AI_FILTER_NOT_ACTION"*/,
           1,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsWarBoardAiFilterNotAction = v787;
  v788 = ConstantMaster__GetValue_28723684(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7534/*"IS_WAR_BOARD_AI_FILTER_WASTE_ROUTE"*/,
           0,
           0LL);
  v789 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->IsWarBoardAiFilterWasteRoute = v788 != 0;
  BalanceConfig_TypeInfo->static_fields->StoneFragmentExchangeNoticeDispMax = ConstantMaster__GetValue_28723684(
                                                                                MasterData_WarQuestSelectionMaster,
                                                                                (System_String_o *)StringLiteral_12527/*"STONE_FRAGMENT_EXCHANGE_NOTICE_MAX"*/,
                                                                                v789->static_fields->StoneFragmentExchangeNoticeDispMax,
                                                                                0LL);
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveTimeConstant = (float)ConstantMaster__GetValue_28723684(
                                                                              MasterData_WarQuestSelectionMaster,
                                                                              (System_String_o *)StringLiteral_1186/*"3D_MAP_CAMERA_MOVE_TIME_CONSTANT"*/,
                                                                              0,
                                                                              0LL)
                                                                   / 1000.0;
  v790 = ConstantMaster__GetValue_28723684(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_1185/*"3D_MAP_CAMERA_MOVE_TIME_COEFFICIENT"*/,
           1700,
           0LL);
  v791 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveTimeCoefficient = (float)v790 / 1000.0;
  v792 = ConstantMaster__GetValue_28723684(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_1187/*"3D_MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE"*/,
           v791->static_fields->MapCameraMoveTimeLogarithmBase,
           0LL);
  v793 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveTimeLogarithmBase = v792;
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveEasingType = ConstantMaster__GetValue_28723684(
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     (System_String_o *)StringLiteral_1184/*"3D_MAP_CAMERA_MOVE_EASING_TYPE"*/,
                                                                     v793->static_fields->MapCameraMoveEasingType,
                                                                     0LL);
  v794 = ConstantMaster__GetValue_28723684(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_2971/*"CAMERA_2D_RESET_DURATION"*/,
           644,
           0LL);
  v795 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->Camera2DResetDuration = (float)v794 / 1000.0;
  v796 = ConstantStrMaster__GetValueArray(
           v617,
           (System_String_o *)StringLiteral_8691/*"MAIN_CHAPTERS_WITH_EVENT_ID"*/,
           v795->static_fields->MainChaptersWithEventId,
           0LL);
  p_MainChaptersWithEventId = &BalanceConfig_TypeInfo->static_fields->MainChaptersWithEventId;
  *p_MainChaptersWithEventId = v796;
  sub_B5D560(p_MainChaptersWithEventId);
  BalanceConfig_TypeInfo->static_fields->OrtSecondFormId = ConstantMaster__GetValue_28723684(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_9943/*"ORT_SECONDE_FORM_ID"*/,
                                                             1,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->OrtThirdFormId = ConstantMaster__GetValue_28723684(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_9944/*"ORT_THIRD_FORM_ID"*/,
                                                            2,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->OrtFirstQuestId = ConstantMaster__GetValue_28723684(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (System_String_o *)StringLiteral_9938/*"ORT_FIRST_QUEST_ID"*/,
                                                             3001324,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLateQuestId = ConstantMaster__GetValue_28723684(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (System_String_o *)StringLiteral_9942/*"ORT_LATE_QUEST_ID"*/,
                                                            3001325,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLatePhaseBreak = ConstantMaster__GetValue_28723684(
                                                               MasterData_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_9939/*"ORT_LATE_PHASE_BREAK"*/,
                                                               5,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLatePhaseSecondForm = ConstantMaster__GetValue_28723684(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_9941/*"ORT_LATE_PHASE_SECOND_FORM"*/,
                                                                    6,
                                                                    0LL);
  v798 = ConstantMaster__GetValue_28723684(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_9940/*"ORT_LATE_PHASE_DEAD"*/,
           7,
           0LL);
  v799 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->OrtLatePhaseDead = v798;
  v800 = ConstantStrMaster__GetValueArray(
           v617,
           (System_String_o *)StringLiteral_13604/*"TREASURE_DEVICES_FORCED_OPEN_EFFECT"*/,
           v799->static_fields->TreasureDevicesForcedOpenEffect,
           0LL);
  p_TreasureDevicesForcedOpenEffect = &BalanceConfig_TypeInfo->static_fields->TreasureDevicesForcedOpenEffect;
  *p_TreasureDevicesForcedOpenEffect = v800;
  sub_B5D560(p_TreasureDevicesForcedOpenEffect);
  v802 = ConstantStrMaster__GetValueArray(
           v617,
           (System_String_o *)StringLiteral_7130/*"HEROINE_TREASURE_DEVICE_RANKUP_EFFECTS"*/,
           BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects,
           0LL);
  p_HeroineTreasureDeviceRankUpEffects = &BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects;
  *p_HeroineTreasureDeviceRankUpEffects = v802;
  sub_B5D560(p_HeroineTreasureDeviceRankUpEffects);
  v804 = ConstantMaster__GetValue_28723684(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7129/*"HEROINE_LIMIT_COUNT_ORTINAX_REFURBISHED"*/,
           BalanceConfig_TypeInfo->static_fields->HeroineLimitCountOrtinaxRefurbished,
           0LL);
  v805 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->HeroineLimitCountOrtinaxRefurbished = v804;
  v806 = ConstantMaster__GetValue_28723684(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_3089/*"CLASS_BOARD_RELEASE_QUEST_ID"*/,
           v805->static_fields->ClassBoardReleaseQuestId,
           0LL);
  v807 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ClassBoardReleaseQuestId = v806;
  v808 = ConstantStrMaster__GetValueArray(
           v617,
           (System_String_o *)StringLiteral_5872/*"EXTRA1_SORT_ORDER_CLASS_IDS"*/,
           v807->static_fields->Extra1SortOrderClassIds,
           0LL);
  p_Extra1SortOrderClassIds = &BalanceConfig_TypeInfo->static_fields->Extra1SortOrderClassIds;
  *p_Extra1SortOrderClassIds = v808;
  sub_B5D560(p_Extra1SortOrderClassIds);
  v810 = ConstantStrMaster__GetValueArray(
           v617,
           (System_String_o *)StringLiteral_5873/*"EXTRA2_SORT_ORDER_CLASS_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds,
           0LL);
  p_Extra2SortOrderClassIds = &BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds;
  *p_Extra2SortOrderClassIds = v810;
  sub_B5D560(p_Extra2SortOrderClassIds);
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectMoveMaxDistance = ConstantMaster__GetValue_28723684(
                                                                                   MasterData_WarQuestSelectionMaster,
                                                                                   (System_String_o *)StringLiteral_3052/*"CLASS_BOARD_CAMERA_SELECT_MOVE_MAX_DISTANCE"*/,
                                                                                   BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectMoveMaxDistance,
                                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectSecMin = (float)ConstantMaster__GetValue_28723684(
                                                                                 MasterData_WarQuestSelectionMaster,
                                                                                 (System_String_o *)StringLiteral_3054/*"CLASS_BOARD_CAMERA_SELECT_SEC_MIN"*/,
                                                                                 100,
                                                                                 0LL)
                                                                      / 1000.0;
  v812 = ConstantMaster__GetValue_28723684(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_3053/*"CLASS_BOARD_CAMERA_SELECT_SEC_MAX"*/,
           1000,
           0LL);
  v813 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectSecMax = (float)v812 / 1000.0;
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectEasingType = ConstantMaster__GetValue_28723684(
                                                                              MasterData_WarQuestSelectionMaster,
                                                                              (System_String_o *)StringLiteral_3051/*"CLASS_BOARD_CAMERA_SELECT_EASING_TYPE"*/,
                                                                              v813->static_fields->ClassBoardCameraSelectEasingType,
                                                                              0LL);
  v814 = ConstantMaster__GetValue_28723684(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_3047/*"CLASS_BOARD_2D_CAMERA_DEFAULT_SIZE"*/,
           1700,
           0LL);
  v815 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->ClassBoard2DCameraDefaultSize = (float)v814 / 1000.0;
  v816 = ConstantStrMaster__GetValueArray(
           v617,
           (System_String_o *)StringLiteral_9446/*"NOT_UI_CHANGE_MAP_IDS"*/,
           v815->static_fields->NotUIChangeMapIds,
           0LL);
  p_NotUIChangeMapIds = &BalanceConfig_TypeInfo->static_fields->NotUIChangeMapIds;
  *p_NotUIChangeMapIds = v816;
  sub_B5D560(p_NotUIChangeMapIds);
  v818 = ConstantStrMaster__GetValueArray(
           v617,
           (System_String_o *)StringLiteral_8485/*"LIMIT_SEALED_DIALOG_MAX_LIMIT_OPEN_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds,
           0LL);
  p_LimitSealedDialogMaxLimitOpenIds = &BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds;
  *p_LimitSealedDialogMaxLimitOpenIds = v818;
  sub_B5D560(p_LimitSealedDialogMaxLimitOpenIds);
  v820 = ConstantStrMaster__GetValueArray(
           v617,
           (System_String_o *)StringLiteral_9935/*"ORDEAL_CALL_CHAPTER_FOLDER_EVENT_UI_DISP_WAR_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds,
           0LL);
  p_OrdealCallChapterFolderEventUIDispWarIds = &BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds;
  *p_OrdealCallChapterFolderEventUIDispWarIds = v820;
  sub_B5D560(p_OrdealCallChapterFolderEventUIDispWarIds);
  v822 = ConstantStrMaster__GetValueArray(
           v617,
           (System_String_o *)StringLiteral_11196/*"RECOVERY_FATIGUE_DELAYED_CHANGE_BG_EVENTS"*/,
           BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents,
           0LL);
  p_RecoveryFatigueDelayedChangeBgEvents = &BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents;
  *p_RecoveryFatigueDelayedChangeBgEvents = v822;
  sub_B5D560(p_RecoveryFatigueDelayedChangeBgEvents);
  Instance = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_286;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_285;
  *(_DWORD *)(Instance + 32) = 94086401;
  v824 = ConstantStrMaster__GetValueArray(
           v617,
           (System_String_o *)StringLiteral_9406/*"NONE_DISPLAY_FREE_QUEST_MATERIAL"*/,
           (System_Int32_array *)Instance,
           0LL);
  p_noneDisplayFreeQuestMaterial = &BalanceConfig_TypeInfo->static_fields->noneDisplayFreeQuestMaterial;
  *p_noneDisplayFreeQuestMaterial = v824;
  sub_B5D560(p_noneDisplayFreeQuestMaterial);
  v826 = ConstantStrMaster__GetValueArray(
           v617,
           (System_String_o *)StringLiteral_9445/*"NOT_SEND_TRACK_EVENT_AT_WAR_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
           0LL);
  p_NotSendTrackEventAtWarIds = &BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds;
  *p_NotSendTrackEventAtWarIds = v826;
  sub_B5D560(p_NotSendTrackEventAtWarIds);
  v828 = ConstantMaster__GetValue_28723684(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_12480/*"STARTING_MEMBER_FRIENDSHIP_RATE"*/,
           0,
           0LL);
  v829 = BalanceConfig_TypeInfo;
  BalanceConfig_TypeInfo->static_fields->StartingMemberFriendshipRate = v828;
  v830 = ConstantStrMaster__GetValueArray(
           v617,
           (System_String_o *)StringLiteral_9440/*"NOT_REQUIRED_WAR_IDS"*/,
           v829->static_fields->NotRequiredPlayWarIds,
           0LL);
  p_NotRequiredPlayWarIds = &BalanceConfig_TypeInfo->static_fields->NotRequiredPlayWarIds;
  *p_NotRequiredPlayWarIds = v830;
  sub_B5D560(p_NotRequiredPlayWarIds);
  v832 = ConstantMaster__GetValue_28723684(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7528/*"IS_ENABLE_OLD_BLOCK_SHORTEST_ROUTE"*/,
           0,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsEnableOldBlockShortestRoute = v832;
  v833 = ConstantMaster__GetValue_28723684(
           MasterData_WarQuestSelectionMaster,
           (System_String_o *)StringLiteral_7529/*"IS_EVENT_POINT_MENU"*/,
           0,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsEventPointMenu = v833;
  v834 = ConstantStrMaster__GetValue(v617, (System_String_o *)StringLiteral_8526/*"LOGIN_QUEST_RETURN_TERMINAL_DIALOG_MESSAGE"*/, 0LL);
  p_LoginQuestReturnTerminalDialogMessage = &BalanceConfig_TypeInfo->static_fields->LoginQuestReturnTerminalDialogMessage;
  *p_LoginQuestReturnTerminalDialogMessage = v834;
  sub_B5D560(p_LoginQuestReturnTerminalDialogMessage);
}


void __fastcall BalanceConfig___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E754B & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig___c_TypeInfo, v1, v2, v3);
    byte_42E754B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BalanceConfig___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BalanceConfig___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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