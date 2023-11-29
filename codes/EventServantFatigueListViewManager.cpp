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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  ListViewSort_o *v17; // x20
  struct EventServantFatigueListViewManager_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40FD1A4 & 1) == 0 )
  {
    sub_B16FFC(&EventServantFatigueListViewManager_TypeInfo, v1);
    sub_B16FFC(&ListViewSort_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_6175, v9);
    byte_40FD1A4 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventServantFatigueListViewManager_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_6175;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6175;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v17 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v13, v14, v15, v16);
  ListViewSort___ctor_30208480(v17, SORT_SAVE_KEY, 3, 0, 0LL);
  v18 = EventServantFatigueListViewManager_TypeInfo->static_fields;
  v18->servantSortStatus = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v18->servantSortStatus,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  __int64 v5; // x1
  bool v6; // w0
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x8
  System_Action_bool__UserServantEntity__o *v8; // x0
  bool v9; // w1
  UserServantEntity_o *targetInUserServantEntity; // x2

  if ( (byte_40FD18C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__UserServantEntity__Invoke__, result);
    sub_B16FFC(&StringLiteral_20980, v5);
    byte_40FD18C = 1;
  }
  if ( !result )
    goto LABEL_10;
  v6 = System_String__Equals_43731072(result, (System_String_o *)StringLiteral_20980, 0LL);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( !v6 )
  {
    if ( selectAfterCallback )
    {
      targetInUserServantEntity = this->fields.targetInUserServantEntity;
      v9 = 1;
      v8 = this->fields.selectAfterCallback;
      goto LABEL_9;
    }
LABEL_10:
    sub_B170D4();
  }
  if ( !selectAfterCallback )
    goto LABEL_10;
  v8 = this->fields.selectAfterCallback;
  v9 = 0;
  targetInUserServantEntity = 0LL;
LABEL_9:
  System_Action_bool__UserServantEntity___Invoke(
    v8,
    v9,
    targetInUserServantEntity,
    (const MethodInfo_24C3058 *)Method_System_Action_bool__UserServantEntity__Invoke__);
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  NetworkManager_ResultCallbackFunc_o *v14; // x19
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct UserServantEntity_o *targetInUserServantEntity; // x8
  struct UserServantEntity_o *targetOutUserServantEntity; // x9
  ServantRecoverySyncRequest_o *v18; // x19
  int32_t v19; // w21
  struct EventServantRecoveryFatigueItem_o *v20; // x10
  struct EventFatigueRecoveryEntity_o *v21; // x9
  __int128 v22; // q1
  int32_t v23; // w22
  int64_t v24; // x0
  struct UserServantEntity_o *v25; // x8
  __int128 v26; // q0
  int64_t v27; // x20
  int64_t v28; // x0
  int64_t v29; // x4
  ServantRecoverySyncRequest_o *v30; // x0
  int32_t v31; // w1
  int32_t v32; // w2
  int64_t v33; // x3
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  __int128 v36; // q1
  int32_t eventId; // w20
  int32_t idx; // w21
  int64_t v39; // x0
  struct EventFatigueRecoveryEntity_o *v40; // x9
  __int128 v41; // q1
  int32_t v42; // w20
  int64_t v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+60h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+80h] [xbp-40h]

  if ( (byte_40FD18B & 1) == 0 )
  {
    sub_B16FFC(&Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__, isDecide);
    sub_B16FFC(&Method_NetworkManager_getRequest_ServantRecoverySyncRequest___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_40FD18B = 1;
  }
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_35;
  CommonConfirmDialog__Close(fatigueRecoveryConfirmationDialog, 0LL);
  if ( !isDecide )
    return;
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v10,
                                                 v11,
                                                 v12,
                                                 v13);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v14,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_ServantRecoverySyncRequest___);
  targetInUserServantEntity = this->fields.targetInUserServantEntity;
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v18 = (ServantRecoverySyncRequest_o *)Request_WarBoardWallAttackRequest;
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
        v36 = *(_OWORD *)&targetOutUserServantEntity->fields.id.fields.fakeValue;
        eventId = this->fields.eventId;
        idx = eventFatigueRecoveryEnt->fields.idx;
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&targetOutUserServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v48.fields.fakeValue = v36;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v44 = v48;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v44, 0LL);
        if ( v18 )
        {
          v29 = v39;
          v30 = v18;
          v31 = eventId;
          v32 = idx;
          v33 = 0LL;
          goto LABEL_33;
        }
      }
    }
LABEL_35:
    sub_B170D4();
  }
  v19 = this->fields.eventId;
  v20 = this->fields.targetRecoveryFatigueItem;
  if ( !targetOutUserServantEntity )
  {
    if ( v20 )
    {
      v40 = v20->fields.eventFatigueRecoveryEnt;
      if ( v40 )
      {
        v41 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
        v42 = v40->fields.idx;
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v48.fields.fakeValue = v41;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v45 = v48;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v45, 0LL);
        if ( v18 )
        {
          v33 = v43;
          v30 = v18;
          v31 = v19;
          v32 = v42;
          v29 = 0LL;
          goto LABEL_33;
        }
      }
    }
    goto LABEL_35;
  }
  if ( !v20 )
    goto LABEL_35;
  v21 = v20->fields.eventFatigueRecoveryEnt;
  if ( !v21 )
    goto LABEL_35;
  v22 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
  v23 = v21->fields.idx;
  *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v48.fields.fakeValue = v22;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v47 = v48;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v47, 0LL);
  v25 = this->fields.targetOutUserServantEntity;
  if ( !v25 )
    goto LABEL_35;
  v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
  v27 = v24;
  *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v46.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v46, 0LL);
  if ( !v18 )
    goto LABEL_35;
  v29 = v28;
  v30 = v18;
  v31 = v19;
  v32 = v23;
  v33 = v27;
LABEL_33:
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
  int64_t Time; // x0
  TitleInfoControl_o *titleInfo; // x8
  TitleInfoControl_o *v29; // x0
  TitleInfoControl_o *v30; // x0
  TitleInfoControl_o *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  UnityEngine_Object_o *fatigueRecoveryConfirmationDialog; // x24
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  Il2CppObject *fatigueRecoveryConfirmationDialogPrefab; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  Il2CppObject *v68; // x0
  UnityEngine_GameObject_o *v69; // x24
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Transform_o *v71; // x0
  UnityEngine_Transform_o *v72; // x0
  UnityEngine_Transform_o *v73; // x0
  UnityEngine_Transform_o *v74; // x0
  struct FatigueRecoveryConfirmationDialog_o *Component_srcLineSprite; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  UnityEngine_Component_o *v82; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *scaleChangeButtonSprite; // x23
  System_String_o *ScaleKindSpriteName; // x0
  __int64 v89; // x2
  __int64 v90; // x0
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  System_Int32_array *v95; // x23
  EventUpValSetupInfo_o *v96; // x21
  const MethodInfo *v97; // x2
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_array *OrganizationList; // x0
  __int64 v101; // x8
  UserServantEntity_array *v102; // x23
  unsigned __int64 v103; // x28
  signed __int64 v104; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  UserServantEntity_o *v106; // x24
  __int128 v107; // q0
  __int128 v108; // q1
  int64_t v109; // x0
  int32_t v110; // w19
  int64_t v111; // x27
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  EventServantFatigueListViewItem_o *v116; // x25
  const MethodInfo *v117; // x6
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v120; // x0
  const MethodInfo *v121; // x2
  const MethodInfo *v122; // x1
  struct EventServantRecoveryFatigueItem_o **p_targetRecoveryFatigueItem; // [xsp+0h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126[2]; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v127; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v130; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v132; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v133; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_40FD17B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&EventServantFatigueListViewItem_TypeInfo, v11);
    sub_B16FFC(&EventServantFatigueListViewManager_TypeInfo, v12);
    sub_B16FFC(&EventUpValSetupInfo_TypeInfo, v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___, v14);
    sub_B16FFC(&int___TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874920, v19);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&StringLiteral_11842, v23);
    byte_40FD17B = 1;
  }
  memset(&v126[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)servantSortStatus,
    (System_String_array **)targetItem,
    (System_String_array **)afterCallback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !this->fields.sort )
    goto LABEL_65;
  ListViewSort__Load(this->fields.sort, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  titleInfo = this->fields.titleInfo;
  this->fields.updateTime = Time;
  if ( !titleInfo )
    goto LABEL_65;
  TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 79, 0LL);
  v29 = this->fields.titleInfo;
  if ( !v29 )
    goto LABEL_65;
  TitleInfoControl__setBackBtnSprite_19608808(v29, 1, 0, 0, 0LL);
  v30 = this->fields.titleInfo;
  if ( !v30 )
    goto LABEL_65;
  TitleInfoControl__setBackBtnDepth(v30, 45, 0LL);
  v31 = this->fields.titleInfo;
  if ( !v31 )
    goto LABEL_65;
  TitleInfoControl__SetHelpBtn(v31, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v32, v33, v34, v35, v36, v37);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    0LL,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.eventId = eventId;
  this->fields.statusShowUserSvtId = -1LL;
  this->fields.targetRecoveryFatigueItem = targetItem;
  p_targetRecoveryFatigueItem = &this->fields.targetRecoveryFatigueItem;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetRecoveryFatigueItem,
    (System_Int32_array **)targetItem,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.selectAfterCallback = afterCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectAfterCallback,
    (System_Int32_array **)afterCallback,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.modeKind = 0;
  fatigueRecoveryConfirmationDialog = (UnityEngine_Object_o *)this->fields.fatigueRecoveryConfirmationDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(0LL, fatigueRecoveryConfirmationDialog, 0LL) )
  {
    fatigueRecoveryConfirmationDialogPrefab = (Il2CppObject *)this->fields.fatigueRecoveryConfirmationDialogPrefab;
    v127.fields.x = 0.0;
    v127.fields.y = 0.0;
    v127.fields.z = 0.0;
    v132 = UnityEngine_Quaternion__Euler_34841604(v127, 0LL);
    x = v132.fields.x;
    y = v132.fields.y;
    z = v132.fields.z;
    w = v132.fields.w;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v128.fields.x = 0.0;
    v128.fields.y = 0.0;
    v128.fields.z = 0.0;
    v133.fields.x = x;
    v133.fields.y = y;
    v133.fields.z = z;
    v133.fields.w = w;
    v68 = UnityEngine_Object__Instantiate_object_(
            fatigueRecoveryConfirmationDialogPrefab,
            v128,
            v133,
            (const MethodInfo_19DE498 *)Method_UnityEngine_Object_Instantiate_GameObject____66874920);
    if ( !v68 )
      goto LABEL_65;
    v69 = (UnityEngine_GameObject_o *)v68;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v68, 0LL);
    v71 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_65;
    UnityEngine_Transform__set_parent(transform, v71, 0LL);
    v72 = UnityEngine_GameObject__get_transform(v69, 0LL);
    if ( !v72 )
      goto LABEL_65;
    v129.fields.x = 0.0;
    v129.fields.y = 0.0;
    v129.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v72, v129, 0LL);
    v73 = UnityEngine_GameObject__get_transform(v69, 0LL);
    if ( !v73 )
      goto LABEL_65;
    v130.fields.x = 0.0;
    v130.fields.y = 0.0;
    v130.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles(v73, v130, 0LL);
    v74 = UnityEngine_GameObject__get_transform(v69, 0LL);
    if ( !v74 )
      goto LABEL_65;
    v131.fields.x = 1.0;
    v131.fields.y = 1.0;
    v131.fields.z = 1.0;
    UnityEngine_Transform__set_localScale(v74, v131, 0LL);
    Component_srcLineSprite = (struct FatigueRecoveryConfirmationDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              v69,
                                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___);
    this->fields.fatigueRecoveryConfirmationDialog = Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.fatigueRecoveryConfirmationDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
    v82 = (UnityEngine_Component_o *)this->fields.fatigueRecoveryConfirmationDialog;
    if ( !v82 )
      goto LABEL_65;
    gameObject = UnityEngine_Component__get_gameObject(v82, 0LL);
    if ( !gameObject )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
