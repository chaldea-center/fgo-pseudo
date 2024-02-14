void __fastcall EventFortificationListViewManager___cctor(const MethodInfo *method)
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
  ListViewSort_o *v15; // x20
  struct EventFortificationListViewManager_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_421618B & 1) == 0 )
  {
    sub_B0D8A4(&EventFortificationListViewManager_TypeInfo, v1);
    sub_B0D8A4(&ListViewSort_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_6210/*"EventServantFatigueList"*/, v9);
    byte_421618B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventFortificationListViewManager_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_6210/*"EventServantFatigueList"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6210/*"EventServantFatigueList"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v15 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v13, v14);
  ListViewSort___ctor_32823364(v15, SORT_SAVE_KEY, 3, 0, 0LL);
  v16 = EventFortificationListViewManager_TypeInfo->static_fields;
  v16->servantSortStatus = v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v16->servantSortStatus,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
  EventFortificationListViewManager_o *v4; // x19
  __int64 v5; // x1
  bool v6; // w1
  UserServantEntity_o *targetInUserServantEntity; // x2

  v4 = this;
  if ( (byte_4216174 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool__UserServantEntity__Invoke__, result);
    this = (EventFortificationListViewManager_o *)sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v5);
    byte_4216174 = 1;
  }
  if ( !result )
    goto LABEL_11;
  if ( !System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
  {
    this = (EventFortificationListViewManager_o *)v4->fields.fortificationConfirmDialog;
    if ( this )
    {
      FortificationConfirmDialogComponent__Close((FortificationConfirmDialogComponent_o *)this, 0LL);
      this = (EventFortificationListViewManager_o *)v4->fields.selectAfterCallback;
      if ( this )
      {
        targetInUserServantEntity = v4->fields.targetInUserServantEntity;
        v6 = 1;
        goto LABEL_10;
      }
    }
LABEL_11:
    sub_B0D97C(this);
  }
  this = (EventFortificationListViewManager_o *)v4->fields.selectAfterCallback;
  if ( !this )
    goto LABEL_11;
  v6 = 0;
  targetInUserServantEntity = 0LL;
LABEL_10:
  System_Action_bool__UserServantEntity___Invoke(
    (System_Action_bool__UserServantEntity__o *)this,
    v6,
    targetInUserServantEntity,
    (const MethodInfo_247ADE8 *)Method_System_Action_bool__UserServantEntity__Invoke__);
}


void __fastcall EventFortificationListViewManager__CloseFortificationConfirmDialog(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  NetworkManager_ResultCallbackFunc_o *v18; // x21
  EnterUserSvtInfo_array *Request_WarBoardWallAttackRequest; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct UserServantEntity_o *targetInUserServantEntity; // x9
  struct UserServantEntity_o *targetOutUserServantEntity; // x10
  EventFortificationRequest_o *v24; // x21
  struct EventFortificationWorkItem_o *v25; // x8
  struct EventFortificationDetailEntity_o *v26; // x10
  __int128 v27; // q1
  int32_t v28; // w22
  int32_t v29; // w23
  __int128 *v30; // x0
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x9
  int32_t position; // w24
  int32_t fortificationIdx; // w23
  EnterUserSvtInfo_o *v35; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x1
  struct EventFortificationDetailEntity_o *v38; // x10
  __int128 v39; // q1
  int64_t v40; // x25
  __int64 v41; // x1
  __int64 v42; // x2
  EnterUserSvtInfo_o *v43; // x24
  int32_t eventId; // w19
  const MethodInfo *v45; // x3
  __int128 v46[2]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v47[2]; // [xsp+20h] [xbp-80h] BYREF
  __int128 v48; // [xsp+40h] [xbp-60h]
  __int128 v49; // [xsp+50h] [xbp-50h]

  if ( (byte_4216173 & 1) == 0 )
  {
    sub_B0D8A4(&EnterUserSvtInfo_TypeInfo, method);
    sub_B0D8A4(&Method_EventFortificationListViewManager_CallbackFortificationRequest__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v7);
    sub_B0D8A4(&Method_NetworkManager_getRequest_EventFortificationRequest___, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_B0D8A4(&SoundManager_TypeInfo, v12);
    byte_4216173 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17);
  NetworkManager_ResultCallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CallbackFortificationRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EnterUserSvtInfo_array *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v18,
                                                                  (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  targetInUserServantEntity = this->fields.targetInUserServantEntity;
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v24 = (EventFortificationRequest_o *)Request_WarBoardWallAttackRequest;
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
        v35 = (EnterUserSvtInfo_o *)sub_B0D974(EnterUserSvtInfo_TypeInfo, v20, v21);
        EnterUserSvtInfo___ctor(v35, fortificationIdx, position, 0LL, 0LL);
        if ( v15 )
        {
          v36 = v15;
          v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)v35;
          goto LABEL_30;
        }
      }
    }
    goto LABEL_33;
  }
  v25 = this->fields.targetFortificationWorkItem;
  if ( !targetOutUserServantEntity )
  {
    if ( v25 )
    {
      v38 = v25->fields.eventFortificationDetailEntity;
      if ( v38 )
      {
        v39 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
        v28 = v38->fields.fortificationIdx;
        v29 = v25->fields.position;
        v48 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
        v49 = v39;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v30 = v46;
        v46[0] = v48;
        v46[1] = v49;
        goto LABEL_28;
      }
    }
LABEL_33:
    sub_B0D97C(Request_WarBoardWallAttackRequest);
  }
  if ( !v25 )
    goto LABEL_33;
  v26 = v25->fields.eventFortificationDetailEntity;
  if ( !v26 )
    goto LABEL_33;
  v27 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
  v28 = v26->fields.fortificationIdx;
  v29 = v25->fields.position;
  v48 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
  v49 = v27;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v30 = v47;
  v47[0] = v48;
  v47[1] = v49;
LABEL_28:
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v30,
          0LL);
  v43 = (EnterUserSvtInfo_o *)sub_B0D974(EnterUserSvtInfo_TypeInfo, v41, v42);
  EnterUserSvtInfo___ctor(v43, v28, v29, v40, 0LL);
  if ( !v15 )
    goto LABEL_33;
  v36 = v15;
  v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)v43;
LABEL_30:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v36,
    v37,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
  eventId = this->fields.eventId;
  Request_WarBoardWallAttackRequest = (EnterUserSvtInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v24 )
    goto LABEL_33;
  EventFortificationRequest__beginRequest(v24, eventId, Request_WarBoardWallAttackRequest, v45);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__CreateList(
        EventFortificationListViewManager_o *this,
        int32_t eventId,
        FortificationConfirmDialogComponent_o *fortificationConfirmDialog,
        EventFortificationWorkItem_o *targetItem,
        System_Action_bool__UserServantEntity__o *afterCallback,
        const MethodInfo *method)
{
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
  __int64 v27; // x1
  __int64 v28; // x21
  __int64 sort; // x0
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
  EventFortificationListViewManager_c *v42; // x0
  struct ListViewSort_o *servantSortStatus; // x1
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
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct EventFortificationWorkItem_o **p_targetFortificationWorkItem; // x24
  struct EventFortificationWorkItem_o *v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct ListViewSort_o *v82; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  __int64 v86; // x1
  __int64 v87; // x2
  System_Int32_array *v88; // x23
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_Int32_array **v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v98; // q0
  __int128 v99; // q1
  __int64 v100; // x1
  __int64 v101; // x2
  struct EventFortificationWorkItem_o *v102; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v103; // x24
  int32_t v104; // w28
  UserServantEntity_o *v105; // x27
  EventFortificationListViewItem_o *v106; // x25
  __int64 v107; // x1
  __int64 v108; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v109; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v110; // x0
  const MethodInfo *v111; // x1
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v113; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v114; // x0
  void *monitor; // x8
  unsigned __int64 v116; // x28
  signed __int64 v117; // x20
  UserServantEntity_o *v118; // x25
  int32_t v119; // w26
  struct EventFortificationWorkItem_o *v120; // x27
  EventFortificationListViewItem_o *v121; // x0
  EventFortificationWorkItem_o *v122; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *v123; // x21
  __int64 v124; // x0
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v126; // x2
  const MethodInfo *v127; // x1
  int64_t v128; // [xsp+0h] [xbp-D0h]
  EventUpValSetupInfo_o *v129; // [xsp+8h] [xbp-C8h]
  EventFortificationListViewManager_o *v130; // [xsp+10h] [xbp-C0h]
  struct EventFortificationWorkItem_o **v131; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133[2]; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4216167 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v13);
    sub_B0D8A4(&EventFortificationListViewItem_TypeInfo, v14);
    sub_B0D8A4(&EventFortificationListViewManager_TypeInfo, v15);
    sub_B0D8A4(&EventUpValSetupInfo_TypeInfo, v16);
    sub_B0D8A4(&Method_System_Func_UserServantEntity__bool___ctor__, v17);
    sub_B0D8A4(&System_Func_UserServantEntity__bool__TypeInfo, v18);
    sub_B0D8A4(&int___TypeInfo, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v20);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v21);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B0D8A4(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__, v24);
    sub_B0D8A4(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__, v25);
    sub_B0D8A4(&EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo, v26);
    sub_B0D8A4(&StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v27);
    byte_4216167 = 1;
  }
  memset(&v133[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v28 = sub_B0D974(
          EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo,
          *(_QWORD *)&eventId,
          fortificationConfirmDialog);
  EventFortificationListViewManager___c__DisplayClass48_0___ctor(
    (EventFortificationListViewManager___c__DisplayClass48_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_59;
  *(_QWORD *)(v28 + 16) = targetItem;
  v131 = (struct EventFortificationWorkItem_o **)(v28 + 16);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v28 + 16),
    (System_Int32_array **)targetItem,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v42 = EventFortificationListViewManager_TypeInfo;
  if ( (BYTE3(EventFortificationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v42 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v42->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)servantSortStatus,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
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
  TitleInfoControl__setBackBtnSprite_17439696((TitleInfoControl_o *)sort, 1, 0, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_59;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_59;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v44, v45, v46, v47, v48, v49);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    0LL,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.eventId = eventId;
  this->fields.fortificationConfirmDialog = fortificationConfirmDialog;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fortificationConfirmDialog,
    (System_Int32_array **)fortificationConfirmDialog,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  p_targetFortificationWorkItem = &this->fields.targetFortificationWorkItem;
  v63 = *v131;
  this->fields.targetFortificationWorkItem = *v131;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetFortificationWorkItem,
    (System_Int32_array **)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  this->fields.selectAfterCallback = afterCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.selectAfterCallback,
    (System_Int32_array **)afterCallback,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v82 = this->fields.sort;
  this->fields.modeKind = 0;
  if ( !v82 )
    goto LABEL_59;
  iconScaleKind = v82->fields.iconScaleKind;
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
LABEL_20:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_59;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_59;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_59;
  v88 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
  {
LABEL_53:
    v124 = sub_B0D9A8(sort);
    sub_B0D948(v124, 0LL);
  }
  *(_DWORD *)(sort + 32) = eventId;
  v129 = (EventUpValSetupInfo_o *)sub_B0D974(EventUpValSetupInfo_TypeInfo, v86, v87);
  EventUpValSetupInfo___ctor_25655088(v129, v88, 1, 0, 0, 0LL);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)sort,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_59;
  v90 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)sort,
                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  *(_QWORD *)(v28 + 24) = v90;
  sub_B0D840((BattleServantConfConponent_o *)(v28 + 24), v90, v91, v92, v93, v94, v95, v96);
  if ( !*p_targetFortificationWorkItem )
    goto LABEL_59;
  userServantEntity = (*p_targetFortificationWorkItem)->fields.userServantEntity;
  if ( userServantEntity )
  {
    v99 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    v98 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v133, -1LL, 0LL);
    v99 = *(_OWORD *)&v133[0].fields.currentCryptoKey;
    v98 = *(_OWORD *)&v133[0].fields.fakeValue;
  }
  *(_OWORD *)&v133[1].fields.currentCryptoKey = v99;
  *(_OWORD *)&v133[1].fields.fakeValue = v98;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v132 = v133[1];
  sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v132, 0LL);
  v128 = sort;
  if ( !MasterData_WarQuestSelectionMaster
    || (sort = (__int64)UserServantMaster__getOrganizationList(MasterData_WarQuestSelectionMaster, 0LL),
        (v102 = *v131) == 0LL) )
  {
LABEL_59:
    sub_B0D97C(sort);
  }
  v103 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  v130 = this;
  if ( !v102->fields.isSvtDataSetInMaster )
  {
    eventFortificationDetailEntity = v102->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      goto LABEL_59;
    if ( eventFortificationDetailEntity->fields.classId )
    {
      v113 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                  System_Func_UserServantEntity__bool__TypeInfo,
                                                                                  v100,
                                                                                  v101);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v113,
        (Il2CppObject *)v28,
        Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__,
        (const MethodInfo_26189B8 *)Method_System_Func_UserServantEntity__bool___ctor__);
      v114 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               v103,
               (System_Func_TSource__bool__o *)v113,
               (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      sort = (__int64)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                        v114,
                        (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
      v103 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
    }
LABEL_47:
    if ( !v103 )
      goto LABEL_59;
    goto LABEL_48;
  }
  v104 = this->fields.eventId;
  v105 = v102->fields.userServantEntity;
  v106 = (EventFortificationListViewItem_o *)sub_B0D974(EventFortificationListViewItem_TypeInfo, v100, v101);
  EventFortificationListViewItem___ctor(v106, v105, v104, v128, v129, v102, 0LL);
  v109 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                              System_Func_UserServantEntity__bool__TypeInfo,
                                                                              v107,
                                                                              v108);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v109,
    (Il2CppObject *)v28,
    Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_UserServantEntity__bool___ctor__);
  v110 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
           v103,
           (System_Func_TSource__bool__o *)v109,
           (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  sort = (__int64)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                    v110,
                    (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
  if ( !*(_QWORD *)(v28 + 16) )
    goto LABEL_59;
  v103 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  sort = EventFortificationWorkItem__get_IsNpc(*(EventFortificationWorkItem_o **)(v28 + 16), v111);
  this = v130;
  if ( (sort & 1) == 0 )
    goto LABEL_47;
  sort = (__int64)v130->fields.itemList;
  if ( !sort )
    goto LABEL_59;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v106,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
  if ( !v103 )
    goto LABEL_59;
LABEL_48:
  monitor = v103[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v116 = 0LL;
    v117 = (int)monitor;
    while ( 1 )
    {
      v118 = (UserServantEntity_o *)*((_QWORD *)&v103[2].klass + v116);
      v119 = this->fields.eventId;
      v120 = *v131;
      v121 = (EventFortificationListViewItem_o *)sub_B0D974(EventFortificationListViewItem_TypeInfo, v100, v101);
      v122 = v120;
      this = v130;
      v123 = (EventMissionProgressRequest_Argument_ProgressData_o *)v121;
      EventFortificationListViewItem___ctor(v121, v118, v119, v128, v129, v122, 0LL);
      sort = (__int64)v130->fields.itemList;
      if ( !sort )
        goto LABEL_59;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        v123,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v116 >= v117 )
        break;
      if ( v116 >= LODWORD(v103[1].monitor) )
        goto LABEL_53;
    }
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_59;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EventFortificationListViewManager__SetStatusKind(this, this->fields.modeKind, v126);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventFortificationListViewManager__SetFilterButtonImage(this, v127);
}


void __fastcall EventFortificationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventFortificationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4216163 & 1) == 0 )
  {
    sub_B0D8A4(&EventFortificationListViewManager_TypeInfo, v1);
    byte_4216163 = 1;
  }
  v2 = EventFortificationListViewManager_TypeInfo;
  if ( (BYTE3(EventFortificationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v2 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_B0D97C(0LL);
  ListViewSort__DeleteContinueData(servantSortStatus, 0LL);
}


void __fastcall EventFortificationListViewManager__DestroyList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B0D97C(0LL);
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
  EventFortificationListViewManager__SetMode_27410604(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_27410604(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_27410604(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_27410604(this, 2, v5);
}


void __fastcall EventFortificationListViewManager__EndPushRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__ModifyList(this, 0, method);
  EventFortificationListViewManager__SetMode_27410604(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__EndSelectFilterKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_4216179 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4216179 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EventFortificationListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseServantFilterSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__EndSelectSortKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_421617D & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_421617D = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__EndShowServant(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  CommonUI_o *Instance; // x0

  if ( (byte_4216176 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4216176 = 1;
  }
  EventFortificationListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventFortificationListViewManager__ModifyList(this, 0, v4);
  EventFortificationListViewManager__SetMode_27410604(this, 2, v5);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
    sub_B0D840(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    EventFortificationListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventFortificationListViewManager__GetAmountSortValue(
        EventFortificationListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  EventFortificationListViewManager_o *v4; // x20
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
  if ( (byte_4216177 & 1) == 0 )
  {
    sub_B0D8A4(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    this = (EventFortificationListViewManager_o *)sub_B0D8A4(
                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                    v7);
    byte_4216177 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v12 = itemList->fields._items->m_Items[v10];
      if ( !v12 )
        break;
      v13 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v12->klass->_2.bitflags2 + 1) < (unsigned int)v13
        || (EventFortificationListViewItem_c *)v12->klass->_2.typeHierarchy[v13 - 1] != EventFortificationListViewItem_TypeInfo )
      {
        break;
      }
      if ( (EventFortificationListViewItem_c *)v12->klass->_2.typeHierarchy[*(&EventFortificationListViewItem_TypeInfo->_2.bitflags2
                                                                            + 1)
                                                                          - 1] != EventFortificationListViewItem_TypeInfo )
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
      this = (EventFortificationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
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
    sub_B0D97C(this);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventFortificationListViewItem_o *__fastcall EventFortificationListViewManager__GetItem(
        EventFortificationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_421616E & 1) == 0 )
  {
    sub_B0D8A4(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_421616E = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (EventFortificationListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == EventFortificationListViewItem_TypeInfo )
    return (EventFortificationListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


bool __fastcall EventFortificationListViewManager__GetSwapChoiceList(
        EventFortificationListViewManager_o *this,
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
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_long__o *v17; // x22
  int64_t v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v27; // x25
  ListViewItem_o *v28; // x8
  __int64 v29; // x11
  _OWORD *monitor; // x9
  __int128 v31; // q0
  const MethodInfo_2FB5EB0 *v32; // x2
  int64_t v33; // x1
  System_Collections_Generic_List_long__o *v34; // x0
  __int128 v35; // q0
  System_Int64_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int64_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+50h] [xbp-70h]

  if ( (byte_4216181 & 1) == 0 )
  {
    sub_B0D8A4(&EventFortificationListViewItem_TypeInfo, choiceList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_4216181 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v17 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v15, v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v27 = 0LL;
    do
    {
      if ( v27 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v28 = itemList->fields._items->m_Items[v27];
      if ( !v28 )
        break;
      v29 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (EventFortificationListViewItem_c *)v28->klass->_2.typeHierarchy[v29 - 1] != EventFortificationListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v28[1].monitor;
      if ( monitor && BYTE1(v28[1].fields.sortValue2B) )
      {
        if ( BYTE2(v28[1].fields.sortValue1) )
        {
          v31 = monitor[2];
          *(_OWORD *)&v60.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v60.fields.fakeValue = v31;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v59 = v60;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v59, 0LL);
          if ( !v17 )
            break;
          v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v33 = v18;
          v34 = v17;
        }
        else
        {
          v35 = monitor[2];
          *(_OWORD *)&v60.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v60.fields.fakeValue = v35;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v60;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v58, 0LL);
          if ( !v14 )
            break;
          v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v33 = v18;
          v34 = v14;
        }
        System_Collections_Generic_List_long___Add(v34, v33, v32);
      }
      if ( (__int64)++v27 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B0D97C(v18);
  }
LABEL_28:
  if ( !v14 || !v17 )
    goto LABEL_33;
  if ( v17->fields._size + v14->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)choiceList, 0LL, v19, v20, v21, v22, v23, v24);
    *unchoiceList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)unchoiceList, 0LL, v51, v52, v53, v54, v55, v56);
    return 0;
  }
  else
  {
    v36 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v36;
    sub_B0D840((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
    v43 = System_Collections_Generic_List_long___ToArray(
            v17,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v43;
    sub_B0D840((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
    return 1;
  }
}


bool __fastcall EventFortificationListViewManager__GetSwapLockList(
        EventFortificationListViewManager_o *this,
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
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_long__o *v17; // x22
  int64_t v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v27; // x25
  ListViewItem_o *v28; // x8
  __int64 v29; // x11
  _OWORD *monitor; // x9
  __int128 v31; // q0
  const MethodInfo_2FB5EB0 *v32; // x2
  int64_t v33; // x1
  System_Collections_Generic_List_long__o *v34; // x0
  __int128 v35; // q0
  System_Int64_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int64_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+50h] [xbp-70h]

  if ( (byte_4216180 & 1) == 0 )
  {
    sub_B0D8A4(&EventFortificationListViewItem_TypeInfo, lockList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_4216180 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v17 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v15, v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v27 = 0LL;
    do
    {
      if ( v27 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v28 = itemList->fields._items->m_Items[v27];
      if ( !v28 )
        break;
      v29 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (EventFortificationListViewItem_c *)v28->klass->_2.typeHierarchy[v29 - 1] != EventFortificationListViewItem_TypeInfo )
      {
        break;
      }
      monitor = v28[1].monitor;
      if ( monitor && LOBYTE(v28[1].fields.sortValue2B) )
      {
        if ( BYTE1(v28[1].fields.sortValue1) )
        {
          v31 = monitor[2];
          *(_OWORD *)&v60.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v60.fields.fakeValue = v31;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v59 = v60;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v59, 0LL);
          if ( !v17 )
            break;
          v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v33 = v18;
          v34 = v17;
        }
        else
        {
          v35 = monitor[2];
          *(_OWORD *)&v60.fields.currentCryptoKey = monitor[1];
          *(_OWORD *)&v60.fields.fakeValue = v35;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v60;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v58, 0LL);
          if ( !v14 )
            break;
          v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v33 = v18;
          v34 = v14;
        }
        System_Collections_Generic_List_long___Add(v34, v33, v32);
      }
      if ( (__int64)++v27 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B0D97C(v18);
  }
LABEL_28:
  if ( !v14 || !v17 )
    goto LABEL_33;
  if ( v17->fields._size + v14->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)lockList, 0LL, v19, v20, v21, v22, v23, v24);
    *unlockList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)unlockList, 0LL, v51, v52, v53, v54, v55, v56);
    return 0;
  }
  else
  {
    v36 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v36;
    sub_B0D840((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
    v43 = System_Collections_Generic_List_long___ToArray(
            v17,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v43;
    sub_B0D840((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
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
  EventFortificationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4216164 & 1) == 0 )
  {
    sub_B0D8A4(&EventFortificationListViewManager_TypeInfo, v1);
    byte_4216164 = 1;
  }
  v2 = EventFortificationListViewManager_TypeInfo;
  if ( (BYTE3(EventFortificationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v2 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_B0D97C(0LL);
  ListViewSort__InitLoad(servantSortStatus, 0LL);
}


void __fastcall EventFortificationListViewManager__ModifyItem(
        EventFortificationListViewManager_o *this,
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
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x19
  _BOOL8 v16; // x0
  __int64 v17; // x11
  EventFortificationListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v20; // q0
  int64_t v21; // x0
  __int128 v22; // q0
  UnityEngine_Object_o *viewObject; // x21
  struct ListViewObject_o *v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+60h] [xbp-60h] BYREF

  if ( (byte_421616B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B0D8A4(&EventFortificationListViewItem_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_421616B = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_39;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_39;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v27,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v28.fields.current = (Il2CppObject *)v27.fields.fakeValue;
      *(_OWORD *)&v28.fields.list = *(_OWORD *)&v27.fields.currentCryptoKey;
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v28,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v16 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v28,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v28.fields.current
          && (v17 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v28.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v17) )
        {
          if ( (EventFortificationListViewItem_c *)v28.fields.current->klass->_2.typeHierarchy[v17 - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v28.fields.current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_B0D97C(v16);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_B0D97C(v16);
            v20 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v27.fields.fakeValue = v20;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v26 = v27;
            v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v26, 0LL);
            v22 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
            *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v25.fields.fakeValue = v22;
            if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v25, 0LL) )
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
          sub_B0D97C(v16);
LABEL_27:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v24 = current->fields.viewObject;
          if ( !v24 )
            sub_B0D97C(0LL);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v24->klass->vtable._5_SetItem.method)(
            v24,
            current,
            v24->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_39:
    sub_B0D97C(Instance);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__ModifyList(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_421616D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_B0D8A4(&EventFortificationListViewItem_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_421616D = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_38;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_38;
  sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)sort,
                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v33, 0LL);
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
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v21 = v20->fields._items->m_Items[v19];
          if ( !v21 )
            goto LABEL_38;
          v22 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v22
            || (EventFortificationListViewItem_c *)v21->klass->_2.typeHierarchy[v22 - 1] != EventFortificationListViewItem_TypeInfo )
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
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v32, 0LL);
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
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v31, 0LL);
        EventFortificationListViewManager__ModifyLockItem(this, v27, 1, isIconSizeChangea, v28);
      }
LABEL_34:
      if ( (int)++v15 >= (int)v12 )
        return;
      if ( v15 >= *(_DWORD *)(v13 + 24) )
      {
        v29 = sub_B0D9A8(sort);
        sub_B0D948(v29, 0LL);
      }
    }
LABEL_38:
    sub_B0D97C(sort);
  }
}


void __fastcall EventFortificationListViewManager__ModifyLockItem(
        EventFortificationListViewManager_o *this,
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
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x21
  bool v19; // w28
  int64_t v20; // x0
  __int64 v21; // x11
  EventFortificationListViewItem_o *current; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v24; // q0
  int64_t v25; // x0
  __int128 v26; // q0
  int64_t v27; // x23
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v29; // x0
  ListViewObject_o *v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_421616C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11);
    sub_B0D8A4(&EventFortificationListViewItem_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_421616C = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_46;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_46;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v34,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v35.fields.current = (Il2CppObject *)v34.fields.fakeValue;
      *(_OWORD *)&v35.fields.list = *(_OWORD *)&v34.fields.currentCryptoKey;
      v19 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v35,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v20 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v35,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v35.fields.current
          && (v21 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v35.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v21) )
        {
          if ( (EventFortificationListViewItem_c *)v35.fields.current->klass->_2.typeHierarchy[v21 - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v35.fields.current;
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
          sub_B0D97C(v20);
        userServantEntity = current->fields.userServantEntity;
        if ( !userServantEntity )
          sub_B0D97C(v20);
        v24 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v34.fields.fakeValue = v24;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v33 = v34;
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v33, 0LL);
        v26 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
        v27 = v25;
        *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v32.fields.fakeValue = v26;
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v32, 0LL);
        if ( v27 == v20 )
          EventFortificationListViewItem__SetUserServantEntity(current, Entity, 0LL);
LABEL_26:
        if ( v19 )
        {
          if ( !current )
            sub_B0D97C(v20);
          EventFortificationListViewItem__ModifyLockItem(current, 0LL);
          EventFortificationListViewItem__ModifyChoiceItem(current, 0LL);
          EventFortificationListViewItem__ModifyPushItem(current, 0LL);
        }
        else if ( !current )
        {
          sub_B0D97C(v20);
        }
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v29 = current->fields.viewObject;
          if ( !v29 )
            sub_B0D97C(0LL);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v29->klass->vtable._5_SetItem.method)(
            v29,
            current,
            v29->klass->vtable._6_SetItem.methodPtr);
          if ( isIconSizeChange )
          {
            v30 = current->fields.viewObject;
            if ( !v30 )
              sub_B0D97C(0LL);
            ListViewObject__SetItemSeed(v30, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_46:
    sub_B0D97C(Instance);
  }
}


void __fastcall EventFortificationListViewManager__OnClickBack(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_4216187 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool__UserServantEntity__Invoke__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4216187 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.selectAfterCallback, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action_bool__UserServantEntity___Invoke(
      selectAfterCallback,
      0,
      0LL,
      (const MethodInfo_247ADE8 *)Method_System_Action_bool__UserServantEntity__Invoke__);
  }
}


void __fastcall EventFortificationListViewManager__OnClickBonusFilterKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  if ( (byte_421617A & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421617A = 1;
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
      sub_B0D97C(0LL);
    ListViewSort__IncBonusKind2(sort, this->fields.bonusEventIdList, 0LL, 0LL, 0LL, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnClickChoiceTab(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4216184 & 1) == 0 )
  {
    sub_B0D8A4(&Method_EventFortificationListViewManager_EndClickTabChoice__, method);
    sub_B0D8A4(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4216184 = 1;
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
      v7 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B0D974(
                                                                        EventFortificationListViewManager_RequestCallbackFunc_TypeInfo,
                                                                        v5,
                                                                        v6);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabChoice__,
        0LL);
      EventFortificationListViewManager__StatusRequest(this, v7, v8);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 2, v6);
      EventFortificationListViewManager__RefreshListDisp(this, v9);
      EventFortificationListViewManager__ModifyList(this, 0, v10);
      EventFortificationListViewManager__SetMode_27410604(this, 2, v11);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickCollectLock(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4216183 & 1) == 0 )
  {
    sub_B0D8A4(&Method_EventFortificationListViewManager_EndClickTabLock__, method);
    sub_B0D8A4(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4216183 = 1;
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
      v7 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B0D974(
                                                                        EventFortificationListViewManager_RequestCallbackFunc_TypeInfo,
                                                                        v5,
                                                                        v6);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabLock__,
        0LL);
      EventFortificationListViewManager__StatusRequest(this, v7, v8);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 1, v6);
      EventFortificationListViewManager__RefreshListDisp(this, v9);
      EventFortificationListViewManager__ModifyList(this, 0, v10);
      EventFortificationListViewManager__SetMode_27410604(this, 2, v11);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickFilterKind(
        EventFortificationListViewManager_o *this,
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
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0

  if ( (byte_4216178 & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_EventFortificationListViewManager_EndSelectFilterKind__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4216178 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B0D974(ServantFilterSelectMenu_CallbackFunc_TypeInfo, v9, v10);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B0D97C(v12);
    CommonUI__OpenServantFilterSelectMenu(v8, 1, sort, v11, 0, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4216182 & 1) == 0 )
  {
    sub_B0D8A4(&Method_EventFortificationListViewManager_EndClickTabStatus__, method);
    sub_B0D8A4(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4216182 = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v7 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B0D974(
                                                                      EventFortificationListViewManager_RequestCallbackFunc_TypeInfo,
                                                                      v5,
                                                                      v6);
    EventFortificationListViewManager_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndClickTabStatus__,
      0LL);
    EventFortificationListViewManager__StatusRequest(this, v7, v8);
  }
}


void __fastcall EventFortificationListViewManager__OnClickPushTab(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4216185 & 1) == 0 )
  {
    sub_B0D8A4(&Method_EventFortificationListViewManager_EndClickTabPush__, method);
    sub_B0D8A4(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4216185 = 1;
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
      v7 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B0D974(
                                                                        EventFortificationListViewManager_RequestCallbackFunc_TypeInfo,
                                                                        v5,
                                                                        v6);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabPush__,
        0LL);
      EventFortificationListViewManager__StatusRequest(this, v7, v8);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 3, v6);
      EventFortificationListViewManager__RefreshListDisp(this, v9);
      EventFortificationListViewManager__ModifyList(this, 0, v10);
      EventFortificationListViewManager__SetMode_27410604(this, 2, v11);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickScaleChange(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *ScaleKindSpriteName; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v12; // w8
  struct ListViewSort_o *sort; // x8
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_4216188 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4216188 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v12 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v12 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v12 = 1;
LABEL_12:
    this->fields.scaleType = v12;
    this->fields.seed = smallSizeSeed;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
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
    sub_B0D97C(ScaleKindSpriteName);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)ScaleKindSpriteName, 0LL);
  EventFortificationListViewManager__ModifyList(this, 1, v15);
  EventFortificationListViewManager__SetMode_27410604(this, 2, v16);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventFortificationListViewManager__OnClickSelectObject(
        EventFortificationListViewManager_o *this,
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
  int64_t fortificationConfirmDialog; // x0
  const MethodInfo *v21; // x1
  __int64 v22; // x10
  __int64 v23; // x10
  EventFortificationListViewObject_o *v24; // x0
  EventMissionProgressRequest_Argument_ProgressData_o **p_targetInUserServantEntity; // x23
  EventFortificationListViewItem_o *Item; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct UserServantEntity_o **p_targetOutUserServantEntity; // x24
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_int__o *v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v54; // q1
  struct UserServantEntity_o *v55; // x8
  __int128 v56; // q0
  int64_t v57; // x25
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct EventFortificationWorkItem_o *v64; // x8
  System_Int32_array **v65; // x1
  const MethodInfo *v66; // x1
  FortificationConfirmDialogComponent_o *v67; // x23
  UserServantEntity_array *v68; // x22
  System_Int32_array *v69; // x21
  System_String_o *v70; // x24
  System_String_o *v71; // x25
  int32_t v72; // w20
  __int64 v73; // x1
  __int64 v74; // x2
  System_Action_o *v75; // x26
  int32_t v76; // w1
  System_Int32_array **v77; // x1
  FortificationConfirmDialogComponent_o *v78; // x23
  UserServantEntity_array *v79; // x22
  System_Int32_array *v80; // x21
  System_String_o *TargetTeamName; // x24
  System_String_o *TargetDetailName; // x25
  int32_t TargetWorkType; // w20
  __int64 v84; // x1
  __int64 v85; // x2
  System_Action_o *v86; // x26
  struct UserServantEntity_o *v87; // x8
  __int128 v88; // q0
  struct UserServantEntity_o *v89; // x8
  __int128 v90; // q0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  struct UserServantEntity_o *v97; // x1
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  struct EventFortificationWorkItem_o *v104; // x8
  System_Int32_array **v105; // x1
  const MethodInfo *v106; // x1
  int32_t AddPoint; // w0
  __int64 v108; // x1
  __int64 v109; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+90h] [xbp-70h]

  if ( (byte_4216172 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, obj);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B0D8A4(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__, v7);
    sub_B0D8A4(&EventFortificationListViewObject_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B0D8A4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&SoundManager_TypeInfo, v19);
    byte_4216172 = 1;
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
  v22 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v22
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v22 - 1] != EventFortificationListViewObject_TypeInfo )
  {
    goto LABEL_52;
  }
  v23 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v23 )
    v24 = (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v23 - 1] == EventFortificationListViewObject_TypeInfo
        ? (EventFortificationListViewObject_o *)obj
        : 0LL;
  else
    v24 = 0LL;
  p_targetInUserServantEntity = (EventMissionProgressRequest_Argument_ProgressData_o **)&this->fields.targetInUserServantEntity;
  Item = EventFortificationListViewObject__GetItem(v24, v21);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v27, v28, v29, v30, v31, v32);
  p_targetOutUserServantEntity = &this->fields.targetOutUserServantEntity;
  this->fields.targetOutUserServantEntity = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    0LL,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_52;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_52;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v40,
                                                                                                  v41);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v45 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v43, v44);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    goto LABEL_52;
  userServantEntity = targetFortificationWorkItem->fields.userServantEntity;
  if ( !userServantEntity )
  {
    if ( Item )
    {
      v77 = (System_Int32_array **)Item->fields.userServantEntity;
      *p_targetInUserServantEntity = (EventMissionProgressRequest_Argument_ProgressData_o *)v77;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
        v77,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
      if ( v42 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v42,
          *p_targetInUserServantEntity,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        fortificationConfirmDialog = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
        if ( v45 )
        {
          System_Collections_Generic_List_int___Add(
            v45,
            fortificationConfirmDialog,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          v78 = this->fields.fortificationConfirmDialog;
          v79 = (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v42,
                                             (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
          v80 = System_Collections_Generic_List_int___ToArray(
                  v45,
                  (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
          TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
          TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
          TargetWorkType = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
          v86 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v84, v85);
          System_Action___ctor(
            v86,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
            0LL);
          if ( v78 )
          {
            FortificationConfirmDialogComponent__Open(
              v78,
              0,
              v79,
              v80,
              TargetTeamName,
              TargetDetailName,
              TargetWorkType,
              v86,
              0LL);
            return;
          }
        }
      }
    }
    goto LABEL_52;
  }
  v54 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v114.fields.fakeValue = v54;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v113 = v114;
  fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v113, 0LL);
  if ( !Item )
    goto LABEL_52;
  v55 = Item->fields.userServantEntity;
  if ( !v55 )
    goto LABEL_52;
  v56 = *(_OWORD *)&v55->fields.id.fields.fakeValue;
  v57 = fortificationConfirmDialog;
  *(_OWORD *)&v112.fields.currentCryptoKey = *(_OWORD *)&v55->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v112.fields.fakeValue = v56;
  fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v112, 0LL);
  v64 = this->fields.targetFortificationWorkItem;
  if ( v57 != fortificationConfirmDialog )
  {
    if ( v64 )
    {
      v87 = v64->fields.userServantEntity;
      if ( !v87 )
        return;
      v88 = *(_OWORD *)&v87->fields.id.fields.fakeValue;
      *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&v87->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v114.fields.fakeValue = v88;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v111 = v114;
      fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v111, 0LL);
      v89 = Item->fields.userServantEntity;
      if ( v89 )
      {
        v90 = *(_OWORD *)&v89->fields.id.fields.fakeValue;
        *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&v89->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v110.fields.fakeValue = v90;
        if ( fortificationConfirmDialog == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                             &v110,
                                             0LL) )
          return;
        v97 = Item->fields.userServantEntity;
        this->fields.targetInUserServantEntity = v97;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
          (System_Int32_array **)v97,
          v91,
          v92,
          v93,
          v94,
          v95,
          v96);
        v104 = this->fields.targetFortificationWorkItem;
        if ( v104 )
        {
          v105 = (System_Int32_array **)v104->fields.userServantEntity;
          *p_targetOutUserServantEntity = (struct UserServantEntity_o *)v105;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
            v105,
            v98,
            v99,
            v100,
            v101,
            v102,
            v103);
          if ( v42 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v42,
              (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetOutUserServantEntity,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
            if ( fortificationConfirmDialog )
            {
              fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                             (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                             v106);
              if ( v45 )
              {
                System_Collections_Generic_List_int___Add(
                  v45,
                  fortificationConfirmDialog,
                  (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v42,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetInUserServantEntity,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
                AddPoint = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
                System_Collections_Generic_List_int___Add(
                  v45,
                  AddPoint,
                  (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
                v67 = this->fields.fortificationConfirmDialog;
                v68 = (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v42,
                                                   (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                v69 = System_Collections_Generic_List_int___ToArray(
                        v45,
                        (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
                v70 = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
                v71 = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
                v72 = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
                v75 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v108, v109);
                System_Action___ctor(
                  v75,
                  (Il2CppObject *)this,
                  Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                  0LL);
                if ( v67 )
                {
                  v76 = 2;
                  goto LABEL_50;
                }
              }
            }
          }
        }
      }
    }
LABEL_52:
    sub_B0D97C(fortificationConfirmDialog);
  }
  if ( !v64 )
    goto LABEL_52;
  v65 = (System_Int32_array **)v64->fields.userServantEntity;
  *p_targetOutUserServantEntity = (struct UserServantEntity_o *)v65;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    v65,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  if ( !v42 )
    goto LABEL_52;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v42,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetOutUserServantEntity,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
  fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
  if ( !fortificationConfirmDialog )
    goto LABEL_52;
  fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                 (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                 v66);
  if ( !v45 )
    goto LABEL_52;
  System_Collections_Generic_List_int___Add(
    v45,
    fortificationConfirmDialog,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  v67 = this->fields.fortificationConfirmDialog;
  v68 = (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v42,
                                     (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
  v69 = System_Collections_Generic_List_int___ToArray(
          v45,
          (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  v70 = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
  v71 = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
  v72 = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
  v75 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v73, v74);
  System_Action___ctor(
    v75,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
    0LL);
  if ( !v67 )
    goto LABEL_52;
  v76 = 1;
LABEL_50:
  FortificationConfirmDialogComponent__Open(v67, v76, v68, v69, v70, v71, v72, v75, 0LL);
}


void __fastcall EventFortificationListViewManager__OnClickSelectPush(
        EventFortificationListViewManager_o *this,
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
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x9
  System_Int32_array **Item; // x0
  EventFortificationListViewItem_o **v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int64_t v42; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v44; // q1
  const MethodInfo *v45; // x2
  UserServantEntity_o *Entity; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x21
  __int64 v48; // x22
  __int64 v49; // x23
  ServantEntity_o *v50; // x25
  System_String_o *v51; // x21
  System_String_o *v52; // x22
  System_Object_array *v53; // x23
  int32_t Rarity; // w26
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x26
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x26
  int32_t v69; // w0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x24
  int32_t v77; // w0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x24
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x24
  EventFortificationListViewItem_o *v92; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v93; // x9
  ServantEntity_o *servantEntity; // x20
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x20
  System_String_o *v102; // x20
  System_String_o *v103; // x22
  System_String_o *v104; // x23
  CommonUI_o *Instance; // x24
  __int64 v106; // x1
  __int64 v107; // x2
  CommonConfirmDialog_ClickDelegate_o *v108; // x25
  __int64 v109; // x0
  __int64 v110; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  if ( (byte_4216189 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, obj);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B0D8A4(&EventFortificationListViewObject_TypeInfo, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&object___TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B0D8A4(&Rarity_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B0D8A4(&SoundManager_TypeInfo, v18);
    sub_B0D8A4(&Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__0__, v19);
    sub_B0D8A4(&EventFortificationListViewManager___c__DisplayClass95_0_TypeInfo, v20);
    sub_B0D8A4(&StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v21);
    sub_B0D8A4(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v22);
    sub_B0D8A4(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v23);
    sub_B0D8A4(&StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v24);
    byte_4216189 = 1;
  }
  v25 = sub_B0D974(EventFortificationListViewManager___c__DisplayClass95_0_TypeInfo, obj, method);
  EventFortificationListViewManager___c__DisplayClass95_0___ctor(
    (EventFortificationListViewManager___c__DisplayClass95_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_69;
  *(_QWORD *)(v25 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  if ( !obj )
    goto LABEL_69;
  v33 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v33
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v33 - 1] != EventFortificationListViewObject_TypeInfo )
  {
    SelfUserGame = sub_B0DC70(obj);
    goto LABEL_71;
  }
  Item = (System_Int32_array **)EventFortificationListViewObject__GetItem(
                                  (EventFortificationListViewObject_o *)obj,
                                  (const MethodInfo *)EventFortificationListViewObject_TypeInfo);
  *(_QWORD *)(v25 + 24) = Item;
  v35 = (EventFortificationListViewItem_o **)(v25 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v25 + 24), Item, v36, v37, v38, v39, v40, v41);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_69;
  v42 = *(_QWORD *)(SelfUserGame + 120);
  if ( v42 )
  {
    if ( !*v35 )
      goto LABEL_69;
    userServantEntity = (*v35)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_69;
    v44 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v112.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v112.fields.fakeValue = v44;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v111 = v112;
    if ( v42 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v111, 0LL) )
      goto LABEL_15;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_69;
    SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_69;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
               v42,
               (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_69;
    SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_69;
    v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame;
    v49 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v48 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v113.fields.currentCryptoKey = v49;
    *(_QWORD *)&v113.fields.fakeValue = v48;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v113, 0LL);
    if ( !v47 )
      goto LABEL_69;
    v50 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v47,
                               SelfUserGame,
                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v53 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v53 )
LABEL_69:
      sub_B0D97C(SelfUserGame);
    v61 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B0D964(SelfUserGame, v53->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( !v53->max_length )
      goto LABEL_71;
    v53->m_Items[0] = (Il2CppObject *)v61;
    sub_B0D840((BattleServantConfConponent_o *)v53->m_Items, v61, v55, v56, v57, v58, v59, v60);
    if ( !v50 )
      goto LABEL_69;
    SelfUserGame = (__int64)ServantEntity__getClassName(v50, 0LL);
    v68 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B0D964(SelfUserGame, v53->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v53->max_length <= 1 )
      goto LABEL_71;
    v53->m_Items[1] = (Il2CppObject *)v68;
    sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[1], v68, v62, v63, v64, v65, v66, v67);
    v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(Entity->fields.limitCount, 0LL);
    SelfUserGame = (__int64)ServantEntity__getName(v50, v69, -1, 0LL);
    v76 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B0D964(SelfUserGame, v53->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v53->max_length <= 2 )
      goto LABEL_71;
    v53->m_Items[2] = (Il2CppObject *)v76;
    sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[2], v76, v70, v71, v72, v73, v74, v75);
    if ( !*v35 )
      goto LABEL_69;
    SelfUserGame = (__int64)(*v35)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_69;
    v77 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
    SelfUserGame = (__int64)Rarity__getRarityType(v77, 0LL);
    v84 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B0D964(SelfUserGame, v53->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v53->max_length <= 3 )
      goto LABEL_71;
    v53->m_Items[3] = (Il2CppObject *)v84;
    sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[3], v84, v78, v79, v80, v81, v82, v83);
    if ( !*v35 )
      goto LABEL_69;
    SelfUserGame = (__int64)(*v35)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_69;
    SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
    v91 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B0D964(SelfUserGame, v53->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_72;
    }
    if ( v53->max_length <= 4 )
      goto LABEL_71;
    v53->m_Items[4] = (Il2CppObject *)v91;
    sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[4], v91, v85, v86, v87, v88, v89, v90);
    v92 = *v35;
    if ( !*v35 )
      goto LABEL_69;
    v93 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v92->fields.userServantEntity;
    if ( !v93 )
      goto LABEL_69;
    servantEntity = v92->fields.servantEntity;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v93[6], 0LL);
    if ( !servantEntity )
      goto LABEL_69;
    SelfUserGame = (__int64)ServantEntity__getName(servantEntity, SelfUserGame, -1, 0LL);
    v101 = (System_Int32_array **)SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_B0D964(SelfUserGame, v53->obj.klass->_1.element_class);
      if ( !SelfUserGame )
      {
LABEL_72:
        v110 = sub_B0D99C(SelfUserGame);
        sub_B0D948(v110, 0LL);
      }
    }
    if ( v53->max_length > 5 )
    {
      v53->m_Items[5] = (Il2CppObject *)v101;
      sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[5], v101, v95, v96, v97, v98, v99, v100);
      v102 = System_String__Format_43928628(v52, v53, 0LL);
      v103 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v104 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v108 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v106, v107);
      CommonConfirmDialog_ClickDelegate___ctor(
        v108,
        (Il2CppObject *)v25,
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
        CommonUI__OpenConfirmDialog_17016784(
          Instance,
          v51,
          v102,
          v103,
          v104,
          1,
          v108,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_69;
    }
LABEL_71:
    v109 = sub_B0D9A8(SelfUserGame);
    sub_B0D948(v109, 0LL);
  }
LABEL_15:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  EventFortificationListViewManager__PushRequest(this, *v35, v45);
}


void __fastcall EventFortificationListViewManager__OnClickSortAscendingOrder(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_421617E & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421617E = 1;
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
      sub_B0D97C(v3);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnClickSortButton(
        EventFortificationListViewManager_o *this,
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
  ServantSortSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0

  if ( (byte_421617C & 1) == 0 )
  {
    sub_B0D8A4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_EventFortificationListViewManager_EndSelectSortKind__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_421617C = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B0D974(ServantSortSelectMenu_CallbackFunc_TypeInfo, v9, v10);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_B0D97C(v12);
    CommonUI__OpenServantSortSelectMenu(v8, 3, sort, 0, v11, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnLongPushListView(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x10
  EventFortificationListViewItem_o *Item; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  UserServantEntity_o *userServantEntity; // x21
  CommonUI_o *v16; // x20
  ServantStatusDialog_EndDelegate_o *v17; // x22

  if ( (byte_4216175 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_B0D8A4(&Method_EventFortificationListViewManager_EndShowServant__, v5);
    sub_B0D8A4(&EventFortificationListViewObject_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&SoundManager_TypeInfo, v8);
    byte_4216175 = 1;
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
      || (v11 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1),
          *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v11)
      || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v11 - 1] != EventFortificationListViewObject_TypeInfo
      || (Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)obj, v10),
          scrollView = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          !Item)
      || (userServantEntity = Item->fields.userServantEntity,
          v16 = (CommonUI_o *)scrollView,
          v17 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v13, v14),
          ServantStatusDialog_EndDelegate___ctor(
            v17,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_EndShowServant__,
            0LL),
          !v16) )
    {
LABEL_14:
      sub_B0D97C(scrollView);
    }
    CommonUI__OpenServantStatusDialog_17027696(v16, 0, userServantEntity, v17, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnMoveEnd(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Behaviour_o *v7; // x0
  System_Action_o *CallbackFunc2; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4216171 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216171 = 1;
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
        v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
        if ( !v7
          || (UnityEngine_Behaviour__set_enabled(v7, 1, 0LL),
              (v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL)
          || (((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, Il2CppClass *))v7->klass[1]._1.castClass)(
                v7,
                1LL,
                v7->klass[1]._1.declaringType),
              (v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
        {
          sub_B0D97C(v7);
        }
        UIScrollView__UpdatePosition((UIScrollView_o *)v7, 0LL);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&this->fields.CallbackFunc2, 0LL, v9, v10, v11, v12, v13, v14);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *limitCountSupport; // x0
  struct UserServantEntity_o *userServantEntity; // x19
  DataManager_o *v15; // x23
  UserServantCollectionMaster_o *v16; // x21
  int64_t v17; // x22
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v21; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v23; // x8
  int64_t v24; // x0
  __int128 v25; // q0
  __int64 v26; // x1
  __int64 v27; // x2
  NetworkManager_ResultCallbackFunc_o *v28; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v30; // q0
  CardFavoriteRequest_o *v31; // x20
  int32_t v32; // w27
  int32_t v33; // w28
  int32_t v34; // w21
  bool IsLock; // w23
  char v36; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v40; // w0
  __int64 v41; // x8
  int32_t randomSettingSupport; // w19
  int32_t v43; // [xsp+50h] [xbp-110h]
  int32_t v44; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v46; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v48; // [xsp+70h] [xbp-F0h]
  __int64 v49; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_421618A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B0D8A4(&Method_EventFortificationListViewManager_EndPushRequest__, v5);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_421618A = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v15 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userServantEntity )
    goto LABEL_21;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  v17 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v19;
  *(_QWORD *)&v54.fields.fakeValue = v18;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v54, 0LL);
  if ( !v16 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, v17, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  v23 = *(_QWORD *)&v15->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v21;
  v49 = v23;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v52 = v53;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v52, 0LL);
  v25 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v15->fields.writeMasterDataThread;
  v48 = v24;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v25;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v51, 0LL);
  v28 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27);
  NetworkManager_ResultCallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_EndPushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v28,
                                        (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v30 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v31 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v30;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v50, 0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v55.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v55, 0LL);
  if ( !v31 )
LABEL_21:
    sub_B0D97C(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v31,
    targetUsrSVtId,
    v44,
    v43,
    v32,
    v33,
    v34,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v46,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v49 != v48,
    0LL);
}


void __fastcall EventFortificationListViewManager__RefreshListDisp(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventFortificationListViewObject__o *ObjectList; // x0
  int32_t size; // w8
  System_Collections_Generic_List_EventFortificationListViewObject__o *v6; // x20
  int v7; // w21
  __int64 v8; // x22
  unsigned int v9; // w8

  if ( (byte_4216168 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v3);
    byte_4216168 = 1;
  }
  ObjectList = EventFortificationListViewManager__get_ObjectList(this, method);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        ObjectList = (System_Collections_Generic_List_EventFortificationListViewObject__o *)v6->fields._items->m_Items[v8];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_EventFortificationListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        if ( (int)v8 + 1 >= v7 )
          return;
        v9 = v6->fields._size;
        ++v8;
      }
LABEL_13:
      sub_B0D97C(ObjectList);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventFortificationListViewObject__o *ObjectList; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t size; // w8
  System_Collections_Generic_List_EventFortificationListViewObject__o *v15; // x21
  int v16; // w24
  __int64 v17; // x25
  unsigned int v18; // w8
  EventFortificationListViewObject_o *v19; // x22
  System_Action_o *v20; // x23
  const MethodInfo *v21; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4216170 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_EventFortificationListViewManager_OnMoveEnd__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v9);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v10);
    byte_4216170 = 1;
  }
  ObjectList = EventFortificationListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v15 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v16 = ObjectList->fields._size;
    if ( v16 >= 1 )
    {
      v17 = 0LL;
      v18 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v18 <= (unsigned int)v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v19 = v15->fields._items->m_Items[v17];
        v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
        System_Action___ctor(v20, (Il2CppObject *)this, Method_EventFortificationListViewManager_OnMoveEnd__, 0LL);
        if ( !v19 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventFortificationListViewObject__Init(
          v19,
          mode,
          v20,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v21);
        if ( (int)v17 + 1 >= v16 )
          return;
        v18 = v15->fields._size;
        ++v17;
      }
LABEL_14:
      sub_B0D97C(ObjectList);
    }
  }
}


void __fastcall EventFortificationListViewManager__SetFilterButtonImage(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_421617B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17044/*"btn_filter_on"*/, method);
    sub_B0D8A4(&StringLiteral_17043/*"btn_filter"*/, v3);
    byte_421617B = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B0D97C(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17043/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17044/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall EventFortificationListViewManager__SetHeaderMsg(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UILabel_o *recoveryFatigueInfoMsgLabel; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x22
  System_String_o *v11; // x21
  struct EventFortificationWorkItem_o *v12; // x8
  struct EventFortificationEntity_o *eventFortificationEntity; // x9
  Il2CppObject **v14; // x9
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_String_o *v16; // x1
  UILabel_o *v17; // x0
  struct UILabel_o *v18; // x19
  __int64 *v19; // x8

  if ( (byte_421616A & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_11768/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v3);
    sub_B0D8A4(&StringLiteral_11766/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v4);
    sub_B0D8A4(&StringLiteral_11767/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v5);
    sub_B0D8A4(&StringLiteral_6447/*"FORTIFICATION_GUIDE_HELP"*/, v6);
    byte_421616A = 1;
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
      v8 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6447/*"FORTIFICATION_GUIDE_HELP"*/, 0LL);
      targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
      if ( !targetFortificationWorkItem )
        goto LABEL_32;
      v11 = (System_String_o *)v8;
      v12 = this->fields.targetFortificationWorkItem;
      if ( (byte_42161B9 & 1) == 0 )
      {
        v8 = sub_B0D8A4(&StringLiteral_1/*""*/, v9);
        byte_42161B9 = 1;
        v12 = this->fields.targetFortificationWorkItem;
      }
      eventFortificationEntity = targetFortificationWorkItem->fields.eventFortificationEntity;
      v14 = eventFortificationEntity
          ? (Il2CppObject **)&eventFortificationEntity->fields.name
          : (Il2CppObject **)&StringLiteral_1/*""*/;
      if ( !v12 )
        goto LABEL_32;
      eventFortificationDetailEntity = v12->fields.eventFortificationDetailEntity;
      if ( !eventFortificationDetailEntity )
        goto LABEL_32;
      v8 = (__int64)System_String__Format_43845440(
                      v11,
                      *v14,
                      (Il2CppObject *)eventFortificationDetailEntity->fields.name,
                      0LL);
      if ( !recoveryFatigueInfoMsgLabel )
        goto LABEL_32;
      v16 = (System_String_o *)v8;
      v17 = recoveryFatigueInfoMsgLabel;
      goto LABEL_31;
    case 1:
      v18 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11767/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_29;
    case 2:
      v18 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11766/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_29;
    case 3:
      v18 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11768/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_29:
      v8 = (__int64)LocalizationManager__Get((System_String_o *)*v19, 0LL);
      if ( !v18 )
LABEL_32:
        sub_B0D97C(v8);
      v16 = (System_String_o *)v8;
      v17 = v18;
LABEL_31:
      UILabel__set_text(v17, v16, 0LL);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.Callback,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventFortificationListViewManager__SetMode_27410604(this, mode, v10);
}


void __fastcall EventFortificationListViewManager__SetMode_27410604(
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


void __fastcall EventFortificationListViewManager__SetMode_27410720(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventFortificationListViewManager__SetMode_27410604(this, mode, v10);
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
  if ( (byte_421616F & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_B0D8A4(&EventFortificationListViewObject_TypeInfo, obj);
    byte_421616F = 1;
  }
  if ( !obj
    || (v6 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventFortificationListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v13; // x8
  int32_t sortKind; // w9
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  struct ListViewSort_o *v21; // x8
  System_String_o **v22; // x8

  if ( (byte_421617F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17072/*"btn_sort_up"*/, v3);
    sub_B0D8A4(&StringLiteral_17156/*"btn_txt_up"*/, v4);
    sub_B0D8A4(&StringLiteral_17112/*"btn_txt_new"*/, v5);
    sub_B0D8A4(&StringLiteral_17102/*"btn_txt_down"*/, v6);
    sub_B0D8A4(&StringLiteral_17119/*"btn_txt_old"*/, v7);
    sub_B0D8A4(&StringLiteral_17069/*"btn_sort_down"*/, v8);
    byte_421617F = 1;
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
    v11 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_37;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
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
    v13 = this->fields.sort;
    if ( v13 )
    {
      sortKind = v13->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17119/*"btn_txt_old"*/ : &StringLiteral_17112/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v16->fields.isAscendingOrder;
              v18 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
LABEL_33:
              if ( isAscendingOrder )
                v22 = v18;
              else
                v22 = v19;
              UISprite__set_spriteName((UISprite_o *)sort, *v22, 0LL);
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
          v20 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17156/*"btn_txt_up"*/ : &StringLiteral_17102/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v21 = this->fields.sort;
          if ( v21 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v21->fields.isAscendingOrder;
              v18 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
              goto LABEL_33;
            }
          }
        }
      }
    }
LABEL_37:
    sub_B0D97C(sort);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__SetStatusKind(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_4216169 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17189/*"button_push_reg"*/, *(_QWORD *)&modeKind);
    sub_B0D8A4(&StringLiteral_17190/*"button_push_unreg"*/, v5);
    sub_B0D8A4(&StringLiteral_17175/*"button_allchoice_reg"*/, v6);
    sub_B0D8A4(&StringLiteral_17178/*"button_alllock_unreg"*/, v7);
    sub_B0D8A4(&StringLiteral_17191/*"button_select_reg"*/, v8);
    sub_B0D8A4(&StringLiteral_17192/*"button_select_unreg"*/, v9);
    sub_B0D8A4(&StringLiteral_17177/*"button_alllock_reg"*/, v10);
    sub_B0D8A4(&StringLiteral_17176/*"button_allchoice_unreg"*/, v11);
    byte_4216169 = 1;
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
  v13 = &StringLiteral_17191/*"button_select_reg"*/;
  if ( modeKind )
    v13 = &StringLiteral_17192/*"button_select_unreg"*/;
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
  v14 = &StringLiteral_17177/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v14 = &StringLiteral_17178/*"button_alllock_unreg"*/;
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
  v15 = &StringLiteral_17175/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v15 = &StringLiteral_17176/*"button_allchoice_unreg"*/;
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
  v16 = &StringLiteral_17189/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v16 = &StringLiteral_17190/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v16, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_B0D97C(statusTabButton);
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  EventFortificationListViewManager__SetHeaderMsg(this, v17);
}


void __fastcall EventFortificationListViewManager__StatusRequest(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewManager_RequestCallbackFunc_o *callback,
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
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Int64_array *v20; // x2
  System_Int64_array *v21; // x1
  bool v22; // w4
  bool v23; // w5
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  NetworkManager_ResultCallbackFunc_o *v32; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_4216186 & 1) == 0 )
  {
    sub_B0D8A4(&Method_EventFortificationListViewManager_EndStatusSync__, callback);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4216186 = 1;
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
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      v32 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v30, v31);
      NetworkManager_ResultCallbackFunc___ctor(
        v32,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v32,
                                                                       (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v20 = unchoiceList;
        v21 = choiceList;
        v23 = 1;
        v22 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B0D97C(Request_WarBoardWallAttackRequest);
    }
  }
  else if ( modeKind == 1 && EventFortificationListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17);
    NetworkManager_ResultCallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v18,
                                                                     (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v20 = unlockList;
      v21 = lockList;
      v22 = 1;
      v23 = 0;
LABEL_17:
      CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v21, v20, 0, v22, v23, 0LL);
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
  System_Delegate_o *Callback; // x21
  struct EventFortificationListViewManager_CallbackFunc_o **p_Callback; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventFortificationListViewManager_o *v10; // x0
  EventFortificationListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_421615F & 1) == 0 )
  {
    sub_B0D8A4(&EventFortificationListViewManager_CallbackFunc_TypeInfo, value);
    byte_421615F = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  p_Callback = &this->fields.Callback;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(Callback, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (EventFortificationListViewManager_CallbackFunc_c *)v7->klass != EventFortificationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B022BC(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventFortificationListViewManager_o *)sub_B0DC70(v7);
  EventFortificationListViewManager__remove_Callback(v10, v11, v12);
}


void __fastcall EventFortificationListViewManager__add_CallbackFunc2(
        EventFortificationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *CallbackFunc2; // x21
  struct System_Action_o **p_CallbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventFortificationListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4216161 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4216161 = 1;
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
    v8 = sub_B022BC(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventFortificationListViewManager_o *)sub_B0DC70(v7);
  EventFortificationListViewManager__remove_CallbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_EventFortificationListViewObject__o *__fastcall EventFortificationListViewManager__get_ClippingObjectList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  int size; // w22
  unsigned int v13; // w23
  const MethodInfo *v14; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x21

  if ( (byte_4216166 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v8);
    byte_4216166 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      Component_srcLineSprite = objectList->fields._items->m_Items[v13];
      if ( !Component_srcLineSprite )
        break;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
      if ( !Component_srcLineSprite )
        break;
      v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)EventFortificationListViewObject__GetItem(
                                                              (EventFortificationListViewObject_o *)Component_srcLineSprite,
                                                              v14);
      if ( !Component_srcLineSprite )
        break;
      if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
        || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_23719204(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)Component_srcLineSprite,
                                                                    0LL),
            ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
      {
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          v15,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
      }
      if ( (int)++v13 >= size )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v9;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B0D97C(Component_srcLineSprite);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v9;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v14; // x23
  UnityEngine_Object_o *v15; // x21

  if ( (byte_4216165 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4216165 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
        if ( !v10 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
      }
      if ( (__int64)++v14 >= size )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v10;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B0D97C(Component_srcLineSprite);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v10;
}


void __fastcall EventFortificationListViewManager__remove_Callback(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *Callback; // x21
  struct EventFortificationListViewManager_CallbackFunc_o **p_Callback; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventFortificationListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4216160 & 1) == 0 )
  {
    sub_B0D8A4(&EventFortificationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4216160 = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  p_Callback = &this->fields.Callback;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(Callback, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (EventFortificationListViewManager_CallbackFunc_c *)v7->klass != EventFortificationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B022BC(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventFortificationListViewManager_o *)sub_B0DC70(v7);
  EventFortificationListViewManager__add_CallbackFunc2(v10, v11, v12);
}


void __fastcall EventFortificationListViewManager__remove_CallbackFunc2(
        EventFortificationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *CallbackFunc2; // x21
  struct System_Action_o **p_CallbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4216162 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4216162 = 1;
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
    v8 = sub_B022BC(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B0DC70(v7);
  EventFortificationListViewManager__DeleteContinueData(v10);
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventFortificationListViewManager_CallbackFunc__BeginInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
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
  if ( (byte_4211B38 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&EventFortificationListViewManager_ResultKind_TypeInfo, v9);
    byte_4211B38 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EventFortificationListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall EventFortificationListViewManager_CallbackFunc__EndInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  EventFortificationListViewManager_CallbackFunc_o *v20; // x8
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
  EventFortificationListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

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
    v8 = (EventFortificationListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&index, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
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
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
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
            v18 = sub_AA67A0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B0D954(v17, v22);
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
            v16 = sub_AA67A0(v21, class_0, v10);
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4211B39 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isRequest);
    byte_4211B39 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall EventFortificationListViewManager_RequestCallbackFunc__EndInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager_RequestCallbackFunc__Invoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  EventFortificationListViewManager_RequestCallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
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
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  EventFortificationListViewManager_RequestCallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (EventFortificationListViewManager_RequestCallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
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
    sub_B0D97C(this);
  }
  return (_DWORD)this == EventFortificationWorkItem__get_ClassId(targetItem, 0LL);
}


bool __fastcall EventFortificationListViewManager___c__DisplayClass48_0___CreateList_b__1(
        EventFortificationListViewManager___c__DisplayClass48_0_o *this,
        UserServantEntity_o *data,
        const MethodInfo *method)
{
  EventFortificationListViewManager___c__DisplayClass48_0_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  struct EventFortificationWorkItem_o *targetItem; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userServantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4211B36 & 1) == 0 )
  {
    this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)sub_B0D8A4(
                                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                          data);
    byte_4211B36 = 1;
  }
  if ( !data )
    goto LABEL_10;
  v6 = *(_QWORD *)&data->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&data->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                        v10,
                                                                        0LL);
  targetItem = v4->fields.targetItem;
  if ( !targetItem
    || (userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)targetItem->fields.userServantEntity) == 0LL )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  return (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userServantEntity[5], 0LL);
}


void __fastcall EventFortificationListViewManager___c__DisplayClass95_0___ctor(
        EventFortificationListViewManager___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager___c__DisplayClass95_0___OnClickSelectPush_b__0(
        EventFortificationListViewManager___c__DisplayClass95_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  CommonUI_o *v10; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4211B37 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__1__, v6);
    byte_4211B37 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B0D840(&this->fields.__9__1, _9__1);
    }
    if ( v10 )
    {
      CommonUI__CloseConfirmDialog_17017160(v10, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B0D97C(Instance);
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
    sub_B0D97C(0LL);
  EventFortificationListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}