void EventServantFatigueListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v2; // x20
  struct EventServantFatigueListViewManager_StaticFields *static_fields; // x0

  if ( (byte_4C21BD6 & 1) == 0 )
  {
    sub_1C2D490(&EventServantFatigueListViewManager_TypeInfo);
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&StringLiteral_6242/*"EventServantFatigueList"*/);
    byte_4C21BD6 = 1;
  }
  EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6242/*"EventServantFatigueList"*/;
  sub_1C2D434(EventServantFatigueListViewManager_TypeInfo->static_fields);
  SORT_SAVE_KEY = EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v2 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43600724(v2, SORT_SAVE_KEY, 3, 0, 0);
  static_fields = EventServantFatigueListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v2;
  sub_1C2D434(&static_fields->servantSortStatus);
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
  if ( (byte_4C21BBF & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C21BBF = 1;
  }
  if ( !result )
    goto LABEL_10;
  this = (EventServantFatigueListViewManager_o *)System_String__Equals_63493168(
                                                   result,
                                                   (System_String_o *)StringLiteral_22195/*"ng"*/,
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
    sub_1C2D6EC(this, result);
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
  CommonConfirmDialog_o *fatigueRecoveryConfirmationDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v6; // x19
  struct UserServantEntity_o *targetInUserServantEntity; // x8
  struct UserServantEntity_o *targetOutUserServantEntity; // x9
  CommonConfirmDialog_o *v9; // x19
  int32_t v10; // w21
  struct EventServantRecoveryFatigueItem_o *v11; // x10
  struct EventFatigueRecoveryEntity_o *v12; // x9
  __int128 v13; // q1
  int32_t v14; // w22
  struct UserServantEntity_o *v15; // x8
  __int128 v16; // q0
  CommonConfirmDialog_o *v17; // x20
  int64_t v18; // x4
  ServantRecoverySyncRequest_o *v19; // x0
  int32_t v20; // w1
  int32_t v21; // w2
  int64_t v22; // x3
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  __int128 v25; // q1
  int32_t eventId; // w20
  int32_t idx; // w21
  struct EventFatigueRecoveryEntity_o *v28; // x9
  __int128 v29; // q1
  int32_t v30; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+60h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+80h] [xbp-50h]

  if ( (byte_4C21BBE & 1) == 0 )
  {
    sub_1C2D490(&Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__);
    sub_1C2D490(&Method_NetworkManager_getRequest_ServantRecoverySyncRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C21BBE = 1;
  }
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_31;
  CommonConfirmDialog__Close(fatigueRecoveryConfirmationDialog, 0);
  if ( !isDecide )
    return;
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)NetworkManager__getRequest_object_(
                                                                 v6,
                                                                 (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_ServantRecoverySyncRequest___);
  targetInUserServantEntity = this->fields.targetInUserServantEntity;
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v9 = fatigueRecoveryConfirmationDialog;
  if ( !targetInUserServantEntity )
  {
    if ( !targetOutUserServantEntity )
      return;
    targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
    if ( targetRecoveryFatigueItem )
    {
      eventFatigueRecoveryEnt = targetRecoveryFatigueItem->fields.eventFatigueRecoveryEnt;
      if ( eventFatigueRecoveryEnt )
      {
        v25 = *(_OWORD *)&targetOutUserServantEntity->fields.id.fields.fakeValue;
        eventId = this->fields.eventId;
        idx = eventFatigueRecoveryEnt->fields.idx;
        *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&targetOutUserServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v35.fields.fakeValue = v25;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v31 = v35;
        fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                                       &v31,
                                                                       0);
        if ( v9 )
        {
          v18 = (int64_t)fatigueRecoveryConfirmationDialog;
          v19 = (ServantRecoverySyncRequest_o *)v9;
          v20 = eventId;
          v21 = idx;
          v22 = 0;
          goto LABEL_29;
        }
      }
    }
LABEL_31:
    sub_1C2D6EC(fatigueRecoveryConfirmationDialog, isDecide);
  }
  v10 = this->fields.eventId;
  v11 = this->fields.targetRecoveryFatigueItem;
  if ( !targetOutUserServantEntity )
  {
    if ( v11 )
    {
      v28 = v11->fields.eventFatigueRecoveryEnt;
      if ( v28 )
      {
        v29 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
        v30 = v28->fields.idx;
        *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v35.fields.fakeValue = v29;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = v35;
        fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                                       &v32,
                                                                       0);
        if ( v9 )
        {
          v22 = (int64_t)fatigueRecoveryConfirmationDialog;
          v19 = (ServantRecoverySyncRequest_o *)v9;
          v20 = v10;
          v21 = v30;
          v18 = 0;
          goto LABEL_29;
        }
      }
    }
    goto LABEL_31;
  }
  if ( !v11 )
    goto LABEL_31;
  v12 = v11->fields.eventFatigueRecoveryEnt;
  if ( !v12 )
    goto LABEL_31;
  v13 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
  v14 = v12->fields.idx;
  *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v35.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v34 = v35;
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                                 &v34,
                                                                 0);
  v15 = this->fields.targetOutUserServantEntity;
  if ( !v15 )
    goto LABEL_31;
  v16 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
  v17 = fatigueRecoveryConfirmationDialog;
  *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v33.fields.fakeValue = v16;
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                                 &v33,
                                                                 0);
  if ( !v9 )
    goto LABEL_31;
  v18 = (int64_t)fatigueRecoveryConfirmationDialog;
  v19 = (ServantRecoverySyncRequest_o *)v9;
  v20 = v10;
  v21 = v14;
  v22 = (int64_t)v17;
LABEL_29:
  ServantRecoverySyncRequest__beginRequest(v19, v20, v21, v22, v18, 0);
}


void EventServantFatigueListViewManager__CreateList(
        EventServantFatigueListViewManager_o *this,
        int32_t eventId,
        EventServantRecoveryFatigueItem_o *targetItem,
        System_Action_bool__UserServantEntity__o *afterCallback,
        const MethodInfo *method)
{
  EventServantFatigueListViewManager_c *v8; // x0
  struct ListViewSort_o **p_sort; // x23
  __int64 v10; // x1
  __int64 sort; // x0
  TitleInfoControl_o *titleInfo; // x8
  UnityEngine_Object_o *fatigueRecoveryConfirmationDialog; // x24
  Il2CppObject *fatigueRecoveryConfirmationDialogPrefab; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_GameObject_o *v19; // x24
  UnityEngine_Transform_o *transform; // x25
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  __int64 v24; // x2
  System_Int32_array *v25; // x23
  EventUpValSetupInfo_o *v26; // x21
  const MethodInfo *v27; // x2
  __int64 v28; // x23
  __int64 v29; // x28
  __int64 v30; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  UserServantEntity_o *v32; // x24
  __int128 v33; // q0
  int64_t v34; // x0
  int32_t v35; // w26
  int64_t v36; // x27
  EventServantFatigueListViewItem_o *v37; // x25
  const MethodInfo *v38; // x6
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x1
  struct EventServantRecoveryFatigueItem_o **p_targetRecoveryFatigueItem; // [xsp+0h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49[2]; // [xsp+30h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v56; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C21BAE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&EventServantFatigueListViewItem_TypeInfo);
    sub_1C2D490(&EventServantFatigueListViewManager_TypeInfo);
    sub_1C2D490(&EventUpValSetupInfo_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081720);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4C21BAE = 1;
  }
  v8 = EventServantFatigueListViewManager_TypeInfo;
  memset(&v49[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v8 = EventServantFatigueListViewManager_TypeInfo;
  }
  this->fields.sort = v8->static_fields->servantSortStatus;
  p_sort = &this->fields.sort;
  sub_1C2D434(&this->fields.sort);
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
  TitleInfoControl__setTitleInfo(titleInfo, 0, 1, 0, 82, 0);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnSprite_39620988((TitleInfoControl_o *)sort, 1, 0, 0, 0);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0);
  this->fields.targetInUserServantEntity = 0;
  sub_1C2D434(&this->fields.targetInUserServantEntity);
  this->fields.targetOutUserServantEntity = 0;
  sub_1C2D434(&this->fields.targetOutUserServantEntity);
  this->fields.eventId = eventId;
  this->fields.statusShowUserSvtId = -1;
  this->fields.targetRecoveryFatigueItem = targetItem;
  p_targetRecoveryFatigueItem = &this->fields.targetRecoveryFatigueItem;
  sub_1C2D434(&this->fields.targetRecoveryFatigueItem);
  this->fields.selectAfterCallback = afterCallback;
  sub_1C2D434(&this->fields.selectAfterCallback);
  this->fields.modeKind = 0;
  fatigueRecoveryConfirmationDialog = (UnityEngine_Object_o *)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = UnityEngine_Object__op_Equality(0, fatigueRecoveryConfirmationDialog, 0);
  if ( (sort & 1) != 0 )
  {
    fatigueRecoveryConfirmationDialogPrefab = (Il2CppObject *)this->fields.fatigueRecoveryConfirmationDialogPrefab;
    v50.fields.x = 0.0;
    v50.fields.y = 0.0;
    v50.fields.z = 0.0;
    v55 = UnityEngine_Quaternion__Internal_FromEulerRad(v50, 0);
    x = v55.fields.x;
    y = v55.fields.y;
    z = v55.fields.z;
    w = v55.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v51.fields.x = 0.0;
    v51.fields.y = 0.0;
    v51.fields.z = 0.0;
    v56.fields.x = x;
    v56.fields.y = y;
    v56.fields.z = z;
    v56.fields.w = w;
    sort = (__int64)UnityEngine_Object__Instantiate_object__51752724(
                      fatigueRecoveryConfirmationDialogPrefab,
                      v51,
                      v56,
                      (const MethodInfo_315AF14 *)Method_UnityEngine_Object_Instantiate_GameObject____78081720);
    if ( !sort )
      goto LABEL_62;
    v19 = (UnityEngine_GameObject_o *)sort;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)sort, 0);
    sort = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_62;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)sort, 0);
    sort = (__int64)UnityEngine_GameObject__get_transform(v19, 0);
    if ( !sort )
      goto LABEL_62;
    v52.fields.x = 0.0;
    v52.fields.y = 0.0;
    v52.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)sort, v52, 0);
    sort = (__int64)UnityEngine_GameObject__get_transform(v19, 0);
    if ( !sort )
      goto LABEL_62;
    v53.fields.x = 0.0;
    v53.fields.y = 0.0;
    v53.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)sort, v53, 0);
    sort = (__int64)UnityEngine_GameObject__get_transform(v19, 0);
    if ( !sort )
      goto LABEL_62;
    v54.fields.x = 1.0;
    v54.fields.y = 1.0;
    v54.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)sort, v54, 0);
    this->fields.fatigueRecoveryConfirmationDialog = (struct FatigueRecoveryConfirmationDialog_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                                     v19,
                                                                                                     (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___);
    sub_1C2D434(&this->fields.fatigueRecoveryConfirmationDialog);
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
  sub_1C2D434(&this->fields.seed);
LABEL_33:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0);
  if ( !scaleChangeButtonSprite )
    goto LABEL_62;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  sort = sub_1C2D538(int___TypeInfo, 1);
  if ( !sort )
    goto LABEL_62;
  v25 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
