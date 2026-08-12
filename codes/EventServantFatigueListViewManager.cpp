void EventServantFatigueListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v9; // x20
  struct EventServantFatigueListViewManager_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596ACAF & 1) == 0 )
  {
    sub_2213A60(&EventServantFatigueListViewManager_TypeInfo);
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&StringLiteral_6515/*"EventServantFatigueList"*/);
    byte_596ACAF = 1;
  }
  v7 = StringLiteral_6515/*"EventServantFatigueList"*/;
  EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6515/*"EventServantFatigueList"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventServantFatigueListViewManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  SORT_SAVE_KEY = EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v9 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v9, SORT_SAVE_KEY, 3, 0, 0);
  static_fields = EventServantFatigueListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->servantSortStatus,
    (int32_t)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void EventServantFatigueListViewManager___ctor(EventServantFatigueListViewManager_o *this, const MethodInfo *method)
{
  this->fields.updateTime = -1;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EventServantFatigueListViewManager__CallbackRecoverySyncRequest(
        EventServantFatigueListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventServantFatigueListViewManager_o *v4; // x19
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x8
  intptr_t method_code; // x0
  intptr_t v7; // x3
  __int64 v8; // x1
  void (__fastcall *invoke_impl)(intptr_t, __int64, struct UserServantEntity_o *, intptr_t); // x4
  struct UserServantEntity_o *targetInUserServantEntity; // x2

  v4 = this;
  if ( (byte_596AC98 & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_596AC98 = 1;
  }
  if ( !result )
    goto LABEL_10;
  this = (EventServantFatigueListViewManager_o *)System_String__Equals_75686512(
                                                   result,
                                                   (System_String_o *)StringLiteral_23336/*"ng"*/,
                                                   0);
  selectAfterCallback = v4->fields.selectAfterCallback;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( selectAfterCallback )
    {
      method_code = selectAfterCallback->fields.method_code;
      targetInUserServantEntity = v4->fields.targetInUserServantEntity;
      v8 = 1;
      v7 = selectAfterCallback->fields.method;
      invoke_impl = (void (__fastcall *)(intptr_t, __int64, struct UserServantEntity_o *, intptr_t))selectAfterCallback->fields.invoke_impl;
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(this, result);
  }
  if ( !selectAfterCallback )
    goto LABEL_10;
  method_code = selectAfterCallback->fields.method_code;
  v7 = selectAfterCallback->fields.method;
  v8 = 0;
  invoke_impl = (void (__fastcall *)(intptr_t, __int64, struct UserServantEntity_o *, intptr_t))selectAfterCallback->fields.invoke_impl;
  targetInUserServantEntity = 0;
LABEL_9:
  invoke_impl(method_code, v8, targetInUserServantEntity, v7);
}


// local variable allocation has failed, the output may be wrong!
void EventServantFatigueListViewManager__CloseRecovertFatigueDialog(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  int64_t fatigueRecoveryConfirmationDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Request_object; // x0
  struct UserServantEntity_o *targetOutUserServantEntity; // x8
  Il2CppObject *v11; // x19
  int32_t v12; // w21
  __int64 v13; // x2
  struct UserServantEntity_o *v14; // x8
  int32_t v15; // w22
  __int128 v16; // q1
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q1
  int64_t v19; // x20
  int64_t v20; // x4
  ServantRecoverySyncRequest_o *v21; // x0
  int32_t v22; // w1
  int32_t v23; // w2
  int64_t v24; // x3
  int32_t eventId; // w21
  __int64 v26; // x2
  struct UserServantEntity_o *v27; // x8
  int32_t v28; // w20
  __int128 v29; // q1
  __int64 v30; // x2
  struct UserServantEntity_o *targetInUserServantEntity; // x8
  int32_t v32; // w20
  __int128 v33; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+60h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+80h] [xbp-50h]

  if ( (byte_596AC97 & 1) == 0 )
  {
    sub_2213A60(&Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__);
    sub_2213A60(&Method_NetworkManager_getRequest_ServantRecoverySyncRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596AC97 = 1;
  }
  fatigueRecoveryConfirmationDialog = (int64_t)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_31;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)fatigueRecoveryConfirmationDialog, 0);
  if ( !isDecide )
    return;
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_ServantRecoverySyncRequest___);
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v11 = Request_object;
  if ( !this->fields.targetInUserServantEntity )
  {
    if ( !targetOutUserServantEntity )
      return;
    fatigueRecoveryConfirmationDialog = (int64_t)this->fields.targetRecoveryFatigueItem;
    if ( fatigueRecoveryConfirmationDialog )
    {
      eventId = this->fields.eventId;
      fatigueRecoveryConfirmationDialog = EventServantRecoveryFatigueItem__get_Idx(
                                            (EventServantRecoveryFatigueItem_o *)fatigueRecoveryConfirmationDialog,
                                            0);
      v27 = this->fields.targetOutUserServantEntity;
      if ( v27 )
      {
        v28 = fatigueRecoveryConfirmationDialog;
        v29 = *(_OWORD *)&v27->fields.id.fields.fakeValue;
        *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&v27->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v38.fields.fakeValue = v29;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isDecide, v26);
        v34 = v38;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                              &v34,
                                              0);
        if ( v11 )
        {
          v20 = fatigueRecoveryConfirmationDialog;
          v21 = (ServantRecoverySyncRequest_o *)v11;
          v22 = eventId;
          v23 = v28;
          v24 = 0;
          goto LABEL_29;
        }
      }
    }
LABEL_31:
    sub_2213CDC(fatigueRecoveryConfirmationDialog, isDecide);
  }
  v12 = this->fields.eventId;
  fatigueRecoveryConfirmationDialog = (int64_t)this->fields.targetRecoveryFatigueItem;
  if ( !targetOutUserServantEntity )
  {
    if ( fatigueRecoveryConfirmationDialog )
    {
      fatigueRecoveryConfirmationDialog = EventServantRecoveryFatigueItem__get_Idx(
                                            (EventServantRecoveryFatigueItem_o *)fatigueRecoveryConfirmationDialog,
                                            0);
      targetInUserServantEntity = this->fields.targetInUserServantEntity;
      if ( targetInUserServantEntity )
      {
        v32 = fatigueRecoveryConfirmationDialog;
        v33 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v38.fields.fakeValue = v33;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isDecide, v30);
        v35 = v38;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                              &v35,
                                              0);
        if ( v11 )
        {
          v24 = fatigueRecoveryConfirmationDialog;
          v21 = (ServantRecoverySyncRequest_o *)v11;
          v22 = v12;
          v23 = v32;
          v20 = 0;
          goto LABEL_29;
        }
      }
    }
    goto LABEL_31;
  }
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_31;
  fatigueRecoveryConfirmationDialog = EventServantRecoveryFatigueItem__get_Idx(
                                        (EventServantRecoveryFatigueItem_o *)fatigueRecoveryConfirmationDialog,
                                        0);
  v14 = this->fields.targetInUserServantEntity;
  if ( !v14 )
    goto LABEL_31;
  v15 = fatigueRecoveryConfirmationDialog;
  v16 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
  *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v38.fields.fakeValue = v16;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isDecide, v13);
  v37 = v38;
  fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v37, 0);
  v17 = this->fields.targetOutUserServantEntity;
  if ( !v17 )
    goto LABEL_31;
  v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
  v19 = fatigueRecoveryConfirmationDialog;
  *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v36.fields.fakeValue = v18;
  fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v36, 0);
  if ( !v11 )
    goto LABEL_31;
  v20 = fatigueRecoveryConfirmationDialog;
  v21 = (ServantRecoverySyncRequest_o *)v11;
  v22 = v12;
  v23 = v15;
  v24 = v19;
