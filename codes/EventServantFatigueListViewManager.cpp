void __fastcall EventServantFatigueListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *SORT_SAVE_KEY; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  ListViewSort_o *v11; // x20
  struct EventServantFatigueListViewManager_StaticFields *static_fields; // x0

  if ( (byte_4B11209 & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantFatigueListViewManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_6331/*"EventServantFatigueList"*/, v5, v6);
    byte_4B11209 = 1;
  }
  EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6331/*"EventServantFatigueList"*/;
  sub_1BCA784(EventServantFatigueListViewManager_TypeInfo->static_fields, StringLiteral_6331/*"EventServantFatigueList"*/);
  SORT_SAVE_KEY = EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v11 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v8, v9, v10);
  ListViewSort___ctor_41480716(v11, SORT_SAVE_KEY, 3, 0, 0LL);
  static_fields = EventServantFatigueListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v11;
  sub_1BCA784(&static_fields->servantSortStatus, v11);
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
  if ( (byte_4B111F2 & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, result, method);
    byte_4B111F2 = 1;
  }
  if ( !result )
    goto LABEL_10;
  this = (EventServantFatigueListViewManager_o *)System_String__Equals_62409536(
                                                   result,
                                                   (System_String_o *)StringLiteral_22292/*"ng"*/,
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
    sub_1BCAA3C(this, result);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t fatigueRecoveryConfirmationDialog; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x19
  __int64 v18; // x1
  Il2CppObject *Request_object; // x0
  struct UserServantEntity_o *targetOutUserServantEntity; // x8
  Il2CppObject *v21; // x19
  int32_t v22; // w21
  struct UserServantEntity_o *v23; // x8
  __int128 v24; // q1
  int32_t v25; // w22
  struct UserServantEntity_o *v26; // x8
  __int128 v27; // q0
  int64_t v28; // x20
  int64_t v29; // x4
  ServantRecoverySyncRequest_o *v30; // x0
  int32_t v31; // w1
  int32_t v32; // w2
  int64_t v33; // x3
  int32_t eventId; // w21
  struct UserServantEntity_o *v35; // x8
  __int128 v36; // q1
  int32_t v37; // w20
  struct UserServantEntity_o *targetInUserServantEntity; // x8
  __int128 v39; // q1
  int32_t v40; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+60h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+80h] [xbp-50h]

  if ( (byte_4B111F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__, isDecide, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_ServantRecoverySyncRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    byte_4B111F1 = 1;
  }
  fatigueRecoveryConfirmationDialog = (int64_t)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_31;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)fatigueRecoveryConfirmationDialog, 0LL);
  if ( !isDecide )
    return;
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  Request_object = NetworkManager__getRequest_object_(
                     v17,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_ServantRecoverySyncRequest___);
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v21 = Request_object;
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
      v35 = this->fields.targetOutUserServantEntity;
      if ( v35 )
      {
        v36 = *(_OWORD *)&v35->fields.id.fields.fakeValue;
        v37 = fatigueRecoveryConfirmationDialog;
        *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&v35->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v45.fields.fakeValue = v36;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isDecide);
        v41 = v45;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                              &v41,
                                              0LL);
        if ( v21 )
        {
          v29 = fatigueRecoveryConfirmationDialog;
          v30 = (ServantRecoverySyncRequest_o *)v21;
          v31 = eventId;
          v32 = v37;
          v33 = 0LL;
          goto LABEL_29;
        }
      }
    }
LABEL_31:
    sub_1BCAA3C(fatigueRecoveryConfirmationDialog, isDecide);
  }
  v22 = this->fields.eventId;
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
        v39 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
        v40 = fatigueRecoveryConfirmationDialog;
        *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v45.fields.fakeValue = v39;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isDecide);
        v42 = v45;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                              &v42,
                                              0LL);
        if ( v21 )
        {
          v33 = fatigueRecoveryConfirmationDialog;
          v30 = (ServantRecoverySyncRequest_o *)v21;
          v31 = v22;
          v32 = v40;
          v29 = 0LL;
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
  v23 = this->fields.targetInUserServantEntity;
  if ( !v23 )
    goto LABEL_31;
  v24 = *(_OWORD *)&v23->fields.id.fields.fakeValue;
  v25 = fatigueRecoveryConfirmationDialog;
  *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&v23->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v45.fields.fakeValue = v24;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isDecide);
  v44 = v45;
  fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v44, 0LL);
  v26 = this->fields.targetOutUserServantEntity;
  if ( !v26 )
    goto LABEL_31;
  v27 = *(_OWORD *)&v26->fields.id.fields.fakeValue;
  v28 = fatigueRecoveryConfirmationDialog;
  *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&v26->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v43.fields.fakeValue = v27;
  fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v43, 0LL);
  if ( !v21 )
    goto LABEL_31;
  v29 = fatigueRecoveryConfirmationDialog;
  v30 = (ServantRecoverySyncRequest_o *)v21;
  v31 = v22;
  v32 = v25;
  v33 = v28;
LABEL_29:
  ServantRecoverySyncRequest__beginRequest(v30, v31, v32, v33, v29, 0LL);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  EventServantFatigueListViewManager_c *v34; // x0
  struct ListViewSort_o *servantSortStatus; // x1
  struct ListViewSort_o **p_sort; // x23
  __int64 v37; // x1
  __int64 sort; // x0
  __int64 v39; // x1
  TitleInfoControl_o *titleInfo; // x8
  __int64 v41; // x1
  UnityEngine_Object_o *fatigueRecoveryConfirmationDialog; // x24
  Il2CppObject *fatigueRecoveryConfirmationDialogPrefab; // x24
  __int64 v44; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_GameObject_o *v49; // x24
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *Component_object; // x0
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  __int64 v55; // x2
  __int64 v56; // x3
  System_Int32_array *v57; // x23
  EventUpValSetupInfo_o *v58; // x21
  const MethodInfo *v59; // x2
  __int64 v60; // x23
  __int64 v61; // x28
  __int64 v62; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  UserServantEntity_o *v64; // x24
  __int128 v65; // q0
  int64_t v66; // x0
  int32_t v67; // w26
  int64_t v68; // x27
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  EventServantFatigueListViewItem_o *v72; // x25
  const MethodInfo *v73; // x6
  __int64 v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  __int64 v77; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v79; // x2
  const MethodInfo *v80; // x1
  struct EventServantRecoveryFatigueItem_o **p_targetRecoveryFatigueItem; // [xsp+0h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84[2]; // [xsp+30h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v91; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4B111E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&eventId, targetItem);
    sub_1BCA7E0(&EventServantFatigueListViewItem_TypeInfo, v8, v9);
    sub_1BCA7E0(&EventServantFatigueListViewManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___, v14, v15);
    sub_1BCA7E0(&int___TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924664, v24, v25);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v26, v27);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31);
    sub_1BCA7E0(&StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v32, v33);
    byte_4B111E1 = 1;
  }
  v34 = EventServantFatigueListViewManager_TypeInfo;
  memset(&v84[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo, *(_QWORD *)&eventId);
    v34 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v34->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  p_sort = &this->fields.sort;
  sub_1BCA784(&this->fields.sort, servantSortStatus);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v39);
  sort = NetworkManager__getTime(0LL);
  titleInfo = this->fields.titleInfo;
  this->fields.updateTime = sort;
  if ( !titleInfo )
    goto LABEL_62;
  TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 80, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnSprite_37887988((TitleInfoControl_o *)sort, 1, 0, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1BCA784(&this->fields.targetInUserServantEntity, 0LL);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1BCA784(&this->fields.targetOutUserServantEntity, 0LL);
  this->fields.eventId = eventId;
  this->fields.statusShowUserSvtId = -1LL;
  this->fields.targetRecoveryFatigueItem = targetItem;
  p_targetRecoveryFatigueItem = &this->fields.targetRecoveryFatigueItem;
  sub_1BCA784(&this->fields.targetRecoveryFatigueItem, targetItem);
  this->fields.selectAfterCallback = afterCallback;
  sub_1BCA784(&this->fields.selectAfterCallback, afterCallback);
  this->fields.modeKind = 0;
  fatigueRecoveryConfirmationDialog = (UnityEngine_Object_o *)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  sort = UnityEngine_Object__op_Equality(0LL, fatigueRecoveryConfirmationDialog, 0LL);
  if ( (sort & 1) != 0 )
  {
    fatigueRecoveryConfirmationDialogPrefab = (Il2CppObject *)this->fields.fatigueRecoveryConfirmationDialogPrefab;
    v85.fields.x = 0.0;
    v85.fields.y = 0.0;
    v85.fields.z = 0.0;
    v90 = UnityEngine_Quaternion__Internal_FromEulerRad(v85, 0LL);
    x = v90.fields.x;
    y = v90.fields.y;
    z = v90.fields.z;
    w = v90.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
    v86.fields.x = 0.0;
    v86.fields.y = 0.0;
    v86.fields.z = 0.0;
    v91.fields.x = x;
    v91.fields.y = y;
    v91.fields.z = z;
    v91.fields.w = w;
    sort = (__int64)UnityEngine_Object__Instantiate_object__49904120(
                      fatigueRecoveryConfirmationDialogPrefab,
                      v86,
                      v91,
                      (const MethodInfo_2F979F8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924664);
    if ( !sort )
      goto LABEL_62;
    v49 = (UnityEngine_GameObject_o *)sort;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)sort, 0LL);
    sort = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_62;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)sort, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v49, 0LL);
    if ( !sort )
      goto LABEL_62;
    v87.fields.x = 0.0;
    v87.fields.y = 0.0;
    v87.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)sort, v87, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v49, 0LL);
    if ( !sort )
      goto LABEL_62;
    v88.fields.x = 0.0;
    v88.fields.y = 0.0;
    v88.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)sort, v88, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v49, 0LL);
    if ( !sort )
      goto LABEL_62;
    v89.fields.x = 1.0;
    v89.fields.y = 1.0;
    v89.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)sort, v89, 0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v49,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___);
    this->fields.fatigueRecoveryConfirmationDialog = (struct FatigueRecoveryConfirmationDialog_o *)Component_object;
    sub_1BCA784(&this->fields.fatigueRecoveryConfirmationDialog, Component_object);
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
  sub_1BCA784(&this->fields.seed, normalSizeSeed);