LABEL_57:
    sub_1C2D6F4(sort, v10, v24);
  *(_DWORD *)(sort + 32) = eventId;
  v26 = (EventUpValSetupInfo_o *)sub_1C2D6DC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_41515380(v26, v25, 1, 0, 0, 0);
  EventServantFatigueListViewManager__SetUpBonusFilterButton(this, v26, v27);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  sort = (__int64)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_62;
  sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0);
  if ( !sort )
    goto LABEL_62;
  v28 = sort;
  if ( (int)*(_QWORD *)(sort + 24) >= 1 )
  {
    v29 = 0;
    v30 = (unsigned int)*(_QWORD *)(sort + 24) - 1LL;
    while ( *p_targetRecoveryFatigueItem )
    {
      userServantEntity = (*p_targetRecoveryFatigueItem)->fields.userServantEntity;
      v32 = *(UserServantEntity_o **)(v28 + 32 + 8 * v29);
      if ( userServantEntity )
      {
        v33 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v49[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v49[1].fields.fakeValue = v33;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v49, -1, 0);
        v49[1] = v49[0];
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v48 = v49[1];
      v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v48, 0);
      v35 = this->fields.eventId;
      v36 = v34;
      v37 = (EventServantFatigueListViewItem_o *)sub_1C2D6DC(EventServantFatigueListViewItem_TypeInfo);
      EventServantFatigueListViewItem___ctor(v37, v32, v35, v36, v26, targetItem, v38);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v39 = *(_QWORD *)(sort + 16);
      v40 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v39 )
        break;
      v41 = *(int *)(sort + 24);
      if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v37,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = v39 + 8 * v41;
        *(_DWORD *)(sort + 24) = v41 + 1;
        *(_QWORD *)(v42 + 32) = v37;
        sort = sub_1C2D434(v42 + 32);
      }
      if ( v30 == v29 )
        goto LABEL_58;
      if ( ++v29 >= (unsigned __int64)*(unsigned int *)(v28 + 24) )
        goto LABEL_57;
    }
LABEL_62:
    sub_1C2D6EC(sort, v10);
  }
LABEL_58:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_62;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
  EventServantFatigueListViewManager__SetStatusKind(this, this->fields.modeKind, v44);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  EventServantFatigueListViewManager__SetFilterButtonImage(this, v45);
}


void EventServantFatigueListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventServantFatigueListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4C21BA8 & 1) == 0 )
  {
    sub_1C2D490(&EventServantFatigueListViewManager_TypeInfo);
    byte_4C21BA8 = 1;
  }
  v2 = EventServantFatigueListViewManager_TypeInfo;
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v2 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1C2D6EC(0, v1);
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
    sub_1C2D6EC(0, v3);
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
  EventServantFatigueListViewManager__SetMode_32174396(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_32174396(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_32174396(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_32174396(this, 2, v5);
}


void EventServantFatigueListViewManager__EndPushRequest(
        EventServantFatigueListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventServantFatigueListViewManager__ModifyList(this, 0, method);
  EventServantFatigueListViewManager__SetMode_32174396(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void EventServantFatigueListViewManager__EndSelectFilterKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C21BC4 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21BC4 = 1;
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
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_1C2D6EC(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)sort, 0, 0);
}


void EventServantFatigueListViewManager__EndSelectSortKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C21BC8 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21BC8 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v6);
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

  if ( (byte_4C21BC1 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21BC1 = 1;
  }
  EventServantFatigueListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventServantFatigueListViewManager__ModifyList(this, 0, v4);
  EventServantFatigueListViewManager__SetMode_32174396(this, 2, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v7);
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
    sub_1C2D434(p_requestCallback);
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

  if ( (byte_4C21BC2 & 1) == 0 )
  {
    sub_1C2D490(&EventServantFatigueListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C21BC2 = 1;
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
                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v14, 0) == svtId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1C2D6EC(itemList, *(_QWORD *)&svtId);
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
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  System_String_o *v14; // x0
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  int recoveryRate; // w23
  int64_t Time; // x8
  float v19; // s0
  __int64 v20; // x10
  int64_t v21; // x21
  System_String_o *v22; // x20
  System_String_o *v23; // x0

  if ( (byte_4C21BBC & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11560/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/);
    sub_1C2D490(&StringLiteral_11572/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/);
    sub_1C2D490(&StringLiteral_11660/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/);
    byte_4C21BBC = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(RestTime4, 0);
  if ( IsNullOrEmpty )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    *beforeTime = LocalizationManager__Get((System_String_o *)StringLiteral_11572/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0);
    sub_1C2D434(beforeTime);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11560/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0);
    goto LABEL_23;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    sub_1C2D6EC(IsNullOrEmpty, v13);
  eventFatigueRecoveryEnt = targetRecoveryFatigueItem->fields.eventFatigueRecoveryEnt;
  if ( !isMatch )
  {
    if ( eventFatigueRecoveryEnt )
    {
      recoveryRate = eventFatigueRecoveryEnt->fields.recoveryRate;
      goto LABEL_16;
    }
LABEL_15:
    recoveryRate = 1000;
    goto LABEL_16;
  }
  if ( !eventFatigueRecoveryEnt )
    goto LABEL_15;
  recoveryRate = eventFatigueRecoveryEnt->fields.individualityRate;
LABEL_16:
  *beforeTime = RestTime4;
  sub_1C2D434(beforeTime);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v19 = (float)(recoveryFatigueTime - Time) / (float)((float)recoveryRate / 1000.0);
  v20 = (__int64)v19;
  if ( v19 == INFINITY )
    v20 = 0x8000000000000000LL;
  v21 = v20 + Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__GetRestTime4(v21, -1, 0);
LABEL_23:
  *afterTime = v14;
  sub_1C2D434(afterTime);
  if ( isMatch )
  {
    v22 = *afterTime;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11660/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0);
    *afterTime = System_String__Concat_63457864(v22, v23, 0);
    sub_1C2D434(afterTime);
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
  __int64 v7; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x21
  System_String_o *v10; // x0

  if ( (byte_4C21BBB & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&StringLiteral_11661/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/);
    byte_4C21BBB = 1;
  }
  v4 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0);
  if ( !array )
    goto LABEL_16;
  max_length = array->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C2D6F4(appended, v6, v7);
      if ( !v4 )
        break;
      appended = System_Text_StringBuilder__Append_63542928(v4, array->m_Items[v9++], 0);
      if ( (int)v9 < SLODWORD(array->max_length) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11661/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/, 0);
        appended = System_Text_StringBuilder__Append_63542928(v4, v10, 0);
      }
      LODWORD(max_length) = array->max_length;
      if ( (__int64)v9 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_16:
    sub_1C2D6EC(appended, v6);
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

  if ( (byte_4C21BB5 & 1) == 0 )
  {
    sub_1C2D490(&EventServantFatigueListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C21BB5 = 1;
  }
  result = (EventServantFatigueListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventServantFatigueListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  System_String_o *v14; // x21
  System_String_o *v15; // x0
  System_String_o **v16; // x0
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  int individualityRate; // w23
  int64_t Time; // x8
  float v21; // s0
  __int64 v22; // x10
  int64_t v23; // x22
  System_String_o *v24; // x20
  System_String_o *v25; // x0

  if ( (byte_4C21BBD & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11560/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/);
    sub_1C2D490(&StringLiteral_11572/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/);
    sub_1C2D490(&StringLiteral_11660/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/);
    byte_4C21BBD = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(RestTime4, 0);
  if ( IsNullOrEmpty )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    *beforeTime = LocalizationManager__Get((System_String_o *)StringLiteral_11572/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0);
    sub_1C2D434(beforeTime);
    if ( isMatch )
    {
      v14 = *beforeTime;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11660/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0);
      *beforeTime = System_String__Concat_63457864(v14, v15, 0);
      sub_1C2D434(beforeTime);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    *afterTime = LocalizationManager__Get((System_String_o *)StringLiteral_11560/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0);
    v16 = afterTime;
LABEL_32:
    sub_1C2D434(v16);
    return;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    sub_1C2D6EC(IsNullOrEmpty, v13);
  eventFatigueRecoveryEnt = targetRecoveryFatigueItem->fields.eventFatigueRecoveryEnt;
  if ( isMatch )
  {
    if ( eventFatigueRecoveryEnt )
    {
      individualityRate = eventFatigueRecoveryEnt->fields.individualityRate;
      goto LABEL_22;
    }
  }
  else if ( eventFatigueRecoveryEnt )
  {
    individualityRate = eventFatigueRecoveryEnt->fields.recoveryRate;
    goto LABEL_22;
  }
  individualityRate = 1000;
LABEL_22:
  *beforeTime = RestTime4;
  sub_1C2D434(beforeTime);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v21 = (float)((float)individualityRate / 1000.0) * (float)(recoveryFatigueTime - Time);
  v22 = (__int64)v21;
  if ( v21 == INFINITY )
    v22 = 0x8000000000000000LL;
  v23 = v22 + Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  *afterTime = LocalizationManager__GetRestTime4(v23, -1, 0);
  sub_1C2D434(afterTime);
  if ( isMatch )
  {
    v24 = *beforeTime;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11660/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0);
    *beforeTime = System_String__Concat_63457864(v24, v25, 0);
    v16 = beforeTime;
    goto LABEL_32;
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
  System_Int64_array **v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-80h]

  if ( (byte_4C21BCC & 1) == 0 )
  {
    sub_1C2D490(&EventServantFatigueListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C21BCC = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v31.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v30 = v31;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v30, 0);
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
              *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v24 + 192) + 112LL));
            goto LABEL_28;
          }
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v20 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v31.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v29 = v31;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v29, 0);
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
    sub_1C2D6EC(itemList, v9);
  v26 = v8->fields._size + v7->fields._size;
  if ( v26 < 1 )
  {
    *choiceList = 0;
    sub_1C2D434(choiceList);
    v27 = unchoiceList;
    *unchoiceList = 0;
  }
  else
  {
    *choiceList = System_Collections_Generic_List_long___ToArray(
                    v7,
                    (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D434(choiceList);
    *unchoiceList = System_Collections_Generic_List_long___ToArray(
                      v8,
                      (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    v27 = unchoiceList;
  }
  sub_1C2D434(v27);
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
  System_Int64_array **v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-80h]

  if ( (byte_4C21BCB & 1) == 0 )
  {
    sub_1C2D490(&EventServantFatigueListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C21BCB = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v31.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v30 = v31;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v30, 0);
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
              *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v24 + 192) + 112LL));
            goto LABEL_28;
          }
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v20 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v31.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v29 = v31;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v29, 0);
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
    sub_1C2D6EC(itemList, v9);
  v26 = v8->fields._size + v7->fields._size;
  if ( v26 < 1 )
  {
    *lockList = 0;
    sub_1C2D434(lockList);
    v27 = unlockList;
    *unlockList = 0;
  }
  else
  {
    *lockList = System_Collections_Generic_List_long___ToArray(
                  v7,
                  (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D434(lockList);
    *unlockList = System_Collections_Generic_List_long___ToArray(
                    v8,
                    (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    v27 = unlockList;
  }
  sub_1C2D434(v27);
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

  if ( (byte_4C21BA9 & 1) == 0 )
  {
    sub_1C2D490(&EventServantFatigueListViewManager_TypeInfo);
    byte_4C21BA9 = 1;
  }
  v2 = EventServantFatigueListViewManager_TypeInfo;
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v2 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1C2D6EC(0, v1);
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
  struct EventServantRecoveryFatigueItem_o *v8; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  struct System_Int32_array *targetIndividuality; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x25
  struct EventServantRecoveryFatigueItem_o *v13; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v15; // w20
  Il2CppObject *v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  struct EventServantRecoveryFatigueItem_o *v19; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v20; // x8
  int32_t v21; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4C21BBA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21BBA = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    goto LABEL_26;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)targetRecoveryFatigueItem->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0);
  if ( !v6 )
    goto LABEL_26;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                v6,
                                &entity,
                                (int32_t)Instance,
                                (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v8 = this->fields.targetRecoveryFatigueItem;
    if ( !v8 )
      goto LABEL_26;
    eventFatigueRecoveryEnt = v8->fields.eventFatigueRecoveryEnt;
    if ( !eventFatigueRecoveryEnt )
      goto LABEL_26;
    targetIndividuality = eventFatigueRecoveryEnt->fields.targetIndividuality;
    if ( !targetIndividuality )
      goto LABEL_26;
    max_length = targetIndividuality->max_length;
    if ( (int)max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)max_length )
          sub_1C2D6F4(Instance, v4, v7);
        v13 = this->fields.targetRecoveryFatigueItem;
        if ( !v13 )
          break;
        userServantEntity = v13->fields.userServantEntity;
        if ( !userServantEntity )
          break;
        v15 = targetIndividuality->m_Items[v12];
        v16 = entity;
        v18 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v17 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v24.fields.currentCryptoKey = v18;
        *(_QWORD *)&v24.fields.fakeValue = v17;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v24, 0);
        v19 = this->fields.targetRecoveryFatigueItem;
        if ( !v19 )
          break;
        v20 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v19->fields.userServantEntity;
        if ( !v20 )
          break;
        v21 = (int)Instance;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v20[8], 0);
        if ( !v16 )
          break;
        Instance = (DataManager_o *)ServantEntity__IsIndividuality(
                                      (ServantEntity_o *)v16,
                                      v21,
                                      (int32_t)Instance,
                                      v15,
                                      0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          LODWORD(max_length) = targetIndividuality->max_length;
          if ( (__int64)++v12 < (int)max_length )
            continue;
        }
        return (unsigned __int8)Instance & 1;
      }
