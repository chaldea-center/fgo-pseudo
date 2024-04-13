void __fastcall EventServantFatigueListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v17; // x20
  struct EventServantFatigueListViewManager_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42EC079 & 1) == 0 )
  {
    sub_B5D5C4(&EventServantFatigueListViewManager_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&ListViewSort_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_6272/*"EventServantFatigueList"*/, v11, v12, v13);
    byte_42EC079 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventServantFatigueListViewManager_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_6272/*"EventServantFatigueList"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6272/*"EventServantFatigueList"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = EventServantFatigueListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v17 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v17, SORT_SAVE_KEY, 3, 0, 0LL);
  v18 = EventServantFatigueListViewManager_TypeInfo->static_fields;
  v18->servantSortStatus = v17;
  sub_B5D560(
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
  __int64 v3; // x3
  EventServantFatigueListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x8
  System_Action_bool__UserServantEntity__o *v10; // x0
  bool v11; // w1
  UserServantEntity_o *targetInUserServantEntity; // x2

  v5 = this;
  if ( (byte_42EC061 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool__UserServantEntity__Invoke__, (_DWORD)result, (_DWORD)method, v3);
    this = (EventServantFatigueListViewManager_o *)sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v6, v7, v8);
    byte_42EC061 = 1;
  }
  if ( !result )
    goto LABEL_10;
  this = (EventServantFatigueListViewManager_o *)System_String__Equals_44565128(
                                                   result,
                                                   (System_String_o *)StringLiteral_21345/*"ng"*/,
                                                   0LL);
  selectAfterCallback = v5->fields.selectAfterCallback;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( selectAfterCallback )
    {
      targetInUserServantEntity = v5->fields.targetInUserServantEntity;
      v11 = 1;
      v10 = v5->fields.selectAfterCallback;
      goto LABEL_9;
    }
LABEL_10:
    sub_B5D69C(this, result);
  }
  if ( !selectAfterCallback )
    goto LABEL_10;
  v10 = v5->fields.selectAfterCallback;
  v11 = 0;
  targetInUserServantEntity = 0LL;
LABEL_9:
  System_Action_bool__UserServantEntity___Invoke(
    v10,
    v11,
    targetInUserServantEntity,
    (const MethodInfo_25976CC *)Method_System_Action_bool__UserServantEntity__Invoke__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__CloseRecovertFatigueDialog(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  CommonConfirmDialog_o *fatigueRecoveryConfirmationDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v19; // x19
  struct UserServantEntity_o *targetInUserServantEntity; // x8
  struct UserServantEntity_o *targetOutUserServantEntity; // x9
  CommonConfirmDialog_o *v22; // x19
  int32_t v23; // w21
  struct EventServantRecoveryFatigueItem_o *v24; // x10
  struct EventFatigueRecoveryEntity_o *v25; // x9
  __int128 v26; // q1
  int32_t v27; // w22
  struct UserServantEntity_o *v28; // x8
  __int128 v29; // q0
  CommonConfirmDialog_o *v30; // x20
  int64_t v31; // x4
  ServantRecoverySyncRequest_o *v32; // x0
  int32_t v33; // w1
  int32_t v34; // w2
  int64_t v35; // x3
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  __int128 v38; // q1
  int32_t eventId; // w20
  int32_t idx; // w21
  struct EventFatigueRecoveryEntity_o *v41; // x9
  __int128 v42; // q1
  int32_t v43; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+60h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+80h] [xbp-40h]

  if ( (byte_42EC060 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_ServantRecoverySyncRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v15, v16, v17);
    byte_42EC060 = 1;
  }
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)this->fields.fatigueRecoveryConfirmationDialog;
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_35;
  CommonConfirmDialog__Close(fatigueRecoveryConfirmationDialog, 0LL);
  if ( !isDecide )
    return;
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_CallbackRecoverySyncRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v19,
                                                                 (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_ServantRecoverySyncRequest___);
  targetInUserServantEntity = this->fields.targetInUserServantEntity;
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v22 = fatigueRecoveryConfirmationDialog;
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
        v38 = *(_OWORD *)&targetOutUserServantEntity->fields.id.fields.fakeValue;
        eventId = this->fields.eventId;
        idx = eventFatigueRecoveryEnt->fields.idx;
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&targetOutUserServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v48.fields.fakeValue = v38;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v44 = v48;
        fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                                       &v44,
                                                                       0LL);
        if ( v22 )
        {
          v31 = (int64_t)fatigueRecoveryConfirmationDialog;
          v32 = (ServantRecoverySyncRequest_o *)v22;
          v33 = eventId;
          v34 = idx;
          v35 = 0LL;
          goto LABEL_33;
        }
      }
    }
LABEL_35:
    sub_B5D69C(fatigueRecoveryConfirmationDialog, isDecide);
  }
  v23 = this->fields.eventId;
  v24 = this->fields.targetRecoveryFatigueItem;
  if ( !targetOutUserServantEntity )
  {
    if ( v24 )
    {
      v41 = v24->fields.eventFatigueRecoveryEnt;
      if ( v41 )
      {
        v42 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
        v43 = v41->fields.idx;
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v48.fields.fakeValue = v42;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v45 = v48;
        fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                                       &v45,
                                                                       0LL);
        if ( v22 )
        {
          v35 = (int64_t)fatigueRecoveryConfirmationDialog;
          v32 = (ServantRecoverySyncRequest_o *)v22;
          v33 = v23;
          v34 = v43;
          v31 = 0LL;
          goto LABEL_33;
        }
      }
    }
    goto LABEL_35;
  }
  if ( !v24 )
    goto LABEL_35;
  v25 = v24->fields.eventFatigueRecoveryEnt;
  if ( !v25 )
    goto LABEL_35;
  v26 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
  v27 = v25->fields.idx;
  *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v48.fields.fakeValue = v26;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v47 = v48;
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                                 &v47,
                                                                 0LL);
  v28 = this->fields.targetOutUserServantEntity;
  if ( !v28 )
    goto LABEL_35;
  v29 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
  v30 = fatigueRecoveryConfirmationDialog;
  *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v46.fields.fakeValue = v29;
  fatigueRecoveryConfirmationDialog = (CommonConfirmDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                                 &v46,
                                                                 0LL);
  if ( !v22 )
    goto LABEL_35;
  v31 = (int64_t)fatigueRecoveryConfirmationDialog;
  v32 = (ServantRecoverySyncRequest_o *)v22;
  v33 = v23;
  v34 = v27;
  v35 = (int64_t)v30;
LABEL_33:
  ServantRecoverySyncRequest__beginRequest(v32, v33, v34, v35, v31, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  EventServantFatigueListViewManager_c *v50; // x0
  struct ListViewSort_o *servantSortStatus; // x1
  struct ListViewSort_o **p_sort; // x23
  __int64 v53; // x1
  __int64 sort; // x0
  TitleInfoControl_o *titleInfo; // x8
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  UnityEngine_Object_o *fatigueRecoveryConfirmationDialog; // x24
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  Il2CppObject *fatigueRecoveryConfirmationDialogPrefab; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_GameObject_o *v92; // x24
  UnityEngine_Transform_o *transform; // x25
  struct FatigueRecoveryConfirmationDialog_o *Component_srcLineSprite; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  System_Int32_array *v104; // x23
  EventUpValSetupInfo_o *v105; // x21
  const MethodInfo *v106; // x2
  __int64 v107; // x8
  __int64 v108; // x23
  unsigned __int64 v109; // x28
  signed __int64 v110; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  UserServantEntity_o *v112; // x24
  __int128 v113; // q0
  __int128 v114; // q1
  int64_t v115; // x0
  int32_t v116; // w19
  int64_t v117; // x27
  EventServantFatigueListViewItem_o *v118; // x25
  const MethodInfo *v119; // x6
  __int64 v120; // x0
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v122; // x2
  const MethodInfo *v123; // x1
  struct EventServantRecoveryFatigueItem_o **p_targetRecoveryFatigueItem; // [xsp+0h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127[2]; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v130; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v133; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v134; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42EC050 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, eventId, (_DWORD)targetItem, afterCallback);
    sub_B5D5C4(&EventServantFatigueListViewItem_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&EventServantFatigueListViewManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&EventUpValSetupInfo_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___, v20, v21, v22);
    sub_B5D5C4(&int___TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v26, v27, v28);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&NetworkManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882840, v35, v36, v37);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v47, v48, v49);
    byte_42EC050 = 1;
  }
  memset(&v127[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v50 = EventServantFatigueListViewManager_TypeInfo;
  if ( (BYTE3(EventServantFatigueListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v50 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v50->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  p_sort = &this->fields.sort;
  sub_B5D560(
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
  TitleInfoControl__setBackBtnSprite_18313300((TitleInfoControl_o *)sort, 1, 0, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_65;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_65;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v56, v57, v58, v59, v60, v61);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    0LL,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields.eventId = eventId;
  this->fields.statusShowUserSvtId = -1LL;
  this->fields.targetRecoveryFatigueItem = targetItem;
  p_targetRecoveryFatigueItem = &this->fields.targetRecoveryFatigueItem;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetRecoveryFatigueItem,
    (System_Int32_array **)targetItem,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  this->fields.selectAfterCallback = afterCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectAfterCallback,
    (System_Int32_array **)afterCallback,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
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
    v128.fields.x = 0.0;
    v128.fields.y = 0.0;
    v128.fields.z = 0.0;
    v133 = UnityEngine_Quaternion__Euler_35652376(v128, 0LL);
    x = v133.fields.x;
    y = v133.fields.y;
    z = v133.fields.z;
    w = v133.fields.w;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v129.fields.x = 0.0;
    v129.fields.y = 0.0;
    v129.fields.z = 0.0;
    v134.fields.x = x;
    v134.fields.y = y;
    v134.fields.z = z;
    v134.fields.w = w;
    sort = (__int64)UnityEngine_Object__Instantiate_object_(
                      fatigueRecoveryConfirmationDialogPrefab,
                      v129,
                      v134,
                      (const MethodInfo_1E66564 *)Method_UnityEngine_Object_Instantiate_GameObject____68882840);
    if ( !sort )
      goto LABEL_65;
    v92 = (UnityEngine_GameObject_o *)sort;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)sort, 0LL);
    sort = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_65;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)sort, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v92, 0LL);
    if ( !sort )
      goto LABEL_65;
    v130.fields.x = 0.0;
    v130.fields.y = 0.0;
    v130.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)sort, v130, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v92, 0LL);
    if ( !sort )
      goto LABEL_65;
    v131.fields.x = 0.0;
    v131.fields.y = 0.0;
    v131.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)sort, v131, 0LL);
    sort = (__int64)UnityEngine_GameObject__get_transform(v92, 0LL);
    if ( !sort )
      goto LABEL_65;
    v132.fields.x = 1.0;
    v132.fields.y = 1.0;
    v132.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)sort, v132, 0LL);
    Component_srcLineSprite = (struct FatigueRecoveryConfirmationDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              v92,
                                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FatigueRecoveryConfirmationDialog___);
    this->fields.fatigueRecoveryConfirmationDialog = Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.fatigueRecoveryConfirmationDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
