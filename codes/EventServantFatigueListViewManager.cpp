void __fastcall EventServantFatigueListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v5; // x20
  struct EventServantFatigueListViewManager_StaticFields *static_fields; // x0

  if ( (byte_4C1CDA7 & 1) == 0 )
  {
    sub_1C3B764(&EventServantFatigueListViewManager_TypeInfo, v1);
    sub_1C3B764(&ListViewSort_TypeInfo, v2);
    sub_1C3B764(&StringLiteral_6373/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/, v3);
    byte_4C1CDA7 = 1;
  }
  EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6373/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/;
  sub_1C3B708(EventServantFatigueListViewManager_TypeInfo->static_fields);
  SORT_SAVE_KEY = EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v5 = (ListViewSort_o *)sub_1C3B9B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_42232596(v5, SORT_SAVE_KEY, 3, 0, 0LL);
  static_fields = EventServantFatigueListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v5;
  sub_1C3B708(&static_fields->servantSortStatus);
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
  if ( (byte_4C1CD90 & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, result);
    byte_4C1CD90 = 1;
  }
  if ( !result )
    goto LABEL_10;
  this = (EventServantFatigueListViewManager_o *)System_String__Equals_63376928(
                                                   result,
                                                   (System_String_o *)StringLiteral_22507/*"referrerMapId"*/,
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
    sub_1C3B9C0(this, result);
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

  if ( (byte_4C1CD8F & 1) == 0 )
  {
    sub_1C3B764(&Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__, isDecide);
    sub_1C3B764(&Method_NetworkManager_getRequest_ServantRecoverySyncRequest___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4C1CD8F = 1;
  }
  fatigueRecoveryConfirmationDialog = (int64_t)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_31;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)fatigueRecoveryConfirmationDialog, 0LL);
  if ( !isDecide )
    return;
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v10,
                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_ServantRecoverySyncRequest___);
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
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(
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
    sub_1C3B9C0(fatigueRecoveryConfirmationDialog, isDecide);
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
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(
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
  fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v36, 0LL);
  v18 = this->fields.targetOutUserServantEntity;
  if ( !v18 )
    goto LABEL_31;
  v19 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
  v20 = fatigueRecoveryConfirmationDialog;
  *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v35.fields.fakeValue = v19;
  fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v35, 0LL);
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
  struct ListViewSort_o **p_sort; // x23
  __int64 v23; // x1
  __int64 sort; // x0
  TitleInfoControl_o *titleInfo; // x8
  UnityEngine_Object_o *fatigueRecoveryConfirmationDialog; // x24
  Il2CppObject *fatigueRecoveryConfirmationDialogPrefab; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_GameObject_o *v32; // x24
  UnityEngine_Transform_o *transform; // x25
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  System_Int32_array *v37; // x23
  EventUpValSetupInfo_o *v38; // x21
  const MethodInfo *v39; // x2
  __int64 v40; // x23
  __int64 v41; // x28
  __int64 v42; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  UserServantEntity_o *v44; // x24
  __int128 v45; // q0
  int64_t v46; // x0
  int32_t v47; // w26
  int64_t v48; // x27
  EventServantFatigueListViewItem_o *v49; // x25
  const MethodInfo *v50; // x6
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  __int64 v54; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v56; // x2
  const MethodInfo *v57; // x1
  struct EventServantRecoveryFatigueItem_o **p_targetRecoveryFatigueItem; // [xsp+0h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61[2]; // [xsp+30h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v68; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C1CD7F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&eventId);
    sub_1C3B764(&EventServantFatigueListViewItem_TypeInfo, v8);
    sub_1C3B764(&EventServantFatigueListViewManager_TypeInfo, v9);
    sub_1C3B764(&EventUpValSetupInfo_TypeInfo, v10);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___, v11);
    sub_1C3B764(&int___TypeInfo, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_1C3B764(&LocalizationManager_TypeInfo, v14);
    sub_1C3B764(&NetworkManager_TypeInfo, v15);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992912, v16);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v17);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1C3B764(&StringLiteral_12010/*"START_FRIENDSHIPUP_EFFECT"*/, v20);
    byte_4C1CD7F = 1;
  }
  v21 = EventServantFatigueListViewManager_TypeInfo;
  memset(&v61[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v21 = EventServantFatigueListViewManager_TypeInfo;
  }
  this->fields.sort = v21->static_fields->servantSortStatus;
  p_sort = &this->fields.sort;
  sub_1C3B708(&this->fields.sort);
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
  TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 80, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnSprite_38560752((TitleInfoControl_o *)sort, 1, 0, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1C3B708(&this->fields.targetInUserServantEntity);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1C3B708(&this->fields.targetOutUserServantEntity);
  this->fields.eventId = eventId;
  this->fields.statusShowUserSvtId = -1LL;
  this->fields.targetRecoveryFatigueItem = targetItem;
  p_targetRecoveryFatigueItem = &this->fields.targetRecoveryFatigueItem;
  sub_1C3B708(&this->fields.targetRecoveryFatigueItem);
  this->fields.selectAfterCallback = afterCallback;
  sub_1C3B708(&this->fields.selectAfterCallback);
  this->fields.modeKind = 0;
  fatigueRecoveryConfirmationDialog = (UnityEngine_Object_o *)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = UnityEngine_Object__op_Equality(0LL, fatigueRecoveryConfirmationDialog, 0LL);
  if ( (sort & 1) != 0 )
  {
    fatigueRecoveryConfirmationDialogPrefab = (Il2CppObject *)this->fields.fatigueRecoveryConfirmationDialogPrefab;
    v62.fields.x = 0.0;
    v62.fields.y = 0.0;
    v62.fields.z = 0.0;
    v67 = UnityEngine_Quaternion__Internal_FromEulerRad(v62, 0LL);
    x = v67.fields.x;
    y = v67.fields.y;
    z = v67.fields.z;
    w = v67.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v63.fields.x = 0.0;
    v63.fields.y = 0.0;
    v63.fields.z = 0.0;
    v68.fields.x = x;
    v68.fields.y = y;
    v68.fields.z = z;
    v68.fields.w = w;
    sort = (__int64)UnityEngine_Object__Instantiate_object__50819092(
                      fatigueRecoveryConfirmationDialogPrefab,
                      v63,
                      v68,
                      (const MethodInfo_3077014 *)Method_UnityEngine_Object_Instantiate_GameObject____77992912);
    if ( !sort )
      goto LABEL_62;
    v32 = (UnityEngine_GameObject_o *)sort;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)sort, 0LL);
    sort = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_62;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)sort, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v32, 0LL);
    if ( !sort )
      goto LABEL_62;
    v64.fields.x = 0.0;
    v64.fields.y = 0.0;
    v64.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)sort, v64, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v32, 0LL);
    if ( !sort )
      goto LABEL_62;
    v65.fields.x = 0.0;
    v65.fields.y = 0.0;
    v65.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)sort, v65, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v32, 0LL);
    if ( !sort )
      goto LABEL_62;
    v66.fields.x = 1.0;
    v66.fields.y = 1.0;
    v66.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)sort, v66, 0LL);
    this->fields.fatigueRecoveryConfirmationDialog = (struct FatigueRecoveryConfirmationDialog_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                                     v32,
                                                                                                     (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___);
    sub_1C3B708(&this->fields.fatigueRecoveryConfirmationDialog);
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
  sub_1C3B708(&this->fields.seed);
LABEL_33:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_62;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = sub_1C3B80C(int___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_62;
  v37 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
LABEL_57:
    sub_1C3B9C8(sort, v23);
  *(_DWORD *)(sort + 32) = eventId;
  v38 = (EventUpValSetupInfo_o *)sub_1C3B9B0(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_40351540(v38, v37, 1, 0, 0, 0LL);
  EventServantFatigueListViewManager__SetUpBonusFilterButton(this, v38, v39);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  sort = (__int64)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_62;
  sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_62;
  v40 = sort;
  if ( (int)*(_QWORD *)(sort + 24) >= 1 )
  {
    v41 = 0LL;
    v42 = (unsigned int)*(_QWORD *)(sort + 24) - 1LL;
    while ( *p_targetRecoveryFatigueItem )
    {
      userServantEntity = (*p_targetRecoveryFatigueItem)->fields.userServantEntity;
      v44 = *(UserServantEntity_o **)(v40 + 32 + 8 * v41);
      if ( userServantEntity )
      {
        v45 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v61[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v61[1].fields.fakeValue = v45;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v61, -1LL, 0LL);
        v61[1] = v61[0];
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v60 = v61[1];
      v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v60, 0LL);
      v47 = this->fields.eventId;
      v48 = v46;
      v49 = (EventServantFatigueListViewItem_o *)sub_1C3B9B0(EventServantFatigueListViewItem_TypeInfo);
      EventServantFatigueListViewItem___ctor(v49, v44, v47, v48, v38, targetItem, v50);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v51 = *(_QWORD *)(sort + 16);
      v52 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v51 )
        break;
      v53 = *(int *)(sort + 24);
      if ( (unsigned int)v53 >= *(_DWORD *)(v51 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v49,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = v51 + 8 * v53;
        *(_DWORD *)(sort + 24) = v53 + 1;
        *(_QWORD *)(v54 + 32) = v49;
        sort = sub_1C3B708(v54 + 32);
      }
      if ( v42 == v41 )
        goto LABEL_58;
      if ( ++v41 >= (unsigned __int64)*(unsigned int *)(v40 + 24) )
        goto LABEL_57;
    }
LABEL_62:
    sub_1C3B9C0(sort, v23);
  }
LABEL_58:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12010/*"START_FRIENDSHIPUP_EFFECT"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_62;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EventServantFatigueListViewManager__SetStatusKind(this, this->fields.modeKind, v56);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventServantFatigueListViewManager__SetFilterButtonImage(this, v57);
}


void __fastcall EventServantFatigueListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventServantFatigueListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4C1CD79 & 1) == 0 )
  {
    sub_1C3B764(&EventServantFatigueListViewManager_TypeInfo, v1);
    byte_4C1CD79 = 1;
  }
  v2 = EventServantFatigueListViewManager_TypeInfo;
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v2 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1C3B9C0(0LL, v1);
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
    sub_1C3B9C0(0LL, v3);
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
  EventServantFatigueListViewManager__SetMode_31665036(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_31665036(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_31665036(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_31665036(this, 2, v5);
}


void __fastcall EventServantFatigueListViewManager__EndPushRequest(
        EventServantFatigueListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventServantFatigueListViewManager__ModifyList(this, 0, method);
  EventServantFatigueListViewManager__SetMode_31665036(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__EndSelectFilterKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C1CD95 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4C1CD95 = 1;
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
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_1C3B9C0(sort, isDecide);
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

  if ( (byte_4C1CD99 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4C1CD99 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v6);
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

  if ( (byte_4C1CD92 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4C1CD92 = 1;
  }
  EventServantFatigueListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventServantFatigueListViewManager__ModifyList(this, 0, v4);
  EventServantFatigueListViewManager__SetMode_31665036(this, 2, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall EventServantFatigueListViewManager__EndStatusSync(
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
    *p_requestCallback = 0LL;
    sub_1C3B708(p_requestCallback);
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

  if ( (byte_4C1CD93 & 1) == 0 )
  {
    sub_1C3B764(&EventServantFatigueListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4C1CD93 = 1;
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
                                                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v17, 0LL) == svtId )
        ++v11;
      if ( size == v10 )
        return v11;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1C3B9C0(itemList, *(_QWORD *)&svtId);
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
  EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x0
  int32_t IndividualityRate; // w0
  int v20; // w23
  int64_t Time; // x8
  float v22; // s0
  __int64 v23; // x10
  int64_t v24; // x21
  System_String_o *v25; // x20
  System_String_o *v26; // x0

  if ( (byte_4C1CD8D & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, recoveryFatigueTime);
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    sub_1C3B764(&StringLiteral_11769/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/, v12);
    sub_1C3B764(&StringLiteral_11781/*"SHOP_BUY_SPECIAL_ITEM"*/, v13);
    sub_1C3B764(&StringLiteral_11869/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v14);
    byte_4C1CD8D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1LL, 0LL);
  if ( System_String__IsNullOrEmpty(RestTime4, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    *beforeTime = LocalizationManager__Get((System_String_o *)StringLiteral_11781/*"SHOP_BUY_SPECIAL_ITEM"*/, 0LL);
    sub_1C3B708(beforeTime);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11769/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/, 0LL);
  }
  else
  {
    targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
    if ( !targetRecoveryFatigueItem )
      sub_1C3B9C0(0LL, v16);
    if ( isMatch )
      IndividualityRate = EventServantRecoveryFatigueItem__get_IndividualityRate(targetRecoveryFatigueItem, 0LL);
    else
      IndividualityRate = EventServantRecoveryFatigueItem__get_RecoveryRate(targetRecoveryFatigueItem, 0LL);
    v20 = IndividualityRate;
    *beforeTime = RestTime4;
    sub_1C3B708(beforeTime);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    v22 = (float)(recoveryFatigueTime - Time) / (float)((float)v20 / 1000.0);
    v23 = (__int64)v22;
    if ( v22 == INFINITY )
      v23 = 0x8000000000000000LL;
    v24 = v23 + Time;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__GetRestTime4(v24, -1LL, 0LL);
  }
  *afterTime = v17;
  sub_1C3B708(afterTime);
  if ( isMatch )
  {
    v25 = *afterTime;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11869/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
    *afterTime = System_String__Concat_63368612(v25, v26, 0LL);
    sub_1C3B708(afterTime);
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

  if ( (byte_4C1CD8C & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, array);
    sub_1C3B764(&System_Text_StringBuilder_TypeInfo, v4);
    sub_1C3B764(&StringLiteral_11870/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/, v5);
    byte_4C1CD8C = 1;
  }
  v6 = (System_Text_StringBuilder_o *)sub_1C3B9B0(System_Text_StringBuilder_TypeInfo);
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
        sub_1C3B9C8(appended, v8);
      if ( !v6 )
        break;
      appended = System_Text_StringBuilder__Append_62529764(v6, array->m_Items[v10++], 0LL);
      if ( (int)v10 < (signed int)array->max_length )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11870/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/, 0LL);
        appended = System_Text_StringBuilder__Append_62529764(v6, v11, 0LL);
      }
      LODWORD(v9) = array->max_length;
      if ( (__int64)v10 >= (int)v9 )
        goto LABEL_13;
    }