LABEL_29:
  ServantRecoverySyncRequest__beginRequest(v21, v22, v23, v24, v20, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventServantFatigueListViewManager__CreateList(
        EventServantFatigueListViewManager_o *this,
        int32_t eventId,
        EventServantRecoveryFatigueItem_o *targetItem,
        System_Action_bool__UserServantEntity__o *afterCallback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventServantFatigueListViewManager_c *v11; // x0
  int v12; // w8
  struct ListViewSort_o *servantSortStatus; // x1
  struct ListViewSort_o **p_sort; // x23
  __int64 v15; // x1
  __int64 sort; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  TitleInfoControl_o *titleInfo; // x8
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x1
  __int64 v45; // x2
  UnityEngine_Object_c *v46; // x0
  UnityEngine_Object_o *fatigueRecoveryConfirmationDialog; // x24
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  Il2CppObject *fatigueRecoveryConfirmationDialogPrefab; // x24
  __int64 v55; // x1
  __int64 v56; // x2
  UnityEngine_GameObject_o *v57; // x24
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *Component_object; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  System_Int32_array *v69; // x23
  EventUpValSetupInfo_o *v70; // x21
  const MethodInfo *v71; // x2
  __int64 v72; // x2
  __int64 v73; // x23
  unsigned __int64 v74; // x28
  __int64 v75; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  UserServantEntity_o *v77; // x24
  __int128 v78; // q1
  int64_t v79; // x0
  int32_t v80; // w26
  int64_t v81; // x27
  EventServantFatigueListViewItem_o *v82; // x25
  const MethodInfo *v83; // x6
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  __int64 v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  __int64 v93; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v95; // x2
  const MethodInfo *v96; // x1
  struct EventServantRecoveryFatigueItem_o **p_targetRecoveryFatigueItem; // [xsp+0h] [xbp-D0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Quaternion_o v101; // 0:kr00_16.16
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596AC87 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&EventServantFatigueListViewItem_TypeInfo);
    sub_2213A60(&EventServantFatigueListViewManager_TypeInfo);
    sub_2213A60(&EventUpValSetupInfo_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801600);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_596AC87 = 1;
  }
  v11 = EventServantFatigueListViewManager_TypeInfo;
  v12 = *(&EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v100, 0, sizeof(v100));
  if ( !v12 )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo, *(_QWORD *)&eventId, targetItem);
    v11 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v11->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  p_sort = &this->fields.sort;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
    (int32_t)servantSortStatus,
    (System_String_o *)targetItem,
    (System_String_o *)afterCallback,
    (int32_t)method,
    v5,
    v6,
    v7);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_61;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v18);
  sort = NetworkManager__getTime(0);
  titleInfo = this->fields.titleInfo;
  this->fields.updateTime = sort;
  if ( !titleInfo )
    goto LABEL_61;
  TitleInfoControl__setTitleInfo(titleInfo, 0, 1, 0, 83, 0);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_61;
  TitleInfoControl__setBackBtnSprite_46859020((TitleInfoControl_o *)sort, 1, 0, 0, 0);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_61;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_61;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0);
  this->fields.targetInUserServantEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetInUserServantEntity,
    0,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.targetOutUserServantEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetOutUserServantEntity,
    0,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.eventId = eventId;
  this->fields.statusShowUserSvtId = -1;
  this->fields.targetRecoveryFatigueItem = targetItem;
  p_targetRecoveryFatigueItem = &this->fields.targetRecoveryFatigueItem;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetRecoveryFatigueItem,
    (int32_t)targetItem,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.selectAfterCallback = afterCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectAfterCallback,
    (int32_t)afterCallback,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v46 = UnityEngine_Object_TypeInfo;
  fatigueRecoveryConfirmationDialog = (UnityEngine_Object_o *)this->fields.fatigueRecoveryConfirmationDialog;
  this->fields.modeKind = 0;
  if ( !*(&v46->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v46, v44, v45);
  sort = UnityEngine_Object__op_Equality(0, fatigueRecoveryConfirmationDialog, 0);
  if ( (sort & 1) != 0 )
  {
    v102.fields.x = 0.0;
    v102.fields.y = 0.0;
    fatigueRecoveryConfirmationDialogPrefab = (Il2CppObject *)this->fields.fatigueRecoveryConfirmationDialogPrefab;
    v102.fields.z = 0.0;
    v101 = UnityEngine_Quaternion__Internal_FromEulerRad(v102, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55, v56);
    v103.fields.x = 0.0;
    v103.fields.y = 0.0;
    v103.fields.z = 0.0;
    sort = (__int64)UnityEngine_Object__Instantiate_object__59717424(
                      fatigueRecoveryConfirmationDialogPrefab,
                      v103,
                      v101,
                      (const MethodInfo_38F3730 *)Method_UnityEngine_Object_Instantiate_GameObject____91801600);
    if ( !sort )
      goto LABEL_61;
    v57 = (UnityEngine_GameObject_o *)sort;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)sort, 0);
    sort = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_61;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)sort, 0);
    sort = (__int64)UnityEngine_GameObject__get_transform(v57, 0);
    if ( !sort )
      goto LABEL_61;
    v104.fields.x = 0.0;
    v104.fields.y = 0.0;
    v104.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)sort, v104, 0);
    sort = (__int64)UnityEngine_GameObject__get_transform(v57, 0);
    if ( !sort )
      goto LABEL_61;
    v105.fields.x = 0.0;
    v105.fields.y = 0.0;
    v105.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)sort, v105, 0);
    sort = (__int64)UnityEngine_GameObject__get_transform(v57, 0);
    if ( !sort )
      goto LABEL_61;
    v106.fields.x = 1.0;
    v106.fields.y = 1.0;
    v106.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)sort, v106, 0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v57,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___);
    this->fields.fatigueRecoveryConfirmationDialog = (struct FatigueRecoveryConfirmationDialog_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.fatigueRecoveryConfirmationDialog,
      (int32_t)Component_object,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
    sort = (__int64)this->fields.fatigueRecoveryConfirmationDialog;
    if ( !sort )
      goto LABEL_61;
    sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
    if ( !sort )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 0, 0);
  }
  if ( !*p_sort )
    goto LABEL_61;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_32;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_32;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_32:
    this->fields.seed = normalSizeSeed;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
      (int32_t)normalSizeSeed,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_61;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0);
  if ( !scaleChangeButtonSprite )
    goto LABEL_61;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  sort = sub_2213B20(int___TypeInfo, 1);
  if ( !sort )
    goto LABEL_61;
  v69 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
    goto LABEL_62;
  *(_DWORD *)(sort + 32) = eventId;
  v70 = (EventUpValSetupInfo_o *)sub_2213CCC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_48741124(v70, v69, 1, 0, 0, 0);
  EventServantFatigueListViewManager__SetUpBonusFilterButton(this, v70, v71);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_61;
  sort = (__int64)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_61;
  sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0);
  if ( !sort )
    goto LABEL_61;
  v73 = sort;
  if ( (int)*(_QWORD *)(sort + 24) >= 1 )
  {
    v74 = 0;
    v75 = (unsigned int)*(_QWORD *)(sort + 24);
    while ( v74 < *(unsigned int *)(v73 + 24) )
    {
      if ( !*p_targetRecoveryFatigueItem )
        goto LABEL_61;
      userServantEntity = (*p_targetRecoveryFatigueItem)->fields.userServantEntity;
      v77 = *(UserServantEntity_o **)(v73 + 32 + 8 * v74);
      if ( userServantEntity )
      {
        v78 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v100.fields.fakeValue = v78;
      }
      else
      {
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v72);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v100, -1, 0);
      }
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v72);
      v99 = v100;
      v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v99, 0);
      v80 = this->fields.eventId;
      v81 = v79;
      v82 = (EventServantFatigueListViewItem_o *)sub_2213CCC(EventServantFatigueListViewItem_TypeInfo);
      EventServantFatigueListViewItem___ctor(v82, v77, v80, v81, v70, targetItem, v83);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_61;
      v90 = *(_QWORD *)(sort + 16);
      v91 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v90 )
        goto LABEL_61;
      v92 = *(int *)(sort + 24);
      if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v82,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
      }
      else
      {
        v93 = v90 + 8 * v92;
        *(_DWORD *)(sort + 24) = v92 + 1;
        *(_QWORD *)(v93 + 32) = v82;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v93 + 32), (int32_t)v82, v84, v85, v86, v87, v88, v89);
      }
      if ( v75 == ++v74 )
        goto LABEL_57;
    }
LABEL_62:
    sub_2213CE4(sort);
  }
LABEL_57:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v72);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
LABEL_61:
    sub_2213CDC(sort, v15);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
  EventServantFatigueListViewManager__SetStatusKind(this, this->fields.modeKind, v95);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  EventServantFatigueListViewManager__SetFilterButtonImage(this, v96);
}


void EventServantFatigueListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  EventServantFatigueListViewManager_c *v3; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_596AC81 & 1) == 0 )
  {
    sub_2213A60(&EventServantFatigueListViewManager_TypeInfo);
    byte_596AC81 = 1;
  }
  v3 = EventServantFatigueListViewManager_TypeInfo;
  if ( !*(&EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo, v1, v2);
    v3 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v3->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_2213CDC(0, v1);
  ListViewSort__DeleteContinueData(servantSortStatus, 0);
}


void EventServantFatigueListViewManager__DestroyList(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  this->fields.updateTime = -1;
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, v3);
  ListViewSort__Save(sort, 0);
}


void EventServantFatigueListViewManager__EndClickTabChoice(
        EventServantFatigueListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  EventServantFatigueListViewManager__SetStatusKind(this, 2, method);
  EventServantFatigueListViewManager__RefreshListDisp(this, v4);
  EventServantFatigueListViewManager__ModifyList(this, 0, v5);
  EventServantFatigueListViewManager__SetMode_38916472(this, 2, v6);
}


void EventServantFatigueListViewManager__EndClickTabLock(
        EventServantFatigueListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  EventServantFatigueListViewManager__SetStatusKind(this, 1, method);
  EventServantFatigueListViewManager__RefreshListDisp(this, v4);
  EventServantFatigueListViewManager__ModifyList(this, 0, v5);
  EventServantFatigueListViewManager__SetMode_38916472(this, 2, v6);
}


void EventServantFatigueListViewManager__EndClickTabPush(
        EventServantFatigueListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  EventServantFatigueListViewManager__SetStatusKind(this, 3, method);
  EventServantFatigueListViewManager__RefreshListDisp(this, v4);
  EventServantFatigueListViewManager__ModifyList(this, 0, v5);
  EventServantFatigueListViewManager__SetMode_38916472(this, 2, v6);
}


void EventServantFatigueListViewManager__EndClickTabStatus(
        EventServantFatigueListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  EventServantFatigueListViewManager__SetStatusKind(this, 0, method);
  EventServantFatigueListViewManager__ModifyList(this, 0, v4);
  EventServantFatigueListViewManager__SetMode_38916472(this, 2, v5);
}


void EventServantFatigueListViewManager__EndPushRequest(
        EventServantFatigueListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventServantFatigueListViewManager__ModifyList(this, 0, method);
  EventServantFatigueListViewManager__SetMode_38916472(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void EventServantFatigueListViewManager__EndSelectFilterKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x1

  if ( (byte_596AC9D & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AC9D = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    EventServantFatigueListViewManager__SetFilterButtonImage(this, v6);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_2213CDC(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)sort, 0, 0);
}


void EventServantFatigueListViewManager__EndSelectSortKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596ACA1 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596ACA1 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventServantFatigueListViewManager__EndShowServant(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_596AC9A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AC9A = 1;
  }
  EventServantFatigueListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventServantFatigueListViewManager__ModifyList(this, 0, v4);
  EventServantFatigueListViewManager__SetMode_38916472(this, 2, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void EventServantFatigueListViewManager__EndStatusSync(
        EventServantFatigueListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventServantFatigueListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  MissionNaviTransitionBoardItem_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0;
    sub_2213A04(p_requestCallback, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))requestCallback->fields.invoke_impl)(
      requestCallback->fields.method_code,
      1,
      requestCallback->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t EventServantFatigueListViewManager__GetAmountSortValue(
        EventServantFatigueListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  EventServantFatigueListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int64_t v7; // x21
  int32_t v8; // w22
  __int64 v9; // x2
  __int64 naturalAligment; // x10
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  System_Collections_Generic_List_UIDragDropListViewSurface__c *klass; // x23
  void *monitor; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v4 = this;
  if ( (byte_596AC9B & 1) == 0 )
  {
    sub_2213A60(&EventServantFatigueListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (EventServantFatigueListViewManager_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596AC9B = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      this = (EventServantFatigueListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      this = (EventServantFatigueListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)this,
                                                       v8,
                                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (EventServantFatigueListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != EventServantFatigueListViewItem_TypeInfo )
        break;
      dropList = this->fields.dropList;
      if ( !dropList )
        break;
      klass = dropList[2].klass;
      monitor = dropList[2].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId, v9);
      *(_QWORD *)&v15.fields.currentCryptoKey = klass;
      *(_QWORD *)&v15.fields.fakeValue = monitor;
      ++v8;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0) == svtId )
        ++v7;
      if ( size == v8 )
        return v7;
    }
LABEL_19:
    sub_2213CDC(this, *(_QWORD *)&svtId);
  }
  return 0;
}


void EventServantFatigueListViewManager__GetInRecoveryTime(
        EventServantFatigueListViewManager_o *this,
        int64_t recoveryFatigueTime,
        System_String_o **beforeTime,
        System_String_o **afterTime,
        bool isMatch,
        const MethodInfo *method)
{
  System_String_o *RestTime4; // x24
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x0
  int32_t RecoveryRate; // w0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  int v36; // w23
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  int64_t Time; // x22
  float v42; // s0
  __int64 v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  System_String_o *v46; // x20
  System_String_o *v47; // x0
  System_String_o *v48; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7

  if ( (byte_596AC95 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_12075/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/);
    sub_2213A60(&StringLiteral_12087/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/);
    sub_2213A60(&StringLiteral_12175/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/);
    byte_596AC95 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, recoveryFatigueTime, beforeTime);
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1, 0);
  if ( System_String__IsNullOrEmpty(RestTime4, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12087/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0);
    *beforeTime = v14;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)beforeTime, (int32_t)v14, v15, v16, v17, v18, v19, v20);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12075/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0);
    goto LABEL_22;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !isMatch )
  {
    if ( targetRecoveryFatigueItem )
    {
      RecoveryRate = EventServantRecoveryFatigueItem__get_RecoveryRate(targetRecoveryFatigueItem, 0);
      goto LABEL_14;
    }
LABEL_27:
    sub_2213CDC(targetRecoveryFatigueItem, v12);
  }
  if ( !targetRecoveryFatigueItem )
    goto LABEL_27;
  RecoveryRate = EventServantRecoveryFatigueItem__get_IndividualityRate(targetRecoveryFatigueItem, 0);