LABEL_37:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_65;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  ScaleKindSpriteName = ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_65;
  UISprite__set_spriteName(scaleChangeButtonSprite, ScaleKindSpriteName, 0LL);
  v90 = sub_B17014(int___TypeInfo, 1LL, v89);
  if ( !v90 )
    goto LABEL_65;
  v95 = (System_Int32_array *)v90;
  if ( !*(_DWORD *)(v90 + 24) )
  {
LABEL_59:
    sub_B17100(v90, v91, v92);
    sub_B170A0();
  }
  *(_DWORD *)(v90 + 32) = eventId;
  v96 = (EventUpValSetupInfo_o *)sub_B170CC(EventUpValSetupInfo_TypeInfo, v91, v92, v93, v94);
  EventUpValSetupInfo___ctor_24610352(v96, v95, 1, 0LL);
  EventServantFatigueListViewManager__SetUpBonusFilterButton(this, v96, v97);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (OrganizationList = UserServantMaster__getOrganizationList(MasterData_WarQuestSelectionMaster, 0LL)) == 0LL )
  {
LABEL_65:
    sub_B170D4();
  }
  v101 = *(_QWORD *)&OrganizationList->max_length;
  v102 = OrganizationList;
  if ( (int)v101 >= 1 )
  {
    v103 = 0LL;
    v104 = (int)v101;
    while ( *p_targetRecoveryFatigueItem )
    {
      userServantEntity = (*p_targetRecoveryFatigueItem)->fields.userServantEntity;
      v106 = v102->m_Items[v103];
      if ( userServantEntity )
      {
        v108 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        v107 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      }
      else
      {
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v126, -1LL, 0LL);
        v108 = *(_OWORD *)&v126[0].fields.currentCryptoKey;
        v107 = *(_OWORD *)&v126[0].fields.fakeValue;
      }
      *(_OWORD *)&v126[1].fields.currentCryptoKey = v108;
      *(_OWORD *)&v126[1].fields.fakeValue = v107;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v125 = v126[1];
      v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v125, 0LL);
      v110 = this->fields.eventId;
      v111 = v109;
      v116 = (EventServantFatigueListViewItem_o *)sub_B170CC(
                                                    EventServantFatigueListViewItem_TypeInfo,
                                                    v112,
                                                    v113,
                                                    v114,
                                                    v115);
      EventServantFatigueListViewItem___ctor(v116, v106, v110, v111, v96, targetItem, v117);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v116,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v103 >= v104 )
        goto LABEL_60;
      if ( v103 >= v102->max_length )
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
  v120 = LocalizationManager__Get((System_String_o *)StringLiteral_11842, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_65;
  UILabel__set_text(emptyMessageLabel, v120, 0LL);
  EventServantFatigueListViewManager__SetStatusKind(this, this->fields.modeKind, v121);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventServantFatigueListViewManager__SetFilterButtonImage(this, v122);
}


void __fastcall EventServantFatigueListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventServantFatigueListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_40FD175 & 1) == 0 )
  {
    sub_B16FFC(&EventServantFatigueListViewManager_TypeInfo, v1);
    byte_40FD175 = 1;
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
    sub_B170D4();
  ListViewSort__DeleteContinueData(servantSortStatus, 0LL);
}


void __fastcall EventServantFatigueListViewManager__DestroyList(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  this->fields.updateTime = -1LL;
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B170D4();
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
  EventServantFatigueListViewManager__SetMode_30771520(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_30771520(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_30771520(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_30771520(this, 2, v5);
}


void __fastcall EventServantFatigueListViewManager__EndPushRequest(
        EventServantFatigueListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventServantFatigueListViewManager__ModifyList(this, 0, method);
  EventServantFatigueListViewManager__SetMode_30771520(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__EndSelectFilterKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_40FD191 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FD191 = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_B170D4();
  CommonUI__CloseServantFilterSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__EndSelectSortKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FD196 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FD196 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40FD18E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FD18E = 1;
  }
  EventServantFatigueListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventServantFatigueListViewManager__ModifyList(this, 0, v4);
  EventServantFatigueListViewManager__SetMode_30771520(this, 2, v5);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
    sub_B16F98(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    EventServantFatigueListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
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

  if ( (byte_40FD18F & 1) == 0 )
  {
    sub_B16FFC(&EventServantFatigueListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_40FD18F = 1;
  }
  itemList = this->fields.itemList;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
      ++v10;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL) == svtId )
        ++v11;
      if ( v10 >= size )
        return v11;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_21:
    sub_B170D4();
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_o *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_o *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  int individualityRate; // w23
  int64_t Time; // x8
  float v40; // s0
  double v41; // d0
  int64_t v42; // x21
  System_String_o *v43; // x20
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_40FD189 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, recoveryFatigueTime);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_11617, v12);
    sub_B16FFC(&StringLiteral_11623, v13);
    sub_B16FFC(&StringLiteral_11708, v14);
    byte_40FD189 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1LL, 0LL);
  if ( System_String__IsNullOrEmpty(RestTime4, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11623, 0LL);
    *beforeTime = v22;
    sub_B16F98((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11617, 0LL);
    goto LABEL_28;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    sub_B170D4();
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
  sub_B16F98((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)RestTime4, v16, v17, v18, v19, v20, v21);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v40 = (float)(recoveryFatigueTime - Time) / (float)((float)individualityRate / 1000.0);
  if ( v40 == INFINITY )
    v41 = -v40;
  else
    v41 = v40;
  v42 = Time + (__int64)v41;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__GetRestTime4(v42, -1LL, 0LL);
LABEL_28:
  *afterTime = v29;
  sub_B16F98((BattleServantConfConponent_o *)afterTime, (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
  if ( isMatch )
  {
    v43 = *afterTime;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11708, 0LL);
    v45 = System_String__Concat_43743732(v43, v44, 0LL);
    *afterTime = v45;
    sub_B16F98((BattleServantConfConponent_o *)afterTime, (System_Int32_array **)v45, v46, v47, v48, v49, v50, v51);
  }
}


System_String_o *__fastcall EventServantFatigueListViewManager__GetIndividualityName(
        EventServantFatigueListViewManager_o *this,
        System_String_array *array,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Text_StringBuilder_o *v8; // x20
  System_Text_StringBuilder_o *appended; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x8
  unsigned __int64 v13; // x21
  System_String_o *v14; // x0

  if ( (byte_40FD188 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, array);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_11709, v7);
    byte_40FD188 = 1;
  }
  v8 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, array, method, v3, v4);
  System_Text_StringBuilder___ctor(v8, 0LL);
  if ( !array )
    goto LABEL_17;
  v12 = *(_QWORD *)&array->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
      {
        sub_B17100(appended, v10, v11);
        sub_B170A0();
      }
      if ( !v8 )
        break;
      appended = System_Text_StringBuilder__Append_41914240(v8, array->m_Items[v13++], 0LL);
      if ( (int)v13 < (signed int)array->max_length )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11709, 0LL);
        appended = System_Text_StringBuilder__Append_41914240(v8, v14, 0LL);
      }
      LODWORD(v12) = array->max_length;
      if ( (__int64)v13 >= (int)v12 )
        goto LABEL_14;
    }
LABEL_17:
    sub_B170D4();
  }
