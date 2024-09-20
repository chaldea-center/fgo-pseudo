void __fastcall EventServantFatigueListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v4; // x20
  struct EventServantFatigueListViewManager_StaticFields *static_fields; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5F40C & 1) == 0 )
  {
    sub_1B885B0(&EventServantFatigueListViewManager_TypeInfo);
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&StringLiteral_6211/*"EventServantFatigueList"*/);
    byte_4A5F40C = 1;
  }
  EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6211/*"EventServantFatigueList"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventServantFatigueListViewManager_TypeInfo->static_fields,
    StringLiteral_6211/*"EventServantFatigueList"*/,
    v1,
    v2);
  SORT_SAVE_KEY = EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v4 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v4, SORT_SAVE_KEY, 3, 0, 0LL);
  static_fields = EventServantFatigueListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->servantSortStatus, (int32_t)v4, v6, v7);
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
  if ( (byte_4A5F3F5 & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5F3F5 = 1;
  }
  if ( !result )
    goto LABEL_10;
  this = (EventServantFatigueListViewManager_o *)System_String__Equals_61715348(
                                                   result,
                                                   (System_String_o *)StringLiteral_22055/*"ng"*/,
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
    sub_1B8880C(this, result);
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

  if ( (byte_4A5F3F4 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__);
    sub_1B885B0(&Method_NetworkManager_getRequest_ServantRecoverySyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5F3F4 = 1;
  }
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_31;
  CommonConfirmDialog__Close(fatigueRecoveryConfirmationDialog, 0LL);
  if ( !isDecide )
    return;
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)NetworkManager__getRequest_object_(
                                                                 v6,
                                                                 (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_ServantRecoverySyncRequest___);
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
        fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                                       &v31,
                                                                       0LL);
        if ( v9 )
        {
          v18 = (int64_t)fatigueRecoveryConfirmationDialog;
          v19 = (ServantRecoverySyncRequest_o *)v9;
          v20 = eventId;
          v21 = idx;
          v22 = 0LL;
          goto LABEL_29;
        }
      }
    }
LABEL_31:
    sub_1B8880C(fatigueRecoveryConfirmationDialog, isDecide);
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
        fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                                       &v32,
                                                                       0LL);
        if ( v9 )
        {
          v22 = (int64_t)fatigueRecoveryConfirmationDialog;
          v19 = (ServantRecoverySyncRequest_o *)v9;
          v20 = v10;
          v21 = v30;
          v18 = 0LL;
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
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                                 &v34,
                                                                 0LL);
  v15 = this->fields.targetOutUserServantEntity;
  if ( !v15 )
    goto LABEL_31;
  v16 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
  v17 = fatigueRecoveryConfirmationDialog;
  *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v33.fields.fakeValue = v16;
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                                 &v33,
                                                                 0LL);
  if ( !v9 )
    goto LABEL_31;
  v18 = (int64_t)fatigueRecoveryConfirmationDialog;
  v19 = (ServantRecoverySyncRequest_o *)v9;
  v20 = v10;
  v21 = v14;
  v22 = (int64_t)v17;
LABEL_29:
  ServantRecoverySyncRequest__beginRequest(v19, v20, v21, v22, v18, 0LL);
}


void __fastcall EventServantFatigueListViewManager__CreateList(
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Object_o *fatigueRecoveryConfirmationDialog; // x24
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *fatigueRecoveryConfirmationDialogPrefab; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_GameObject_o *v30; // x24
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *Component_object; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  System_Int32_array *v38; // x23
  EventUpValSetupInfo_o *v39; // x21
  const MethodInfo *v40; // x2
  __int64 v41; // x23
  __int64 v42; // x28
  __int64 v43; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  UserServantEntity_o *v45; // x24
  __int128 v46; // q0
  int64_t v47; // x0
  int32_t v48; // w26
  int64_t v49; // x27
  EventServantFatigueListViewItem_o *v50; // x25
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x1
  struct EventServantRecoveryFatigueItem_o **p_targetRecoveryFatigueItem; // [xsp+0h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63[2]; // [xsp+30h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v70; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4A5F3E4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&EventServantFatigueListViewItem_TypeInfo);
    sub_1B885B0(&EventServantFatigueListViewManager_TypeInfo);
    sub_1B885B0(&EventUpValSetupInfo_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76172016);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4A5F3E4 = 1;
  }
  v8 = EventServantFatigueListViewManager_TypeInfo;
  memset(&v63[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v8 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v8->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  p_sort = &this->fields.sort;
  sub_1B88554(
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
  TitleInfoControl__setBackBtnSprite_37184884((TitleInfoControl_o *)sort, 1, 0, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity, 0, v14, v15);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity, 0, v16, v17);
  this->fields.eventId = eventId;
  this->fields.statusShowUserSvtId = -1LL;
  this->fields.targetRecoveryFatigueItem = targetItem;
  p_targetRecoveryFatigueItem = &this->fields.targetRecoveryFatigueItem;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.targetRecoveryFatigueItem,
    (int32_t)targetItem,
    v18,
    v19);
  this->fields.selectAfterCallback = afterCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectAfterCallback, (int32_t)afterCallback, v20, v21);
  this->fields.modeKind = 0;
  fatigueRecoveryConfirmationDialog = (UnityEngine_Object_o *)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = UnityEngine_Object__op_Equality(0LL, fatigueRecoveryConfirmationDialog, 0LL);
  if ( (sort & 1) != 0 )
  {
    fatigueRecoveryConfirmationDialogPrefab = (Il2CppObject *)this->fields.fatigueRecoveryConfirmationDialogPrefab;
    v64.fields.x = 0.0;
    v64.fields.y = 0.0;
    v64.fields.z = 0.0;
    v69 = UnityEngine_Quaternion__Internal_FromEulerRad(v64, 0LL);
    x = v69.fields.x;
    y = v69.fields.y;
    z = v69.fields.z;
    w = v69.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v65.fields.x = 0.0;
    v65.fields.y = 0.0;
    v65.fields.z = 0.0;
    v70.fields.x = x;
    v70.fields.y = y;
    v70.fields.z = z;
    v70.fields.w = w;
    sort = (__int64)UnityEngine_Object__Instantiate_object__49298104(
                      fatigueRecoveryConfirmationDialogPrefab,
                      v65,
                      v70,
                      (const MethodInfo_2F03AB8 *)Method_UnityEngine_Object_Instantiate_GameObject____76172016);
    if ( !sort )
      goto LABEL_62;
    v30 = (UnityEngine_GameObject_o *)sort;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)sort, 0LL);
    sort = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_62;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)sort, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v30, 0LL);
    if ( !sort )
      goto LABEL_62;
    v66.fields.x = 0.0;
    v66.fields.y = 0.0;
    v66.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)sort, v66, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v30, 0LL);
    if ( !sort )
      goto LABEL_62;
    v67.fields.x = 0.0;
    v67.fields.y = 0.0;
    v67.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)sort, v67, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v30, 0LL);
    if ( !sort )
      goto LABEL_62;
    v68.fields.x = 1.0;
    v68.fields.y = 1.0;
    v68.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)sort, v68, 0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v30,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___);
    this->fields.fatigueRecoveryConfirmationDialog = (struct FatigueRecoveryConfirmationDialog_o *)Component_object;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.fatigueRecoveryConfirmationDialog,
      (int32_t)Component_object,
      v33,
      v34);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v23, v24);