LABEL_33:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_62;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = sub_1BCA888(int___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_62;
  v57 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
LABEL_57:
    sub_1BCAA44(sort, v37);
  *(_DWORD *)(sort + 32) = eventId;
  v58 = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v37, v55, v56);
  EventUpValSetupInfo___ctor_39629568(v58, v57, 1, 0, 0, 0LL);
  EventServantFatigueListViewManager__SetUpBonusFilterButton(this, v58, v59);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  sort = (__int64)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_62;
  sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_62;
  v60 = sort;
  if ( (int)*(_QWORD *)(sort + 24) >= 1 )
  {
    v61 = 0LL;
    v62 = (unsigned int)*(_QWORD *)(sort + 24) - 1LL;
    while ( *p_targetRecoveryFatigueItem )
    {
      userServantEntity = (*p_targetRecoveryFatigueItem)->fields.userServantEntity;
      v64 = *(UserServantEntity_o **)(v60 + 32 + 8 * v61);
      if ( userServantEntity )
      {
        v65 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v84[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v84[1].fields.fakeValue = v65;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v37);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v84, -1LL, 0LL);
        v84[1] = v84[0];
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v37);
      v83 = v84[1];
      v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v83, 0LL);
      v67 = this->fields.eventId;
      v68 = v66;
      v72 = (EventServantFatigueListViewItem_o *)sub_1BCAA2C(EventServantFatigueListViewItem_TypeInfo, v69, v70, v71);
      EventServantFatigueListViewItem___ctor(v72, v64, v67, v68, v58, targetItem, v73);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v74 = *(_QWORD *)(sort + 16);
      v75 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v74 )
        break;
      v76 = *(int *)(sort + 24);
      if ( (unsigned int)v76 >= *(_DWORD *)(v74 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v72,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
      }
      else
      {
        v77 = v74 + 8 * v76;
        *(_DWORD *)(sort + 24) = v76 + 1;
        *(_QWORD *)(v77 + 32) = v72;
        sort = sub_1BCA784(v77 + 32, v72);
      }
      if ( v62 == v61 )
        goto LABEL_58;
      if ( ++v61 >= (unsigned __int64)*(unsigned int *)(v60 + 24) )
        goto LABEL_57;
    }
LABEL_62:
    sub_1BCAA3C(sort, v37);
  }
LABEL_58:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_62;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EventServantFatigueListViewManager__SetStatusKind(this, this->fields.modeKind, v79);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventServantFatigueListViewManager__SetFilterButtonImage(this, v80);
}


void __fastcall EventServantFatigueListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  EventServantFatigueListViewManager_c *v3; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4B111DB & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantFatigueListViewManager_TypeInfo, v1, v2);
    byte_4B111DB = 1;
  }
  v3 = EventServantFatigueListViewManager_TypeInfo;
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo, v1);
    v3 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v3->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1BCAA3C(0LL, v1);
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
    sub_1BCAA3C(0LL, v3);
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
  EventServantFatigueListViewManager__SetMode_31203504(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_31203504(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_31203504(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_31203504(this, 2, v5);
}


void __fastcall EventServantFatigueListViewManager__EndPushRequest(
        EventServantFatigueListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventServantFatigueListViewManager__ModifyList(this, 0, method);
  EventServantFatigueListViewManager__SetMode_31203504(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__EndSelectFilterKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B111F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B111F7 = 1;
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
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_1BCAA3C(sort, isDecide);
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

  if ( (byte_4B111FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B111FB = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
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

  if ( (byte_4B111F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B111F4 = 1;
  }
  EventServantFatigueListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventServantFatigueListViewManager__ModifyList(this, 0, v4);
  EventServantFatigueListViewManager__SetMode_31203504(this, 2, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
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
    sub_1BCA784(p_requestCallback, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w25
  int32_t v13; // w22
  int64_t v14; // x21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__c *klass; // x8
  Il2CppClass *parent; // x23
  Il2CppClass *declaringType; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B111F5 & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantFatigueListViewItem_TypeInfo, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B111F5 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    v14 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v13,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
      *(_QWORD *)&v20.fields.currentCryptoKey = declaringType;
      *(_QWORD *)&v20.fields.fakeValue = parent;
      ++v13;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL) == svtId )
        ++v14;
      if ( size == v13 )
        return v14;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1BCAA3C(itemList, *(_QWORD *)&svtId);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *RestTime4; // x24
  __int64 v20; // x1
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x0
  int32_t IndividualityRate; // w0
  int v25; // w23
  __int64 v26; // x1
  __int64 v27; // x1
  int64_t Time; // x8
  float v29; // s0
  __int64 v30; // x10
  int64_t v31; // x21
  __int64 v32; // x1
  System_String_o *v33; // x20
  System_String_o *v34; // x0
  System_String_o *v35; // x1

  if ( (byte_4B111EF & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, recoveryFatigueTime, beforeTime);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_11672/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11684/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11772/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, v17, v18);
    byte_4B111EF = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, recoveryFatigueTime);
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1LL, 0LL);
  if ( System_String__IsNullOrEmpty(RestTime4, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11684/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0LL);
    *beforeTime = v21;
    sub_1BCA784(beforeTime, v21);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11672/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0LL);
  }
  else
  {
    targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
    if ( !targetRecoveryFatigueItem )
      sub_1BCAA3C(0LL, v20);
    if ( isMatch )
      IndividualityRate = EventServantRecoveryFatigueItem__get_IndividualityRate(targetRecoveryFatigueItem, 0LL);
    else
      IndividualityRate = EventServantRecoveryFatigueItem__get_RecoveryRate(targetRecoveryFatigueItem, 0LL);
    v25 = IndividualityRate;
    *beforeTime = RestTime4;
    sub_1BCA784(beforeTime, RestTime4);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26);
    Time = NetworkManager__getTime(0LL);
    v29 = (float)(recoveryFatigueTime - Time) / (float)((float)v25 / 1000.0);
    v30 = (__int64)v29;
    if ( v29 == INFINITY )
      v30 = 0x8000000000000000LL;
    v31 = v30 + Time;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
    v22 = LocalizationManager__GetRestTime4(v31, -1LL, 0LL);
  }
  *afterTime = v22;
  sub_1BCA784(afterTime, v22);
  if ( isMatch )
  {
    v33 = *afterTime;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_11772/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
    v35 = System_String__Concat_62401220(v33, v34, 0LL);
    *afterTime = v35;
    sub_1BCA784(afterTime, v35);
  }
}


System_String_o *__fastcall EventServantFatigueListViewManager__GetIndividualityName(
        EventServantFatigueListViewManager_o *this,
        System_String_array *array,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Text_StringBuilder_o *v9; // x20
  System_Text_StringBuilder_o *appended; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  unsigned __int64 v13; // x21
  System_String_o *v14; // x0

  if ( (byte_4B111EE & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, array, method);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_11773/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/, v7, v8);
    byte_4B111EE = 1;
  }
  v9 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, array, method, v3);
  System_Text_StringBuilder___ctor(v9, 0LL);
  if ( !array )
    goto LABEL_16;
  v12 = *(_QWORD *)&array->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
        sub_1BCAA44(appended, v11);
      if ( !v9 )
        break;
      appended = System_Text_StringBuilder__Append_61563116(v9, array->m_Items[v13++], 0LL);
      if ( (int)v13 < (signed int)array->max_length )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11773/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/, 0LL);
        appended = System_Text_StringBuilder__Append_61563116(v9, v14, 0LL);
      }
      LODWORD(v12) = array->max_length;
      if ( (__int64)v13 >= (int)v12 )
        goto LABEL_13;
    }
LABEL_16:
    sub_1BCAA3C(appended, v11);
  }
LABEL_13:
  if ( !v9 )
    goto LABEL_16;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                              v9,
                              v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