LABEL_14:
  v36 = RecoveryRate;
  *beforeTime = RestTime4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)beforeTime, (int32_t)RestTime4, v30, v31, v32, v33, v34, v35);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v37, v38);
  Time = NetworkManager__getTime(0);
  v42 = (float)(recoveryFatigueTime - Time) / (float)((float)v36 / 1000.0);
  if ( v42 == INFINITY )
    v43 = 0x8000000000000000LL;
  else
    v43 = (__int64)v42;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39, v40);
  v21 = LocalizationManager__GetRestTime4(v43 + Time, -1, 0);
LABEL_22:
  *afterTime = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)afterTime, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  if ( isMatch )
  {
    v46 = *afterTime;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44, v45);
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_12175/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0);
    v48 = System_String__Concat_75651716(v46, v47, 0);
    *afterTime = v48;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)afterTime, (int32_t)v48, v49, v50, v51, v52, v53, v54);
  }
}


System_String_o *EventServantFatigueListViewManager__GetIndividualityName(
        EventServantFatigueListViewManager_o *this,
        System_String_array *array,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v4; // x20
  System_Text_StringBuilder_o *appended; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  signed __int64 v8; // x21
  __int64 v9; // x2
  System_String_o *v10; // x0

  if ( (byte_596AC94 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_12176/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/);
    byte_596AC94 = 1;
  }
  v4 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0);
  if ( !array )
    goto LABEL_15;
  max_length = array->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned __int64)(unsigned int)max_length )
        sub_2213CE4(appended);
      if ( !v4 )
        break;
      appended = System_Text_StringBuilder__Append_75735064(v4, array->m_Items[v8++], 0);
      if ( v8 < SLODWORD(array->max_length) )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v9);
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12176/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/, 0);
        appended = System_Text_StringBuilder__Append_75735064(v4, v10, 0);
      }
      LODWORD(max_length) = array->max_length;
      if ( v8 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_2213CDC(appended, v6);
  }
LABEL_13:
  if ( !v4 )
    goto LABEL_15;
  return ((System_String_o *(__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
           v4,
           v4->klass->vtable._3_ToString.method);
}


EventServantFatigueListViewItem_o *EventServantFatigueListViewManager__GetItem(
        EventServantFatigueListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventServantFatigueListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596AC8E & 1) == 0 )
  {
    sub_2213A60(&EventServantFatigueListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596AC8E = 1;
  }
  result = (EventServantFatigueListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventServantFatigueListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (EventServantFatigueListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != EventServantFatigueListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


void EventServantFatigueListViewManager__GetOutRecoveryTime(
        EventServantFatigueListViewManager_o *this,
        int64_t recoveryFatigueTime,
        System_String_o **beforeTime,
        System_String_o **afterTime,
        bool isMatch,
        const MethodInfo *method)
{
  System_String_o *RestTime4; // x24
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  __int64 v22; // x2
  System_String_o *v23; // x21
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o **v39; // x0
  EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x0
  int32_t IndividualityRate; // w0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int v48; // w23
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  int64_t Time; // x24
  float v54; // s0
  __int64 v55; // x22
  System_String_o *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  __int64 v63; // x1
  __int64 v64; // x2
  System_String_o *v65; // x20
  System_String_o *v66; // x0

  if ( (byte_596AC96 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_12075/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/);
    sub_2213A60(&StringLiteral_12087/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/);
    sub_2213A60(&StringLiteral_12175/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/);
    byte_596AC96 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, recoveryFatigueTime, beforeTime);
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1, 0);
  if ( System_String__IsNullOrEmpty(RestTime4, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12087/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0);
    *beforeTime = v14;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)beforeTime, (int32_t)v14, v15, v16, v17, v18, v19, v20);
    if ( isMatch )
    {
      v23 = *beforeTime;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12175/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0);
      v25 = System_String__Concat_75651716(v23, v24, 0);
      *beforeTime = v25;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)beforeTime, (int32_t)v25, v26, v27, v28, v29, v30, v31);
    }
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12075/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0);
    v39 = afterTime;
    *afterTime = v32;
LABEL_31:
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v39, (int32_t)v32, v33, v34, v35, v36, v37, v38);
    return;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( isMatch )
  {
    if ( targetRecoveryFatigueItem )
    {
      IndividualityRate = EventServantRecoveryFatigueItem__get_IndividualityRate(targetRecoveryFatigueItem, 0);
      goto LABEL_20;
    }
LABEL_33:
    sub_2213CDC(targetRecoveryFatigueItem, v12);
  }
  if ( !targetRecoveryFatigueItem )
    goto LABEL_33;
  IndividualityRate = EventServantRecoveryFatigueItem__get_RecoveryRate(targetRecoveryFatigueItem, 0);
LABEL_20:
  v48 = IndividualityRate;
  *beforeTime = RestTime4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)beforeTime, (int32_t)RestTime4, v42, v43, v44, v45, v46, v47);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v49, v50);
  Time = NetworkManager__getTime(0);
  v54 = (float)((float)v48 / 1000.0) * (float)(recoveryFatigueTime - Time);
  if ( v54 == INFINITY )
    v55 = 0x8000000000000000LL;
  else
    v55 = (__int64)v54;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51, v52);
  v56 = LocalizationManager__GetRestTime4(v55 + Time, -1, 0);
  *afterTime = v56;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)afterTime, (int32_t)v56, v57, v58, v59, v60, v61, v62);
  if ( isMatch )
  {
    v65 = *beforeTime;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v63, v64);
    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12175/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0);
    v32 = System_String__Concat_75651716(v65, v66, 0);
    v39 = beforeTime;
    *beforeTime = v32;
    goto LABEL_31;
  }
}


bool EventServantFatigueListViewManager__GetSwapChoiceList(
        EventServantFatigueListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_596ACA5 & 1) == 0 )
  {
    sub_2213A60(&EventServantFatigueListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596ACA5 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != EventServantFatigueListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 128);
      if ( v21 && *(_BYTE *)(Item + 201) )
      {
        if ( *(_BYTE *)(Item + 170) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *choiceList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unchoiceList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unchoiceList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


bool EventServantFatigueListViewManager__GetSwapLockList(
        EventServantFatigueListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_596ACA4 & 1) == 0 )
  {
    sub_2213A60(&EventServantFatigueListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596ACA4 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != EventServantFatigueListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 128);
      if ( v21 && *(_BYTE *)(Item + 200) )
      {
        if ( *(_BYTE *)(Item + 169) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *lockList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unlockList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unlockList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


void EventServantFatigueListViewManager__InitBackListView(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  EventServantFatigueListViewManager__StatusRequest(this, 0, v2);
  EventServantFatigueListViewManager__SetStatusKind(this, 0, v4);
}


void EventServantFatigueListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  EventServantFatigueListViewManager_c *v3; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_596AC82 & 1) == 0 )
  {
    sub_2213A60(&EventServantFatigueListViewManager_TypeInfo);
    byte_596AC82 = 1;
  }
  v3 = EventServantFatigueListViewManager_TypeInfo;
  if ( !*(&EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo, v1, v2);
    v3 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v3->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_2213CDC(0, v1);
  ListViewSort__InitLoad(servantSortStatus, 0);
}


bool EventServantFatigueListViewManager__IsMatchIndividuality(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  __int64 v7; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v9; // x20
  unsigned __int64 v10; // x25
  struct EventServantRecoveryFatigueItem_o *v11; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t v15; // w21
  Il2CppObject *v16; // x22
  struct EventServantRecoveryFatigueItem_o *v17; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v18; // x8
  int32_t v19; // w23
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_596AC93 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AC93 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    goto LABEL_25;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)targetRecoveryFatigueItem->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0);
  if ( !v6 )
    goto LABEL_25;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v6,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)this->fields.targetRecoveryFatigueItem;
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)EventServantRecoveryFatigueItem__get_Individuality(
                                  (EventServantRecoveryFatigueItem_o *)Instance,
                                  0);
    if ( !Instance )
      goto LABEL_25;
    m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
    v9 = Instance;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)m_CancellationTokenSource )
          sub_2213CE4(Instance);
        v11 = this->fields.targetRecoveryFatigueItem;
        if ( !v11 )
          break;
        userServantEntity = v11->fields.userServantEntity;
        if ( !userServantEntity )
          break;
        v13 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v14 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        v15 = *((_DWORD *)&v9->fields._DispLog + v10);
        v16 = entity;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v7);
        *(_QWORD *)&v22.fields.currentCryptoKey = v13;
        *(_QWORD *)&v22.fields.fakeValue = v14;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v22, 0);
        v17 = this->fields.targetRecoveryFatigueItem;
        if ( !v17 )
          break;
        v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v17->fields.userServantEntity;
        if ( !v18 )
          break;
        v19 = (int)Instance;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18[8], 0);
        if ( !v16 )
          break;
        Instance = (DataManager_o *)ServantEntity__IsIndividuality(
                                      (ServantEntity_o *)v16,
                                      v19,
                                      (int32_t)Instance,
                                      v15,
                                      0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
          if ( (__int64)++v10 < (int)m_CancellationTokenSource )
            continue;
        }
        return (unsigned __int8)Instance & 1;
      }
LABEL_25:
      sub_2213CDC(Instance, v4);
    }
  }
  LOBYTE(Instance) = 0;
  return (unsigned __int8)Instance & 1;
}


void EventServantFatigueListViewManager__ModifyItem(
        EventServantFatigueListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 naturalAligment; // x11
  EventServantFatigueListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v15; // q0
  __int128 v16; // q1
  int v17; // w8
  int64_t v18; // x0
  Il2CppObject v19; // q1
  UnityEngine_Object_o *viewObject; // x21
  __int64 v21; // x1
  struct ListViewObject_o *v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-A0h] BYREF
  __int64 v26; // [xsp+60h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o *v27; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_596AC8B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&EventServantFatigueListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AC8B = 1;
  }
  itemList = this->fields.itemList;
  memset(&v28, 0, sizeof(v28));
  if ( itemList )
  {
    UserGameMaster__getSelfUserGame(0);
    if ( usrSvtId < 1 )
    {
      Entity = 0;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_37;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_37;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v25,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v28 = *(System_Collections_Generic_List_Enumerator_object__o *)&v25.fields.currentCryptoKey;
      v26 = 0;
      v27 = &v28;
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v28,
               (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v9 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v28,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v28.fields._current
          && (naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment,
              v28.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (EventServantFatigueListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = (EventServantFatigueListViewItem_o *)v28.fields._current;
          else
            current = 0;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_2213CDC(v9, v10);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_2213CDC(v9, v10);
            v15 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            v16 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            v17 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v25.fields.currentCryptoKey = v15;
            *(_OWORD *)&v25.fields.fakeValue = v16;
            if ( !v17 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
            v24 = v25;
            v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v24, 0);
            v19 = Entity[2];
            *(Il2CppObject *)&v23.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v23.fields.fakeValue = v19;
            if ( v18 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v23, 0) )
              EventServantFatigueListViewItem__ModifyItem(current, (UserServantEntity_o *)Entity, v11);
            goto LABEL_26;
          }
        }
        else
        {
          current = 0;
          if ( Entity )
            goto LABEL_15;
        }
        if ( !current )
          sub_2213CDC(v9, v10);
LABEL_26:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
        {
          v22 = current->fields.viewObject;
          if ( !v22 )
            sub_2213CDC(0, v21);
          ((void (__fastcall *)(struct ListViewObject_o *, EventServantFatigueListViewItem_o *, const MethodInfo *))v22->klass->vtable._5_SetItem.methodPtr)(
            v22,
            current,
            v22->klass->vtable._5_SetItem.method);
        }
      }
    }
