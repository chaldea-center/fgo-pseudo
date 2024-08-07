void __fastcall EventServantFatigueListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v7; // x20
  struct EventServantFatigueListViewManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A02D43 & 1) == 0 )
  {
    sub_1B64A00(&EventServantFatigueListViewManager_TypeInfo, v1);
    sub_1B64A00(&ListViewSort_TypeInfo, v4);
    sub_1B64A00(&StringLiteral_6185/*"EventServantFatigueList"*/, v5);
    byte_4A02D43 = 1;
  }
  EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6185/*"EventServantFatigueList"*/;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)EventServantFatigueListViewManager_TypeInfo->static_fields,
    StringLiteral_6185/*"EventServantFatigueList"*/,
    v2,
    v3);
  SORT_SAVE_KEY = EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v7 = (ListViewSort_o *)sub_1B64C4C(ListViewSort_TypeInfo);
  ListViewSort___ctor_40431780(v7, SORT_SAVE_KEY, 3, 0, 0LL);
  static_fields = EventServantFatigueListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v7;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->servantSortStatus, (int32_t)v7, v9, v10);
}


void __fastcall EventServantFatigueListViewManager___ctor(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.updateTime = -1LL;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventServantFatigueListViewManager__CallbackRecoverySyncRequest(
        EventServantFatigueListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventServantFatigueListViewManager_o *v4; // x19
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x8
  Il2CppObject *m_target; // x4
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v8; // x3
  __int64 v9; // x1
  struct UserServantEntity_o *targetInUserServantEntity; // x2

  v4 = this;
  if ( (byte_4A02D2C & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_1B64A00(&StringLiteral_21971/*"ng"*/, result);
    byte_4A02D2C = 1;
  }
  if ( !result )
    goto LABEL_10;
  this = (EventServantFatigueListViewManager_o *)System_String__Equals_61393452(
                                                   result,
                                                   (System_String_o *)StringLiteral_21971/*"ng"*/,
                                                   0LL);
  selectAfterCallback = v4->fields.selectAfterCallback;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( selectAfterCallback )
    {
      targetInUserServantEntity = v4->fields.targetInUserServantEntity;
      m_target = selectAfterCallback->fields.m_target;
      original_method_info = selectAfterCallback->fields.original_method_info;
      v8 = *(_QWORD *)&selectAfterCallback->fields.extra_arg;
      v9 = 1LL;
      goto LABEL_9;
    }
LABEL_10:
    sub_1B64C5C(this, result);
  }
  if ( !selectAfterCallback )
    goto LABEL_10;
  m_target = selectAfterCallback->fields.m_target;
  original_method_info = selectAfterCallback->fields.original_method_info;
  v8 = *(_QWORD *)&selectAfterCallback->fields.extra_arg;
  v9 = 0LL;
  targetInUserServantEntity = 0LL;
LABEL_9:
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, struct UserServantEntity_o *, __int64))m_target)(
    original_method_info,
    v9,
    targetInUserServantEntity,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__CloseRecovertFatigueDialog(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t fatigueRecoveryConfirmationDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x19
  Il2CppObject *Request_object; // x0
  struct UserServantEntity_o *targetOutUserServantEntity; // x8
  Il2CppObject *v13; // x19
  int32_t v14; // w21
  struct UserServantEntity_o *v15; // x8
  __int128 v16; // q1
  int32_t v17; // w22
  struct UserServantEntity_o *v18; // x8
  __int128 v19; // q0
  int64_t v20; // x20
  int64_t v21; // x4
  ServantRecoverySyncRequest_o *v22; // x0
  int32_t v23; // w1
  int32_t v24; // w2
  int64_t v25; // x3
  int32_t eventId; // w21
  struct UserServantEntity_o *v27; // x8
  __int128 v28; // q1
  int32_t v29; // w20
  struct UserServantEntity_o *targetInUserServantEntity; // x8
  __int128 v31; // q1
  int32_t v32; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+60h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+80h] [xbp-50h]

  if ( (byte_4A02D2B & 1) == 0 )
  {
    sub_1B64A00(&Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__, isDecide);
    sub_1B64A00(&Method_NetworkManager_getRequest_ServantRecoverySyncRequest___, v5);
    sub_1B64A00(&NetworkManager_TypeInfo, v6);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1B64A00(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4A02D2B = 1;
  }
  fatigueRecoveryConfirmationDialog = (int64_t)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_31;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)fatigueRecoveryConfirmationDialog, 0LL);
  if ( !isDecide )
    return;
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v10,
                     (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_ServantRecoverySyncRequest___);
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v13 = Request_object;
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
                                            0LL);
      v27 = this->fields.targetOutUserServantEntity;
      if ( v27 )
      {
        v28 = *(_OWORD *)&v27->fields.id.fields.fakeValue;
        v29 = fatigueRecoveryConfirmationDialog;
        *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v27->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v37.fields.fakeValue = v28;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v33 = v37;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(
                                              &v33,
                                              0LL);
        if ( v13 )
        {
          v21 = fatigueRecoveryConfirmationDialog;
          v22 = (ServantRecoverySyncRequest_o *)v13;
          v23 = eventId;
          v24 = v29;
          v25 = 0LL;
          goto LABEL_29;
        }
      }
    }
LABEL_31:
    sub_1B64C5C(fatigueRecoveryConfirmationDialog, isDecide);
  }
  v14 = this->fields.eventId;
  fatigueRecoveryConfirmationDialog = (int64_t)this->fields.targetRecoveryFatigueItem;
  if ( !targetOutUserServantEntity )
  {
    if ( fatigueRecoveryConfirmationDialog )
    {
      fatigueRecoveryConfirmationDialog = EventServantRecoveryFatigueItem__get_Idx(
                                            (EventServantRecoveryFatigueItem_o *)fatigueRecoveryConfirmationDialog,
                                            0LL);
      targetInUserServantEntity = this->fields.targetInUserServantEntity;
      if ( targetInUserServantEntity )
      {
        v31 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
        v32 = fatigueRecoveryConfirmationDialog;
        *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v37.fields.fakeValue = v31;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v34 = v37;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(
                                              &v34,
                                              0LL);
        if ( v13 )
        {
          v25 = fatigueRecoveryConfirmationDialog;
          v22 = (ServantRecoverySyncRequest_o *)v13;
          v23 = v14;
          v24 = v32;
          v21 = 0LL;
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
                                        0LL);
  v15 = this->fields.targetInUserServantEntity;
  if ( !v15 )
    goto LABEL_31;
  v16 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
  v17 = fatigueRecoveryConfirmationDialog;
  *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v37.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v36 = v37;
  fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v36, 0LL);
  v18 = this->fields.targetOutUserServantEntity;
  if ( !v18 )
    goto LABEL_31;
  v19 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
  v20 = fatigueRecoveryConfirmationDialog;
  *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v35.fields.fakeValue = v19;
  fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v35, 0LL);
  if ( !v13 )
    goto LABEL_31;
  v21 = fatigueRecoveryConfirmationDialog;
  v22 = (ServantRecoverySyncRequest_o *)v13;
  v23 = v14;
  v24 = v17;
  v25 = v20;
LABEL_29:
  ServantRecoverySyncRequest__beginRequest(v22, v23, v24, v25, v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__CreateList(
        EventServantFatigueListViewManager_o *this,
        int32_t eventId,
        EventServantRecoveryFatigueItem_o *targetItem,
        System_Action_bool__UserServantEntity__o *afterCallback,
        const MethodInfo *method)
{
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
  EventServantFatigueListViewManager_c *v21; // x0
  struct ListViewSort_o *servantSortStatus; // x1
  struct ListViewSort_o **p_sort; // x23
  __int64 v24; // x1
  __int64 sort; // x0
  TitleInfoControl_o *titleInfo; // x8
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  UnityEngine_Object_o *fatigueRecoveryConfirmationDialog; // x24
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *fatigueRecoveryConfirmationDialogPrefab; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_GameObject_o *v43; // x24
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *Component_object; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  System_Int32_array *v51; // x23
  EventUpValSetupInfo_o *v52; // x21
  const MethodInfo *v53; // x2
  __int64 v54; // x23
  __int64 v55; // x28
  __int64 v56; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  UserServantEntity_o *v58; // x24
  __int128 v59; // q0
  int64_t v60; // x0
  int32_t v61; // w26
  int64_t v62; // x27
  EventServantFatigueListViewItem_o *v63; // x25
  const MethodInfo *v64; // x6
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v72; // x2
  const MethodInfo *v73; // x1
  struct EventServantRecoveryFatigueItem_o **p_targetRecoveryFatigueItem; // [xsp+0h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77[2]; // [xsp+30h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v84; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4A02D1B & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&eventId);
    sub_1B64A00(&EventServantFatigueListViewItem_TypeInfo, v8);
    sub_1B64A00(&EventServantFatigueListViewManager_TypeInfo, v9);
    sub_1B64A00(&EventUpValSetupInfo_TypeInfo, v10);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___, v11);
    sub_1B64A00(&int___TypeInfo, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_1B64A00(&LocalizationManager_TypeInfo, v14);
    sub_1B64A00(&NetworkManager_TypeInfo, v15);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject____75801936, v16);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v17);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B64A00(&StringLiteral_11721/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v20);
    byte_4A02D1B = 1;
  }
  v21 = EventServantFatigueListViewManager_TypeInfo;
  memset(&v77[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v21 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v21->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  p_sort = &this->fields.sort;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.sort,
    (int32_t)servantSortStatus,
    (int32_t)targetItem,
    (int32_t)afterCallback);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  sort = NetworkManager__getTime(0LL);
  titleInfo = this->fields.titleInfo;
  this->fields.updateTime = sort;
  if ( !titleInfo )
    goto LABEL_62;
  TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 79, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnSprite_36880424((TitleInfoControl_o *)sort, 1, 0, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity, 0, v27, v28);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity, 0, v29, v30);
  this->fields.eventId = eventId;
  this->fields.statusShowUserSvtId = -1LL;
  this->fields.targetRecoveryFatigueItem = targetItem;
  p_targetRecoveryFatigueItem = &this->fields.targetRecoveryFatigueItem;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.targetRecoveryFatigueItem,
    (int32_t)targetItem,
    v31,
    v32);
  this->fields.selectAfterCallback = afterCallback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.selectAfterCallback, (int32_t)afterCallback, v33, v34);
  this->fields.modeKind = 0;
  fatigueRecoveryConfirmationDialog = (UnityEngine_Object_o *)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = UnityEngine_Object__op_Equality(0LL, fatigueRecoveryConfirmationDialog, 0LL);
  if ( (sort & 1) != 0 )
  {
    fatigueRecoveryConfirmationDialogPrefab = (Il2CppObject *)this->fields.fatigueRecoveryConfirmationDialogPrefab;
    v78.fields.x = 0.0;
    v78.fields.y = 0.0;
    v78.fields.z = 0.0;
    v83 = UnityEngine_Quaternion__Internal_FromEulerRad(v78, 0LL);
    x = v83.fields.x;
    y = v83.fields.y;
    z = v83.fields.z;
    w = v83.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v79.fields.x = 0.0;
    v79.fields.y = 0.0;
    v79.fields.z = 0.0;
    v84.fields.x = x;
    v84.fields.y = y;
    v84.fields.z = z;
    v84.fields.w = w;
    sort = (__int64)UnityEngine_Object__Instantiate_object__49014768(
                      fatigueRecoveryConfirmationDialogPrefab,
                      v79,
                      v84,
                      (const MethodInfo_2EBE7F0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801936);
    if ( !sort )
      goto LABEL_62;
    v43 = (UnityEngine_GameObject_o *)sort;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)sort, 0LL);
    sort = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_62;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)sort, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v43, 0LL);
    if ( !sort )
      goto LABEL_62;
    v80.fields.x = 0.0;
    v80.fields.y = 0.0;
    v80.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)sort, v80, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v43, 0LL);
    if ( !sort )
      goto LABEL_62;
    v81.fields.x = 0.0;
    v81.fields.y = 0.0;
    v81.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)sort, v81, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v43, 0LL);
    if ( !sort )
      goto LABEL_62;
    v82.fields.x = 1.0;
    v82.fields.y = 1.0;
    v82.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)sort, v82, 0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v43,
                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___);
    this->fields.fatigueRecoveryConfirmationDialog = (struct FatigueRecoveryConfirmationDialog_o *)Component_object;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields.fatigueRecoveryConfirmationDialog,
      (int32_t)Component_object,
      v46,
      v47);
    sort = (__int64)this->fields.fatigueRecoveryConfirmationDialog;
    if ( !sort )
      goto LABEL_62;
    sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
    if ( !sort )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 0, 0LL);
  }
  if ( !*p_sort )
    goto LABEL_62;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
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
      goto LABEL_33;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v36, v37);
