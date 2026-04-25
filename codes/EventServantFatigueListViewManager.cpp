void EventServantFatigueListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v2; // x20
  struct EventServantFatigueListViewManager_StaticFields *static_fields; // x0

  if ( (byte_4DFF1F6 & 1) == 0 )
  {
    sub_1CE6700(&EventServantFatigueListViewManager_TypeInfo);
    sub_1CE6700(&ListViewSort_TypeInfo);
    sub_1CE6700(&StringLiteral_6297/*"EventServantFatigueList"*/);
    byte_4DFF1F6 = 1;
  }
  EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6297/*"EventServantFatigueList"*/;
  sub_1CE66A4(EventServantFatigueListViewManager_TypeInfo->static_fields, StringLiteral_6297/*"EventServantFatigueList"*/);
  SORT_SAVE_KEY = EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v2 = (ListViewSort_o *)sub_1CE694C(ListViewSort_TypeInfo);
  ListViewSort___ctor_44957004(v2, SORT_SAVE_KEY, 3, 0, 0);
  static_fields = EventServantFatigueListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v2;
  sub_1CE66A4(&static_fields->servantSortStatus, v2);
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
  void (__fastcall *invoke_impl)(intptr_t, __int64, struct UserServantEntity_o *, intptr_t); // x4
  intptr_t method_code; // x0
  intptr_t v8; // x3
  __int64 v9; // x1
  struct UserServantEntity_o *targetInUserServantEntity; // x2

  v4 = this;
  if ( (byte_4DFF1DF & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    byte_4DFF1DF = 1;
  }
  if ( !result )
    goto LABEL_10;
  this = (EventServantFatigueListViewManager_o *)System_String__Equals_65158148(
                                                   result,
                                                   (System_String_o *)StringLiteral_22555/*"ng"*/,
                                                   0);
  selectAfterCallback = v4->fields.selectAfterCallback;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( selectAfterCallback )
    {
      targetInUserServantEntity = v4->fields.targetInUserServantEntity;
      invoke_impl = (void (__fastcall *)(intptr_t, __int64, struct UserServantEntity_o *, intptr_t))selectAfterCallback->fields.invoke_impl;
      method_code = selectAfterCallback->fields.method_code;
      v8 = selectAfterCallback->fields.method;
      v9 = 1;
      goto LABEL_9;
    }
LABEL_10:
    sub_1CE6958(this, result);
  }
  if ( !selectAfterCallback )
    goto LABEL_10;
  invoke_impl = (void (__fastcall *)(intptr_t, __int64, struct UserServantEntity_o *, intptr_t))selectAfterCallback->fields.invoke_impl;
  method_code = selectAfterCallback->fields.method_code;
  v8 = selectAfterCallback->fields.method;
  v9 = 0;
  targetInUserServantEntity = 0;
LABEL_9:
  invoke_impl(method_code, v9, targetInUserServantEntity, v8);
}


// local variable allocation has failed, the output may be wrong!
void EventServantFatigueListViewManager__CloseRecovertFatigueDialog(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  int64_t fatigueRecoveryConfirmationDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v6; // x19
  Il2CppObject *Request_object; // x0
  struct UserServantEntity_o *targetOutUserServantEntity; // x8
  Il2CppObject *v9; // x19
  int32_t v10; // w21
  struct UserServantEntity_o *v11; // x8
  __int128 v12; // q1
  int32_t v13; // w22
  struct UserServantEntity_o *v14; // x8
  __int128 v15; // q0
  int64_t v16; // x20
  int64_t v17; // x4
  ServantRecoverySyncRequest_o *v18; // x0
  int32_t v19; // w1
  int32_t v20; // w2
  int64_t v21; // x3
  int32_t eventId; // w21
  struct UserServantEntity_o *v23; // x8
  __int128 v24; // q1
  int32_t v25; // w20
  struct UserServantEntity_o *targetInUserServantEntity; // x8
  __int128 v27; // q1
  int32_t v28; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+60h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+80h] [xbp-50h]

  if ( (byte_4DFF1DE & 1) == 0 )
  {
    sub_1CE6700(&Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__);
    sub_1CE6700(&Method_NetworkManager_getRequest_ServantRecoverySyncRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4DFF1DE = 1;
  }
  fatigueRecoveryConfirmationDialog = (int64_t)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_31;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)fatigueRecoveryConfirmationDialog, 0);
  if ( !isDecide )
    return;
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_ServantRecoverySyncRequest___);
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v9 = Request_object;
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
      v23 = this->fields.targetOutUserServantEntity;
      if ( v23 )
      {
        v24 = *(_OWORD *)&v23->fields.id.fields.fakeValue;
        v25 = fatigueRecoveryConfirmationDialog;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&v23->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v33.fields.fakeValue = v24;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v29 = v33;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(
                                              &v29,
                                              0);
        if ( v9 )
        {
          v17 = fatigueRecoveryConfirmationDialog;
          v18 = (ServantRecoverySyncRequest_o *)v9;
          v19 = eventId;
          v20 = v25;
          v21 = 0;
          goto LABEL_29;
        }
      }
    }
LABEL_31:
    sub_1CE6958(fatigueRecoveryConfirmationDialog, isDecide);
  }
  v10 = this->fields.eventId;
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
        v27 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
        v28 = fatigueRecoveryConfirmationDialog;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v33.fields.fakeValue = v27;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v30 = v33;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(
                                              &v30,
                                              0);
        if ( v9 )
        {
          v21 = fatigueRecoveryConfirmationDialog;
          v18 = (ServantRecoverySyncRequest_o *)v9;
          v19 = v10;
          v20 = v28;
          v17 = 0;
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
  v11 = this->fields.targetInUserServantEntity;
  if ( !v11 )
    goto LABEL_31;
  v12 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
  v13 = fatigueRecoveryConfirmationDialog;
  *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v33.fields.fakeValue = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v32 = v33;
  fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v32, 0);
  v14 = this->fields.targetOutUserServantEntity;
  if ( !v14 )
    goto LABEL_31;
  v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
  v16 = fatigueRecoveryConfirmationDialog;
  *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v31.fields.fakeValue = v15;
  fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v31, 0);
  if ( !v9 )
    goto LABEL_31;
  v17 = fatigueRecoveryConfirmationDialog;
  v18 = (ServantRecoverySyncRequest_o *)v9;
  v19 = v10;
  v20 = v13;
  v21 = v16;
LABEL_29:
  ServantRecoverySyncRequest__beginRequest(v18, v19, v20, v21, v17, 0);
}


void EventServantFatigueListViewManager__CreateList(
        EventServantFatigueListViewManager_o *this,
        int32_t eventId,
        EventServantRecoveryFatigueItem_o *targetItem,
        System_Action_bool__UserServantEntity__o *afterCallback,
        const MethodInfo *method)
{
  EventServantFatigueListViewManager_c *v8; // x0
  struct ListViewSort_o *servantSortStatus; // x1
  struct ListViewSort_o **p_sort; // x23
  __int64 v11; // x1
  __int64 sort; // x0
  TitleInfoControl_o *titleInfo; // x8
  UnityEngine_Object_o *fatigueRecoveryConfirmationDialog; // x24
  Il2CppObject *fatigueRecoveryConfirmationDialogPrefab; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_GameObject_o *v20; // x24
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *Component_object; // x0
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  System_Int32_array *v26; // x23
  EventUpValSetupInfo_o *v27; // x21
  const MethodInfo *v28; // x2
  __int64 v29; // x23
  __int64 v30; // x28
  __int64 v31; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  UserServantEntity_o *v33; // x24
  __int128 v34; // q0
  int64_t v35; // x0
  int32_t v36; // w26
  int64_t v37; // x27
  EventServantFatigueListViewItem_o *v38; // x25
  const MethodInfo *v39; // x6
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x1
  struct EventServantRecoveryFatigueItem_o **p_targetRecoveryFatigueItem; // [xsp+0h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50[2]; // [xsp+30h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v57; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4DFF1CE & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&EventServantFatigueListViewItem_TypeInfo);
    sub_1CE6700(&EventServantFatigueListViewManager_TypeInfo);
    sub_1CE6700(&EventUpValSetupInfo_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___);
    sub_1CE6700(&int___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_Object_Instantiate_GameObject____79994256);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&StringLiteral_11930/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4DFF1CE = 1;
  }
  v8 = EventServantFatigueListViewManager_TypeInfo;
  memset(&v50[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v8 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v8->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  p_sort = &this->fields.sort;
  sub_1CE66A4(&this->fields.sort, servantSortStatus);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  sort = NetworkManager__getTime(0);
  titleInfo = this->fields.titleInfo;
  this->fields.updateTime = sort;
  if ( !titleInfo )
    goto LABEL_62;
  TitleInfoControl__setTitleInfo(titleInfo, 0, 1, 0, 83, 0);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnSprite_41040968((TitleInfoControl_o *)sort, 1, 0, 0, 0);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0);
  this->fields.targetInUserServantEntity = 0;
  sub_1CE66A4(&this->fields.targetInUserServantEntity, 0);
  this->fields.targetOutUserServantEntity = 0;
  sub_1CE66A4(&this->fields.targetOutUserServantEntity, 0);
  this->fields.eventId = eventId;
  this->fields.statusShowUserSvtId = -1;
  this->fields.targetRecoveryFatigueItem = targetItem;
  p_targetRecoveryFatigueItem = &this->fields.targetRecoveryFatigueItem;
  sub_1CE66A4(&this->fields.targetRecoveryFatigueItem, targetItem);
  this->fields.selectAfterCallback = afterCallback;
  sub_1CE66A4(&this->fields.selectAfterCallback, afterCallback);
  this->fields.modeKind = 0;
  fatigueRecoveryConfirmationDialog = (UnityEngine_Object_o *)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = UnityEngine_Object__op_Equality(0, fatigueRecoveryConfirmationDialog, 0);
  if ( (sort & 1) != 0 )
  {
    fatigueRecoveryConfirmationDialogPrefab = (Il2CppObject *)this->fields.fatigueRecoveryConfirmationDialogPrefab;
    v51.fields.x = 0.0;
    v51.fields.y = 0.0;
    v51.fields.z = 0.0;
    v56 = UnityEngine_Quaternion__Internal_FromEulerRad(v51, 0);
    x = v56.fields.x;
    y = v56.fields.y;
    z = v56.fields.z;
    w = v56.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v52.fields.x = 0.0;
    v52.fields.y = 0.0;
    v52.fields.z = 0.0;
    v57.fields.x = x;
    v57.fields.y = y;
    v57.fields.z = z;
    v57.fields.w = w;
    sort = (__int64)UnityEngine_Object__Instantiate_object__53022336(
                      fatigueRecoveryConfirmationDialogPrefab,
                      v52,
                      v57,
                      (const MethodInfo_3290E80 *)Method_UnityEngine_Object_Instantiate_GameObject____79994256);
    if ( !sort )
      goto LABEL_62;
    v20 = (UnityEngine_GameObject_o *)sort;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)sort, 0);
    sort = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_62;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)sort, 0);
    sort = (__int64)UnityEngine_GameObject__get_transform(v20, 0);
    if ( !sort )
      goto LABEL_62;
    v53.fields.x = 0.0;
    v53.fields.y = 0.0;
    v53.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)sort, v53, 0);
    sort = (__int64)UnityEngine_GameObject__get_transform(v20, 0);
    if ( !sort )
      goto LABEL_62;
    v54.fields.x = 0.0;
    v54.fields.y = 0.0;
    v54.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)sort, v54, 0);
    sort = (__int64)UnityEngine_GameObject__get_transform(v20, 0);
    if ( !sort )
      goto LABEL_62;
    v55.fields.x = 1.0;
    v55.fields.y = 1.0;
    v55.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)sort, v55, 0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v20,
                         (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___);
    this->fields.fatigueRecoveryConfirmationDialog = (struct FatigueRecoveryConfirmationDialog_o *)Component_object;
    sub_1CE66A4(&this->fields.fatigueRecoveryConfirmationDialog, Component_object);
    sort = (__int64)this->fields.fatigueRecoveryConfirmationDialog;
    if ( !sort )
      goto LABEL_62;
    sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
    if ( !sort )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 0, 0);
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
  sub_1CE66A4(&this->fields.seed, normalSizeSeed);