LABEL_37:
    sub_2213CDC(Instance, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventServantFatigueListViewManager__ModifyList(
        EventServantFatigueListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t sort; // x0
  __int64 v5; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v7; // x25
  int64_t v8; // x21
  int size; // w29
  unsigned __int64 v10; // x19
  __int64 v11; // x8
  __int128 v12; // q0
  __int128 v13; // q1
  int v14; // w8
  int64_t v15; // x22
  int32_t v16; // w23
  int64_t v17; // x24
  __int64 naturalAligment; // x10
  __int64 v19; // x8
  __int128 v20; // q0
  __int128 v21; // q1
  int v22; // w8
  __int64 v23; // x8
  __int128 v24; // q0
  __int128 v25; // q1
  int v26; // w8
  int64_t v27; // x0
  const MethodInfo *v28; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+70h] [xbp-80h]

  if ( (byte_596AC8D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&EventServantFatigueListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AC8D = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_32;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_32;
  sort = (int64_t)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_32;
  sort = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0);
  if ( !sort )
    goto LABEL_32;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_32;
  v7 = *(unsigned int *)(sort + 24);
  v8 = sort;
  if ( (int)v7 >= 1 )
  {
    size = itemList->fields._size;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= *(unsigned int *)(v8 + 24) )
        sub_2213CE4(sort);
      v11 = *(_QWORD *)(v8 + 8 * v10 + 32);
      if ( !v11 )
        break;
      v12 = *(_OWORD *)(v11 + 16);
      v13 = *(_OWORD *)(v11 + 32);
      v14 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v33.fields.currentCryptoKey = v12;
      *(_OWORD *)&v33.fields.fakeValue = v13;
      if ( !v14 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isIconSizeChange, v5);
      v32 = v33;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v32, 0);
      if ( size >= 1 )
      {
        v15 = sort;
        v16 = 0;
        while ( 1 )
        {
          sort = (int64_t)this->fields.itemList;
          if ( !sort )
            goto LABEL_32;
          sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)sort,
                            v16,
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !sort )
            goto LABEL_32;
          v17 = sort;
          naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)naturalAligment
            || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * naturalAligment - 8) != EventServantFatigueListViewItem_TypeInfo )
          {
            goto LABEL_32;
          }
          v19 = *(_QWORD *)(sort + 128);
          if ( v19 )
          {
            v20 = *(_OWORD *)(v19 + 16);
            v21 = *(_OWORD *)(v19 + 32);
            v22 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v33.fields.currentCryptoKey = v20;
            *(_OWORD *)&v33.fields.fakeValue = v21;
            if ( !v22 )
              j_il2cpp_runtime_class_init_0(
                CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                isIconSizeChange,
                v5);
            v31 = v33;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v31, 0);
            if ( sort == v15 )
              break;
          }
          if ( size == ++v16 )
            goto LABEL_30;
        }
        v23 = *(_QWORD *)(v17 + 128);
        if ( !v23 )
          break;
        v24 = *(_OWORD *)(v23 + 16);
        v25 = *(_OWORD *)(v23 + 32);
        v26 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v33.fields.currentCryptoKey = v24;
        *(_OWORD *)&v33.fields.fakeValue = v25;
        if ( !v26 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isIconSizeChange, v5);
        v30 = v33;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v30, 0);
        EventServantFatigueListViewManager__ModifyLockItem(this, v27, 1, isIconSizeChange, v28);
      }
LABEL_30:
      if ( ++v10 == v7 )
        return;
    }
LABEL_32:
    sub_2213CDC(sort, isIconSizeChange);
  }
}


void EventServantFatigueListViewManager__ModifyLockItem(
        EventServantFatigueListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v13; // w25
  int64_t v14; // x0
  const MethodInfo *v15; // x1
  System_String_o *v16; // x2
  __int64 naturalAligment; // x11
  Il2CppObject *current; // x22
  Il2CppClass *klass; // x8
  __int128 v20; // q0
  Il2CppType byval_arg; // q1
  int v22; // w8
  int64_t v23; // x0
  Il2CppObject v24; // q1
  int64_t v25; // x24
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  UnityEngine_Object_o *v34; // x23
  __int64 v35; // x1
  Il2CppClass *v36; // x0
  __int64 v37; // x1
  ListViewObject_o *v38; // x0
  __int64 v39; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-B0h] BYREF
  __int64 v43; // [xsp+60h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o *v44; // [xsp+68h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_596AC8C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&EventServantFatigueListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AC8C = 1;
  }
  itemList = this->fields.itemList;
  memset(&v45, 0, sizeof(v45));
  if ( itemList )
  {
    UserGameMaster__getSelfUserGame(0);
    if ( usrSvtId < 1 )
    {
      Entity = 0;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_45;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_45;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v42,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v13 = !isIconSizeChange && isInit;
      v45 = *(System_Collections_Generic_List_Enumerator_object__o *)&v42.fields.currentCryptoKey;
      v43 = 0;
      v44 = &v45;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v45,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v14 & 1) == 0 )
        {
          v39 = v43;
          System_Collections_Generic_List_Enumerator_object___Dispose(
            v44,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( v39 )
            sub_2213CD4(v39);
          return;
        }
        if ( v45.fields._current
          && (naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment,
              v45.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (EventServantFatigueListViewItem_c *)v45.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = v45.fields._current;
          else
            current = 0;
          if ( !Entity )
            goto LABEL_26;
        }
        else
        {
          current = 0;
          if ( !Entity )
            goto LABEL_26;
        }
        if ( !current )
          sub_2213CDC(v14, v15);
        klass = current[8].klass;
        if ( !klass )
          sub_2213CDC(v14, v15);
        v20 = *(_OWORD *)&klass->_1.name;
        byval_arg = klass->_1.byval_arg;
        v22 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v42.fields.currentCryptoKey = v20;
        *(Il2CppType *)&v42.fields.fakeValue = byval_arg;
        if ( !v22 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
        v41 = v42;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v41, 0);
        v24 = Entity[2];
        v25 = v23;
        *(Il2CppObject *)&v40.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v40.fields.fakeValue = v24;
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v40, 0);
        if ( v25 == v14 )
        {
          current[8].klass = (Il2CppClass *)Entity;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&current[8], (int32_t)Entity, v16, v26, v27, v28, v29, v30);
          EventServantFatigueListViewItem__UpdateServantInfoAndSortInfo(
            (EventServantFatigueListViewItem_o *)current,
            v31);
        }
LABEL_26:
        if ( v13 )
        {
          if ( !current )
            sub_2213CDC(v14, v15);
          EventServantFatigueListViewItem__ModifyLockItem((EventServantFatigueListViewItem_o *)current, v15);
          EventServantFatigueListViewItem__ModifyChoiceItem((EventServantFatigueListViewItem_o *)current, v32);
          EventServantFatigueListViewItem__ModifyPushItem((EventServantFatigueListViewItem_o *)current, v33);
        }
        else if ( !current )
        {
          sub_2213CDC(v14, v15);
        }
        v34 = (UnityEngine_Object_o *)current[7].klass;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
        if ( UnityEngine_Object__op_Inequality(v34, 0, 0) )
        {
          v36 = current[7].klass;
          if ( !v36 )
            sub_2213CDC(0, v35);
          (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v36->_1.image + 49))(
            v36,
            current,
            *((_QWORD *)v36->_1.image + 50));
          if ( isIconSizeChange )
          {
            v38 = (ListViewObject_o *)current[7].klass;
            if ( !v38 )
              sub_2213CDC(0, v37);
            ListViewObject__SetItemSeed(v38, (ListViewItem_o *)current, this->fields.seed, 0);
          }
        }
      }
    }
LABEL_45:
    sub_2213CDC(Instance, v10);
  }
}


void EventServantFatigueListViewManager__OnClickBack(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x20

  if ( (byte_596ACAB & 1) == 0 )
  {
    sub_2213A60(&Method_EventServantFatigueListViewManager_OnClickBack__);
    byte_596ACAB = 1;
  }
  v3 = Method_EventServantFatigueListViewManager_OnClickBack__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventServantFatigueListViewManager_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectAfterCallback, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))selectAfterCallback->fields.invoke_impl)(
      selectAfterCallback->fields.method_code,
      0,
      0,
      selectAfterCallback->fields.method);
  }
}


void EventServantFatigueListViewManager__OnClickBonusFilterKind(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_596AC9E & 1) == 0 )
  {
    sub_2213A60(&Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__);
    byte_596AC9E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(0, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void EventServantFatigueListViewManager__OnClickChoiceTab(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_596ACA8 & 1) == 0 )
  {
    sub_2213A60(&Method_EventServantFatigueListViewManager_EndClickTabChoice__);
    sub_2213A60(&Method_EventServantFatigueListViewManager_OnClickChoiceTab__);
    sub_2213A60(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    byte_596ACA8 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventServantFatigueListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_2213CCC(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabChoice__,
        0);
      EventServantFatigueListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 2, v5);
      EventServantFatigueListViewManager__RefreshListDisp(this, v8);
      EventServantFatigueListViewManager__ModifyList(this, 0, v9);
      EventServantFatigueListViewManager__SetMode_38916472(this, 2, v10);
    }
  }
}


void EventServantFatigueListViewManager__OnClickCollectLock(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_596ACA7 & 1) == 0 )
  {
    sub_2213A60(&Method_EventServantFatigueListViewManager_EndClickTabLock__);
    sub_2213A60(&Method_EventServantFatigueListViewManager_OnClickCollectLock__);
    sub_2213A60(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    byte_596ACA7 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventServantFatigueListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_2213CCC(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabLock__,
        0);
      EventServantFatigueListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 1, v5);
      EventServantFatigueListViewManager__RefreshListDisp(this, v8);
      EventServantFatigueListViewManager__ModifyList(this, 0, v9);
      EventServantFatigueListViewManager__SetMode_38916472(this, 2, v10);
    }
  }
}


void EventServantFatigueListViewManager__OnClickFilterKind(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_596AC9C & 1) == 0 )
  {
    sub_2213A60(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_EventServantFatigueListViewManager_EndSelectFilterKind__);
    sub_2213A60(&Method_EventServantFatigueListViewManager_OnClickFilterKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AC9C = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventServantFatigueListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
    CommonUI__OpenServantFilterSelectMenu(v7, 1, sort, v8, -1, 0);
  }
}


void EventServantFatigueListViewManager__OnClickListView(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void EventServantFatigueListViewManager__OnClickNormalStatus(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_596ACA6 & 1) == 0 )
  {
    sub_2213A60(&Method_EventServantFatigueListViewManager_EndClickTabStatus__);
    sub_2213A60(&Method_EventServantFatigueListViewManager_OnClickNormalStatus__);
    sub_2213A60(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    byte_596ACA6 = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventServantFatigueListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_2213CCC(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndClickTabStatus__,
      0);
    EventServantFatigueListViewManager__StatusRequest(this, v5, v6);
  }
}


