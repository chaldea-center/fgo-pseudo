void __fastcall EventServantFatigueListViewManager___cctor(const MethodInfo *method)
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
  struct EventServantFatigueListViewManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_438ECCC & 1) == 0 )
  {
    sub_B775C4(&EventServantFatigueListViewManager_TypeInfo);
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&StringLiteral_6341/*"EventServantFatigueList"*/);
    byte_438ECCC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventServantFatigueListViewManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6341/*"EventServantFatigueList"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6341/*"EventServantFatigueList"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  SORT_SAVE_KEY = EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v10 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v10, SORT_SAVE_KEY, 3, 0, 0LL);
  v11 = EventServantFatigueListViewManager_TypeInfo->static_fields;
  v11->servantSortStatus = v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&v11->servantSortStatus,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  System_Action_bool__UserServantEntity__o *v6; // x0
  bool v7; // w1
  UserServantEntity_o *targetInUserServantEntity; // x2

  v4 = this;
  if ( (byte_438ECB4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool__UserServantEntity__Invoke__);
    this = (EventServantFatigueListViewManager_o *)sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438ECB4 = 1;
  }
  if ( !result )
    goto LABEL_10;
  this = (EventServantFatigueListViewManager_o *)System_String__Equals_44889276(
                                                   result,
                                                   (System_String_o *)StringLiteral_21504/*"ng"*/,
                                                   0LL);
  selectAfterCallback = v4->fields.selectAfterCallback;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( selectAfterCallback )
    {
      targetInUserServantEntity = v4->fields.targetInUserServantEntity;
      v7 = 1;
      v6 = v4->fields.selectAfterCallback;
      goto LABEL_9;
    }
LABEL_10:
    sub_B7769C(this, result);
  }
  if ( !selectAfterCallback )
    goto LABEL_10;
  v6 = v4->fields.selectAfterCallback;
  v7 = 0;
  targetInUserServantEntity = 0LL;
LABEL_9:
  System_Action_bool__UserServantEntity___Invoke(
    v6,
    v7,
    targetInUserServantEntity,
    (const MethodInfo_26ACC14 *)Method_System_Action_bool__UserServantEntity__Invoke__);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+60h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+80h] [xbp-40h]

  if ( (byte_438ECB3 & 1) == 0 )
  {
    sub_B775C4(&Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__);
    sub_B775C4(&Method_NetworkManager_getRequest_ServantRecoverySyncRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438ECB3 = 1;
  }
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_35;
  CommonConfirmDialog__Close(fatigueRecoveryConfirmationDialog, 0LL);
  if ( !isDecide )
    return;
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v6,
                                                                 (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_ServantRecoverySyncRequest___);
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
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v31 = v35;
        fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                                       &v31,
                                                                       0LL);
        if ( v9 )
        {
          v18 = (int64_t)fatigueRecoveryConfirmationDialog;
          v19 = (ServantRecoverySyncRequest_o *)v9;
          v20 = eventId;
          v21 = idx;
          v22 = 0LL;
          goto LABEL_33;
        }
      }
    }
LABEL_35:
    sub_B7769C(fatigueRecoveryConfirmationDialog, isDecide);
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
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v32 = v35;
        fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                                       &v32,
                                                                       0LL);
        if ( v9 )
        {
          v22 = (int64_t)fatigueRecoveryConfirmationDialog;
          v19 = (ServantRecoverySyncRequest_o *)v9;
          v20 = v10;
          v21 = v30;
          v18 = 0LL;
          goto LABEL_33;
        }
      }
    }
    goto LABEL_35;
  }
  if ( !v11 )
    goto LABEL_35;
  v12 = v11->fields.eventFatigueRecoveryEnt;
  if ( !v12 )
    goto LABEL_35;
  v13 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
  v14 = v12->fields.idx;
  *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v35.fields.fakeValue = v13;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v34 = v35;
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                                 &v34,
                                                                 0LL);
  v15 = this->fields.targetOutUserServantEntity;
  if ( !v15 )
    goto LABEL_35;
  v16 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
  v17 = fatigueRecoveryConfirmationDialog;
  *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v33.fields.fakeValue = v16;
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                                 &v33,
                                                                 0LL);
  if ( !v9 )
    goto LABEL_35;
  v18 = (int64_t)fatigueRecoveryConfirmationDialog;
  v19 = (ServantRecoverySyncRequest_o *)v9;
  v20 = v10;
  v21 = v14;
  v22 = (int64_t)v17;
LABEL_33:
  ServantRecoverySyncRequest__beginRequest(v19, v20, v21, v22, v18, 0LL);
}


void __fastcall EventServantFatigueListViewManager__CreateList(
        EventServantFatigueListViewManager_o *this,
        int32_t eventId,
        EventServantRecoveryFatigueItem_o *targetItem,
        System_Action_bool__UserServantEntity__o *afterCallback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EventServantFatigueListViewManager_c *v11; // x0
  struct ListViewSort_o *servantSortStatus; // x1
  struct ListViewSort_o **p_sort; // x23
  __int64 v14; // x1
  __int64 sort; // x0
  TitleInfoControl_o *titleInfo; // x8
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_Object_o *fatigueRecoveryConfirmationDialog; // x24
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  Il2CppObject *fatigueRecoveryConfirmationDialogPrefab; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_GameObject_o *v53; // x24
  UnityEngine_Transform_o *transform; // x25
  struct FatigueRecoveryConfirmationDialog_o *Component_srcLineSprite; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  System_Int32_array *v65; // x23
  EventUpValSetupInfo_o *v66; // x21
  const MethodInfo *v67; // x2
  __int64 v68; // x8
  __int64 v69; // x23
  unsigned __int64 v70; // x28
  signed __int64 v71; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  UserServantEntity_o *v73; // x24
  __int128 v74; // q0
  __int128 v75; // q1
  int64_t v76; // x0
  int32_t v77; // w19
  int64_t v78; // x27
  EventServantFatigueListViewItem_o *v79; // x25
  const MethodInfo *v80; // x6
  __int64 v81; // x0
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v83; // x2
  const MethodInfo *v84; // x1
  struct EventServantRecoveryFatigueItem_o **p_targetRecoveryFatigueItem; // [xsp+0h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88[2]; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v95; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_438ECA3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&EventServantFatigueListViewItem_TypeInfo);
    sub_B775C4(&EventServantFatigueListViewManager_TypeInfo);
    sub_B775C4(&EventUpValSetupInfo_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541624);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_12110/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_438ECA3 = 1;
  }
  memset(&v88[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v11 = EventServantFatigueListViewManager_TypeInfo;
  if ( (BYTE3(EventServantFatigueListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v11 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v11->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  p_sort = &this->fields.sort;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)servantSortStatus,
    (System_String_array **)targetItem,
    (System_String_array **)afterCallback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_65;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  sort = NetworkManager__getTime(0LL);
  titleInfo = this->fields.titleInfo;
  this->fields.updateTime = sort;
  if ( !titleInfo )
    goto LABEL_65;
  TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 79, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_65;
  TitleInfoControl__setBackBtnSprite_18688908((TitleInfoControl_o *)sort, 1, 0, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_65;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_65;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v17, v18, v19, v20, v21, v22);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.eventId = eventId;
  this->fields.statusShowUserSvtId = -1LL;
  this->fields.targetRecoveryFatigueItem = targetItem;
  p_targetRecoveryFatigueItem = &this->fields.targetRecoveryFatigueItem;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.targetRecoveryFatigueItem,
    (System_Int32_array **)targetItem,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.selectAfterCallback = afterCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.selectAfterCallback,
    (System_Int32_array **)afterCallback,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.modeKind = 0;
  fatigueRecoveryConfirmationDialog = (UnityEngine_Object_o *)this->fields.fatigueRecoveryConfirmationDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sort = UnityEngine_Object__op_Equality(0LL, fatigueRecoveryConfirmationDialog, 0LL);
  if ( (sort & 1) != 0 )
  {
    fatigueRecoveryConfirmationDialogPrefab = (Il2CppObject *)this->fields.fatigueRecoveryConfirmationDialogPrefab;
    v89.fields.x = 0.0;
    v89.fields.y = 0.0;
    v89.fields.z = 0.0;
    v94 = UnityEngine_Quaternion__Euler_36342120(v89, 0LL);
    x = v94.fields.x;
    y = v94.fields.y;
    z = v94.fields.z;
    w = v94.fields.w;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v90.fields.x = 0.0;
    v90.fields.y = 0.0;
    v90.fields.z = 0.0;
    v95.fields.x = x;
    v95.fields.y = y;
    v95.fields.z = z;
    v95.fields.w = w;
    sort = (__int64)UnityEngine_Object__Instantiate_object_(
                      fatigueRecoveryConfirmationDialogPrefab,
                      v90,
                      v95,
                      (const MethodInfo_1DF9B8C *)Method_UnityEngine_Object_Instantiate_GameObject____69541624);
    if ( !sort )
      goto LABEL_65;
    v53 = (UnityEngine_GameObject_o *)sort;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)sort, 0LL);
    sort = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_65;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)sort, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v53, 0LL);
    if ( !sort )
      goto LABEL_65;
    v91.fields.x = 0.0;
    v91.fields.y = 0.0;
    v91.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)sort, v91, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v53, 0LL);
    if ( !sort )
      goto LABEL_65;
    v92.fields.x = 0.0;
    v92.fields.y = 0.0;
    v92.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)sort, v92, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v53, 0LL);
    if ( !sort )
      goto LABEL_65;
    v93.fields.x = 1.0;
    v93.fields.y = 1.0;
    v93.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)sort, v93, 0LL);
    Component_srcLineSprite = (struct FatigueRecoveryConfirmationDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              v53,
                                                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___);
    this->fields.fatigueRecoveryConfirmationDialog = Component_srcLineSprite;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.fatigueRecoveryConfirmationDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
    sort = (__int64)this->fields.fatigueRecoveryConfirmationDialog;
    if ( !sort )
      goto LABEL_65;
    sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
    if ( !sort )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 0, 0LL);
  }
  if ( !*p_sort )
    goto LABEL_65;
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
      goto LABEL_37;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