LABEL_33:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_62;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = sub_1B64AA8(int___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_62;
  v51 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
LABEL_57:
    sub_1B64C64(sort, v24);
  *(_DWORD *)(sort + 32) = eventId;
  v52 = (EventUpValSetupInfo_o *)sub_1B64C4C(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_38597476(v52, v51, 1, 0, 0, 0LL);
  EventServantFatigueListViewManager__SetUpBonusFilterButton(this, v52, v53);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  sort = (__int64)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_62;
  sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_62;
  v54 = sort;
  if ( (int)*(_QWORD *)(sort + 24) >= 1 )
  {
    v55 = 0LL;
    v56 = (unsigned int)*(_QWORD *)(sort + 24) - 1LL;
    while ( *p_targetRecoveryFatigueItem )
    {
      userServantEntity = (*p_targetRecoveryFatigueItem)->fields.userServantEntity;
      v58 = *(UserServantEntity_o **)(v54 + 32 + 8 * v55);
      if ( userServantEntity )
      {
        v59 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v77[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v77[1].fields.fakeValue = v59;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v77, -1LL, 0LL);
        v77[1] = v77[0];
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v76 = v77[1];
      v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v76, 0LL);
      v61 = this->fields.eventId;
      v62 = v60;
      v63 = (EventServantFatigueListViewItem_o *)sub_1B64C4C(EventServantFatigueListViewItem_TypeInfo);
      EventServantFatigueListViewItem___ctor(v63, v58, v61, v62, v52, targetItem, v64);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v67 = *(_QWORD *)(sort + 16);
      v68 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v67 )
        break;
      v69 = *(int *)(sort + 24);
      if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v63,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = v67 + 8 * v69;
        *(_DWORD *)(sort + 24) = v69 + 1;
        *(_QWORD *)(v70 + 32) = v63;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v70 + 32), (int32_t)v63, v65, v66);
      }
      if ( v56 == v55 )
        goto LABEL_58;
      if ( ++v55 >= (unsigned __int64)*(unsigned int *)(v54 + 24) )
        goto LABEL_57;
    }
LABEL_62:
    sub_1B64C5C(sort, v24);
  }
LABEL_58:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11721/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_62;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EventServantFatigueListViewManager__SetStatusKind(this, this->fields.modeKind, v72);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventServantFatigueListViewManager__SetFilterButtonImage(this, v73);
}


void __fastcall EventServantFatigueListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventServantFatigueListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4A02D15 & 1) == 0 )
  {
    sub_1B64A00(&EventServantFatigueListViewManager_TypeInfo, v1);
    byte_4A02D15 = 1;
  }
  v2 = EventServantFatigueListViewManager_TypeInfo;
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v2 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1B64C5C(0LL, v1);
  ListViewSort__DeleteContinueData(servantSortStatus, 0LL);
}


void __fastcall EventServantFatigueListViewManager__DestroyList(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  this->fields.updateTime = -1LL;
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B64C5C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall EventServantFatigueListViewManager__EndClickTabChoice(
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
  EventServantFatigueListViewManager__SetMode_45799212(this, 2, v6);
}


void __fastcall EventServantFatigueListViewManager__EndClickTabLock(
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
  EventServantFatigueListViewManager__SetMode_45799212(this, 2, v6);
}


void __fastcall EventServantFatigueListViewManager__EndClickTabPush(
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
  EventServantFatigueListViewManager__SetMode_45799212(this, 2, v6);
}


void __fastcall EventServantFatigueListViewManager__EndClickTabStatus(
        EventServantFatigueListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  EventServantFatigueListViewManager__SetStatusKind(this, 0, method);
  EventServantFatigueListViewManager__ModifyList(this, 0, v4);
  EventServantFatigueListViewManager__SetMode_45799212(this, 2, v5);
}


void __fastcall EventServantFatigueListViewManager__EndPushRequest(
        EventServantFatigueListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventServantFatigueListViewManager__ModifyList(this, 0, method);
  EventServantFatigueListViewManager__SetMode_45799212(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__EndSelectFilterKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A02D31 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A02D31 = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EventServantFatigueListViewManager__SetFilterButtonImage(this, v6);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_1B64C5C(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)sort, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__EndSelectSortKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A02D35 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A02D35 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__EndShowServant(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A02D2E & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A02D2E = 1;
  }
  EventServantFatigueListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventServantFatigueListViewManager__ModifyList(this, 0, v4);
  EventServantFatigueListViewManager__SetMode_45799212(this, 2, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall EventServantFatigueListViewManager__EndStatusSync(
        EventServantFatigueListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct EventServantFatigueListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  ServantStatusBattleListViewItem_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (ServantStatusBattleListViewItem_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0LL;
    sub_1B649A4(p_requestCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))requestCallback->fields.m_target)(
      requestCallback->fields.original_method_info,
      1LL,
      *(_QWORD *)&requestCallback->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventServantFatigueListViewManager__GetAmountSortValue(
        EventServantFatigueListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w25
  int32_t v10; // w22
  int64_t v11; // x21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__c *klass; // x8
  Il2CppClass *parent; // x23
  Il2CppClass *declaringType; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A02D2F & 1) == 0 )
  {
    sub_1B64A00(&EventServantFatigueListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4A02D2F = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v10 = 0;
    v11 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
        break;
      if ( (EventServantFatigueListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewItem_TypeInfo )
        break;
      klass = itemList[3].klass;
      if ( !klass )
        break;
      declaringType = klass->_1.declaringType;
      parent = klass->_1.parent;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v17.fields.currentCryptoKey = declaringType;
      *(_QWORD *)&v17.fields.fakeValue = parent;
      ++v10;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v17, 0LL) == svtId )
        ++v11;
      if ( size == v10 )
        return v11;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1B64C5C(itemList, *(_QWORD *)&svtId);
  }
  return 0LL;
}


void __fastcall EventServantFatigueListViewManager__GetInRecoveryTime(
        EventServantFatigueListViewManager_o *this,
        int64_t recoveryFatigueTime,
        System_String_o **beforeTime,
        System_String_o **afterTime,
        bool isMatch,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *RestTime4; // x24
  __int64 v16; // x1
  System_String_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x0
  int32_t IndividualityRate; // w0
  int32_t v25; // w2
  int32_t v26; // w3
  int v27; // w23
  int64_t Time; // x8
  float v29; // s0
  __int64 v30; // x10
  int64_t v31; // x21
  System_String_o *v32; // x20
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_4A02D29 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, recoveryFatigueTime);
    sub_1B64A00(&NetworkManager_TypeInfo, v11);
    sub_1B64A00(&StringLiteral_11483/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, v12);
    sub_1B64A00(&StringLiteral_11495/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, v13);
    sub_1B64A00(&StringLiteral_11583/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, v14);
    byte_4A02D29 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1LL, 0LL);
  if ( System_String__IsNullOrEmpty(RestTime4, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11495/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0LL);
    *beforeTime = v17;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)beforeTime, (int32_t)v17, v18, v19);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11483/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0LL);
  }
  else
  {
    targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
    if ( !targetRecoveryFatigueItem )
      sub_1B64C5C(0LL, v16);
    if ( isMatch )
      IndividualityRate = EventServantRecoveryFatigueItem__get_IndividualityRate(targetRecoveryFatigueItem, 0LL);
    else
      IndividualityRate = EventServantRecoveryFatigueItem__get_RecoveryRate(targetRecoveryFatigueItem, 0LL);
    v27 = IndividualityRate;
    *beforeTime = RestTime4;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)beforeTime, (int32_t)RestTime4, v25, v26);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    v29 = (float)(recoveryFatigueTime - Time) / (float)((float)v27 / 1000.0);
    v30 = (__int64)v29;
    if ( v29 == INFINITY )
      v30 = 0x8000000000000000LL;
    v31 = v30 + Time;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__GetRestTime4(v31, -1LL, 0LL);
  }
  *afterTime = v20;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)afterTime, (int32_t)v20, v21, v22);
  if ( isMatch )
  {
    v32 = *afterTime;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_11583/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
    v34 = System_String__Concat_61385136(v32, v33, 0LL);
    *afterTime = v34;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)afterTime, (int32_t)v34, v35, v36);
  }
}


System_String_o *__fastcall EventServantFatigueListViewManager__GetIndividualityName(
        EventServantFatigueListViewManager_o *this,
        System_String_array *array,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_Text_StringBuilder_o *v6; // x20
  System_Text_StringBuilder_o *appended; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  unsigned __int64 v10; // x21
  System_String_o *v11; // x0

  if ( (byte_4A02D28 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, array);
    sub_1B64A00(&System_Text_StringBuilder_TypeInfo, v4);
    sub_1B64A00(&StringLiteral_11584/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/, v5);
    byte_4A02D28 = 1;
  }
  v6 = (System_Text_StringBuilder_o *)sub_1B64C4C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v6, 0LL);
  if ( !array )
    goto LABEL_16;
  v9 = *(_QWORD *)&array->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
        sub_1B64C64(appended, v8);
      if ( !v6 )
        break;
      appended = System_Text_StringBuilder__Append_60547032(v6, array->m_Items[v10++], 0LL);
      if ( (int)v10 < (signed int)array->max_length )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11584/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/, 0LL);
        appended = System_Text_StringBuilder__Append_60547032(v6, v11, 0LL);
      }
      LODWORD(v9) = array->max_length;
      if ( (__int64)v10 >= (int)v9 )
        goto LABEL_13;
    }