void EventServantFatigueListViewManager__OnClickPushTab(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_596ACA9 & 1) == 0 )
  {
    sub_2213A60(&Method_EventServantFatigueListViewManager_EndClickTabPush__);
    sub_2213A60(&Method_EventServantFatigueListViewManager_OnClickPushTab__);
    sub_2213A60(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    byte_596ACA9 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_EventServantFatigueListViewManager_OnClickPushTab__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickPushTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventServantFatigueListViewManager_OnClickPushTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_2213CCC(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabPush__,
        0);
      EventServantFatigueListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 3, v5);
      EventServantFatigueListViewManager__RefreshListDisp(this, v8);
      EventServantFatigueListViewManager__ModifyList(this, 0, v9);
      EventServantFatigueListViewManager__SetMode_38916472(this, 2, v10);
    }
  }
}


void EventServantFatigueListViewManager__OnClickScaleChange(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  EventServantFatigueListViewManager_o *v14; // x0
  int v15; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v18; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  if ( (byte_596ACAC & 1) == 0 )
  {
    sub_2213A60(&Method_EventServantFatigueListViewManager_OnClickScaleChange__);
    byte_596ACAC = 1;
  }
  v3 = Method_EventServantFatigueListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventServantFatigueListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v14 = this;
    v15 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v14 = this;
    v15 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v14 = this;
    v15 = 1;
LABEL_11:
    v14->fields.seed = smallSizeSeed;
    p_seed = &v14->fields.seed;
    *((_DWORD *)p_seed + 116) = v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v6, v7, v8, v9, v10, v11);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v18 = this->fields.scaleType,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort->fields.iconScaleKind = v18,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v18, 0),
        !scaleChangeButtonSprite) )
  {
    sub_2213CDC(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  EventServantFatigueListViewManager__ModifyList(this, 1, v20);
  EventServantFatigueListViewManager__SetMode_38916472(this, 2, v21);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void EventServantFatigueListViewManager__OnClickSelectObject(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ListViewObject_o *v3; // x20
  int64_t fatigueRecoveryConfirmationDialog; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 naturalAligment; // x10
  EventServantFatigueListViewItem_o *Item; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x2
  __int64 v23; // x8
  __int128 v24; // q1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v26; // q1
  int64_t v27; // x21
  const MethodInfo *v28; // x2
  EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x1
  bool IsMatchIndividuality_38906088; // w0
  const MethodInfo *v31; // x5
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct EventServantRecoveryFatigueItem_o *v38; // x8
  struct UserServantEntity_o *v39; // x1
  __int64 v40; // x1
  __int64 v41; // x2
  FatigueRecoveryConfirmationDialog_o *v42; // x20
  System_String_o *v43; // x21
  Il2CppObject *Name; // x0
  System_String_o *v45; // x21
  System_String_o *v46; // x24
  System_String_o *v47; // x23
  System_String_o *outAfterTime; // x27
  UserServantEntity_o *targetOutUserServantEntity; // x22
  CommonConfirmDialog_ClickDelegate_o *func; // x25
  bool v51; // w0
  const MethodInfo *v52; // x5
  struct UserServantEntity_o *v53; // x1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  __int64 v60; // x1
  __int64 v61; // x2
  FatigueRecoveryConfirmationDialog_o *v62; // x20
  System_String_o *v63; // x21
  Il2CppObject *v64; // x0
  System_String_o *v65; // x21
  System_String_o *v66; // x25
  System_String_o *v67; // x23
  System_String_o *v68; // x24
  UserServantEntity_o *v69; // x22
  CommonConfirmDialog_ClickDelegate_o *v70; // x26
  struct EventServantRecoveryFatigueItem_o *v71; // x8
  struct UserServantEntity_o *v72; // x8
  __int128 v73; // q0
  __int128 v74; // q1
  int v75; // w8
  struct UserServantEntity_o *v76; // x8
  __int128 v77; // q1
  const MethodInfo *v78; // x2
  EventServantRecoveryFatigueItem_o *v79; // x1
  bool v80; // w0
  const MethodInfo *v81; // x5
  __int64 v82; // x2
  struct EventServantRecoveryFatigueItem_o *v83; // x8
  struct UserServantEntity_o *v84; // x8
  UserEventServantFatigueMaster_o *v85; // x21
  __int64 v86; // x23
  __int64 v87; // x24
  int32_t eventId; // w22
  bool FatigueInfo; // w0
  const MethodInfo *v90; // x1
  __int64 v91; // x2
  int64_t v92; // x21
  int64_t v93; // x21
  bool IsMatchIndividuality; // w0
  const MethodInfo *v95; // x5
  struct UserServantEntity_o *v96; // x1
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  struct EventServantRecoveryFatigueItem_o *v109; // x8
  struct UserServantEntity_o *v110; // x1
  __int64 v111; // x1
  __int64 v112; // x2
  FatigueRecoveryConfirmationDialog_o *v113; // x20
  System_String_o *v114; // x21
  Il2CppObject *v115; // x0
  System_String_o *v116; // x21
  System_String_o *v117; // x0
  System_String_o *v118; // x22
  System_String_o *v119; // x23
  UserServantEntity_o *v120; // x24
  UserServantEntity_o *targetInUserServantEntity; // x26
  System_String_o *v122; // x25
  System_String_o *v123; // x29
  System_String_o *v124; // x27
  CommonConfirmDialog_ClickDelegate_o *v125; // x28
  const MethodInfo *v126; // [xsp+18h] [xbp-168h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+30h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v128; // [xsp+50h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+70h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v130; // [xsp+90h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v131; // [xsp+B0h] [xbp-D0h]
  bool isRecover; // [xsp+D4h] [xbp-ACh] BYREF
  int64_t recoverAt; // [xsp+D8h] [xbp-A8h] BYREF
  System_String_o *v134; // [xsp+E0h] [xbp-A0h] BYREF
  System_String_o *v135; // [xsp+E8h] [xbp-98h] BYREF
  System_String_o *v136; // [xsp+F0h] [xbp-90h] BYREF
  System_String_o *v137; // [xsp+F8h] [xbp-88h] BYREF
  System_String_o *afterTime; // [xsp+100h] [xbp-80h] BYREF
  System_String_o *beforeTime; // [xsp+108h] [xbp-78h] BYREF
  System_String_o *v140; // [xsp+110h] [xbp-70h] BYREF
  System_String_o *v141; // [xsp+118h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16

  v3 = obj;
  if ( (byte_596AC92 & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_2213A60(&Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__);
    sub_2213A60(&Method_EventServantFatigueListViewManager_OnClickSelectObject__);
    sub_2213A60(&EventServantFatigueListViewObject_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12170/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/);
    sub_2213A60(&StringLiteral_12162/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/);
    sub_2213A60(&StringLiteral_12160/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/);
    sub_2213A60(&StringLiteral_12090/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_12088/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/);
    byte_596AC92 = 1;
  }
  fatigueRecoveryConfirmationDialog = (int64_t)this->fields.fatigueRecoveryConfirmationDialog;
  v140 = 0;
  v141 = 0;
  afterTime = 0;
  beforeTime = 0;
  v136 = 0;
  v137 = 0;
  v134 = 0;
  v135 = 0;
  recoverAt = 0;
  isRecover = 0;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  fatigueRecoveryConfirmationDialog = (int64_t)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)fatigueRecoveryConfirmationDialog,
                                                 0);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fatigueRecoveryConfirmationDialog, 1, 0);
  v6 = Method_EventServantFatigueListViewManager_OnClickSelectObject__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectObject__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_EventServantFatigueListViewManager_OnClickSelectObject__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  if ( !v3 )
    goto LABEL_56;
  naturalAligment = EventServantFatigueListViewObject_TypeInfo->_2.naturalAligment;
  if ( v3->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_56;
  if ( (EventServantFatigueListViewObject_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] != EventServantFatigueListViewObject_TypeInfo )
    goto LABEL_56;
  Item = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)v3, 0);
  this->fields.targetInUserServantEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetInUserServantEntity,
    0,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.targetOutUserServantEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetOutUserServantEntity,
    0,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fatigueRecoveryConfirmationDialog,
    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  fatigueRecoveryConfirmationDialog = (int64_t)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  obj = (ListViewObject_o *)this->fields.targetRecoveryFatigueItem;
  if ( !obj )
    goto LABEL_56;
  v23 = *(_QWORD *)&obj->fields.basePosition.fields.z;
  if ( v23 )
  {
    v24 = *(_OWORD *)(v23 + 32);
    *(_OWORD *)&v131.fields.currentCryptoKey = *(_OWORD *)(v23 + 16);
    *(_OWORD *)&v131.fields.fakeValue = v24;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj, v22);
    v130 = v131;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v130, 0);
    if ( !Item )
      goto LABEL_56;
    userServantEntity = Item->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_56;
    v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    v27 = fatigueRecoveryConfirmationDialog;
    *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v129.fields.fakeValue = v26;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v129, 0);
    if ( v27 == fatigueRecoveryConfirmationDialog )
    {
      targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
      afterTime = (System_String_o *)StringLiteral_1/*""*/;
      beforeTime = (System_String_o *)StringLiteral_1/*""*/;
      IsMatchIndividuality_38906088 = EventServantFatigueListViewItem__IsMatchIndividuality_38906088(
                                        Item,
                                        targetRecoveryFatigueItem,
                                        v28);
      EventServantFatigueListViewManager__GetOutRecoveryTime(
        this,
        Item->fields.fatigueTime,
        &beforeTime,
        &afterTime,
        IsMatchIndividuality_38906088,
        v31);
      v38 = this->fields.targetRecoveryFatigueItem;
      if ( v38 )
      {
        v39 = v38->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v39;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.targetOutUserServantEntity,
          (int32_t)v39,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
        v42 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40, v41);
        fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12170/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/, 0);
        if ( this->fields.targetRecoveryFatigueItem )
        {
          v43 = (System_String_o *)fatigueRecoveryConfirmationDialog;
          Name = (Il2CppObject *)EventServantRecoveryFatigueItem__get_Name(this->fields.targetRecoveryFatigueItem, 0);
          v45 = System_String__Format(v43, Name, 0);
          v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12160/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0);
          outAfterTime = afterTime;
          v47 = beforeTime;
          targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
          func = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            func,
            (Il2CppObject *)this,
            Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
            0);
          if ( v42 )
          {
            FatigueRecoveryConfirmationDialog__Setup(
              v42,
              v45,
              v46,
              0,
              (System_String_o *)StringLiteral_1/*""*/,
              (System_String_o *)StringLiteral_1/*""*/,
              targetOutUserServantEntity,
              v47,
              outAfterTime,
              1,
              func,
              v126);
            return;
          }
        }
      }