LABEL_37:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_65;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_65;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_65;
  v104 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
  {
LABEL_59:
    v120 = sub_B5D6C8(sort);
    sub_B5D668(v120, 0LL);
  }
  *(_DWORD *)(sort + 32) = eventId;
  v105 = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_24751852(v105, v104, 1, 0, 0, 0LL);
  EventServantFatigueListViewManager__SetUpBonusFilterButton(this, v105, v106);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort
    || (sort = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)sort,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
    || (sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL)) == 0 )
  {
LABEL_65:
    sub_B5D69C(sort, v53);
  }
  v107 = *(_QWORD *)(sort + 24);
  v108 = sort;
  if ( (int)v107 >= 1 )
  {
    v109 = 0LL;
    v110 = (int)v107;
    while ( *p_targetRecoveryFatigueItem )
    {
      userServantEntity = (*p_targetRecoveryFatigueItem)->fields.userServantEntity;
      v112 = *(UserServantEntity_o **)(v108 + 32 + 8 * v109);
      if ( userServantEntity )
      {
        v114 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        v113 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      }
      else
      {
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v127, -1LL, 0LL);
        v114 = *(_OWORD *)&v127[0].fields.currentCryptoKey;
        v113 = *(_OWORD *)&v127[0].fields.fakeValue;
      }
      *(_OWORD *)&v127[1].fields.currentCryptoKey = v114;
      *(_OWORD *)&v127[1].fields.fakeValue = v113;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v126 = v127[1];
      v115 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v126, 0LL);
      v116 = this->fields.eventId;
      v117 = v115;
      v118 = (EventServantFatigueListViewItem_o *)sub_B5D694(EventServantFatigueListViewItem_TypeInfo);
      EventServantFatigueListViewItem___ctor(v118, v112, v116, v117, v105, targetItem, v119);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v118,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v109 >= v110 )
        goto LABEL_60;
      if ( v109 >= *(unsigned int *)(v108 + 24) )
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
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_65;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EventServantFatigueListViewManager__SetStatusKind(this, this->fields.modeKind, v122);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventServantFatigueListViewManager__SetFilterButtonImage(this, v123);
}