LABEL_33:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0);
  if ( !scaleChangeButtonSprite )
    goto LABEL_62;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  sort = sub_1CE67A8(int___TypeInfo, 1);
  if ( !sort )
    goto LABEL_62;
  v26 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
LABEL_57:
    sub_1CE6960(sort);
  *(_DWORD *)(sort + 32) = eventId;
  v27 = (EventUpValSetupInfo_o *)sub_1CE694C(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_42890508(v27, v26, 1, 0, 0, 0);
  EventServantFatigueListViewManager__SetUpBonusFilterButton(this, v27, v28);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  sort = (__int64)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_62;
  sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0);
  if ( !sort )
    goto LABEL_62;
  v29 = sort;
  if ( (int)*(_QWORD *)(sort + 24) >= 1 )
  {
    v30 = 0;
    v31 = (unsigned int)*(_QWORD *)(sort + 24) - 1LL;
    while ( *p_targetRecoveryFatigueItem )
    {
      userServantEntity = (*p_targetRecoveryFatigueItem)->fields.userServantEntity;
      v33 = *(UserServantEntity_o **)(v29 + 32 + 8 * v30);
      if ( userServantEntity )
      {
        v34 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v50[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v50[1].fields.fakeValue = v34;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v50, -1, 0);
        v50[1] = v50[0];
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v49 = v50[1];
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v49, 0);
      v36 = this->fields.eventId;
      v37 = v35;
      v38 = (EventServantFatigueListViewItem_o *)sub_1CE694C(EventServantFatigueListViewItem_TypeInfo);
      EventServantFatigueListViewItem___ctor(v38, v33, v36, v37, v27, targetItem, v39);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v40 = *(_QWORD *)(sort + 16);
      v41 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v40 )
        break;
      v42 = *(int *)(sort + 24);
      if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v38,
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = v40 + 8 * v42;
        *(_DWORD *)(sort + 24) = v42 + 1;
        *(_QWORD *)(v43 + 32) = v38;
        sort = sub_1CE66A4(v43 + 32, v38);
      }
      if ( v31 == v30 )
        goto LABEL_58;
      if ( ++v30 >= (unsigned __int64)*(unsigned int *)(v29 + 24) )
        goto LABEL_57;
    }
LABEL_62:
    sub_1CE6958(sort, v11);
  }
LABEL_58:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11930/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_62;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
  EventServantFatigueListViewManager__SetStatusKind(this, this->fields.modeKind, v45);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  EventServantFatigueListViewManager__SetFilterButtonImage(this, v46);
}


void EventServantFatigueListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventServantFatigueListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4DFF1C8 & 1) == 0 )
  {
    sub_1CE6700(&EventServantFatigueListViewManager_TypeInfo);
    byte_4DFF1C8 = 1;
  }
  v2 = EventServantFatigueListViewManager_TypeInfo;
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v2 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1CE6958(0, v1);
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
    sub_1CE6958(0, v3);
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
  EventServantFatigueListViewManager__SetMode_33415240(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_33415240(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_33415240(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_33415240(this, 2, v5);
}


void EventServantFatigueListViewManager__EndPushRequest(
        EventServantFatigueListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventServantFatigueListViewManager__ModifyList(this, 0, method);
  EventServantFatigueListViewManager__SetMode_33415240(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void EventServantFatigueListViewManager__EndSelectFilterKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4DFF1E4 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4DFF1E4 = 1;
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
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_1CE6958(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)sort, 0, 0);
}


void EventServantFatigueListViewManager__EndSelectSortKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4DFF1E8 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4DFF1E8 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v6);
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

  if ( (byte_4DFF1E1 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4DFF1E1 = 1;
  }
  EventServantFatigueListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventServantFatigueListViewManager__ModifyList(this, 0, v4);
  EventServantFatigueListViewManager__SetMode_33415240(this, 2, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void EventServantFatigueListViewManager__EndStatusSync(
        EventServantFatigueListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct EventServantFatigueListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  struct EventServantFatigueListViewManager_RequestCallbackFunc_o **p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = &this->fields.requestCallback;
    *p_requestCallback = 0;
    sub_1CE66A4(p_requestCallback, 0);
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w25
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 naturalAligment; // x10
  _QWORD *monitor; // x8
  __int64 v11; // x23
  __int64 v12; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4DFF1E2 & 1) == 0 )
  {
    sub_1CE6700(&EventServantFatigueListViewItem_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4DFF1E2 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (EventServantFatigueListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != EventServantFatigueListViewItem_TypeInfo )
        break;
      monitor = itemList[3].monitor;
      if ( !monitor )
        break;
      v12 = monitor[10];
      v11 = monitor[11];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v14.fields.currentCryptoKey = v12;
      *(_QWORD *)&v14.fields.fakeValue = v11;
      ++v7;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v14, 0) == svtId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1CE6958(itemList, *(_QWORD *)&svtId);
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
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x0
  int32_t IndividualityRate; // w0
  int v17; // w23
  int64_t Time; // x8
  float v19; // s0
  __int64 v20; // x10
  int64_t v21; // x21
  System_String_o *v22; // x20
  System_String_o *v23; // x0
  System_String_o *v24; // x1

  if ( (byte_4DFF1DC & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_11689/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/);
    sub_1CE6700(&StringLiteral_11701/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/);
    sub_1CE6700(&StringLiteral_11789/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/);
    byte_4DFF1DC = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1, 0);
  if ( System_String__IsNullOrEmpty(RestTime4, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11701/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0);
    *beforeTime = v13;
    sub_1CE66A4(beforeTime, v13);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11689/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0);
  }
  else
  {
    targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
    if ( !targetRecoveryFatigueItem )
      sub_1CE6958(0, v12);
    if ( isMatch )
      IndividualityRate = EventServantRecoveryFatigueItem__get_IndividualityRate(targetRecoveryFatigueItem, 0);
    else
      IndividualityRate = EventServantRecoveryFatigueItem__get_RecoveryRate(targetRecoveryFatigueItem, 0);
    v17 = IndividualityRate;
    *beforeTime = RestTime4;
    sub_1CE66A4(beforeTime, RestTime4);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    v19 = (float)(recoveryFatigueTime - Time) / (float)((float)v17 / 1000.0);
    v20 = (__int64)v19;
    if ( v19 == INFINITY )
      v20 = 0x8000000000000000LL;
    v21 = v20 + Time;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__GetRestTime4(v21, -1, 0);
  }
  *afterTime = v14;
  sub_1CE66A4(afterTime, v14);
  if ( isMatch )
  {
    v22 = *afterTime;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11789/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0);
    v24 = System_String__Concat_65122828(v22, v23, 0);
    *afterTime = v24;
    sub_1CE66A4(afterTime, v24);
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
  unsigned __int64 v8; // x21
  System_String_o *v9; // x0

  if ( (byte_4DFF1DB & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&System_Text_StringBuilder_TypeInfo);
    sub_1CE6700(&StringLiteral_11790/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/);
    byte_4DFF1DB = 1;
  }
  v4 = (System_Text_StringBuilder_o *)sub_1CE694C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0);
  if ( !array )
    goto LABEL_16;
  max_length = array->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1CE6960(appended);
      if ( !v4 )
        break;
      appended = System_Text_StringBuilder__Append_65206788(v4, array->m_Items[v8++], 0);
      if ( (int)v8 < SLODWORD(array->max_length) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11790/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/, 0);
        appended = System_Text_StringBuilder__Append_65206788(v4, v9, 0);
      }
      LODWORD(max_length) = array->max_length;
      if ( (__int64)v8 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_16:
    sub_1CE6958(appended, v6);
  }
