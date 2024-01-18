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
  ListViewSort_o *v13; // x20
  struct EventFortificationListViewManager_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_418909B & 1) == 0 )
  {
    sub_B2C35C(&EventFortificationListViewManager_TypeInfo, v1);
    sub_B2C35C(&ListViewSort_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_6193/*"EventServantFatigueList"*/, v9);
    byte_418909B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventFortificationListViewManager_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_6193/*"EventServantFatigueList"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6193/*"EventServantFatigueList"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v13 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v13, SORT_SAVE_KEY, 3, 0, 0LL);
  v14 = EventFortificationListViewManager_TypeInfo->static_fields;
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
  if ( (byte_4189084 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool__UserServantEntity__Invoke__, result);
    this = (EventFortificationListViewManager_o *)sub_B2C35C(&StringLiteral_21068/*"ng"*/, v5);
    byte_4189084 = 1;
  }
  if ( !result )
    goto LABEL_11;
  if ( !System_String__Equals_44292872(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
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
    sub_B2C434(this, result);
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
    (const MethodInfo_24C7E84 *)Method_System_Action_bool__UserServantEntity__Invoke__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  NetworkManager_ResultCallbackFunc_o *v14; // x21
  EnterUserSvtInfo_array *Request_WarBoardWallAttackRequest; // x0
  __int64 v16; // x1
  struct UserServantEntity_o *targetInUserServantEntity; // x9
  struct UserServantEntity_o *targetOutUserServantEntity; // x10
  EventFortificationRequest_o *v19; // x21
  struct EventFortificationWorkItem_o *v20; // x8
  struct EventFortificationDetailEntity_o *v21; // x10
  __int128 v22; // q1
  int32_t v23; // w22
  int32_t v24; // w23
  __int128 *v25; // x0
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x9
  int32_t position; // w24
  int32_t fortificationIdx; // w23
  EnterUserSvtInfo_o *v30; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x1
  struct EventFortificationDetailEntity_o *v33; // x10
  __int128 v34; // q1
  int64_t v35; // x25
  EnterUserSvtInfo_o *v36; // x24
  int32_t eventId; // w19
  const MethodInfo *v38; // x3
  __int128 v39[2]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v40[2]; // [xsp+20h] [xbp-80h] BYREF
  __int128 v41; // [xsp+40h] [xbp-60h]
  __int128 v42; // [xsp+50h] [xbp-50h]

  if ( (byte_4189083 & 1) == 0 )
  {
    sub_B2C35C(&EnterUserSvtInfo_TypeInfo, method);
    sub_B2C35C(&Method_EventFortificationListViewManager_CallbackFortificationRequest__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v7);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventFortificationRequest___, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_B2C35C(&SoundManager_TypeInfo, v12);
    byte_4189083 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CallbackFortificationRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EnterUserSvtInfo_array *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v14,
                                                                  (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  targetInUserServantEntity = this->fields.targetInUserServantEntity;
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v19 = (EventFortificationRequest_o *)Request_WarBoardWallAttackRequest;
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
        v30 = (EnterUserSvtInfo_o *)sub_B2C42C(EnterUserSvtInfo_TypeInfo);
        EnterUserSvtInfo___ctor(v30, fortificationIdx, position, 0LL, 0LL);
        if ( v13 )
        {
          v31 = v13;
          v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)v30;
          goto LABEL_30;
        }
      }
    }
    goto LABEL_33;
  }
  v20 = this->fields.targetFortificationWorkItem;
  if ( !targetOutUserServantEntity )
  {
    if ( v20 )
    {
      v33 = v20->fields.eventFortificationDetailEntity;
      if ( v33 )
      {
        v34 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
        v23 = v33->fields.fortificationIdx;
        v24 = v20->fields.position;
        v41 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
        v42 = v34;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v25 = v39;
        v39[0] = v41;
        v39[1] = v42;
        goto LABEL_28;
      }
    }
LABEL_33:
    sub_B2C434(Request_WarBoardWallAttackRequest, v16);
  }
  if ( !v20 )
    goto LABEL_33;
  v21 = v20->fields.eventFortificationDetailEntity;
  if ( !v21 )
    goto LABEL_33;
  v22 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
  v23 = v21->fields.fortificationIdx;
  v24 = v20->fields.position;
  v41 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
  v42 = v22;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v25 = v40;
  v40[0] = v41;
  v40[1] = v42;
LABEL_28:
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v25,
          0LL);
  v36 = (EnterUserSvtInfo_o *)sub_B2C42C(EnterUserSvtInfo_TypeInfo);
  EnterUserSvtInfo___ctor(v36, v23, v24, v35, 0LL);
  if ( !v13 )
    goto LABEL_33;
  v31 = v13;
  v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)v36;
