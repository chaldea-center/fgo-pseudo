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
  ServantStatusBattleListViewItem_o *p_UIStandFigureROffsetEffectNames; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  ServantStatusBattleListViewItem_o *p_UIStandFigureROffsetImages; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  struct BalanceConfig_StaticFields *v49; // x8
  ServantStatusBattleListViewItem_c *v50; // x0
  __int64 v51; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  ServantStatusBattleListViewItem_c *v54; // x1
  ServantStatusBattleListViewItem_o *p_MainChaptersWithEventId; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  ServantStatusBattleListViewItem_o *p_TreasureDevicesForcedOpenEffect; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  ServantStatusBattleListViewItem_o *p_HeroineTreasureDeviceRankUpEffects; // x0
  System_Array_o *v62; // x0
  ServantStatusBattleListViewItem_c *v63; // x19
  ServantStatusBattleListViewItem_o *p_Extra1SortOrderClassIds; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_Array_o *v67; // x0
  ServantStatusBattleListViewItem_c *v68; // x19
  ServantStatusBattleListViewItem_o *p_Extra2SortOrderClassIds; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  struct BalanceConfig_StaticFields *v72; // x8
  __int64 v73; // x1
  ServantStatusBattleListViewItem_o *p_NotUIChangeMapIds; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  int32_t v77; // w2
  int32_t v78; // w3
  ServantStatusBattleListViewItem_o *p_LimitSealedDialogMaxLimitOpenIds; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  ServantStatusBattleListViewItem_o *p_OrdealCallChapterFolderEventUIDispWarIds; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  ServantStatusBattleListViewItem_o *p_RecoveryFatigueDelayedChangeBgEvents; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  ServantStatusBattleListViewItem_o *p_noneDisplayFreeQuestMaterial; // x0
  System_Array_o *v89; // x0
  ServantStatusBattleListViewItem_c *v90; // x19
  ServantStatusBattleListViewItem_o *p_NotSendTrackEventAtWarIds; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  System_Array_o *v94; // x0
  ServantStatusBattleListViewItem_c *v95; // x19
  ServantStatusBattleListViewItem_o *p_NotRequiredPlayWarIds; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  __int64 v99; // x1
  ServantStatusBattleListViewItem_o *p_EventItemNotDispItemGetEffect; // x0
  int32_t v101; // w2
  int32_t v102; // w3
  System_Collections_Generic_Dictionary_object__int__o *v103; // x19
  ServantStatusBattleListViewItem_o *p_MissionIconDisplayMsDictionary; // x0
  int32_t v105; // w2
  int32_t v106; // w3
  struct BalanceConfig_StaticFields *v112; // x8
  int32_t v113; // w2
  int32_t v114; // w3
  int namespaze; // w8
  ServantStatusBattleListViewItem_o *p_PlayableBeastClassIds; // x0
  BalanceConfig_c *v117; // x8
  struct BalanceConfig_StaticFields *v118; // x9
  struct BalanceConfig_StaticFields *v119; // x8
  System_RuntimeFieldHandle_o v120; // 0:w1.4
  System_RuntimeFieldHandle_o v121; // 0:w1.4
  System_RuntimeFieldHandle_o v122; // 0:w1.4
  System_RuntimeFieldHandle_o v123; // 0:w1.4

  if ( (byte_4A1F0E7 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, v1);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v4);
    sub_1B715CC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_1B715CC(&int___TypeInfo, v6);
    sub_1B715CC(
      &Field__PrivateImplementationDetails__0576E2463551A09802222B33A5BA38F57896D9DD406B6DB32A10299A54B4B5BC,
      v7);
    sub_1B715CC(
      &Field__PrivateImplementationDetails__829FEE660E2799B8814849BCC3884998BB3651E975AC0C0D659AD53227033DBC,
      v8);
    sub_1B715CC(
      &Field__PrivateImplementationDetails__96039A68C58EBF2F40B99A5B8F9F313745D9C4E02164BB0FCE39159471432F4B,
      v9);
    sub_1B715CC(
      &Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA,
      v10);
    sub_1B715CC(&StringLiteral_3013/*"BGM_TITLE_5"*/, v11);
    byte_4A1F0E7 = 1;
  }
  v12 = BalanceConfig_TypeInfo;
  static_fields = BalanceConfig_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->ServantLimitMax = xmmword_BAB4A0;
  *(_QWORD *)&static_fields->SvtEquipSkillListMax = 0x500000014LL;
  *(int64x2_t *)&static_fields->UserPointEventMax = vdupq_n_s64(0x3B9AC9FFuLL);
  *(int64x2_t *)&static_fields->UserRaidDamagePointMax = vdupq_n_s64(0xE8D4A50FFFuLL);
  *(_QWORD *)&static_fields->DeckMemberMax = 0x300000006LL;
  static_fields->PresentBoxValidTime = 31536000;
  static_fields->UserEquipSkillListMax = 3;
  static_fields->UserEventItemMax = 999999999;
  static_fields->AllUserBoxGachaTotalMax = 999999999LL;
  static_fields->SvtAppendPassiveSkillListMax = 5;
  static_fields->ServantCombineMax = 5;
  static_fields->RequestTopHomeExpirationDateSec = 600;
  static_fields->SupportDeckMemberMax = 9;
  *(_OWORD *)&static_fields->FixMainSupportDeckNum = xmmword_BABE60;
  static_fields->ServerTimeOverLimit = 3600LL;
  static_fields->CriticalRateToAddByQuickFirstBonus = 0;
  *(_QWORD *)&static_fields->SpendApRecvItemNum = 0x3E700000001LL;
  static_fields->CostumeIdMashu = 12;
  *(_OWORD *)&static_fields->ServantIdJekyll = 0u;
  *(_OWORD *)&static_fields->ServantIdMashu2 = 0u;
  static_fields->ServantWarehouseSelectMax = 999;
  static_fields->VtReleaseAt = 0LL;
  *(_QWORD *)&static_fields->MashuTdGradeUpQuestId = 0LL;
  *(_QWORD *)&static_fields->ServantIdOberonChoco = 0LL;
  *(_OWORD *)&static_fields->LvExceedItemId = xmmword_BABE70;
  *(_QWORD *)&static_fields->ApSeedItemId = 0x6800000067LL;
  *(_QWORD *)&static_fields->FollowerRefreshRestTime = 0xAFFFFFFFFLL;
  static_fields->itemIdForShop15 = 48;
  *(_OWORD *)&static_fields->DefaultFontSize = xmmword_BABB10;
  static_fields->MstMissionAlertTime = 259200;
  *(_QWORD *)&static_fields->raceRewardRankMax = 0x700000003LL;
  *(_OWORD *)&static_fields->ScenarioSpeedStep = xmmword_BAC0A0;
  *(_OWORD *)&static_fields->ScenarioTextWaitStep = xmmword_BAB3F0;
  *(_OWORD *)&static_fields->ScenarioTextWaitDefaultSt = xmmword_BAC0B0;
  *(_OWORD *)&static_fields->ScenarioTextSpeedDefault = xmmword_BAAFD0;
  *(_OWORD *)&static_fields->ScenarioScrollSpeedDefault = xmmword_BAB7A0;
  *(_QWORD *)&static_fields->ScenarioAutoWaitTimeDefault = 0x3E4CCCCD00000000LL;
  *(_QWORD *)&static_fields->PowerUpQuestWarId = 0x3C000003E9LL;
  static_fields->ShopNewItemAddDays = 9.0;
  static_fields->EquipGetEffectId = 0;
  static_fields->MaskColor = (struct UnityEngine_Color_o)xmmword_BAAD80;
  v14 = v12->static_fields;
  *(_QWORD *)&v14->CommandCodeDetachingItemId = 0x3F7FFFFEFFFFFFFFLL;
  *(_QWORD *)&v14->FollowNum = 0x1900000003LL;
  v14->PresentBoxFilterSvtEquipMaterial = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v14->PresentBoxFilterSvtEquipMaterial, 0, v2, v3);
  v15 = BalanceConfig_TypeInfo->static_fields;
  *(_OWORD *)&v15->DisableFriendshipExceed = xmmword_BAA2C0;
  *(_OWORD *)&v15->FriendShipExceedItemId = xmmword_BAA960;
  *(_QWORD *)&v15->Torch2ItemId = 0x3500000034LL;
  v15->ReprintLastWarRaidEventIdList = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v15->ReprintLastWarRaidEventIdList, 0, v16, v17);
  v18 = BalanceConfig_TypeInfo->static_fields;
  v18->CommandCardParamUpMax = 500;
  v18->EventTowerFadeOutDelayTime = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v18->EventTowerFadeOutDelayTime, 0, v19, v20);
  v21 = BalanceConfig_TypeInfo->static_fields;
  v21->EventTowerFadeOutPlayTime = 3.0;
  *(_QWORD *)&v21->MaxFriendChocolateUse = 0x300000003LL;
  v21->MainInterludeWarId = 1004;
  v21->MainInterludeWarIdOnMaterial = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v21->MainInterludeWarIdOnMaterial, 0, v22, v23);
  p_EventBoardGameDiceButtonPostion = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion;
  p_EventBoardGameDiceButtonPostion->klass = 0LL;
  sub_1B71570(p_EventBoardGameDiceButtonPostion, 0, v25, v26);
  p_EventBoardGameMapIdList = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->EventBoardGameMapIdList;
  p_EventBoardGameMapIdList->klass = 0LL;
  sub_1B71570(p_EventBoardGameMapIdList, 0, v28, v29);
  v30 = BalanceConfig_TypeInfo->static_fields;
  *(_QWORD *)&v30->TitleFlowOld = 0x3EB00000000LL;
  v30->OrdealCallWarId = 401;
  v31 = StringLiteral_3013/*"BGM_TITLE_5"*/;
  v30->OrdealCallClearBgmName = (struct System_String_o *)StringLiteral_3013/*"BGM_TITLE_5"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v30->OrdealCallClearBgmName, v31, v32, v33);
  p_consumeStormPodSpotId = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->consumeStormPodSpotId;
  p_consumeStormPodSpotId->klass = 0LL;
  sub_1B71570(p_consumeStormPodSpotId, 0, v35, v36);
  p_StormPodHelpIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->StormPodHelpIds;
  p_StormPodHelpIds->klass = 0LL;
  sub_1B71570(p_StormPodHelpIds, 0, v38, v39);
  p_legacyAspectMovies = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
  p_legacyAspectMovies->klass = 0LL;
  sub_1B71570(p_legacyAspectMovies, 0, v41, v42);
  p_UIStandFigureROffsetEffectNames = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames;
  p_UIStandFigureROffsetEffectNames->klass = 0LL;
  sub_1B71570(p_UIStandFigureROffsetEffectNames, 0, v44, v45);
  p_UIStandFigureROffsetImages = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetImages;
  p_UIStandFigureROffsetImages->klass = 0LL;
  sub_1B71570(p_UIStandFigureROffsetImages, 0, v47, v48);
  v49 = BalanceConfig_TypeInfo->static_fields;
  v49->IsWarBoardAiCalcEvalSum = 0;
  v49->WarBoardEvalFactorsAffectRatio = 10000;
  v49->StoneFragmentExchangeNoticeDispMax = 999;
  *(_QWORD *)&v49->MapCameraMoveTimeConstant = 0x3FD9999A00000000LL;
  *(_QWORD *)&v49->MapCameraMoveTimeLogarithmBase = 0xF00002AF8LL;
  v49->Camera2DResetDuration = 0.644;
  v50 = (ServantStatusBattleListViewItem_c *)sub_1B71674(int___TypeInfo, 1LL);
  if ( !v50 )
    goto LABEL_21;
  v54 = v50;
  if ( !LODWORD(v50->_1.namespaze) )
    goto LABEL_22;
  LODWORD(v50->_1.byval_arg.data) = 311;
  p_MainChaptersWithEventId = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->MainChaptersWithEventId;
  p_MainChaptersWithEventId->klass = v54;
  sub_1B71570(p_MainChaptersWithEventId, (int32_t)v54, v52, v53);
  v50 = (ServantStatusBattleListViewItem_c *)sub_1B71674(int___TypeInfo, 1LL);
  if ( !v50 )
    goto LABEL_21;
  v54 = v50;
  if ( !LODWORD(v50->_1.namespaze) )
    goto LABEL_22;
  LODWORD(v50->_1.byval_arg.data) = 2800502;
  p_TreasureDevicesForcedOpenEffect = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->TreasureDevicesForcedOpenEffect;
  p_TreasureDevicesForcedOpenEffect->klass = v54;
  sub_1B71570(p_TreasureDevicesForcedOpenEffect, (int32_t)v54, v56, v57);
  v50 = (ServantStatusBattleListViewItem_c *)sub_1B71674(int___TypeInfo, 1LL);
  if ( !v50 )
    goto LABEL_21;
  v54 = v50;
  if ( !LODWORD(v50->_1.namespaze) )
    goto LABEL_22;
  LODWORD(v50->_1.byval_arg.data) = 800106;
  p_HeroineTreasureDeviceRankUpEffects = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects;
  p_HeroineTreasureDeviceRankUpEffects->klass = v54;
  sub_1B71570(p_HeroineTreasureDeviceRankUpEffects, (int32_t)v54, v59, v60);
  *(_QWORD *)&BalanceConfig_TypeInfo->static_fields->HeroineLimitCountOrtinaxRefurbished = 0x3D09640000000DLL;
  v62 = (System_Array_o *)sub_1B71674(int___TypeInfo, 4LL);
  v120.fields.value = Field__PrivateImplementationDetails__0576E2463551A09802222B33A5BA38F57896D9DD406B6DB32A10299A54B4B5BC;
  v63 = (ServantStatusBattleListViewItem_c *)v62;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61413584(v62, v120, 0LL);
  p_Extra1SortOrderClassIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->Extra1SortOrderClassIds;
  p_Extra1SortOrderClassIds->klass = v63;
  sub_1B71570(p_Extra1SortOrderClassIds, (int32_t)v63, v65, v66);
  v67 = (System_Array_o *)sub_1B71674(int___TypeInfo, 4LL);
  v121.fields.value = Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA;
  v68 = (ServantStatusBattleListViewItem_c *)v67;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61413584(v67, v121, 0LL);
  p_Extra2SortOrderClassIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds;
  p_Extra2SortOrderClassIds->klass = v68;
  sub_1B71570(p_Extra2SortOrderClassIds, (int32_t)v68, v70, v71);
  v72 = BalanceConfig_TypeInfo->static_fields;
  v72->ClassBoardCameraSelectMoveMaxDistance = 1024;
  *(_QWORD *)&v72->ClassBoardCameraSelectSecMin = 0x3F8000003DCCCCCDLL;
  *(_QWORD *)&v72->ClassBoardCameraSelectEasingType = 0x3FD9999A00000005LL;
  v73 = sub_1B71674(int___TypeInfo, 0LL);
  p_NotUIChangeMapIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->NotUIChangeMapIds;
  p_NotUIChangeMapIds->klass = (ServantStatusBattleListViewItem_c *)v73;
  sub_1B71570(p_NotUIChangeMapIds, v73, v75, v76);
  v50 = (ServantStatusBattleListViewItem_c *)sub_1B71674(int___TypeInfo, 1LL);
  if ( !v50 )
    goto LABEL_21;
  v54 = v50;
  if ( !LODWORD(v50->_1.namespaze) )
    goto LABEL_22;
  LODWORD(v50->_1.byval_arg.data) = 3300100;
  p_LimitSealedDialogMaxLimitOpenIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds;
  p_LimitSealedDialogMaxLimitOpenIds->klass = v54;
  sub_1B71570(p_LimitSealedDialogMaxLimitOpenIds, (int32_t)v54, v77, v78);
  v50 = (ServantStatusBattleListViewItem_c *)sub_1B71674(int___TypeInfo, 1LL);
  if ( !v50 )
    goto LABEL_21;
  v54 = v50;
  if ( !LODWORD(v50->_1.namespaze) )
    goto LABEL_22;
  LODWORD(v50->_1.byval_arg.data) = 402;
  p_OrdealCallChapterFolderEventUIDispWarIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds;
  p_OrdealCallChapterFolderEventUIDispWarIds->klass = v54;
  sub_1B71570(p_OrdealCallChapterFolderEventUIDispWarIds, (int32_t)v54, v80, v81);
  v50 = (ServantStatusBattleListViewItem_c *)sub_1B71674(int___TypeInfo, 1LL);
  if ( !v50 )
    goto LABEL_21;
  v54 = v50;
  if ( !LODWORD(v50->_1.namespaze) )
    goto LABEL_22;
  LODWORD(v50->_1.byval_arg.data) = 80432;
  p_RecoveryFatigueDelayedChangeBgEvents = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents;
  p_RecoveryFatigueDelayedChangeBgEvents->klass = v54;
  sub_1B71570(p_RecoveryFatigueDelayedChangeBgEvents, (int32_t)v54, v83, v84);
  v50 = (ServantStatusBattleListViewItem_c *)sub_1B71674(int___TypeInfo, 1LL);
  if ( !v50 )
    goto LABEL_21;
  v54 = v50;
  if ( !LODWORD(v50->_1.namespaze) )
    goto LABEL_22;
  LODWORD(v50->_1.byval_arg.data) = 94086401;
  p_noneDisplayFreeQuestMaterial = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->noneDisplayFreeQuestMaterial;
  p_noneDisplayFreeQuestMaterial->klass = v54;
  sub_1B71570(p_noneDisplayFreeQuestMaterial, (int32_t)v54, v86, v87);
  v89 = (System_Array_o *)sub_1B71674(int___TypeInfo, 5LL);
  v122.fields.value = Field__PrivateImplementationDetails__829FEE660E2799B8814849BCC3884998BB3651E975AC0C0D659AD53227033DBC;
  v90 = (ServantStatusBattleListViewItem_c *)v89;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61413584(v89, v122, 0LL);
  p_NotSendTrackEventAtWarIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds;
  p_NotSendTrackEventAtWarIds->klass = v90;
  sub_1B71570(p_NotSendTrackEventAtWarIds, (int32_t)v90, v92, v93);
  BalanceConfig_TypeInfo->static_fields->StartingMemberFriendshipRate = 0;
  v94 = (System_Array_o *)sub_1B71674(int___TypeInfo, 6LL);
  v123.fields.value = Field__PrivateImplementationDetails__96039A68C58EBF2F40B99A5B8F9F313745D9C4E02164BB0FCE39159471432F4B;
  v95 = (ServantStatusBattleListViewItem_c *)v94;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61413584(v94, v123, 0LL);
  p_NotRequiredPlayWarIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->NotRequiredPlayWarIds;
  p_NotRequiredPlayWarIds->klass = v95;
  sub_1B71570(p_NotRequiredPlayWarIds, (int32_t)v95, v97, v98);
  *(_WORD *)&BalanceConfig_TypeInfo->static_fields->IsEnableOldBlockShortestRoute = 0;
  v99 = sub_1B71674(int___TypeInfo, 0LL);
  p_EventItemNotDispItemGetEffect = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->EventItemNotDispItemGetEffect;
  p_EventItemNotDispItemGetEffect->klass = (ServantStatusBattleListViewItem_c *)v99;
  sub_1B71570(p_EventItemNotDispItemGetEffect, v99, v101, v102);
  BalanceConfig_TypeInfo->static_fields->IsEnableFadeRerunSkipped = 1;
  v103 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B71818(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v103,
    (const MethodInfo_3195544 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  p_MissionIconDisplayMsDictionary = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->MissionIconDisplayMsDictionary;
  p_MissionIconDisplayMsDictionary->klass = (ServantStatusBattleListViewItem_c *)v103;
  sub_1B71570(p_MissionIconDisplayMsDictionary, (int32_t)v103, v105, v106);
  __asm { FMOV            V0.2S, #1.0 }
  v112 = BalanceConfig_TypeInfo->static_fields;
  *(_QWORD *)&v112->DisableBackMaskTime = _D0;
  v112->IsMissionNaviAutoClassify = 0;
  v50 = (ServantStatusBattleListViewItem_c *)sub_1B71674(int___TypeInfo, 2LL);
  if ( !v50 )
LABEL_21:
    sub_1B71828(v50, v51);
  namespaze = (int)v50->_1.namespaze;
  v54 = v50;
  if ( !namespaze || (LODWORD(v50->_1.byval_arg.data) = 33, namespaze == 1) )
LABEL_22:
    sub_1B71830(v50, v54);
  HIDWORD(v50->_1.byval_arg.data) = 38;
  p_PlayableBeastClassIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds;
  p_PlayableBeastClassIds->klass = v54;
  sub_1B71570(p_PlayableBeastClassIds, (int32_t)v54, v113, v114);
  v117 = BalanceConfig_TypeInfo;
  v118 = BalanceConfig_TypeInfo->static_fields;
  v118->CLASS_BOARD_BUTTON_POS.fields.y = -44.0;
  *(_QWORD *)&v118->PlayableBeastBaseClassId = 0x4389000000000021LL;
  v117->static_fields->CLASS_BOARD_LABEL_POS = (struct UnityEngine_Vector2_o)0x40A00000BF800000LL;
  v119 = v117->static_fields;
  v119->CLASS_BOARD_LABEL_SCALE_X = 0.85;
  *(_QWORD *)&v119->CLASS_BOARD_NUM_LABEL_POS_Y = 0xFFFFFFFAFFFFFFF6LL;
  v119->BASE_ADD_POS_X = 30;
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
  __int64 v213; // x1
  __int64 v214; // x1
  Il2CppObject *Instance; // x0
  __int64 v216; // x1
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v218; // x21
  ConstantStrMaster_o *v219; // x20
  int32_t Value_38846256; // w0
  BalanceConfig_c *v221; // x8
  int32_t v222; // w22
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t Value_38845700; // x0
  struct BalanceConfig_StaticFields *v225; // x8
  int32_t Value; // w0
  struct BalanceConfig_StaticFields *v227; // x8
  int32_t SupportDeckMax; // w9
  int32_t SupportDeckMemberMax; // w10
  int64_t v230; // x21
  ManagerConfig_c *v231; // x0
  int64_t SERVER_TIME_OVER_LIMIT; // x23
  BalanceConfig_c *v233; // x0
  int32_t v234; // w21
  int32_t v235; // w0
  BalanceConfig_c *v236; // x8
  int32_t v237; // w21
  int32_t v238; // w0
  System_String_o *v239; // x1
  ServantStatusBattleListViewItem_o *p_UseTermsAgreementRequiredAppVersion; // x0
  int32_t v241; // w2
  int32_t v242; // w3
  System_String_o *v243; // x1
  ServantStatusBattleListViewItem_o *p_UseTermsLatestVersion; // x0
  int32_t v245; // w2
  int32_t v246; // w3
  bool v247; // w9
  int monitor; // w9
  System_Int32_array *ValueArray; // x1
  ServantStatusBattleListViewItem_o *p_CombineServantSkillIds; // x0
  int32_t v251; // w2
  int32_t v252; // w3
  System_String_o *v253; // x0
  System_Int32_array *v254; // x1
  ServantStatusBattleListViewItem_o *p_ServantIdsBirthdayBeforeValentine; // x0
  int32_t v256; // w2
  int32_t v257; // w3
  System_String_o *v258; // x0
  System_Int32_array *v259; // x0
  int32_t v260; // w2
  int32_t v261; // w3
  BalanceConfig_c *v262; // x8
  ServantStatusBattleListViewItem_c *v263; // x21
  ServantStatusBattleListViewItem_o *p_ServantIdsIgnoreFormChange; // x0
  int32_t v265; // w0
  BalanceConfig_c *v266; // x8
  int32_t v267; // w21
  int32_t v268; // w0
  int v269; // w9
  int32_t v270; // w0
  struct BalanceConfig_StaticFields *v271; // x8
  System_String_o *v272; // x0
  BalanceConfig_c *v273; // x0
  float v274; // s8
  System_String_o *v275; // x0
  BalanceConfig_c *v276; // x0
  float v277; // s8
  System_String_o *v278; // x0
  BalanceConfig_c *v279; // x0
  float v280; // s8
  System_String_o *v281; // x0
  BalanceConfig_c *v282; // x0
  float v283; // s8
  int32_t v284; // w0
  struct BalanceConfig_StaticFields *v285; // x8
  int32_t v286; // w0
  struct BalanceConfig_StaticFields *v287; // x8
  System_String_o *v288; // x0
  System_String_array *v289; // x0
  BalanceConfig___c_c *v290; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v291; // x21
  System_Func_object__int__o *_9__240_0; // x22
  Il2CppObject *v293; // x23
  struct BalanceConfig___c_StaticFields *v294; // x0
  int32_t v295; // w2
  int32_t v296; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v297; // x0
  System_Int32_array *v298; // x0
  int32_t v299; // w2
  int32_t v300; // w3
  BalanceConfig_c *v301; // x8
  ServantStatusBattleListViewItem_c *v302; // x21
  ServantStatusBattleListViewItem_o *p_PresentBoxFilterSvtEquipMaterial; // x0
  int32_t v304; // w0
  int32_t v305; // w21
  BalanceConfig_c *v306; // x0
  int32_t v307; // w0
  int32_t v308; // w21
  BalanceConfig_c *v309; // x0
  int32_t v310; // w0
  BalanceConfig_c *v311; // x8
  int32_t v312; // w21
  System_Int32_array *v313; // x1
  ServantStatusBattleListViewItem_o *p_ReprintLastWarRaidEventIdList; // x0
  int32_t v315; // w2
  int32_t v316; // w3
  System_Int32_array *v317; // x1
  ServantStatusBattleListViewItem_o *p_EventTowerFadeOutDelayTime; // x0
  int32_t v319; // w2
  int32_t v320; // w3
  System_Array_o *v321; // x21
  int32_t v322; // w2
  int32_t v323; // w3
  BalanceConfig_c *v324; // x0
  ServantStatusBattleListViewItem_o *v325; // x0
  int32_t v326; // w0
  BalanceConfig_c *v327; // x8
  int v328; // w21
  System_Int32_array *v329; // x1
  ServantStatusBattleListViewItem_o *p_EventBoardGameDiceButtonPostion; // x0
  int32_t v331; // w2
  int32_t v332; // w3
  int32_t v333; // w2
  int32_t v334; // w3
  unsigned int v335; // w8
  ServantStatusBattleListViewItem_c *v336; // x21
  BalanceConfig_c *v337; // x0
  ServantStatusBattleListViewItem_o *v338; // x0
  System_Int32_array *v339; // x0
  int32_t v340; // w2
  int32_t v341; // w3
  BalanceConfig_c *v342; // x8
  ServantStatusBattleListViewItem_c *v343; // x21
  ServantStatusBattleListViewItem_o *p_MainInterludeWarIdOnMaterial; // x0
  int32_t v345; // w2
  int32_t v346; // w3
  ServantStatusBattleListViewItem_c *v347; // x21
  BalanceConfig_c *v348; // x0
  ServantStatusBattleListViewItem_o *v349; // x0
  System_Int32_array *v350; // x0
  int32_t v351; // w2
  int32_t v352; // w3
  BalanceConfig_c *v353; // x8
  ServantStatusBattleListViewItem_c *v354; // x21
  ServantStatusBattleListViewItem_o *p_EventBoardGameMapIdList; // x0
  System_String_o *v356; // x21
  int32_t v357; // w2
  int32_t v358; // w3
  BalanceConfig_c *v359; // x0
  ServantStatusBattleListViewItem_o *p_OrdealCallClearBgmName; // x0
  System_Array_o *v361; // x0
  System_Int32_array *v362; // x21
  System_Int32_array *v363; // x0
  int32_t v364; // w2
  int32_t v365; // w3
  BalanceConfig_c *v366; // x8
  ServantStatusBattleListViewItem_c *v367; // x21
  ServantStatusBattleListViewItem_o *p_consumeStormPodSpotId; // x0
  System_Int32_array *v369; // x1
  ServantStatusBattleListViewItem_o *p_StormPodHelpIds; // x0
  int32_t v371; // w2
  int32_t v372; // w3
  System_String_array *ValueStringArray; // x1
  ServantStatusBattleListViewItem_o *p_legacyAspectMovies; // x0
  int32_t v375; // w2
  int32_t v376; // w3
  System_String_o *v377; // x1
  ServantStatusBattleListViewItem_o *p_IOS_ExaminationNewsUrl; // x0
  int32_t v379; // w2
  int32_t v380; // w3
  int32_t v381; // w2
  int32_t v382; // w3
  struct BalanceConfig_StaticFields *v383; // x8
  int32_t v384; // w1
  int32_t v385; // w0
  BalanceConfig_c *v386; // x8
  int32_t v387; // w21
  System_String_array *v388; // x1
  ServantStatusBattleListViewItem_o *p_UIStandFigureROffsetEffectNames; // x0
  int32_t v390; // w2
  int32_t v391; // w3
  System_String_array *v392; // x1
  ServantStatusBattleListViewItem_o *p_UIStandFigureROffsetImages; // x0
  int32_t v394; // w2
  int32_t v395; // w3
  BalanceConfig_c *v396; // x0
  int32_t v397; // w2
  int32_t v398; // w3
  Il2CppObject *v399; // x21
  int32_t v400; // w1
  int32_t v401; // w2
  int32_t v402; // w3
  int32_t v403; // w1
  int32_t v404; // w2
  int32_t v405; // w3
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
  BalanceConfig_c *v421; // x0
  ServantStatusBattleListViewItem_o *v422; // x0
  int32_t v423; // w2
  int32_t v424; // w3
  Il2CppObject *v425; // x21
  int32_t v426; // w1
  int32_t v427; // w2
  int32_t v428; // w3
  int32_t v429; // w1
  int32_t v430; // w2
  int32_t v431; // w3
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
  BalanceConfig_c *v480; // x0
  ServantStatusBattleListViewItem_o *v481; // x0
  int32_t v482; // w0
  BalanceConfig_c *v483; // x8
  int32_t v484; // w21
  bool v485; // w9
  bool v486; // w9
  struct BalanceConfig_StaticFields *v487; // x8
  int32_t v488; // w0
  struct BalanceConfig_StaticFields *v489; // x8
  int32_t v490; // w0
  struct BalanceConfig_StaticFields *v491; // x8
  int32_t v492; // w0
  struct BalanceConfig_StaticFields *v493; // x8
  System_Int32_array *v494; // x1
  ServantStatusBattleListViewItem_o *p_MainChaptersWithEventId; // x0
  int32_t v496; // w2
  int32_t v497; // w3
  int32_t v498; // w0
  struct BalanceConfig_StaticFields *v499; // x8
  System_Int32_array *v500; // x1
  ServantStatusBattleListViewItem_o *p_TreasureDevicesForcedOpenEffect; // x0
  int32_t v502; // w2
  int32_t v503; // w3
  System_Int32_array *v504; // x1
  ServantStatusBattleListViewItem_o *p_HeroineTreasureDeviceRankUpEffects; // x0
  int32_t v506; // w2
  int32_t v507; // w3
  int32_t v508; // w0
  struct BalanceConfig_StaticFields *v509; // x8
  int32_t v510; // w0
  struct BalanceConfig_StaticFields *v511; // x8
  System_Int32_array *v512; // x1
  ServantStatusBattleListViewItem_o *p_Extra1SortOrderClassIds; // x0
  int32_t v514; // w2
  int32_t v515; // w3
  System_Int32_array *v516; // x1
  ServantStatusBattleListViewItem_o *p_Extra2SortOrderClassIds; // x0
  int32_t v518; // w2
  int32_t v519; // w3
  int32_t v520; // w0
  struct BalanceConfig_StaticFields *v521; // x8
  int32_t v522; // w0
  struct BalanceConfig_StaticFields *v523; // x8
  System_Int32_array *v524; // x1
  ServantStatusBattleListViewItem_o *p_NotUIChangeMapIds; // x0
  int32_t v526; // w2
  int32_t v527; // w3
  System_Int32_array *v528; // x1
  ServantStatusBattleListViewItem_o *p_LimitSealedDialogMaxLimitOpenIds; // x0
  int32_t v530; // w2
  int32_t v531; // w3
  System_Int32_array *v532; // x1
  ServantStatusBattleListViewItem_o *p_OrdealCallChapterFolderEventUIDispWarIds; // x0
  int32_t v534; // w2
  int32_t v535; // w3
  System_Int32_array *v536; // x1
  ServantStatusBattleListViewItem_o *p_RecoveryFatigueDelayedChangeBgEvents; // x0
  int32_t v538; // w2
  int32_t v539; // w3
  System_Int32_array *v540; // x1
  ServantStatusBattleListViewItem_o *p_noneDisplayFreeQuestMaterial; // x0
  int32_t v542; // w2
  int32_t v543; // w3
  System_Int32_array *v544; // x1
  ServantStatusBattleListViewItem_o *p_NotSendTrackEventAtWarIds; // x0
  int32_t v546; // w2
  int32_t v547; // w3
  int32_t v548; // w0
  struct BalanceConfig_StaticFields *v549; // x8
  System_Int32_array *v550; // x1
  ServantStatusBattleListViewItem_o *p_NotRequiredPlayWarIds; // x0
  int32_t v552; // w2
  int32_t v553; // w3
  bool v554; // w9
  bool v555; // w9
  System_String_o *v556; // x1
  ServantStatusBattleListViewItem_o *p_LoginQuestReturnTerminalDialogMessage; // x0
  int32_t v558; // w2
  int32_t v559; // w3
  System_Int32_array *v560; // x1
  ServantStatusBattleListViewItem_o *p_EventItemNotDispItemGetEffect; // x0
  int32_t v562; // w2
  int32_t v563; // w3
  bool v564; // w9
  System_Collections_Generic_Dictionary_object__int__o *v565; // x21
  MstMissionEntity_c *v566; // x0
  TitleInfoControl_c *v567; // x8
  System_String_o *MISSION_ICON_DISPLAY_MS_GROUP_NORMAL; // x22
  float EVENT_ALPHA_ANIM_TIME_INTERVAL; // s0
  int32_t v570; // w2
  Il2CppObject *MISSION_ICON_DISPLAY_MS_GROUP_LIMITED; // x22
  float v572; // s0
  int32_t v573; // w2
  int32_t v574; // w0
  ServantStatusBattleListViewItem_o *p_MissionIconDisplayMsDictionary; // x0
  int32_t v576; // w2
  int32_t v577; // w3
  bool v578; // w9
  struct BalanceConfig_StaticFields *v579; // x8
  System_Int32_array *v580; // x1
  ServantStatusBattleListViewItem_o *p_PlayableBeastClassIds; // x0
  int32_t v582; // w2
  int32_t v583; // w3
  float result; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeFieldHandle_o v585; // 0:w1.4
  System_RuntimeFieldHandle_o v586; // 0:w1.4

  if ( (byte_4A1F0E6 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, v1);
    sub_1B715CC(&Method_DataManager_GetMasterData_ConstantLongMaster___, v2);
    sub_1B715CC(&Method_DataManager_GetMasterData_ConstantMaster___, v3);
    sub_1B715CC(&Method_DataManager_GetMasterData_ConstantStrMaster___, v4);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v6);
    sub_1B715CC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v7);
    sub_1B715CC(&Method_System_Linq_Enumerable_Select_string__int___, v8);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1B715CC(&System_Func_string__int__TypeInfo, v10);
    sub_1B715CC(&int___TypeInfo, v11);
    sub_1B715CC(&ManagerConfig_TypeInfo, v12);
    sub_1B715CC(&System_Math_TypeInfo, v13);
    sub_1B715CC(&MstMissionEntity_TypeInfo, v14);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B715CC(&string___TypeInfo, v16);
    sub_1B715CC(&TitleInfoControl_TypeInfo, v17);
    sub_1B715CC(
      &Field__PrivateImplementationDetails__84DF4B72A51E01473BC25693E526BC603A140C4300062B4A7F64A9F7D00ABB95,
      v18);
    sub_1B715CC(
      &Field__PrivateImplementationDetails__A1FBA00A0F8840358C0A54605FFD365F75E3A3D7AFF25F48F474C4E89BB0B37D,
      v19);
    sub_1B715CC(&Method_BalanceConfig___c__Initialize_b__240_0__, v20);
    sub_1B715CC(&BalanceConfig___c_TypeInfo, v21);
    sub_1B715CC(&StringLiteral_8568/*"MAX_USER_ITEM"*/, v22);
    sub_1B715CC(&StringLiteral_8094/*"JEKYLL_SVT_ID"*/, v23);
    sub_1B715CC(&StringLiteral_1402/*"1053912:100:0"*/, v24);
    sub_1B715CC(&StringLiteral_13385/*"TREASURE_DEVICES_FORCED_OPEN_EFFECT"*/, v25);
    sub_1B715CC(&StringLiteral_11993/*"SHOP_DETAIL_CHECK_DIALOG_FONT_SIZE"*/, v26);
    sub_1B715CC(&StringLiteral_8231/*"LIMIT_SEALED_DIALOG_MAX_LIMIT_OPEN_IDS"*/, v27);
    sub_1B715CC(&StringLiteral_8567/*"MAX_USER_COMMAND_CODE"*/, v28);
    sub_1B715CC(&StringLiteral_9697/*"OTHER_IMAGE_LIMIT_COUNT"*/, v29);
    sub_1B715CC(&StringLiteral_8483/*"MASHU_SVT_ID3"*/, v30);
    sub_1B715CC(&StringLiteral_5027/*"DISABLE_FRIENDSHIP_EXCEED"*/, v31);
    sub_1B715CC(&StringLiteral_12266/*"STORMPOD_HELP_IDS"*/, v32);
    sub_1B715CC(&StringLiteral_3005/*"BGM_FADE_OUT_TIME_BEFORE_BATTLE"*/, v33);
    sub_1B715CC(&StringLiteral_11016/*"REPRINT_LAST_WAR_RAID_EVENT_ID_LIST"*/, v34);
    sub_1B715CC(&StringLiteral_17226/*"bit_result_bond"*/, v35);
    sub_1B715CC(&StringLiteral_8556/*"MAX_MANA"*/, v36);
    sub_1B715CC(&StringLiteral_5538/*"EVENT_BOARD_GAME_DICE_BUTTON_POS"*/, v37);
    sub_1B715CC(&StringLiteral_1518/*"5047002:100:0"*/, v38);
    sub_1B715CC(&StringLiteral_5613/*"EVENT_ITEM_NOT_DISP_ITEM_GET_EFFECT"*/, v39);
    sub_1B715CC(&StringLiteral_8563/*"MAX_RECOMMEND_ADVICE_MESSAGE_NUM"*/, v40);
    sub_1B715CC(&StringLiteral_5712/*"EVENT_TOWER_FADEOUT_PLAY_TIME"*/, v41);
    sub_1B715CC(&StringLiteral_9220/*"NONE_DISPLAY_FREE_QUEST_MATERIAL"*/, v42);
    sub_1B715CC(&StringLiteral_1401/*"1053911:100:0"*/, v43);
    sub_1B715CC(&StringLiteral_1400/*"1053910:100:0"*/, v44);
    sub_1B715CC(&StringLiteral_7397/*"IS_WAR_BOARD_AI_FILTER_WASTE_ROUTE"*/, v45);
    sub_1B715CC(&StringLiteral_19988/*"https://view.fate-go.jp/"*/, v46);
    sub_1B715CC(&StringLiteral_7149/*"HYDE_SVT_ID"*/, v47);
    sub_1B715CC(&StringLiteral_9574/*"OBERON_CHOCO_SVT_ID"*/, v48);
    sub_1B715CC(&StringLiteral_6362/*"FIX_MAIN_SUPPORT_DECK_NUM"*/, v49);
    sub_1B715CC(&StringLiteral_8481/*"MASHU_SVT_ID1"*/, v50);
    sub_1B715CC(&StringLiteral_3675/*"COMBINE_SERVANT_SKILL_IDS"*/, v51);
    sub_1B715CC(&StringLiteral_1397/*"1053900:100:0"*/, v52);
    sub_1B715CC(&StringLiteral_9687/*"ORT_FIRST_QUEST_ID"*/, v53);
    sub_1B715CC(&StringLiteral_8580/*"MEMORY_DECK_LIMIT_BY_QUEST"*/, v54);
    sub_1B715CC(&StringLiteral_5541/*"EVENT_BOARD_GAME_MAP_ID_LIST"*/, v55);
    sub_1B715CC(&StringLiteral_8272/*"LOGIN_QUEST_RETURN_TERMINAL_DIALOG_MESSAGE"*/, v56);
    sub_1B715CC(&StringLiteral_9280/*"NPC_FRIEND_POINT"*/, v57);
    sub_1B715CC(&StringLiteral_3454/*"CLASS_BOARD_2D_CAMERA_DEFAULT_SIZE"*/, v58);
    sub_1B715CC(&StringLiteral_1516/*"5047000:100:0"*/, v59);
    sub_1B715CC(&StringLiteral_5026/*"DISABLE_BACK_MASK_TIME"*/, v60);
    sub_1B715CC(&StringLiteral_11378/*"SAME_CLASS_MULI_EXP"*/, v61);
    sub_1B715CC(&StringLiteral_8550/*"MAX_EVENT_ACTIVITY_POINT"*/, v62);
    sub_1B715CC(&StringLiteral_1486/*"3D_MAP_CAMERA_MOVE_EASING_TYPE"*/, v63);
    sub_1B715CC(&StringLiteral_9181/*"NEED_REBOOT_TIME"*/, v64);
    sub_1B715CC(&StringLiteral_9684/*"ORDEAL_CALL_CHAPTER_FOLDER_EVENT_UI_DISP_WAR_IDS"*/, v65);
    sub_1B715CC(&StringLiteral_6463/*"FREE_GACHA_RESET_AT"*/, v66);
    sub_1B715CC(&StringLiteral_8571/*"MAX_USER_SVT_EQUIP"*/, v67);
    sub_1B715CC(&StringLiteral_11411/*"SCENARIO_SPEED_HIGH"*/, v68);
    sub_1B715CC(&StringLiteral_6497/*"FRIEND_POINT"*/, v69);
    sub_1B715CC(&StringLiteral_1394/*"1053000:100:0"*/, v70);
    sub_1B715CC(&StringLiteral_17241/*"bit_result_servant"*/, v71);
    sub_1B715CC(&StringLiteral_5730/*"EXCLUSIVE_NPC_SERVANT_ID_START"*/, v72);
    sub_1B715CC(&StringLiteral_8557/*"MAX_NEAR_PRESENT_OFFSET_NUM"*/, v73);
    sub_1B715CC(&StringLiteral_11004/*"RECOVERY_FATIGUE_DELAYED_CHANGE_BG_EVENTS"*/, v74);
    sub_1B715CC(&StringLiteral_10370/*"POWERUP_QUEST_WAR_ID"*/, v75);
    sub_1B715CC(&StringLiteral_1517/*"5047001:100:0"*/, v76);
    sub_1B715CC(&StringLiteral_12181/*"STAND_FIGURE_R_OFFSET_EFFECT_IMAGES"*/, v77);
    sub_1B715CC(&StringLiteral_3699/*"COMMAND_CARD_PRM_UP_MAX"*/, v78);
    sub_1B715CC(&StringLiteral_12184/*"STARTING_MEMBER_FRIENDSHIP_RATE"*/, v79);
    sub_1B715CC(&StringLiteral_9693/*"ORT_THIRD_FORM_ID"*/, v80);
    sub_1B715CC(&StringLiteral_12182/*"STAND_FIGURE_R_OFFSET_EFFECT_NAMES"*/, v81);
    sub_1B715CC(&StringLiteral_7393/*"IS_MISSION_NAVI_AUTO_CLASSIFY"*/, v82);
    sub_1B715CC(&StringLiteral_1399/*"1053902:100:0"*/, v83);
    sub_1B715CC(&StringLiteral_8484/*"MASHU_TD_GRADE_UP_QUEST_ID"*/, v84);
    sub_1B715CC(&StringLiteral_8566/*"MAX_STONE"*/, v85);
    sub_1B715CC(&StringLiteral_8552/*"MAX_FRIENDPOINT"*/, v86);
    sub_1B715CC(&StringLiteral_9262/*"NOT_UI_CHANGE_MAP_IDS"*/, v87);
    sub_1B715CC(&StringLiteral_6343/*"FES_WAR_ID"*/, v88);
    sub_1B715CC(&StringLiteral_9691/*"ORT_LATE_QUEST_ID"*/, v89);
    sub_1B715CC(&StringLiteral_17242/*"bit_result_skill"*/, v90);
    sub_1B715CC(&StringLiteral_9688/*"ORT_LATE_PHASE_BREAK"*/, v91);
    sub_1B715CC(&StringLiteral_17227/*"bit_result_command_card_exceed"*/, v92);
    sub_1B715CC(&StringLiteral_3459/*"CLASS_BOARD_CAMERA_SELECT_MOVE_MAX_DISTANCE"*/, v93);
    sub_1B715CC(&StringLiteral_3460/*"CLASS_BOARD_CAMERA_SELECT_SEC_MAX"*/, v94);
    sub_1B715CC(&StringLiteral_8570/*"MAX_USER_SVT"*/, v95);
    sub_1B715CC(&StringLiteral_9585/*"ONE_ACT"*/, v96);
    sub_1B715CC(&StringLiteral_6361/*"FIX_EVENT_SUPPORT_DECK_NUM"*/, v97);
    sub_1B715CC(&StringLiteral_15434/*"WAR_BOARD_EVAL_FACTORS_AFFECT_RATIO"*/, v98);
    sub_1B715CC(&StringLiteral_6465/*"FRIENDPOINT_BOOST_ITEM_EFFECT_ID"*/, v99);
    sub_1B715CC(&StringLiteral_17231/*"bit_result_friendship_exceed"*/, v100);
    sub_1B715CC(&StringLiteral_8485/*"MASHU_TD_GRADE_UP_QUEST_PHASE"*/, v101);
    sub_1B715CC(&StringLiteral_11022/*"REQUEST_TOP_HOME_EXPIRATION_DATE_SEC_UPDATE_EVENT_MAP"*/, v102);
    sub_1B715CC(&StringLiteral_3458/*"CLASS_BOARD_CAMERA_SELECT_EASING_TYPE"*/, v103);
    sub_1B715CC(&StringLiteral_7390/*"IS_ENABLE_OLD_BLOCK_SHORTEST_ROUTE"*/, v104);
    sub_1B715CC(&StringLiteral_8460/*"MAIN_CHAPTERS_WITH_EVENT_ID"*/, v105);
    sub_1B715CC(&StringLiteral_1398/*"1053901:100:0"*/, v106);
    sub_1B715CC(&StringLiteral_17228/*"bit_result_extraskill"*/, v107);
    sub_1B715CC(&StringLiteral_1519/*"5047900:100:0"*/, v108);
    sub_1B715CC(&StringLiteral_9587/*"ONE_RP"*/, v109);
    sub_1B715CC(&StringLiteral_8573/*"MAX_USER_SVT_STORAGE"*/, v110);
    sub_1B715CC(&StringLiteral_9690/*"ORT_LATE_PHASE_SECOND_FORM"*/, v111);
    sub_1B715CC(&StringLiteral_3836/*"CONSUME_STORMPOD_SPOT_ID"*/, v112);
    sub_1B715CC(&StringLiteral_2992/*"BEFORE_CHANGE_FREE_DRAW_NUM"*/, v113);
    sub_1B715CC(&StringLiteral_7396/*"IS_WAR_BOARD_AI_FILTER_NOT_ACTION"*/, v114);
    sub_1B715CC(&StringLiteral_3378/*"CAMPAIGN_RESET_AT"*/, v115);
    sub_1B715CC(&StringLiteral_10903/*"RAID_DEFEATED_EFFECT_TIME"*/, v116);
    sub_1B715CC(&StringLiteral_10976/*"RECOMMEND_SUPPORT_FRIEND_POINT"*/, v117);
    sub_1B715CC(&StringLiteral_6384/*"FOLLOWER_REFRESH_RESET_TIME"*/, v118);
    sub_1B715CC(&StringLiteral_3496/*"CLASS_BOARD_RELEASE_QUEST_ID"*/, v119);
    sub_1B715CC(&StringLiteral_6417/*"FOLLOW_NUM"*/, v120);
    sub_1B715CC(&StringLiteral_10349/*"PLAYABLE_BEAST_CLASS_IDS"*/, v121);
    sub_1B715CC(&StringLiteral_3374/*"CAMERA_2D_RESET_DURATION"*/, v122);
    sub_1B715CC(&StringLiteral_12231/*"STONE_FRAGMENT_EXCHANGE_NOTICE_MAX"*/, v123);
    sub_1B715CC(&StringLiteral_7399/*"ITEM_ID_QP"*/, v124);
    sub_1B715CC(&StringLiteral_12432/*"SWIMSUIT_MELT_SVT_ID"*/, v125);
    sub_1B715CC(&StringLiteral_8564/*"MAX_RECOMMEND_SUPPORT_DECK_NUM"*/, v126);
    sub_1B715CC(&StringLiteral_7094/*"HEROINE_LIMIT_COUNT_ORTINAX_REFURBISHED"*/, v127);
    sub_1B715CC(&StringLiteral_17238/*"bit_result_noble"*/, v128);
    sub_1B715CC(&StringLiteral_5495/*"EQUIP_GET_EFFECT_ID"*/, v129);
    sub_1B715CC(&StringLiteral_9249/*"NOT_FRIEND_POINT"*/, v130);
    sub_1B715CC(&StringLiteral_5543/*"EVENT_BOARD_GAME_NEXT_BOARD_QUEST_ID"*/, v131);
    sub_1B715CC(&StringLiteral_9689/*"ORT_LATE_PHASE_DEAD"*/, v132);
    sub_1B715CC(&StringLiteral_8548/*"MAX_BLACK_LIST_NUM"*/, v133);
    sub_1B715CC(&StringLiteral_8560/*"MAX_PRESENT_RECEIVE_NUM"*/, v134);
    sub_1B715CC(&StringLiteral_15184/*"VALENTINE_RELEASE_AT"*/, v135);
    sub_1B715CC(&StringLiteral_8510/*"MASTER_MISSION_SVT_ID1"*/, v136);
    sub_1B715CC(&StringLiteral_8280/*"LOSTBELT6_CLEAR_QUEST_ID"*/, v137);
    sub_1B715CC(&StringLiteral_5544/*"EVENT_BOARD_GAME_NEXT_ROUND_QUEST_ID"*/, v138);
    sub_1B715CC(&StringLiteral_11021/*"REQUEST_RAID_UPDATE_EVENT_MAP"*/, v139);
    sub_1B715CC(&StringLiteral_12223/*"STATUS_UP_ADJUST_ATK"*/, v140);
    sub_1B715CC(&StringLiteral_2057/*"AFTRE_CHANGE_FREE_DRAW_NUM"*/, v141);
    sub_1B715CC(&StringLiteral_1488/*"3D_MAP_CAMERA_MOVE_TIME_CONSTANT"*/, v142);
    sub_1B715CC(&StringLiteral_6414/*"FOLLOW_FRIEND_POINT"*/, v143);
    sub_1B715CC(&StringLiteral_7395/*"IS_WAR_BOARD_AI_CALC_EVAL_SUM"*/, v144);
    sub_1B715CC(&StringLiteral_8554/*"MAX_FRIEND_HISTORY_NUM"*/, v145);
    sub_1B715CC(&StringLiteral_11413/*"SCENARIO_SPEED_STEP"*/, v146);
    sub_1B715CC(&StringLiteral_5711/*"EVENT_TOWER_FADEOUT_DELAY_TIME"*/, v147);
    sub_1B715CC(&StringLiteral_8271/*"LOGIN_DAY"*/, v148);
    sub_1B715CC(&StringLiteral_5441/*"ENABLE_SERIAL_CODE"*/, v149);
    sub_1B715CC(&StringLiteral_8523/*"MATERIAL_MAIN_INTERLUDE_WAR_ID"*/, v150);
    sub_1B715CC(&StringLiteral_5771/*"EXTRA2_SORT_ORDER_CLASS_IDS"*/, v151);
    sub_1B715CC(&StringLiteral_6845/*"GACHA_DAILY_MAX_DRAW_NUM_RESET_AT"*/, v152);
    sub_1B715CC(&StringLiteral_13373/*"TREASUREDEVICE_ID_MASHU3"*/, v153);
    sub_1B715CC(&StringLiteral_8273/*"LOGIN_RESET_AT"*/, v154);
    sub_1B715CC(&StringLiteral_1520/*"5047901:100:0"*/, v155);
    sub_1B715CC(&StringLiteral_1969/*"ACCOUNTING_INITIALIZE_TIMEOUT"*/, v156);
    sub_1B715CC(&StringLiteral_1523/*"5047911:100:0"*/, v157);
    sub_1B715CC(&StringLiteral_7391/*"IS_EVENT_POINT_MENU"*/, v158);
    sub_1B715CC(&StringLiteral_10394/*"PRESENT_BOX_FILTER_SVT_EQUIP_MATERIAL"*/, v159);
    sub_1B715CC(&StringLiteral_10901/*"RACE_REWARD_RANK_MAX"*/, v160);
    sub_1B715CC(&StringLiteral_9261/*"NOT_SEND_TRACK_EVENT_AT_WAR_IDS"*/, v161);
    sub_1B715CC(&StringLiteral_8482/*"MASHU_SVT_ID2"*/, v162);
    sub_1B715CC(&StringLiteral_11412/*"SCENARIO_SPEED_LOW"*/, v163);
    sub_1B715CC(&StringLiteral_9685/*"ORDEAL_CALL_CLEAR_BGM_NAME"*/, v164);
    sub_1B715CC(&StringLiteral_8562/*"MAX_RARE_PRI"*/, v165);
    sub_1B715CC(&StringLiteral_5770/*"EXTRA1_SORT_ORDER_CLASS_IDS"*/, v166);
    sub_1B715CC(&StringLiteral_3088/*"BP_EXPRESSION"*/, v167);
    sub_1B715CC(&StringLiteral_8565/*"MAX_RP"*/, v168);
    sub_1B715CC(&StringLiteral_12224/*"STATUS_UP_ADJUST_HP"*/, v169);
    sub_1B715CC(&StringLiteral_9586/*"ONE_COMMAND_SPELL"*/, v170);
    sub_1B715CC(&StringLiteral_14803/*"USE_TERMS_LATEST_VERSION"*/, v171);
    sub_1B715CC(&StringLiteral_3579/*"CLOSE_SECRET_TREASURE_DEVICE_QUEST_CLEAR"*/, v172);
    sub_1B715CC(&StringLiteral_10430/*"PRESENT_VALID_TIME"*/, v173);
    sub_1B715CC(&StringLiteral_8497/*"MASTER_MISSION_ALERT_TIME"*/, v174);
    sub_1B715CC(&StringLiteral_3018/*"BIRTHDAY_BEFORE_VALENTINE_SVT_ID"*/, v175);
    sub_1B715CC(&StringLiteral_8551/*"MAX_EVENT_POINT"*/, v176);
    sub_1B715CC(&StringLiteral_8259/*"LOCATION_REWARD_DLG_COLUMN"*/, v177);
    sub_1B715CC(&StringLiteral_8549/*"MAX_COMMAND_SPELL"*/, v178);
    sub_1B715CC(&StringLiteral_8462/*"MAIN_INTERLUDE_WAR_ID"*/, v179);
    sub_1B715CC(&StringLiteral_7366/*"IOS_EXAMINATION_NEWS_URL"*/, v180);
    sub_1B715CC(&StringLiteral_1395/*"1053001:100:0"*/, v181);
    sub_1B715CC(&StringLiteral_12351/*"SUPPORT_DECK_MAX"*/, v182);
    sub_1B715CC(&StringLiteral_9692/*"ORT_SECONDE_FORM_ID"*/, v183);
    sub_1B715CC(&StringLiteral_1487/*"3D_MAP_CAMERA_MOVE_TIME_COEFFICIENT"*/, v184);
    sub_1B715CC(&StringLiteral_7317/*"IGNORE_FORM_CHANGE_SVT_ID"*/, v185);
    sub_1B715CC(&StringLiteral_8569/*"MAX_USER_LV"*/, v186);
    sub_1B715CC(&StringLiteral_7389/*"IS_ENABLE_FADE_RERUN_SKIPPED"*/, v187);
    sub_1B715CC(&StringLiteral_14802/*"USE_TERMS_AGREEMENT_REQUIERD_APP_VERSION"*/, v188);
    sub_1B715CC(&StringLiteral_8553/*"MAX_FRIENDPOINT_BOOST_ITEM_USE"*/, v189);
    sub_1B715CC(&StringLiteral_8572/*"MAX_USER_SVT_EQUIP_STORAGE"*/, v190);
    sub_1B715CC(&StringLiteral_1522/*"5047910:100:0"*/, v191);
    sub_1B715CC(&StringLiteral_8561/*"MAX_QP"*/, v192);
    sub_1B715CC(&StringLiteral_7392/*"IS_IOS_EXAMINATION"*/, v193);
    sub_1B715CC(&StringLiteral_9256/*"NOT_REQUIRED_WAR_IDS"*/, v194);
    sub_1B715CC(&StringLiteral_3461/*"CLASS_BOARD_CAMERA_SELECT_SEC_MIN"*/, v195);
    sub_1B715CC(&StringLiteral_6462/*"FREE_DRAW_NUM_CHANGE_AT"*/, v196);
    sub_1B715CC(&StringLiteral_5581/*"EVENT_DAILY_POINT_RESET_AT"*/, v197);
    sub_1B715CC(&StringLiteral_1524/*"5047912:100:0"*/, v198);
    sub_1B715CC(&StringLiteral_1396/*"1053002:100:0"*/, v199);
    sub_1B715CC(&StringLiteral_4989/*"DECK_MAX"*/, v200);
    sub_1B715CC(&StringLiteral_10441/*"PROLOGUE_QUEST_ID"*/, v201);
    sub_1B715CC(&StringLiteral_3580/*"CLOSE_SECRET_TREASURE_DEVICE_SVT_GET"*/, v202);
    sub_1B715CC(&StringLiteral_12268/*"STORY_WAR_ID"*/, v203);
    sub_1B715CC(&StringLiteral_8559/*"MAX_PRESENT_BOX_NUM"*/, v204);
    sub_1B715CC(&StringLiteral_11410/*"SCENARIO_SPEED_DEFAULT"*/, v205);
    sub_1B715CC(&StringLiteral_13312/*"TITLE_FLOW_OLD"*/, v206);
    sub_1B715CC(&StringLiteral_1489/*"3D_MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE"*/, v207);
    sub_1B715CC(&StringLiteral_1467/*"20220731_BOOST_RATE_1"*/, v208);
    sub_1B715CC(&StringLiteral_8201/*"LEGACY_ASPECT_MOVIES"*/, v209);
    sub_1B715CC(&StringLiteral_3700/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, v210);
    sub_1B715CC(&StringLiteral_1521/*"5047902:100:0"*/, v211);
    sub_1B715CC(&StringLiteral_5766/*"EXPIRATION_DATE"*/, v212);
    sub_1B715CC(&StringLiteral_9686/*"ORDEAL_CALL_WAR_ID"*/, v213);
    sub_1B715CC(&StringLiteral_7095/*"HEROINE_TREASURE_DEVICE_RANKUP_EFFECTS"*/, v214);
    byte_4A1F0E6 = 1;
  }
  result = 0.0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_165;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ConstantMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_165;
  v218 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ConstantLongMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_165;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !MasterData_object )
    goto LABEL_165;
  v219 = (ConstantStrMaster_o *)Instance;
  Value_38846256 = ConstantMaster__GetValue_38846256(
                     (ConstantMaster_o *)MasterData_object,
                     (System_String_o *)StringLiteral_1467/*"20220731_BOOST_RATE_1"*/,
                     200,
                     0LL);
  v221 = BalanceConfig_TypeInfo;
  v222 = Value_38846256;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v221 = BalanceConfig_TypeInfo;
  }
  v221->static_fields->CriticalRateToAddByQuickFirstBonus = v222;
  BalanceConfig_TypeInfo->static_fields->QpMax = ConstantMaster__GetValue(
                                                   (ConstantMaster_o *)MasterData_object,
                                                   (System_String_o *)StringLiteral_8561/*"MAX_QP"*/,
                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ManaMax = ConstantMaster__GetValue(
                                                     (ConstantMaster_o *)MasterData_object,
                                                     (System_String_o *)StringLiteral_8556/*"MAX_MANA"*/,
                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->RarePriMax = ConstantMaster__GetValue(
                                                        (ConstantMaster_o *)MasterData_object,
                                                        (System_String_o *)StringLiteral_8562/*"MAX_RARE_PRI"*/,
                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->StoneMax = ConstantMaster__GetValue(
                                                      (ConstantMaster_o *)MasterData_object,
                                                      (System_String_o *)StringLiteral_8566/*"MAX_STONE"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->FriendPointMax = ConstantMaster__GetValue(
                                                            (ConstantMaster_o *)MasterData_object,
                                                            (System_String_o *)StringLiteral_8552/*"MAX_FRIENDPOINT"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->UserLevelMax = ConstantMaster__GetValue(
                                                          (ConstantMaster_o *)MasterData_object,
                                                          (System_String_o *)StringLiteral_8569/*"MAX_USER_LV"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->UserItemMax = ConstantMaster__GetValue(
                                                         (ConstantMaster_o *)MasterData_object,
                                                         (System_String_o *)StringLiteral_8568/*"MAX_USER_ITEM"*/,
                                                         0LL);
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)MasterData_object,
                               (System_String_o *)StringLiteral_8568/*"MAX_USER_ITEM"*/,
                               0LL);
  static_fields = BalanceConfig_TypeInfo->static_fields;
  static_fields->UserEventItemMax = (int)Instance;
  if ( !v218 )
    goto LABEL_165;
  Value_38845700 = ConstantLongMaster__GetValue_38845700(
                     (ConstantLongMaster_o *)v218,
                     (System_String_o *)StringLiteral_8551/*"MAX_EVENT_POINT"*/,
                     static_fields->UserPointEventMax,
                     0LL);
  v225 = BalanceConfig_TypeInfo->static_fields;
  v225->UserPointEventMax = Value_38845700;
  BalanceConfig_TypeInfo->static_fields->UserEventActivityPointMax = ConstantLongMaster__GetValue_38845700(
                                                                       (ConstantLongMaster_o *)v218,
                                                                       (System_String_o *)StringLiteral_8550/*"MAX_EVENT_ACTIVITY_POINT"*/,
                                                                       v225->UserEventActivityPointMax,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxMax = ConstantMaster__GetValue(
                                                           (ConstantMaster_o *)MasterData_object,
                                                           (System_String_o *)StringLiteral_8559/*"MAX_PRESENT_BOX_NUM"*/,
                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxCheckMax = ConstantMaster__GetValue(
                                                                (ConstantMaster_o *)MasterData_object,
                                                                (System_String_o *)StringLiteral_8560/*"MAX_PRESENT_RECEIVE_NUM"*/,
                                                                0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxValidTime = ConstantMaster__GetValue(
                                                                 (ConstantMaster_o *)MasterData_object,
                                                                 (System_String_o *)StringLiteral_10430/*"PRESENT_VALID_TIME"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->PresentBoxNearMaxOffset = ConstantMaster__GetValue(
                                                                     (ConstantMaster_o *)MasterData_object,
                                                                     (System_String_o *)StringLiteral_8557/*"MAX_NEAR_PRESENT_OFFSET_NUM"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->RecommendSupportMemberMax = ConstantMaster__GetValue_38846256(
                                                                       (ConstantMaster_o *)MasterData_object,
                                                                       (System_String_o *)StringLiteral_8564/*"MAX_RECOMMEND_SUPPORT_DECK_NUM"*/,
                                                                       3,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->RecommendSupportAdviceMessageMax = ConstantMaster__GetValue_38846256(
                                                                              (ConstantMaster_o *)MasterData_object,
                                                                              (System_String_o *)StringLiteral_8563/*"MAX_RECOMMEND_ADVICE_MESSAGE_NUM"*/,
                                                                              3,
                                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->ServantFrameMax = ConstantMaster__GetValue(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_8570/*"MAX_USER_SVT"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantEquipFrameMax = ConstantMaster__GetValue(
                                                                  (ConstantMaster_o *)MasterData_object,
                                                                  (System_String_o *)StringLiteral_8571/*"MAX_USER_SVT_EQUIP"*/,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCodeFrameMax = ConstantMaster__GetValue(
                                                                 (ConstantMaster_o *)MasterData_object,
                                                                 (System_String_o *)StringLiteral_8567/*"MAX_USER_COMMAND_CODE"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->DeckMax = ConstantMaster__GetValue(
                                                     (ConstantMaster_o *)MasterData_object,
                                                     (System_String_o *)StringLiteral_4989/*"DECK_MAX"*/,
                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->SupportDeckMax = ConstantMaster__GetValue(
                                                            (ConstantMaster_o *)MasterData_object,
                                                            (System_String_o *)StringLiteral_12351/*"SUPPORT_DECK_MAX"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum = ConstantMaster__GetValue(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_6362/*"FIX_MAIN_SUPPORT_DECK_NUM"*/,
                                                                   0LL);
  Value = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_6361/*"FIX_EVENT_SUPPORT_DECK_NUM"*/, 0LL);
  v227 = BalanceConfig_TypeInfo->static_fields;
  SupportDeckMax = v227->SupportDeckMax;
  SupportDeckMemberMax = v227->SupportDeckMemberMax;
  v227->FixEventSupportDeckNum = Value;
  v227->SupportMemberMax = SupportDeckMemberMax * SupportDeckMax;
  BalanceConfig_TypeInfo->static_fields->UserServantStorageMax = ConstantMaster__GetValue(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_8573/*"MAX_USER_SVT_STORAGE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->UserServantEquipStorageMax = ConstantMaster__GetValue(
                                                                        (ConstantMaster_o *)MasterData_object,
                                                                        (System_String_o *)StringLiteral_8572/*"MAX_USER_SVT_EQUIP_STORAGE"*/,
                                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameActRecoverCost = ConstantMaster__GetValue(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_9585/*"ONE_ACT"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameRpRecoverCost = ConstantMaster__GetValue(
                                                                  (ConstantMaster_o *)MasterData_object,
                                                                  (System_String_o *)StringLiteral_9587/*"ONE_RP"*/,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->UerGameRpMax = ConstantMaster__GetValue(
                                                          (ConstantMaster_o *)MasterData_object,
                                                          (System_String_o *)StringLiteral_8565/*"MAX_RP"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointFriend = ConstantMaster__GetValue(
                                                                 (ConstantMaster_o *)MasterData_object,
                                                                 (System_String_o *)StringLiteral_6497/*"FRIEND_POINT"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointNotFriend = ConstantMaster__GetValue(
                                                                    (ConstantMaster_o *)MasterData_object,
                                                                    (System_String_o *)StringLiteral_9249/*"NOT_FRIEND_POINT"*/,
                                                                    0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointNpc = ConstantMaster__GetValue(
                                                              (ConstantMaster_o *)MasterData_object,
                                                              (System_String_o *)StringLiteral_9280/*"NPC_FRIEND_POINT"*/,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerPointRecommend = ConstantMaster__GetValue(
                                                                    (ConstantMaster_o *)MasterData_object,
                                                                    (System_String_o *)StringLiteral_10976/*"RECOMMEND_SUPPORT_FRIEND_POINT"*/,
                                                                    0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime1 = ConstantMaster__GetValue(
                                                                       (ConstantMaster_o *)MasterData_object,
                                                                       (System_String_o *)StringLiteral_8273/*"LOGIN_RESET_AT"*/,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2 = ConstantMaster__GetValue(
                                                                       (ConstantMaster_o *)MasterData_object,
                                                                       (System_String_o *)StringLiteral_3378/*"CAMPAIGN_RESET_AT"*/,
                                                                       0LL);
  BalanceConfig_TypeInfo->static_fields->DailyFreeGachaResetTime = ConstantMaster__GetValue(
                                                                     (ConstantMaster_o *)MasterData_object,
                                                                     (System_String_o *)StringLiteral_6463/*"FREE_GACHA_RESET_AT"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->RequestTopLoginDay = ConstantMaster__GetValue(
                                                                (ConstantMaster_o *)MasterData_object,
                                                                (System_String_o *)StringLiteral_8271/*"LOGIN_DAY"*/,
                                                                0LL);
  v230 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_9181/*"NEED_REBOOT_TIME"*/, 0LL);
  BalanceConfig_TypeInfo->static_fields->ServerTimeOverLimit = v230;
  v231 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v231 = ManagerConfig_TypeInfo;
  }
  SERVER_TIME_OVER_LIMIT = v231->static_fields->SERVER_TIME_OVER_LIMIT;
  if ( SERVER_TIME_OVER_LIMIT > v230 )
  {
    if ( !v231->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v231);
      SERVER_TIME_OVER_LIMIT = ManagerConfig_TypeInfo->static_fields->SERVER_TIME_OVER_LIMIT;
    }
    v233 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v233 = BalanceConfig_TypeInfo;
    }
    v233->static_fields->ServerTimeOverLimit = SERVER_TIME_OVER_LIMIT;
  }
  v234 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_11022/*"REQUEST_TOP_HOME_EXPIRATION_DATE_SEC_UPDATE_EVENT_MAP"*/, 0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v235 = System_Math__Max_62324152(1, v234, 0LL);
  v236 = BalanceConfig_TypeInfo;
  v237 = v235;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v236 = BalanceConfig_TypeInfo;
  }
  v236->static_fields->RequestTopHomeExpirationDateSecUpdateEventMap = v237;
  v238 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_11021/*"REQUEST_RAID_UPDATE_EVENT_MAP"*/, 0LL);
  BalanceConfig_TypeInfo->static_fields->RequestRaidUpdateEventMap = System_Math__Max_62324152(1, v238, 0LL);
  BalanceConfig_TypeInfo->static_fields->RaidDefeatedEffectTime = ConstantMaster__GetValue(
                                                                    (ConstantMaster_o *)MasterData_object,
                                                                    (System_String_o *)StringLiteral_10903/*"RAID_DEFEATED_EFFECT_TIME"*/,
                                                                    0LL);
  BalanceConfig_TypeInfo->static_fields->CommandSpellMax = ConstantMaster__GetValue(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_8549/*"MAX_COMMAND_SPELL"*/,
                                                             0LL);
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)MasterData_object,
                               (System_String_o *)StringLiteral_9586/*"ONE_COMMAND_SPELL"*/,
                               0LL);
  BalanceConfig_TypeInfo->static_fields->CommandSpellRecoverCost = (int)Instance;
  if ( !v219 )
    goto LABEL_165;
  v239 = ConstantStrMaster__GetValue(v219, (System_String_o *)StringLiteral_14802/*"USE_TERMS_AGREEMENT_REQUIERD_APP_VERSION"*/, 0LL);
  p_UseTermsAgreementRequiredAppVersion = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->UseTermsAgreementRequiredAppVersion;
  p_UseTermsAgreementRequiredAppVersion->klass = (ServantStatusBattleListViewItem_c *)v239;
  sub_1B71570(p_UseTermsAgreementRequiredAppVersion, (int32_t)v239, v241, v242);
  v243 = ConstantStrMaster__GetValue(v219, (System_String_o *)StringLiteral_14803/*"USE_TERMS_LATEST_VERSION"*/, 0LL);
  p_UseTermsLatestVersion = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->UseTermsLatestVersion;
  p_UseTermsLatestVersion->klass = (ServantStatusBattleListViewItem_c *)v243;
  sub_1B71570(p_UseTermsLatestVersion, (int32_t)v243, v245, v246);
  v247 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_7392/*"IS_IOS_EXAMINATION"*/, 0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsIOS_Examination = v247;
  BalanceConfig_TypeInfo->static_fields->SerialCodeMenuDispFlg = ConstantMaster__GetValue(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_5441/*"ENABLE_SERIAL_CODE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk = ConstantMaster__GetValue(
                                                               (ConstantMaster_o *)MasterData_object,
                                                               (System_String_o *)StringLiteral_12223/*"STATUS_UP_ADJUST_ATK"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp = ConstantMaster__GetValue(
                                                              (ConstantMaster_o *)MasterData_object,
                                                              (System_String_o *)StringLiteral_12224/*"STATUS_UP_ADJUST_HP"*/,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->SameClassMultiExp = ConstantMaster__getRateValue(
                                                               (System_String_o *)StringLiteral_11378/*"SAME_CLASS_MULI_EXP"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->SameClassExp = ConstantMaster__GetValue(
                                                          (ConstantMaster_o *)MasterData_object,
                                                          (System_String_o *)StringLiteral_11378/*"SAME_CLASS_MULI_EXP"*/,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdJekyll = ConstantMaster__GetValue(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_8094/*"JEKYLL_SVT_ID"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdHyde = ConstantMaster__GetValue(
                                                           (ConstantMaster_o *)MasterData_object,
                                                           (System_String_o *)StringLiteral_7149/*"HYDE_SVT_ID"*/,
                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdSwimsuitMelt = ConstantMaster__GetValue(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_12432/*"SWIMSUIT_MELT_SVT_ID"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu1 = ConstantMaster__GetValue(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_8481/*"MASHU_SVT_ID1"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu2 = ConstantMaster__GetValue(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_8482/*"MASHU_SVT_ID2"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMashu3 = ConstantMaster__GetValue_38846256(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_8483/*"MASHU_SVT_ID3"*/,
                                                             800102,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdMission1 = ConstantMaster__GetValue(
                                                               (ConstantMaster_o *)MasterData_object,
                                                               (System_String_o *)StringLiteral_8510/*"MASTER_MISSION_SVT_ID1"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->TreasureDeviceIdMashu3 = ConstantMaster__GetValue(
                                                                    (ConstantMaster_o *)MasterData_object,
                                                                    (System_String_o *)StringLiteral_13373/*"TREASUREDEVICE_ID_MASHU3"*/,
                                                                    0LL);
  Instance = (Il2CppObject *)sub_1B71674(int___TypeInfo, 2LL);
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
                 v219,
                 (System_String_o *)StringLiteral_3675/*"COMBINE_SERVANT_SKILL_IDS"*/,
                 (System_Int32_array *)Instance,
                 0LL);
  p_CombineServantSkillIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->CombineServantSkillIds;
  p_CombineServantSkillIds->klass = (ServantStatusBattleListViewItem_c *)ValueArray;
  sub_1B71570(p_CombineServantSkillIds, (int32_t)ValueArray, v251, v252);
  BalanceConfig_TypeInfo->static_fields->MashuTdGradeUpQuestId = ConstantMaster__GetValue_38846256(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_8484/*"MASHU_TD_GRADE_UP_QUEST_ID"*/,
                                                                   4000100,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->MashuTdGradeUpQuestPhase = ConstantMaster__GetValue_38846256(
                                                                      (ConstantMaster_o *)MasterData_object,
                                                                      (System_String_o *)StringLiteral_8485/*"MASHU_TD_GRADE_UP_QUEST_PHASE"*/,
                                                                      3,
                                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->ServantIdOberonChoco = ConstantMaster__GetValue_38846256(
                                                                  (ConstantMaster_o *)MasterData_object,
                                                                  (System_String_o *)StringLiteral_9574/*"OBERON_CHOCO_SVT_ID"*/,
                                                                  9808130,
                                                                  0LL);
  BalanceConfig_TypeInfo->static_fields->Lostbelt6ClearQuestId = ConstantMaster__GetValue_38846256(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_8280/*"LOSTBELT6_CLEAR_QUEST_ID"*/,
                                                                   3001009,
                                                                   0LL);
  v253 = ConstantStrMaster__GetValue(v219, (System_String_o *)StringLiteral_3018/*"BIRTHDAY_BEFORE_VALENTINE_SVT_ID"*/, 0LL);
  v254 = BasicHelper__Convert2IntArray(v253, 0x2Cu, 0LL);
  p_ServantIdsBirthdayBeforeValentine = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->ServantIdsBirthdayBeforeValentine;
  p_ServantIdsBirthdayBeforeValentine->klass = (ServantStatusBattleListViewItem_c *)v254;
  sub_1B71570(p_ServantIdsBirthdayBeforeValentine, (int32_t)v254, v256, v257);
  v258 = ConstantStrMaster__GetValue(v219, (System_String_o *)StringLiteral_7317/*"IGNORE_FORM_CHANGE_SVT_ID"*/, 0LL);
  if ( v258 )
  {
    v259 = BasicHelper__Convert2IntArray(v258, 0x2Cu, 0LL);
    v262 = BalanceConfig_TypeInfo;
    v263 = (ServantStatusBattleListViewItem_c *)v259;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v262 = BalanceConfig_TypeInfo;
    }
    p_ServantIdsIgnoreFormChange = (ServantStatusBattleListViewItem_o *)&v262->static_fields->ServantIdsIgnoreFormChange;
    p_ServantIdsIgnoreFormChange->klass = v263;
    sub_1B71570(p_ServantIdsIgnoreFormChange, (int32_t)v263, v260, v261);
  }
  v265 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_15184/*"VALENTINE_RELEASE_AT"*/, 0LL);
  v266 = BalanceConfig_TypeInfo;
  v267 = v265;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v266 = BalanceConfig_TypeInfo;
  }
  v266->static_fields->VtReleaseAt = v267;
  BalanceConfig_TypeInfo->static_fields->BefFreeDrawNum = ConstantMaster__GetValue(
                                                            (ConstantMaster_o *)MasterData_object,
                                                            (System_String_o *)StringLiteral_2992/*"BEFORE_CHANGE_FREE_DRAW_NUM"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->AftFreeDrawNum = ConstantMaster__GetValue(
                                                            (ConstantMaster_o *)MasterData_object,
                                                            (System_String_o *)StringLiteral_2057/*"AFTRE_CHANGE_FREE_DRAW_NUM"*/,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->DrawNumChangeTime = ConstantMaster__GetValue(
                                                               (ConstantMaster_o *)MasterData_object,
                                                               (System_String_o *)StringLiteral_6462/*"FREE_DRAW_NUM_CHANGE_AT"*/,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->FollowerRefreshRestTime = ConstantMaster__GetValue(
                                                                     (ConstantMaster_o *)MasterData_object,
                                                                     (System_String_o *)StringLiteral_6384/*"FOLLOWER_REFRESH_RESET_TIME"*/,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->FesWarId = ConstantMaster__GetValue(
                                                      (ConstantMaster_o *)MasterData_object,
                                                      (System_String_o *)StringLiteral_6343/*"FES_WAR_ID"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->NoneExpireTime = ConstantMaster__GetValue(
                                                            (ConstantMaster_o *)MasterData_object,
                                                            (System_String_o *)StringLiteral_5766/*"EXPIRATION_DATE"*/,
                                                            0LL);
  v268 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_3088/*"BP_EXPRESSION"*/, 0LL);
  if ( v268 >= 1 )
    v269 = 1;
  else
    v269 = v268;
  BalanceConfig_TypeInfo->static_fields->BpExpresssionType = v269 & ~(v269 >> 31);
  BalanceConfig_TypeInfo->static_fields->MaxFriendHistoryNum = ConstantMaster__GetValue(
                                                                 (ConstantMaster_o *)MasterData_object,
                                                                 (System_String_o *)StringLiteral_8554/*"MAX_FRIEND_HISTORY_NUM"*/,
                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->MaxBlackListNum = ConstantMaster__GetValue(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_8548/*"MAX_BLACK_LIST_NUM"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->raceRewardRankMax = ConstantMaster__GetValue(
                                                               (ConstantMaster_o *)MasterData_object,
                                                               (System_String_o *)StringLiteral_10901/*"RACE_REWARD_RANK_MAX"*/,
                                                               0LL);
  v270 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_8497/*"MASTER_MISSION_ALERT_TIME"*/, 0LL);
  v271 = BalanceConfig_TypeInfo->static_fields;
  v271->MstMissionAlertTime = v270;
  BalanceConfig_TypeInfo->static_fields->LocationRewardDlgColumn = ConstantMaster__GetValue_38846256(
                                                                     (ConstantMaster_o *)MasterData_object,
                                                                     (System_String_o *)StringLiteral_8259/*"LOCATION_REWARD_DLG_COLUMN"*/,
                                                                     v271->LocationRewardDlgColumn,
                                                                     0LL);
  BalanceConfig_TypeInfo->static_fields->CloseSecretTreasureDeviceQuestClear = ConstantMaster__GetValue(
                                                                                 (ConstantMaster_o *)MasterData_object,
                                                                                 (System_String_o *)StringLiteral_3579/*"CLOSE_SECRET_TREASURE_DEVICE_QUEST_CLEAR"*/,
                                                                                 0LL);
  BalanceConfig_TypeInfo->static_fields->CloseSecretTreasureDeviceSvtGet = ConstantMaster__GetValue(
                                                                             (ConstantMaster_o *)MasterData_object,
                                                                             (System_String_o *)StringLiteral_3580/*"CLOSE_SECRET_TREASURE_DEVICE_SVT_GET"*/,
                                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->ItemIdQp = ConstantMaster__GetValue(
                                                      (ConstantMaster_o *)MasterData_object,
                                                      (System_String_o *)StringLiteral_7399/*"ITEM_ID_QP"*/,
                                                      0LL);
  BalanceConfig_TypeInfo->static_fields->ShopDetailCheckDialogFontSize = ConstantMaster__GetValue_38846256(
                                                                           (ConstantMaster_o *)MasterData_object,
                                                                           (System_String_o *)StringLiteral_11993/*"SHOP_DETAIL_CHECK_DIALOG_FONT_SIZE"*/,
                                                                           21,
                                                                           0LL);
  v272 = ConstantStrMaster__GetValue(v219, (System_String_o *)StringLiteral_11413/*"SCENARIO_SPEED_STEP"*/, 0LL);
  if ( System_Single__TryParse(v272, &result, 0LL) )
  {
    v273 = BalanceConfig_TypeInfo;
    v274 = result;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v273 = BalanceConfig_TypeInfo;
    }
    v273->static_fields->ScenarioSpeedStep = v274;
  }
  v275 = ConstantStrMaster__GetValue(v219, (System_String_o *)StringLiteral_11412/*"SCENARIO_SPEED_LOW"*/, 0LL);
  if ( System_Single__TryParse(v275, &result, 0LL) )
  {
    v276 = BalanceConfig_TypeInfo;
    v277 = result;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v276 = BalanceConfig_TypeInfo;
    }
    v276->static_fields->ScenarioSpeedLow = v277;
  }
  v278 = ConstantStrMaster__GetValue(v219, (System_String_o *)StringLiteral_11411/*"SCENARIO_SPEED_HIGH"*/, 0LL);
  if ( System_Single__TryParse(v278, &result, 0LL) )
  {
    v279 = BalanceConfig_TypeInfo;
    v280 = result;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v279 = BalanceConfig_TypeInfo;
    }
    v279->static_fields->ScenarioSpeedHigh = v280;
  }
  v281 = ConstantStrMaster__GetValue(v219, (System_String_o *)StringLiteral_11410/*"SCENARIO_SPEED_DEFAULT"*/, 0LL);
  if ( System_Single__TryParse(v281, &result, 0LL) )
  {
    v282 = BalanceConfig_TypeInfo;
    v283 = result;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v282 = BalanceConfig_TypeInfo;
    }
    v282->static_fields->ScenarioSpeedDefault = v283;
  }
  else
  {
    v282 = BalanceConfig_TypeInfo;
  }
  if ( !v282->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v282);
    v282 = BalanceConfig_TypeInfo;
  }
  v284 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_10370/*"POWERUP_QUEST_WAR_ID"*/,
           v282->static_fields->PowerUpQuestWarId,
           0LL);
  v285 = BalanceConfig_TypeInfo->static_fields;
  v285->PowerUpQuestWarId = v284;
  v286 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_1969/*"ACCOUNTING_INITIALIZE_TIMEOUT"*/,
           v285->AccountingInitializeTimeOut,
           0LL);
  v287 = BalanceConfig_TypeInfo->static_fields;
  v287->AccountingInitializeTimeOut = v286;
  BalanceConfig_TypeInfo->static_fields->EquipGetEffectId = ConstantMaster__GetValue_38846256(
                                                              (ConstantMaster_o *)MasterData_object,
                                                              (System_String_o *)StringLiteral_5495/*"EQUIP_GET_EFFECT_ID"*/,
                                                              v287->EquipGetEffectId,
                                                              0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCodeDetachingItemId = ConstantMaster__GetValue_38846256(
                                                                        (ConstantMaster_o *)MasterData_object,
                                                                        (System_String_o *)StringLiteral_3700/*"COMMAND_CODE_DETACHING_ITEM_ID"*/,
                                                                        -1,
                                                                        0LL);
  v288 = ConstantStrMaster__GetValue(v219, (System_String_o *)StringLiteral_10394/*"PRESENT_BOX_FILTER_SVT_EQUIP_MATERIAL"*/, 0LL);
  if ( v288 )
  {
    v289 = System_String__Split(v288, 0x2Cu, 0, 0LL);
    v290 = BalanceConfig___c_TypeInfo;
    v291 = (System_Collections_Generic_IEnumerable_TSource__o *)v289;
    if ( !BalanceConfig___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig___c_TypeInfo);
      v290 = BalanceConfig___c_TypeInfo;
    }
    _9__240_0 = (System_Func_object__int__o *)v290->static_fields->__9__240_0;
    if ( !_9__240_0 )
    {
      if ( !v290->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v290);
        v290 = BalanceConfig___c_TypeInfo;
      }
      v293 = (Il2CppObject *)v290->static_fields->__9;
      _9__240_0 = (System_Func_object__int__o *)sub_1B71818(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(_9__240_0, v293, Method_BalanceConfig___c__Initialize_b__240_0__, 0LL);
      v294 = BalanceConfig___c_TypeInfo->static_fields;
      v294->__9__240_0 = (struct System_Func_string__int__o *)_9__240_0;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v294->__9__240_0, (int32_t)_9__240_0, v295, v296);
    }
    v297 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v291,
                                                                  (System_Func_TSource__TResult__o *)_9__240_0,
                                                                  (const MethodInfo_2E8B610 *)Method_System_Linq_Enumerable_Select_string__int___);
    v298 = System_Linq_Enumerable__ToArray_int_(
             v297,
             (const MethodInfo_2E93CEC *)Method_System_Linq_Enumerable_ToArray_int___);
    v301 = BalanceConfig_TypeInfo;
    v302 = (ServantStatusBattleListViewItem_c *)v298;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v301 = BalanceConfig_TypeInfo;
    }
    p_PresentBoxFilterSvtEquipMaterial = (ServantStatusBattleListViewItem_o *)&v301->static_fields->PresentBoxFilterSvtEquipMaterial;
    p_PresentBoxFilterSvtEquipMaterial->klass = v302;
    sub_1B71570(p_PresentBoxFilterSvtEquipMaterial, (int32_t)v302, v299, v300);
  }
  v304 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_6417/*"FOLLOW_NUM"*/, 0LL);
  if ( v304 >= 1 )
  {
    v305 = v304;
    v306 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v306 = BalanceConfig_TypeInfo;
    }
    v306->static_fields->FollowNum = v305;
  }
  v307 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_6414/*"FOLLOW_FRIEND_POINT"*/, 0LL);
  if ( v307 >= 1 )
  {
    v308 = v307;
    v309 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v309 = BalanceConfig_TypeInfo;
    }
    v309->static_fields->FollowFriendPoint = v308;
  }
  v310 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_5027/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0LL);
  v311 = BalanceConfig_TypeInfo;
  v312 = v310;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v311 = BalanceConfig_TypeInfo;
  }
  v311->static_fields->DisableFriendshipExceed = v312;
  BalanceConfig_TypeInfo->static_fields->EventDailyPointResetAt = ConstantMaster__GetValue(
                                                                    (ConstantMaster_o *)MasterData_object,
                                                                    (System_String_o *)StringLiteral_5581/*"EVENT_DAILY_POINT_RESET_AT"*/,
                                                                    0LL);
  v313 = ConstantStrMaster__GetValueArray(v219, (System_String_o *)StringLiteral_11016/*"REPRINT_LAST_WAR_RAID_EVENT_ID_LIST"*/, 0LL, 0LL);
  p_ReprintLastWarRaidEventIdList = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->ReprintLastWarRaidEventIdList;
  p_ReprintLastWarRaidEventIdList->klass = (ServantStatusBattleListViewItem_c *)v313;
  sub_1B71570(p_ReprintLastWarRaidEventIdList, (int32_t)v313, v315, v316);
  BalanceConfig_TypeInfo->static_fields->PrologueQuestId = ConstantMaster__GetValue(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_10441/*"PROLOGUE_QUEST_ID"*/,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->CommandCardParamUpMax = ConstantMaster__GetValue(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_3699/*"COMMAND_CARD_PRM_UP_MAX"*/,
                                                                   0LL);
  v317 = ConstantStrMaster__GetValueArray(v219, (System_String_o *)StringLiteral_5711/*"EVENT_TOWER_FADEOUT_DELAY_TIME"*/, 0LL, 0LL);
  p_EventTowerFadeOutDelayTime = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->EventTowerFadeOutDelayTime;
  p_EventTowerFadeOutDelayTime->klass = (ServantStatusBattleListViewItem_c *)v317;
  sub_1B71570(p_EventTowerFadeOutDelayTime, (int32_t)v317, v319, v320);
  if ( !BalanceConfig_TypeInfo->static_fields->EventTowerFadeOutDelayTime )
  {
    v321 = (System_Array_o *)sub_1B71674(int___TypeInfo, 3LL);
    v585.fields.value = Field__PrivateImplementationDetails__84DF4B72A51E01473BC25693E526BC603A140C4300062B4A7F64A9F7D00ABB95;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61413584(v321, v585, 0LL);
    v324 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v324 = BalanceConfig_TypeInfo;
    }
    v325 = (ServantStatusBattleListViewItem_o *)&v324->static_fields->EventTowerFadeOutDelayTime;
    v325->klass = (ServantStatusBattleListViewItem_c *)v321;
    sub_1B71570(v325, (int32_t)v321, v322, v323);
  }
  v326 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_5712/*"EVENT_TOWER_FADEOUT_PLAY_TIME"*/,
           3000,
           0LL);
  v327 = BalanceConfig_TypeInfo;
  v328 = v326;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v327 = BalanceConfig_TypeInfo;
  }
  v327->static_fields->EventTowerFadeOutPlayTime = (float)v328 / 1000.0;
  BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse = ConstantMaster__GetValue(
                                                                   (ConstantMaster_o *)MasterData_object,
                                                                   (System_String_o *)StringLiteral_8553/*"MAX_FRIENDPOINT_BOOST_ITEM_USE"*/,
                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->FriendPointBoostItemEfffectId = ConstantMaster__GetValue_38846256(
                                                                           (ConstantMaster_o *)MasterData_object,
                                                                           (System_String_o *)StringLiteral_6465/*"FRIENDPOINT_BOOST_ITEM_EFFECT_ID"*/,
                                                                           3,
                                                                           0LL);
  BalanceConfig_TypeInfo->static_fields->MainInterludeWarId = ConstantMaster__GetValue_38846256(
                                                                (ConstantMaster_o *)MasterData_object,
                                                                (System_String_o *)StringLiteral_8462/*"MAIN_INTERLUDE_WAR_ID"*/,
                                                                1004,
                                                                0LL);
  v329 = ConstantStrMaster__GetValueArray(v219, (System_String_o *)StringLiteral_5538/*"EVENT_BOARD_GAME_DICE_BUTTON_POS"*/, 0LL, 0LL);
  p_EventBoardGameDiceButtonPostion = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion;
  p_EventBoardGameDiceButtonPostion->klass = (ServantStatusBattleListViewItem_c *)v329;
  sub_1B71570(p_EventBoardGameDiceButtonPostion, (int32_t)v329, v331, v332);
  if ( !BalanceConfig_TypeInfo->static_fields->EventBoardGameDiceButtonPostion )
  {
    Instance = (Il2CppObject *)sub_1B71674(int___TypeInfo, 3LL);
    if ( !Instance )
      goto LABEL_165;
    v335 = (unsigned int)Instance[1].monitor;
    v336 = (ServantStatusBattleListViewItem_c *)Instance;
    if ( v335 <= 1 )
      goto LABEL_164;
    HIDWORD(Instance[2].klass) = -59;
    if ( v335 == 2 )
      goto LABEL_164;
    LODWORD(Instance[2].monitor) = -500;
    v337 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v337 = BalanceConfig_TypeInfo;
    }
    v338 = (ServantStatusBattleListViewItem_o *)&v337->static_fields->EventBoardGameDiceButtonPostion;
    v338->klass = v336;
    sub_1B71570(v338, (int32_t)v336, v333, v334);
  }
  v339 = ConstantStrMaster__GetValueArray(v219, (System_String_o *)StringLiteral_8523/*"MATERIAL_MAIN_INTERLUDE_WAR_ID"*/, 0LL, 0LL);
  v342 = BalanceConfig_TypeInfo;
  v343 = (ServantStatusBattleListViewItem_c *)v339;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v342 = BalanceConfig_TypeInfo;
  }
  p_MainInterludeWarIdOnMaterial = (ServantStatusBattleListViewItem_o *)&v342->static_fields->MainInterludeWarIdOnMaterial;
  p_MainInterludeWarIdOnMaterial->klass = v343;
  sub_1B71570(p_MainInterludeWarIdOnMaterial, (int32_t)v343, v340, v341);
  if ( !BalanceConfig_TypeInfo->static_fields->MainInterludeWarIdOnMaterial )
  {
    Instance = (Il2CppObject *)sub_1B71674(int___TypeInfo, 1LL);
    if ( !Instance )
      goto LABEL_165;
    v347 = (ServantStatusBattleListViewItem_c *)Instance;
    if ( !LODWORD(Instance[1].monitor) )
      goto LABEL_164;
    LODWORD(Instance[2].klass) = 307;
    v348 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v348 = BalanceConfig_TypeInfo;
    }
    v349 = (ServantStatusBattleListViewItem_o *)&v348->static_fields->MainInterludeWarIdOnMaterial;
    v349->klass = v347;
    sub_1B71570(v349, (int32_t)v347, v345, v346);
  }
  v350 = ConstantStrMaster__GetValueArray(v219, (System_String_o *)StringLiteral_5541/*"EVENT_BOARD_GAME_MAP_ID_LIST"*/, 0LL, 0LL);
  v353 = BalanceConfig_TypeInfo;
  v354 = (ServantStatusBattleListViewItem_c *)v350;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v353 = BalanceConfig_TypeInfo;
  }
  p_EventBoardGameMapIdList = (ServantStatusBattleListViewItem_o *)&v353->static_fields->EventBoardGameMapIdList;
  p_EventBoardGameMapIdList->klass = v354;
  sub_1B71570(p_EventBoardGameMapIdList, (int32_t)v354, v351, v352);
  BalanceConfig_TypeInfo->static_fields->EventBoardGameNextBoardQuestId = ConstantMaster__GetValue_38846256(
                                                                            (ConstantMaster_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_5543/*"EVENT_BOARD_GAME_NEXT_BOARD_QUEST_ID"*/,
                                                                            94047745,
                                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->EventBoardGameNextRoundQuestId = ConstantMaster__GetValue_38846256(
                                                                            (ConstantMaster_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_5544/*"EVENT_BOARD_GAME_NEXT_ROUND_QUEST_ID"*/,
                                                                            94047744,
                                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->TitleFlowOld = ConstantMaster__GetValue_38846256(
                                                          (ConstantMaster_o *)MasterData_object,
                                                          (System_String_o *)StringLiteral_13312/*"TITLE_FLOW_OLD"*/,
                                                          0,
                                                          0LL);
  BalanceConfig_TypeInfo->static_fields->StoryWarId = ConstantMaster__GetValue_38846256(
                                                        (ConstantMaster_o *)MasterData_object,
                                                        (System_String_o *)StringLiteral_12268/*"STORY_WAR_ID"*/,
                                                        1003,
                                                        0LL);
  BalanceConfig_TypeInfo->static_fields->OrdealCallWarId = ConstantMaster__GetValue_38846256(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_9686/*"ORDEAL_CALL_WAR_ID"*/,
                                                             401,
                                                             0LL);
  v356 = ConstantStrMaster__GetValue(v219, (System_String_o *)StringLiteral_9685/*"ORDEAL_CALL_CLEAR_BGM_NAME"*/, 0LL);
  if ( !System_String__IsNullOrEmpty(v356, 0LL) )
  {
    v359 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v359 = BalanceConfig_TypeInfo;
    }
    p_OrdealCallClearBgmName = (ServantStatusBattleListViewItem_o *)&v359->static_fields->OrdealCallClearBgmName;
    p_OrdealCallClearBgmName->klass = (ServantStatusBattleListViewItem_c *)v356;
    sub_1B71570(p_OrdealCallClearBgmName, (int32_t)v356, v357, v358);
  }
  v361 = (System_Array_o *)sub_1B71674(int___TypeInfo, 5LL);
  v586.fields.value = Field__PrivateImplementationDetails__A1FBA00A0F8840358C0A54605FFD365F75E3A3D7AFF25F48F474C4E89BB0B37D;
  v362 = (System_Int32_array *)v361;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61413584(v361, v586, 0LL);
  v363 = ConstantStrMaster__GetValueArray(v219, (System_String_o *)StringLiteral_3836/*"CONSUME_STORMPOD_SPOT_ID"*/, v362, 0LL);
  v366 = BalanceConfig_TypeInfo;
  v367 = (ServantStatusBattleListViewItem_c *)v363;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v366 = BalanceConfig_TypeInfo;
  }
  p_consumeStormPodSpotId = (ServantStatusBattleListViewItem_o *)&v366->static_fields->consumeStormPodSpotId;
  p_consumeStormPodSpotId->klass = v367;
  sub_1B71570(p_consumeStormPodSpotId, (int32_t)v367, v364, v365);
  Instance = (Il2CppObject *)sub_1B71674(int___TypeInfo, 1LL);
  if ( !Instance )
LABEL_165:
    sub_1B71828(Instance, v216);
  if ( !LODWORD(Instance[1].monitor) )
    goto LABEL_164;
  LODWORD(Instance[2].klass) = 71;
  v369 = ConstantStrMaster__GetValueArray(
           v219,
           (System_String_o *)StringLiteral_12266/*"STORMPOD_HELP_IDS"*/,
           (System_Int32_array *)Instance,
           0LL);
  p_StormPodHelpIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->StormPodHelpIds;
  p_StormPodHelpIds->klass = (ServantStatusBattleListViewItem_c *)v369;
  sub_1B71570(p_StormPodHelpIds, (int32_t)v369, v371, v372);
  ValueStringArray = ConstantStrMaster__GetValueStringArray(v219, (System_String_o *)StringLiteral_8201/*"LEGACY_ASPECT_MOVIES"*/, 0LL);
  p_legacyAspectMovies = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
  p_legacyAspectMovies->klass = (ServantStatusBattleListViewItem_c *)ValueStringArray;
  sub_1B71570(p_legacyAspectMovies, (int32_t)ValueStringArray, v375, v376);
  BalanceConfig_TypeInfo->static_fields->GachaDailyMaxDrawNumResetAt = ConstantMaster__GetValue_38846256(
                                                                         (ConstantMaster_o *)MasterData_object,
                                                                         (System_String_o *)StringLiteral_6845/*"GACHA_DAILY_MAX_DRAW_NUM_RESET_AT"*/,
                                                                         4,
                                                                         0LL);
  BalanceConfig_TypeInfo->static_fields->MemoryDeckLimitByQuest = ConstantMaster__GetValue_38846256(
                                                                    (ConstantMaster_o *)MasterData_object,
                                                                    (System_String_o *)StringLiteral_8580/*"MEMORY_DECK_LIMIT_BY_QUEST"*/,
                                                                    100,
                                                                    0LL);
  v377 = ConstantStrMaster__GetValue(v219, (System_String_o *)StringLiteral_7366/*"IOS_EXAMINATION_NEWS_URL"*/, 0LL);
  p_IOS_ExaminationNewsUrl = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->IOS_ExaminationNewsUrl;
  p_IOS_ExaminationNewsUrl->klass = (ServantStatusBattleListViewItem_c *)v377;
  sub_1B71570(p_IOS_ExaminationNewsUrl, (int32_t)v377, v379, v380);
  v383 = BalanceConfig_TypeInfo->static_fields;
  if ( !v383->IOS_ExaminationNewsUrl )
  {
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v383 = BalanceConfig_TypeInfo->static_fields;
    }
    v384 = StringLiteral_19988/*"https://view.fate-go.jp/"*/;
    v383->IOS_ExaminationNewsUrl = (struct System_String_o *)StringLiteral_19988/*"https://view.fate-go.jp/"*/;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v383->IOS_ExaminationNewsUrl, v384, v381, v382);
  }
  v385 = ConstantMaster__GetValue((ConstantMaster_o *)MasterData_object, (System_String_o *)StringLiteral_9697/*"OTHER_IMAGE_LIMIT_COUNT"*/, 0LL);
  v386 = BalanceConfig_TypeInfo;
  v387 = v385;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v386 = BalanceConfig_TypeInfo;
  }
  v386->static_fields->OtherImageLimitCount = v387;
  BalanceConfig_TypeInfo->static_fields->ExclusiveNpcServantIdStart = ConstantMaster__GetValue_38846256(
                                                                        (ConstantMaster_o *)MasterData_object,
                                                                        (System_String_o *)StringLiteral_5730/*"EXCLUSIVE_NPC_SERVANT_ID_START"*/,
                                                                        9937100,
                                                                        0LL);
  v388 = ConstantStrMaster__GetValueStringArray(v219, (System_String_o *)StringLiteral_12182/*"STAND_FIGURE_R_OFFSET_EFFECT_NAMES"*/, 0LL);
  p_UIStandFigureROffsetEffectNames = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames;
  p_UIStandFigureROffsetEffectNames->klass = (ServantStatusBattleListViewItem_c *)v388;
  sub_1B71570(p_UIStandFigureROffsetEffectNames, (int32_t)v388, v390, v391);
  v392 = ConstantStrMaster__GetValueStringArray(v219, (System_String_o *)StringLiteral_12181/*"STAND_FIGURE_R_OFFSET_EFFECT_IMAGES"*/, 0LL);
  p_UIStandFigureROffsetImages = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetImages;
  p_UIStandFigureROffsetImages->klass = (ServantStatusBattleListViewItem_c *)v392;
  sub_1B71570(p_UIStandFigureROffsetImages, (int32_t)v392, v394, v395);
  v396 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->static_fields->UIStandFigureROffsetEffectNames )
  {
    Instance = (Il2CppObject *)sub_1B71674(string___TypeInfo, 7LL);
    if ( !Instance )
      goto LABEL_165;
    v399 = Instance;
    if ( !LODWORD(Instance[1].monitor) )
      goto LABEL_164;
    v400 = StringLiteral_17226/*"bit_result_bond"*/;
    Instance[2].klass = (Il2CppClass *)StringLiteral_17226/*"bit_result_bond"*/;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&Instance[2], v400, v397, v398);
    if ( LODWORD(v399[1].monitor) <= 1 )
      goto LABEL_164;
    v403 = StringLiteral_17238/*"bit_result_noble"*/;
    v399[2].monitor = (void *)StringLiteral_17238/*"bit_result_noble"*/;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v399[2].monitor, v403, v401, v402);
    if ( LODWORD(v399[1].monitor) <= 2 )
      goto LABEL_164;
    v406 = StringLiteral_17241/*"bit_result_servant"*/;
    v399[3].klass = (Il2CppClass *)StringLiteral_17241/*"bit_result_servant"*/;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v399[3], v406, v404, v405);
    if ( LODWORD(v399[1].monitor) <= 3 )
      goto LABEL_164;
    v409 = StringLiteral_17242/*"bit_result_skill"*/;
    v399[3].monitor = (void *)StringLiteral_17242/*"bit_result_skill"*/;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v399[3].monitor, v409, v407, v408);
    if ( LODWORD(v399[1].monitor) <= 4 )
      goto LABEL_164;
    v412 = StringLiteral_17227/*"bit_result_command_card_exceed"*/;
    v399[4].klass = (Il2CppClass *)StringLiteral_17227/*"bit_result_command_card_exceed"*/;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v399[4], v412, v410, v411);
    if ( LODWORD(v399[1].monitor) <= 5 )
      goto LABEL_164;
    v415 = StringLiteral_17228/*"bit_result_extraskill"*/;
    v399[4].monitor = (void *)StringLiteral_17228/*"bit_result_extraskill"*/;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v399[4].monitor, v415, v413, v414);
    if ( LODWORD(v399[1].monitor) <= 6 )
      goto LABEL_164;
    v418 = StringLiteral_17231/*"bit_result_friendship_exceed"*/;
    v399[5].klass = (Il2CppClass *)StringLiteral_17231/*"bit_result_friendship_exceed"*/;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v399[5], v418, v416, v417);
    v421 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v421 = BalanceConfig_TypeInfo;
    }
    v422 = (ServantStatusBattleListViewItem_o *)&v421->static_fields->UIStandFigureROffsetEffectNames;
    v422->klass = (ServantStatusBattleListViewItem_c *)v399;
    sub_1B71570(v422, (int32_t)v399, v419, v420);
    v396 = BalanceConfig_TypeInfo;
  }
  if ( !v396->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v396);
    v396 = BalanceConfig_TypeInfo;
  }
  if ( !v396->static_fields->UIStandFigureROffsetImages )
  {
    Instance = (Il2CppObject *)sub_1B71674(string___TypeInfo, 18LL);
    if ( !Instance )
      goto LABEL_165;
    v425 = Instance;
    if ( LODWORD(Instance[1].monitor) )
    {
      v426 = StringLiteral_1397/*"1053900:100:0"*/;
      Instance[2].klass = (Il2CppClass *)StringLiteral_1397/*"1053900:100:0"*/;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&Instance[2], v426, v423, v424);
      if ( LODWORD(v425[1].monitor) > 1 )
      {
        v429 = StringLiteral_1400/*"1053910:100:0"*/;
        v425[2].monitor = (void *)StringLiteral_1400/*"1053910:100:0"*/;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&v425[2].monitor, v429, v427, v428);
        if ( LODWORD(v425[1].monitor) > 2 )
        {
          v432 = StringLiteral_1398/*"1053901:100:0"*/;
          v425[3].klass = (Il2CppClass *)StringLiteral_1398/*"1053901:100:0"*/;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v425[3], v432, v430, v431);
          if ( LODWORD(v425[1].monitor) > 3 )
          {
            v435 = StringLiteral_1401/*"1053911:100:0"*/;
            v425[3].monitor = (void *)StringLiteral_1401/*"1053911:100:0"*/;
            sub_1B71570((ServantStatusBattleListViewItem_o *)&v425[3].monitor, v435, v433, v434);
            if ( LODWORD(v425[1].monitor) > 4 )
            {
              v438 = StringLiteral_1399/*"1053902:100:0"*/;
              v425[4].klass = (Il2CppClass *)StringLiteral_1399/*"1053902:100:0"*/;
              sub_1B71570((ServantStatusBattleListViewItem_o *)&v425[4], v438, v436, v437);
              if ( LODWORD(v425[1].monitor) > 5 )
              {
                v441 = StringLiteral_1402/*"1053912:100:0"*/;
                v425[4].monitor = (void *)StringLiteral_1402/*"1053912:100:0"*/;
                sub_1B71570((ServantStatusBattleListViewItem_o *)&v425[4].monitor, v441, v439, v440);
                if ( LODWORD(v425[1].monitor) > 6 )
                {
                  v444 = StringLiteral_1394/*"1053000:100:0"*/;
                  v425[5].klass = (Il2CppClass *)StringLiteral_1394/*"1053000:100:0"*/;
                  sub_1B71570((ServantStatusBattleListViewItem_o *)&v425[5], v444, v442, v443);
                  if ( LODWORD(v425[1].monitor) > 7 )
                  {
                    v447 = StringLiteral_1395/*"1053001:100:0"*/;
                    v425[5].monitor = (void *)StringLiteral_1395/*"1053001:100:0"*/;
                    sub_1B71570((ServantStatusBattleListViewItem_o *)&v425[5].monitor, v447, v445, v446);
                    if ( LODWORD(v425[1].monitor) > 8 )
                    {
                      v450 = StringLiteral_1396/*"1053002:100:0"*/;
                      v425[6].klass = (Il2CppClass *)StringLiteral_1396/*"1053002:100:0"*/;
                      sub_1B71570((ServantStatusBattleListViewItem_o *)&v425[6], v450, v448, v449);
                      if ( LODWORD(v425[1].monitor) > 9 )
                      {
                        v453 = StringLiteral_1519/*"5047900:100:0"*/;
                        v425[6].monitor = (void *)StringLiteral_1519/*"5047900:100:0"*/;
                        sub_1B71570((ServantStatusBattleListViewItem_o *)&v425[6].monitor, v453, v451, v452);
                        if ( LODWORD(v425[1].monitor) > 0xA )
                        {
                          v456 = StringLiteral_1522/*"5047910:100:0"*/;
                          v425[7].klass = (Il2CppClass *)StringLiteral_1522/*"5047910:100:0"*/;
                          sub_1B71570((ServantStatusBattleListViewItem_o *)&v425[7], v456, v454, v455);
                          if ( LODWORD(v425[1].monitor) > 0xB )
                          {
                            v459 = StringLiteral_1520/*"5047901:100:0"*/;
                            v425[7].monitor = (void *)StringLiteral_1520/*"5047901:100:0"*/;
                            sub_1B71570((ServantStatusBattleListViewItem_o *)&v425[7].monitor, v459, v457, v458);
                            if ( LODWORD(v425[1].monitor) > 0xC )
                            {
                              v462 = StringLiteral_1523/*"5047911:100:0"*/;
                              v425[8].klass = (Il2CppClass *)StringLiteral_1523/*"5047911:100:0"*/;
                              sub_1B71570((ServantStatusBattleListViewItem_o *)&v425[8], v462, v460, v461);
                              if ( LODWORD(v425[1].monitor) > 0xD )
                              {
                                v465 = StringLiteral_1521/*"5047902:100:0"*/;
                                v425[8].monitor = (void *)StringLiteral_1521/*"5047902:100:0"*/;
                                sub_1B71570((ServantStatusBattleListViewItem_o *)&v425[8].monitor, v465, v463, v464);
                                if ( LODWORD(v425[1].monitor) > 0xE )
                                {
                                  v468 = StringLiteral_1524/*"5047912:100:0"*/;
                                  v425[9].klass = (Il2CppClass *)StringLiteral_1524/*"5047912:100:0"*/;
                                  sub_1B71570((ServantStatusBattleListViewItem_o *)&v425[9], v468, v466, v467);
                                  if ( LODWORD(v425[1].monitor) > 0xF )
                                  {
                                    v471 = StringLiteral_1516/*"5047000:100:0"*/;
                                    v425[9].monitor = (void *)StringLiteral_1516/*"5047000:100:0"*/;
                                    sub_1B71570((ServantStatusBattleListViewItem_o *)&v425[9].monitor, v471, v469, v470);
                                    if ( LODWORD(v425[1].monitor) > 0x10 )
                                    {
                                      v474 = StringLiteral_1517/*"5047001:100:0"*/;
                                      v425[10].klass = (Il2CppClass *)StringLiteral_1517/*"5047001:100:0"*/;
                                      sub_1B71570((ServantStatusBattleListViewItem_o *)&v425[10], v474, v472, v473);
                                      if ( LODWORD(v425[1].monitor) > 0x11 )
                                      {
                                        v477 = StringLiteral_1518/*"5047002:100:0"*/;
                                        v425[10].monitor = (void *)StringLiteral_1518/*"5047002:100:0"*/;
                                        sub_1B71570(
                                          (ServantStatusBattleListViewItem_o *)&v425[10].monitor,
                                          v477,
                                          v475,
                                          v476);
                                        v480 = BalanceConfig_TypeInfo;
                                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                          v480 = BalanceConfig_TypeInfo;
                                        }
                                        v481 = (ServantStatusBattleListViewItem_o *)&v480->static_fields->UIStandFigureROffsetImages;
                                        v481->klass = (ServantStatusBattleListViewItem_c *)v425;
                                        sub_1B71570(v481, (int32_t)v425, v478, v479);
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
    sub_1B71830(Instance, v216);
  }
LABEL_148:
  v482 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_7395/*"IS_WAR_BOARD_AI_CALC_EVAL_SUM"*/,
           0,
           0LL);
  v483 = BalanceConfig_TypeInfo;
  v484 = v482;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v483 = BalanceConfig_TypeInfo;
  }
  v483->static_fields->IsWarBoardAiCalcEvalSum = v484 != 0;
  BalanceConfig_TypeInfo->static_fields->WarBoardEvalFactorsAffectRatio = ConstantMaster__GetValue_38846256(
                                                                            (ConstantMaster_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_15434/*"WAR_BOARD_EVAL_FACTORS_AFFECT_RATIO"*/,
                                                                            10000,
                                                                            0LL);
  v485 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_7396/*"IS_WAR_BOARD_AI_FILTER_NOT_ACTION"*/,
           1,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsWarBoardAiFilterNotAction = v485;
  v486 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_7397/*"IS_WAR_BOARD_AI_FILTER_WASTE_ROUTE"*/,
           0,
           0LL) != 0;
  v487 = BalanceConfig_TypeInfo->static_fields;
  v487->IsWarBoardAiFilterWasteRoute = v486;
  BalanceConfig_TypeInfo->static_fields->StoneFragmentExchangeNoticeDispMax = ConstantMaster__GetValue_38846256(
                                                                                (ConstantMaster_o *)MasterData_object,
                                                                                (System_String_o *)StringLiteral_12231/*"STONE_FRAGMENT_EXCHANGE_NOTICE_MAX"*/,
                                                                                v487->StoneFragmentExchangeNoticeDispMax,
                                                                                0LL);
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveTimeConstant = (float)ConstantMaster__GetValue_38846256(
                                                                              (ConstantMaster_o *)MasterData_object,
                                                                              (System_String_o *)StringLiteral_1488/*"3D_MAP_CAMERA_MOVE_TIME_CONSTANT"*/,
                                                                              0,
                                                                              0LL)
                                                                   / 1000.0;
  v488 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_1487/*"3D_MAP_CAMERA_MOVE_TIME_COEFFICIENT"*/,
           1700,
           0LL);
  v489 = BalanceConfig_TypeInfo->static_fields;
  v489->MapCameraMoveTimeCoefficient = (float)v488 / 1000.0;
  v490 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_1489/*"3D_MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE"*/,
           v489->MapCameraMoveTimeLogarithmBase,
           0LL);
  v491 = BalanceConfig_TypeInfo->static_fields;
  v491->MapCameraMoveTimeLogarithmBase = v490;
  BalanceConfig_TypeInfo->static_fields->MapCameraMoveEasingType = ConstantMaster__GetValue_38846256(
                                                                     (ConstantMaster_o *)MasterData_object,
                                                                     (System_String_o *)StringLiteral_1486/*"3D_MAP_CAMERA_MOVE_EASING_TYPE"*/,
                                                                     v491->MapCameraMoveEasingType,
                                                                     0LL);
  v492 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_3374/*"CAMERA_2D_RESET_DURATION"*/,
           644,
           0LL);
  v493 = BalanceConfig_TypeInfo->static_fields;
  v493->Camera2DResetDuration = (float)v492 / 1000.0;
  v494 = ConstantStrMaster__GetValueArray(
           v219,
           (System_String_o *)StringLiteral_8460/*"MAIN_CHAPTERS_WITH_EVENT_ID"*/,
           v493->MainChaptersWithEventId,
           0LL);
  p_MainChaptersWithEventId = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->MainChaptersWithEventId;
  p_MainChaptersWithEventId->klass = (ServantStatusBattleListViewItem_c *)v494;
  sub_1B71570(p_MainChaptersWithEventId, (int32_t)v494, v496, v497);
  BalanceConfig_TypeInfo->static_fields->OrtSecondFormId = ConstantMaster__GetValue_38846256(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_9692/*"ORT_SECONDE_FORM_ID"*/,
                                                             1,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->OrtThirdFormId = ConstantMaster__GetValue_38846256(
                                                            (ConstantMaster_o *)MasterData_object,
                                                            (System_String_o *)StringLiteral_9693/*"ORT_THIRD_FORM_ID"*/,
                                                            2,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->OrtFirstQuestId = ConstantMaster__GetValue_38846256(
                                                             (ConstantMaster_o *)MasterData_object,
                                                             (System_String_o *)StringLiteral_9687/*"ORT_FIRST_QUEST_ID"*/,
                                                             3001324,
                                                             0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLateQuestId = ConstantMaster__GetValue_38846256(
                                                            (ConstantMaster_o *)MasterData_object,
                                                            (System_String_o *)StringLiteral_9691/*"ORT_LATE_QUEST_ID"*/,
                                                            3001325,
                                                            0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLatePhaseBreak = ConstantMaster__GetValue_38846256(
                                                               (ConstantMaster_o *)MasterData_object,
                                                               (System_String_o *)StringLiteral_9688/*"ORT_LATE_PHASE_BREAK"*/,
                                                               5,
                                                               0LL);
  BalanceConfig_TypeInfo->static_fields->OrtLatePhaseSecondForm = ConstantMaster__GetValue_38846256(
                                                                    (ConstantMaster_o *)MasterData_object,
                                                                    (System_String_o *)StringLiteral_9690/*"ORT_LATE_PHASE_SECOND_FORM"*/,
                                                                    6,
                                                                    0LL);
  v498 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_9689/*"ORT_LATE_PHASE_DEAD"*/,
           7,
           0LL);
  v499 = BalanceConfig_TypeInfo->static_fields;
  v499->OrtLatePhaseDead = v498;
  v500 = ConstantStrMaster__GetValueArray(
           v219,
           (System_String_o *)StringLiteral_13385/*"TREASURE_DEVICES_FORCED_OPEN_EFFECT"*/,
           v499->TreasureDevicesForcedOpenEffect,
           0LL);
  p_TreasureDevicesForcedOpenEffect = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->TreasureDevicesForcedOpenEffect;
  p_TreasureDevicesForcedOpenEffect->klass = (ServantStatusBattleListViewItem_c *)v500;
  sub_1B71570(p_TreasureDevicesForcedOpenEffect, (int32_t)v500, v502, v503);
  v504 = ConstantStrMaster__GetValueArray(
           v219,
           (System_String_o *)StringLiteral_7095/*"HEROINE_TREASURE_DEVICE_RANKUP_EFFECTS"*/,
           BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects,
           0LL);
  p_HeroineTreasureDeviceRankUpEffects = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->HeroineTreasureDeviceRankUpEffects;
  p_HeroineTreasureDeviceRankUpEffects->klass = (ServantStatusBattleListViewItem_c *)v504;
  sub_1B71570(p_HeroineTreasureDeviceRankUpEffects, (int32_t)v504, v506, v507);
  v508 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_7094/*"HEROINE_LIMIT_COUNT_ORTINAX_REFURBISHED"*/,
           BalanceConfig_TypeInfo->static_fields->HeroineLimitCountOrtinaxRefurbished,
           0LL);
  v509 = BalanceConfig_TypeInfo->static_fields;
  v509->HeroineLimitCountOrtinaxRefurbished = v508;
  v510 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_3496/*"CLASS_BOARD_RELEASE_QUEST_ID"*/,
           v509->ClassBoardReleaseQuestId,
           0LL);
  v511 = BalanceConfig_TypeInfo->static_fields;
  v511->ClassBoardReleaseQuestId = v510;
  v512 = ConstantStrMaster__GetValueArray(
           v219,
           (System_String_o *)StringLiteral_5770/*"EXTRA1_SORT_ORDER_CLASS_IDS"*/,
           v511->Extra1SortOrderClassIds,
           0LL);
  p_Extra1SortOrderClassIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->Extra1SortOrderClassIds;
  p_Extra1SortOrderClassIds->klass = (ServantStatusBattleListViewItem_c *)v512;
  sub_1B71570(p_Extra1SortOrderClassIds, (int32_t)v512, v514, v515);
  v516 = ConstantStrMaster__GetValueArray(
           v219,
           (System_String_o *)StringLiteral_5771/*"EXTRA2_SORT_ORDER_CLASS_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds,
           0LL);
  p_Extra2SortOrderClassIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->Extra2SortOrderClassIds;
  p_Extra2SortOrderClassIds->klass = (ServantStatusBattleListViewItem_c *)v516;
  sub_1B71570(p_Extra2SortOrderClassIds, (int32_t)v516, v518, v519);
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectMoveMaxDistance = ConstantMaster__GetValue_38846256(
                                                                                   (ConstantMaster_o *)MasterData_object,
                                                                                   (System_String_o *)StringLiteral_3459/*"CLASS_BOARD_CAMERA_SELECT_MOVE_MAX_DISTANCE"*/,
                                                                                   BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectMoveMaxDistance,
                                                                                   0LL);
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectSecMin = (float)ConstantMaster__GetValue_38846256(
                                                                                 (ConstantMaster_o *)MasterData_object,
                                                                                 (System_String_o *)StringLiteral_3461/*"CLASS_BOARD_CAMERA_SELECT_SEC_MIN"*/,
                                                                                 100,
                                                                                 0LL)
                                                                      / 1000.0;
  v520 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_3460/*"CLASS_BOARD_CAMERA_SELECT_SEC_MAX"*/,
           1000,
           0LL);
  v521 = BalanceConfig_TypeInfo->static_fields;
  v521->ClassBoardCameraSelectSecMax = (float)v520 / 1000.0;
  BalanceConfig_TypeInfo->static_fields->ClassBoardCameraSelectEasingType = ConstantMaster__GetValue_38846256(
                                                                              (ConstantMaster_o *)MasterData_object,
                                                                              (System_String_o *)StringLiteral_3458/*"CLASS_BOARD_CAMERA_SELECT_EASING_TYPE"*/,
                                                                              v521->ClassBoardCameraSelectEasingType,
                                                                              0LL);
  v522 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_3454/*"CLASS_BOARD_2D_CAMERA_DEFAULT_SIZE"*/,
           1700,
           0LL);
  v523 = BalanceConfig_TypeInfo->static_fields;
  v523->ClassBoard2DCameraDefaultSize = (float)v522 / 1000.0;
  v524 = ConstantStrMaster__GetValueArray(v219, (System_String_o *)StringLiteral_9262/*"NOT_UI_CHANGE_MAP_IDS"*/, v523->NotUIChangeMapIds, 0LL);
  p_NotUIChangeMapIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->NotUIChangeMapIds;
  p_NotUIChangeMapIds->klass = (ServantStatusBattleListViewItem_c *)v524;
  sub_1B71570(p_NotUIChangeMapIds, (int32_t)v524, v526, v527);
  v528 = ConstantStrMaster__GetValueArray(
           v219,
           (System_String_o *)StringLiteral_8231/*"LIMIT_SEALED_DIALOG_MAX_LIMIT_OPEN_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds,
           0LL);
  p_LimitSealedDialogMaxLimitOpenIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->LimitSealedDialogMaxLimitOpenIds;
  p_LimitSealedDialogMaxLimitOpenIds->klass = (ServantStatusBattleListViewItem_c *)v528;
  sub_1B71570(p_LimitSealedDialogMaxLimitOpenIds, (int32_t)v528, v530, v531);
  v532 = ConstantStrMaster__GetValueArray(
           v219,
           (System_String_o *)StringLiteral_9684/*"ORDEAL_CALL_CHAPTER_FOLDER_EVENT_UI_DISP_WAR_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds,
           0LL);
  p_OrdealCallChapterFolderEventUIDispWarIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->OrdealCallChapterFolderEventUIDispWarIds;
  p_OrdealCallChapterFolderEventUIDispWarIds->klass = (ServantStatusBattleListViewItem_c *)v532;
  sub_1B71570(p_OrdealCallChapterFolderEventUIDispWarIds, (int32_t)v532, v534, v535);
  v536 = ConstantStrMaster__GetValueArray(
           v219,
           (System_String_o *)StringLiteral_11004/*"RECOVERY_FATIGUE_DELAYED_CHANGE_BG_EVENTS"*/,
           BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents,
           0LL);
  p_RecoveryFatigueDelayedChangeBgEvents = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->RecoveryFatigueDelayedChangeBgEvents;
  p_RecoveryFatigueDelayedChangeBgEvents->klass = (ServantStatusBattleListViewItem_c *)v536;
  sub_1B71570(p_RecoveryFatigueDelayedChangeBgEvents, (int32_t)v536, v538, v539);
  Instance = (Il2CppObject *)sub_1B71674(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_165;
  if ( !LODWORD(Instance[1].monitor) )
    goto LABEL_164;
  LODWORD(Instance[2].klass) = 94086401;
  v540 = ConstantStrMaster__GetValueArray(
           v219,
           (System_String_o *)StringLiteral_9220/*"NONE_DISPLAY_FREE_QUEST_MATERIAL"*/,
           (System_Int32_array *)Instance,
           0LL);
  p_noneDisplayFreeQuestMaterial = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->noneDisplayFreeQuestMaterial;
  p_noneDisplayFreeQuestMaterial->klass = (ServantStatusBattleListViewItem_c *)v540;
  sub_1B71570(p_noneDisplayFreeQuestMaterial, (int32_t)v540, v542, v543);
  v544 = ConstantStrMaster__GetValueArray(
           v219,
           (System_String_o *)StringLiteral_9261/*"NOT_SEND_TRACK_EVENT_AT_WAR_IDS"*/,
           BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
           0LL);
  p_NotSendTrackEventAtWarIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds;
  p_NotSendTrackEventAtWarIds->klass = (ServantStatusBattleListViewItem_c *)v544;
  sub_1B71570(p_NotSendTrackEventAtWarIds, (int32_t)v544, v546, v547);
  v548 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_12184/*"STARTING_MEMBER_FRIENDSHIP_RATE"*/,
           0,
           0LL);
  v549 = BalanceConfig_TypeInfo->static_fields;
  v549->StartingMemberFriendshipRate = v548;
  v550 = ConstantStrMaster__GetValueArray(v219, (System_String_o *)StringLiteral_9256/*"NOT_REQUIRED_WAR_IDS"*/, v549->NotRequiredPlayWarIds, 0LL);
  p_NotRequiredPlayWarIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->NotRequiredPlayWarIds;
  p_NotRequiredPlayWarIds->klass = (ServantStatusBattleListViewItem_c *)v550;
  sub_1B71570(p_NotRequiredPlayWarIds, (int32_t)v550, v552, v553);
  v554 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_7390/*"IS_ENABLE_OLD_BLOCK_SHORTEST_ROUTE"*/,
           0,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsEnableOldBlockShortestRoute = v554;
  v555 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_7391/*"IS_EVENT_POINT_MENU"*/,
           0,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsEventPointMenu = v555;
  v556 = ConstantStrMaster__GetValue(v219, (System_String_o *)StringLiteral_8272/*"LOGIN_QUEST_RETURN_TERMINAL_DIALOG_MESSAGE"*/, 0LL);
  p_LoginQuestReturnTerminalDialogMessage = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->LoginQuestReturnTerminalDialogMessage;
  p_LoginQuestReturnTerminalDialogMessage->klass = (ServantStatusBattleListViewItem_c *)v556;
  sub_1B71570(p_LoginQuestReturnTerminalDialogMessage, (int32_t)v556, v558, v559);
  v560 = ConstantStrMaster__GetValueArray(v219, (System_String_o *)StringLiteral_5613/*"EVENT_ITEM_NOT_DISP_ITEM_GET_EFFECT"*/, 0LL, 0LL);
  p_EventItemNotDispItemGetEffect = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->EventItemNotDispItemGetEffect;
  p_EventItemNotDispItemGetEffect->klass = (ServantStatusBattleListViewItem_c *)v560;
  sub_1B71570(p_EventItemNotDispItemGetEffect, (int32_t)v560, v562, v563);
  v564 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_7389/*"IS_ENABLE_FADE_RERUN_SKIPPED"*/,
           1,
           0LL) != 0;
  BalanceConfig_TypeInfo->static_fields->IsEnableFadeRerunSkipped = v564;
  BalanceConfig_TypeInfo->static_fields->DisableBackMaskTime = (float)ConstantMaster__GetValue_38846256(
                                                                        (ConstantMaster_o *)MasterData_object,
                                                                        (System_String_o *)StringLiteral_5026/*"DISABLE_BACK_MASK_TIME"*/,
                                                                        1000,
                                                                        0LL)
                                                             / 1000.0;
  v565 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B71818(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v565,
    (const MethodInfo_3195544 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  v566 = MstMissionEntity_TypeInfo;
  if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo);
    v566 = MstMissionEntity_TypeInfo;
  }
  v567 = TitleInfoControl_TypeInfo;
  MISSION_ICON_DISPLAY_MS_GROUP_NORMAL = v566->static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL;
  if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    v567 = TitleInfoControl_TypeInfo;
  }
  EVENT_ALPHA_ANIM_TIME_INTERVAL = v567->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL;
  if ( EVENT_ALPHA_ANIM_TIME_INTERVAL == INFINITY )
    v570 = 0;
  else
    v570 = 1000 * (int)EVENT_ALPHA_ANIM_TIME_INTERVAL;
  Instance = (Il2CppObject *)ConstantMaster__GetValue_38846256(
                               (ConstantMaster_o *)MasterData_object,
                               MISSION_ICON_DISPLAY_MS_GROUP_NORMAL,
                               v570,
                               0LL);
  if ( !v565 )
    goto LABEL_165;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    v565,
    (Il2CppObject *)MISSION_ICON_DISPLAY_MS_GROUP_NORMAL,
    (int32_t)Instance,
    (const MethodInfo_3195EE4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  MISSION_ICON_DISPLAY_MS_GROUP_LIMITED = (Il2CppObject *)MstMissionEntity_TypeInfo->static_fields->MISSION_ICON_DISPLAY_MS_GROUP_LIMITED;
  v572 = TitleInfoControl_TypeInfo->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL;
  if ( v572 == INFINITY )
    v573 = 0;
  else
    v573 = 1000 * (int)v572;
  v574 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           MstMissionEntity_TypeInfo->static_fields->MISSION_ICON_DISPLAY_MS_GROUP_LIMITED,
           v573,
           0LL);
  System_Collections_Generic_Dictionary_object__int___set_Item(
    v565,
    MISSION_ICON_DISPLAY_MS_GROUP_LIMITED,
    v574,
    (const MethodInfo_3195EE4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  p_MissionIconDisplayMsDictionary = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->MissionIconDisplayMsDictionary;
  p_MissionIconDisplayMsDictionary->klass = (ServantStatusBattleListViewItem_c *)v565;
  sub_1B71570(p_MissionIconDisplayMsDictionary, (int32_t)v565, v576, v577);
  BalanceConfig_TypeInfo->static_fields->BgmFadeOutTimeBeforeBattle = (float)ConstantMaster__GetValue_38846256(
                                                                               (ConstantMaster_o *)MasterData_object,
                                                                               (System_String_o *)StringLiteral_3005/*"BGM_FADE_OUT_TIME_BEFORE_BATTLE"*/,
                                                                               1000,
                                                                               0LL)
                                                                    / 1000.0;
  v578 = ConstantMaster__GetValue_38846256(
           (ConstantMaster_o *)MasterData_object,
           (System_String_o *)StringLiteral_7393/*"IS_MISSION_NAVI_AUTO_CLASSIFY"*/,
           0,
           0LL) != 0;
  v579 = BalanceConfig_TypeInfo->static_fields;
  v579->IsMissionNaviAutoClassify = v578;
  v580 = ConstantStrMaster__GetValueArray(
           v219,
           (System_String_o *)StringLiteral_10349/*"PLAYABLE_BEAST_CLASS_IDS"*/,
           v579->PlayableBeastClassIds,
           0LL);
  p_PlayableBeastClassIds = (ServantStatusBattleListViewItem_o *)&BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds;
  p_PlayableBeastClassIds->klass = (ServantStatusBattleListViewItem_c *)v580;
  sub_1B71570(p_PlayableBeastClassIds, (int32_t)v580, v582, v583);
}


void __fastcall BalanceConfig___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A1F0E8 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig___c_TypeInfo, v1);
    byte_4A1F0E8 = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(BalanceConfig___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BalanceConfig___c_TypeInfo->static_fields->__9 = (struct BalanceConfig___c_o *)v2;
  sub_1B71570((ServantStatusBattleListViewItem_o *)BalanceConfig___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BalanceConfig___c___ctor(BalanceConfig___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BalanceConfig___c___Initialize_b__240_0(
        BalanceConfig___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}