EventServantFatigueListViewItem_o *__fastcall EventServantFatigueListViewManager__GetItem(
        EventServantFatigueListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  EventServantFatigueListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B111E8 & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantFatigueListViewItem_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    byte_4B111E8 = 1;
  }
  result = (EventServantFatigueListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventServantFatigueListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *RestTime4; // x24
  __int64 v20; // x1
  System_String_o *v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x21
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x1
  System_String_o **v27; // x0
  EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x0
  int32_t IndividualityRate; // w0
  int v30; // w23
  __int64 v31; // x1
  __int64 v32; // x1
  int64_t Time; // x8
  float v34; // s0
  __int64 v35; // x10
  int64_t v36; // x22
  System_String_o *v37; // x0
  __int64 v38; // x1
  System_String_o *v39; // x20
  System_String_o *v40; // x0

  if ( (byte_4B111F0 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, recoveryFatigueTime, beforeTime);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_11672/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11684/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11772/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, v17, v18);
    byte_4B111F0 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, recoveryFatigueTime);
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1LL, 0LL);
  if ( System_String__IsNullOrEmpty(RestTime4, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11684/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0LL);
    *beforeTime = v21;
    sub_1BCA784(beforeTime, v21);
    if ( isMatch )
    {
      v23 = *beforeTime;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11772/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
      v25 = System_String__Concat_62401220(v23, v24, 0LL);
      *beforeTime = v25;
      sub_1BCA784(beforeTime, v25);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11672/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0LL);
    *afterTime = v26;
    v27 = afterTime;
LABEL_29:
    sub_1BCA784(v27, v26);
    return;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    sub_1BCAA3C(0LL, v20);
  if ( isMatch )
    IndividualityRate = EventServantRecoveryFatigueItem__get_IndividualityRate(targetRecoveryFatigueItem, 0LL);
  else
    IndividualityRate = EventServantRecoveryFatigueItem__get_RecoveryRate(targetRecoveryFatigueItem, 0LL);
  v30 = IndividualityRate;
  *beforeTime = RestTime4;
  sub_1BCA784(beforeTime, RestTime4);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31);
  Time = NetworkManager__getTime(0LL);
  v34 = (float)((float)v30 / 1000.0) * (float)(recoveryFatigueTime - Time);
  v35 = (__int64)v34;
  if ( v34 == INFINITY )
    v35 = 0x8000000000000000LL;
  v36 = v35 + Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
  v37 = LocalizationManager__GetRestTime4(v36, -1LL, 0LL);
  *afterTime = v37;
  sub_1BCA784(afterTime, v37);
  if ( isMatch )
  {
    v39 = *beforeTime;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_11772/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
    v26 = System_String__Concat_62401220(v39, v40, 0LL);
    *beforeTime = v26;
    v27 = beforeTime;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  int64_t v28; // x1
  int64_t itemList; // x0
  int v30; // w25
  int32_t v31; // w24
  __int64 methodPtr_low; // x10
  __int64 v33; // x8
  __int128 v34; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  __int128 v39; // q0
  struct System_Int64_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  System_Collections_Generic_List_long__o *v44; // x0
  int v45; // w21
  System_Int64_array *v46; // x0
  System_Int64_array *v47; // x1
  System_Int64_array **v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]

  if ( (byte_4B111FF & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantFatigueListViewItem_TypeInfo, choiceList, unchoiceList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    byte_4B111FF = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v30 = *(_DWORD *)(itemList + 24);
  if ( v30 >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v31,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventServantFatigueListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v33 = *(_QWORD *)(itemList + 120);
      if ( v33 && *(_BYTE *)(itemList + 193) )
      {
        if ( *(_BYTE *)(itemList + 162) )
        {
          v34 = *(_OWORD *)(v33 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v33 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v51, 0LL);
          if ( !v27 )
            goto LABEL_37;
          items = v27->fields._items;
          v36 = Method_System_Collections_Generic_List_long__Add__;
          ++v27->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v27->fields._size;
          v28 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v43 = v36[4];
            v44 = v27;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v44,
              v28,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v43 + 192) + 112LL));
            goto LABEL_28;
          }
          v38 = &items->obj.klass + size;
          v27->fields._size = size + 1;
        }
        else
        {
          v39 = *(_OWORD *)(v33 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v33 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v39;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v50, 0LL);
          if ( !v23 )
            goto LABEL_37;
          v40 = v23->fields._items;
          v41 = Method_System_Collections_Generic_List_long__Add__;
          ++v23->fields._version;
          if ( !v40 )
            goto LABEL_37;
          v42 = v23->fields._size;
          v28 = itemList;
          if ( (unsigned int)v42 >= v40->max_length )
          {
            v43 = v41[4];
            v44 = v23;
            goto LABEL_27;
          }
          v38 = &v40->obj.klass + v42;
          v23->fields._size = v42 + 1;
        }
        v38[4] = (Il2CppClass *)v28;
      }
LABEL_28:
      if ( v30 == ++v31 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v45 = v27->fields._size + v23->fields._size;
  if ( v45 < 1 )
  {
    *choiceList = 0LL;
    sub_1BCA784(choiceList, 0LL);
    v48 = unchoiceList;
    v47 = 0LL;
    *unchoiceList = 0LL;
  }
  else
  {
    v46 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v46;
    sub_1BCA784(choiceList, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v47;
    v48 = unchoiceList;
  }
  sub_1BCA784(v48, v47);
  return v45 > 0;
}


bool __fastcall EventServantFatigueListViewManager__GetSwapLockList(
        EventServantFatigueListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  int64_t v28; // x1
  int64_t itemList; // x0
  int v30; // w25
  int32_t v31; // w24
  __int64 methodPtr_low; // x10
  __int64 v33; // x8
  __int128 v34; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  __int128 v39; // q0
  struct System_Int64_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  System_Collections_Generic_List_long__o *v44; // x0
  int v45; // w21
  System_Int64_array *v46; // x0
  System_Int64_array *v47; // x1
  System_Int64_array **v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]

  if ( (byte_4B111FE & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantFatigueListViewItem_TypeInfo, lockList, unlockList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    byte_4B111FE = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v30 = *(_DWORD *)(itemList + 24);
  if ( v30 >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v31,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventServantFatigueListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v33 = *(_QWORD *)(itemList + 120);
      if ( v33 && *(_BYTE *)(itemList + 192) )
      {
        if ( *(_BYTE *)(itemList + 161) )
        {
          v34 = *(_OWORD *)(v33 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v33 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v51, 0LL);
          if ( !v27 )
            goto LABEL_37;
          items = v27->fields._items;
          v36 = Method_System_Collections_Generic_List_long__Add__;
          ++v27->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v27->fields._size;
          v28 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v43 = v36[4];
            v44 = v27;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v44,
              v28,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v43 + 192) + 112LL));
            goto LABEL_28;
          }
          v38 = &items->obj.klass + size;
          v27->fields._size = size + 1;
        }
        else
        {
          v39 = *(_OWORD *)(v33 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v33 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v39;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v50, 0LL);
          if ( !v23 )
            goto LABEL_37;
          v40 = v23->fields._items;
          v41 = Method_System_Collections_Generic_List_long__Add__;
          ++v23->fields._version;
          if ( !v40 )
            goto LABEL_37;
          v42 = v23->fields._size;
          v28 = itemList;
          if ( (unsigned int)v42 >= v40->max_length )
          {
            v43 = v41[4];
            v44 = v23;
            goto LABEL_27;
          }
          v38 = &v40->obj.klass + v42;
          v23->fields._size = v42 + 1;
        }
        v38[4] = (Il2CppClass *)v28;
      }
LABEL_28:
      if ( v30 == ++v31 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v45 = v27->fields._size + v23->fields._size;
  if ( v45 < 1 )
  {
    *lockList = 0LL;
    sub_1BCA784(lockList, 0LL);
    v48 = unlockList;
    v47 = 0LL;
    *unlockList = 0LL;
  }
  else
  {
    v46 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v46;
    sub_1BCA784(lockList, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v47;
    v48 = unlockList;
  }
  sub_1BCA784(v48, v47);
  return v45 > 0;
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
  __int64 v2; // x2
  EventServantFatigueListViewManager_c *v3; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4B111DC & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantFatigueListViewManager_TypeInfo, v1, v2);
    byte_4B111DC = 1;
  }
  v3 = EventServantFatigueListViewManager_TypeInfo;
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo, v1);
    v3 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v3->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1BCAA3C(0LL, v1);
  ListViewSort__InitLoad(servantSortStatus, 0LL);
}


bool __fastcall EventServantFatigueListViewManager__IsMatchIndividuality(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v15; // x20
  unsigned __int64 v16; // x25
  struct EventServantRecoveryFatigueItem_o *v17; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v19; // w21
  Il2CppObject *v20; // x22
  __int64 v21; // x23
  __int64 v22; // x24
  struct EventServantRecoveryFatigueItem_o *v23; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v24; // x8
  int32_t v25; // w23
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B111ED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B111ED = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    goto LABEL_25;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)targetRecoveryFatigueItem->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
  if ( !v13 )
    goto LABEL_25;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v13,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    v15 = Instance;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( v16 >= (unsigned int)m_CancellationTokenSource )
          sub_1BCAA44(Instance, v11);
        v17 = this->fields.targetRecoveryFatigueItem;
        if ( !v17 )
          break;
        userServantEntity = v17->fields.userServantEntity;
        if ( !userServantEntity )
          break;
        v19 = *((_DWORD *)&v15->fields._DispLog + v16);
        v20 = entity;
        v22 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
        v21 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
        *(_QWORD *)&v28.fields.currentCryptoKey = v22;
        *(_QWORD *)&v28.fields.fakeValue = v21;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v28, 0LL);
        v23 = this->fields.targetRecoveryFatigueItem;
        if ( !v23 )
          break;
        v24 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v23->fields.userServantEntity;
        if ( !v24 )
          break;
        v25 = (int)Instance;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v24[8], 0LL);
        if ( !v20 )
          break;
        Instance = (DataManager_o *)ServantEntity__IsIndividuality(
                                      (ServantEntity_o *)v20,
                                      v25,
                                      (int32_t)Instance,
                                      v19,
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
          if ( (__int64)++v16 < (int)m_CancellationTokenSource )
            continue;
        }
        return (unsigned __int8)Instance & 1;
      }
LABEL_25:
      sub_1BCAA3C(Instance, v11);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x19
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 methodPtr_low; // x11
  EventServantFatigueListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v31; // q0
  int64_t v32; // x0
  Il2CppObject v33; // q0
  const MethodInfo *v34; // x2
  UnityEngine_Object_o *viewObject; // x21
  __int64 v36; // x1
  struct ListViewObject_o *v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4B111E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11, v12);
    sub_1BCA7E0(&EventServantFatigueListViewItem_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B111E5 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_37;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_37;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v41.fields._list = *(_OWORD *)&v40.fields.currentCryptoKey;
      v41.fields._current = (Il2CppObject *)v40.fields.fakeValue;
      while ( 1 )
      {
        v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v41,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v26 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v41,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_1BCAA3C(v26, v27);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_1BCAA3C(v26, v27);
            v31 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v40.fields.fakeValue = v31;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27);
            v39 = v40;
            v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v39, 0LL);
            v33 = Entity[2];
            *(Il2CppObject *)&v38.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v38.fields.fakeValue = v33;
            if ( v32 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v38, 0LL) )
              EventServantFatigueListViewItem__ModifyItem(current, (UserServantEntity_o *)Entity, v34);
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
          sub_1BCAA3C(v26, v27);
