void __fastcall EventFortificationListViewManager___cctor(const MethodInfo *method)
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
  struct EventFortificationListViewManager_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42E9F34 & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationListViewManager_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&ListViewSort_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_6272/*"EventServantFatigueList"*/, v11, v12, v13);
    byte_42E9F34 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventFortificationListViewManager_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_6272/*"EventServantFatigueList"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6272/*"EventServantFatigueList"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v17 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v17, SORT_SAVE_KEY, 3, 0, 0LL);
  v18 = EventFortificationListViewManager_TypeInfo->static_fields;
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


void __fastcall EventFortificationListViewManager___ctor(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventFortificationListViewManager__CallbackFortificationRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventFortificationListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  bool v9; // w1
  UserServantEntity_o *targetInUserServantEntity; // x2

  v5 = this;
  if ( (byte_42E9F1D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool__UserServantEntity__Invoke__, (_DWORD)result, (_DWORD)method, v3);
    this = (EventFortificationListViewManager_o *)sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v6, v7, v8);
    byte_42E9F1D = 1;
  }
  if ( !result )
    goto LABEL_11;
  if ( !System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    this = (EventFortificationListViewManager_o *)v5->fields.fortificationConfirmDialog;
    if ( this )
    {
      FortificationConfirmDialogComponent__Close((FortificationConfirmDialogComponent_o *)this, 0LL);
      this = (EventFortificationListViewManager_o *)v5->fields.selectAfterCallback;
      if ( this )
      {
        targetInUserServantEntity = v5->fields.targetInUserServantEntity;
        v9 = 1;
        goto LABEL_10;
      }
    }
LABEL_11:
    sub_B5D69C(this, result);
  }
  this = (EventFortificationListViewManager_o *)v5->fields.selectAfterCallback;
  if ( !this )
    goto LABEL_11;
  v9 = 0;
  targetInUserServantEntity = 0LL;
LABEL_10:
  System_Action_bool__UserServantEntity___Invoke(
    (System_Action_bool__UserServantEntity__o *)this,
    v9,
    targetInUserServantEntity,
    (const MethodInfo_25976CC *)Method_System_Action_bool__UserServantEntity__Invoke__);
}


void __fastcall EventFortificationListViewManager__CloseFortificationConfirmDialog(
        EventFortificationListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x20
  NetworkManager_ResultCallbackFunc_o *v36; // x21
  EnterUserSvtInfo_array *Request_WarBoardWallAttackRequest; // x0
  __int64 v38; // x1
  struct UserServantEntity_o *targetInUserServantEntity; // x9
  struct UserServantEntity_o *targetOutUserServantEntity; // x10
  EventFortificationRequest_o *v41; // x21
  struct EventFortificationWorkItem_o *v42; // x8
  struct EventFortificationDetailEntity_o *v43; // x10
  __int128 v44; // q1
  int32_t v45; // w22
  int32_t v46; // w23
  __int128 *v47; // x0
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x9
  int32_t position; // w24
  int32_t fortificationIdx; // w23
  EnterUserSvtInfo_o *v52; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v54; // x1
  struct EventFortificationDetailEntity_o *v55; // x10
  __int128 v56; // q1
  int64_t v57; // x25
  EnterUserSvtInfo_o *v58; // x24
  int32_t eventId; // w19
  const MethodInfo *v60; // x3
  __int128 v61[2]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v62[2]; // [xsp+20h] [xbp-80h] BYREF
  __int128 v63; // [xsp+40h] [xbp-60h]
  __int128 v64; // [xsp+50h] [xbp-50h]

  if ( (byte_42E9F1C & 1) == 0 )
  {
    sub_B5D5C4(&EnterUserSvtInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventFortificationListViewManager_CallbackFortificationRequest__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventFortificationRequest___, v20, v21, v22);
    sub_B5D5C4(&NetworkManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&SoundManager_TypeInfo, v32, v33, v34);
    byte_42E9F1C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  v36 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v36,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CallbackFortificationRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EnterUserSvtInfo_array *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v36,
                                                                  (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  targetInUserServantEntity = this->fields.targetInUserServantEntity;
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v41 = (EventFortificationRequest_o *)Request_WarBoardWallAttackRequest;
  if ( !targetInUserServantEntity )
  {
    if ( !targetOutUserServantEntity )
      return;
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( targetFortificationWorkItem )
    {
      eventFortificationDetailEntity = targetFortificationWorkItem->fields.eventFortificationDetailEntity;
      if ( eventFortificationDetailEntity )
      {
        position = targetFortificationWorkItem->fields.position;
        fortificationIdx = eventFortificationDetailEntity->fields.fortificationIdx;
        v52 = (EnterUserSvtInfo_o *)sub_B5D694(EnterUserSvtInfo_TypeInfo);
        EnterUserSvtInfo___ctor(v52, fortificationIdx, position, 0LL, 0LL);
        if ( v35 )
        {
          v53 = v35;
          v54 = (EventMissionProgressRequest_Argument_ProgressData_o *)v52;
          goto LABEL_30;
        }
      }
    }
    goto LABEL_33;
  }
  v42 = this->fields.targetFortificationWorkItem;
  if ( !targetOutUserServantEntity )
  {
    if ( v42 )
    {
      v55 = v42->fields.eventFortificationDetailEntity;
      if ( v55 )
      {
        v56 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
        v45 = v55->fields.fortificationIdx;
        v46 = v42->fields.position;
        v63 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
        v64 = v56;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v47 = v61;
        v61[0] = v63;
        v61[1] = v64;
        goto LABEL_28;
      }
    }
LABEL_33:
    sub_B5D69C(Request_WarBoardWallAttackRequest, v38);
  }
  if ( !v42 )
    goto LABEL_33;
  v43 = v42->fields.eventFortificationDetailEntity;
  if ( !v43 )
    goto LABEL_33;
  v44 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
  v45 = v43->fields.fortificationIdx;
  v46 = v42->fields.position;
  v63 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
  v64 = v44;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v47 = v62;
  v62[0] = v63;
  v62[1] = v64;
LABEL_28:
  v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v47,
          0LL);
  v58 = (EnterUserSvtInfo_o *)sub_B5D694(EnterUserSvtInfo_TypeInfo);
  EnterUserSvtInfo___ctor(v58, v45, v46, v57, 0LL);
  if ( !v35 )
    goto LABEL_33;
  v53 = v35;
  v54 = (EventMissionProgressRequest_Argument_ProgressData_o *)v58;
LABEL_30:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v53,
    v54,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
  eventId = this->fields.eventId;
  Request_WarBoardWallAttackRequest = (EnterUserSvtInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v35,
                                                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v41 )
    goto LABEL_33;
  EventFortificationRequest__beginRequest(v41, eventId, Request_WarBoardWallAttackRequest, v60);
}


void __fastcall EventFortificationListViewManager__CreateList(
        EventFortificationListViewManager_o *this,
        int32_t eventId,
        FortificationConfirmDialogComponent_o *fortificationConfirmDialog,
        EventFortificationWorkItem_o *targetItem,
        System_Action_bool__UserServantEntity__o *afterCallback,
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
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  __int64 v62; // x21
  __int64 sort; // x0
  const MethodInfo *v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  EventFortificationListViewManager_c *v77; // x0
  struct ListViewSort_o *servantSortStatus; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  struct EventFortificationWorkItem_o **p_targetFortificationWorkItem; // x24
  struct EventFortificationWorkItem_o *v98; // x1
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  struct ListViewSort_o *v117; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  System_Int32_array *v121; // x23
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_Int32_array **v123; // x0
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v131; // q0
  __int128 v132; // q1
  struct EventFortificationWorkItem_o *v133; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v134; // x24
  int32_t v135; // w28
  UserServantEntity_o *v136; // x27
  EventFortificationListViewItem_o *v137; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v138; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v139; // x0
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v141; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v142; // x0
  void *monitor; // x8
  unsigned __int64 v144; // x28
  signed __int64 v145; // x20
  UserServantEntity_o *v146; // x25
  int32_t v147; // w26
  struct EventFortificationWorkItem_o *v148; // x27
  EventFortificationListViewItem_o *v149; // x0
  EventFortificationWorkItem_o *v150; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *v151; // x21
  __int64 v152; // x0
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v154; // x2
  const MethodInfo *v155; // x1
  int64_t v156; // [xsp+0h] [xbp-D0h]
  EventUpValSetupInfo_o *v157; // [xsp+8h] [xbp-C8h]
  EventFortificationListViewManager_o *v158; // [xsp+10h] [xbp-C0h]
  struct EventFortificationWorkItem_o **v159; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v161[2]; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_42E9F10 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantClassMaster___,
      eventId,
      (_DWORD)fortificationConfirmDialog,
      targetItem);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v17, v18, v19);
    sub_B5D5C4(&EventFortificationListViewItem_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&EventFortificationListViewManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&EventUpValSetupInfo_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Func_UserServantEntity__bool___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Func_UserServantEntity__bool__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&int___TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v38, v39, v40);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__, v50, v51, v52);
    sub_B5D5C4(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__, v53, v54, v55);
    sub_B5D5C4(&EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v59, v60, v61);
    byte_42E9F10 = 1;
  }
  memset(&v161[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v62 = sub_B5D694(EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo);
  EventFortificationListViewManager___c__DisplayClass48_0___ctor(
    (EventFortificationListViewManager___c__DisplayClass48_0_o *)v62,
    0LL);
  if ( !v62 )
    goto LABEL_59;
  *(_QWORD *)(v62 + 16) = targetItem;
  v159 = (struct EventFortificationWorkItem_o **)(v62 + 16);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v62 + 16),
    (System_Int32_array **)targetItem,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v77 = EventFortificationListViewManager_TypeInfo;
  if ( (BYTE3(EventFortificationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v77 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v77->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)servantSortStatus,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_59;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_59;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)sort, 0LL, 1, 0LL, 79, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_59;
  TitleInfoControl__setBackBtnSprite_18313300((TitleInfoControl_o *)sort, 1, 0, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_59;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_59;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v79, v80, v81, v82, v83, v84);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    0LL,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  this->fields.eventId = eventId;
  this->fields.fortificationConfirmDialog = fortificationConfirmDialog;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fortificationConfirmDialog,
    (System_Int32_array **)fortificationConfirmDialog,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  p_targetFortificationWorkItem = &this->fields.targetFortificationWorkItem;
  v98 = *v159;
  this->fields.targetFortificationWorkItem = *v159;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetFortificationWorkItem,
    (System_Int32_array **)v98,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  this->fields.selectAfterCallback = afterCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectAfterCallback,
    (System_Int32_array **)afterCallback,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  v117 = this->fields.sort;
  this->fields.modeKind = 0;
  if ( !v117 )
    goto LABEL_59;
  iconScaleKind = v117->fields.iconScaleKind;
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
      goto LABEL_20;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
LABEL_20:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_59;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_59;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_59;
  v121 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
  {
LABEL_53:
    v152 = sub_B5D6C8(sort);
    sub_B5D668(v152, 0LL);
  }
  *(_DWORD *)(sort + 32) = eventId;
  v157 = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_24751852(v157, v121, 1, 0, 0, 0LL);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)sort,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_59;
  v123 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)sort,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  *(_QWORD *)(v62 + 24) = v123;
  sub_B5D560((BattleServantConfConponent_o *)(v62 + 24), v123, v124, v125, v126, v127, v128, v129);
  if ( !*p_targetFortificationWorkItem )
    goto LABEL_59;
  userServantEntity = (*p_targetFortificationWorkItem)->fields.userServantEntity;
  if ( userServantEntity )
  {
    v132 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    v131 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v161, -1LL, 0LL);
    v132 = *(_OWORD *)&v161[0].fields.currentCryptoKey;
    v131 = *(_OWORD *)&v161[0].fields.fakeValue;
  }
  *(_OWORD *)&v161[1].fields.currentCryptoKey = v132;
  *(_OWORD *)&v161[1].fields.fakeValue = v131;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v160 = v161[1];
  sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v160, 0LL);
  v156 = sort;
  if ( !MasterData_WarQuestSelectionMaster
    || (sort = (__int64)UserServantMaster__getOrganizationList(MasterData_WarQuestSelectionMaster, 0LL),
        (v133 = *v159) == 0LL) )
  {
LABEL_59:
    sub_B5D69C(sort, v64);
  }
  v134 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  v158 = this;
  if ( !v133->fields.isSvtDataSetInMaster )
  {
    eventFortificationDetailEntity = v133->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      goto LABEL_59;
    if ( eventFortificationDetailEntity->fields.classId )
    {
      v141 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v141,
        (Il2CppObject *)v62,
        Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_UserServantEntity__bool___ctor__);
      v142 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               v134,
               (System_Func_TSource__bool__o *)v141,
               (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      sort = (__int64)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                        v142,
                        (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
      v134 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
    }
LABEL_47:
    if ( !v134 )
      goto LABEL_59;
    goto LABEL_48;
  }
  v135 = this->fields.eventId;
  v136 = v133->fields.userServantEntity;
  v137 = (EventFortificationListViewItem_o *)sub_B5D694(EventFortificationListViewItem_TypeInfo);
  EventFortificationListViewItem___ctor(v137, v136, v135, v156, v157, v133, 0LL);
  v138 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v138,
    (Il2CppObject *)v62,
    Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_UserServantEntity__bool___ctor__);
  v139 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
           v134,
           (System_Func_TSource__bool__o *)v138,
           (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  sort = (__int64)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                    v139,
                    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
  if ( !*(_QWORD *)(v62 + 16) )
    goto LABEL_59;
  v134 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  sort = EventFortificationWorkItem__get_IsNpc(*(EventFortificationWorkItem_o **)(v62 + 16), v64);
  this = v158;
  if ( (sort & 1) == 0 )
    goto LABEL_47;
  sort = (__int64)v158->fields.itemList;
  if ( !sort )
    goto LABEL_59;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v137,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
  if ( !v134 )
    goto LABEL_59;
LABEL_48:
  monitor = v134[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v144 = 0LL;
    v145 = (int)monitor;
    while ( 1 )
    {
      v146 = (UserServantEntity_o *)*((_QWORD *)&v134[2].klass + v144);
      v147 = this->fields.eventId;
      v148 = *v159;
      v149 = (EventFortificationListViewItem_o *)sub_B5D694(EventFortificationListViewItem_TypeInfo);
      v150 = v148;
      this = v158;
      v151 = (EventMissionProgressRequest_Argument_ProgressData_o *)v149;
      EventFortificationListViewItem___ctor(v149, v146, v147, v156, v157, v150, 0LL);
      sort = (__int64)v158->fields.itemList;
      if ( !sort )
        goto LABEL_59;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        v151,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v144 >= v145 )
        break;
      if ( v144 >= LODWORD(v134[1].monitor) )
        goto LABEL_53;
    }
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_59;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EventFortificationListViewManager__SetStatusKind(this, this->fields.modeKind, v154);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventFortificationListViewManager__SetFilterButtonImage(this, v155);
}


void __fastcall EventFortificationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  EventFortificationListViewManager_c *v4; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_42E9F0C & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationListViewManager_TypeInfo, v1, v2, v3);
    byte_42E9F0C = 1;
  }
  v4 = EventFortificationListViewManager_TypeInfo;
  if ( (BYTE3(EventFortificationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v4 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v4->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_B5D69C(0LL, v1);
  ListViewSort__DeleteContinueData(servantSortStatus, 0LL);
}


void __fastcall EventFortificationListViewManager__DestroyList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B5D69C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall EventFortificationListViewManager__EndClickTabChoice(
        EventFortificationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  EventFortificationListViewManager__SetStatusKind(this, 2, method);
  EventFortificationListViewManager__RefreshListDisp(this, v4);
  EventFortificationListViewManager__ModifyList(this, 0, v5);
  EventFortificationListViewManager__SetMode_27776948(this, 2, v6);
}


void __fastcall EventFortificationListViewManager__EndClickTabLock(
        EventFortificationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  EventFortificationListViewManager__SetStatusKind(this, 1, method);
  EventFortificationListViewManager__RefreshListDisp(this, v4);
  EventFortificationListViewManager__ModifyList(this, 0, v5);
  EventFortificationListViewManager__SetMode_27776948(this, 2, v6);
}


void __fastcall EventFortificationListViewManager__EndClickTabPush(
        EventFortificationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  EventFortificationListViewManager__SetStatusKind(this, 3, method);
  EventFortificationListViewManager__RefreshListDisp(this, v4);
  EventFortificationListViewManager__ModifyList(this, 0, v5);
  EventFortificationListViewManager__SetMode_27776948(this, 2, v6);
}


void __fastcall EventFortificationListViewManager__EndClickTabStatus(
        EventFortificationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  EventFortificationListViewManager__SetStatusKind(this, 0, method);
  EventFortificationListViewManager__ModifyList(this, 0, v4);
  EventFortificationListViewManager__SetMode_27776948(this, 2, v5);
}


void __fastcall EventFortificationListViewManager__EndPushRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__ModifyList(this, 0, method);
  EventFortificationListViewManager__SetMode_27776948(this, 2, v4);
}


void __fastcall EventFortificationListViewManager__EndSelectFilterKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E9F22 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E9F22 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EventFortificationListViewManager__SetFilterButtonImage(this, v6);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  CommonUI__CloseServantFilterSelectMenu(Instance, 0LL, 0LL);
}


void __fastcall EventFortificationListViewManager__EndSelectSortKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42E9F26 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E9F26 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__EndShowServant(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  CommonUI_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E9F1F & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E9F1F = 1;
  }
  EventFortificationListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventFortificationListViewManager__ModifyList(this, 0, v5);
  EventFortificationListViewManager__SetMode_27776948(this, 2, v6);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


void __fastcall EventFortificationListViewManager__EndStatusSync(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EventFortificationListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  BattleServantConfConponent_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (BattleServantConfConponent_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0LL;
    sub_B5D560(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    EventFortificationListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventFortificationListViewManager__GetAmountSortValue(
        EventFortificationListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventFortificationListViewManager_o *v5; // x20
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
  if ( (byte_42E9F20 & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationListViewItem_TypeInfo, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10, v11);
    this = (EventFortificationListViewManager_o *)sub_B5D5C4(
                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                    v12,
                                                    v13,
                                                    v14);
    byte_42E9F20 = 1;
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
      v20 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (EventFortificationListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != EventFortificationListViewItem_TypeInfo )
      {
        break;
      }
      if ( (EventFortificationListViewItem_c *)v19->klass->_2.typeHierarchy[*(&EventFortificationListViewItem_TypeInfo->_2.bitflags2
                                                                            + 1)
                                                                          - 1] != EventFortificationListViewItem_TypeInfo )
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
      this = (EventFortificationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
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


EventFortificationListViewItem_o *__fastcall EventFortificationListViewManager__GetItem(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_42E9F17 & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationListViewItem_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    byte_42E9F17 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (EventFortificationListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == EventFortificationListViewItem_TypeInfo )
    return (EventFortificationListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


bool __fastcall EventFortificationListViewManager__GetSwapChoiceList(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_42E9F2A & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationListViewItem_TypeInfo, (_DWORD)choiceList, (_DWORD)unchoiceList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    byte_42E9F2A = 1;
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
      v44 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (EventFortificationListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != EventFortificationListViewItem_TypeInfo )
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


bool __fastcall EventFortificationListViewManager__GetSwapLockList(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_42E9F29 & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationListViewItem_TypeInfo, (_DWORD)lockList, (_DWORD)unlockList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    byte_42E9F29 = 1;
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
      v44 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (EventFortificationListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != EventFortificationListViewItem_TypeInfo )
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


void __fastcall EventFortificationListViewManager__InitBackListView(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__StatusRequest(this, 0LL, v2);
  EventFortificationListViewManager__SetStatusKind(this, 0, v4);
}


void __fastcall EventFortificationListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  EventFortificationListViewManager_c *v4; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_42E9F0D & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationListViewManager_TypeInfo, v1, v2, v3);
    byte_42E9F0D = 1;
  }
  v4 = EventFortificationListViewManager_TypeInfo;
  if ( (BYTE3(EventFortificationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v4 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v4->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_B5D69C(0LL, v1);
  ListViewSort__InitLoad(servantSortStatus, 0LL);
}


void __fastcall EventFortificationListViewManager__ModifyItem(
        EventFortificationListViewManager_o *this,
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
  EventFortificationListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v41; // q0
  int64_t v42; // x0
  __int128 v43; // q0
  UnityEngine_Object_o *viewObject; // x21
  __int64 v45; // x1
  struct ListViewObject_o *v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+60h] [xbp-60h] BYREF

  if ( (byte_42E9F14 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v15, v16, v17);
    sub_B5D5C4(&EventFortificationListViewItem_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    byte_42E9F14 = 1;
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v49,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v50.fields.current = (Il2CppObject *)v49.fields.fakeValue;
      *(_OWORD *)&v50.fields.list = *(_OWORD *)&v49.fields.currentCryptoKey;
      while ( 1 )
      {
        v36 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v50,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v36 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v50,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v50.fields.current
          && (v38 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v50.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v38) )
        {
          if ( (EventFortificationListViewItem_c *)v50.fields.current->klass->_2.typeHierarchy[v38 - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v50.fields.current;
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
            *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v49.fields.fakeValue = v41;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v48 = v49;
            v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v48, 0LL);
            v43 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
            *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v47.fields.fakeValue = v43;
            if ( v42 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v47, 0LL) )
              EventFortificationListViewItem__ModifyItem(current, Entity, 0LL);
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
          v46 = current->fields.viewObject;
          if ( !v46 )
            sub_B5D69C(0LL, v45);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v46->klass->vtable._5_SetItem.method)(
            v46,
            current,
            v46->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_39:
    sub_B5D69C(Instance, v33);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__ModifyList(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_42E9F16 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange, (_DWORD)method, v3);
    sub_B5D5C4(&EventFortificationListViewItem_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42E9F16 = 1;
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
          v33 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v33
            || (EventFortificationListViewItem_c *)v32->klass->_2.typeHierarchy[v33 - 1] != EventFortificationListViewItem_TypeInfo )
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
        EventFortificationListViewManager__ModifyLockItem(this, v38, 1, isIconSizeChangea, v39);
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
void __fastcall EventFortificationListViewManager__ModifyLockItem(
        EventFortificationListViewManager_o *this,
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
  bool v38; // w28
  int64_t v39; // x0
  __int64 v40; // x1
  __int64 v41; // x11
  EventFortificationListViewItem_o *current; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v44; // q0
  int64_t v45; // x0
  __int128 v46; // q0
  int64_t v47; // x23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v49; // x1
  struct ListViewObject_o *v50; // x0
  __int64 v51; // x1
  ListViewObject_o *v52; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_42E9F15 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, isInit, isIconSizeChange);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v17, v18, v19);
    sub_B5D5C4(&EventFortificationListViewItem_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    byte_42E9F15 = 1;
  }
  memset(&v57, 0, sizeof(v57));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v56,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v57.fields.current = (Il2CppObject *)v56.fields.fakeValue;
      *(_OWORD *)&v57.fields.list = *(_OWORD *)&v56.fields.currentCryptoKey;
      v38 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v57,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v39 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v57,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v57.fields.current
          && (v41 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v57.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v41) )
        {
          if ( (EventFortificationListViewItem_c *)v57.fields.current->klass->_2.typeHierarchy[v41 - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v57.fields.current;
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
        userServantEntity = current->fields.userServantEntity;
        if ( !userServantEntity )
          sub_B5D69C(v39, v40);
        v44 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v56.fields.fakeValue = v44;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v55 = v56;
        v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v55, 0LL);
        v46 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
        v47 = v45;
        *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v54.fields.fakeValue = v46;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v54, 0LL);
        if ( v47 == v39 )
          EventFortificationListViewItem__SetUserServantEntity(current, Entity, 0LL);
LABEL_26:
        if ( v38 )
        {
          if ( !current )
            sub_B5D69C(v39, v40);
          EventFortificationListViewItem__ModifyLockItem(current, 0LL);
          EventFortificationListViewItem__ModifyChoiceItem(current, 0LL);
          EventFortificationListViewItem__ModifyPushItem(current, 0LL);
        }
        else if ( !current )
        {
          sub_B5D69C(v39, v40);
        }
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v50 = current->fields.viewObject;
          if ( !v50 )
            sub_B5D69C(0LL, v49);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v50->klass->vtable._5_SetItem.method)(
            v50,
            current,
            v50->klass->vtable._6_SetItem.methodPtr);
          if ( isIconSizeChange )
          {
            v52 = current->fields.viewObject;
            if ( !v52 )
              sub_B5D69C(0LL, v51);
            ListViewObject__SetItemSeed(v52, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_46:
    sub_B5D69C(Instance, v35);
  }
}


void __fastcall EventFortificationListViewManager__OnClickBack(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_42E9F30 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool__UserServantEntity__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E9F30 = 1;
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


void __fastcall EventFortificationListViewManager__OnClickBonusFilterKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_42E9F23 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9F23 = 1;
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


void __fastcall EventFortificationListViewManager__OnClickChoiceTab(
        EventFortificationListViewManager_o *this,
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
  EventFortificationListViewManager_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_42E9F2D & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventFortificationListViewManager_EndClickTabChoice__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E9F2D = 1;
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
      v12 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B5D694(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabChoice__,
        0LL);
      EventFortificationListViewManager__StatusRequest(this, v12, v13);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 2, v11);
      EventFortificationListViewManager__RefreshListDisp(this, v14);
      EventFortificationListViewManager__ModifyList(this, 0, v15);
      EventFortificationListViewManager__SetMode_27776948(this, 2, v16);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickCollectLock(
        EventFortificationListViewManager_o *this,
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
  EventFortificationListViewManager_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_42E9F2C & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventFortificationListViewManager_EndClickTabLock__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E9F2C = 1;
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
      v12 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B5D694(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabLock__,
        0LL);
      EventFortificationListViewManager__StatusRequest(this, v12, v13);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 1, v11);
      EventFortificationListViewManager__RefreshListDisp(this, v14);
      EventFortificationListViewManager__ModifyList(this, 0, v15);
      EventFortificationListViewManager__SetMode_27776948(this, 2, v16);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickFilterKind(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_42E9F21 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventFortificationListViewManager_EndSelectFilterKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42E9F21 = 1;
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
      Method_EventFortificationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenServantFilterSelectMenu(v16, 1, sort, v17, 0, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnClickListView(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventFortificationListViewManager__OnClickNormalStatus(
        EventFortificationListViewManager_o *this,
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
  EventFortificationListViewManager_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42E9F2B & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventFortificationListViewManager_EndClickTabStatus__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E9F2B = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v11 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B5D694(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    EventFortificationListViewManager_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndClickTabStatus__,
      0LL);
    EventFortificationListViewManager__StatusRequest(this, v11, v12);
  }
}


void __fastcall EventFortificationListViewManager__OnClickPushTab(
        EventFortificationListViewManager_o *this,
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
  EventFortificationListViewManager_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_42E9F2E & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventFortificationListViewManager_EndClickTabPush__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E9F2E = 1;
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
      v12 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B5D694(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabPush__,
        0LL);
      EventFortificationListViewManager__StatusRequest(this, v12, v13);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 3, v11);
      EventFortificationListViewManager__RefreshListDisp(this, v14);
      EventFortificationListViewManager__ModifyList(this, 0, v15);
      EventFortificationListViewManager__SetMode_27776948(this, 2, v16);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickScaleChange(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_42E9F31 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9F31 = 1;
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
  EventFortificationListViewManager__ModifyList(this, 1, v18);
  EventFortificationListViewManager__SetMode_27776948(this, 2, v19);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventFortificationListViewManager__OnClickSelectObject(
        EventFortificationListViewManager_o *this,
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
  int64_t fortificationConfirmDialog; // x0
  __int64 v52; // x10
  __int64 v53; // x10
  EventFortificationListViewObject_o *v54; // x0
  EventMissionProgressRequest_Argument_ProgressData_o **p_targetInUserServantEntity; // x23
  EventFortificationListViewItem_o *Item; // x20
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct UserServantEntity_o **p_targetOutUserServantEntity; // x24
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x22
  System_Collections_Generic_List_int__o *v71; // x21
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v80; // q1
  struct UserServantEntity_o *v81; // x8
  __int128 v82; // q0
  int64_t v83; // x25
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  struct EventFortificationWorkItem_o *v90; // x8
  System_Int32_array **v91; // x1
  FortificationConfirmDialogComponent_o *v92; // x23
  UserServantEntity_array *v93; // x22
  System_Int32_array *v94; // x21
  System_String_o *v95; // x24
  System_String_o *v96; // x25
  int32_t v97; // w20
  System_Action_o *v98; // x26
  int32_t v99; // w1
  System_Int32_array **v100; // x1
  FortificationConfirmDialogComponent_o *v101; // x23
  UserServantEntity_array *v102; // x22
  System_Int32_array *v103; // x21
  System_String_o *TargetTeamName; // x24
  System_String_o *TargetDetailName; // x25
  int32_t TargetWorkType; // w20
  System_Action_o *v107; // x26
  struct UserServantEntity_o *v108; // x8
  __int128 v109; // q0
  struct UserServantEntity_o *v110; // x8
  __int128 v111; // q0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  struct UserServantEntity_o *v118; // x1
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  struct EventFortificationWorkItem_o *v125; // x8
  System_Int32_array **v126; // x1
  int32_t AddPoint; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v128; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v130; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v131; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+90h] [xbp-70h]

  if ( (byte_42E9F1B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__, v12, v13, v14);
    sub_B5D5C4(&EventFortificationListViewObject_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46, v47);
    sub_B5D5C4(&SoundManager_TypeInfo, v48, v49, v50);
    byte_42E9F1B = 1;
  }
  fortificationConfirmDialog = (int64_t)this->fields.fortificationConfirmDialog;
  if ( !fortificationConfirmDialog )
    goto LABEL_52;
  fortificationConfirmDialog = (int64_t)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)fortificationConfirmDialog,
                                          0LL);
  if ( !fortificationConfirmDialog )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fortificationConfirmDialog, 1, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_52;
  v52 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v52
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v52 - 1] != EventFortificationListViewObject_TypeInfo )
  {
    goto LABEL_52;
  }
  v53 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v53 )
    v54 = (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v53 - 1] == EventFortificationListViewObject_TypeInfo
        ? (EventFortificationListViewObject_o *)obj
        : 0LL;
  else
    v54 = 0LL;
  p_targetInUserServantEntity = (EventMissionProgressRequest_Argument_ProgressData_o **)&this->fields.targetInUserServantEntity;
  Item = EventFortificationListViewObject__GetItem(v54, (const MethodInfo *)obj);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v57, v58, v59, v60, v61, v62);
  p_targetOutUserServantEntity = &this->fields.targetOutUserServantEntity;
  this->fields.targetOutUserServantEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    0LL,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_52;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_52;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v70,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v71 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v71,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    goto LABEL_52;
  userServantEntity = targetFortificationWorkItem->fields.userServantEntity;
  if ( !userServantEntity )
  {
    if ( Item )
    {
      v100 = (System_Int32_array **)Item->fields.userServantEntity;
      *p_targetInUserServantEntity = (EventMissionProgressRequest_Argument_ProgressData_o *)v100;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
        v100,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
      if ( v70 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v70,
          *p_targetInUserServantEntity,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        fortificationConfirmDialog = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
        if ( v71 )
        {
          System_Collections_Generic_List_int___Add(
            v71,
            fortificationConfirmDialog,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          v101 = this->fields.fortificationConfirmDialog;
          v102 = (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v70,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
          v103 = System_Collections_Generic_List_int___ToArray(
                   v71,
                   (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
          TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
          TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
          TargetWorkType = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
          v107 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v107,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
            0LL);
          if ( v101 )
          {
            FortificationConfirmDialogComponent__Open(
              v101,
              0,
              v102,
              v103,
              TargetTeamName,
              TargetDetailName,
              TargetWorkType,
              v107,
              0LL);
            return;
          }
        }
      }
    }
    goto LABEL_52;
  }
  v80 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v132.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v132.fields.fakeValue = v80;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v131 = v132;
  fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v131, 0LL);
  if ( !Item )
    goto LABEL_52;
  v81 = Item->fields.userServantEntity;
  if ( !v81 )
    goto LABEL_52;
  v82 = *(_OWORD *)&v81->fields.id.fields.fakeValue;
  v83 = fortificationConfirmDialog;
  *(_OWORD *)&v130.fields.currentCryptoKey = *(_OWORD *)&v81->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v130.fields.fakeValue = v82;
  fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v130, 0LL);
  v90 = this->fields.targetFortificationWorkItem;
  if ( v83 != fortificationConfirmDialog )
  {
    if ( v90 )
    {
      v108 = v90->fields.userServantEntity;
      if ( !v108 )
        return;
      v109 = *(_OWORD *)&v108->fields.id.fields.fakeValue;
      *(_OWORD *)&v132.fields.currentCryptoKey = *(_OWORD *)&v108->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v132.fields.fakeValue = v109;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v129 = v132;
      fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v129, 0LL);
      v110 = Item->fields.userServantEntity;
      if ( v110 )
      {
        v111 = *(_OWORD *)&v110->fields.id.fields.fakeValue;
        *(_OWORD *)&v128.fields.currentCryptoKey = *(_OWORD *)&v110->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v128.fields.fakeValue = v111;
        if ( fortificationConfirmDialog == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                             &v128,
                                             0LL) )
          return;
        v118 = Item->fields.userServantEntity;
        this->fields.targetInUserServantEntity = v118;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
          (System_Int32_array **)v118,
          v112,
          v113,
          v114,
          v115,
          v116,
          v117);
        v125 = this->fields.targetFortificationWorkItem;
        if ( v125 )
        {
          v126 = (System_Int32_array **)v125->fields.userServantEntity;
          *p_targetOutUserServantEntity = (struct UserServantEntity_o *)v126;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
            v126,
            v119,
            v120,
            v121,
            v122,
            v123,
            v124);
          if ( v70 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v70,
              (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetOutUserServantEntity,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
            if ( fortificationConfirmDialog )
            {
              fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                             (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                             (const MethodInfo *)obj);
              if ( v71 )
              {
                System_Collections_Generic_List_int___Add(
                  v71,
                  fortificationConfirmDialog,
                  (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v70,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetInUserServantEntity,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
                AddPoint = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
                System_Collections_Generic_List_int___Add(
                  v71,
                  AddPoint,
                  (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
                v92 = this->fields.fortificationConfirmDialog;
                v93 = (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v70,
                                                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                v94 = System_Collections_Generic_List_int___ToArray(
                        v71,
                        (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
                v95 = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
                v96 = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
                v97 = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
                v98 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                System_Action___ctor(
                  v98,
                  (Il2CppObject *)this,
                  Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                  0LL);
                if ( v92 )
                {
                  v99 = 2;
                  goto LABEL_50;
                }
              }
            }
          }
        }
      }
    }
LABEL_52:
    sub_B5D69C(fortificationConfirmDialog, obj);
  }
  if ( !v90 )
    goto LABEL_52;
  v91 = (System_Int32_array **)v90->fields.userServantEntity;
  *p_targetOutUserServantEntity = (struct UserServantEntity_o *)v91;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    v91,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  if ( !v70 )
    goto LABEL_52;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v70,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetOutUserServantEntity,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
  fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
  if ( !fortificationConfirmDialog )
    goto LABEL_52;
  fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                 (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                 (const MethodInfo *)obj);
  if ( !v71 )
    goto LABEL_52;
  System_Collections_Generic_List_int___Add(
    v71,
    fortificationConfirmDialog,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  v92 = this->fields.fortificationConfirmDialog;
  v93 = (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v70,
                                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
  v94 = System_Collections_Generic_List_int___ToArray(
          v71,
          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  v95 = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
  v96 = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
  v97 = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
  v98 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v98,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
    0LL);
  if ( !v92 )
    goto LABEL_52;
  v99 = 1;
LABEL_50:
  FortificationConfirmDialogComponent__Open(v92, v99, v93, v94, v95, v96, v97, v98, 0LL);
}


void __fastcall EventFortificationListViewManager__OnClickSelectPush(
        EventFortificationListViewManager_o *this,
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
  EventFortificationListViewItem_o **v77; // x20
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
  EventFortificationListViewItem_o *v134; // x8
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

  if ( (byte_42E9F32 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&EventFortificationListViewObject_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&object___TypeInfo, v27, v28, v29);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Rarity_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&SoundManager_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__0__, v48, v49, v50);
    sub_B5D5C4(&EventFortificationListViewManager___c__DisplayClass95_0_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v63, v64, v65);
    byte_42E9F32 = 1;
  }
  v66 = sub_B5D694(EventFortificationListViewManager___c__DisplayClass95_0_TypeInfo);
  EventFortificationListViewManager___c__DisplayClass95_0___ctor(
    (EventFortificationListViewManager___c__DisplayClass95_0_o *)v66,
    0LL);
  if ( !v66 )
    goto LABEL_69;
  *(_QWORD *)(v66 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v66 + 16), (System_Int32_array **)this, v69, v70, v71, v72, v73, v74);
  if ( !obj )
    goto LABEL_69;
  v75 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v75
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v75 - 1] != EventFortificationListViewObject_TypeInfo )
  {
    SelfUserGame = sub_B5D990(obj);
    goto LABEL_71;
  }
  Item = (System_Int32_array **)EventFortificationListViewObject__GetItem(
                                  (EventFortificationListViewObject_o *)obj,
                                  (const MethodInfo *)EventFortificationListViewObject_TypeInfo);
  *(_QWORD *)(v66 + 24) = Item;
  v77 = (EventFortificationListViewItem_o **)(v66 + 24);
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
        Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__0__,
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
  EventFortificationListViewManager__PushRequest(this, *v77, v87);
}


void __fastcall EventFortificationListViewManager__OnClickSortAscendingOrder(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42E9F27 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9F27 = 1;
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


void __fastcall EventFortificationListViewManager__OnClickSortButton(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_42E9F25 & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventFortificationListViewManager_EndSelectSortKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42E9F25 = 1;
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
      Method_EventFortificationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenServantSortSelectMenu(v16, 3, sort, 0, v17, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnLongPushListView(
        EventFortificationListViewManager_o *this,
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
  const MethodInfo *v18; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 v20; // x10
  EventFortificationListViewItem_o *Item; // x21
  UserServantEntity_o *userServantEntity; // x21
  CommonUI_o *v23; // x20
  ServantStatusDialog_EndDelegate_o *v24; // x22

  if ( (byte_42E9F1E & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventFortificationListViewManager_EndShowServant__, v6, v7, v8);
    sub_B5D5C4(&EventFortificationListViewObject_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&SoundManager_TypeInfo, v15, v16, v17);
    byte_42E9F1E = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
    if ( !obj
      || (v20 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1),
          *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v20)
      || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v20 - 1] != EventFortificationListViewObject_TypeInfo
      || (Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)obj, v18),
          scrollView = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          !Item)
      || (userServantEntity = Item->fields.userServantEntity,
          v23 = (CommonUI_o *)scrollView,
          v24 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v24,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_EndShowServant__,
            0LL),
          !v23) )
    {
LABEL_14:
      sub_B5D69C(scrollView, v18);
    }
    CommonUI__OpenServantStatusDialog_18212884(v23, 0, userServantEntity, v24, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnMoveEnd(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  UnityEngine_Behaviour_o *v10; // x0
  System_Action_o *CallbackFunc2; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E9F1A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9F1A = 1;
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
        v10 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
        if ( !v10
          || (UnityEngine_Behaviour__set_enabled(v10, 1, 0LL),
              (v10 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL)
          || (((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, Il2CppClass *))v10->klass[1]._1.castClass)(
                v10,
                1LL,
                v10->klass[1]._1.declaringType),
              (v10 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
        {
          sub_B5D69C(v10, v9);
        }
        UIScrollView__UpdatePosition((UIScrollView_o *)v10, 0LL);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.CallbackFunc2, 0LL, v12, v13, v14, v15, v16, v17);
        if ( CallbackFunc2 )
          System_Action__Invoke(CallbackFunc2, 0LL);
      }
    }
  }
}


void __fastcall EventFortificationListViewManager__PushRequest(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewItem_o *selectItem,
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

  if ( (byte_42E9F33 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventFortificationListViewManager_EndPushRequest__, v6, v7, v8);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28, v29);
    byte_42E9F33 = 1;
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
    Method_EventFortificationListViewManager_EndPushRequest__,
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


void __fastcall EventFortificationListViewManager__RefreshListDisp(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventFortificationListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  int32_t size; // w8
  System_Collections_Generic_List_EventFortificationListViewObject__o *v11; // x20
  int v12; // w21
  __int64 v13; // x22
  unsigned int v14; // w8

  if ( (byte_42E9F11 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v5, v6, v7);
    byte_42E9F11 = 1;
  }
  ObjectList = EventFortificationListViewManager__get_ObjectList(this, method);
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
        ObjectList = (System_Collections_Generic_List_EventFortificationListViewObject__o *)v11->fields._items->m_Items[v13];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_EventFortificationListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
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
void __fastcall EventFortificationListViewManager__RequestListObject(
        EventFortificationListViewManager_o *this,
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
  System_Collections_Generic_List_EventFortificationListViewObject__o *ObjectList; // x0
  __int64 v21; // x1
  int32_t size; // w8
  System_Collections_Generic_List_EventFortificationListViewObject__o *v23; // x21
  int v24; // w24
  __int64 v25; // x25
  unsigned int v26; // w8
  EventFortificationListViewObject_o *v27; // x22
  System_Action_o *v28; // x23
  const MethodInfo *v29; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E9F19 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_EventFortificationListViewManager_OnMoveEnd__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v17, v18, v19);
    byte_42E9F19 = 1;
  }
  ObjectList = EventFortificationListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
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
        System_Action___ctor(v28, (Il2CppObject *)this, Method_EventFortificationListViewManager_OnMoveEnd__, 0LL);
        if ( !v27 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventFortificationListViewObject__Init(
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


void __fastcall EventFortificationListViewManager__SetFilterButtonImage(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_42E9F24 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v5, v6, v7);
    byte_42E9F24 = 1;
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


void __fastcall EventFortificationListViewManager__SetHeaderMsg(
        EventFortificationListViewManager_o *this,
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
  struct UILabel_o *recoveryFatigueInfoMsgLabel; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  int v20; // w2
  __int64 v21; // x3
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x22
  System_String_o *v23; // x21
  struct EventFortificationWorkItem_o *v24; // x8
  struct EventFortificationEntity_o *eventFortificationEntity; // x9
  Il2CppObject **v26; // x9
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_String_o *v28; // x1
  UILabel_o *v29; // x0
  struct UILabel_o *v30; // x19
  __int64 *v31; // x8

  if ( (byte_42E9F13 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6509/*"FORTIFICATION_GUIDE_HELP"*/, v14, v15, v16);
    byte_42E9F13 = 1;
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
      v18 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6509/*"FORTIFICATION_GUIDE_HELP"*/, 0LL);
      targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
      if ( !targetFortificationWorkItem )
        goto LABEL_32;
      v23 = (System_String_o *)v18;
      v24 = this->fields.targetFortificationWorkItem;
      if ( (byte_42E9F62 & 1) == 0 )
      {
        v18 = sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
        byte_42E9F62 = 1;
        v24 = this->fields.targetFortificationWorkItem;
      }
      eventFortificationEntity = targetFortificationWorkItem->fields.eventFortificationEntity;
      v26 = eventFortificationEntity
          ? (Il2CppObject **)&eventFortificationEntity->fields.name
          : (Il2CppObject **)&StringLiteral_1/*""*/;
      if ( !v24 )
        goto LABEL_32;
      eventFortificationDetailEntity = v24->fields.eventFortificationDetailEntity;
      if ( !eventFortificationDetailEntity )
        goto LABEL_32;
      v18 = (__int64)System_String__Format_44573324(
                       v23,
                       *v26,
                       (Il2CppObject *)eventFortificationDetailEntity->fields.name,
                       0LL);
      if ( !recoveryFatigueInfoMsgLabel )
        goto LABEL_32;
      v28 = (System_String_o *)v18;
      v29 = recoveryFatigueInfoMsgLabel;
      goto LABEL_31;
    case 1:
      v30 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v31 = &StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_29;
    case 2:
      v30 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v31 = &StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_29;
    case 3:
      v30 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v31 = &StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_29:
      v18 = (__int64)LocalizationManager__Get((System_String_o *)*v31, 0LL);
      if ( !v30 )
