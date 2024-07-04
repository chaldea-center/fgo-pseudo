void __fastcall BalanceConfig___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BalanceConfig_c *v12; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  struct BalanceConfig_StaticFields *v14; // x8
  struct BalanceConfig_StaticFields *v15; // x8
  int32_t v16; // w2
  int32_t v17; // w3
  struct BalanceConfig_StaticFields *v18; // x8
  int32_t v19; // w2
  int32_t v20; // w3
  struct BalanceConfig_StaticFields *v21; // x8
  int32_t v22; // w2
  int32_t v23; // w3
  ServantStatusBattleListViewItem_o *p_EventBoardGameDiceButtonPostion; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  ServantStatusBattleListViewItem_o *p_EventBoardGameMapIdList; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  struct BalanceConfig_StaticFields *v30; // x8
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  ServantStatusBattleListViewItem_o *p_consumeStormPodSpotId; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  ServantStatusBattleListViewItem_o *p_StormPodHelpIds; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  ServantStatusBattleListViewItem_o *p_legacyAspectMovies; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  ServantStatusBattleListViewItem_o *p_fullScreenNPChrs; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  ServantStatusBattleListViewItem_o *p_fullScreenNPSeqIds; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  ServantStatusBattleListViewItem_o *p_UIStandFigureROffsetEffectNames; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  ServantStatusBattleListViewItem_o *p_UIStandFigureROffsetImages; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  struct BalanceConfig_StaticFields *v55; // x8
  __int64 v56; // x0
  __int64 v57; // x1
  int32_t v58; // w2
  int32_t v59; // w3
  ServantStatusBattleListViewItem_c *v60; // x1
  ServantStatusBattleListViewItem_o *p_MainChaptersWithEventId; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  ServantStatusBattleListViewItem_o *p_TreasureDevicesForcedOpenEffect; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  ServantStatusBattleListViewItem_o *p_HeroineTreasureDeviceRankUpEffects; // x0
  System_Array_o *v68; // x0
  ServantStatusBattleListViewItem_c *v69; // x19
  ServantStatusBattleListViewItem_o *p_Extra1SortOrderClassIds; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_Array_o *v73; // x0
  ServantStatusBattleListViewItem_c *v74; // x19
  ServantStatusBattleListViewItem_o *p_Extra2SortOrderClassIds; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  struct BalanceConfig_StaticFields *v78; // x8
  __int64 v79; // x1
  ServantStatusBattleListViewItem_o *p_NotUIChangeMapIds; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  int32_t v83; // w2
  int32_t v84; // w3
  ServantStatusBattleListViewItem_o *p_LimitSealedDialogMaxLimitOpenIds; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  ServantStatusBattleListViewItem_o *p_OrdealCallChapterFolderEventUIDispWarIds; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  ServantStatusBattleListViewItem_o *p_RecoveryFatigueDelayedChangeBgEvents; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  ServantStatusBattleListViewItem_o *p_noneDisplayFreeQuestMaterial; // x0
  System_Array_o *v95; // x0
  ServantStatusBattleListViewItem_c *v96; // x19
  ServantStatusBattleListViewItem_o *p_NotSendTrackEventAtWarIds; // x0
  int32_t v98; // w2
  int32_t v99; // w3
  System_Array_o *v100; // x0
  ServantStatusBattleListViewItem_c *v101; // x19
  ServantStatusBattleListViewItem_o *p_NotRequiredPlayWarIds; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  __int64 v105; // x1
  ServantStatusBattleListViewItem_o *p_EventItemNotDispItemGetEffect; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  System_Collections_Generic_Dictionary_object__int__o *v109; // x19
  ServantStatusBattleListViewItem_o *p_MissionIconDisplayMsDictionary; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  struct BalanceConfig_StaticFields *v113; // x8
  System_RuntimeFieldHandle_o v119; // 0:w1.4
  System_RuntimeFieldHandle_o v120; // 0:w1.4
  System_RuntimeFieldHandle_o v121; // 0:w1.4
  System_RuntimeFieldHandle_o v122; // 0:w1.4

  if ( (byte_48E1E59 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, v1);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v4);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_1B00CCC(&int___TypeInfo, v6);
    sub_1B00CCC(
      &Field__PrivateImplementationDetails__0576E2463551A09802222B33A5BA38F57896D9DD406B6DB32A10299A54B4B5BC,
      v7);
    sub_1B00CCC(
      &Field__PrivateImplementationDetails__829FEE660E2799B8814849BCC3884998BB3651E975AC0C0D659AD53227033DBC,
      v8);
    sub_1B00CCC(
      &Field__PrivateImplementationDetails__96039A68C58EBF2F40B99A5B8F9F313745D9C4E02164BB0FCE39159471432F4B,
      v9);
    sub_1B00CCC(
      &Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA,
      v10);
    sub_1B00CCC(&StringLiteral_3002/*"BGM_TITLE_5"*/, v11);
    byte_48E1E59 = 1;
  }
  v12 = BalanceConfig_TypeInfo;
  static_fields = BalanceConfig_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->ServantLimitMax = xmmword_B713D0;
  *(_QWORD *)&static_fields->SvtEquipSkillListMax = 0x500000014LL;
  *(int64x2_t *)&static_fields->UserPointEventMax = vdupq_n_s64(0x3B9AC9FFuLL);
  *(int64x2_t *)&static_fields->UserRaidDamagePointMax = vdupq_n_s64(0xE8D4A50FFFuLL);
  static_fields->UserEquipSkillListMax = 3;
  static_fields->PresentBoxValidTime = 31536000;
  static_fields->UserEventItemMax = 999999999;
  static_fields->AllUserBoxGachaTotalMax = 999999999LL;
  static_fields->SupportDeckMemberMax = 9;
  static_fields->SvtAppendPassiveSkillListMax = 5;
  static_fields->ServantCombineMax = 5;
  *(_QWORD *)&static_fields->DeckMemberMax = 0x300000006LL;
  *(_OWORD *)&static_fields->FixMainSupportDeckNum = xmmword_B71D50;
  static_fields->RequestTopHomeExpirationDateSec = 600;
  static_fields->ServerTimeOverLimit = 3600LL;
  static_fields->CriticalRateToAddByQuickFirstBonus = 0;
  *(_QWORD *)&static_fields->SpendApRecvItemNum = 0x3E700000001LL;
  static_fields->ServantWarehouseSelectMax = 999;
  *(_OWORD *)&static_fields->ServantIdJekyll = 0u;
  *(_OWORD *)&static_fields->ServantIdMashu2 = 0u;
  *(_OWORD *)&static_fields->LvExceedItemId = xmmword_B71D60;
  *(_QWORD *)&static_fields->ApSeedItemId = 0x6800000067LL;
  *(_OWORD *)&static_fields->DefaultFontSize = xmmword_B71A00;
  *(_QWORD *)&static_fields->raceRewardRankMax = 0x700000003LL;
  *(_OWORD *)&static_fields->ScenarioSpeedStep = xmmword_B71F70;
  *(_OWORD *)&static_fields->ScenarioTextWaitStep = xmmword_B71310;
  *(_OWORD *)&static_fields->ScenarioTextWaitDefaultSt = xmmword_B71F80;
  *(_OWORD *)&static_fields->ScenarioTextSpeedDefault = xmmword_B70ED0;
  *(_OWORD *)&static_fields->ScenarioScrollSpeedDefault = xmmword_B716C0;
  *(_QWORD *)&static_fields->ScenarioAutoWaitTimeDefault = 0x3E4CCCCD00000000LL;
  static_fields->CostumeIdMashu = 12;
  static_fields->itemIdForShop15 = 48;
  static_fields->FollowerRefreshRestTime = -1;
  *(_QWORD *)&static_fields->PowerUpQuestWarId = 0x3C000003E9LL;
  static_fields->VtReleaseAt = 0LL;
  *(_QWORD *)&static_fields->MashuTdGradeUpQuestId = 0LL;
  *(_QWORD *)&static_fields->ServantIdOberonChoco = 0LL;
  static_fields->MstMissionAlertTime = 259200;
  static_fields->ShopNewItemAddDays = 9.0;
  static_fields->EquipGetEffectId = 0;
  static_fields->MaskColor = (struct UnityEngine_Color_o)xmmword_B70CB0;
  v14 = v12->static_fields;
  *(_QWORD *)&v14->CommandCodeDetachingItemId = 0x3F7FFFFEFFFFFFFFLL;
  *(_QWORD *)&v14->FollowNum = 0x1900000003LL;
  v14->PresentBoxFilterSvtEquipMaterial = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v14->PresentBoxFilterSvtEquipMaterial, 0, v2, v3);
  v15 = BalanceConfig_TypeInfo->static_fields;
  *(_OWORD *)&v15->DisableFriendshipExceed = xmmword_B70210;
  *(_OWORD *)&v15->FriendShipExceedItemId = xmmword_B70890;
  *(_QWORD *)&v15->Torch2ItemId = 0x3500000034LL;
  v15->ReprintLastWarRaidEventIdList = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v15->ReprintLastWarRaidEventIdList, 0, v16, v17);
  v18 = BalanceConfig_TypeInfo->static_fields;
  v18->CommandCardParamUpMax = 500;
  v18->EventTowerFadeOutDelayTime = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v18->EventTowerFadeOutDelayTime, 0, v19, v20);
  v21 = BalanceConfig_TypeInfo->static_fields;
  v21->EventTowerFadeOutPlayTime = 3.0;
  *(_QWORD *)&v21->MaxFriendChocolateUse = 0x300000003LL;
  v21->MainInterludeWarId = 1004;
  v21->MainInterludeWarIdOnMaterial = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v21->MainInterludeWarIdOnMaterial, 0, v22, v23);
  p_EventBoardGameDiceButtonPostion = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion;
  p_EventBoardGameDiceButtonPostion->klass = 0LL;
  sub_1B00C70(p_EventBoardGameDiceButtonPostion, 0, v25, v26);
  p_EventBoardGameMapIdList = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->EventBoardGameMapIdList;
  p_EventBoardGameMapIdList->klass = 0LL;
  sub_1B00C70(p_EventBoardGameMapIdList, 0, v28, v29);
  v30 = BalanceConfig_TypeInfo->static_fields;
  *(_QWORD *)&v30->TitleFlowOld = 0x3EB00000000LL;
  v30->OrdealCallWarId = 401;
  v31 = StringLiteral_3002/*"BGM_TITLE_5"*/;
  v30->OrdealCallClearBgmName = (struct System_String_o *)StringLiteral_3002/*"BGM_TITLE_5"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v30->OrdealCallClearBgmName, v31, v32, v33);
  p_consumeStormPodSpotId = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->consumeStormPodSpotId;
  p_consumeStormPodSpotId->klass = 0LL;
  sub_1B00C70(p_consumeStormPodSpotId, 0, v35, v36);
  p_StormPodHelpIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->StormPodHelpIds;
  p_StormPodHelpIds->klass = 0LL;
  sub_1B00C70(p_StormPodHelpIds, 0, v38, v39);
  p_legacyAspectMovies = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
  p_legacyAspectMovies->klass = 0LL;
  sub_1B00C70(p_legacyAspectMovies, 0, v41, v42);
  p_fullScreenNPChrs = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->fullScreenNPChrs;
  p_fullScreenNPChrs->klass = 0LL;
  sub_1B00C70(p_fullScreenNPChrs, 0, v44, v45);
  p_fullScreenNPSeqIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->fullScreenNPSeqIds;
  p_fullScreenNPSeqIds->klass = 0LL;
  sub_1B00C70(p_fullScreenNPSeqIds, 0, v47, v48);
  p_UIStandFigureROffsetEffectNames = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames;
  p_UIStandFigureROffsetEffectNames->klass = 0LL;
  sub_1B00C70(p_UIStandFigureROffsetEffectNames, 0, v50, v51);
  p_UIStandFigureROffsetImages = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetImages;
  p_UIStandFigureROffsetImages->klass = 0LL;
  sub_1B00C70(p_UIStandFigureROffsetImages, 0, v53, v54);
  v55 = BalanceConfig_TypeInfo->static_fields;
  v55->IsWarBoardAiCalcEvalSum = 0;
  v55->WarBoardEvalFactorsAffectRatio = 10000;
  v55->StoneFragmentExchangeNoticeDispMax = 999;
  *(_QWORD *)&v55->MapCameraMoveTimeConstant = 0x3FD9999A00000000LL;
  *(_QWORD *)&v55->MapCameraMoveTimeLogarithmBase = 0xF00002AF8LL;
  v55->Camera2DResetDuration = 0.644;
  v56 = sub_1B00D74(int___TypeInfo, 1LL);
  if ( !v56 )
    goto LABEL_18;
  v60 = (ServantStatusBattleListViewItem_c *)v56;
  if ( !*(_DWORD *)(v56 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v56 + 32) = 311;
  p_MainChaptersWithEventId = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->MainChaptersWithEventId;
  p_MainChaptersWithEventId->klass = v60;
  sub_1B00C70(p_MainChaptersWithEventId, (int32_t)v60, v58, v59);
  v56 = sub_1B00D74(int___TypeInfo, 1LL);
  if ( !v56 )
    goto LABEL_18;
  v60 = (ServantStatusBattleListViewItem_c *)v56;
  if ( !*(_DWORD *)(v56 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v56 + 32) = 2800502;
  p_TreasureDevicesForcedOpenEffect = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->TreasureDevicesForcedOpenEffect;
  p_TreasureDevicesForcedOpenEffect->klass = v60;
  sub_1B00C70(p_TreasureDevicesForcedOpenEffect, (int32_t)v60, v62, v63);
  v56 = sub_1B00D74(int___TypeInfo, 1LL);
  if ( !v56 )
    goto LABEL_18;
  v60 = (ServantStatusBattleListViewItem_c *)v56;
  if ( !*(_DWORD *)(v56 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v56 + 32) = 800106;
  p_HeroineTreasureDeviceRankUpEffects = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects;
  p_HeroineTreasureDeviceRankUpEffects->klass = v60;
  sub_1B00C70(p_HeroineTreasureDeviceRankUpEffects, (int32_t)v60, v65, v66);
  *(_QWORD *)&BalanceConfig_TypeInfo->static_fields->HeroineLimitCountOrtinaxRefurbished = 0x3D09640000000DLL;
  v68 = (System_Array_o *)sub_1B00D74(int___TypeInfo, 4LL);
  v119.fields.value = Field__PrivateImplementationDetails__0576E2463551A09802222B33A5BA38F57896D9DD406B6DB32A10299A54B4B5BC;
  v69 = (ServantStatusBattleListViewItem_c *)v68;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_60233828(v68, v119, 0LL);
  p_Extra1SortOrderClassIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->Extra1SortOrderClassIds;
  p_Extra1SortOrderClassIds->klass = v69;
  sub_1B00C70(p_Extra1SortOrderClassIds, (int32_t)v69, v71, v72);
  v73 = (System_Array_o *)sub_1B00D74(int___TypeInfo, 4LL);
  v120.fields.value = Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA;
  v74 = (ServantStatusBattleListViewItem_c *)v73;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_60233828(v73, v120, 0LL);
  p_Extra2SortOrderClassIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds;
  p_Extra2SortOrderClassIds->klass = v74;
  sub_1B00C70(p_Extra2SortOrderClassIds, (int32_t)v74, v76, v77);
  v78 = BalanceConfig_TypeInfo->static_fields;
  v78->ClassBoardCameraSelectMoveMaxDistance = 1024;
  *(_QWORD *)&v78->ClassBoardCameraSelectSecMin = 0x3F8000003DCCCCCDLL;
  *(_QWORD *)&v78->ClassBoardCameraSelectEasingType = 0x3FD9999A00000005LL;
  v79 = sub_1B00D74(int___TypeInfo, 0LL);
  p_NotUIChangeMapIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->NotUIChangeMapIds;
  p_NotUIChangeMapIds->klass = (ServantStatusBattleListViewItem_c *)v79;
  sub_1B00C70(p_NotUIChangeMapIds, v79, v81, v82);
  v56 = sub_1B00D74(int___TypeInfo, 1LL);
  if ( !v56 )
    goto LABEL_18;
  v60 = (ServantStatusBattleListViewItem_c *)v56;
  if ( !*(_DWORD *)(v56 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v56 + 32) = 3300100;
  p_LimitSealedDialogMaxLimitOpenIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds;
  p_LimitSealedDialogMaxLimitOpenIds->klass = v60;
  sub_1B00C70(p_LimitSealedDialogMaxLimitOpenIds, (int32_t)v60, v83, v84);
  v56 = sub_1B00D74(int___TypeInfo, 1LL);
  if ( !v56 )
    goto LABEL_18;
  v60 = (ServantStatusBattleListViewItem_c *)v56;
  if ( !*(_DWORD *)(v56 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v56 + 32) = 402;
  p_OrdealCallChapterFolderEventUIDispWarIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds;
  p_OrdealCallChapterFolderEventUIDispWarIds->klass = v60;
  sub_1B00C70(p_OrdealCallChapterFolderEventUIDispWarIds, (int32_t)v60, v86, v87);
  v56 = sub_1B00D74(int___TypeInfo, 1LL);
  if ( !v56 )
    goto LABEL_18;
  v60 = (ServantStatusBattleListViewItem_c *)v56;
  if ( !*(_DWORD *)(v56 + 24) )
    goto LABEL_19;
  *(_DWORD *)(v56 + 32) = 80432;
  p_RecoveryFatigueDelayedChangeBgEvents = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents;
  p_RecoveryFatigueDelayedChangeBgEvents->klass = v60;
  sub_1B00C70(p_RecoveryFatigueDelayedChangeBgEvents, (int32_t)v60, v89, v90);
  v56 = sub_1B00D74(int___TypeInfo, 1LL);
  if ( !v56 )
LABEL_18:
    sub_1B00F28(v56, v57);
  v60 = (ServantStatusBattleListViewItem_c *)v56;
  if ( !*(_DWORD *)(v56 + 24) )
LABEL_19:
    sub_1B00F30(v56, v60);
  *(_DWORD *)(v56 + 32) = 94086401;
  p_noneDisplayFreeQuestMaterial = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->noneDisplayFreeQuestMaterial;
  p_noneDisplayFreeQuestMaterial->klass = v60;
  sub_1B00C70(p_noneDisplayFreeQuestMaterial, (int32_t)v60, v92, v93);
  v95 = (System_Array_o *)sub_1B00D74(int___TypeInfo, 5LL);
  v121.fields.value = Field__PrivateImplementationDetails__829FEE660E2799B8814849BCC3884998BB3651E975AC0C0D659AD53227033DBC;
  v96 = (ServantStatusBattleListViewItem_c *)v95;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_60233828(v95, v121, 0LL);
  p_NotSendTrackEventAtWarIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds;
  p_NotSendTrackEventAtWarIds->klass = v96;
  sub_1B00C70(p_NotSendTrackEventAtWarIds, (int32_t)v96, v98, v99);
  BalanceConfig_TypeInfo->static_fields->StartingMemberFriendshipRate = 0;
  v100 = (System_Array_o *)sub_1B00D74(int___TypeInfo, 6LL);
  v122.fields.value = Field__PrivateImplementationDetails__96039A68C58EBF2F40B99A5B8F9F313745D9C4E02164BB0FCE39159471432F4B;
  v101 = (ServantStatusBattleListViewItem_c *)v100;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_60233828(v100, v122, 0LL);
  p_NotRequiredPlayWarIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->NotRequiredPlayWarIds;
  p_NotRequiredPlayWarIds->klass = v101;
  sub_1B00C70(p_NotRequiredPlayWarIds, (int32_t)v101, v103, v104);
  *(_WORD *)&BalanceConfig_TypeInfo->static_fields->IsEnableOldBlockShortestRoute = 0;
  v105 = sub_1B00D74(int___TypeInfo, 0LL);
  p_EventItemNotDispItemGetEffect = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->EventItemNotDispItemGetEffect;
  p_EventItemNotDispItemGetEffect->klass = (ServantStatusBattleListViewItem_c *)v105;
  sub_1B00C70(p_EventItemNotDispItemGetEffect, v105, v107, v108);
  BalanceConfig_TypeInfo->static_fields->IsEnableFadeRerunSkipped = 1;
  v109 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B00F18(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v109,
    (const MethodInfo_308427C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  p_MissionIconDisplayMsDictionary = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->MissionIconDisplayMsDictionary;
  p_MissionIconDisplayMsDictionary->klass = (ServantStatusBattleListViewItem_c *)v109;
  sub_1B00C70(p_MissionIconDisplayMsDictionary, (int32_t)v109, v111, v112);
  v113 = BalanceConfig_TypeInfo->static_fields;
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&v113->DisableBackMaskTime = _D0;
  v113->IsMissionNaviAutoClassify = 0;
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
  __int64 v204; // x1
  __int64 v205; // x1
  __int64 v206; // x1
  __int64 v207; // x1
  __int64 v208; // x1
  __int64 v209; // x1
  __int64 v210; // x1
  __int64 v211; // x1
  __int64 v212; // x1
  Il2CppObject *Instance; // x0
  __int64 v214; // x1
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v216; // x21
  ConstantStrMaster_o *v217; // x20
  int32_t Value_37816176; // w0
  BalanceConfig_c *v219; // x8
  int32_t v220; // w22
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t Value_37815620; // x0
  struct BalanceConfig_StaticFields *v223; // x8
  int32_t Value; // w0
  struct BalanceConfig_StaticFields *v225; // x8
  int32_t SupportDeckMax; // w9
  int32_t SupportDeckMemberMax; // w10
  int64_t v228; // x21
  ManagerConfig_c *v229; // x0
  int64_t SERVER_TIME_OVER_LIMIT; // x23
  BalanceConfig_c *v231; // x0
  int32_t v232; // w21
  int32_t v233; // w0
  BalanceConfig_c *v234; // x8
  int32_t v235; // w21
  int32_t v236; // w0
  System_String_o *v237; // x1
  ServantStatusBattleListViewItem_o *p_UseTermsAgreementRequiredAppVersion; // x0
  int32_t v239; // w2
  int32_t v240; // w3
  System_String_o *v241; // x1
  ServantStatusBattleListViewItem_o *p_UseTermsLatestVersion; // x0
  int32_t v243; // w2
  int32_t v244; // w3
  bool v245; // w9
  int monitor; // w9
  System_Int32_array *ValueArray; // x1
  ServantStatusBattleListViewItem_o *p_CombineServantSkillIds; // x0
  int32_t v249; // w2
  int32_t v250; // w3
  System_String_o *v251; // x0
  System_Int32_array *v252; // x1
  ServantStatusBattleListViewItem_o *p_ServantIdsBirthdayBeforeValentine; // x0
  int32_t v254; // w2
  int32_t v255; // w3
  System_String_o *v256; // x0
  System_Int32_array *v257; // x0
  int32_t v258; // w2
  int32_t v259; // w3
  BalanceConfig_c *v260; // x8
  ServantStatusBattleListViewItem_c *v261; // x21
  ServantStatusBattleListViewItem_o *p_ServantIdsIgnoreFormChange; // x0
  int32_t v263; // w0
  BalanceConfig_c *v264; // x8
  int32_t v265; // w21
  int32_t v266; // w0
  int v267; // w9
  int32_t v268; // w0
  struct BalanceConfig_StaticFields *v269; // x8
  System_String_o *v270; // x0
  BalanceConfig_c *v271; // x0
  float v272; // s8
  System_String_o *v273; // x0
  BalanceConfig_c *v274; // x0
  float v275; // s8
  System_String_o *v276; // x0
  BalanceConfig_c *v277; // x0
  float v278; // s8
  System_String_o *v279; // x0
  BalanceConfig_c *v280; // x0
  float v281; // s8
  int32_t v282; // w0
  struct BalanceConfig_StaticFields *v283; // x8
  int32_t v284; // w0
  struct BalanceConfig_StaticFields *v285; // x8
  System_String_o *v286; // x0
  System_String_array *v287; // x0
  BalanceConfig___c_c *v288; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v289; // x21
  System_Func_object__int__o *_9__230_0; // x22
  Il2CppObject *v291; // x23
  struct BalanceConfig___c_StaticFields *v292; // x0
  int32_t v293; // w2
  int32_t v294; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v295; // x0
  System_Int32_array *v296; // x0
  int32_t v297; // w2
  int32_t v298; // w3
  BalanceConfig_c *v299; // x8
  ServantStatusBattleListViewItem_c *v300; // x21
  ServantStatusBattleListViewItem_o *p_PresentBoxFilterSvtEquipMaterial; // x0
  int32_t v302; // w0
  int32_t v303; // w21
  BalanceConfig_c *v304; // x0
  int32_t v305; // w0
  int32_t v306; // w21
  BalanceConfig_c *v307; // x0
  int32_t v308; // w0
  BalanceConfig_c *v309; // x8
  int32_t v310; // w21
  System_Int32_array *v311; // x1
  ServantStatusBattleListViewItem_o *p_ReprintLastWarRaidEventIdList; // x0
  int32_t v313; // w2
  int32_t v314; // w3
  System_Int32_array *v315; // x1
  ServantStatusBattleListViewItem_o *p_EventTowerFadeOutDelayTime; // x0
  int32_t v317; // w2
  int32_t v318; // w3
  System_Array_o *v319; // x21
  int32_t v320; // w2
  int32_t v321; // w3
  BalanceConfig_c *v322; // x0
  ServantStatusBattleListViewItem_o *v323; // x0
  int32_t v324; // w0
  BalanceConfig_c *v325; // x8
  int v326; // w21
  System_Int32_array *v327; // x1
  ServantStatusBattleListViewItem_o *p_EventBoardGameDiceButtonPostion; // x0
  int32_t v329; // w2
  int32_t v330; // w3
  int32_t v331; // w2
  int32_t v332; // w3
  unsigned int v333; // w8
  ServantStatusBattleListViewItem_c *v334; // x21
  BalanceConfig_c *v335; // x0
  ServantStatusBattleListViewItem_o *v336; // x0
  System_Int32_array *v337; // x0
  int32_t v338; // w2
  int32_t v339; // w3
  BalanceConfig_c *v340; // x8
  ServantStatusBattleListViewItem_c *v341; // x21
  ServantStatusBattleListViewItem_o *p_MainInterludeWarIdOnMaterial; // x0
  int32_t v343; // w2
  int32_t v344; // w3
  ServantStatusBattleListViewItem_c *v345; // x21
  BalanceConfig_c *v346; // x0
  ServantStatusBattleListViewItem_o *v347; // x0
  System_Int32_array *v348; // x0
  int32_t v349; // w2
  int32_t v350; // w3
  BalanceConfig_c *v351; // x8
  ServantStatusBattleListViewItem_c *v352; // x21
  ServantStatusBattleListViewItem_o *p_EventBoardGameMapIdList; // x0
  System_String_o *v354; // x21
  int32_t v355; // w2
  int32_t v356; // w3
  BalanceConfig_c *v357; // x0
  ServantStatusBattleListViewItem_o *p_OrdealCallClearBgmName; // x0
  System_Array_o *v359; // x0
  System_Int32_array *v360; // x21
  System_Int32_array *v361; // x0
  int32_t v362; // w2
  int32_t v363; // w3
  BalanceConfig_c *v364; // x8
  ServantStatusBattleListViewItem_c *v365; // x21
  ServantStatusBattleListViewItem_o *p_consumeStormPodSpotId; // x0
  System_Int32_array *v367; // x1
  ServantStatusBattleListViewItem_o *p_StormPodHelpIds; // x0
  int32_t v369; // w2
  int32_t v370; // w3
  System_String_array *ValueStringArray; // x1
  ServantStatusBattleListViewItem_o *p_legacyAspectMovies; // x0
  int32_t v373; // w2
  int32_t v374; // w3
  System_Int32_array *v375; // x1
  ServantStatusBattleListViewItem_o *p_fullScreenNPChrs; // x0
  int32_t v377; // w2
  int32_t v378; // w3
  System_Int32_array *v379; // x1
  ServantStatusBattleListViewItem_o *p_fullScreenNPSeqIds; // x0
  int32_t v381; // w2
  int32_t v382; // w3
  System_String_o *v383; // x1
  ServantStatusBattleListViewItem_o *p_IOS_ExaminationNewsUrl; // x0
  int32_t v385; // w2
  int32_t v386; // w3
  int32_t v387; // w2
  int32_t v388; // w3
  struct BalanceConfig_StaticFields *v389; // x8
  int32_t v390; // w1
  int32_t v391; // w0
  BalanceConfig_c *v392; // x8
  int32_t v393; // w21
  System_String_array *v394; // x1
  ServantStatusBattleListViewItem_o *p_UIStandFigureROffsetEffectNames; // x0
  int32_t v396; // w2
  int32_t v397; // w3
  System_String_array *v398; // x1
  ServantStatusBattleListViewItem_o *p_UIStandFigureROffsetImages; // x0
  int32_t v400; // w2
  int32_t v401; // w3
  BalanceConfig_c *v402; // x0
  int32_t v403; // w2
  int32_t v404; // w3
  Il2CppObject *v405; // x21
  int32_t v406; // w1
  int32_t v407; // w2
  int32_t v408; // w3
  int32_t v409; // w1
  int32_t v410; // w2
  int32_t v411; // w3
  int32_t v412; // w1
  int32_t v413; // w2
  int32_t v414; // w3
  int32_t v415; // w1
  int32_t v416; // w2
  int32_t v417; // w3
  int32_t v418; // w1
  int32_t v419; // w2
  int32_t v420; // w3
  int32_t v421; // w1
  int32_t v422; // w2
  int32_t v423; // w3
  int32_t v424; // w1
  int32_t v425; // w2
  int32_t v426; // w3
  BalanceConfig_c *v427; // x0
  ServantStatusBattleListViewItem_o *v428; // x0
  int32_t v429; // w2
  int32_t v430; // w3
  Il2CppObject *v431; // x21
  int32_t v432; // w1
  int32_t v433; // w2
  int32_t v434; // w3
  int32_t v435; // w1
  int32_t v436; // w2
  int32_t v437; // w3
  int32_t v438; // w1
  int32_t v439; // w2
  int32_t v440; // w3
  int32_t v441; // w1
  int32_t v442; // w2
  int32_t v443; // w3
  int32_t v444; // w1
  int32_t v445; // w2
  int32_t v446; // w3
  int32_t v447; // w1
  int32_t v448; // w2
  int32_t v449; // w3
  int32_t v450; // w1
  int32_t v451; // w2
  int32_t v452; // w3
  int32_t v453; // w1
  int32_t v454; // w2
  int32_t v455; // w3
  int32_t v456; // w1
  int32_t v457; // w2
  int32_t v458; // w3
  int32_t v459; // w1
  int32_t v460; // w2
  int32_t v461; // w3
  int32_t v462; // w1
  int32_t v463; // w2
  int32_t v464; // w3
  int32_t v465; // w1
  int32_t v466; // w2
  int32_t v467; // w3
  int32_t v468; // w1
  int32_t v469; // w2
  int32_t v470; // w3
  int32_t v471; // w1
  int32_t v472; // w2
  int32_t v473; // w3
  int32_t v474; // w1
  int32_t v475; // w2
  int32_t v476; // w3
  int32_t v477; // w1
  int32_t v478; // w2
  int32_t v479; // w3
  int32_t v480; // w1
  int32_t v481; // w2
  int32_t v482; // w3
  int32_t v483; // w1
  int32_t v484; // w2
  int32_t v485; // w3
  BalanceConfig_c *v486; // x0
  ServantStatusBattleListViewItem_o *v487; // x0
  int32_t v488; // w0
  BalanceConfig_c *v489; // x8
  int32_t v490; // w21
  bool v491; // w9
  bool v492; // w9
  struct BalanceConfig_StaticFields *v493; // x8
  int32_t v494; // w0
  struct BalanceConfig_StaticFields *v495; // x8
  int32_t v496; // w0
  struct BalanceConfig_StaticFields *v497; // x8
  int32_t v498; // w0
  struct BalanceConfig_StaticFields *v499; // x8
  System_Int32_array *v500; // x1
  ServantStatusBattleListViewItem_o *p_MainChaptersWithEventId; // x0
  int32_t v502; // w2
  int32_t v503; // w3
  int32_t v504; // w0
  struct BalanceConfig_StaticFields *v505; // x8
  System_Int32_array *v506; // x1
  ServantStatusBattleListViewItem_o *p_TreasureDevicesForcedOpenEffect; // x0
  int32_t v508; // w2
  int32_t v509; // w3
  System_Int32_array *v510; // x1
  ServantStatusBattleListViewItem_o *p_HeroineTreasureDeviceRankUpEffects; // x0
  int32_t v512; // w2
  int32_t v513; // w3
  int32_t v514; // w0
  struct BalanceConfig_StaticFields *v515; // x8
  int32_t v516; // w0
  struct BalanceConfig_StaticFields *v517; // x8
  System_Int32_array *v518; // x1
  ServantStatusBattleListViewItem_o *p_Extra1SortOrderClassIds; // x0
  int32_t v520; // w2
  int32_t v521; // w3
  System_Int32_array *v522; // x1
  ServantStatusBattleListViewItem_o *p_Extra2SortOrderClassIds; // x0
  int32_t v524; // w2
  int32_t v525; // w3
  int32_t v526; // w0
  struct BalanceConfig_StaticFields *v527; // x8
  int32_t v528; // w0
  struct BalanceConfig_StaticFields *v529; // x8
  System_Int32_array *v530; // x1
  ServantStatusBattleListViewItem_o *p_NotUIChangeMapIds; // x0
  int32_t v532; // w2
  int32_t v533; // w3
  System_Int32_array *v534; // x1
  ServantStatusBattleListViewItem_o *p_LimitSealedDialogMaxLimitOpenIds; // x0
  int32_t v536; // w2
  int32_t v537; // w3
  System_Int32_array *v538; // x1
  ServantStatusBattleListViewItem_o *p_OrdealCallChapterFolderEventUIDispWarIds; // x0
  int32_t v540; // w2
  int32_t v541; // w3
  System_Int32_array *v542; // x1
  ServantStatusBattleListViewItem_o *p_RecoveryFatigueDelayedChangeBgEvents; // x0
  int32_t v544; // w2
  int32_t v545; // w3
  System_Int32_array *v546; // x1
  ServantStatusBattleListViewItem_o *p_noneDisplayFreeQuestMaterial; // x0
  int32_t v548; // w2
  int32_t v549; // w3
  System_Int32_array *v550; // x1
  ServantStatusBattleListViewItem_o *p_NotSendTrackEventAtWarIds; // x0
  int32_t v552; // w2
  int32_t v553; // w3
  int32_t v554; // w0
  struct BalanceConfig_StaticFields *v555; // x8
  System_Int32_array *v556; // x1
  ServantStatusBattleListViewItem_o *p_NotRequiredPlayWarIds; // x0
  int32_t v558; // w2
  int32_t v559; // w3
  bool v560; // w9
  bool v561; // w9
  System_String_o *v562; // x1
  ServantStatusBattleListViewItem_o *p_LoginQuestReturnTerminalDialogMessage; // x0
  int32_t v564; // w2
  int32_t v565; // w3
  System_Int32_array *v566; // x1
  ServantStatusBattleListViewItem_o *p_EventItemNotDispItemGetEffect; // x0
  int32_t v568; // w2
  int32_t v569; // w3
  bool v570; // w9
  System_Collections_Generic_Dictionary_object__int__o *v571; // x20
  MstMissionEntity_c *v572; // x0
  TitleInfoControl_c *v573; // x8
  System_String_o *MISSION_ICON_DISPLAY_MS_GROUP_NORMAL; // x21
  float EVENT_ALPHA_ANIM_TIME_INTERVAL; // s0
  int32_t v576; // w2
  struct MstMissionEntity_StaticFields *v577; // x9
  float v578; // s0
  Il2CppObject *MISSION_ICON_DISPLAY_MS_GROUP_LIMITED; // x21
  int32_t v580; // w2
  int32_t v581; // w0
  ServantStatusBattleListViewItem_o *p_MissionIconDisplayMsDictionary; // x0
  int32_t v583; // w2
  int32_t v584; // w3
  float result; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeFieldHandle_o v586; // 0:w1.4
  System_RuntimeFieldHandle_o v587; // 0:w1.4

  if ( (byte_48E1E58 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, v1);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ConstantLongMaster___, v2);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ConstantMaster___, v3);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ConstantStrMaster___, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v6);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v7);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_string__int___, v8);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1B00CCC(&System_Func_string__int__TypeInfo, v10);
    sub_1B00CCC(&int___TypeInfo, v11);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v12);
    sub_1B00CCC(&System_Math_TypeInfo, v13);
    sub_1B00CCC(&MstMissionEntity_TypeInfo, v14);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B00CCC(&string___TypeInfo, v16);
    sub_1B00CCC(&TitleInfoControl_TypeInfo, v17);
    sub_1B00CCC(
      &Field__PrivateImplementationDetails__84DF4B72A51E01473BC25693E526BC603A140C4300062B4A7F64A9F7D00ABB95,
      v18);
    sub_1B00CCC(
      &Field__PrivateImplementationDetails__A1FBA00A0F8840358C0A54605FFD365F75E3A3D7AFF25F48F474C4E89BB0B37D,
      v19);
    sub_1B00CCC(&Method_BalanceConfig___c__Initialize_b__230_0__, v20);
    sub_1B00CCC(&BalanceConfig___c_TypeInfo, v21);
    sub_1B00CCC(&StringLiteral_8501/*"MAX_USER_ITEM"*/, v22);
    sub_1B00CCC(&StringLiteral_8032/*"JEKYLL_SVT_ID"*/, v23);
    sub_1B00CCC(&StringLiteral_1397/*"1053912:100:0"*/, v24);
    sub_1B00CCC(&StringLiteral_13211/*"TREASURE_DEVICES_FORCED_OPEN_EFFECT"*/, v25);
    sub_1B00CCC(&StringLiteral_11843/*"SHOP_DETAIL_CHECK_DIALOG_FONT_SIZE"*/, v26);
    sub_1B00CCC(&StringLiteral_8169/*"LIMIT_SEALED_DIALOG_MAX_LIMIT_OPEN_IDS"*/, v27);
    sub_1B00CCC(&StringLiteral_8500/*"MAX_USER_COMMAND_CODE"*/, v28);
    sub_1B00CCC(&StringLiteral_9623/*"OTHER_IMAGE_LIMIT_COUNT"*/, v29);
    sub_1B00CCC(&StringLiteral_8419/*"MASHU_SVT_ID3"*/, v30);
    sub_1B00CCC(&StringLiteral_4992/*"DISABLE_FRIENDSHIP_EXCEED"*/, v31);
    sub_1B00CCC(&StringLiteral_12103/*"STORMPOD_HELP_IDS"*/, v32);
    sub_1B00CCC(&StringLiteral_2994/*"BGM_FADE_OUT_TIME_BEFORE_BATTLE"*/, v33);
    sub_1B00CCC(&StringLiteral_10881/*"REPRINT_LAST_WAR_RAID_EVENT_ID_LIST"*/, v34);
    sub_1B00CCC(&StringLiteral_17039/*"bit_result_bond"*/, v35);
    sub_1B00CCC(&StringLiteral_8492/*"MAX_MANA"*/, v36);
    sub_1B00CCC(&StringLiteral_5499/*"EVENT_BOARD_GAME_DICE_BUTTON_POS"*/, v37);
    sub_1B00CCC(&StringLiteral_1512/*"5047002:100:0"*/, v38);
    sub_1B00CCC(&StringLiteral_5574/*"EVENT_ITEM_NOT_DISP_ITEM_GET_EFFECT"*/, v39);
    sub_1B00CCC(&StringLiteral_5673/*"EVENT_TOWER_FADEOUT_PLAY_TIME"*/, v40);
    sub_1B00CCC(&StringLiteral_9149/*"NONE_DISPLAY_FREE_QUEST_MATERIAL"*/, v41);
    sub_1B00CCC(&StringLiteral_1396/*"1053911:100:0"*/, v42);
    sub_1B00CCC(&StringLiteral_1395/*"1053910:100:0"*/, v43);
    sub_1B00CCC(&StringLiteral_7343/*"IS_WAR_BOARD_AI_FILTER_WASTE_ROUTE"*/, v44);
    sub_1B00CCC(&StringLiteral_19768/*"https://view.fate-go.jp/"*/, v45);
    sub_1B00CCC(&StringLiteral_7097/*"HYDE_SVT_ID"*/, v46);
    sub_1B00CCC(&StringLiteral_9502/*"OBERON_CHOCO_SVT_ID"*/, v47);
    sub_1B00CCC(&StringLiteral_6319/*"FIX_MAIN_SUPPORT_DECK_NUM"*/, v48);
    sub_1B00CCC(&StringLiteral_8417/*"MASHU_SVT_ID1"*/, v49);
    sub_1B00CCC(&StringLiteral_3653/*"COMBINE_SERVANT_SKILL_IDS"*/, v50);
    sub_1B00CCC(&StringLiteral_1392/*"1053900:100:0"*/, v51);
    sub_1B00CCC(&StringLiteral_9613/*"ORT_FIRST_QUEST_ID"*/, v52);
    sub_1B00CCC(&StringLiteral_8513/*"MEMORY_DECK_LIMIT_BY_QUEST"*/, v53);
    sub_1B00CCC(&StringLiteral_5502/*"EVENT_BOARD_GAME_MAP_ID_LIST"*/, v54);
    sub_1B00CCC(&StringLiteral_8210/*"LOGIN_QUEST_RETURN_TERMINAL_DIALOG_MESSAGE"*/, v55);
    sub_1B00CCC(&StringLiteral_9209/*"NPC_FRIEND_POINT"*/, v56);
    sub_1B00CCC(&StringLiteral_3432/*"CLASS_BOARD_2D_CAMERA_DEFAULT_SIZE"*/, v57);
    sub_1B00CCC(&StringLiteral_1510/*"5047000:100:0"*/, v58);
    sub_1B00CCC(&StringLiteral_4991/*"DISABLE_BACK_MASK_TIME"*/, v59);
    sub_1B00CCC(&StringLiteral_11230/*"SAME_CLASS_MULI_EXP"*/, v60);
    sub_1B00CCC(&StringLiteral_8486/*"MAX_EVENT_ACTIVITY_POINT"*/, v61);
    sub_1B00CCC(&StringLiteral_1480/*"3D_MAP_CAMERA_MOVE_EASING_TYPE"*/, v62);
    sub_1B00CCC(&StringLiteral_9110/*"NEED_REBOOT_TIME"*/, v63);
    sub_1B00CCC(&StringLiteral_9610/*"ORDEAL_CALL_CHAPTER_FOLDER_EVENT_UI_DISP_WAR_IDS"*/, v64);
    sub_1B00CCC(&StringLiteral_6419/*"FREE_GACHA_RESET_AT"*/, v65);
    sub_1B00CCC(&StringLiteral_8504/*"MAX_USER_SVT_EQUIP"*/, v66);
    sub_1B00CCC(&StringLiteral_11263/*"SCENARIO_SPEED_HIGH"*/, v67);
    sub_1B00CCC(&StringLiteral_6453/*"FRIEND_POINT"*/, v68);
    sub_1B00CCC(&StringLiteral_1389/*"1053000:100:0"*/, v69);
    sub_1B00CCC(&StringLiteral_17054/*"bit_result_servant"*/, v70);
    sub_1B00CCC(&StringLiteral_5691/*"EXCLUSIVE_NPC_SERVANT_ID_START"*/, v71);
    sub_1B00CCC(&StringLiteral_8493/*"MAX_NEAR_PRESENT_OFFSET_NUM"*/, v72);
    sub_1B00CCC(&StringLiteral_10869/*"RECOVERY_FATIGUE_DELAYED_CHANGE_BG_EVENTS"*/, v73);
    sub_1B00CCC(&StringLiteral_10278/*"POWERUP_QUEST_WAR_ID"*/, v74);
    sub_1B00CCC(&StringLiteral_1511/*"5047001:100:0"*/, v75);
    sub_1B00CCC(&StringLiteral_12031/*"STAND_FIGURE_R_OFFSET_EFFECT_IMAGES"*/, v76);
    sub_1B00CCC(&StringLiteral_3677/*"COMMAND_CARD_PRM_UP_MAX"*/, v77);
    sub_1B00CCC(&StringLiteral_12034/*"STARTING_MEMBER_FRIENDSHIP_RATE"*/, v78);
    sub_1B00CCC(&StringLiteral_9619/*"ORT_THIRD_FORM_ID"*/, v79);
    sub_1B00CCC(&StringLiteral_12032/*"STAND_FIGURE_R_OFFSET_EFFECT_NAMES"*/, v80);
    sub_1B00CCC(&StringLiteral_7339/*"IS_MISSION_NAVI_AUTO_CLASSIFY"*/, v81);
    sub_1B00CCC(&StringLiteral_1394/*"1053902:100:0"*/, v82);
    sub_1B00CCC(&StringLiteral_8420/*"MASHU_TD_GRADE_UP_QUEST_ID"*/, v83);
    sub_1B00CCC(&StringLiteral_8499/*"MAX_STONE"*/, v84);
    sub_1B00CCC(&StringLiteral_8488/*"MAX_FRIENDPOINT"*/, v85);
    sub_1B00CCC(&StringLiteral_9191/*"NOT_UI_CHANGE_MAP_IDS"*/, v86);
    sub_1B00CCC(&StringLiteral_6299/*"FES_WAR_ID"*/, v87);
    sub_1B00CCC(&StringLiteral_9617/*"ORT_LATE_QUEST_ID"*/, v88);
    sub_1B00CCC(&StringLiteral_17055/*"bit_result_skill"*/, v89);
    sub_1B00CCC(&StringLiteral_9614/*"ORT_LATE_PHASE_BREAK"*/, v90);
    sub_1B00CCC(&StringLiteral_17040/*"bit_result_command_card_exceed"*/, v91);
    sub_1B00CCC(&StringLiteral_3437/*"CLASS_BOARD_CAMERA_SELECT_MOVE_MAX_DISTANCE"*/, v92);
    sub_1B00CCC(&StringLiteral_3438/*"CLASS_BOARD_CAMERA_SELECT_SEC_MAX"*/, v93);
    sub_1B00CCC(&StringLiteral_8503/*"MAX_USER_SVT"*/, v94);
    sub_1B00CCC(&StringLiteral_9513/*"ONE_ACT"*/, v95);
    sub_1B00CCC(&StringLiteral_6318/*"FIX_EVENT_SUPPORT_DECK_NUM"*/, v96);
    sub_1B00CCC(&StringLiteral_15254/*"WAR_BOARD_EVAL_FACTORS_AFFECT_RATIO"*/, v97);
    sub_1B00CCC(&StringLiteral_6421/*"FRIENDPOINT_BOOST_ITEM_EFFECT_ID"*/, v98);
    sub_1B00CCC(&StringLiteral_17044/*"bit_result_friendship_exceed"*/, v99);
    sub_1B00CCC(&StringLiteral_8421/*"MASHU_TD_GRADE_UP_QUEST_PHASE"*/, v100);
    sub_1B00CCC(&StringLiteral_10887/*"REQUEST_TOP_HOME_EXPIRATION_DATE_SEC_UPDATE_EVENT_MAP"*/, v101);
    sub_1B00CCC(&StringLiteral_3436/*"CLASS_BOARD_CAMERA_SELECT_EASING_TYPE"*/, v102);
    sub_1B00CCC(&StringLiteral_7336/*"IS_ENABLE_OLD_BLOCK_SHORTEST_ROUTE"*/, v103);
    sub_1B00CCC(&StringLiteral_8397/*"MAIN_CHAPTERS_WITH_EVENT_ID"*/, v104);
    sub_1B00CCC(&StringLiteral_1393/*"1053901:100:0"*/, v105);
    sub_1B00CCC(&StringLiteral_17041/*"bit_result_extraskill"*/, v106);
    sub_1B00CCC(&StringLiteral_1513/*"5047900:100:0"*/, v107);
    sub_1B00CCC(&StringLiteral_9515/*"ONE_RP"*/, v108);
    sub_1B00CCC(&StringLiteral_8506/*"MAX_USER_SVT_STORAGE"*/, v109);
    sub_1B00CCC(&StringLiteral_9616/*"ORT_LATE_PHASE_SECOND_FORM"*/, v110);
    sub_1B00CCC(&StringLiteral_3811/*"CONSUME_STORMPOD_SPOT_ID"*/, v111);
    sub_1B00CCC(&StringLiteral_2981/*"BEFORE_CHANGE_FREE_DRAW_NUM"*/, v112);
    sub_1B00CCC(&StringLiteral_7342/*"IS_WAR_BOARD_AI_FILTER_NOT_ACTION"*/, v113);
    sub_1B00CCC(&StringLiteral_3356/*"CAMPAIGN_RESET_AT"*/, v114);
    sub_1B00CCC(&StringLiteral_10806/*"RAID_DEFEATED_EFFECT_TIME"*/, v115);
    sub_1B00CCC(&StringLiteral_6486/*"FULL_SCREEN_NP_CHRS"*/, v116);
    sub_1B00CCC(&StringLiteral_6340/*"FOLLOWER_REFRESH_RESET_TIME"*/, v117);
    sub_1B00CCC(&StringLiteral_3474/*"CLASS_BOARD_RELEASE_QUEST_ID"*/, v118);
    sub_1B00CCC(&StringLiteral_6373/*"FOLLOW_NUM"*/, v119);
    sub_1B00CCC(&StringLiteral_3352/*"CAMERA_2D_RESET_DURATION"*/, v120);
    sub_1B00CCC(&StringLiteral_12081/*"STONE_FRAGMENT_EXCHANGE_NOTICE_MAX"*/, v121);
    sub_1B00CCC(&StringLiteral_7345/*"ITEM_ID_QP"*/, v122);
    sub_1B00CCC(&StringLiteral_12269/*"SWIMSUIT_MELT_SVT_ID"*/, v123);
    sub_1B00CCC(&StringLiteral_7042/*"HEROINE_LIMIT_COUNT_ORTINAX_REFURBISHED"*/, v124);
    sub_1B00CCC(&StringLiteral_17051/*"bit_result_noble"*/, v125);
    sub_1B00CCC(&StringLiteral_5456/*"EQUIP_GET_EFFECT_ID"*/, v126);
    sub_1B00CCC(&StringLiteral_9178/*"NOT_FRIEND_POINT"*/, v127);
    sub_1B00CCC(&StringLiteral_5504/*"EVENT_BOARD_GAME_NEXT_BOARD_QUEST_ID"*/, v128);
    sub_1B00CCC(&StringLiteral_9615/*"ORT_LATE_PHASE_DEAD"*/, v129);
    sub_1B00CCC(&StringLiteral_8484/*"MAX_BLACK_LIST_NUM"*/, v130);
    sub_1B00CCC(&StringLiteral_8495/*"MAX_PRESENT_RECEIVE_NUM"*/, v131);
    sub_1B00CCC(&StringLiteral_15004/*"VALENTINE_RELEASE_AT"*/, v132);
    sub_1B00CCC(&StringLiteral_8446/*"MASTER_MISSION_SVT_ID1"*/, v133);
    sub_1B00CCC(&StringLiteral_8218/*"LOSTBELT6_CLEAR_QUEST_ID"*/, v134);
    sub_1B00CCC(&StringLiteral_5505/*"EVENT_BOARD_GAME_NEXT_ROUND_QUEST_ID"*/, v135);
    sub_1B00CCC(&StringLiteral_10886/*"REQUEST_RAID_UPDATE_EVENT_MAP"*/, v136);
    sub_1B00CCC(&StringLiteral_12073/*"STATUS_UP_ADJUST_ATK"*/, v137);
    sub_1B00CCC(&StringLiteral_2052/*"AFTRE_CHANGE_FREE_DRAW_NUM"*/, v138);
    sub_1B00CCC(&StringLiteral_1482/*"3D_MAP_CAMERA_MOVE_TIME_CONSTANT"*/, v139);
    sub_1B00CCC(&StringLiteral_6370/*"FOLLOW_FRIEND_POINT"*/, v140);
    sub_1B00CCC(&StringLiteral_7341/*"IS_WAR_BOARD_AI_CALC_EVAL_SUM"*/, v141);
    sub_1B00CCC(&StringLiteral_8490/*"MAX_FRIEND_HISTORY_NUM"*/, v142);
    sub_1B00CCC(&StringLiteral_11265/*"SCENARIO_SPEED_STEP"*/, v143);
    sub_1B00CCC(&StringLiteral_5672/*"EVENT_TOWER_FADEOUT_DELAY_TIME"*/, v144);
    sub_1B00CCC(&StringLiteral_8209/*"LOGIN_DAY"*/, v145);
    sub_1B00CCC(&StringLiteral_5402/*"ENABLE_SERIAL_CODE"*/, v146);
    sub_1B00CCC(&StringLiteral_8459/*"MATERIAL_MAIN_INTERLUDE_WAR_ID"*/, v147);
    sub_1B00CCC(&StringLiteral_5731/*"EXTRA2_SORT_ORDER_CLASS_IDS"*/, v148);
    sub_1B00CCC(&StringLiteral_6800/*"GACHA_DAILY_MAX_DRAW_NUM_RESET_AT"*/, v149);
    sub_1B00CCC(&StringLiteral_13199/*"TREASUREDEVICE_ID_MASHU3"*/, v150);
    sub_1B00CCC(&StringLiteral_8211/*"LOGIN_RESET_AT"*/, v151);
    sub_1B00CCC(&StringLiteral_1514/*"5047901:100:0"*/, v152);
    sub_1B00CCC(&StringLiteral_1964/*"ACCOUNTING_INITIALIZE_TIMEOUT"*/, v153);
    sub_1B00CCC(&StringLiteral_1517/*"5047911:100:0"*/, v154);
    sub_1B00CCC(&StringLiteral_7337/*"IS_EVENT_POINT_MENU"*/, v155);
    sub_1B00CCC(&StringLiteral_10302/*"PRESENT_BOX_FILTER_SVT_EQUIP_MATERIAL"*/, v156);
    sub_1B00CCC(&StringLiteral_10804/*"RACE_REWARD_RANK_MAX"*/, v157);
    sub_1B00CCC(&StringLiteral_9190/*"NOT_SEND_TRACK_EVENT_AT_WAR_IDS"*/, v158);
    sub_1B00CCC(&StringLiteral_8418/*"MASHU_SVT_ID2"*/, v159);
    sub_1B00CCC(&StringLiteral_11264/*"SCENARIO_SPEED_LOW"*/, v160);
    sub_1B00CCC(&StringLiteral_9611/*"ORDEAL_CALL_CLEAR_BGM_NAME"*/, v161);
    sub_1B00CCC(&StringLiteral_8497/*"MAX_RARE_PRI"*/, v162);
    sub_1B00CCC(&StringLiteral_5730/*"EXTRA1_SORT_ORDER_CLASS_IDS"*/, v163);
    sub_1B00CCC(&StringLiteral_3067/*"BP_EXPRESSION"*/, v164);
    sub_1B00CCC(&StringLiteral_8498/*"MAX_RP"*/, v165);
    sub_1B00CCC(&StringLiteral_12074/*"STATUS_UP_ADJUST_HP"*/, v166);
    sub_1B00CCC(&StringLiteral_9514/*"ONE_COMMAND_SPELL"*/, v167);
    sub_1B00CCC(&StringLiteral_14627/*"USE_TERMS_LATEST_VERSION"*/, v168);
    sub_1B00CCC(&StringLiteral_3557/*"CLOSE_SECRET_TREASURE_DEVICE_QUEST_CLEAR"*/, v169);
    sub_1B00CCC(&StringLiteral_10338/*"PRESENT_VALID_TIME"*/, v170);
    sub_1B00CCC(&StringLiteral_8433/*"MASTER_MISSION_ALERT_TIME"*/, v171);
    sub_1B00CCC(&StringLiteral_3007/*"BIRTHDAY_BEFORE_VALENTINE_SVT_ID"*/, v172);
    sub_1B00CCC(&StringLiteral_6487/*"FULL_SCREEN_NP_SEQ_IDS"*/, v173);
    sub_1B00CCC(&StringLiteral_8487/*"MAX_EVENT_POINT"*/, v174);
    sub_1B00CCC(&StringLiteral_8197/*"LOCATION_REWARD_DLG_COLUMN"*/, v175);
    sub_1B00CCC(&StringLiteral_8485/*"MAX_COMMAND_SPELL"*/, v176);
    sub_1B00CCC(&StringLiteral_8399/*"MAIN_INTERLUDE_WAR_ID"*/, v177);
    sub_1B00CCC(&StringLiteral_7312/*"IOS_EXAMINATION_NEWS_URL"*/, v178);
    sub_1B00CCC(&StringLiteral_1390/*"1053001:100:0"*/, v179);
    sub_1B00CCC(&StringLiteral_12188/*"SUPPORT_DECK_MAX"*/, v180);
    sub_1B00CCC(&StringLiteral_9618/*"ORT_SECONDE_FORM_ID"*/, v181);
    sub_1B00CCC(&StringLiteral_1481/*"3D_MAP_CAMERA_MOVE_TIME_COEFFICIENT"*/, v182);
    sub_1B00CCC(&StringLiteral_7264/*"IGNORE_FORM_CHANGE_SVT_ID"*/, v183);
    sub_1B00CCC(&StringLiteral_8502/*"MAX_USER_LV"*/, v184);
    sub_1B00CCC(&StringLiteral_7335/*"IS_ENABLE_FADE_RERUN_SKIPPED"*/, v185);
    sub_1B00CCC(&StringLiteral_14626/*"USE_TERMS_AGREEMENT_REQUIERD_APP_VERSION"*/, v186);
    sub_1B00CCC(&StringLiteral_8489/*"MAX_FRIENDPOINT_BOOST_ITEM_USE"*/, v187);
    sub_1B00CCC(&StringLiteral_8505/*"MAX_USER_SVT_EQUIP_STORAGE"*/, v188);
    sub_1B00CCC(&StringLiteral_1516/*"5047910:100:0"*/, v189);
    sub_1B00CCC(&StringLiteral_8496/*"MAX_QP"*/, v190);
    sub_1B00CCC(&StringLiteral_7338/*"IS_IOS_EXAMINATION"*/, v191);
    sub_1B00CCC(&StringLiteral_9185/*"NOT_REQUIRED_WAR_IDS"*/, v192);
    sub_1B00CCC(&StringLiteral_3439/*"CLASS_BOARD_CAMERA_SELECT_SEC_MIN"*/, v193);
    sub_1B00CCC(&StringLiteral_6418/*"FREE_DRAW_NUM_CHANGE_AT"*/, v194);
    sub_1B00CCC(&StringLiteral_5542/*"EVENT_DAILY_POINT_RESET_AT"*/, v195);
    sub_1B00CCC(&StringLiteral_1518/*"5047912:100:0"*/, v196);
    sub_1B00CCC(&StringLiteral_1391/*"1053002:100:0"*/, v197);
    sub_1B00CCC(&StringLiteral_4954/*"DECK_MAX"*/, v198);
    sub_1B00CCC(&StringLiteral_10350/*"PROLOGUE_QUEST_ID"*/, v199);
    sub_1B00CCC(&StringLiteral_3558/*"CLOSE_SECRET_TREASURE_DEVICE_SVT_GET"*/, v200);
    sub_1B00CCC(&StringLiteral_12105/*"STORY_WAR_ID"*/, v201);
    sub_1B00CCC(&StringLiteral_8494/*"MAX_PRESENT_BOX_NUM"*/, v202);
    sub_1B00CCC(&StringLiteral_11262/*"SCENARIO_SPEED_DEFAULT"*/, v203);
    sub_1B00CCC(&StringLiteral_13138/*"TITLE_FLOW_OLD"*/, v204);
    sub_1B00CCC(&StringLiteral_1483/*"3D_MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE"*/, v205);
    sub_1B00CCC(&StringLiteral_1461/*"20220731_BOOST_RATE_1"*/, v206);
    sub_1B00CCC(&StringLiteral_8139/*"LEGACY_ASPECT_MOVIES"*/, v207);
    sub_1B00CCC(&StringLiteral_3678/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, v208);
    sub_1B00CCC(&StringLiteral_1515/*"5047902:100:0"*/, v209);
    sub_1B00CCC(&StringLiteral_5727/*"EXPIRATION_DATE"*/, v210);
    sub_1B00CCC(&StringLiteral_9612/*"ORDEAL_CALL_WAR_ID"*/, v211);
    sub_1B00CCC(&StringLiteral_7043/*"HEROINE_TREASURE_DEVICE_RANKUP_EFFECTS"*/, v212);
    byte_48E1E58 = 1;
  }
  result = 0.0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_165;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ConstantMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_165;
  v216 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ConstantLongMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_165;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !MasterData_object )
    goto LABEL_165;
  v217 = (ConstantStrMaster_o *)Instance;
  Value_37816176 = ConstantMaster__GetValue_37816176(
                     (ConstantMaster_o *)MasterData_object,
                     (System_String_o *)StringLiteral_1461/*"20220731_BOOST_RATE_1"*/,
                     200,
                     0LL);
  v219 = BalanceConfig_TypeInfo;
  v220 = Value_37816176;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v219 = BalanceConfig_TypeInfo;
  }
  v219->static_fields->CriticalRateToAddByQuickFirstBonus = v220;
  BalanceConfig_TypeInfo->static_fields->QpMax = ConstantMaster__GetValue(
                                                   (ConstantMaster_o *)MasterData_object,
                                                   (System_String_o *)StringLiteral_8496/*"MAX_QP"*/,
                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ManaMax = ConstantMaster__GetValue(
                                                     (ConstantMaster_o *)MasterData_object,
                                                     (System_String_o *)StringLiteral_8492/*"MAX_MANA"*/,
                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->RarePriMax = ConstantMaster__GetValue(
                                                        (ConstantMaster_o *)MasterData_object,
                                                        (System_String_o *)StringLiteral_8497/*"MAX_RARE_PRI"*/,
                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->StoneMax = ConstantMaster__GetValue(
                                                      (ConstantMaster_o *)MasterData_object,
                                                      (System_String_o *)StringLiteral_8499/*"MAX_STONE"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->FriendPointMax = ConstantMaster__GetValue(
                                                            (ConstantMaster_o *)MasterData_object,
                                                            (System_String_o *)StringLiteral_8488/*"MAX_FRIENDPOINT"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->UserLevelMax = ConstantMaster__GetValue(
                                                          (ConstantMaster_o *)MasterData_object,
                                                          (System_String_o *)StringLiteral_8502/*"MAX_USER_LV"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->UserItemMax = ConstantMaster__GetValue(
                                                         (ConstantMaster_o *)MasterData_object,
                                                         (System_String_o *)StringLiteral_8501/*"MAX_USER_ITEM"*/,
                                                         0LL);
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)MasterData_object,
                               (System_String_o *)StringLiteral_8501/*"MAX_USER_ITEM"*/,
                               0LL);
  static_fields = BalanceConfig_TypeInfo->static_fields;
  static_fields->UserEventItemMax = (int)Instance;
  if ( !v216 )
    goto LABEL_165;
  Value_37815620 = ConstantLongMaster__GetValue_37815620(
                     (ConstantLongMaster_o *)v216,
                     (System_String_o *)StringLiteral_8487/*"MAX_EVENT_POINT"*/,
                     static_fields->UserPointEventMax,
                     0LL);
  v223 = BalanceConfig_TypeInfo->static_fields;
  v223->UserPointEventMax = Value_37815620;
  BalanceConfig_TypeInfo->static_fields->UserEventActivityPointMax = ConstantLongMaster__GetValue_37815620(
                                                                       (ConstantLongMaster_o *)v216,
                                                                       (System_String_o *)StringLiteral_8486/*"MAX_EVENT_ACTIVITY_POINT"*/,
                                                                       v223->UserEventActivityPointMax,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxMax = ConstantMaster__GetValue(
                                                           (ConstantMaster_o *)MasterData_object,
                                                           (System_String_o *)StringLiteral_8494/*"MAX_PRESENT_BOX_NUM"*/,
                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxCheckMax = ConstantMaster__GetValue(
                                                                (ConstantMaster_o *)MasterData_object,
                                                                (System_String_o *)StringLiteral_8495/*"MAX_PRESENT_RECEIVE_NUM"*/,
                                                                0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxValidTime = ConstantMaster__GetValue(
                                                                 (ConstantMaster_o *)MasterData_object,
                                                                 (System_String_o *)StringLiteral_10338/*"PRESENT_VALID_TIME"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxNearMaxOffset = ConstantMaster__GetValue(
                                                                     (ConstantMaster_o *)MasterData_object,
                                                                     (System_String_o *)StringLiteral_8493/*"MAX_NEAR_PRESENT_OFFSET_NUM"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->ServantFrameMax = ConstantMaster__GetValue(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_8503/*"MAX_USER_SVT"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantEquipFrameMax = ConstantMaster__GetValue(
                                                                  (ConstantMaster_o *)MasterData_object,
                                                                  (System_String_o *)StringLiteral_8504/*"MAX_USER_SVT_EQUIP"*/,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCodeFrameMax = ConstantMaster__GetValue(
                                                                 (ConstantMaster_o *)MasterData_object,
                                                                 (System_String_o *)StringLiteral_8500/*"MAX_USER_COMMAND_CODE"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->DeckMax = ConstantMaster__GetValue(
                                                     (ConstantMaster_o *)MasterData_object,
                                                     (System_String_o *)StringLiteral_4954/*"DECK_MAX"*/,
                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->SupportDeckMax = ConstantMaster__GetValue(
                                                            (ConstantMaster_o *)MasterData_object,
                                                            (System_String_o *)StringLiteral_12188/*"SUPPORT_DECK_MAX"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum = ConstantMaster__GetValue(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_6319/*"FIX_MAIN_SUPPORT_DECK_NUM"*/,
                                                                   0LL);
  Value = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_6318/*"FIX_EVENT_SUPPORT_DECK_NUM"*/, 0LL);
  v225 = BalanceConfig_TypeInfo->static_fields;
  SupportDeckMax = v225->SupportDeckMax;
  SupportDeckMemberMax = v225->SupportDeckMemberMax;
  v225->FixEventSupportDeckNum = Value;
  v225->SupportMemberMax = SupportDeckMemberMax * SupportDeckMax;
  BalanceConfig_TypeInfo->static_fields->UserServantStorageMax = ConstantMaster__GetValue(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_8506/*"MAX_USER_SVT_STORAGE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->UserServantEquipStorageMax = ConstantMaster__GetValue(
                                                                        (ConstantMaster_o *)MasterData_object,
                                                                        (System_String_o *)StringLiteral_8505/*"MAX_USER_SVT_EQUIP_STORAGE"*/,
                                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameActRecoverCost = ConstantMaster__GetValue(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_9513/*"ONE_ACT"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameRpRecoverCost = ConstantMaster__GetValue(
                                                                  (ConstantMaster_o *)MasterData_object,
                                                                  (System_String_o *)StringLiteral_9515/*"ONE_RP"*/,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameRpMax = ConstantMaster__GetValue(
                                                          (ConstantMaster_o *)MasterData_object,
                                                          (System_String_o *)StringLiteral_8498/*"MAX_RP"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointFriend = ConstantMaster__GetValue(
                                                                 (ConstantMaster_o *)MasterData_object,
                                                                 (System_String_o *)StringLiteral_6453/*"FRIEND_POINT"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointNotFriend = ConstantMaster__GetValue(
                                                                    (ConstantMaster_o *)MasterData_object,
                                                                    (System_String_o *)StringLiteral_9178/*"NOT_FRIEND_POINT"*/,
                                                                    0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointNpc = ConstantMaster__GetValue(
                                                              (ConstantMaster_o *)MasterData_object,
                                                              (System_String_o *)StringLiteral_9209/*"NPC_FRIEND_POINT"*/,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime1 = ConstantMaster__GetValue(
                                                                       (ConstantMaster_o *)MasterData_object,
                                                                       (System_String_o *)StringLiteral_8211/*"LOGIN_RESET_AT"*/,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2 = ConstantMaster__GetValue(
                                                                       (ConstantMaster_o *)MasterData_object,
                                                                       (System_String_o *)StringLiteral_3356/*"CAMPAIGN_RESET_AT"*/,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->DailyFreeGachaResetTime = ConstantMaster__GetValue(
                                                                     (ConstantMaster_o *)MasterData_object,
                                                                     (System_String_o *)StringLiteral_6419/*"FREE_GACHA_RESET_AT"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginDay = ConstantMaster__GetValue(
                                                                (ConstantMaster_o *)MasterData_object,
                                                                (System_String_o *)StringLiteral_8209/*"LOGIN_DAY"*/,
                                                                0LL);
  v228 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_9110/*"NEED_REBOOT_TIME"*/, 0LL);
  BalanceConfig_TypeInfo->static_fields->ServerTimeOverLimit = v228;
  v229 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v229 = ManagerConfig_TypeInfo;
  }
  SERVER_TIME_OVER_LIMIT = v229->static_fields->SERVER_TIME_OVER_LIMIT;
  if ( SERVER_TIME_OVER_LIMIT > v228 )
  {
    if ( !v229->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v229);
      SERVER_TIME_OVER_LIMIT = ManagerConfig_TypeInfo->static_fields->SERVER_TIME_OVER_LIMIT;
    }
    v231 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v231 = BalanceConfig_TypeInfo;
    }
    v231->static_fields->ServerTimeOverLimit = SERVER_TIME_OVER_LIMIT;
  }
  v232 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_10887/*"REQUEST_TOP_HOME_EXPIRATION_DATE_SEC_UPDATE_EVENT_MAP"*/, 0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v233 = System_Math__Max_61144256(1, v232, 0LL);
  v234 = BalanceConfig_TypeInfo;
  v235 = v233;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v234 = BalanceConfig_TypeInfo;
  }
  v234->static_fields->RequestTopHomeExpirationDateSecUpdateEventMap = v235;
  v236 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_10886/*"REQUEST_RAID_UPDATE_EVENT_MAP"*/, 0LL);
  BalanceConfig_TypeInfo->static_fields->RequestRaidUpdateEventMap = System_Math__Max_61144256(1, v236, 0LL);
  BalanceConfig_TypeInfo->static_fields->RaidDefeatedEffectTime = ConstantMaster__GetValue(
                                                                    (ConstantMaster_o *)MasterData_object,
                                                                    (System_String_o *)StringLiteral_10806/*"RAID_DEFEATED_EFFECT_TIME"*/,
                                                                    0LL);
  BalanceConfig_TypeInfo->static_fields->CommandSpellMax = ConstantMaster__GetValue(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_8485/*"MAX_COMMAND_SPELL"*/,
                                                             0LL);
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)MasterData_object,
                               (System_String_o *)StringLiteral_9514/*"ONE_COMMAND_SPELL"*/,
                               0LL);
  BalanceConfig_TypeInfo->static_fields->CommandSpellRecoverCost = (int)Instance;
  if ( !v217 )
    goto LABEL_165;
  v237 = ConstantStrMaster__GetValue(v217, (System_String_o *)StringLiteral_14626/*"USE_TERMS_AGREEMENT_REQUIERD_APP_VERSION"*/, 0LL);
  p_UseTermsAgreementRequiredAppVersion = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->UseTermsAgreementRequiredAppVersion;
  p_UseTermsAgreementRequiredAppVersion->klass = (ServantStatusBattleListViewItem_c *)v237;
  sub_1B00C70(p_UseTermsAgreementRequiredAppVersion, (int32_t)v237, v239, v240);
  v241 = ConstantStrMaster__GetValue(v217, (System_String_o *)StringLiteral_14627/*"USE_TERMS_LATEST_VERSION"*/, 0LL);
  p_UseTermsLatestVersion = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->UseTermsLatestVersion;
  p_UseTermsLatestVersion->klass = (ServantStatusBattleListViewItem_c *)v241;
  sub_1B00C70(p_UseTermsLatestVersion, (int32_t)v241, v243, v244);
  v245 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_7338/*"IS_IOS_EXAMINATION"*/, 0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsIOS_Examination = v245;
  BalanceConfig_TypeInfo->static_fields->SerialCodeMenuDispFlg = ConstantMaster__GetValue(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_5402/*"ENABLE_SERIAL_CODE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk = ConstantMaster__GetValue(
                                                               (ConstantMaster_o *)MasterData_object,
                                                               (System_String_o *)StringLiteral_12073/*"STATUS_UP_ADJUST_ATK"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp = ConstantMaster__GetValue(
                                                              (ConstantMaster_o *)MasterData_object,
                                                              (System_String_o *)StringLiteral_12074/*"STATUS_UP_ADJUST_HP"*/,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->SameClassMultiExp = ConstantMaster__getRateValue(
                                                               (System_String_o *)StringLiteral_11230/*"SAME_CLASS_MULI_EXP"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->SameClassExp = ConstantMaster__GetValue(
                                                          (ConstantMaster_o *)MasterData_object,
                                                          (System_String_o *)StringLiteral_11230/*"SAME_CLASS_MULI_EXP"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdJekyll = ConstantMaster__GetValue(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_8032/*"JEKYLL_SVT_ID"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdHyde = ConstantMaster__GetValue(
                                                           (ConstantMaster_o *)MasterData_object,
                                                           (System_String_o *)StringLiteral_7097/*"HYDE_SVT_ID"*/,
                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdSwimsuitMelt = ConstantMaster__GetValue(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_12269/*"SWIMSUIT_MELT_SVT_ID"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu1 = ConstantMaster__GetValue(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_8417/*"MASHU_SVT_ID1"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu2 = ConstantMaster__GetValue(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_8418/*"MASHU_SVT_ID2"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu3 = ConstantMaster__GetValue_37816176(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_8419/*"MASHU_SVT_ID3"*/,
                                                             800102,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMission1 = ConstantMaster__GetValue(
                                                               (ConstantMaster_o *)MasterData_object,
                                                               (System_String_o *)StringLiteral_8446/*"MASTER_MISSION_SVT_ID1"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->TreasureDeviceIdMashu3 = ConstantMaster__GetValue(
                                                                    (ConstantMaster_o *)MasterData_object,
                                                                    (System_String_o *)StringLiteral_13199/*"TREASUREDEVICE_ID_MASHU3"*/,
                                                                    0LL);
  Instance = (Il2CppObject *)sub_1B00D74(int___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_165;
  monitor = (int)Instance[1].monitor;
  if ( !monitor )
    goto LABEL_164;
  LODWORD(Instance[2].klass) = 744450;
  if ( monitor == 1 )
    goto LABEL_164;
  HIDWORD(Instance[2].klass) = 744452;
  ValueArray = ConstantStrMaster__GetValueArray(
                 v217,
                 (System_String_o *)StringLiteral_3653/*"COMBINE_SERVANT_SKILL_IDS"*/,
                 (System_Int32_array *)Instance,
                 0LL);
  p_CombineServantSkillIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->CombineServantSkillIds;
  p_CombineServantSkillIds->klass = (ServantStatusBattleListViewItem_c *)ValueArray;
  sub_1B00C70(p_CombineServantSkillIds, (int32_t)ValueArray, v249, v250);
  BalanceConfig_TypeInfo->static_fields->MashuTdGradeUpQuestId = ConstantMaster__GetValue_37816176(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_8420/*"MASHU_TD_GRADE_UP_QUEST_ID"*/,
                                                                   4000100,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->MashuTdGradeUpQuestPhase = ConstantMaster__GetValue_37816176(
                                                                      (ConstantMaster_o *)MasterData_object,
                                                                      (System_String_o *)StringLiteral_8421/*"MASHU_TD_GRADE_UP_QUEST_PHASE"*/,
                                                                      3,
                                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdOberonChoco = ConstantMaster__GetValue_37816176(
                                                                  (ConstantMaster_o *)MasterData_object,
                                                                  (System_String_o *)StringLiteral_9502/*"OBERON_CHOCO_SVT_ID"*/,
                                                                  9808130,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->Lostbelt6ClearQuestId = ConstantMaster__GetValue_37816176(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_8218/*"LOSTBELT6_CLEAR_QUEST_ID"*/,
                                                                   3001009,
                                                                   0LL);
  v251 = ConstantStrMaster__GetValue(v217, (System_String_o *)StringLiteral_3007/*"BIRTHDAY_BEFORE_VALENTINE_SVT_ID"*/, 0LL);
  v252 = BasicHelper__Convert2IntArray(v251, 0x2Cu, 0LL);
  p_ServantIdsBirthdayBeforeValentine = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->ServantIdsBirthdayBeforeValentine;
  p_ServantIdsBirthdayBeforeValentine->klass = (ServantStatusBattleListViewItem_c *)v252;
  sub_1B00C70(p_ServantIdsBirthdayBeforeValentine, (int32_t)v252, v254, v255);
  v256 = ConstantStrMaster__GetValue(v217, (System_String_o *)StringLiteral_7264/*"IGNORE_FORM_CHANGE_SVT_ID"*/, 0LL);
  if ( v256 )
  {
    v257 = BasicHelper__Convert2IntArray(v256, 0x2Cu, 0LL);
    v260 = BalanceConfig_TypeInfo;
    v261 = (ServantStatusBattleListViewItem_c *)v257;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v260 = BalanceConfig_TypeInfo;
    }
    p_ServantIdsIgnoreFormChange = (ServantStatusBattleListViewItem_o *)&v260->static_fields->ServantIdsIgnoreFormChange;
    p_ServantIdsIgnoreFormChange->klass = v261;
    sub_1B00C70(p_ServantIdsIgnoreFormChange, (int32_t)v261, v258, v259);
  }
  v263 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_15004/*"VALENTINE_RELEASE_AT"*/, 0LL);
  v264 = BalanceConfig_TypeInfo;
  v265 = v263;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v264 = BalanceConfig_TypeInfo;
  }
  v264->static_fields->VtReleaseAt = v265;
  BalanceConfig_TypeInfo->static_fields->BefFreeDrawNum = ConstantMaster__GetValue(
                                                            (ConstantMaster_o *)MasterData_object,
                                                            (System_String_o *)StringLiteral_2981/*"BEFORE_CHANGE_FREE_DRAW_NUM"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->AftFreeDrawNum = ConstantMaster__GetValue(
                                                            (ConstantMaster_o *)MasterData_object,
                                                            (System_String_o *)StringLiteral_2052/*"AFTRE_CHANGE_FREE_DRAW_NUM"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->DrawNumChangeTime = ConstantMaster__GetValue(
                                                               (ConstantMaster_o *)MasterData_object,
                                                               (System_String_o *)StringLiteral_6418/*"FREE_DRAW_NUM_CHANGE_AT"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerRefreshRestTime = ConstantMaster__GetValue(
                                                                     (ConstantMaster_o *)MasterData_object,
                                                                     (System_String_o *)StringLiteral_6340/*"FOLLOWER_REFRESH_RESET_TIME"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->FesWarId = ConstantMaster__GetValue(
                                                      (ConstantMaster_o *)MasterData_object,
                                                      (System_String_o *)StringLiteral_6299/*"FES_WAR_ID"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->NoneExpireTime = ConstantMaster__GetValue(
                                                            (ConstantMaster_o *)MasterData_object,
                                                            (System_String_o *)StringLiteral_5727/*"EXPIRATION_DATE"*/,
                                                            0LL);
  v266 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_3067/*"BP_EXPRESSION"*/, 0LL);
  if ( v266 >= 1 )
    v267 = 1;
  else
    v267 = v266;
  BalanceConfig_TypeInfo->static_fields->BpExpresssionType = v267 & ~(v267 >> 31);
  BalanceConfig_TypeInfo->static_fields->MaxFriendHistoryNum = ConstantMaster__GetValue(
                                                                 (ConstantMaster_o *)MasterData_object,
                                                                 (System_String_o *)StringLiteral_8490/*"MAX_FRIEND_HISTORY_NUM"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->MaxBlackListNum = ConstantMaster__GetValue(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_8484/*"MAX_BLACK_LIST_NUM"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->raceRewardRankMax = ConstantMaster__GetValue(
                                                               (ConstantMaster_o *)MasterData_object,
                                                               (System_String_o *)StringLiteral_10804/*"RACE_REWARD_RANK_MAX"*/,
                                                               0LL);
  v268 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_8433/*"MASTER_MISSION_ALERT_TIME"*/, 0LL);
  v269 = BalanceConfig_TypeInfo->static_fields;
  v269->MstMissionAlertTime = v268;
  BalanceConfig_TypeInfo->static_fields->LocationRewardDlgColumn = ConstantMaster__GetValue_37816176(
                                                                     (ConstantMaster_o *)MasterData_object,
                                                                     (System_String_o *)StringLiteral_8197/*"LOCATION_REWARD_DLG_COLUMN"*/,
                                                                     v269->LocationRewardDlgColumn,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->CloseSecretTreasureDeviceQuestClear = ConstantMaster__GetValue(
                                                                                 (ConstantMaster_o *)MasterData_object,
                                                                                 (System_String_o *)StringLiteral_3557/*"CLOSE_SECRET_TREASURE_DEVICE_QUEST_CLEAR"*/,
                                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->CloseSecretTreasureDeviceSvtGet = ConstantMaster__GetValue(
                                                                             (ConstantMaster_o *)MasterData_object,
                                                                             (System_String_o *)StringLiteral_3558/*"CLOSE_SECRET_TREASURE_DEVICE_SVT_GET"*/,
                                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ItemIdQp = ConstantMaster__GetValue(
                                                      (ConstantMaster_o *)MasterData_object,
                                                      (System_String_o *)StringLiteral_7345/*"ITEM_ID_QP"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->ShopDetailCheckDialogFontSize = ConstantMaster__GetValue_37816176(
                                                                           (ConstantMaster_o *)MasterData_object,
                                                                           (System_String_o *)StringLiteral_11843/*"SHOP_DETAIL_CHECK_DIALOG_FONT_SIZE"*/,
                                                                           21,
                                                                           0LL);
  v270 = ConstantStrMaster__GetValue(v217, (System_String_o *)StringLiteral_11265/*"SCENARIO_SPEED_STEP"*/, 0LL);
  if ( System_Single__TryParse(v270, &result, 0LL) )
  {
    v271 = BalanceConfig_TypeInfo;
    v272 = result;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v271 = BalanceConfig_TypeInfo;
    }
    v271->static_fields->ScenarioSpeedStep = v272;
  }
  v273 = ConstantStrMaster__GetValue(v217, (System_String_o *)StringLiteral_11264/*"SCENARIO_SPEED_LOW"*/, 0LL);
  if ( System_Single__TryParse(v273, &result, 0LL) )
  {
    v274 = BalanceConfig_TypeInfo;
    v275 = result;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v274 = BalanceConfig_TypeInfo;
    }
    v274->static_fields->ScenarioSpeedLow = v275;
  }
  v276 = ConstantStrMaster__GetValue(v217, (System_String_o *)StringLiteral_11263/*"SCENARIO_SPEED_HIGH"*/, 0LL);
  if ( System_Single__TryParse(v276, &result, 0LL) )
  {
    v277 = BalanceConfig_TypeInfo;
    v278 = result;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v277 = BalanceConfig_TypeInfo;
    }
    v277->static_fields->ScenarioSpeedHigh = v278;
  }
  v279 = ConstantStrMaster__GetValue(v217, (System_String_o *)StringLiteral_11262/*"SCENARIO_SPEED_DEFAULT"*/, 0LL);
  if ( System_Single__TryParse(v279, &result, 0LL) )
  {
    v280 = BalanceConfig_TypeInfo;
    v281 = result;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v280 = BalanceConfig_TypeInfo;
    }
    v280->static_fields->ScenarioSpeedDefault = v281;
  }
  else
  {
    v280 = BalanceConfig_TypeInfo;
  }
  if ( !v280->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v280);
    v280 = BalanceConfig_TypeInfo;
  }
  v282 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_10278/*"POWERUP_QUEST_WAR_ID"*/,
           v280->static_fields->PowerUpQuestWarId,
           0LL);
  v283 = BalanceConfig_TypeInfo->static_fields;
  v283->PowerUpQuestWarId = v282;
  v284 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_1964/*"ACCOUNTING_INITIALIZE_TIMEOUT"*/,
           v283->AccountingInitializeTimeOut,
           0LL);
  v285 = BalanceConfig_TypeInfo->static_fields;
  v285->AccountingInitializeTimeOut = v284;
  BalanceConfig_TypeInfo->static_fields->EquipGetEffectId = ConstantMaster__GetValue_37816176(
                                                              (ConstantMaster_o *)MasterData_object,
                                                              (System_String_o *)StringLiteral_5456/*"EQUIP_GET_EFFECT_ID"*/,
                                                              v285->EquipGetEffectId,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCodeDetachingItemId = ConstantMaster__GetValue_37816176(
                                                                        (ConstantMaster_o *)MasterData_object,
                                                                        (System_String_o *)StringLiteral_3678/*"COMMAND_CODE_DETACHING_ITEM_ID"*/,
                                                                        -1,
                                                                        0LL);
  v286 = ConstantStrMaster__GetValue(v217, (System_String_o *)StringLiteral_10302/*"PRESENT_BOX_FILTER_SVT_EQUIP_MATERIAL"*/, 0LL);
  if ( v286 )
  {
    v287 = System_String__Split(v286, 0x2Cu, 0, 0LL);
    v288 = BalanceConfig___c_TypeInfo;
    v289 = (System_Collections_Generic_IEnumerable_TSource__o *)v287;
    if ( !BalanceConfig___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig___c_TypeInfo);
      v288 = BalanceConfig___c_TypeInfo;
    }
    _9__230_0 = (System_Func_object__int__o *)v288->static_fields->__9__230_0;
    if ( !_9__230_0 )
    {
      if ( !v288->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v288);
        v288 = BalanceConfig___c_TypeInfo;
      }
      v291 = (Il2CppObject *)v288->static_fields->__9;
      _9__230_0 = (System_Func_object__int__o *)sub_1B00F18(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(_9__230_0, v291, Method_BalanceConfig___c__Initialize_b__230_0__, 0LL);
      v292 = BalanceConfig___c_TypeInfo->static_fields;
      v292->__9__230_0 = (struct System_Func_string__int__o *)_9__230_0;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v292->__9__230_0, (int32_t)_9__230_0, v293, v294);
    }
    v295 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v289,
                                                                  (System_Func_TSource__TResult__o *)_9__230_0,
                                                                  (const MethodInfo_2D8F428 *)Method_System_Linq_Enumerable_Select_string__int___);
    v296 = System_Linq_Enumerable__ToArray_int_(
             v295,
             (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___);
    v299 = BalanceConfig_TypeInfo;
    v300 = (ServantStatusBattleListViewItem_c *)v296;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v299 = BalanceConfig_TypeInfo;
    }
    p_PresentBoxFilterSvtEquipMaterial = (ServantStatusBattleListViewItem_o *)&v299->static_fields->PresentBoxFilterSvtEquipMaterial;
    p_PresentBoxFilterSvtEquipMaterial->klass = v300;
    sub_1B00C70(p_PresentBoxFilterSvtEquipMaterial, (int32_t)v300, v297, v298);
  }
  v302 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_6373/*"FOLLOW_NUM"*/, 0LL);
  if ( v302 >= 1 )
  {
    v303 = v302;
    v304 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v304 = BalanceConfig_TypeInfo;
    }
    v304->static_fields->FollowNum = v303;
  }
  v305 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_6370/*"FOLLOW_FRIEND_POINT"*/, 0LL);
  if ( v305 >= 1 )
  {
    v306 = v305;
    v307 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v307 = BalanceConfig_TypeInfo;
    }
    v307->static_fields->FollowFriendPoint = v306;
  }
  v308 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_4992/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0LL);
  v309 = BalanceConfig_TypeInfo;
  v310 = v308;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v309 = BalanceConfig_TypeInfo;
  }
  v309->static_fields->DisableFriendshipExceed = v310;
  BalanceConfig_TypeInfo->static_fields->EventDailyPointResetAt = ConstantMaster__GetValue(
                                                                    (ConstantMaster_o *)MasterData_object,
                                                                    (System_String_o *)StringLiteral_5542/*"EVENT_DAILY_POINT_RESET_AT"*/,
                                                                    0LL);
  v311 = ConstantStrMaster__GetValueArray(v217, (System_String_o *)StringLiteral_10881/*"REPRINT_LAST_WAR_RAID_EVENT_ID_LIST"*/, 0LL, 0LL);
  p_ReprintLastWarRaidEventIdList = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->ReprintLastWarRaidEventIdList;
  p_ReprintLastWarRaidEventIdList->klass = (ServantStatusBattleListViewItem_c *)v311;
  sub_1B00C70(p_ReprintLastWarRaidEventIdList, (int32_t)v311, v313, v314);
  BalanceConfig_TypeInfo->static_fields->PrologueQuestId = ConstantMaster__GetValue(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_10350/*"PROLOGUE_QUEST_ID"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCardParamUpMax = ConstantMaster__GetValue(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_3677/*"COMMAND_CARD_PRM_UP_MAX"*/,
                                                                   0LL);
  v315 = ConstantStrMaster__GetValueArray(v217, (System_String_o *)StringLiteral_5672/*"EVENT_TOWER_FADEOUT_DELAY_TIME"*/, 0LL, 0LL);
  p_EventTowerFadeOutDelayTime = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->EventTowerFadeOutDelayTime;
  p_EventTowerFadeOutDelayTime->klass = (ServantStatusBattleListViewItem_c *)v315;
  sub_1B00C70(p_EventTowerFadeOutDelayTime, (int32_t)v315, v317, v318);
  if ( !BalanceConfig_TypeInfo->static_fields->EventTowerFadeOutDelayTime )
  {
    v319 = (System_Array_o *)sub_1B00D74(int___TypeInfo, 3LL);
    v586.fields.value = Field__PrivateImplementationDetails__84DF4B72A51E01473BC25693E526BC603A140C4300062B4A7F64A9F7D00ABB95;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_60233828(v319, v586, 0LL);
    v322 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v322 = BalanceConfig_TypeInfo;
    }
    v323 = (ServantStatusBattleListViewItem_o *)&v322->static_fields->EventTowerFadeOutDelayTime;
    v323->klass = (ServantStatusBattleListViewItem_c *)v319;
    sub_1B00C70(v323, (int32_t)v319, v320, v321);
  }
  v324 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_5673/*"EVENT_TOWER_FADEOUT_PLAY_TIME"*/,
           3000,
           0LL);
  v325 = BalanceConfig_TypeInfo;
  v326 = v324;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v325 = BalanceConfig_TypeInfo;
  }
  v325->static_fields->EventTowerFadeOutPlayTime = (float)v326 / 1000.0;
  BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse = ConstantMaster__GetValue(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_8489/*"MAX_FRIENDPOINT_BOOST_ITEM_USE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->FriendPointBoostItemEfffectId = ConstantMaster__GetValue_37816176(
                                                                           (ConstantMaster_o *)MasterData_object,
                                                                           (System_String_o *)StringLiteral_6421/*"FRIENDPOINT_BOOST_ITEM_EFFECT_ID"*/,
                                                                           3,
                                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->MainInterludeWarId = ConstantMaster__GetValue_37816176(
                                                                (ConstantMaster_o *)MasterData_object,
                                                                (System_String_o *)StringLiteral_8399/*"MAIN_INTERLUDE_WAR_ID"*/,
                                                                1004,
                                                                0LL);
  v327 = ConstantStrMaster__GetValueArray(v217, (System_String_o *)StringLiteral_5499/*"EVENT_BOARD_GAME_DICE_BUTTON_POS"*/, 0LL, 0LL);
  p_EventBoardGameDiceButtonPostion = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion;
  p_EventBoardGameDiceButtonPostion->klass = (ServantStatusBattleListViewItem_c *)v327;
  sub_1B00C70(p_EventBoardGameDiceButtonPostion, (int32_t)v327, v329, v330);
  if ( !BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion )
  {
    Instance = (Il2CppObject *)sub_1B00D74(int___TypeInfo, 3LL);
    if ( !Instance )
      goto LABEL_165;
    v333 = (unsigned int)Instance[1].monitor;
    v334 = (ServantStatusBattleListViewItem_c *)Instance;
    if ( v333 <= 1 )
      goto LABEL_164;
    HIDWORD(Instance[2].klass) = -59;
    if ( v333 == 2 )
      goto LABEL_164;
    LODWORD(Instance[2].monitor) = -500;
    v335 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v335 = BalanceConfig_TypeInfo;
    }
    v336 = (ServantStatusBattleListViewItem_o *)&v335->static_fields->EventBoardGameDiceButtonPostion;
    v336->klass = v334;
    sub_1B00C70(v336, (int32_t)v334, v331, v332);
  }
  v337 = ConstantStrMaster__GetValueArray(v217, (System_String_o *)StringLiteral_8459/*"MATERIAL_MAIN_INTERLUDE_WAR_ID"*/, 0LL, 0LL);
  v340 = BalanceConfig_TypeInfo;
  v341 = (ServantStatusBattleListViewItem_c *)v337;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v340 = BalanceConfig_TypeInfo;
  }
  p_MainInterludeWarIdOnMaterial = (ServantStatusBattleListViewItem_o *)&v340->static_fields->MainInterludeWarIdOnMaterial;
  p_MainInterludeWarIdOnMaterial->klass = v341;
  sub_1B00C70(p_MainInterludeWarIdOnMaterial, (int32_t)v341, v338, v339);
  if ( !BalanceConfig_TypeInfo->static_fields->MainInterludeWarIdOnMaterial )
  {
    Instance = (Il2CppObject *)sub_1B00D74(int___TypeInfo, 1LL);
    if ( !Instance )
      goto LABEL_165;
    v345 = (ServantStatusBattleListViewItem_c *)Instance;
    if ( !LODWORD(Instance[1].monitor) )
      goto LABEL_164;
    LODWORD(Instance[2].klass) = 307;
    v346 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v346 = BalanceConfig_TypeInfo;
    }
    v347 = (ServantStatusBattleListViewItem_o *)&v346->static_fields->MainInterludeWarIdOnMaterial;
    v347->klass = v345;
    sub_1B00C70(v347, (int32_t)v345, v343, v344);
  }
  v348 = ConstantStrMaster__GetValueArray(v217, (System_String_o *)StringLiteral_5502/*"EVENT_BOARD_GAME_MAP_ID_LIST"*/, 0LL, 0LL);
  v351 = BalanceConfig_TypeInfo;
  v352 = (ServantStatusBattleListViewItem_c *)v348;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v351 = BalanceConfig_TypeInfo;
  }
  p_EventBoardGameMapIdList = (ServantStatusBattleListViewItem_o *)&v351->static_fields->EventBoardGameMapIdList;
  p_EventBoardGameMapIdList->klass = v352;
  sub_1B00C70(p_EventBoardGameMapIdList, (int32_t)v352, v349, v350);
  BalanceConfig_TypeInfo->static_fields->EventBoardGameNextBoardQuestId = ConstantMaster__GetValue_37816176(
                                                                            (ConstantMaster_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_5504/*"EVENT_BOARD_GAME_NEXT_BOARD_QUEST_ID"*/,
                                                                            94047745,
                                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->EventBoardGameNextRoundQuestId = ConstantMaster__GetValue_37816176(
                                                                            (ConstantMaster_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_5505/*"EVENT_BOARD_GAME_NEXT_ROUND_QUEST_ID"*/,
                                                                            94047744,
                                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->TitleFlowOld = ConstantMaster__GetValue_37816176(
                                                          (ConstantMaster_o *)MasterData_object,
                                                          (System_String_o *)StringLiteral_13138/*"TITLE_FLOW_OLD"*/,
                                                          0,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->StoryWarId = ConstantMaster__GetValue_37816176(
                                                        (ConstantMaster_o *)MasterData_object,
                                                        (System_String_o *)StringLiteral_12105/*"STORY_WAR_ID"*/,
                                                        1003,
                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->OrdealCallWarId = ConstantMaster__GetValue_37816176(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_9612/*"ORDEAL_CALL_WAR_ID"*/,
                                                             401,
                                                             0LL);
  v354 = ConstantStrMaster__GetValue(v217, (System_String_o *)StringLiteral_9611/*"ORDEAL_CALL_CLEAR_BGM_NAME"*/, 0LL);
  if ( !System_String__IsNullOrEmpty(v354, 0LL) )
  {
    v357 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v357 = BalanceConfig_TypeInfo;
    }
    p_OrdealCallClearBgmName = (ServantStatusBattleListViewItem_o *)&v357->static_fields->OrdealCallClearBgmName;
    p_OrdealCallClearBgmName->klass = (ServantStatusBattleListViewItem_c *)v354;
    sub_1B00C70(p_OrdealCallClearBgmName, (int32_t)v354, v355, v356);
  }
  v359 = (System_Array_o *)sub_1B00D74(int___TypeInfo, 5LL);
  v587.fields.value = Field__PrivateImplementationDetails__A1FBA00A0F8840358C0A54605FFD365F75E3A3D7AFF25F48F474C4E89BB0B37D;
  v360 = (System_Int32_array *)v359;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_60233828(v359, v587, 0LL);
  v361 = ConstantStrMaster__GetValueArray(v217, (System_String_o *)StringLiteral_3811/*"CONSUME_STORMPOD_SPOT_ID"*/, v360, 0LL);
  v364 = BalanceConfig_TypeInfo;
  v365 = (ServantStatusBattleListViewItem_c *)v361;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v364 = BalanceConfig_TypeInfo;
  }
  p_consumeStormPodSpotId = (ServantStatusBattleListViewItem_o *)&v364->static_fields->consumeStormPodSpotId;
  p_consumeStormPodSpotId->klass = v365;
  sub_1B00C70(p_consumeStormPodSpotId, (int32_t)v365, v362, v363);
  Instance = (Il2CppObject *)sub_1B00D74(int___TypeInfo, 1LL);
  if ( !Instance )
LABEL_165:
    sub_1B00F28(Instance, v214);
  if ( !LODWORD(Instance[1].monitor) )
    goto LABEL_164;
  LODWORD(Instance[2].klass) = 71;
  v367 = ConstantStrMaster__GetValueArray(
           v217,
           (System_String_o *)StringLiteral_12103/*"STORMPOD_HELP_IDS"*/,
           (System_Int32_array *)Instance,
           0LL);
  p_StormPodHelpIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->StormPodHelpIds;
  p_StormPodHelpIds->klass = (ServantStatusBattleListViewItem_c *)v367;
  sub_1B00C70(p_StormPodHelpIds, (int32_t)v367, v369, v370);
  ValueStringArray = ConstantStrMaster__GetValueStringArray(v217, (System_String_o *)StringLiteral_8139/*"LEGACY_ASPECT_MOVIES"*/, 0LL);
  p_legacyAspectMovies = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
  p_legacyAspectMovies->klass = (ServantStatusBattleListViewItem_c *)ValueStringArray;
  sub_1B00C70(p_legacyAspectMovies, (int32_t)ValueStringArray, v373, v374);
  v375 = ConstantStrMaster__GetValueArray(v217, (System_String_o *)StringLiteral_6486/*"FULL_SCREEN_NP_CHRS"*/, 0LL, 0LL);
  p_fullScreenNPChrs = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->fullScreenNPChrs;
  p_fullScreenNPChrs->klass = (ServantStatusBattleListViewItem_c *)v375;
  sub_1B00C70(p_fullScreenNPChrs, (int32_t)v375, v377, v378);
  v379 = ConstantStrMaster__GetValueArray(v217, (System_String_o *)StringLiteral_6487/*"FULL_SCREEN_NP_SEQ_IDS"*/, 0LL, 0LL);
  p_fullScreenNPSeqIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->fullScreenNPSeqIds;
  p_fullScreenNPSeqIds->klass = (ServantStatusBattleListViewItem_c *)v379;
  sub_1B00C70(p_fullScreenNPSeqIds, (int32_t)v379, v381, v382);
  BalanceConfig_TypeInfo->static_fields->GachaDailyMaxDrawNumResetAt = ConstantMaster__GetValue_37816176(
                                                                         (ConstantMaster_o *)MasterData_object,
                                                                         (System_String_o *)StringLiteral_6800/*"GACHA_DAILY_MAX_DRAW_NUM_RESET_AT"*/,
                                                                         4,
                                                                         0LL);
  BalanceConfig_TypeInfo->static_fields->MemoryDeckLimitByQuest = ConstantMaster__GetValue_37816176(
                                                                    (ConstantMaster_o *)MasterData_object,
                                                                    (System_String_o *)StringLiteral_8513/*"MEMORY_DECK_LIMIT_BY_QUEST"*/,
                                                                    100,
                                                                    0LL);
  v383 = ConstantStrMaster__GetValue(v217, (System_String_o *)StringLiteral_7312/*"IOS_EXAMINATION_NEWS_URL"*/, 0LL);
  p_IOS_ExaminationNewsUrl = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->IOS_ExaminationNewsUrl;
  p_IOS_ExaminationNewsUrl->klass = (ServantStatusBattleListViewItem_c *)v383;
  sub_1B00C70(p_IOS_ExaminationNewsUrl, (int32_t)v383, v385, v386);
  v389 = BalanceConfig_TypeInfo->static_fields;
  if ( !v389->IOS_ExaminationNewsUrl )
  {
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v389 = BalanceConfig_TypeInfo->static_fields;
    }
    v390 = StringLiteral_19768/*"https://view.fate-go.jp/"*/;
    v389->IOS_ExaminationNewsUrl = (struct System_String_o *)StringLiteral_19768/*"https://view.fate-go.jp/"*/;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v389->IOS_ExaminationNewsUrl, v390, v387, v388);
  }
  v391 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_9623/*"OTHER_IMAGE_LIMIT_COUNT"*/, 0LL);
  v392 = BalanceConfig_TypeInfo;
  v393 = v391;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v392 = BalanceConfig_TypeInfo;
  }
  v392->static_fields->OtherImageLimitCount = v393;
  BalanceConfig_TypeInfo->static_fields->ExclusiveNpcServantIdStart = ConstantMaster__GetValue_37816176(
                                                                        (ConstantMaster_o *)MasterData_object,
                                                                        (System_String_o *)StringLiteral_5691/*"EXCLUSIVE_NPC_SERVANT_ID_START"*/,
                                                                        9937100,
                                                                        0LL);
  v394 = ConstantStrMaster__GetValueStringArray(v217, (System_String_o *)StringLiteral_12032/*"STAND_FIGURE_R_OFFSET_EFFECT_NAMES"*/, 0LL);
  p_UIStandFigureROffsetEffectNames = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames;
  p_UIStandFigureROffsetEffectNames->klass = (ServantStatusBattleListViewItem_c *)v394;
  sub_1B00C70(p_UIStandFigureROffsetEffectNames, (int32_t)v394, v396, v397);
  v398 = ConstantStrMaster__GetValueStringArray(v217, (System_String_o *)StringLiteral_12031/*"STAND_FIGURE_R_OFFSET_EFFECT_IMAGES"*/, 0LL);
  p_UIStandFigureROffsetImages = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetImages;
  p_UIStandFigureROffsetImages->klass = (ServantStatusBattleListViewItem_c *)v398;
  sub_1B00C70(p_UIStandFigureROffsetImages, (int32_t)v398, v400, v401);
  v402 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames )
  {
    Instance = (Il2CppObject *)sub_1B00D74(string___TypeInfo, 7LL);
    if ( !Instance )
      goto LABEL_165;
    v405 = Instance;
    if ( !LODWORD(Instance[1].monitor) )
      goto LABEL_164;
    v406 = StringLiteral_17039/*"bit_result_bond"*/;
    Instance[2].klass = (Il2CppClass *)StringLiteral_17039/*"bit_result_bond"*/;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&Instance[2], v406, v403, v404);
    if ( LODWORD(v405[1].monitor) <= 1 )
      goto LABEL_164;
    v409 = StringLiteral_17051/*"bit_result_noble"*/;
    v405[2].monitor = (void *)StringLiteral_17051/*"bit_result_noble"*/;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v405[2].monitor, v409, v407, v408);
    if ( LODWORD(v405[1].monitor) <= 2 )
      goto LABEL_164;
    v412 = StringLiteral_17054/*"bit_result_servant"*/;
    v405[3].klass = (Il2CppClass *)StringLiteral_17054/*"bit_result_servant"*/;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v405[3], v412, v410, v411);
    if ( LODWORD(v405[1].monitor) <= 3 )
      goto LABEL_164;
    v415 = StringLiteral_17055/*"bit_result_skill"*/;
    v405[3].monitor = (void *)StringLiteral_17055/*"bit_result_skill"*/;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v405[3].monitor, v415, v413, v414);
    if ( LODWORD(v405[1].monitor) <= 4 )
      goto LABEL_164;
    v418 = StringLiteral_17040/*"bit_result_command_card_exceed"*/;
    v405[4].klass = (Il2CppClass *)StringLiteral_17040/*"bit_result_command_card_exceed"*/;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v405[4], v418, v416, v417);
    if ( LODWORD(v405[1].monitor) <= 5 )
      goto LABEL_164;
    v421 = StringLiteral_17041/*"bit_result_extraskill"*/;
    v405[4].monitor = (void *)StringLiteral_17041/*"bit_result_extraskill"*/;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v405[4].monitor, v421, v419, v420);
    if ( LODWORD(v405[1].monitor) <= 6 )
      goto LABEL_164;
    v424 = StringLiteral_17044/*"bit_result_friendship_exceed"*/;
    v405[5].klass = (Il2CppClass *)StringLiteral_17044/*"bit_result_friendship_exceed"*/;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v405[5], v424, v422, v423);
    v427 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v427 = BalanceConfig_TypeInfo;
    }
    v428 = (ServantStatusBattleListViewItem_o *)&v427->static_fields->UIStandFigureROffsetEffectNames;
    v428->klass = (ServantStatusBattleListViewItem_c *)v405;
    sub_1B00C70(v428, (int32_t)v405, v425, v426);
    v402 = BalanceConfig_TypeInfo;
  }
  if ( !v402->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v402);
    v402 = BalanceConfig_TypeInfo;
  }
  if ( !v402->static_fields->UIStandFigureROffsetImages )
  {
    Instance = (Il2CppObject *)sub_1B00D74(string___TypeInfo, 18LL);
    if ( !Instance )
      goto LABEL_165;
    v431 = Instance;
    if ( LODWORD(Instance[1].monitor) )
    {
      v432 = StringLiteral_1392/*"1053900:100:0"*/;
      Instance[2].klass = (Il2CppClass *)StringLiteral_1392/*"1053900:100:0"*/;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&Instance[2], v432, v429, v430);
      if ( LODWORD(v431[1].monitor) > 1 )
      {
        v435 = StringLiteral_1395/*"1053910:100:0"*/;
        v431[2].monitor = (void *)StringLiteral_1395/*"1053910:100:0"*/;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v431[2].monitor, v435, v433, v434);
        if ( LODWORD(v431[1].monitor) > 2 )
        {
          v438 = StringLiteral_1393/*"1053901:100:0"*/;
          v431[3].klass = (Il2CppClass *)StringLiteral_1393/*"1053901:100:0"*/;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v431[3], v438, v436, v437);
          if ( LODWORD(v431[1].monitor) > 3 )
          {
            v441 = StringLiteral_1396/*"1053911:100:0"*/;
            v431[3].monitor = (void *)StringLiteral_1396/*"1053911:100:0"*/;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v431[3].monitor, v441, v439, v440);
            if ( LODWORD(v431[1].monitor) > 4 )
            {
              v444 = StringLiteral_1394/*"1053902:100:0"*/;
              v431[4].klass = (Il2CppClass *)StringLiteral_1394/*"1053902:100:0"*/;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)&v431[4], v444, v442, v443);
              if ( LODWORD(v431[1].monitor) > 5 )
              {
                v447 = StringLiteral_1397/*"1053912:100:0"*/;
                v431[4].monitor = (void *)StringLiteral_1397/*"1053912:100:0"*/;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)&v431[4].monitor, v447, v445, v446);
                if ( LODWORD(v431[1].monitor) > 6 )
                {
                  v450 = StringLiteral_1389/*"1053000:100:0"*/;
                  v431[5].klass = (Il2CppClass *)StringLiteral_1389/*"1053000:100:0"*/;
                  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v431[5], v450, v448, v449);
                  if ( LODWORD(v431[1].monitor) > 7 )
                  {
                    v453 = StringLiteral_1390/*"1053001:100:0"*/;
                    v431[5].monitor = (void *)StringLiteral_1390/*"1053001:100:0"*/;
                    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v431[5].monitor, v453, v451, v452);
                    if ( LODWORD(v431[1].monitor) > 8 )
                    {
                      v456 = StringLiteral_1391/*"1053002:100:0"*/;
                      v431[6].klass = (Il2CppClass *)StringLiteral_1391/*"1053002:100:0"*/;
                      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v431[6], v456, v454, v455);
                      if ( LODWORD(v431[1].monitor) > 9 )
                      {
                        v459 = StringLiteral_1513/*"5047900:100:0"*/;
                        v431[6].monitor = (void *)StringLiteral_1513/*"5047900:100:0"*/;
                        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v431[6].monitor, v459, v457, v458);
                        if ( LODWORD(v431[1].monitor) > 0xA )
                        {
                          v462 = StringLiteral_1516/*"5047910:100:0"*/;
                          v431[7].klass = (Il2CppClass *)StringLiteral_1516/*"5047910:100:0"*/;
                          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v431[7], v462, v460, v461);
                          if ( LODWORD(v431[1].monitor) > 0xB )
                          {
                            v465 = StringLiteral_1514/*"5047901:100:0"*/;
                            v431[7].monitor = (void *)StringLiteral_1514/*"5047901:100:0"*/;
                            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v431[7].monitor, v465, v463, v464);
                            if ( LODWORD(v431[1].monitor) > 0xC )
                            {
                              v468 = StringLiteral_1517/*"5047911:100:0"*/;
                              v431[8].klass = (Il2CppClass *)StringLiteral_1517/*"5047911:100:0"*/;
                              sub_1B00C70((ServantStatusBattleListViewItem_o *)&v431[8], v468, v466, v467);
                              if ( LODWORD(v431[1].monitor) > 0xD )
                              {
                                v471 = StringLiteral_1515/*"5047902:100:0"*/;
                                v431[8].monitor = (void *)StringLiteral_1515/*"5047902:100:0"*/;
                                sub_1B00C70((ServantStatusBattleListViewItem_o *)&v431[8].monitor, v471, v469, v470);
                                if ( LODWORD(v431[1].monitor) > 0xE )
                                {
                                  v474 = StringLiteral_1518/*"5047912:100:0"*/;
                                  v431[9].klass = (Il2CppClass *)StringLiteral_1518/*"5047912:100:0"*/;
                                  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v431[9], v474, v472, v473);
                                  if ( LODWORD(v431[1].monitor) > 0xF )
                                  {
                                    v477 = StringLiteral_1510/*"5047000:100:0"*/;
                                    v431[9].monitor = (void *)StringLiteral_1510/*"5047000:100:0"*/;
                                    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v431[9].monitor, v477, v475, v476);
                                    if ( LODWORD(v431[1].monitor) > 0x10 )
                                    {
                                      v480 = StringLiteral_1511/*"5047001:100:0"*/;
                                      v431[10].klass = (Il2CppClass *)StringLiteral_1511/*"5047001:100:0"*/;
                                      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v431[10], v480, v478, v479);
                                      if ( LODWORD(v431[1].monitor) > 0x11 )
                                      {
                                        v483 = StringLiteral_1512/*"5047002:100:0"*/;
                                        v431[10].monitor = (void *)StringLiteral_1512/*"5047002:100:0"*/;
                                        sub_1B00C70(
                                          (ServantStatusBattleListViewItem_o *)&v431[10].monitor,
                                          v483,
                                          v481,
                                          v482);
                                        v486 = BalanceConfig_TypeInfo;
                                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                          v486 = BalanceConfig_TypeInfo;
                                        }
                                        v487 = (ServantStatusBattleListViewItem_o *)&v486->static_fields->UIStandFigureROffsetImages;
                                        v487->klass = (ServantStatusBattleListViewItem_c *)v431;
                                        sub_1B00C70(v487, (int32_t)v431, v484, v485);
                                        goto LABEL_148;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_164:
    sub_1B00F30(Instance, v214);
  }
LABEL_148:
  v488 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_7341/*"IS_WAR_BOARD_AI_CALC_EVAL_SUM"*/,
           0,
           0LL);
  v489 = BalanceConfig_TypeInfo;
  v490 = v488;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v489 = BalanceConfig_TypeInfo;
  }
  v489->static_fields->IsWarBoardAiCalcEvalSum = v490 != 0;
  BalanceConfig_TypeInfo->static_fields->WarBoardEvalFactorsAffectRatio = ConstantMaster__GetValue_37816176(
                                                                            (ConstantMaster_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_15254/*"WAR_BOARD_EVAL_FACTORS_AFFECT_RATIO"*/,
                                                                            10000,
                                                                            0LL);
  v491 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_7342/*"IS_WAR_BOARD_AI_FILTER_NOT_ACTION"*/,
           1,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsWarBoardAiFilterNotAction = v491;
  v492 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_7343/*"IS_WAR_BOARD_AI_FILTER_WASTE_ROUTE"*/,
           0,
           0LL) != 0;
  v493 = BalanceConfig_TypeInfo->static_fields;
  v493->IsWarBoardAiFilterWasteRoute = v492;
  BalanceConfig_TypeInfo->static_fields->StoneFragmentExchangeNoticeDispMax = ConstantMaster__GetValue_37816176(
                                                                                (ConstantMaster_o *)MasterData_object,
                                                                                (System_String_o *)StringLiteral_12081/*"STONE_FRAGMENT_EXCHANGE_NOTICE_MAX"*/,
                                                                                v493->StoneFragmentExchangeNoticeDispMax,
                                                                                0LL);
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveTimeConstant = (float)ConstantMaster__GetValue_37816176(
                                                                              (ConstantMaster_o *)MasterData_object,
                                                                              (System_String_o *)StringLiteral_1482/*"3D_MAP_CAMERA_MOVE_TIME_CONSTANT"*/,
                                                                              0,
                                                                              0LL)
                                                                   / 1000.0;
  v494 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_1481/*"3D_MAP_CAMERA_MOVE_TIME_COEFFICIENT"*/,
           1700,
           0LL);
  v495 = BalanceConfig_TypeInfo->static_fields;
  v495->MapCameraMoveTimeCoefficient = (float)v494 / 1000.0;
  v496 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_1483/*"3D_MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE"*/,
           v495->MapCameraMoveTimeLogarithmBase,
           0LL);
  v497 = BalanceConfig_TypeInfo->static_fields;
  v497->MapCameraMoveTimeLogarithmBase = v496;
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveEasingType = ConstantMaster__GetValue_37816176(
                                                                     (ConstantMaster_o *)MasterData_object,
                                                                     (System_String_o *)StringLiteral_1480/*"3D_MAP_CAMERA_MOVE_EASING_TYPE"*/,
                                                                     v497->MapCameraMoveEasingType,
                                                                     0LL);
  v498 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_3352/*"CAMERA_2D_RESET_DURATION"*/,
           644,
           0LL);
  v499 = BalanceConfig_TypeInfo->static_fields;
  v499->Camera2DResetDuration = (float)v498 / 1000.0;
  v500 = ConstantStrMaster__GetValueArray(
           v217,
           (System_String_o *)StringLiteral_8397/*"MAIN_CHAPTERS_WITH_EVENT_ID"*/,
           v499->MainChaptersWithEventId,
           0LL);
  p_MainChaptersWithEventId = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->MainChaptersWithEventId;
  p_MainChaptersWithEventId->klass = (ServantStatusBattleListViewItem_c *)v500;
  sub_1B00C70(p_MainChaptersWithEventId, (int32_t)v500, v502, v503);
  BalanceConfig_TypeInfo->static_fields->OrtSecondFormId = ConstantMaster__GetValue_37816176(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_9618/*"ORT_SECONDE_FORM_ID"*/,
                                                             1,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->OrtThirdFormId = ConstantMaster__GetValue_37816176(
                                                            (ConstantMaster_o *)MasterData_object,
                                                            (System_String_o *)StringLiteral_9619/*"ORT_THIRD_FORM_ID"*/,
                                                            2,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->OrtFirstQuestId = ConstantMaster__GetValue_37816176(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_9613/*"ORT_FIRST_QUEST_ID"*/,
                                                             3001324,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLateQuestId = ConstantMaster__GetValue_37816176(
                                                            (ConstantMaster_o *)MasterData_object,
                                                            (System_String_o *)StringLiteral_9617/*"ORT_LATE_QUEST_ID"*/,
                                                            3001325,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLatePhaseBreak = ConstantMaster__GetValue_37816176(
                                                               (ConstantMaster_o *)MasterData_object,
                                                               (System_String_o *)StringLiteral_9614/*"ORT_LATE_PHASE_BREAK"*/,
                                                               5,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLatePhaseSecondForm = ConstantMaster__GetValue_37816176(
                                                                    (ConstantMaster_o *)MasterData_object,
                                                                    (System_String_o *)StringLiteral_9616/*"ORT_LATE_PHASE_SECOND_FORM"*/,
                                                                    6,
                                                                    0LL);
  v504 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_9615/*"ORT_LATE_PHASE_DEAD"*/,
           7,
           0LL);
  v505 = BalanceConfig_TypeInfo->static_fields;
  v505->OrtLatePhaseDead = v504;
  v506 = ConstantStrMaster__GetValueArray(
           v217,
           (System_String_o *)StringLiteral_13211/*"TREASURE_DEVICES_FORCED_OPEN_EFFECT"*/,
           v505->TreasureDevicesForcedOpenEffect,
           0LL);
  p_TreasureDevicesForcedOpenEffect = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->TreasureDevicesForcedOpenEffect;
  p_TreasureDevicesForcedOpenEffect->klass = (ServantStatusBattleListViewItem_c *)v506;
  sub_1B00C70(p_TreasureDevicesForcedOpenEffect, (int32_t)v506, v508, v509);
  v510 = ConstantStrMaster__GetValueArray(
           v217,
           (System_String_o *)StringLiteral_7043/*"HEROINE_TREASURE_DEVICE_RANKUP_EFFECTS"*/,
           BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects,
           0LL);
  p_HeroineTreasureDeviceRankUpEffects = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects;
  p_HeroineTreasureDeviceRankUpEffects->klass = (ServantStatusBattleListViewItem_c *)v510;
  sub_1B00C70(p_HeroineTreasureDeviceRankUpEffects, (int32_t)v510, v512, v513);
  v514 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_7042/*"HEROINE_LIMIT_COUNT_ORTINAX_REFURBISHED"*/,
           BalanceConfig_TypeInfo->static_fields->HeroineLimitCountOrtinaxRefurbished,
           0LL);
  v515 = BalanceConfig_TypeInfo->static_fields;
  v515->HeroineLimitCountOrtinaxRefurbished = v514;
  v516 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_3474/*"CLASS_BOARD_RELEASE_QUEST_ID"*/,
           v515->ClassBoardReleaseQuestId,
           0LL);
  v517 = BalanceConfig_TypeInfo->static_fields;
  v517->ClassBoardReleaseQuestId = v516;
  v518 = ConstantStrMaster__GetValueArray(
           v217,
           (System_String_o *)StringLiteral_5730/*"EXTRA1_SORT_ORDER_CLASS_IDS"*/,
           v517->Extra1SortOrderClassIds,
           0LL);
  p_Extra1SortOrderClassIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->Extra1SortOrderClassIds;
  p_Extra1SortOrderClassIds->klass = (ServantStatusBattleListViewItem_c *)v518;
  sub_1B00C70(p_Extra1SortOrderClassIds, (int32_t)v518, v520, v521);
  v522 = ConstantStrMaster__GetValueArray(
           v217,
           (System_String_o *)StringLiteral_5731/*"EXTRA2_SORT_ORDER_CLASS_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds,
           0LL);
  p_Extra2SortOrderClassIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds;
  p_Extra2SortOrderClassIds->klass = (ServantStatusBattleListViewItem_c *)v522;
  sub_1B00C70(p_Extra2SortOrderClassIds, (int32_t)v522, v524, v525);
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectMoveMaxDistance = ConstantMaster__GetValue_37816176(
                                                                                   (ConstantMaster_o *)MasterData_object,
                                                                                   (System_String_o *)StringLiteral_3437/*"CLASS_BOARD_CAMERA_SELECT_MOVE_MAX_DISTANCE"*/,
                                                                                   BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectMoveMaxDistance,
                                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectSecMin = (float)ConstantMaster__GetValue_37816176(
                                                                                 (ConstantMaster_o *)MasterData_object,
                                                                                 (System_String_o *)StringLiteral_3439/*"CLASS_BOARD_CAMERA_SELECT_SEC_MIN"*/,
                                                                                 100,
                                                                                 0LL)
                                                                      / 1000.0;
  v526 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_3438/*"CLASS_BOARD_CAMERA_SELECT_SEC_MAX"*/,
           1000,
           0LL);
  v527 = BalanceConfig_TypeInfo->static_fields;
  v527->ClassBoardCameraSelectSecMax = (float)v526 / 1000.0;
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectEasingType = ConstantMaster__GetValue_37816176(
                                                                              (ConstantMaster_o *)MasterData_object,
                                                                              (System_String_o *)StringLiteral_3436/*"CLASS_BOARD_CAMERA_SELECT_EASING_TYPE"*/,
                                                                              v527->ClassBoardCameraSelectEasingType,
                                                                              0LL);
  v528 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_3432/*"CLASS_BOARD_2D_CAMERA_DEFAULT_SIZE"*/,
           1700,
           0LL);
  v529 = BalanceConfig_TypeInfo->static_fields;
  v529->ClassBoard2DCameraDefaultSize = (float)v528 / 1000.0;
  v530 = ConstantStrMaster__GetValueArray(v217, (System_String_o *)StringLiteral_9191/*"NOT_UI_CHANGE_MAP_IDS"*/, v529->NotUIChangeMapIds, 0LL);
  p_NotUIChangeMapIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->NotUIChangeMapIds;
  p_NotUIChangeMapIds->klass = (ServantStatusBattleListViewItem_c *)v530;
  sub_1B00C70(p_NotUIChangeMapIds, (int32_t)v530, v532, v533);
  v534 = ConstantStrMaster__GetValueArray(
           v217,
           (System_String_o *)StringLiteral_8169/*"LIMIT_SEALED_DIALOG_MAX_LIMIT_OPEN_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds,
           0LL);
  p_LimitSealedDialogMaxLimitOpenIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds;
  p_LimitSealedDialogMaxLimitOpenIds->klass = (ServantStatusBattleListViewItem_c *)v534;
  sub_1B00C70(p_LimitSealedDialogMaxLimitOpenIds, (int32_t)v534, v536, v537);
  v538 = ConstantStrMaster__GetValueArray(
           v217,
           (System_String_o *)StringLiteral_9610/*"ORDEAL_CALL_CHAPTER_FOLDER_EVENT_UI_DISP_WAR_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds,
           0LL);
  p_OrdealCallChapterFolderEventUIDispWarIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds;
  p_OrdealCallChapterFolderEventUIDispWarIds->klass = (ServantStatusBattleListViewItem_c *)v538;
  sub_1B00C70(p_OrdealCallChapterFolderEventUIDispWarIds, (int32_t)v538, v540, v541);
  v542 = ConstantStrMaster__GetValueArray(
           v217,
           (System_String_o *)StringLiteral_10869/*"RECOVERY_FATIGUE_DELAYED_CHANGE_BG_EVENTS"*/,
           BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents,
           0LL);
  p_RecoveryFatigueDelayedChangeBgEvents = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents;
  p_RecoveryFatigueDelayedChangeBgEvents->klass = (ServantStatusBattleListViewItem_c *)v542;
  sub_1B00C70(p_RecoveryFatigueDelayedChangeBgEvents, (int32_t)v542, v544, v545);
  Instance = (Il2CppObject *)sub_1B00D74(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_165;
  if ( !LODWORD(Instance[1].monitor) )
    goto LABEL_164;
  LODWORD(Instance[2].klass) = 94086401;
  v546 = ConstantStrMaster__GetValueArray(
           v217,
           (System_String_o *)StringLiteral_9149/*"NONE_DISPLAY_FREE_QUEST_MATERIAL"*/,
           (System_Int32_array *)Instance,
           0LL);
  p_noneDisplayFreeQuestMaterial = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->noneDisplayFreeQuestMaterial;
  p_noneDisplayFreeQuestMaterial->klass = (ServantStatusBattleListViewItem_c *)v546;
  sub_1B00C70(p_noneDisplayFreeQuestMaterial, (int32_t)v546, v548, v549);
  v550 = ConstantStrMaster__GetValueArray(
           v217,
           (System_String_o *)StringLiteral_9190/*"NOT_SEND_TRACK_EVENT_AT_WAR_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
           0LL);
  p_NotSendTrackEventAtWarIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds;
  p_NotSendTrackEventAtWarIds->klass = (ServantStatusBattleListViewItem_c *)v550;
  sub_1B00C70(p_NotSendTrackEventAtWarIds, (int32_t)v550, v552, v553);
  v554 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_12034/*"STARTING_MEMBER_FRIENDSHIP_RATE"*/,
           0,
           0LL);
  v555 = BalanceConfig_TypeInfo->static_fields;
  v555->StartingMemberFriendshipRate = v554;
  v556 = ConstantStrMaster__GetValueArray(v217, (System_String_o *)StringLiteral_9185/*"NOT_REQUIRED_WAR_IDS"*/, v555->NotRequiredPlayWarIds, 0LL);
  p_NotRequiredPlayWarIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->NotRequiredPlayWarIds;
  p_NotRequiredPlayWarIds->klass = (ServantStatusBattleListViewItem_c *)v556;
  sub_1B00C70(p_NotRequiredPlayWarIds, (int32_t)v556, v558, v559);
  v560 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_7336/*"IS_ENABLE_OLD_BLOCK_SHORTEST_ROUTE"*/,
           0,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsEnableOldBlockShortestRoute = v560;
  v561 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_7337/*"IS_EVENT_POINT_MENU"*/,
           0,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsEventPointMenu = v561;
  v562 = ConstantStrMaster__GetValue(v217, (System_String_o *)StringLiteral_8210/*"LOGIN_QUEST_RETURN_TERMINAL_DIALOG_MESSAGE"*/, 0LL);
  p_LoginQuestReturnTerminalDialogMessage = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->LoginQuestReturnTerminalDialogMessage;
  p_LoginQuestReturnTerminalDialogMessage->klass = (ServantStatusBattleListViewItem_c *)v562;
  sub_1B00C70(p_LoginQuestReturnTerminalDialogMessage, (int32_t)v562, v564, v565);
  v566 = ConstantStrMaster__GetValueArray(v217, (System_String_o *)StringLiteral_5574/*"EVENT_ITEM_NOT_DISP_ITEM_GET_EFFECT"*/, 0LL, 0LL);
  p_EventItemNotDispItemGetEffect = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->EventItemNotDispItemGetEffect;
  p_EventItemNotDispItemGetEffect->klass = (ServantStatusBattleListViewItem_c *)v566;
  sub_1B00C70(p_EventItemNotDispItemGetEffect, (int32_t)v566, v568, v569);
  v570 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_7335/*"IS_ENABLE_FADE_RERUN_SKIPPED"*/,
           1,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsEnableFadeRerunSkipped = v570;
  BalanceConfig_TypeInfo->static_fields->DisableBackMaskTime = (float)ConstantMaster__GetValue_37816176(
                                                                        (ConstantMaster_o *)MasterData_object,
                                                                        (System_String_o *)StringLiteral_4991/*"DISABLE_BACK_MASK_TIME"*/,
                                                                        1000,
                                                                        0LL)
                                                             / 1000.0;
  v571 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B00F18(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v571,
    (const MethodInfo_308427C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  v572 = MstMissionEntity_TypeInfo;
  if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo);
    v572 = MstMissionEntity_TypeInfo;
  }
  v573 = TitleInfoControl_TypeInfo;
  MISSION_ICON_DISPLAY_MS_GROUP_NORMAL = v572->static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL;
  if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    v573 = TitleInfoControl_TypeInfo;
  }
  EVENT_ALPHA_ANIM_TIME_INTERVAL = v573->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL;
  if ( EVENT_ALPHA_ANIM_TIME_INTERVAL == INFINITY )
    v576 = 0;
  else
    v576 = 1000 * (int)EVENT_ALPHA_ANIM_TIME_INTERVAL;
  Instance = (Il2CppObject *)ConstantMaster__GetValue_37816176(
                               (ConstantMaster_o *)MasterData_object,
                               MISSION_ICON_DISPLAY_MS_GROUP_NORMAL,
                               v576,
                               0LL);
  if ( !v571 )
    goto LABEL_165;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    v571,
    (Il2CppObject *)MISSION_ICON_DISPLAY_MS_GROUP_NORMAL,
    (int32_t)Instance,
    (const MethodInfo_3084C1C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  v577 = MstMissionEntity_TypeInfo->static_fields;
  v578 = TitleInfoControl_TypeInfo->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL;
  MISSION_ICON_DISPLAY_MS_GROUP_LIMITED = (Il2CppObject *)v577->MISSION_ICON_DISPLAY_MS_GROUP_LIMITED;
  if ( v578 == INFINITY )
    v580 = 0;
  else
    v580 = 1000 * (int)v578;
  v581 = ConstantMaster__GetValue_37816176(
           (ConstantMaster_o *)MasterData_object,
           v577->MISSION_ICON_DISPLAY_MS_GROUP_LIMITED,
           v580,
           0LL);
  System_Collections_Generic_Dictionary_object__int___set_Item(
    v571,
    MISSION_ICON_DISPLAY_MS_GROUP_LIMITED,
    v581,
    (const MethodInfo_3084C1C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  p_MissionIconDisplayMsDictionary = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->MissionIconDisplayMsDictionary;
  p_MissionIconDisplayMsDictionary->klass = (ServantStatusBattleListViewItem_c *)v571;
  sub_1B00C70(p_MissionIconDisplayMsDictionary, (int32_t)v571, v583, v584);
  BalanceConfig_TypeInfo->static_fields->BgmFadeOutTimeBeforeBattle = (float)ConstantMaster__GetValue_37816176(
                                                                               (ConstantMaster_o *)MasterData_object,
                                                                               (System_String_o *)StringLiteral_2994/*"BGM_FADE_OUT_TIME_BEFORE_BATTLE"*/,
                                                                               1000,
                                                                               0LL)
                                                                    / 1000.0;
  BalanceConfig_TypeInfo->static_fields->IsMissionNaviAutoClassify = ConstantMaster__GetValue_37816176(
                                                                       (ConstantMaster_o *)MasterData_object,
                                                                       (System_String_o *)StringLiteral_7339/*"IS_MISSION_NAVI_AUTO_CLASSIFY"*/,
                                                                       0,
                                                                       0LL) != 0;
}


void __fastcall BalanceConfig___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E1E5A & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig___c_TypeInfo, v1);
    byte_48E1E5A = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(BalanceConfig___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BalanceConfig___c_TypeInfo->static_fields->__9 = (struct BalanceConfig___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)BalanceConfig___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BalanceConfig___c___ctor(BalanceConfig___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BalanceConfig___c___Initialize_b__230_0(
        BalanceConfig___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}