LABEL_37:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_65;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_65;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = sub_B775DC(int___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_65;
  v65 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
  {
LABEL_59:
    v81 = sub_B776C8(sort);
    sub_B77668(v81, 0LL);
  }
  *(_DWORD *)(sort + 32) = eventId;
  v66 = (EventUpValSetupInfo_o *)sub_B77694(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_24075556(v66, v65, 1, 0, 0, 0LL);
  EventServantFatigueListViewManager__SetUpBonusFilterButton(this, v66, v67);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort
    || (sort = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)sort,
                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
    || (sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL)) == 0 )
  {
LABEL_65:
    sub_B7769C(sort, v14);
  }
  v68 = *(_QWORD *)(sort + 24);
  v69 = sort;
  if ( (int)v68 >= 1 )
  {
    v70 = 0LL;
    v71 = (int)v68;
    while ( *p_targetRecoveryFatigueItem )
    {
      userServantEntity = (*p_targetRecoveryFatigueItem)->fields.userServantEntity;
      v73 = *(UserServantEntity_o **)(v69 + 32 + 8 * v70);
      if ( userServantEntity )
      {
        v75 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        v74 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      }
      else
      {
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v88, -1LL, 0LL);
        v75 = *(_OWORD *)&v88[0].fields.currentCryptoKey;
        v74 = *(_OWORD *)&v88[0].fields.fakeValue;
      }
      *(_OWORD *)&v88[1].fields.currentCryptoKey = v75;
      *(_OWORD *)&v88[1].fields.fakeValue = v74;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v87 = v88[1];
      v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v87, 0LL);
      v77 = this->fields.eventId;
      v78 = v76;
      v79 = (EventServantFatigueListViewItem_o *)sub_B77694(EventServantFatigueListViewItem_TypeInfo);
      EventServantFatigueListViewItem___ctor(v79, v73, v77, v78, v66, targetItem, v80);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v79,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v70 >= v71 )
        goto LABEL_60;
      if ( v70 >= *(unsigned int *)(v69 + 24) )
        goto LABEL_59;
    }
    goto LABEL_65;
  }
LABEL_60:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12110/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_65;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EventServantFatigueListViewManager__SetStatusKind(this, this->fields.modeKind, v83);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventServantFatigueListViewManager__SetFilterButtonImage(this, v84);
}