LABEL_16:
    sub_1B64C5C(appended, v8);
  }
LABEL_13:
  if ( !v6 )
    goto LABEL_16;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                              v6,
                              v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
EventServantFatigueListViewItem_o *__fastcall EventServantFatigueListViewManager__GetItem(
        EventServantFatigueListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventServantFatigueListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A02D22 & 1) == 0 )
  {
    sub_1B64A00(&EventServantFatigueListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4A02D22 = 1;
  }
  result = (EventServantFatigueListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventServantFatigueListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (EventServantFatigueListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


void __fastcall EventServantFatigueListViewManager__GetOutRecoveryTime(
        EventServantFatigueListViewManager_o *this,
        int64_t recoveryFatigueTime,
        System_String_o **beforeTime,
        System_String_o **afterTime,
        bool isMatch,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *RestTime4; // x24
  __int64 v16; // x1
  System_String_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  System_String_o **v29; // x0
  EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x0
  int32_t IndividualityRate; // w0
  int32_t v32; // w2
  int32_t v33; // w3
  int v34; // w23
  int64_t Time; // x8
  float v36; // s0
  __int64 v37; // x10
  int64_t v38; // x22
  System_String_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x20
  System_String_o *v43; // x0
  System_String_o *v44; // x0

  if ( (byte_4A02D2A & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, recoveryFatigueTime);
    sub_1B64A00(&NetworkManager_TypeInfo, v11);
    sub_1B64A00(&StringLiteral_11483/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, v12);
    sub_1B64A00(&StringLiteral_11495/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, v13);
    sub_1B64A00(&StringLiteral_11583/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, v14);
    byte_4A02D2A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1LL, 0LL);
  if ( System_String__IsNullOrEmpty(RestTime4, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11495/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0LL);
    *beforeTime = v17;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)beforeTime, (int32_t)v17, v18, v19);
    if ( isMatch )
    {
      v20 = *beforeTime;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11583/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
      v22 = System_String__Concat_61385136(v20, v21, 0LL);
      *beforeTime = v22;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)beforeTime, (int32_t)v22, v23, v24);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11483/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0LL);
    v28 = (int)v25;
    *afterTime = v25;
    v29 = afterTime;
LABEL_29:
    sub_1B649A4((ServantStatusBattleListViewItem_o *)v29, v28, v26, v27);
    return;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    sub_1B64C5C(0LL, v16);
  if ( isMatch )
    IndividualityRate = EventServantRecoveryFatigueItem__get_IndividualityRate(targetRecoveryFatigueItem, 0LL);
  else
    IndividualityRate = EventServantRecoveryFatigueItem__get_RecoveryRate(targetRecoveryFatigueItem, 0LL);
  v34 = IndividualityRate;
  *beforeTime = RestTime4;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)beforeTime, (int32_t)RestTime4, v32, v33);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v36 = (float)((float)v34 / 1000.0) * (float)(recoveryFatigueTime - Time);
  v37 = (__int64)v36;
  if ( v36 == INFINITY )
    v37 = 0x8000000000000000LL;
  v38 = v37 + Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v39 = LocalizationManager__GetRestTime4(v38, -1LL, 0LL);
  *afterTime = v39;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)afterTime, (int32_t)v39, v40, v41);
  if ( isMatch )
  {
    v42 = *beforeTime;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11583/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
    v44 = System_String__Concat_61385136(v42, v43, 0LL);
    v28 = (int)v44;
    *beforeTime = v44;
    v29 = beforeTime;
    goto LABEL_29;
  }
}


bool __fastcall EventServantFatigueListViewManager__GetSwapChoiceList(
        EventServantFatigueListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  int64_t itemList; // x0
  int v21; // w25
  int32_t v22; // w24
  __int64 methodPtr_low; // x10
  __int64 v24; // x8
  __int128 v25; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  __int128 v30; // q0
  struct System_Int64_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  System_Collections_Generic_List_long__o *v35; // x0
  int v36; // w21
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_4A02D39 & 1) == 0 )
  {
    sub_1B64A00(&EventServantFatigueListViewItem_TypeInfo, choiceList);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1B64A00(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4A02D39 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64C4C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3497114 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1B64C4C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3497114 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v21 = *(_DWORD *)(itemList + 24);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v22,
                            (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventServantFatigueListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v24 = *(_QWORD *)(itemList + 120);
      if ( v24 && *(_BYTE *)(itemList + 193) )
      {
        if ( *(_BYTE *)(itemList + 162) )
        {
          v25 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v47, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v27 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v34 = v27[4];
            v35 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v35,
              v17,
              *(const MethodInfo_3497968 **)(*(_QWORD *)(v34 + 192) + 112LL));
            goto LABEL_28;
          }
          v29 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v30 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v30;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v46 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v46, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v31 = v15->fields._items;
          v32 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v31 )
            goto LABEL_37;
          v33 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v33 >= v31->max_length )
          {
            v34 = v32[4];
            v35 = v15;
            goto LABEL_27;
          }
          v29 = &v31->obj.klass + v33;
          v15->fields._size = v33 + 1;
        }
        v29[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v21 == ++v22 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1B64C5C(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *choiceList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)choiceList, 0, v18, v19);
    v44 = unchoiceList;
    v43 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_34994C0 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v37;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_34994C0 *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unchoiceList = v40;
    v44 = unchoiceList;
  }
  sub_1B649A4((ServantStatusBattleListViewItem_o *)v44, v43, v41, v42);
  return v36 > 0;
}


bool __fastcall EventServantFatigueListViewManager__GetSwapLockList(
        EventServantFatigueListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  int64_t itemList; // x0
  int v21; // w25
  int32_t v22; // w24
  __int64 methodPtr_low; // x10
  __int64 v24; // x8
  __int128 v25; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  __int128 v30; // q0
  struct System_Int64_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  System_Collections_Generic_List_long__o *v35; // x0
  int v36; // w21
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_4A02D38 & 1) == 0 )
  {
    sub_1B64A00(&EventServantFatigueListViewItem_TypeInfo, lockList);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1B64A00(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4A02D38 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64C4C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3497114 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1B64C4C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3497114 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v21 = *(_DWORD *)(itemList + 24);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v22,
                            (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventServantFatigueListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v24 = *(_QWORD *)(itemList + 120);
      if ( v24 && *(_BYTE *)(itemList + 192) )
      {
        if ( *(_BYTE *)(itemList + 161) )
        {
          v25 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v47, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v27 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v34 = v27[4];
            v35 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v35,
              v17,
              *(const MethodInfo_3497968 **)(*(_QWORD *)(v34 + 192) + 112LL));
            goto LABEL_28;
          }
          v29 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v30 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v30;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v46 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v46, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v31 = v15->fields._items;
          v32 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v31 )
            goto LABEL_37;
          v33 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v33 >= v31->max_length )
          {
            v34 = v32[4];
            v35 = v15;
            goto LABEL_27;
          }
          v29 = &v31->obj.klass + v33;
          v15->fields._size = v33 + 1;
        }
        v29[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v21 == ++v22 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1B64C5C(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *lockList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)lockList, 0, v18, v19);
    v44 = unlockList;
    v43 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_34994C0 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v37;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_34994C0 *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unlockList = v40;
    v44 = unlockList;
  }
  sub_1B649A4((ServantStatusBattleListViewItem_o *)v44, v43, v41, v42);
  return v36 > 0;
}


void __fastcall EventServantFatigueListViewManager__InitBackListView(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  EventServantFatigueListViewManager__StatusRequest(this, 0LL, v2);
  EventServantFatigueListViewManager__SetStatusKind(this, 0, v4);
}


void __fastcall EventServantFatigueListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EventServantFatigueListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4A02D16 & 1) == 0 )
  {
    sub_1B64A00(&EventServantFatigueListViewManager_TypeInfo, v1);
    byte_4A02D16 = 1;
  }
  v2 = EventServantFatigueListViewManager_TypeInfo;
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v2 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1B64C5C(0LL, v1);
  ListViewSort__InitLoad(servantSortStatus, 0LL);
}


bool __fastcall EventServantFatigueListViewManager__IsMatchIndividuality(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v11; // x20
  unsigned __int64 v12; // x25
  struct EventServantRecoveryFatigueItem_o *v13; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v15; // w21
  Il2CppObject *v16; // x22
  __int64 v17; // x23
  __int64 v18; // x24
  struct EventServantRecoveryFatigueItem_o *v19; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v20; // x8
  int32_t v21; // w23
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4A02D27 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A02D27 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    goto LABEL_25;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)targetRecoveryFatigueItem->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
  if ( !v9 )
    goto LABEL_25;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v9,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_30D67EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)this->fields.targetRecoveryFatigueItem;
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)EventServantRecoveryFatigueItem__get_Individuality(
                                  (EventServantRecoveryFatigueItem_o *)Instance,
                                  0LL);
    if ( !Instance )
      goto LABEL_25;
    m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
    v11 = Instance;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)m_CancellationTokenSource )
          sub_1B64C64(Instance, v7);
        v13 = this->fields.targetRecoveryFatigueItem;
        if ( !v13 )
          break;
        userServantEntity = v13->fields.userServantEntity;
        if ( !userServantEntity )
          break;
        v15 = *((_DWORD *)&v11->fields._DispLog + v12);
        v16 = entity;
        v18 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v17 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v24.fields.currentCryptoKey = v18;
        *(_QWORD *)&v24.fields.fakeValue = v17;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v24, 0LL);
        v19 = this->fields.targetRecoveryFatigueItem;
        if ( !v19 )
          break;
        v20 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v19->fields.userServantEntity;
        if ( !v20 )
          break;
        v21 = (int)Instance;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v20[8], 0LL);
        if ( !v16 )
          break;
        Instance = (DataManager_o *)ServantEntity__IsIndividuality(
                                      (ServantEntity_o *)v16,
                                      v21,
                                      (int32_t)Instance,
                                      v15,
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
          if ( (__int64)++v12 < (int)m_CancellationTokenSource )
            continue;
        }
        return (unsigned __int8)Instance & 1;
      }
LABEL_25:
      sub_1B64C5C(Instance, v7);
    }
  }
  LOBYTE(Instance) = 0;
  return (unsigned __int8)Instance & 1;
}