void __fastcall EventServantFatigueListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  EventServantFatigueListViewManager_c *v4; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_42EC04A & 1) == 0 )
  {
    sub_B5D5C4(&EventServantFatigueListViewManager_TypeInfo, v1, v2, v3);
    byte_42EC04A = 1;
  }
  v4 = EventServantFatigueListViewManager_TypeInfo;
  if ( (BYTE3(EventServantFatigueListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v4 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v4->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_B5D69C(0LL, v1);
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
    sub_B5D69C(0LL, v3);
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
  EventServantFatigueListViewManager__SetMode_31561708(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_31561708(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_31561708(this, 2, v6);
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
  EventServantFatigueListViewManager__SetMode_31561708(this, 2, v5);
}


void __fastcall EventServantFatigueListViewManager__EndPushRequest(
        EventServantFatigueListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventServantFatigueListViewManager__ModifyList(this, 0, method);
  EventServantFatigueListViewManager__SetMode_31561708(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__EndSelectFilterKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ListViewSort_o *sort; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42EC066 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EC066 = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EventServantFatigueListViewManager__SetFilterButtonImage(this, v7);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_B5D69C(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)sort, 0LL, 0LL);
}


void __fastcall EventServantFatigueListViewManager__EndSelectSortKind(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42EC06B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EC06B = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__EndShowServant(
        EventServantFatigueListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  CommonUI_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42EC063 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EC063 = 1;
  }
  EventServantFatigueListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventServantFatigueListViewManager__ModifyList(this, 0, v5);
  EventServantFatigueListViewManager__SetMode_31561708(this, 2, v6);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
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
    sub_B5D560(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    EventServantFatigueListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventServantFatigueListViewManager__GetAmountSortValue(
        EventServantFatigueListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventServantFatigueListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  int size; // w24
  int v17; // w25
  int64_t v18; // x21
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  _QWORD *monitor; // x8
  __int64 v22; // x22
  __int64 v23; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v5 = this;
  if ( (byte_42EC064 & 1) == 0 )
  {
    sub_B5D5C4(&EventServantFatigueListViewItem_TypeInfo, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10, v11);
    this = (EventServantFatigueListViewManager_o *)sub_B5D5C4(
                                                     &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                     v12,
                                                     v13,
                                                     v14);
    byte_42EC064 = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
    goto LABEL_21;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v17 = 0;
    v18 = 0LL;
    do
    {
      if ( itemList->fields._size <= (unsigned int)v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v19 = itemList->fields._items->m_Items[v17];
      if ( !v19 )
        break;
      v20 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (EventServantFatigueListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != EventServantFatigueListViewItem_TypeInfo )
      {
        break;
      }
      if ( (EventServantFatigueListViewItem_c *)v19->klass->_2.typeHierarchy[*(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2
                                                                             + 1)
                                                                           - 1] != EventServantFatigueListViewItem_TypeInfo )
        v19 = 0LL;
      monitor = v19[1].monitor;
      if ( !monitor )
        break;
      v23 = monitor[10];
      v22 = monitor[11];
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v25.fields.currentCryptoKey = v23;
      *(_QWORD *)&v25.fields.fakeValue = v22;
      this = (EventServantFatigueListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                       v25,
                                                       0LL);
      ++v17;
      if ( (_DWORD)this == svtId )
        ++v18;
      if ( v17 >= size )
        return v18;
      itemList = v5->fields.itemList;
    }
    while ( itemList );
LABEL_21:
    sub_B5D69C(this, *(_QWORD *)&svtId);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_String_o *RestTime4; // x24
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_o *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  int individualityRate; // w23
  int64_t Time; // x8
  float v50; // s0
  double v51; // d0
  int64_t v52; // x21
  System_String_o *v53; // x20
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7

  if ( (byte_42EC05E & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, recoveryFatigueTime, (_DWORD)beforeTime, afterTime);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11788/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_11800/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_11888/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, v20, v21, v22);
    byte_42EC05E = 1;
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
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11800/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0LL);
    *beforeTime = v32;
    sub_B5D560((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_11788/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0LL);
    goto LABEL_28;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    sub_B5D69C(IsNullOrEmpty, v25);
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
  sub_B5D560((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)RestTime4, v26, v27, v28, v29, v30, v31);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v50 = (float)(recoveryFatigueTime - Time) / (float)((float)individualityRate / 1000.0);
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
  v39 = LocalizationManager__GetRestTime4(v52, -1LL, 0LL);
LABEL_28:
  *afterTime = v39;
  sub_B5D560((BattleServantConfConponent_o *)afterTime, (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
  if ( isMatch )
  {
    v53 = *afterTime;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11888/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
    v55 = System_String__Concat_44577788(v53, v54, 0LL);
    *afterTime = v55;
    sub_B5D560((BattleServantConfConponent_o *)afterTime, (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
  }
}


System_String_o *__fastcall EventServantFatigueListViewManager__GetIndividualityName(
        EventServantFatigueListViewManager_o *this,
        System_String_array *array,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Text_StringBuilder_o *v11; // x20
  System_Text_StringBuilder_o *appended; // x0
  __int64 v13; // x1
  __int64 v14; // x8
  unsigned __int64 v15; // x21
  System_String_o *v16; // x0
  __int64 v18; // x0

  if ( (byte_42EC05D & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)array, (_DWORD)method, v3);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_11889/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/, v8, v9, v10);
    byte_42EC05D = 1;
  }
  v11 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v11, 0LL);
  if ( !array )
    goto LABEL_17;
  v14 = *(_QWORD *)&array->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v14 )
      {
        v18 = sub_B5D6C8(appended);
        sub_B5D668(v18, 0LL);
      }
      if ( !v11 )
        break;
      appended = System_Text_StringBuilder__Append_42953744(v11, array->m_Items[v15++], 0LL);
      if ( (int)v15 < (signed int)array->max_length )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11889/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY_DELIMITER"*/, 0LL);
        appended = System_Text_StringBuilder__Append_42953744(v11, v16, 0LL);
      }
      LODWORD(v14) = array->max_length;
      if ( (__int64)v15 >= (int)v14 )
        goto LABEL_14;
    }
LABEL_17:
    sub_B5D69C(appended, v13);
  }
LABEL_14:
  if ( !v11 )
    goto LABEL_17;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v11->klass->vtable._3_ToString.method)(
                              v11,
                              v11->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


EventServantFatigueListViewItem_o *__fastcall EventServantFatigueListViewManager__GetItem(
        EventServantFatigueListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42EC057 & 1) == 0 )
  {
    sub_B5D5C4(&EventServantFatigueListViewItem_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    byte_42EC057 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (EventServantFatigueListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == EventServantFatigueListViewItem_TypeInfo )
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_String_o *RestTime4; // x24
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_o *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_o *v39; // x21
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_o *v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_o **v55; // x0
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  int recoveryRate; // w23
  int64_t Time; // x8
  float v60; // s0
  double v61; // d0
  int64_t v62; // x22
  System_String_o *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_o *v70; // x20
  System_String_o *v71; // x0

  if ( (byte_42EC05F & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, recoveryFatigueTime, (_DWORD)beforeTime, afterTime);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11788/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_11800/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_11888/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, v20, v21, v22);
    byte_42EC05F = 1;
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
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11800/*"SERVANT_BEFORE_IN_NOT_FATIGUE_TIME"*/, 0LL);
    *beforeTime = v32;
    sub_B5D560((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
    if ( isMatch )
    {
      v39 = *beforeTime;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_11888/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
      v41 = System_String__Concat_44577788(v39, v40, 0LL);
      *beforeTime = v41;
      sub_B5D560((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11788/*"SERVANT_AFTER_IN_NOT_FATIGUE_TIME"*/, 0LL);
    *afterTime = v48;
    v55 = afterTime;
LABEL_40:
    sub_B5D560((BattleServantConfConponent_o *)v55, (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
    return;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    sub_B5D69C(IsNullOrEmpty, v25);
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
  sub_B5D560((BattleServantConfConponent_o *)beforeTime, (System_Int32_array **)RestTime4, v26, v27, v28, v29, v30, v31);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v60 = (float)((float)recoveryRate / 1000.0) * (float)(recoveryFatigueTime - Time);
  if ( v60 == INFINITY )
    v61 = -v60;
  else
    v61 = v60;
  v62 = Time + (__int64)v61;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v63 = LocalizationManager__GetRestTime4(v62, -1LL, 0LL);
  *afterTime = v63;
  sub_B5D560((BattleServantConfConponent_o *)afterTime, (System_Int32_array **)v63, v64, v65, v66, v67, v68, v69);
  if ( isMatch )
  {
    v70 = *beforeTime;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v71 = LocalizationManager__Get((System_String_o *)StringLiteral_11888/*"SERVANT_RECOVERY_FATIGUE_INDIVIDUALITY"*/, 0LL);
    v48 = System_String__Concat_44577788(v70, v71, 0LL);
    *beforeTime = v48;
    v55 = beforeTime;
    goto LABEL_40;
  }
}


bool __fastcall EventServantFatigueListViewManager__GetSwapChoiceList(
        EventServantFatigueListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v42; // x25
  ListViewItem_o *v43; // x8
  __int64 v44; // x11
  _OWORD *monitor; // x9
  __int128 v46; // q0
  const MethodInfo_3047788 *v47; // x2
  int64_t v48; // x1
  System_Collections_Generic_List_long__o *v49; // x0
  __int128 v50; // q0
  System_Int64_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int64_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-70h]

  if ( (byte_42EC06F & 1) == 0 )
  {
    sub_B5D5C4(&EventServantFatigueListViewItem_TypeInfo, (_DWORD)choiceList, (_DWORD)unchoiceList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    byte_42EC06F = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v42 = 0LL;
    do
    {
      if ( v42 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = itemList->fields._items->m_Items[v42];
      if ( !v43 )
        break;
      v44 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (EventServantFatigueListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != EventServantFatigueListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v43[1].monitor;
      if ( monitor && BYTE1(v43[1].fields.sortValue2B) )
      {
        if ( BYTE2(v43[1].fields.sortValue1) )
        {
          v46 = monitor[2];
          *(_OWORD *)&v75.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v75.fields.fakeValue = v46;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
          if ( !v31 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v31;
        }
        else
        {
          v50 = monitor[2];
          *(_OWORD *)&v75.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v75.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v73 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v73, 0LL);
          if ( !v30 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v30;
        }
        System_Collections_Generic_List_long___Add(v49, v48, v47);
      }
      if ( (__int64)++v42 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B5D69C(v32, v33);
  }
LABEL_28:
  if ( !v30 || !v31 )
    goto LABEL_33;
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, 0LL, v34, v35, v36, v37, v38, v39);
    *unchoiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, 0LL, v66, v67, v68, v69, v70, v71);
    return 0;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v51;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v58;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
    return 1;
  }
}


bool __fastcall EventServantFatigueListViewManager__GetSwapLockList(
        EventServantFatigueListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v42; // x25
  ListViewItem_o *v43; // x8
  __int64 v44; // x11
  _OWORD *monitor; // x9
  __int128 v46; // q0
  const MethodInfo_3047788 *v47; // x2
  int64_t v48; // x1
  System_Collections_Generic_List_long__o *v49; // x0
  __int128 v50; // q0
  System_Int64_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int64_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-70h]

  if ( (byte_42EC06E & 1) == 0 )
  {
    sub_B5D5C4(&EventServantFatigueListViewItem_TypeInfo, (_DWORD)lockList, (_DWORD)unlockList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    byte_42EC06E = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v42 = 0LL;
    do
    {
      if ( v42 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = itemList->fields._items->m_Items[v42];
      if ( !v43 )
        break;
      v44 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (EventServantFatigueListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != EventServantFatigueListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v43[1].monitor;
      if ( monitor && LOBYTE(v43[1].fields.sortValue2B) )
      {
        if ( BYTE1(v43[1].fields.sortValue1) )
        {
          v46 = monitor[2];
          *(_OWORD *)&v75.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v75.fields.fakeValue = v46;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
          if ( !v31 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v31;
        }
        else
        {
          v50 = monitor[2];
          *(_OWORD *)&v75.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v75.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v73 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v73, 0LL);
          if ( !v30 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v30;
        }
        System_Collections_Generic_List_long___Add(v49, v48, v47);
      }
      if ( (__int64)++v42 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B5D69C(v32, v33);
  }
LABEL_28:
  if ( !v30 || !v31 )
    goto LABEL_33;
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)lockList, 0LL, v34, v35, v36, v37, v38, v39);
    *unlockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, 0LL, v66, v67, v68, v69, v70, v71);
    return 0;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v51;
    sub_B5D560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v58;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
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
  int v2; // w2
  __int64 v3; // x3
  EventServantFatigueListViewManager_c *v4; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_42EC04B & 1) == 0 )
  {
    sub_B5D5C4(&EventServantFatigueListViewManager_TypeInfo, v1, v2, v3);
    byte_42EC04B = 1;
  }
  v4 = EventServantFatigueListViewManager_TypeInfo;
  if ( (BYTE3(EventServantFatigueListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v4 = EventServantFatigueListViewManager_TypeInfo;
  }
  servantSortStatus = v4->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_B5D69C(0LL, v1);
  ListViewSort__InitLoad(servantSortStatus, 0LL);
}


bool __fastcall EventServantFatigueListViewManager__IsMatchIndividuality(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x20
  struct EventServantRecoveryFatigueItem_o *v18; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  struct System_Int32_array *targetIndividuality; // x24
  __int64 v21; // x8
  unsigned __int64 v22; // x25
  struct EventServantRecoveryFatigueItem_o *v23; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v25; // w20
  ServantEntity_o *v26; // x21
  __int64 v27; // x22
  __int64 v28; // x23
  struct EventServantRecoveryFatigueItem_o *v29; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v30; // x8
  int32_t v31; // w22
  __int64 v33; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_42EC05C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EC05C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    goto LABEL_26;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (DataManager_o *)targetRecoveryFatigueItem->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
  if ( !v17 )
    goto LABEL_26;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                v17,
                                &entity,
                                (int32_t)Instance,
                                (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  v18 = this->fields.targetRecoveryFatigueItem;
  if ( !v18
    || (eventFatigueRecoveryEnt = v18->fields.eventFatigueRecoveryEnt) == 0LL
    || (targetIndividuality = eventFatigueRecoveryEnt->fields.targetIndividuality) == 0LL )
  {
LABEL_26:
    sub_B5D69C(Instance, v15);
  }
  v21 = *(_QWORD *)&targetIndividuality->max_length;
  if ( (int)v21 < 1 )
    return 0;
  v22 = 0LL;
  while ( 1 )
  {
    if ( v22 >= (unsigned int)v21 )
    {
      v33 = sub_B5D6C8(Instance);
      sub_B5D668(v33, 0LL);
    }
    v23 = this->fields.targetRecoveryFatigueItem;
    if ( !v23 )
      goto LABEL_26;
    userServantEntity = v23->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_26;
    v25 = targetIndividuality->m_Items[v22 + 1];
    v26 = (ServantEntity_o *)entity;
    v28 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v27 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v35.fields.currentCryptoKey = v28;
    *(_QWORD *)&v35.fields.fakeValue = v27;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v35, 0LL);
    v29 = this->fields.targetRecoveryFatigueItem;
    if ( !v29 )
      goto LABEL_26;
    v30 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v29->fields.userServantEntity;
    if ( !v30 )
      goto LABEL_26;
    v31 = (int)Instance;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30[8], 0LL);
    if ( !v26 )
      goto LABEL_26;
    Instance = (DataManager_o *)ServantEntity__IsIndividuality(v26, v31, (int32_t)Instance, v25, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return 1;
    LODWORD(v21) = targetIndividuality->max_length;
    if ( (__int64)++v22 >= (int)v21 )
      return 0;
  }
}


void __fastcall EventServantFatigueListViewManager__ModifyItem(
        EventServantFatigueListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x19
  _BOOL8 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x11
  EventServantFatigueListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v41; // q0
  int64_t v42; // x0
  __int128 v43; // q0
  const MethodInfo *v44; // x2
  UnityEngine_Object_o *viewObject; // x21
  __int64 v46; // x1
  struct ListViewObject_o *v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+60h] [xbp-60h] BYREF

  if ( (byte_42EC054 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v15, v16, v17);
    sub_B5D5C4(&EventServantFatigueListViewItem_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    byte_42EC054 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_39;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_39;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v50,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v51.fields.current = (Il2CppObject *)v50.fields.fakeValue;
      *(_OWORD *)&v51.fields.list = *(_OWORD *)&v50.fields.currentCryptoKey;
      while ( 1 )
      {
        v36 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v51,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v36 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v51,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v51.fields.current
          && (v38 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v51.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v38) )
        {
          if ( (EventServantFatigueListViewItem_c *)v51.fields.current->klass->_2.typeHierarchy[v38 - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = (EventServantFatigueListViewItem_o *)v51.fields.current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_B5D69C(v36, v37);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_B5D69C(v36, v37);
            v41 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v50.fields.fakeValue = v41;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v49 = v50;
            v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v49, 0LL);
            v43 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
            *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v48.fields.fakeValue = v43;
            if ( v42 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v48, 0LL) )
              EventServantFatigueListViewItem__ModifyItem(current, Entity, v44);
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
          sub_B5D69C(v36, v37);
LABEL_27:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v47 = current->fields.viewObject;
          if ( !v47 )
            sub_B5D69C(0LL, v46);
          ((void (__fastcall *)(struct ListViewObject_o *, EventServantFatigueListViewItem_o *, Il2CppMethodPointer))v47->klass->vtable._5_SetItem.method)(
            v47,
            current,
            v47->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_39:
    sub_B5D69C(Instance, v33);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__ModifyList(
        EventServantFatigueListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int64_t sort; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v23; // x23
  int64_t v24; // x20
  signed __int64 size; // x25
  unsigned int v26; // w24
  __int64 v27; // x8
  __int128 v28; // q0
  int64_t v29; // x22
  unsigned __int64 v30; // x28
  struct System_Collections_Generic_List_ListViewItem__o *v31; // x21
  ListViewItem_o *v32; // x21
  __int64 v33; // x10
  _OWORD *monitor; // x8
  __int128 v35; // q0
  _OWORD *v36; // x8
  __int128 v37; // q0
  int64_t v38; // x0
  const MethodInfo *v39; // x4
  __int64 v40; // x0
  bool isIconSizeChangea; // [xsp+Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+70h] [xbp-70h]

  if ( (byte_42EC056 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange, (_DWORD)method, v3);
    sub_B5D5C4(&EventServantFatigueListViewItem_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42EC056 = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_38;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_38;
  sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)sort,
                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_38;
  sort = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_38;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  v23 = *(_QWORD *)(sort + 24);
  v24 = sort;
  if ( (int)v23 >= 1 )
  {
    size = itemList->fields._size;
    v26 = 0;
    isIconSizeChangea = isIconSizeChange;
    while ( 1 )
    {
      v27 = *(_QWORD *)(v24 + 8LL * (int)v26 + 32);
      if ( !v27 )
        break;
      v28 = *(_OWORD *)(v27 + 32);
      *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)(v27 + 16);
      *(_OWORD *)&v45.fields.fakeValue = v28;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v44 = v45;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v44, 0LL);
      if ( (int)size >= 1 )
      {
        v29 = sort;
        v30 = 0LL;
        while ( 1 )
        {
          v31 = this->fields.itemList;
          if ( !v31 )
            goto LABEL_38;
          if ( v30 >= (unsigned int)v31->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v32 = v31->fields._items->m_Items[v30];
          if ( !v32 )
            goto LABEL_38;
          v33 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v33
            || (EventServantFatigueListViewItem_c *)v32->klass->_2.typeHierarchy[v33 - 1] != EventServantFatigueListViewItem_TypeInfo )
          {
            goto LABEL_38;
          }
          monitor = v32[1].monitor;
          if ( monitor )
          {
            v35 = monitor[2];
            *(_OWORD *)&v45.fields.currentCryptoKey = monitor[1];
            *(_OWORD *)&v45.fields.fakeValue = v35;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v43 = v45;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v43, 0LL);
            if ( sort == v29 )
              break;
          }
          if ( (__int64)++v30 >= size )
            goto LABEL_34;
        }
        v36 = v32[1].monitor;
        if ( !v36 )
          break;
        v37 = v36[2];
        *(_OWORD *)&v45.fields.currentCryptoKey = v36[1];
        *(_OWORD *)&v45.fields.fakeValue = v37;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v42 = v45;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v42, 0LL);
        EventServantFatigueListViewManager__ModifyLockItem(this, v38, 1, isIconSizeChangea, v39);
      }
LABEL_34:
      if ( (int)++v26 >= (int)v23 )
        return;
      if ( v26 >= *(_DWORD *)(v24 + 24) )
      {
        v40 = sub_B5D6C8(sort);
        sub_B5D668(v40, 0LL);
      }
    }
LABEL_38:
    sub_B5D69C(sort, isIconSizeChange);
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
  int v8; // w1
  char v9; // w2
  __int64 v10; // x3
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int v32; // w1
  char v33; // w2
  __int64 v34; // x3
  __int64 v35; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x21
  bool v38; // w20
  int64_t v39; // x0
  const MethodInfo *v40; // x1
  __int64 v41; // x11
  Il2CppObject *current; // x22
  _OWORD *monitor; // x8
  __int128 v44; // q0
  int64_t v45; // x0
  __int128 v46; // q0
  int64_t v47; // x24
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x1
  UnityEngine_Object_o *v56; // x23
  __int64 v57; // x1
  void *v58; // x0
  __int64 v59; // x1
  ListViewObject_o *v60; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_42EC055 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, isInit, isIconSizeChange);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v17, v18, v19);
    sub_B5D5C4(&EventServantFatigueListViewItem_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    byte_42EC055 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_46;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_46;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v64,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v65.fields.current = (Il2CppObject *)v64.fields.fakeValue;
      *(_OWORD *)&v65.fields.list = *(_OWORD *)&v64.fields.currentCryptoKey;
      v38 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v65,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v39 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v65,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v65.fields.current
          && (v41 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v65.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v41) )
        {
          if ( (EventServantFatigueListViewItem_c *)v65.fields.current->klass->_2.typeHierarchy[v41 - 1] == EventServantFatigueListViewItem_TypeInfo )
            current = v65.fields.current;
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
          sub_B5D69C(v39, v40);
        monitor = current[7].monitor;
        if ( !monitor )
          sub_B5D69C(v39, v40);
        v44 = monitor[2];
        *(_OWORD *)&v64.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v64.fields.fakeValue = v44;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v63 = v64;
        v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v63, 0LL);
        v46 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
        v47 = v45;
        *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v62.fields.fakeValue = v46;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v62, 0LL);
        if ( v47 == v39 )
        {
          current[7].monitor = Entity;
          sub_B5D560(
            (BattleServantConfConponent_o *)&current[7].monitor,
            (System_Int32_array **)Entity,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53);
        }
LABEL_26:
        if ( v38 )
        {
          if ( !current )
            sub_B5D69C(v39, v40);
          EventServantFatigueListViewItem__ModifyLockItem((EventServantFatigueListViewItem_o *)current, v40);
          EventServantFatigueListViewItem__ModifyChoiceItem((EventServantFatigueListViewItem_o *)current, v54);
          EventServantFatigueListViewItem__ModifyPushItem((EventServantFatigueListViewItem_o *)current, v55);
        }
        else if ( !current )
        {
          sub_B5D69C(v39, v40);
        }
        v56 = (UnityEngine_Object_o *)current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
        {
          v58 = current[6].monitor;
          if ( !v58 )
            sub_B5D69C(0LL, v57);
          (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v58 + 392LL))(
            v58,
            current,
            *(_QWORD *)(*(_QWORD *)v58 + 400LL));
          if ( isIconSizeChange )
          {
            v60 = (ListViewObject_o *)current[6].monitor;
            if ( !v60 )
              sub_B5D69C(0LL, v59);
            ListViewObject__SetItemSeed(v60, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_46:
    sub_B5D69C(Instance, v35);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickBack(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Action_bool__UserServantEntity__o *selectAfterCallback; // x20

  if ( (byte_42EC075 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool__UserServantEntity__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EC075 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectAfterCallback, 0LL, v8, v9, v10, v11, v12, v13);
    System_Action_bool__UserServantEntity___Invoke(
      selectAfterCallback,
      0,
      0LL,
      (const MethodInfo_25976CC *)Method_System_Action_bool__UserServantEntity__Invoke__);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickBonusFilterKind(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_42EC068 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC068 = 1;
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
      sub_B5D69C(0LL, v5);
    ListViewSort__IncBonusKind2(sort, this->fields.bonusEventIdList, 0LL, 0LL, 0LL, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickChoiceTab(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x2
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_42EC072 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventServantFatigueListViewManager_EndClickTabChoice__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EC072 = 1;
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
      v12 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_B5D694(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabChoice__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v12, v13);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 2, v11);
      EventServantFatigueListViewManager__RefreshListDisp(this, v14);
      EventServantFatigueListViewManager__ModifyList(this, 0, v15);
      EventServantFatigueListViewManager__SetMode_31561708(this, 2, v16);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickCollectLock(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x2
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_42EC071 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventServantFatigueListViewManager_EndClickTabLock__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EC071 = 1;
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
      v12 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_B5D694(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabLock__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v12, v13);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 1, v11);
      EventServantFatigueListViewManager__RefreshListDisp(this, v14);
      EventServantFatigueListViewManager__ModifyList(this, 0, v15);
      EventServantFatigueListViewManager__SetMode_31561708(this, 2, v16);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickFilterKind(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v16; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EC065 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventServantFatigueListViewManager_EndSelectFilterKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EC065 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v16 = (CommonUI_o *)Instance;
    v17 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenServantFilterSelectMenu(v16, 1, sort, v17, -1, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42EC070 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventServantFatigueListViewManager_EndClickTabStatus__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EC070 = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v11 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_B5D694(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
    EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndClickTabStatus__,
      0LL);
    EventServantFatigueListViewManager__StatusRequest(this, v11, v12);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickPushTab(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x2
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_42EC073 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventServantFatigueListViewManager_EndClickTabPush__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EC073 = 1;
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
      v12 = (EventServantFatigueListViewManager_RequestCallbackFunc_o *)sub_B5D694(EventServantFatigueListViewManager_RequestCallbackFunc_TypeInfo);
      EventServantFatigueListViewManager_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndClickTabPush__,
        0LL);
      EventServantFatigueListViewManager__StatusRequest(this, v12, v13);
    }
    else
    {
      EventServantFatigueListViewManager__SetStatusKind(this, 3, v11);
      EventServantFatigueListViewManager__RefreshListDisp(this, v14);
      EventServantFatigueListViewManager__ModifyList(this, 0, v15);
      EventServantFatigueListViewManager__SetMode_31561708(this, 2, v16);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickScaleChange(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ListViewSort_o *ScaleKindSpriteName; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v15; // w8
  struct ListViewSort_o *sort; // x8
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2

  if ( (byte_42EC076 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC076 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v15 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v15 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v15 = 1;
LABEL_12:
    this->fields.scaleType = v15;
    this->fields.seed = smallSizeSeed;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
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
    sub_B5D69C(ScaleKindSpriteName, v6);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)ScaleKindSpriteName, 0LL);
  EventServantFatigueListViewManager__ModifyList(this, 1, v18);
  EventServantFatigueListViewManager__SetMode_31561708(this, 2, v19);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventServantFatigueListViewManager__OnClickSelectObject(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ListViewObject_o *v4; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int64_t fatigueRecoveryConfirmationDialog; // x0
  __int64 v58; // x10
  __int64 v59; // x10
  EventServantFatigueListViewObject_o *v60; // x0
  EventServantFatigueListViewItem_o *Item; // x20
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  const MethodInfo *v74; // x2
  __int64 v75; // x8
  __int128 v76; // q1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v78; // q0
  int64_t v79; // x23
  const MethodInfo *v80; // x2
  bool IsMatchIndividuality_31547964; // w0
  const MethodInfo *v82; // x5
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct UserServantEntity_o *v90; // x1
  FatigueRecoveryConfirmationDialog_o *v91; // x20
  struct EventServantRecoveryFatigueItem_o *v92; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  System_String_o *v94; // x21
  System_String_o *v95; // x0
  UserServantEntity_o *targetOutUserServantEntity; // x22
  System_String_o *v97; // x23
  System_String_o *outAfterTime; // x27
  System_String_o *v99; // x24
  CommonConfirmDialog_ClickDelegate_o *func; // x25
  bool v101; // w0
  const MethodInfo *v102; // x5
  struct UserServantEntity_o *v103; // x1
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  FatigueRecoveryConfirmationDialog_o *v110; // x20
  struct EventServantRecoveryFatigueItem_o *v111; // x8
  struct EventFatigueRecoveryEntity_o *v112; // x8
  System_String_o *v113; // x21
  System_String_o *v114; // x0
  UserServantEntity_o *v115; // x22
  System_String_o *v116; // x23
  System_String_o *v117; // x24
  System_String_o *v118; // x25
  CommonConfirmDialog_ClickDelegate_o *v119; // x26
  struct EventServantRecoveryFatigueItem_o *v120; // x8
  struct UserServantEntity_o *v121; // x8
  __int128 v122; // q0
  struct UserServantEntity_o *v123; // x8
  __int128 v124; // q0
  const MethodInfo *v125; // x2
  bool v126; // w0
  const MethodInfo *v127; // x5
  struct EventServantRecoveryFatigueItem_o *v128; // x8
  struct UserServantEntity_o *v129; // x8
  UserEventServantFatigueMaster_o *v130; // x23
  int32_t eventId; // w24
  __int64 v132; // x25
  __int64 v133; // x26
  bool FatigueInfo; // w0
  const MethodInfo *v135; // x1
  int64_t v136; // x23
  int64_t v137; // x23
  bool IsMatchIndividuality; // w0
  const MethodInfo *v139; // x5
  struct UserServantEntity_o *v140; // x1
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  struct EventServantRecoveryFatigueItem_o *v153; // x8
  struct UserServantEntity_o *v154; // x1
  struct EventServantRecoveryFatigueItem_o *v155; // x8
  struct EventFatigueRecoveryEntity_o *v156; // x8
  System_String_o *v157; // x21
  System_String_o *v158; // x0
  System_String_o *v159; // x22
  System_String_o *v160; // x23
  UserServantEntity_o *v161; // x24
  UserServantEntity_o *targetInUserServantEntity; // x26
  System_String_o *v163; // x20
  System_String_o *v164; // x25
  System_String_o *v165; // x27
  CommonConfirmDialog_ClickDelegate_o *v166; // x28
  FatigueRecoveryConfirmationDialog_o *v167; // [xsp+18h] [xbp-158h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+20h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v169; // [xsp+40h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v170; // [xsp+60h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+80h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+A0h] [xbp-D0h]
  bool isRecover; // [xsp+CCh] [xbp-A4h] BYREF
  int64_t recoverAt; // [xsp+D0h] [xbp-A0h] BYREF
  System_String_o *v175; // [xsp+D8h] [xbp-98h] BYREF
  System_String_o *v176; // [xsp+E0h] [xbp-90h] BYREF
  System_String_o *v177; // [xsp+E8h] [xbp-88h] BYREF
  System_String_o *v178; // [xsp+F0h] [xbp-80h] BYREF
  System_String_o *afterTime; // [xsp+F8h] [xbp-78h] BYREF
  System_String_o *beforeTime; // [xsp+100h] [xbp-70h] BYREF
  System_String_o *v181; // [xsp+108h] [xbp-68h] BYREF
  System_String_o *v182; // [xsp+110h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16

  v4 = obj;
  if ( (byte_42EC05B & 1) == 0 )
  {
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__, v15, v16, v17);
    sub_B5D5C4(&EventServantFatigueListViewObject_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&NetworkManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&SoundManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_11883/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_11875/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_11873/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_11803/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_1/*""*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_11801/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/, v54, v55, v56);
    byte_42EC05B = 1;
  }
  v181 = 0LL;
  v182 = 0LL;
  afterTime = 0LL;
  beforeTime = 0LL;
  v177 = 0LL;
  v178 = 0LL;
  v175 = 0LL;
  v176 = 0LL;
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
  if ( !v4 )
    goto LABEL_72;
  v58 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v4->klass->_2.bitflags2 + 1) < (unsigned int)v58
    || (EventServantFatigueListViewObject_c *)v4->klass->_2.typeHierarchy[v58 - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    goto LABEL_72;
  }
  v59 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v4->klass->_2.bitflags2 + 1) >= (unsigned int)v59 )
    v60 = (EventServantFatigueListViewObject_c *)v4->klass->_2.typeHierarchy[v59 - 1] == EventServantFatigueListViewObject_TypeInfo
        ? (EventServantFatigueListViewObject_o *)v4
        : 0LL;
  else
    v60 = 0LL;
  Item = EventServantFatigueListViewObject__GetItem(v60, (const MethodInfo *)obj);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v62, v63, v64, v65, v66, v67);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    0LL,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_72;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)fatigueRecoveryConfirmationDialog,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fatigueRecoveryConfirmationDialog )
    goto LABEL_72;
  fatigueRecoveryConfirmationDialog = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  obj = (ListViewObject_o *)this->fields.targetRecoveryFatigueItem;
  if ( !obj )
    goto LABEL_72;
  v75 = *(_QWORD *)&obj->fields.basePosition.fields.z;
  if ( v75 )
  {
    v76 = *(_OWORD *)(v75 + 32);
    *(_OWORD *)&v172.fields.currentCryptoKey = *(_OWORD *)(v75 + 16);
    *(_OWORD *)&v172.fields.fakeValue = v76;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v171 = v172;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v171, 0LL);
    if ( !Item )
      goto LABEL_72;
    userServantEntity = Item->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_72;
    v78 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    v79 = fatigueRecoveryConfirmationDialog;
    *(_OWORD *)&v170.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v170.fields.fakeValue = v78;
    fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v170, 0LL);
    if ( v79 == fatigueRecoveryConfirmationDialog )
    {
      afterTime = (System_String_o *)StringLiteral_1/*""*/;
      beforeTime = (System_String_o *)StringLiteral_1/*""*/;
      IsMatchIndividuality_31547964 = EventServantFatigueListViewItem__IsMatchIndividuality_31547964(
                                        Item,
                                        this->fields.targetRecoveryFatigueItem,
                                        v80);
      EventServantFatigueListViewManager__GetOutRecoveryTime(
        this,
        Item->fields.fatigueTime,
        &beforeTime,
        &afterTime,
        IsMatchIndividuality_31547964,
        v82);
      targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
      if ( targetRecoveryFatigueItem )
      {
        v90 = targetRecoveryFatigueItem->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v90;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
          (System_Int32_array **)v90,
          v83,
          v84,
          v85,
          v86,
          v87,
          v88);
        v91 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11883/*"SERVANT_OUT_RECOVERY_FATIGUE_TITLE"*/,
                                                       0LL);
        v92 = this->fields.targetRecoveryFatigueItem;
        if ( v92 )
        {
          eventFatigueRecoveryEnt = v92->fields.eventFatigueRecoveryEnt;
          if ( eventFatigueRecoveryEnt )
          {
            v94 = System_String__Format(
                    (System_String_o *)fatigueRecoveryConfirmationDialog,
                    (Il2CppObject *)eventFatigueRecoveryEnt->fields.name,
                    0LL);
            v95 = LocalizationManager__Get((System_String_o *)StringLiteral_11873/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0LL);
            targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
            outAfterTime = afterTime;
            v97 = beforeTime;
            v99 = v95;
            func = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
            CommonConfirmDialog_ClickDelegate___ctor(
              func,
              (Il2CppObject *)this,
              Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
              0LL);
            if ( v91 )
            {
              FatigueRecoveryConfirmationDialog__OpenDecideDlg(
                v91,
                v94,
                v99,
                0LL,
                (System_String_o *)StringLiteral_1/*""*/,
                (System_String_o *)StringLiteral_1/*""*/,
                targetOutUserServantEntity,
                v97,
                outAfterTime,
                func,
                0LL);
              return;
            }
          }
        }
      }
LABEL_72:
      sub_B5D69C(fatigueRecoveryConfirmationDialog, obj);
    }
    v120 = this->fields.targetRecoveryFatigueItem;
    if ( !v120 )
      goto LABEL_72;
    v121 = v120->fields.userServantEntity;
    if ( v121 )
    {
      v122 = *(_OWORD *)&v121->fields.id.fields.fakeValue;
      *(_OWORD *)&v172.fields.currentCryptoKey = *(_OWORD *)&v121->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v172.fields.fakeValue = v122;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v169 = v172;
      fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                            &v169,
                                            0LL);
      v123 = Item->fields.userServantEntity;
      if ( !v123 )
        goto LABEL_72;
      v124 = *(_OWORD *)&v123->fields.id.fields.fakeValue;
      *(_OWORD *)&v168.fields.currentCryptoKey = *(_OWORD *)&v123->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v168.fields.fakeValue = v124;
      if ( fatigueRecoveryConfirmationDialog != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                  &v168,
                                                  0LL) )
      {
        v177 = (System_String_o *)StringLiteral_1/*""*/;
        v178 = (System_String_o *)StringLiteral_1/*""*/;
        v126 = EventServantFatigueListViewItem__IsMatchIndividuality_31547964(
                 Item,
                 this->fields.targetRecoveryFatigueItem,
                 v125);
        EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v178, &v177, v126, v127);
        v175 = (System_String_o *)StringLiteral_1/*""*/;
        v176 = (System_String_o *)StringLiteral_1/*""*/;
        fatigueRecoveryConfirmationDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !fatigueRecoveryConfirmationDialog )
          goto LABEL_72;
        fatigueRecoveryConfirmationDialog = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)fatigueRecoveryConfirmationDialog,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        v128 = this->fields.targetRecoveryFatigueItem;
        if ( !v128 )
          goto LABEL_72;
        v129 = v128->fields.userServantEntity;
        if ( !v129 )
          goto LABEL_72;
        v130 = (UserEventServantFatigueMaster_o *)fatigueRecoveryConfirmationDialog;
        eventId = this->fields.eventId;
        v133 = *(_QWORD *)&v129->fields.svtId.fields.currentCryptoKey;
        v132 = *(_QWORD *)&v129->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v183.fields.currentCryptoKey = v133;
        *(_QWORD *)&v183.fields.fakeValue = v132;
        fatigueRecoveryConfirmationDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                              v183,
                                              0LL);
        if ( !v130 )
          goto LABEL_72;
        FatigueInfo = UserEventServantFatigueMaster__GetFatigueInfo(
                        v130,
                        &recoverAt,
                        &isRecover,
                        eventId,
                        fatigueRecoveryConfirmationDialog,
                        0LL);
        v136 = 0LL;
        if ( FatigueInfo )
        {
          v137 = recoverAt;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          if ( v137 <= NetworkManager__getTime(0LL) )
            v136 = 0LL;
          else
            v136 = recoverAt;
        }
        IsMatchIndividuality = EventServantFatigueListViewManager__IsMatchIndividuality(this, v135);
        EventServantFatigueListViewManager__GetOutRecoveryTime(this, v136, &v176, &v175, IsMatchIndividuality, v139);
        v140 = Item->fields.userServantEntity;
        this->fields.targetInUserServantEntity = v140;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
          (System_Int32_array **)v140,
          v141,
          v142,
          v143,
          v144,
          v145,
          v146);
        v153 = this->fields.targetRecoveryFatigueItem;
        if ( !v153 )
          goto LABEL_72;
        v154 = v153->fields.userServantEntity;
        this->fields.targetOutUserServantEntity = v154;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
          (System_Int32_array **)v154,
          v147,
          v148,
          v149,
          v150,
          v151,
          v152);
        v167 = this->fields.fatigueRecoveryConfirmationDialog;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11803/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TITLE"*/,
                                                       0LL);
        v155 = this->fields.targetRecoveryFatigueItem;
        if ( !v155 )
          goto LABEL_72;
        v156 = v155->fields.eventFatigueRecoveryEnt;
        if ( !v156 )
          goto LABEL_72;
        v157 = System_String__Format(
                 (System_String_o *)fatigueRecoveryConfirmationDialog,
                 (Il2CppObject *)v156->fields.name,
                 0LL);
        v158 = LocalizationManager__Get((System_String_o *)StringLiteral_11801/*"SERVANT_CHANGE_RECOVERY_FATIGUE_MSG"*/, 0LL);
        v160 = v177;
        v159 = v178;
        targetInUserServantEntity = this->fields.targetInUserServantEntity;
        v161 = this->fields.targetOutUserServantEntity;
        v163 = v175;
        v164 = v176;
        v165 = v158;
        v166 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v166,
          (Il2CppObject *)this,
          Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
          0LL);
        fatigueRecoveryConfirmationDialog = (int64_t)v167;
        if ( !v167 )
          goto LABEL_72;
        FatigueRecoveryConfirmationDialog__OpenDecideDlg(
          v167,
          v157,
          v165,
          targetInUserServantEntity,
          v159,
          v160,
          v161,
          v164,
          v163,
          v166,
          0LL);
      }
    }
  }
  else
  {
    v181 = (System_String_o *)StringLiteral_1/*""*/;
    v182 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !Item )
      goto LABEL_72;
    v101 = EventServantFatigueListViewItem__IsMatchIndividuality_31547964(
             Item,
             (EventServantRecoveryFatigueItem_o *)obj,
             v74);
    EventServantFatigueListViewManager__GetInRecoveryTime(this, Item->fields.fatigueTime, &v182, &v181, v101, v102);
    v103 = Item->fields.userServantEntity;
    this->fields.targetInUserServantEntity = v103;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
      (System_Int32_array **)v103,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109);
    v110 = this->fields.fatigueRecoveryConfirmationDialog;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    fatigueRecoveryConfirmationDialog = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11875/*"SERVANT_IN_RECOVERY_FATIGUE_TITLE"*/, 0LL);
    v111 = this->fields.targetRecoveryFatigueItem;
    if ( !v111 )
      goto LABEL_72;
    v112 = v111->fields.eventFatigueRecoveryEnt;
    if ( !v112 )
      goto LABEL_72;
    v113 = System_String__Format(
             (System_String_o *)fatigueRecoveryConfirmationDialog,
             (Il2CppObject *)v112->fields.name,
             0LL);
    v114 = LocalizationManager__Get((System_String_o *)StringLiteral_11873/*"SERVANT_IN_RECOVERY_FATIGUE_MSG"*/, 0LL);
    v115 = this->fields.targetInUserServantEntity;
    v117 = v181;
    v116 = v182;
    v118 = v114;
    v119 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v119,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_CloseRecovertFatigueDialog__,
      0LL);
    if ( !v110 )
      goto LABEL_72;
    FatigueRecoveryConfirmationDialog__OpenDecideDlg(
      v110,
      v113,
      v118,
      v115,
      v116,
      v117,
      0LL,
      (System_String_o *)StringLiteral_1/*""*/,
      (System_String_o *)StringLiteral_1/*""*/,
      v119,
      0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickSelectPush(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  __int64 v66; // x19
  __int64 SelfUserGame; // x0
  __int64 v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x9
  System_Int32_array **Item; // x0
  EventServantFatigueListViewItem_o **v77; // x20
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  int64_t v84; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v86; // q1
  const MethodInfo *v87; // x2
  UserServantEntity_o *Entity; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v89; // x21
  __int64 v90; // x22
  __int64 v91; // x23
  ServantEntity_o *v92; // x25
  System_String_o *v93; // x21
  System_String_o *v94; // x22
  System_Object_array *v95; // x23
  int32_t Rarity; // w26
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x26
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x26
  int32_t v111; // w0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x24
  int32_t v119; // w0
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_Int32_array **v126; // x24
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Int32_array **v133; // x24
  EventServantFatigueListViewItem_o *v134; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v135; // x9
  ServantEntity_o *servantEntity; // x20
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_Int32_array **v143; // x20
  System_String_o *v144; // x20
  System_String_o *v145; // x22
  System_String_o *v146; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v148; // x25
  __int64 v149; // x0
  __int64 v150; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v151; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v152; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16

  if ( (byte_42EC077 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&EventServantFatigueListViewObject_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&object___TypeInfo, v27, v28, v29);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Rarity_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&SoundManager_TypeInfo, v45, v46, v47);
    sub_B5D5C4(
      &Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__0__,
      v48,
      v49,
      v50);
    sub_B5D5C4(&EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v63, v64, v65);
    byte_42EC077 = 1;
  }
  v66 = sub_B5D694(EventServantFatigueListViewManager___c__DisplayClass107_0_TypeInfo);
  EventServantFatigueListViewManager___c__DisplayClass107_0___ctor(
    (EventServantFatigueListViewManager___c__DisplayClass107_0_o *)v66,
    0LL);
  if ( !v66 )
    goto LABEL_69;
  *(_QWORD *)(v66 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v66 + 16), (System_Int32_array **)this, v69, v70, v71, v72, v73, v74);
  if ( !obj )
    goto LABEL_69;
  v75 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v75
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[v75 - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    sub_B5D990(obj);
    goto LABEL_71;
  }
  Item = (System_Int32_array **)EventServantFatigueListViewObject__GetItem(
                                  (EventServantFatigueListViewObject_o *)obj,
                                  (const MethodInfo *)EventServantFatigueListViewObject_TypeInfo);
  *(_QWORD *)(v66 + 24) = Item;
  v77 = (EventServantFatigueListViewItem_o **)(v66 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v66 + 24), Item, v78, v79, v80, v81, v82, v83);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_69;
  v84 = *(_QWORD *)(SelfUserGame + 120);
  if ( v84 )
  {
    if ( !*v77 )
      goto LABEL_69;
    userServantEntity = (*v77)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_69;
    v86 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v152.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v152.fields.fakeValue = v86;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v151 = v152;
    if ( v84 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v151, 0LL) )
      goto LABEL_15;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_69;
    SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_69;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
               v84,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_69;
    SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_69;
    v89 = (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame;
    v91 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v90 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v153.fields.currentCryptoKey = v91;
    *(_QWORD *)&v153.fields.fakeValue = v90;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v153, 0LL);
    if ( !v89 )
      goto LABEL_69;
    v92 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v89,
                               SelfUserGame,
                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v94 = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v95 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v95 )
LABEL_69:
      sub_B5D69C(SelfUserGame, v68);
    v103 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B5D684(SelfUserGame, v95->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( !v95->max_length )
      goto LABEL_71;
    v95->m_Items[0] = (Il2CppObject *)v103;
    sub_B5D560((BattleServantConfConponent_o *)v95->m_Items, v103, v97, v98, v99, v100, v101, v102);
    if ( !v92 )
      goto LABEL_69;
    SelfUserGame = (__int64)ServantEntity__getClassName(v92, 0LL);
    v110 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B5D684(SelfUserGame, v95->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v95->max_length <= 1 )
      goto LABEL_71;
    v95->m_Items[1] = (Il2CppObject *)v110;
    sub_B5D560((BattleServantConfConponent_o *)&v95->m_Items[1], v110, v104, v105, v106, v107, v108, v109);
    v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(Entity->fields.limitCount, 0LL);
    SelfUserGame = (__int64)ServantEntity__getName(v92, v111, -1, 0LL);
    v118 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B5D684(SelfUserGame, v95->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v95->max_length <= 2 )
      goto LABEL_71;
    v95->m_Items[2] = (Il2CppObject *)v118;
    sub_B5D560((BattleServantConfConponent_o *)&v95->m_Items[2], v118, v112, v113, v114, v115, v116, v117);
    if ( !*v77 )
      goto LABEL_69;
    SelfUserGame = (__int64)(*v77)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_69;
    v119 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
    SelfUserGame = (__int64)Rarity__getRarityType(v119, 0LL);
    v126 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B5D684(SelfUserGame, v95->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v95->max_length <= 3 )
      goto LABEL_71;
    v95->m_Items[3] = (Il2CppObject *)v126;
    sub_B5D560((BattleServantConfConponent_o *)&v95->m_Items[3], v126, v120, v121, v122, v123, v124, v125);
    if ( !*v77 )
      goto LABEL_69;
    SelfUserGame = (__int64)(*v77)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_69;
    SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
    v133 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B5D684(SelfUserGame, v95->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v95->max_length <= 4 )
      goto LABEL_71;
    v95->m_Items[4] = (Il2CppObject *)v133;
    sub_B5D560((BattleServantConfConponent_o *)&v95->m_Items[4], v133, v127, v128, v129, v130, v131, v132);
    v134 = *v77;
    if ( !*v77 )
      goto LABEL_69;
    v135 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v134->fields.userServantEntity;
    if ( !v135 )
      goto LABEL_69;
    servantEntity = v134->fields.servantEntity;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v135[6], 0LL);
    if ( !servantEntity )
      goto LABEL_69;
    SelfUserGame = (__int64)ServantEntity__getName(servantEntity, SelfUserGame, -1, 0LL);
    v143 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B5D684(SelfUserGame, v95->obj.klass->_1.element_class);
      if ( !SelfUserGame )
      {
LABEL_72:
        v150 = sub_B5D6BC(SelfUserGame);
        sub_B5D668(v150, 0LL);
      }
    }
    if ( v95->max_length > 5 )
    {
      v95->m_Items[5] = (Il2CppObject *)v143;
      sub_B5D560((BattleServantConfConponent_o *)&v95->m_Items[5], v143, v137, v138, v139, v140, v141, v142);
      v144 = System_String__Format_44656512(v94, v95, 0LL);
      v145 = LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v146 = LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v148 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v148,
        (Il2CppObject *)v66,
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
        CommonUI__OpenConfirmDialog_18201996(
          Instance,
          v93,
          v144,
          v145,
          v146,
          1,
          v148,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_69;
    }
LABEL_71:
    v149 = sub_B5D6C8(SelfUserGame);
    sub_B5D668(v149, 0LL);
  }
LABEL_15:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  EventServantFatigueListViewManager__PushRequest(this, *v77, v87);
}


void __fastcall EventServantFatigueListViewManager__OnClickSortAscendingOrder(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42EC06C & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC06C = 1;
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
      sub_B5D69C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnClickSortButton(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v16; // x21
  ServantSortSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EC06A & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventServantFatigueListViewManager_EndSelectSortKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EC06A = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v16 = (CommonUI_o *)Instance;
    v17 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenServantSortSelectMenu(v16, 7, sort, 0, v17, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnLongPushListView(
        EventServantFatigueListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  EventServantFatigueListViewItem_o *Item; // x0
  const MethodInfo *v22; // x1
  __int64 v23; // x10
  struct UserServantEntity_o *userServantEntity; // x8
  EventServantFatigueListViewItem_o *v25; // x20
  __int128 v26; // q1
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *v28; // x20
  CommonUI_o *v29; // x21
  ServantStatusDialog_EndDelegate_o *v30; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-40h]

  if ( (byte_42EC062 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventServantFatigueListViewManager_EndShowServant__, v6, v7, v8);
    sub_B5D5C4(&EventServantFatigueListViewObject_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&SoundManager_TypeInfo, v18, v19, v20);
    byte_42EC062 = 1;
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
    v23 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1);
    if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v23 )
      goto LABEL_18;
    if ( (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[v23 - 1] != EventServantFatigueListViewObject_TypeInfo )
      goto LABEL_18;
    Item = EventServantFatigueListViewObject__GetItem((EventServantFatigueListViewObject_o *)obj, v22);
    if ( !Item )
      goto LABEL_18;
    userServantEntity = Item->fields.userServantEntity;
    v25 = Item;
    if ( !userServantEntity )
      goto LABEL_18;
    v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v32.fields.fakeValue = v26;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v31 = v32;
    this->fields.statusShowUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v31, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = v25->fields.userServantEntity;
    v29 = (CommonUI_o *)Instance;
    v30 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v30,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndShowServant__,
      0LL);
    if ( !v29 )
LABEL_18:
      sub_B5D69C(Item, v22);
    CommonUI__OpenServantStatusDialog_18212884(v29, 0, v28, v30, 0LL);
  }
}


void __fastcall EventServantFatigueListViewManager__OnMoveEnd(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x0
  System_Action_o *CallbackFunc2; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EC05A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC05A = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.CallbackFunc2, 0LL, v12, v13, v14, v15, v16, v17);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  DataManager_o *limitCountSupport; // x0
  __int64 v31; // x1
  struct UserServantEntity_o *userServantEntity; // x19
  DataManager_o *v33; // x23
  UserServantCollectionMaster_o *v34; // x21
  int64_t v35; // x22
  __int64 v36; // x24
  __int64 v37; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v39; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v41; // x8
  int64_t v42; // x0
  __int128 v43; // q0
  NetworkManager_ResultCallbackFunc_o *v44; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v46; // q0
  CardFavoriteRequest_o *v47; // x20
  int32_t v48; // w27
  int32_t v49; // w28
  int32_t v50; // w21
  bool IsLock; // w23
  char v52; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v56; // w0
  __int64 v57; // x8
  int32_t randomSettingSupport; // w19
  int32_t v59; // [xsp+50h] [xbp-110h]
  int32_t v60; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v62; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v64; // [xsp+70h] [xbp-F0h]
  __int64 v65; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_42EC078 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventServantFatigueListViewManager_EndPushRequest__, v6, v7, v8);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28, v29);
    byte_42EC078 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v33 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v33 || !userServantEntity )
    goto LABEL_21;
  v34 = (UserServantCollectionMaster_o *)limitCountSupport;
  v35 = *(_QWORD *)&v33->fields.m_CachedPtr;
  v37 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v37;
  *(_QWORD *)&v70.fields.fakeValue = v36;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v70, 0LL);
  if ( !v34 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v34, v35, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v39 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  v41 = *(_QWORD *)&v33->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v39;
  v65 = v41;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v68 = v69;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v68, 0LL);
  v43 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v33->fields.writeMasterDataThread;
  v64 = v42;
  *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v67.fields.fakeValue = v43;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v67, 0LL);
  v44 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v44,
    (Il2CppObject *)this,
    Method_EventServantFatigueListViewManager_EndPushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v44,
                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v46 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v47 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v66.fields.fakeValue = v46;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v66, 0LL);
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v52 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v57 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v71.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v56;
  *(_QWORD *)&v71.fields.currentCryptoKey = v57;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v71, 0LL);
  if ( !v47 )