LABEL_13:
  if ( !v4 )
    goto LABEL_16;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
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

  if ( (byte_4DFF1D5 & 1) == 0 )
  {
    sub_1CE6700(&EventServantFatigueListViewItem_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4DFF1D5 = 1;
  }
  result = (EventServantFatigueListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventServantFatigueListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  System_String_o *v13; // x0
  System_String_o *v14; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x1
  System_String_o **v18; // x0
  EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x0
  int32_t IndividualityRate; // w0
  int v21; // w23
  int64_t Time; // x8
  float v23; // s0
  __int64 v24; // x10
  int64_t v25; // x22
  System_String_o *v26; // x0
  System_String_o *v27; // x20
  System_String_o *v28; // x0

  if ( (byte_4DFF1DD & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_11689/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/);
    sub_1CE6700(&StringLiteral_11701/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/);
    sub_1CE6700(&StringLiteral_11789/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/);
    byte_4DFF1DD = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1, 0);
  if ( System_String__IsNullOrEmpty(RestTime4, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11701/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0);
    *beforeTime = v13;
    sub_1CE66A4(beforeTime, v13);
    if ( isMatch )
    {
      v14 = *beforeTime;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11789/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0);
      v16 = System_String__Concat_65122828(v14, v15, 0);
      *beforeTime = v16;
      sub_1CE66A4(beforeTime, v16);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11689/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0);
    *afterTime = v17;
    v18 = afterTime;
LABEL_29:
    sub_1CE66A4(v18, v17);
    return;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    sub_1CE6958(0, v12);
  if ( isMatch )
    IndividualityRate = EventServantRecoveryFatigueItem__get_IndividualityRate(targetRecoveryFatigueItem, 0);
  else
    IndividualityRate = EventServantRecoveryFatigueItem__get_RecoveryRate(targetRecoveryFatigueItem, 0);
  v21 = IndividualityRate;
  *beforeTime = RestTime4;
  sub_1CE66A4(beforeTime, RestTime4);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v23 = (float)((float)v21 / 1000.0) * (float)(recoveryFatigueTime - Time);
  v24 = (__int64)v23;
  if ( v23 == INFINITY )
    v24 = 0x8000000000000000LL;
  v25 = v24 + Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__GetRestTime4(v25, -1, 0);
  *afterTime = v26;
  sub_1CE66A4(afterTime, v26);
  if ( isMatch )
  {
    v27 = *beforeTime;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11789/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0);
    v17 = System_String__Concat_65122828(v27, v28, 0);
    *beforeTime = v17;
    v18 = beforeTime;
    goto LABEL_29;
  }
}


bool EventServantFatigueListViewManager__GetSwapChoiceList(
        EventServantFatigueListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int64_t itemList; // x0
  int v11; // w25
  int32_t v12; // w24
  __int64 naturalAligment; // x10
  __int64 v14; // x8
  __int128 v15; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8
  __int128 v20; // q0
  struct System_Int64_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8
  System_Collections_Generic_List_long__o *v25; // x0
  int v26; // w21
  System_Int64_array *v27; // x0
  System_Int64_array *v28; // x1
  System_Int64_array **v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-80h]

  if ( (byte_4DFF1EC & 1) == 0 )
  {
    sub_1CE6700(&EventServantFatigueListViewItem_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_long__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1CE6700(&System_Collections_Generic_List_long__TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4DFF1EC = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1CE694C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_38ED748 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1CE694C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_38ED748 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v11 = *(_DWORD *)(itemList + 24);
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v12,
                            (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != EventServantFatigueListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v14 = *(_QWORD *)(itemList + 128);
      if ( v14 && *(_BYTE *)(itemList + 201) )
      {
        if ( *(_BYTE *)(itemList + 170) )
        {
          v15 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v33.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v32 = v33;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v32, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v17 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v24 = v17[4];
            v25 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v25,
              v9,
              *(const MethodInfo_38EDF9C **)(*(_QWORD *)(v24 + 192) + 112LL));
            goto LABEL_28;
          }
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v20 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v33.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v31 = v33;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v31, 0);
          if ( !v7 )
            goto LABEL_37;
          v21 = v7->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v21 )
            goto LABEL_37;
          v23 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
          {
            v24 = v22[4];
            v25 = v7;
            goto LABEL_27;
          }
          v19 = &v21->obj.klass + v23;
          v7->fields._size = v23 + 1;
        }
        v19[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v11 == ++v12 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1CE6958(itemList, v9);
  v26 = v8->fields._size + v7->fields._size;
  if ( v26 < 1 )
  {
    *choiceList = 0;
    sub_1CE66A4(choiceList, 0);
    v29 = unchoiceList;
    v28 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_38EFA54 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v27;
    sub_1CE66A4(choiceList, v27);
    v28 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_38EFA54 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v28;
    v29 = unchoiceList;
  }
  sub_1CE66A4(v29, v28);
  return v26 > 0;
}


bool EventServantFatigueListViewManager__GetSwapLockList(
        EventServantFatigueListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int64_t itemList; // x0
  int v11; // w25
  int32_t v12; // w24
  __int64 naturalAligment; // x10
  __int64 v14; // x8
  __int128 v15; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8
  __int128 v20; // q0
  struct System_Int64_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8
  System_Collections_Generic_List_long__o *v25; // x0
  int v26; // w21
  System_Int64_array *v27; // x0
  System_Int64_array *v28; // x1
  System_Int64_array **v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-80h]

  if ( (byte_4DFF1EB & 1) == 0 )
  {
    sub_1CE6700(&EventServantFatigueListViewItem_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_long__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1CE6700(&System_Collections_Generic_List_long__TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4DFF1EB = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1CE694C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_38ED748 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1CE694C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_38ED748 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v11 = *(_DWORD *)(itemList + 24);
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v12,
                            (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != EventServantFatigueListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v14 = *(_QWORD *)(itemList + 128);
      if ( v14 && *(_BYTE *)(itemList + 200) )
      {
        if ( *(_BYTE *)(itemList + 169) )
        {
          v15 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v33.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v32 = v33;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v32, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v17 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v24 = v17[4];
            v25 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v25,
              v9,
              *(const MethodInfo_38EDF9C **)(*(_QWORD *)(v24 + 192) + 112LL));
            goto LABEL_28;
          }
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v20 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v33.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v31 = v33;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v31, 0);
          if ( !v7 )
            goto LABEL_37;
          v21 = v7->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v21 )
            goto LABEL_37;
          v23 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
          {
            v24 = v22[4];
            v25 = v7;
            goto LABEL_27;
          }
          v19 = &v21->obj.klass + v23;
          v7->fields._size = v23 + 1;
        }
        v19[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v11 == ++v12 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1CE6958(itemList, v9);
  v26 = v8->fields._size + v7->fields._size;
  if ( v26 < 1 )
  {
    *lockList = 0;
    sub_1CE66A4(lockList, 0);
    v29 = unlockList;
    v28 = 0;
    *unlockList = 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_38EFA54 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v27;
    sub_1CE66A4(lockList, v27);
    v28 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_38EFA54 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v28;
    v29 = unlockList;
  }
  sub_1CE66A4(v29, v28);
  return v26 > 0;
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
  EventServantFatigueListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4DFF1C9 & 1) == 0 )
  {
    sub_1CE6700(&EventServantFatigueListViewManager_TypeInfo);
    byte_4DFF1C9 = 1;
  }
  v2 = EventServantFatigueListViewManager_TypeInfo;
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v2 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1CE6958(0, v1);
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v8; // x20
  unsigned __int64 v9; // x25
  struct EventServantRecoveryFatigueItem_o *v10; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v12; // w21
  Il2CppObject *v13; // x22
  __int64 v14; // x23
  __int64 v15; // x24
  struct EventServantRecoveryFatigueItem_o *v16; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v17; // x8
  int32_t v18; // w23
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4DFF1DA & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFF1DA = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
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
         (const MethodInfo_34E92A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    v8 = Instance;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)m_CancellationTokenSource )
          sub_1CE6960(Instance);
        v10 = this->fields.targetRecoveryFatigueItem;
        if ( !v10 )
          break;
        userServantEntity = v10->fields.userServantEntity;
        if ( !userServantEntity )
          break;
        v12 = *((_DWORD *)&v8->fields._DispLog + v9);
        v13 = entity;
        v15 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v14 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v21.fields.currentCryptoKey = v15;
        *(_QWORD *)&v21.fields.fakeValue = v14;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v21, 0);
        v16 = this->fields.targetRecoveryFatigueItem;
        if ( !v16 )
          break;
        v17 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v16->fields.userServantEntity;
        if ( !v17 )
          break;
        v18 = (int)Instance;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v17[8], 0);
        if ( !v13 )
          break;
        Instance = (DataManager_o *)ServantEntity__IsIndividuality(
                                      (ServantEntity_o *)v13,
                                      v18,
                                      (int32_t)Instance,
                                      v12,
                                      0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          LODWORD(m_CancellationTokenSource) = v8->fields.m_CancellationTokenSource;
          if ( (__int64)++v9 < (int)m_CancellationTokenSource )
            continue;
        }
        return (unsigned __int8)Instance & 1;
      }