void __fastcall EventServantFatigueListViewManager__ModifyItem(
        EventServantFatigueListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x11
  EventServantFatigueListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v22; // q0
  int64_t v23; // x0
  Il2CppObject v24; // q0
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *viewObject; // x21
  __int64 v27; // x1
  struct ListViewObject_o *v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4A02D1F & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1B64A00(&EventServantFatigueListViewItem_TypeInfo, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v11);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A02D1F = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_37;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_37;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_30D6944 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v31,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v32.fields._list = *(_OWORD *)&v31.fields.currentCryptoKey;
      v32.fields._current = (Il2CppObject *)v31.fields.fakeValue;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v32,
                (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v17 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v32,
            (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v32.fields._current
          && (methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v32.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventServantFatigueListViewItem_c *)v32.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = (EventServantFatigueListViewItem_o *)v32.fields._current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_1B64C5C(v17, v18);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_1B64C5C(v17, v18);
            v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v31.fields.fakeValue = v22;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v30 = v31;
            v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v30, 0LL);
            v24 = Entity[2];
            *(Il2CppObject *)&v29.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v29.fields.fakeValue = v24;
            if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v29, 0LL) )
              EventServantFatigueListViewItem__ModifyItem(current, (UserServantEntity_o *)Entity, v25);
            goto LABEL_26;
          }
        }
        else
        {
          current = 0LL;
          if ( Entity )
            goto LABEL_15;
        }
        if ( !current )
          sub_1B64C5C(v17, v18);
LABEL_26:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v28 = current->fields.viewObject;
          if ( !v28 )
            sub_1B64C5C(0LL, v27);
          ((void (__fastcall *)(struct ListViewObject_o *, EventServantFatigueListViewItem_o *, Il2CppMethodPointer))v28->klass->vtable._5_SetItem.method)(
            v28,
            current,
            v28->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_37:
    sub_1B64C5C(Instance, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__ModifyList(
        EventServantFatigueListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t sort; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v12; // x25
  int64_t v13; // x20
  int size; // w28
  unsigned int v15; // w26
  __int64 v16; // x8
  __int128 v17; // q0
  int64_t v18; // x22
  int32_t v19; // w23
  int64_t v20; // x24
  __int64 methodPtr_low; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  __int64 v24; // x8
  __int128 v25; // q0
  int64_t v26; // x0
  const MethodInfo *v27; // x4
  bool isIconSizeChangea; // [xsp+Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+70h] [xbp-80h]

  if ( (byte_4A02D21 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_1B64A00(&EventServantFatigueListViewItem_TypeInfo, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A02D21 = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_33;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_33;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  v12 = *(_QWORD *)(sort + 24);
  v13 = sort;
  if ( (int)v12 >= 1 )
  {
    size = itemList->fields._size;
    v15 = 0;
    isIconSizeChangea = isIconSizeChange;
    while ( 1 )
    {
      v16 = *(_QWORD *)(v13 + 8LL * (int)v15 + 32);
      if ( !v16 )
        break;
      v17 = *(_OWORD *)(v16 + 32);
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
      *(_OWORD *)&v32.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v31 = v32;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v31, 0LL);
      if ( size >= 1 )
      {
        v18 = sort;
        v19 = 0;
        while ( 1 )
        {
          sort = (int64_t)this->fields.itemList;
          if ( !sort )
            goto LABEL_33;
          sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)sort,
                            v19,
                            (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !sort )
            goto LABEL_33;
          v20 = sort;
          methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)methodPtr_low
            || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * methodPtr_low - 8) != EventServantFatigueListViewItem_TypeInfo )
          {
            goto LABEL_33;
          }
          v22 = *(_QWORD *)(sort + 120);
          if ( v22 )
          {
            v23 = *(_OWORD *)(v22 + 32);
            *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
            *(_OWORD *)&v32.fields.fakeValue = v23;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v30 = v32;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v30, 0LL);
            if ( sort == v18 )
              break;
          }
          if ( size == ++v19 )
            goto LABEL_29;
        }
        v24 = *(_QWORD *)(v20 + 120);
        if ( !v24 )
          break;
        v25 = *(_OWORD *)(v24 + 32);
        *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
        *(_OWORD *)&v32.fields.fakeValue = v25;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v29 = v32;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v29, 0LL);
        EventServantFatigueListViewManager__ModifyLockItem(this, v26, 1, isIconSizeChangea, v27);
      }
LABEL_29:
      if ( ++v15 == (_DWORD)v12 )
        return;
      if ( v15 >= *(_DWORD *)(v13 + 24) )
        sub_1B64C64(sort, isIconSizeChange);
    }
LABEL_33:
    sub_1B64C5C(sort, isIconSizeChange);
  }
}


void __fastcall EventServantFatigueListViewManager__ModifyLockItem(
        EventServantFatigueListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v20; // w20
  int64_t v21; // x0
  const MethodInfo *v22; // x1
  __int64 methodPtr_low; // x11
  Il2CppObject *current; // x22
  _OWORD *monitor; // x8
  __int128 v26; // q0
  int64_t v27; // x0
  Il2CppObject v28; // q0
  int64_t v29; // x24
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  UnityEngine_Object_o *v34; // x23
  __int64 v35; // x1
  void *v36; // x0
  __int64 v37; // x1
  ListViewObject_o *v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_4A02D20 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11);
    sub_1B64A00(&EventServantFatigueListViewItem_TypeInfo, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v14);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4A02D20 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_45;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_45;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_30D6944 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v42,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v43.fields._list = *(_OWORD *)&v42.fields.currentCryptoKey;
      v43.fields._current = (Il2CppObject *)v42.fields.fakeValue;
      v20 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v43,
                (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v21 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v43,
            (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v43.fields._current
          && (methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v43.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventServantFatigueListViewItem_c *)v43.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = v43.fields._current;
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
          sub_1B64C5C(v21, v22);
        monitor = current[7].monitor;
        if ( !monitor )
          sub_1B64C5C(v21, v22);
        v26 = monitor[2];
        *(_OWORD *)&v42.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v42.fields.fakeValue = v26;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v41 = v42;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v41, 0LL);
        v28 = Entity[2];
        v29 = v27;
        *(Il2CppObject *)&v40.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v40.fields.fakeValue = v28;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v40, 0LL);
        if ( v29 == v21 )
        {
          current[7].monitor = Entity;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)&current[7].monitor, (int32_t)Entity, v30, v31);
        }