LABEL_14:
  if ( !v8 )
    goto LABEL_17;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                              v8,
                              v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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

  if ( (byte_40FD182 & 1) == 0 )
  {
    sub_B16FFC(&EventServantFatigueListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_40FD182 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_o *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_o *v29; // x21
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_o *v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_o **v45; // x0
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  int recoveryRate; // w23
  int64_t Time; // x8
  float v50; // s0
  double v51; // d0
  int64_t v52; // x22
  System_String_o *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_o *v60; // x20
  System_String_o *v61; // x0

  if ( (byte_40FD18A & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, recoveryFatigueTime);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_11617, v12);
    sub_B16FFC(&StringLiteral_11623, v13);
    sub_B16FFC(&StringLiteral_11708, v14);
    byte_40FD18A = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime4 = LocalizationManager__GetRestTime4(recoveryFatigueTime, -1LL, 0LL);
  if ( System_String__IsNullOrEmpty(RestTime4, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11623, 0LL);
    *beforeTime = v22;
    sub_B16F98((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
    if ( isMatch )
    {
      v29 = *beforeTime;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11708, 0LL);
      v31 = System_String__Concat_43743732(v29, v30, 0LL);
      *beforeTime = v31;
      sub_B16F98((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_11617, 0LL);
    *afterTime = v38;
    v45 = afterTime;
LABEL_40:
    sub_B16F98((BattleServantConfConponent_o *)v45, (System_Int32_array **)v38, v39, v40, v41, v42, v43, v44);
    return;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    sub_B170D4();
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
  sub_B16F98((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)RestTime4, v16, v17, v18, v19, v20, v21);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v50 = (float)((float)recoveryRate / 1000.0) * (float)(recoveryFatigueTime - Time);
  if ( v50 == INFINITY )
    v51 = -v50;
  else
    v51 = v50;
  v52 = Time + (__int64)v51;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v53 = LocalizationManager__GetRestTime4(v52, -1LL, 0LL);
  *afterTime = v53;
  sub_B16F98((BattleServantConfConponent_o *)afterTime, (System_Int32_array **)v53, v54, v55, v56, v57, v58, v59);
  if ( isMatch )
  {
    v60 = *beforeTime;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v61 = LocalizationManager__Get((System_String_o *)StringLiteral_11708, 0LL);
    v38 = System_String__Concat_43743732(v60, v61, 0LL);
    *beforeTime = v38;
    v45 = beforeTime;
    goto LABEL_40;
  }
}


bool __fastcall EventServantFatigueListViewManager__GetSwapChoiceList(
        EventServantFatigueListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v29; // x25
  ListViewItem_o *v30; // x8
  __int64 v31; // x11
  _OWORD *monitor; // x9
  __int128 v33; // q0
  int64_t v34; // x0
  const MethodInfo_2F164A0 *v35; // x2
  int64_t v36; // x1
  System_Collections_Generic_List_long__o *v37; // x0
  __int128 v38; // q0
  int64_t v39; // x0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-70h]

  if ( (byte_40FD19A & 1) == 0 )
  {
    sub_B16FFC(&EventServantFatigueListViewItem_TypeInfo, choiceList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_40FD19A = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = itemList->fields._items->m_Items[v29];
      if ( !v30 )
        break;
      v31 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (EventServantFatigueListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != EventServantFatigueListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v30[1].monitor;
      if ( monitor && BYTE1(v30[1].fields.sortValue2B) )
      {
        if ( BYTE2(v30[1].fields.sortValue1) )
        {
          v33 = monitor[2];
          *(_OWORD *)&v64.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v64.fields.fakeValue = v33;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v63 = v64;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
          if ( !v20 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v34;
          v37 = v20;
        }
        else
        {
          v38 = monitor[2];
          *(_OWORD *)&v64.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v64.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v62 = v64;
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v62, 0LL);
          if ( !v15 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v39;
          v37 = v15;
        }
        System_Collections_Generic_List_long___Add(v37, v36, v35);
      }
      if ( (__int64)++v29 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B170D4();
  }
LABEL_28:
  if ( !v15 || !v20 )
    goto LABEL_33;
  if ( v20->fields._size + v15->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)choiceList, 0LL, v21, v22, v23, v24, v25, v26);
    *unchoiceList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)unchoiceList, 0LL, v55, v56, v57, v58, v59, v60);
    return 0;
  }
  else
  {
    v40 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v40;
    sub_B16F98((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v47;
    sub_B16F98((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    return 1;
  }
}


bool __fastcall EventServantFatigueListViewManager__GetSwapLockList(
        EventServantFatigueListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v29; // x25
  ListViewItem_o *v30; // x8
  __int64 v31; // x11
  _OWORD *monitor; // x9
  __int128 v33; // q0
  int64_t v34; // x0
  const MethodInfo_2F164A0 *v35; // x2
  int64_t v36; // x1
  System_Collections_Generic_List_long__o *v37; // x0
  __int128 v38; // q0
  int64_t v39; // x0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-70h]

  if ( (byte_40FD199 & 1) == 0 )
  {
    sub_B16FFC(&EventServantFatigueListViewItem_TypeInfo, lockList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_40FD199 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = itemList->fields._items->m_Items[v29];
      if ( !v30 )
        break;
      v31 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (EventServantFatigueListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != EventServantFatigueListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v30[1].monitor;
      if ( monitor && LOBYTE(v30[1].fields.sortValue2B) )
      {
        if ( BYTE1(v30[1].fields.sortValue1) )
        {
          v33 = monitor[2];
          *(_OWORD *)&v64.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v64.fields.fakeValue = v33;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v63 = v64;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
          if ( !v20 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v34;
          v37 = v20;
        }
        else
        {
          v38 = monitor[2];
          *(_OWORD *)&v64.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v64.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v62 = v64;
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v62, 0LL);
          if ( !v15 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v39;
          v37 = v15;
        }
        System_Collections_Generic_List_long___Add(v37, v36, v35);
      }
      if ( (__int64)++v29 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B170D4();
  }
LABEL_28:
  if ( !v15 || !v20 )
    goto LABEL_33;
  if ( v20->fields._size + v15->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)lockList, 0LL, v21, v22, v23, v24, v25, v26);
    *unlockList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)unlockList, 0LL, v55, v56, v57, v58, v59, v60);
    return 0;
  }
  else
  {
    v40 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v40;
    sub_B16F98((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v47;
    sub_B16F98((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
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

  if ( (byte_40FD176 & 1) == 0 )
  {
    sub_B16FFC(&EventServantFatigueListViewManager_TypeInfo, v1);
    byte_40FD176 = 1;
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
    sub_B170D4();
  ListViewSort__InitLoad(servantSortStatus, 0LL);
}


bool __fastcall EventServantFatigueListViewManager__IsMatchIndividuality(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x20
  UserServantEntity_o *userServantEntity; // x0
  int32_t SvtId; // w0
  _BOOL8 IsIndividuality; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct EventServantRecoveryFatigueItem_o *v15; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  struct System_Int32_array *targetIndividuality; // x24
  __int64 v18; // x8
  unsigned __int64 v19; // x25
  struct EventServantRecoveryFatigueItem_o *v20; // x8
  struct UserServantEntity_o *v21; // x8
  int32_t v22; // w20
  ServantEntity_o *v23; // x21
  __int64 v24; // x22
  __int64 v25; // x23
  int32_t v26; // w0
  struct EventServantRecoveryFatigueItem_o *v27; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v28; // x8
  int32_t v29; // w22
  int32_t v30; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_40FD187 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FD187 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    goto LABEL_26;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  userServantEntity = targetRecoveryFatigueItem->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_26;
  SvtId = UserServantEntity__getSvtId(userServantEntity, 0LL);
  if ( !v9 )
    goto LABEL_26;
  IsIndividuality = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                      v9,
                      &entity,
                      SvtId,
                      (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( !IsIndividuality )
    return 0;
  v15 = this->fields.targetRecoveryFatigueItem;
  if ( !v15
    || (eventFatigueRecoveryEnt = v15->fields.eventFatigueRecoveryEnt) == 0LL
    || (targetIndividuality = eventFatigueRecoveryEnt->fields.targetIndividuality) == 0LL )
  {
LABEL_26:
    sub_B170D4();
  }
  v18 = *(_QWORD *)&targetIndividuality->max_length;
  if ( (int)v18 < 1 )
    return 0;
  v19 = 0LL;
  while ( 1 )
  {
    if ( v19 >= (unsigned int)v18 )
    {
      sub_B17100(IsIndividuality, v13, v14);
      sub_B170A0();
    }
    v20 = this->fields.targetRecoveryFatigueItem;
    if ( !v20 )
      goto LABEL_26;
    v21 = v20->fields.userServantEntity;
    if ( !v21 )
      goto LABEL_26;
    v22 = targetIndividuality->m_Items[v19 + 1];
    v23 = (ServantEntity_o *)entity;
    v25 = *(_QWORD *)&v21->fields.limitCount.fields.currentCryptoKey;
    v24 = *(_QWORD *)&v21->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v33.fields.currentCryptoKey = v25;
    *(_QWORD *)&v33.fields.fakeValue = v24;
    v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v33, 0LL);
    v27 = this->fields.targetRecoveryFatigueItem;
    if ( !v27 )
      goto LABEL_26;
    v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v27->fields.userServantEntity;
    if ( !v28 )
      goto LABEL_26;
    v29 = v26;
    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v28[8], 0LL);
    if ( !v23 )
      goto LABEL_26;
    IsIndividuality = ServantEntity__IsIndividuality(v23, v29, v30, v22, 0LL);
    if ( IsIndividuality )
      return 1;
    LODWORD(v18) = targetIndividuality->max_length;
    if ( (__int64)++v19 >= (int)v18 )
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v18; // x11
  EventServantFatigueListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v21; // q0
  int64_t v22; // x0
  __int128 v23; // q0
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *viewObject; // x21
  struct ListViewObject_o *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+60h] [xbp-60h] BYREF

  if ( (byte_40FD17F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B16FFC(&EventServantFatigueListViewItem_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FD17F = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_39;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_39;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 usrSvtId,
                 (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v29,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v30.fields.current = (Il2CppObject *)v29.fields.fakeValue;
      *(_OWORD *)&v30.fields.list = *(_OWORD *)&v29.fields.currentCryptoKey;
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v30,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v30,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v30.fields.current
          && (v18 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v30.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v18) )
        {
          if ( (EventServantFatigueListViewItem_c *)v30.fields.current->klass->_2.typeHierarchy[v18 - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = (EventServantFatigueListViewItem_o *)v30.fields.current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_B170D4();
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_B170D4();
            v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v29.fields.fakeValue = v21;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v28 = v29;
            v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v28, 0LL);
            v23 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
            *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v27.fields.fakeValue = v23;
            if ( v22 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v27, 0LL) )
              EventServantFatigueListViewItem__ModifyItem(current, Entity, v24);
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
          sub_B170D4();
LABEL_27:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v26 = current->fields.viewObject;
          if ( !v26 )
            sub_B170D4();
          ((void (__fastcall *)(struct ListViewObject_o *, EventServantFatigueListViewItem_o *, Il2CppMethodPointer))v26->klass->vtable._5_SetItem.method)(
            v26,
            current,
            v26->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_39:
    sub_B170D4();
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
  ListViewSort_o *sort; // x0
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_array *OrganizationList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v15; // x23
  UserServantEntity_array *v16; // x20
  signed __int64 size; // x25
  il2cpp_array_size_t v18; // w24
  UserServantEntity_o *v19; // x8
  __int128 v20; // q0
  int64_t v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t v24; // x22
  unsigned __int64 v25; // x28
  struct System_Collections_Generic_List_ListViewItem__o *v26; // x21
  ListViewItem_o *v27; // x21
  __int64 v28; // x10
  _OWORD *monitor; // x8
  __int128 v30; // q0
  _OWORD *v31; // x8
  __int128 v32; // q0
  int64_t v33; // x0
  const MethodInfo *v34; // x4
  bool isIconSizeChangea; // [xsp+Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+70h] [xbp-70h]

  if ( (byte_40FD181 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_B16FFC(&EventServantFatigueListViewItem_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FD181 = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_38;
  ListViewSort__Load(sort, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  OrganizationList = UserServantMaster__getOrganizationList(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !OrganizationList )
    goto LABEL_38;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  v15 = *(_QWORD *)&OrganizationList->max_length;
  v16 = OrganizationList;
  if ( (int)v15 >= 1 )
  {
    size = itemList->fields._size;
    v18 = 0;
    isIconSizeChangea = isIconSizeChange;
    while ( 1 )
    {
      v19 = v16->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
      *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v39.fields.fakeValue = v20;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v38 = v39;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v38, 0LL);
      if ( (int)size >= 1 )
      {
        v24 = v21;
        v25 = 0LL;
        while ( 1 )
        {
          v26 = this->fields.itemList;
          if ( !v26 )
            goto LABEL_38;
          if ( v25 >= (unsigned int)v26->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v27 = v26->fields._items->m_Items[v25];
          if ( !v27 )
            goto LABEL_38;
          v28 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
            || (EventServantFatigueListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != EventServantFatigueListViewItem_TypeInfo )
          {
            goto LABEL_38;
          }
          monitor = v27[1].monitor;
          if ( monitor )
          {
            v30 = monitor[2];
            *(_OWORD *)&v39.fields.currentCryptoKey = monitor[1];
            *(_OWORD *)&v39.fields.fakeValue = v30;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v37 = v39;
            v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v37, 0LL);
            if ( v21 == v24 )
              break;
          }
          if ( (__int64)++v25 >= size )
            goto LABEL_34;
        }
        v31 = v27[1].monitor;
        if ( !v31 )
          break;
        v32 = v31[2];
        *(_OWORD *)&v39.fields.currentCryptoKey = v31[1];
        *(_OWORD *)&v39.fields.fakeValue = v32;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v36 = v39;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v36, 0LL);
        EventServantFatigueListViewManager__ModifyLockItem(this, v33, 1, isIconSizeChangea, v34);
      }
LABEL_34:
      if ( (int)++v18 >= (int)v15 )
        return;
      if ( v18 >= v16->max_length )
      {
        sub_B17100(v21, v22, v23);
        sub_B170A0();
      }
    }
LABEL_38:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v21; // w20
  const MethodInfo *v22; // x1
  __int64 v23; // x11
  Il2CppObject *current; // x22
  _OWORD *monitor; // x8
  __int128 v26; // q0
  int64_t v27; // x0
  __int128 v28; // q0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  UnityEngine_Object_o *v37; // x23
  void *v38; // x0
  ListViewObject_o *v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_40FD180 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11);
    sub_B16FFC(&EventServantFatigueListViewItem_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FD180 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_46;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_46;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 usrSvtId,
                 (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v43,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v44.fields.current = (Il2CppObject *)v43.fields.fakeValue;
      *(_OWORD *)&v44.fields.list = *(_OWORD *)&v43.fields.currentCryptoKey;
      v21 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v44,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v44,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v44.fields.current
          && (v23 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v44.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v23) )
        {
          if ( (EventServantFatigueListViewItem_c *)v44.fields.current->klass->_2.typeHierarchy[v23 - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = v44.fields.current;
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
          sub_B170D4();
        monitor = current[7].monitor;
        if ( !monitor )
          sub_B170D4();
        v26 = monitor[2];
        *(_OWORD *)&v43.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v43.fields.fakeValue = v26;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v42 = v43;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v42, 0LL);
        v28 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
        *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v41.fields.fakeValue = v28;
        if ( v27 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v41, 0LL) )
        {
          current[7].monitor = Entity;
          sub_B16F98(
            (BattleServantConfConponent_o *)&current[7].monitor,
            (System_Int32_array **)Entity,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
        }
LABEL_26:
        if ( v21 )
        {
          if ( !current )
            sub_B170D4();
          EventServantFatigueListViewItem__ModifyLockItem((EventServantFatigueListViewItem_o *)current, v22);
          EventServantFatigueListViewItem__ModifyChoiceItem((EventServantFatigueListViewItem_o *)current, v35);
          EventServantFatigueListViewItem__ModifyPushItem((EventServantFatigueListViewItem_o *)current, v36);
        }
        else if ( !current )
        {
          sub_B170D4();
        }
        v37 = (UnityEngine_Object_o *)current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
        {
          v38 = current[6].monitor;
          if ( !v38 )
            sub_B170D4();
          (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v38 + 392LL))(
            v38,
            current,
            *(_QWORD *)(*(_QWORD *)v38 + 400LL));
          if ( isIconSizeChange )
          {
            v39 = (ListViewObject_o *)current[6].monitor;
            if ( !v39 )
              sub_B170D4();
            ListViewObject__SetItemSeed(v39, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_46:
    sub_B170D4();
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

  if ( (byte_40FD1A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__UserServantEntity__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FD1A0 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectAfterCallback, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action_bool__UserServantEntity___Invoke(
      selectAfterCallback,
      0,
      0LL,
      (const MethodInfo_24C3058 *)Method_System_Action_bool__UserServantEntity__Invoke__);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickBonusFilterKind(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  if ( (byte_40FD193 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD193 = 1;
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
      sub_B170D4();
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
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_40FD19D & 1) == 0 )
  {
    sub_B16FFC(&Method_EventServantFatigueListViewManager_EndClickTabChoice__, method);
    sub_B16FFC(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FD19D = 1;
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
      v9 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                         EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo,
                                                                         v5,
                                                                         v6,
                                                                         v7,
                                                                         v8);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabChoice__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v9, v10);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 2, v6);
      EventServantFatigueListViewManager__RefreshListDisp(this, v11);
      EventServantFatigueListViewManager__ModifyList(this, 0, v12);
      EventServantFatigueListViewManager__SetMode_30771520(this, 2, v13);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickCollectLock(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_40FD19C & 1) == 0 )
  {
    sub_B16FFC(&Method_EventServantFatigueListViewManager_EndClickTabLock__, method);
    sub_B16FFC(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FD19C = 1;
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
      v9 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                         EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo,
                                                                         v5,
                                                                         v6,
                                                                         v7,
                                                                         v8);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabLock__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v9, v10);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 1, v6);
      EventServantFatigueListViewManager__RefreshListDisp(this, v11);
      EventServantFatigueListViewManager__ModifyList(this, 0, v12);
      EventServantFatigueListViewManager__SetMode_30771520(this, 2, v13);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22

  if ( (byte_40FD190 & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_EventServantFatigueListViewManager_EndSelectFilterKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FD190 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v9,
                                                      v10,
                                                      v11,
                                                      v12);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B170D4();
    CommonUI__OpenServantFilterSelectMenu(v8, 1, sort, v13, -1, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FD19B & 1) == 0 )
  {
    sub_B16FFC(&Method_EventServantFatigueListViewManager_EndClickTabStatus__, method);
    sub_B16FFC(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FD19B = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v9 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                       EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo,
                                                                       v5,
                                                                       v6,
                                                                       v7,
                                                                       v8);
    EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndClickTabStatus__,
      0LL);
    EventServantFatigueListViewManager__StatusRequest(this, v9, v10);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickPushTab(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_40FD19E & 1) == 0 )
  {
    sub_B16FFC(&Method_EventServantFatigueListViewManager_EndClickTabPush__, method);
    sub_B16FFC(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FD19E = 1;
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
      v9 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                         EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo,
                                                                         v5,
                                                                         v6,
                                                                         v7,
                                                                         v8);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabPush__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v9, v10);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 3, v6);
      EventServantFatigueListViewManager__RefreshListDisp(this, v11);
      EventServantFatigueListViewManager__ModifyList(this, 0, v12);
      EventServantFatigueListViewManager__SetMode_30771520(this, 2, v13);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickScaleChange(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v11; // w8
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v13; // x0
  UISprite_o *scaleChangeButtonSprite; // x20
  System_String_o *ScaleKindSpriteName; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_40FD1A1 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD1A1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v11 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v11 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v11 = 1;
LABEL_12:
    this->fields.scaleType = v11;
    this->fields.seed = smallSizeSeed;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType, (v13 = this->fields.sort) == 0LL)
    || (scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        ScaleKindSpriteName = ListViewSort__GetScaleKindSpriteName(v13, this->fields.scaleType, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_B170D4();
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, ScaleKindSpriteName, 0LL);
  EventServantFatigueListViewManager__ModifyList(this, 1, v16);
  EventServantFatigueListViewManager__SetMode_30771520(this, 2, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventServantFatigueListViewManager__OnClickSelectObject(
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
  UnityEngine_Component_o *fatigueRecoveryConfirmationDialog; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v24; // x1
  __int64 v25; // x10
  __int64 v26; // x10
  EventServantFatigueListViewObject_o *v27; // x0
  EventServantFatigueListViewItem_o *Item; // x20
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
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v42; // x0
  const MethodInfo *v43; // x2
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v46; // q1
  int64_t v47; // x0
  struct UserServantEntity_o *v48; // x8
  __int128 v49; // q0
  const MethodInfo *v50; // x2
  bool IsMatchIndividuality_30757784; // w0
  const MethodInfo *v52; // x5
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct EventServantRecoveryFatigueItem_o *v59; // x8
  struct UserServantEntity_o *v60; // x1
  FatigueRecoveryConfirmationDialog_o *v61; // x20
  System_String_o *v62; // x0
  struct EventServantRecoveryFatigueItem_o *v63; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  System_String_o *v65; // x21
  System_String_o *v66; // x0
  UserServantEntity_o *targetOutUserServantEntity; // x22
  System_String_o *v68; // x23
  System_String_o *outAfterTime; // x27
  System_String_o *v70; // x24
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  CommonConfirmDialog_ClickDelegate_o *func; // x25
  bool v76; // w0
  const MethodInfo *v77; // x5
  struct UserServantEntity_o *v78; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  FatigueRecoveryConfirmationDialog_o *v85; // x20
  System_String_o *v86; // x0
  struct EventServantRecoveryFatigueItem_o *v87; // x8
  struct EventFatigueRecoveryEntity_o *v88; // x8
  System_String_o *v89; // x21
  System_String_o *v90; // x0
  UserServantEntity_o *v91; // x22
  System_String_o *v92; // x23
  System_String_o *v93; // x24
  System_String_o *v94; // x25
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  CommonConfirmDialog_ClickDelegate_o *v99; // x26
  struct EventServantRecoveryFatigueItem_o *v100; // x8
  struct UserServantEntity_o *v101; // x8
  __int128 v102; // q0
  int64_t v103; // x0
  struct UserServantEntity_o *v104; // x8
  __int128 v105; // q0
  const MethodInfo *v106; // x2
  bool v107; // w0
  const MethodInfo *v108; // x5
  WebViewManager_o *v109; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventServantRecoveryFatigueItem_o *v111; // x8
  struct UserServantEntity_o *v112; // x8
  UserEventServantFatigueMaster_o *v113; // x23
  int32_t eventId; // w24
  __int64 v115; // x25
  __int64 v116; // x26
  int32_t v117; // w0
  bool FatigueInfo; // w0
  const MethodInfo *v119; // x1
  int64_t v120; // x23
  int64_t v121; // x23
  bool IsMatchIndividuality; // w0
  const MethodInfo *v123; // x5
  struct UserServantEntity_o *v124; // x1
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  struct EventServantRecoveryFatigueItem_o *v137; // x8
  struct UserServantEntity_o *v138; // x1
  System_String_o *v139; // x0
  struct EventServantRecoveryFatigueItem_o *v140; // x8
  struct EventFatigueRecoveryEntity_o *v141; // x8
  System_String_o *v142; // x21
  System_String_o *v143; // x0
  System_String_o *v144; // x22
  System_String_o *v145; // x23
  UserServantEntity_o *v146; // x24
  UserServantEntity_o *targetInUserServantEntity; // x26
  System_String_o *v148; // x20
  System_String_o *v149; // x25
  System_String_o *v150; // x27
  __int64 v151; // x1
  __int64 v152; // x2
  __int64 v153; // x3
  __int64 v154; // x4
  CommonConfirmDialog_ClickDelegate_o *v155; // x28
  FatigueRecoveryConfirmationDialog_o *v156; // [xsp+18h] [xbp-158h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+20h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+40h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+60h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+80h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v161; // [xsp+A0h] [xbp-D0h]
  bool isRecover; // [xsp+CCh] [xbp-A4h] BYREF
  int64_t recoverAt; // [xsp+D0h] [xbp-A0h] BYREF
  System_String_o *v164; // [xsp+D8h] [xbp-98h] BYREF
  System_String_o *v165; // [xsp+E0h] [xbp-90h] BYREF
  System_String_o *v166; // [xsp+E8h] [xbp-88h] BYREF
  System_String_o *v167; // [xsp+F0h] [xbp-80h] BYREF
  System_String_o *afterTime; // [xsp+F8h] [xbp-78h] BYREF
  System_String_o *beforeTime; // [xsp+100h] [xbp-70h] BYREF
  System_String_o *v170; // [xsp+108h] [xbp-68h] BYREF
  System_String_o *v171; // [xsp+110h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v172; // 0:x0.16

  if ( (byte_40FD186 & 1) == 0 )
  {
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, obj);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v7);
    sub_B16FFC(&Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__, v8);
    sub_B16FFC(&EventServantFatigueListViewObject_TypeInfo, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&SoundManager_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_11705, v16);
    sub_B16FFC(&StringLiteral_11697, v17);
    sub_B16FFC(&StringLiteral_11695, v18);
    sub_B16FFC(&StringLiteral_11626, v19);
    sub_B16FFC(&StringLiteral_1, v20);
    sub_B16FFC(&StringLiteral_11624, v21);
    byte_40FD186 = 1;
  }
  v170 = 0LL;
  v171 = 0LL;
  afterTime = 0LL;
  beforeTime = 0LL;
  v166 = 0LL;
  v167 = 0LL;
  v164 = 0LL;
  v165 = 0LL;
  recoverAt = 0LL;
  isRecover = 0;
  fatigueRecoveryConfirmationDialog = (UnityEngine_Component_o *)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_72;
  gameObject = UnityEngine_Component__get_gameObject(fatigueRecoveryConfirmationDialog, 0LL);
  if ( !gameObject )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_72;
  v25 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v25
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[v25 - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    goto LABEL_72;
  }
  v26 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v26 )
    v27 = (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[v26 - 1] == EventServantFatigueListViewObject_TypeInfo
        ? (EventServantFatigueListViewObject_o *)obj
        : 0LL;
  else
    v27 = 0LL;
  Item = EventServantFatigueListViewObject__GetItem(v27, v24);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v29, v30, v31, v32, v33, v34);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v42 )
    goto LABEL_72;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)v42,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    goto LABEL_72;
  userServantEntity = targetRecoveryFatigueItem->fields.userServantEntity;
  if ( userServantEntity )
  {
    v46 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v161.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v161.fields.fakeValue = v46;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v160 = v161;
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v160, 0LL);
    if ( !Item )
      goto LABEL_72;
    v48 = Item->fields.userServantEntity;
    if ( !v48 )
      goto LABEL_72;
    v49 = *(_OWORD *)&v48->fields.id.fields.fakeValue;
    *(_OWORD *)&v159.fields.currentCryptoKey = *(_OWORD *)&v48->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v159.fields.fakeValue = v49;
    if ( v47 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v159, 0LL) )
    {
      afterTime = (System_String_o *)StringLiteral_1;
      beforeTime = (System_String_o *)StringLiteral_1;
      IsMatchIndividuality_30757784 = EventServantFatigueListViewItem__IsMatchIndividuality_30757784(
                                        Item,
                                        this->fields.targetRecoveryFatigueItem,
                                        v50);
      EventServantFatigueListViewManager__GetOutRecoveryTime(
        this,
        Item->fields.fatigueTime,
        &beforeTime,
        &afterTime,
        IsMatchIndividuality_30757784,
        v52);
      v59 = this->fields.targetRecoveryFatigueItem;
      if ( v59 )
      {
        v60 = v59->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v60;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
          (System_Int32_array **)v60,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
        v61 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_11705, 0LL);
        v63 = this->fields.targetRecoveryFatigueItem;
        if ( v63 )
        {
          eventFatigueRecoveryEnt = v63->fields.eventFatigueRecoveryEnt;
          if ( eventFatigueRecoveryEnt )
          {
            v65 = System_String__Format(v62, (Il2CppObject *)eventFatigueRecoveryEnt->fields.name, 0LL);
            v66 = LocalizationManager__Get((System_String_o *)StringLiteral_11695, 0LL);
            targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
            outAfterTime = afterTime;
            v68 = beforeTime;
            v70 = v66;
            func = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                            CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                            v71,
                                                            v72,
                                                            v73,
                                                            v74);
            CommonConfirmDialog_ClickDelegate___ctor(
              func,
              (Il2CppObject *)this,
              Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
              0LL);
            if ( v61 )
            {
              FatigueRecoveryConfirmationDialog__OpenDecideDlg(
                v61,
                v65,
                v70,
                0LL,
                (System_String_o *)StringLiteral_1,
                (System_String_o *)StringLiteral_1,
                targetOutUserServantEntity,
                v68,
                outAfterTime,
                func,
                0LL);
              return;
            }
          }
        }
      }
LABEL_72:
      sub_B170D4();
    }
    v100 = this->fields.targetRecoveryFatigueItem;
    if ( !v100 )
      goto LABEL_72;
    v101 = v100->fields.userServantEntity;
    if ( v101 )
    {
      v102 = *(_OWORD *)&v101->fields.id.fields.fakeValue;
      *(_OWORD *)&v161.fields.currentCryptoKey = *(_OWORD *)&v101->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v161.fields.fakeValue = v102;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v158 = v161;
      v103 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v158, 0LL);
      v104 = Item->fields.userServantEntity;
      if ( !v104 )
        goto LABEL_72;
      v105 = *(_OWORD *)&v104->fields.id.fields.fakeValue;
      *(_OWORD *)&v157.fields.currentCryptoKey = *(_OWORD *)&v104->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v157.fields.fakeValue = v105;
      if ( v103 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v157, 0LL) )
      {
        v166 = (System_String_o *)StringLiteral_1;
        v167 = (System_String_o *)StringLiteral_1;
        v107 = EventServantFatigueListViewItem__IsMatchIndividuality_30757784(
                 Item,
                 this->fields.targetRecoveryFatigueItem,
                 v106);
        EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v167, &v166, v107, v108);
        v164 = (System_String_o *)StringLiteral_1;
        v165 = (System_String_o *)StringLiteral_1;
        v109 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v109 )
          goto LABEL_72;
        MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v109,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        v111 = this->fields.targetRecoveryFatigueItem;
        if ( !v111 )
          goto LABEL_72;
        v112 = v111->fields.userServantEntity;
        if ( !v112 )
          goto LABEL_72;
        v113 = (UserEventServantFatigueMaster_o *)MasterData_WarQuestSelectionMaster;
        eventId = this->fields.eventId;
        v116 = *(_QWORD *)&v112->fields.svtId.fields.currentCryptoKey;
        v115 = *(_QWORD *)&v112->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v172.fields.currentCryptoKey = v116;
        *(_QWORD *)&v172.fields.fakeValue = v115;
        v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v172, 0LL);
        if ( !v113 )
          goto LABEL_72;
        FatigueInfo = UserEventServantFatigueMaster__GetFatigueInfo(v113, &recoverAt, &isRecover, eventId, v117, 0LL);
        v120 = 0LL;
        if ( FatigueInfo )
        {
          v121 = recoverAt;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          if ( v121 <= NetworkManager__getTime(0LL) )
            v120 = 0LL;
          else
            v120 = recoverAt;
        }
        IsMatchIndividuality = EventServantFatigueListViewManager__IsMatchIndividuality(this, v119);
        EventServantFatigueListViewManager__GetOutRecoveryTime(this, v120, &v165, &v164, IsMatchIndividuality, v123);
        v124 = Item->fields.userServantEntity;
        this->fields.targetInUserServantEntity = v124;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
          (System_Int32_array **)v124,
          v125,
          v126,
          v127,
          v128,
          v129,
          v130);
        v137 = this->fields.targetRecoveryFatigueItem;
        if ( !v137 )
          goto LABEL_72;
        v138 = v137->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v138;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
          (System_Int32_array **)v138,
          v131,
          v132,
          v133,
          v134,
          v135,
          v136);
        v156 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v139 = LocalizationManager__Get((System_String_o *)StringLiteral_11626, 0LL);
        v140 = this->fields.targetRecoveryFatigueItem;
        if ( !v140 )
          goto LABEL_72;
        v141 = v140->fields.eventFatigueRecoveryEnt;
        if ( !v141 )
          goto LABEL_72;
        v142 = System_String__Format(v139, (Il2CppObject *)v141->fields.name, 0LL);
        v143 = LocalizationManager__Get((System_String_o *)StringLiteral_11624, 0LL);
        v145 = v166;
        v144 = v167;
        targetInUserServantEntity = this->fields.targetInUserServantEntity;
        v146 = this->fields.targetOutUserServantEntity;
        v148 = v164;
        v149 = v165;
        v150 = v143;
        v155 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                        CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                        v151,
                                                        v152,
                                                        v153,
                                                        v154);
        CommonConfirmDialog_ClickDelegate___ctor(
          v155,
          (Il2CppObject *)this,
          Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
          0LL);
        if ( !v156 )
          goto LABEL_72;
        FatigueRecoveryConfirmationDialog__OpenDecideDlg(
          v156,
          v142,
          v150,
          targetInUserServantEntity,
          v144,
          v145,
          v146,
          v149,
          v148,
          v155,
          0LL);
      }
    }
  }
  else
  {
    v170 = (System_String_o *)StringLiteral_1;
    v171 = (System_String_o *)StringLiteral_1;
    if ( !Item )
      goto LABEL_72;
    v76 = EventServantFatigueListViewItem__IsMatchIndividuality_30757784(Item, targetRecoveryFatigueItem, v43);
    EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v171, &v170, v76, v77);
    v78 = Item->fields.userServantEntity;
    this->fields.targetInUserServantEntity = v78;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
      (System_Int32_array **)v78,
      v79,
      v80,
      v81,
      v82,
      v83,
      v84);
    v85 = this->fields.fatigueRecoveryConfirmationDialog;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v86 = LocalizationManager__Get((System_String_o *)StringLiteral_11697, 0LL);
    v87 = this->fields.targetRecoveryFatigueItem;
    if ( !v87 )
      goto LABEL_72;
    v88 = v87->fields.eventFatigueRecoveryEnt;
    if ( !v88 )
      goto LABEL_72;
    v89 = System_String__Format(v86, (Il2CppObject *)v88->fields.name, 0LL);
    v90 = LocalizationManager__Get((System_String_o *)StringLiteral_11695, 0LL);
    v91 = this->fields.targetInUserServantEntity;
    v93 = v170;
    v92 = v171;
    v94 = v90;
    v99 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                   CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                   v95,
                                                   v96,
                                                   v97,
                                                   v98);
    CommonConfirmDialog_ClickDelegate___ctor(
      v99,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
      0LL);
    if ( !v85 )
      goto LABEL_72;
    FatigueRecoveryConfirmationDialog__OpenDecideDlg(
      v85,
      v89,
      v94,
      v91,
      v92,
      v93,
      0LL,
      (System_String_o *)StringLiteral_1,
      (System_String_o *)StringLiteral_1,
      v99,
      0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickSelectPush(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x19
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
  UserGameEntity_o *SelfUserGame; // x0
  int64_t pushUserSvtId; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v46; // q1
  const MethodInfo *v47; // x2
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x24
  WebViewManager_o *v51; // x0
  WarQuestSelectionMaster_o *v52; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v53; // x21
  __int64 v54; // x22
  __int64 v55; // x23
  int32_t v56; // w0
  ServantEntity_o *v57; // x25
  System_String_o *v58; // x21
  System_String_o *v59; // x22
  __int64 v60; // x2
  System_Object_array *v61; // x23
  int32_t Rarity; // w26
  System_String_o *RarityType; // x0
  __int64 v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x26
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x26
  int32_t v78; // w0
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x24
  UserServantEntity_o *v85; // x0
  int32_t v86; // w0
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x24
  ServantEntity_o *servantEntity; // x0
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x24
  EventServantFatigueListViewItem_o *v100; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v101; // x9
  ServantEntity_o *v102; // x20
  int32_t v103; // w0
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **v109; // x20
  System_String_o *v110; // x20
  System_String_o *v111; // x22
  System_String_o *v112; // x23
  CommonUI_o *v113; // x24
  __int64 v114; // x1
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x4
  CommonConfirmDialog_ClickDelegate_o *v118; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16

  if ( (byte_40FD1A2 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, obj);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B16FFC(&EventServantFatigueListViewObject_TypeInfo, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&object___TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B16FFC(&Rarity_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_B16FFC(&SoundManager_TypeInfo, v20);
    sub_B16FFC(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__, v21);
    sub_B16FFC(&EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_11946, v23);
    sub_B16FFC(&StringLiteral_11944, v24);
    sub_B16FFC(&StringLiteral_11945, v25);
    sub_B16FFC(&StringLiteral_11947, v26);
    byte_40FD1A2 = 1;
  }
  v27 = sub_B170CC(EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo, obj, method, v3, v4);
  EventServantFatigueListViewManager___c__DisplayClass107_0___ctor(
    (EventServantFatigueListViewManager___c__DisplayClass107_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_69;
  *(_QWORD *)(v27 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  if ( !obj )
    goto LABEL_69;
  v34 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v34
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[v34 - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    sub_B173C8(obj);
    goto LABEL_71;
  }
  Item = (System_Int32_array **)EventServantFatigueListViewObject__GetItem(
                                  (EventServantFatigueListViewObject_o *)obj,
                                  (const MethodInfo *)EventServantFatigueListViewObject_TypeInfo);
  *(_QWORD *)(v27 + 24) = Item;
  v36 = (EventServantFatigueListViewItem_o **)(v27 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 24), Item, v37, v38, v39, v40, v41, v42);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_69;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  if ( pushUserSvtId )
  {
    if ( !*v36 )
      goto LABEL_69;
    userServantEntity = (*v36)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_69;
    v46 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v120.fields.fakeValue = v46;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v119 = v120;
    if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v119, 0LL) )
      goto LABEL_15;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_69;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_69;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               pushUserSvtId,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v51 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v51 )
      goto LABEL_69;
    v52 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v51,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_69;
    v53 = (DataMasterBase_WarMaster__WarEntity__int__o *)v52;
    v55 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v54 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v121.fields.currentCryptoKey = v55;
    *(_QWORD *)&v121.fields.fakeValue = v54;
    v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v121, 0LL);
    if ( !v53 )
      goto LABEL_69;
    v57 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v53,
                               v56,
                               (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_11947, 0LL);
    v59 = LocalizationManager__Get((System_String_o *)StringLiteral_11946, 0LL);
    v61 = (System_Object_array *)sub_B17014(object___TypeInfo, 6LL, v60);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    RarityType = Rarity__getRarityType(Rarity, 0LL);
    if ( !v61 )
LABEL_69:
      sub_B170D4();
    v71 = (System_Int32_array **)RarityType;
    if ( RarityType )
    {
      RarityType = (System_String_o *)sub_B170BC(RarityType, v61->obj.klass->_1.element_class);
      if ( !RarityType )
        goto LABEL_72;
    }
    if ( !v61->max_length )
      goto LABEL_71;
    v61->m_Items[0] = (Il2CppObject *)v71;
    sub_B16F98((BattleServantConfConponent_o *)v61->m_Items, v71, v65, v66, v67, v68, v69, v70);
    if ( !v57 )
      goto LABEL_69;
    RarityType = ServantEntity__getClassName(v57, 0LL);
    v77 = (System_Int32_array **)RarityType;
    if ( RarityType )
    {
      RarityType = (System_String_o *)sub_B170BC(RarityType, v61->obj.klass->_1.element_class);
      if ( !RarityType )
        goto LABEL_72;
    }
    if ( v61->max_length <= 1 )
      goto LABEL_71;
    v61->m_Items[1] = (Il2CppObject *)v77;
    sub_B16F98((BattleServantConfConponent_o *)&v61->m_Items[1], v77, v65, v72, v73, v74, v75, v76);
    v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.limitCount, 0LL);
    RarityType = ServantEntity__getName(v57, v78, -1, 0LL);
    v84 = (System_Int32_array **)RarityType;
    if ( RarityType )
    {
      RarityType = (System_String_o *)sub_B170BC(RarityType, v61->obj.klass->_1.element_class);
      if ( !RarityType )
        goto LABEL_72;
    }
    if ( v61->max_length <= 2 )
      goto LABEL_71;
    v61->m_Items[2] = (Il2CppObject *)v84;
    sub_B16F98((BattleServantConfConponent_o *)&v61->m_Items[2], v84, v65, v79, v80, v81, v82, v83);
    if ( !*v36 )
      goto LABEL_69;
    v85 = (*v36)->fields.userServantEntity;
    if ( !v85 )
      goto LABEL_69;
    v86 = UserServantEntity__getRarity(v85, 0LL);
    RarityType = Rarity__getRarityType(v86, 0LL);
    v92 = (System_Int32_array **)RarityType;
    if ( RarityType )
    {
      RarityType = (System_String_o *)sub_B170BC(RarityType, v61->obj.klass->_1.element_class);
      if ( !RarityType )
        goto LABEL_72;
    }
    if ( v61->max_length <= 3 )
      goto LABEL_71;
    v61->m_Items[3] = (Il2CppObject *)v92;
    sub_B16F98((BattleServantConfConponent_o *)&v61->m_Items[3], v92, v65, v87, v88, v89, v90, v91);
    if ( !*v36 )
      goto LABEL_69;
    servantEntity = (*v36)->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_69;
    RarityType = ServantEntity__getClassName(servantEntity, 0LL);
    v99 = (System_Int32_array **)RarityType;
    if ( RarityType )
    {
      RarityType = (System_String_o *)sub_B170BC(RarityType, v61->obj.klass->_1.element_class);
      if ( !RarityType )
        goto LABEL_72;
    }
    if ( v61->max_length <= 4 )
      goto LABEL_71;
    v61->m_Items[4] = (Il2CppObject *)v99;
    sub_B16F98((BattleServantConfConponent_o *)&v61->m_Items[4], v99, v65, v94, v95, v96, v97, v98);
    v100 = *v36;
    if ( !*v36 )
      goto LABEL_69;
    v101 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v100->fields.userServantEntity;
    if ( !v101 )
      goto LABEL_69;
    v102 = v100->fields.servantEntity;
    v103 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v101[6], 0LL);
    if ( !v102 )
      goto LABEL_69;
    RarityType = ServantEntity__getName(v102, v103, -1, 0LL);
    v109 = (System_Int32_array **)RarityType;
    if ( RarityType )
    {
      RarityType = (System_String_o *)sub_B170BC(RarityType, v61->obj.klass->_1.element_class);
      if ( !RarityType )
      {
LABEL_72:
        sub_B170F4(RarityType);
        sub_B170A0();
      }
    }
    if ( v61->max_length > 5 )
    {
      v61->m_Items[5] = (Il2CppObject *)v109;
      sub_B16F98((BattleServantConfConponent_o *)&v61->m_Items[5], v109, v65, v104, v105, v106, v107, v108);
      v110 = System_String__Format_43822456(v59, v61, 0LL);
      v111 = LocalizationManager__Get((System_String_o *)StringLiteral_11945, 0LL);
      v112 = LocalizationManager__Get((System_String_o *)StringLiteral_11944, 0LL);
      v113 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v118 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                      CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                      v114,
                                                      v115,
                                                      v116,
                                                      v117);
      CommonConfirmDialog_ClickDelegate___ctor(
        v118,
        (Il2CppObject *)v27,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__,
        0LL);
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( v113 )
      {
        CommonUI__OpenConfirmDialog_18237448(
          v113,
          v58,
          v110,
          v111,
          v112,
          1,
          v118,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_69;
    }
LABEL_71:
    sub_B17100(RarityType, v64, v65);
    sub_B170A0();
  }
LABEL_15:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  EventServantFatigueListViewManager__PushRequest(this, *v36, v47);
}


void __fastcall EventServantFatigueListViewManager__OnClickSortAscendingOrder(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  if ( (byte_40FD197 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD197 = 1;
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
      sub_B170D4();
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  ServantSortSelectMenu_CallbackFunc_o *v13; // x22

  if ( (byte_40FD195 & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_EventServantFatigueListViewManager_EndSelectSortKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FD195 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v13 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v9,
                                                    v10,
                                                    v11,
                                                    v12);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_B170D4();
    CommonUI__OpenServantSortSelectMenu(v8, 7, sort, 0, v13, 0LL);
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
  const MethodInfo *v10; // x1
  __int64 v11; // x10
  EventServantFatigueListViewItem_o *Item; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  EventServantFatigueListViewItem_o *v14; // x20
  __int128 v15; // q1
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *v17; // x20
  CommonUI_o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  ServantStatusDialog_EndDelegate_o *v23; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-40h]

  if ( (byte_40FD18D & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_B16FFC(&Method_EventServantFatigueListViewManager_EndShowServant__, v5);
    sub_B16FFC(&EventServantFatigueListViewObject_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    byte_40FD18D = 1;
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
    v11 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1);
    if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
      goto LABEL_18;
    if ( (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[v11 - 1] != EventServantFatigueListViewObject_TypeInfo )
      goto LABEL_18;
    Item = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)obj, v10);
    if ( !Item )
      goto LABEL_18;
    userServantEntity = Item->fields.userServantEntity;
    v14 = Item;
    if ( !userServantEntity )
      goto LABEL_18;
    v15 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v25.fields.fakeValue = v15;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v24 = v25;
    this->fields.statusShowUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v24, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = v14->fields.userServantEntity;
    v18 = (CommonUI_o *)Instance;
    v23 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v19, v20, v21, v22);
    ServantStatusDialog_EndDelegate___ctor(
      v23,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndShowServant__,
      0LL);
    if ( !v18 )
LABEL_18:
      sub_B170D4();
    CommonUI__OpenServantStatusDialog_18248328(v18, 0, v17, v23, 0LL);
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
  struct UIScrollView_o *v7; // x0
  System_Action_o *CallbackFunc2; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FD185 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD185 = 1;
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
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_B170D4();
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
          v7,
          1LL,
          v7->klass->vtable._9_SetDragAmount.methodPtr);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.CallbackFunc2, 0LL, v9, v10, v11, v12, v13, v14);
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
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *userServantEntity; // x19
  UserGameEntity_o *v15; // x23
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantCollectionMaster_o *v18; // x21
  int64_t userId; // x22
  __int64 v20; // x24
  __int64 v21; // x25
  int32_t v22; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  CommonUI_o *v24; // x0
  __int128 v25; // q1
  UserServantEntity_Fields *p_fields; // x24
  int64_t pushUserSvtId; // x8
  int64_t v28; // x0
  __int128 v29; // q0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  NetworkManager_ResultCallbackFunc_o *v34; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v36; // q0
  CardFavoriteRequest_o *v37; // x20
  int32_t v38; // w27
  int32_t v39; // w28
  int32_t v40; // w21
  bool IsLock; // w23
  bool IsChoice; // w0
  bool v43; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v47; // w0
  __int64 v48; // x8
  int32_t randomSettingSupport; // w19
  int32_t limitCountSupport; // w0
  int32_t v51; // [xsp+50h] [xbp-110h]
  int32_t v52; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v54; // [xsp+60h] [xbp-100h]
  int64_t favoriteUserSvtId; // [xsp+68h] [xbp-F8h]
  int64_t v56; // [xsp+70h] [xbp-F0h]
  int64_t v57; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_40FD1A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B16FFC(&Method_EventServantFatigueListViewManager_EndPushRequest__, v5);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_40FD1A3 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v15 = SelfUserGame;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userServantEntity )
    goto LABEL_21;
  v18 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  userId = v15->fields.userId;
  v21 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v62.fields.currentCryptoKey = v21;
  *(_QWORD *)&v62.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v62, 0LL);
  if ( !v18 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v18, userId, v22, 0LL);
  v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v24 )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag(v24, 0, 0LL);
  v25 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  pushUserSvtId = v15->fields.pushUserSvtId;
  *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v61.fields.fakeValue = v25;
  v57 = pushUserSvtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v60 = v61;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v60, 0LL);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  favoriteUserSvtId = v15->fields.favoriteUserSvtId;
  v56 = v28;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v29;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v59, 0LL);
  v34 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v30,
                                                 v31,
                                                 v32,
                                                 v33);
  NetworkManager_ResultCallbackFunc___ctor(
    v34,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_EndPushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v34,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v36 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v37 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v58.fields.fakeValue = v36;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v58, 0LL);
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  IsChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v43 = IsChoice;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v48 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v63.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v47;
  *(_QWORD *)&v63.fields.currentCryptoKey = v48;
  limitCountSupport = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v63, 0LL);
  if ( !v37 )
LABEL_21:
    sub_B170D4();
  CardFavoriteRequest__beginRequest(
    v37,
    targetUsrSVtId,
    v52,
    v51,
    v38,
    v39,
    v40,
    favoriteUserSvtId == v54,
    IsLock,
    v43,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    limitCountSupport,
    v57 != v56,
    0LL);
}


void __fastcall EventServantFatigueListViewManager__RefreshListDisp(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *ObjectList; // x0
  int32_t size; // w8
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *v6; // x20
  int v7; // w21
  __int64 v8; // x22
  unsigned int v9; // w8
  EventServantFatigueListViewObject_o *v10; // x0

  if ( (byte_40FD17C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__, v3);
    byte_40FD17C = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v10 = v6->fields._items->m_Items[v8];
        if ( !v10 )
          break;
        ((void (__fastcall *)(EventServantFatigueListViewObject_o *, bool, Il2CppMethodPointer))v10->klass->vtable._9_SetInput.method)(
          v10,
          this->fields.isInput,
          v10->klass->vtable._10_Invalidation.methodPtr);
        if ( (int)v8 + 1 >= v7 )
          return;
        v9 = v6->fields._size;
        ++v8;
      }
LABEL_13:
      sub_B170D4();
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  int32_t size; // w8
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *v17; // x21
  int v18; // w24
  __int64 v19; // x25
  unsigned int v20; // w8
  EventServantFatigueListViewObject_o *v21; // x22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FD184 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_EventServantFatigueListViewManager_OnMoveEnd__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__, v9);
    sub_B16FFC(&StringLiteral_10004, v10);
    byte_40FD184 = 1;
  }
  ObjectList = EventServantFatigueListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v17 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v18 = ObjectList->fields._size;
    if ( v18 >= 1 )
    {
      v19 = 0LL;
      v20 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v20 <= (unsigned int)v19 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v21 = v17->fields._items->m_Items[v19];
        v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
        System_Action___ctor(v22, (Il2CppObject *)this, Method_EventServantFatigueListViewManager_OnMoveEnd__, 0LL);
        if ( !v21 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventServantFatigueListViewObject__Init(
          v21,
          mode,
          v22,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v23);
        if ( (int)v19 + 1 >= v18 )
          return;
        v20 = v17->fields._size;
        ++v19;
      }
LABEL_14:
      sub_B170D4();
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
  bool v6; // w0
  System_String_o **v7; // x8

  if ( (byte_40FD194 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16927, method);
    sub_B16FFC(&StringLiteral_16926, v3);
    byte_40FD194 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite, v6 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !filterSprite) )
  {
    sub_B170D4();
  }
  v7 = (System_String_o **)&StringLiteral_16926;
  if ( !v6 )
    v7 = (System_String_o **)&StringLiteral_16927;
  UISprite__set_spriteName(filterSprite, *v7, 0LL);
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

  if ( (byte_40FD17E & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_11701, v3);
    sub_B16FFC(&StringLiteral_11699, v4);
    sub_B16FFC(&StringLiteral_11700, v5);
    sub_B16FFC(&StringLiteral_11714, v6);
    byte_40FD17E = 1;
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
      v8 = &StringLiteral_11714;
      goto LABEL_20;
    case 1:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11700;
      goto LABEL_20;
    case 2:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11699;
      goto LABEL_20;
    case 3:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11701;
LABEL_20:
      v9 = LocalizationManager__Get((System_String_o *)*v8, 0LL);
      if ( !recoveryFatigueInfoMsgLabel )
        sub_B170D4();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.Callback,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventServantFatigueListViewManager__SetMode_30771520(this, mode, v10);
}


void __fastcall EventServantFatigueListViewManager__SetMode_30771520(
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


void __fastcall EventServantFatigueListViewManager__SetMode_30771636(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventServantFatigueListViewManager__SetMode_30771520(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__SetObjectItem(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  if ( (byte_40FD183 & 1) == 0 )
  {
    sub_B16FFC(&EventServantFatigueListViewObject_TypeInfo, obj);
    byte_40FD183 = 1;
  }
  if ( !obj
    || (v6 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
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
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  System_String_o *SortKindButtonText; // x0
  ListViewSort_o *v13; // x0
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v15; // x8
  int32_t sortKind; // w9
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v18; // x8
  struct ListViewSort_o *v19; // x8
  UISprite_o *v20; // x0
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v22; // x9
  System_String_o **v23; // x10
  UISprite_o *v24; // x0
  System_String_o **v25; // x8
  struct ListViewSort_o *v26; // x8
  System_String_o **v27; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  struct ListViewSort_o *v29; // x0
  UILabel_o *v30; // x20
  System_String_o *BonusKind2Text_30244736; // x0

  if ( (byte_40FD198 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955, v3);
    sub_B16FFC(&StringLiteral_17038, v4);
    sub_B16FFC(&StringLiteral_16995, v5);
    sub_B16FFC(&StringLiteral_16985, v6);
    sub_B16FFC(&StringLiteral_17002, v7);
    sub_B16FFC(&StringLiteral_16952, v8);
    byte_40FD198 = 1;
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
    v11 = this->fields.sortKindLabel;
    SortKindButtonText = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_45;
    UILabel__set_text(v11, SortKindButtonText, 0LL);
    v13 = this->fields.sort;
    if ( !v13 )
      goto LABEL_45;
    ListViewSort__SetupSortLabelLayout(v13, this->fields.sortKindLabel, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL) )
  {
    v15 = this->fields.sort;
    if ( !v15 )
      goto LABEL_45;
    sortKind = v15->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sortExplanationSprite = this->fields.sortExplanationSprite;
      if ( !sortExplanationSprite )
        goto LABEL_45;
      v18 = (System_String_o **)(v15->fields.isAscendingOrder ? &StringLiteral_17002 : &StringLiteral_16995);
      UISprite__set_spriteName(sortExplanationSprite, *v18, 0LL);
      v19 = this->fields.sort;
      if ( !v19 )
        goto LABEL_45;
      v20 = this->fields.sortOrderSprite;
      if ( !v20 )
        goto LABEL_45;
      isAscendingOrder = v19->fields.isAscendingOrder;
      v22 = (System_String_o **)&StringLiteral_16952;
      v23 = (System_String_o **)&StringLiteral_16955;
    }
    else
    {
      v24 = this->fields.sortExplanationSprite;
      if ( !v24 )
        goto LABEL_45;
      v25 = (System_String_o **)(v15->fields.isAscendingOrder ? &StringLiteral_17038 : &StringLiteral_16985);
      UISprite__set_spriteName(v24, *v25, 0LL);
      v26 = this->fields.sort;
      if ( !v26 )
        goto LABEL_45;
      v20 = this->fields.sortOrderSprite;
      if ( !v20 )
        goto LABEL_45;
      isAscendingOrder = v26->fields.isAscendingOrder;
      v22 = (System_String_o **)&StringLiteral_16955;
      v23 = (System_String_o **)&StringLiteral_16952;
    }
    if ( isAscendingOrder )
      v27 = v22;
    else
      v27 = v23;
    UISprite__set_spriteName(v20, *v27, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    v29 = this->fields.sort;
    if ( !v29 )
      goto LABEL_45;
    if ( v29->fields.isBonusKind )
    {
      v30 = this->fields.bonusFilterKindLabel;
      BonusKind2Text_30244736 = ListViewSort__GetBonusKind2Text_30244736(
                                  v29,
                                  this->fields.bonusEventIdList,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL);
      if ( v30 )
      {
        UILabel__set_text(v30, BonusKind2Text_30244736, 0LL);
        return;
      }
LABEL_45:
      sub_B170D4();
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
  struct UICommonButton_o *statusTabButton; // x0
  UnityEngine_Behaviour_o *v13; // x0
  UISprite_o *statusTabSprite; // x0
  System_String_o **v15; // x8
  struct UICommonButton_o *v16; // x0
  struct UICommonButton_o *lockTabButton; // x0
  UnityEngine_Behaviour_o *v18; // x0
  UISprite_o *lockTabSprite; // x0
  System_String_o **v20; // x8
  struct UICommonButton_o *v21; // x0
  struct UICommonButton_o *choiceTabButton; // x0
  UnityEngine_Behaviour_o *v23; // x0
  UISprite_o *choiceSprite; // x0
  System_String_o **v25; // x8
  struct UICommonButton_o *v26; // x0
  struct UICommonButton_o *pushTabButton; // x0
  UnityEngine_Behaviour_o *v28; // x0
  UISprite_o *pushSprite; // x0
  System_String_o **v30; // x8
  struct UICommonButton_o *v31; // x0
  const MethodInfo *v32; // x1

  if ( (byte_40FD17D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17071, *(_QWORD *)&modeKind);
    sub_B16FFC(&StringLiteral_17072, v5);
    sub_B16FFC(&StringLiteral_17057, v6);
    sub_B16FFC(&StringLiteral_17060, v7);
    sub_B16FFC(&StringLiteral_17073, v8);
    sub_B16FFC(&StringLiteral_17074, v9);
    sub_B16FFC(&StringLiteral_17059, v10);
    sub_B16FFC(&StringLiteral_17058, v11);
    byte_40FD17D = 1;
  }
  statusTabButton = this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))statusTabButton->klass->vtable._5_set_isEnabled.method)(
    statusTabButton,
    1LL,
    statusTabButton->klass->vtable._6_OnInit.methodPtr);
  v13 = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !v13 )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(v13, modeKind != 0, 0LL);
  statusTabSprite = this->fields.statusTabSprite;
  if ( !statusTabSprite )
    goto LABEL_28;
  v15 = (System_String_o **)&StringLiteral_17073;
  if ( modeKind )
    v15 = (System_String_o **)&StringLiteral_17074;
  UISprite__set_spriteName(statusTabSprite, *v15, 0LL);
  v16 = this->fields.statusTabButton;
  if ( !v16 )
    goto LABEL_28;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v16->klass->vtable._14_SetState.method)(
    v16,
    0LL,
    0LL,
    v16->klass->vtable._15_OnPress.methodPtr);
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))lockTabButton->klass->vtable._5_set_isEnabled.method)(
    lockTabButton,
    1LL,
    lockTabButton->klass->vtable._6_OnInit.methodPtr);
  v18 = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !v18 )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(v18, modeKind != 1, 0LL);
  lockTabSprite = this->fields.lockTabSprite;
  if ( !lockTabSprite )
    goto LABEL_28;
  v20 = (System_String_o **)&StringLiteral_17059;
  if ( modeKind != 1 )
    v20 = (System_String_o **)&StringLiteral_17060;
  UISprite__set_spriteName(lockTabSprite, *v20, 0LL);
  v21 = this->fields.lockTabButton;
  if ( !v21 )
    goto LABEL_28;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v21->klass->vtable._14_SetState.method)(
    v21,
    0LL,
    0LL,
    v21->klass->vtable._15_OnPress.methodPtr);
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))choiceTabButton->klass->vtable._5_set_isEnabled.method)(
    choiceTabButton,
    1LL,
    choiceTabButton->klass->vtable._6_OnInit.methodPtr);
  v23 = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !v23 )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(v23, modeKind != 2, 0LL);
  choiceSprite = this->fields.choiceSprite;
  if ( !choiceSprite )
    goto LABEL_28;
  v25 = (System_String_o **)&StringLiteral_17057;
  if ( modeKind != 2 )
    v25 = (System_String_o **)&StringLiteral_17058;
  UISprite__set_spriteName(choiceSprite, *v25, 0LL);
  v26 = this->fields.choiceTabButton;
  if ( !v26 )
    goto LABEL_28;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v26->klass->vtable._14_SetState.method)(
    v26,
    0LL,
    0LL,
    v26->klass->vtable._15_OnPress.methodPtr);
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))pushTabButton->klass->vtable._5_set_isEnabled.method)(
    pushTabButton,
    1LL,
    pushTabButton->klass->vtable._6_OnInit.methodPtr);
  v28 = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !v28 )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(v28, modeKind != 3, 0LL);
  pushSprite = this->fields.pushSprite;
  if ( !pushSprite )
    goto LABEL_28;
  v30 = (System_String_o **)&StringLiteral_17071;
  if ( modeKind != 3 )
    v30 = (System_String_o **)&StringLiteral_17072;
  UISprite__set_spriteName(pushSprite, *v30, 0LL);
  v31 = this->fields.pushTabButton;
  if ( !v31 )