LABEL_56:
      sub_2213CDC(fatigueRecoveryConfirmationDialog, obj);
    }
    v71 = this->fields.targetRecoveryFatigueItem;
    if ( !v71 )
      goto LABEL_56;
    v72 = v71->fields.userServantEntity;
    if ( v72 )
    {
      v73 = *(_OWORD *)&v72->fields.id.fields.currentCryptoKey;
      v74 = *(_OWORD *)&v72->fields.id.fields.fakeValue;
      v75 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v131.fields.currentCryptoKey = v73;
      *(_OWORD *)&v131.fields.fakeValue = v74;
      if ( !v75 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj, v28);
      v128 = v131;
      fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v128, 0);
      v76 = Item->fields.userServantEntity;
      if ( !v76 )
        goto LABEL_56;
      v77 = *(_OWORD *)&v76->fields.id.fields.fakeValue;
      *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&v76->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v127.fields.fakeValue = v77;
      if ( fatigueRecoveryConfirmationDialog != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                  &v127,
                                                  0) )
      {
        v79 = this->fields.targetRecoveryFatigueItem;
        v136 = (System_String_o *)StringLiteral_1/*""*/;
        v137 = (System_String_o *)StringLiteral_1/*""*/;
        v80 = EventServantFatigueListViewItem__IsMatchIndividuality_38906088(Item, v79, v78);
        EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v137, &v136, v80, v81);
        v134 = (System_String_o *)StringLiteral_1/*""*/;
        v135 = (System_String_o *)StringLiteral_1/*""*/;
        fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !fatigueRecoveryConfirmationDialog )
          goto LABEL_56;
        fatigueRecoveryConfirmationDialog = (int64_t)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        v83 = this->fields.targetRecoveryFatigueItem;
        if ( !v83 )
          goto LABEL_56;
        v84 = v83->fields.userServantEntity;
        if ( !v84 )
          goto LABEL_56;
        v85 = (UserEventServantFatigueMaster_o *)fatigueRecoveryConfirmationDialog;
        v86 = *(_QWORD *)&v84->fields.svtId.fields.currentCryptoKey;
        v87 = *(_QWORD *)&v84->fields.svtId.fields.fakeValue;
        eventId = this->fields.eventId;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, obj, v82);
        *(_QWORD *)&v142.fields.currentCryptoKey = v86;
        *(_QWORD *)&v142.fields.fakeValue = v87;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v142, 0);
        if ( !v85 )
          goto LABEL_56;
        FatigueInfo = UserEventServantFatigueMaster__GetFatigueInfo(
                        v85,
                        &recoverAt,
                        &isRecover,
                        eventId,
                        fatigueRecoveryConfirmationDialog,
                        0);
        v92 = 0;
        if ( FatigueInfo )
        {
          v93 = recoverAt;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v90, v91);
          if ( v93 <= NetworkManager__getTime(0) )
            v92 = 0;
          else
            v92 = recoverAt;
        }
        IsMatchIndividuality = EventServantFatigueListViewManager__IsMatchIndividuality(this, v90);
        EventServantFatigueListViewManager__GetOutRecoveryTime(this, v92, &v135, &v134, IsMatchIndividuality, v95);
        v96 = Item->fields.userServantEntity;
        this->fields.targetInUserServantEntity = v96;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.targetInUserServantEntity,
          (int32_t)v96,
          v97,
          v98,
          v99,
          v100,
          v101,
          v102);
        v109 = this->fields.targetRecoveryFatigueItem;
        if ( !v109 )
          goto LABEL_56;
        v110 = v109->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v110;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.targetOutUserServantEntity,
          (int32_t)v110,
          v103,
          v104,
          v105,
          v106,
          v107,
          v108);
        v113 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v111, v112);
        fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12090/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/, 0);
        if ( !this->fields.targetRecoveryFatigueItem )
          goto LABEL_56;
        v114 = (System_String_o *)fatigueRecoveryConfirmationDialog;
        v115 = (Il2CppObject *)EventServantRecoveryFatigueItem__get_Name(this->fields.targetRecoveryFatigueItem, 0);
        v116 = System_String__Format(v114, v115, 0);
        v117 = LocalizationManager__Get((System_String_o *)StringLiteral_12088/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/, 0);
        v119 = v136;
        v118 = v137;
        targetInUserServantEntity = this->fields.targetInUserServantEntity;
        v120 = this->fields.targetOutUserServantEntity;
        v123 = v134;
        v122 = v135;
        v124 = v117;
        v125 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v125,
          (Il2CppObject *)this,
          Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
          0);
        if ( !v113 )
          goto LABEL_56;
        FatigueRecoveryConfirmationDialog__Setup(
          v113,
          v116,
          v124,
          targetInUserServantEntity,
          v118,
          v119,
          v120,
          v122,
          v123,
          1,
          v125,
          v126);
      }
    }
  }
  else
  {
    v140 = (System_String_o *)StringLiteral_1/*""*/;
    v141 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !Item )
      goto LABEL_56;
    v51 = EventServantFatigueListViewItem__IsMatchIndividuality_38906088(
            Item,
            (EventServantRecoveryFatigueItem_o *)obj,
            v22);
    EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v141, &v140, v51, v52);
    v53 = Item->fields.userServantEntity;
    this->fields.targetInUserServantEntity = v53;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.targetInUserServantEntity,
      (int32_t)v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    v62 = this->fields.fatigueRecoveryConfirmationDialog;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v60, v61);
    fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12162/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/, 0);
    if ( !this->fields.targetRecoveryFatigueItem )
      goto LABEL_56;
    v63 = (System_String_o *)fatigueRecoveryConfirmationDialog;
    v64 = (Il2CppObject *)EventServantRecoveryFatigueItem__get_Name(this->fields.targetRecoveryFatigueItem, 0);
    v65 = System_String__Format(v63, v64, 0);
    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12160/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0);
    v68 = v140;
    v67 = v141;
    v69 = this->fields.targetInUserServantEntity;
    v70 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v70,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
      0);
    if ( !v62 )
      goto LABEL_56;
    FatigueRecoveryConfirmationDialog__Setup(
      v62,
      v65,
      v66,
      v69,
      v67,
      v68,
      0,
      (System_String_o *)StringLiteral_1/*""*/,
      (System_String_o *)StringLiteral_1/*""*/,
      1,
      v70,
      v126);
  }
}


void EventServantFatigueListViewManager__OnClickSelectPush(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 SelfUserGame; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 naturalAligment; // x9
  EventServantFatigueListViewItem_o *Item; // x0
  EventServantFatigueListViewItem_o **v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x2
  int64_t v26; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v28; // q1
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  const MethodInfo *v31; // x2
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  __int64 v34; // x25
  __int64 v35; // x1
  __int64 v36; // x2
  ServantEntity_o *ServantEntity; // x26
  __int64 v38; // x1
  __int64 v39; // x2
  Il2CppObject *Master_object; // x24
  System_String_o *v41; // x21
  System_String_o *v42; // x22
  __int64 v43; // x23
  __int64 v44; // x1
  __int64 v45; // x2
  int32_t Rarity; // w27
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x27
  __int64 v54; // x1
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  __int64 v61; // x27
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x26
  __int64 v65; // x27
  int32_t v66; // w0
  __int64 v67; // x8
  int32_t v68; // w25
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  __int64 v75; // x25
  int32_t v76; // w0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  __int64 v83; // x25
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  __int64 v90; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v91; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v92; // x8
  int32_t v93; // w20
  int32_t v94; // w0
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  __int64 v101; // x20
  System_String_o *v102; // x20
  System_String_o *v103; // x22
  System_String_o *v104; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v106; // x25
  __int64 v107; // x2
  __int64 v108; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  if ( (byte_596ACAD & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_EventServantFatigueListViewManager_OnClickSelectPush__);
    sub_2213A60(&EventServantFatigueListViewObject_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__);
    sub_2213A60(&EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo);
    sub_2213A60(&StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_596ACAD = 1;
  }
  v5 = sub_2213CCC(EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo);
  EventServantFatigueListViewManager___c__DisplayClass107_0___ctor(
    (EventServantFatigueListViewManager___c__DisplayClass107_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !obj )
    goto LABEL_64;
  naturalAligment = EventServantFatigueListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    SelfUserGame = sub_221405C(obj, EventServantFatigueListViewObject_TypeInfo, v14, v15);
    goto LABEL_66;
  }
  Item = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)obj, 0);
  *(_QWORD *)(v5 + 24) = Item;
  v18 = (EventServantFatigueListViewItem_o **)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)Item, v19, v20, v21, v22, v23, v24);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_64;
  v26 = *(_QWORD *)(SelfUserGame + 128);
  if ( v26 )
  {
    if ( !*v18 )
      goto LABEL_64;
    userServantEntity = (*v18)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_64;
    v28 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v110.fields.fakeValue = v28;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v25);
    v109 = v110;
    if ( v26 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v109, 0) )
      goto LABEL_14;
    v32 = Method_EventServantFatigueListViewManager_OnClickSelectPush__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
      v32 = (_QWORD *)sub_2213A78(Method_EventServantFatigueListViewManager_OnClickSelectPush__);
    v33 = (System_Reflection_MethodBase_o *)sub_2213A44(v32, v32[4]);
    OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0);
    SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_64;
    SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_64;
    SelfUserGame = (__int64)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                              v26,
                              (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !SelfUserGame )
      goto LABEL_64;
    v34 = SelfUserGame;
    ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)SelfUserGame, -1, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35, v36);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38, v39);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
    v43 = sub_2213B20(object___TypeInfo, 6);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v34, 0);
    if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v44, v45);
    SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0);
    if ( !v43 )
LABEL_64:
      sub_2213CDC(SelfUserGame, v7);
    v53 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_2213BB4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( !*(_DWORD *)(v43 + 24) )
      goto LABEL_66;
    *(_QWORD *)(v43 + 32) = v53;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 32), v53, v47, v48, v49, v50, v51, v52);
    if ( !ServantEntity )
      goto LABEL_64;
    SelfUserGame = (__int64)ServantEntity__getClassName(ServantEntity, 0);
    v61 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_2213BB4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( (*(_DWORD *)(v43 + 24) & 0xFFFFFFFE) == 0 )
      goto LABEL_66;
    *(_QWORD *)(v43 + 40) = v61;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 40), v61, v55, v56, v57, v58, v59, v60);
    v65 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
    v64 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62, v63);
    *(_QWORD *)&v111.fields.currentCryptoKey = v65;
    *(_QWORD *)&v111.fields.fakeValue = v64;
    v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v111, 0);
    v67 = *(_QWORD *)(v34 + 96);
    *(_QWORD *)&v112.fields.fakeValue = *(_QWORD *)(v34 + 104);
    v68 = v66;
    *(_QWORD *)&v112.fields.currentCryptoKey = v67;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v112, 0);
    if ( !Master_object )
      goto LABEL_64;
    SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                              (ServantLimitImageMaster_o *)Master_object,
                              v68,
                              SelfUserGame,
                              1,
                              1,
                              0);
    v75 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_2213BB4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( *(_DWORD *)(v43 + 24) <= 2u )
      goto LABEL_66;
    *(_QWORD *)(v43 + 48) = v75;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 48), v75, v69, v70, v71, v72, v73, v74);
    if ( !*v18 )
      goto LABEL_64;
    SelfUserGame = (__int64)(*v18)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_64;
    v76 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0);
    SelfUserGame = (__int64)Rarity__getRarityType(v76, 0);
    v83 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_2213BB4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( (*(_DWORD *)(v43 + 24) & 0xFFFFFFFC) == 0 )
      goto LABEL_66;
    *(_QWORD *)(v43 + 56) = v83;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 56), v83, v77, v78, v79, v80, v81, v82);
    if ( !*v18 )
      goto LABEL_64;
    SelfUserGame = (__int64)(*v18)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_64;
    SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0);
    v90 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_2213BB4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( *(_DWORD *)(v43 + 24) <= 4u )
      goto LABEL_66;
    *(_QWORD *)(v43 + 64) = v90;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 64), v90, v84, v85, v86, v87, v88, v89);
    if ( !*v18 )
      goto LABEL_64;
    v91 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v18)->fields.servantEntity;
    if ( !v91 )
      goto LABEL_64;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v91[1], 0);
    if ( !*v18 )
      goto LABEL_64;
    v92 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v18)->fields.userServantEntity;
    if ( !v92 )
      goto LABEL_64;
    v93 = SelfUserGame;
    v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v92[6], 0);
    SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                              (ServantLimitImageMaster_o *)Master_object,
                              v93,
                              v94,
                              1,
                              1,
                              0);
    v101 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_2213BB4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
      if ( !SelfUserGame )
      {
LABEL_67:
        v108 = sub_2213D00(SelfUserGame, v54);
        sub_2213BA0(v108, 0);
      }
    }
    if ( *(_DWORD *)(v43 + 24) > 5u )
    {
      *(_QWORD *)(v43 + 72) = v101;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 72), v101, v95, v96, v97, v98, v99, v100);
      v102 = System_String__Format_75698016(v42, (System_Object_array *)v43, 0);
      v103 = LocalizationManager__Get((System_String_o *)StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
      v104 = LocalizationManager__Get((System_String_o *)StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v106 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v106,
        (Il2CppObject *)v5,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__,
        0);
      SelfUserGame = (__int64)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v107);
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_37373584(
          (CommonUI_o *)Instance,
          v41,
          v102,
          v103,
          v104,
          v106,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          BalanceConfig_TypeInfo->static_fields->PushSvtDialogFontSize,
          15.0,
          700,
          0,
          480,
          -162.5,
          0,
          0,
          240,
          0,
          0);
        return;
      }
      goto LABEL_64;
    }