LABEL_26:
      sub_1C2D6EC(Instance, v4);
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

  if ( (byte_4C21BB2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&EventServantFatigueListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21BB2 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_37;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_37;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v23.fields._list = *(_OWORD *)&v22.fields.currentCryptoKey;
      v23.fields._current = (Il2CppObject *)v22.fields.fakeValue;
      while ( 1 )
      {
        v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v23,
               (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v8 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v23,
            (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
              sub_1C2D6EC(v8, v9);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_1C2D6EC(v8, v9);
            v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v22.fields.fakeValue = v13;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v21 = v22;
            v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v21, 0);
            v15 = Entity[2];
            *(Il2CppObject *)&v20.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v20.fields.fakeValue = v15;
            if ( v14 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v20, 0) )
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
          sub_1C2D6EC(v8, v9);
LABEL_26:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
        {
          v19 = current->fields.viewObject;
          if ( !v19 )
            sub_1C2D6EC(0, v18);
          ((void (__fastcall *)(struct ListViewObject_o *, EventServantFatigueListViewItem_o *, const MethodInfo *))v19->klass->vtable._5_SetItem.methodPtr)(
            v19,
            current,
            v19->klass->vtable._5_SetItem.method);
        }
      }
    }
LABEL_37:
    sub_1C2D6EC(Instance, v5);
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
  __int64 v13; // x2
  int64_t v14; // x22
  int32_t v15; // w23
  int64_t v16; // x24
  __int64 naturalAligment; // x10
  __int64 v18; // x8
  __int128 v19; // q0
  __int64 v20; // x8
  __int128 v21; // q0
  int64_t v22; // x0
  const MethodInfo *v23; // x4
  bool isIconSizeChangea; // [xsp+Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+70h] [xbp-80h]

  if ( (byte_4C21BB4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&EventServantFatigueListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21BB4 = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_33;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
      *(_OWORD *)&v28.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v27 = v28;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v27, 0);
      if ( size >= 1 )
      {
        v14 = sort;
        v15 = 0;
        while ( 1 )
        {
          sort = (int64_t)this->fields.itemList;
          if ( !sort )
            goto LABEL_33;
          sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)sort,
                            v15,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !sort )
            goto LABEL_33;
          v16 = sort;
          naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)naturalAligment
            || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * naturalAligment - 8) != EventServantFatigueListViewItem_TypeInfo )
          {
            goto LABEL_33;
          }
          v18 = *(_QWORD *)(sort + 128);
          if ( v18 )
          {
            v19 = *(_OWORD *)(v18 + 32);
            *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(v18 + 16);
            *(_OWORD *)&v28.fields.fakeValue = v19;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v26 = v28;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v26, 0);
            if ( sort == v14 )
              break;
          }
          if ( size == ++v15 )
            goto LABEL_29;
        }
        v20 = *(_QWORD *)(v16 + 128);
        if ( !v20 )
          break;
        v21 = *(_OWORD *)(v20 + 32);
        *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
        *(_OWORD *)&v28.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v28;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v25, 0);
        EventServantFatigueListViewManager__ModifyLockItem(this, v22, 1, isIconSizeChangea, v23);
      }
LABEL_29:
      if ( ++v10 == (_DWORD)v7 )
        return;
      if ( v10 >= *(_DWORD *)(v8 + 24) )
        sub_1C2D6F4(sort, isIconSizeChange, v13);
    }
LABEL_33:
    sub_1C2D6EC(sort, isIconSizeChange);
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
  __int64 v12; // x0
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
  UnityEngine_Object_o *viewObject; // x23
  __int64 v24; // x1
  struct ListViewObject_o *v25; // x0
  __int64 v26; // x1
  ListViewObject_o *v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_4C21BB3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&EventServantFatigueListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21BB3 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0);
    if ( usrSvtId < 1 )
    {
      Entity = 0;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_45;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_45;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v31,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v32.fields._list = *(_OWORD *)&v31.fields.currentCryptoKey;
      v32.fields._current = (Il2CppObject *)v31.fields.fakeValue;
      v11 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v32,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v12 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v32,
            (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v32.fields._current
          && (naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment,
              v32.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (EventServantFatigueListViewItem_c *)v32.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = (EventServantFatigueListViewItem_o *)v32.fields._current;
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
          sub_1C2D6EC(v12, v13);
        userServantEntity = current->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1C2D6EC(v12, v13);
        v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v31.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v30 = v31;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v30, 0);
        v19 = Entity[2];
        v20 = v18;
        *(Il2CppObject *)&v29.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v29.fields.fakeValue = v19;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v29, 0);
        if ( v20 == v12 )
        {
          current->fields.userServantEntity = (struct UserServantEntity_o *)Entity;
          v12 = sub_1C2D434(&current->fields.userServantEntity);
        }
LABEL_26:
        if ( v11 )
        {
          if ( !current )
            sub_1C2D6EC(v12, v13);
          EventServantFatigueListViewItem__ModifyLockItem(current, v13);
          EventServantFatigueListViewItem__ModifyChoiceItem(current, v21);
          EventServantFatigueListViewItem__ModifyPushItem(current, v22);
        }
        else if ( !current )
        {
          sub_1C2D6EC(v12, v13);
        }
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
        {
          v25 = current->fields.viewObject;
          if ( !v25 )
            sub_1C2D6EC(0, v24);
          ((void (__fastcall *)(struct ListViewObject_o *, EventServantFatigueListViewItem_o *, const MethodInfo *))v25->klass->vtable._5_SetItem.methodPtr)(
            v25,
            current,
            v25->klass->vtable._5_SetItem.method);
          if ( isIconSizeChange )
          {
            v27 = current->fields.viewObject;
            if ( !v27 )
              sub_1C2D6EC(0, v26);
            ListViewObject__SetItemSeed(v27, (ListViewItem_o *)current, this->fields.seed, 0);
          }
        }
      }
    }
LABEL_45:
    sub_1C2D6EC(Instance, v8);
  }
}