LABEL_33:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_62;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = sub_1B88658(int___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_62;
  v38 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
LABEL_57:
    sub_1B88814(sort, v11);
  *(_DWORD *)(sort + 32) = eventId;
  v39 = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_38910068(v39, v38, 1, 0, 0, 0LL);
  EventServantFatigueListViewManager__SetUpBonusFilterButton(this, v39, v40);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  sort = (__int64)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_62;
  sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_62;
  v41 = sort;
  if ( (int)*(_QWORD *)(sort + 24) >= 1 )
  {
    v42 = 0LL;
    v43 = (unsigned int)*(_QWORD *)(sort + 24) - 1LL;
    while ( *p_targetRecoveryFatigueItem )
    {
      userServantEntity = (*p_targetRecoveryFatigueItem)->fields.userServantEntity;
      v45 = *(UserServantEntity_o **)(v41 + 32 + 8 * v42);
      if ( userServantEntity )
      {
        v46 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v63[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v63[1].fields.fakeValue = v46;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v63, -1LL, 0LL);
        v63[1] = v63[0];
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v62 = v63[1];
      v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v62, 0LL);
      v48 = this->fields.eventId;
      v49 = v47;
      v50 = (EventServantFatigueListViewItem_o *)sub_1B887FC(EventServantFatigueListViewItem_TypeInfo);
      EventServantFatigueListViewItem___ctor(v50, v45, v48, v49, v39, targetItem, 0LL);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v53 = *(_QWORD *)(sort + 16);
      v54 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v53 )
        break;
      v55 = *(int *)(sort + 24);
      if ( (unsigned int)v55 >= *(_DWORD *)(v53 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v50,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = v53 + 8 * v55;
        *(_DWORD *)(sort + 24) = v55 + 1;
        *(_QWORD *)(v56 + 32) = v50;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v56 + 32), (int32_t)v50, v51, v52);
      }
      if ( v43 == v42 )
        goto LABEL_58;
      if ( ++v42 >= (unsigned __int64)*(unsigned int *)(v41 + 24) )
        goto LABEL_57;
    }
LABEL_62:
    sub_1B8880C(sort, v11);
  }
LABEL_58:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_62;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EventServantFatigueListViewManager__SetStatusKind(this, this->fields.modeKind, v58);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventServantFatigueListViewManager__SetFilterButtonImage(this, v59);
}


void __fastcall EventServantFatigueListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventServantFatigueListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4A5F3DE & 1) == 0 )
  {
    sub_1B885B0(&EventServantFatigueListViewManager_TypeInfo);
    byte_4A5F3DE = 1;
  }
  v2 = EventServantFatigueListViewManager_TypeInfo;
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v2 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1B8880C(0LL, v1);
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
    sub_1B8880C(0LL, v3);
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
  EventServantFatigueListViewManager__SetMode_46164184(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_46164184(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_46164184(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_46164184(this, 2, v5);
}


void __fastcall EventServantFatigueListViewManager__EndPushRequest(
        EventServantFatigueListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventServantFatigueListViewManager__ModifyList(this, 0, method);
  EventServantFatigueListViewManager__SetMode_46164184(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__EndSelectFilterKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A5F3FA & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F3FA = 1;
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
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_1B8880C(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)sort, 0LL, 0LL);
}


void __fastcall EventServantFatigueListViewManager__EndSelectSortKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5F3FE & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F3FE = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
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

  if ( (byte_4A5F3F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F3F7 = 1;
  }
  EventServantFatigueListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventServantFatigueListViewManager__ModifyList(this, 0, v4);
  EventServantFatigueListViewManager__SetMode_46164184(this, 2, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v7);
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
    sub_1B88554(p_requestCallback, 0, (int32_t)method, v3);
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w25
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__c *klass; // x8
  Il2CppClass *parent; // x23
  Il2CppClass *declaringType; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5F3F8 & 1) == 0 )
  {
    sub_1B885B0(&EventServantFatigueListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5F3F8 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      *(_QWORD *)&v14.fields.currentCryptoKey = declaringType;
      *(_QWORD *)&v14.fields.fakeValue = parent;
      ++v7;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL) == svtId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1B8880C(itemList, *(_QWORD *)&svtId);
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
  System_String_o *RestTime4; // x24
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  int recoveryRate; // w23
  int64_t Time; // x8
  float v26; // s0
  __int64 v27; // x10
  int64_t v28; // x21
  System_String_o *v29; // x20
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3

  if ( (byte_4A5F3F2 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11534/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/);
    sub_1B885B0(&StringLiteral_11546/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/);
    sub_1B885B0(&StringLiteral_11634/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/);
    byte_4A5F3F2 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1LL, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(RestTime4, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11546/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0LL);
    *beforeTime = v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)beforeTime, (int32_t)v16, v17, v18);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11534/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0LL);
    goto LABEL_23;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    sub_1B8880C(IsNullOrEmpty, v13);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)beforeTime, (int32_t)RestTime4, v14, v15);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v26 = (float)(recoveryFatigueTime - Time) / (float)((float)recoveryRate / 1000.0);
  v27 = (__int64)v26;
  if ( v26 == INFINITY )
    v27 = 0x8000000000000000LL;
  v28 = v27 + Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__GetRestTime4(v28, -1LL, 0LL);
LABEL_23:
  *afterTime = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)afterTime, (int32_t)v19, v20, v21);
  if ( isMatch )
  {
    v29 = *afterTime;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11634/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
    v31 = System_String__Concat_61707032(v29, v30, 0LL);
    *afterTime = v31;
    sub_1B88554((ServantStatusBattleListViewItem_o *)afterTime, (int32_t)v31, v32, v33);
  }
}


System_String_o *__fastcall EventServantFatigueListViewManager__GetIndividualityName(
        EventServantFatigueListViewManager_o *this,
        System_String_array *array,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v4; // x20
  System_Text_StringBuilder_o *appended; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  unsigned __int64 v8; // x21
  System_String_o *v9; // x0

  if ( (byte_4A5F3F1 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_11635/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/);
    byte_4A5F3F1 = 1;
  }
  v4 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0LL);
  if ( !array )
    goto LABEL_16;
  v7 = *(_QWORD *)&array->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
        sub_1B88814(appended, v6);
      if ( !v4 )
        break;
      appended = System_Text_StringBuilder__Append_60868928(v4, array->m_Items[v8++], 0LL);
      if ( (int)v8 < (signed int)array->max_length )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11635/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/, 0LL);
        appended = System_Text_StringBuilder__Append_60868928(v4, v9, 0LL);
      }
      LODWORD(v7) = array->max_length;
      if ( (__int64)v8 >= (int)v7 )
        goto LABEL_13;
    }
LABEL_16:
    sub_1B8880C(appended, v6);
  }
LABEL_13:
  if ( !v4 )
    goto LABEL_16;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v4->klass->vtable._3_ToString.method)(
                              v4,
                              v4->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


EventServantFatigueListViewItem_o *__fastcall EventServantFatigueListViewManager__GetItem(
        EventServantFatigueListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventServantFatigueListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5F3EB & 1) == 0 )
  {
    sub_1B885B0(&EventServantFatigueListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5F3EB = 1;
  }
  result = (EventServantFatigueListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventServantFatigueListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  System_String_o *RestTime4; // x24
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x21
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  System_String_o **v28; // x0
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  int individualityRate; // w23
  int64_t Time; // x8
  float v33; // s0
  __int64 v34; // x10
  int64_t v35; // x22
  System_String_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x20
  System_String_o *v40; // x0
  System_String_o *v41; // x0

  if ( (byte_4A5F3F3 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11534/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/);
    sub_1B885B0(&StringLiteral_11546/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/);
    sub_1B885B0(&StringLiteral_11634/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/);
    byte_4A5F3F3 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1LL, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(RestTime4, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11546/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0LL);
    *beforeTime = v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)beforeTime, (int32_t)v16, v17, v18);
    if ( isMatch )
    {
      v19 = *beforeTime;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11634/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
      v21 = System_String__Concat_61707032(v19, v20, 0LL);
      *beforeTime = v21;
      sub_1B88554((ServantStatusBattleListViewItem_o *)beforeTime, (int32_t)v21, v22, v23);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11534/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0LL);
    v27 = (int)v24;
    *afterTime = v24;
    v28 = afterTime;
LABEL_32:
    sub_1B88554((ServantStatusBattleListViewItem_o *)v28, v27, v25, v26);
    return;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    sub_1B8880C(IsNullOrEmpty, v13);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)beforeTime, (int32_t)RestTime4, v14, v15);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v33 = (float)((float)individualityRate / 1000.0) * (float)(recoveryFatigueTime - Time);
  v34 = (__int64)v33;
  if ( v33 == INFINITY )
    v34 = 0x8000000000000000LL;
  v35 = v34 + Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v36 = LocalizationManager__GetRestTime4(v35, -1LL, 0LL);
  *afterTime = v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)afterTime, (int32_t)v36, v37, v38);
  if ( isMatch )
  {
    v39 = *beforeTime;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_11634/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
    v41 = System_String__Concat_61707032(v39, v40, 0LL);
    v27 = (int)v41;
    *beforeTime = v41;
    v28 = beforeTime;
    goto LABEL_32;
  }
}


