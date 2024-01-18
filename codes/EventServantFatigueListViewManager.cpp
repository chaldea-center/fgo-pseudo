void __fastcall EventServantFatigueListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v13; // x20
  struct EventServantFatigueListViewManager_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_418A9B5 & 1) == 0 )
  {
    sub_B2C35C(&EventServantFatigueListViewManager_TypeInfo, v1);
    sub_B2C35C(&ListViewSort_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_6193/*"EventServantFatigueList"*/, v9);
    byte_418A9B5 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventServantFatigueListViewManager_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_6193/*"EventServantFatigueList"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6193/*"EventServantFatigueList"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v13 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v13, SORT_SAVE_KEY, 3, 0, 0LL);
  v14 = EventServantFatigueListViewManager_TypeInfo->static_fields;
  v14->servantSortStatus = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v14->servantSortStatus,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  __int64 v5; // x1
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x8
  System_Action_bool__UserServantEntity__o *v7; // x0
  bool v8; // w1
  UserServantEntity_o *targetInUserServantEntity; // x2

  v4 = this;
  if ( (byte_418A99D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool__UserServantEntity__Invoke__, result);
    this = (EventServantFatigueListViewManager_o *)sub_B2C35C(&StringLiteral_21068/*"ng"*/, v5);
    byte_418A99D = 1;
  }
  if ( !result )
    goto LABEL_10;
  this = (EventServantFatigueListViewManager_o *)System_String__Equals_44292872(
                                                   result,
                                                   (System_String_o *)StringLiteral_21068/*"ng"*/,
                                                   0LL);
  selectAfterCallback = v4->fields.selectAfterCallback;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( selectAfterCallback )
    {
      targetInUserServantEntity = v4->fields.targetInUserServantEntity;
      v8 = 1;
      v7 = v4->fields.selectAfterCallback;
      goto LABEL_9;
    }
LABEL_10:
    sub_B2C434(this, result);
  }
  if ( !selectAfterCallback )
    goto LABEL_10;
  v7 = v4->fields.selectAfterCallback;
  v8 = 0;
  targetInUserServantEntity = 0LL;
LABEL_9:
  System_Action_bool__UserServantEntity___Invoke(
    v7,
    v8,
    targetInUserServantEntity,
    (const MethodInfo_24C7E84 *)Method_System_Action_bool__UserServantEntity__Invoke__);
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
  CommonConfirmDialog_o *fatigueRecoveryConfirmationDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x19
  struct UserServantEntity_o *targetInUserServantEntity; // x8
  struct UserServantEntity_o *targetOutUserServantEntity; // x9
  CommonConfirmDialog_o *v13; // x19
  int32_t v14; // w21
  struct EventServantRecoveryFatigueItem_o *v15; // x10
  struct EventFatigueRecoveryEntity_o *v16; // x9
  __int128 v17; // q1
  int32_t v18; // w22
  struct UserServantEntity_o *v19; // x8
  __int128 v20; // q0
  CommonConfirmDialog_o *v21; // x20
  int64_t v22; // x4
  ServantRecoverySyncRequest_o *v23; // x0
  int32_t v24; // w1
  int32_t v25; // w2
  int64_t v26; // x3
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  __int128 v29; // q1
  int32_t eventId; // w20
  int32_t idx; // w21
  struct EventFatigueRecoveryEntity_o *v32; // x9
  __int128 v33; // q1
  int32_t v34; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+60h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+80h] [xbp-40h]

  if ( (byte_418A99C & 1) == 0 )
  {
    sub_B2C35C(&Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__, isDecide);
    sub_B2C35C(&Method_NetworkManager_getRequest_ServantRecoverySyncRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_418A99C = 1;
  }
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_35;
  CommonConfirmDialog__Close(fatigueRecoveryConfirmationDialog, 0LL);
  if ( !isDecide )
    return;
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v10,
                                                                 (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_ServantRecoverySyncRequest___);
  targetInUserServantEntity = this->fields.targetInUserServantEntity;
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v13 = fatigueRecoveryConfirmationDialog;
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
        v29 = *(_OWORD *)&targetOutUserServantEntity->fields.id.fields.fakeValue;
        eventId = this->fields.eventId;
        idx = eventFatigueRecoveryEnt->fields.idx;
        *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&targetOutUserServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v39.fields.fakeValue = v29;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v35 = v39;
        fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                                       &v35,
                                                                       0LL);
        if ( v13 )
        {
          v22 = (int64_t)fatigueRecoveryConfirmationDialog;
          v23 = (ServantRecoverySyncRequest_o *)v13;
          v24 = eventId;
          v25 = idx;
          v26 = 0LL;
          goto LABEL_33;
        }
      }
    }
LABEL_35:
    sub_B2C434(fatigueRecoveryConfirmationDialog, isDecide);
  }
  v14 = this->fields.eventId;
  v15 = this->fields.targetRecoveryFatigueItem;
  if ( !targetOutUserServantEntity )
  {
    if ( v15 )
    {
      v32 = v15->fields.eventFatigueRecoveryEnt;
      if ( v32 )
      {
        v33 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
        v34 = v32->fields.idx;
        *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v39.fields.fakeValue = v33;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v36 = v39;
        fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                                       &v36,
                                                                       0LL);
        if ( v13 )
        {
          v26 = (int64_t)fatigueRecoveryConfirmationDialog;
          v23 = (ServantRecoverySyncRequest_o *)v13;
          v24 = v14;
          v25 = v34;
          v22 = 0LL;
          goto LABEL_33;
        }
      }
    }
    goto LABEL_35;
  }
  if ( !v15 )
    goto LABEL_35;
  v16 = v15->fields.eventFatigueRecoveryEnt;
  if ( !v16 )
    goto LABEL_35;
  v17 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
  v18 = v16->fields.idx;
  *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v39.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v38 = v39;
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                                 &v38,
                                                                 0LL);
  v19 = this->fields.targetOutUserServantEntity;
  if ( !v19 )
    goto LABEL_35;
  v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
  v21 = fatigueRecoveryConfirmationDialog;
  *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v37.fields.fakeValue = v20;
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                                 &v37,
                                                                 0LL);
  if ( !v13 )
    goto LABEL_35;
  v22 = (int64_t)fatigueRecoveryConfirmationDialog;
  v23 = (ServantRecoverySyncRequest_o *)v13;
  v24 = v14;
  v25 = v18;
  v26 = (int64_t)v21;
LABEL_33:
  ServantRecoverySyncRequest__beginRequest(v23, v24, v25, v26, v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  EventServantFatigueListViewManager_c *v24; // x0
  struct ListViewSort_o *servantSortStatus; // x1
  struct ListViewSort_o **p_sort; // x23
  __int64 v27; // x1
  __int64 sort; // x0
  TitleInfoControl_o *titleInfo; // x8
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UnityEngine_Object_o *fatigueRecoveryConfirmationDialog; // x24
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  Il2CppObject *fatigueRecoveryConfirmationDialogPrefab; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_GameObject_o *v66; // x24
  UnityEngine_Transform_o *transform; // x25
  struct FatigueRecoveryConfirmationDialog_o *Component_srcLineSprite; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  System_Int32_array *v78; // x23
  EventUpValSetupInfo_o *v79; // x21
  const MethodInfo *v80; // x2
  __int64 v81; // x8
  __int64 v82; // x23
  unsigned __int64 v83; // x28
  signed __int64 v84; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  UserServantEntity_o *v86; // x24
  __int128 v87; // q0
  __int128 v88; // q1
  int64_t v89; // x0
  int32_t v90; // w19
  int64_t v91; // x27
  EventServantFatigueListViewItem_o *v92; // x25
  const MethodInfo *v93; // x6
  __int64 v94; // x0
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v96; // x2
  const MethodInfo *v97; // x1
  struct EventServantRecoveryFatigueItem_o **p_targetRecoveryFatigueItem; // [xsp+0h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101[2]; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v108; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_418A98C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&EventServantFatigueListViewItem_TypeInfo, v11);
    sub_B2C35C(&EventServantFatigueListViewManager_TypeInfo, v12);
    sub_B2C35C(&EventUpValSetupInfo_TypeInfo, v13);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___, v14);
    sub_B2C35C(&int___TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_B2C35C(&LocalizationManager_TypeInfo, v17);
    sub_B2C35C(&NetworkManager_TypeInfo, v18);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450632, v19);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v23);
    byte_418A98C = 1;
  }
  memset(&v101[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v24 = EventServantFatigueListViewManager_TypeInfo;
  if ( (BYTE3(EventServantFatigueListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v24 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v24->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  p_sort = &this->fields.sort;
  sub_B2C2F8(
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
  TitleInfoControl__setBackBtnSprite_19529688((TitleInfoControl_o *)sort, 1, 0, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_65;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_65;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v30, v31, v32, v33, v34, v35);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    0LL,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.eventId = eventId;
  this->fields.statusShowUserSvtId = -1LL;
  this->fields.targetRecoveryFatigueItem = targetItem;
  p_targetRecoveryFatigueItem = &this->fields.targetRecoveryFatigueItem;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetRecoveryFatigueItem,
    (System_Int32_array **)targetItem,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.selectAfterCallback = afterCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectAfterCallback,
    (System_Int32_array **)afterCallback,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
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
    v102.fields.x = 0.0;
    v102.fields.y = 0.0;
    v102.fields.z = 0.0;
    v107 = UnityEngine_Quaternion__Euler_35347036(v102, 0LL);
    x = v107.fields.x;
    y = v107.fields.y;
    z = v107.fields.z;
    w = v107.fields.w;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v103.fields.x = 0.0;
    v103.fields.y = 0.0;
    v103.fields.z = 0.0;
    v108.fields.x = x;
    v108.fields.y = y;
    v108.fields.z = z;
    v108.fields.w = w;
    sort = (__int64)UnityEngine_Object__Instantiate_object_(
                      fatigueRecoveryConfirmationDialogPrefab,
                      v103,
                      v108,
                      (const MethodInfo_20960C4 *)Method_UnityEngine_Object_Instantiate_GameObject____67450632);
    if ( !sort )
      goto LABEL_65;
    v66 = (UnityEngine_GameObject_o *)sort;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)sort, 0LL);
    sort = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_65;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)sort, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v66, 0LL);
    if ( !sort )
      goto LABEL_65;
    v104.fields.x = 0.0;
    v104.fields.y = 0.0;
    v104.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)sort, v104, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v66, 0LL);
    if ( !sort )
      goto LABEL_65;
    v105.fields.x = 0.0;
    v105.fields.y = 0.0;
    v105.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)sort, v105, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v66, 0LL);
    if ( !sort )
      goto LABEL_65;
    v106.fields.x = 1.0;
    v106.fields.y = 1.0;
    v106.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)sort, v106, 0LL);
    Component_srcLineSprite = (struct FatigueRecoveryConfirmationDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              v66,
                                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___);
    this->fields.fatigueRecoveryConfirmationDialog = Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.fatigueRecoveryConfirmationDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