void EventServantFatigueListViewManager__OnClickBack(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x20

  if ( (byte_4C21BD2 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventServantFatigueListViewManager_OnClickBack__);
    byte_4C21BD2 = 1;
  }
  v3 = Method_EventServantFatigueListViewManager_OnClickBack__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_EventServantFatigueListViewManager_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0;
    sub_1C2D434(&this->fields.selectAfterCallback);
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

  if ( (byte_4C21BC5 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__);
    byte_4C21BC5 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C2D6EC(0, v5);
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
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4C21BCF & 1) == 0 )
  {
    sub_1C2D490(&Method_EventServantFatigueListViewManager_EndClickTabChoice__);
    sub_1C2D490(&Method_EventServantFatigueListViewManager_OnClickChoiceTab__);
    sub_1C2D490(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4C21BCF = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventServantFatigueListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1C2D6DC(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabChoice__,
        v7);
      EventServantFatigueListViewManager__StatusRequest(this, v6, v8);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 2, v5);
      EventServantFatigueListViewManager__RefreshListDisp(this, v9);
      EventServantFatigueListViewManager__ModifyList(this, 0, v10);
      EventServantFatigueListViewManager__SetMode_32174396(this, 2, v11);
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
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4C21BCE & 1) == 0 )
  {
    sub_1C2D490(&Method_EventServantFatigueListViewManager_EndClickTabLock__);
    sub_1C2D490(&Method_EventServantFatigueListViewManager_OnClickCollectLock__);
    sub_1C2D490(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4C21BCE = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventServantFatigueListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1C2D6DC(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabLock__,
        v7);
      EventServantFatigueListViewManager__StatusRequest(this, v6, v8);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 1, v5);
      EventServantFatigueListViewManager__RefreshListDisp(this, v9);
      EventServantFatigueListViewManager__ModifyList(this, 0, v10);
      EventServantFatigueListViewManager__SetMode_32174396(this, 2, v11);
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

  if ( (byte_4C21BC3 & 1) == 0 )
  {
    sub_1C2D490(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_EventServantFatigueListViewManager_EndSelectFilterKind__);
    sub_1C2D490(&Method_EventServantFatigueListViewManager_OnClickFilterKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21BC3 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventServantFatigueListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C2D6DC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C2D6EC(v9, v10);
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
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4C21BCD & 1) == 0 )
  {
    sub_1C2D490(&Method_EventServantFatigueListViewManager_EndClickTabStatus__);
    sub_1C2D490(&Method_EventServantFatigueListViewManager_OnClickNormalStatus__);
    sub_1C2D490(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4C21BCD = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventServantFatigueListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1C2D6DC(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndClickTabStatus__,
      v6);
    EventServantFatigueListViewManager__StatusRequest(this, v5, v7);
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
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4C21BD0 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventServantFatigueListViewManager_EndClickTabPush__);
    sub_1C2D490(&Method_EventServantFatigueListViewManager_OnClickPushTab__);
    sub_1C2D490(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4C21BD0 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_EventServantFatigueListViewManager_OnClickPushTab__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickPushTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventServantFatigueListViewManager_OnClickPushTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1C2D6DC(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabPush__,
        v7);
      EventServantFatigueListViewManager__StatusRequest(this, v6, v8);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 3, v5);
      EventServantFatigueListViewManager__RefreshListDisp(this, v9);
      EventServantFatigueListViewManager__ModifyList(this, 0, v10);
      EventServantFatigueListViewManager__SetMode_32174396(this, 2, v11);
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

  if ( (byte_4C21BD3 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventServantFatigueListViewManager_OnClickScaleChange__);
    byte_4C21BD3 = 1;
  }
  v3 = Method_EventServantFatigueListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_EventServantFatigueListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
    sub_1C2D434(p_seed);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v12 = this->fields.scaleType,
        sort->fields.iconScaleKind = v12,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v12, 0),
        !scaleChangeButtonSprite) )
  {
    sub_1C2D6EC(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  EventServantFatigueListViewManager__ModifyList(this, 1, v14);
  EventServantFatigueListViewManager__SetMode_32174396(this, 2, v15);
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
  bool IsMatchIndividuality_32161616; // w0
  const MethodInfo *v18; // x5
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  FatigueRecoveryConfirmationDialog_o *v20; // x20
  struct EventServantRecoveryFatigueItem_o *v21; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  System_String_o *v23; // x21
  System_String_o *v24; // x0
  UserServantEntity_o *targetOutUserServantEntity; // x22
  System_String_o *v26; // x23
  System_String_o *outAfterTime; // x27
  System_String_o *v28; // x24
  CommonConfirmDialog_ClickDelegate_o *func; // x25
  bool v30; // w0
  const MethodInfo *v31; // x5
  FatigueRecoveryConfirmationDialog_o *v32; // x20
  struct EventServantRecoveryFatigueItem_o *v33; // x8
  struct EventFatigueRecoveryEntity_o *v34; // x8
  System_String_o *v35; // x21
  System_String_o *v36; // x0
  UserServantEntity_o *v37; // x22
  System_String_o *v38; // x23
  System_String_o *v39; // x24
  System_String_o *v40; // x25
  CommonConfirmDialog_ClickDelegate_o *v41; // x26
  struct EventServantRecoveryFatigueItem_o *v42; // x8
  struct UserServantEntity_o *v43; // x8
  __int128 v44; // q0
  struct UserServantEntity_o *v45; // x8
  __int128 v46; // q0
  const MethodInfo *v47; // x2
  bool v48; // w0
  const MethodInfo *v49; // x5
  struct EventServantRecoveryFatigueItem_o *v50; // x8
  struct UserServantEntity_o *v51; // x8
  UserEventServantFatigueMaster_o *v52; // x23
  int32_t eventId; // w24
  __int64 v54; // x25
  __int64 v55; // x26
  bool FatigueInfo; // w0
  const MethodInfo *v57; // x1
  int64_t v58; // x23
  int64_t v59; // x23
  bool IsMatchIndividuality; // w0
  const MethodInfo *v61; // x5
  struct EventServantRecoveryFatigueItem_o *v62; // x8
  FatigueRecoveryConfirmationDialog_o *v63; // x20
  struct EventServantRecoveryFatigueItem_o *v64; // x8
  struct EventFatigueRecoveryEntity_o *v65; // x8
  System_String_o *v66; // x21
  System_String_o *v67; // x0
  System_String_o *v68; // x22
  System_String_o *v69; // x23
  UserServantEntity_o *v70; // x24
  UserServantEntity_o *targetInUserServantEntity; // x26
  System_String_o *v72; // x25
  System_String_o *v73; // x29
  System_String_o *v74; // x27
  CommonConfirmDialog_ClickDelegate_o *v75; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+20h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+40h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+60h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+80h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+A0h] [xbp-D0h]
  bool isRecover; // [xsp+C4h] [xbp-ACh] BYREF
  int64_t recoverAt; // [xsp+C8h] [xbp-A8h] BYREF
  System_String_o *v83; // [xsp+D0h] [xbp-A0h] BYREF
  System_String_o *v84; // [xsp+D8h] [xbp-98h] BYREF
  System_String_o *v85; // [xsp+E0h] [xbp-90h] BYREF
  System_String_o *v86; // [xsp+E8h] [xbp-88h] BYREF
  System_String_o *afterTime; // [xsp+F0h] [xbp-80h] BYREF
  System_String_o *beforeTime; // [xsp+F8h] [xbp-78h] BYREF
  System_String_o *v89; // [xsp+100h] [xbp-70h] BYREF
  System_String_o *v90; // [xsp+108h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  v3 = obj;
  if ( (byte_4C21BB9 & 1) == 0 )
  {
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C2D490(&Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__);
    sub_1C2D490(&Method_EventServantFatigueListViewManager_OnClickSelectObject__);
    sub_1C2D490(&EventServantFatigueListViewObject_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_11655/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/);
    sub_1C2D490(&StringLiteral_11647/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/);
    sub_1C2D490(&StringLiteral_11645/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/);
    sub_1C2D490(&StringLiteral_11575/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_11573/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/);
    byte_4C21BB9 = 1;
  }
  v89 = 0;
  v90 = 0;
  afterTime = 0;
  beforeTime = 0;
  v85 = 0;
  v86 = 0;
  v83 = 0;
  v84 = 0;
  recoverAt = 0;
  isRecover = 0;
  fatigueRecoveryConfirmationDialog = (__int64)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_59;
  fatigueRecoveryConfirmationDialog = (__int64)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)fatigueRecoveryConfirmationDialog,
                                                 0);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fatigueRecoveryConfirmationDialog, 1, 0);
  v6 = Method_EventServantFatigueListViewManager_OnClickSelectObject__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectObject__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C2D4A8(Method_EventServantFatigueListViewManager_OnClickSelectObject__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  if ( !v3 )
    goto LABEL_59;
  naturalAligment = EventServantFatigueListViewObject_TypeInfo->_2.naturalAligment;
  if ( v3->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_59;
  if ( (EventServantFatigueListViewObject_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] != EventServantFatigueListViewObject_TypeInfo )
    goto LABEL_59;
  Item = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)v3, (const MethodInfo *)obj);
  this->fields.targetInUserServantEntity = 0;
  sub_1C2D434(&this->fields.targetInUserServantEntity);
  this->fields.targetOutUserServantEntity = 0;
  sub_1C2D434(&this->fields.targetOutUserServantEntity);
  fatigueRecoveryConfirmationDialog = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_59;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fatigueRecoveryConfirmationDialog,
    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  fatigueRecoveryConfirmationDialog = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_59;
  fatigueRecoveryConfirmationDialog = (__int64)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  obj = (ListViewObject_o *)this->fields.targetRecoveryFatigueItem;
  if ( !obj )
    goto LABEL_59;
  v11 = *(_QWORD *)&obj->fields.basePosition.fields.z;
  if ( v11 )
  {
    v12 = *(_OWORD *)(v11 + 32);
    *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
    *(_OWORD *)&v80.fields.fakeValue = v12;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v79 = v80;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v79, 0);
    if ( !Item )
      goto LABEL_59;
    userServantEntity = Item->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_59;
    v14 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    v15 = fatigueRecoveryConfirmationDialog;
    *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v78.fields.fakeValue = v14;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v78, 0);
    if ( v15 == fatigueRecoveryConfirmationDialog )
    {
      afterTime = (System_String_o *)StringLiteral_1/*""*/;
      beforeTime = (System_String_o *)StringLiteral_1/*""*/;
      IsMatchIndividuality_32161616 = EventServantFatigueListViewItem__IsMatchIndividuality_32161616(
                                        Item,
                                        this->fields.targetRecoveryFatigueItem,
                                        v16);
      EventServantFatigueListViewManager__GetOutRecoveryTime(
        this,
        Item->fields.fatigueTime,
        &beforeTime,
        &afterTime,
        IsMatchIndividuality_32161616,
        v18);
      targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
      if ( targetRecoveryFatigueItem )
      {
        this->fields.targetOutUserServantEntity = targetRecoveryFatigueItem->fields.userServantEntity;
        sub_1C2D434(&this->fields.targetOutUserServantEntity);
        v20 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        fatigueRecoveryConfirmationDialog = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11655/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/, 0);
        v21 = this->fields.targetRecoveryFatigueItem;
        if ( v21 )
        {
          eventFatigueRecoveryEnt = v21->fields.eventFatigueRecoveryEnt;
          if ( eventFatigueRecoveryEnt )
          {
            v23 = System_String__Format(
                    (System_String_o *)fatigueRecoveryConfirmationDialog,
                    (Il2CppObject *)eventFatigueRecoveryEnt->fields.name,
                    0);
            v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11645/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0);
            targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
            outAfterTime = afterTime;
            v26 = beforeTime;
            v28 = v24;
            func = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
            CommonConfirmDialog_ClickDelegate___ctor(
              func,
              (Il2CppObject *)this,
              Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
              0);
            if ( v20 )
            {
              FatigueRecoveryConfirmationDialog__OpenDecideDlg(
                v20,
                v23,
                v28,
                0,
                (System_String_o *)StringLiteral_1/*""*/,
                (System_String_o *)StringLiteral_1/*""*/,
                targetOutUserServantEntity,
                v26,
                outAfterTime,
                func,
                0);
              return;
            }
          }
        }
      }