bool __fastcall EventServantFatigueListViewManager__GetSwapChoiceList(
        EventServantFatigueListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 methodPtr_low; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4A5F402 & 1) == 0 )
  {
    sub_1B885B0(&EventServantFatigueListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5F402 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventServantFatigueListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 193) )
      {
        if ( *(_BYTE *)(itemList + 162) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v39, 0LL);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v38, 0LL);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= v23->max_length )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1B8880C(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)choiceList, 0, v10, v11);
    v36 = unchoiceList;
    v35 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unchoiceList = v32;
    v36 = unchoiceList;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


bool __fastcall EventServantFatigueListViewManager__GetSwapLockList(
        EventServantFatigueListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 methodPtr_low; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4A5F401 & 1) == 0 )
  {
    sub_1B885B0(&EventServantFatigueListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5F401 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventServantFatigueListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 192) )
      {
        if ( *(_BYTE *)(itemList + 161) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v39, 0LL);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v38, 0LL);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= v23->max_length )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1B8880C(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lockList, 0, v10, v11);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v36, v35, v33, v34);
  return v28 > 0;
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

  if ( (byte_4A5F3DF & 1) == 0 )
  {
    sub_1B885B0(&EventServantFatigueListViewManager_TypeInfo);
    byte_4A5F3DF = 1;
  }
  v2 = EventServantFatigueListViewManager_TypeInfo;
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v2 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1B8880C(0LL, v1);
  ListViewSort__InitLoad(servantSortStatus, 0LL);
}


bool __fastcall EventServantFatigueListViewManager__IsMatchIndividuality(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  struct EventServantRecoveryFatigueItem_o *v7; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  struct System_Int32_array *targetIndividuality; // x24
  __int64 v10; // x8
  unsigned __int64 v11; // x25
  struct EventServantRecoveryFatigueItem_o *v12; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v14; // w20
  Il2CppObject *v15; // x21
  __int64 v16; // x22
  __int64 v17; // x23
  struct EventServantRecoveryFatigueItem_o *v18; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v19; // x8
  int32_t v20; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4A5F3F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F3F0 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    goto LABEL_26;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)targetRecoveryFatigueItem->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
  if ( !v6 )
    goto LABEL_26;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                v6,
                                &entity,
                                (int32_t)Instance,
                                (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v7 = this->fields.targetRecoveryFatigueItem;
    if ( !v7 )
      goto LABEL_26;
    eventFatigueRecoveryEnt = v7->fields.eventFatigueRecoveryEnt;
    if ( !eventFatigueRecoveryEnt )
      goto LABEL_26;
    targetIndividuality = eventFatigueRecoveryEnt->fields.targetIndividuality;
    if ( !targetIndividuality )
      goto LABEL_26;
    v10 = *(_QWORD *)&targetIndividuality->max_length;
    if ( (int)v10 >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)v10 )
          sub_1B88814(Instance, v4);
        v12 = this->fields.targetRecoveryFatigueItem;
        if ( !v12 )
          break;
        userServantEntity = v12->fields.userServantEntity;
        if ( !userServantEntity )
          break;
        v14 = targetIndividuality->m_Items[v11 + 1];
        v15 = entity;
        v17 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v16 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v23.fields.currentCryptoKey = v17;
        *(_QWORD *)&v23.fields.fakeValue = v16;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL);
        v18 = this->fields.targetRecoveryFatigueItem;
        if ( !v18 )
          break;
        v19 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v18->fields.userServantEntity;
        if ( !v19 )
          break;
        v20 = (int)Instance;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v19[8], 0LL);
        if ( !v15 )
          break;
        Instance = (DataManager_o *)ServantEntity__IsIndividuality(
                                      (ServantEntity_o *)v15,
                                      v20,
                                      (int32_t)Instance,
                                      v14,
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          LODWORD(v10) = targetIndividuality->max_length;
          if ( (__int64)++v11 < (int)v10 )
            continue;
        }
        return (unsigned __int8)Instance & 1;
      }
LABEL_26:
      sub_1B8880C(Instance, v4);
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
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 methodPtr_low; // x11
  EventServantFatigueListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v13; // q0
  int64_t v14; // x0
  Il2CppObject v15; // q0
  UnityEngine_Object_o *viewObject; // x21
  __int64 v17; // x1
  struct ListViewObject_o *v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4A5F3E8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&EventServantFatigueListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F3E8 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_37;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_37;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v21,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v22.fields._list = *(_OWORD *)&v21.fields.currentCryptoKey;
      v22.fields._current = (Il2CppObject *)v21.fields.fakeValue;
      while ( 1 )
      {
        v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v22,
               (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v8 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v22,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v22.fields._current
          && (methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v22.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventServantFatigueListViewItem_c *)v22.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = (EventServantFatigueListViewItem_o *)v22.fields._current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_1B8880C(v8, v9);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_1B8880C(v8, v9);
            v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v21.fields.fakeValue = v13;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v20 = v21;
            v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v20, 0LL);
            v15 = Entity[2];
            *(Il2CppObject *)&v19.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v19.fields.fakeValue = v15;
            if ( v14 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v19, 0LL) )
              EventServantFatigueListViewItem__ModifyItem(current, (UserServantEntity_o *)Entity, 0LL);
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
          sub_1B8880C(v8, v9);
LABEL_26:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v18 = current->fields.viewObject;
          if ( !v18 )
            sub_1B8880C(0LL, v17);
          ((void (__fastcall *)(struct ListViewObject_o *, EventServantFatigueListViewItem_o *, Il2CppMethodPointer))v18->klass->vtable._5_SetItem.method)(
            v18,
            current,
            v18->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_37:
    sub_1B8880C(Instance, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__ModifyList(
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
  __int64 methodPtr_low; // x10
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

  if ( (byte_4A5F3EA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&EventServantFatigueListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F3EA = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_33;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
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
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL);
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
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !sort )
            goto LABEL_33;
          v15 = sort;
          methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)methodPtr_low
            || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * methodPtr_low - 8) != EventServantFatigueListViewItem_TypeInfo )
          {
            goto LABEL_33;
          }
          v17 = *(_QWORD *)(sort + 120);
          if ( v17 )
          {
            v18 = *(_OWORD *)(v17 + 32);
            *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
            *(_OWORD *)&v27.fields.fakeValue = v18;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v25 = v27;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v25, 0LL);
            if ( sort == v13 )
              break;
          }
          if ( size == ++v14 )
            goto LABEL_29;
        }
        v19 = *(_QWORD *)(v15 + 120);
        if ( !v19 )
          break;
        v20 = *(_OWORD *)(v19 + 32);
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v19 + 16);
        *(_OWORD *)&v27.fields.fakeValue = v20;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v24 = v27;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v24, 0LL);
        EventServantFatigueListViewManager__ModifyLockItem(this, v21, 1, isIconSizeChangea, v22);
      }