LABEL_26:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v37 = current->fields.viewObject;
          if ( !v37 )
            sub_1BCAA3C(0LL, v36);
          ((void (__fastcall *)(struct ListViewObject_o *, EventServantFatigueListViewItem_o *, Il2CppMethodPointer))v37->klass->vtable._5_SetItem.method)(
            v37,
            current,
            v37->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_37:
    sub_1BCAA3C(Instance, v23);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__ModifyList(
        EventServantFatigueListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t sort; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v17; // x25
  int64_t v18; // x20
  int size; // w28
  unsigned int v20; // w26
  __int64 v21; // x8
  __int128 v22; // q0
  int64_t v23; // x22
  int32_t v24; // w23
  int64_t v25; // x24
  __int64 methodPtr_low; // x10
  __int64 v27; // x8
  __int128 v28; // q0
  __int64 v29; // x8
  __int128 v30; // q0
  int64_t v31; // x0
  const MethodInfo *v32; // x4
  bool isIconSizeChangea; // [xsp+Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+70h] [xbp-80h]

  if ( (byte_4B111E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange, method);
    sub_1BCA7E0(&EventServantFatigueListViewItem_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B111E7 = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_33;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_33;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  v17 = *(_QWORD *)(sort + 24);
  v18 = sort;
  if ( (int)v17 >= 1 )
  {
    size = itemList->fields._size;
    v20 = 0;
    isIconSizeChangea = isIconSizeChange;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v18 + 8LL * (int)v20 + 32);
      if ( !v21 )
        break;
      v22 = *(_OWORD *)(v21 + 32);
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(v21 + 16);
      *(_OWORD *)&v37.fields.fakeValue = v22;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isIconSizeChange);
      v36 = v37;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v36, 0LL);
      if ( size >= 1 )
      {
        v23 = sort;
        v24 = 0;
        while ( 1 )
        {
          sort = (int64_t)this->fields.itemList;
          if ( !sort )
            goto LABEL_33;
          sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)sort,
                            v24,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !sort )
            goto LABEL_33;
          v25 = sort;
          methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)methodPtr_low
            || *(EventServantFatigueListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * methodPtr_low - 8) != EventServantFatigueListViewItem_TypeInfo )
          {
            goto LABEL_33;
          }
          v27 = *(_QWORD *)(sort + 120);
          if ( v27 )
          {
            v28 = *(_OWORD *)(v27 + 32);
            *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(v27 + 16);
            *(_OWORD *)&v37.fields.fakeValue = v28;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isIconSizeChange);
            v35 = v37;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v35, 0LL);
            if ( sort == v23 )
              break;
          }
          if ( size == ++v24 )
            goto LABEL_29;
        }
        v29 = *(_QWORD *)(v25 + 120);
        if ( !v29 )
          break;
        v30 = *(_OWORD *)(v29 + 32);
        *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(v29 + 16);
        *(_OWORD *)&v37.fields.fakeValue = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isIconSizeChange);
        v34 = v37;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v34, 0LL);
        EventServantFatigueListViewManager__ModifyLockItem(this, v31, 1, isIconSizeChangea, v32);
      }
LABEL_29:
      if ( ++v20 == (_DWORD)v17 )
        return;
      if ( v20 >= *(_DWORD *)(v18 + 24) )
        sub_1BCAA44(sort, isIconSizeChange);
    }
LABEL_33:
    sub_1BCAA3C(sort, isIconSizeChange);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__ModifyLockItem(
        EventServantFatigueListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v29; // w20
  __int64 v30; // x0
  const MethodInfo *v31; // x1
  __int64 methodPtr_low; // x11
  EventServantFatigueListViewItem_o *current; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v35; // q0
  int64_t v36; // x0
  Il2CppObject v37; // q0
  int64_t v38; // x24
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  UnityEngine_Object_o *viewObject; // x23
  __int64 v42; // x1
  struct ListViewObject_o *v43; // x0
  __int64 v44; // x1
  ListViewObject_o *v45; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_4B111E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, isInit);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v14, v15);
    sub_1BCA7E0(&EventServantFatigueListViewItem_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    byte_4B111E6 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_45;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_45;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v49,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v50.fields._list = *(_OWORD *)&v49.fields.currentCryptoKey;
      v50.fields._current = (Il2CppObject *)v49.fields.fakeValue;
      v29 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v50,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v30 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v50,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v50.fields._current
          && (methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v50.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventServantFatigueListViewItem_c *)v50.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = (EventServantFatigueListViewItem_o *)v50.fields._current;
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
          sub_1BCAA3C(v30, v31);
        userServantEntity = current->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1BCAA3C(v30, v31);
        v35 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v49.fields.fakeValue = v35;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
        v48 = v49;
        v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v48, 0LL);
        v37 = Entity[2];
        v38 = v36;
        *(Il2CppObject *)&v47.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v47.fields.fakeValue = v37;
        v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v47, 0LL);
        if ( v38 == v30 )
        {
          current->fields.userServantEntity = (struct UserServantEntity_o *)Entity;
          v30 = sub_1BCA784(&current->fields.userServantEntity, Entity);
        }
LABEL_26:
        if ( v29 )
        {
          if ( !current )
            sub_1BCAA3C(v30, v31);
          EventServantFatigueListViewItem__ModifyLockItem(current, v31);
          EventServantFatigueListViewItem__ModifyChoiceItem(current, v39);
          EventServantFatigueListViewItem__ModifyPushItem(current, v40);
        }
        else if ( !current )
        {
          sub_1BCAA3C(v30, v31);
        }
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v43 = current->fields.viewObject;
          if ( !v43 )
            sub_1BCAA3C(0LL, v42);
          ((void (__fastcall *)(struct ListViewObject_o *, EventServantFatigueListViewItem_o *, Il2CppMethodPointer))v43->klass->vtable._5_SetItem.method)(
            v43,
            current,
            v43->klass->vtable._6_SetItem.methodPtr);
          if ( isIconSizeChange )
          {
            v45 = current->fields.viewObject;
            if ( !v45 )
              sub_1BCAA3C(0LL, v44);
            ListViewObject__SetItemSeed(v45, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_45:
    sub_1BCAA3C(Instance, v26);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickBack(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x20

  if ( (byte_4B11205 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_OnClickBack__, method, v2);
    byte_4B11205 = 1;
  }
  v4 = Method_EventServantFatigueListViewManager_OnClickBack__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_EventServantFatigueListViewManager_OnClickBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0LL;
    sub_1BCA784(&this->fields.selectAfterCallback, 0LL);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4B111F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__, method, v2);
    byte_4B111F8 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventServantFatigueListViewManager_OnClickBonusFilterKind__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(0LL, v6);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickChoiceTab(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4B11202 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_EndClickTabChoice__, method, v2);
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_OnClickChoiceTab__, v4, v5);
    sub_1BCA7E0(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B11202 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v8 = Method_EventServantFatigueListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EventServantFatigueListViewManager_OnClickChoiceTab__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v13 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                          EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo,
                                                                          v10,
                                                                          v11,
                                                                          v12);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabChoice__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v13, v14);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 2, v11);
      EventServantFatigueListViewManager__RefreshListDisp(this, v15);
      EventServantFatigueListViewManager__ModifyList(this, 0, v16);
      EventServantFatigueListViewManager__SetMode_31203504(this, 2, v17);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickCollectLock(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4B11201 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_EndClickTabLock__, method, v2);
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_OnClickCollectLock__, v4, v5);
    sub_1BCA7E0(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B11201 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v8 = Method_EventServantFatigueListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EventServantFatigueListViewManager_OnClickCollectLock__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v13 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                          EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo,
                                                                          v10,
                                                                          v11,
                                                                          v12);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabLock__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v13, v14);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 1, v11);
      EventServantFatigueListViewManager__RefreshListDisp(this, v15);
      EventServantFatigueListViewManager__ModifyList(this, 0, v16);
      EventServantFatigueListViewManager__SetMode_31203504(this, 2, v17);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickFilterKind(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantFilterSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B111F6 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_EndSelectFilterKind__, v4, v5);
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_OnClickFilterKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B111F6 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_EventServantFatigueListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_EventServantFatigueListViewManager_OnClickFilterKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v15,
                                                      v16,
                                                      v17);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantFilterSelectMenu(v14, 1, sort, v18, -1, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B11200 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_EndClickTabStatus__, method, v2);
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_OnClickNormalStatus__, v4, v5);
    sub_1BCA7E0(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B11200 = 1;
  }
  if ( this->fields.modeKind )
  {
    v8 = Method_EventServantFatigueListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EventServantFatigueListViewManager_OnClickNormalStatus__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                        EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo,
                                                                        v10,
                                                                        v11,
                                                                        v12);
    EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndClickTabStatus__,
      0LL);
    EventServantFatigueListViewManager__StatusRequest(this, v13, v14);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickPushTab(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4B11203 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_EndClickTabPush__, method, v2);
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_OnClickPushTab__, v4, v5);
    sub_1BCA7E0(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B11203 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v8 = Method_EventServantFatigueListViewManager_OnClickPushTab__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickPushTab__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EventServantFatigueListViewManager_OnClickPushTab__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v13 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                          EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo,
                                                                          v10,
                                                                          v11,
                                                                          v12);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabPush__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v13, v14);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 3, v11);
      EventServantFatigueListViewManager__RefreshListDisp(this, v15);
      EventServantFatigueListViewManager__ModifyList(this, 0, v16);
      EventServantFatigueListViewManager__SetMode_31203504(this, 2, v17);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickScaleChange(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  EventServantFatigueListViewManager_o *v9; // x0
  int v10; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v13; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_4B11206 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_OnClickScaleChange__, method, v2);
    byte_4B11206 = 1;
  }
  v4 = Method_EventServantFatigueListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_EventServantFatigueListViewManager_OnClickScaleChange__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v9 = this;
    v10 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v9 = this;
    v10 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v9 = this;
    v10 = 1;