LABEL_59:
      sub_1C2D6EC(fatigueRecoveryConfirmationDialog, obj);
    }
    v42 = this->fields.targetRecoveryFatigueItem;
    if ( !v42 )
      goto LABEL_59;
    v43 = v42->fields.userServantEntity;
    if ( v43 )
    {
      v44 = *(_OWORD *)&v43->fields.id.fields.fakeValue;
      *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&v43->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v80.fields.fakeValue = v44;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v77 = v80;
      fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v77, 0);
      v45 = Item->fields.userServantEntity;
      if ( !v45 )
        goto LABEL_59;
      v46 = *(_OWORD *)&v45->fields.id.fields.fakeValue;
      *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)&v45->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v76.fields.fakeValue = v46;
      if ( fatigueRecoveryConfirmationDialog != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                  &v76,
                                                  0) )
      {
        v85 = (System_String_o *)StringLiteral_1/*""*/;
        v86 = (System_String_o *)StringLiteral_1/*""*/;
        v48 = EventServantFatigueListViewItem__IsMatchIndividuality_32161616(
                Item,
                this->fields.targetRecoveryFatigueItem,
                v47);
        EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v86, &v85, v48, v49);
        v83 = (System_String_o *)StringLiteral_1/*""*/;
        v84 = (System_String_o *)StringLiteral_1/*""*/;
        fatigueRecoveryConfirmationDialog = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !fatigueRecoveryConfirmationDialog )
          goto LABEL_59;
        fatigueRecoveryConfirmationDialog = (__int64)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        v50 = this->fields.targetRecoveryFatigueItem;
        if ( !v50 )
          goto LABEL_59;
        v51 = v50->fields.userServantEntity;
        if ( !v51 )
          goto LABEL_59;
        v52 = (UserEventServantFatigueMaster_o *)fatigueRecoveryConfirmationDialog;
        eventId = this->fields.eventId;
        v55 = *(_QWORD *)&v51->fields.svtId.fields.currentCryptoKey;
        v54 = *(_QWORD *)&v51->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v91.fields.currentCryptoKey = v55;
        *(_QWORD *)&v91.fields.fakeValue = v54;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v91, 0);
        if ( !v52 )
          goto LABEL_59;
        FatigueInfo = UserEventServantFatigueMaster__GetFatigueInfo(
                        v52,
                        &recoverAt,
                        &isRecover,
                        eventId,
                        fatigueRecoveryConfirmationDialog,
                        0);
        v58 = 0;
        if ( FatigueInfo )
        {
          v59 = recoverAt;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( v59 <= NetworkManager__getTime(0) )
            v58 = 0;
          else
            v58 = recoverAt;
        }
        IsMatchIndividuality = EventServantFatigueListViewManager__IsMatchIndividuality(this, v57);
        EventServantFatigueListViewManager__GetOutRecoveryTime(this, v58, &v84, &v83, IsMatchIndividuality, v61);
        this->fields.targetInUserServantEntity = Item->fields.userServantEntity;
        fatigueRecoveryConfirmationDialog = sub_1C2D434(&this->fields.targetInUserServantEntity);
        v62 = this->fields.targetRecoveryFatigueItem;
        if ( !v62 )
          goto LABEL_59;
        this->fields.targetOutUserServantEntity = v62->fields.userServantEntity;
        sub_1C2D434(&this->fields.targetOutUserServantEntity);
        v63 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        fatigueRecoveryConfirmationDialog = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11575/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/, 0);
        v64 = this->fields.targetRecoveryFatigueItem;
        if ( !v64 )
          goto LABEL_59;
        v65 = v64->fields.eventFatigueRecoveryEnt;
        if ( !v65 )
          goto LABEL_59;
        v66 = System_String__Format(
                (System_String_o *)fatigueRecoveryConfirmationDialog,
                (Il2CppObject *)v65->fields.name,
                0);
        v67 = LocalizationManager__Get((System_String_o *)StringLiteral_11573/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/, 0);
        v69 = v85;
        v68 = v86;
        targetInUserServantEntity = this->fields.targetInUserServantEntity;
        v70 = this->fields.targetOutUserServantEntity;
        v73 = v83;
        v72 = v84;
        v74 = v67;
        v75 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v75,
          (Il2CppObject *)this,
          Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
          0);
        if ( !v63 )
          goto LABEL_59;
        FatigueRecoveryConfirmationDialog__OpenDecideDlg(
          v63,
          v66,
          v74,
          targetInUserServantEntity,
          v68,
          v69,
          v70,
          v72,
          v73,
          v75,
          0);
      }
    }
  }
  else
  {
    v89 = (System_String_o *)StringLiteral_1/*""*/;
    v90 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !Item )
      goto LABEL_59;
    v30 = EventServantFatigueListViewItem__IsMatchIndividuality_32161616(
            Item,
            (EventServantRecoveryFatigueItem_o *)obj,
            v10);
    EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v90, &v89, v30, v31);
    this->fields.targetInUserServantEntity = Item->fields.userServantEntity;
    sub_1C2D434(&this->fields.targetInUserServantEntity);
    v32 = this->fields.fatigueRecoveryConfirmationDialog;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    fatigueRecoveryConfirmationDialog = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11647/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/, 0);
    v33 = this->fields.targetRecoveryFatigueItem;
    if ( !v33 )
      goto LABEL_59;
    v34 = v33->fields.eventFatigueRecoveryEnt;
    if ( !v34 )
      goto LABEL_59;
    v35 = System_String__Format(
            (System_String_o *)fatigueRecoveryConfirmationDialog,
            (Il2CppObject *)v34->fields.name,
            0);
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11645/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0);
    v37 = this->fields.targetInUserServantEntity;
    v39 = v89;
    v38 = v90;
    v40 = v36;
    v41 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v41,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
      0);
    if ( !v32 )
      goto LABEL_59;
    FatigueRecoveryConfirmationDialog__OpenDecideDlg(
      v32,
      v35,
      v40,
      v37,
      v38,
      v39,
      0,
      (System_String_o *)StringLiteral_1/*""*/,
      (System_String_o *)StringLiteral_1/*""*/,
      v41,
      0);
  }
}