LABEL_29:
      if ( ++v10 == (_DWORD)v7 )
        return;
      if ( v10 >= *(_DWORD *)(v8 + 24) )
        sub_1B88814(sort, isIconSizeChange);
    }
LABEL_33:
    sub_1B8880C(sort, isIconSizeChange);
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
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v11; // w20
  int64_t v12; // x0
  __int64 v13; // x1
  __int64 methodPtr_low; // x11
  Il2CppObject *current; // x22
  _OWORD *monitor; // x8
  __int128 v17; // q0
  int64_t v18; // x0
  Il2CppObject v19; // q0
  int64_t v20; // x24
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_Object_o *v23; // x23
  __int64 v24; // x1
  void *v25; // x0
  __int64 v26; // x1
  ListViewObject_o *v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_4A5F3E9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&EventServantFatigueListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F3E9 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_45;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_45;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v31,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v32.fields._list = *(_OWORD *)&v31.fields.currentCryptoKey;
      v32.fields._current = (Il2CppObject *)v31.fields.fakeValue;
      v11 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v32,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v12 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v32,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v32.fields._current
          && (methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v32.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventServantFatigueListViewItem_c *)v32.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = v32.fields._current;
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
          sub_1B8880C(v12, v13);
        monitor = current[7].monitor;
        if ( !monitor )
          sub_1B8880C(v12, v13);
        v17 = monitor[2];
        *(_OWORD *)&v31.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v31.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v30 = v31;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v30, 0LL);
        v19 = Entity[2];
        v20 = v18;
        *(Il2CppObject *)&v29.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v29.fields.fakeValue = v19;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v29, 0LL);
        if ( v20 == v12 )
        {
          current[7].monitor = Entity;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&current[7].monitor, (int32_t)Entity, v21, v22);
        }