LABEL_25:
      sub_1CE6958(Instance, v4);
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
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 naturalAligment; // x11
  EventServantFatigueListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v13; // q0
  int64_t v14; // x0
  Il2CppObject v15; // q0
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *viewObject; // x21
  __int64 v18; // x1
  struct ListViewObject_o *v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4DFF1D2 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1CE6700(&EventServantFatigueListViewItem_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFF1D2 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0);
    if ( usrSvtId < 1 )
    {
      Entity = 0;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_37;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_37;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_34EBA0C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v23.fields._list = *(_OWORD *)&v22.fields.currentCryptoKey;
      v23.fields._current = (Il2CppObject *)v22.fields.fakeValue;
      while ( 1 )
      {
        v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v23,
               (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v8 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v23,
            (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v23.fields._current
          && (naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment,
              v23.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (EventServantFatigueListViewItem_c *)v23.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = (EventServantFatigueListViewItem_o *)v23.fields._current;
          else
            current = 0;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_1CE6958(v8, v9);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_1CE6958(v8, v9);
            v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v22.fields.fakeValue = v13;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v21 = v22;
            v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v21, 0);
            v15 = Entity[2];
            *(Il2CppObject *)&v20.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v20.fields.fakeValue = v15;
            if ( v14 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v20, 0) )
              EventServantFatigueListViewItem__ModifyItem(current, (UserServantEntity_o *)Entity, v16);
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
          sub_1CE6958(v8, v9);
LABEL_26:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
        {
          v19 = current->fields.viewObject;
          if ( !v19 )
            sub_1CE6958(0, v18);
          ((void (__fastcall *)(struct ListViewObject_o *, EventServantFatigueListViewItem_o *, const MethodInfo *))v19->klass->vtable._5_SetItem.methodPtr)(
            v19,
            current,
            v19->klass->vtable._5_SetItem.method);
        }
      }
    }
LABEL_37:
    sub_1CE6958(Instance, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventServantFatigueListViewManager__ModifyList(
        EventServantFatigueListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t sort; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v7; // x25
  int64_t v8; // x20
  int size; // w28
  unsigned int v10; // w26
  __int64 v11; // x8
  __int128 v12; // q0
  int64_t v13; // x22
  int32_t v14; // w23
  int64_t v15; // x24
  __int64 naturalAligment; // x10
  __int64 v17; // x8
  __int128 v18; // q0
  __int64 v19; // x8
  __int128 v20; // q0
  int64_t v21; // x0
  const MethodInfo *v22; // x4
  bool isIconSizeChangea; // [xsp+Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+70h] [xbp-80h]

  if ( (byte_4DFF1D4 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&EventServantFatigueListViewItem_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFF1D4 = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_33;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0);
  if ( !sort )
    goto LABEL_33;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
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
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
      *(_OWORD *)&v27.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v26 = v27;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v26, 0);
      if ( size >= 1 )
      {
        v13 = sort;
        v14 = 0;
        while ( 1 )
        {
          sort = (int64_t)this->fields.itemList;
          if ( !sort )
            goto LABEL_33;
          sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)sort,
                            v14,
                            (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !sort )
            goto LABEL_33;
          v15 = sort;
          naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)naturalAligment
            || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * naturalAligment - 8) != EventServantFatigueListViewItem_TypeInfo )
          {
            goto LABEL_33;
          }
          v17 = *(_QWORD *)(sort + 128);
          if ( v17 )
          {
            v18 = *(_OWORD *)(v17 + 32);
            *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
            *(_OWORD *)&v27.fields.fakeValue = v18;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v25 = v27;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v25, 0);
            if ( sort == v13 )
              break;
          }
          if ( size == ++v14 )
            goto LABEL_29;
        }
        v19 = *(_QWORD *)(v15 + 128);
        if ( !v19 )
          break;
        v20 = *(_OWORD *)(v19 + 32);
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v19 + 16);
        *(_OWORD *)&v27.fields.fakeValue = v20;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v24 = v27;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v24, 0);
        EventServantFatigueListViewManager__ModifyLockItem(this, v21, 1, isIconSizeChangea, v22);
      }
LABEL_29:
      if ( ++v10 == (_DWORD)v7 )
        return;
      if ( v10 >= *(_DWORD *)(v8 + 24) )
        sub_1CE6960(sort);
    }
LABEL_33:
    sub_1CE6958(sort, isIconSizeChange);
  }
}


void EventServantFatigueListViewManager__ModifyLockItem(
        EventServantFatigueListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v11; // w20
  int64_t v12; // x0
  const MethodInfo *v13; // x1
  __int64 naturalAligment; // x11
  EventServantFatigueListViewItem_o *current; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v17; // q0
  int64_t v18; // x0
  Il2CppObject v19; // q0
  int64_t v20; // x24
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  UnityEngine_Object_o *viewObject; // x23
  __int64 v25; // x1
  struct ListViewObject_o *v26; // x0
  __int64 v27; // x1
  ListViewObject_o *v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_4DFF1D3 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1CE6700(&EventServantFatigueListViewItem_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFF1D3 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0);
    if ( usrSvtId < 1 )
    {
      Entity = 0;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_45;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_45;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_34EBA0C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v32,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v33.fields._list = *(_OWORD *)&v32.fields.currentCryptoKey;
      v33.fields._current = (Il2CppObject *)v32.fields.fakeValue;
      v11 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v33,
                (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v12 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v33,
            (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v33.fields._current
          && (naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment,
              v33.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (EventServantFatigueListViewItem_c *)v33.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = (EventServantFatigueListViewItem_o *)v33.fields._current;
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
          sub_1CE6958(v12, v13);
        userServantEntity = current->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1CE6958(v12, v13);
        v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v32.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v31 = v32;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v31, 0);
        v19 = Entity[2];
        v20 = v18;
        *(Il2CppObject *)&v30.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v30.fields.fakeValue = v19;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v30, 0);
        if ( v20 == v12 )
        {
          current->fields.userServantEntity = (struct UserServantEntity_o *)Entity;
          sub_1CE66A4(&current->fields.userServantEntity, Entity);
          EventServantFatigueListViewItem__UpdateServantInfoAndSortInfo(current, v21);
        }
LABEL_26:
        if ( v11 )
        {
          if ( !current )
            sub_1CE6958(v12, v13);
          EventServantFatigueListViewItem__ModifyLockItem(current, v13);
          EventServantFatigueListViewItem__ModifyChoiceItem(current, v22);
          EventServantFatigueListViewItem__ModifyPushItem(current, v23);
        }
        else if ( !current )
        {
          sub_1CE6958(v12, v13);
        }
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
        {
          v26 = current->fields.viewObject;
          if ( !v26 )
            sub_1CE6958(0, v25);
          ((void (__fastcall *)(struct ListViewObject_o *, EventServantFatigueListViewItem_o *, const MethodInfo *))v26->klass->vtable._5_SetItem.methodPtr)(
            v26,
            current,
            v26->klass->vtable._5_SetItem.method);
          if ( isIconSizeChange )
          {
            v28 = current->fields.viewObject;
            if ( !v28 )
              sub_1CE6958(0, v27);
            ListViewObject__SetItemSeed(v28, (ListViewItem_o *)current, this->fields.seed, 0);
          }
        }
      }
    }
LABEL_45:
    sub_1CE6958(Instance, v8);
  }
}