LABEL_37:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_65;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_65;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = sub_B2C374(int___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_65;
  v78 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
  {
LABEL_59:
    v94 = sub_B2C460(sort);
    sub_B2C400(v94, 0LL);
  }
  *(_DWORD *)(sort + 32) = eventId;
  v79 = (EventUpValSetupInfo_o *)sub_B2C42C(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_26087716(v79, v78, 1, 0LL);
  EventServantFatigueListViewManager__SetUpBonusFilterButton(this, v79, v80);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort
    || (sort = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)sort,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
    || (sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL)) == 0 )
  {
LABEL_65:
    sub_B2C434(sort, v27);
  }
  v81 = *(_QWORD *)(sort + 24);
  v82 = sort;
  if ( (int)v81 >= 1 )
  {
    v83 = 0LL;
    v84 = (int)v81;
    while ( *p_targetRecoveryFatigueItem )
    {
      userServantEntity = (*p_targetRecoveryFatigueItem)->fields.userServantEntity;
      v86 = *(UserServantEntity_o **)(v82 + 32 + 8 * v83);
      if ( userServantEntity )
      {
        v88 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        v87 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      }
      else
      {
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v101, -1LL, 0LL);
        v88 = *(_OWORD *)&v101[0].fields.currentCryptoKey;
        v87 = *(_OWORD *)&v101[0].fields.fakeValue;
      }
      *(_OWORD *)&v101[1].fields.currentCryptoKey = v88;
      *(_OWORD *)&v101[1].fields.fakeValue = v87;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v100 = v101[1];
      v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v100, 0LL);
      v90 = this->fields.eventId;
      v91 = v89;
      v92 = (EventServantFatigueListViewItem_o *)sub_B2C42C(EventServantFatigueListViewItem_TypeInfo);
      EventServantFatigueListViewItem___ctor(v92, v86, v90, v91, v79, targetItem, v93);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v92,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v83 >= v84 )
        goto LABEL_60;
      if ( v83 >= *(unsigned int *)(v82 + 24) )
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
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_65;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EventServantFatigueListViewManager__SetStatusKind(this, this->fields.modeKind, v96);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventServantFatigueListViewManager__SetFilterButtonImage(this, v97);
}