LABEL_26:
        if ( v11 )
        {
          if ( !current )
            sub_1B8880C(v12, v13);
          EventServantFatigueListViewItem__ModifyLockItem((EventServantFatigueListViewItem_o *)current, 0LL);
          EventServantFatigueListViewItem__ModifyChoiceItem((EventServantFatigueListViewItem_o *)current, 0LL);
          EventServantFatigueListViewItem__ModifyPushItem((EventServantFatigueListViewItem_o *)current, 0LL);
        }
        else if ( !current )
        {
          sub_1B8880C(v12, v13);
        }
        v23 = (UnityEngine_Object_o *)current[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
        {
          v25 = current[6].monitor;
          if ( !v25 )
            sub_1B8880C(0LL, v24);
          (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v25 + 392LL))(
            v25,
            current,
            *(_QWORD *)(*(_QWORD *)v25 + 400LL));
          if ( isIconSizeChange )
          {
            v27 = (ListViewObject_o *)current[6].monitor;
            if ( !v27 )
              sub_1B8880C(0LL, v26);
            ListViewObject__SetItemSeed(v27, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_45:
    sub_1B8880C(Instance, v8);
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

  if ( (byte_4A5F408 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventServantFatigueListViewManager_OnClickBack__);
    byte_4A5F408 = 1;
  }
  v3 = Method_EventServantFatigueListViewManager_OnClickBack__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_EventServantFatigueListViewManager_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectAfterCallback, 0, v5, v6);
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

  if ( (byte_4A5F3FB & 1) == 0 )
  {
    sub_1B885B0(&Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__);
    byte_4A5F3FB = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(0LL, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickChoiceTab(
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

  if ( (byte_4A5F405 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventServantFatigueListViewManager_EndClickTabChoice__);
    sub_1B885B0(&Method_EventServantFatigueListViewManager_OnClickChoiceTab__);
    sub_1B885B0(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4A5F405 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventServantFatigueListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v6 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1B887FC(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
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
      EventServantFatigueListViewManager__SetMode_46164184(this, 2, v11);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickCollectLock(
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

  if ( (byte_4A5F404 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventServantFatigueListViewManager_EndClickTabLock__);
    sub_1B885B0(&Method_EventServantFatigueListViewManager_OnClickCollectLock__);
    sub_1B885B0(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4A5F404 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventServantFatigueListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v6 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1B887FC(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
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
      EventServantFatigueListViewManager__SetMode_46164184(this, 2, v11);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickFilterKind(
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

  if ( (byte_4A5F3F9 & 1) == 0 )
  {
    sub_1B885B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_EventServantFatigueListViewManager_EndSelectFilterKind__);
    sub_1B885B0(&Method_EventServantFatigueListViewManager_OnClickFilterKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F3F9 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventServantFatigueListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v7 )
      sub_1B8880C(v9, v10);
    CommonUI__OpenServantFilterSelectMenu(v7, 1, sort, v8, -1, 0LL);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A5F403 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventServantFatigueListViewManager_EndClickTabStatus__);
    sub_1B885B0(&Method_EventServantFatigueListViewManager_OnClickNormalStatus__);
    sub_1B885B0(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4A5F403 = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventServantFatigueListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1B887FC(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndClickTabStatus__,
      v6);
    EventServantFatigueListViewManager__StatusRequest(this, v5, v7);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickPushTab(
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

  if ( (byte_4A5F406 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventServantFatigueListViewManager_EndClickTabPush__);
    sub_1B885B0(&Method_EventServantFatigueListViewManager_OnClickPushTab__);
    sub_1B885B0(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    byte_4A5F406 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v3 = Method_EventServantFatigueListViewManager_OnClickPushTab__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickPushTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventServantFatigueListViewManager_OnClickPushTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v6 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1B887FC(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
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
      EventServantFatigueListViewManager__SetMode_46164184(this, 2, v11);
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

  if ( (byte_4A5F409 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventServantFatigueListViewManager_OnClickScaleChange__);
    byte_4A5F409 = 1;
  }
  v3 = Method_EventServantFatigueListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_EventServantFatigueListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
    sub_1B88554(p_seed, (int32_t)smallSizeSeed, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v14 = this->fields.scaleType,
        sort->fields.iconScaleKind = v14,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v14, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1B8880C(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  EventServantFatigueListViewManager__ModifyList(this, 1, v16);
  EventServantFatigueListViewManager__SetMode_46164184(this, 2, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventServantFatigueListViewManager__OnClickSelectObject(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ListViewObject_o *v3; // x20
  int64_t fatigueRecoveryConfirmationDialog; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 methodPtr_low; // x10
  EventServantFatigueListViewItem_o *Item; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x8
  __int128 v15; // q1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v17; // q0
  int64_t v18; // x23
  bool IsMatchIndividuality_46151752; // w0
  const MethodInfo *v20; // x5
  int32_t v21; // w2
  int32_t v22; // w3
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct UserServantEntity_o *v24; // x1
  FatigueRecoveryConfirmationDialog_o *v25; // x20
  struct EventServantRecoveryFatigueItem_o *v26; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  System_String_o *v28; // x21
  System_String_o *v29; // x0
  UserServantEntity_o *targetOutUserServantEntity; // x22
  System_String_o *v31; // x23
  System_String_o *outAfterTime; // x27
  System_String_o *v33; // x24
  CommonConfirmDialog_ClickDelegate_o *func; // x25
  bool v35; // w0
  const MethodInfo *v36; // x5
  struct UserServantEntity_o *v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  FatigueRecoveryConfirmationDialog_o *v40; // x20
  struct EventServantRecoveryFatigueItem_o *v41; // x8
  struct EventFatigueRecoveryEntity_o *v42; // x8
  System_String_o *v43; // x21
  System_String_o *v44; // x0
  UserServantEntity_o *v45; // x22
  System_String_o *v46; // x23
  System_String_o *v47; // x24
  System_String_o *v48; // x25
  CommonConfirmDialog_ClickDelegate_o *v49; // x26
  struct EventServantRecoveryFatigueItem_o *v50; // x8
  struct UserServantEntity_o *v51; // x8
  __int128 v52; // q0
  struct UserServantEntity_o *v53; // x8
  __int128 v54; // q0
  bool v55; // w0
  const MethodInfo *v56; // x5
  struct EventServantRecoveryFatigueItem_o *v57; // x8
  struct UserServantEntity_o *v58; // x8
  UserEventServantFatigueMaster_o *v59; // x23
  int32_t eventId; // w24
  __int64 v61; // x25
  __int64 v62; // x26
  bool FatigueInfo; // w0
  const MethodInfo *v64; // x1
  int64_t v65; // x23
  int64_t v66; // x23
  bool IsMatchIndividuality; // w0
  const MethodInfo *v68; // x5
  struct UserServantEntity_o *v69; // x1
  int32_t v70; // w2
  int32_t v71; // w3
  int32_t v72; // w2
  int32_t v73; // w3
  struct EventServantRecoveryFatigueItem_o *v74; // x8
  struct UserServantEntity_o *v75; // x1
  FatigueRecoveryConfirmationDialog_o *v76; // x20
  struct EventServantRecoveryFatigueItem_o *v77; // x8
  struct EventFatigueRecoveryEntity_o *v78; // x8
  System_String_o *v79; // x21
  System_String_o *v80; // x0
  System_String_o *v81; // x22
  System_String_o *v82; // x23
  UserServantEntity_o *v83; // x24
  UserServantEntity_o *targetInUserServantEntity; // x26
  System_String_o *v85; // x25
  System_String_o *v86; // x29
  System_String_o *v87; // x27
  CommonConfirmDialog_ClickDelegate_o *v88; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+20h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+40h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+60h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+80h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+A0h] [xbp-D0h]
  bool isRecover; // [xsp+C4h] [xbp-ACh] BYREF
  int64_t recoverAt; // [xsp+C8h] [xbp-A8h] BYREF
  System_String_o *v96; // [xsp+D0h] [xbp-A0h] BYREF
  System_String_o *v97; // [xsp+D8h] [xbp-98h] BYREF
  System_String_o *v98; // [xsp+E0h] [xbp-90h] BYREF
  System_String_o *v99; // [xsp+E8h] [xbp-88h] BYREF
  System_String_o *afterTime; // [xsp+F0h] [xbp-80h] BYREF
  System_String_o *beforeTime; // [xsp+F8h] [xbp-78h] BYREF
  System_String_o *v102; // [xsp+100h] [xbp-70h] BYREF
  System_String_o *v103; // [xsp+108h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  v3 = obj;
  if ( (byte_4A5F3EF & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1B885B0(&Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__);
    sub_1B885B0(&Method_EventServantFatigueListViewManager_OnClickSelectObject__);
    sub_1B885B0(&EventServantFatigueListViewObject_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_11629/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/);
    sub_1B885B0(&StringLiteral_11621/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/);
    sub_1B885B0(&StringLiteral_11619/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/);
    sub_1B885B0(&StringLiteral_11549/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_11547/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/);
    byte_4A5F3EF = 1;
  }
  v102 = 0LL;
  v103 = 0LL;
  afterTime = 0LL;
  beforeTime = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  recoverAt = 0LL;
  isRecover = 0;
  fatigueRecoveryConfirmationDialog = (int64_t)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_59;
  fatigueRecoveryConfirmationDialog = (int64_t)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)fatigueRecoveryConfirmationDialog,
                                                 0LL);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fatigueRecoveryConfirmationDialog, 1, 0LL);
  v6 = Method_EventServantFatigueListViewManager_OnClickSelectObject__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectObject__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B885C8(Method_EventServantFatigueListViewManager_OnClickSelectObject__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  if ( !v3 )
    goto LABEL_59;
  methodPtr_low = LOBYTE(EventServantFatigueListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_59;
  if ( (EventServantFatigueListViewObject_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewObject_TypeInfo )
    goto LABEL_59;
  Item = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)v3, (const MethodInfo *)obj);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity, 0, v10, v11);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity, 0, v12, v13);
  fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_59;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fatigueRecoveryConfirmationDialog,
    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_59;
  fatigueRecoveryConfirmationDialog = (int64_t)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  obj = (ListViewObject_o *)this->fields.targetRecoveryFatigueItem;
  if ( !obj )
    goto LABEL_59;
  v14 = *(_QWORD *)&obj->fields.basePosition.fields.z;
  if ( v14 )
  {
    v15 = *(_OWORD *)(v14 + 32);
    *(_OWORD *)&v93.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
    *(_OWORD *)&v93.fields.fakeValue = v15;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v92 = v93;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v92, 0LL);
    if ( !Item )
      goto LABEL_59;
    userServantEntity = Item->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_59;
    v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    v18 = fatigueRecoveryConfirmationDialog;
    *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v91.fields.fakeValue = v17;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v91, 0LL);
    if ( v18 == fatigueRecoveryConfirmationDialog )
    {
      afterTime = (System_String_o *)StringLiteral_1/*""*/;
      beforeTime = (System_String_o *)StringLiteral_1/*""*/;
      IsMatchIndividuality_46151752 = EventServantFatigueListViewItem__IsMatchIndividuality_46151752(
                                        Item,
                                        this->fields.targetRecoveryFatigueItem,
                                        0LL);
      EventServantFatigueListViewManager__GetOutRecoveryTime(
        this,
        Item->fields.fatigueTime,
        &beforeTime,
        &afterTime,
        IsMatchIndividuality_46151752,
        v20);
      targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
      if ( targetRecoveryFatigueItem )
      {
        v24 = targetRecoveryFatigueItem->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v24;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity,
          (int32_t)v24,
          v21,
          v22);
        v25 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11629/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/,
                                                       0LL);
        v26 = this->fields.targetRecoveryFatigueItem;
        if ( v26 )
        {
          eventFatigueRecoveryEnt = v26->fields.eventFatigueRecoveryEnt;
          if ( eventFatigueRecoveryEnt )
          {
            v28 = System_String__Format(
                    (System_String_o *)fatigueRecoveryConfirmationDialog,
                    (Il2CppObject *)eventFatigueRecoveryEnt->fields.name,
                    0LL);
            v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11619/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0LL);
            targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
            outAfterTime = afterTime;
            v31 = beforeTime;
            v33 = v29;
            func = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
            CommonConfirmDialog_ClickDelegate___ctor(
              func,
              (Il2CppObject *)this,
              Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
              0LL);
            if ( v25 )
            {
              FatigueRecoveryConfirmationDialog__OpenDecideDlg(
                v25,
                v28,
                v33,
                0LL,
                (System_String_o *)StringLiteral_1/*""*/,
                (System_String_o *)StringLiteral_1/*""*/,
                targetOutUserServantEntity,
                v31,
                outAfterTime,
                func,
                0LL);
              return;
            }
          }
        }
      }
LABEL_59:
      sub_1B8880C(fatigueRecoveryConfirmationDialog, obj);
    }
    v50 = this->fields.targetRecoveryFatigueItem;
    if ( !v50 )
      goto LABEL_59;
    v51 = v50->fields.userServantEntity;
    if ( v51 )
    {
      v52 = *(_OWORD *)&v51->fields.id.fields.fakeValue;
      *(_OWORD *)&v93.fields.currentCryptoKey = *(_OWORD *)&v51->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v93.fields.fakeValue = v52;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v90 = v93;
      fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                            &v90,
                                            0LL);
      v53 = Item->fields.userServantEntity;
      if ( !v53 )
        goto LABEL_59;
      v54 = *(_OWORD *)&v53->fields.id.fields.fakeValue;
      *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&v53->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v89.fields.fakeValue = v54;
      if ( fatigueRecoveryConfirmationDialog != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                  &v89,
                                                  0LL) )
      {
        v98 = (System_String_o *)StringLiteral_1/*""*/;
        v99 = (System_String_o *)StringLiteral_1/*""*/;
        v55 = EventServantFatigueListViewItem__IsMatchIndividuality_46151752(
                Item,
                this->fields.targetRecoveryFatigueItem,
                0LL);
        EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v99, &v98, v55, v56);
        v96 = (System_String_o *)StringLiteral_1/*""*/;
        v97 = (System_String_o *)StringLiteral_1/*""*/;
        fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !fatigueRecoveryConfirmationDialog )
          goto LABEL_59;
        fatigueRecoveryConfirmationDialog = (int64_t)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        v57 = this->fields.targetRecoveryFatigueItem;
        if ( !v57 )
          goto LABEL_59;
        v58 = v57->fields.userServantEntity;
        if ( !v58 )
          goto LABEL_59;
        v59 = (UserEventServantFatigueMaster_o *)fatigueRecoveryConfirmationDialog;
        eventId = this->fields.eventId;
        v62 = *(_QWORD *)&v58->fields.svtId.fields.currentCryptoKey;
        v61 = *(_QWORD *)&v58->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v104.fields.currentCryptoKey = v62;
        *(_QWORD *)&v104.fields.fakeValue = v61;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                              v104,
                                              0LL);
        if ( !v59 )
          goto LABEL_59;
        FatigueInfo = UserEventServantFatigueMaster__GetFatigueInfo(
                        v59,
                        &recoverAt,
                        &isRecover,
                        eventId,
                        fatigueRecoveryConfirmationDialog,
                        0LL);
        v65 = 0LL;
        if ( FatigueInfo )
        {
          v66 = recoverAt;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( v66 <= NetworkManager__getTime(0LL) )
            v65 = 0LL;
          else
            v65 = recoverAt;
        }
        IsMatchIndividuality = EventServantFatigueListViewManager__IsMatchIndividuality(this, v64);
        EventServantFatigueListViewManager__GetOutRecoveryTime(this, v65, &v97, &v96, IsMatchIndividuality, v68);
        v69 = Item->fields.userServantEntity;
        this->fields.targetInUserServantEntity = v69;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity,
          (int32_t)v69,
          v70,
          v71);
        v74 = this->fields.targetRecoveryFatigueItem;
        if ( !v74 )
          goto LABEL_59;
        v75 = v74->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v75;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.targetOutUserServantEntity,
          (int32_t)v75,
          v72,
          v73);
        v76 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11549/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/,
                                                       0LL);
        v77 = this->fields.targetRecoveryFatigueItem;
        if ( !v77 )
          goto LABEL_59;
        v78 = v77->fields.eventFatigueRecoveryEnt;
        if ( !v78 )
          goto LABEL_59;
        v79 = System_String__Format(
                (System_String_o *)fatigueRecoveryConfirmationDialog,
                (Il2CppObject *)v78->fields.name,
                0LL);
        v80 = LocalizationManager__Get((System_String_o *)StringLiteral_11547/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/, 0LL);
        v82 = v98;
        v81 = v99;
        targetInUserServantEntity = this->fields.targetInUserServantEntity;
        v83 = this->fields.targetOutUserServantEntity;
        v86 = v96;
        v85 = v97;
        v87 = v80;
        v88 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v88,
          (Il2CppObject *)this,
          Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
          0LL);
        if ( !v76 )
          goto LABEL_59;
        FatigueRecoveryConfirmationDialog__OpenDecideDlg(
          v76,
          v79,
          v87,
          targetInUserServantEntity,
          v81,
          v82,
          v83,
          v85,
          v86,
          v88,
          0LL);
      }
    }
  }
  else
  {
    v102 = (System_String_o *)StringLiteral_1/*""*/;
    v103 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !Item )
      goto LABEL_59;
    v35 = EventServantFatigueListViewItem__IsMatchIndividuality_46151752(
            Item,
            (EventServantRecoveryFatigueItem_o *)obj,
            0LL);
    EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v103, &v102, v35, v36);
    v37 = Item->fields.userServantEntity;
    this->fields.targetInUserServantEntity = v37;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetInUserServantEntity, (int32_t)v37, v38, v39);
    v40 = this->fields.fatigueRecoveryConfirmationDialog;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11621/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/, 0LL);
    v41 = this->fields.targetRecoveryFatigueItem;
    if ( !v41 )
      goto LABEL_59;
    v42 = v41->fields.eventFatigueRecoveryEnt;
    if ( !v42 )
      goto LABEL_59;
    v43 = System_String__Format(
            (System_String_o *)fatigueRecoveryConfirmationDialog,
            (Il2CppObject *)v42->fields.name,
            0LL);
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11619/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0LL);
    v45 = this->fields.targetInUserServantEntity;
    v47 = v102;
    v46 = v103;
    v48 = v44;
    v49 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v49,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
      0LL);
    if ( !v40 )
      goto LABEL_59;
    FatigueRecoveryConfirmationDialog__OpenDecideDlg(
      v40,
      v43,
      v48,
      v45,
      v46,
      v47,
      0LL,
      (System_String_o *)StringLiteral_1/*""*/,
      (System_String_o *)StringLiteral_1/*""*/,
      v49,
      0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickSelectPush(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x19
  DataManager_o *SelfUserGame; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 methodPtr_low; // x9
  EventServantFatigueListViewItem_o *Item; // x0
  EventServantFatigueListViewItem_o **v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  int64_t context; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v17; // q1
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  const MethodInfo *v20; // x2
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  Il2CppObject *Entity; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v27; // x25
  System_String_o *v28; // x21
  System_String_o *v29; // x22
  System_Object_array *v30; // x23
  int32_t Rarity; // w26
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x26
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x26
  int32_t v38; // w0
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x24
  int32_t v42; // w0
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x24
  int32_t v46; // w2
  int32_t v47; // w3
  Il2CppObject *v48; // x24
  EventServantFatigueListViewItem_o *v49; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v50; // x9
  ServantEntity_o *servantEntity; // x20
  int32_t v52; // w2
  int32_t v53; // w3
  Il2CppObject *v54; // x20
  System_String_o *v55; // x20
  System_String_o *v56; // x22
  System_String_o *v57; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v59; // x25
  __int64 v60; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4A5F40A & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_EventServantFatigueListViewManager_OnClickSelectPush__);
    sub_1B885B0(&EventServantFatigueListViewObject_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__);
    sub_1B885B0(&EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4A5F40A = 1;
  }
  v5 = sub_1B887FC(EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_62;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  if ( !obj )
    goto LABEL_62;
  methodPtr_low = LOBYTE(EventServantFatigueListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    sub_1B88ACC(obj);
    goto LABEL_64;
  }
  Item = EventServantFatigueListViewObject__GetItem(
           (EventServantFatigueListViewObject_o *)obj,
           (const MethodInfo *)EventServantFatigueListViewObject_TypeInfo);
  *(_QWORD *)(v5 + 24) = Item;
  v12 = (EventServantFatigueListViewItem_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)Item, v13, v14);
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_62;
  context = (int64_t)SelfUserGame->fields.context;
  if ( context )
  {
    if ( !*v12 )
      goto LABEL_62;
    userServantEntity = (*v12)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_62;
    v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v62.fields.fakeValue = v17;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v61 = v62;
    if ( context == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v61, 0LL) )
      goto LABEL_14;
    v21 = Method_EventServantFatigueListViewManager_OnClickSelectPush__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1B885C8(Method_EventServantFatigueListViewManager_OnClickSelectPush__);
    v22 = (System_Reflection_MethodBase_o *)sub_1B88594(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                      SelfUserGame,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_62;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
               context,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                      SelfUserGame,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_62;
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v63.fields.currentCryptoKey = klass;
    *(_QWORD *)&v63.fields.fakeValue = monitor;
    SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v63, 0LL);
    if ( !v24 )
      goto LABEL_62;
    v27 = DataMasterBase_object__object__int___GetEntity(
            v24,
            (int32_t)SelfUserGame,
            (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v30 = (System_Object_array *)sub_1B88658(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    SelfUserGame = (DataManager_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v30 )
LABEL_62:
      sub_1B8880C(SelfUserGame, v7);
    v34 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v30->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( !v30->max_length )
      goto LABEL_64;
    v30->m_Items[0] = v34;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v30->m_Items, (int32_t)v34, v32, v33);
    if ( !v27 )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)ServantEntity__getClassName((ServantEntity_o *)v27, 0LL);
    v37 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v30->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v30->max_length <= 1 )
      goto LABEL_64;
    v30->m_Items[1] = v37;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->m_Items[1], (int32_t)v37, v35, v36);
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
            0LL);
    SelfUserGame = (DataManager_o *)ServantEntity__getName((ServantEntity_o *)v27, v38, -1, 0LL);
    v41 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v30->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v30->max_length <= 2 )
      goto LABEL_64;
    v30->m_Items[2] = v41;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->m_Items[2], (int32_t)v41, v39, v40);
    if ( !*v12 )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)(*v12)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    v42 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
    SelfUserGame = (DataManager_o *)Rarity__getRarityType(v42, 0LL);
    v45 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v30->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v30->max_length <= 3 )
      goto LABEL_64;
    v30->m_Items[3] = v45;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->m_Items[3], (int32_t)v45, v43, v44);
    if ( !*v12 )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)(*v12)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
    v48 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v30->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v30->max_length <= 4 )
      goto LABEL_64;
    v30->m_Items[4] = v48;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->m_Items[4], (int32_t)v48, v46, v47);
    v49 = *v12;
    if ( !*v12 )
      goto LABEL_62;
    v50 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v49->fields.userServantEntity;
    if ( !v50 )
      goto LABEL_62;
    servantEntity = v49->fields.servantEntity;
    SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v50[6], 0LL);
    if ( !servantEntity )
      goto LABEL_62;
    SelfUserGame = (DataManager_o *)ServantEntity__getName(servantEntity, (int32_t)SelfUserGame, -1, 0LL);
    v54 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v30->obj.klass->_1.element_class);
      if ( !SelfUserGame )
      {
LABEL_65:
        v60 = sub_1B88830(SelfUserGame);
        sub_1B886D8(v60, 0LL);
      }
    }
    if ( v30->max_length > 5 )
    {
      v30->m_Items[5] = v54;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->m_Items[5], (int32_t)v54, v52, v53);
      v55 = System_String__Format_61721540(v29, v30, 0LL);
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v57 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v59 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v59,
        (Il2CppObject *)v5,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__,
        0LL);
      SelfUserGame = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_30494292(
          (CommonUI_o *)Instance,
          v28,
          v55,
          v56,
          v57,
          1,
          v59,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_62;
    }