void EventServantFatigueListViewManager__OnClickBack(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x20

  if ( (byte_4DFF1F2 & 1) == 0 )
  {
    sub_1CE6700(&Method_EventServantFatigueListViewManager_OnClickBack__);
    byte_4DFF1F2 = 1;
  }
  v3 = Method_EventServantFatigueListViewManager_OnClickBack__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1CE6718(Method_EventServantFatigueListViewManager_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0;
    sub_1CE66A4(&this->fields.selectAfterCallback, 0);
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

  if ( (byte_4DFF1E5 & 1) == 0 )
  {
    sub_1CE6700(&Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__);
    byte_4DFF1E5 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1CE6958(0, v5);
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

  if ( (byte_4DFF1EF & 1) == 0 )
  {
    sub_1CE6700(&Method_EventServantFatigueListViewManager_EndClickTabChoice__);
    sub_1CE6700(&Method_EventServantFatigueListViewManager_OnClickChoiceTab__);
    sub_1CE6700(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4DFF1EF = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_EventServantFatigueListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1CE694C(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
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
      EventServantFatigueListViewManager__SetMode_33415240(this, 2, v10);
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

  if ( (byte_4DFF1EE & 1) == 0 )
  {
    sub_1CE6700(&Method_EventServantFatigueListViewManager_EndClickTabLock__);
    sub_1CE6700(&Method_EventServantFatigueListViewManager_OnClickCollectLock__);
    sub_1CE6700(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4DFF1EE = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_EventServantFatigueListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1CE694C(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
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
      EventServantFatigueListViewManager__SetMode_33415240(this, 2, v10);
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

  if ( (byte_4DFF1E3 & 1) == 0 )
  {
    sub_1CE6700(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_EventServantFatigueListViewManager_EndSelectFilterKind__);
    sub_1CE6700(&Method_EventServantFatigueListViewManager_OnClickFilterKind__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4DFF1E3 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_EventServantFatigueListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1CE694C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1CE6958(v9, v10);
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

  if ( (byte_4DFF1ED & 1) == 0 )
  {
    sub_1CE6700(&Method_EventServantFatigueListViewManager_EndClickTabStatus__);
    sub_1CE6700(&Method_EventServantFatigueListViewManager_OnClickNormalStatus__);
    sub_1CE6700(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4DFF1ED = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_EventServantFatigueListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1CE694C(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4DFF1F0 & 1) == 0 )
  {
    sub_1CE6700(&Method_EventServantFatigueListViewManager_EndClickTabPush__);
    sub_1CE6700(&Method_EventServantFatigueListViewManager_OnClickPushTab__);
    sub_1CE6700(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4DFF1F0 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_EventServantFatigueListViewManager_OnClickPushTab__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickPushTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_EventServantFatigueListViewManager_OnClickPushTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1CE694C(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
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
      EventServantFatigueListViewManager__SetMode_33415240(this, 2, v10);
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
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  EventServantFatigueListViewManager_o *v8; // x0
  int v9; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v12; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  if ( (byte_4DFF1F3 & 1) == 0 )
  {
    sub_1CE6700(&Method_EventServantFatigueListViewManager_OnClickScaleChange__);
    byte_4DFF1F3 = 1;
  }
  v3 = Method_EventServantFatigueListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1CE6718(Method_EventServantFatigueListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v8 = this;
    v9 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v8 = this;
    v9 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v8 = this;
    v9 = 1;
LABEL_11:
    v8->fields.seed = smallSizeSeed;
    p_seed = &v8->fields.seed;
    *((_DWORD *)p_seed + 116) = v9;
    sub_1CE66A4(p_seed, smallSizeSeed);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v12 = this->fields.scaleType,
        sort->fields.iconScaleKind = v12,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v12, 0),
        !scaleChangeButtonSprite) )
  {
    sub_1CE6958(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  EventServantFatigueListViewManager__ModifyList(this, 1, v14);
  EventServantFatigueListViewManager__SetMode_33415240(this, 2, v15);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void EventServantFatigueListViewManager__OnClickSelectObject(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ListViewObject_o *v3; // x20
  __int64 fatigueRecoveryConfirmationDialog; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 naturalAligment; // x10
  EventServantFatigueListViewItem_o *Item; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x8
  __int128 v12; // q1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v14; // q0
  __int64 v15; // x23
  const MethodInfo *v16; // x2
  bool IsMatchIndividuality_33404764; // w0
  const MethodInfo *v18; // x5
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct UserServantEntity_o *v20; // x1
  FatigueRecoveryConfirmationDialog_o *v21; // x20
  System_String_o *v22; // x21
  Il2CppObject *Name; // x0
  System_String_o *v24; // x21
  System_String_o *v25; // x0
  UserServantEntity_o *targetOutUserServantEntity; // x22
  System_String_o *v27; // x23
  System_String_o *outAfterTime; // x27
  System_String_o *v29; // x24
  CommonConfirmDialog_ClickDelegate_o *func; // x25
  bool v31; // w0
  const MethodInfo *v32; // x5
  struct UserServantEntity_o *v33; // x1
  FatigueRecoveryConfirmationDialog_o *v34; // x20
  System_String_o *v35; // x21
  Il2CppObject *v36; // x0
  System_String_o *v37; // x21
  System_String_o *v38; // x0
  UserServantEntity_o *v39; // x22
  System_String_o *v40; // x23
  System_String_o *v41; // x24
  System_String_o *v42; // x25
  CommonConfirmDialog_ClickDelegate_o *v43; // x26
  struct EventServantRecoveryFatigueItem_o *v44; // x8
  struct UserServantEntity_o *v45; // x8
  __int128 v46; // q0
  struct UserServantEntity_o *v47; // x8
  __int128 v48; // q0
  const MethodInfo *v49; // x2
  bool v50; // w0
  const MethodInfo *v51; // x5
  struct EventServantRecoveryFatigueItem_o *v52; // x8
  struct UserServantEntity_o *v53; // x8
  UserEventServantFatigueMaster_o *v54; // x23
  int32_t eventId; // w24
  __int64 v56; // x25
  __int64 v57; // x26
  bool FatigueInfo; // w0
  const MethodInfo *v59; // x1
  int64_t v60; // x23
  int64_t v61; // x23
  bool IsMatchIndividuality; // w0
  const MethodInfo *v63; // x5
  struct UserServantEntity_o *v64; // x1
  struct EventServantRecoveryFatigueItem_o *v65; // x8
  struct UserServantEntity_o *v66; // x1
  FatigueRecoveryConfirmationDialog_o *v67; // x20
  System_String_o *v68; // x21
  Il2CppObject *v69; // x0
  System_String_o *v70; // x21
  System_String_o *v71; // x0
  System_String_o *v72; // x22
  System_String_o *v73; // x23
  UserServantEntity_o *v74; // x24
  UserServantEntity_o *targetInUserServantEntity; // x26
  System_String_o *v76; // x25
  System_String_o *v77; // x29
  System_String_o *v78; // x27
  CommonConfirmDialog_ClickDelegate_o *v79; // x28
  const MethodInfo *v80; // [xsp+18h] [xbp-168h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+30h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+50h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+70h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+90h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+B0h] [xbp-D0h]
  bool isRecover; // [xsp+D4h] [xbp-ACh] BYREF
  int64_t recoverAt; // [xsp+D8h] [xbp-A8h] BYREF
  System_String_o *v88; // [xsp+E0h] [xbp-A0h] BYREF
  System_String_o *v89; // [xsp+E8h] [xbp-98h] BYREF
  System_String_o *v90; // [xsp+F0h] [xbp-90h] BYREF
  System_String_o *v91; // [xsp+F8h] [xbp-88h] BYREF
  System_String_o *afterTime; // [xsp+100h] [xbp-80h] BYREF
  System_String_o *beforeTime; // [xsp+108h] [xbp-78h] BYREF
  System_String_o *v94; // [xsp+110h] [xbp-70h] BYREF
  System_String_o *v95; // [xsp+118h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  v3 = obj;
  if ( (byte_4DFF1D9 & 1) == 0 )
  {
    sub_1CE6700(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1CE6700(&Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__);
    sub_1CE6700(&Method_EventServantFatigueListViewManager_OnClickSelectObject__);
    sub_1CE6700(&EventServantFatigueListViewObject_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&StringLiteral_11784/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/);
    sub_1CE6700(&StringLiteral_11776/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/);
    sub_1CE6700(&StringLiteral_11774/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/);
    sub_1CE6700(&StringLiteral_11704/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    sub_1CE6700(&StringLiteral_11702/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/);
    byte_4DFF1D9 = 1;
  }
  v94 = 0;
  v95 = 0;
  afterTime = 0;
  beforeTime = 0;
  v90 = 0;
  v91 = 0;
  v88 = 0;
  v89 = 0;
  recoverAt = 0;
  isRecover = 0;
  fatigueRecoveryConfirmationDialog = (__int64)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  fatigueRecoveryConfirmationDialog = (__int64)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)fatigueRecoveryConfirmationDialog,
                                                 0);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fatigueRecoveryConfirmationDialog, 1, 0);
  v6 = Method_EventServantFatigueListViewManager_OnClickSelectObject__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectObject__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1CE6718(Method_EventServantFatigueListViewManager_OnClickSelectObject__);
  v7 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v6, v6[4]);
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
  sub_1CE66A4(&this->fields.targetInUserServantEntity, 0);
  this->fields.targetOutUserServantEntity = 0;
  sub_1CE66A4(&this->fields.targetOutUserServantEntity, 0);
  fatigueRecoveryConfirmationDialog = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fatigueRecoveryConfirmationDialog,
    (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  fatigueRecoveryConfirmationDialog = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  fatigueRecoveryConfirmationDialog = (__int64)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                 (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  obj = (ListViewObject_o *)this->fields.targetRecoveryFatigueItem;
  if ( !obj )
    goto LABEL_56;
  v11 = *(_QWORD *)&obj->fields.basePosition.fields.z;
  if ( v11 )
  {
    v12 = *(_OWORD *)(v11 + 32);
    *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
    *(_OWORD *)&v85.fields.fakeValue = v12;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v84 = v85;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v84, 0);
    if ( !Item )
      goto LABEL_56;
    userServantEntity = Item->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_56;
    v14 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    v15 = fatigueRecoveryConfirmationDialog;
    *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v83.fields.fakeValue = v14;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v83, 0);
    if ( v15 == fatigueRecoveryConfirmationDialog )
    {
      afterTime = (System_String_o *)StringLiteral_1/*""*/;
      beforeTime = (System_String_o *)StringLiteral_1/*""*/;
      IsMatchIndividuality_33404764 = EventServantFatigueListViewItem__IsMatchIndividuality_33404764(
                                        Item,
                                        this->fields.targetRecoveryFatigueItem,
                                        v16);
      EventServantFatigueListViewManager__GetOutRecoveryTime(
        this,
        Item->fields.fatigueTime,
        &beforeTime,
        &afterTime,
        IsMatchIndividuality_33404764,
        v18);
      targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
      if ( targetRecoveryFatigueItem )
      {
        v20 = targetRecoveryFatigueItem->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v20;
        sub_1CE66A4(&this->fields.targetOutUserServantEntity, v20);
        v21 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        fatigueRecoveryConfirmationDialog = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11784/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/, 0);
        if ( this->fields.targetRecoveryFatigueItem )
        {
          v22 = (System_String_o *)fatigueRecoveryConfirmationDialog;
          Name = (Il2CppObject *)EventServantRecoveryFatigueItem__get_Name(this->fields.targetRecoveryFatigueItem, 0);
          v24 = System_String__Format(v22, Name, 0);
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11774/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0);
          targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
          outAfterTime = afterTime;
          v27 = beforeTime;
          v29 = v25;
          func = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            func,
            (Il2CppObject *)this,
            Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
            0);
          if ( v21 )
          {
            FatigueRecoveryConfirmationDialog__Setup(
              v21,
              v24,
              v29,
              0,
              (System_String_o *)StringLiteral_1/*""*/,
              (System_String_o *)StringLiteral_1/*""*/,
              targetOutUserServantEntity,
              v27,
              outAfterTime,
              1,
              func,
              v80);
            return;
          }
        }
      }
LABEL_56:
      sub_1CE6958(fatigueRecoveryConfirmationDialog, obj);
    }
    v44 = this->fields.targetRecoveryFatigueItem;
    if ( !v44 )
      goto LABEL_56;
    v45 = v44->fields.userServantEntity;
    if ( v45 )
    {
      v46 = *(_OWORD *)&v45->fields.id.fields.fakeValue;
      *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)&v45->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v85.fields.fakeValue = v46;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v82 = v85;
      fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v82, 0);
      v47 = Item->fields.userServantEntity;
      if ( !v47 )
        goto LABEL_56;
      v48 = *(_OWORD *)&v47->fields.id.fields.fakeValue;
      *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&v47->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v81.fields.fakeValue = v48;
      if ( fatigueRecoveryConfirmationDialog != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(
                                                  &v81,
                                                  0) )
      {
        v90 = (System_String_o *)StringLiteral_1/*""*/;
        v91 = (System_String_o *)StringLiteral_1/*""*/;
        v50 = EventServantFatigueListViewItem__IsMatchIndividuality_33404764(
                Item,
                this->fields.targetRecoveryFatigueItem,
                v49);
        EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v91, &v90, v50, v51);
        v88 = (System_String_o *)StringLiteral_1/*""*/;
        v89 = (System_String_o *)StringLiteral_1/*""*/;
        fatigueRecoveryConfirmationDialog = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !fatigueRecoveryConfirmationDialog )
          goto LABEL_56;
        fatigueRecoveryConfirmationDialog = (__int64)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                       (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        v52 = this->fields.targetRecoveryFatigueItem;
        if ( !v52 )
          goto LABEL_56;
        v53 = v52->fields.userServantEntity;
        if ( !v53 )
          goto LABEL_56;
        v54 = (UserEventServantFatigueMaster_o *)fatigueRecoveryConfirmationDialog;
        eventId = this->fields.eventId;
        v57 = *(_QWORD *)&v53->fields.svtId.fields.currentCryptoKey;
        v56 = *(_QWORD *)&v53->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v96.fields.currentCryptoKey = v57;
        *(_QWORD *)&v96.fields.fakeValue = v56;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v96, 0);
        if ( !v54 )
          goto LABEL_56;
        FatigueInfo = UserEventServantFatigueMaster__GetFatigueInfo(
                        v54,
                        &recoverAt,
                        &isRecover,
                        eventId,
                        fatigueRecoveryConfirmationDialog,
                        0);
        v60 = 0;
        if ( FatigueInfo )
        {
          v61 = recoverAt;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( v61 <= NetworkManager__getTime(0) )
            v60 = 0;
          else
            v60 = recoverAt;
        }
        IsMatchIndividuality = EventServantFatigueListViewManager__IsMatchIndividuality(this, v59);
        EventServantFatigueListViewManager__GetOutRecoveryTime(this, v60, &v89, &v88, IsMatchIndividuality, v63);
        v64 = Item->fields.userServantEntity;
        this->fields.targetInUserServantEntity = v64;
        fatigueRecoveryConfirmationDialog = sub_1CE66A4(&this->fields.targetInUserServantEntity, v64);
        v65 = this->fields.targetRecoveryFatigueItem;
        if ( !v65 )
          goto LABEL_56;
        v66 = v65->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v66;
        sub_1CE66A4(&this->fields.targetOutUserServantEntity, v66);
        v67 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        fatigueRecoveryConfirmationDialog = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11704/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/, 0);
        if ( !this->fields.targetRecoveryFatigueItem )
          goto LABEL_56;
        v68 = (System_String_o *)fatigueRecoveryConfirmationDialog;
        v69 = (Il2CppObject *)EventServantRecoveryFatigueItem__get_Name(this->fields.targetRecoveryFatigueItem, 0);
        v70 = System_String__Format(v68, v69, 0);
        v71 = LocalizationManager__Get((System_String_o *)StringLiteral_11702/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/, 0);
        v73 = v90;
        v72 = v91;
        targetInUserServantEntity = this->fields.targetInUserServantEntity;
        v74 = this->fields.targetOutUserServantEntity;
        v77 = v88;
        v76 = v89;
        v78 = v71;
        v79 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v79,
          (Il2CppObject *)this,
          Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
          0);
        if ( !v67 )
          goto LABEL_56;
        FatigueRecoveryConfirmationDialog__Setup(
          v67,
          v70,
          v78,
          targetInUserServantEntity,
          v72,
          v73,
          v74,
          v76,
          v77,
          1,
          v79,
          v80);
      }
    }
  }
  else
  {
    v94 = (System_String_o *)StringLiteral_1/*""*/;
    v95 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !Item )
      goto LABEL_56;
    v31 = EventServantFatigueListViewItem__IsMatchIndividuality_33404764(
            Item,
            (EventServantRecoveryFatigueItem_o *)obj,
            v10);
    EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v95, &v94, v31, v32);
    v33 = Item->fields.userServantEntity;
    this->fields.targetInUserServantEntity = v33;
    sub_1CE66A4(&this->fields.targetInUserServantEntity, v33);
    v34 = this->fields.fatigueRecoveryConfirmationDialog;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    fatigueRecoveryConfirmationDialog = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11776/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/, 0);
    if ( !this->fields.targetRecoveryFatigueItem )
      goto LABEL_56;
    v35 = (System_String_o *)fatigueRecoveryConfirmationDialog;
    v36 = (Il2CppObject *)EventServantRecoveryFatigueItem__get_Name(this->fields.targetRecoveryFatigueItem, 0);
    v37 = System_String__Format(v35, v36, 0);
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_11774/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0);
    v39 = this->fields.targetInUserServantEntity;
    v41 = v94;
    v40 = v95;
    v42 = v38;
    v43 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v43,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
      0);
    if ( !v34 )
      goto LABEL_56;
    FatigueRecoveryConfirmationDialog__Setup(
      v34,
      v37,
      v42,
      v39,
      v40,
      v41,
      0,
      (System_String_o *)StringLiteral_1/*""*/,
      (System_String_o *)StringLiteral_1/*""*/,
      1,
      v43,
      v80);
  }
}


