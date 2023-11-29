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
  __int64 v15; // x3
  __int64 v16; // x4
  ListViewSort_o *v17; // x20
  struct EventFortificationListViewManager_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40FB65F & 1) == 0 )
  {
    sub_B16FFC(&EventFortificationListViewManager_TypeInfo, v1);
    sub_B16FFC(&ListViewSort_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_6175, v9);
    byte_40FB65F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventFortificationListViewManager_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_6175;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6175;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v17 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v13, v14, v15, v16);
  ListViewSort___ctor_30208480(v17, SORT_SAVE_KEY, 3, 0, 0LL);
  v18 = EventFortificationListViewManager_TypeInfo->static_fields;
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
  __int64 v5; // x1
  System_Action_bool__UserServantEntity__o *selectAfterCallback; // x0
  bool v7; // w1
  UserServantEntity_o *targetInUserServantEntity; // x2
  FortificationConfirmDialogComponent_o *fortificationConfirmDialog; // x0

  if ( (byte_40FB648 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__UserServantEntity__Invoke__, result);
    sub_B16FFC(&StringLiteral_20980, v5);
    byte_40FB648 = 1;
  }
  if ( !result )
    goto LABEL_11;
  if ( !System_String__Equals_43731072(result, (System_String_o *)StringLiteral_20980, 0LL) )
  {
    fortificationConfirmDialog = this->fields.fortificationConfirmDialog;
    if ( fortificationConfirmDialog )
    {
      FortificationConfirmDialogComponent__Close(fortificationConfirmDialog, 0LL);
      selectAfterCallback = this->fields.selectAfterCallback;
      if ( selectAfterCallback )
      {
        targetInUserServantEntity = this->fields.targetInUserServantEntity;
        v7 = 1;
        goto LABEL_10;
      }
    }
LABEL_11:
    sub_B170D4();
  }
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( !selectAfterCallback )
    goto LABEL_11;
  v7 = 0;
  targetInUserServantEntity = 0LL;
LABEL_10:
  System_Action_bool__UserServantEntity___Invoke(
    selectAfterCallback,
    v7,
    targetInUserServantEntity,
    (const MethodInfo_24C3058 *)Method_System_Action_bool__UserServantEntity__Invoke__);
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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  NetworkManager_ResultCallbackFunc_o *v22; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  struct UserServantEntity_o *targetInUserServantEntity; // x9
  struct UserServantEntity_o *targetOutUserServantEntity; // x10
  EventFortificationRequest_o *v30; // x21
  struct EventFortificationWorkItem_o *v31; // x8
  struct EventFortificationDetailEntity_o *v32; // x10
  __int128 v33; // q1
  int32_t v34; // w22
  int32_t v35; // w23
  __int128 *v36; // x0
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x9
  int32_t position; // w24
  int32_t fortificationIdx; // w23
  EnterUserSvtInfo_o *v41; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x1
  struct EventFortificationDetailEntity_o *v44; // x10
  __int128 v45; // q1
  int64_t v46; // x25
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  EnterUserSvtInfo_o *v51; // x24
  int32_t eventId; // w19
  EnterUserSvtInfo_array *v53; // x0
  const MethodInfo *v54; // x3
  __int128 v55[2]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v56[2]; // [xsp+20h] [xbp-80h] BYREF
  __int128 v57; // [xsp+40h] [xbp-60h]
  __int128 v58; // [xsp+50h] [xbp-50h]

  if ( (byte_40FB647 & 1) == 0 )
  {
    sub_B16FFC(&EnterUserSvtInfo_TypeInfo, method);
    sub_B16FFC(&Method_EventFortificationListViewManager_CallbackFortificationRequest__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v7);
    sub_B16FFC(&Method_NetworkManager_getRequest_EventFortificationRequest___, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_B16FFC(&SoundManager_TypeInfo, v12);
    byte_40FB647 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  v22 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v18,
                                                 v19,
                                                 v20,
                                                 v21);
  NetworkManager_ResultCallbackFunc___ctor(
    v22,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CallbackFortificationRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v22,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  targetInUserServantEntity = this->fields.targetInUserServantEntity;
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v30 = (EventFortificationRequest_o *)Request_WarBoardWallAttackRequest;
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
        v41 = (EnterUserSvtInfo_o *)sub_B170CC(EnterUserSvtInfo_TypeInfo, v24, v25, v26, v27);
        EnterUserSvtInfo___ctor(v41, fortificationIdx, position, 0LL, 0LL);
        if ( v17 )
        {
          v42 = v17;
          v43 = (EventMissionProgressRequest_Argument_ProgressData_o *)v41;
          goto LABEL_30;
        }
      }
    }
    goto LABEL_33;
  }
  v31 = this->fields.targetFortificationWorkItem;
  if ( !targetOutUserServantEntity )
  {
    if ( v31 )
    {
      v44 = v31->fields.eventFortificationDetailEntity;
      if ( v44 )
      {
        v45 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
        v34 = v44->fields.fortificationIdx;
        v35 = v31->fields.position;
        v57 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
        v58 = v45;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v36 = v55;
        v55[0] = v57;
        v55[1] = v58;
        goto LABEL_28;
      }
    }
LABEL_33:
    sub_B170D4();
  }
  if ( !v31 )
    goto LABEL_33;
  v32 = v31->fields.eventFortificationDetailEntity;
  if ( !v32 )
    goto LABEL_33;
  v33 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
  v34 = v32->fields.fortificationIdx;
  v35 = v31->fields.position;
  v57 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
  v58 = v33;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v36 = v56;
  v56[0] = v57;
  v56[1] = v58;
LABEL_28:
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v36,
          0LL);
  v51 = (EnterUserSvtInfo_o *)sub_B170CC(EnterUserSvtInfo_TypeInfo, v47, v48, v49, v50);
  EnterUserSvtInfo___ctor(v51, v34, v35, v46, 0LL);
  if ( !v17 )
    goto LABEL_33;
  v42 = v17;
  v43 = (EventMissionProgressRequest_Argument_ProgressData_o *)v51;