LABEL_11:
    v9->fields.seed = smallSizeSeed;
    p_seed = &v9->fields.seed;
    *((_DWORD *)p_seed + 116) = v10;
    sub_1BCA784(p_seed, smallSizeSeed);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v13 = this->fields.scaleType,
        sort->fields.iconScaleKind = v13,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v13, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1BCAA3C(sort, v6);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  EventServantFatigueListViewManager__ModifyList(this, 1, v15);
  EventServantFatigueListViewManager__SetMode_31203504(this, 2, v16);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventServantFatigueListViewManager__OnClickSelectObject(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ListViewObject_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 fatigueRecoveryConfirmationDialog; // x0
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  __int64 methodPtr_low; // x10
  EventServantFatigueListViewItem_o *Item; // x21
  const MethodInfo *v44; // x2
  __int64 v45; // x8
  __int128 v46; // q1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v48; // q0
  __int64 v49; // x23
  const MethodInfo *v50; // x2
  bool IsMatchIndividuality_31192900; // w0
  const MethodInfo *v52; // x5
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct UserServantEntity_o *v54; // x1
  __int64 v55; // x1
  FatigueRecoveryConfirmationDialog_o *v56; // x20
  System_String_o *v57; // x21
  Il2CppObject *Name; // x0
  System_String_o *v59; // x21
  System_String_o *v60; // x0
  UserServantEntity_o *targetOutUserServantEntity; // x22
  System_String_o *v62; // x23
  System_String_o *outAfterTime; // x27
  System_String_o *v64; // x24
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  CommonConfirmDialog_ClickDelegate_o *func; // x25
  bool v69; // w0
  const MethodInfo *v70; // x5
  struct UserServantEntity_o *v71; // x1
  __int64 v72; // x1
  FatigueRecoveryConfirmationDialog_o *v73; // x20
  System_String_o *v74; // x21
  Il2CppObject *v75; // x0
  System_String_o *v76; // x21
  System_String_o *v77; // x0
  UserServantEntity_o *v78; // x22
  System_String_o *v79; // x23
  System_String_o *v80; // x24
  System_String_o *v81; // x25
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  CommonConfirmDialog_ClickDelegate_o *v85; // x26
  struct EventServantRecoveryFatigueItem_o *v86; // x8
  struct UserServantEntity_o *v87; // x8
  __int128 v88; // q0
  struct UserServantEntity_o *v89; // x8
  __int128 v90; // q0
  const MethodInfo *v91; // x2
  bool v92; // w0
  const MethodInfo *v93; // x5
  struct EventServantRecoveryFatigueItem_o *v94; // x8
  struct UserServantEntity_o *v95; // x8
  UserEventServantFatigueMaster_o *v96; // x23
  int32_t eventId; // w24
  __int64 v98; // x25
  __int64 v99; // x26
  bool FatigueInfo; // w0
  const MethodInfo *v101; // x1
  int64_t v102; // x23
  int64_t v103; // x23
  bool IsMatchIndividuality; // w0
  const MethodInfo *v105; // x5
  struct UserServantEntity_o *v106; // x1
  struct EventServantRecoveryFatigueItem_o *v107; // x8
  struct UserServantEntity_o *v108; // x1
  __int64 v109; // x1
  FatigueRecoveryConfirmationDialog_o *v110; // x20
  System_String_o *v111; // x21
  Il2CppObject *v112; // x0
  System_String_o *v113; // x21
  System_String_o *v114; // x0
  System_String_o *v115; // x22
  System_String_o *v116; // x23
  UserServantEntity_o *v117; // x24
  UserServantEntity_o *targetInUserServantEntity; // x26
  System_String_o *v119; // x25
  System_String_o *v120; // x29
  System_String_o *v121; // x27
  __int64 v122; // x1
  __int64 v123; // x2
  __int64 v124; // x3
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
  if ( (byte_4B111EC & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v9, v10);
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__, v11, v12);
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_OnClickSelectObject__, v13, v14);
    sub_1BCA7E0(&EventServantFatigueListViewObject_TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&StringLiteral_11767/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_11759/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_11757/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_11687/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_11685/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/, v37, v38);
    byte_4B111EC = 1;
  }
  v140 = 0LL;
  v141 = 0LL;
  afterTime = 0LL;
  beforeTime = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
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
  v40 = Method_EventServantFatigueListViewManager_OnClickSelectObject__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectObject__ + 83) & 2) != 0 )
    v40 = (_QWORD *)sub_1BCA7F8(Method_EventServantFatigueListViewManager_OnClickSelectObject__);
  v41 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v40, v40[4]);
  OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0LL);
  if ( !v3 )
    goto LABEL_56;
  methodPtr_low = LOBYTE(EventServantFatigueListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_56;
  if ( (EventServantFatigueListViewObject_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewObject_TypeInfo )
    goto LABEL_56;
  Item = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)v3, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1BCA784(&this->fields.targetInUserServantEntity, 0LL);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1BCA784(&this->fields.targetOutUserServantEntity, 0LL);
  fatigueRecoveryConfirmationDialog = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fatigueRecoveryConfirmationDialog,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  fatigueRecoveryConfirmationDialog = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_56;
  fatigueRecoveryConfirmationDialog = (__int64)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  obj = (ListViewObject_o *)this->fields.targetRecoveryFatigueItem;
  if ( !obj )
    goto LABEL_56;
  v45 = *(_QWORD *)&obj->fields.basePosition.fields.z;
  if ( v45 )
  {
    v46 = *(_OWORD *)(v45 + 32);
    *(_OWORD *)&v131.fields.currentCryptoKey = *(_OWORD *)(v45 + 16);
    *(_OWORD *)&v131.fields.fakeValue = v46;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj);
    v130 = v131;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v130, 0LL);
    if ( !Item )
      goto LABEL_56;
    userServantEntity = Item->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_56;
    v48 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    v49 = fatigueRecoveryConfirmationDialog;
    *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v129.fields.fakeValue = v48;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v129, 0LL);
    if ( v49 == fatigueRecoveryConfirmationDialog )
    {
      afterTime = (System_String_o *)StringLiteral_1/*""*/;
      beforeTime = (System_String_o *)StringLiteral_1/*""*/;
      IsMatchIndividuality_31192900 = EventServantFatigueListViewItem__IsMatchIndividuality_31192900(
                                        Item,
                                        this->fields.targetRecoveryFatigueItem,
                                        v50);
      EventServantFatigueListViewManager__GetOutRecoveryTime(
        this,
        Item->fields.fatigueTime,
        &beforeTime,
        &afterTime,
        IsMatchIndividuality_31192900,
        v52);
      targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
      if ( targetRecoveryFatigueItem )
      {
        v54 = targetRecoveryFatigueItem->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v54;
        sub_1BCA784(&this->fields.targetOutUserServantEntity, v54);
        v56 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
        fatigueRecoveryConfirmationDialog = (__int64)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11767/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/,
                                                       0LL);
        if ( this->fields.targetRecoveryFatigueItem )
        {
          v57 = (System_String_o *)fatigueRecoveryConfirmationDialog;
          Name = (Il2CppObject *)EventServantRecoveryFatigueItem__get_Name(this->fields.targetRecoveryFatigueItem, 0LL);
          v59 = System_String__Format(v57, Name, 0LL);
          v60 = LocalizationManager__Get((System_String_o *)StringLiteral_11757/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0LL);
          targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
          outAfterTime = afterTime;
          v62 = beforeTime;
          v64 = v60;
          func = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                          CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                          v65,
                                                          v66,
                                                          v67);
          CommonConfirmDialog_ClickDelegate___ctor(
            func,
            (Il2CppObject *)this,
            Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
            0LL);
          if ( v56 )
          {
            FatigueRecoveryConfirmationDialog__Setup(
              v56,
              v59,
              v64,
              0LL,
              (System_String_o *)StringLiteral_1/*""*/,
              (System_String_o *)StringLiteral_1/*""*/,
              targetOutUserServantEntity,
              v62,
              outAfterTime,
              1,
              func,
              v126);
            return;
          }
        }
      }