void EventServantFatigueListViewManager__OnClickSelectPush(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  EventServantFatigueListViewManager___c__DisplayClass107_0_o *v5; // x19
  __int64 SelfUserGame; // x0
  __int64 v7; // x1
  __int64 naturalAligment; // x9
  EventServantFatigueListViewItem_o *Item; // x0
  EventServantFatigueListViewItem_o **p_selectItem; // x20
  int64_t v11; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v13; // q1
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  const MethodInfo *v16; // x2
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  __int64 v19; // x25
  ServantEntity_o *ServantEntity; // x26
  Il2CppObject *Master_object; // x24
  System_String_o *v22; // x21
  System_String_o *v23; // x22
  __int64 v24; // x23
  int32_t Rarity; // w27
  __int64 v26; // x27
  __int64 v27; // x27
  __int64 v28; // x26
  __int64 v29; // x27
  int32_t v30; // w0
  __int64 v31; // x8
  int32_t v32; // w25
  __int64 v33; // x25
  int32_t v34; // w0
  __int64 v35; // x25
  __int64 v36; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v37; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x8
  int32_t v39; // w20
  int32_t v40; // w0
  __int64 v41; // x20
  System_String_o *v42; // x20
  System_String_o *v43; // x22
  System_String_o *v44; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v46; // x25
  __int64 v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4DFF1F4 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&Method_EventServantFatigueListViewManager_OnClickSelectPush__);
    sub_1CE6700(&EventServantFatigueListViewObject_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&object___TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Rarity_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__);
    sub_1CE6700(&EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo);
    sub_1CE6700(&StringLiteral_12072/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_12070/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1CE6700(&StringLiteral_12071/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1CE6700(&StringLiteral_12073/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4DFF1F4 = 1;
  }
  v5 = (EventServantFatigueListViewManager___c__DisplayClass107_0_o *)sub_1CE694C(EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo);
  EventServantFatigueListViewManager___c__DisplayClass107_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_64;
  v5->fields.__4__this = this;
  SelfUserGame = sub_1CE66A4(&v5->fields, this);
  if ( !obj )
    goto LABEL_64;
  naturalAligment = EventServantFatigueListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    SelfUserGame = sub_1CE6CF4(obj);
    goto LABEL_66;
  }
  Item = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)obj, 0);
  v5->fields.selectItem = Item;
  p_selectItem = &v5->fields.selectItem;
  sub_1CE66A4(&v5->fields.selectItem, Item);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_64;
  v11 = *(_QWORD *)(SelfUserGame + 128);
  if ( v11 )
  {
    if ( !*p_selectItem )
      goto LABEL_64;
    userServantEntity = (*p_selectItem)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_64;
    v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v49.fields.fakeValue = v13;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v48 = v49;
    if ( v11 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v48, 0) )
      goto LABEL_14;
    v17 = Method_EventServantFatigueListViewManager_OnClickSelectPush__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1CE6718(Method_EventServantFatigueListViewManager_OnClickSelectPush__);
    v18 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
    SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_64;
    SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_64;
    SelfUserGame = (__int64)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                              v11,
                              (const MethodInfo_34EBA0C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !SelfUserGame )
      goto LABEL_64;
    v19 = SelfUserGame;
    ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)SelfUserGame, -1, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12073/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12072/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
    v24 = sub_1CE67A8(object___TypeInfo, 6);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v19, 0);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0);
    if ( !v24 )