LABEL_26:
        if ( v20 )
        {
          if ( !current )
            sub_1B64C5C(v21, v22);
          EventServantFatigueListViewItem__ModifyLockItem((EventServantFatigueListViewItem_o *)current, v22);
          EventServantFatigueListViewItem__ModifyChoiceItem((EventServantFatigueListViewItem_o *)current, v32);
          EventServantFatigueListViewItem__ModifyPushItem((EventServantFatigueListViewItem_o *)current, v33);
        }
        else if ( !current )
        {
          sub_1B64C5C(v21, v22);
        }
        v34 = (UnityEngine_Object_o *)current[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
        {
          v36 = current[6].monitor;
          if ( !v36 )
            sub_1B64C5C(0LL, v35);
          (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v36 + 392LL))(
            v36,
            current,
            *(_QWORD *)(*(_QWORD *)v36 + 400LL));
          if ( isIconSizeChange )
          {
            v38 = (ListViewObject_o *)current[6].monitor;
            if ( !v38 )
              sub_1B64C5C(0LL, v37);
            ListViewObject__SetItemSeed(v38, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_45:
    sub_1B64C5C(Instance, v17);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickBack(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x20

  if ( (byte_4A02D3F & 1) == 0 )
  {
    sub_1B64A00(&Method_EventServantFatigueListViewManager_OnClickBack__, method);
    byte_4A02D3F = 1;
  }
  v3 = Method_EventServantFatigueListViewManager_OnClickBack__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B64A18(Method_EventServantFatigueListViewManager_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.selectAfterCallback, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))selectAfterCallback->fields.m_target)(
      selectAfterCallback->fields.original_method_info,
      0LL,
      0LL,
      *(_QWORD *)&selectAfterCallback->fields.extra_arg);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickBonusFilterKind(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4A02D32 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__, method);
    byte_4A02D32 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64A18(Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64C5C(0LL, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickChoiceTab(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  if ( (byte_4A02D3C & 1) == 0 )
  {
    sub_1B64A00(&Method_EventServantFatigueListViewManager_EndClickTabChoice__, method);
    sub_1B64A00(&Method_EventServantFatigueListViewManager_OnClickChoiceTab__, v3);
    sub_1B64A00(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4A02D3C = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v5 = Method_EventServantFatigueListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_EventServantFatigueListViewManager_OnClickChoiceTab__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1B64C4C(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabChoice__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v8, v9);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 2, v7);
      EventServantFatigueListViewManager__RefreshListDisp(this, v10);
      EventServantFatigueListViewManager__ModifyList(this, 0, v11);
      EventServantFatigueListViewManager__SetMode_45799212(this, 2, v12);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickCollectLock(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  if ( (byte_4A02D3B & 1) == 0 )
  {
    sub_1B64A00(&Method_EventServantFatigueListViewManager_EndClickTabLock__, method);
    sub_1B64A00(&Method_EventServantFatigueListViewManager_OnClickCollectLock__, v3);
    sub_1B64A00(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4A02D3B = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v5 = Method_EventServantFatigueListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_EventServantFatigueListViewManager_OnClickCollectLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1B64C4C(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabLock__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v8, v9);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 1, v7);
      EventServantFatigueListViewManager__RefreshListDisp(this, v10);
      EventServantFatigueListViewManager__ModifyList(this, 0, v11);
      EventServantFatigueListViewManager__SetMode_45799212(this, 2, v12);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickFilterKind(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4A02D30 & 1) == 0 )
  {
    sub_1B64A00(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B64A00(&Method_EventServantFatigueListViewManager_EndSelectFilterKind__, v3);
    sub_1B64A00(&Method_EventServantFatigueListViewManager_OnClickFilterKind__, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A02D30 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EventServantFatigueListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64A18(Method_EventServantFatigueListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B649E4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B64C4C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1B64C5C(v12, v13);
    CommonUI__OpenServantFilterSelectMenu(v10, 1, sort, v11, -1, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickListView(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventServantFatigueListViewManager__OnClickNormalStatus(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4A02D3A & 1) == 0 )
  {
    sub_1B64A00(&Method_EventServantFatigueListViewManager_EndClickTabStatus__, method);
    sub_1B64A00(&Method_EventServantFatigueListViewManager_OnClickNormalStatus__, v3);
    sub_1B64A00(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4A02D3A = 1;
  }
  if ( this->fields.modeKind )
  {
    v5 = Method_EventServantFatigueListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_EventServantFatigueListViewManager_OnClickNormalStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1B64C4C(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndClickTabStatus__,
      0LL);
    EventServantFatigueListViewManager__StatusRequest(this, v7, v8);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickPushTab(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  if ( (byte_4A02D3D & 1) == 0 )
  {
    sub_1B64A00(&Method_EventServantFatigueListViewManager_EndClickTabPush__, method);
    sub_1B64A00(&Method_EventServantFatigueListViewManager_OnClickPushTab__, v3);
    sub_1B64A00(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4A02D3D = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_EventServantFatigueListViewManager_OnClickPushTab__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickPushTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_EventServantFatigueListViewManager_OnClickPushTab__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1B64C4C(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabPush__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v8, v9);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 3, v7);
      EventServantFatigueListViewManager__RefreshListDisp(this, v10);
      EventServantFatigueListViewManager__ModifyList(this, 0, v11);
      EventServantFatigueListViewManager__SetMode_45799212(this, 2, v12);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickScaleChange(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  EventServantFatigueListViewManager_o *v10; // x0
  int v11; // w8
  ServantStatusBattleListViewItem_o *p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v14; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4A02D40 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventServantFatigueListViewManager_OnClickScaleChange__, method);
    byte_4A02D40 = 1;
  }
  v3 = Method_EventServantFatigueListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B64A18(Method_EventServantFatigueListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v10 = this;
    v11 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v10 = this;
    v11 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v10 = this;
    v11 = 1;
LABEL_11:
    v10->fields.seed = smallSizeSeed;
    p_seed = (ServantStatusBattleListViewItem_o *)&v10->fields.seed;
    p_seed[2].fields.dispLimitCount.fields.currentCryptoKey = v11;
    sub_1B649A4(p_seed, (int32_t)smallSizeSeed, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v14 = this->fields.scaleType,
        sort->fields.iconScaleKind = v14,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v14, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1B64C5C(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  EventServantFatigueListViewManager__ModifyList(this, 1, v16);
  EventServantFatigueListViewManager__SetMode_45799212(this, 2, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventServantFatigueListViewManager__OnClickSelectObject(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ListViewObject_o *v3; // x20
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
  int64_t fatigueRecoveryConfirmationDialog; // x0
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  __int64 methodPtr_low; // x10
  EventServantFatigueListViewItem_o *Item; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  const MethodInfo *v31; // x2
  __int64 v32; // x8
  __int128 v33; // q1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v35; // q0
  int64_t v36; // x23
  const MethodInfo *v37; // x2
  bool IsMatchIndividuality_45788608; // w0
  const MethodInfo *v39; // x5
  int32_t v40; // w2
  int32_t v41; // w3
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct UserServantEntity_o *v43; // x1
  FatigueRecoveryConfirmationDialog_o *v44; // x20
  System_String_o *v45; // x21
  Il2CppObject *Name; // x0
  System_String_o *v47; // x21
  System_String_o *v48; // x0
  UserServantEntity_o *targetOutUserServantEntity; // x22
  System_String_o *v50; // x23
  System_String_o *outAfterTime; // x27
  System_String_o *v52; // x24
  CommonConfirmDialog_ClickDelegate_o *func; // x25
  bool v54; // w0
  const MethodInfo *v55; // x5
  struct UserServantEntity_o *v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  FatigueRecoveryConfirmationDialog_o *v59; // x20
  System_String_o *v60; // x21
  Il2CppObject *v61; // x0
  System_String_o *v62; // x21
  System_String_o *v63; // x0
  UserServantEntity_o *v64; // x22
  System_String_o *v65; // x23
  System_String_o *v66; // x24
  System_String_o *v67; // x25
  CommonConfirmDialog_ClickDelegate_o *v68; // x26
  struct EventServantRecoveryFatigueItem_o *v69; // x8
  struct UserServantEntity_o *v70; // x8
  __int128 v71; // q0
  struct UserServantEntity_o *v72; // x8
  __int128 v73; // q0
  const MethodInfo *v74; // x2
  bool v75; // w0
  const MethodInfo *v76; // x5
  struct EventServantRecoveryFatigueItem_o *v77; // x8
  struct UserServantEntity_o *v78; // x8
  UserEventServantFatigueMaster_o *v79; // x23
  int32_t eventId; // w24
  __int64 v81; // x25
  __int64 v82; // x26
  bool FatigueInfo; // w0
  const MethodInfo *v84; // x1
  int64_t v85; // x23
  int64_t v86; // x23
  bool IsMatchIndividuality; // w0
  const MethodInfo *v88; // x5
  struct UserServantEntity_o *v89; // x1
  int32_t v90; // w2
  int32_t v91; // w3
  int32_t v92; // w2
  int32_t v93; // w3
  struct EventServantRecoveryFatigueItem_o *v94; // x8
  struct UserServantEntity_o *v95; // x1
  FatigueRecoveryConfirmationDialog_o *v96; // x20
  System_String_o *v97; // x21
  Il2CppObject *v98; // x0
  System_String_o *v99; // x21
  System_String_o *v100; // x0
  System_String_o *v101; // x22
  System_String_o *v102; // x23
  UserServantEntity_o *v103; // x24
  UserServantEntity_o *targetInUserServantEntity; // x26
  System_String_o *v105; // x25
  System_String_o *v106; // x29
  System_String_o *v107; // x27
  CommonConfirmDialog_ClickDelegate_o *v108; // x28
  const MethodInfo *v109; // [xsp+18h] [xbp-168h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+30h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+50h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+70h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+90h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+B0h] [xbp-D0h]
  bool isRecover; // [xsp+D4h] [xbp-ACh] BYREF
  int64_t recoverAt; // [xsp+D8h] [xbp-A8h] BYREF
  System_String_o *v117; // [xsp+E0h] [xbp-A0h] BYREF
  System_String_o *v118; // [xsp+E8h] [xbp-98h] BYREF
  System_String_o *v119; // [xsp+F0h] [xbp-90h] BYREF
  System_String_o *v120; // [xsp+F8h] [xbp-88h] BYREF
  System_String_o *afterTime; // [xsp+100h] [xbp-80h] BYREF
  System_String_o *beforeTime; // [xsp+108h] [xbp-78h] BYREF
  System_String_o *v123; // [xsp+110h] [xbp-70h] BYREF
  System_String_o *v124; // [xsp+118h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16

  v3 = obj;
  if ( (byte_4A02D26 & 1) == 0 )
  {
    sub_1B64A00(&CommonConfirmDialog_ClickDelegate_TypeInfo, obj);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantClassMaster___, v5);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v7);
    sub_1B64A00(&Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__, v8);
    sub_1B64A00(&Method_EventServantFatigueListViewManager_OnClickSelectObject__, v9);
    sub_1B64A00(&EventServantFatigueListViewObject_TypeInfo, v10);
    sub_1B64A00(&LocalizationManager_TypeInfo, v11);
    sub_1B64A00(&NetworkManager_TypeInfo, v12);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B64A00(&StringLiteral_11578/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/, v16);
    sub_1B64A00(&StringLiteral_11570/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/, v17);
    sub_1B64A00(&StringLiteral_11568/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, v18);
    sub_1B64A00(&StringLiteral_11498/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/, v19);
    sub_1B64A00(&StringLiteral_1/*""*/, v20);
    sub_1B64A00(&StringLiteral_11496/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/, v21);
    byte_4A02D26 = 1;
  }
  v123 = 0LL;
  v124 = 0LL;
  afterTime = 0LL;
  beforeTime = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  recoverAt = 0LL;
  isRecover = 0;
  fatigueRecoveryConfirmationDialog = (int64_t)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  fatigueRecoveryConfirmationDialog = (int64_t)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)fatigueRecoveryConfirmationDialog,
                                                 0LL);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fatigueRecoveryConfirmationDialog, 1, 0LL);
  v23 = Method_EventServantFatigueListViewManager_OnClickSelectObject__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectObject__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1B64A18(Method_EventServantFatigueListViewManager_OnClickSelectObject__);
  v24 = (System_Reflection_MethodBase_o *)sub_1B649E4(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0LL);
  if ( !v3 )
    goto LABEL_56;
  methodPtr_low = LOBYTE(EventServantFatigueListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_56;
  if ( (EventServantFatigueListViewObject_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewObject_TypeInfo )
    goto LABEL_56;
  Item = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)v3, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity, 0, v27, v28);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity, 0, v29, v30);
  fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fatigueRecoveryConfirmationDialog,
    (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
  fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  fatigueRecoveryConfirmationDialog = (int64_t)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                 (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  obj = (ListViewObject_o *)this->fields.targetRecoveryFatigueItem;
  if ( !obj )
    goto LABEL_56;
  v32 = *(_QWORD *)&obj->fields.basePosition.fields.z;
  if ( v32 )
  {
    v33 = *(_OWORD *)(v32 + 32);
    *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)(v32 + 16);
    *(_OWORD *)&v114.fields.fakeValue = v33;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v113 = v114;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v113, 0LL);
    if ( !Item )
      goto LABEL_56;
    userServantEntity = Item->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_56;
    v35 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    v36 = fatigueRecoveryConfirmationDialog;
    *(_OWORD *)&v112.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v112.fields.fakeValue = v35;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v112, 0LL);
    if ( v36 == fatigueRecoveryConfirmationDialog )
    {
      afterTime = (System_String_o *)StringLiteral_1/*""*/;
      beforeTime = (System_String_o *)StringLiteral_1/*""*/;
      IsMatchIndividuality_45788608 = EventServantFatigueListViewItem__IsMatchIndividuality_45788608(
                                        Item,
                                        this->fields.targetRecoveryFatigueItem,
                                        v37);
      EventServantFatigueListViewManager__GetOutRecoveryTime(
        this,
        Item->fields.fatigueTime,
        &beforeTime,
        &afterTime,
        IsMatchIndividuality_45788608,
        v39);
      targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
      if ( targetRecoveryFatigueItem )
      {
        v43 = targetRecoveryFatigueItem->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v43;
        sub_1B649A4(
          (ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity,
          (int32_t)v43,
          v40,
          v41);
        v44 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11578/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/,
                                                       0LL);
        if ( this->fields.targetRecoveryFatigueItem )
        {
          v45 = (System_String_o *)fatigueRecoveryConfirmationDialog;
          Name = (Il2CppObject *)EventServantRecoveryFatigueItem__get_Name(this->fields.targetRecoveryFatigueItem, 0LL);
          v47 = System_String__Format(v45, Name, 0LL);
          v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11568/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0LL);
          targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
          outAfterTime = afterTime;
          v50 = beforeTime;
          v52 = v48;
          func = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64C4C(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            func,
            (Il2CppObject *)this,
            Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
            0LL);
          if ( v44 )
          {
            FatigueRecoveryConfirmationDialog__Setup(
              v44,
              v47,
              v52,
              0LL,
              (System_String_o *)StringLiteral_1/*""*/,
              (System_String_o *)StringLiteral_1/*""*/,
              targetOutUserServantEntity,
              v50,
              outAfterTime,
              1,
              func,
              v109);
            return;
          }
        }
      }
LABEL_56:
      sub_1B64C5C(fatigueRecoveryConfirmationDialog, obj);
    }
    v69 = this->fields.targetRecoveryFatigueItem;
    if ( !v69 )
      goto LABEL_56;
    v70 = v69->fields.userServantEntity;
    if ( v70 )
    {
      v71 = *(_OWORD *)&v70->fields.id.fields.fakeValue;
      *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&v70->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v114.fields.fakeValue = v71;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v111 = v114;
      fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(
                                            &v111,
                                            0LL);
      v72 = Item->fields.userServantEntity;
      if ( !v72 )
        goto LABEL_56;
      v73 = *(_OWORD *)&v72->fields.id.fields.fakeValue;
      *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&v72->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v110.fields.fakeValue = v73;
      if ( fatigueRecoveryConfirmationDialog != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(
                                                  &v110,
                                                  0LL) )
      {
        v119 = (System_String_o *)StringLiteral_1/*""*/;
        v120 = (System_String_o *)StringLiteral_1/*""*/;
        v75 = EventServantFatigueListViewItem__IsMatchIndividuality_45788608(
                Item,
                this->fields.targetRecoveryFatigueItem,
                v74);
        EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v120, &v119, v75, v76);
        v117 = (System_String_o *)StringLiteral_1/*""*/;
        v118 = (System_String_o *)StringLiteral_1/*""*/;
        fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !fatigueRecoveryConfirmationDialog )
          goto LABEL_56;
        fatigueRecoveryConfirmationDialog = (int64_t)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        v77 = this->fields.targetRecoveryFatigueItem;
        if ( !v77 )
          goto LABEL_56;
        v78 = v77->fields.userServantEntity;
        if ( !v78 )
          goto LABEL_56;
        v79 = (UserEventServantFatigueMaster_o *)fatigueRecoveryConfirmationDialog;
        eventId = this->fields.eventId;
        v82 = *(_QWORD *)&v78->fields.svtId.fields.currentCryptoKey;
        v81 = *(_QWORD *)&v78->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v125.fields.currentCryptoKey = v82;
        *(_QWORD *)&v125.fields.fakeValue = v81;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                              v125,
                                              0LL);
        if ( !v79 )
          goto LABEL_56;
        FatigueInfo = UserEventServantFatigueMaster__GetFatigueInfo(
                        v79,
                        &recoverAt,
                        &isRecover,
                        eventId,
                        fatigueRecoveryConfirmationDialog,
                        0LL);
        v85 = 0LL;
        if ( FatigueInfo )
        {
          v86 = recoverAt;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( v86 <= NetworkManager__getTime(0LL) )
            v85 = 0LL;
          else
            v85 = recoverAt;
        }
        IsMatchIndividuality = EventServantFatigueListViewManager__IsMatchIndividuality(this, v84);
        EventServantFatigueListViewManager__GetOutRecoveryTime(this, v85, &v118, &v117, IsMatchIndividuality, v88);
        v89 = Item->fields.userServantEntity;
        this->fields.targetInUserServantEntity = v89;
        sub_1B649A4(
          (ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity,
          (int32_t)v89,
          v90,
          v91);
        v94 = this->fields.targetRecoveryFatigueItem;
        if ( !v94 )
          goto LABEL_56;
        v95 = v94->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v95;
        sub_1B649A4(
          (ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity,
          (int32_t)v95,
          v92,
          v93);
        v96 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11498/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/,
                                                       0LL);
        if ( !this->fields.targetRecoveryFatigueItem )
          goto LABEL_56;
        v97 = (System_String_o *)fatigueRecoveryConfirmationDialog;
        v98 = (Il2CppObject *)EventServantRecoveryFatigueItem__get_Name(this->fields.targetRecoveryFatigueItem, 0LL);
        v99 = System_String__Format(v97, v98, 0LL);
        v100 = LocalizationManager__Get((System_String_o *)StringLiteral_11496/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/, 0LL);
        v102 = v119;
        v101 = v120;
        targetInUserServantEntity = this->fields.targetInUserServantEntity;
        v103 = this->fields.targetOutUserServantEntity;
        v106 = v117;
        v105 = v118;
        v107 = v100;
        v108 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64C4C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v108,
          (Il2CppObject *)this,
          Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
          0LL);
        if ( !v96 )
          goto LABEL_56;
        FatigueRecoveryConfirmationDialog__Setup(
          v96,
          v99,
          v107,
          targetInUserServantEntity,
          v101,
          v102,
          v103,
          v105,
          v106,
          1,
          v108,
          v109);
      }
    }
  }
  else
  {
    v123 = (System_String_o *)StringLiteral_1/*""*/;
    v124 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !Item )
      goto LABEL_56;
    v54 = EventServantFatigueListViewItem__IsMatchIndividuality_45788608(
            Item,
            (EventServantRecoveryFatigueItem_o *)obj,
            v31);
    EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v124, &v123, v54, v55);
    v56 = Item->fields.userServantEntity;
    this->fields.targetInUserServantEntity = v56;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity, (int32_t)v56, v57, v58);
    v59 = this->fields.fatigueRecoveryConfirmationDialog;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11570/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/, 0LL);
    if ( !this->fields.targetRecoveryFatigueItem )
      goto LABEL_56;
    v60 = (System_String_o *)fatigueRecoveryConfirmationDialog;
    v61 = (Il2CppObject *)EventServantRecoveryFatigueItem__get_Name(this->fields.targetRecoveryFatigueItem, 0LL);
    v62 = System_String__Format(v60, v61, 0LL);
    v63 = LocalizationManager__Get((System_String_o *)StringLiteral_11568/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0LL);
    v64 = this->fields.targetInUserServantEntity;
    v66 = v123;
    v65 = v124;
    v67 = v63;
    v68 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64C4C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v68,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
      0LL);
    if ( !v59 )
      goto LABEL_56;
    FatigueRecoveryConfirmationDialog__Setup(
      v59,
      v62,
      v67,
      v64,
      v65,
      v66,
      0LL,
      (System_String_o *)StringLiteral_1/*""*/,
      (System_String_o *)StringLiteral_1/*""*/,
      1,
      v68,
      v109);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickSelectPush(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
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
  __int64 v25; // x19
  DataManager_o *SelfUserGame; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 methodPtr_low; // x9
  EventServantFatigueListViewItem_o *Item; // x0
  EventServantFatigueListViewItem_o **v32; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  int64_t context; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v37; // q1
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  const MethodInfo *v40; // x2
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  Il2CppObject *Entity; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v47; // x25
  System_String_o *v48; // x21
  System_String_o *v49; // x22
  System_Object_array *v50; // x23
  int32_t Rarity; // w26
  int32_t v52; // w2
  int32_t v53; // w3
  Il2CppObject *v54; // x26
  int32_t v55; // w2
  int32_t v56; // w3
  Il2CppObject *v57; // x26
  int32_t v58; // w0
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x24
  int32_t v62; // w0
  int32_t v63; // w2
  int32_t v64; // w3
  Il2CppObject *v65; // x24
  int32_t v66; // w2
  int32_t v67; // w3
  Il2CppObject *v68; // x24
  EventServantFatigueListViewItem_o *v69; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v70; // x9
  ServantEntity_o *servantEntity; // x20
  int32_t v72; // w2
  int32_t v73; // w3
  Il2CppObject *v74; // x20
  System_String_o *v75; // x20
  System_String_o *v76; // x22
  System_String_o *v77; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v79; // x25
  __int64 v80; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_4A02D41 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, obj);
    sub_1B64A00(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B64A00(&Method_EventServantFatigueListViewManager_OnClickSelectPush__, v10);
    sub_1B64A00(&EventServantFatigueListViewObject_TypeInfo, v11);
    sub_1B64A00(&LocalizationManager_TypeInfo, v12);
    sub_1B64A00(&object___TypeInfo, v13);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1B64A00(&Rarity_TypeInfo, v16);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B64A00(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__, v19);
    sub_1B64A00(&EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo, v20);
    sub_1B64A00(&StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v21);
    sub_1B64A00(&StringLiteral_11841/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v22);
    sub_1B64A00(&StringLiteral_11842/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v23);
    sub_1B64A00(&StringLiteral_11844/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v24);
    byte_4A02D41 = 1;
  }
  v25 = sub_1B64C4C(EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo);
  EventServantFatigueListViewManager___c__DisplayClass107_0___ctor(
    (EventServantFatigueListViewManager___c__DisplayClass107_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_62;
  *(_QWORD *)(v25 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v25 + 16), (int32_t)this, v28, v29);
  if ( !obj )
    goto LABEL_62;
  methodPtr_low = LOBYTE(EventServantFatigueListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    sub_1B64F1C(obj);
    goto LABEL_64;
  }
  Item = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)obj, 0LL);
  *(_QWORD *)(v25 + 24) = Item;
  v32 = (EventServantFatigueListViewItem_o **)(v25 + 24);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)Item, v33, v34);
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_62;
  context = (int64_t)SelfUserGame->fields.context;
  if ( context )
  {
    if ( !*v32 )
      goto LABEL_62;
    userServantEntity = (*v32)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_62;
    v37 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v82.fields.fakeValue = v37;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v81 = v82;
    if ( context == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v81, 0LL) )
      goto LABEL_14;
    v41 = Method_EventServantFatigueListViewManager_OnClickSelectPush__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
      v41 = (_QWORD *)sub_1B64A18(Method_EventServantFatigueListViewManager_OnClickSelectPush__);
    v42 = (System_Reflection_MethodBase_o *)sub_1B649E4(v41, v41[4]);
    OverwriteAssetSoundName__PlaySystemSe(v42, 0, 0LL);
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                      SelfUserGame,
                                      (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_62;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
               context,
               (const MethodInfo_30D6944 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                      SelfUserGame,
                                      (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_62;
    v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v83.fields.currentCryptoKey = klass;
    *(_QWORD *)&v83.fields.fakeValue = monitor;
    SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v83, 0LL);
    if ( !v44 )
      goto LABEL_62;
    v47 = DataMasterBase_object__object__int___GetEntity(
            v44,
            (int32_t)SelfUserGame,
            (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11844/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v50 = (System_Object_array *)sub_1B64AA8(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    SelfUserGame = (DataManager_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v50 )
LABEL_62:
      sub_1B64C5C(SelfUserGame, v27);
    v54 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64B3C(SelfUserGame, v50->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( !v50->max_length )
      goto LABEL_64;
    v50->m_Items[0] = v54;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)v50->m_Items, (int32_t)v54, v52, v53);
    if ( !v47 )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)ServantEntity__getClassName((ServantEntity_o *)v47, 0LL);
    v57 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64B3C(SelfUserGame, v50->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v50->max_length <= 1 )
      goto LABEL_64;
    v50->m_Items[1] = v57;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v50->m_Items[1], (int32_t)v57, v55, v56);
    v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
            0LL);
    SelfUserGame = (DataManager_o *)ServantEntity__getName((ServantEntity_o *)v47, v58, -1, 0LL);
    v61 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64B3C(SelfUserGame, v50->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v50->max_length <= 2 )
      goto LABEL_64;
    v50->m_Items[2] = v61;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v50->m_Items[2], (int32_t)v61, v59, v60);
    if ( !*v32 )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)(*v32)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    v62 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
    SelfUserGame = (DataManager_o *)Rarity__getRarityType(v62, 0LL);
    v65 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64B3C(SelfUserGame, v50->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v50->max_length <= 3 )
      goto LABEL_64;
    v50->m_Items[3] = v65;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v50->m_Items[3], (int32_t)v65, v63, v64);
    if ( !*v32 )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)(*v32)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
    v68 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64B3C(SelfUserGame, v50->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v50->max_length <= 4 )
      goto LABEL_64;
    v50->m_Items[4] = v68;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v50->m_Items[4], (int32_t)v68, v66, v67);
    v69 = *v32;
    if ( !*v32 )
      goto LABEL_62;
    v70 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v69->fields.userServantEntity;
    if ( !v70 )
      goto LABEL_62;
    servantEntity = v69->fields.servantEntity;
    SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v70[6], 0LL);
    if ( !servantEntity )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)ServantEntity__getName(servantEntity, (int32_t)SelfUserGame, -1, 0LL);
    v74 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B64B3C(SelfUserGame, v50->obj.klass->_1.element_class);
      if ( !SelfUserGame )
      {
LABEL_65:
        v80 = sub_1B64C80(SelfUserGame);
        sub_1B64B28(v80, 0LL);
      }
    }
    if ( v50->max_length > 5 )
    {
      v50->m_Items[5] = v74;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v50->m_Items[5], (int32_t)v74, v72, v73);
      v75 = System_String__Format_61399644(v49, v50, 0LL);
      v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11842/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v77 = LocalizationManager__Get((System_String_o *)StringLiteral_11841/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v79 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64C4C(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v79,
        (Il2CppObject *)v25,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__,
        0LL);
      SelfUserGame = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_30347724(
          (CommonUI_o *)Instance,
          v48,
          v75,
          v76,
          v77,
          1,
          v79,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_62;
    }
LABEL_64:
    sub_1B64C64(SelfUserGame, v27);
  }
