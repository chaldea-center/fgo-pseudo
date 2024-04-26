void __fastcall EventFortificationListViewManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v10; // x20
  struct EventFortificationListViewManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_435342B & 1) == 0 )
  {
    sub_B70694(&EventFortificationListViewManager_TypeInfo);
    sub_B70694(&ListViewSort_TypeInfo);
    sub_B70694(&StringLiteral_6285/*"EventServantFatigueList"*/);
    byte_435342B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventFortificationListViewManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6285/*"EventServantFatigueList"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6285/*"EventServantFatigueList"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  SORT_SAVE_KEY = EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v10 = (ListViewSort_o *)sub_B70764(ListViewSort_TypeInfo);
  ListViewSort___ctor_33980040(v10, SORT_SAVE_KEY, 3, 0, 0LL);
  v11 = EventFortificationListViewManager_TypeInfo->static_fields;
  v11->servantSortStatus = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&v11->servantSortStatus,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall EventFortificationListViewManager___ctor(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventFortificationListViewManager__CallbackFortificationRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventFortificationListViewManager_o *v4; // x19
  bool v5; // w1
  UserServantEntity_o *targetInUserServantEntity; // x2

  v4 = this;
  if ( (byte_4353414 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_bool__UserServantEntity__Invoke__);
    this = (EventFortificationListViewManager_o *)sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_4353414 = 1;
  }
  if ( !result )
    goto LABEL_11;
  if ( !System_String__Equals_44745508(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL) )
  {
    this = (EventFortificationListViewManager_o *)v4->fields.fortificationConfirmDialog;
    if ( this )
    {
      FortificationConfirmDialogComponent__Close((FortificationConfirmDialogComponent_o *)this, 0LL);
      this = (EventFortificationListViewManager_o *)v4->fields.selectAfterCallback;
      if ( this )
      {
        targetInUserServantEntity = v4->fields.targetInUserServantEntity;
        v5 = 1;
        goto LABEL_10;
      }
    }
LABEL_11:
    sub_B7076C(this, result);
  }
  this = (EventFortificationListViewManager_o *)v4->fields.selectAfterCallback;
  if ( !this )
    goto LABEL_11;
  v5 = 0;
  targetInUserServantEntity = 0LL;
LABEL_10:
  System_Action_bool__UserServantEntity___Invoke(
    (System_Action_bool__UserServantEntity__o *)this,
    v5,
    targetInUserServantEntity,
    (const MethodInfo_26584F4 *)Method_System_Action_bool__UserServantEntity__Invoke__);
}


void __fastcall EventFortificationListViewManager__CloseFortificationConfirmDialog(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  NetworkManager_ResultCallbackFunc_o *v4; // x21
  EnterUserSvtInfo_array *Request_WarBoardWallAttackRequest; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *targetInUserServantEntity; // x9
  struct UserServantEntity_o *targetOutUserServantEntity; // x10
  EventFortificationRequest_o *v9; // x21
  struct EventFortificationWorkItem_o *v10; // x8
  struct EventFortificationDetailEntity_o *v11; // x10
  __int128 v12; // q1
  int32_t v13; // w22
  int32_t v14; // w23
  __int128 *v15; // x0
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x9
  int32_t position; // w24
  int32_t fortificationIdx; // w23
  EnterUserSvtInfo_o *v20; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x1
  struct EventFortificationDetailEntity_o *v23; // x10
  __int128 v24; // q1
  int64_t v25; // x25
  EnterUserSvtInfo_o *v26; // x24
  int32_t eventId; // w19
  const MethodInfo *v28; // x3
  __int128 v29[2]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v30[2]; // [xsp+20h] [xbp-80h] BYREF
  __int128 v31; // [xsp+40h] [xbp-60h]
  __int128 v32; // [xsp+50h] [xbp-50h]

  if ( (byte_4353413 & 1) == 0 )
  {
    sub_B70694(&EnterUserSvtInfo_TypeInfo);
    sub_B70694(&Method_EventFortificationListViewManager_CallbackFortificationRequest__);
    sub_B70694(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
    sub_B70694(&Method_NetworkManager_getRequest_EventFortificationRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353413 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CallbackFortificationRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EnterUserSvtInfo_array *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v4,
                                                                  (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  targetInUserServantEntity = this->fields.targetInUserServantEntity;
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v9 = (EventFortificationRequest_o *)Request_WarBoardWallAttackRequest;
  if ( !targetInUserServantEntity )
  {
    if ( !targetOutUserServantEntity )
      return;
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( targetFortificationWorkItem )
    {
      eventFortificationDetailEntity = targetFortificationWorkItem->fields.eventFortificationDetailEntity;
      if ( eventFortificationDetailEntity )
      {
        position = targetFortificationWorkItem->fields.position;
        fortificationIdx = eventFortificationDetailEntity->fields.fortificationIdx;
        v20 = (EnterUserSvtInfo_o *)sub_B70764(EnterUserSvtInfo_TypeInfo);
        EnterUserSvtInfo___ctor(v20, fortificationIdx, position, 0LL, 0LL);
        if ( v3 )
        {
          v21 = v3;
          v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)v20;
          goto LABEL_30;
        }
      }
    }
    goto LABEL_33;
  }
  v10 = this->fields.targetFortificationWorkItem;
  if ( !targetOutUserServantEntity )
  {
    if ( v10 )
    {
      v23 = v10->fields.eventFortificationDetailEntity;
      if ( v23 )
      {
        v24 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
        v13 = v23->fields.fortificationIdx;
        v14 = v10->fields.position;
        v31 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
        v32 = v24;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v15 = v29;
        v29[0] = v31;
        v29[1] = v32;
        goto LABEL_28;
      }
    }
LABEL_33:
    sub_B7076C(Request_WarBoardWallAttackRequest, v6);
  }
  if ( !v10 )
    goto LABEL_33;
  v11 = v10->fields.eventFortificationDetailEntity;
  if ( !v11 )
    goto LABEL_33;
  v12 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
  v13 = v11->fields.fortificationIdx;
  v14 = v10->fields.position;
  v31 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
  v32 = v12;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v15 = v30;
  v30[0] = v31;
  v30[1] = v32;
LABEL_28:
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v15,
          0LL);
  v26 = (EnterUserSvtInfo_o *)sub_B70764(EnterUserSvtInfo_TypeInfo);
  EnterUserSvtInfo___ctor(v26, v13, v14, v25, 0LL);
  if ( !v3 )
    goto LABEL_33;
  v21 = v3;
  v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)v26;
LABEL_30:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v21,
    v22,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
  eventId = this->fields.eventId;
  Request_WarBoardWallAttackRequest = (EnterUserSvtInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                                                  (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v9 )
    goto LABEL_33;
  EventFortificationRequest__beginRequest(v9, eventId, Request_WarBoardWallAttackRequest, v28);
}


void __fastcall EventFortificationListViewManager__CreateList(
        EventFortificationListViewManager_o *this,
        int32_t eventId,
        FortificationConfirmDialogComponent_o *fortificationConfirmDialog,
        EventFortificationWorkItem_o *targetItem,
        System_Action_bool__UserServantEntity__o *afterCallback,
        const MethodInfo *method)
{
  __int64 v11; // x21
  __int64 sort; // x0
  const MethodInfo *v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  EventFortificationListViewManager_c *v26; // x0
  struct ListViewSort_o *servantSortStatus; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct EventFortificationWorkItem_o **p_targetFortificationWorkItem; // x24
  struct EventFortificationWorkItem_o *v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct ListViewSort_o *v66; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  System_Int32_array *v70; // x23
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_Int32_array **v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v80; // q0
  __int128 v81; // q1
  struct EventFortificationWorkItem_o *v82; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x24
  int32_t v84; // w28
  UserServantEntity_o *v85; // x27
  EventFortificationListViewItem_o *v86; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v87; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v90; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  void *monitor; // x8
  unsigned __int64 v93; // x28
  signed __int64 v94; // x20
  UserServantEntity_o *v95; // x25
  int32_t v96; // w26
  struct EventFortificationWorkItem_o *v97; // x27
  EventFortificationListViewItem_o *v98; // x0
  EventFortificationWorkItem_o *v99; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *v100; // x21
  __int64 v101; // x0
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v103; // x2
  const MethodInfo *v104; // x1
  int64_t v105; // [xsp+0h] [xbp-D0h]
  EventUpValSetupInfo_o *v106; // [xsp+8h] [xbp-C8h]
  EventFortificationListViewManager_o *v107; // [xsp+10h] [xbp-C0h]
  struct EventFortificationWorkItem_o **v108; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110[2]; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4353407 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_B70694(&EventFortificationListViewItem_TypeInfo);
    sub_B70694(&EventFortificationListViewManager_TypeInfo);
    sub_B70694(&EventUpValSetupInfo_TypeInfo);
    sub_B70694(&Method_System_Func_UserServantEntity__bool___ctor__);
    sub_B70694(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__);
    sub_B70694(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__);
    sub_B70694(&EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo);
    sub_B70694(&StringLiteral_12046/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4353407 = 1;
  }
  memset(&v110[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v11 = sub_B70764(EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo);
  EventFortificationListViewManager___c__DisplayClass48_0___ctor(
    (EventFortificationListViewManager___c__DisplayClass48_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_59;
  *(_QWORD *)(v11 + 16) = targetItem;
  v108 = (struct EventFortificationWorkItem_o **)(v11 + 16);
  sub_B70630(
    (BattleServantConfConponent_o *)(v11 + 16),
    (System_Int32_array **)targetItem,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v26 = EventFortificationListViewManager_TypeInfo;
  if ( (BYTE3(EventFortificationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v26 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v26->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)servantSortStatus,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_59;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_59;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)sort, 0LL, 1, 0LL, 79, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_59;
  TitleInfoControl__setBackBtnSprite_18532552((TitleInfoControl_o *)sort, 1, 0, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_59;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_59;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v28, v29, v30, v31, v32, v33);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    0LL,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.eventId = eventId;
  this->fields.fortificationConfirmDialog = fortificationConfirmDialog;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.fortificationConfirmDialog,
    (System_Int32_array **)fortificationConfirmDialog,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  p_targetFortificationWorkItem = &this->fields.targetFortificationWorkItem;
  v47 = *v108;
  this->fields.targetFortificationWorkItem = *v108;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.targetFortificationWorkItem,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.selectAfterCallback = afterCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.selectAfterCallback,
    (System_Int32_array **)afterCallback,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v66 = this->fields.sort;
  this->fields.modeKind = 0;
  if ( !v66 )
    goto LABEL_59;
  iconScaleKind = v66->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
  }
  else if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_20;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
LABEL_20:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_59;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_59;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = sub_B706AC(int___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_59;
  v70 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
  {
LABEL_53:
    v101 = sub_B70798(sort);
    sub_B70738(v101, 0LL);
  }
  *(_DWORD *)(sort + 32) = eventId;
  v106 = (EventUpValSetupInfo_o *)sub_B70764(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_23742548(v106, v70, 1, 0, 0, 0LL);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)sort,
                                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_59;
  v72 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)sort,
                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  *(_QWORD *)(v11 + 24) = v72;
  sub_B70630((BattleServantConfConponent_o *)(v11 + 24), v72, v73, v74, v75, v76, v77, v78);
  if ( !*p_targetFortificationWorkItem )
    goto LABEL_59;
  userServantEntity = (*p_targetFortificationWorkItem)->fields.userServantEntity;
  if ( userServantEntity )
  {
    v81 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    v80 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v110, -1LL, 0LL);
    v81 = *(_OWORD *)&v110[0].fields.currentCryptoKey;
    v80 = *(_OWORD *)&v110[0].fields.fakeValue;
  }
  *(_OWORD *)&v110[1].fields.currentCryptoKey = v81;
  *(_OWORD *)&v110[1].fields.fakeValue = v80;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v109 = v110[1];
  sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v109, 0LL);
  v105 = sort;
  if ( !MasterData_WarQuestSelectionMaster
    || (sort = (__int64)UserServantMaster__getOrganizationList(MasterData_WarQuestSelectionMaster, 0LL),
        (v82 = *v108) == 0LL) )
  {
LABEL_59:
    sub_B7076C(sort, v13);
  }
  v83 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  v107 = this;
  if ( !v82->fields.isSvtDataSetInMaster )
  {
    eventFortificationDetailEntity = v82->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      goto LABEL_59;
    if ( eventFortificationDetailEntity->fields.classId )
    {
      v90 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v90,
        (Il2CppObject *)v11,
        Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__,
        (const MethodInfo_29AC578 *)Method_System_Func_UserServantEntity__bool___ctor__);
      v91 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              v83,
              (System_Func_TSource__bool__o *)v90,
              (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      sort = (__int64)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                        v91,
                        (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
      v83 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
    }
LABEL_47:
    if ( !v83 )
      goto LABEL_59;
    goto LABEL_48;
  }
  v84 = this->fields.eventId;
  v85 = v82->fields.userServantEntity;
  v86 = (EventFortificationListViewItem_o *)sub_B70764(EventFortificationListViewItem_TypeInfo);
  EventFortificationListViewItem___ctor(v86, v85, v84, v105, v106, v82, 0LL);
  v87 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v87,
    (Il2CppObject *)v11,
    Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__,
    (const MethodInfo_29AC578 *)Method_System_Func_UserServantEntity__bool___ctor__);
  v88 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v83,
          (System_Func_TSource__bool__o *)v87,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  sort = (__int64)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                    v88,
                    (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_59;
  v83 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  sort = EventFortificationWorkItem__get_IsNpc(*(EventFortificationWorkItem_o **)(v11 + 16), v13);
  this = v107;
  if ( (sort & 1) == 0 )
    goto LABEL_47;
  sort = (__int64)v107->fields.itemList;
  if ( !sort )
    goto LABEL_59;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v86,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
  if ( !v83 )
    goto LABEL_59;
LABEL_48:
  monitor = v83[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v93 = 0LL;
    v94 = (int)monitor;
    while ( 1 )
    {
      v95 = (UserServantEntity_o *)*((_QWORD *)&v83[2].klass + v93);
      v96 = this->fields.eventId;
      v97 = *v108;
      v98 = (EventFortificationListViewItem_o *)sub_B70764(EventFortificationListViewItem_TypeInfo);
      v99 = v97;
      this = v107;
      v100 = (EventMissionProgressRequest_Argument_ProgressData_o *)v98;
      EventFortificationListViewItem___ctor(v98, v95, v96, v105, v106, v99, 0LL);
      sort = (__int64)v107->fields.itemList;
      if ( !sort )
        goto LABEL_59;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        v100,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v93 >= v94 )
        break;
      if ( v93 >= LODWORD(v83[1].monitor) )
        goto LABEL_53;
    }
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12046/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_59;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EventFortificationListViewManager__SetStatusKind(this, this->fields.modeKind, v103);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventFortificationListViewManager__SetFilterButtonImage(this, v104);
}


void __fastcall EventFortificationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventFortificationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4353403 & 1) == 0 )
  {
    sub_B70694(&EventFortificationListViewManager_TypeInfo);
    byte_4353403 = 1;
  }
  v2 = EventFortificationListViewManager_TypeInfo;
  if ( (BYTE3(EventFortificationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v2 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_B7076C(0LL, v1);
  ListViewSort__DeleteContinueData(servantSortStatus, 0LL);
}


void __fastcall EventFortificationListViewManager__DestroyList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B7076C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall EventFortificationListViewManager__EndClickTabChoice(
        EventFortificationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  EventFortificationListViewManager__SetStatusKind(this, 2, method);
  EventFortificationListViewManager__RefreshListDisp(this, v4);
  EventFortificationListViewManager__ModifyList(this, 0, v5);
  EventFortificationListViewManager__SetMode_27965572(this, 2, v6);
}


void __fastcall EventFortificationListViewManager__EndClickTabLock(
        EventFortificationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  EventFortificationListViewManager__SetStatusKind(this, 1, method);
  EventFortificationListViewManager__RefreshListDisp(this, v4);
  EventFortificationListViewManager__ModifyList(this, 0, v5);
  EventFortificationListViewManager__SetMode_27965572(this, 2, v6);
}


void __fastcall EventFortificationListViewManager__EndClickTabPush(
        EventFortificationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  EventFortificationListViewManager__SetStatusKind(this, 3, method);
  EventFortificationListViewManager__RefreshListDisp(this, v4);
  EventFortificationListViewManager__ModifyList(this, 0, v5);
  EventFortificationListViewManager__SetMode_27965572(this, 2, v6);
}


void __fastcall EventFortificationListViewManager__EndClickTabStatus(
        EventFortificationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  EventFortificationListViewManager__SetStatusKind(this, 0, method);
  EventFortificationListViewManager__ModifyList(this, 0, v4);
  EventFortificationListViewManager__SetMode_27965572(this, 2, v5);
}


void __fastcall EventFortificationListViewManager__EndPushRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__ModifyList(this, 0, method);
  EventFortificationListViewManager__SetMode_27965572(this, 2, v4);
}


void __fastcall EventFortificationListViewManager__EndSelectFilterKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4353419 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4353419 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EventFortificationListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v7);
  CommonUI__CloseServantFilterSelectMenu(Instance, 0LL, 0LL);
}


void __fastcall EventFortificationListViewManager__EndSelectSortKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_435341D & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_435341D = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__EndShowServant(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4353416 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4353416 = 1;
  }
  EventFortificationListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventFortificationListViewManager__ModifyList(this, 0, v4);
  EventFortificationListViewManager__SetMode_27965572(this, 2, v5);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v7);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


void __fastcall EventFortificationListViewManager__EndStatusSync(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EventFortificationListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  BattleServantConfConponent_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (BattleServantConfConponent_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0LL;
    sub_B70630(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    EventFortificationListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventFortificationListViewManager__GetAmountSortValue(
        EventFortificationListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  EventFortificationListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  int size; // w24
  int v7; // w25
  int64_t v8; // x21
  ListViewItem_o *v9; // x8
  __int64 v10; // x11
  _QWORD *monitor; // x8
  __int64 v12; // x22
  __int64 v13; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v4 = this;
  if ( (byte_4353417 & 1) == 0 )
  {
    sub_B70694(&EventFortificationListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (EventFortificationListViewManager_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353417 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_21;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    do
    {
      if ( itemList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v9 = itemList->fields._items->m_Items[v7];
      if ( !v9 )
        break;
      v10 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (EventFortificationListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != EventFortificationListViewItem_TypeInfo )
      {
        break;
      }
      if ( (EventFortificationListViewItem_c *)v9->klass->_2.typeHierarchy[*(&EventFortificationListViewItem_TypeInfo->_2.bitflags2
                                                                           + 1)
                                                                         - 1] != EventFortificationListViewItem_TypeInfo )
        v9 = 0LL;
      monitor = v9[1].monitor;
      if ( !monitor )
        break;
      v13 = monitor[10];
      v12 = monitor[11];
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v15.fields.currentCryptoKey = v13;
      *(_QWORD *)&v15.fields.fakeValue = v12;
      this = (EventFortificationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                      v15,
                                                      0LL);
      ++v7;
      if ( (_DWORD)this == svtId )
        ++v8;
      if ( v7 >= size )
        return v8;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_21:
    sub_B7076C(this, *(_QWORD *)&svtId);
  }
  return 0LL;
}


EventFortificationListViewItem_o *__fastcall EventFortificationListViewManager__GetItem(
        EventFortificationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_435340E & 1) == 0 )
  {
    sub_B70694(&EventFortificationListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_435340E = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (EventFortificationListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == EventFortificationListViewItem_TypeInfo )
    return (EventFortificationListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


bool __fastcall EventFortificationListViewManager__GetSwapChoiceList(
        EventFortificationListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v18; // x25
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  _OWORD *monitor; // x9
  __int128 v22; // q0
  const MethodInfo_30BC188 *v23; // x2
  int64_t v24; // x1
  System_Collections_Generic_List_long__o *v25; // x0
  __int128 v26; // q0
  System_Int64_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-70h]

  if ( (byte_4353421 & 1) == 0 )
  {
    sub_B70694(&EventFortificationListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4353421 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (EventFortificationListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != EventFortificationListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v19[1].monitor;
      if ( monitor && BYTE1(v19[1].fields.sortValue2B) )
      {
        if ( BYTE2(v19[1].fields.sortValue1) )
        {
          v22 = monitor[2];
          *(_OWORD *)&v51.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v51.fields.fakeValue = v22;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v50 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v7;
        }
        else
        {
          v26 = monitor[2];
          *(_OWORD *)&v51.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v51.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v49 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v6;
        }
        System_Collections_Generic_List_long___Add(v25, v24, v23);
      }
      if ( (__int64)++v18 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B7076C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)choiceList, 0LL, v10, v11, v12, v13, v14, v15);
    *unchoiceList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)unchoiceList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v27;
    sub_B70630((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v34;
    sub_B70630((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


bool __fastcall EventFortificationListViewManager__GetSwapLockList(
        EventFortificationListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v18; // x25
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  _OWORD *monitor; // x9
  __int128 v22; // q0
  const MethodInfo_30BC188 *v23; // x2
  int64_t v24; // x1
  System_Collections_Generic_List_long__o *v25; // x0
  __int128 v26; // q0
  System_Int64_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-70h]

  if ( (byte_4353420 & 1) == 0 )
  {
    sub_B70694(&EventFortificationListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4353420 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (EventFortificationListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != EventFortificationListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v19[1].monitor;
      if ( monitor && LOBYTE(v19[1].fields.sortValue2B) )
      {
        if ( BYTE1(v19[1].fields.sortValue1) )
        {
          v22 = monitor[2];
          *(_OWORD *)&v51.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v51.fields.fakeValue = v22;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v50 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v7;
        }
        else
        {
          v26 = monitor[2];
          *(_OWORD *)&v51.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v51.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v49 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v6;
        }
        System_Collections_Generic_List_long___Add(v25, v24, v23);
      }
      if ( (__int64)++v18 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B7076C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)lockList, 0LL, v10, v11, v12, v13, v14, v15);
    *unlockList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)unlockList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v27;
    sub_B70630((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v34;
    sub_B70630((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


void __fastcall EventFortificationListViewManager__InitBackListView(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__StatusRequest(this, 0LL, v2);
  EventFortificationListViewManager__SetStatusKind(this, 0, v4);
}


void __fastcall EventFortificationListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EventFortificationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4353404 & 1) == 0 )
  {
    sub_B70694(&EventFortificationListViewManager_TypeInfo);
    byte_4353404 = 1;
  }
  v2 = EventFortificationListViewManager_TypeInfo;
  if ( (BYTE3(EventFortificationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v2 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_B7076C(0LL, v1);
  ListViewSort__InitLoad(servantSortStatus, 0LL);
}


void __fastcall EventFortificationListViewManager__ModifyItem(
        EventFortificationListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x11
  EventFortificationListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v13; // q0
  int64_t v14; // x0
  __int128 v15; // q0
  UnityEngine_Object_o *viewObject; // x21
  __int64 v17; // x1
  struct ListViewObject_o *v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+60h] [xbp-60h] BYREF

  if ( (byte_435340B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B70694(&EventFortificationListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435340B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_39;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_39;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v21,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v22.fields.current = (Il2CppObject *)v21.fields.fakeValue;
      *(_OWORD *)&v22.fields.list = *(_OWORD *)&v21.fields.currentCryptoKey;
      while ( 1 )
      {
        v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v22,
               (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v8 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v22,
            (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v22.fields.current
          && (v10 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v22.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
        {
          if ( (EventFortificationListViewItem_c *)v22.fields.current->klass->_2.typeHierarchy[v10 - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v22.fields.current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_B7076C(v8, v9);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_B7076C(v8, v9);
            v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v21.fields.fakeValue = v13;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v20 = v21;
            v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v20, 0LL);
            v15 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
            *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v19.fields.fakeValue = v15;
            if ( v14 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v19, 0LL) )
              EventFortificationListViewItem__ModifyItem(current, Entity, 0LL);
            goto LABEL_27;
          }
        }
        else
        {
          current = 0LL;
          if ( Entity )
            goto LABEL_15;
        }
        if ( !current )
          sub_B7076C(v8, v9);
LABEL_27:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v18 = current->fields.viewObject;
          if ( !v18 )
            sub_B7076C(0LL, v17);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v18->klass->vtable._5_SetItem.method)(
            v18,
            current,
            v18->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_39:
    sub_B7076C(Instance, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__ModifyList(
        EventFortificationListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t sort; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v7; // x23
  int64_t v8; // x20
  signed __int64 size; // x25
  unsigned int v10; // w24
  __int64 v11; // x8
  __int128 v12; // q0
  int64_t v13; // x22
  unsigned __int64 v14; // x28
  struct System_Collections_Generic_List_ListViewItem__o *v15; // x21
  ListViewItem_o *v16; // x21
  __int64 v17; // x10
  _OWORD *monitor; // x8
  __int128 v19; // q0
  _OWORD *v20; // x8
  __int128 v21; // q0
  int64_t v22; // x0
  const MethodInfo *v23; // x4
  __int64 v24; // x0
  bool isIconSizeChangea; // [xsp+Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+70h] [xbp-70h]

  if ( (byte_435340D & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&EventFortificationListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435340D = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_38;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_38;
  sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)sort,
                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_38;
  sort = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_38;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  v7 = *(_QWORD *)(sort + 24);
  v8 = sort;
  if ( (int)v7 >= 1 )
  {
    size = itemList->fields._size;
    v10 = 0;
    isIconSizeChangea = isIconSizeChange;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v8 + 8LL * (int)v10 + 32);
      if ( !v11 )
        break;
      v12 = *(_OWORD *)(v11 + 32);
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
      *(_OWORD *)&v29.fields.fakeValue = v12;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v28 = v29;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v28, 0LL);
      if ( (int)size >= 1 )
      {
        v13 = sort;
        v14 = 0LL;
        while ( 1 )
        {
          v15 = this->fields.itemList;
          if ( !v15 )
            goto LABEL_38;
          if ( v14 >= (unsigned int)v15->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v16 = v15->fields._items->m_Items[v14];
          if ( !v16 )
            goto LABEL_38;
          v17 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
            || (EventFortificationListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != EventFortificationListViewItem_TypeInfo )
          {
            goto LABEL_38;
          }
          monitor = v16[1].monitor;
          if ( monitor )
          {
            v19 = monitor[2];
            *(_OWORD *)&v29.fields.currentCryptoKey = monitor[1];
            *(_OWORD *)&v29.fields.fakeValue = v19;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v27 = v29;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v27, 0LL);
            if ( sort == v13 )
              break;
          }
          if ( (__int64)++v14 >= size )
            goto LABEL_34;
        }
        v20 = v16[1].monitor;
        if ( !v20 )
          break;
        v21 = v20[2];
        *(_OWORD *)&v29.fields.currentCryptoKey = v20[1];
        *(_OWORD *)&v29.fields.fakeValue = v21;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v26 = v29;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v26, 0LL);
        EventFortificationListViewManager__ModifyLockItem(this, v22, 1, isIconSizeChangea, v23);
      }
LABEL_34:
      if ( (int)++v10 >= (int)v7 )
        return;
      if ( v10 >= *(_DWORD *)(v8 + 24) )
      {
        v24 = sub_B70798(sort);
        sub_B70738(v24, 0LL);
      }
    }
LABEL_38:
    sub_B7076C(sort, isIconSizeChange);
  }
}


void __fastcall EventFortificationListViewManager__ModifyLockItem(
        EventFortificationListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x21
  bool v11; // w28
  int64_t v12; // x0
  __int64 v13; // x1
  __int64 v14; // x11
  EventFortificationListViewItem_o *current; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v17; // q0
  int64_t v18; // x0
  __int128 v19; // q0
  int64_t v20; // x23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v22; // x1
  struct ListViewObject_o *v23; // x0
  __int64 v24; // x1
  ListViewObject_o *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_435340C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B70694(&EventFortificationListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435340C = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_46;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_46;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v29,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v30.fields.current = (Il2CppObject *)v29.fields.fakeValue;
      *(_OWORD *)&v30.fields.list = *(_OWORD *)&v29.fields.currentCryptoKey;
      v11 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v30,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v12 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v30,
            (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v30.fields.current
          && (v14 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v30.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
        {
          if ( (EventFortificationListViewItem_c *)v30.fields.current->klass->_2.typeHierarchy[v14 - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v30.fields.current;
          else
            current = 0LL;
          if ( !Entity )
            goto LABEL_26;
        }
        else
        {
          current = 0LL;
          if ( !Entity )
            goto LABEL_26;
        }
        if ( !current )
          sub_B7076C(v12, v13);
        userServantEntity = current->fields.userServantEntity;
        if ( !userServantEntity )
          sub_B7076C(v12, v13);
        v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v29.fields.fakeValue = v17;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v28 = v29;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v28, 0LL);
        v19 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
        v20 = v18;
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v27.fields.fakeValue = v19;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v27, 0LL);
        if ( v20 == v12 )
          EventFortificationListViewItem__SetUserServantEntity(current, Entity, 0LL);
LABEL_26:
        if ( v11 )
        {
          if ( !current )
            sub_B7076C(v12, v13);
          EventFortificationListViewItem__ModifyLockItem(current, 0LL);
          EventFortificationListViewItem__ModifyChoiceItem(current, 0LL);
          EventFortificationListViewItem__ModifyPushItem(current, 0LL);
        }
        else if ( !current )
        {
          sub_B7076C(v12, v13);
        }
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v23 = current->fields.viewObject;
          if ( !v23 )
            sub_B7076C(0LL, v22);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v23->klass->vtable._5_SetItem.method)(
            v23,
            current,
            v23->klass->vtable._6_SetItem.methodPtr);
          if ( isIconSizeChange )
          {
            v25 = current->fields.viewObject;
            if ( !v25 )
              sub_B7076C(0LL, v24);
            ListViewObject__SetItemSeed(v25, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_46:
    sub_B7076C(Instance, v8);
  }
}


void __fastcall EventFortificationListViewManager__OnClickBack(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Action_bool__UserServantEntity__o *selectAfterCallback; // x20

  if ( (byte_4353427 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_bool__UserServantEntity__Invoke__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353427 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.selectAfterCallback, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action_bool__UserServantEntity___Invoke(
      selectAfterCallback,
      0,
      0LL,
      (const MethodInfo_26584F4 *)Method_System_Action_bool__UserServantEntity__Invoke__);
  }
}


void __fastcall EventFortificationListViewManager__OnClickBonusFilterKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_435341A & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_435341A = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B7076C(0LL, v3);
    ListViewSort__IncBonusKind2(sort, this->fields.bonusEventIdList, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnClickChoiceTab(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_4353424 & 1) == 0 )
  {
    sub_B70694(&Method_EventFortificationListViewManager_EndClickTabChoice__);
    sub_B70694(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353424 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.modeKind )
    {
      v4 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B70764(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabChoice__,
        0LL);
      EventFortificationListViewManager__StatusRequest(this, v4, v5);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 2, v3);
      EventFortificationListViewManager__RefreshListDisp(this, v6);
      EventFortificationListViewManager__ModifyList(this, 0, v7);
      EventFortificationListViewManager__SetMode_27965572(this, 2, v8);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickCollectLock(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_4353423 & 1) == 0 )
  {
    sub_B70694(&Method_EventFortificationListViewManager_EndClickTabLock__);
    sub_B70694(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353423 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.modeKind )
    {
      v4 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B70764(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabLock__,
        0LL);
      EventFortificationListViewManager__StatusRequest(this, v4, v5);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 1, v3);
      EventFortificationListViewManager__RefreshListDisp(this, v6);
      EventFortificationListViewManager__ModifyList(this, 0, v7);
      EventFortificationListViewManager__SetMode_27965572(this, 2, v8);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickFilterKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v5; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4353418 & 1) == 0 )
  {
    sub_B70694(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_EventFortificationListViewManager_EndSelectFilterKind__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353418 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B70764(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v5 )
      sub_B7076C(v7, v8);
    CommonUI__OpenServantFilterSelectMenu(v5, 1, sort, v6, 0, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnClickListView(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventFortificationListViewManager__OnClickNormalStatus(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  EventFortificationListViewManager_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4353422 & 1) == 0 )
  {
    sub_B70694(&Method_EventFortificationListViewManager_EndClickTabStatus__);
    sub_B70694(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353422 = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B70764(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    EventFortificationListViewManager_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndClickTabStatus__,
      0LL);
    EventFortificationListViewManager__StatusRequest(this, v3, v4);
  }
}


void __fastcall EventFortificationListViewManager__OnClickPushTab(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_4353425 & 1) == 0 )
  {
    sub_B70694(&Method_EventFortificationListViewManager_EndClickTabPush__);
    sub_B70694(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353425 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.modeKind )
    {
      v4 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B70764(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabPush__,
        0LL);
      EventFortificationListViewManager__StatusRequest(this, v4, v5);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 3, v3);
      EventFortificationListViewManager__RefreshListDisp(this, v6);
      EventFortificationListViewManager__ModifyList(this, 0, v7);
      EventFortificationListViewManager__SetMode_27965572(this, 2, v8);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickScaleChange(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *ScaleKindSpriteName; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v13; // w8
  struct ListViewSort_o *sort; // x8
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4353428 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353428 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v13 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v13 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v13 = 1;
LABEL_12:
    this->fields.scaleType = v13;
    this->fields.seed = smallSizeSeed;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType, (ScaleKindSpriteName = this->fields.sort) == 0LL)
    || (scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        ScaleKindSpriteName = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(
                                                  ScaleKindSpriteName,
                                                  this->fields.scaleType,
                                                  0LL),
        !scaleChangeButtonSprite) )
  {
    sub_B7076C(ScaleKindSpriteName, v4);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)ScaleKindSpriteName, 0LL);
  EventFortificationListViewManager__ModifyList(this, 1, v16);
  EventFortificationListViewManager__SetMode_27965572(this, 2, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventFortificationListViewManager__OnClickSelectObject(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int64_t fortificationConfirmDialog; // x0
  __int64 v6; // x10
  __int64 v7; // x10
  EventFortificationListViewObject_o *v8; // x0
  EventMissionProgressRequest_Argument_ProgressData_o **p_targetInUserServantEntity; // x23
  EventFortificationListViewItem_o *Item; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct UserServantEntity_o **p_targetOutUserServantEntity; // x24
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x22
  System_Collections_Generic_List_int__o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v34; // q1
  struct UserServantEntity_o *v35; // x8
  __int128 v36; // q0
  int64_t v37; // x25
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct EventFortificationWorkItem_o *v44; // x8
  System_Int32_array **v45; // x1
  FortificationConfirmDialogComponent_o *v46; // x23
  UserServantEntity_array *v47; // x22
  System_Int32_array *v48; // x21
  System_String_o *v49; // x24
  System_String_o *v50; // x25
  int32_t v51; // w20
  System_Action_o *v52; // x26
  int32_t v53; // w1
  System_Int32_array **v54; // x1
  FortificationConfirmDialogComponent_o *v55; // x23
  UserServantEntity_array *v56; // x22
  System_Int32_array *v57; // x21
  System_String_o *TargetTeamName; // x24
  System_String_o *TargetDetailName; // x25
  int32_t TargetWorkType; // w20
  System_Action_o *v61; // x26
  struct UserServantEntity_o *v62; // x8
  __int128 v63; // q0
  struct UserServantEntity_o *v64; // x8
  __int128 v65; // q0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct UserServantEntity_o *v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct EventFortificationWorkItem_o *v79; // x8
  System_Int32_array **v80; // x1
  int32_t AddPoint; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+90h] [xbp-70h]

  if ( (byte_4353412 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__);
    sub_B70694(&EventFortificationListViewObject_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353412 = 1;
  }
  fortificationConfirmDialog = (int64_t)this->fields.fortificationConfirmDialog;
  if ( !fortificationConfirmDialog )
    goto LABEL_52;
  fortificationConfirmDialog = (int64_t)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)fortificationConfirmDialog,
                                          0LL);
  if ( !fortificationConfirmDialog )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fortificationConfirmDialog, 1, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_52;
  v6 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventFortificationListViewObject_TypeInfo )
  {
    goto LABEL_52;
  }
  v7 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v7 )
    v8 = (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] == EventFortificationListViewObject_TypeInfo
       ? (EventFortificationListViewObject_o *)obj
       : 0LL;
  else
    v8 = 0LL;
  p_targetInUserServantEntity = (EventMissionProgressRequest_Argument_ProgressData_o **)&this->fields.targetInUserServantEntity;
  Item = EventFortificationListViewObject__GetItem(v8, (const MethodInfo *)obj);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v11, v12, v13, v14, v15, v16);
  p_targetOutUserServantEntity = &this->fields.targetOutUserServantEntity;
  this->fields.targetOutUserServantEntity = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    0LL,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_52;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_52;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v25 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    goto LABEL_52;
  userServantEntity = targetFortificationWorkItem->fields.userServantEntity;
  if ( !userServantEntity )
  {
    if ( Item )
    {
      v54 = (System_Int32_array **)Item->fields.userServantEntity;
      *p_targetInUserServantEntity = (EventMissionProgressRequest_Argument_ProgressData_o *)v54;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
        v54,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      if ( v24 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          *p_targetInUserServantEntity,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        fortificationConfirmDialog = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
        if ( v25 )
        {
          System_Collections_Generic_List_int___Add(
            v25,
            fortificationConfirmDialog,
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
          v55 = this->fields.fortificationConfirmDialog;
          v56 = (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                             (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
          v57 = System_Collections_Generic_List_int___ToArray(
                  v25,
                  (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
          TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
          TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
          TargetWorkType = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
          v61 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v61,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
            0LL);
          if ( v55 )
          {
            FortificationConfirmDialogComponent__Open(
              v55,
              0,
              v56,
              v57,
              TargetTeamName,
              TargetDetailName,
              TargetWorkType,
              v61,
              0LL);
            return;
          }
        }
      }
    }
    goto LABEL_52;
  }
  v34 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v86.fields.fakeValue = v34;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v85 = v86;
  fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v85, 0LL);
  if ( !Item )
    goto LABEL_52;
  v35 = Item->fields.userServantEntity;
  if ( !v35 )
    goto LABEL_52;
  v36 = *(_OWORD *)&v35->fields.id.fields.fakeValue;
  v37 = fortificationConfirmDialog;
  *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v35->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v84.fields.fakeValue = v36;
  fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v84, 0LL);
  v44 = this->fields.targetFortificationWorkItem;
  if ( v37 != fortificationConfirmDialog )
  {
    if ( v44 )
    {
      v62 = v44->fields.userServantEntity;
      if ( !v62 )
        return;
      v63 = *(_OWORD *)&v62->fields.id.fields.fakeValue;
      *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&v62->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v86.fields.fakeValue = v63;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v83 = v86;
      fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v83, 0LL);
      v64 = Item->fields.userServantEntity;
      if ( v64 )
      {
        v65 = *(_OWORD *)&v64->fields.id.fields.fakeValue;
        *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v64->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v82.fields.fakeValue = v65;
        if ( fortificationConfirmDialog == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(
                                             &v82,
                                             0LL) )
          return;
        v72 = Item->fields.userServantEntity;
        this->fields.targetInUserServantEntity = v72;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
          (System_Int32_array **)v72,
          v66,
          v67,
          v68,
          v69,
          v70,
          v71);
        v79 = this->fields.targetFortificationWorkItem;
        if ( v79 )
        {
          v80 = (System_Int32_array **)v79->fields.userServantEntity;
          *p_targetOutUserServantEntity = (struct UserServantEntity_o *)v80;
          sub_B70630(
            (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
            v80,
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
          if ( v24 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v24,
              (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetOutUserServantEntity,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
            if ( fortificationConfirmDialog )
            {
              fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                             (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                             (const MethodInfo *)obj);
              if ( v25 )
              {
                System_Collections_Generic_List_int___Add(
                  v25,
                  fortificationConfirmDialog,
                  (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v24,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetInUserServantEntity,
                  (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
                AddPoint = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
                System_Collections_Generic_List_int___Add(
                  v25,
                  AddPoint,
                  (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
                v46 = this->fields.fortificationConfirmDialog;
                v47 = (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                                   (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                v48 = System_Collections_Generic_List_int___ToArray(
                        v25,
                        (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
                v49 = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
                v50 = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
                v51 = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
                v52 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                System_Action___ctor(
                  v52,
                  (Il2CppObject *)this,
                  Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                  0LL);
                if ( v46 )
                {
                  v53 = 2;
                  goto LABEL_50;
                }
              }
            }
          }
        }
      }
    }
LABEL_52:
    sub_B7076C(fortificationConfirmDialog, obj);
  }
  if ( !v44 )
    goto LABEL_52;
  v45 = (System_Int32_array **)v44->fields.userServantEntity;
  *p_targetOutUserServantEntity = (struct UserServantEntity_o *)v45;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    v45,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( !v24 )
    goto LABEL_52;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v24,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetOutUserServantEntity,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
  fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
  if ( !fortificationConfirmDialog )
    goto LABEL_52;
  fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                 (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                 (const MethodInfo *)obj);
  if ( !v25 )
    goto LABEL_52;
  System_Collections_Generic_List_int___Add(
    v25,
    fortificationConfirmDialog,
    (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
  v46 = this->fields.fortificationConfirmDialog;
  v47 = (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                     (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
  v48 = System_Collections_Generic_List_int___ToArray(
          v25,
          (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  v49 = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
  v50 = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
  v51 = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
  v52 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
    0LL);
  if ( !v46 )
    goto LABEL_52;
  v53 = 1;
LABEL_50:
  FortificationConfirmDialogComponent__Open(v46, v53, v47, v48, v49, v50, v51, v52, 0LL);
}


void __fastcall EventFortificationListViewManager__OnClickSelectPush(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 SelfUserGame; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x9
  System_Int32_array **Item; // x0
  EventFortificationListViewItem_o **v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int64_t v23; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v25; // q1
  const MethodInfo *v26; // x2
  UserServantEntity_o *Entity; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x21
  __int64 v29; // x22
  __int64 v30; // x23
  ServantEntity_o *v31; // x25
  System_String_o *v32; // x21
  System_String_o *v33; // x22
  System_Object_array *v34; // x23
  int32_t Rarity; // w26
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x26
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x26
  int32_t v50; // w0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x24
  int32_t v58; // w0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x24
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x24
  EventFortificationListViewItem_o *v73; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v74; // x9
  ServantEntity_o *servantEntity; // x20
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x20
  System_String_o *v83; // x20
  System_String_o *v84; // x22
  System_String_o *v85; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v87; // x25
  __int64 v88; // x0
  __int64 v89; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  if ( (byte_4353429 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&EventFortificationListViewObject_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Rarity_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__0__);
    sub_B70694(&EventFortificationListViewManager___c__DisplayClass95_0_TypeInfo);
    sub_B70694(&StringLiteral_12167/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_B70694(&StringLiteral_12165/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_B70694(&StringLiteral_12166/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_B70694(&StringLiteral_12168/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4353429 = 1;
  }
  v5 = sub_B70764(EventFortificationListViewManager___c__DisplayClass95_0_TypeInfo);
  EventFortificationListViewManager___c__DisplayClass95_0___ctor(
    (EventFortificationListViewManager___c__DisplayClass95_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_69;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  if ( !obj )
    goto LABEL_69;
  v14 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v14
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v14 - 1] != EventFortificationListViewObject_TypeInfo )
  {
    SelfUserGame = sub_B70A60(obj);
    goto LABEL_71;
  }
  Item = (System_Int32_array **)EventFortificationListViewObject__GetItem(
                                  (EventFortificationListViewObject_o *)obj,
                                  (const MethodInfo *)EventFortificationListViewObject_TypeInfo);
  *(_QWORD *)(v5 + 24) = Item;
  v16 = (EventFortificationListViewItem_o **)(v5 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), Item, v17, v18, v19, v20, v21, v22);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_69;
  v23 = *(_QWORD *)(SelfUserGame + 120);
  if ( v23 )
  {
    if ( !*v16 )
      goto LABEL_69;
    userServantEntity = (*v16)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_69;
    v25 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v91.fields.fakeValue = v25;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v90 = v91;
    if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v90, 0LL) )
      goto LABEL_15;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_69;
    SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_69;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
               v23,
               (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_69;
    SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_69;
    v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame;
    v30 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v92.fields.currentCryptoKey = v30;
    *(_QWORD *)&v92.fields.fakeValue = v29;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v92, 0LL);
    if ( !v28 )
      goto LABEL_69;
    v31 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v28,
                               SelfUserGame,
                               (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12168/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12167/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v34 = (System_Object_array *)sub_B706AC(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v34 )
LABEL_69:
      sub_B7076C(SelfUserGame, v7);
    v42 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B70754(SelfUserGame, v34->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( !v34->max_length )
      goto LABEL_71;
    v34->m_Items[0] = (Il2CppObject *)v42;
    sub_B70630((BattleServantConfConponent_o *)v34->m_Items, v42, v36, v37, v38, v39, v40, v41);
    if ( !v31 )
      goto LABEL_69;
    SelfUserGame = (__int64)ServantEntity__getClassName(v31, 0LL);
    v49 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B70754(SelfUserGame, v34->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v34->max_length <= 1 )
      goto LABEL_71;
    v34->m_Items[1] = (Il2CppObject *)v49;
    sub_B70630((BattleServantConfConponent_o *)&v34->m_Items[1], v49, v43, v44, v45, v46, v47, v48);
    v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(Entity->fields.limitCount, 0LL);
    SelfUserGame = (__int64)ServantEntity__getName(v31, v50, -1, 0LL);
    v57 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B70754(SelfUserGame, v34->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v34->max_length <= 2 )
      goto LABEL_71;
    v34->m_Items[2] = (Il2CppObject *)v57;
    sub_B70630((BattleServantConfConponent_o *)&v34->m_Items[2], v57, v51, v52, v53, v54, v55, v56);
    if ( !*v16 )
      goto LABEL_69;
    SelfUserGame = (__int64)(*v16)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_69;
    v58 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
    SelfUserGame = (__int64)Rarity__getRarityType(v58, 0LL);
    v65 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B70754(SelfUserGame, v34->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v34->max_length <= 3 )
      goto LABEL_71;
    v34->m_Items[3] = (Il2CppObject *)v65;
    sub_B70630((BattleServantConfConponent_o *)&v34->m_Items[3], v65, v59, v60, v61, v62, v63, v64);
    if ( !*v16 )
      goto LABEL_69;
    SelfUserGame = (__int64)(*v16)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_69;
    SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
    v72 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B70754(SelfUserGame, v34->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v34->max_length <= 4 )
      goto LABEL_71;
    v34->m_Items[4] = (Il2CppObject *)v72;
    sub_B70630((BattleServantConfConponent_o *)&v34->m_Items[4], v72, v66, v67, v68, v69, v70, v71);
    v73 = *v16;
    if ( !*v16 )
      goto LABEL_69;
    v74 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v73->fields.userServantEntity;
    if ( !v74 )
      goto LABEL_69;
    servantEntity = v73->fields.servantEntity;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v74[6], 0LL);
    if ( !servantEntity )
      goto LABEL_69;
    SelfUserGame = (__int64)ServantEntity__getName(servantEntity, SelfUserGame, -1, 0LL);
    v82 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B70754(SelfUserGame, v34->obj.klass->_1.element_class);
      if ( !SelfUserGame )
      {
LABEL_72:
        v89 = sub_B7078C(SelfUserGame);
        sub_B70738(v89, 0LL);
      }
    }
    if ( v34->max_length > 5 )
    {
      v34->m_Items[5] = (Il2CppObject *)v82;
      sub_B70630((BattleServantConfConponent_o *)&v34->m_Items[5], v82, v76, v77, v78, v79, v80, v81);
      v83 = System_String__Format_44836892(v33, v34, 0LL);
      v84 = LocalizationManager__Get((System_String_o *)StringLiteral_12166/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v85 = LocalizationManager__Get((System_String_o *)StringLiteral_12165/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v87 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v87,
        (Il2CppObject *)v5,
        Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__0__,
        0LL);
      SelfUserGame = (__int64)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_17904172(
          Instance,
          v32,
          v83,
          v84,
          v85,
          1,
          v87,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_69;
    }
LABEL_71:
    v88 = sub_B70798(SelfUserGame);
    sub_B70738(v88, 0LL);
  }
LABEL_15:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  EventFortificationListViewManager__PushRequest(this, *v16, v26);
}


void __fastcall EventFortificationListViewManager__OnClickSortAscendingOrder(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_435341E & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_435341E = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B7076C(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnClickSortButton(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v5; // x21
  ServantSortSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_435341C & 1) == 0 )
  {
    sub_B70694(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_EventFortificationListViewManager_EndSelectSortKind__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_435341C = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B70764(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v5 )
      sub_B7076C(v7, v8);
    CommonUI__OpenServantSortSelectMenu(v5, 3, sort, 0, v6, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnLongPushListView(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 v7; // x10
  EventFortificationListViewItem_o *Item; // x21
  UserServantEntity_o *userServantEntity; // x21
  CommonUI_o *v10; // x20
  ServantStatusDialog_EndDelegate_o *v11; // x22

  if ( (byte_4353415 & 1) == 0 )
  {
    sub_B70694(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B70694(&Method_EventFortificationListViewManager_EndShowServant__);
    sub_B70694(&EventFortificationListViewObject_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353415 = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
    if ( !obj
      || (v7 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1),
          *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7)
      || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != EventFortificationListViewObject_TypeInfo
      || (Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)obj, v5),
          scrollView = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          !Item)
      || (userServantEntity = Item->fields.userServantEntity,
          v10 = (CommonUI_o *)scrollView,
          v11 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v11,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_EndShowServant__,
            0LL),
          !v10) )
    {
LABEL_14:
      sub_B7076C(scrollView, v5);
    }
    CommonUI__OpenServantStatusDialog_17915060(v10, 0, userServantEntity, v11, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnMoveEnd(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UnityEngine_Behaviour_o *v8; // x0
  System_Action_o *CallbackFunc2; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4353411 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353411 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
        if ( !v8
          || (UnityEngine_Behaviour__set_enabled(v8, 1, 0LL),
              (v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL)
          || (((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, Il2CppClass *))v8->klass[1]._1.castClass)(
                v8,
                1LL,
                v8->klass[1]._1.declaringType),
              (v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
        {
          sub_B7076C(v8, v7);
        }
        UIScrollView__UpdatePosition((UIScrollView_o *)v8, 0LL);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_B70630((BattleServantConfConponent_o *)&this->fields.CallbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
        if ( CallbackFunc2 )
          System_Action__Invoke(CallbackFunc2, 0LL);
      }
    }
  }
}


void __fastcall EventFortificationListViewManager__PushRequest(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userServantEntity; // x19
  DataManager_o *v8; // x23
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v16; // x8
  int64_t v17; // x0
  __int128 v18; // q0
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v21; // q0
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w27
  int32_t v24; // w28
  int32_t v25; // w21
  bool IsLock; // w23
  char v27; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v31; // w0
  __int64 v32; // x8
  int32_t randomSettingSupport; // w19
  int32_t v34; // [xsp+50h] [xbp-110h]
  int32_t v35; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  __int64 v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_435342A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_EventFortificationListViewManager_EndPushRequest__);
    sub_B70694(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_435342A = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v8 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v8 || !userServantEntity )
    goto LABEL_21;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v8->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v45, 0LL);
  if ( !v9 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  v16 = *(_QWORD *)&v8->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = v16;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v43, 0LL);
  v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v8->fields.writeMasterDataThread;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_EndPushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v19,
                                        (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v41, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v27 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v32 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v31;
  *(_QWORD *)&v46.fields.currentCryptoKey = v32;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v46, 0LL);
  if ( !v22 )
LABEL_21:
    sub_B7076C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    v35,
    v34,
    v23,
    v24,
    v25,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v37,
    IsLock,
    v27 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != v39,
    0LL);
}


void __fastcall EventFortificationListViewManager__RefreshListDisp(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventFortificationListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  System_Collections_Generic_List_EventFortificationListViewObject__o *v6; // x20
  int v7; // w21
  __int64 v8; // x22
  unsigned int v9; // w8

  if ( (byte_4353408 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
    byte_4353408 = 1;
  }
  ObjectList = EventFortificationListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_13;
  size = ObjectList->fields._size;
  v6 = ObjectList;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v7 = ObjectList->fields._size;
    if ( v7 >= 1 )
    {
      v8 = 0LL;
      v9 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v9 <= (unsigned int)v8 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        ObjectList = (System_Collections_Generic_List_EventFortificationListViewObject__o *)v6->fields._items->m_Items[v8];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_EventFortificationListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        if ( (int)v8 + 1 >= v7 )
          return;
        v9 = v6->fields._size;
        ++v8;
      }
LABEL_13:
      sub_B7076C(ObjectList, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__RequestListObject(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventFortificationListViewObject__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  System_Collections_Generic_List_EventFortificationListViewObject__o *v10; // x21
  int v11; // w24
  __int64 v12; // x25
  unsigned int v13; // w8
  EventFortificationListViewObject_o *v14; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4353410 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventFortificationListViewManager_OnMoveEnd__);
    sub_B70694(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_4353410 = 1;
  }
  ObjectList = EventFortificationListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v10 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v11 = ObjectList->fields._size;
    if ( v11 >= 1 )
    {
      v12 = 0LL;
      v13 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v13 <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v14 = v10->fields._items->m_Items[v12];
        v15 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(v15, (Il2CppObject *)this, Method_EventFortificationListViewManager_OnMoveEnd__, 0LL);
        if ( !v14 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventFortificationListViewObject__Init(
          v14,
          mode,
          v15,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v16);
        if ( (int)v12 + 1 >= v11 )
          return;
        v13 = v10->fields._size;
        ++v12;
      }
LABEL_14:
      sub_B7076C(ObjectList, v8);
    }
  }
}


void __fastcall EventFortificationListViewManager__SetFilterButtonImage(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_435341B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17249/*"btn_filter_on"*/);
    sub_B70694(&StringLiteral_17248/*"btn_filter"*/);
    byte_435341B = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B7076C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17248/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17249/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall EventFortificationListViewManager__SetHeaderMsg(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *recoveryFatigueInfoMsgLabel; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x22
  System_String_o *v7; // x21
  struct EventFortificationWorkItem_o *v8; // x8
  struct EventFortificationEntity_o *eventFortificationEntity; // x9
  Il2CppObject **v10; // x9
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_String_o *v12; // x1
  UILabel_o *v13; // x0
  struct UILabel_o *v14; // x19
  __int64 *v15; // x8

  if ( (byte_435340A & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_11900/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_B70694(&StringLiteral_11898/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_B70694(&StringLiteral_11899/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_B70694(&StringLiteral_6522/*"FORTIFICATION_GUIDE_HELP"*/);
    byte_435340A = 1;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v4 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6522/*"FORTIFICATION_GUIDE_HELP"*/, 0LL);
      targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
      if ( !targetFortificationWorkItem )
        goto LABEL_32;
      v7 = (System_String_o *)v4;
      v8 = this->fields.targetFortificationWorkItem;
      if ( (byte_4353459 & 1) == 0 )
      {
        v4 = sub_B70694(&StringLiteral_1/*""*/);
        byte_4353459 = 1;
        v8 = this->fields.targetFortificationWorkItem;
      }
      eventFortificationEntity = targetFortificationWorkItem->fields.eventFortificationEntity;
      v10 = eventFortificationEntity
          ? (Il2CppObject **)&eventFortificationEntity->fields.name
          : (Il2CppObject **)&StringLiteral_1/*""*/;
      if ( !v8 )
        goto LABEL_32;
      eventFortificationDetailEntity = v8->fields.eventFortificationDetailEntity;
      if ( !eventFortificationDetailEntity )
        goto LABEL_32;
      v4 = (__int64)System_String__Format_44753704(
                      v7,
                      *v10,
                      (Il2CppObject *)eventFortificationDetailEntity->fields.name,
                      0LL);
      if ( !recoveryFatigueInfoMsgLabel )
        goto LABEL_32;
      v12 = (System_String_o *)v4;
      v13 = recoveryFatigueInfoMsgLabel;
      goto LABEL_31;
    case 1:
      v14 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = &StringLiteral_11899/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_29;
    case 2:
      v14 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = &StringLiteral_11898/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_29;
    case 3:
      v14 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = &StringLiteral_11900/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_29:
      v4 = (__int64)LocalizationManager__Get((System_String_o *)*v15, 0LL);
      if ( !v14 )
LABEL_32:
        sub_B7076C(v4, v5);
      v12 = (System_String_o *)v4;
      v13 = v14;
LABEL_31:
      UILabel__set_text(v13, v12, 0LL);
      break;
    default:
      return;
  }
}


void __fastcall EventFortificationListViewManager__SetMode(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        EventFortificationListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.Callback = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.Callback,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventFortificationListViewManager__SetMode_27965572(this, mode, v10);
}


void __fastcall EventFortificationListViewManager__SetMode_27965572(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( mode == 1 )
  {
    v6 = 2;
  }
  else
  {
    if ( mode != 2 )
      return;
    v6 = 3;
  }
  EventFortificationListViewManager__RequestListObject(this, v6, 0.0, v5);
}


void __fastcall EventFortificationListViewManager__SetMode_27965688(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.CallbackFunc2 = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventFortificationListViewManager__SetMode_27965572(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__SetObjectItem(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventFortificationListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_435340F & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_B70694(&EventFortificationListViewObject_TypeInfo);
    byte_435340F = 1;
  }
  if ( !obj
    || (v6 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventFortificationListViewObject_TypeInfo )
  {
    sub_B7076C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  EventFortificationListViewObject__Init(
    (EventFortificationListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall EventFortificationListViewManager__SetSortButtonImage(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8

  if ( (byte_435341F & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_17277/*"btn_sort_up"*/);
    sub_B70694(&StringLiteral_17361/*"btn_txt_up"*/);
    sub_B70694(&StringLiteral_17317/*"btn_txt_new"*/);
    sub_B70694(&StringLiteral_17307/*"btn_txt_down"*/);
    sub_B70694(&StringLiteral_17324/*"btn_txt_old"*/);
    sub_B70694(&StringLiteral_17274/*"btn_sort_down"*/);
    byte_435341F = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_37;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v6 )
      goto LABEL_37;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_37;
    ListViewSort__SetupSortLabelLayout(sort, this->fields.sortKindLabel, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( v8 )
    {
      sortKind = v8->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17324/*"btn_txt_old"*/ : &StringLiteral_17317/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v11->fields.isAscendingOrder;
              v13 = (System_String_o **)&StringLiteral_17274/*"btn_sort_down"*/;
              v14 = (System_String_o **)&StringLiteral_17277/*"btn_sort_up"*/;
LABEL_33:
              if ( isAscendingOrder )
                v17 = v13;
              else
                v17 = v14;
              UISprite__set_spriteName((UISprite_o *)sort, *v17, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17361/*"btn_txt_up"*/ : &StringLiteral_17307/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v16->fields.isAscendingOrder;
              v13 = (System_String_o **)&StringLiteral_17277/*"btn_sort_up"*/;
              v14 = (System_String_o **)&StringLiteral_17274/*"btn_sort_down"*/;
              goto LABEL_33;
            }
          }
        }
      }
    }
LABEL_37:
    sub_B7076C(sort, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__SetStatusKind(
        EventFortificationListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v6; // x8
  __int64 *v7; // x8
  __int64 *v8; // x8
  __int64 *v9; // x8
  const MethodInfo *v10; // x1

  if ( (byte_4353409 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17394/*"button_push_reg"*/);
    sub_B70694(&StringLiteral_17395/*"button_push_unreg"*/);
    sub_B70694(&StringLiteral_17380/*"button_allchoice_reg"*/);
    sub_B70694(&StringLiteral_17383/*"button_alllock_unreg"*/);
    sub_B70694(&StringLiteral_17396/*"button_select_reg"*/);
    sub_B70694(&StringLiteral_17397/*"button_select_unreg"*/);
    sub_B70694(&StringLiteral_17382/*"button_alllock_reg"*/);
    sub_B70694(&StringLiteral_17381/*"button_allchoice_unreg"*/);
    byte_4353409 = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v6 = &StringLiteral_17396/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_17397/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v6, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v7 = &StringLiteral_17382/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v7 = &StringLiteral_17383/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v7, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v8 = &StringLiteral_17380/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v8 = &StringLiteral_17381/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v8, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 3, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v9 = &StringLiteral_17394/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v9 = &StringLiteral_17395/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_B7076C(statusTabButton, *(_QWORD *)&modeKind);
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  EventFortificationListViewManager__SetHeaderMsg(this, v10);
}


void __fastcall EventFortificationListViewManager__StatusRequest(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v15; // x1
  System_Int64_array *v16; // x2
  System_Int64_array *v17; // x1
  bool v18; // w4
  bool v19; // w5
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_4353426 & 1) == 0 )
  {
    sub_B70694(&Method_EventFortificationListViewManager_EndStatusSync__);
    sub_B70694(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4353426 = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( EventFortificationListViewManager__GetSwapChoiceList(this, &choiceList, &unchoiceList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v26,
                                                                       (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v16 = unchoiceList;
        v17 = choiceList;
        v19 = 1;
        v18 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B7076C(Request_WarBoardWallAttackRequest, v15);
    }
  }
  else if ( modeKind == 1 && EventFortificationListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v13,
                                                                     (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v16 = unlockList;
      v17 = lockList;
      v18 = 1;
      v19 = 0;
LABEL_17:
      CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v17, v16, 0, v18, v19, 0LL);
      return;
    }
    goto LABEL_21;
  }
  if ( callback )
    EventFortificationListViewManager_RequestCallbackFunc__Invoke(callback, 0, 0LL);
}


void __fastcall EventFortificationListViewManager__add_Callback(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *Callback; // x21
  struct EventFortificationListViewManager_CallbackFunc_o **p_Callback; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventFortificationListViewManager_o *v10; // x0
  EventFortificationListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_43533FF & 1) == 0 )
  {
    sub_B70694(&EventFortificationListViewManager_CallbackFunc_TypeInfo);
    byte_43533FF = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  p_Callback = &this->fields.Callback;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(Callback, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (EventFortificationListViewManager_CallbackFunc_c *)v7->klass != EventFortificationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B650AC(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventFortificationListViewManager_o *)sub_B70A60(v7);
  EventFortificationListViewManager__remove_Callback(v10, v11, v12);
}


void __fastcall EventFortificationListViewManager__add_CallbackFunc2(
        EventFortificationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *CallbackFunc2; // x21
  struct System_Action_o **p_CallbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventFortificationListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4353401 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_4353401 = 1;
  }
  CallbackFunc2 = (System_Delegate_o *)this->fields.CallbackFunc2;
  p_CallbackFunc2 = &this->fields.CallbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(CallbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B650AC(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventFortificationListViewManager_o *)sub_B70A60(v7);
  EventFortificationListViewManager__remove_CallbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_EventFortificationListViewObject__o *__fastcall EventFortificationListViewManager__get_ClippingObjectList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  int size; // w22
  unsigned int v8; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v9; // x21

  if ( (byte_4353406 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
    byte_4353406 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    do
    {
      if ( objectList->fields._size <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      Component_srcLineSprite = objectList->fields._items->m_Items[v8];
      if ( !Component_srcLineSprite )
        break;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
      if ( !Component_srcLineSprite )
        break;
      v9 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)EventFortificationListViewObject__GetItem(
                                                              (EventFortificationListViewObject_o *)Component_srcLineSprite,
                                                              v5);
      if ( !Component_srcLineSprite )
        break;
      v5 = (const MethodInfo *)Component_srcLineSprite;
      if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
        || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_23985548(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)Component_srcLineSprite,
                                                                    0LL),
            ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
      {
        if ( !v3 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v9,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
      }
      if ( (int)++v8 >= size )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v3;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B7076C(Component_srcLineSprite, v5);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v3;
}


int32_t __fastcall EventFortificationListViewManager__get_ListModeKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_Collections_Generic_List_EventFortificationListViewObject__o *__fastcall EventFortificationListViewManager__get_ObjectList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21

  if ( (byte_4353405 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353405 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v9 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v9 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v9,
                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
        if ( !v3 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
      }
      if ( (__int64)++v8 >= size )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v3;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B7076C(Component_srcLineSprite, v5);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v3;
}


void __fastcall EventFortificationListViewManager__remove_Callback(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *Callback; // x21
  struct EventFortificationListViewManager_CallbackFunc_o **p_Callback; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventFortificationListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4353400 & 1) == 0 )
  {
    sub_B70694(&EventFortificationListViewManager_CallbackFunc_TypeInfo);
    byte_4353400 = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  p_Callback = &this->fields.Callback;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(Callback, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (EventFortificationListViewManager_CallbackFunc_c *)v7->klass != EventFortificationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B650AC(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventFortificationListViewManager_o *)sub_B70A60(v7);
  EventFortificationListViewManager__add_CallbackFunc2(v10, v11, v12);
}


void __fastcall EventFortificationListViewManager__remove_CallbackFunc2(
        EventFortificationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *CallbackFunc2; // x21
  struct System_Action_o **p_CallbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4353402 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_4353402 = 1;
  }
  CallbackFunc2 = (System_Delegate_o *)this->fields.CallbackFunc2;
  p_CallbackFunc2 = &this->fields.CallbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(CallbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B650AC(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B70A60(v7);
  EventFortificationListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager_CallbackFunc___ctor(
        EventFortificationListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventFortificationListViewManager_CallbackFunc__BeginInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = index;
  v13 = kind;
  if ( (byte_434F058 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&EventFortificationListViewManager_ResultKind_TypeInfo);
    byte_434F058 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EventFortificationListViewManager_ResultKind_TypeInfo, &v13, *(_QWORD *)&index);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B70638(this, v11, callback, object);
}


void __fastcall EventFortificationListViewManager_CallbackFunc__EndInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager_CallbackFunc__Invoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  EventFortificationListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  EventFortificationListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  EventFortificationListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (EventFortificationListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind);
      if ( (sub_B706C4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)index, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)index, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B706BC(v22);
      v25 = sub_B70AC0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_B08590(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B70744(v17, v22);
        (*v19)(v21, v26, (unsigned int)index, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B08590(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)index,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)index,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)index, v22);
    goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager_RequestCallbackFunc___ctor(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
}


System_IAsyncResult_o *__fastcall EventFortificationListViewManager_RequestCallbackFunc__BeginInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_434F059 & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    byte_434F059 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall EventFortificationListViewManager_RequestCallbackFunc__EndInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager_RequestCallbackFunc__Invoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  EventFortificationListViewManager_RequestCallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  EventFortificationListViewManager_RequestCallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  EventFortificationListViewManager_RequestCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (EventFortificationListViewManager_RequestCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, isRequest);
      if ( (sub_B706C4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isRequest, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B08590(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B70744(v15, v20);
        (*v17)(v19, isRequest, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B08590(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isRequest, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isRequest,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isRequest, v20);
    goto LABEL_37;
  }
}


void __fastcall EventFortificationListViewManager___c__DisplayClass48_0___ctor(
        EventFortificationListViewManager___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventFortificationListViewManager___c__DisplayClass48_0___CreateList_b__0(
        EventFortificationListViewManager___c__DisplayClass48_0_o *this,
        UserServantEntity_o *data,
        const MethodInfo *method)
{
  ServantClassMaster_o *servantClassMaster; // x20
  EventFortificationListViewManager___c__DisplayClass48_0_o *v4; // x19
  EventFortificationWorkItem_o *targetItem; // x8

  if ( !data
    || (servantClassMaster = this->fields.servantClassMaster,
        v4 = this,
        this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)UserServantEntity__getSvtClassId(data, 0LL),
        !servantClassMaster)
    || (this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)ServantClassMaster__getSupportGroupType(
                                                                              servantClassMaster,
                                                                              (int32_t)this,
                                                                              0LL),
        (targetItem = v4->fields.targetItem) == 0LL) )
  {
    sub_B7076C(this, data);
  }
  return (_DWORD)this == EventFortificationWorkItem__get_ClassId(targetItem, 0LL);
}


bool __fastcall EventFortificationListViewManager___c__DisplayClass48_0___CreateList_b__1(
        EventFortificationListViewManager___c__DisplayClass48_0_o *this,
        UserServantEntity_o *data,
        const MethodInfo *method)
{
  EventFortificationListViewManager___c__DisplayClass48_0_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  struct EventFortificationWorkItem_o *targetItem; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userServantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_434F056 & 1) == 0 )
  {
    this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F056 = 1;
  }
  if ( !data )
    goto LABEL_10;
  v6 = *(_QWORD *)&data->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&data->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                                        v10,
                                                                        0LL);
  targetItem = v4->fields.targetItem;
  if ( !targetItem
    || (userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)targetItem->fields.userServantEntity) == 0LL )
  {
LABEL_10:
    sub_B7076C(this, data);
  }
  return (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(userServantEntity[5], 0LL);
}


void __fastcall EventFortificationListViewManager___c__DisplayClass95_0___ctor(
        EventFortificationListViewManager___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventFortificationListViewManager___c__DisplayClass95_0___OnClickSelectPush_b__0(
        EventFortificationListViewManager___c__DisplayClass95_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_434F057 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__1__);
    byte_434F057 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B70630(&this->fields.__9__1);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_17904524(v7, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B7076C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall EventFortificationListViewManager___c__DisplayClass95_0___OnClickSelectPush_b__1(
        EventFortificationListViewManager___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  EventFortificationListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  EventFortificationListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}