LABEL_30:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v31,
    v32,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
  eventId = this->fields.eventId;
  Request_WarBoardWallAttackRequest = (EnterUserSvtInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v19 )
    goto LABEL_33;
  EventFortificationRequest__beginRequest(v19, eventId, Request_WarBoardWallAttackRequest, v38);
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
  const MethodInfo *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  EventFortificationListViewManager_c *v43; // x0
  struct ListViewSort_o *servantSortStatus; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct EventFortificationWorkItem_o **p_targetFortificationWorkItem; // x24
  struct EventFortificationWorkItem_o *v64; // x1
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
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct ListViewSort_o *v83; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  System_Int32_array *v87; // x23
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_Int32_array **v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v97; // q0
  __int128 v98; // q1
  struct EventFortificationWorkItem_o *v99; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x24
  int32_t v101; // w28
  UserServantEntity_o *v102; // x27
  EventFortificationListViewItem_o *v103; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v104; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v105; // x0
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v107; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x0
  void *monitor; // x8
  unsigned __int64 v110; // x28
  signed __int64 v111; // x20
  UserServantEntity_o *v112; // x25
  int32_t v113; // w26
  struct EventFortificationWorkItem_o *v114; // x27
  EventFortificationListViewItem_o *v115; // x0
  EventFortificationWorkItem_o *v116; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *v117; // x21
  __int64 v118; // x0
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v120; // x2
  const MethodInfo *v121; // x1
  int64_t v122; // [xsp+0h] [xbp-D0h]
  EventUpValSetupInfo_o *v123; // [xsp+8h] [xbp-C8h]
  EventFortificationListViewManager_o *v124; // [xsp+10h] [xbp-C0h]
  struct EventFortificationWorkItem_o **v125; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127[2]; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4189077 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v13);
    sub_B2C35C(&EventFortificationListViewItem_TypeInfo, v14);
    sub_B2C35C(&EventFortificationListViewManager_TypeInfo, v15);
    sub_B2C35C(&EventUpValSetupInfo_TypeInfo, v16);
    sub_B2C35C(&Method_System_Func_UserServantEntity__bool___ctor__, v17);
    sub_B2C35C(&System_Func_UserServantEntity__bool__TypeInfo, v18);
    sub_B2C35C(&int___TypeInfo, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v20);
    sub_B2C35C(&LocalizationManager_TypeInfo, v21);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B2C35C(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__, v24);
    sub_B2C35C(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__, v25);
    sub_B2C35C(&EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo, v26);
    sub_B2C35C(&StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v27);
    byte_4189077 = 1;
  }
  memset(&v127[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v28 = sub_B2C42C(EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo);
  EventFortificationListViewManager___c__DisplayClass48_0___ctor(
    (EventFortificationListViewManager___c__DisplayClass48_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_59;
  *(_QWORD *)(v28 + 16) = targetItem;
  v125 = (struct EventFortificationWorkItem_o **)(v28 + 16);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v28 + 16),
    (System_Int32_array **)targetItem,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v43 = EventFortificationListViewManager_TypeInfo;
  if ( (BYTE3(EventFortificationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v43 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v43->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)servantSortStatus,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
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
  TitleInfoControl__setBackBtnSprite_19529688((TitleInfoControl_o *)sort, 1, 0, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_59;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_59;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v45, v46, v47, v48, v49, v50);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    0LL,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.eventId = eventId;
  this->fields.fortificationConfirmDialog = fortificationConfirmDialog;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.fortificationConfirmDialog,
    (System_Int32_array **)fortificationConfirmDialog,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  p_targetFortificationWorkItem = &this->fields.targetFortificationWorkItem;
  v64 = *v125;
  this->fields.targetFortificationWorkItem = *v125;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetFortificationWorkItem,
    (System_Int32_array **)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields.selectAfterCallback = afterCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectAfterCallback,
    (System_Int32_array **)afterCallback,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v83 = this->fields.sort;
  this->fields.modeKind = 0;
  if ( !v83 )
    goto LABEL_59;
  iconScaleKind = v83->fields.iconScaleKind;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
LABEL_20:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_59;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_59;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = sub_B2C374(int___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_59;
  v87 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
  {
LABEL_53:
    v118 = sub_B2C460(sort);
    sub_B2C400(v118, 0LL);
  }
  *(_DWORD *)(sort + 32) = eventId;
  v123 = (EventUpValSetupInfo_o *)sub_B2C42C(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_26087716(v123, v87, 1, 0LL);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)sort,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_59;
  v89 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)sort,
                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  *(_QWORD *)(v28 + 24) = v89;
  sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 24), v89, v90, v91, v92, v93, v94, v95);
  if ( !*p_targetFortificationWorkItem )
    goto LABEL_59;
  userServantEntity = (*p_targetFortificationWorkItem)->fields.userServantEntity;
  if ( userServantEntity )
  {
    v98 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    v97 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v127, -1LL, 0LL);
    v98 = *(_OWORD *)&v127[0].fields.currentCryptoKey;
    v97 = *(_OWORD *)&v127[0].fields.fakeValue;
  }
  *(_OWORD *)&v127[1].fields.currentCryptoKey = v98;
  *(_OWORD *)&v127[1].fields.fakeValue = v97;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v126 = v127[1];
  sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v126, 0LL);
  v122 = sort;
  if ( !MasterData_WarQuestSelectionMaster
    || (sort = (__int64)UserServantMaster__getOrganizationList(MasterData_WarQuestSelectionMaster, 0LL),
        (v99 = *v125) == 0LL) )
  {
LABEL_59:
    sub_B2C434(sort, v30);
  }
  v100 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  v124 = this;
  if ( !v99->fields.isSvtDataSetInMaster )
  {
    eventFortificationDetailEntity = v99->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      goto LABEL_59;
    if ( eventFortificationDetailEntity->fields.classId )
    {
      v107 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v107,
        (Il2CppObject *)v28,
        Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__,
        (const MethodInfo_2711C04 *)Method_System_Func_UserServantEntity__bool___ctor__);
      v108 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               v100,
               (System_Func_TSource__bool__o *)v107,
               (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      sort = (__int64)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                        v108,
                        (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
      v100 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
    }
LABEL_47:
    if ( !v100 )
      goto LABEL_59;
    goto LABEL_48;
  }
  v101 = this->fields.eventId;
  v102 = v99->fields.userServantEntity;
  v103 = (EventFortificationListViewItem_o *)sub_B2C42C(EventFortificationListViewItem_TypeInfo);
  EventFortificationListViewItem___ctor(v103, v102, v101, v122, v123, v99, 0LL);
  v104 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v104,
    (Il2CppObject *)v28,
    Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__,
    (const MethodInfo_2711C04 *)Method_System_Func_UserServantEntity__bool___ctor__);
  v105 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
           v100,
           (System_Func_TSource__bool__o *)v104,
           (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  sort = (__int64)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                    v105,
                    (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
  if ( !*(_QWORD *)(v28 + 16) )
    goto LABEL_59;
  v100 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  sort = EventFortificationWorkItem__get_IsNpc(*(EventFortificationWorkItem_o **)(v28 + 16), v30);
  this = v124;
  if ( (sort & 1) == 0 )
    goto LABEL_47;
  sort = (__int64)v124->fields.itemList;
  if ( !sort )
    goto LABEL_59;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v103,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
  if ( !v100 )
    goto LABEL_59;
LABEL_48:
  monitor = v100[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v110 = 0LL;
    v111 = (int)monitor;
    while ( 1 )
    {
      v112 = (UserServantEntity_o *)*((_QWORD *)&v100[2].klass + v110);
      v113 = this->fields.eventId;
      v114 = *v125;
      v115 = (EventFortificationListViewItem_o *)sub_B2C42C(EventFortificationListViewItem_TypeInfo);
      v116 = v114;
      this = v124;
      v117 = (EventMissionProgressRequest_Argument_ProgressData_o *)v115;
      EventFortificationListViewItem___ctor(v115, v112, v113, v122, v123, v116, 0LL);
      sort = (__int64)v124->fields.itemList;
      if ( !sort )
        goto LABEL_59;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        v117,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v110 >= v111 )
        break;
      if ( v110 >= LODWORD(v100[1].monitor) )
        goto LABEL_53;
    }
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_59;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EventFortificationListViewManager__SetStatusKind(this, this->fields.modeKind, v120);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventFortificationListViewManager__SetFilterButtonImage(this, v121);
}


void __fastcall EventFortificationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventFortificationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4189073 & 1) == 0 )
  {
    sub_B2C35C(&EventFortificationListViewManager_TypeInfo, v1);
    byte_4189073 = 1;
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
    sub_B2C434(0LL, v1);
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
    sub_B2C434(0LL, v3);
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
  EventFortificationListViewManager__SetMode_27546940(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_27546940(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_27546940(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_27546940(this, 2, v5);
}


void __fastcall EventFortificationListViewManager__EndPushRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__ModifyList(this, 0, method);
  EventFortificationListViewManager__SetMode_27546940(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__EndSelectFilterKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4189089 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4189089 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EventFortificationListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  CommonUI__CloseServantFilterSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__EndSelectSortKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_418908D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_418908D = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
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
  __int64 v7; // x1

  if ( (byte_4189086 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4189086 = 1;
  }
  EventFortificationListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventFortificationListViewManager__ModifyList(this, 0, v4);
  EventFortificationListViewManager__SetMode_27546940(this, 2, v5);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
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
    sub_B2C2F8(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  if ( (byte_4189087 & 1) == 0 )
  {
    sub_B2C35C(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    this = (EventFortificationListViewManager_o *)sub_B2C35C(
                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                    v7);
    byte_4189087 = 1;
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
      this = (EventFortificationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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

  if ( (byte_418907E & 1) == 0 )
  {
    sub_B2C35C(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_418907E = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_4189091 & 1) == 0 )
  {
    sub_B2C35C(&EventFortificationListViewItem_TypeInfo, choiceList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_4189091 = 1;
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
      v28 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (EventFortificationListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != EventFortificationListViewItem_TypeInfo )
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

  if ( (byte_4189090 & 1) == 0 )
  {
    sub_B2C35C(&EventFortificationListViewItem_TypeInfo, lockList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_4189090 = 1;
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
      v28 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (EventFortificationListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != EventFortificationListViewItem_TypeInfo )
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

  if ( (byte_4189074 & 1) == 0 )
  {
    sub_B2C35C(&EventFortificationListViewManager_TypeInfo, v1);
    byte_4189074 = 1;
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
    sub_B2C434(0LL, v1);
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
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x11
  EventFortificationListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v22; // q0
  int64_t v23; // x0
  __int128 v24; // q0
  UnityEngine_Object_o *viewObject; // x21
  __int64 v26; // x1
  struct ListViewObject_o *v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+60h] [xbp-60h] BYREF

  if ( (byte_418907B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B2C35C(&EventFortificationListViewItem_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_418907B = 1;
  }
  memset(&v31, 0, sizeof(v31));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v30,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v31.fields.current = (Il2CppObject *)v30.fields.fakeValue;
      *(_OWORD *)&v31.fields.list = *(_OWORD *)&v30.fields.currentCryptoKey;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v31,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v17 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v31,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v31.fields.current
          && (v19 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v31.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v19) )
        {
          if ( (EventFortificationListViewItem_c *)v31.fields.current->klass->_2.typeHierarchy[v19 - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v31.fields.current;
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
            *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v30.fields.fakeValue = v22;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v29 = v30;
            v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v29, 0LL);
            v24 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
            *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v28.fields.fakeValue = v24;
            if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v28, 0LL) )
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
          v27 = current->fields.viewObject;
          if ( !v27 )
            sub_B2C434(0LL, v26);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v27->klass->vtable._5_SetItem.method)(
            v27,
            current,
            v27->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_39:
    sub_B2C434(Instance, v14);
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

  if ( (byte_418907D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_B2C35C(&EventFortificationListViewItem_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418907D = 1;
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
        EventFortificationListViewManager__ModifyLockItem(this, v27, 1, isIconSizeChangea, v28);
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
  __int64 v17; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x21
  bool v20; // w28
  int64_t v21; // x0
  __int64 v22; // x1
  __int64 v23; // x11
  EventFortificationListViewItem_o *current; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v26; // q0
  int64_t v27; // x0
  __int128 v28; // q0
  int64_t v29; // x23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v31; // x1
  struct ListViewObject_o *v32; // x0
  __int64 v33; // x1
  ListViewObject_o *v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_418907C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11);
    sub_B2C35C(&EventFortificationListViewItem_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_418907C = 1;
  }
  memset(&v39, 0, sizeof(v39));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v38,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v39.fields.current = (Il2CppObject *)v38.fields.fakeValue;
      *(_OWORD *)&v39.fields.list = *(_OWORD *)&v38.fields.currentCryptoKey;
      v20 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v39,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v21 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v39,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v39.fields.current
          && (v23 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v39.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v23) )
        {
          if ( (EventFortificationListViewItem_c *)v39.fields.current->klass->_2.typeHierarchy[v23 - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v39.fields.current;
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
        userServantEntity = current->fields.userServantEntity;
        if ( !userServantEntity )
          sub_B2C434(v21, v22);
        v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v38.fields.fakeValue = v26;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v37 = v38;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v37, 0LL);
        v28 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
        v29 = v27;
        *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v36.fields.fakeValue = v28;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v36, 0LL);
        if ( v29 == v21 )
          EventFortificationListViewItem__SetUserServantEntity(current, Entity, 0LL);
LABEL_26:
        if ( v20 )
        {
          if ( !current )
            sub_B2C434(v21, v22);
          EventFortificationListViewItem__ModifyLockItem(current, 0LL);
          EventFortificationListViewItem__ModifyChoiceItem(current, 0LL);
          EventFortificationListViewItem__ModifyPushItem(current, 0LL);
        }
        else if ( !current )
        {
          sub_B2C434(v21, v22);
        }
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v32 = current->fields.viewObject;
          if ( !v32 )
            sub_B2C434(0LL, v31);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v32->klass->vtable._5_SetItem.method)(
            v32,
            current,
            v32->klass->vtable._6_SetItem.methodPtr);
          if ( isIconSizeChange )
          {
            v34 = current->fields.viewObject;
            if ( !v34 )
              sub_B2C434(0LL, v33);
            ListViewObject__SetItemSeed(v34, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_46:
    sub_B2C434(Instance, v17);
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

  if ( (byte_4189097 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool__UserServantEntity__Invoke__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4189097 = 1;
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


void __fastcall EventFortificationListViewManager__OnClickBonusFilterKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_418908A & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418908A = 1;
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


void __fastcall EventFortificationListViewManager__OnClickChoiceTab(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_4189094 & 1) == 0 )
  {
    sub_B2C35C(&Method_EventFortificationListViewManager_EndClickTabChoice__, method);
    sub_B2C35C(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4189094 = 1;
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
      v6 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B2C42C(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabChoice__,
        0LL);
      EventFortificationListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 2, v5);
      EventFortificationListViewManager__RefreshListDisp(this, v8);
      EventFortificationListViewManager__ModifyList(this, 0, v9);
      EventFortificationListViewManager__SetMode_27546940(this, 2, v10);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickCollectLock(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_4189093 & 1) == 0 )
  {
    sub_B2C35C(&Method_EventFortificationListViewManager_EndClickTabLock__, method);
    sub_B2C35C(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4189093 = 1;
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
      v6 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B2C42C(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabLock__,
        0LL);
      EventFortificationListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 1, v5);
      EventFortificationListViewManager__RefreshListDisp(this, v8);
      EventFortificationListViewManager__ModifyList(this, 0, v9);
      EventFortificationListViewManager__SetMode_27546940(this, 2, v10);
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
  ServantFilterSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4189088 & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_EventFortificationListViewManager_EndSelectFilterKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_4189088 = 1;
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
      Method_EventFortificationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B2C434(v10, v11);
    CommonUI__OpenServantFilterSelectMenu(v8, 1, sort, v9, 0, 0LL);
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
  EventFortificationListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4189092 & 1) == 0 )
  {
    sub_B2C35C(&Method_EventFortificationListViewManager_EndClickTabStatus__, method);
    sub_B2C35C(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4189092 = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v5 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B2C42C(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    EventFortificationListViewManager_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndClickTabStatus__,
      0LL);
    EventFortificationListViewManager__StatusRequest(this, v5, v6);
  }
}


void __fastcall EventFortificationListViewManager__OnClickPushTab(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_4189095 & 1) == 0 )
  {
    sub_B2C35C(&Method_EventFortificationListViewManager_EndClickTabPush__, method);
    sub_B2C35C(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4189095 = 1;
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
      v6 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B2C42C(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabPush__,
        0LL);
      EventFortificationListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 3, v5);
      EventFortificationListViewManager__RefreshListDisp(this, v8);
      EventFortificationListViewManager__ModifyList(this, 0, v9);
      EventFortificationListViewManager__SetMode_27546940(this, 2, v10);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickScaleChange(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_4189098 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189098 = 1;
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
  EventFortificationListViewManager__ModifyList(this, 1, v16);
  EventFortificationListViewManager__SetMode_27546940(this, 2, v17);
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
  __int64 v21; // x10
  __int64 v22; // x10
  EventFortificationListViewObject_o *v23; // x0
  EventMissionProgressRequest_Argument_ProgressData_o **p_targetInUserServantEntity; // x23
  EventFortificationListViewItem_o *Item; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UserServantEntity_o **p_targetOutUserServantEntity; // x24
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x22
  System_Collections_Generic_List_int__o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v49; // q1
  struct UserServantEntity_o *v50; // x8
  __int128 v51; // q0
  int64_t v52; // x25
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct EventFortificationWorkItem_o *v59; // x8
  System_Int32_array **v60; // x1
  FortificationConfirmDialogComponent_o *v61; // x23
  UserServantEntity_array *v62; // x22
  System_Int32_array *v63; // x21
  System_String_o *v64; // x24
  System_String_o *v65; // x25
  int32_t v66; // w20
  System_Action_o *v67; // x26
  int32_t v68; // w1
  System_Int32_array **v69; // x1
  FortificationConfirmDialogComponent_o *v70; // x23
  UserServantEntity_array *v71; // x22
  System_Int32_array *v72; // x21
  System_String_o *TargetTeamName; // x24
  System_String_o *TargetDetailName; // x25
  int32_t TargetWorkType; // w20
  System_Action_o *v76; // x26
  struct UserServantEntity_o *v77; // x8
  __int128 v78; // q0
  struct UserServantEntity_o *v79; // x8
  __int128 v80; // q0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  struct UserServantEntity_o *v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct EventFortificationWorkItem_o *v94; // x8
  System_Int32_array **v95; // x1
  int32_t AddPoint; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+90h] [xbp-70h]

  if ( (byte_4189082 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, obj);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B2C35C(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__, v7);
    sub_B2C35C(&EventFortificationListViewObject_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&SoundManager_TypeInfo, v19);
    byte_4189082 = 1;
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
  v21 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v21
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v21 - 1] != EventFortificationListViewObject_TypeInfo )
  {
    goto LABEL_52;
  }
  v22 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v22 )
    v23 = (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v22 - 1] == EventFortificationListViewObject_TypeInfo
        ? (EventFortificationListViewObject_o *)obj
        : 0LL;
  else
    v23 = 0LL;
  p_targetInUserServantEntity = (EventMissionProgressRequest_Argument_ProgressData_o **)&this->fields.targetInUserServantEntity;
  Item = EventFortificationListViewObject__GetItem(v23, (const MethodInfo *)obj);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v26, v27, v28, v29, v30, v31);
  p_targetOutUserServantEntity = &this->fields.targetOutUserServantEntity;
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
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_52;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_52;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v40 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    goto LABEL_52;
  userServantEntity = targetFortificationWorkItem->fields.userServantEntity;
  if ( !userServantEntity )
  {
    if ( Item )
    {
      v69 = (System_Int32_array **)Item->fields.userServantEntity;
      *p_targetInUserServantEntity = (EventMissionProgressRequest_Argument_ProgressData_o *)v69;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
        v69,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
      if ( v39 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v39,
          *p_targetInUserServantEntity,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        fortificationConfirmDialog = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
        if ( v40 )
        {
          System_Collections_Generic_List_int___Add(
            v40,
            fortificationConfirmDialog,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          v70 = this->fields.fortificationConfirmDialog;
          v71 = (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
          v72 = System_Collections_Generic_List_int___ToArray(
                  v40,
                  (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
          TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
          TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
          TargetWorkType = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
          v76 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v76,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
            0LL);
          if ( v70 )
          {
            FortificationConfirmDialogComponent__Open(
              v70,
              0,
              v71,
              v72,
              TargetTeamName,
              TargetDetailName,
              TargetWorkType,
              v76,
              0LL);
            return;
          }
        }
      }
    }
    goto LABEL_52;
  }
  v49 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v101.fields.fakeValue = v49;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v100 = v101;
  fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v100, 0LL);
  if ( !Item )
    goto LABEL_52;
  v50 = Item->fields.userServantEntity;
  if ( !v50 )
    goto LABEL_52;
  v51 = *(_OWORD *)&v50->fields.id.fields.fakeValue;
  v52 = fortificationConfirmDialog;
  *(_OWORD *)&v99.fields.currentCryptoKey = *(_OWORD *)&v50->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v99.fields.fakeValue = v51;
  fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v99, 0LL);
  v59 = this->fields.targetFortificationWorkItem;
  if ( v52 != fortificationConfirmDialog )
  {
    if ( v59 )
    {
      v77 = v59->fields.userServantEntity;
      if ( !v77 )
        return;
      v78 = *(_OWORD *)&v77->fields.id.fields.fakeValue;
      *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)&v77->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v101.fields.fakeValue = v78;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v98 = v101;
      fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v98, 0LL);
      v79 = Item->fields.userServantEntity;
      if ( v79 )
      {
        v80 = *(_OWORD *)&v79->fields.id.fields.fakeValue;
        *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)&v79->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v97.fields.fakeValue = v80;
        if ( fortificationConfirmDialog == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                             &v97,
                                             0LL) )
          return;
        v87 = Item->fields.userServantEntity;
        this->fields.targetInUserServantEntity = v87;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
          (System_Int32_array **)v87,
          v81,
          v82,
          v83,
          v84,
          v85,
          v86);
        v94 = this->fields.targetFortificationWorkItem;
        if ( v94 )
        {
          v95 = (System_Int32_array **)v94->fields.userServantEntity;
          *p_targetOutUserServantEntity = (struct UserServantEntity_o *)v95;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
            v95,
            v88,
            v89,
            v90,
            v91,
            v92,
            v93);
          if ( v39 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v39,
              (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetOutUserServantEntity,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
            if ( fortificationConfirmDialog )
            {
              fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                             (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                             (const MethodInfo *)obj);
              if ( v40 )
              {
                System_Collections_Generic_List_int___Add(
                  v40,
                  fortificationConfirmDialog,
                  (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v39,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetInUserServantEntity,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
                AddPoint = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
                System_Collections_Generic_List_int___Add(
                  v40,
                  AddPoint,
                  (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
                v61 = this->fields.fortificationConfirmDialog;
                v62 = (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                                   (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                v63 = System_Collections_Generic_List_int___ToArray(
                        v40,
                        (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
                v64 = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
                v65 = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
                v66 = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
                v67 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                System_Action___ctor(
                  v67,
                  (Il2CppObject *)this,
                  Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                  0LL);
                if ( v61 )
                {
                  v68 = 2;
                  goto LABEL_50;
                }
              }
            }
          }
        }
      }
    }
LABEL_52:
    sub_B2C434(fortificationConfirmDialog, obj);
  }
  if ( !v59 )
    goto LABEL_52;
  v60 = (System_Int32_array **)v59->fields.userServantEntity;
  *p_targetOutUserServantEntity = (struct UserServantEntity_o *)v60;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    v60,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  if ( !v39 )
    goto LABEL_52;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v39,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetOutUserServantEntity,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
  fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
  if ( !fortificationConfirmDialog )
    goto LABEL_52;
  fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                 (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                 (const MethodInfo *)obj);
  if ( !v40 )
    goto LABEL_52;
  System_Collections_Generic_List_int___Add(
    v40,
    fortificationConfirmDialog,
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  v61 = this->fields.fortificationConfirmDialog;
  v62 = (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
  v63 = System_Collections_Generic_List_int___ToArray(
          v40,
          (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  v64 = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
  v65 = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
  v66 = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
  v67 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v67,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
    0LL);
  if ( !v61 )
    goto LABEL_52;
  v68 = 1;
LABEL_50:
  FortificationConfirmDialogComponent__Open(v61, v68, v62, v63, v64, v65, v66, v67, 0LL);
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
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x9
  System_Int32_array **Item; // x0
  EventFortificationListViewItem_o **v36; // x20
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
  EventFortificationListViewItem_o *v93; // x8
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

  if ( (byte_4189099 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, obj);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B2C35C(&EventFortificationListViewObject_TypeInfo, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&object___TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B2C35C(&Rarity_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B2C35C(&SoundManager_TypeInfo, v18);
    sub_B2C35C(&Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__0__, v19);
    sub_B2C35C(&EventFortificationListViewManager___c__DisplayClass95_0_TypeInfo, v20);
    sub_B2C35C(&StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v21);
    sub_B2C35C(&StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v22);
    sub_B2C35C(&StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v23);
    sub_B2C35C(&StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v24);
    byte_4189099 = 1;
  }
  v25 = sub_B2C42C(EventFortificationListViewManager___c__DisplayClass95_0_TypeInfo);
  EventFortificationListViewManager___c__DisplayClass95_0___ctor(
    (EventFortificationListViewManager___c__DisplayClass95_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_69;
  *(_QWORD *)(v25 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  if ( !obj )
    goto LABEL_69;
  v34 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v34
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v34 - 1] != EventFortificationListViewObject_TypeInfo )
  {
    SelfUserGame = sub_B2C728(obj);
    goto LABEL_71;
  }
  Item = (System_Int32_array **)EventFortificationListViewObject__GetItem(
                                  (EventFortificationListViewObject_o *)obj,
                                  (const MethodInfo *)EventFortificationListViewObject_TypeInfo);
  *(_QWORD *)(v25 + 24) = Item;
  v36 = (EventFortificationListViewItem_o **)(v25 + 24);
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
  EventFortificationListViewManager__PushRequest(this, *v36, v46);
}


void __fastcall EventFortificationListViewManager__OnClickSortAscendingOrder(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_418908E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418908E = 1;
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
  ServantSortSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418908C & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_EventFortificationListViewManager_EndSelectSortKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418908C = 1;
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
      Method_EventFortificationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_B2C434(v10, v11);
    CommonUI__OpenServantSortSelectMenu(v8, 3, sort, 0, v9, 0LL);
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
  const MethodInfo *v9; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 v11; // x10
  EventFortificationListViewItem_o *Item; // x21
  UserServantEntity_o *userServantEntity; // x21
  CommonUI_o *v14; // x20
  ServantStatusDialog_EndDelegate_o *v15; // x22

  if ( (byte_4189085 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_B2C35C(&Method_EventFortificationListViewManager_EndShowServant__, v5);
    sub_B2C35C(&EventFortificationListViewObject_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&SoundManager_TypeInfo, v8);
    byte_4189085 = 1;
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
      || (Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)obj, v9),
          scrollView = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          !Item)
      || (userServantEntity = Item->fields.userServantEntity,
          v14 = (CommonUI_o *)scrollView,
          v15 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v15,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_EndShowServant__,
            0LL),
          !v14) )
    {
LABEL_14:
      sub_B2C434(scrollView, v9);
    }
    CommonUI__OpenServantStatusDialog_17982092(v14, 0, userServantEntity, v15, 0LL);
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
  __int64 v7; // x1
  UnityEngine_Behaviour_o *v8; // x0
  System_Action_o *CallbackFunc2; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4189081 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189081 = 1;
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
        v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
        if ( !v8
          || (UnityEngine_Behaviour__set_enabled(v8, 1, 0LL),
              (v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL)
          || (((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, Il2CppClass *))v8->klass[1]._1.castClass)(
                v8,
                1LL,
                v8->klass[1]._1.declaringType),
              (v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
        {
          sub_B2C434(v8, v7);
        }
        UIScrollView__UpdatePosition((UIScrollView_o *)v8, 0LL);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.CallbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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

  if ( (byte_418909A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B2C35C(&Method_EventFortificationListViewManager_EndPushRequest__, v5);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_418909A = 1;
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
    Method_EventFortificationListViewManager_EndPushRequest__,
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


void __fastcall EventFortificationListViewManager__RefreshListDisp(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventFortificationListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w8
  System_Collections_Generic_List_EventFortificationListViewObject__o *v7; // x20
  int v8; // w21
  __int64 v9; // x22
  unsigned int v10; // w8

  if ( (byte_4189078 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v3);
    byte_4189078 = 1;
  }
  ObjectList = EventFortificationListViewManager__get_ObjectList(this, method);
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
        ObjectList = (System_Collections_Generic_List_EventFortificationListViewObject__o *)v7->fields._items->m_Items[v9];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_EventFortificationListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
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
  int32_t size; // w8
  System_Collections_Generic_List_EventFortificationListViewObject__o *v14; // x21
  int v15; // w24
  __int64 v16; // x25
  unsigned int v17; // w8
  EventFortificationListViewObject_o *v18; // x22
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4189080 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_EventFortificationListViewManager_OnMoveEnd__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v9);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v10);
    byte_4189080 = 1;
  }
  ObjectList = EventFortificationListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
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
        System_Action___ctor(v19, (Il2CppObject *)this, Method_EventFortificationListViewManager_OnMoveEnd__, 0LL);
        if ( !v18 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventFortificationListViewObject__Init(
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


void __fastcall EventFortificationListViewManager__SetFilterButtonImage(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_418908B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, method);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v3);
    byte_418908B = 1;
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

  if ( (byte_418907A & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v3);
    sub_B2C35C(&StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v4);
    sub_B2C35C(&StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v5);
    sub_B2C35C(&StringLiteral_6430/*"FORTIFICATION_GUIDE_HELP"*/, v6);
    byte_418907A = 1;
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
      v8 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6430/*"FORTIFICATION_GUIDE_HELP"*/, 0LL);
      targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
      if ( !targetFortificationWorkItem )
        goto LABEL_32;
      v11 = (System_String_o *)v8;
      v12 = this->fields.targetFortificationWorkItem;
      if ( (byte_41890C9 & 1) == 0 )
      {
        v8 = sub_B2C35C(&StringLiteral_1/*""*/, v9);
        byte_41890C9 = 1;
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
      v8 = (__int64)System_String__Format_44301068(
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
      v19 = &StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_29;
    case 2:
      v18 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_29;
    case 3:
      v18 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_29:
      v8 = (__int64)LocalizationManager__Get((System_String_o *)*v19, 0LL);
      if ( !v18 )
LABEL_32:
        sub_B2C434(v8, v9);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.Callback,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventFortificationListViewManager__SetMode_27546940(this, mode, v10);
}


void __fastcall EventFortificationListViewManager__SetMode_27546940(
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


void __fastcall EventFortificationListViewManager__SetMode_27547056(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventFortificationListViewManager__SetMode_27546940(this, mode, v10);
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
  if ( (byte_418907F & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_B2C35C(&EventFortificationListViewObject_TypeInfo, obj);
    byte_418907F = 1;
  }
  if ( !obj
    || (v6 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventFortificationListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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

  if ( (byte_418908F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v4);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v5);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v6);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v7);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v8);
    byte_418908F = 1;
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
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v12 )
      goto LABEL_37;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
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
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v17->fields.isAscendingOrder;
              v19 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
              v20 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
LABEL_33:
              if ( isAscendingOrder )
                v23 = v19;
              else
                v23 = v20;
              UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
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
          v21 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
          v22 = this->fields.sort;
          if ( v22 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v22->fields.isAscendingOrder;
              v19 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
              v20 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
              goto LABEL_33;
            }
          }
        }
      }
    }
LABEL_37:
    sub_B2C434(sort, v10);
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
  System_String_o **v13; // x8
  System_String_o **v14; // x8
  System_String_o **v15; // x8
  System_String_o **v16; // x8
  const MethodInfo *v17; // x1

  if ( (byte_4189079 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17137/*"button_push_reg"*/, *(_QWORD *)&modeKind);
    sub_B2C35C(&StringLiteral_17138/*"button_push_unreg"*/, v5);
    sub_B2C35C(&StringLiteral_17123/*"button_allchoice_reg"*/, v6);
    sub_B2C35C(&StringLiteral_17126/*"button_alllock_unreg"*/, v7);
    sub_B2C35C(&StringLiteral_17139/*"button_select_reg"*/, v8);
    sub_B2C35C(&StringLiteral_17140/*"button_select_unreg"*/, v9);
    sub_B2C35C(&StringLiteral_17125/*"button_alllock_reg"*/, v10);
    sub_B2C35C(&StringLiteral_17124/*"button_allchoice_unreg"*/, v11);
    byte_4189079 = 1;
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

  if ( (byte_4189096 & 1) == 0 )
  {
    sub_B2C35C(&Method_EventFortificationListViewManager_EndStatusSync__, callback);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4189096 = 1;
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
        Method_EventFortificationListViewManager_EndStatusSync__,
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
  else if ( modeKind == 1 && EventFortificationListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
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
      Method_EventFortificationListViewManager_EndStatusSync__,
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

  if ( (byte_418906F & 1) == 0 )
  {
    sub_B2C35C(&EventFortificationListViewManager_CallbackFunc_TypeInfo, value);
    byte_418906F = 1;
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
    v8 = sub_B20D74(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventFortificationListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_4189071 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4189071 = 1;
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
  v10 = (EventFortificationListViewManager_o *)sub_B2C728(v7);
  EventFortificationListViewManager__remove_CallbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_EventFortificationListViewObject__o *__fastcall EventFortificationListViewManager__get_ClippingObjectList(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_4189076 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v7);
    byte_4189076 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
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
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
      if ( !Component_srcLineSprite )
        break;
      v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)EventFortificationListViewObject__GetItem(
                                                              (EventFortificationListViewObject_o *)Component_srcLineSprite,
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
      }
      if ( (int)++v13 >= size )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v8;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B2C434(Component_srcLineSprite, v10);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v8;
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

  if ( (byte_4189075 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4189075 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
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
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
      }
      if ( (__int64)++v14 >= size )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v9;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B2C434(Component_srcLineSprite, v11);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v9;
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

  if ( (byte_4189070 & 1) == 0 )
  {
    sub_B2C35C(&EventFortificationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4189070 = 1;
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
    v8 = sub_B20D74(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventFortificationListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_4189072 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4189072 = 1;
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
  v10 = (const MethodInfo *)sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4184AD9 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&EventFortificationListViewManager_ResultKind_TypeInfo, v9);
    byte_4184AD9 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EventFortificationListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall EventFortificationListViewManager_CallbackFunc__EndInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4184ADA & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isRequest);
    byte_4184ADA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall EventFortificationListViewManager_RequestCallbackFunc__EndInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  EventFortificationListViewManager_RequestCallbackFunc_o *v20; // x8
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
  EventFortificationListViewManager_RequestCallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (EventFortificationListViewManager_RequestCallbackFunc_o **)(v4 + 32);
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
    sub_B2C434(this, data);
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
  if ( (byte_4184AD7 & 1) == 0 )
  {
    this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)sub_B2C35C(
                                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                          data);
    byte_4184AD7 = 1;
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
  this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                        v10,
                                                                        0LL);
  targetItem = v4->fields.targetItem;
  if ( !targetItem
    || (userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)targetItem->fields.userServantEntity) == 0LL )
  {
LABEL_10:
    sub_B2C434(this, data);
  }
  return (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userServantEntity[5], 0LL);
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
  CommonUI_o *v9; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4184AD8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__1__, v6);
    byte_4184AD8 = 1;
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
        Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__1__,
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


void __fastcall EventFortificationListViewManager___c__DisplayClass95_0___OnClickSelectPush_b__1(
        EventFortificationListViewManager___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  EventFortificationListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  EventFortificationListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}