LABEL_56:
      sub_1BCAA3C(fatigueRecoveryConfirmationDialog, obj);
    }
    v86 = this->fields.targetRecoveryFatigueItem;
    if ( !v86 )
      goto LABEL_56;
    v87 = v86->fields.userServantEntity;
    if ( v87 )
    {
      v88 = *(_OWORD *)&v87->fields.id.fields.fakeValue;
      *(_OWORD *)&v131.fields.currentCryptoKey = *(_OWORD *)&v87->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v131.fields.fakeValue = v88;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj);
      v128 = v131;
      fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                            &v128,
                                            0LL);
      v89 = Item->fields.userServantEntity;
      if ( !v89 )
        goto LABEL_56;
      v90 = *(_OWORD *)&v89->fields.id.fields.fakeValue;
      *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&v89->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v127.fields.fakeValue = v90;
      if ( fatigueRecoveryConfirmationDialog != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                  &v127,
                                                  0LL) )
      {
        v136 = (System_String_o *)StringLiteral_1/*""*/;
        v137 = (System_String_o *)StringLiteral_1/*""*/;
        v92 = EventServantFatigueListViewItem__IsMatchIndividuality_31192900(
                Item,
                this->fields.targetRecoveryFatigueItem,
                v91);
        EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v137, &v136, v92, v93);
        v134 = (System_String_o *)StringLiteral_1/*""*/;
        v135 = (System_String_o *)StringLiteral_1/*""*/;
        fatigueRecoveryConfirmationDialog = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !fatigueRecoveryConfirmationDialog )
          goto LABEL_56;
        fatigueRecoveryConfirmationDialog = (__int64)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        v94 = this->fields.targetRecoveryFatigueItem;
        if ( !v94 )
          goto LABEL_56;
        v95 = v94->fields.userServantEntity;
        if ( !v95 )
          goto LABEL_56;
        v96 = (UserEventServantFatigueMaster_o *)fatigueRecoveryConfirmationDialog;
        eventId = this->fields.eventId;
        v99 = *(_QWORD *)&v95->fields.svtId.fields.currentCryptoKey;
        v98 = *(_QWORD *)&v95->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, obj);
        *(_QWORD *)&v142.fields.currentCryptoKey = v99;
        *(_QWORD *)&v142.fields.fakeValue = v98;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v142,
                                              0LL);
        if ( !v96 )
          goto LABEL_56;
        FatigueInfo = UserEventServantFatigueMaster__GetFatigueInfo(
                        v96,
                        &recoverAt,
                        &isRecover,
                        eventId,
                        fatigueRecoveryConfirmationDialog,
                        0LL);
        v102 = 0LL;
        if ( FatigueInfo )
        {
          v103 = recoverAt;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v101);
          if ( v103 <= NetworkManager__getTime(0LL) )
            v102 = 0LL;
          else
            v102 = recoverAt;
        }
        IsMatchIndividuality = EventServantFatigueListViewManager__IsMatchIndividuality(this, v101);
        EventServantFatigueListViewManager__GetOutRecoveryTime(this, v102, &v135, &v134, IsMatchIndividuality, v105);
        v106 = Item->fields.userServantEntity;
        this->fields.targetInUserServantEntity = v106;
        fatigueRecoveryConfirmationDialog = sub_1BCA784(&this->fields.targetInUserServantEntity, v106);
        v107 = this->fields.targetRecoveryFatigueItem;
        if ( !v107 )
          goto LABEL_56;
        v108 = v107->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v108;
        sub_1BCA784(&this->fields.targetOutUserServantEntity, v108);
        v110 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v109);
        fatigueRecoveryConfirmationDialog = (__int64)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11687/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/,
                                                       0LL);
        if ( !this->fields.targetRecoveryFatigueItem )
          goto LABEL_56;
        v111 = (System_String_o *)fatigueRecoveryConfirmationDialog;
        v112 = (Il2CppObject *)EventServantRecoveryFatigueItem__get_Name(this->fields.targetRecoveryFatigueItem, 0LL);
        v113 = System_String__Format(v111, v112, 0LL);
        v114 = LocalizationManager__Get((System_String_o *)StringLiteral_11685/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/, 0LL);
        v116 = v136;
        v115 = v137;
        targetInUserServantEntity = this->fields.targetInUserServantEntity;
        v117 = this->fields.targetOutUserServantEntity;
        v120 = v134;
        v119 = v135;
        v121 = v114;
        v125 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                        CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                        v122,
                                                        v123,
                                                        v124);
        CommonConfirmDialog_ClickDelegate___ctor(
          v125,
          (Il2CppObject *)this,
          Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
          0LL);
        if ( !v110 )
          goto LABEL_56;
        FatigueRecoveryConfirmationDialog__Setup(
          v110,
          v113,
          v121,
          targetInUserServantEntity,
          v115,
          v116,
          v117,
          v119,
          v120,
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
    v69 = EventServantFatigueListViewItem__IsMatchIndividuality_31192900(
            Item,
            (EventServantRecoveryFatigueItem_o *)obj,
            v44);
    EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v141, &v140, v69, v70);
    v71 = Item->fields.userServantEntity;
    this->fields.targetInUserServantEntity = v71;
    sub_1BCA784(&this->fields.targetInUserServantEntity, v71);
    v73 = this->fields.fatigueRecoveryConfirmationDialog;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
    fatigueRecoveryConfirmationDialog = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11759/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/, 0LL);
    if ( !this->fields.targetRecoveryFatigueItem )
      goto LABEL_56;
    v74 = (System_String_o *)fatigueRecoveryConfirmationDialog;
    v75 = (Il2CppObject *)EventServantRecoveryFatigueItem__get_Name(this->fields.targetRecoveryFatigueItem, 0LL);
    v76 = System_String__Format(v74, v75, 0LL);
    v77 = LocalizationManager__Get((System_String_o *)StringLiteral_11757/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0LL);
    v78 = this->fields.targetInUserServantEntity;
    v80 = v140;
    v79 = v141;
    v81 = v77;
    v85 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v82, v83, v84);
    CommonConfirmDialog_ClickDelegate___ctor(
      v85,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
      0LL);
    if ( !v73 )
      goto LABEL_56;
    FatigueRecoveryConfirmationDialog__Setup(
      v73,
      v76,
      v81,
      v78,
      v79,
      v80,
      0LL,
      (System_String_o *)StringLiteral_1/*""*/,
      (System_String_o *)StringLiteral_1/*""*/,
      1,
      v85,
      v126);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickSelectPush(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  EventServantFatigueListViewManager___c__DisplayClass107_0_o *v46; // x19
  __int64 SelfUserGame; // x0
  __int64 v48; // x1
  __int64 methodPtr_low; // x9
  EventServantFatigueListViewItem_o *Item; // x0
  EventServantFatigueListViewItem_o **p_selectItem; // x20
  int64_t v52; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v54; // q1
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  const MethodInfo *v57; // x2
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  Il2CppObject *Entity; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v61; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  __int64 v64; // x1
  Il2CppObject *v65; // x25
  System_String_o *v66; // x21
  System_String_o *v67; // x22
  System_Object_array *v68; // x23
  __int64 v69; // x1
  int32_t Rarity; // w26
  Il2CppObject *v71; // x26
  Il2CppObject *v72; // x26
  int32_t v73; // w0
  Il2CppObject *v74; // x24
  int32_t v75; // w0
  Il2CppObject *v76; // x24
  Il2CppObject *v77; // x24
  EventServantFatigueListViewItem_o *v78; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v79; // x9
  ServantEntity_o *servantEntity; // x20
  Il2CppObject *v81; // x20
  System_String_o *v82; // x20
  System_String_o *v83; // x22
  System_String_o *v84; // x23
  Il2CppObject *Instance; // x24
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  CommonConfirmDialog_ClickDelegate_o *v89; // x25
  __int64 v90; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_4B11207 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, obj, method);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_OnClickSelectPush__, v16, v17);
    sub_1BCA7E0(&EventServantFatigueListViewObject_TypeInfo, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&object___TypeInfo, v22, v23);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26, v27);
    sub_1BCA7E0(&Rarity_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33);
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__, v34, v35);
    sub_1BCA7E0(&EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo, v36, v37);
    sub_1BCA7E0(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v44, v45);
    byte_4B11207 = 1;
  }
  v46 = (EventServantFatigueListViewManager___c__DisplayClass107_0_o *)sub_1BCAA2C(
                                                                         EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo,
                                                                         obj,
                                                                         method,
                                                                         v3);
  EventServantFatigueListViewManager___c__DisplayClass107_0___ctor(v46, 0LL);
  if ( !v46 )
    goto LABEL_62;
  v46->fields.__4__this = this;
  SelfUserGame = sub_1BCA784(&v46->fields, this);
  if ( !obj )
    goto LABEL_62;
  methodPtr_low = LOBYTE(EventServantFatigueListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    SelfUserGame = sub_1BCACFC(obj);
    goto LABEL_64;
  }
  Item = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)obj, 0LL);
  v46->fields.selectItem = Item;
  p_selectItem = &v46->fields.selectItem;
  sub_1BCA784(&v46->fields.selectItem, Item);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_62;
  v52 = *(_QWORD *)(SelfUserGame + 120);
  if ( v52 )
  {
    if ( !*p_selectItem )
      goto LABEL_62;
    userServantEntity = (*p_selectItem)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_62;
    v54 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v92.fields.fakeValue = v54;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v48);
    v91 = v92;
    if ( v52 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v91, 0LL) )
      goto LABEL_14;
    v58 = Method_EventServantFatigueListViewManager_OnClickSelectPush__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
      v58 = (_QWORD *)sub_1BCA7F8(Method_EventServantFatigueListViewManager_OnClickSelectPush__);
    v59 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v58, v58[4]);
    OverwriteAssetSoundName__PlaySystemSe(v59, 0, 0LL);
    SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_62;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
               v52,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_62;
    v61 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48);
    *(_QWORD *)&v93.fields.currentCryptoKey = klass;
    *(_QWORD *)&v93.fields.fakeValue = monitor;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v93, 0LL);
    if ( !v61 )
      goto LABEL_62;
    v65 = DataMasterBase_object__object__int___GetEntity(
            v61,
            SelfUserGame,
            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v64);
    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v68 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v69);
    SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v68 )