LABEL_64:
      sub_1CE6958(SelfUserGame, v7);
    v26 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1CE683C(SelfUserGame, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( !*(_DWORD *)(v24 + 24) )
      goto LABEL_66;
    *(_QWORD *)(v24 + 32) = v26;
    SelfUserGame = sub_1CE66A4(v24 + 32, v26);
    if ( !ServantEntity )
      goto LABEL_64;
    SelfUserGame = (__int64)ServantEntity__getClassName(ServantEntity, 0);
    v27 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1CE683C(SelfUserGame, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( *(_DWORD *)(v24 + 24) <= 1u )
      goto LABEL_66;
    *(_QWORD *)(v24 + 40) = v27;
    sub_1CE66A4(v24 + 40, v27);
    v29 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
    v28 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v50.fields.currentCryptoKey = v29;
    *(_QWORD *)&v50.fields.fakeValue = v28;
    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v50, 0);
    v31 = *(_QWORD *)(v19 + 96);
    *(_QWORD *)&v51.fields.fakeValue = *(_QWORD *)(v19 + 104);
    v32 = v30;
    *(_QWORD *)&v51.fields.currentCryptoKey = v31;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v51, 0);
    if ( !Master_object )
      goto LABEL_64;
    SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                              (ServantLimitImageMaster_o *)Master_object,
                              v32,
                              SelfUserGame,
                              1,
                              1,
                              0);
    v33 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1CE683C(SelfUserGame, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( *(_DWORD *)(v24 + 24) <= 2u )
      goto LABEL_66;
    *(_QWORD *)(v24 + 48) = v33;
    SelfUserGame = sub_1CE66A4(v24 + 48, v33);
    if ( !*p_selectItem )
      goto LABEL_64;
    SelfUserGame = (__int64)(*p_selectItem)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_64;
    v34 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0);
    SelfUserGame = (__int64)Rarity__getRarityType(v34, 0);
    v35 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1CE683C(SelfUserGame, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( *(_DWORD *)(v24 + 24) <= 3u )
      goto LABEL_66;
    *(_QWORD *)(v24 + 56) = v35;
    SelfUserGame = sub_1CE66A4(v24 + 56, v35);
    if ( !*p_selectItem )
      goto LABEL_64;
    SelfUserGame = (__int64)(*p_selectItem)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_64;
    SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0);
    v36 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1CE683C(SelfUserGame, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( *(_DWORD *)(v24 + 24) <= 4u )
      goto LABEL_66;
    *(_QWORD *)(v24 + 64) = v36;
    SelfUserGame = sub_1CE66A4(v24 + 64, v36);
    if ( !*p_selectItem )
      goto LABEL_64;
    v37 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_selectItem)->fields.servantEntity;
    if ( !v37 )
      goto LABEL_64;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v37[1], 0);
    if ( !*p_selectItem )
      goto LABEL_64;
    v38 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_selectItem)->fields.userServantEntity;
    if ( !v38 )
      goto LABEL_64;
    v39 = SelfUserGame;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v38[6], 0);
    SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                              (ServantLimitImageMaster_o *)Master_object,
                              v39,
                              v40,
                              1,
                              1,
                              0);
    v41 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1CE683C(SelfUserGame, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
      if ( !SelfUserGame )
      {
LABEL_67:
        v47 = sub_1CE697C();
        sub_1CE6828(v47, 0);
      }
    }
    if ( *(_DWORD *)(v24 + 24) > 5u )
    {
      *(_QWORD *)(v24 + 72) = v41;
      sub_1CE66A4(v24 + 72, v41);
      v42 = System_String__Format_65164272(v23, (System_Object_array *)v24, 0);
      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12071/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12070/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v46 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v46,
        (Il2CppObject *)v5,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__,
        0);
      SelfUserGame = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        SelfUserGame = (__int64)BalanceConfig_TypeInfo;
      }
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_31919840(
          (CommonUI_o *)Instance,
          v22,
          v42,
          v43,
          v44,
          v46,
          *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 508LL),
          *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 520LL),
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
    sub_1CE6960(SelfUserGame);
  }