LABEL_21:
    sub_B5D69C(limitCountSupport, v31);
  CardFavoriteRequest__beginRequest(
    v47,
    targetUsrSVtId,
    v60,
    v59,
    v48,
    v49,
    v50,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v62,
    IsLock,
    v52 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v65 != v64,
    0LL);
}


void __fastcall EventServantFatigueListViewManager__RefreshListDisp(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  int32_t size; // w8
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *v11; // x20
  int v12; // w21
  __int64 v13; // x22
  unsigned int v14; // w8

  if ( (byte_42EC051 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__, v5, v6, v7);
    byte_42EC051 = 1;
  }
  ObjectList = EventServantFatigueListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_13;
  size = ObjectList->fields._size;
  v11 = ObjectList;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v12 = ObjectList->fields._size;
    if ( v12 >= 1 )
    {
      v13 = 0LL;
      v14 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v14 <= (unsigned int)v13 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        ObjectList = (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v11->fields._items->m_Items[v13];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_EventServantFatigueListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        if ( (int)v13 + 1 >= v12 )
          return;
        v14 = v11->fields._size;
        ++v13;
      }
LABEL_13:
      sub_B5D69C(ObjectList, v9);
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *ObjectList; // x0
  __int64 v21; // x1
  int32_t size; // w8
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *v23; // x21
  int v24; // w24
  __int64 v25; // x25
  unsigned int v26; // w8
  EventServantFatigueListViewObject_o *v27; // x22
  System_Action_o *v28; // x23
  const MethodInfo *v29; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EC059 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_EventServantFatigueListViewManager_OnMoveEnd__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v17, v18, v19);
    byte_42EC059 = 1;
  }
  ObjectList = EventServantFatigueListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v23 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v24 = ObjectList->fields._size;
    if ( v24 >= 1 )
    {
      v25 = 0LL;
      v26 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v26 <= (unsigned int)v25 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v27 = v23->fields._items->m_Items[v25];
        v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v28, (Il2CppObject *)this, Method_EventServantFatigueListViewManager_OnMoveEnd__, 0LL);
        if ( !v27 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventServantFatigueListViewObject__Init(
          v27,
          mode,
          v28,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v29);
        if ( (int)v25 + 1 >= v24 )
          return;
        v26 = v23->fields._size;
        ++v25;
      }