LABEL_14:
  v38 = Method_EventServantFatigueListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v38 = (_QWORD *)sub_1B64A18(Method_EventServantFatigueListViewManager_OnClickSelectPush__);
  v39 = (System_Reflection_MethodBase_o *)sub_1B649E4(v38, v38[4]);
  OverwriteAssetSoundName__PlaySystemSe(v39, 8, 0LL);
  EventServantFatigueListViewManager__PushRequest(this, *v32, v40);
}


void __fastcall EventServantFatigueListViewManager__OnClickSortAscendingOrder(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4A02D36 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__, method);
    byte_4A02D36 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64A18(Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64C5C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickSortButton(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantSortSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4A02D34 & 1) == 0 )
  {
    sub_1B64A00(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B64A00(&Method_EventServantFatigueListViewManager_EndSelectSortKind__, v3);
    sub_1B64A00(&Method_EventServantFatigueListViewManager_OnClickSortButton__, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A02D34 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EventServantFatigueListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64A18(Method_EventServantFatigueListViewManager_OnClickSortButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B649E4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B64C4C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1B64C5C(v12, v13);
    CommonUI__OpenServantSortSelectMenu(v10, 7, sort, 0, v11, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnLongPushListView(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  EventServantFatigueListViewItem_o *Item; // x0
  __int64 v13; // x1
  __int64 methodPtr_low; // x10
  struct UserServantEntity_o *userServantEntity; // x8
  EventServantFatigueListViewItem_o *v16; // x20
  __int128 v17; // q1
  Il2CppObject *Instance; // x0
  UserServantEntity_o *v19; // x20
  CommonUI_o *v20; // x21
  ServantStatusDialog_EndDelegate_o *v21; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-50h]

  if ( (byte_4A02D2D & 1) == 0 )
  {
    sub_1B64A00(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_1B64A00(&Method_EventServantFatigueListViewManager_EndShowServant__, v5);
    sub_1B64A00(&Method_EventServantFatigueListViewManager_OnLongPushListView__, v6);
    sub_1B64A00(&EventServantFatigueListViewObject_TypeInfo, v7);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4A02D2D = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v10 = Method_EventServantFatigueListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1B64A18(Method_EventServantFatigueListViewManager_OnLongPushListView__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B649E4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    if ( !obj )
      goto LABEL_16;
    methodPtr_low = LOBYTE(EventServantFatigueListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
      goto LABEL_16;
    if ( (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewObject_TypeInfo )
      goto LABEL_16;
    Item = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)obj, 0LL);
    if ( !Item )
      goto LABEL_16;
    userServantEntity = Item->fields.userServantEntity;
    v16 = Item;
    if ( !userServantEntity )
      goto LABEL_16;
    v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v23.fields.fakeValue = v17;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v22 = v23;
    this->fields.statusShowUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v22, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = v16->fields.userServantEntity;
    v20 = (CommonUI_o *)Instance;
    v21 = (ServantStatusDialog_EndDelegate_o *)sub_1B64C4C(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v21,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndShowServant__,
      0LL);
    if ( !v20 )
LABEL_16:
      sub_1B64C5C(Item, v13);
    CommonUI__OpenServantStatusDialog_30357908(v20, 0, v19, v21, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnMoveEnd(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0
  struct System_Action_o *CallbackFunc2; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A02D25 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A02D25 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1B64C5C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.CallbackFunc2, 0, v10, v11);
        if ( CallbackFunc2 )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))CallbackFunc2->fields.m_target)(
            CallbackFunc2->fields.original_method_info,
            *(_QWORD *)&CallbackFunc2->fields.extra_arg);
      }
    }
  }
}


void __fastcall EventServantFatigueListViewManager__PushRequest(
        EventServantFatigueListViewManager_o *this,
        EventServantFatigueListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *limitCountSupport; // x0
  __int64 v14; // x1
  DataManager_o *v15; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v25; // x0
  __int128 v26; // q1
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  Il2CppObject *Request_object; // x0
  __int128 v29; // q1
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w26
  int32_t v32; // w27
  int32_t v33; // w28
  int32_t v34; // w29
  bool IsLock; // w21
  char v36; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v40; // w0
  __int64 v41; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4A02D42 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1B64A00(&Method_EventServantFatigueListViewManager_EndPushRequest__, v5);
    sub_1B64A00(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1B64A00(&NetworkManager_TypeInfo, v7);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B64A00(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A02D42 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userServantEntity )
    goto LABEL_18;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v15->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v51, 0LL);
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_EndPushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1B64C5C(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    imageLimitCount,
    v31,
    v32,
    v33,
    v34,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v45,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != (struct System_Threading_SynchronizationContext_o *)v47,
    0LL);
}


void __fastcall EventServantFatigueListViewManager__RefreshListDisp(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w22
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w21

  if ( (byte_4A02D1C & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__, v3);
    byte_4A02D1C = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EventServantFatigueListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_9;
  size = ObjectList->fields._size;
  v7 = ObjectList;
  if ( size >= 1 )
  {
    v8 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v7,
                                                                  v8,
                                                                  (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( size == ++v8 )
        return;
    }
LABEL_9:
    sub_1B64C5C(ObjectList, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__RequestListObject(
        EventServantFatigueListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *ObjectList; // x0
  __int64 v12; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v17; // x24

  if ( (byte_4A02D24 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B64A00(&Method_EventServantFatigueListViewManager_OnMoveEnd__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__, v9);
    sub_1B64A00(&StringLiteral_9892/*"OnMoveEnd"*/, v10);
    byte_4A02D24 = 1;
  }
  ObjectList = EventServantFatigueListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v14 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v15 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v14,
               v15,
               (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
      v17 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_EventServantFatigueListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      EventServantFatigueListViewObject__Init_45816052((EventServantFatigueListViewObject_o *)Item, mode, v17, 0LL);
      if ( size == ++v15 )
        return;
    }
LABEL_10:
    sub_1B64C5C(ObjectList, v12);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9892/*"OnMoveEnd"*/,
    delay,
    0LL);
}


void __fastcall EventServantFatigueListViewManager__SetFilterButtonImage(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4A02D33 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17444/*"btn_filter_on"*/, method);
    sub_1B64A00(&StringLiteral_17443/*"btn_filter"*/, v3);
    byte_4A02D33 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B64C5C(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17443/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17444/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall EventServantFatigueListViewManager__SetHeaderMsg(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *recoveryFatigueInfoMsgLabel; // x19
  __int64 *v8; // x8
  System_String_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_4A02D1E & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_11574/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v3);
    sub_1B64A00(&StringLiteral_11572/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v4);
    sub_1B64A00(&StringLiteral_11573/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v5);
    sub_1B64A00(&StringLiteral_11589/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/, v6);
    byte_4A02D1E = 1;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11589/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/;
      goto LABEL_16;
    case 1:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11573/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_16;
    case 2:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11572/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_16;
    case 3:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11574/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_16:
      v9 = LocalizationManager__Get((System_String_o *)*v8, 0LL);
      if ( !recoveryFatigueInfoMsgLabel )
        sub_1B64C5C(v9, v10);
      UILabel__set_text(recoveryFatigueInfoMsgLabel, v9, 0LL);
      break;
    default:
      return;
  }
}


void __fastcall EventServantFatigueListViewManager__SetMode(
        EventServantFatigueListViewManager_o *this,
        int32_t mode,
        EventServantFatigueListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.Callback = callback;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.Callback,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventServantFatigueListViewManager__SetMode_45799212(this, mode, v6);
}


void __fastcall EventServantFatigueListViewManager__SetMode_45759276(
        EventServantFatigueListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.CallbackFunc2 = callback;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.CallbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventServantFatigueListViewManager__SetMode_45799212(this, mode, v6);
}


void __fastcall EventServantFatigueListViewManager__SetMode_45799212(
        EventServantFatigueListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 1 )
  {
    if ( mode == 1 )
      v6 = 2;
    else
      v6 = 3;
    EventServantFatigueListViewManager__RequestListObject(this, v6, 0.0, v5);
  }
}


void __fastcall EventServantFatigueListViewManager__SetObjectItem(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventServantFatigueListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A02D23 & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_1B64A00(&EventServantFatigueListViewObject_TypeInfo, obj);
    byte_4A02D23 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventServantFatigueListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    sub_1B64C5C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventServantFatigueListViewObject__Init_45815032((EventServantFatigueListViewObject_o *)obj, v7, 0LL);
}


void __fastcall EventServantFatigueListViewManager__SetSortButtonImage(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v23; // x20

  if ( (byte_4A02D37 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    sub_1B64A00(&StringLiteral_17474/*"btn_sort_up"*/, v3);
    sub_1B64A00(&StringLiteral_17561/*"btn_txt_up"*/, v4);
    sub_1B64A00(&StringLiteral_17517/*"btn_txt_new"*/, v5);
    sub_1B64A00(&StringLiteral_17507/*"btn_txt_down"*/, v6);
    sub_1B64A00(&StringLiteral_17524/*"btn_txt_old"*/, v7);
    sub_1B64A00(&StringLiteral_17471/*"btn_sort_down"*/, v8);
    byte_4A02D37 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_42;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    ListViewSort__SetupSortLabelLayout(sort, this->fields.sortKindLabel, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_42;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17524/*"btn_txt_old"*/ : &StringLiteral_17517/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v18 = (System_String_o **)&StringLiteral_17471/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17474/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17561/*"btn_txt_up"*/ : &StringLiteral_17507/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v18 = (System_String_o **)&StringLiteral_17474/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17471/*"btn_sort_down"*/;
    }
    if ( v17->fields.isAscendingOrder )
      v21 = v18;
    else
      v21 = v19;
    UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    if ( sort->fields.isBonusKind )
    {
      v23 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v23 )
      {
        UILabel__set_text(v23, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_42:
      sub_1B64C5C(sort, v10);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__SetStatusKind(
        EventServantFatigueListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v13; // x8
  __int64 *v14; // x8
  __int64 *v15; // x8
  __int64 *v16; // x8
  const MethodInfo *v17; // x1

  if ( (byte_4A02D1D & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17594/*"button_push_reg"*/, *(_QWORD *)&modeKind);
    sub_1B64A00(&StringLiteral_17595/*"button_push_unreg"*/, v5);
    sub_1B64A00(&StringLiteral_17580/*"button_allchoice_reg"*/, v6);
    sub_1B64A00(&StringLiteral_17583/*"button_alllock_unreg"*/, v7);
    sub_1B64A00(&StringLiteral_17596/*"button_select_reg"*/, v8);
    sub_1B64A00(&StringLiteral_17597/*"button_select_unreg"*/, v9);
    sub_1B64A00(&StringLiteral_17582/*"button_alllock_reg"*/, v10);
    sub_1B64A00(&StringLiteral_17581/*"button_allchoice_unreg"*/, v11);
    byte_4A02D1D = 1;
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
  v13 = &StringLiteral_17596/*"button_select_reg"*/;
  if ( modeKind )
    v13 = &StringLiteral_17597/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v13, 0LL);
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
  v14 = &StringLiteral_17582/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v14 = &StringLiteral_17583/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v14, 0LL);
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
  v15 = &StringLiteral_17580/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v15 = &StringLiteral_17581/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v15, 0LL);
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
  v16 = &StringLiteral_17594/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v16 = &StringLiteral_17595/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v16, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_1B64C5C(statusTabButton, *(_QWORD *)&modeKind);
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  EventServantFatigueListViewManager__SetHeaderMsg(this, v17);
}


void __fastcall EventServantFatigueListViewManager__SetUpBonusFilterButton(
        EventServantFatigueListViewManager_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ListViewSort_o *sort; // x0
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  struct ListViewSort_o *v9; // x20
  struct ListViewSort_o *v10; // x8

  sort = this->fields.sort;
  if ( setupInfo )
  {
    if ( sort )
    {
      AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                             sort,
                             0LL,
                             setupInfo->fields.servantFilterEventCampaignIds,
                             setupInfo->fields.servantFilterEventIds,
                             0LL,
                             0LL,
                             0,
                             0LL);
      this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
      sub_1B649A4(
        (ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos,
        (int32_t)AlignedBonusFilter,
        v7,
        v8);
      v9 = this->fields.sort;
      sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                                 (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                                 0LL);
      if ( v9 )
      {
        v9->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
        sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
        if ( sort )
        {
          sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
          v10 = this->fields.sort;
          if ( v10 )
          {
            if ( sort )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, v10->fields.isBonusKind, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_10:
    sub_1B64C5C(sort, setupInfo);
  }
  if ( !sort )
    goto LABEL_10;
  sort->fields.isBonusKind = 0;
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, (int32_t)method, v3);
}


void __fastcall EventServantFatigueListViewManager__StatusRequest(
        EventServantFatigueListViewManager_o *this,
        EventServantFatigueListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t modeKind; // w8
  int32_t v10; // w2
  int32_t v11; // w3
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1
  System_Int64_array *v15; // x1
  System_Int64_array *v16; // x2
  bool v17; // w4
  bool v18; // w5
  int32_t v19; // w2
  int32_t v20; // w3
  NetworkManager_ResultCallbackFunc_o *v21; // x20
  System_Int64_array *v22; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A02D3E & 1) == 0 )
  {
    sub_1B64A00(&Method_EventServantFatigueListViewManager_EndStatusSync__, callback);
    sub_1B64A00(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_1B64A00(&NetworkManager_TypeInfo, v7);
    sub_1B64A00(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4A02D3E = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v22 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( EventServantFatigueListViewManager__GetSwapChoiceList(this, &choiceList, &v22, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v19, v20);
      v21 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v21,
                         (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v16 = v22;
        v15 = choiceList;
        v18 = 1;
        v17 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1B64C5C(Request_object, v14);
    }
  }
  else if ( modeKind == 1 && EventServantFatigueListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v10, v11);
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v16 = unlockList;
      v15 = lockList;
      v17 = 1;
      v18 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v15, v16, 0, v17, v18, 0LL);
      return;
    }
    goto LABEL_19;
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall EventServantFatigueListViewManager__Update(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *scrollView; // x20
  int64_t Time; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A02D19 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_4A02D19 = 1;
  }
  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL)
    && this->fields.itemSortList
    && (this->fields.updateTime & 0x8000000000000000LL) == 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( this->fields.updateTime != Time )
    {
      this->fields.updateTime = Time;
      EventServantFatigueListViewManager__UpdateDisp(this, v6);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__UpdateDisp(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameObject__o *v9; // x8
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A02D1A & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__get_Current__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    byte_4A02D1A = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)EventServantFatigueListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( ObjectList )
  {
    v9 = this->fields.objectList;
    if ( !v9 )
      sub_1B64C5C(ObjectList, v8);
    if ( v9->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v11,
        ObjectList,
        (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v11,
                (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__) )
      {
        if ( !v11.fields._current )
          sub_1B64C5C(0LL, v10);
        EventServantFatigueListViewObject__UpdateDisp((EventServantFatigueListViewObject_o *)v11.fields._current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v11,
        (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__add_Callback(
        EventServantFatigueListViewManager_o *this,
        EventServantFatigueListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *Callback; // x21
  struct EventServantFatigueListViewManager_CallbackFunc_o **p_Callback; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventServantFatigueListViewManager_o *v10; // x0
  EventServantFatigueListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A02D11 & 1) == 0 )
  {
    sub_1B64A00(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A02D11 = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  p_Callback = &this->fields.Callback;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(Callback, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (EventServantFatigueListViewManager_CallbackFunc_c *)v7->klass != EventServantFatigueListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1B9FEF0(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B64F1C(v7);
  EventServantFatigueListViewManager__remove_Callback(v10, v11, v12);
}


void __fastcall EventServantFatigueListViewManager__add_CallbackFunc2(
        EventServantFatigueListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *CallbackFunc2; // x21
  struct System_Action_o **p_CallbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventServantFatigueListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A02D13 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, value);
    byte_4A02D13 = 1;
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
    v8 = sub_1B9FEF0(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B64F1C(v7);
  EventServantFatigueListViewManager__remove_CallbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_EventServantFatigueListViewObject__o *__fastcall EventServantFatigueListViewManager__get_ClippingObjectList(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  System_Collections_Generic_List_object__o *v9; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v12; // w21
  Il2CppObject *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A02D18 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B64A00(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo, v7);
    byte_4A02D18 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    do
    {
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v12,
                                                                  (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        break;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
      if ( !objectList )
        break;
      v13 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)EventServantFatigueListViewObject__GetItem(
                                                                  (EventServantFatigueListViewObject_o *)objectList,
                                                                  0LL);
      if ( !objectList )
        break;
      v9 = objectList;
      if ( LOBYTE(objectList[2].monitor) )
      {
        objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40394624(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)objectList,
                                                                    0LL);
        if ( ((unsigned __int8)objectList & 1) == 0 )
          continue;
      }
      if ( !v8 )
        break;
      items = v8->fields._items;
      v17 = Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      v18 = v8->fields._size;
      if ( (unsigned int)v18 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v13,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + v18;
        v8->fields._size = v18 + 1;
        v19[4] = (Il2CppClass *)v13;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
      }
      if ( size == ++v12 )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v8;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_18:
    sub_1B64C5C(objectList, v9);
  }
  return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v8;
}


int32_t __fastcall EventServantFatigueListViewManager__get_ListModeKind(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_Collections_Generic_List_EventServantFatigueListViewObject__o *__fastcall EventServantFatigueListViewManager__get_ObjectList(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  System_Collections_Generic_List_object__o *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4A02D17 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B64A00(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo, v7);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v8);
    byte_4A02D17 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v13,
               (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
        if ( !v9 )
          break;
        items = v9->fields._items;
        v18 = Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        v19 = v9->fields._size;
        v20 = objectList;
        if ( (unsigned int)v19 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)objectList,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + v19;
          v9->fields._size = v19 + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
        }
      }
      if ( size == ++v13 )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v9;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1B64C5C(objectList, v10);
  }
  return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v9;
}


void __fastcall EventServantFatigueListViewManager__remove_Callback(
        EventServantFatigueListViewManager_o *this,
        EventServantFatigueListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *Callback; // x21
  struct EventServantFatigueListViewManager_CallbackFunc_o **p_Callback; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventServantFatigueListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A02D12 & 1) == 0 )
  {
    sub_1B64A00(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A02D12 = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  p_Callback = &this->fields.Callback;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(Callback, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (EventServantFatigueListViewManager_CallbackFunc_c *)v7->klass != EventServantFatigueListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1B9FEF0(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B64F1C(v7);
  EventServantFatigueListViewManager__add_CallbackFunc2(v10, v11, v12);
}


void __fastcall EventServantFatigueListViewManager__remove_CallbackFunc2(
        EventServantFatigueListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *CallbackFunc2; // x21
  struct System_Action_o **p_CallbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4A02D14 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, value);
    byte_4A02D14 = 1;
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
    v8 = sub_1B9FEF0(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B64F1C(v7);
  EventServantFatigueListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager_CallbackFunc___ctor(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19B1E54;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B1DFC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventServantFatigueListViewManager_CallbackFunc__BeginInvoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = index;
  v16 = kind;
  if ( (byte_4A02D44 & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B64A00(&EventServantFatigueListViewManager_ResultKind_TypeInfo, v9);
    byte_4A02D44 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             EventServantFatigueListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&index,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B649B4(this, v14, callback, object);
}


void __fastcall EventServantFatigueListViewManager_CallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
}


void __fastcall EventServantFatigueListViewManager_CallbackFunc__Invoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    index,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19B1EC0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B1E78;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventServantFatigueListViewManager_RequestCallbackFunc__BeginInvoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4A02D45 & 1) == 0 )
  {
    sub_1B64A00(&bool_TypeInfo, isRequest);
    byte_4A02D45 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B649B4(this, v9, callback, object);
}


void __fastcall EventServantFatigueListViewManager_RequestCallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
}


void __fastcall EventServantFatigueListViewManager_RequestCallbackFunc__Invoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall EventServantFatigueListViewManager___c__DisplayClass107_0___ctor(
        EventServantFatigueListViewManager___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager___c__DisplayClass107_0___OnClickSelectPush_b__0(
        EventServantFatigueListViewManager___c__DisplayClass107_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20
  System_Action_o *_9__1; // x22
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A02D46 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, isDecide);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B64A00(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__, v6);
    byte_4A02D46 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v11, v12);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30348004(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1B64C5C(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventServantFatigueListViewManager___c__DisplayClass107_0___OnClickSelectPush_b__1(
        EventServantFatigueListViewManager___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  EventServantFatigueListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64C5C(0LL, method);
  EventServantFatigueListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}