LABEL_62:
      sub_1BCAA3C(SelfUserGame, v48);
    v71 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BCA91C(SelfUserGame, v68->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( !v68->max_length )
      goto LABEL_64;
    v68->m_Items[0] = v71;
    SelfUserGame = sub_1BCA784(v68->m_Items, v71);
    if ( !v65 )
      goto LABEL_62;
    SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)v65, 0LL);
    v72 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BCA91C(SelfUserGame, v68->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v68->max_length <= 1 )
      goto LABEL_64;
    v68->m_Items[1] = v72;
    sub_1BCA784(&v68->m_Items[1], v72);
    v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
            0LL);
    SelfUserGame = (__int64)ServantEntity__getName((ServantEntity_o *)v65, v73, -1, 0LL);
    v74 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BCA91C(SelfUserGame, v68->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v68->max_length <= 2 )
      goto LABEL_64;
    v68->m_Items[2] = v74;
    SelfUserGame = sub_1BCA784(&v68->m_Items[2], v74);
    if ( !*p_selectItem )
      goto LABEL_62;
    SelfUserGame = (__int64)(*p_selectItem)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    v75 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
    SelfUserGame = (__int64)Rarity__getRarityType(v75, 0LL);
    v76 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BCA91C(SelfUserGame, v68->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v68->max_length <= 3 )
      goto LABEL_64;
    v68->m_Items[3] = v76;
    SelfUserGame = sub_1BCA784(&v68->m_Items[3], v76);
    if ( !*p_selectItem )
      goto LABEL_62;
    SelfUserGame = (__int64)(*p_selectItem)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
    v77 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BCA91C(SelfUserGame, v68->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v68->max_length <= 4 )
      goto LABEL_64;
    v68->m_Items[4] = v77;
    SelfUserGame = sub_1BCA784(&v68->m_Items[4], v77);
    v78 = *p_selectItem;
    if ( !*p_selectItem )
      goto LABEL_62;
    v79 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v78->fields.userServantEntity;
    if ( !v79 )
      goto LABEL_62;
    servantEntity = v78->fields.servantEntity;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v79[6], 0LL);
    if ( !servantEntity )
      goto LABEL_62;
    SelfUserGame = (__int64)ServantEntity__getName(servantEntity, SelfUserGame, -1, 0LL);
    v81 = (Il2CppObject *)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BCA91C(SelfUserGame, v68->obj.klass->_1.element_class);
      if ( !SelfUserGame )
      {
LABEL_65:
        v90 = sub_1BCAA60();
        sub_1BCA908(v90, 0LL);
      }
    }
    if ( v68->max_length > 5 )
    {
      v68->m_Items[5] = v81;
      sub_1BCA784(&v68->m_Items[5], v81);
      v82 = System_String__Format_62415728(v67, v68, 0LL);
      v83 = LocalizationManager__Get((System_String_o *)StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v84 = LocalizationManager__Get((System_String_o *)StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v89 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                     CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                     v86,
                                                     v87,
                                                     v88);
      CommonConfirmDialog_ClickDelegate___ctor(
        v89,
        (Il2CppObject *)v46,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__,
        0LL);
      SelfUserGame = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v48);
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_30766616(
          (CommonUI_o *)Instance,
          v66,
          v82,
          v83,
          v84,
          1,
          v89,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_62;
    }
LABEL_64:
    sub_1BCAA44(SelfUserGame, v48);
  }
LABEL_14:
  v55 = Method_EventServantFatigueListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v55 = (_QWORD *)sub_1BCA7F8(Method_EventServantFatigueListViewManager_OnClickSelectPush__);
  v56 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v55, v55[4]);
  OverwriteAssetSoundName__PlaySystemSe(v56, 8, 0LL);
  EventServantFatigueListViewManager__PushRequest(this, *p_selectItem, v57);
}


void __fastcall EventServantFatigueListViewManager__OnClickSortAscendingOrder(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B111FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B111FC = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventServantFatigueListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickSortButton(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantSortSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B111FA & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_EndSelectSortKind__, v4, v5);
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_OnClickSortButton__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B111FA = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_EventServantFatigueListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_EventServantFatigueListViewManager_OnClickSortButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v18 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantSortSelectMenu(v14, 7, sort, 0, v18, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnLongPushListView(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  EventServantFatigueListViewItem_o *Item; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x10
  struct UserServantEntity_o *userServantEntity; // x8
  EventServantFatigueListViewItem_o *v21; // x20
  __int128 v22; // q1
  Il2CppObject *Instance; // x0
  UserServantEntity_o *v24; // x20
  CommonUI_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  ServantStatusDialog_EndDelegate_o *v29; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-50h]

  if ( (byte_4B111F3 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_EndShowServant__, v5, v6);
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_OnLongPushListView__, v7, v8);
    sub_1BCA7E0(&EventServantFatigueListViewObject_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    byte_4B111F3 = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v15 = Method_EventServantFatigueListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1BCA7F8(Method_EventServantFatigueListViewManager_OnLongPushListView__);
    v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
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
    v21 = Item;
    if ( !userServantEntity )
      goto LABEL_16;
    v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v31.fields.fakeValue = v22;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    v30 = v31;
    this->fields.statusShowUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v30, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = v21->fields.userServantEntity;
    v25 = (CommonUI_o *)Instance;
    v29 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v26, v27, v28);
    ServantStatusDialog_EndDelegate___ctor(
      v29,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndShowServant__,
      0LL);
    if ( !v25 )
LABEL_16:
      sub_1BCAA3C(Item, v18);
    CommonUI__OpenServantStatusDialog_30776796(v25, 0, v24, v29, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnMoveEnd(
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

  if ( (byte_4B111EB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B111EB = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_1BCA784(&this->fields.CallbackFunc2, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  DataManager_o *limitCountSupport; // x0
  __int64 v22; // x1
  DataManager_o *v23; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v25; // x21
  int64_t v26; // x22
  __int64 v27; // x24
  __int64 v28; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int64 v30; // x1
  __int128 v31; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v34; // x0
  __int128 v35; // q1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  NetworkManager_ResultCallbackFunc_o *v39; // x21
  __int64 v40; // x1
  Il2CppObject *Request_object; // x0
  __int128 v42; // q1
  CardFavoriteRequest_o *v43; // x20
  int32_t v44; // w26
  int32_t v45; // w27
  int32_t v46; // w28
  int32_t v47; // w29
  bool IsLock; // w21
  char v49; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v53; // w0
  __int64 v54; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v58; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v60; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v61; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B11208 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem, method);
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_EndPushRequest__, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B11208 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v23 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v23 || !userServantEntity )
    goto LABEL_18;
  v25 = (UserServantCollectionMaster_o *)limitCountSupport;
  v26 = *(_QWORD *)&v23->fields.m_CachedPtr;
  v28 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
  *(_QWORD *)&v66.fields.currentCryptoKey = v28;
  *(_QWORD *)&v66.fields.fakeValue = v27;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
  if ( !v25 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v25, v26, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v31 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v23->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v65.fields.fakeValue = v31;
  v61 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30);
  v64 = v65;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v64, 0LL);
  v35 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v23->fields.masterLoadThreads;
  v60 = v34;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v35;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v63, 0LL);
  v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v36, v37, v38);
  NetworkManager_ResultCallbackFunc___ctor(
    v39,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_EndPushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
  Request_object = NetworkManager__getRequest_object_(
                     v39,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v42 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v43 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v42;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v62, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v49 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v54 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v67.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v53;
  *(_QWORD *)&v67.fields.currentCryptoKey = v54;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v67, 0LL);
  if ( !v43 )
LABEL_18:
    sub_1BCAA3C(limitCountSupport, v22);
  CardFavoriteRequest__beginRequest(
    v43,
    targetUsrSVtId,
    imageLimitCount,
    v44,
    v45,
    v46,
    v47,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v58,
    IsLock,
    v49 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v61 != (struct System_Threading_SynchronizationContext_o *)v60,
    0LL);
}


void __fastcall EventServantFatigueListViewManager__RefreshListDisp(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v7; // x1
  int32_t size; // w22
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w21

  if ( (byte_4B111E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__, v4, v5);
    byte_4B111E2 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EventServantFatigueListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_9;
  size = ObjectList->fields._size;
  v9 = ObjectList;
  if ( size >= 1 )
  {
    v10 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v9,
                                                                  v10,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( size == ++v10 )
        return;
    }
LABEL_9:
    sub_1BCAA3C(ObjectList, v7);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *ObjectList; // x0
  __int64 v16; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w22
  Il2CppObject *Item; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x24

  if ( (byte_4B111EA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_OnMoveEnd__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__, v11, v12);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v13, v14);
    byte_4B111EA = 1;
  }
  ObjectList = EventServantFatigueListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v18 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v19 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v18,
               v19,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
      v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_EventServantFatigueListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      EventServantFatigueListViewObject__Init_31220344((EventServantFatigueListViewObject_o *)Item, mode, v24, 0LL);
      if ( size == ++v19 )
        return;
    }
LABEL_10:
    sub_1BCAA3C(ObjectList, v16);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
    delay,
    0LL);
}


void __fastcall EventServantFatigueListViewManager__SetFilterButtonImage(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v8; // x8

  if ( (byte_4B111F9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v4, v5);
    byte_4B111F9 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BCAA3C(sort, method);
  }
  v8 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v8, 0LL);
}