LABEL_14:
      sub_B5D69C(ObjectList, v21);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__SetFilterButtonImage(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v10; // x8

  if ( (byte_42EC069 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v5, v6, v7);
    byte_42EC069 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B5D69C(sort, method);
  }
  v10 = (System_String_o **)&StringLiteral_17201/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v10 = (System_String_o **)&StringLiteral_17202/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v10, 0LL);
}


void __fastcall EventServantFatigueListViewManager__SetHeaderMsg(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UILabel_o *recoveryFatigueInfoMsgLabel; // x19
  __int64 *v18; // x8
  System_String_o *v19; // x0
  __int64 v20; // x1

  if ( (byte_42EC053 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11894/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/, v14, v15, v16);
    byte_42EC053 = 1;
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
      v18 = &StringLiteral_11894/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/;
      goto LABEL_20;
    case 1:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = &StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_20;
    case 2:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = &StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_20;
    case 3:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = &StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_20:
      v19 = LocalizationManager__Get((System_String_o *)*v18, 0LL);
      if ( !recoveryFatigueInfoMsgLabel )
        sub_B5D69C(v19, v20);
      UILabel__set_text(recoveryFatigueInfoMsgLabel, v19, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.Callback,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventServantFatigueListViewManager__SetMode_31561708(this, mode, v10);
}


void __fastcall EventServantFatigueListViewManager__SetMode_31561708(
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


void __fastcall EventServantFatigueListViewManager__SetMode_31561824(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventServantFatigueListViewManager__SetMode_31561708(this, mode, v10);
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
  if ( (byte_42EC058 & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_B5D5C4(
                                                     &EventServantFatigueListViewObject_TypeInfo,
                                                     (_DWORD)obj,
                                                     (_DWORD)item,
                                                     method);
    byte_42EC058 = 1;
  }
  if ( !obj
    || (v6 = *(&EventServantFatigueListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventServantFatigueListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventServantFatigueListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v24; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v26; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v28; // x8
  int32_t sortKind; // w9
  System_String_o **v30; // x8
  struct ListViewSort_o *v31; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v33; // x9
  System_String_o **v34; // x10
  System_String_o **v35; // x8
  struct ListViewSort_o *v36; // x8
  System_String_o **v37; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v39; // x20

  if ( (byte_42EC06D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42EC06D = 1;
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
    v26 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v26 )
      goto LABEL_45;
    UILabel__set_text(v26, (System_String_o *)sort, 0LL);
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
    v28 = this->fields.sort;
    if ( !v28 )
      goto LABEL_45;
    sortKind = v28->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_45;
      v30 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v30, 0LL);
      v31 = this->fields.sort;
      if ( !v31 )
        goto LABEL_45;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_45;
      isAscendingOrder = v31->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
      v34 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_45;
      v35 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v35, 0LL);
      v36 = this->fields.sort;
      if ( !v36 )
        goto LABEL_45;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_45;
      isAscendingOrder = v36->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
      v34 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v37 = v33;
    else
      v37 = v34;
    UISprite__set_spriteName((UISprite_o *)sort, *v37, 0LL);
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
      v39 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_34067136(
                                 sort,
                                 this->fields.bonusEventIdList,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL);
      if ( v39 )
      {
        UILabel__set_text(v39, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_45:
      sub_B5D69C(sort, v24);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewManager__SetStatusKind(
        EventServantFatigueListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v28; // x8
  __int64 *v29; // x8
  __int64 *v30; // x8
  __int64 *v31; // x8
  const MethodInfo *v32; // x1

  if ( (byte_42EC052 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17347/*"button_push_reg"*/, modeKind, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_17348/*"button_push_unreg"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17333/*"button_allchoice_reg"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_17336/*"button_alllock_unreg"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_17349/*"button_select_reg"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17350/*"button_select_unreg"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_17335/*"button_alllock_reg"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_17334/*"button_allchoice_unreg"*/, v24, v25, v26);
    byte_42EC052 = 1;
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
  v28 = &StringLiteral_17349/*"button_select_reg"*/;
  if ( modeKind )
    v28 = &StringLiteral_17350/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v28, 0LL);
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
  v29 = &StringLiteral_17335/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v29 = &StringLiteral_17336/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v29, 0LL);
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
  v30 = &StringLiteral_17333/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v30 = &StringLiteral_17334/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v30, 0LL);
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
  v31 = &StringLiteral_17347/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v31 = &StringLiteral_17348/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v31, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_B5D69C(statusTabButton, *(_QWORD *)&modeKind);
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
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
  EventServantFatigueListViewManager_o *v9; // x19
  struct System_Int32_array *servantFilterEventIdList; // x8
  struct ListViewSort_o *v11; // x9
  System_Int32_array **v12; // x1
  UnityEngine_Object_o *bonusFilterKindButton; // x21
  struct ListViewSort_o *v14; // x8
  struct ListViewSort_o *sort; // x8

  v9 = this;
  if ( (byte_42EC067 & 1) == 0 )
  {
    this = (EventServantFatigueListViewManager_o *)sub_B5D5C4(
                                                     &UnityEngine_Object_TypeInfo,
                                                     (_DWORD)setupInfo,
                                                     (_DWORD)method,
                                                     v3);
    byte_42EC067 = 1;
  }
  if ( !setupInfo )
  {
    sort = v9->fields.sort;
    if ( sort )
    {
      sort->fields.isBonusKind = 0;
      v9->fields.bonusEventIdList = 0LL;
      sub_B5D560(
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
  sub_B5D560(
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
    sub_B5D69C(this, setupInfo);
  }
}


void __fastcall EventServantFatigueListViewManager__StatusRequest(
        EventServantFatigueListViewManager_o *this,
        EventServantFatigueListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t modeKind; // w8
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v24; // x1
  System_Int64_array *v25; // x2
  System_Int64_array *v26; // x1
  bool v27; // w4
  bool v28; // w5
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  NetworkManager_ResultCallbackFunc_o *v35; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42EC074 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventServantFatigueListViewManager_EndStatusSync__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    byte_42EC074 = 1;
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      v35 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v35,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v35,
                                                                       (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v25 = unchoiceList;
        v26 = choiceList;
        v28 = 1;
        v27 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B5D69C(Request_WarBoardWallAttackRequest, v24);
    }
  }
  else if ( modeKind == 1 && EventServantFatigueListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v22 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      Method_EventServantFatigueListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v22,
                                                                     (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v25 = unlockList;
      v26 = lockList;
      v27 = 1;
      v28 = 0;
LABEL_17:
      CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v26, v25, 0, v27, v28, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *scrollView; // x20
  int64_t Time; // x0
  const MethodInfo *v10; // x1

  if ( (byte_42EC04E & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EC04E = 1;
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
      EventServantFatigueListViewManager__UpdateDisp(this, v10);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__UpdateDisp(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_EventServantFatigueListViewObject__o *ObjectList; // x0
  __int64 v18; // x1
  struct System_Collections_Generic_List_GameObject__o *v19; // x8
  const MethodInfo *v20; // x1
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EC04F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v14, v15, v16);
    byte_42EC04F = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = EventServantFatigueListViewManager__get_ObjectList(this, method);
  if ( ObjectList )
  {
    v19 = this->fields.objectList;
    if ( !v19 )
      sub_B5D69C(ObjectList, v18);
    if ( v19->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v21,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v21,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__MoveNext__) )
      {
        if ( !v21.fields.current )
          sub_B5D69C(0LL, v20);
        EventServantFatigueListViewObject__UpdateDisp((EventServantFatigueListViewObject_o *)v21.fields.current, v20);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v21,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventServantFatigueListViewObject__Dispose__);
    }
  }
}


void __fastcall EventServantFatigueListViewManager__add_Callback(
        EventServantFatigueListViewManager_o *this,
        EventServantFatigueListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *Callback; // x21
  struct EventServantFatigueListViewManager_CallbackFunc_o **p_Callback; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventServantFatigueListViewManager_o *v11; // x0
  EventServantFatigueListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC046 & 1) == 0 )
  {
    sub_B5D5C4(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC046 = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  p_Callback = &this->fields.Callback;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(Callback, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EventServantFatigueListViewManager_CallbackFunc_c *)v8->klass != EventServantFatigueListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_Callback, v8, Callback);
    v10 = Callback == (System_Delegate_o *)v9;
    Callback = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  EventServantFatigueListViewManager__remove_Callback(v11, v12, v13);
}


void __fastcall EventServantFatigueListViewManager__add_CallbackFunc2(
        EventServantFatigueListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *CallbackFunc2; // x21
  struct System_Action_o **p_CallbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventServantFatigueListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC048 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC048 = 1;
  }
  CallbackFunc2 = (System_Delegate_o *)this->fields.CallbackFunc2;
  p_CallbackFunc2 = &this->fields.CallbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(CallbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_CallbackFunc2, v8, CallbackFunc2);
    v10 = CallbackFunc2 == (System_Delegate_o *)v9;
    CallbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  EventServantFatigueListViewManager__remove_CallbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_EventServantFatigueListViewObject__o *__fastcall EventServantFatigueListViewManager__get_ClippingObjectList(
        EventServantFatigueListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  int size; // w22
  unsigned int v25; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x21

  if ( (byte_42EC04D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo, v17, v18, v19);
    byte_42EC04D = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v25 = 0;
    do
    {
      if ( objectList->fields._size <= v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Component_srcLineSprite = objectList->fields._items->m_Items[v25];
      if ( !Component_srcLineSprite )
        break;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
      if ( !Component_srcLineSprite )
        break;
      v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)EventServantFatigueListViewObject__GetItem(
                                                              (EventServantFatigueListViewObject_o *)Component_srcLineSprite,
                                                              v22);
      if ( !Component_srcLineSprite )
        break;
      v22 = (const MethodInfo *)Component_srcLineSprite;
      if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
        || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_23920288(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)Component_srcLineSprite,
                                                                    0LL),
            ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
      {
        if ( !v20 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          v26,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
      }
      if ( (int)++v25 >= size )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v20;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B5D69C(Component_srcLineSprite, v22);
  }
  return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v20;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v25; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v28; // x23
  UnityEngine_Object_o *v29; // x21

  if ( (byte_42EC04C & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42EC04C = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventServantFatigueListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v28 = 0LL;
    do
    {
      if ( v28 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v29 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v28];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v29 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v29,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewObject___);
        if ( !v23 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v23,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventServantFatigueListViewObject__Add__);
      }
      if ( (__int64)++v28 >= size )
        return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v23;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B5D69C(Component_srcLineSprite, v25);
  }
  return (System_Collections_Generic_List_EventServantFatigueListViewObject__o *)v23;
}


void __fastcall EventServantFatigueListViewManager__remove_Callback(
        EventServantFatigueListViewManager_o *this,
        EventServantFatigueListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *Callback; // x21
  struct EventServantFatigueListViewManager_CallbackFunc_o **p_Callback; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventServantFatigueListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC047 & 1) == 0 )
  {
    sub_B5D5C4(&EventServantFatigueListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC047 = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  p_Callback = &this->fields.Callback;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(Callback, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EventServantFatigueListViewManager_CallbackFunc_c *)v8->klass != EventServantFatigueListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_Callback, v8, Callback);
    v10 = Callback == (System_Delegate_o *)v9;
    Callback = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  EventServantFatigueListViewManager__add_CallbackFunc2(v11, v12, v13);
}


void __fastcall EventServantFatigueListViewManager__remove_CallbackFunc2(
        EventServantFatigueListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *CallbackFunc2; // x21
  struct System_Action_o **p_CallbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_42EC049 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC049 = 1;
  }
  CallbackFunc2 = (System_Delegate_o *)this->fields.CallbackFunc2;
  p_CallbackFunc2 = &this->fields.CallbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(CallbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_CallbackFunc2, v8, CallbackFunc2);
    v10 = CallbackFunc2 == (System_Delegate_o *)v9;
    CallbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  EventServantFatigueListViewManager__DeleteContinueData(v11);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall EventServantFatigueListViewManager_CallbackFunc__BeginInvoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = index;
  v15 = kind;
  if ( (byte_42E5688 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, index, callback);
    sub_B5D5C4(&EventServantFatigueListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E5688 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(EventServantFatigueListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall EventServantFatigueListViewManager_CallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&index);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
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
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
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
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
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
            v17 = sub_AF54C0(v22, class_0, v10, v12);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5689 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isRequest, (_DWORD)callback, object);
    byte_42E5689 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall EventServantFatigueListViewManager_RequestCallbackFunc__EndInvoke(
        EventServantFatigueListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  EventServantFatigueListViewManager_RequestCallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isRequest, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isRequest, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isRequest,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isRequest, v21);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  CommonUI_o *v14; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_42E5687 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(
      &Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__,
      v9,
      v10,
      v11);
    byte_42E5687 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventServantFatigueListViewManager___c__DisplayClass107_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B5D560(&this->fields.__9__1);
    }
    if ( v14 )
    {
      CommonUI__CloseConfirmDialog_18202348(v14, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(Instance, v13);
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
    sub_B5D69C(0LL, method);
  EventServantFatigueListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}