LABEL_28:
    sub_B170D4();
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v31->klass->vtable._14_SetState.method)(
    v31,
    0LL,
    0LL,
    v31->klass->vtable._15_OnPress.methodPtr);
  EventServantFatigueListViewManager__SetHeaderMsg(this, v32);
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
  struct System_Int32_array *servantFilterEventIdList; // x8
  struct ListViewSort_o *v11; // x9
  struct System_Int32_array *v12; // x1
  UnityEngine_Object_o *bonusFilterKindButton; // x21
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct ListViewSort_o *v16; // x8
  struct ListViewSort_o *v17; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_40FD192 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, setupInfo);
    byte_40FD192 = 1;
  }
  if ( !setupInfo )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isBonusKind = 0;
      this->fields.bonusEventIdList = 0LL;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
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
  v11 = this->fields.sort;
  if ( !v11 )
    goto LABEL_20;
  v11->fields.isBonusKind = (char)servantFilterEventIdList;
  v12 = setupInfo->fields.servantFilterEventIdList;
  this->fields.bonusEventIdList = v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
    (System_Int32_array **)v12,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  bonusFilterKindButton = (UnityEngine_Object_o *)this->fields.bonusFilterKindButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(bonusFilterKindButton, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
    if ( v14 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
      v16 = this->fields.sort;
      if ( v16 )
      {
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, v16->fields.isBonusKind, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            if ( v17->fields.isBonusKind )
              ListViewSort__AlignBonusKind2(v17, this->fields.bonusEventIdList, 0LL, 0LL, 0LL, 0LL, 0LL);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_B170D4();
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Int64_array *v22; // x2
  System_Int64_array *v23; // x1
  bool v24; // w4
  bool v25; // w5
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  NetworkManager_ResultCallbackFunc_o *v36; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_40FD19F & 1) == 0 )
  {
    sub_B16FFC(&Method_EventServantFatigueListViewManager_EndStatusSync__, callback);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_40FD19F = 1;
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
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      v36 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v32,
                                                     v33,
                                                     v34,
                                                     v35);
      NetworkManager_ResultCallbackFunc___ctor(
        v36,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v36,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v22 = unchoiceList;
        v23 = choiceList;
        v25 = 1;
        v24 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B170D4();
    }
  }
  else if ( modeKind == 1 && EventServantFatigueListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v20 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   v16,
                                                   v17,
                                                   v18,
                                                   v19);
    NetworkManager_ResultCallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v20,
                                                                     (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v22 = unlockList;
      v23 = lockList;
      v24 = 1;
      v25 = 0;
LABEL_17:
      CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v23, v22, 0, v24, v25, 0LL);
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

  if ( (byte_40FD179 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FD179 = 1;
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
  struct System_Collections_Generic_List_GameObject__o *v8; // x8
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD17A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    byte_40FD17A = 1;
  }
  memset(&v10, 0, sizeof(v10));
  ObjectList = EventServantFatigueListViewManager__get_ObjectList(this, method);
  if ( ObjectList )
  {
    v8 = this->fields.objectList;
    if ( !v8 )
      sub_B170D4();
    if ( v8->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v10,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v10,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__) )
      {
        if ( !v10.fields.current )
          sub_B170D4();
        EventServantFatigueListViewObject__UpdateDisp((EventServantFatigueListViewObject_o *)v10.fields.current, v9);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v10,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__);
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

  if ( (byte_40FD171 & 1) == 0 )
  {
    sub_B16FFC(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FD171 = 1;
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
    v8 = sub_B0BA14(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FD173 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FD173 = 1;
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
    v8 = sub_B0BA14(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  EventServantFatigueListViewManager__remove_CallbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_EventServantFatigueListViewObject__o *__fastcall EventServantFatigueListViewManager__get_ClippingObjectList(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  int size; // w22
  unsigned int v14; // w23
  UnityEngine_GameObject_o *v15; // x0
  EventServantFatigueListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0

  if ( (byte_40FD178 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo, v10);
    byte_40FD178 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v14 = 0;
    do
    {
      if ( objectList->fields._size <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v15 = objectList->fields._items->m_Items[v14];
      if ( !v15 )
        break;
      Component_srcLineSprite = (EventServantFatigueListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         v15,
                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
      if ( !Component_srcLineSprite )
        break;
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Item = (ListViewItem_o *)EventServantFatigueListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        break;
      if ( !Item->fields.isTermination || ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
      {
        if ( !v11 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v18,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
      }
      if ( (int)++v14 >= size )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v11;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v11;
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v15; // x23
  UnityEngine_GameObject_o *v16; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0

  if ( (byte_40FD177 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FD177 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v16 = objectList->fields._items->m_Items[v15];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
      {
        if ( !v16 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           v16,
                                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
        if ( !v12 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          Component_srcLineSprite,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
      }
      if ( (__int64)++v15 >= size )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v12;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v12;
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

  if ( (byte_40FD172 & 1) == 0 )
  {
    sub_B16FFC(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FD172 = 1;
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
    v8 = sub_B0BA14(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FD174 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FD174 = 1;
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
    v8 = sub_B0BA14(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  EventServantFatigueListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager_CallbackFunc___ctor(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F705F & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&EventServantFatigueListViewManager_ResultKind_TypeInfo, v9);
    byte_40F705F = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EventServantFatigueListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall EventServantFatigueListViewManager_CallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&index);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v10);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7060 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isRequest);
    byte_40F7060 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall EventServantFatigueListViewManager_RequestCallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isRequest, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  CommonUI_o *v12; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F705E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__, v6);
    byte_40F705E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__9__1,
        (System_Int32_array **)_9__1,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    if ( v12 )
    {
      CommonUI__CloseConfirmDialog_18237824(v12, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B170D4();
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
    sub_B170D4();
  EventServantFatigueListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}