LABEL_66:
    sub_2213CE4(SelfUserGame);
  }
LABEL_14:
  v29 = Method_EventServantFatigueListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v29 = (_QWORD *)sub_2213A78(Method_EventServantFatigueListViewManager_OnClickSelectPush__);
  v30 = (System_Reflection_MethodBase_o *)sub_2213A44(v29, v29[4]);
  OverwriteAssetSoundName__PlaySystemSe(v30, 8, 0, 0);
  EventServantFatigueListViewManager__PushRequest(this, *v18, v31);
}


void EventServantFatigueListViewManager__OnClickSortAscendingOrder(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_596ACA2 & 1) == 0 )
  {
    sub_2213A60(&Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__);
    byte_596ACA2 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void EventServantFatigueListViewManager__OnClickSortButton(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantSortSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_596ACA0 & 1) == 0 )
  {
    sub_2213A60(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_EventServantFatigueListViewManager_EndSelectSortKind__);
    sub_2213A60(&Method_EventServantFatigueListViewManager_OnClickSortButton__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596ACA0 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventServantFatigueListViewManager_OnClickSortButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 7, sort, 0, v8, 0);
  }
}


void EventServantFatigueListViewManager__OnLongPushListView(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  EventServantFatigueListViewItem_o *Item; // x0
  __int64 v8; // x1
  __int64 naturalAligment; // x10
  __int64 v10; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  EventServantFatigueListViewItem_o *v12; // x20
  __int128 v13; // q1
  Il2CppObject *Instance; // x21
  UserServantEntity_o *v15; // x20
  ServantStatusDialog_EndDelegate_o *v16; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]

  if ( (byte_596AC99 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_EventServantFatigueListViewManager_EndShowServant__);
    sub_2213A60(&Method_EventServantFatigueListViewManager_OnLongPushListView__);
    sub_2213A60(&EventServantFatigueListViewObject_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AC99 = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v5 = Method_EventServantFatigueListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_EventServantFatigueListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( !obj )
      goto LABEL_16;
    naturalAligment = EventServantFatigueListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment )
      goto LABEL_16;
    if ( (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventServantFatigueListViewObject_TypeInfo )
      goto LABEL_16;
    Item = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)obj, 0);
    if ( !Item )
      goto LABEL_16;
    userServantEntity = Item->fields.userServantEntity;
    v12 = Item;
    if ( !userServantEntity )
      goto LABEL_16;
    v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v18.fields.fakeValue = v13;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v10);
    v17 = v18;
    this->fields.statusShowUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v17, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = v12->fields.userServantEntity;
    v16 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndShowServant__,
      0);
    if ( !Instance )
LABEL_16:
      sub_2213CDC(Item, v8);
    CommonUI__OpenServantStatusDialog_37383588((CommonUI_o *)Instance, 0, v15, v16, 0);
  }
}


void EventServantFatigueListViewManager__OnMoveEnd(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *CallbackFunc2; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596AC91 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AC91 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.CallbackFunc2, 0, v11, v12, v13, v14, v15, v16);
        if ( CallbackFunc2 )
          ((void (__fastcall *)(intptr_t, intptr_t))CallbackFunc2->fields.invoke_impl)(
            CallbackFunc2->fields.method_code,
            CallbackFunc2->fields.method);
      }
    }
  }
}


void EventServantFatigueListViewManager__PushRequest(
        EventServantFatigueListViewManager_o *this,
        EventServantFatigueListViewItem_o *selectItem,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_596ACAE & 1) == 0 )
  {
    sub_2213A60(&Method_EventServantFatigueListViewManager_EndPushRequest__);
    sub_2213A60(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596ACAE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_EndPushRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_2213CDC(Instance, v6);
  CardFavoriteRequest__beginRequestPush((CardFavoriteRequest_o *)Instance, selectItem->fields.userServantEntity, 0);
}


void EventServantFatigueListViewManager__RefreshListDisp(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w22
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21

  if ( (byte_596AC88 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
    byte_596AC88 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EventServantFatigueListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_9;
  size = ObjectList->fields._size;
  v6 = ObjectList;
  if ( size >= 1 )
  {
    v7 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v6,
                                                                  v7,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))ObjectList->klass->vtable._9_unknown.methodPtr)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._9_unknown.method);
      if ( size == ++v7 )
        return;
    }
LABEL_9:
    sub_2213CDC(ObjectList, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventServantFatigueListViewManager__RequestListObject(
        EventServantFatigueListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v13; // x24
  System_String_o *v14; // x1

  if ( (byte_596AC90 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventServantFatigueListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596AC90 = 1;
  }
  ObjectList = EventServantFatigueListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v10 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v11 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v10,
               v11,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_EventServantFatigueListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      EventServantFatigueListViewObject__Init_38932744((EventServantFatigueListViewObject_o *)Item, mode, v13, 0);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_2213CDC(ObjectList, v8);
  }
  v14 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v14, delay, 0);
}


void EventServantFatigueListViewManager__SetFilterButtonImage(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_596AC9F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18255/*"btn_filter_on"*/);
    sub_2213A60(&StringLiteral_18254/*"btn_filter"*/);
    byte_596AC9F = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_2213CDC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_18254/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_18255/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void EventServantFatigueListViewManager__SetHeaderMsg(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t modeKind; // w8
  UILabel_o *recoveryFatigueInfoMsgLabel; // x19
  __int64 *v6; // x8
  System_String_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_596AC8A & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_2213A60(&StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_2213A60(&StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_2213A60(&StringLiteral_12181/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/);
    byte_596AC8A = 1;
  }
  modeKind = this->fields.modeKind;
  if ( modeKind > 1 )
  {
    if ( modeKind == 2 )
    {
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
      v6 = &StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
    }
    else
    {
      if ( modeKind != 3 )
        return;
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
      v6 = &StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
    }
  }
  else if ( modeKind )
  {
    if ( modeKind != 1 )
      return;
    recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v6 = &StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
  }
  else
  {
    recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v6 = &StringLiteral_12181/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/;
  }
  v7 = LocalizationManager__Get((System_String_o *)*v6, 0);
  if ( !recoveryFatigueInfoMsgLabel )
    sub_2213CDC(v7, v8);
  UILabel__set_text(recoveryFatigueInfoMsgLabel, v7, 0);
}


void EventServantFatigueListViewManager__SetMode(
        EventServantFatigueListViewManager_o *this,
        int32_t mode,
        EventServantFatigueListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.Callback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.Callback,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  EventServantFatigueListViewManager__SetMode_38916472(this, mode, v10);
}


void EventServantFatigueListViewManager__SetMode_38872192(
        EventServantFatigueListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.CallbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.CallbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  EventServantFatigueListViewManager__SetMode_38916472(this, mode, v10);
}


void EventServantFatigueListViewManager__SetMode_38916472(
        EventServantFatigueListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 1 )
  {
    if ( mode == 1 )
      v6 = 2;
    else
      v6 = 3;
    EventServantFatigueListViewManager__RequestListObject(this, v6, 0.0, v5);
  }
}