void __fastcall EventServantFatigueListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventServantFatigueListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_418A986 & 1) == 0 )
  {
    sub_B2C35C(&EventServantFatigueListViewManager_TypeInfo, v1);
    byte_418A986 = 1;
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
    sub_B2C434(0LL, v1);
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
    sub_B2C434(0LL, v3);
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
  EventServantFatigueListViewManager__SetMode_30488568(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_30488568(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_30488568(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_30488568(this, 2, v5);
}


void __fastcall EventServantFatigueListViewManager__EndPushRequest(
        EventServantFatigueListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventServantFatigueListViewManager__ModifyList(this, 0, method);
  EventServantFatigueListViewManager__SetMode_30488568(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__EndSelectFilterKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x1

  if ( (byte_418A9A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_418A9A2 = 1;
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
  sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_B2C434(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)sort, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__EndSelectSortKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_418A9A7 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_418A9A7 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
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

  if ( (byte_418A99F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_418A99F = 1;
  }
  EventServantFatigueListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventServantFatigueListViewManager__ModifyList(this, 0, v4);
  EventServantFatigueListViewManager__SetMode_30488568(this, 2, v5);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
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
    sub_B2C2F8(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  int size; // w24
  int v10; // w25
  int64_t v11; // x21
  ListViewItem_o *v12; // x8
  __int64 v13; // x11
  _QWORD *monitor; // x8
  __int64 v15; // x22
  __int64 v16; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v4 = this;
  if ( (byte_418A9A0 & 1) == 0 )
  {
    sub_B2C35C(&EventServantFatigueListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    this = (EventServantFatigueListViewManager_o *)sub_B2C35C(
                                                     &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                     v7);
    byte_418A9A0 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_21;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v10 = 0;
    v11 = 0LL;
    do
    {
      if ( itemList->fields._size <= (unsigned int)v10 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v12 = itemList->fields._items->m_Items[v10];
      if ( !v12 )
        break;
      v13 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v12->klass->_2.bitflags2 + 1) < (unsigned int)v13
        || (EventServantFatigueListViewItem_c *)v12->klass->_2.typeHierarchy[v13 - 1] != EventServantFatigueListViewItem_TypeInfo )
      {
        break;
      }
      if ( (EventServantFatigueListViewItem_c *)v12->klass->_2.typeHierarchy[*(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2
                                                                             + 1)
                                                                           - 1] != EventServantFatigueListViewItem_TypeInfo )
        v12 = 0LL;
      monitor = v12[1].monitor;
      if ( !monitor )
        break;
      v16 = monitor[10];
      v15 = monitor[11];
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v18.fields.currentCryptoKey = v16;
      *(_QWORD *)&v18.fields.fakeValue = v15;
      this = (EventServantFatigueListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                       v18,
                                                       0LL);
      ++v10;
      if ( (_DWORD)this == svtId )
        ++v11;
      if ( v10 >= size )
        return v11;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_21:
    sub_B2C434(this, *(_QWORD *)&svtId);
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
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_o *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  int individualityRate; // w23
  int64_t Time; // x8
  float v42; // s0
  double v43; // d0
  int64_t v44; // x21
  System_String_o *v45; // x20
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7

  if ( (byte_418A99A & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, recoveryFatigueTime);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_11653/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, v12);
    sub_B2C35C(&StringLiteral_11662/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, v13);
    sub_B2C35C(&StringLiteral_11758/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, v14);
    byte_418A99A = 1;
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
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11662/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0LL);
    *beforeTime = v24;
    sub_B2C2F8((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11653/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0LL);
    goto LABEL_28;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    sub_B2C434(IsNullOrEmpty, v17);
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
  sub_B2C2F8((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)RestTime4, v18, v19, v20, v21, v22, v23);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v42 = (float)(recoveryFatigueTime - Time) / (float)((float)individualityRate / 1000.0);
  if ( v42 == INFINITY )
    v43 = -v42;
  else
    v43 = v42;
  v44 = Time + (__int64)v43;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v31 = LocalizationManager__GetRestTime4(v44, -1LL, 0LL);
LABEL_28:
  *afterTime = v31;
  sub_B2C2F8((BattleServantConfConponent_o *)afterTime, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
  if ( isMatch )
  {
    v45 = *afterTime;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11758/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
    v47 = System_String__Concat_44305532(v45, v46, 0LL);
    *afterTime = v47;
    sub_B2C2F8((BattleServantConfConponent_o *)afterTime, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
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
  __int64 v13; // x0

  if ( (byte_418A999 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, array);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_11759/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/, v5);
    byte_418A999 = 1;
  }
  v6 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v6, 0LL);
  if ( !array )
    goto LABEL_17;
  v9 = *(_QWORD *)&array->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
      {
        v13 = sub_B2C460(appended);
        sub_B2C400(v13, 0LL);
      }
      if ( !v6 )
        break;
      appended = System_Text_StringBuilder__Append_42408700(v6, array->m_Items[v10++], 0LL);
      if ( (int)v10 < (signed int)array->max_length )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11759/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/, 0LL);
        appended = System_Text_StringBuilder__Append_42408700(v6, v11, 0LL);
      }
      LODWORD(v9) = array->max_length;
      if ( (__int64)v10 >= (int)v9 )
        goto LABEL_14;
    }
LABEL_17:
    sub_B2C434(appended, v8);
  }
LABEL_14:
  if ( !v6 )
    goto LABEL_17;
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_418A993 & 1) == 0 )
  {
    sub_B2C35C(&EventServantFatigueListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_418A993 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (EventServantFatigueListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == EventServantFatigueListViewItem_TypeInfo )
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *RestTime4; // x24
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_o *v31; // x21
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_o *v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_o **v47; // x0
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  int recoveryRate; // w23
  int64_t Time; // x8
  float v52; // s0
  double v53; // d0
  int64_t v54; // x22
  System_String_o *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_o *v62; // x20
  System_String_o *v63; // x0

  if ( (byte_418A99B & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, recoveryFatigueTime);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_11653/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, v12);
    sub_B2C35C(&StringLiteral_11662/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, v13);
    sub_B2C35C(&StringLiteral_11758/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, v14);
    byte_418A99B = 1;
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
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11662/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0LL);
    *beforeTime = v24;
    sub_B2C2F8((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
    if ( isMatch )
    {
      v31 = *beforeTime;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11758/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
      v33 = System_String__Concat_44305532(v31, v32, 0LL);
      *beforeTime = v33;
      sub_B2C2F8((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_11653/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0LL);
    *afterTime = v40;
    v47 = afterTime;
LABEL_40:
    sub_B2C2F8((BattleServantConfConponent_o *)v47, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    return;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    sub_B2C434(IsNullOrEmpty, v17);
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
  sub_B2C2F8((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)RestTime4, v18, v19, v20, v21, v22, v23);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v52 = (float)((float)recoveryRate / 1000.0) * (float)(recoveryFatigueTime - Time);
  if ( v52 == INFINITY )
    v53 = -v52;
  else
    v53 = v52;
  v54 = Time + (__int64)v53;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v55 = LocalizationManager__GetRestTime4(v54, -1LL, 0LL);
  *afterTime = v55;
  sub_B2C2F8((BattleServantConfConponent_o *)afterTime, (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
  if ( isMatch )
  {
    v62 = *beforeTime;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v63 = LocalizationManager__Get((System_String_o *)StringLiteral_11758/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
    v40 = System_String__Concat_44305532(v62, v63, 0LL);
    *beforeTime = v40;
    v47 = beforeTime;
    goto LABEL_40;
  }
}


bool __fastcall EventServantFatigueListViewManager__GetSwapChoiceList(
        EventServantFatigueListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x23
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  _OWORD *monitor; // x9
  __int128 v30; // q0
  const MethodInfo_2F6CFA8 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  __int128 v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-70h]

  if ( (byte_418A9AB & 1) == 0 )
  {
    sub_B2C35C(&EventServantFatigueListViewItem_TypeInfo, choiceList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_418A9AB = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = itemList->fields._items->m_Items[v26];
      if ( !v27 )
        break;
      v28 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (EventServantFatigueListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != EventServantFatigueListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v27[1].monitor;
      if ( monitor && BYTE1(v27[1].fields.sortValue2B) )
      {
        if ( BYTE2(v27[1].fields.sortValue1) )
        {
          v30 = monitor[2];
          *(_OWORD *)&v59.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v59.fields.fakeValue = v30;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
          if ( !v15 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v15;
        }
        else
        {
          v34 = monitor[2];
          *(_OWORD *)&v59.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v59.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
          if ( !v14 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v14;
        }
        System_Collections_Generic_List_long___Add(v33, v32, v31);
      }
      if ( (__int64)++v26 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B2C434(v16, v17);
  }
LABEL_28:
  if ( !v14 || !v15 )
    goto LABEL_33;
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, 0LL, v18, v19, v20, v21, v22, v23);
    *unchoiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v42;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    return 1;
  }
}


bool __fastcall EventServantFatigueListViewManager__GetSwapLockList(
        EventServantFatigueListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x23
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  _OWORD *monitor; // x9
  __int128 v30; // q0
  const MethodInfo_2F6CFA8 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  __int128 v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-70h]

  if ( (byte_418A9AA & 1) == 0 )
  {
    sub_B2C35C(&EventServantFatigueListViewItem_TypeInfo, lockList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_418A9AA = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = itemList->fields._items->m_Items[v26];
      if ( !v27 )
        break;
      v28 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (EventServantFatigueListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != EventServantFatigueListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v27[1].monitor;
      if ( monitor && LOBYTE(v27[1].fields.sortValue2B) )
      {
        if ( BYTE1(v27[1].fields.sortValue1) )
        {
          v30 = monitor[2];
          *(_OWORD *)&v59.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v59.fields.fakeValue = v30;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
          if ( !v15 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v15;
        }
        else
        {
          v34 = monitor[2];
          *(_OWORD *)&v59.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v59.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
          if ( !v14 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v14;
        }
        System_Collections_Generic_List_long___Add(v33, v32, v31);
      }
      if ( (__int64)++v26 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B2C434(v16, v17);
  }
LABEL_28:
  if ( !v14 || !v15 )
    goto LABEL_33;
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, 0LL, v18, v19, v20, v21, v22, v23);
    *unlockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v42;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
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

  if ( (byte_418A987 & 1) == 0 )
  {
    sub_B2C35C(&EventServantFatigueListViewManager_TypeInfo, v1);
    byte_418A987 = 1;
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
    sub_B2C434(0LL, v1);
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
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x20
  struct EventServantRecoveryFatigueItem_o *v10; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  struct System_Int32_array *targetIndividuality; // x24
  __int64 v13; // x8
  unsigned __int64 v14; // x25
  struct EventServantRecoveryFatigueItem_o *v15; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v17; // w20
  ServantEntity_o *v18; // x21
  __int64 v19; // x22
  __int64 v20; // x23
  struct EventServantRecoveryFatigueItem_o *v21; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v22; // x8
  int32_t v23; // w22
  __int64 v25; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_418A998 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A998 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    goto LABEL_26;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (DataManager_o *)targetRecoveryFatigueItem->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
  if ( !v9 )
    goto LABEL_26;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                v9,
                                &entity,
                                (int32_t)Instance,
                                (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  v10 = this->fields.targetRecoveryFatigueItem;
  if ( !v10
    || (eventFatigueRecoveryEnt = v10->fields.eventFatigueRecoveryEnt) == 0LL
    || (targetIndividuality = eventFatigueRecoveryEnt->fields.targetIndividuality) == 0LL )
  {
LABEL_26:
    sub_B2C434(Instance, v7);
  }
  v13 = *(_QWORD *)&targetIndividuality->max_length;
  if ( (int)v13 < 1 )
    return 0;
  v14 = 0LL;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)v13 )
    {
      v25 = sub_B2C460(Instance);
      sub_B2C400(v25, 0LL);
    }
    v15 = this->fields.targetRecoveryFatigueItem;
    if ( !v15 )
      goto LABEL_26;
    userServantEntity = v15->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_26;
    v17 = targetIndividuality->m_Items[v14 + 1];
    v18 = (ServantEntity_o *)entity;
    v20 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v19 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v27.fields.currentCryptoKey = v20;
    *(_QWORD *)&v27.fields.fakeValue = v19;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v27, 0LL);
    v21 = this->fields.targetRecoveryFatigueItem;
    if ( !v21 )
      goto LABEL_26;
    v22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v21->fields.userServantEntity;
    if ( !v22 )
      goto LABEL_26;
    v23 = (int)Instance;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22[8], 0LL);
    if ( !v18 )
      goto LABEL_26;
    Instance = (DataManager_o *)ServantEntity__IsIndividuality(v18, v23, (int32_t)Instance, v17, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return 1;
    LODWORD(v13) = targetIndividuality->max_length;
    if ( (__int64)++v14 >= (int)v13 )
      return 0;
  }
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
  UserServantEntity_o *Entity; // x19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x11
  EventServantFatigueListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v22; // q0
  int64_t v23; // x0
  __int128 v24; // q0
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *viewObject; // x21
  __int64 v27; // x1
  struct ListViewObject_o *v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+60h] [xbp-60h] BYREF

  if ( (byte_418A990 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B2C35C(&EventServantFatigueListViewItem_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_418A990 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_39;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_39;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v31,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v32.fields.current = (Il2CppObject *)v31.fields.fakeValue;
      *(_OWORD *)&v32.fields.list = *(_OWORD *)&v31.fields.currentCryptoKey;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v32,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v17 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v32,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v32.fields.current
          && (v19 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v32.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v19) )
        {
          if ( (EventServantFatigueListViewItem_c *)v32.fields.current->klass->_2.typeHierarchy[v19 - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = (EventServantFatigueListViewItem_o *)v32.fields.current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_B2C434(v17, v18);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_B2C434(v17, v18);
            v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v31.fields.fakeValue = v22;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v30 = v31;
            v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v30, 0LL);
            v24 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
            *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v29.fields.fakeValue = v24;
            if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v29, 0LL) )
              EventServantFatigueListViewItem__ModifyItem(current, Entity, v25);
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
          sub_B2C434(v17, v18);
LABEL_27:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v28 = current->fields.viewObject;
          if ( !v28 )
            sub_B2C434(0LL, v27);
          ((void (__fastcall *)(struct ListViewObject_o *, EventServantFatigueListViewItem_o *, Il2CppMethodPointer))v28->klass->vtable._5_SetItem.method)(
            v28,
            current,
            v28->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_39:
    sub_B2C434(Instance, v14);
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
  __int64 v12; // x23
  int64_t v13; // x20
  signed __int64 size; // x25
  unsigned int v15; // w24
  __int64 v16; // x8
  __int128 v17; // q0
  int64_t v18; // x22
  unsigned __int64 v19; // x28
  struct System_Collections_Generic_List_ListViewItem__o *v20; // x21
  ListViewItem_o *v21; // x21
  __int64 v22; // x10
  _OWORD *monitor; // x8
  __int128 v24; // q0
  _OWORD *v25; // x8
  __int128 v26; // q0
  int64_t v27; // x0
  const MethodInfo *v28; // x4
  __int64 v29; // x0
  bool isIconSizeChangea; // [xsp+Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+70h] [xbp-70h]

  if ( (byte_418A992 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_B2C35C(&EventServantFatigueListViewItem_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418A992 = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_38;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_38;
  sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)sort,
                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_38;
  sort = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_38;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
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
      *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
      *(_OWORD *)&v34.fields.fakeValue = v17;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v33 = v34;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v33, 0LL);
      if ( (int)size >= 1 )
      {
        v18 = sort;
        v19 = 0LL;
        while ( 1 )
        {
          v20 = this->fields.itemList;
          if ( !v20 )
            goto LABEL_38;
          if ( v19 >= (unsigned int)v20->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v21 = v20->fields._items->m_Items[v19];
          if ( !v21 )
            goto LABEL_38;
          v22 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v22
            || (EventServantFatigueListViewItem_c *)v21->klass->_2.typeHierarchy[v22 - 1] != EventServantFatigueListViewItem_TypeInfo )
          {
            goto LABEL_38;
          }
          monitor = v21[1].monitor;
          if ( monitor )
          {
            v24 = monitor[2];
            *(_OWORD *)&v34.fields.currentCryptoKey = monitor[1];
            *(_OWORD *)&v34.fields.fakeValue = v24;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v32 = v34;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v32, 0LL);
            if ( sort == v18 )
              break;
          }
          if ( (__int64)++v19 >= size )
            goto LABEL_34;
        }
        v25 = v21[1].monitor;
        if ( !v25 )
          break;
        v26 = v25[2];
        *(_OWORD *)&v34.fields.currentCryptoKey = v25[1];
        *(_OWORD *)&v34.fields.fakeValue = v26;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v31 = v34;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v31, 0LL);
        EventServantFatigueListViewManager__ModifyLockItem(this, v27, 1, isIconSizeChangea, v28);
      }
LABEL_34:
      if ( (int)++v15 >= (int)v12 )
        return;
      if ( v15 >= *(_DWORD *)(v13 + 24) )
      {
        v29 = sub_B2C460(sort);
        sub_B2C400(v29, 0LL);
      }
    }
LABEL_38:
    sub_B2C434(sort, isIconSizeChange);
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
  UserServantEntity_o *Entity; // x21
  bool v20; // w20
  int64_t v21; // x0
  const MethodInfo *v22; // x1
  __int64 v23; // x11
  Il2CppObject *current; // x22
  _OWORD *monitor; // x8
  __int128 v26; // q0
  int64_t v27; // x0
  __int128 v28; // q0
  int64_t v29; // x24
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  UnityEngine_Object_o *v38; // x23
  __int64 v39; // x1
  void *v40; // x0
  __int64 v41; // x1
  ListViewObject_o *v42; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_418A991 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11);
    sub_B2C35C(&EventServantFatigueListViewItem_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_418A991 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_46;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_46;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v46,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v47.fields.current = (Il2CppObject *)v46.fields.fakeValue;
      *(_OWORD *)&v47.fields.list = *(_OWORD *)&v46.fields.currentCryptoKey;
      v20 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v47,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v21 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v47,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v47.fields.current
          && (v23 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v47.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v23) )
        {
          if ( (EventServantFatigueListViewItem_c *)v47.fields.current->klass->_2.typeHierarchy[v23 - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = v47.fields.current;
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
          sub_B2C434(v21, v22);
        monitor = current[7].monitor;
        if ( !monitor )
          sub_B2C434(v21, v22);
        v26 = monitor[2];
        *(_OWORD *)&v46.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v46.fields.fakeValue = v26;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v45 = v46;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v45, 0LL);
        v28 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
        v29 = v27;
        *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v44.fields.fakeValue = v28;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v44, 0LL);
        if ( v29 == v21 )
        {
          current[7].monitor = Entity;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&current[7].monitor,
            (System_Int32_array **)Entity,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
        }
LABEL_26:
        if ( v20 )
        {
          if ( !current )
            sub_B2C434(v21, v22);
          EventServantFatigueListViewItem__ModifyLockItem((EventServantFatigueListViewItem_o *)current, v22);
          EventServantFatigueListViewItem__ModifyChoiceItem((EventServantFatigueListViewItem_o *)current, v36);
          EventServantFatigueListViewItem__ModifyPushItem((EventServantFatigueListViewItem_o *)current, v37);
        }
        else if ( !current )
        {
          sub_B2C434(v21, v22);
        }
        v38 = (UnityEngine_Object_o *)current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
        {
          v40 = current[6].monitor;
          if ( !v40 )
            sub_B2C434(0LL, v39);
          (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v40 + 392LL))(
            v40,
            current,
            *(_QWORD *)(*(_QWORD *)v40 + 400LL));
          if ( isIconSizeChange )
          {
            v42 = (ListViewObject_o *)current[6].monitor;
            if ( !v42 )
              sub_B2C434(0LL, v41);
            ListViewObject__SetItemSeed(v42, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_46:
    sub_B2C434(Instance, v17);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickBack(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Action_bool__UserServantEntity__o *selectAfterCallback; // x20

  if ( (byte_418A9B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool__UserServantEntity__Invoke__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418A9B1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.selectAfterCallback, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action_bool__UserServantEntity___Invoke(
      selectAfterCallback,
      0,
      0LL,
      (const MethodInfo_24C7E84 *)Method_System_Action_bool__UserServantEntity__Invoke__);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickBonusFilterKind(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_418A9A4 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A9A4 = 1;
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
      sub_B2C434(0LL, v3);
    ListViewSort__IncBonusKind2(sort, this->fields.bonusEventIdList, 0LL, 0LL, 0LL, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickChoiceTab(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_418A9AE & 1) == 0 )
  {
    sub_B2C35C(&Method_EventServantFatigueListViewManager_EndClickTabChoice__, method);
    sub_B2C35C(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418A9AE = 1;
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
      v6 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_B2C42C(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabChoice__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 2, v5);
      EventServantFatigueListViewManager__RefreshListDisp(this, v8);
      EventServantFatigueListViewManager__ModifyList(this, 0, v9);
      EventServantFatigueListViewManager__SetMode_30488568(this, 2, v10);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickCollectLock(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_418A9AD & 1) == 0 )
  {
    sub_B2C35C(&Method_EventServantFatigueListViewManager_EndClickTabLock__, method);
    sub_B2C35C(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418A9AD = 1;
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
      v6 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_B2C42C(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabLock__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 1, v5);
      EventServantFatigueListViewManager__RefreshListDisp(this, v8);
      EventServantFatigueListViewManager__ModifyList(this, 0, v9);
      EventServantFatigueListViewManager__SetMode_30488568(this, 2, v10);
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
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418A9A1 & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_EventServantFatigueListViewManager_EndSelectFilterKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418A9A1 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B2C434(v10, v11);
    CommonUI__OpenServantFilterSelectMenu(v8, 1, sort, v9, -1, 0LL);
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
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_418A9AC & 1) == 0 )
  {
    sub_B2C35C(&Method_EventServantFatigueListViewManager_EndClickTabStatus__, method);
    sub_B2C35C(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418A9AC = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v5 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_B2C42C(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndClickTabStatus__,
      0LL);
    EventServantFatigueListViewManager__StatusRequest(this, v5, v6);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickPushTab(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_418A9AF & 1) == 0 )
  {
    sub_B2C35C(&Method_EventServantFatigueListViewManager_EndClickTabPush__, method);
    sub_B2C35C(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418A9AF = 1;
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
      v6 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_B2C42C(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabPush__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 3, v5);
      EventServantFatigueListViewManager__RefreshListDisp(this, v8);
      EventServantFatigueListViewManager__ModifyList(this, 0, v9);
      EventServantFatigueListViewManager__SetMode_30488568(this, 2, v10);
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

  if ( (byte_418A9B2 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A9B2 = 1;
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
    sub_B2C2F8(
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
    sub_B2C434(ScaleKindSpriteName, v4);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)ScaleKindSpriteName, 0LL);
  EventServantFatigueListViewManager__ModifyList(this, 1, v16);
  EventServantFatigueListViewManager__SetMode_30488568(this, 2, v17);
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
  __int64 v23; // x10
  __int64 v24; // x10
  EventServantFatigueListViewObject_o *v25; // x0
  EventServantFatigueListViewItem_o *Item; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x2
  __int64 v40; // x8
  __int128 v41; // q1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v43; // q0
  int64_t v44; // x23
  const MethodInfo *v45; // x2
  bool IsMatchIndividuality_30474832; // w0
  const MethodInfo *v47; // x5
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct UserServantEntity_o *v55; // x1
  FatigueRecoveryConfirmationDialog_o *v56; // x20
  struct EventServantRecoveryFatigueItem_o *v57; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  System_String_o *v59; // x21
  System_String_o *v60; // x0
  UserServantEntity_o *targetOutUserServantEntity; // x22
  System_String_o *v62; // x23
  System_String_o *outAfterTime; // x27
  System_String_o *v64; // x24
  CommonConfirmDialog_ClickDelegate_o *func; // x25
  bool v66; // w0
  const MethodInfo *v67; // x5
  struct UserServantEntity_o *v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  FatigueRecoveryConfirmationDialog_o *v75; // x20
  struct EventServantRecoveryFatigueItem_o *v76; // x8
  struct EventFatigueRecoveryEntity_o *v77; // x8
  System_String_o *v78; // x21
  System_String_o *v79; // x0
  UserServantEntity_o *v80; // x22
  System_String_o *v81; // x23
  System_String_o *v82; // x24
  System_String_o *v83; // x25
  CommonConfirmDialog_ClickDelegate_o *v84; // x26
  struct EventServantRecoveryFatigueItem_o *v85; // x8
  struct UserServantEntity_o *v86; // x8
  __int128 v87; // q0
  struct UserServantEntity_o *v88; // x8
  __int128 v89; // q0
  const MethodInfo *v90; // x2
  bool v91; // w0
  const MethodInfo *v92; // x5
  struct EventServantRecoveryFatigueItem_o *v93; // x8
  struct UserServantEntity_o *v94; // x8
  UserEventServantFatigueMaster_o *v95; // x23
  int32_t eventId; // w24
  __int64 v97; // x25
  __int64 v98; // x26
  bool FatigueInfo; // w0
  const MethodInfo *v100; // x1
  int64_t v101; // x23
  int64_t v102; // x23
  bool IsMatchIndividuality; // w0
  const MethodInfo *v104; // x5
  struct UserServantEntity_o *v105; // x1
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  struct EventServantRecoveryFatigueItem_o *v118; // x8
  struct UserServantEntity_o *v119; // x1
  struct EventServantRecoveryFatigueItem_o *v120; // x8
  struct EventFatigueRecoveryEntity_o *v121; // x8
  System_String_o *v122; // x21
  System_String_o *v123; // x0
  System_String_o *v124; // x22
  System_String_o *v125; // x23
  UserServantEntity_o *v126; // x24
  UserServantEntity_o *targetInUserServantEntity; // x26
  System_String_o *v128; // x20
  System_String_o *v129; // x25
  System_String_o *v130; // x27
  CommonConfirmDialog_ClickDelegate_o *v131; // x28
  FatigueRecoveryConfirmationDialog_o *v132; // [xsp+18h] [xbp-158h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+20h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+40h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+60h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+80h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+A0h] [xbp-D0h]
  bool isRecover; // [xsp+CCh] [xbp-A4h] BYREF
  int64_t recoverAt; // [xsp+D0h] [xbp-A0h] BYREF
  System_String_o *v140; // [xsp+D8h] [xbp-98h] BYREF
  System_String_o *v141; // [xsp+E0h] [xbp-90h] BYREF
  System_String_o *v142; // [xsp+E8h] [xbp-88h] BYREF
  System_String_o *v143; // [xsp+F0h] [xbp-80h] BYREF
  System_String_o *afterTime; // [xsp+F8h] [xbp-78h] BYREF
  System_String_o *beforeTime; // [xsp+100h] [xbp-70h] BYREF
  System_String_o *v146; // [xsp+108h] [xbp-68h] BYREF
  System_String_o *v147; // [xsp+110h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16

  v3 = obj;
  if ( (byte_418A997 & 1) == 0 )
  {
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, obj);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v7);
    sub_B2C35C(&Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__, v8);
    sub_B2C35C(&EventServantFatigueListViewObject_TypeInfo, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&SoundManager_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_11744/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/, v16);
    sub_B2C35C(&StringLiteral_11736/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/, v17);
    sub_B2C35C(&StringLiteral_11734/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, v18);
    sub_B2C35C(&StringLiteral_11665/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/, v19);
    sub_B2C35C(&StringLiteral_1/*""*/, v20);
    sub_B2C35C(&StringLiteral_11663/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/, v21);
    byte_418A997 = 1;
  }
  v146 = 0LL;
  v147 = 0LL;
  afterTime = 0LL;
  beforeTime = 0LL;
  v142 = 0LL;
  v143 = 0LL;
  v140 = 0LL;
  v141 = 0LL;
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
  v23 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v3->klass->_2.bitflags2 + 1) < (unsigned int)v23
    || (EventServantFatigueListViewObject_c *)v3->klass->_2.typeHierarchy[v23 - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    goto LABEL_72;
  }
  v24 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v3->klass->_2.bitflags2 + 1) >= (unsigned int)v24 )
    v25 = (EventServantFatigueListViewObject_c *)v3->klass->_2.typeHierarchy[v24 - 1] == EventServantFatigueListViewObject_TypeInfo
        ? (EventServantFatigueListViewObject_o *)v3
        : 0LL;
  else
    v25 = 0LL;
  Item = EventServantFatigueListViewObject__GetItem(v25, (const MethodInfo *)obj);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    0LL,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_72;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)fatigueRecoveryConfirmationDialog,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_72;
  fatigueRecoveryConfirmationDialog = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  obj = (ListViewObject_o *)this->fields.targetRecoveryFatigueItem;
  if ( !obj )
    goto LABEL_72;
  v40 = *(_QWORD *)&obj->fields.basePosition.fields.z;
  if ( v40 )
  {
    v41 = *(_OWORD *)(v40 + 32);
    *(_OWORD *)&v137.fields.currentCryptoKey = *(_OWORD *)(v40 + 16);
    *(_OWORD *)&v137.fields.fakeValue = v41;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v136 = v137;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v136, 0LL);
    if ( !Item )
      goto LABEL_72;
    userServantEntity = Item->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_72;
    v43 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    v44 = fatigueRecoveryConfirmationDialog;
    *(_OWORD *)&v135.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v135.fields.fakeValue = v43;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v135, 0LL);
    if ( v44 == fatigueRecoveryConfirmationDialog )
    {
      afterTime = (System_String_o *)StringLiteral_1/*""*/;
      beforeTime = (System_String_o *)StringLiteral_1/*""*/;
      IsMatchIndividuality_30474832 = EventServantFatigueListViewItem__IsMatchIndividuality_30474832(
                                        Item,
                                        this->fields.targetRecoveryFatigueItem,
                                        v45);
      EventServantFatigueListViewManager__GetOutRecoveryTime(
        this,
        Item->fields.fatigueTime,
        &beforeTime,
        &afterTime,
        IsMatchIndividuality_30474832,
        v47);
      targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
      if ( targetRecoveryFatigueItem )
      {
        v55 = targetRecoveryFatigueItem->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v55;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
          (System_Int32_array **)v55,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
        v56 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11744/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/,
                                                       0LL);
        v57 = this->fields.targetRecoveryFatigueItem;
        if ( v57 )
        {
          eventFatigueRecoveryEnt = v57->fields.eventFatigueRecoveryEnt;
          if ( eventFatigueRecoveryEnt )
          {
            v59 = System_String__Format(
                    (System_String_o *)fatigueRecoveryConfirmationDialog,
                    (Il2CppObject *)eventFatigueRecoveryEnt->fields.name,
                    0LL);
            v60 = LocalizationManager__Get((System_String_o *)StringLiteral_11734/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0LL);
            targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
            outAfterTime = afterTime;
            v62 = beforeTime;
            v64 = v60;
            func = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
            CommonConfirmDialog_ClickDelegate___ctor(
              func,
              (Il2CppObject *)this,
              Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
              0LL);
            if ( v56 )
            {
              FatigueRecoveryConfirmationDialog__OpenDecideDlg(
                v56,
                v59,
                v64,
                0LL,
                (System_String_o *)StringLiteral_1/*""*/,
                (System_String_o *)StringLiteral_1/*""*/,
                targetOutUserServantEntity,
                v62,
                outAfterTime,
                func,
                0LL);
              return;
            }
          }
        }
      }
LABEL_72:
      sub_B2C434(fatigueRecoveryConfirmationDialog, obj);
    }
    v85 = this->fields.targetRecoveryFatigueItem;
    if ( !v85 )
      goto LABEL_72;
    v86 = v85->fields.userServantEntity;
    if ( v86 )
    {
      v87 = *(_OWORD *)&v86->fields.id.fields.fakeValue;
      *(_OWORD *)&v137.fields.currentCryptoKey = *(_OWORD *)&v86->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v137.fields.fakeValue = v87;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v134 = v137;
      fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                            &v134,
                                            0LL);
      v88 = Item->fields.userServantEntity;
      if ( !v88 )
        goto LABEL_72;
      v89 = *(_OWORD *)&v88->fields.id.fields.fakeValue;
      *(_OWORD *)&v133.fields.currentCryptoKey = *(_OWORD *)&v88->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v133.fields.fakeValue = v89;
      if ( fatigueRecoveryConfirmationDialog != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                  &v133,
                                                  0LL) )
      {
        v142 = (System_String_o *)StringLiteral_1/*""*/;
        v143 = (System_String_o *)StringLiteral_1/*""*/;
        v91 = EventServantFatigueListViewItem__IsMatchIndividuality_30474832(
                Item,
                this->fields.targetRecoveryFatigueItem,
                v90);
        EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v143, &v142, v91, v92);
        v140 = (System_String_o *)StringLiteral_1/*""*/;
        v141 = (System_String_o *)StringLiteral_1/*""*/;
        fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !fatigueRecoveryConfirmationDialog )
          goto LABEL_72;
        fatigueRecoveryConfirmationDialog = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        v93 = this->fields.targetRecoveryFatigueItem;
        if ( !v93 )
          goto LABEL_72;
        v94 = v93->fields.userServantEntity;
        if ( !v94 )
          goto LABEL_72;
        v95 = (UserEventServantFatigueMaster_o *)fatigueRecoveryConfirmationDialog;
        eventId = this->fields.eventId;
        v98 = *(_QWORD *)&v94->fields.svtId.fields.currentCryptoKey;
        v97 = *(_QWORD *)&v94->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v148.fields.currentCryptoKey = v98;
        *(_QWORD *)&v148.fields.fakeValue = v97;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                              v148,
                                              0LL);
        if ( !v95 )
          goto LABEL_72;
        FatigueInfo = UserEventServantFatigueMaster__GetFatigueInfo(
                        v95,
                        &recoverAt,
                        &isRecover,
                        eventId,
                        fatigueRecoveryConfirmationDialog,
                        0LL);
        v101 = 0LL;
        if ( FatigueInfo )
        {
          v102 = recoverAt;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          if ( v102 <= NetworkManager__getTime(0LL) )
            v101 = 0LL;
          else
            v101 = recoverAt;
        }
        IsMatchIndividuality = EventServantFatigueListViewManager__IsMatchIndividuality(this, v100);
        EventServantFatigueListViewManager__GetOutRecoveryTime(this, v101, &v141, &v140, IsMatchIndividuality, v104);
        v105 = Item->fields.userServantEntity;
        this->fields.targetInUserServantEntity = v105;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
          (System_Int32_array **)v105,
          v106,
          v107,
          v108,
          v109,
          v110,
          v111);
        v118 = this->fields.targetRecoveryFatigueItem;
        if ( !v118 )
          goto LABEL_72;
        v119 = v118->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v119;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
          (System_Int32_array **)v119,
          v112,
          v113,
          v114,
          v115,
          v116,
          v117);
        v132 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11665/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/,
                                                       0LL);
        v120 = this->fields.targetRecoveryFatigueItem;
        if ( !v120 )
          goto LABEL_72;
        v121 = v120->fields.eventFatigueRecoveryEnt;
        if ( !v121 )
          goto LABEL_72;
        v122 = System_String__Format(
                 (System_String_o *)fatigueRecoveryConfirmationDialog,
                 (Il2CppObject *)v121->fields.name,
                 0LL);
        v123 = LocalizationManager__Get((System_String_o *)StringLiteral_11663/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/, 0LL);
        v125 = v142;
        v124 = v143;
        targetInUserServantEntity = this->fields.targetInUserServantEntity;
        v126 = this->fields.targetOutUserServantEntity;
        v128 = v140;
        v129 = v141;
        v130 = v123;
        v131 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v131,
          (Il2CppObject *)this,
          Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
          0LL);
        fatigueRecoveryConfirmationDialog = (int64_t)v132;
        if ( !v132 )
          goto LABEL_72;
        FatigueRecoveryConfirmationDialog__OpenDecideDlg(
          v132,
          v122,
          v130,
          targetInUserServantEntity,
          v124,
          v125,
          v126,
          v129,
          v128,
          v131,
          0LL);
      }
    }
  }
  else
  {
    v146 = (System_String_o *)StringLiteral_1/*""*/;
    v147 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !Item )
      goto LABEL_72;
    v66 = EventServantFatigueListViewItem__IsMatchIndividuality_30474832(
            Item,
            (EventServantRecoveryFatigueItem_o *)obj,
            v39);
    EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v147, &v146, v66, v67);
    v68 = Item->fields.userServantEntity;
    this->fields.targetInUserServantEntity = v68;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
      (System_Int32_array **)v68,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
    v75 = this->fields.fatigueRecoveryConfirmationDialog;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11736/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/, 0LL);
    v76 = this->fields.targetRecoveryFatigueItem;
    if ( !v76 )
      goto LABEL_72;
    v77 = v76->fields.eventFatigueRecoveryEnt;
    if ( !v77 )
      goto LABEL_72;
    v78 = System_String__Format(
            (System_String_o *)fatigueRecoveryConfirmationDialog,
            (Il2CppObject *)v77->fields.name,
            0LL);
    v79 = LocalizationManager__Get((System_String_o *)StringLiteral_11734/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0LL);
    v80 = this->fields.targetInUserServantEntity;
    v82 = v146;
    v81 = v147;
    v83 = v79;
    v84 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v84,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
      0LL);
    if ( !v75 )
      goto LABEL_72;
    FatigueRecoveryConfirmationDialog__OpenDecideDlg(
      v75,
      v78,
      v83,
      v80,
      v81,
      v82,
      0LL,
      (System_String_o *)StringLiteral_1/*""*/,
      (System_String_o *)StringLiteral_1/*""*/,
      v84,
      0LL);
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
  __int64 SelfUserGame; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x9
  System_Int32_array **Item; // x0
  EventServantFatigueListViewItem_o **v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int64_t v43; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v45; // q1
  const MethodInfo *v46; // x2
  UserServantEntity_o *Entity; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v48; // x21
  __int64 v49; // x22
  __int64 v50; // x23
  ServantEntity_o *v51; // x25
  System_String_o *v52; // x21
  System_String_o *v53; // x22
  System_Object_array *v54; // x23
  int32_t Rarity; // w26
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x26
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x26
  int32_t v70; // w0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x24
  int32_t v78; // w0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x24
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x24
  EventServantFatigueListViewItem_o *v93; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v94; // x9
  ServantEntity_o *servantEntity; // x20
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **v102; // x20
  System_String_o *v103; // x20
  System_String_o *v104; // x22
  System_String_o *v105; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v107; // x25
  __int64 v108; // x0
  __int64 v109; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  if ( (byte_418A9B3 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, obj);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B2C35C(&EventServantFatigueListViewObject_TypeInfo, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&object___TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B2C35C(&Rarity_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B2C35C(&SoundManager_TypeInfo, v18);
    sub_B2C35C(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__, v19);
    sub_B2C35C(&EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo, v20);
    sub_B2C35C(&StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v21);
    sub_B2C35C(&StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v22);
    sub_B2C35C(&StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v23);
    sub_B2C35C(&StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v24);
    byte_418A9B3 = 1;
  }
  v25 = sub_B2C42C(EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo);
  EventServantFatigueListViewManager___c__DisplayClass107_0___ctor(
    (EventServantFatigueListViewManager___c__DisplayClass107_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_69;
  *(_QWORD *)(v25 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  if ( !obj )
    goto LABEL_69;
  v34 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v34
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[v34 - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    sub_B2C728(obj);
    goto LABEL_71;
  }
  Item = (System_Int32_array **)EventServantFatigueListViewObject__GetItem(
                                  (EventServantFatigueListViewObject_o *)obj,
                                  (const MethodInfo *)EventServantFatigueListViewObject_TypeInfo);
  *(_QWORD *)(v25 + 24) = Item;
  v36 = (EventServantFatigueListViewItem_o **)(v25 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v25 + 24), Item, v37, v38, v39, v40, v41, v42);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_69;
  v43 = *(_QWORD *)(SelfUserGame + 120);
  if ( v43 )
  {
    if ( !*v36 )
      goto LABEL_69;
    userServantEntity = (*v36)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_69;
    v45 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v111.fields.fakeValue = v45;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v110 = v111;
    if ( v43 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v110, 0LL) )
      goto LABEL_15;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_69;
    SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_69;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
               v43,
               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_69;
    SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_69;
    v48 = (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame;
    v50 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v49 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v112.fields.currentCryptoKey = v50;
    *(_QWORD *)&v112.fields.fakeValue = v49;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v112, 0LL);
    if ( !v48 )
      goto LABEL_69;
    v51 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v48,
                               SelfUserGame,
                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v54 = (System_Object_array *)sub_B2C374(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v54 )
LABEL_69:
      sub_B2C434(SelfUserGame, v27);
    v62 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B2C41C(SelfUserGame, v54->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( !v54->max_length )
      goto LABEL_71;
    v54->m_Items[0] = (Il2CppObject *)v62;
    sub_B2C2F8((BattleServantConfConponent_o *)v54->m_Items, v62, v56, v57, v58, v59, v60, v61);
    if ( !v51 )
      goto LABEL_69;
    SelfUserGame = (__int64)ServantEntity__getClassName(v51, 0LL);
    v69 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B2C41C(SelfUserGame, v54->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v54->max_length <= 1 )
      goto LABEL_71;
    v54->m_Items[1] = (Il2CppObject *)v69;
    sub_B2C2F8((BattleServantConfConponent_o *)&v54->m_Items[1], v69, v63, v64, v65, v66, v67, v68);
    v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(Entity->fields.limitCount, 0LL);
    SelfUserGame = (__int64)ServantEntity__getName(v51, v70, -1, 0LL);
    v77 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B2C41C(SelfUserGame, v54->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v54->max_length <= 2 )
      goto LABEL_71;
    v54->m_Items[2] = (Il2CppObject *)v77;
    sub_B2C2F8((BattleServantConfConponent_o *)&v54->m_Items[2], v77, v71, v72, v73, v74, v75, v76);
    if ( !*v36 )
      goto LABEL_69;
    SelfUserGame = (__int64)(*v36)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_69;
    v78 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
    SelfUserGame = (__int64)Rarity__getRarityType(v78, 0LL);
    v85 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B2C41C(SelfUserGame, v54->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v54->max_length <= 3 )
      goto LABEL_71;
    v54->m_Items[3] = (Il2CppObject *)v85;
    sub_B2C2F8((BattleServantConfConponent_o *)&v54->m_Items[3], v85, v79, v80, v81, v82, v83, v84);
    if ( !*v36 )
      goto LABEL_69;
    SelfUserGame = (__int64)(*v36)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_69;
    SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
    v92 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B2C41C(SelfUserGame, v54->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v54->max_length <= 4 )
      goto LABEL_71;
    v54->m_Items[4] = (Il2CppObject *)v92;
    sub_B2C2F8((BattleServantConfConponent_o *)&v54->m_Items[4], v92, v86, v87, v88, v89, v90, v91);
    v93 = *v36;
    if ( !*v36 )
      goto LABEL_69;
    v94 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v93->fields.userServantEntity;
    if ( !v94 )
      goto LABEL_69;
    servantEntity = v93->fields.servantEntity;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v94[6], 0LL);
    if ( !servantEntity )
      goto LABEL_69;
    SelfUserGame = (__int64)ServantEntity__getName(servantEntity, SelfUserGame, -1, 0LL);
    v102 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B2C41C(SelfUserGame, v54->obj.klass->_1.element_class);
      if ( !SelfUserGame )
      {
LABEL_72:
        v109 = sub_B2C454(SelfUserGame);
        sub_B2C400(v109, 0LL);
      }
    }
    if ( v54->max_length > 5 )
    {
      v54->m_Items[5] = (Il2CppObject *)v102;
      sub_B2C2F8((BattleServantConfConponent_o *)&v54->m_Items[5], v102, v96, v97, v98, v99, v100, v101);
      v103 = System_String__Format_44384256(v53, v54, 0LL);
      v104 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v105 = LocalizationManager__Get((System_String_o *)StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v107 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v107,
        (Il2CppObject *)v25,
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
        CommonUI__OpenConfirmDialog_17971212(
          Instance,
          v52,
          v103,
          v104,
          v105,
          1,
          v107,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_69;
    }
LABEL_71:
    v108 = sub_B2C460(SelfUserGame);
    sub_B2C400(v108, 0LL);
  }
LABEL_15:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  EventServantFatigueListViewManager__PushRequest(this, *v36, v46);
}


void __fastcall EventServantFatigueListViewManager__OnClickSortAscendingOrder(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_418A9A8 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A9A8 = 1;
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
      sub_B2C434(v3, v4);
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
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantSortSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418A9A6 & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_EventServantFatigueListViewManager_EndSelectSortKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418A9A6 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_B2C434(v10, v11);
    CommonUI__OpenServantSortSelectMenu(v8, 7, sort, 0, v9, 0LL);
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
  EventServantFatigueListViewItem_o *Item; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x10
  struct UserServantEntity_o *userServantEntity; // x8
  EventServantFatigueListViewItem_o *v14; // x20
  __int128 v15; // q1
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *v17; // x20
  CommonUI_o *v18; // x21
  ServantStatusDialog_EndDelegate_o *v19; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-40h]

  if ( (byte_418A99E & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_B2C35C(&Method_EventServantFatigueListViewManager_EndShowServant__, v5);
    sub_B2C35C(&EventServantFatigueListViewObject_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&SoundManager_TypeInfo, v9);
    byte_418A99E = 1;
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
    v12 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1);
    if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v12 )
      goto LABEL_18;
    if ( (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[v12 - 1] != EventServantFatigueListViewObject_TypeInfo )
      goto LABEL_18;
    Item = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)obj, v11);
    if ( !Item )
      goto LABEL_18;
    userServantEntity = Item->fields.userServantEntity;
    v14 = Item;
    if ( !userServantEntity )
      goto LABEL_18;
    v15 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v21.fields.fakeValue = v15;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v20 = v21;
    this->fields.statusShowUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v20, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = v14->fields.userServantEntity;
    v18 = (CommonUI_o *)Instance;
    v19 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v19,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndShowServant__,
      0LL);
    if ( !v18 )
LABEL_18:
      sub_B2C434(Item, v11);
    CommonUI__OpenServantStatusDialog_17982092(v18, 0, v17, v19, 0LL);
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

  if ( (byte_418A996 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A996 = 1;
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
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.CallbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  struct UserServantEntity_o *userServantEntity; // x19
  DataManager_o *v16; // x23
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v24; // x8
  int64_t v25; // x0
  __int128 v26; // q0
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v29; // q0
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w27
  int32_t v32; // w28
  int32_t v33; // w21
  bool IsLock; // w23
  char v35; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v39; // w0
  __int64 v40; // x8
  int32_t randomSettingSupport; // w19
  int32_t v42; // [xsp+50h] [xbp-110h]
  int32_t v43; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  __int64 v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_418A9B4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B2C35C(&Method_EventServantFatigueListViewManager_EndPushRequest__, v5);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_418A9B4 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v16 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v16 || !userServantEntity )
    goto LABEL_21;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v16->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v53, 0LL);
  if ( !v17 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  v24 = *(_QWORD *)&v16->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = v24;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v51, 0LL);
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v16->fields.writeMasterDataThread;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_EndPushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v27,
                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v49, 0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v35 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v40 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v39;
  *(_QWORD *)&v54.fields.currentCryptoKey = v40;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v54, 0LL);
  if ( !v30 )
LABEL_21:
    sub_B2C434(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    v43,
    v42,
    v31,
    v32,
    v33,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v45,
    IsLock,
    v35 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != v47,
    0LL);
}


void __fastcall EventServantFatigueListViewManager__RefreshListDisp(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w8
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *v7; // x20
  int v8; // w21
  __int64 v9; // x22
  unsigned int v10; // w8

  if ( (byte_418A98D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__, v3);
    byte_418A98D = 1;
  }
  ObjectList = EventServantFatigueListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_13;
  size = ObjectList->fields._size;
  v7 = ObjectList;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v8 = ObjectList->fields._size;
    if ( v8 >= 1 )
    {
      v9 = 0LL;
      v10 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v10 <= (unsigned int)v9 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        ObjectList = (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v7->fields._items->m_Items[v9];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_EventServantFatigueListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        if ( (int)v9 + 1 >= v8 )
          return;
        v10 = v7->fields._size;
        ++v9;
      }
LABEL_13:
      sub_B2C434(ObjectList, v5);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *ObjectList; // x0
  __int64 v12; // x1
  int32_t size; // w8
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *v14; // x21
  int v15; // w24
  __int64 v16; // x25
  unsigned int v17; // w8
  EventServantFatigueListViewObject_o *v18; // x22
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418A995 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_EventServantFatigueListViewManager_OnMoveEnd__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__, v9);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v10);
    byte_418A995 = 1;
  }
  ObjectList = EventServantFatigueListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v14 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v15 = ObjectList->fields._size;
    if ( v15 >= 1 )
    {
      v16 = 0LL;
      v17 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v17 <= (unsigned int)v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v18 = v14->fields._items->m_Items[v16];
        v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_EventServantFatigueListViewManager_OnMoveEnd__, 0LL);
        if ( !v18 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventServantFatigueListViewObject__Init(
          v18,
          mode,
          v19,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v20);
        if ( (int)v16 + 1 >= v15 )
          return;
        v17 = v14->fields._size;
        ++v16;
      }
LABEL_14:
      sub_B2C434(ObjectList, v12);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__SetFilterButtonImage(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_418A9A5 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, method);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v3);
    byte_418A9A5 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B2C434(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_16992/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_16993/*"btn_filter_on"*/;
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

  if ( (byte_418A98F & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v3);
    sub_B2C35C(&StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v4);
    sub_B2C35C(&StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v5);
    sub_B2C35C(&StringLiteral_11764/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/, v6);
    byte_418A98F = 1;
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
      v8 = &StringLiteral_11764/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/;
      goto LABEL_20;
    case 1:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_20;
    case 2:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_20;
    case 3:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_20:
      v9 = LocalizationManager__Get((System_String_o *)*v8, 0LL);
      if ( !recoveryFatigueInfoMsgLabel )
        sub_B2C434(v9, v10);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.Callback = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.Callback,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventServantFatigueListViewManager__SetMode_30488568(this, mode, v10);
}


void __fastcall EventServantFatigueListViewManager__SetMode_30488568(
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


void __fastcall EventServantFatigueListViewManager__SetMode_30488684(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventServantFatigueListViewManager__SetMode_30488568(this, mode, v10);
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
  if ( (byte_418A994 & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_B2C35C(&EventServantFatigueListViewObject_TypeInfo, obj);
    byte_418A994 = 1;
  }
  if ( !obj
    || (v6 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v19; // x9
  System_String_o **v20; // x10
  System_String_o **v21; // x8
  struct ListViewSort_o *v22; // x8
  System_String_o **v23; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v25; // x20

  if ( (byte_418A9A9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v4);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v5);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v6);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v7);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v8);
    byte_418A9A9 = 1;
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
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v12 )
      goto LABEL_45;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
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
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_45;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_45;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_45;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_45;
      isAscendingOrder = v17->fields.isAscendingOrder;
      v19 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
      v20 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_45;
      v21 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
      v22 = this->fields.sort;
      if ( !v22 )
        goto LABEL_45;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_45;
      isAscendingOrder = v22->fields.isAscendingOrder;
      v19 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
      v20 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v23 = v19;
    else
      v23 = v20;
    UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
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
      v25 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_33951116(
                                 sort,
                                 this->fields.bonusEventIdList,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL);
      if ( v25 )
      {
        UILabel__set_text(v25, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_45:
      sub_B2C434(sort, v10);
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
  System_String_o **v13; // x8
  System_String_o **v14; // x8
  System_String_o **v15; // x8
  System_String_o **v16; // x8
  const MethodInfo *v17; // x1

  if ( (byte_418A98E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17137/*"button_push_reg"*/, *(_QWORD *)&modeKind);
    sub_B2C35C(&StringLiteral_17138/*"button_push_unreg"*/, v5);
    sub_B2C35C(&StringLiteral_17123/*"button_allchoice_reg"*/, v6);
    sub_B2C35C(&StringLiteral_17126/*"button_alllock_unreg"*/, v7);
    sub_B2C35C(&StringLiteral_17139/*"button_select_reg"*/, v8);
    sub_B2C35C(&StringLiteral_17140/*"button_select_unreg"*/, v9);
    sub_B2C35C(&StringLiteral_17125/*"button_alllock_reg"*/, v10);
    sub_B2C35C(&StringLiteral_17124/*"button_allchoice_unreg"*/, v11);
    byte_418A98E = 1;
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
  v13 = (System_String_o **)&StringLiteral_17139/*"button_select_reg"*/;
  if ( modeKind )
    v13 = (System_String_o **)&StringLiteral_17140/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, *v13, 0LL);
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
  v14 = (System_String_o **)&StringLiteral_17125/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v14 = (System_String_o **)&StringLiteral_17126/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, *v14, 0LL);
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
  v15 = (System_String_o **)&StringLiteral_17123/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v15 = (System_String_o **)&StringLiteral_17124/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, *v15, 0LL);
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
  v16 = (System_String_o **)&StringLiteral_17137/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v16 = (System_String_o **)&StringLiteral_17138/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, *v16, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_B2C434(statusTabButton, *(_QWORD *)&modeKind);
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
  if ( (byte_418A9A3 & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, setupInfo);
    byte_418A9A3 = 1;
  }
  if ( !setupInfo )
  {
    sort = v9->fields.sort;
    if ( sort )
    {
      sort->fields.isBonusKind = 0;
      v9->fields.bonusEventIdList = 0LL;
      sub_B2C2F8(
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
  sub_B2C2F8(
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
    sub_B2C434(this, setupInfo);
  }
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v18; // x1
  System_Int64_array *v19; // x2
  System_Int64_array *v20; // x1
  bool v21; // w4
  bool v22; // w5
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  NetworkManager_ResultCallbackFunc_o *v29; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_418A9B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_EventServantFatigueListViewManager_EndStatusSync__, callback);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_418A9B0 = 1;
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v29 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v29,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v29,
                                                                       (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v19 = unchoiceList;
        v20 = choiceList;
        v22 = 1;
        v21 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B2C434(Request_WarBoardWallAttackRequest, v18);
    }
  }
  else if ( modeKind == 1 && EventServantFatigueListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v16 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v16,
                                                                     (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v19 = unlockList;
      v20 = lockList;
      v21 = 1;
      v22 = 0;
LABEL_17:
      CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v20, v19, 0, v21, v22, 0LL);
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
  __int64 v3; // x1
  UnityEngine_Object_o *scrollView; // x20
  int64_t Time; // x0
  const MethodInfo *v6; // x1

  if ( (byte_418A98A & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418A98A = 1;
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
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *ObjectList; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameObject__o *v9; // x8
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A98B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    byte_418A98B = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = EventServantFatigueListViewManager__get_ObjectList(this, method);
  if ( ObjectList )
  {
    v9 = this->fields.objectList;
    if ( !v9 )
      sub_B2C434(ObjectList, v8);
    if ( v9->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v11,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v11,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__) )
      {
        if ( !v11.fields.current )
          sub_B2C434(0LL, v10);
        EventServantFatigueListViewObject__UpdateDisp((EventServantFatigueListViewObject_o *)v11.fields.current, v10);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v11,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__);
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

  if ( (byte_418A982 & 1) == 0 )
  {
    sub_B2C35C(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo, value);
    byte_418A982 = 1;
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
    v8 = sub_B20D74(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418A984 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418A984 = 1;
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
    v8 = sub_B20D74(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  int size; // w22
  unsigned int v13; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x21

  if ( (byte_418A989 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo, v7);
    byte_418A989 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    do
    {
      if ( objectList->fields._size <= v13 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      Component_srcLineSprite = objectList->fields._items->m_Items[v13];
      if ( !Component_srcLineSprite )
        break;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
      if ( !Component_srcLineSprite )
        break;
      v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)EventServantFatigueListViewObject__GetItem(
                                                              (EventServantFatigueListViewObject_o *)Component_srcLineSprite,
                                                              v10);
      if ( !Component_srcLineSprite )
        break;
      v10 = (const MethodInfo *)Component_srcLineSprite;
      if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
        || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_24147020(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)Component_srcLineSprite,
                                                                    0LL),
            ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
      {
        if ( !v8 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          v14,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
      }
      if ( (int)++v13 >= size )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v8;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B2C434(Component_srcLineSprite, v10);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v14; // x23
  UnityEngine_Object_o *v15; // x21

  if ( (byte_418A988 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_418A988 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v15 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v14];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v15 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v15,
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
      }
      if ( (__int64)++v14 >= size )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v9;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B2C434(Component_srcLineSprite, v11);
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

  if ( (byte_418A983 & 1) == 0 )
  {
    sub_B2C35C(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo, value);
    byte_418A983 = 1;
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
    v8 = sub_B20D74(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418A985 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418A985 = 1;
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
    v8 = sub_B20D74(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
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
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = index;
  v13 = kind;
  if ( (byte_4184190 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&EventServantFatigueListViewManager_ResultKind_TypeInfo, v9);
    byte_4184190 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EventServantFatigueListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall EventServantFatigueListViewManager_CallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  EventServantFatigueListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  EventServantFatigueListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&index, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)index, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)index, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, (unsigned int)index, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)index,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)index,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)index, v23);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4184191 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isRequest);
    byte_4184191 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall EventServantFatigueListViewManager_RequestCallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager_RequestCallbackFunc__Invoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  EventServantFatigueListViewManager_RequestCallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (EventServantFatigueListViewManager_RequestCallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isRequest, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
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
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isRequest, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isRequest, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isRequest,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isRequest, v22);
    goto LABEL_37;
  }
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
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_418418F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__, v6);
    byte_418418F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B2C2F8(&this->fields.__9__1, _9__1);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_17971588(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B2C434(Instance, v8);
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
    sub_B2C434(0LL, method);
  EventServantFatigueListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}