void __fastcall EventServantFatigueListViewManager__SetHeaderMsg(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *recoveryFatigueInfoMsgLabel; // x19
  __int64 *v13; // x8
  System_String_o *v14; // x0
  __int64 v15; // x1

  if ( (byte_4B111E4 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_11778/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/, v10, v11);
    byte_4B111E4 = 1;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v13 = &StringLiteral_11778/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/;
      goto LABEL_16;
    case 1:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v13 = &StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_16;
    case 2:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v13 = &StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_16;
    case 3:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v13 = &StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_16:
      v14 = LocalizationManager__Get((System_String_o *)*v13, 0LL);
      if ( !recoveryFatigueInfoMsgLabel )
        sub_1BCAA3C(v14, v15);
      UILabel__set_text(recoveryFatigueInfoMsgLabel, v14, 0LL);
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
  sub_1BCA784(&this->fields.Callback, callback);
  EventServantFatigueListViewManager__SetMode_31203504(this, mode, v6);
}


void __fastcall EventServantFatigueListViewManager__SetMode_31163568(
        EventServantFatigueListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.CallbackFunc2 = callback;
  sub_1BCA784(&this->fields.CallbackFunc2, callback);
  EventServantFatigueListViewManager__SetMode_31203504(this, mode, v6);
}


void __fastcall EventServantFatigueListViewManager__SetMode_31203504(
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
  if ( (byte_4B111E9 & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_1BCA7E0(&EventServantFatigueListViewObject_TypeInfo, obj, item);
    byte_4B111E9 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventServantFatigueListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventServantFatigueListViewObject__Init_31219324((EventServantFatigueListViewObject_o *)obj, v7, 0LL);
}


void __fastcall EventServantFatigueListViewManager__SetSortButtonImage(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v17; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v19; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v21; // x8
  int32_t sortKind; // w9
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x9
  System_String_o **v26; // x10
  System_String_o **v27; // x8
  System_String_o **v28; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v30; // x20

  if ( (byte_4B111FD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v14, v15);
    byte_4B111FD = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    v19 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v19 )
      goto LABEL_42;
    UILabel__set_text(v19, (System_String_o *)sort, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    ListViewSort__SetupSortLabelLayout(sort, this->fields.sortKindLabel, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v21 = this->fields.sort;
    if ( !v21 )
      goto LABEL_42;
    sortKind = v21->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v23 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
      v24 = this->fields.sort;
      if ( !v24 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v25 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
      v26 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_42;
      v27 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17806/*"btn_txt_up"*/ : &StringLiteral_17751/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v27, 0LL);
      v24 = this->fields.sort;
      if ( !v24 )
        goto LABEL_42;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_42;
      v25 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
      v26 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
    }
    if ( v24->fields.isAscendingOrder )
      v28 = v25;
    else
      v28 = v26;
    UISprite__set_spriteName((UISprite_o *)sort, *v28, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_42;
    if ( sort->fields.isBonusKind )
    {
      v30 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v30 )
      {
        UILabel__set_text(v30, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_42:
      sub_1BCAA3C(sort, v17);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v20; // x8
  __int64 *v21; // x8
  __int64 *v22; // x8
  __int64 *v23; // x8
  const MethodInfo *v24; // x1

  if ( (byte_4B111E3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17839/*"button_push_reg"*/, *(_QWORD *)&modeKind, method);
    sub_1BCA7E0(&StringLiteral_17840/*"button_push_unreg"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_17825/*"button_allchoice_reg"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17828/*"button_alllock_unreg"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17841/*"button_select_reg"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17842/*"button_select_unreg"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17827/*"button_alllock_reg"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_17826/*"button_allchoice_unreg"*/, v17, v18);
    byte_4B111E3 = 1;
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
  v20 = &StringLiteral_17841/*"button_select_reg"*/;
  if ( modeKind )
    v20 = &StringLiteral_17842/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v20, 0LL);
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
  v21 = &StringLiteral_17827/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v21 = &StringLiteral_17828/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v21, 0LL);
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
  v22 = &StringLiteral_17825/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v22 = &StringLiteral_17826/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v22, 0LL);
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
  v23 = &StringLiteral_17839/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v23 = &StringLiteral_17840/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v23, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_1BCAA3C(statusTabButton, *(_QWORD *)&modeKind);
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  EventServantFatigueListViewManager__SetHeaderMsg(this, v24);
}


void __fastcall EventServantFatigueListViewManager__SetUpBonusFilterButton(
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
                             0LL,
                             setupInfo->fields.servantFilterEventCampaignIds,
                             setupInfo->fields.servantFilterEventIds,
                             0LL,
                             0LL,
                             0,
                             0LL);
      this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
      sub_1BCA784(&this->fields.alignedBonusFilterInfos, AlignedBonusFilter);
      v6 = this->fields.sort;
      sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                                 (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                                 0LL);
      if ( v6 )
      {
        v6->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
        sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
        if ( sort )
        {
          sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
          v7 = this->fields.sort;
          if ( v7 )
          {
            if ( sort )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, v7->fields.isBonusKind, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_10:
    sub_1BCAA3C(sort, setupInfo);
  }
  if ( !sort )
    goto LABEL_10;
  sort->fields.isBonusKind = 0;
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1BCA784(&this->fields.alignedBonusFilterInfos, 0LL);
}


void __fastcall EventServantFatigueListViewManager__StatusRequest(
        EventServantFatigueListViewManager_o *this,
        EventServantFatigueListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t modeKind; // w8
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  __int64 v17; // x1
  Il2CppObject *Request_object; // x0
  __int64 v19; // x1
  System_Int64_array *v20; // x1
  System_Int64_array *v21; // x2
  bool v22; // w4
  bool v23; // w5
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  __int64 v28; // x1
  System_Int64_array *v29; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B11204 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager_EndStatusSync__, callback, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B11204 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v29 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( EventServantFatigueListViewManager__GetSwapChoiceList(this, &choiceList, &v29, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1BCA784(&this->fields.requestCallback, callback);
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
      NetworkManager_ResultCallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28);
      Request_object = NetworkManager__getRequest_object_(
                         v27,
                         (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v21 = v29;
        v20 = choiceList;
        v23 = 1;
        v22 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1BCAA3C(Request_object, v19);
    }
  }
  else if ( modeKind == 1 && EventServantFatigueListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1BCA784(&this->fields.requestCallback, callback);
    v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14, v15);
    NetworkManager_ResultCallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
    Request_object = NetworkManager__getRequest_object_(
                       v16,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v21 = unlockList;
      v20 = lockList;
      v22 = 1;
      v23 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v20, v21, 0, v22, v23, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  int64_t Time; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4B111DF & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B111DF = 1;
  }
  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL)
    && this->fields.itemSortList
    && (this->fields.updateTime & 0x8000000000000000LL) == 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
    Time = NetworkManager__getTime(0LL);
    if ( this->fields.updateTime != Time )
    {
      this->fields.updateTime = Time;
      EventServantFatigueListViewManager__UpdateDisp(this, v10);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__UpdateDisp(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_GameObject__o *v14; // x8
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B111E0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10, v11);
    byte_4B111E0 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)EventServantFatigueListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( ObjectList )
  {
    v14 = this->fields.objectList;
    if ( !v14 )
      sub_1BCAA3C(ObjectList, v13);
    if ( v14->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v16,
        ObjectList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v16,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__) )
      {
        if ( !v16.fields._current )
          sub_1BCAA3C(0LL, v15);
        EventServantFatigueListViewObject__UpdateDisp((EventServantFatigueListViewObject_o *)v16.fields._current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__);
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

  if ( (byte_4B111D7 & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B111D7 = 1;
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
    v8 = sub_1C05CD0(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventServantFatigueListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B111D9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B111D9 = 1;
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
    v8 = sub_1C05CD0(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventServantFatigueListViewManager_o *)sub_1BCACFC(v7);
  EventServantFatigueListViewManager__remove_CallbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_EventServantFatigueListViewObject__o *__fastcall EventServantFatigueListViewManager__get_ClippingObjectList(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  System_Collections_Generic_List_object__o *v16; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v19; // w21
  Il2CppObject *v20; // x22
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4B111DE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo, v13, v14);
    byte_4B111DE = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v19,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        break;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
      if ( !objectList )
        break;
      v20 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)EventServantFatigueListViewObject__GetItem(
                                                                  (EventServantFatigueListViewObject_o *)objectList,
                                                                  0LL);
      if ( !objectList )
        break;
      v16 = objectList;
      if ( LOBYTE(objectList[2].monitor) )
      {
        objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41463120(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)objectList,
                                                                    0LL);
        if ( ((unsigned __int8)objectList & 1) == 0 )
          continue;
      }
      if ( !v15 )
        break;
      items = v15->fields._items;
      v22 = Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__;
      ++v15->fields._version;
      if ( !items )
        break;
      v23 = v15->fields._size;
      if ( (unsigned int)v23 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          v20,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + v23;
        v15->fields._size = v23 + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BCA784(v24 + 4, v20);
      }
      if ( size == ++v19 )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v15;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_18:
    sub_1BCAA3C(objectList, v16);
  }
  return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v15;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v21; // w21
  __int64 v22; // x1
  Il2CppObject *Item; // x22
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  System_Collections_Generic_List_object__o *v27; // x1
  Il2CppClass **v28; // x0

  if ( (byte_4B111DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B111DD = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v21 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v21,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
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
                                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
        if ( !v17 )
          break;
        items = v17->fields._items;
        v25 = Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        v26 = v17->fields._size;
        v27 = objectList;
        if ( (unsigned int)v26 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)objectList,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + v26;
          v17->fields._size = v26 + 1;
          v28[4] = (Il2CppClass *)v27;
          sub_1BCA784(v28 + 4, v27);
        }
      }
      if ( size == ++v21 )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v17;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1BCAA3C(objectList, v18);
  }
  return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v17;
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

  if ( (byte_4B111D8 & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B111D8 = 1;
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
    v8 = sub_1C05CD0(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventServantFatigueListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B111DA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B111DA = 1;
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
    v8 = sub_1C05CD0(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BCACFC(v7);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A05410;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A053B8;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = index;
  v14 = kind;
  if ( (byte_4B1120A & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&index);
    sub_1BCA7E0(&EventServantFatigueListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B1120A = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(EventServantFatigueListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall EventServantFatigueListViewManager_CallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0547C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05434;
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
  if ( (byte_4B1120B & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isRequest, callback);
    byte_4B1120B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall EventServantFatigueListViewManager_RequestCallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  CommonUI_o *v13; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4B1120C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__, v7, v8);
    byte_4B1120C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1BCA784(&this->fields.__9__1, _9__1);
    }
    if ( v13 )
    {
      CommonUI__CloseConfirmDialog_30766896(v13, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(Instance, v10);
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
    sub_1BCAA3C(0LL, method);
  EventServantFatigueListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}