LABEL_14:
  v14 = Method_EventServantFatigueListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1CE6718(Method_EventServantFatigueListViewManager_OnClickSelectPush__);
  v15 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 8, 0, 0);
  EventServantFatigueListViewManager__PushRequest(this, *p_selectItem, v16);
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

  if ( (byte_4DFF1E9 & 1) == 0 )
  {
    sub_1CE6700(&Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__);
    byte_4DFF1E9 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1CE6958(v5, v6);
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

  if ( (byte_4DFF1E7 & 1) == 0 )
  {
    sub_1CE6700(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_EventServantFatigueListViewManager_EndSelectSortKind__);
    sub_1CE6700(&Method_EventServantFatigueListViewManager_OnClickSortButton__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4DFF1E7 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_EventServantFatigueListViewManager_OnClickSortButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1CE694C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1CE6958(v9, v10);
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
  struct UserServantEntity_o *userServantEntity; // x8
  EventServantFatigueListViewItem_o *v11; // x20
  __int128 v12; // q1
  Il2CppObject *Instance; // x0
  UserServantEntity_o *v14; // x20
  CommonUI_o *v15; // x21
  ServantStatusDialog_EndDelegate_o *v16; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]

  if ( (byte_4DFF1E0 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1CE6700(&Method_EventServantFatigueListViewManager_EndShowServant__);
    sub_1CE6700(&Method_EventServantFatigueListViewManager_OnLongPushListView__);
    sub_1CE6700(&EventServantFatigueListViewObject_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4DFF1E0 = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v5 = Method_EventServantFatigueListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1CE6718(Method_EventServantFatigueListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v5, v5[4]);
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
    v11 = Item;
    if ( !userServantEntity )
      goto LABEL_16;
    v12 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v18.fields.fakeValue = v12;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v17 = v18;
    this->fields.statusShowUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v17, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = v11->fields.userServantEntity;
    v15 = (CommonUI_o *)Instance;
    v16 = (ServantStatusDialog_EndDelegate_o *)sub_1CE694C(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndShowServant__,
      0);
    if ( !v15 )
LABEL_16:
      sub_1CE6958(Item, v8);
    CommonUI__OpenServantStatusDialog_31929892(v15, 0, v14, v16, 0);
  }
}


void EventServantFatigueListViewManager__OnMoveEnd(
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

  if ( (byte_4DFF1D8 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFF1D8 = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1CE6958(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0;
        sub_1CE66A4(&this->fields.CallbackFunc2, 0);
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

  if ( (byte_4DFF1F5 & 1) == 0 )
  {
    sub_1CE6700(&Method_EventServantFatigueListViewManager_EndPushRequest__);
    sub_1CE6700(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4DFF1F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_EndPushRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_1CE6958(Instance, v6);
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

  if ( (byte_4DFF1CF & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
    byte_4DFF1CF = 1;
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
                                                                  (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
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
    sub_1CE6958(ObjectList, v4);
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

  if ( (byte_4DFF1D7 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_EventServantFatigueListViewManager_OnMoveEnd__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
    sub_1CE6700(&StringLiteral_10019/*"OnMoveEnd"*/);
    byte_4DFF1D7 = 1;
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
               (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_EventServantFatigueListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      EventServantFatigueListViewObject__Init_33431580((EventServantFatigueListViewObject_o *)Item, mode, v13, 0);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_1CE6958(ObjectList, v8);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10019/*"OnMoveEnd"*/,
    delay,
    0);
}


void EventServantFatigueListViewManager__SetFilterButtonImage(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4DFF1E6 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_17675/*"btn_filter_on"*/);
    sub_1CE6700(&StringLiteral_17674/*"btn_filter"*/);
    byte_4DFF1E6 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1CE6958(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17674/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17675/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void EventServantFatigueListViewManager__SetHeaderMsg(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  UILabel_o *recoveryFatigueInfoMsgLabel; // x19
  __int64 *v4; // x8
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4DFF1D1 & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_11780/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1CE6700(&StringLiteral_11778/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1CE6700(&StringLiteral_11779/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1CE6700(&StringLiteral_11795/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/);
    byte_4DFF1D1 = 1;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11795/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/;
      goto LABEL_16;
    case 1:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11779/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_16;
    case 2:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11778/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_16;
    case 3:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11780/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_16:
      v5 = LocalizationManager__Get((System_String_o *)*v4, 0);
      if ( !recoveryFatigueInfoMsgLabel )
        sub_1CE6958(v5, v6);
      UILabel__set_text(recoveryFatigueInfoMsgLabel, v5, 0);
      break;
    default:
      return;
  }
}


void EventServantFatigueListViewManager__SetMode(
        EventServantFatigueListViewManager_o *this,
        int32_t mode,
        EventServantFatigueListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.Callback = callback;
  sub_1CE66A4(&this->fields.Callback, callback);
  EventServantFatigueListViewManager__SetMode_33415240(this, mode, v6);
}


void EventServantFatigueListViewManager__SetMode_33371120(
        EventServantFatigueListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.CallbackFunc2 = callback;
  sub_1CE66A4(&this->fields.CallbackFunc2, callback);
  EventServantFatigueListViewManager__SetMode_33415240(this, mode, v6);
}


void EventServantFatigueListViewManager__SetMode_33415240(
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
  EventServantFatigueListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4DFF1D6 & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_1CE6700(&EventServantFatigueListViewObject_TypeInfo);
    byte_4DFF1D6 = 1;
  }
  if ( !obj
    || (naturalAligment = EventServantFatigueListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    sub_1CE6958(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventServantFatigueListViewObject__Init_33430560((EventServantFatigueListViewObject_o *)obj, v7, 0);
}


void EventServantFatigueListViewManager__SetSortButtonImage(
        EventServantFatigueListViewManager_o *this,
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
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v17; // x20

  if ( (byte_4DFF1EA & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_17710/*"btn_sort_up"*/);
    sub_1CE6700(&StringLiteral_17812/*"btn_txt_up"*/);
    sub_1CE6700(&StringLiteral_17763/*"btn_txt_new"*/);
    sub_1CE6700(&StringLiteral_17753/*"btn_txt_down"*/);
    sub_1CE6700(&StringLiteral_17770/*"btn_txt_old"*/);
    sub_1CE6700(&StringLiteral_17707/*"btn_sort_down"*/);
    byte_4DFF1EA = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_42;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    ListViewSort__SetupSortLabelLayout(sort, this->fields.sortKindLabel, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_42;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17770/*"btn_txt_old"*/ : &StringLiteral_17763/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v12 = (System_String_o **)&StringLiteral_17707/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17710/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17812/*"btn_txt_up"*/ : &StringLiteral_17753/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v12 = (System_String_o **)&StringLiteral_17710/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17707/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    if ( sort->fields.isBonusKind )
    {
      v17 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(sort, this->fields.alignedBonusFilterInfos, 0, 0);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)sort, 0);
        return;
      }
LABEL_42:
      sub_1CE6958(sort, v4);
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

  if ( (byte_4DFF1D0 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_17848/*"button_push_reg"*/);
    sub_1CE6700(&StringLiteral_17849/*"button_push_unreg"*/);
    sub_1CE6700(&StringLiteral_17834/*"button_allchoice_reg"*/);
    sub_1CE6700(&StringLiteral_17837/*"button_alllock_unreg"*/);
    sub_1CE6700(&StringLiteral_17850/*"button_select_reg"*/);
    sub_1CE6700(&StringLiteral_17851/*"button_select_unreg"*/);
    sub_1CE6700(&StringLiteral_17836/*"button_alllock_reg"*/);
    sub_1CE6700(&StringLiteral_17835/*"button_allchoice_unreg"*/);
    byte_4DFF1D0 = 1;
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
  v6 = &StringLiteral_17850/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_17851/*"button_select_unreg"*/;
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
  v7 = &StringLiteral_17836/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v7 = &StringLiteral_17837/*"button_alllock_unreg"*/;
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
  v8 = &StringLiteral_17834/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v8 = &StringLiteral_17835/*"button_allchoice_unreg"*/;
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
  v9 = &StringLiteral_17848/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v9 = &StringLiteral_17849/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_1CE6958(statusTabButton, *(_QWORD *)&modeKind);
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
  ListViewSort_o *sort; // x0
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  struct ListViewSort_o *v6; // x20
  struct ListViewSort_o *v7; // x8

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
      sub_1CE66A4(&this->fields.alignedBonusFilterInfos, AlignedBonusFilter);
      v6 = this->fields.sort;
      sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                                 (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                                 0);
      if ( v6 )
      {
        v6->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
        sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
        if ( sort )
        {
          sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
          v7 = this->fields.sort;
          if ( v7 )
          {
            if ( sort )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, v7->fields.isBonusKind, 0);
              return;
            }
          }
        }
      }
    }
LABEL_10:
    sub_1CE6958(sort, setupInfo);
  }
  if ( !sort )
    goto LABEL_10;
  sort->fields.isBonusKind = 0;
  this->fields.alignedBonusFilterInfos = 0;
  sub_1CE66A4(&this->fields.alignedBonusFilterInfos, 0);
}


void EventServantFatigueListViewManager__StatusRequest(
        EventServantFatigueListViewManager_o *this,
        EventServantFatigueListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1
  System_Int64_array *v10; // x1
  System_Int64_array *v11; // x2
  bool v12; // w4
  bool v13; // w5
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4DFF1F1 & 1) == 0 )
  {
    sub_1CE6700(&Method_EventServantFatigueListViewManager_EndStatusSync__);
    sub_1CE6700(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4DFF1F1 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v15 = 0;
  choiceList = 0;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( EventServantFatigueListViewManager__GetSwapChoiceList(this, &choiceList, &v15, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1CE66A4(&this->fields.requestCallback, callback);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v14,
                         (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v11 = v15;
        v10 = choiceList;
        v13 = 1;
        v12 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1CE6958(Request_object, v9);
    }
  }
  else if ( modeKind == 1 && EventServantFatigueListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1CE66A4(&this->fields.requestCallback, callback);
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndStatusSync__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v7,
                       (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v11 = unlockList;
      v10 = lockList;
      v12 = 1;
      v13 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v10, v11, 0, v12, v13, 0);
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
  UnityEngine_Object_o *scrollView; // x20
  int64_t Time; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4DFF1CC & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFF1CC = 1;
  }
  ListViewManager__Update((ListViewManager_o *)this, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0)
    && this->fields.itemSortList
    && (this->fields.updateTime & 0x8000000000000000LL) == 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    if ( this->fields.updateTime != Time )
    {
      this->fields.updateTime = Time;
      EventServantFatigueListViewManager__UpdateDisp(this, v5);
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
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4DFF1CD & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4DFF1CD = 1;
  }
  memset(&v7, 0, sizeof(v7));
  ObjectList = (System_Collections_Generic_List_object__o *)EventServantFatigueListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( ObjectList )
  {
    v5 = this->fields.objectList;
    if ( !v5 )
      sub_1CE6958(ObjectList, v4);
    if ( v5->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v7,
        ObjectList,
        (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v7,
                (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__) )
      {
        if ( !v7.fields._current )
          sub_1CE6958(0, v6);
        EventServantFatigueListViewObject__UpdateDisp((EventServantFatigueListViewObject_o *)v7.fields._current, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v7,
        (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__);
    }
  }
}


void EventServantFatigueListViewManager__add_Callback(
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

  if ( (byte_4DFF1C4 & 1) == 0 )
  {
    sub_1CE6700(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo);
    byte_4DFF1C4 = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  p_Callback = &this->fields.Callback;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(Callback, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (EventServantFatigueListViewManager_CallbackFunc_c *)v7->klass != EventServantFatigueListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1D424D4(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventServantFatigueListViewManager_o *)sub_1CE6CF4(v7);
  EventServantFatigueListViewManager__remove_Callback(v10, v11, v12);
}


void EventServantFatigueListViewManager__add_CallbackFunc2(
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

  if ( (byte_4DFF1C6 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    byte_4DFF1C6 = 1;
  }
  CallbackFunc2 = (System_Delegate_o *)this->fields.CallbackFunc2;
  p_CallbackFunc2 = &this->fields.CallbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(CallbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1D424D4(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventServantFatigueListViewManager_o *)sub_1CE6CF4(v7);
  EventServantFatigueListViewManager__remove_CallbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_EventServantFatigueListViewObject__o *EventServantFatigueListViewManager__get_ClippingObjectList(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *v8; // x22
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 v11; // x10
  Il2CppClass **v12; // x0

  if ( (byte_4DFF1CB & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1CE6700(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
    byte_4DFF1CB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v7,
                                                                  (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        break;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
      if ( !objectList )
        break;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)EventServantFatigueListViewObject__GetItem(
                                                                  (EventServantFatigueListViewObject_o *)objectList,
                                                                  0);
      if ( !objectList )
        break;
      v4 = objectList;
      if ( LOBYTE(objectList[2].fields._items) )
      {
        objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_44937408(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)objectList,
                                                                    0);
        if ( ((unsigned __int8)objectList & 1) == 0 )
          continue;
      }
      if ( !v3 )
        break;
      items = v3->fields._items;
      v10 = Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        break;
      v11 = v3->fields._size;
      if ( (unsigned int)v11 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v8,
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        v12 = &items->obj.klass + v11;
        v3->fields._size = v11 + 1;
        v12[4] = (Il2CppClass *)v8;
        sub_1CE66A4(v12 + 4, v8);
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_18:
    sub_1CE6958(objectList, v4);
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
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 v11; // x10
  System_Collections_Generic_List_object__o *v12; // x1
  Il2CppClass **v13; // x0

  if ( (byte_4DFF1CA & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1CE6700(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFF1CA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v7,
               (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0,
                                                                  0);
      if ( ((unsigned __int8)objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v10 = Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v11 = v3->fields._size;
        v12 = objectList;
        if ( (unsigned int)v11 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)objectList,
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &items->obj.klass + v11;
          v3->fields._size = v11 + 1;
          v13[4] = (Il2CppClass *)v12;
          sub_1CE66A4(v13 + 4, v12);
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1CE6958(objectList, v4);
  }
  return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v3;
}


void EventServantFatigueListViewManager__remove_Callback(
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

  if ( (byte_4DFF1C5 & 1) == 0 )
  {
    sub_1CE6700(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo);
    byte_4DFF1C5 = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  p_Callback = &this->fields.Callback;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(Callback, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (EventServantFatigueListViewManager_CallbackFunc_c *)v7->klass != EventServantFatigueListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1D424D4(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventServantFatigueListViewManager_o *)sub_1CE6CF4(v7);
  EventServantFatigueListViewManager__add_CallbackFunc2(v10, v11, v12);
}


void EventServantFatigueListViewManager__remove_CallbackFunc2(
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

  if ( (byte_4DFF1C7 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    byte_4DFF1C7 = 1;
  }
  CallbackFunc2 = (System_Delegate_o *)this->fields.CallbackFunc2;
  p_CallbackFunc2 = &this->fields.CallbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(CallbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1D424D4(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1CE6CF4(v7);
  EventServantFatigueListViewManager__DeleteContinueData(v10);
}


void EventServantFatigueListViewManager_CallbackFunc___ctor(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1CE66A4(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1B0F06C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B0F014;
}


System_IAsyncResult_o *EventServantFatigueListViewManager_CallbackFunc__BeginInvoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = index;
  v12 = kind;
  if ( (byte_4DFF1F8 & 1) == 0 )
  {
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&EventServantFatigueListViewManager_ResultKind_TypeInfo);
    byte_4DFF1F8 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(EventServantFatigueListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v10, callback, object);
}


void EventServantFatigueListViewManager_CallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1CE66A4(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1B0F0D8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B0F090;
}


System_IAsyncResult_o *EventServantFatigueListViewManager_RequestCallbackFunc__BeginInvoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4DFF1F9 & 1) == 0 )
  {
    sub_1CE6700(&bool_TypeInfo);
    byte_4DFF1F9 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v9, callback, object);
}


void EventServantFatigueListViewManager_RequestCallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
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

  if ( (byte_4DFF1FA & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__);
    byte_4DFF1FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1CE66A4(&this->fields.__9__1, _9__1);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31920128(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_1CE6958(Instance, v6);
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
    sub_1CE6958(0, method);
  EventServantFatigueListViewManager__PushRequest(_4__this, this->fields.selectItem, 0);
}