LABEL_64:
    sub_1B88814(SelfUserGame, v7);
  }
LABEL_14:
  v18 = Method_EventServantFatigueListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1B885C8(Method_EventServantFatigueListViewManager_OnClickSelectPush__);
  v19 = (System_Reflection_MethodBase_o *)sub_1B88594(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 8, 0LL);
  EventServantFatigueListViewManager__PushRequest(this, *v12, v20);
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

  if ( (byte_4A5F3FF & 1) == 0 )
  {
    sub_1B885B0(&Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__);
    byte_4A5F3FF = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickSortButton(
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

  if ( (byte_4A5F3FD & 1) == 0 )
  {
    sub_1B885B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_EventServantFatigueListViewManager_EndSelectSortKind__);
    sub_1B885B0(&Method_EventServantFatigueListViewManager_OnClickSortButton__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F3FD = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventServantFatigueListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventServantFatigueListViewManager_OnClickSortButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v7 )
      sub_1B8880C(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 7, sort, 0, v8, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnLongPushListView(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  EventServantFatigueListViewItem_o *Item; // x0
  const MethodInfo *v8; // x1
  __int64 methodPtr_low; // x10
  struct UserServantEntity_o *userServantEntity; // x8
  EventServantFatigueListViewItem_o *v11; // x20
  __int128 v12; // q1
  Il2CppObject *Instance; // x0
  UserServantEntity_o *v14; // x20
  CommonUI_o *v15; // x21
  ServantStatusDialog_EndDelegate_o *v16; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]

  if ( (byte_4A5F3F6 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_EventServantFatigueListViewManager_EndShowServant__);
    sub_1B885B0(&Method_EventServantFatigueListViewManager_OnLongPushListView__);
    sub_1B885B0(&EventServantFatigueListViewObject_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F3F6 = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v5 = Method_EventServantFatigueListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_EventServantFatigueListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( !obj )
      goto LABEL_16;
    methodPtr_low = LOBYTE(EventServantFatigueListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
      goto LABEL_16;
    if ( (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewObject_TypeInfo )
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
    this->fields.statusShowUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v17, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = v11->fields.userServantEntity;
    v15 = (CommonUI_o *)Instance;
    v16 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndShowServant__,
      0LL);
    if ( !v15 )
LABEL_16:
      sub_1B8880C(Item, v8);
    CommonUI__OpenServantStatusDialog_30504496(v15, 0, v14, v16, 0LL);
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

  if ( (byte_4A5F3EE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F3EE = 1;
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
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.CallbackFunc2, 0, v10, v11);
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
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
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
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4A5F40B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_EventServantFatigueListViewManager_EndPushRequest__);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F40B = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !userServantEntity )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v45, 0LL);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v43, 0LL);
  v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v7->fields.masterLoadThreads;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_EndPushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v41, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v33 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v46, 0LL);
  if ( !v22 )
LABEL_18:
    sub_1B8880C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    imageLimitCount,
    v23,
    v24,
    v25,
    v26,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v37,
    IsLock,
    v28 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != (struct System_Threading_SynchronizationContext_o *)v39,
    0LL);
}