void EventServantFatigueListViewManager__OnClickSelectPush(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x19
  __int64 SelfUserGame; // x0
  __int64 v7; // x1
  __int64 naturalAligment; // x9
  EventServantFatigueListViewItem_o **p_monitor; // x20
  int64_t v10; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v12; // q1
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  Il2CppObject *Entity; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v22; // x25
  System_String_o *v23; // x21
  System_String_o *v24; // x22
  __int64 v25; // x23
  int32_t Rarity; // w26
  __int64 v27; // x2
  __int64 v28; // x26
  __int64 v29; // x26
  int32_t v30; // w0
  __int64 v31; // x24
  int32_t v32; // w0
  __int64 v33; // x24
  __int64 v34; // x24
  EventServantFatigueListViewItem_o *v35; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v36; // x9
  ServantEntity_o *servantEntity; // x20
  __int64 v38; // x20
  System_String_o *v39; // x20
  System_String_o *v40; // x22
  System_String_o *v41; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v43; // x25
  __int64 v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4C21BD4 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_EventServantFatigueListViewManager_OnClickSelectPush__);
    sub_1C2D490(&EventServantFatigueListViewObject_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Rarity_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__);
    sub_1C2D490(&EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo);
    sub_1C2D490(&StringLiteral_11943/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_11941/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_11942/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4C21BD4 = 1;
  }
  v5 = (Il2CppObject *)sub_1C2D6DC(EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_62;
  v5[1].klass = (Il2CppClass *)this;
  SelfUserGame = sub_1C2D434(&v5[1]);
  if ( !obj )
    goto LABEL_62;
  naturalAligment = EventServantFatigueListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    SelfUserGame = sub_1C2D9AC(obj);
    goto LABEL_64;
  }
  v5[1].monitor = EventServantFatigueListViewObject__GetItem(
                    (EventServantFatigueListViewObject_o *)obj,
                    (const MethodInfo *)EventServantFatigueListViewObject_TypeInfo);
  p_monitor = (EventServantFatigueListViewItem_o **)&v5[1].monitor;
  sub_1C2D434(&v5[1].monitor);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_62;
  v10 = *(_QWORD *)(SelfUserGame + 128);
  if ( v10 )
  {
    if ( !*p_monitor )
      goto LABEL_62;
    userServantEntity = (*p_monitor)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_62;
    v12 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v46.fields.fakeValue = v12;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v45 = v46;
    if ( v10 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v45, 0) )
      goto LABEL_14;
    v16 = Method_EventServantFatigueListViewManager_OnClickSelectPush__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1C2D4A8(Method_EventServantFatigueListViewManager_OnClickSelectPush__);
    v17 = (System_Reflection_MethodBase_o *)sub_1C2D474(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
    SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_62;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
               v10,
               (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_62;
    v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v47.fields.currentCryptoKey = klass;
    *(_QWORD *)&v47.fields.fakeValue = monitor;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v47, 0);
    if ( !v19 )
      goto LABEL_62;
    v22 = DataMasterBase_object__object__int___GetEntity(
            v19,
            SelfUserGame,
            (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11943/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
    v25 = sub_1C2D538(object___TypeInfo, 6);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0);
    if ( !v25 )
LABEL_62:
      sub_1C2D6EC(SelfUserGame, v7);
    v28 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C2D5CC(SelfUserGame, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( !*(_DWORD *)(v25 + 24) )
      goto LABEL_64;
    *(_QWORD *)(v25 + 32) = v28;
    SelfUserGame = sub_1C2D434(v25 + 32);
    if ( !v22 )
      goto LABEL_62;
    SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)v22, 0);
    v29 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C2D5CC(SelfUserGame, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( *(_DWORD *)(v25 + 24) <= 1u )
      goto LABEL_64;
    *(_QWORD *)(v25 + 40) = v29;
    sub_1C2D434(v25 + 40);
    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
            0);
    SelfUserGame = (__int64)ServantEntity__getName((ServantEntity_o *)v22, v30, -1, 1, 0);
    v31 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C2D5CC(SelfUserGame, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( *(_DWORD *)(v25 + 24) <= 2u )
      goto LABEL_64;
    *(_QWORD *)(v25 + 48) = v31;
    SelfUserGame = sub_1C2D434(v25 + 48);
    if ( !*p_monitor )
      goto LABEL_62;
    SelfUserGame = (__int64)(*p_monitor)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    v32 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0);
    SelfUserGame = (__int64)Rarity__getRarityType(v32, 0);
    v33 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C2D5CC(SelfUserGame, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( *(_DWORD *)(v25 + 24) <= 3u )
      goto LABEL_64;
    *(_QWORD *)(v25 + 56) = v33;
    SelfUserGame = sub_1C2D434(v25 + 56);
    if ( !*p_monitor )
      goto LABEL_62;
    SelfUserGame = (__int64)(*p_monitor)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0);
    v34 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C2D5CC(SelfUserGame, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( *(_DWORD *)(v25 + 24) <= 4u )
      goto LABEL_64;
    *(_QWORD *)(v25 + 64) = v34;
    SelfUserGame = sub_1C2D434(v25 + 64);
    v35 = *p_monitor;
    if ( !*p_monitor )
      goto LABEL_62;
    v36 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v35->fields.userServantEntity;
    if ( !v36 )
      goto LABEL_62;
    servantEntity = v35->fields.servantEntity;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v36[6], 0);
    if ( !servantEntity )
      goto LABEL_62;
    SelfUserGame = (__int64)ServantEntity__getName(servantEntity, SelfUserGame, -1, 1, 0);
    v38 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C2D5CC(SelfUserGame, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
      if ( !SelfUserGame )
      {
LABEL_65:
        v44 = sub_1C2D710();
        sub_1C2D5B8(v44, 0);
      }
    }
    if ( *(_DWORD *)(v25 + 24) > 5u )
    {
      *(_QWORD *)(v25 + 72) = v38;
      sub_1C2D434(v25 + 72);
      v39 = System_String__Format_63499292(v24, (System_Object_array *)v25, 0);
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_11942/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11941/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v43 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v43,
        v5,
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
        CommonUI__OpenConfirmDialog_31167744(
          (CommonUI_o *)Instance,
          v23,
          v39,
          v40,
          v41,
          v43,
          *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 512LL),
          *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 524LL),
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
      goto LABEL_62;
    }
LABEL_64:
    sub_1C2D6F4(SelfUserGame, v7, v27);
  }
LABEL_14:
  v13 = Method_EventServantFatigueListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C2D4A8(Method_EventServantFatigueListViewManager_OnClickSelectPush__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C2D474(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 8, 0, 0);
  EventServantFatigueListViewManager__PushRequest(this, *p_monitor, v15);
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

  if ( (byte_4C21BC9 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__);
    byte_4C21BC9 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C21BC7 & 1) == 0 )
  {
    sub_1C2D490(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_EventServantFatigueListViewManager_EndSelectSortKind__);
    sub_1C2D490(&Method_EventServantFatigueListViewManager_OnClickSortButton__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21BC7 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventServantFatigueListViewManager_OnClickSortButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C2D6DC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C2D6EC(v9, v10);
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
  const MethodInfo *v8; // x1
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

  if ( (byte_4C21BC0 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&Method_EventServantFatigueListViewManager_EndShowServant__);
    sub_1C2D490(&Method_EventServantFatigueListViewManager_OnLongPushListView__);
    sub_1C2D490(&EventServantFatigueListViewObject_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21BC0 = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v5 = Method_EventServantFatigueListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_EventServantFatigueListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( !obj )
      goto LABEL_16;
    naturalAligment = EventServantFatigueListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment )
      goto LABEL_16;
    if ( (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventServantFatigueListViewObject_TypeInfo )
      goto LABEL_16;
    Item = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)obj, v8);
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
    this->fields.statusShowUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v17, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = v11->fields.userServantEntity;
    v15 = (CommonUI_o *)Instance;
    v16 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndShowServant__,
      0);
    if ( !v15 )
LABEL_16:
      sub_1C2D6EC(Item, v8);
    CommonUI__OpenServantStatusDialog_31178040(v15, 0, v14, v16, 0);
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

  if ( (byte_4C21BB8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21BB8 = 1;
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
          sub_1C2D6EC(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0;
        sub_1C2D434(&this->fields.CallbackFunc2);
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
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t m_CachedPtr; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q0
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v17; // x0
  __int128 v18; // q1
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  Il2CppObject *Request_object; // x0
  __int128 v21; // q1
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w26
  int32_t v24; // w27
  int32_t v25; // w28
  int32_t v26; // w29
  bool IsLock; // w21
  char v28; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v32; // w0
  __int64 v33; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct System_Threading_SynchronizationContext_o *context; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  struct System_Threading_Thread_o *v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4C21BD5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_EventServantFatigueListViewManager_EndPushRequest__);
    sub_1C2D490(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21BD5 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !userServantEntity )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  m_CachedPtr = v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v45, 0);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0);
  v14 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v7->fields.writeMasterDataThread;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v43, 0);
  v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v42, 0);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_EndPushRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v41, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                      userServantEntity->fields.imageLimitCount,
                      0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(userServantEntity->fields.dispLimitCount, 0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
          userServantEntity->fields.commandCardLimitCount,
          0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(userServantEntity->fields.iconLimitCount, 0);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
          userServantEntity->fields.portraitLimitCount,
          0);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                  userServantEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                       userServantEntity->fields.randomLimitCount,
                       0);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
          userServantEntity->fields.randomLimitCountSupport,
          0);
  v33 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v46, 0);
  if ( !v22 )