LABEL_16:
    sub_1C3B9C0(appended, v8);
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

  if ( (byte_4C1CD86 & 1) == 0 )
  {
    sub_1C3B764(&EventServantFatigueListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4C1CD86 = 1;
  }
  result = (EventServantFatigueListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventServantFatigueListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  System_String_o *v17; // x21
  System_String_o *v18; // x0
  System_String_o **v19; // x0
  EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x0
  int32_t IndividualityRate; // w0
  int v22; // w23
  int64_t Time; // x8
  float v24; // s0
  __int64 v25; // x10
  int64_t v26; // x22
  System_String_o *v27; // x20
  System_String_o *v28; // x0

  if ( (byte_4C1CD8E & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, recoveryFatigueTime);
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    sub_1C3B764(&StringLiteral_11769/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/, v12);
    sub_1C3B764(&StringLiteral_11781/*"SHOP_BUY_SPECIAL_ITEM"*/, v13);
    sub_1C3B764(&StringLiteral_11869/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v14);
    byte_4C1CD8E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1LL, 0LL);
  if ( System_String__IsNullOrEmpty(RestTime4, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    *beforeTime = LocalizationManager__Get((System_String_o *)StringLiteral_11781/*"SHOP_BUY_SPECIAL_ITEM"*/, 0LL);
    sub_1C3B708(beforeTime);
    if ( isMatch )
    {
      v17 = *beforeTime;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11869/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
      *beforeTime = System_String__Concat_63368612(v17, v18, 0LL);
      sub_1C3B708(beforeTime);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    *afterTime = LocalizationManager__Get((System_String_o *)StringLiteral_11769/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/, 0LL);
    v19 = afterTime;
LABEL_29:
    sub_1C3B708(v19);
    return;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    sub_1C3B9C0(0LL, v16);
  if ( isMatch )
    IndividualityRate = EventServantRecoveryFatigueItem__get_IndividualityRate(targetRecoveryFatigueItem, 0LL);
  else
    IndividualityRate = EventServantRecoveryFatigueItem__get_RecoveryRate(targetRecoveryFatigueItem, 0LL);
  v22 = IndividualityRate;
  *beforeTime = RestTime4;
  sub_1C3B708(beforeTime);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v24 = (float)((float)v22 / 1000.0) * (float)(recoveryFatigueTime - Time);
  v25 = (__int64)v24;
  if ( v24 == INFINITY )
    v25 = 0x8000000000000000LL;
  v26 = v25 + Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  *afterTime = LocalizationManager__GetRestTime4(v26, -1LL, 0LL);
  sub_1C3B708(afterTime);
  if ( isMatch )
  {
    v27 = *beforeTime;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11869/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
    *beforeTime = System_String__Concat_63368612(v27, v28, 0LL);
    v19 = beforeTime;
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
  int64_t itemList; // x0
  int v19; // w25
  int32_t v20; // w24
  __int64 methodPtr_low; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  __int128 v28; // q0
  struct System_Int64_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  System_Collections_Generic_List_long__o *v33; // x0
  int v34; // w21
  System_Int64_array **v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-80h]

  if ( (byte_4C1CD9D & 1) == 0 )
  {
    sub_1C3B764(&EventServantFatigueListViewItem_TypeInfo, choiceList);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1C3B764(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4C1CD9D = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v19 = *(_DWORD *)(itemList + 24);
  if ( v19 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v20,
                            (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventServantFatigueListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v22 = *(_QWORD *)(itemList + 120);
      if ( v22 && *(_BYTE *)(itemList + 193) )
      {
        if ( *(_BYTE *)(itemList + 162) )
        {
          v23 = *(_OWORD *)(v22 + 32);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
          *(_OWORD *)&v39.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v39;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v38, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v25 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v32 = v25[4];
            v33 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v33,
              v17,
              *(const MethodInfo_3673CA0 **)(*(_QWORD *)(v32 + 192) + 112LL));
            goto LABEL_28;
          }
          v27 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v28 = *(_OWORD *)(v22 + 32);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
          *(_OWORD *)&v39.fields.fakeValue = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v37 = v39;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v37, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v29 = v15->fields._items;
          v30 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v29 )
            goto LABEL_37;
          v31 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v31 >= v29->max_length )
          {
            v32 = v30[4];
            v33 = v15;
            goto LABEL_27;
          }
          v27 = &v29->obj.klass + v31;
          v15->fields._size = v31 + 1;
        }
        v27[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v19 == ++v20 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1C3B9C0(itemList, v17);
  v34 = v16->fields._size + v15->fields._size;
  if ( v34 < 1 )
  {
    *choiceList = 0LL;
    sub_1C3B708(choiceList);
    v35 = unchoiceList;
    *unchoiceList = 0LL;
  }
  else
  {
    *choiceList = System_Collections_Generic_List_long___ToArray(
                    v15,
                    (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C3B708(choiceList);
    *unchoiceList = System_Collections_Generic_List_long___ToArray(
                      v16,
                      (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = unchoiceList;
  }
  sub_1C3B708(v35);
  return v34 > 0;
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
  int64_t itemList; // x0
  int v19; // w25
  int32_t v20; // w24
  __int64 methodPtr_low; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  __int128 v28; // q0
  struct System_Int64_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  System_Collections_Generic_List_long__o *v33; // x0
  int v34; // w21
  System_Int64_array **v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-80h]

  if ( (byte_4C1CD9C & 1) == 0 )
  {
    sub_1C3B764(&EventServantFatigueListViewItem_TypeInfo, lockList);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1C3B764(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4C1CD9C = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v19 = *(_DWORD *)(itemList + 24);
  if ( v19 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v20,
                            (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventServantFatigueListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v22 = *(_QWORD *)(itemList + 120);
      if ( v22 && *(_BYTE *)(itemList + 192) )
      {
        if ( *(_BYTE *)(itemList + 161) )
        {
          v23 = *(_OWORD *)(v22 + 32);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
          *(_OWORD *)&v39.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v39;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v38, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v25 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v32 = v25[4];
            v33 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v33,
              v17,
              *(const MethodInfo_3673CA0 **)(*(_QWORD *)(v32 + 192) + 112LL));
            goto LABEL_28;
          }
          v27 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v28 = *(_OWORD *)(v22 + 32);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
          *(_OWORD *)&v39.fields.fakeValue = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v37 = v39;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v37, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v29 = v15->fields._items;
          v30 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v29 )
            goto LABEL_37;
          v31 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v31 >= v29->max_length )
          {
            v32 = v30[4];
            v33 = v15;
            goto LABEL_27;
          }
          v27 = &v29->obj.klass + v31;
          v15->fields._size = v31 + 1;
        }
        v27[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v19 == ++v20 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1C3B9C0(itemList, v17);
  v34 = v16->fields._size + v15->fields._size;
  if ( v34 < 1 )
  {
    *lockList = 0LL;
    sub_1C3B708(lockList);
    v35 = unlockList;
    *unlockList = 0LL;
  }
  else
  {
    *lockList = System_Collections_Generic_List_long___ToArray(
                  v15,
                  (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C3B708(lockList);
    *unlockList = System_Collections_Generic_List_long___ToArray(
                    v16,
                    (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = unlockList;
  }
  sub_1C3B708(v35);
  return v34 > 0;
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

  if ( (byte_4C1CD7A & 1) == 0 )
  {
    sub_1C3B764(&EventServantFatigueListViewManager_TypeInfo, v1);
    byte_4C1CD7A = 1;
  }
  v2 = EventServantFatigueListViewManager_TypeInfo;
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v2 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1C3B9C0(0LL, v1);
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

  if ( (byte_4C1CD8B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C1CD8B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
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
         (const MethodInfo_329AE94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
          sub_1C3B9C8(Instance, v7);
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
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v24, 0LL);
        v19 = this->fields.targetRecoveryFatigueItem;
        if ( !v19 )
          break;
        v20 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v19->fields.userServantEntity;
        if ( !v20 )
          break;
        v21 = (int)Instance;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v20[8], 0LL);
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
      sub_1C3B9C0(Instance, v7);
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

  if ( (byte_4C1CD83 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1C3B764(&EventServantFatigueListViewItem_TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v11);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4C1CD83 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_37;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_37;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_329D3A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v31,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v32.fields._list = *(_OWORD *)&v31.fields.currentCryptoKey;
      v32.fields._current = (Il2CppObject *)v31.fields.fakeValue;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v32,
                (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v17 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v32,
            (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
              sub_1C3B9C0(v17, v18);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_1C3B9C0(v17, v18);
            v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v31.fields.fakeValue = v22;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v30 = v31;
            v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v30, 0LL);
            v24 = Entity[2];
            *(Il2CppObject *)&v29.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v29.fields.fakeValue = v24;
            if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v29, 0LL) )
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
          sub_1C3B9C0(v17, v18);
LABEL_26:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v28 = current->fields.viewObject;
          if ( !v28 )
            sub_1C3B9C0(0LL, v27);
          ((void (__fastcall *)(struct ListViewObject_o *, EventServantFatigueListViewItem_o *, Il2CppMethodPointer))v28->klass->vtable._5_SetItem.method)(
            v28,
            current,
            v28->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_37:
    sub_1C3B9C0(Instance, v14);
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

  if ( (byte_4C1CD85 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_1C3B764(&EventServantFatigueListViewItem_TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C1CD85 = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_33;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v31, 0LL);
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
                            (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v30, 0LL);
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
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v29, 0LL);
        EventServantFatigueListViewManager__ModifyLockItem(this, v26, 1, isIconSizeChangea, v27);
      }
LABEL_29:
      if ( ++v15 == (_DWORD)v12 )
        return;
      if ( v15 >= *(_DWORD *)(v13 + 24) )
        sub_1C3B9C8(sort, isIconSizeChange);
    }
LABEL_33:
    sub_1C3B9C0(sort, isIconSizeChange);
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
  __int64 v21; // x0
  const MethodInfo *v22; // x1
  __int64 methodPtr_low; // x11
  EventServantFatigueListViewItem_o *current; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v26; // q0
  int64_t v27; // x0
  Il2CppObject v28; // q0
  int64_t v29; // x24
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  UnityEngine_Object_o *viewObject; // x23
  __int64 v33; // x1
  struct ListViewObject_o *v34; // x0
  __int64 v35; // x1
  ListViewObject_o *v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_4C1CD84 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11);
    sub_1C3B764(&EventServantFatigueListViewItem_TypeInfo, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v14);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4C1CD84 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_45;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_45;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_329D3A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v41.fields._list = *(_OWORD *)&v40.fields.currentCryptoKey;
      v41.fields._current = (Il2CppObject *)v40.fields.fakeValue;
      v20 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v41,
                (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v21 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v41,
            (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v41.fields._current
          && (methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v41.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventServantFatigueListViewItem_c *)v41.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = (EventServantFatigueListViewItem_o *)v41.fields._current;
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
          sub_1C3B9C0(v21, v22);
        userServantEntity = current->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1C3B9C0(v21, v22);
        v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v40.fields.fakeValue = v26;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v39 = v40;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v39, 0LL);
        v28 = Entity[2];
        v29 = v27;
        *(Il2CppObject *)&v38.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v38.fields.fakeValue = v28;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v38, 0LL);
        if ( v29 == v21 )
        {
          current->fields.userServantEntity = (struct UserServantEntity_o *)Entity;
          v21 = sub_1C3B708(&current->fields.userServantEntity);
        }
LABEL_26:
        if ( v20 )
        {
          if ( !current )
            sub_1C3B9C0(v21, v22);
          EventServantFatigueListViewItem__ModifyLockItem(current, v22);
          EventServantFatigueListViewItem__ModifyChoiceItem(current, v30);
          EventServantFatigueListViewItem__ModifyPushItem(current, v31);
        }
        else if ( !current )
        {
          sub_1C3B9C0(v21, v22);
        }
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v34 = current->fields.viewObject;
          if ( !v34 )
            sub_1C3B9C0(0LL, v33);
          ((void (__fastcall *)(struct ListViewObject_o *, EventServantFatigueListViewItem_o *, Il2CppMethodPointer))v34->klass->vtable._5_SetItem.method)(
            v34,
            current,
            v34->klass->vtable._6_SetItem.methodPtr);
          if ( isIconSizeChange )
          {
            v36 = current->fields.viewObject;
            if ( !v36 )
              sub_1C3B9C0(0LL, v35);
            ListViewObject__SetItemSeed(v36, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_45:
    sub_1C3B9C0(Instance, v17);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickBack(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x20

  if ( (byte_4C1CDA3 & 1) == 0 )
  {
    sub_1C3B764(&Method_EventServantFatigueListViewManager_OnClickBack__, method);
    byte_4C1CDA3 = 1;
  }
  v3 = Method_EventServantFatigueListViewManager_OnClickBack__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3B77C(Method_EventServantFatigueListViewManager_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0LL;
    sub_1C3B708(&this->fields.selectAfterCallback);
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

  if ( (byte_4C1CD96 & 1) == 0 )
  {
    sub_1C3B764(&Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__, method);
    byte_4C1CD96 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C3B9C0(0LL, v5);
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

  if ( (byte_4C1CDA0 & 1) == 0 )
  {
    sub_1C3B764(&Method_EventServantFatigueListViewManager_EndClickTabChoice__, method);
    sub_1C3B764(&Method_EventServantFatigueListViewManager_OnClickChoiceTab__, v3);
    sub_1C3B764(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1CDA0 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v5 = Method_EventServantFatigueListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_EventServantFatigueListViewManager_OnClickChoiceTab__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1C3B9B0(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
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
      EventServantFatigueListViewManager__SetMode_31665036(this, 2, v12);
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

  if ( (byte_4C1CD9F & 1) == 0 )
  {
    sub_1C3B764(&Method_EventServantFatigueListViewManager_EndClickTabLock__, method);
    sub_1C3B764(&Method_EventServantFatigueListViewManager_OnClickCollectLock__, v3);
    sub_1C3B764(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1CD9F = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v5 = Method_EventServantFatigueListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_EventServantFatigueListViewManager_OnClickCollectLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1C3B9B0(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
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
      EventServantFatigueListViewManager__SetMode_31665036(this, 2, v12);
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

  if ( (byte_4C1CD94 & 1) == 0 )
  {
    sub_1C3B764(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_EventServantFatigueListViewManager_EndSelectFilterKind__, v3);
    sub_1C3B764(&Method_EventServantFatigueListViewManager_OnClickFilterKind__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C1CD94 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EventServantFatigueListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C3B77C(Method_EventServantFatigueListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C3B9B0(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1C3B9C0(v12, v13);
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

  if ( (byte_4C1CD9E & 1) == 0 )
  {
    sub_1C3B764(&Method_EventServantFatigueListViewManager_EndClickTabStatus__, method);
    sub_1C3B764(&Method_EventServantFatigueListViewManager_OnClickNormalStatus__, v3);
    sub_1C3B764(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1CD9E = 1;
  }
  if ( this->fields.modeKind )
  {
    v5 = Method_EventServantFatigueListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_EventServantFatigueListViewManager_OnClickNormalStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1C3B9B0(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C1CDA1 & 1) == 0 )
  {
    sub_1C3B764(&Method_EventServantFatigueListViewManager_EndClickTabPush__, method);
    sub_1C3B764(&Method_EventServantFatigueListViewManager_OnClickPushTab__, v3);
    sub_1C3B764(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1CDA1 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_EventServantFatigueListViewManager_OnClickPushTab__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickPushTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_EventServantFatigueListViewManager_OnClickPushTab__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1C3B9B0(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
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
      EventServantFatigueListViewManager__SetMode_31665036(this, 2, v12);
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

  if ( (byte_4C1CDA4 & 1) == 0 )
  {
    sub_1C3B764(&Method_EventServantFatigueListViewManager_OnClickScaleChange__, method);
    byte_4C1CDA4 = 1;
  }
  v3 = Method_EventServantFatigueListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3B77C(Method_EventServantFatigueListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
    sub_1C3B708(p_seed);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v12 = this->fields.scaleType,
        sort->fields.iconScaleKind = v12,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v12, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1C3B9C0(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  EventServantFatigueListViewManager__ModifyList(this, 1, v14);
  EventServantFatigueListViewManager__SetMode_31665036(this, 2, v15);
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
  __int64 fatigueRecoveryConfirmationDialog; // x0
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  __int64 methodPtr_low; // x10
  EventServantFatigueListViewItem_o *Item; // x21
  const MethodInfo *v27; // x2
  __int64 v28; // x8
  __int128 v29; // q1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v31; // q0
  __int64 v32; // x23
  const MethodInfo *v33; // x2
  bool IsMatchIndividuality_31654432; // w0
  const MethodInfo *v35; // x5
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  FatigueRecoveryConfirmationDialog_o *v37; // x20
  System_String_o *v38; // x21
  Il2CppObject *Name; // x0
  System_String_o *v40; // x21
  System_String_o *v41; // x0
  UserServantEntity_o *targetOutUserServantEntity; // x22
  System_String_o *v43; // x23
  System_String_o *outAfterTime; // x27
  System_String_o *v45; // x24
  CommonConfirmDialog_ClickDelegate_o *func; // x25
  bool v47; // w0
  const MethodInfo *v48; // x5
  FatigueRecoveryConfirmationDialog_o *v49; // x20
  System_String_o *v50; // x21
  Il2CppObject *v51; // x0
  System_String_o *v52; // x21
  System_String_o *v53; // x0
  UserServantEntity_o *v54; // x22
  System_String_o *v55; // x23
  System_String_o *v56; // x24
  System_String_o *v57; // x25
  CommonConfirmDialog_ClickDelegate_o *v58; // x26
  struct EventServantRecoveryFatigueItem_o *v59; // x8
  struct UserServantEntity_o *v60; // x8
  __int128 v61; // q0
  struct UserServantEntity_o *v62; // x8
  __int128 v63; // q0
  const MethodInfo *v64; // x2
  bool v65; // w0
  const MethodInfo *v66; // x5
  struct EventServantRecoveryFatigueItem_o *v67; // x8
  struct UserServantEntity_o *v68; // x8
  UserEventServantFatigueMaster_o *v69; // x23
  int32_t eventId; // w24
  __int64 v71; // x25
  __int64 v72; // x26
  bool FatigueInfo; // w0
  const MethodInfo *v74; // x1
  int64_t v75; // x23
  int64_t v76; // x23
  bool IsMatchIndividuality; // w0
  const MethodInfo *v78; // x5
  struct EventServantRecoveryFatigueItem_o *v79; // x8
  FatigueRecoveryConfirmationDialog_o *v80; // x20
  System_String_o *v81; // x21
  Il2CppObject *v82; // x0
  System_String_o *v83; // x21
  System_String_o *v84; // x0
  System_String_o *v85; // x22
  System_String_o *v86; // x23
  UserServantEntity_o *v87; // x24
  UserServantEntity_o *targetInUserServantEntity; // x26
  System_String_o *v89; // x25
  System_String_o *v90; // x29
  System_String_o *v91; // x27
  CommonConfirmDialog_ClickDelegate_o *v92; // x28
  const MethodInfo *v93; // [xsp+18h] [xbp-168h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+30h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+50h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+70h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+90h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+B0h] [xbp-D0h]
  bool isRecover; // [xsp+D4h] [xbp-ACh] BYREF
  int64_t recoverAt; // [xsp+D8h] [xbp-A8h] BYREF
  System_String_o *v101; // [xsp+E0h] [xbp-A0h] BYREF
  System_String_o *v102; // [xsp+E8h] [xbp-98h] BYREF
  System_String_o *v103; // [xsp+F0h] [xbp-90h] BYREF
  System_String_o *v104; // [xsp+F8h] [xbp-88h] BYREF
  System_String_o *afterTime; // [xsp+100h] [xbp-80h] BYREF
  System_String_o *beforeTime; // [xsp+108h] [xbp-78h] BYREF
  System_String_o *v107; // [xsp+110h] [xbp-70h] BYREF
  System_String_o *v108; // [xsp+118h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  v3 = obj;
  if ( (byte_4C1CD8A & 1) == 0 )
  {
    sub_1C3B764(&CommonConfirmDialog_ClickDelegate_TypeInfo, obj);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantClassMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v7);
    sub_1C3B764(&Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__, v8);
    sub_1C3B764(&Method_EventServantFatigueListViewManager_OnClickSelectObject__, v9);
    sub_1C3B764(&EventServantFatigueListViewObject_TypeInfo, v10);
    sub_1C3B764(&LocalizationManager_TypeInfo, v11);
    sub_1C3B764(&NetworkManager_TypeInfo, v12);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C3B764(&StringLiteral_11864/*"SHOP_SELL_SERVANT"*/, v16);
    sub_1C3B764(&StringLiteral_11856/*"SHOP_SCENE_VOICE_SELL"*/, v17);
    sub_1C3B764(&StringLiteral_11854/*"SHOP_SCENE_VOICE_RARE_PRI"*/, v18);
    sub_1C3B764(&StringLiteral_11784/*"SHOP_BUY_SUCCESS"*/, v19);
    sub_1C3B764(&StringLiteral_1/*""*/, v20);
    sub_1C3B764(&StringLiteral_11782/*"SHOP_BUY_STONE_FRAGMENTS"*/, v21);
    byte_4C1CD8A = 1;
  }
  v107 = 0LL;
  v108 = 0LL;
  afterTime = 0LL;
  beforeTime = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  recoverAt = 0LL;
  isRecover = 0;
  fatigueRecoveryConfirmationDialog = (__int64)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  fatigueRecoveryConfirmationDialog = (__int64)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)fatigueRecoveryConfirmationDialog,
                                                 0LL);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fatigueRecoveryConfirmationDialog, 1, 0LL);
  v23 = Method_EventServantFatigueListViewManager_OnClickSelectObject__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectObject__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1C3B77C(Method_EventServantFatigueListViewManager_OnClickSelectObject__);
  v24 = (System_Reflection_MethodBase_o *)sub_1C3B748(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0LL);
  if ( !v3 )
    goto LABEL_56;
  methodPtr_low = LOBYTE(EventServantFatigueListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_56;
  if ( (EventServantFatigueListViewObject_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewObject_TypeInfo )
    goto LABEL_56;
  Item = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)v3, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1C3B708(&this->fields.targetInUserServantEntity);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1C3B708(&this->fields.targetOutUserServantEntity);
  fatigueRecoveryConfirmationDialog = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fatigueRecoveryConfirmationDialog,
    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  fatigueRecoveryConfirmationDialog = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  fatigueRecoveryConfirmationDialog = (__int64)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  obj = (ListViewObject_o *)this->fields.targetRecoveryFatigueItem;
  if ( !obj )
    goto LABEL_56;
  v28 = *(_QWORD *)&obj->fields.basePosition.fields.z;
  if ( v28 )
  {
    v29 = *(_OWORD *)(v28 + 32);
    *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
    *(_OWORD *)&v98.fields.fakeValue = v29;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v97 = v98;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v97, 0LL);
    if ( !Item )
      goto LABEL_56;
    userServantEntity = Item->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_56;
    v31 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    v32 = fatigueRecoveryConfirmationDialog;
    *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v96.fields.fakeValue = v31;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v96, 0LL);
    if ( v32 == fatigueRecoveryConfirmationDialog )
    {
      afterTime = (System_String_o *)StringLiteral_1/*""*/;
      beforeTime = (System_String_o *)StringLiteral_1/*""*/;
      IsMatchIndividuality_31654432 = EventServantFatigueListViewItem__IsMatchIndividuality_31654432(
                                        Item,
                                        this->fields.targetRecoveryFatigueItem,
                                        v33);
      EventServantFatigueListViewManager__GetOutRecoveryTime(
        this,
        Item->fields.fatigueTime,
        &beforeTime,
        &afterTime,
        IsMatchIndividuality_31654432,
        v35);
      targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
      if ( targetRecoveryFatigueItem )
      {
        this->fields.targetOutUserServantEntity = targetRecoveryFatigueItem->fields.userServantEntity;
        sub_1C3B708(&this->fields.targetOutUserServantEntity);
        v37 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        fatigueRecoveryConfirmationDialog = (__int64)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11864/*"SHOP_SELL_SERVANT"*/,
                                                       0LL);
        if ( this->fields.targetRecoveryFatigueItem )
        {
          v38 = (System_String_o *)fatigueRecoveryConfirmationDialog;
          Name = (Il2CppObject *)EventServantRecoveryFatigueItem__get_Name(this->fields.targetRecoveryFatigueItem, 0LL);
          v40 = System_String__Format(v38, Name, 0LL);
          v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11854/*"SHOP_SCENE_VOICE_RARE_PRI"*/, 0LL);
          targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
          outAfterTime = afterTime;
          v43 = beforeTime;
          v45 = v41;
          func = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3B9B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            func,
            (Il2CppObject *)this,
            Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
            0LL);
          if ( v37 )
          {
            FatigueRecoveryConfirmationDialog__Setup(
              v37,
              v40,
              v45,
              0LL,
              (System_String_o *)StringLiteral_1/*""*/,
              (System_String_o *)StringLiteral_1/*""*/,
              targetOutUserServantEntity,
              v43,
              outAfterTime,
              1,
              func,
              v93);
            return;
          }
        }
      }
LABEL_56:
      sub_1C3B9C0(fatigueRecoveryConfirmationDialog, obj);
    }
    v59 = this->fields.targetRecoveryFatigueItem;
    if ( !v59 )
      goto LABEL_56;
    v60 = v59->fields.userServantEntity;
    if ( v60 )
    {
      v61 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
      *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v98.fields.fakeValue = v61;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v95 = v98;
      fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(
                                            &v95,
                                            0LL);
      v62 = Item->fields.userServantEntity;
      if ( !v62 )
        goto LABEL_56;
      v63 = *(_OWORD *)&v62->fields.id.fields.fakeValue;
      *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)&v62->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v94.fields.fakeValue = v63;
      if ( fatigueRecoveryConfirmationDialog != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(
                                                  &v94,
                                                  0LL) )
      {
        v103 = (System_String_o *)StringLiteral_1/*""*/;
        v104 = (System_String_o *)StringLiteral_1/*""*/;
        v65 = EventServantFatigueListViewItem__IsMatchIndividuality_31654432(
                Item,
                this->fields.targetRecoveryFatigueItem,
                v64);
        EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v104, &v103, v65, v66);
        v101 = (System_String_o *)StringLiteral_1/*""*/;
        v102 = (System_String_o *)StringLiteral_1/*""*/;
        fatigueRecoveryConfirmationDialog = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !fatigueRecoveryConfirmationDialog )
          goto LABEL_56;
        fatigueRecoveryConfirmationDialog = (__int64)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        v67 = this->fields.targetRecoveryFatigueItem;
        if ( !v67 )
          goto LABEL_56;
        v68 = v67->fields.userServantEntity;
        if ( !v68 )
          goto LABEL_56;
        v69 = (UserEventServantFatigueMaster_o *)fatigueRecoveryConfirmationDialog;
        eventId = this->fields.eventId;
        v72 = *(_QWORD *)&v68->fields.svtId.fields.currentCryptoKey;
        v71 = *(_QWORD *)&v68->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v109.fields.currentCryptoKey = v72;
        *(_QWORD *)&v109.fields.fakeValue = v71;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                              v109,
                                              0LL);
        if ( !v69 )
          goto LABEL_56;
        FatigueInfo = UserEventServantFatigueMaster__GetFatigueInfo(
                        v69,
                        &recoverAt,
                        &isRecover,
                        eventId,
                        fatigueRecoveryConfirmationDialog,
                        0LL);
        v75 = 0LL;
        if ( FatigueInfo )
        {
          v76 = recoverAt;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( v76 <= NetworkManager__getTime(0LL) )
            v75 = 0LL;
          else
            v75 = recoverAt;
        }
        IsMatchIndividuality = EventServantFatigueListViewManager__IsMatchIndividuality(this, v74);
        EventServantFatigueListViewManager__GetOutRecoveryTime(this, v75, &v102, &v101, IsMatchIndividuality, v78);
        this->fields.targetInUserServantEntity = Item->fields.userServantEntity;
        fatigueRecoveryConfirmationDialog = sub_1C3B708(&this->fields.targetInUserServantEntity);
        v79 = this->fields.targetRecoveryFatigueItem;
        if ( !v79 )
          goto LABEL_56;
        this->fields.targetOutUserServantEntity = v79->fields.userServantEntity;
        sub_1C3B708(&this->fields.targetOutUserServantEntity);
        v80 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        fatigueRecoveryConfirmationDialog = (__int64)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11784/*"SHOP_BUY_SUCCESS"*/,
                                                       0LL);
        if ( !this->fields.targetRecoveryFatigueItem )
          goto LABEL_56;
        v81 = (System_String_o *)fatigueRecoveryConfirmationDialog;
        v82 = (Il2CppObject *)EventServantRecoveryFatigueItem__get_Name(this->fields.targetRecoveryFatigueItem, 0LL);
        v83 = System_String__Format(v81, v82, 0LL);
        v84 = LocalizationManager__Get((System_String_o *)StringLiteral_11782/*"SHOP_BUY_STONE_FRAGMENTS"*/, 0LL);
        v86 = v103;
        v85 = v104;
        targetInUserServantEntity = this->fields.targetInUserServantEntity;
        v87 = this->fields.targetOutUserServantEntity;
        v90 = v101;
        v89 = v102;
        v91 = v84;
        v92 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3B9B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v92,
          (Il2CppObject *)this,
          Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
          0LL);
        if ( !v80 )
          goto LABEL_56;
        FatigueRecoveryConfirmationDialog__Setup(
          v80,
          v83,
          v91,
          targetInUserServantEntity,
          v85,
          v86,
          v87,
          v89,
          v90,
          1,
          v92,
          v93);
      }
    }
  }
  else
  {
    v107 = (System_String_o *)StringLiteral_1/*""*/;
    v108 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !Item )
      goto LABEL_56;
    v47 = EventServantFatigueListViewItem__IsMatchIndividuality_31654432(
            Item,
            (EventServantRecoveryFatigueItem_o *)obj,
            v27);
    EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v108, &v107, v47, v48);
    this->fields.targetInUserServantEntity = Item->fields.userServantEntity;
    sub_1C3B708(&this->fields.targetInUserServantEntity);
    v49 = this->fields.fatigueRecoveryConfirmationDialog;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    fatigueRecoveryConfirmationDialog = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11856/*"SHOP_SCENE_VOICE_SELL"*/, 0LL);
    if ( !this->fields.targetRecoveryFatigueItem )
      goto LABEL_56;
    v50 = (System_String_o *)fatigueRecoveryConfirmationDialog;
    v51 = (Il2CppObject *)EventServantRecoveryFatigueItem__get_Name(this->fields.targetRecoveryFatigueItem, 0LL);
    v52 = System_String__Format(v50, v51, 0LL);
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11854/*"SHOP_SCENE_VOICE_RARE_PRI"*/, 0LL);
    v54 = this->fields.targetInUserServantEntity;
    v56 = v107;
    v55 = v108;
    v57 = v53;
    v58 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3B9B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v58,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
      0LL);
    if ( !v49 )
      goto LABEL_56;
    FatigueRecoveryConfirmationDialog__Setup(
      v49,
      v52,
      v57,
      v54,
      v55,
      v56,
      0LL,
      (System_String_o *)StringLiteral_1/*""*/,
      (System_String_o *)StringLiteral_1/*""*/,
      1,
      v58,
      v93);
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
  EventServantFatigueListViewManager___c__DisplayClass107_0_o *v25; // x19
  __int64 SelfUserGame; // x0
  __int64 v27; // x1
  __int64 methodPtr_low; // x9
  EventServantFatigueListViewItem_o **p_selectItem; // x20
  int64_t v30; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v32; // q1
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  const MethodInfo *v35; // x2
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  Il2CppObject *Entity; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v42; // x25
  System_String_o *v43; // x21
  System_String_o *v44; // x22
  System_Object_array *v45; // x23
  int32_t Rarity; // w26
  Il2CppObject *v47; // x26
  Il2CppObject *v48; // x26
  int32_t v49; // w0
  Il2CppObject *v50; // x24
  int32_t v51; // w0
  Il2CppObject *v52; // x24
  Il2CppObject *v53; // x24
  EventServantFatigueListViewItem_o *v54; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v55; // x9
  ServantEntity_o *servantEntity; // x20
  Il2CppObject *v57; // x20
  System_String_o *v58; // x20
  System_String_o *v59; // x22
  System_String_o *v60; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v62; // x25
  __int64 v63; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4C1CDA5 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, obj);
    sub_1C3B764(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1C3B764(&Method_EventServantFatigueListViewManager_OnClickSelectPush__, v10);
    sub_1C3B764(&EventServantFatigueListViewObject_TypeInfo, v11);
    sub_1C3B764(&LocalizationManager_TypeInfo, v12);
    sub_1C3B764(&object___TypeInfo, v13);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1C3B764(&Rarity_TypeInfo, v16);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1C3B764(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__, v19);
    sub_1C3B764(&EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo, v20);
    sub_1C3B764(&StringLiteral_12145/*"SUMMON_QP_LIMIT_WARNING_WARNING2"*/, v21);
    sub_1C3B764(&StringLiteral_12143/*"SUMMON_QP_LIMIT_WARNING_TITLE2"*/, v22);
    sub_1C3B764(&StringLiteral_12144/*"SUMMON_QP_LIMIT_WARNING_WARNING"*/, v23);
    sub_1C3B764(&StringLiteral_12146/*"SUMMON_RESULT_AUTOSALE_MSG"*/, v24);
    byte_4C1CDA5 = 1;
  }
  v25 = (EventServantFatigueListViewManager___c__DisplayClass107_0_o *)sub_1C3B9B0(EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo);
  EventServantFatigueListViewManager___c__DisplayClass107_0___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_62;
  v25->fields.__4__this = this;
  SelfUserGame = sub_1C3B708(&v25->fields);
  if ( !obj )
    goto LABEL_62;
  methodPtr_low = LOBYTE(EventServantFatigueListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    SelfUserGame = sub_1C3BC80(obj);
    goto LABEL_64;
  }
  v25->fields.selectItem = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)obj, 0LL);
  p_selectItem = &v25->fields.selectItem;
  sub_1C3B708(&v25->fields.selectItem);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_62;
  v30 = *(_QWORD *)(SelfUserGame + 120);
  if ( v30 )
  {
    if ( !*p_selectItem )
      goto LABEL_62;
    userServantEntity = (*p_selectItem)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_62;
    v32 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v65.fields.fakeValue = v32;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v64 = v65;
    if ( v30 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v64, 0LL) )
      goto LABEL_14;
    v36 = Method_EventServantFatigueListViewManager_OnClickSelectPush__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
      v36 = (_QWORD *)sub_1C3B77C(Method_EventServantFatigueListViewManager_OnClickSelectPush__);
    v37 = (System_Reflection_MethodBase_o *)sub_1C3B748(v36, v36[4]);
    OverwriteAssetSoundName__PlaySystemSe(v37, 0, 0, 0LL);
    SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_62;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
               v30,
               (const MethodInfo_329D3A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_62;
    v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v66.fields.currentCryptoKey = klass;
    *(_QWORD *)&v66.fields.fakeValue = monitor;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v66, 0LL);
    if ( !v39 )
      goto LABEL_62;
    v42 = DataMasterBase_object__object__int___GetEntity(
            v39,
            SelfUserGame,
            (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SUMMON_RESULT_AUTOSALE_MSG"*/, 0LL);
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SUMMON_QP_LIMIT_WARNING_WARNING2"*/, 0LL);
    v45 = (System_Object_array *)sub_1C3B80C(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v45 )
LABEL_62:
      sub_1C3B9C0(SelfUserGame, v27);
    v47 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C3B8A0(SelfUserGame, v45->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( !v45->max_length )
      goto LABEL_64;
    v45->m_Items[0] = v47;
    SelfUserGame = sub_1C3B708(v45->m_Items);
    if ( !v42 )
      goto LABEL_62;
    SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)v42, 0LL);
    v48 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C3B8A0(SelfUserGame, v45->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v45->max_length <= 1 )
      goto LABEL_64;
    v45->m_Items[1] = v48;
    sub_1C3B708(&v45->m_Items[1]);
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
            0LL);
    SelfUserGame = (__int64)ServantEntity__getName((ServantEntity_o *)v42, v49, -1, 1, 0LL);
    v50 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C3B8A0(SelfUserGame, v45->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v45->max_length <= 2 )
      goto LABEL_64;
    v45->m_Items[2] = v50;
    SelfUserGame = sub_1C3B708(&v45->m_Items[2]);
    if ( !*p_selectItem )
      goto LABEL_62;
    SelfUserGame = (__int64)(*p_selectItem)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    v51 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
    SelfUserGame = (__int64)Rarity__getRarityType(v51, 0LL);
    v52 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C3B8A0(SelfUserGame, v45->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v45->max_length <= 3 )
      goto LABEL_64;
    v45->m_Items[3] = v52;
    SelfUserGame = sub_1C3B708(&v45->m_Items[3]);
    if ( !*p_selectItem )
      goto LABEL_62;
    SelfUserGame = (__int64)(*p_selectItem)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
    v53 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C3B8A0(SelfUserGame, v45->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v45->max_length <= 4 )
      goto LABEL_64;
    v45->m_Items[4] = v53;
    SelfUserGame = sub_1C3B708(&v45->m_Items[4]);
    v54 = *p_selectItem;
    if ( !*p_selectItem )
      goto LABEL_62;
    v55 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v54->fields.userServantEntity;
    if ( !v55 )
      goto LABEL_62;
    servantEntity = v54->fields.servantEntity;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v55[6], 0LL);
    if ( !servantEntity )
      goto LABEL_62;
    SelfUserGame = (__int64)ServantEntity__getName(servantEntity, SelfUserGame, -1, 1, 0LL);
    v57 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C3B8A0(SelfUserGame, v45->obj.klass->_1.element_class);
      if ( !SelfUserGame )
      {
LABEL_65:
        v63 = sub_1C3B9E4();
        sub_1C3B88C(v63, 0LL);
      }
    }
    if ( v45->max_length > 5 )
    {
      v45->m_Items[5] = v57;
      sub_1C3B708(&v45->m_Items[5]);
      v58 = System_String__Format_63383120(v44, v45, 0LL);
      v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SUMMON_QP_LIMIT_WARNING_WARNING"*/, 0LL);
      v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12143/*"SUMMON_QP_LIMIT_WARNING_TITLE2"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v62 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3B9B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v62,
        (Il2CppObject *)v25,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__,
        0LL);
      SelfUserGame = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        SelfUserGame = (__int64)BalanceConfig_TypeInfo;
      }
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_31232212(
          (CommonUI_o *)Instance,
          v43,
          v58,
          v59,
          v60,
          v62,
          *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 488LL),
          *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 500LL),
          15.0,
          700,
          0,
          480,
          -162.5,
          0,
          0,
          240,
          0,
          0LL);
        return;
      }
      goto LABEL_62;
    }
LABEL_64:
    sub_1C3B9C8(SelfUserGame, v27);
  }
LABEL_14:
  v33 = Method_EventServantFatigueListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v33 = (_QWORD *)sub_1C3B77C(Method_EventServantFatigueListViewManager_OnClickSelectPush__);
  v34 = (System_Reflection_MethodBase_o *)sub_1C3B748(v33, v33[4]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 8, 0, 0LL);
  EventServantFatigueListViewManager__PushRequest(this, *p_selectItem, v35);
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

  if ( (byte_4C1CD9A & 1) == 0 )
  {
    sub_1C3B764(&Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__, method);
    byte_4C1CD9A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C3B9C0(v5, v6);
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

  if ( (byte_4C1CD98 & 1) == 0 )
  {
    sub_1C3B764(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_EventServantFatigueListViewManager_EndSelectSortKind__, v3);
    sub_1C3B764(&Method_EventServantFatigueListViewManager_OnClickSortButton__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C1CD98 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EventServantFatigueListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C3B77C(Method_EventServantFatigueListViewManager_OnClickSortButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C3B9B0(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1C3B9C0(v12, v13);
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

  if ( (byte_4C1CD91 & 1) == 0 )
  {
    sub_1C3B764(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_1C3B764(&Method_EventServantFatigueListViewManager_EndShowServant__, v5);
    sub_1C3B764(&Method_EventServantFatigueListViewManager_OnLongPushListView__, v6);
    sub_1C3B764(&EventServantFatigueListViewObject_TypeInfo, v7);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4C1CD91 = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v10 = Method_EventServantFatigueListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C3B77C(Method_EventServantFatigueListViewManager_OnLongPushListView__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C3B748(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
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
    this->fields.statusShowUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v22, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = v16->fields.userServantEntity;
    v20 = (CommonUI_o *)Instance;
    v21 = (ServantStatusDialog_EndDelegate_o *)sub_1C3B9B0(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v21,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndShowServant__,
      0LL);
    if ( !v20 )
LABEL_16:
      sub_1C3B9C0(Item, v13);
    CommonUI__OpenServantStatusDialog_31242340(v20, 0, v19, v21, 0LL);
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

  if ( (byte_4C1CD89 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1CD89 = 1;
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
          sub_1C3B9C0(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_1C3B708(&this->fields.CallbackFunc2);
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

  if ( (byte_4C1CDA6 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1C3B764(&Method_EventServantFatigueListViewManager_EndPushRequest__, v5);
    sub_1C3B764(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4C1CDA6 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v51, 0LL);
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_EndPushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1C3B9C0(limitCountSupport, v14);
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

  if ( (byte_4C1CD80 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__, v3);
    byte_4C1CD80 = 1;
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
                                                                  (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
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
    sub_1C3B9C0(ObjectList, v5);
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

  if ( (byte_4C1CD88 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C3B764(&Method_EventServantFatigueListViewManager_OnMoveEnd__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__, v9);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v10);
    byte_4C1CD88 = 1;
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
               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
      v17 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_EventServantFatigueListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      EventServantFatigueListViewObject__Init_31681984((EventServantFatigueListViewObject_o *)Item, mode, v17, 0LL);
      if ( size == ++v15 )
        return;
    }
LABEL_10:
    sub_1C3B9C0(ObjectList, v12);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
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

  if ( (byte_4C1CD97 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17849/*"componentPackage"*/, method);
    sub_1C3B764(&StringLiteral_17848/*"componentHash"*/, v3);
    byte_4C1CD97 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1C3B9C0(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17848/*"componentHash"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17849/*"componentPackage"*/;
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

  if ( (byte_4C1CD82 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_11860/*"SHOP_SCENE_VOICE_STONE"*/, v3);
    sub_1C3B764(&StringLiteral_11858/*"SHOP_SCENE_VOICE_SPECIAL"*/, v4);
    sub_1C3B764(&StringLiteral_11859/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/, v5);
    sub_1C3B764(&StringLiteral_11875/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/, v6);
    byte_4C1CD82 = 1;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11875/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/;
      goto LABEL_16;
    case 1:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11859/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/;
      goto LABEL_16;
    case 2:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11858/*"SHOP_SCENE_VOICE_SPECIAL"*/;
      goto LABEL_16;
    case 3:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11860/*"SHOP_SCENE_VOICE_STONE"*/;
LABEL_16:
      v9 = LocalizationManager__Get((System_String_o *)*v8, 0LL);
      if ( !recoveryFatigueInfoMsgLabel )
        sub_1C3B9C0(v9, v10);
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
  sub_1C3B708(&this->fields.Callback);
  EventServantFatigueListViewManager__SetMode_31665036(this, mode, v6);
}


void __fastcall EventServantFatigueListViewManager__SetMode_31624404(
        EventServantFatigueListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.CallbackFunc2 = callback;
  sub_1C3B708(&this->fields.CallbackFunc2);
  EventServantFatigueListViewManager__SetMode_31665036(this, mode, v6);
}


void __fastcall EventServantFatigueListViewManager__SetMode_31665036(
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
  if ( (byte_4C1CD87 & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_1C3B764(&EventServantFatigueListViewObject_TypeInfo, obj);
    byte_4C1CD87 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventServantFatigueListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    sub_1C3B9C0(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventServantFatigueListViewObject__Init_31680964((EventServantFatigueListViewObject_o *)obj, v7, 0LL);
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

  if ( (byte_4C1CD9B & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&StringLiteral_17879/*"contain"*/, v3);
    sub_1C3B764(&StringLiteral_17970/*"cpu.brand"*/, v4);
    sub_1C3B764(&StringLiteral_17923/*"cord_n"*/, v5);
    sub_1C3B764(&StringLiteral_17913/*"convertJsonStringToMap"*/, v6);
    sub_1C3B764(&StringLiteral_17930/*"costCurrency"*/, v7);
    sub_1C3B764(&StringLiteral_17876/*"consumeType"*/, v8);
    byte_4C1CD9B = 1;
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
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17930/*"costCurrency"*/ : &StringLiteral_17923/*"cord_n"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v18 = (System_String_o **)&StringLiteral_17876/*"consumeType"*/;
      v19 = (System_String_o **)&StringLiteral_17879/*"contain"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17970/*"cpu.brand"*/ : &StringLiteral_17913/*"convertJsonStringToMap"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v18 = (System_String_o **)&StringLiteral_17879/*"contain"*/;
      v19 = (System_String_o **)&StringLiteral_17876/*"consumeType"*/;
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
      sub_1C3B9C0(sort, v10);
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

  if ( (byte_4C1CD81 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_18003/*"csIBM1026"*/, *(_QWORD *)&modeKind);
    sub_1C3B764(&StringLiteral_18004/*"csIBM273"*/, v5);
    sub_1C3B764(&StringLiteral_17989/*"criFsWebInstaller_Create() failed."*/, v6);
    sub_1C3B764(&StringLiteral_17992/*"critobj01"*/, v7);
    sub_1C3B764(&StringLiteral_18005/*"csIBM277"*/, v8);
    sub_1C3B764(&StringLiteral_18006/*"csIBM278"*/, v9);
    sub_1C3B764(&StringLiteral_17991/*"crimson"*/, v10);
    sub_1C3B764(&StringLiteral_17990/*"criMovie"*/, v11);
    byte_4C1CD81 = 1;
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
  v13 = &StringLiteral_18005/*"csIBM277"*/;
  if ( modeKind )
    v13 = &StringLiteral_18006/*"csIBM278"*/;
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
  v14 = &StringLiteral_17991/*"crimson"*/;
  if ( modeKind != 1 )
    v14 = &StringLiteral_17992/*"critobj01"*/;
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
  v15 = &StringLiteral_17989/*"criFsWebInstaller_Create() failed."*/;
  if ( modeKind != 2 )
    v15 = &StringLiteral_17990/*"criMovie"*/;
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
  v16 = &StringLiteral_18003/*"csIBM1026"*/;
  if ( modeKind != 3 )
    v16 = &StringLiteral_18004/*"csIBM273"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v16, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_1C3B9C0(statusTabButton, *(_QWORD *)&modeKind);
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
                                               0LL,
                                               setupInfo->fields.servantFilterEventCampaignIds,
                                               setupInfo->fields.servantFilterEventIds,
                                               0LL,
                                               0LL,
                                               0,
                                               0LL);
      sub_1C3B708(&this->fields.alignedBonusFilterInfos);
      v5 = this->fields.sort;
      sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                                 (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                                 0LL);
      if ( v5 )
      {
        v5->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
        sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
        if ( sort )
        {
          sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
          v6 = this->fields.sort;
          if ( v6 )
          {
            if ( sort )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, v6->fields.isBonusKind, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_10:
    sub_1C3B9C0(sort, setupInfo);
  }
  if ( !sort )
    goto LABEL_10;
  sort->fields.isBonusKind = 0;
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1C3B708(&this->fields.alignedBonusFilterInfos);
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
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  Il2CppObject *Request_object; // x0
  __int64 v12; // x1
  System_Int64_array *v13; // x1
  System_Int64_array *v14; // x2
  bool v15; // w4
  bool v16; // w5
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C1CDA2 & 1) == 0 )
  {
    sub_1C3B764(&Method_EventServantFatigueListViewManager_EndStatusSync__, callback);
    sub_1C3B764(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4C1CDA2 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v18 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( EventServantFatigueListViewManager__GetSwapChoiceList(this, &choiceList, &v18, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1C3B708(&this->fields.requestCallback);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v17,
                         (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v14 = v18;
        v13 = choiceList;
        v16 = 1;
        v15 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1C3B9C0(Request_object, v12);
    }
  }
  else if ( modeKind == 1 && EventServantFatigueListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1C3B708(&this->fields.requestCallback);
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v10,
                       (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v14 = unlockList;
      v13 = lockList;
      v15 = 1;
      v16 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v13, v14, 0, v15, v16, 0LL);
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

  if ( (byte_4C1CD7D & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C1CD7D = 1;
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

  if ( (byte_4C1CD7E & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__get_Current__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    byte_4C1CD7E = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)EventServantFatigueListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( ObjectList )
  {
    v9 = this->fields.objectList;
    if ( !v9 )
      sub_1C3B9C0(ObjectList, v8);
    if ( v9->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v11,
        ObjectList,
        (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v11,
                (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__) )
      {
        if ( !v11.fields._current )
          sub_1C3B9C0(0LL, v10);
        EventServantFatigueListViewObject__UpdateDisp((EventServantFatigueListViewObject_o *)v11.fields._current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v11,
        (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__);
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

  if ( (byte_4C1CD75 & 1) == 0 )
  {
    sub_1C3B764(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo, value);
    byte_4C1CD75 = 1;
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
    v8 = sub_1C76C54(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventServantFatigueListViewManager_o *)sub_1C3BC80(v7);
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

  if ( (byte_4C1CD77 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, value);
    byte_4C1CD77 = 1;
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
    v8 = sub_1C76C54(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventServantFatigueListViewManager_o *)sub_1C3BC80(v7);
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
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4C1CD7C & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1C3B764(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo, v7);
    byte_4C1CD7C = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
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
                                                                  (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        break;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
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
        objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_42215272(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)objectList,
                                                                    0LL);
        if ( ((unsigned __int8)objectList & 1) == 0 )
          continue;
      }
      if ( !v8 )
        break;
      items = v8->fields._items;
      v15 = Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      v16 = v8->fields._size;
      if ( (unsigned int)v16 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v13,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + v16;
        v8->fields._size = v16 + 1;
        v17[4] = (Il2CppClass *)v13;
        sub_1C3B708(v17 + 4);
      }
      if ( size == ++v12 )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v8;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_18:
    sub_1C3B9C0(objectList, v9);
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
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  System_Collections_Generic_List_object__o *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_4C1CD7B & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1C3B764(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo, v7);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v8);
    byte_4C1CD7B = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
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
               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                    (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
        if ( !v9 )
          break;
        items = v9->fields._items;
        v16 = Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        v17 = v9->fields._size;
        v18 = objectList;
        if ( (unsigned int)v17 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)objectList,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + v17;
          v9->fields._size = v17 + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_1C3B708(v19 + 4);
        }
      }
      if ( size == ++v13 )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v9;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1C3B9C0(objectList, v10);
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

  if ( (byte_4C1CD76 & 1) == 0 )
  {
    sub_1C3B764(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo, value);
    byte_4C1CD76 = 1;
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
    v8 = sub_1C76C54(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventServantFatigueListViewManager_o *)sub_1C3BC80(v7);
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

  if ( (byte_4C1CD78 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, value);
    byte_4C1CD78 = 1;
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
    v8 = sub_1C76C54(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C3BC80(v7);
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
  sub_1C3B708(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A74B08;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A74AB0;
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
  if ( (byte_4C1CDA8 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1C3B764(&EventServantFatigueListViewManager_ResultKind_TypeInfo, v9);
    byte_4C1CDA8 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             EventServantFatigueListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&index,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v14, callback, object);
}


void __fastcall EventServantFatigueListViewManager_CallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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
  sub_1C3B708(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A74B74;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A74B2C;
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
  if ( (byte_4C1CDA9 & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, isRequest);
    byte_4C1CDA9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall EventServantFatigueListViewManager_RequestCallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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

  if ( (byte_4C1CDAA & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDecide);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__, v6);
    byte_4C1CDAA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1C3B708(&this->fields.__9__1);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_31232440(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1C3B9C0(Instance, v8);
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
    sub_1C3B9C0(0LL, method);
  EventServantFatigueListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}