void __fastcall EventServantFatigueListViewManager__RefreshListDisp(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w22
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21

  if ( (byte_4A5F3E5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
    byte_4A5F3E5 = 1;
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
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( size == ++v7 )
        return;
    }
LABEL_9:
    sub_1B8880C(ObjectList, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__RequestListObject(
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

  if ( (byte_4A5F3ED & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventServantFatigueListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5F3ED = 1;
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
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_EventServantFatigueListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      EventServantFatigueListViewObject__Init_46164708((EventServantFatigueListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_1B8880C(ObjectList, v8);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
    delay,
    0LL);
}


void __fastcall EventServantFatigueListViewManager__SetFilterButtonImage(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4A5F3FC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17511/*"btn_filter_on"*/);
    sub_1B885B0(&StringLiteral_17510/*"btn_filter"*/);
    byte_4A5F3FC = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B8880C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17510/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17511/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall EventServantFatigueListViewManager__SetHeaderMsg(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  UILabel_o *recoveryFatigueInfoMsgLabel; // x19
  __int64 *v4; // x8
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5F3E7 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11625/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1B885B0(&StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1B885B0(&StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1B885B0(&StringLiteral_11640/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/);
    byte_4A5F3E7 = 1;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11640/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/;
      goto LABEL_16;
    case 1:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_16;
    case 2:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_16;
    case 3:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11625/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_16:
      v5 = LocalizationManager__Get((System_String_o *)*v4, 0LL);
      if ( !recoveryFatigueInfoMsgLabel )
        sub_1B8880C(v5, v6);
      UILabel__set_text(recoveryFatigueInfoMsgLabel, v5, 0LL);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.Callback,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventServantFatigueListViewManager__SetMode_46164184(this, mode, v6);
}


void __fastcall EventServantFatigueListViewManager__SetMode_46164184(
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


void __fastcall EventServantFatigueListViewManager__SetMode_46164292(
        EventServantFatigueListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.CallbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.CallbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventServantFatigueListViewManager__SetMode_46164184(this, mode, v6);
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
  if ( (byte_4A5F3EC & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_1B885B0(&EventServantFatigueListViewObject_TypeInfo);
    byte_4A5F3EC = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventServantFatigueListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventServantFatigueListViewObject__Init_46164060(
    (EventServantFatigueListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void __fastcall EventServantFatigueListViewManager__SetSortButtonImage(
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

  if ( (byte_4A5F400 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17541/*"btn_sort_up"*/);
    sub_1B885B0(&StringLiteral_17628/*"btn_txt_up"*/);
    sub_1B885B0(&StringLiteral_17584/*"btn_txt_new"*/);
    sub_1B885B0(&StringLiteral_17574/*"btn_txt_down"*/);
    sub_1B885B0(&StringLiteral_17591/*"btn_txt_old"*/);
    sub_1B885B0(&StringLiteral_17538/*"btn_sort_down"*/);
    byte_4A5F400 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v6 )
      goto LABEL_42;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
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
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_42;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17628/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v12 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
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
      v17 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_42:
      sub_1B8880C(sort, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__SetStatusKind(
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

  if ( (byte_4A5F3E6 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17661/*"button_push_reg"*/);
    sub_1B885B0(&StringLiteral_17662/*"button_push_unreg"*/);
    sub_1B885B0(&StringLiteral_17647/*"button_allchoice_reg"*/);
    sub_1B885B0(&StringLiteral_17650/*"button_alllock_unreg"*/);
    sub_1B885B0(&StringLiteral_17663/*"button_select_reg"*/);
    sub_1B885B0(&StringLiteral_17664/*"button_select_unreg"*/);
    sub_1B885B0(&StringLiteral_17649/*"button_alllock_reg"*/);
    sub_1B885B0(&StringLiteral_17648/*"button_allchoice_unreg"*/);
    byte_4A5F3E6 = 1;
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
  v6 = &StringLiteral_17663/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_17664/*"button_select_unreg"*/;
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
  v7 = &StringLiteral_17649/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v7 = &StringLiteral_17650/*"button_alllock_unreg"*/;
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
  v8 = &StringLiteral_17647/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v8 = &StringLiteral_17648/*"button_allchoice_unreg"*/;
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
  v9 = &StringLiteral_17661/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v9 = &StringLiteral_17662/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_1B8880C(statusTabButton, *(_QWORD *)&modeKind);
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  EventServantFatigueListViewManager__SetHeaderMsg(this, v10);
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
      sub_1B88554(
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
    sub_1B8880C(sort, setupInfo);
  }
  if ( !sort )
    goto LABEL_10;
  sort->fields.isBonusKind = 0;
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, (int32_t)method, v3);
}


void __fastcall EventServantFatigueListViewManager__StatusRequest(
        EventServantFatigueListViewManager_o *this,
        EventServantFatigueListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  int32_t v7; // w2
  int32_t v8; // w3
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1
  System_Int64_array *v12; // x1
  System_Int64_array *v13; // x2
  bool v14; // w4
  bool v15; // w5
  int32_t v16; // w2
  int32_t v17; // w3
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  System_Int64_array *v19; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5F407 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventServantFatigueListViewManager_EndStatusSync__);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5F407 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v19 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( EventServantFatigueListViewManager__GetSwapChoiceList(this, &choiceList, &v19, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v16, v17);
      v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v18,
                         (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v13 = v19;
        v12 = choiceList;
        v15 = 1;
        v14 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1B8880C(Request_object, v11);
    }
  }
  else if ( modeKind == 1 && EventServantFatigueListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v7, v8);
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v9,
                       (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v13 = unlockList;
      v12 = lockList;
      v14 = 1;
      v15 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v12, v13, 0, v14, v15, 0LL);
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
  UnityEngine_Object_o *scrollView; // x20
  int64_t Time; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A5F3E2 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F3E2 = 1;
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
      EventServantFatigueListViewManager__UpdateDisp(this, v5);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__UpdateDisp(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *v5; // x8
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5F3E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4A5F3E3 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  ObjectList = (System_Collections_Generic_List_object__o *)EventServantFatigueListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( ObjectList )
  {
    v5 = this->fields.objectList;
    if ( !v5 )
      sub_1B8880C(ObjectList, v4);
    if ( v5->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v7,
        ObjectList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v7,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__) )
      {
        if ( !v7.fields._current )
          sub_1B8880C(0LL, v6);
        EventServantFatigueListViewObject__UpdateDisp((EventServantFatigueListViewObject_o *)v7.fields._current, v6);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v7,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__);
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

  if ( (byte_4A5F3DA & 1) == 0 )
  {
    sub_1B885B0(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo);
    byte_4A5F3DA = 1;
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
    v8 = sub_1BC3AA0(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A5F3DC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5F3DC = 1;
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
    v8 = sub_1BC3AA0(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  EventServantFatigueListViewManager__remove_CallbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_EventServantFatigueListViewObject__o *__fastcall EventServantFatigueListViewManager__get_ClippingObjectList(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 v13; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4A5F3E1 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
    byte_4A5F3E1 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
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
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        break;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
      if ( !objectList )
        break;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)EventServantFatigueListViewObject__GetItem(
                                                                  (EventServantFatigueListViewObject_o *)objectList,
                                                                  v4);
      if ( !objectList )
        break;
      v4 = (const MethodInfo *)objectList;
      if ( LOBYTE(objectList[2].monitor) )
      {
        objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40722428(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)objectList,
                                                                    0LL);
        if ( ((unsigned __int8)objectList & 1) == 0 )
          continue;
      }
      if ( !v3 )
        break;
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        break;
      v13 = v3->fields._size;
      if ( (unsigned int)v13 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v8,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + v13;
        v3->fields._size = v13 + 1;
        v14[4] = (Il2CppClass *)v8;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_18:
    sub_1B8880C(objectList, v4);
  }
  return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v3;
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
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 v13; // x10
  System_Collections_Generic_List_object__o *v14; // x1
  Il2CppClass **v15; // x0

  if ( (byte_4A5F3E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F3E0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
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
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v12 = Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v13 = v3->fields._size;
        v14 = objectList;
        if ( (unsigned int)v13 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)objectList,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + v13;
          v3->fields._size = v13 + 1;
          v15[4] = (Il2CppClass *)v14;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1B8880C(objectList, v4);
  }
  return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v3;
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

  if ( (byte_4A5F3DB & 1) == 0 )
  {
    sub_1B885B0(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo);
    byte_4A5F3DB = 1;
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
    v8 = sub_1BC3AA0(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A5F3DD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5F3DD = 1;
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
    v8 = sub_1BC3AA0(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D3D94;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D3D3C;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = index;
  v15 = kind;
  if ( (byte_4A5F40D & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&EventServantFatigueListViewManager_ResultKind_TypeInfo);
    byte_4A5F40D = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             EventServantFatigueListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&index,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall EventServantFatigueListViewManager_CallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D3E00;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D3DB8;
}


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
  if ( (byte_4A5F40E & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A5F40E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall EventServantFatigueListViewManager_RequestCallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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


void __fastcall EventServantFatigueListViewManager___c__DisplayClass107_0___OnClickSelectPush_b__0(
        EventServantFatigueListViewManager___c__DisplayClass107_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5F40F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__);
    byte_4A5F40F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_30494572(v7, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventServantFatigueListViewManager___c__DisplayClass107_0___OnClickSelectPush_b__1(
        EventServantFatigueListViewManager___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
  EventServantFatigueListViewManager__PushRequest(this->fields.__4__this, this->fields.selectItem, v2);
}