LABEL_32:
        sub_B5D69C(v18, v19);
      v28 = (System_String_o *)v18;
      v29 = v30;
LABEL_31:
      UILabel__set_text(v29, v28, 0LL);
      break;
    default:
      return;
  }
}


void __fastcall EventFortificationListViewManager__SetMode(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        EventFortificationListViewManager_CallbackFunc_o *callback,
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
  EventFortificationListViewManager__SetMode_27776948(this, mode, v10);
}


void __fastcall EventFortificationListViewManager__SetMode_27776948(
        EventFortificationListViewManager_o *this,
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
  EventFortificationListViewManager__RequestListObject(this, v6, 0.0, v5);
}


void __fastcall EventFortificationListViewManager__SetMode_27777064(
        EventFortificationListViewManager_o *this,
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
  EventFortificationListViewManager__SetMode_27776948(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__SetObjectItem(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventFortificationListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_42E9F18 & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_B5D5C4(
                                                    &EventFortificationListViewObject_TypeInfo,
                                                    (_DWORD)obj,
                                                    (_DWORD)item,
                                                    method);
    byte_42E9F18 = 1;
  }
  if ( !obj
    || (v6 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventFortificationListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  EventFortificationListViewObject__Init(
    (EventFortificationListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall EventFortificationListViewManager__SetSortButtonImage(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_42E9F28 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42E9F28 = 1;
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
      goto LABEL_37;
    v26 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v26 )
      goto LABEL_37;
    UILabel__set_text(v26, (System_String_o *)sort, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_37;
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
    if ( v28 )
    {
      sortKind = v28->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v30 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v30, 0LL);
          v31 = this->fields.sort;
          if ( v31 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v31->fields.isAscendingOrder;
              v33 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
              v34 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
LABEL_33:
              if ( isAscendingOrder )
                v37 = v33;
              else
                v37 = v34;
              UISprite__set_spriteName((UISprite_o *)sort, *v37, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v35 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v35, 0LL);
          v36 = this->fields.sort;
          if ( v36 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v36->fields.isAscendingOrder;
              v33 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
              v34 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
              goto LABEL_33;
            }
          }
        }
      }
    }
LABEL_37:
    sub_B5D69C(sort, v24);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__SetStatusKind(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_42E9F12 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17347/*"button_push_reg"*/, modeKind, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_17348/*"button_push_unreg"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17333/*"button_allchoice_reg"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_17336/*"button_alllock_unreg"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_17349/*"button_select_reg"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17350/*"button_select_unreg"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_17335/*"button_alllock_reg"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_17334/*"button_allchoice_unreg"*/, v24, v25, v26);
    byte_42E9F12 = 1;
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
  EventFortificationListViewManager__SetHeaderMsg(this, v32);
}


void __fastcall EventFortificationListViewManager__StatusRequest(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewManager_RequestCallbackFunc_o *callback,
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

  if ( (byte_42E9F2F & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventFortificationListViewManager_EndStatusSync__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    byte_42E9F2F = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( EventFortificationListViewManager__GetSwapChoiceList(this, &choiceList, &unchoiceList, v3) )
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
        Method_EventFortificationListViewManager_EndStatusSync__,
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
  else if ( modeKind == 1 && EventFortificationListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
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
      Method_EventFortificationListViewManager_EndStatusSync__,
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
    EventFortificationListViewManager_RequestCallbackFunc__Invoke(callback, 0, 0LL);
}


void __fastcall EventFortificationListViewManager__add_Callback(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *Callback; // x21
  struct EventFortificationListViewManager_CallbackFunc_o **p_Callback; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventFortificationListViewManager_o *v11; // x0
  EventFortificationListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E9F08 & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9F08 = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  p_Callback = &this->fields.Callback;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(Callback, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EventFortificationListViewManager_CallbackFunc_c *)v8->klass != EventFortificationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_Callback, v8, Callback);
    v10 = Callback == (System_Delegate_o *)v9;
    Callback = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventFortificationListViewManager_o *)sub_B5D990(v8);
  EventFortificationListViewManager__remove_Callback(v11, v12, v13);
}


void __fastcall EventFortificationListViewManager__add_CallbackFunc2(
        EventFortificationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *CallbackFunc2; // x21
  struct System_Action_o **p_CallbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventFortificationListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E9F0A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9F0A = 1;
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
  v11 = (EventFortificationListViewManager_o *)sub_B5D990(v8);
  EventFortificationListViewManager__remove_CallbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_EventFortificationListViewObject__o *__fastcall EventFortificationListViewManager__get_ClippingObjectList(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_42E9F0F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v17, v18, v19);
    byte_42E9F0F = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
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
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
      if ( !Component_srcLineSprite )
        break;
      v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)EventFortificationListViewObject__GetItem(
                                                              (EventFortificationListViewObject_o *)Component_srcLineSprite,
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
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
      }
      if ( (int)++v25 >= size )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v20;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B5D69C(Component_srcLineSprite, v22);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v20;
}


int32_t __fastcall EventFortificationListViewManager__get_ListModeKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_Collections_Generic_List_EventFortificationListViewObject__o *__fastcall EventFortificationListViewManager__get_ObjectList(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_42E9F0E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E9F0E = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
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
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
        if ( !v23 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v23,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
      }
      if ( (__int64)++v28 >= size )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v23;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B5D69C(Component_srcLineSprite, v25);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v23;
}


void __fastcall EventFortificationListViewManager__remove_Callback(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *Callback; // x21
  struct EventFortificationListViewManager_CallbackFunc_o **p_Callback; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventFortificationListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E9F09 & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9F09 = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  p_Callback = &this->fields.Callback;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(Callback, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EventFortificationListViewManager_CallbackFunc_c *)v8->klass != EventFortificationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_Callback, v8, Callback);
    v10 = Callback == (System_Delegate_o *)v9;
    Callback = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventFortificationListViewManager_o *)sub_B5D990(v8);
  EventFortificationListViewManager__add_CallbackFunc2(v11, v12, v13);
}


void __fastcall EventFortificationListViewManager__remove_CallbackFunc2(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_42E9F0B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9F0B = 1;
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
  v11 = (const MethodInfo *)sub_B5D990(v8);
  EventFortificationListViewManager__DeleteContinueData(v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager_CallbackFunc___ctor(
        EventFortificationListViewManager_CallbackFunc_o *this,
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


System_IAsyncResult_o *__fastcall EventFortificationListViewManager_CallbackFunc__BeginInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
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
  if ( (byte_42E650C & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, index, callback);
    sub_B5D5C4(&EventFortificationListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E650C = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(EventFortificationListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall EventFortificationListViewManager_CallbackFunc__EndInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager_CallbackFunc__Invoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  EventFortificationListViewManager_CallbackFunc_o **v8; // x26
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
  EventFortificationListViewManager_CallbackFunc_o *v21; // x8
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
  EventFortificationListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

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
    v8 = (EventFortificationListViewManager_CallbackFunc_o **)(v4 + 32);
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
void __fastcall EventFortificationListViewManager_RequestCallbackFunc___ctor(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
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


System_IAsyncResult_o *__fastcall EventFortificationListViewManager_RequestCallbackFunc__BeginInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_42E650D & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isRequest, (_DWORD)callback, object);
    byte_42E650D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall EventFortificationListViewManager_RequestCallbackFunc__EndInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager_RequestCallbackFunc__Invoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  EventFortificationListViewManager_RequestCallbackFunc_o **v7; // x25
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
  EventFortificationListViewManager_RequestCallbackFunc_o *v19; // x8
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
  EventFortificationListViewManager_RequestCallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (EventFortificationListViewManager_RequestCallbackFunc_o **)(v3 + 32);
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


void __fastcall EventFortificationListViewManager___c__DisplayClass48_0___ctor(
        EventFortificationListViewManager___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventFortificationListViewManager___c__DisplayClass48_0___CreateList_b__0(
        EventFortificationListViewManager___c__DisplayClass48_0_o *this,
        UserServantEntity_o *data,
        const MethodInfo *method)
{
  ServantClassMaster_o *servantClassMaster; // x20
  EventFortificationListViewManager___c__DisplayClass48_0_o *v4; // x19
  EventFortificationWorkItem_o *targetItem; // x8

  if ( !data
    || (servantClassMaster = this->fields.servantClassMaster,
        v4 = this,
        this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)UserServantEntity__getSvtClassId(data, 0LL),
        !servantClassMaster)
    || (this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)ServantClassMaster__getSupportGroupType(
                                                                              servantClassMaster,
                                                                              (int32_t)this,
                                                                              0LL),
        (targetItem = v4->fields.targetItem) == 0LL) )
  {
    sub_B5D69C(this, data);
  }
  return (_DWORD)this == EventFortificationWorkItem__get_ClassId(targetItem, 0LL);
}


bool __fastcall EventFortificationListViewManager___c__DisplayClass48_0___CreateList_b__1(
        EventFortificationListViewManager___c__DisplayClass48_0_o *this,
        UserServantEntity_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventFortificationListViewManager___c__DisplayClass48_0_o *v5; // x19
  __int64 v6; // x20
  __int64 v7; // x21
  struct EventFortificationWorkItem_o *targetItem; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userServantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v5 = this;
  if ( (byte_42E650A & 1) == 0 )
  {
    this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)sub_B5D5C4(
                                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                          (_DWORD)data,
                                                                          (_DWORD)method,
                                                                          v3);
    byte_42E650A = 1;
  }
  if ( !data )
    goto LABEL_10;
  v7 = *(_QWORD *)&data->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&data->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                        v11,
                                                                        0LL);
  targetItem = v5->fields.targetItem;
  if ( !targetItem
    || (userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)targetItem->fields.userServantEntity) == 0LL )
  {
LABEL_10:
    sub_B5D69C(this, data);
  }
  return (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userServantEntity[5], 0LL);
}


void __fastcall EventFortificationListViewManager___c__DisplayClass95_0___ctor(
        EventFortificationListViewManager___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventFortificationListViewManager___c__DisplayClass95_0___OnClickSelectPush_b__0(
        EventFortificationListViewManager___c__DisplayClass95_0_o *this,
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

  if ( (byte_42E650B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__1__, v9, v10, v11);
    byte_42E650B = 1;
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
        Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__1__,
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


void __fastcall EventFortificationListViewManager___c__DisplayClass95_0___OnClickSelectPush_b__1(
        EventFortificationListViewManager___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  EventFortificationListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  EventFortificationListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}