LABEL_30:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v42,
    v43,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
  eventId = this->fields.eventId;
  v53 = (EnterUserSvtInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v30 )
    goto LABEL_33;
  EventFortificationRequest__beginRequest(v30, eventId, v53, v54);
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
  EventFortificationListViewManager_c *v41; // x0
  struct ListViewSort_o *servantSortStatus; // x1
  ListViewSort_o *sort; // x0
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v45; // x0
  TitleInfoControl_o *v46; // x0
  TitleInfoControl_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct EventFortificationWorkItem_o **p_targetFortificationWorkItem; // x24
  struct EventFortificationWorkItem_o *v67; // x1
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
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct ListViewSort_o *v86; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  ListViewSort_o *v89; // x0
  UISprite_o *scaleChangeButtonSprite; // x23
  System_String_o *ScaleKindSpriteName; // x0
  __int64 v92; // x2
  __int64 v93; // x0
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  System_Int32_array *v98; // x23
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x25
  WebViewManager_o *v101; // x0
  System_Int32_array **v102; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v110; // q0
  __int128 v111; // q1
  UserServantEntity_array *OrganizationList; // x0
  __int64 v113; // x3
  __int64 v114; // x4
  struct EventFortificationWorkItem_o *v115; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v116; // x24
  int32_t v117; // w28
  UserServantEntity_o *v118; // x27
  EventFortificationListViewItem_o *v119; // x25
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v124; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v125; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v126; // x0
  const MethodInfo *v127; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v130; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v131; // x0
  void *monitor; // x8
  unsigned __int64 v133; // x28
  signed __int64 v134; // x20
  UserServantEntity_o *v135; // x25
  int32_t v136; // w26
  struct EventFortificationWorkItem_o *v137; // x27
  EventFortificationListViewItem_o *v138; // x0
  EventFortificationWorkItem_o *v139; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *v140; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v141; // x0
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v143; // x0
  const MethodInfo *v144; // x2
  const MethodInfo *v145; // x1
  int64_t v146; // [xsp+0h] [xbp-D0h]
  EventUpValSetupInfo_o *v147; // [xsp+8h] [xbp-C8h]
  EventFortificationListViewManager_o *v148; // [xsp+10h] [xbp-C0h]
  struct EventFortificationWorkItem_o **v149; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v150; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v151[2]; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_40FB63B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v13);
    sub_B16FFC(&EventFortificationListViewItem_TypeInfo, v14);
    sub_B16FFC(&EventFortificationListViewManager_TypeInfo, v15);
    sub_B16FFC(&EventUpValSetupInfo_TypeInfo, v16);
    sub_B16FFC(&Method_System_Func_UserServantEntity__bool___ctor__, v17);
    sub_B16FFC(&System_Func_UserServantEntity__bool__TypeInfo, v18);
    sub_B16FFC(&int___TypeInfo, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v20);
    sub_B16FFC(&LocalizationManager_TypeInfo, v21);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B16FFC(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__, v24);
    sub_B16FFC(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__, v25);
    sub_B16FFC(&EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo, v26);
    sub_B16FFC(&StringLiteral_11842, v27);
    byte_40FB63B = 1;
  }
  memset(&v151[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v28 = sub_B170CC(
          EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo,
          *(_QWORD *)&eventId,
          fortificationConfirmDialog,
          targetItem,
          afterCallback);
  EventFortificationListViewManager___c__DisplayClass48_0___ctor(
    (EventFortificationListViewManager___c__DisplayClass48_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_59;
  *(_QWORD *)(v28 + 16) = targetItem;
  v149 = (struct EventFortificationWorkItem_o **)(v28 + 16);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v28 + 16),
    (System_Int32_array **)targetItem,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v41 = EventFortificationListViewManager_TypeInfo;
  if ( (BYTE3(EventFortificationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v41 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v41->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)servantSortStatus,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_59;
  ListViewSort__Load(sort, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_59;
  TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 79, 0LL);
  v45 = this->fields.titleInfo;
  if ( !v45 )
    goto LABEL_59;
  TitleInfoControl__setBackBtnSprite_19608808(v45, 1, 0, 0, 0LL);
  v46 = this->fields.titleInfo;
  if ( !v46 )
    goto LABEL_59;
  TitleInfoControl__setBackBtnDepth(v46, 45, 0LL);
  v47 = this->fields.titleInfo;
  if ( !v47 )
    goto LABEL_59;
  TitleInfoControl__SetHelpBtn(v47, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v48, v49, v50, v51, v52, v53);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    0LL,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.eventId = eventId;
  this->fields.fortificationConfirmDialog = fortificationConfirmDialog;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fortificationConfirmDialog,
    (System_Int32_array **)fortificationConfirmDialog,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  p_targetFortificationWorkItem = &this->fields.targetFortificationWorkItem;
  v67 = *v149;
  this->fields.targetFortificationWorkItem = *v149;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetFortificationWorkItem,
    (System_Int32_array **)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  this->fields.selectAfterCallback = afterCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectAfterCallback,
    (System_Int32_array **)afterCallback,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  v86 = this->fields.sort;
  this->fields.modeKind = 0;
  if ( !v86 )
    goto LABEL_59;
  iconScaleKind = v86->fields.iconScaleKind;
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
LABEL_20:
  v89 = this->fields.sort;
  if ( !v89 )
    goto LABEL_59;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  ScaleKindSpriteName = ListViewSort__GetScaleKindSpriteName(v89, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_59;
  UISprite__set_spriteName(scaleChangeButtonSprite, ScaleKindSpriteName, 0LL);
  v93 = sub_B17014(int___TypeInfo, 1LL, v92);
  if ( !v93 )
    goto LABEL_59;
  v98 = (System_Int32_array *)v93;
  if ( !*(_DWORD *)(v93 + 24) )
  {
LABEL_53:
    sub_B17100(v93, v94, v95);
    sub_B170A0();
  }
  *(_DWORD *)(v93 + 32) = eventId;
  v147 = (EventUpValSetupInfo_o *)sub_B170CC(EventUpValSetupInfo_TypeInfo, v94, v95, v96, v97);
  EventUpValSetupInfo___ctor_24610352(v147, v98, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v101 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v101 )
    goto LABEL_59;
  v102 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v101,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  *(_QWORD *)(v28 + 24) = v102;
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 24), v102, v103, v104, v105, v106, v107, v108);
  if ( !*p_targetFortificationWorkItem )
    goto LABEL_59;
  userServantEntity = (*p_targetFortificationWorkItem)->fields.userServantEntity;
  if ( userServantEntity )
  {
    v111 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    v110 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v151, -1LL, 0LL);
    v111 = *(_OWORD *)&v151[0].fields.currentCryptoKey;
    v110 = *(_OWORD *)&v151[0].fields.fakeValue;
  }
  *(_OWORD *)&v151[1].fields.currentCryptoKey = v111;
  *(_OWORD *)&v151[1].fields.fakeValue = v110;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v150 = v151[1];
  v146 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v150, 0LL);
  if ( !MasterData_WarQuestSelectionMaster
    || (OrganizationList = UserServantMaster__getOrganizationList(MasterData_WarQuestSelectionMaster, 0LL),
        (v115 = *v149) == 0LL) )
  {
LABEL_59:
    sub_B170D4();
  }
  v116 = (System_Collections_Generic_IEnumerable_TSource__o *)OrganizationList;
  v148 = this;
  if ( !v115->fields.isSvtDataSetInMaster )
  {
    eventFortificationDetailEntity = v115->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      goto LABEL_59;
    if ( eventFortificationDetailEntity->fields.classId )
    {
      v130 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                  System_Func_UserServantEntity__bool__TypeInfo,
                                                                                  v94,
                                                                                  v95,
                                                                                  v113,
                                                                                  v114);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v130,
        (Il2CppObject *)v28,
        Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_UserServantEntity__bool___ctor__);
      v131 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               v116,
               (System_Func_TSource__bool__o *)v130,
               (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      v116 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                    v131,
                                                                    (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
    }
LABEL_47:
    if ( !v116 )
      goto LABEL_59;
    goto LABEL_48;
  }
  v117 = this->fields.eventId;
  v118 = v115->fields.userServantEntity;
  v119 = (EventFortificationListViewItem_o *)sub_B170CC(EventFortificationListViewItem_TypeInfo, v94, v95, v113, v114);
  EventFortificationListViewItem___ctor(v119, v118, v117, v146, v147, v115, 0LL);
  v124 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                              System_Func_UserServantEntity__bool__TypeInfo,
                                                                              v120,
                                                                              v121,
                                                                              v122,
                                                                              v123);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v124,
    (Il2CppObject *)v28,
    Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_UserServantEntity__bool___ctor__);
  v125 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
           v116,
           (System_Func_TSource__bool__o *)v124,
           (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  v126 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
           v125,
           (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
  if ( !*(_QWORD *)(v28 + 16) )
    goto LABEL_59;
  v116 = (System_Collections_Generic_IEnumerable_TSource__o *)v126;
  this = v148;
  if ( !EventFortificationWorkItem__get_IsNpc(*(EventFortificationWorkItem_o **)(v28 + 16), v127) )
    goto LABEL_47;
  itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v148->fields.itemList;
  if ( !itemList )
    goto LABEL_59;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    itemList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v119,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
  if ( !v116 )
    goto LABEL_59;
LABEL_48:
  monitor = v116[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v133 = 0LL;
    v134 = (int)monitor;
    while ( 1 )
    {
      v135 = (UserServantEntity_o *)*((_QWORD *)&v116[2].klass + v133);
      v136 = this->fields.eventId;
      v137 = *v149;
      v138 = (EventFortificationListViewItem_o *)sub_B170CC(
                                                   EventFortificationListViewItem_TypeInfo,
                                                   v94,
                                                   v95,
                                                   v113,
                                                   v114);
      v139 = v137;
      this = v148;
      v140 = (EventMissionProgressRequest_Argument_ProgressData_o *)v138;
      EventFortificationListViewItem___ctor(v138, v135, v136, v146, v147, v139, 0LL);
      v141 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v148->fields.itemList;
      if ( !v141 )
        goto LABEL_59;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v141,
        v140,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v133 >= v134 )
        break;
      if ( v133 >= LODWORD(v116[1].monitor) )
        goto LABEL_53;
    }
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v143 = LocalizationManager__Get((System_String_o *)StringLiteral_11842, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_59;
  UILabel__set_text(emptyMessageLabel, v143, 0LL);
  EventFortificationListViewManager__SetStatusKind(this, this->fields.modeKind, v144);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventFortificationListViewManager__SetFilterButtonImage(this, v145);
}


void __fastcall EventFortificationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventFortificationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_40FB637 & 1) == 0 )
  {
    sub_B16FFC(&EventFortificationListViewManager_TypeInfo, v1);
    byte_40FB637 = 1;
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
    sub_B170D4();
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
    sub_B170D4();
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
  EventFortificationListViewManager__SetMode_27743588(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_27743588(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_27743588(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_27743588(this, 2, v5);
}


void __fastcall EventFortificationListViewManager__EndPushRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__ModifyList(this, 0, method);
  EventFortificationListViewManager__SetMode_27743588(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__EndSelectFilterKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_40FB64D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FB64D = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EventFortificationListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantFilterSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__EndSelectSortKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FB651 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FB651 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40FB64A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FB64A = 1;
  }
  EventFortificationListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventFortificationListViewManager__ModifyList(this, 0, v4);
  EventFortificationListViewManager__SetMode_27743588(this, 2, v5);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
    sub_B16F98(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    EventFortificationListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventFortificationListViewManager__GetAmountSortValue(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_40FB64B & 1) == 0 )
  {
    sub_B16FFC(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_40FB64B = 1;
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

  if ( (byte_40FB642 & 1) == 0 )
  {
    sub_B16FFC(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_40FB642 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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

  if ( (byte_40FB655 & 1) == 0 )
  {
    sub_B16FFC(&EventFortificationListViewItem_TypeInfo, choiceList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_40FB655 = 1;
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
      v31 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (EventFortificationListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != EventFortificationListViewItem_TypeInfo )
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


bool __fastcall EventFortificationListViewManager__GetSwapLockList(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_40FB654 & 1) == 0 )
  {
    sub_B16FFC(&EventFortificationListViewItem_TypeInfo, lockList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_40FB654 = 1;
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
      v31 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (EventFortificationListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != EventFortificationListViewItem_TypeInfo )
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

  if ( (byte_40FB638 & 1) == 0 )
  {
    sub_B16FFC(&EventFortificationListViewManager_TypeInfo, v1);
    byte_40FB638 = 1;
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
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v18; // x11
  EventFortificationListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v21; // q0
  int64_t v22; // x0
  __int128 v23; // q0
  UnityEngine_Object_o *viewObject; // x21
  struct ListViewObject_o *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+60h] [xbp-60h] BYREF

  if ( (byte_40FB63F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B16FFC(&EventFortificationListViewItem_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FB63F = 1;
  }
  memset(&v29, 0, sizeof(v29));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v28,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v29.fields.current = (Il2CppObject *)v28.fields.fakeValue;
      *(_OWORD *)&v29.fields.list = *(_OWORD *)&v28.fields.currentCryptoKey;
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v29,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v29,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v29.fields.current
          && (v18 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v29.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v18) )
        {
          if ( (EventFortificationListViewItem_c *)v29.fields.current->klass->_2.typeHierarchy[v18 - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v29.fields.current;
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
            *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v28.fields.fakeValue = v21;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v27 = v28;
            v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v27, 0LL);
            v23 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
            *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v26.fields.fakeValue = v23;
            if ( v22 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v26, 0LL) )
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
          v25 = current->fields.viewObject;
          if ( !v25 )
            sub_B170D4();
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v25->klass->vtable._5_SetItem.method)(
            v25,
            current,
            v25->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_39:
    sub_B170D4();
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

  if ( (byte_40FB641 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_B16FFC(&EventFortificationListViewItem_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FB641 = 1;
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
          v28 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
            || (EventFortificationListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != EventFortificationListViewItem_TypeInfo )
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
        EventFortificationListViewManager__ModifyLockItem(this, v33, 1, isIconSizeChangea, v34);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v21; // w28
  __int64 v22; // x11
  EventFortificationListViewItem_o *current; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v25; // q0
  int64_t v26; // x0
  __int128 v27; // q0
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v29; // x0
  ListViewObject_o *v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_40FB640 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11);
    sub_B16FFC(&EventFortificationListViewItem_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FB640 = 1;
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v34,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v35.fields.current = (Il2CppObject *)v34.fields.fakeValue;
      *(_OWORD *)&v35.fields.list = *(_OWORD *)&v34.fields.currentCryptoKey;
      v21 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v35,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v35,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v35.fields.current
          && (v22 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v35.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v22) )
        {
          if ( (EventFortificationListViewItem_c *)v35.fields.current->klass->_2.typeHierarchy[v22 - 1] == EventFortificationListViewItem_TypeInfo )
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
          sub_B170D4();
        userServantEntity = current->fields.userServantEntity;
        if ( !userServantEntity )
          sub_B170D4();
        v25 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v34.fields.fakeValue = v25;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v33 = v34;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v33, 0LL);
        v27 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
        *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v32.fields.fakeValue = v27;
        if ( v26 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v32, 0LL) )
          EventFortificationListViewItem__SetUserServantEntity(current, Entity, 0LL);
LABEL_26:
        if ( v21 )
        {
          if ( !current )
            sub_B170D4();
          EventFortificationListViewItem__ModifyLockItem(current, 0LL);
          EventFortificationListViewItem__ModifyChoiceItem(current, 0LL);
          EventFortificationListViewItem__ModifyPushItem(current, 0LL);
        }
        else if ( !current )
        {
          sub_B170D4();
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
            sub_B170D4();
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v29->klass->vtable._5_SetItem.method)(
            v29,
            current,
            v29->klass->vtable._6_SetItem.methodPtr);
          if ( isIconSizeChange )
          {
            v30 = current->fields.viewObject;
            if ( !v30 )
              sub_B170D4();
            ListViewObject__SetItemSeed(v30, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_46:
    sub_B170D4();
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

  if ( (byte_40FB65B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__UserServantEntity__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FB65B = 1;
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


void __fastcall EventFortificationListViewManager__OnClickBonusFilterKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  if ( (byte_40FB64E & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB64E = 1;
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


void __fastcall EventFortificationListViewManager__OnClickChoiceTab(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  EventFortificationListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_40FB658 & 1) == 0 )
  {
    sub_B16FFC(&Method_EventFortificationListViewManager_EndClickTabChoice__, method);
    sub_B16FFC(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FB658 = 1;
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
      v9 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                        EventFortificationListViewManager_RequestCallbackFunc_TypeInfo,
                                                                        v5,
                                                                        v6,
                                                                        v7,
                                                                        v8);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabChoice__,
        0LL);
      EventFortificationListViewManager__StatusRequest(this, v9, v10);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 2, v6);
      EventFortificationListViewManager__RefreshListDisp(this, v11);
      EventFortificationListViewManager__ModifyList(this, 0, v12);
      EventFortificationListViewManager__SetMode_27743588(this, 2, v13);
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
  __int64 v7; // x3
  __int64 v8; // x4
  EventFortificationListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_40FB657 & 1) == 0 )
  {
    sub_B16FFC(&Method_EventFortificationListViewManager_EndClickTabLock__, method);
    sub_B16FFC(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FB657 = 1;
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
      v9 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                        EventFortificationListViewManager_RequestCallbackFunc_TypeInfo,
                                                                        v5,
                                                                        v6,
                                                                        v7,
                                                                        v8);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabLock__,
        0LL);
      EventFortificationListViewManager__StatusRequest(this, v9, v10);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 1, v6);
      EventFortificationListViewManager__RefreshListDisp(this, v11);
      EventFortificationListViewManager__ModifyList(this, 0, v12);
      EventFortificationListViewManager__SetMode_27743588(this, 2, v13);
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
  __int64 v11; // x3
  __int64 v12; // x4
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22

  if ( (byte_40FB64C & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_EventFortificationListViewManager_EndSelectFilterKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FB64C = 1;
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
      Method_EventFortificationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B170D4();
    CommonUI__OpenServantFilterSelectMenu(v8, 1, sort, v13, 0, 0LL);
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
  __int64 v7; // x3
  __int64 v8; // x4
  EventFortificationListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FB656 & 1) == 0 )
  {
    sub_B16FFC(&Method_EventFortificationListViewManager_EndClickTabStatus__, method);
    sub_B16FFC(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FB656 = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v9 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                      EventFortificationListViewManager_RequestCallbackFunc_TypeInfo,
                                                                      v5,
                                                                      v6,
                                                                      v7,
                                                                      v8);
    EventFortificationListViewManager_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndClickTabStatus__,
      0LL);
    EventFortificationListViewManager__StatusRequest(this, v9, v10);
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
  __int64 v7; // x3
  __int64 v8; // x4
  EventFortificationListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_40FB659 & 1) == 0 )
  {
    sub_B16FFC(&Method_EventFortificationListViewManager_EndClickTabPush__, method);
    sub_B16FFC(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FB659 = 1;
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
      v9 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_B170CC(
                                                                        EventFortificationListViewManager_RequestCallbackFunc_TypeInfo,
                                                                        v5,
                                                                        v6,
                                                                        v7,
                                                                        v8);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabPush__,
        0LL);
      EventFortificationListViewManager__StatusRequest(this, v9, v10);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 3, v6);
      EventFortificationListViewManager__RefreshListDisp(this, v11);
      EventFortificationListViewManager__ModifyList(this, 0, v12);
      EventFortificationListViewManager__SetMode_27743588(this, 2, v13);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickScaleChange(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_40FB65C & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB65C = 1;
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
  EventFortificationListViewManager__ModifyList(this, 1, v16);
  EventFortificationListViewManager__SetMode_27743588(this, 2, v17);
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
  UnityEngine_Component_o *fortificationConfirmDialog; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v22; // x1
  __int64 v23; // x10
  __int64 v24; // x10
  EventFortificationListViewObject_o *v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o **p_targetInUserServantEntity; // x23
  EventFortificationListViewItem_o *Item; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct UserServantEntity_o **p_targetOutUserServantEntity; // x24
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x22
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Collections_Generic_List_int__o *v52; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v61; // q1
  int64_t v62; // x0
  struct UserServantEntity_o *v63; // x8
  __int128 v64; // q0
  int64_t v65; // x25
  int64_t v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct EventFortificationWorkItem_o *v73; // x8
  System_Int32_array **v74; // x1
  const MethodInfo *v75; // x1
  EventFortificationWorkItem_o *v76; // x0
  int32_t v77; // w0
  FortificationConfirmDialogComponent_o *v78; // x23
  UserServantEntity_array *v79; // x22
  System_Int32_array *v80; // x21
  System_String_o *v81; // x24
  System_String_o *v82; // x25
  int32_t v83; // w20
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  System_Action_o *v88; // x26
  int32_t v89; // w1
  System_Int32_array **v90; // x1
  int32_t AddPoint; // w0
  FortificationConfirmDialogComponent_o *v92; // x23
  UserServantEntity_array *v93; // x22
  System_Int32_array *v94; // x21
  System_String_o *TargetTeamName; // x24
  System_String_o *TargetDetailName; // x25
  int32_t TargetWorkType; // w20
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  System_Action_o *v102; // x26
  struct UserServantEntity_o *v103; // x8
  __int128 v104; // q0
  int64_t v105; // x0
  struct UserServantEntity_o *v106; // x8
  __int128 v107; // q0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  struct UserServantEntity_o *v114; // x1
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  struct EventFortificationWorkItem_o *v121; // x8
  System_Int32_array **v122; // x1
  const MethodInfo *v123; // x1
  EventFortificationWorkItem_o *v124; // x0
  int32_t v125; // w0
  int32_t v126; // w0
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v131; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+90h] [xbp-70h]

  if ( (byte_40FB646 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, obj);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B16FFC(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__, v7);
    sub_B16FFC(&EventFortificationListViewObject_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&SoundManager_TypeInfo, v19);
    byte_40FB646 = 1;
  }
  fortificationConfirmDialog = (UnityEngine_Component_o *)this->fields.fortificationConfirmDialog;
  if ( !fortificationConfirmDialog )
    goto LABEL_52;
  gameObject = UnityEngine_Component__get_gameObject(fortificationConfirmDialog, 0LL);
  if ( !gameObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_52;
  v23 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v23
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v23 - 1] != EventFortificationListViewObject_TypeInfo )
  {
    goto LABEL_52;
  }
  v24 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v24 )
    v25 = (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v24 - 1] == EventFortificationListViewObject_TypeInfo
        ? (EventFortificationListViewObject_o *)obj
        : 0LL;
  else
    v25 = 0LL;
  p_targetInUserServantEntity = (EventMissionProgressRequest_Argument_ProgressData_o **)&this->fields.targetInUserServantEntity;
  Item = EventFortificationListViewObject__GetItem(v25, v22);
  this->fields.targetInUserServantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity, 0LL, v28, v29, v30, v31, v32, v33);
  p_targetOutUserServantEntity = &this->fields.targetOutUserServantEntity;
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
    goto LABEL_52;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v42 )
    goto LABEL_52;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)v42,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v43,
                                                                                                  v44,
                                                                                                  v45,
                                                                                                  v46);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v52 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v48,
                                                    v49,
                                                    v50,
                                                    v51);
  System_Collections_Generic_List_int____ctor(
    v52,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    goto LABEL_52;
  userServantEntity = targetFortificationWorkItem->fields.userServantEntity;
  if ( !userServantEntity )
  {
    if ( Item )
    {
      v90 = (System_Int32_array **)Item->fields.userServantEntity;
      *p_targetInUserServantEntity = (EventMissionProgressRequest_Argument_ProgressData_o *)v90;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
        v90,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
      if ( v47 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v47,
          *p_targetInUserServantEntity,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        AddPoint = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
        if ( v52 )
        {
          System_Collections_Generic_List_int___Add(
            v52,
            AddPoint,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          v92 = this->fields.fortificationConfirmDialog;
          v93 = (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v47,
                                             (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
          v94 = System_Collections_Generic_List_int___ToArray(
                  v52,
                  (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
          TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
          TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
          TargetWorkType = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
          v102 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v98, v99, v100, v101);
          System_Action___ctor(
            v102,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
            0LL);
          if ( v92 )
          {
            FortificationConfirmDialogComponent__Open(
              v92,
              0,
              v93,
              v94,
              TargetTeamName,
              TargetDetailName,
              TargetWorkType,
              v102,
              0LL);
            return;
          }
        }
      }
    }
    goto LABEL_52;
  }
  v61 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v135.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v135.fields.fakeValue = v61;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v134 = v135;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v134, 0LL);
  if ( !Item )
    goto LABEL_52;
  v63 = Item->fields.userServantEntity;
  if ( !v63 )
    goto LABEL_52;
  v64 = *(_OWORD *)&v63->fields.id.fields.fakeValue;
  v65 = v62;
  *(_OWORD *)&v133.fields.currentCryptoKey = *(_OWORD *)&v63->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v133.fields.fakeValue = v64;
  v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v133, 0LL);
  v73 = this->fields.targetFortificationWorkItem;
  if ( v65 != v66 )
  {
    if ( v73 )
    {
      v103 = v73->fields.userServantEntity;
      if ( !v103 )
        return;
      v104 = *(_OWORD *)&v103->fields.id.fields.fakeValue;
      *(_OWORD *)&v135.fields.currentCryptoKey = *(_OWORD *)&v103->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v135.fields.fakeValue = v104;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v132 = v135;
      v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v132, 0LL);
      v106 = Item->fields.userServantEntity;
      if ( v106 )
      {
        v107 = *(_OWORD *)&v106->fields.id.fields.fakeValue;
        *(_OWORD *)&v131.fields.currentCryptoKey = *(_OWORD *)&v106->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v131.fields.fakeValue = v107;
        if ( v105 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v131, 0LL) )
          return;
        v114 = Item->fields.userServantEntity;
        this->fields.targetInUserServantEntity = v114;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.targetInUserServantEntity,
          (System_Int32_array **)v114,
          v108,
          v109,
          v110,
          v111,
          v112,
          v113);
        v121 = this->fields.targetFortificationWorkItem;
        if ( v121 )
        {
          v122 = (System_Int32_array **)v121->fields.userServantEntity;
          *p_targetOutUserServantEntity = (struct UserServantEntity_o *)v122;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
            v122,
            v115,
            v116,
            v117,
            v118,
            v119,
            v120);
          if ( v47 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v47,
              (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetOutUserServantEntity,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            v124 = this->fields.targetFortificationWorkItem;
            if ( v124 )
            {
              v125 = EventFortificationWorkItem__get_AddPoint(v124, v123);
              if ( v52 )
              {
                System_Collections_Generic_List_int___Add(
                  v52,
                  v125,
                  (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v47,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetInUserServantEntity,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
                v126 = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
                System_Collections_Generic_List_int___Add(
                  v52,
                  v126,
                  (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
                v78 = this->fields.fortificationConfirmDialog;
                v79 = (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v47,
                                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                v80 = System_Collections_Generic_List_int___ToArray(
                        v52,
                        (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
                v81 = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
                v82 = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
                v83 = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
                v88 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v127, v128, v129, v130);
                System_Action___ctor(
                  v88,
                  (Il2CppObject *)this,
                  Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                  0LL);
                if ( v78 )
                {
                  v89 = 2;
                  goto LABEL_50;
                }
              }
            }
          }
        }
      }
    }
LABEL_52:
    sub_B170D4();
  }
  if ( !v73 )
    goto LABEL_52;
  v74 = (System_Int32_array **)v73->fields.userServantEntity;
  *p_targetOutUserServantEntity = (struct UserServantEntity_o *)v74;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetOutUserServantEntity,
    v74,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  if ( !v47 )
    goto LABEL_52;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v47,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetOutUserServantEntity,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
  v76 = this->fields.targetFortificationWorkItem;
  if ( !v76 )
    goto LABEL_52;
  v77 = EventFortificationWorkItem__get_AddPoint(v76, v75);
  if ( !v52 )
    goto LABEL_52;
  System_Collections_Generic_List_int___Add(
    v52,
    v77,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  v78 = this->fields.fortificationConfirmDialog;
  v79 = (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v47,
                                     (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
  v80 = System_Collections_Generic_List_int___ToArray(
          v52,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  v81 = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
  v82 = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
  v83 = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
  v88 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v84, v85, v86, v87);
  System_Action___ctor(
    v88,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
    0LL);
  if ( !v78 )
    goto LABEL_52;
  v89 = 1;
LABEL_50:
  FortificationConfirmDialogComponent__Open(v78, v89, v79, v80, v81, v82, v83, v88, 0LL);
}


void __fastcall EventFortificationListViewManager__OnClickSelectPush(
        EventFortificationListViewManager_o *this,
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
  EventFortificationListViewItem_o **v36; // x20
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
  EventFortificationListViewItem_o *v100; // x8
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

  if ( (byte_40FB65D & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, obj);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B16FFC(&EventFortificationListViewObject_TypeInfo, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&object___TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B16FFC(&Rarity_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_B16FFC(&SoundManager_TypeInfo, v20);
    sub_B16FFC(&Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__0__, v21);
    sub_B16FFC(&EventFortificationListViewManager___c__DisplayClass95_0_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_11946, v23);
    sub_B16FFC(&StringLiteral_11944, v24);
    sub_B16FFC(&StringLiteral_11945, v25);
    sub_B16FFC(&StringLiteral_11947, v26);
    byte_40FB65D = 1;
  }
  v27 = sub_B170CC(EventFortificationListViewManager___c__DisplayClass95_0_TypeInfo, obj, method, v3, v4);
  EventFortificationListViewManager___c__DisplayClass95_0___ctor(
    (EventFortificationListViewManager___c__DisplayClass95_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_69;
  *(_QWORD *)(v27 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  if ( !obj )
    goto LABEL_69;
  v34 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v34
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v34 - 1] != EventFortificationListViewObject_TypeInfo )
  {
    RarityType = (System_String_o *)sub_B173C8(obj);
    goto LABEL_71;
  }
  Item = (System_Int32_array **)EventFortificationListViewObject__GetItem(
                                  (EventFortificationListViewObject_o *)obj,
                                  (const MethodInfo *)EventFortificationListViewObject_TypeInfo);
  *(_QWORD *)(v27 + 24) = Item;
  v36 = (EventFortificationListViewItem_o **)(v27 + 24);
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
        Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__0__,
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
  EventFortificationListViewManager__PushRequest(this, *v36, v47);
}


void __fastcall EventFortificationListViewManager__OnClickSortAscendingOrder(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  if ( (byte_40FB652 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB652 = 1;
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
  __int64 v11; // x3
  __int64 v12; // x4
  ServantSortSelectMenu_CallbackFunc_o *v13; // x22

  if ( (byte_40FB650 & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_EventFortificationListViewManager_EndSelectSortKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FB650 = 1;
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
      Method_EventFortificationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_B170D4();
    CommonUI__OpenServantSortSelectMenu(v8, 3, sort, 0, v13, 0LL);
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
  WebViewManager_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  UserServantEntity_o *userServantEntity; // x21
  CommonUI_o *v19; // x20
  ServantStatusDialog_EndDelegate_o *v20; // x22

  if ( (byte_40FB649 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_B16FFC(&Method_EventFortificationListViewManager_EndShowServant__, v5);
    sub_B16FFC(&EventFortificationListViewObject_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    byte_40FB649 = 1;
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
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          !Item)
      || (userServantEntity = Item->fields.userServantEntity,
          v19 = (CommonUI_o *)Instance,
          v20 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16,
                                                       v17),
          ServantStatusDialog_EndDelegate___ctor(
            v20,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_EndShowServant__,
            0LL),
          !v19) )
    {
LABEL_14:
      sub_B170D4();
    }
    CommonUI__OpenServantStatusDialog_18248328(v19, 0, userServantEntity, v20, 0LL);
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
  struct UIScrollView_o *v8; // x0
  UIScrollView_o *v9; // x0
  System_Action_o *CallbackFunc2; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40FB645 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB645 = 1;
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
          || (UnityEngine_Behaviour__set_enabled(v7, 1, 0LL), (v8 = this->fields.scrollView) == 0LL)
          || (((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
                v8,
                1LL,
                v8->klass->vtable._9_SetDragAmount.methodPtr),
              (v9 = this->fields.scrollView) == 0LL) )
        {
          sub_B170D4();
        }
        UIScrollView__UpdatePosition(v9, 0LL);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.CallbackFunc2, 0LL, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_40FB65E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B16FFC(&Method_EventFortificationListViewManager_EndPushRequest__, v5);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_40FB65E = 1;
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
    Method_EventFortificationListViewManager_EndPushRequest__,
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
  EventFortificationListViewObject_o *v10; // x0

  if ( (byte_40FB63C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v3);
    byte_40FB63C = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v10 = v6->fields._items->m_Items[v8];
        if ( !v10 )
          break;
        ((void (__fastcall *)(EventFortificationListViewObject_o *, bool, Il2CppMethodPointer))v10->klass->vtable._9_SetInput.method)(
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
  __int64 v14; // x3
  __int64 v15; // x4
  int32_t size; // w8
  System_Collections_Generic_List_EventFortificationListViewObject__o *v17; // x21
  int v18; // w24
  __int64 v19; // x25
  unsigned int v20; // w8
  EventFortificationListViewObject_o *v21; // x22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FB644 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_EventFortificationListViewManager_OnMoveEnd__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v9);
    sub_B16FFC(&StringLiteral_10004, v10);
    byte_40FB644 = 1;
  }
  ObjectList = EventFortificationListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
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
        System_Action___ctor(v22, (Il2CppObject *)this, Method_EventFortificationListViewManager_OnMoveEnd__, 0LL);
        if ( !v21 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventFortificationListViewObject__Init(
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


void __fastcall EventFortificationListViewManager__SetFilterButtonImage(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  bool v6; // w0
  System_String_o **v7; // x8

  if ( (byte_40FB64F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16927, method);
    sub_B16FFC(&StringLiteral_16926, v3);
    byte_40FB64F = 1;
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


void __fastcall EventFortificationListViewManager__SetHeaderMsg(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UILabel_o *recoveryFatigueInfoMsgLabel; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x22
  System_String_o *v11; // x21
  struct EventFortificationWorkItem_o *v12; // x8
  struct EventFortificationEntity_o *eventFortificationEntity; // x9
  Il2CppObject **v14; // x9
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_String_o *v16; // x0
  System_String_o *v17; // x1
  UILabel_o *v18; // x0
  struct UILabel_o *v19; // x19
  __int64 *v20; // x8
  System_String_o *v21; // x0

  if ( (byte_40FB63E & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_11701, v3);
    sub_B16FFC(&StringLiteral_11699, v4);
    sub_B16FFC(&StringLiteral_11700, v5);
    sub_B16FFC(&StringLiteral_6412, v6);
    byte_40FB63E = 1;
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
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6412, 0LL);
      targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
      if ( !targetFortificationWorkItem )
        goto LABEL_32;
      v11 = v8;
      v12 = this->fields.targetFortificationWorkItem;
      if ( (byte_40FB68D & 1) == 0 )
      {
        sub_B16FFC(&StringLiteral_1, v9);
        byte_40FB68D = 1;
        v12 = this->fields.targetFortificationWorkItem;
      }
      eventFortificationEntity = targetFortificationWorkItem->fields.eventFortificationEntity;
      v14 = eventFortificationEntity
          ? (Il2CppObject **)&eventFortificationEntity->fields.name
          : (Il2CppObject **)&StringLiteral_1;
      if ( !v12 )
        goto LABEL_32;
      eventFortificationDetailEntity = v12->fields.eventFortificationDetailEntity;
      if ( !eventFortificationDetailEntity )
        goto LABEL_32;
      v16 = System_String__Format_43739268(v11, *v14, (Il2CppObject *)eventFortificationDetailEntity->fields.name, 0LL);
      if ( !recoveryFatigueInfoMsgLabel )
        goto LABEL_32;
      v17 = v16;
      v18 = recoveryFatigueInfoMsgLabel;
      goto LABEL_31;
    case 1:
      v19 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v20 = &StringLiteral_11700;
      goto LABEL_29;
    case 2:
      v19 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v20 = &StringLiteral_11699;
      goto LABEL_29;
    case 3:
      v19 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v20 = &StringLiteral_11701;
LABEL_29:
      v21 = LocalizationManager__Get((System_String_o *)*v20, 0LL);
      if ( !v19 )
LABEL_32:
        sub_B170D4();
      v17 = v21;
      v18 = v19;
LABEL_31:
      UILabel__set_text(v18, v17, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.Callback,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventFortificationListViewManager__SetMode_27743588(this, mode, v10);
}


void __fastcall EventFortificationListViewManager__SetMode_27743588(
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


void __fastcall EventFortificationListViewManager__SetMode_27743704(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventFortificationListViewManager__SetMode_27743588(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__SetObjectItem(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_40FB643 & 1) == 0 )
  {
    sub_B16FFC(&EventFortificationListViewObject_TypeInfo, obj);
    byte_40FB643 = 1;
  }
  if ( !obj
    || (v6 = *(&EventFortificationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventFortificationListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
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

  if ( (byte_40FB653 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955, v3);
    sub_B16FFC(&StringLiteral_17038, v4);
    sub_B16FFC(&StringLiteral_16995, v5);
    sub_B16FFC(&StringLiteral_16985, v6);
    sub_B16FFC(&StringLiteral_17002, v7);
    sub_B16FFC(&StringLiteral_16952, v8);
    byte_40FB653 = 1;
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
    SortKindButtonText = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_37;
    UILabel__set_text(v11, SortKindButtonText, 0LL);
    v13 = this->fields.sort;
    if ( !v13 )
      goto LABEL_37;
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
    if ( v15 )
    {
      sortKind = v15->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sortExplanationSprite = this->fields.sortExplanationSprite;
        if ( sortExplanationSprite )
        {
          v18 = (System_String_o **)(v15->fields.isAscendingOrder ? &StringLiteral_17002 : &StringLiteral_16995);
          UISprite__set_spriteName(sortExplanationSprite, *v18, 0LL);
          v19 = this->fields.sort;
          if ( v19 )
          {
            v20 = this->fields.sortOrderSprite;
            if ( v20 )
            {
              isAscendingOrder = v19->fields.isAscendingOrder;
              v22 = (System_String_o **)&StringLiteral_16952;
              v23 = (System_String_o **)&StringLiteral_16955;
LABEL_33:
              if ( isAscendingOrder )
                v27 = v22;
              else
                v27 = v23;
              UISprite__set_spriteName(v20, *v27, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        v24 = this->fields.sortExplanationSprite;
        if ( v24 )
        {
          v25 = (System_String_o **)(v15->fields.isAscendingOrder ? &StringLiteral_17038 : &StringLiteral_16985);
          UISprite__set_spriteName(v24, *v25, 0LL);
          v26 = this->fields.sort;
          if ( v26 )
          {
            v20 = this->fields.sortOrderSprite;
            if ( v20 )
            {
              isAscendingOrder = v26->fields.isAscendingOrder;
              v22 = (System_String_o **)&StringLiteral_16955;
              v23 = (System_String_o **)&StringLiteral_16952;
              goto LABEL_33;
            }
          }
        }
      }
    }
LABEL_37:
    sub_B170D4();
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

  if ( (byte_40FB63D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17071, *(_QWORD *)&modeKind);
    sub_B16FFC(&StringLiteral_17072, v5);
    sub_B16FFC(&StringLiteral_17057, v6);
    sub_B16FFC(&StringLiteral_17060, v7);
    sub_B16FFC(&StringLiteral_17073, v8);
    sub_B16FFC(&StringLiteral_17074, v9);
    sub_B16FFC(&StringLiteral_17059, v10);
    sub_B16FFC(&StringLiteral_17058, v11);
    byte_40FB63D = 1;
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
  EventFortificationListViewManager__SetHeaderMsg(this, v32);
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

  if ( (byte_40FB65A & 1) == 0 )
  {
    sub_B16FFC(&Method_EventFortificationListViewManager_EndStatusSync__, callback);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_40FB65A = 1;
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
        Method_EventFortificationListViewManager_EndStatusSync__,
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
  else if ( modeKind == 1 && EventFortificationListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
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
      Method_EventFortificationListViewManager_EndStatusSync__,
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

  if ( (byte_40FB633 & 1) == 0 )
  {
    sub_B16FFC(&EventFortificationListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FB633 = 1;
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
    v8 = sub_B0BA14(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventFortificationListViewManager_o *)sub_B173C8(v7);
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

  if ( (byte_40FB635 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FB635 = 1;
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
  v10 = (EventFortificationListViewManager_o *)sub_B173C8(v7);
  EventFortificationListViewManager__remove_CallbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_EventFortificationListViewObject__o *__fastcall EventFortificationListViewManager__get_ClippingObjectList(
        EventFortificationListViewManager_o *this,
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
  EventFortificationListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0

  if ( (byte_40FB63A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v10);
    byte_40FB63A = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
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
      Component_srcLineSprite = (EventFortificationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        v15,
                                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
      if ( !Component_srcLineSprite )
        break;
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Item = (ListViewItem_o *)EventFortificationListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        break;
      if ( !Item->fields.isTermination || ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
      {
        if ( !v11 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v18,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
      }
      if ( (int)++v14 >= size )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v11;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v11;
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

  if ( (byte_40FB639 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FB639 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
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
                                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
        if ( !v12 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          Component_srcLineSprite,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
      }
      if ( (__int64)++v15 >= size )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v12;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v12;
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

  if ( (byte_40FB634 & 1) == 0 )
  {
    sub_B16FFC(&EventFortificationListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FB634 = 1;
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
    v8 = sub_B0BA14(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventFortificationListViewManager_o *)sub_B173C8(v7);
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

  if ( (byte_40FB636 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FB636 = 1;
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
  v10 = (const MethodInfo *)sub_B173C8(v7);
  EventFortificationListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager_CallbackFunc___ctor(
        EventFortificationListViewManager_CallbackFunc_o *this,
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
  if ( (byte_40F6FA6 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&EventFortificationListViewManager_ResultKind_TypeInfo, v9);
    byte_40F6FA6 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EventFortificationListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall EventFortificationListViewManager_CallbackFunc__EndInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
void __fastcall EventFortificationListViewManager_RequestCallbackFunc___ctor(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
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
  if ( (byte_40F6FA7 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isRequest);
    byte_40F6FA7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall EventFortificationListViewManager_RequestCallbackFunc__EndInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  EventFortificationListViewManager_RequestCallbackFunc_o *v18; // x8
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
  EventFortificationListViewManager_RequestCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (EventFortificationListViewManager_RequestCallbackFunc_o **)(v3 + 32);
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
  int32_t SvtClassId; // w0
  int32_t SupportGroupType; // w0
  EventFortificationWorkItem_o *targetItem; // x8

  if ( !data
    || (servantClassMaster = this->fields.servantClassMaster,
        SvtClassId = UserServantEntity__getSvtClassId(data, 0LL),
        !servantClassMaster)
    || (SupportGroupType = ServantClassMaster__getSupportGroupType(servantClassMaster, SvtClassId, 0LL),
        (targetItem = this->fields.targetItem) == 0LL) )
  {
    sub_B170D4();
  }
  return SupportGroupType == EventFortificationWorkItem__get_ClassId(targetItem, 0LL);
}


bool __fastcall EventFortificationListViewManager___c__DisplayClass48_0___CreateList_b__1(
        EventFortificationListViewManager___c__DisplayClass48_0_o *this,
        UserServantEntity_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w0
  struct EventFortificationWorkItem_o *targetItem; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userServantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_40F6FA4 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, data);
    byte_40F6FA4 = 1;
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
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  *(_QWORD *)&v11.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v11, 0LL);
  targetItem = this->fields.targetItem;
  if ( !targetItem
    || (userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)targetItem->fields.userServantEntity) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  return v7 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userServantEntity[5], 0LL);
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

  if ( (byte_40F6FA5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__1__, v6);
    byte_40F6FA5 = 1;
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
        Method_EventFortificationListViewManager___c__DisplayClass95_0__OnClickSelectPush_b__1__,
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


void __fastcall EventFortificationListViewManager___c__DisplayClass95_0___OnClickSelectPush_b__1(
        EventFortificationListViewManager___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  EventFortificationListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  EventFortificationListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}