LABEL_18:
    sub_1C2D6EC(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    imageLimitCount,
    v23,
    v24,
    v25,
    v26,
    context == (struct System_Threading_SynchronizationContext_o *)v37,
    IsLock,
    v28 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != (struct System_Threading_Thread_o *)v39,
    0);
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

  if ( (byte_4C21BAF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
    byte_4C21BAF = 1;
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
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
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
    sub_1C2D6EC(ObjectList, v4);
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
  const MethodInfo *v14; // x3

  if ( (byte_4C21BB7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventServantFatigueListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C21BB7 = 1;
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
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_EventServantFatigueListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      EventServantFatigueListViewObject__Init_32174920((EventServantFatigueListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_1C2D6EC(ObjectList, v8);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
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

  if ( (byte_4C21BC6 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17481/*"btn_filter_on"*/);
    sub_1C2D490(&StringLiteral_17480/*"btn_filter"*/);
    byte_4C21BC6 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C2D6EC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17480/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17481/*"btn_filter_on"*/;
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

  if ( (byte_4C21BB1 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11651/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C2D490(&StringLiteral_11649/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C2D490(&StringLiteral_11650/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C2D490(&StringLiteral_11666/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/);
    byte_4C21BB1 = 1;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11666/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/;
      goto LABEL_16;
    case 1:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11650/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_16;
    case 2:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11649/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_16;
    case 3:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11651/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_16:
      v5 = LocalizationManager__Get((System_String_o *)*v4, 0);
      if ( !recoveryFatigueInfoMsgLabel )
        sub_1C2D6EC(v5, v6);
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
  sub_1C2D434(&this->fields.Callback);
  EventServantFatigueListViewManager__SetMode_32174396(this, mode, v6);
}


void EventServantFatigueListViewManager__SetMode_32174396(
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


void EventServantFatigueListViewManager__SetMode_32174504(
        EventServantFatigueListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.CallbackFunc2 = callback;
  sub_1C2D434(&this->fields.CallbackFunc2);
  EventServantFatigueListViewManager__SetMode_32174396(this, mode, v6);
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
  if ( (byte_4C21BB6 & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_1C2D490(&EventServantFatigueListViewObject_TypeInfo);
    byte_4C21BB6 = 1;
  }
  if ( !obj
    || (naturalAligment = EventServantFatigueListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventServantFatigueListViewObject__Init_32174272(
    (EventServantFatigueListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
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

  if ( (byte_4C21BCA & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17517/*"btn_sort_up"*/);
    sub_1C2D490(&StringLiteral_17615/*"btn_txt_up"*/);
    sub_1C2D490(&StringLiteral_17566/*"btn_txt_new"*/);
    sub_1C2D490(&StringLiteral_17556/*"btn_txt_down"*/);
    sub_1C2D490(&StringLiteral_17573/*"btn_txt_old"*/);
    sub_1C2D490(&StringLiteral_17514/*"btn_sort_down"*/);
    byte_4C21BCA = 1;
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
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17573/*"btn_txt_old"*/ : &StringLiteral_17566/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v12 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17615/*"btn_txt_up"*/ : &StringLiteral_17556/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v12 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
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
      sub_1C2D6EC(sort, v4);
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

  if ( (byte_4C21BB0 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17648/*"button_push_reg"*/);
    sub_1C2D490(&StringLiteral_17649/*"button_push_unreg"*/);
    sub_1C2D490(&StringLiteral_17634/*"button_allchoice_reg"*/);
    sub_1C2D490(&StringLiteral_17637/*"button_alllock_unreg"*/);
    sub_1C2D490(&StringLiteral_17650/*"button_select_reg"*/);
    sub_1C2D490(&StringLiteral_17651/*"button_select_unreg"*/);
    sub_1C2D490(&StringLiteral_17636/*"button_alllock_reg"*/);
    sub_1C2D490(&StringLiteral_17635/*"button_allchoice_unreg"*/);
    byte_4C21BB0 = 1;
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
  v6 = &StringLiteral_17650/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_17651/*"button_select_unreg"*/;
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
  v7 = &StringLiteral_17636/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v7 = &StringLiteral_17637/*"button_alllock_unreg"*/;
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
  v8 = &StringLiteral_17634/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v8 = &StringLiteral_17635/*"button_allchoice_unreg"*/;
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
  v9 = &StringLiteral_17648/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v9 = &StringLiteral_17649/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_1C2D6EC(statusTabButton, *(_QWORD *)&modeKind);
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
  struct ListViewSort_o *v5; // x20
  struct ListViewSort_o *v6; // x8

  sort = this->fields.sort;
  if ( setupInfo )
  {
    if ( sort )
    {
      this->fields.alignedBonusFilterInfos = ListViewSort__GetAlignedBonusFilter(
                                               sort,
                                               0,
                                               setupInfo->fields.servantFilterEventCampaignIds,
                                               setupInfo->fields.servantFilterEventIds,
                                               0,
                                               0,
                                               0,
                                               0);
      sub_1C2D434(&this->fields.alignedBonusFilterInfos);
      v5 = this->fields.sort;
      sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                                 (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                                 0);
      if ( v5 )
      {
        v5->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
        sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
        if ( sort )
        {
          sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
          v6 = this->fields.sort;
          if ( v6 )
          {
            if ( sort )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, v6->fields.isBonusKind, 0);
              return;
            }
          }
        }
      }
    }
LABEL_10:
    sub_1C2D6EC(sort, setupInfo);
  }
  if ( !sort )
    goto LABEL_10;
  sort->fields.isBonusKind = 0;
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C2D434(&this->fields.alignedBonusFilterInfos);
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

  if ( (byte_4C21BD1 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventServantFatigueListViewManager_EndStatusSync__);
    sub_1C2D490(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C21BD1 = 1;
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
      sub_1C2D434(&this->fields.requestCallback);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v14,
                         (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v11 = v15;
        v10 = choiceList;
        v13 = 1;
        v12 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1C2D6EC(Request_object, v9);
    }
  }
  else if ( modeKind == 1 && EventServantFatigueListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1C2D434(&this->fields.requestCallback);
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndStatusSync__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v7,
                       (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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

  if ( (byte_4C21BAC & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21BAC = 1;
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
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C21BAD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4C21BAD = 1;
  }
  memset(&v7, 0, sizeof(v7));
  ObjectList = (System_Collections_Generic_List_object__o *)EventServantFatigueListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( ObjectList )
  {
    v5 = this->fields.objectList;
    if ( !v5 )
      sub_1C2D6EC(ObjectList, v4);
    if ( v5->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v7,
        ObjectList,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v7,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__) )
      {
        if ( !v7.fields._current )
          sub_1C2D6EC(0, v6);
        EventServantFatigueListViewObject__UpdateDisp((EventServantFatigueListViewObject_o *)v7.fields._current, v6);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v7,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__);
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

  if ( (byte_4C21BA4 & 1) == 0 )
  {
    sub_1C2D490(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo);
    byte_4C21BA4 = 1;
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
    v8 = sub_1C676E8(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventServantFatigueListViewManager_o *)sub_1C2D9AC(v7);
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

  if ( (byte_4C21BA6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C21BA6 = 1;
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
    v8 = sub_1C676E8(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventServantFatigueListViewManager_o *)sub_1C2D9AC(v7);
  EventServantFatigueListViewManager__remove_CallbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_EventServantFatigueListViewObject__o *EventServantFatigueListViewManager__get_ClippingObjectList(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *v8; // x22
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 v11; // x10
  Il2CppClass **v12; // x0

  if ( (byte_4C21BAB & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
    byte_4C21BAB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
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
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        break;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
      if ( !objectList )
        break;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)EventServantFatigueListViewObject__GetItem(
                                                                  (EventServantFatigueListViewObject_o *)objectList,
                                                                  v4);
      if ( !objectList )
        break;
      v4 = (const MethodInfo *)objectList;
      if ( LOBYTE(objectList[2].fields._items) )
      {
        objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_43582756(
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
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        v12 = &items->obj.klass + v11;
        v3->fields._size = v11 + 1;
        v12[4] = (Il2CppClass *)v8;
        sub_1C2D434(v12 + 4);
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_18:
    sub_1C2D6EC(objectList, v4);
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

  if ( (byte_4C21BAA & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21BAA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
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
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
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
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &items->obj.klass + v11;
          v3->fields._size = v11 + 1;
          v13[4] = (Il2CppClass *)v12;
          sub_1C2D434(v13 + 4);
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1C2D6EC(objectList, v4);
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

  if ( (byte_4C21BA5 & 1) == 0 )
  {
    sub_1C2D490(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo);
    byte_4C21BA5 = 1;
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
    v8 = sub_1C676E8(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventServantFatigueListViewManager_o *)sub_1C2D9AC(v7);
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

  if ( (byte_4C21BA7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C21BA7 = 1;
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
    v8 = sub_1C676E8(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C2D9AC(v7);
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
  sub_1C2D434(&this->fields.m_target);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A699B0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A69958;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *EventServantFatigueListViewManager_CallbackFunc__BeginInvoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = index;
  v15 = kind;
  if ( (byte_4C21BD7 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&EventServantFatigueListViewManager_ResultKind_TypeInfo);
    byte_4C21BD7 = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             EventServantFatigueListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&index,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void EventServantFatigueListViewManager_CallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  sub_1C2D434(&this->fields.m_target);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A69A1C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A699D4;
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
  if ( (byte_4C21BD8 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C21BD8 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void EventServantFatigueListViewManager_RequestCallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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

  if ( (byte_4C21BD9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__);
    byte_4C21BD9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1C2D434(&this->fields.__9__1);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31167972(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_1C2D6EC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void EventServantFatigueListViewManager___c__DisplayClass107_0___OnClickSelectPush_b__1(
        EventServantFatigueListViewManager___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C2D6EC(this, method);
  EventServantFatigueListViewManager__PushRequest(this->fields.__4__this, this->fields.selectItem, v2);
}