void __fastcall EventServantFatigueListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventServantFatigueListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_438EC9D & 1) == 0 )
  {
    sub_B775C4(&EventServantFatigueListViewManager_TypeInfo);
    byte_438EC9D = 1;
  }
  v2 = EventServantFatigueListViewManager_TypeInfo;
  if ( (BYTE3(EventServantFatigueListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v2 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_B7769C(0LL, v1);
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
    sub_B7769C(0LL, v3);
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
  EventServantFatigueListViewManager__SetMode_32185968(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_32185968(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_32185968(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_32185968(this, 2, v5);
}


void __fastcall EventServantFatigueListViewManager__EndPushRequest(
        EventServantFatigueListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventServantFatigueListViewManager__ModifyList(this, 0, method);
  EventServantFatigueListViewManager__SetMode_32185968(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__EndSelectFilterKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x1

  if ( (byte_438ECB9 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438ECB9 = 1;
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
  sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_B7769C(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)sort, 0LL, 0LL);
}


void __fastcall EventServantFatigueListViewManager__EndSelectSortKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_438ECBE & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438ECBE = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__EndShowServant(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_438ECB6 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438ECB6 = 1;
  }
  EventServantFatigueListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventServantFatigueListViewManager__ModifyList(this, 0, v4);
  EventServantFatigueListViewManager__SetMode_32185968(this, 2, v5);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v7);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


void __fastcall EventServantFatigueListViewManager__EndStatusSync(
        EventServantFatigueListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EventServantFatigueListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  BattleServantConfConponent_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (BattleServantConfConponent_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0LL;
    sub_B77560(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    EventServantFatigueListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventServantFatigueListViewManager__GetAmountSortValue(
        EventServantFatigueListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  EventServantFatigueListViewManager_o *v4; // x20
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
  if ( (byte_438ECB7 & 1) == 0 )
  {
    sub_B775C4(&EventServantFatigueListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (EventServantFatigueListViewManager_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438ECB7 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v9 = itemList->fields._items->m_Items[v7];
      if ( !v9 )
        break;
      v10 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (EventServantFatigueListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != EventServantFatigueListViewItem_TypeInfo )
      {
        break;
      }
      if ( (EventServantFatigueListViewItem_c *)v9->klass->_2.typeHierarchy[*(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2
                                                                            + 1)
                                                                          - 1] != EventServantFatigueListViewItem_TypeInfo )
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
      this = (EventServantFatigueListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
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
    sub_B7769C(this, *(_QWORD *)&svtId);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  int individualityRate; // w23
  int64_t Time; // x8
  float v38; // s0
  double v39; // d0
  int64_t v40; // x21
  System_String_o *v41; // x20
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_438ECB1 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_11873/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/);
    sub_B775C4(&StringLiteral_11885/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/);
    sub_B775C4(&StringLiteral_11973/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/);
    byte_438ECB1 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1LL, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(RestTime4, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11885/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0LL);
    *beforeTime = v20;
    sub_B77560((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11873/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0LL);
    goto LABEL_28;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    sub_B7769C(IsNullOrEmpty, v13);
  eventFatigueRecoveryEnt = targetRecoveryFatigueItem->fields.eventFatigueRecoveryEnt;
  if ( isMatch )
  {
    if ( eventFatigueRecoveryEnt )
    {
      individualityRate = eventFatigueRecoveryEnt->fields.individualityRate;
      goto LABEL_18;
    }
  }
  else if ( eventFatigueRecoveryEnt )
  {
    individualityRate = eventFatigueRecoveryEnt->fields.recoveryRate;
    goto LABEL_18;
  }
  individualityRate = 1000;
LABEL_18:
  *beforeTime = RestTime4;
  sub_B77560((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)RestTime4, v14, v15, v16, v17, v18, v19);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v38 = (float)(recoveryFatigueTime - Time) / (float)((float)individualityRate / 1000.0);
  if ( v38 == INFINITY )
    v39 = -v38;
  else
    v39 = v38;
  v40 = Time + (__int64)v39;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__GetRestTime4(v40, -1LL, 0LL);
LABEL_28:
  *afterTime = v27;
  sub_B77560((BattleServantConfConponent_o *)afterTime, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
  if ( isMatch )
  {
    v41 = *afterTime;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_11973/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
    v43 = System_String__Concat_44901936(v41, v42, 0LL);
    *afterTime = v43;
    sub_B77560((BattleServantConfConponent_o *)afterTime, (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
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
  __int64 v11; // x0

  if ( (byte_438ECB0 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&System_Text_StringBuilder_TypeInfo);
    sub_B775C4(&StringLiteral_11974/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/);
    byte_438ECB0 = 1;
  }
  v4 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0LL);
  if ( !array )
    goto LABEL_17;
  v7 = *(_QWORD *)&array->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
      {
        v11 = sub_B776C8(appended);
        sub_B77668(v11, 0LL);
      }
      if ( !v4 )
        break;
      appended = System_Text_StringBuilder__Append_42951964(v4, array->m_Items[v8++], 0LL);
      if ( (int)v8 < (signed int)array->max_length )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11974/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/, 0LL);
        appended = System_Text_StringBuilder__Append_42951964(v4, v9, 0LL);
      }
      LODWORD(v7) = array->max_length;
      if ( (__int64)v8 >= (int)v7 )
        goto LABEL_14;
    }
LABEL_17:
    sub_B7769C(appended, v6);
  }
LABEL_14:
  if ( !v4 )
    goto LABEL_17;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v4->klass->vtable._3_ToString.method)(
                              v4,
                              v4->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


EventServantFatigueListViewItem_o *__fastcall EventServantFatigueListViewManager__GetItem(
        EventServantFatigueListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_438ECAA & 1) == 0 )
  {
    sub_B775C4(&EventServantFatigueListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438ECAA = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (EventServantFatigueListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == EventServantFatigueListViewItem_TypeInfo )
    return (EventServantFatigueListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_o *v27; // x21
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_o *v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_o **v43; // x0
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  int recoveryRate; // w23
  int64_t Time; // x8
  float v48; // s0
  double v49; // d0
  int64_t v50; // x22
  System_String_o *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_o *v58; // x20
  System_String_o *v59; // x0

  if ( (byte_438ECB2 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_11873/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/);
    sub_B775C4(&StringLiteral_11885/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/);
    sub_B775C4(&StringLiteral_11973/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/);
    byte_438ECB2 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1LL, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(RestTime4, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11885/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0LL);
    *beforeTime = v20;
    sub_B77560((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
    if ( isMatch )
    {
      v27 = *beforeTime;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11973/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
      v29 = System_String__Concat_44901936(v27, v28, 0LL);
      *beforeTime = v29;
      sub_B77560((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11873/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0LL);
    *afterTime = v36;
    v43 = afterTime;
LABEL_40:
    sub_B77560((BattleServantConfConponent_o *)v43, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
    return;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    sub_B7769C(IsNullOrEmpty, v13);
  eventFatigueRecoveryEnt = targetRecoveryFatigueItem->fields.eventFatigueRecoveryEnt;
  if ( !isMatch )
  {
    if ( eventFatigueRecoveryEnt )
    {
      recoveryRate = eventFatigueRecoveryEnt->fields.recoveryRate;
      goto LABEL_26;
    }
LABEL_25:
    recoveryRate = 1000;
    goto LABEL_26;
  }
  if ( !eventFatigueRecoveryEnt )
    goto LABEL_25;
  recoveryRate = eventFatigueRecoveryEnt->fields.individualityRate;
LABEL_26:
  *beforeTime = RestTime4;
  sub_B77560((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)RestTime4, v14, v15, v16, v17, v18, v19);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v48 = (float)((float)recoveryRate / 1000.0) * (float)(recoveryFatigueTime - Time);
  if ( v48 == INFINITY )
    v49 = -v48;
  else
    v49 = v48;
  v50 = Time + (__int64)v49;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v51 = LocalizationManager__GetRestTime4(v50, -1LL, 0LL);
  *afterTime = v51;
  sub_B77560((BattleServantConfConponent_o *)afterTime, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
  if ( isMatch )
  {
    v58 = *beforeTime;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v59 = LocalizationManager__Get((System_String_o *)StringLiteral_11973/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
    v36 = System_String__Concat_44901936(v58, v59, 0LL);
    *beforeTime = v36;
    v43 = beforeTime;
    goto LABEL_40;
  }
}


bool __fastcall EventServantFatigueListViewManager__GetSwapChoiceList(
        EventServantFatigueListViewManager_o *this,
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
  const MethodInfo_30EBD98 *v23; // x2
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

  if ( (byte_438ECC2 & 1) == 0 )
  {
    sub_B775C4(&EventServantFatigueListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438ECC2 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (EventServantFatigueListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != EventServantFatigueListViewItem_TypeInfo )
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
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
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
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
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
    sub_B7769C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)choiceList, 0LL, v10, v11, v12, v13, v14, v15);
    *unchoiceList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)unchoiceList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v27;
    sub_B77560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v34;
    sub_B77560((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


bool __fastcall EventServantFatigueListViewManager__GetSwapLockList(
        EventServantFatigueListViewManager_o *this,
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
  const MethodInfo_30EBD98 *v23; // x2
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

  if ( (byte_438ECC1 & 1) == 0 )
  {
    sub_B775C4(&EventServantFatigueListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438ECC1 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (EventServantFatigueListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != EventServantFatigueListViewItem_TypeInfo )
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
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
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
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
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
    sub_B7769C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)lockList, 0LL, v10, v11, v12, v13, v14, v15);
    *unlockList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)unlockList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v27;
    sub_B77560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v34;
    sub_B77560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
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

  if ( (byte_438EC9E & 1) == 0 )
  {
    sub_B775C4(&EventServantFatigueListViewManager_TypeInfo);
    byte_438EC9E = 1;
  }
  v2 = EventServantFatigueListViewManager_TypeInfo;
  if ( (BYTE3(EventServantFatigueListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v2 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_B7769C(0LL, v1);
  ListViewSort__InitLoad(servantSortStatus, 0LL);
}


bool __fastcall EventServantFatigueListViewManager__IsMatchIndividuality(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v6; // x20
  struct EventServantRecoveryFatigueItem_o *v7; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  struct System_Int32_array *targetIndividuality; // x24
  __int64 v10; // x8
  unsigned __int64 v11; // x25
  struct EventServantRecoveryFatigueItem_o *v12; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v14; // w20
  ServantEntity_o *v15; // x21
  __int64 v16; // x22
  __int64 v17; // x23
  struct EventServantRecoveryFatigueItem_o *v18; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v19; // x8
  int32_t v20; // w22
  __int64 v22; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_438ECAF & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438ECAF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    goto LABEL_26;
  v6 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (DataManager_o *)targetRecoveryFatigueItem->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
  if ( !v6 )
    goto LABEL_26;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                v6,
                                &entity,
                                (int32_t)Instance,
                                (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  v7 = this->fields.targetRecoveryFatigueItem;
  if ( !v7
    || (eventFatigueRecoveryEnt = v7->fields.eventFatigueRecoveryEnt) == 0LL
    || (targetIndividuality = eventFatigueRecoveryEnt->fields.targetIndividuality) == 0LL )
  {
LABEL_26:
    sub_B7769C(Instance, v4);
  }
  v10 = *(_QWORD *)&targetIndividuality->max_length;
  if ( (int)v10 < 1 )
    return 0;
  v11 = 0LL;
  while ( 1 )
  {
    if ( v11 >= (unsigned int)v10 )
    {
      v22 = sub_B776C8(Instance);
      sub_B77668(v22, 0LL);
    }
    v12 = this->fields.targetRecoveryFatigueItem;
    if ( !v12 )
      goto LABEL_26;
    userServantEntity = v12->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_26;
    v14 = targetIndividuality->m_Items[v11 + 1];
    v15 = (ServantEntity_o *)entity;
    v17 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v16 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v24.fields.currentCryptoKey = v17;
    *(_QWORD *)&v24.fields.fakeValue = v16;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v24, 0LL);
    v18 = this->fields.targetRecoveryFatigueItem;
    if ( !v18 )
      goto LABEL_26;
    v19 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v18->fields.userServantEntity;
    if ( !v19 )
      goto LABEL_26;
    v20 = (int)Instance;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v19[8], 0LL);
    if ( !v15 )
      goto LABEL_26;
    Instance = (DataManager_o *)ServantEntity__IsIndividuality(v15, v20, (int32_t)Instance, v14, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return 1;
    LODWORD(v10) = targetIndividuality->max_length;
    if ( (__int64)++v11 >= (int)v10 )
      return 0;
  }
}


void __fastcall EventServantFatigueListViewManager__ModifyItem(
        EventServantFatigueListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x11
  EventServantFatigueListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v13; // q0
  int64_t v14; // x0
  __int128 v15; // q0
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *viewObject; // x21
  __int64 v18; // x1
  struct ListViewObject_o *v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+60h] [xbp-60h] BYREF

  if ( (byte_438ECA7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&EventServantFatigueListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438ECA7 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_39;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_39;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v23.fields.current = (Il2CppObject *)v22.fields.fakeValue;
      *(_OWORD *)&v23.fields.list = *(_OWORD *)&v22.fields.currentCryptoKey;
      while ( 1 )
      {
        v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v23,
               (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v8 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v23,
            (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v23.fields.current
          && (v10 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v23.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
        {
          if ( (EventServantFatigueListViewItem_c *)v23.fields.current->klass->_2.typeHierarchy[v10 - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = (EventServantFatigueListViewItem_o *)v23.fields.current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_B7769C(v8, v9);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_B7769C(v8, v9);
            v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v22.fields.fakeValue = v13;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v21 = v22;
            v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v21, 0LL);
            v15 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
            *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v20.fields.fakeValue = v15;
            if ( v14 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v20, 0LL) )
              EventServantFatigueListViewItem__ModifyItem(current, Entity, v16);
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
          sub_B7769C(v8, v9);
LABEL_27:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v19 = current->fields.viewObject;
          if ( !v19 )
            sub_B7769C(0LL, v18);
          ((void (__fastcall *)(struct ListViewObject_o *, EventServantFatigueListViewItem_o *, Il2CppMethodPointer))v19->klass->vtable._5_SetItem.method)(
            v19,
            current,
            v19->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_39:
    sub_B7769C(Instance, v5);
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

  if ( (byte_438ECA9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&EventServantFatigueListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438ECA9 = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_38;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_38;
  sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)sort,
                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v28, 0LL);
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
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v16 = v15->fields._items->m_Items[v14];
          if ( !v16 )
            goto LABEL_38;
          v17 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
            || (EventServantFatigueListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != EventServantFatigueListViewItem_TypeInfo )
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
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v27, 0LL);
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
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v26, 0LL);
        EventServantFatigueListViewManager__ModifyLockItem(this, v22, 1, isIconSizeChangea, v23);
      }
LABEL_34:
      if ( (int)++v10 >= (int)v7 )
        return;
      if ( v10 >= *(_DWORD *)(v8 + 24) )
      {
        v24 = sub_B776C8(sort);
        sub_B77668(v24, 0LL);
      }
    }
LABEL_38:
    sub_B7769C(sort, isIconSizeChange);
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
  UserServantEntity_o *Entity; // x21
  bool v11; // w20
  int64_t v12; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x11
  Il2CppObject *current; // x22
  _OWORD *monitor; // x8
  __int128 v17; // q0
  int64_t v18; // x0
  __int128 v19; // q0
  int64_t v20; // x24
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  UnityEngine_Object_o *v29; // x23
  __int64 v30; // x1
  void *v31; // x0
  __int64 v32; // x1
  ListViewObject_o *v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_438ECA8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&EventServantFatigueListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438ECA8 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_46;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_46;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v37,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v38.fields.current = (Il2CppObject *)v37.fields.fakeValue;
      *(_OWORD *)&v38.fields.list = *(_OWORD *)&v37.fields.currentCryptoKey;
      v11 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v38,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v12 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v38,
            (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v38.fields.current
          && (v14 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v38.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
        {
          if ( (EventServantFatigueListViewItem_c *)v38.fields.current->klass->_2.typeHierarchy[v14 - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = v38.fields.current;
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
          sub_B7769C(v12, v13);
        monitor = current[7].monitor;
        if ( !monitor )
          sub_B7769C(v12, v13);
        v17 = monitor[2];
        *(_OWORD *)&v37.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v37.fields.fakeValue = v17;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v36 = v37;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v36, 0LL);
        v19 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
        v20 = v18;
        *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v35.fields.fakeValue = v19;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v35, 0LL);
        if ( v20 == v12 )
        {
          current[7].monitor = Entity;
          sub_B77560(
            (BattleServantConfConponent_o *)&current[7].monitor,
            (System_Int32_array **)Entity,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
        }
LABEL_26:
        if ( v11 )
        {
          if ( !current )
            sub_B7769C(v12, v13);
          EventServantFatigueListViewItem__ModifyLockItem((EventServantFatigueListViewItem_o *)current, v13);
          EventServantFatigueListViewItem__ModifyChoiceItem((EventServantFatigueListViewItem_o *)current, v27);
          EventServantFatigueListViewItem__ModifyPushItem((EventServantFatigueListViewItem_o *)current, v28);
        }
        else if ( !current )
        {
          sub_B7769C(v12, v13);
        }
        v29 = (UnityEngine_Object_o *)current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
        {
          v31 = current[6].monitor;
          if ( !v31 )
            sub_B7769C(0LL, v30);
          (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v31 + 392LL))(
            v31,
            current,
            *(_QWORD *)(*(_QWORD *)v31 + 400LL));
          if ( isIconSizeChange )
          {
            v33 = (ListViewObject_o *)current[6].monitor;
            if ( !v33 )
              sub_B7769C(0LL, v32);
            ListViewObject__SetItemSeed(v33, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_46:
    sub_B7769C(Instance, v8);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickBack(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Action_bool__UserServantEntity__o *selectAfterCallback; // x20

  if ( (byte_438ECC8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool__UserServantEntity__Invoke__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438ECC8 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.selectAfterCallback, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action_bool__UserServantEntity___Invoke(
      selectAfterCallback,
      0,
      0LL,
      (const MethodInfo_26ACC14 *)Method_System_Action_bool__UserServantEntity__Invoke__);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickBonusFilterKind(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_438ECBB & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438ECBB = 1;
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
      sub_B7769C(0LL, v3);
    ListViewSort__IncBonusKind2(sort, this->fields.bonusEventIdList, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickChoiceTab(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_438ECC5 & 1) == 0 )
  {
    sub_B775C4(&Method_EventServantFatigueListViewManager_EndClickTabChoice__);
    sub_B775C4(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438ECC5 = 1;
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
      v4 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_B77694(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabChoice__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v4, v5);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 2, v3);
      EventServantFatigueListViewManager__RefreshListDisp(this, v6);
      EventServantFatigueListViewManager__ModifyList(this, 0, v7);
      EventServantFatigueListViewManager__SetMode_32185968(this, 2, v8);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickCollectLock(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_438ECC4 & 1) == 0 )
  {
    sub_B775C4(&Method_EventServantFatigueListViewManager_EndClickTabLock__);
    sub_B775C4(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438ECC4 = 1;
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
      v4 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_B77694(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabLock__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v4, v5);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 1, v3);
      EventServantFatigueListViewManager__RefreshListDisp(this, v6);
      EventServantFatigueListViewManager__ModifyList(this, 0, v7);
      EventServantFatigueListViewManager__SetMode_32185968(this, 2, v8);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickFilterKind(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v5; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_438ECB8 & 1) == 0 )
  {
    sub_B775C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_EventServantFatigueListViewManager_EndSelectFilterKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438ECB8 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B77694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v5 )
      sub_B7769C(v7, v8);
    CommonUI__OpenServantFilterSelectMenu(v5, 1, sort, v6, -1, 0LL);
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
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438ECC3 & 1) == 0 )
  {
    sub_B775C4(&Method_EventServantFatigueListViewManager_EndClickTabStatus__);
    sub_B775C4(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438ECC3 = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_B77694(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndClickTabStatus__,
      0LL);
    EventServantFatigueListViewManager__StatusRequest(this, v3, v4);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickPushTab(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_438ECC6 & 1) == 0 )
  {
    sub_B775C4(&Method_EventServantFatigueListViewManager_EndClickTabPush__);
    sub_B775C4(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438ECC6 = 1;
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
      v4 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_B77694(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabPush__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v4, v5);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 3, v3);
      EventServantFatigueListViewManager__RefreshListDisp(this, v6);
      EventServantFatigueListViewManager__ModifyList(this, 0, v7);
      EventServantFatigueListViewManager__SetMode_32185968(this, 2, v8);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickScaleChange(
        EventServantFatigueListViewManager_o *this,
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

  if ( (byte_438ECC9 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438ECC9 = 1;
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
    sub_B77560(
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
    sub_B7769C(ScaleKindSpriteName, v4);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)ScaleKindSpriteName, 0LL);
  EventServantFatigueListViewManager__ModifyList(this, 1, v16);
  EventServantFatigueListViewManager__SetMode_32185968(this, 2, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventServantFatigueListViewManager__OnClickSelectObject(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ListViewObject_o *v3; // x20
  int64_t fatigueRecoveryConfirmationDialog; // x0
  __int64 v6; // x10
  __int64 v7; // x10
  EventServantFatigueListViewObject_o *v8; // x0
  EventServantFatigueListViewItem_o *Item; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2
  __int64 v23; // x8
  __int128 v24; // q1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v26; // q0
  int64_t v27; // x23
  const MethodInfo *v28; // x2
  bool IsMatchIndividuality_32172224; // w0
  const MethodInfo *v30; // x5
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct UserServantEntity_o *v38; // x1
  FatigueRecoveryConfirmationDialog_o *v39; // x20
  struct EventServantRecoveryFatigueItem_o *v40; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  System_String_o *v42; // x21
  System_String_o *v43; // x0
  UserServantEntity_o *targetOutUserServantEntity; // x22
  System_String_o *v45; // x23
  System_String_o *outAfterTime; // x27
  System_String_o *v47; // x24
  CommonConfirmDialog_ClickDelegate_o *func; // x25
  bool v49; // w0
  const MethodInfo *v50; // x5
  struct UserServantEntity_o *v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  FatigueRecoveryConfirmationDialog_o *v58; // x20
  struct EventServantRecoveryFatigueItem_o *v59; // x8
  struct EventFatigueRecoveryEntity_o *v60; // x8
  System_String_o *v61; // x21
  System_String_o *v62; // x0
  UserServantEntity_o *v63; // x22
  System_String_o *v64; // x23
  System_String_o *v65; // x24
  System_String_o *v66; // x25
  CommonConfirmDialog_ClickDelegate_o *v67; // x26
  struct EventServantRecoveryFatigueItem_o *v68; // x8
  struct UserServantEntity_o *v69; // x8
  __int128 v70; // q0
  struct UserServantEntity_o *v71; // x8
  __int128 v72; // q0
  const MethodInfo *v73; // x2
  bool v74; // w0
  const MethodInfo *v75; // x5
  struct EventServantRecoveryFatigueItem_o *v76; // x8
  struct UserServantEntity_o *v77; // x8
  UserEventServantFatigueMaster_o *v78; // x23
  int32_t eventId; // w24
  __int64 v80; // x25
  __int64 v81; // x26
  bool FatigueInfo; // w0
  const MethodInfo *v83; // x1
  int64_t v84; // x23
  int64_t v85; // x23
  bool IsMatchIndividuality; // w0
  const MethodInfo *v87; // x5
  struct UserServantEntity_o *v88; // x1
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  struct EventServantRecoveryFatigueItem_o *v101; // x8
  struct UserServantEntity_o *v102; // x1
  struct EventServantRecoveryFatigueItem_o *v103; // x8
  struct EventFatigueRecoveryEntity_o *v104; // x8
  System_String_o *v105; // x21
  System_String_o *v106; // x0
  System_String_o *v107; // x22
  System_String_o *v108; // x23
  UserServantEntity_o *v109; // x24
  UserServantEntity_o *targetInUserServantEntity; // x26
  System_String_o *v111; // x20
  System_String_o *v112; // x25
  System_String_o *v113; // x27
  CommonConfirmDialog_ClickDelegate_o *v114; // x28
  FatigueRecoveryConfirmationDialog_o *v115; // [xsp+18h] [xbp-158h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+20h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+40h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+60h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+80h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+A0h] [xbp-D0h]
  bool isRecover; // [xsp+CCh] [xbp-A4h] BYREF
  int64_t recoverAt; // [xsp+D0h] [xbp-A0h] BYREF
  System_String_o *v123; // [xsp+D8h] [xbp-98h] BYREF
  System_String_o *v124; // [xsp+E0h] [xbp-90h] BYREF
  System_String_o *v125; // [xsp+E8h] [xbp-88h] BYREF
  System_String_o *v126; // [xsp+F0h] [xbp-80h] BYREF
  System_String_o *afterTime; // [xsp+F8h] [xbp-78h] BYREF
  System_String_o *beforeTime; // [xsp+100h] [xbp-70h] BYREF
  System_String_o *v129; // [xsp+108h] [xbp-68h] BYREF
  System_String_o *v130; // [xsp+110h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16

  v3 = obj;
  if ( (byte_438ECAE & 1) == 0 )
  {
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_B775C4(&Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__);
    sub_B775C4(&EventServantFatigueListViewObject_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_11968/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/);
    sub_B775C4(&StringLiteral_11960/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/);
    sub_B775C4(&StringLiteral_11958/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/);
    sub_B775C4(&StringLiteral_11888/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_11886/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/);
    byte_438ECAE = 1;
  }
  v129 = 0LL;
  v130 = 0LL;
  afterTime = 0LL;
  beforeTime = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  v123 = 0LL;
  v124 = 0LL;
  recoverAt = 0LL;
  isRecover = 0;
  fatigueRecoveryConfirmationDialog = (int64_t)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_72;
  fatigueRecoveryConfirmationDialog = (int64_t)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)fatigueRecoveryConfirmationDialog,
                                                 0LL);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fatigueRecoveryConfirmationDialog, 1, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !v3 )
    goto LABEL_72;
  v6 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v3->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (EventServantFatigueListViewObject_c *)v3->klass->_2.typeHierarchy[v6 - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    goto LABEL_72;
  }
  v7 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v3->klass->_2.bitflags2 + 1) >= (unsigned int)v7 )
    v8 = (EventServantFatigueListViewObject_c *)v3->klass->_2.typeHierarchy[v7 - 1] == EventServantFatigueListViewObject_TypeInfo
       ? (EventServantFatigueListViewObject_o *)v3
       : 0LL;
  else
    v8 = 0LL;
  Item = EventServantFatigueListViewObject__GetItem(v8, (const MethodInfo *)obj);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    0LL,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_72;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)fatigueRecoveryConfirmationDialog,
    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_72;
  fatigueRecoveryConfirmationDialog = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  obj = (ListViewObject_o *)this->fields.targetRecoveryFatigueItem;
  if ( !obj )
    goto LABEL_72;
  v23 = *(_QWORD *)&obj->fields.basePosition.fields.z;
  if ( v23 )
  {
    v24 = *(_OWORD *)(v23 + 32);
    *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)(v23 + 16);
    *(_OWORD *)&v120.fields.fakeValue = v24;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v119 = v120;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v119, 0LL);
    if ( !Item )
      goto LABEL_72;
    userServantEntity = Item->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_72;
    v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    v27 = fatigueRecoveryConfirmationDialog;
    *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v118.fields.fakeValue = v26;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v118, 0LL);
    if ( v27 == fatigueRecoveryConfirmationDialog )
    {
      afterTime = (System_String_o *)StringLiteral_1/*""*/;
      beforeTime = (System_String_o *)StringLiteral_1/*""*/;
      IsMatchIndividuality_32172224 = EventServantFatigueListViewItem__IsMatchIndividuality_32172224(
                                        Item,
                                        this->fields.targetRecoveryFatigueItem,
                                        v28);
      EventServantFatigueListViewManager__GetOutRecoveryTime(
        this,
        Item->fields.fatigueTime,
        &beforeTime,
        &afterTime,
        IsMatchIndividuality_32172224,
        v30);
      targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
      if ( targetRecoveryFatigueItem )
      {
        v38 = targetRecoveryFatigueItem->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v38;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
          (System_Int32_array **)v38,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        v39 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11968/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/,
                                                       0LL);
        v40 = this->fields.targetRecoveryFatigueItem;
        if ( v40 )
        {
          eventFatigueRecoveryEnt = v40->fields.eventFatigueRecoveryEnt;
          if ( eventFatigueRecoveryEnt )
          {
            v42 = System_String__Format(
                    (System_String_o *)fatigueRecoveryConfirmationDialog,
                    (Il2CppObject *)eventFatigueRecoveryEnt->fields.name,
                    0LL);
            v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11958/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0LL);
            targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
            outAfterTime = afterTime;
            v45 = beforeTime;
            v47 = v43;
            func = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
            CommonConfirmDialog_ClickDelegate___ctor(
              func,
              (Il2CppObject *)this,
              Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
              0LL);
            if ( v39 )
            {
              FatigueRecoveryConfirmationDialog__OpenDecideDlg(
                v39,
                v42,
                v47,
                0LL,
                (System_String_o *)StringLiteral_1/*""*/,
                (System_String_o *)StringLiteral_1/*""*/,
                targetOutUserServantEntity,
                v45,
                outAfterTime,
                func,
                0LL);
              return;
            }
          }
        }
      }
LABEL_72:
      sub_B7769C(fatigueRecoveryConfirmationDialog, obj);
    }
    v68 = this->fields.targetRecoveryFatigueItem;
    if ( !v68 )
      goto LABEL_72;
    v69 = v68->fields.userServantEntity;
    if ( v69 )
    {
      v70 = *(_OWORD *)&v69->fields.id.fields.fakeValue;
      *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)&v69->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v120.fields.fakeValue = v70;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v117 = v120;
      fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                            &v117,
                                            0LL);
      v71 = Item->fields.userServantEntity;
      if ( !v71 )
        goto LABEL_72;
      v72 = *(_OWORD *)&v71->fields.id.fields.fakeValue;
      *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)&v71->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v116.fields.fakeValue = v72;
      if ( fatigueRecoveryConfirmationDialog != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                  &v116,
                                                  0LL) )
      {
        v125 = (System_String_o *)StringLiteral_1/*""*/;
        v126 = (System_String_o *)StringLiteral_1/*""*/;
        v74 = EventServantFatigueListViewItem__IsMatchIndividuality_32172224(
                Item,
                this->fields.targetRecoveryFatigueItem,
                v73);
        EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v126, &v125, v74, v75);
        v123 = (System_String_o *)StringLiteral_1/*""*/;
        v124 = (System_String_o *)StringLiteral_1/*""*/;
        fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !fatigueRecoveryConfirmationDialog )
          goto LABEL_72;
        fatigueRecoveryConfirmationDialog = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        v76 = this->fields.targetRecoveryFatigueItem;
        if ( !v76 )
          goto LABEL_72;
        v77 = v76->fields.userServantEntity;
        if ( !v77 )
          goto LABEL_72;
        v78 = (UserEventServantFatigueMaster_o *)fatigueRecoveryConfirmationDialog;
        eventId = this->fields.eventId;
        v81 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
        v80 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v131.fields.currentCryptoKey = v81;
        *(_QWORD *)&v131.fields.fakeValue = v80;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                              v131,
                                              0LL);
        if ( !v78 )
          goto LABEL_72;
        FatigueInfo = UserEventServantFatigueMaster__GetFatigueInfo(
                        v78,
                        &recoverAt,
                        &isRecover,
                        eventId,
                        fatigueRecoveryConfirmationDialog,
                        0LL);
        v84 = 0LL;
        if ( FatigueInfo )
        {
          v85 = recoverAt;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          if ( v85 <= NetworkManager__getTime(0LL) )
            v84 = 0LL;
          else
            v84 = recoverAt;
        }
        IsMatchIndividuality = EventServantFatigueListViewManager__IsMatchIndividuality(this, v83);
        EventServantFatigueListViewManager__GetOutRecoveryTime(this, v84, &v124, &v123, IsMatchIndividuality, v87);
        v88 = Item->fields.userServantEntity;
        this->fields.targetInUserServantEntity = v88;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
          (System_Int32_array **)v88,
          v89,
          v90,
          v91,
          v92,
          v93,
          v94);
        v101 = this->fields.targetRecoveryFatigueItem;
        if ( !v101 )
          goto LABEL_72;
        v102 = v101->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v102;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
          (System_Int32_array **)v102,
          v95,
          v96,
          v97,
          v98,
          v99,
          v100);
        v115 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11888/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/,
                                                       0LL);
        v103 = this->fields.targetRecoveryFatigueItem;
        if ( !v103 )
          goto LABEL_72;
        v104 = v103->fields.eventFatigueRecoveryEnt;
        if ( !v104 )
          goto LABEL_72;
        v105 = System_String__Format(
                 (System_String_o *)fatigueRecoveryConfirmationDialog,
                 (Il2CppObject *)v104->fields.name,
                 0LL);
        v106 = LocalizationManager__Get((System_String_o *)StringLiteral_11886/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/, 0LL);
        v108 = v125;
        v107 = v126;
        targetInUserServantEntity = this->fields.targetInUserServantEntity;
        v109 = this->fields.targetOutUserServantEntity;
        v111 = v123;
        v112 = v124;
        v113 = v106;
        v114 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v114,
          (Il2CppObject *)this,
          Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
          0LL);
        fatigueRecoveryConfirmationDialog = (int64_t)v115;
        if ( !v115 )
          goto LABEL_72;
        FatigueRecoveryConfirmationDialog__OpenDecideDlg(
          v115,
          v105,
          v113,
          targetInUserServantEntity,
          v107,
          v108,
          v109,
          v112,
          v111,
          v114,
          0LL);
      }
    }
  }
  else
  {
    v129 = (System_String_o *)StringLiteral_1/*""*/;
    v130 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !Item )
      goto LABEL_72;
    v49 = EventServantFatigueListViewItem__IsMatchIndividuality_32172224(
            Item,
            (EventServantRecoveryFatigueItem_o *)obj,
            v22);
    EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v130, &v129, v49, v50);
    v51 = Item->fields.userServantEntity;
    this->fields.targetInUserServantEntity = v51;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
      (System_Int32_array **)v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    v58 = this->fields.fatigueRecoveryConfirmationDialog;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11960/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/, 0LL);
    v59 = this->fields.targetRecoveryFatigueItem;
    if ( !v59 )
      goto LABEL_72;
    v60 = v59->fields.eventFatigueRecoveryEnt;
    if ( !v60 )
      goto LABEL_72;
    v61 = System_String__Format(
            (System_String_o *)fatigueRecoveryConfirmationDialog,
            (Il2CppObject *)v60->fields.name,
            0LL);
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_11958/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0LL);
    v63 = this->fields.targetInUserServantEntity;
    v65 = v129;
    v64 = v130;
    v66 = v62;
    v67 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v67,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
      0LL);
    if ( !v58 )
      goto LABEL_72;
    FatigueRecoveryConfirmationDialog__OpenDecideDlg(
      v58,
      v61,
      v66,
      v63,
      v64,
      v65,
      0LL,
      (System_String_o *)StringLiteral_1/*""*/,
      (System_String_o *)StringLiteral_1/*""*/,
      v67,
      0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickSelectPush(
        EventServantFatigueListViewManager_o *this,
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
  EventServantFatigueListViewItem_o **v16; // x20
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
  EventServantFatigueListViewItem_o *v73; // x8
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

  if ( (byte_438ECCA & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&EventServantFatigueListViewObject_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Rarity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__);
    sub_B775C4(&EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo);
    sub_B775C4(&StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_438ECCA = 1;
  }
  v5 = sub_B77694(EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo);
  EventServantFatigueListViewManager___c__DisplayClass107_0___ctor(
    (EventServantFatigueListViewManager___c__DisplayClass107_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_69;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  if ( !obj )
    goto LABEL_69;
  v14 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v14
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[v14 - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    sub_B77990(obj);
    goto LABEL_71;
  }
  Item = (System_Int32_array **)EventServantFatigueListViewObject__GetItem(
                                  (EventServantFatigueListViewObject_o *)obj,
                                  (const MethodInfo *)EventServantFatigueListViewObject_TypeInfo);
  *(_QWORD *)(v5 + 24) = Item;
  v16 = (EventServantFatigueListViewItem_o **)(v5 + 24);
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), Item, v17, v18, v19, v20, v21, v22);
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
    if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v90, 0LL) )
      goto LABEL_15;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_69;
    SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_69;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
               v23,
               (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_69;
    SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
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
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v92, 0LL);
    if ( !v28 )
      goto LABEL_69;
    v31 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v28,
                               SelfUserGame,
                               (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v34 = (System_Object_array *)sub_B775DC(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v34 )
LABEL_69:
      sub_B7769C(SelfUserGame, v7);
    v42 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B77684(SelfUserGame, v34->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( !v34->max_length )
      goto LABEL_71;
    v34->m_Items[0] = (Il2CppObject *)v42;
    sub_B77560((BattleServantConfConponent_o *)v34->m_Items, v42, v36, v37, v38, v39, v40, v41);
    if ( !v31 )
      goto LABEL_69;
    SelfUserGame = (__int64)ServantEntity__getClassName(v31, 0LL);
    v49 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B77684(SelfUserGame, v34->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v34->max_length <= 1 )
      goto LABEL_71;
    v34->m_Items[1] = (Il2CppObject *)v49;
    sub_B77560((BattleServantConfConponent_o *)&v34->m_Items[1], v49, v43, v44, v45, v46, v47, v48);
    v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(Entity->fields.limitCount, 0LL);
    SelfUserGame = (__int64)ServantEntity__getName(v31, v50, -1, 0LL);
    v57 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B77684(SelfUserGame, v34->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v34->max_length <= 2 )
      goto LABEL_71;
    v34->m_Items[2] = (Il2CppObject *)v57;
    sub_B77560((BattleServantConfConponent_o *)&v34->m_Items[2], v57, v51, v52, v53, v54, v55, v56);
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
      SelfUserGame = sub_B77684(SelfUserGame, v34->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v34->max_length <= 3 )
      goto LABEL_71;
    v34->m_Items[3] = (Il2CppObject *)v65;
    sub_B77560((BattleServantConfConponent_o *)&v34->m_Items[3], v65, v59, v60, v61, v62, v63, v64);
    if ( !*v16 )
      goto LABEL_69;
    SelfUserGame = (__int64)(*v16)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_69;
    SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
    v72 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B77684(SelfUserGame, v34->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v34->max_length <= 4 )
      goto LABEL_71;
    v34->m_Items[4] = (Il2CppObject *)v72;
    sub_B77560((BattleServantConfConponent_o *)&v34->m_Items[4], v72, v66, v67, v68, v69, v70, v71);
    v73 = *v16;
    if ( !*v16 )
      goto LABEL_69;
    v74 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v73->fields.userServantEntity;
    if ( !v74 )
      goto LABEL_69;
    servantEntity = v73->fields.servantEntity;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v74[6], 0LL);
    if ( !servantEntity )
      goto LABEL_69;
    SelfUserGame = (__int64)ServantEntity__getName(servantEntity, SelfUserGame, -1, 0LL);
    v82 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B77684(SelfUserGame, v34->obj.klass->_1.element_class);
      if ( !SelfUserGame )
      {
LABEL_72:
        v89 = sub_B776BC(SelfUserGame);
        sub_B77668(v89, 0LL);
      }
    }
    if ( v34->max_length > 5 )
    {
      v34->m_Items[5] = (Il2CppObject *)v82;
      sub_B77560((BattleServantConfConponent_o *)&v34->m_Items[5], v82, v76, v77, v78, v79, v80, v81);
      v83 = System_String__Format_44980660(v33, v34, 0LL);
      v84 = LocalizationManager__Get((System_String_o *)StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v85 = LocalizationManager__Get((System_String_o *)StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v87 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v87,
        (Il2CppObject *)v5,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__,
        0LL);
      SelfUserGame = (__int64)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_18055976(
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
    v88 = sub_B776C8(SelfUserGame);
    sub_B77668(v88, 0LL);
  }
LABEL_15:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  EventServantFatigueListViewManager__PushRequest(this, *v16, v26);
}


void __fastcall EventServantFatigueListViewManager__OnClickSortAscendingOrder(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_438ECBF & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438ECBF = 1;
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
      sub_B7769C(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickSortButton(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v5; // x21
  ServantSortSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_438ECBD & 1) == 0 )
  {
    sub_B775C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_EventServantFatigueListViewManager_EndSelectSortKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438ECBD = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B77694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v5 )
      sub_B7769C(v7, v8);
    CommonUI__OpenServantSortSelectMenu(v5, 7, sort, 0, v6, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnLongPushListView(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  EventServantFatigueListViewItem_o *Item; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x10
  struct UserServantEntity_o *userServantEntity; // x8
  EventServantFatigueListViewItem_o *v9; // x20
  __int128 v10; // q1
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *v12; // x20
  CommonUI_o *v13; // x21
  ServantStatusDialog_EndDelegate_o *v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-40h]

  if ( (byte_438ECB5 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&Method_EventServantFatigueListViewManager_EndShowServant__);
    sub_B775C4(&EventServantFatigueListViewObject_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438ECB5 = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( !obj )
      goto LABEL_18;
    v7 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1);
    if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
      goto LABEL_18;
    if ( (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != EventServantFatigueListViewObject_TypeInfo )
      goto LABEL_18;
    Item = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)obj, v6);
    if ( !Item )
      goto LABEL_18;
    userServantEntity = Item->fields.userServantEntity;
    v9 = Item;
    if ( !userServantEntity )
      goto LABEL_18;
    v10 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v16.fields.fakeValue = v10;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v15 = v16;
    this->fields.statusShowUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v15, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = v9->fields.userServantEntity;
    v13 = (CommonUI_o *)Instance;
    v14 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v14,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndShowServant__,
      0LL);
    if ( !v13 )
LABEL_18:
      sub_B7769C(Item, v6);
    CommonUI__OpenServantStatusDialog_18066864(v13, 0, v12, v14, 0LL);
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
  System_Action_o *CallbackFunc2; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_438ECAD & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438ECAD = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_B7769C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_B77560((BattleServantConfConponent_o *)&this->fields.CallbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
        if ( CallbackFunc2 )
          System_Action__Invoke(CallbackFunc2, 0LL);
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

  if ( (byte_438ECCB & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_EventServantFatigueListViewManager_EndPushRequest__);
    sub_B775C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438ECCB = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v8 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v45, 0LL);
  if ( !v9 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v43, 0LL);
  v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v8->fields.writeMasterDataThread;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_EndPushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v19,
                                        (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v41, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v27 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v32 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v31;
  *(_QWORD *)&v46.fields.currentCryptoKey = v32;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v46, 0LL);
  if ( !v22 )
LABEL_21:
    sub_B7769C(limitCountSupport, v6);
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


void __fastcall EventServantFatigueListViewManager__RefreshListDisp(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *v6; // x20
  int v7; // w21
  __int64 v8; // x22
  unsigned int v9; // w8

  if ( (byte_438ECA4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
    byte_438ECA4 = 1;
  }
  ObjectList = EventServantFatigueListViewManager__get_ObjectList(this, method);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        ObjectList = (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v6->fields._items->m_Items[v8];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_EventServantFatigueListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        if ( (int)v8 + 1 >= v7 )
          return;
        v9 = v6->fields._size;
        ++v8;
      }
LABEL_13:
      sub_B7769C(ObjectList, v4);
    }
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
  int32_t size; // w8
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *v10; // x21
  int v11; // w24
  __int64 v12; // x25
  unsigned int v13; // w8
  EventServantFatigueListViewObject_o *v14; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438ECAC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_EventServantFatigueListViewManager_OnMoveEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438ECAC = 1;
  }
  ObjectList = EventServantFatigueListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v10 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v14 = v10->fields._items->m_Items[v12];
        v15 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(v15, (Il2CppObject *)this, Method_EventServantFatigueListViewManager_OnMoveEnd__, 0LL);
        if ( !v14 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventServantFatigueListViewObject__Init(
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
      sub_B7769C(ObjectList, v8);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__SetFilterButtonImage(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_438ECBC & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17332/*"btn_filter_on"*/);
    sub_B775C4(&StringLiteral_17331/*"btn_filter"*/);
    byte_438ECBC = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B7769C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17331/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17332/*"btn_filter_on"*/;
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

  if ( (byte_438ECA6 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_11964/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_B775C4(&StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_B775C4(&StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_B775C4(&StringLiteral_11979/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/);
    byte_438ECA6 = 1;
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
      v4 = &StringLiteral_11979/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/;
      goto LABEL_20;
    case 1:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v4 = &StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_20;
    case 2:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v4 = &StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_20;
    case 3:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v4 = &StringLiteral_11964/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_20:
      v5 = LocalizationManager__Get((System_String_o *)*v4, 0LL);
      if ( !recoveryFatigueInfoMsgLabel )
        sub_B7769C(v5, v6);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.Callback = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.Callback,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventServantFatigueListViewManager__SetMode_32185968(this, mode, v10);
}


void __fastcall EventServantFatigueListViewManager__SetMode_32185968(
        EventServantFatigueListViewManager_o *this,
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
  EventServantFatigueListViewManager__RequestListObject(this, v6, 0.0, v5);
}


void __fastcall EventServantFatigueListViewManager__SetMode_32186084(
        EventServantFatigueListViewManager_o *this,
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventServantFatigueListViewManager__SetMode_32185968(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__SetObjectItem(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventServantFatigueListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_438ECAB & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_B775C4(&EventServantFatigueListViewObject_TypeInfo);
    byte_438ECAB = 1;
  }
  if ( !obj
    || (v6 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  EventServantFatigueListViewObject__Init(
    (EventServantFatigueListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
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
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v19; // x20

  if ( (byte_438ECC0 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_17360/*"btn_sort_up"*/);
    sub_B775C4(&StringLiteral_17444/*"btn_txt_up"*/);
    sub_B775C4(&StringLiteral_17400/*"btn_txt_new"*/);
    sub_B775C4(&StringLiteral_17390/*"btn_txt_down"*/);
    sub_B775C4(&StringLiteral_17407/*"btn_txt_old"*/);
    sub_B775C4(&StringLiteral_17357/*"btn_sort_down"*/);
    byte_438ECC0 = 1;
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
      goto LABEL_45;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v6 )
      goto LABEL_45;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_45;
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
    if ( !v8 )
      goto LABEL_45;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_45;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17407/*"btn_txt_old"*/ : &StringLiteral_17400/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_45;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_45;
      isAscendingOrder = v11->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
      v14 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_45;
      v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17444/*"btn_txt_up"*/ : &StringLiteral_17390/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_45;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_45;
      isAscendingOrder = v16->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
      v14 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v17 = v13;
    else
      v17 = v14;
    UISprite__set_spriteName((UISprite_o *)sort, *v17, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_45;
    if ( sort->fields.isBonusKind )
    {
      v19 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_34346624(
                                 sort,
                                 this->fields.bonusEventIdList,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL);
      if ( v19 )
      {
        UILabel__set_text(v19, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_45:
      sub_B7769C(sort, v4);
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

  if ( (byte_438ECA5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17477/*"button_push_reg"*/);
    sub_B775C4(&StringLiteral_17478/*"button_push_unreg"*/);
    sub_B775C4(&StringLiteral_17463/*"button_allchoice_reg"*/);
    sub_B775C4(&StringLiteral_17466/*"button_alllock_unreg"*/);
    sub_B775C4(&StringLiteral_17479/*"button_select_reg"*/);
    sub_B775C4(&StringLiteral_17480/*"button_select_unreg"*/);
    sub_B775C4(&StringLiteral_17465/*"button_alllock_reg"*/);
    sub_B775C4(&StringLiteral_17464/*"button_allchoice_unreg"*/);
    byte_438ECA5 = 1;
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
  v6 = &StringLiteral_17479/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_17480/*"button_select_unreg"*/;
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
  v7 = &StringLiteral_17465/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v7 = &StringLiteral_17466/*"button_alllock_unreg"*/;
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
  v8 = &StringLiteral_17463/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v8 = &StringLiteral_17464/*"button_allchoice_unreg"*/;
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
  v9 = &StringLiteral_17477/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v9 = &StringLiteral_17478/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_B7769C(statusTabButton, *(_QWORD *)&modeKind);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EventServantFatigueListViewManager_o *v9; // x19
  struct System_Int32_array *servantFilterEventIdList; // x8
  struct ListViewSort_o *v11; // x9
  System_Int32_array **v12; // x1
  UnityEngine_Object_o *bonusFilterKindButton; // x21
  struct ListViewSort_o *v14; // x8
  struct ListViewSort_o *sort; // x8

  v9 = this;
  if ( (byte_438ECBA & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438ECBA = 1;
  }
  if ( !setupInfo )
  {
    sort = v9->fields.sort;
    if ( sort )
    {
      sort->fields.isBonusKind = 0;
      v9->fields.bonusEventIdList = 0LL;
      sub_B77560(
        (BattleServantConfConponent_o *)&v9->fields.bonusEventIdList,
        0LL,
        (System_String_array **)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      return;
    }
    goto LABEL_20;
  }
  servantFilterEventIdList = setupInfo->fields.servantFilterEventIdList;
  if ( servantFilterEventIdList )
    LOBYTE(servantFilterEventIdList) = servantFilterEventIdList->max_length != 0;
  v11 = v9->fields.sort;
  if ( !v11 )
    goto LABEL_20;
  v11->fields.isBonusKind = (char)servantFilterEventIdList;
  v12 = (System_Int32_array **)setupInfo->fields.servantFilterEventIdList;
  v9->fields.bonusEventIdList = (struct System_Int32_array *)v12;
  sub_B77560(
    (BattleServantConfConponent_o *)&v9->fields.bonusEventIdList,
    v12,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  bonusFilterKindButton = (UnityEngine_Object_o *)v9->fields.bonusFilterKindButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(bonusFilterKindButton, 0LL, 0LL) )
  {
    this = (EventServantFatigueListViewManager_o *)v9->fields.bonusFilterKindButton;
    if ( this )
    {
      this = (EventServantFatigueListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      v14 = v9->fields.sort;
      if ( v14 )
      {
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v14->fields.isBonusKind, 0LL);
          this = (EventServantFatigueListViewManager_o *)v9->fields.sort;
          if ( this )
          {
            if ( BYTE5(this->fields.sortKindLabel) )
              ListViewSort__AlignBonusKind2(
                (ListViewSort_o *)this,
                v9->fields.bonusEventIdList,
                0LL,
                0LL,
                0LL,
                0LL,
                0LL);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_B7769C(this, setupInfo);
  }
}


void __fastcall EventServantFatigueListViewManager__StatusRequest(
        EventServantFatigueListViewManager_o *this,
        EventServantFatigueListViewManager_RequestCallbackFunc_o *callback,
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

  if ( (byte_438ECC7 & 1) == 0 )
  {
    sub_B775C4(&Method_EventServantFatigueListViewManager_EndStatusSync__);
    sub_B775C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438ECC7 = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( EventServantFatigueListViewManager__GetSwapChoiceList(this, &choiceList, &unchoiceList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v26,
                                                                       (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v16 = unchoiceList;
        v17 = choiceList;
        v19 = 1;
        v18 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B7769C(Request_WarBoardWallAttackRequest, v15);
    }
  }
  else if ( modeKind == 1 && EventServantFatigueListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v13,
                                                                     (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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
    EventServantFatigueListViewManager_RequestCallbackFunc__Invoke(callback, 0, 0LL);
}


void __fastcall EventServantFatigueListViewManager__Update(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  int64_t Time; // x0
  const MethodInfo *v5; // x1

  if ( (byte_438ECA1 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438ECA1 = 1;
  }
  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL)
    && this->fields.itemSortList
    && (this->fields.updateTime & 0x8000000000000000LL) == 0 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
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
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *v5; // x8
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438ECA2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_438ECA2 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  ObjectList = EventServantFatigueListViewManager__get_ObjectList(this, method);
  if ( ObjectList )
  {
    v5 = this->fields.objectList;
    if ( !v5 )
      sub_B7769C(ObjectList, v4);
    if ( v5->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v7,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v7,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__) )
      {
        if ( !v7.fields.current )
          sub_B7769C(0LL, v6);
        EventServantFatigueListViewObject__UpdateDisp((EventServantFatigueListViewObject_o *)v7.fields.current, v6);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v7,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__);
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

  if ( (byte_438EC99 & 1) == 0 )
  {
    sub_B775C4(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo);
    byte_438EC99 = 1;
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
    v8 = sub_B6BFDC(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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

  if ( (byte_438EC9B & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438EC9B = 1;
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
    v8 = sub_B6BFDC(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  EventServantFatigueListViewManager__remove_CallbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_EventServantFatigueListViewObject__o *__fastcall EventServantFatigueListViewManager__get_ClippingObjectList(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  int size; // w22
  unsigned int v8; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v9; // x21

  if ( (byte_438ECA0 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
    byte_438ECA0 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      Component_srcLineSprite = objectList->fields._items->m_Items[v8];
      if ( !Component_srcLineSprite )
        break;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
      if ( !Component_srcLineSprite )
        break;
      v9 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)EventServantFatigueListViewObject__GetItem(
                                                              (EventServantFatigueListViewObject_o *)Component_srcLineSprite,
                                                              v5);
      if ( !Component_srcLineSprite )
        break;
      v5 = (const MethodInfo *)Component_srcLineSprite;
      if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
        || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_24185472(
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
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
      }
      if ( (int)++v8 >= size )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v3;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B7769C(Component_srcLineSprite, v5);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21

  if ( (byte_438EC9F & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EC9F = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
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
                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
        if ( !v3 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
      }
      if ( (__int64)++v8 >= size )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v3;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B7769C(Component_srcLineSprite, v5);
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

  if ( (byte_438EC9A & 1) == 0 )
  {
    sub_B775C4(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo);
    byte_438EC9A = 1;
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
    v8 = sub_B6BFDC(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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

  if ( (byte_438EC9C & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438EC9C = 1;
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
    v8 = sub_B6BFDC(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
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
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = index;
  v13 = kind;
  if ( (byte_438803E & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&EventServantFatigueListViewManager_ResultKind_TypeInfo);
    byte_438803E = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EventServantFatigueListViewManager_ResultKind_TypeInfo, &v13, *(_QWORD *)&index);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall EventServantFatigueListViewManager_CallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager_CallbackFunc__Invoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  EventServantFatigueListViewManager_CallbackFunc_o **v8; // x26
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
  EventServantFatigueListViewManager_CallbackFunc_o *v20; // x8
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
  EventServantFatigueListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

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
    v8 = (EventServantFatigueListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind);
      if ( (sub_B775F4(v22) & 1) == 0 )
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
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
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
            v18 = sub_B0F4C0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B77674(v17, v22);
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
            v16 = sub_B0F4C0(v21, class_0, v10);
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
void __fastcall EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
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
  sub_B77560(p_method);
}


System_IAsyncResult_o *__fastcall EventServantFatigueListViewManager_RequestCallbackFunc__BeginInvoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_438803F & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_438803F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall EventServantFatigueListViewManager_RequestCallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager_RequestCallbackFunc__Invoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  EventServantFatigueListViewManager_RequestCallbackFunc_o **v7; // x25
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
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v18; // x8
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
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (EventServantFatigueListViewManager_RequestCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isRequest);
      if ( (sub_B775F4(v20) & 1) == 0 )
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
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
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
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
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
            v14 = sub_B0F4C0(v19, class_0, v9);
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
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_438803D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__);
    byte_438803D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B77560(&this->fields.__9__1);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_18056328(v7, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B7769C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall EventServantFatigueListViewManager___c__DisplayClass107_0___OnClickSelectPush_b__1(
        EventServantFatigueListViewManager___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  EventServantFatigueListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, method);
  EventServantFatigueListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}