void EventServantFatigueListViewManager__SetObjectItem(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596AC8F & 1) == 0 )
  {
    sub_2213A60(&EventServantFatigueListViewObject_TypeInfo);
    byte_596AC8F = 1;
  }
  if ( obj
    && (naturalAligment = EventServantFatigueListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == EventServantFatigueListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  EventServantFatigueListViewObject__Init_38931692((EventServantFatigueListViewObject_o *)v7, v8, 0);
}


void EventServantFatigueListViewManager__SetSortButtonImage(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  __int64 v10; // x2
  struct ListViewSort_o *v11; // x8
  int32_t sortKind; // w9
  System_String_o **v13; // x8
  struct ListViewSort_o *v14; // x8
  System_String_o **v15; // x9
  System_String_o **v16; // x10
  System_String_o **v17; // x8
  System_String_o **v18; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v20; // x20

  if ( (byte_596ACA3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18395/*"btn_txt_up"*/);
    sub_2213A60(&StringLiteral_18344/*"btn_txt_new"*/);
    sub_2213A60(&StringLiteral_18334/*"btn_txt_down"*/);
    sub_2213A60(&StringLiteral_18352/*"btn_txt_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_596ACA3 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_42;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    ListViewSort__SetupSortLabelLayout(sort, this->fields.sortKindLabel, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v11 = this->fields.sort;
    if ( !v11 )
      goto LABEL_42;
    sortKind = v11->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v13 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18352/*"btn_txt_old"*/ : &StringLiteral_18344/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v15 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
      v16 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v17 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18395/*"btn_txt_up"*/ : &StringLiteral_18334/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v15 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
      v16 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
    }
    if ( v14->fields.isAscendingOrder )
      v18 = v15;
    else
      v18 = v16;
    UISprite__set_spriteName((UISprite_o *)sort, *v18, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v10);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    if ( sort->fields.isBonusKind )
    {
      v20 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(sort, this->fields.alignedBonusFilterInfos, 0, 0);
      if ( v20 )
      {
        UILabel__set_text(v20, (System_String_o *)sort, 0);
        return;
      }
LABEL_42:
      sub_2213CDC(sort, v5);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void EventServantFatigueListViewManager__SetStatusKind(
        EventServantFatigueListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v6; // x8
  __int64 *v7; // x8
  __int64 *v8; // x8
  __int64 *v9; // x8
  const MethodInfo *v10; // x1

  if ( (byte_596AC89 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18431/*"button_push_reg"*/);
    sub_2213A60(&StringLiteral_18432/*"button_push_unreg"*/);
    sub_2213A60(&StringLiteral_18417/*"button_allchoice_reg"*/);
    sub_2213A60(&StringLiteral_18420/*"button_alllock_unreg"*/);
    sub_2213A60(&StringLiteral_18433/*"button_select_reg"*/);
    sub_2213A60(&StringLiteral_18434/*"button_select_unreg"*/);
    sub_2213A60(&StringLiteral_18419/*"button_alllock_reg"*/);
    sub_2213A60(&StringLiteral_18418/*"button_allchoice_unreg"*/);
    byte_596AC89 = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v6 = &StringLiteral_18433/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_18434/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v6, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v7 = &StringLiteral_18420/*"button_alllock_unreg"*/;
  if ( modeKind == 1 )
    v7 = &StringLiteral_18419/*"button_alllock_reg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v7, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v8 = &StringLiteral_18418/*"button_allchoice_unreg"*/;
  if ( modeKind == 2 )
    v8 = &StringLiteral_18417/*"button_allchoice_reg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v8, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 3, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v9 = &StringLiteral_18432/*"button_push_unreg"*/;
  if ( modeKind == 3 )
    v9 = &StringLiteral_18431/*"button_push_reg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_2213CDC(statusTabButton, *(_QWORD *)&modeKind);
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  EventServantFatigueListViewManager__SetHeaderMsg(this, v10);
}


void EventServantFatigueListViewManager__SetUpBonusFilterButton(
        EventServantFatigueListViewManager_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ListViewSort_o *sort; // x0
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct ListViewSort_o *v17; // x20
  UnityEngine_Component_o *bonusFilterKindButton; // x8
  struct ListViewSort_o *v19; // x8

  sort = this->fields.sort;
  if ( setupInfo )
  {
    if ( sort )
    {
      AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                             sort,
                             0,
                             setupInfo->fields.servantFilterEventCampaignIds,
                             setupInfo->fields.servantFilterEventIds,
                             0,
                             0,
                             0,
                             0);
      this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
        (int32_t)AlignedBonusFilter,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v17 = this->fields.sort;
      sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                                 (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                                 0);
      if ( v17 )
      {
        bonusFilterKindButton = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
        v17->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
        if ( bonusFilterKindButton )
        {
          sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject(bonusFilterKindButton, 0);
          v19 = this->fields.sort;
          if ( v19 )
          {
            if ( sort )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, v19->fields.isBonusKind, 0);
              return;
            }
          }
        }
      }
    }
LABEL_10:
    sub_2213CDC(sort, setupInfo);
  }
  if ( !sort )
    goto LABEL_10;
  sort->fields.isBonusKind = 0;
  this->fields.alignedBonusFilterInfos = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventServantFatigueListViewManager__StatusRequest(
        EventServantFatigueListViewManager_o *this,
        EventServantFatigueListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Request_object; // x0
  __int64 v17; // x1
  System_Int64_array *v18; // x1
  System_Int64_array *v19; // x2
  bool v20; // w4
  bool v21; // w5
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  NetworkManager_ResultCallbackFunc_o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  System_Int64_array *v31; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596ACAA & 1) == 0 )
  {
    sub_2213A60(&Method_EventServantFatigueListViewManager_EndStatusSync__);
    sub_2213A60(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596ACAA = 1;
  }
  modeKind = this->fields.modeKind;
  unlockList = 0;
  lockList = 0;
  v31 = 0;
  choiceList = 0;
  if ( modeKind == 2 )
  {
    if ( EventServantFatigueListViewManager__GetSwapChoiceList(this, &choiceList, &v31, v3) )
    {
      this->fields.requestCallback = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v28 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29, v30);
      Request_object = NetworkManager__getRequest_object_(
                         v28,
                         (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v19 = v31;
        v18 = choiceList;
        v20 = 0;
        v21 = 1;
        goto LABEL_15;
      }
LABEL_19:
      sub_2213CDC(Request_object, v17);
    }
  }
  else if ( modeKind == 1 && EventServantFatigueListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
      (int32_t)callback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndStatusSync__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v15);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v19 = unlockList;
      v18 = lockList;
      v20 = 1;
      v21 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v18, v19, 0, v20, v21, 0);
      return;
    }
    goto LABEL_19;
  }
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}


void EventServantFatigueListViewManager__Update(EventServantFatigueListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Time; // x0
  const MethodInfo *v9; // x1

  if ( (byte_596AC85 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AC85 = 1;
  }
  ListViewManager__Update((ListViewManager_o *)this, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0)
    && this->fields.itemSortList
    && (this->fields.updateTime & 0x8000000000000000LL) == 0 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Time = NetworkManager__getTime(0);
    if ( this->fields.updateTime != Time )
    {
      this->fields.updateTime = Time;
      EventServantFatigueListViewManager__UpdateDisp(this, v9);
    }
  }
}


void EventServantFatigueListViewManager__UpdateDisp(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *v5; // x8
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596AC86 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_596AC86 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  ObjectList = (System_Collections_Generic_List_object__o *)EventServantFatigueListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( ObjectList )
  {
    v5 = this->fields.objectList;
    if ( !v5 )
      sub_2213CDC(ObjectList, v4);
    if ( v5->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v7,
        ObjectList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v7,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__) )
      {
        if ( !v7.fields._current )
          sub_2213CDC(0, v6);
        EventServantFatigueListViewObject__UpdateDisp((EventServantFatigueListViewObject_o *)v7.fields._current, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v7,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__);
    }
  }
}


void EventServantFatigueListViewManager__add_Callback(
        EventServantFatigueListViewManager_o *this,
        EventServantFatigueListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *Callback; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EventServantFatigueListViewManager_o *v11; // x0
  EventServantFatigueListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596AC7D & 1) == 0 )
  {
    sub_2213A60(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo);
    byte_596AC7D = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(Callback, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (EventServantFatigueListViewManager_CallbackFunc_c *)v6->klass != EventServantFatigueListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.Callback, v6, Callback);
    v10 = v9 == (_QWORD)Callback;
    Callback = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventServantFatigueListViewManager_o *)sub_221405C(
                                                  v6,
                                                  EventServantFatigueListViewManager_CallbackFunc_TypeInfo,
                                                  v7,
                                                  v8);
  EventServantFatigueListViewManager__remove_Callback(v11, v12, v13);
}


void EventServantFatigueListViewManager__add_CallbackFunc2(
        EventServantFatigueListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *CallbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EventServantFatigueListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596AC7F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596AC7F = 1;
  }
  CallbackFunc2 = (System_Delegate_o *)this->fields.CallbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(CallbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.CallbackFunc2, v6, CallbackFunc2);
    v10 = v9 == (_QWORD)CallbackFunc2;
    CallbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventServantFatigueListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  EventServantFatigueListViewManager__remove_CallbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_EventServantFatigueListViewObject__o *EventServantFatigueListViewManager__get_ClippingObjectList(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  System_Collections_Generic_List_object__o *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  int size; // w23
  int32_t v8; // w21
  Il2CppObject *v9; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0

  if ( (byte_596AC84 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
    byte_596AC84 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_19;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !Item )
        break;
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            Item,
                                                            v8,
                                                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !Item )
        break;
      Item = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)Item,
                                                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
      if ( !Item )
        break;
      v9 = (Il2CppObject *)Item;
      Item = (System_Collections_Generic_List_object__o *)EventServantFatigueListViewObject__GetItem(
                                                            (EventServantFatigueListViewObject_o *)Item,
                                                            0);
      if ( !Item )
        break;
      v5 = Item;
      if ( !LOBYTE(Item[2].fields._items)
        || (Item = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_50835204(
                                                                  (ListViewManager_o *)this,
                                                                  (ListViewItem_o *)Item,
                                                                  0),
            ((unsigned __int8)Item & 1) != 0) )
      {
        if ( !v3 )
          break;
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v18 = v3->fields._size;
        if ( (unsigned int)v18 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v9,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + v18;
          v3->fields._size = v18 + 1;
          v19[4] = (Il2CppClass *)v9;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
        }
      }
      if ( size == ++v8 )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v3;
    }
LABEL_19:
    sub_2213CDC(Item, v5);
  }
  return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v3;
}


int32_t EventServantFatigueListViewManager__get_ListModeKind(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_Collections_Generic_List_EventServantFatigueListViewObject__o *EventServantFatigueListViewManager__get_ObjectList(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *Component_object; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  int size; // w23
  int32_t v8; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Item; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  System_Collections_Generic_List_object__o *v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_596AC83 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AC83 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Component_object = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !Component_object )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               Component_object,
               v8,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                        (UnityEngine_Object_o *)Item,
                                                                        0,
                                                                        0);
      if ( ((unsigned __int8)Component_object & 1) != 0 )
      {
        if ( !Item )
          break;
        Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          (UnityEngine_GameObject_o *)Item,
                                                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v20 = v3->fields._size;
        v21 = Component_object;
        if ( (unsigned int)v20 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)Component_object,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + v20;
          v3->fields._size = v20 + 1;
          v22[4] = (Il2CppClass *)v21;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
        }
      }
      if ( size == ++v8 )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v3;
    }
LABEL_18:
    sub_2213CDC(Component_object, v5);
  }
  return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v3;
}


void EventServantFatigueListViewManager__remove_Callback(
        EventServantFatigueListViewManager_o *this,
        EventServantFatigueListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *Callback; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EventServantFatigueListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596AC7E & 1) == 0 )
  {
    sub_2213A60(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo);
    byte_596AC7E = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(Callback, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (EventServantFatigueListViewManager_CallbackFunc_c *)v6->klass != EventServantFatigueListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.Callback, v6, Callback);
    v10 = v9 == (_QWORD)Callback;
    Callback = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventServantFatigueListViewManager_o *)sub_221405C(
                                                  v6,
                                                  EventServantFatigueListViewManager_CallbackFunc_TypeInfo,
                                                  v7,
                                                  v8);
  EventServantFatigueListViewManager__add_CallbackFunc2(v11, v12, v13);
}


void EventServantFatigueListViewManager__remove_CallbackFunc2(
        EventServantFatigueListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *CallbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_596AC80 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596AC80 = 1;
  }
  CallbackFunc2 = (System_Delegate_o *)this->fields.CallbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(CallbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.CallbackFunc2, v6, CallbackFunc2);
    v10 = v9 == (_QWORD)CallbackFunc2;
    CallbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  EventServantFatigueListViewManager__DeleteContinueData(v11);
}


void EventServantFatigueListViewManager_CallbackFunc___ctor(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200087C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_2000824;
}


System_IAsyncResult_o *EventServantFatigueListViewManager_CallbackFunc__BeginInvoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = index;
  if ( (byte_596ACB1 & 1) == 0 )
  {
    sub_2213A60(&EventServantFatigueListViewManager_ResultKind_TypeInfo);
    byte_596ACB1 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(EventServantFatigueListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return sub_2213A14(this, v10, callback, object);
}


void EventServantFatigueListViewManager_CallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void EventServantFatigueListViewManager_CallbackFunc__Invoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    index,
    this->fields.method);
}


void EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20008E8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20008A0;
}


System_IAsyncResult_o *EventServantFatigueListViewManager_RequestCallbackFunc__BeginInvoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void EventServantFatigueListViewManager_RequestCallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void EventServantFatigueListViewManager_RequestCallbackFunc__Invoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}


void EventServantFatigueListViewManager___c__DisplayClass107_0___ctor(
        EventServantFatigueListViewManager___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventServantFatigueListViewManager___c__DisplayClass107_0___OnClickSelectPush_b__0(
        EventServantFatigueListViewManager___c__DisplayClass107_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596ACB2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__);
    byte_596ACB2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_37373868(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void EventServantFatigueListViewManager___c__DisplayClass107_0___OnClickSelectPush_b__1(
        EventServantFatigueListViewManager___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  EventServantFatigueListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  EventServantFatigueListViewManager__PushRequest(_4__this, this->fields.selectItem, 0);
}