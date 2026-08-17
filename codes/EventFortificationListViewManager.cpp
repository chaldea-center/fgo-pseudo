void EventFortificationListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v9; // x20
  struct EventFortificationListViewManager_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596A659 & 1) == 0 )
  {
    sub_2213A60(&EventFortificationListViewManager_TypeInfo);
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&StringLiteral_6515/*"EventServantFatigueList"*/);
    byte_596A659 = 1;
  }
  v7 = StringLiteral_6515/*"EventServantFatigueList"*/;
  EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6515/*"EventServantFatigueList"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventFortificationListViewManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  SORT_SAVE_KEY = EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v9 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v9, SORT_SAVE_KEY, 3, 0, 0);
  static_fields = EventFortificationListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->servantSortStatus,
    (int32_t)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void EventFortificationListViewManager___ctor(EventFortificationListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EventFortificationListViewManager__CallbackFortificationRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventFortificationListViewManager_o *v4; // x19
  struct System_Action_bool__UserServantEntity__o *v5; // x8
  intptr_t method_code; // x0
  intptr_t v7; // x3
  __int64 v8; // x1
  void (__fastcall *invoke_impl)(intptr_t, __int64, struct UserServantEntity_o *, intptr_t); // x4
  struct UserServantEntity_o *targetInUserServantEntity; // x2
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x8

  v4 = this;
  if ( (byte_596A641 & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_596A641 = 1;
  }
  if ( !result )
    goto LABEL_11;
  this = (EventFortificationListViewManager_o *)System_String__Equals_75686512(
                                                  result,
                                                  (System_String_o *)StringLiteral_23336/*"ng"*/,
                                                  0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)v4->fields.fortificationConfirmDialog;
    if ( this )
    {
      FortificationConfirmDialogComponent__Close((FortificationConfirmDialogComponent_o *)this, 0);
      selectAfterCallback = v4->fields.selectAfterCallback;
      if ( selectAfterCallback )
      {
        method_code = selectAfterCallback->fields.method_code;
        targetInUserServantEntity = v4->fields.targetInUserServantEntity;
        v8 = 1;
        v7 = selectAfterCallback->fields.method;
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, struct UserServantEntity_o *, intptr_t))selectAfterCallback->fields.invoke_impl;
        goto LABEL_10;
      }
    }
LABEL_11:
    sub_2213CDC(this, result);
  }
  v5 = v4->fields.selectAfterCallback;
  if ( !v5 )
    goto LABEL_11;
  method_code = v5->fields.method_code;
  v7 = v5->fields.method;
  v8 = 0;
  invoke_impl = (void (__fastcall *)(intptr_t, __int64, struct UserServantEntity_o *, intptr_t))v5->fields.invoke_impl;
  targetInUserServantEntity = 0;
LABEL_10:
  invoke_impl(method_code, v8, targetInUserServantEntity, v7);
}


void EventFortificationListViewManager__CloseFortificationConfirmDialog(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Collections_Generic_List_object__o *v5; // x20
  NetworkManager_ResultCallbackFunc_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *targetOutUserServantEntity; // x8
  EventFortificationRequest_o *v12; // x21
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0
  __int64 v14; // x2
  struct EventFortificationWorkItem_o *v15; // x8
  struct UserServantEntity_o *targetInUserServantEntity; // x9
  int v17; // w22
  __int128 v18; // q1
  int32_t position; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v20; // x0
  struct EventFortificationWorkItem_o *v21; // x8
  int v22; // w23
  int32_t v23; // w24
  __int64 v24; // x22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  int32_t v35; // w1
  MissionNaviTransitionBoardItem_o *v36; // x0
  __int64 v37; // x2
  struct EventFortificationWorkItem_o *v38; // x8
  struct UserServantEntity_o *v39; // x9
  __int128 v40; // q1
  int64_t v41; // x24
  __int64 v42; // x23
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  __int64 v47; // x8
  System_Collections_Generic_List_object__o *v48; // x0
  Il2CppObject *v49; // x1
  int32_t eventId; // w19
  _OWORD v51[2]; // [xsp+0h] [xbp-B0h] BYREF
  _OWORD v52[2]; // [xsp+20h] [xbp-90h] BYREF
  __int128 v53; // [xsp+40h] [xbp-70h]
  __int128 v54; // [xsp+50h] [xbp-60h]

  if ( (byte_596A640 & 1) == 0 )
  {
    sub_2213A60(&EnterUserSvtInfo_TypeInfo);
    sub_2213A60(&Method_EventFortificationListViewManager_CallbackFortificationRequest__);
    sub_2213A60(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__);
    sub_2213A60(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_EventFortificationRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596A640 = 1;
  }
  v3 = Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CallbackFortificationRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v12 = (EventFortificationRequest_o *)Request_object;
  if ( this->fields.targetInUserServantEntity )
  {
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( targetOutUserServantEntity )
    {
      if ( !targetFortificationWorkItem )
        goto LABEL_39;
      targetFortificationWorkItem = (EventFortificationWorkItem_o *)EventFortificationWorkItem__get_FortificationIdx(
                                                                      targetFortificationWorkItem,
                                                                      0);
      v15 = this->fields.targetFortificationWorkItem;
      if ( !v15 )
        goto LABEL_39;
      targetInUserServantEntity = this->fields.targetInUserServantEntity;
      if ( !targetInUserServantEntity )
        goto LABEL_39;
      v17 = (int)targetFortificationWorkItem;
      v18 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
      position = v15->fields.position;
      v53 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
      v54 = v18;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v14);
      v20 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v52;
      v52[0] = v53;
      v52[1] = v54;
    }
    else
    {
      if ( !targetFortificationWorkItem )
        goto LABEL_39;
      targetFortificationWorkItem = (EventFortificationWorkItem_o *)EventFortificationWorkItem__get_FortificationIdx(
                                                                      targetFortificationWorkItem,
                                                                      0);
      v38 = this->fields.targetFortificationWorkItem;
      if ( !v38 )
        goto LABEL_39;
      v39 = this->fields.targetInUserServantEntity;
      if ( !v39 )
        goto LABEL_39;
      v17 = (int)targetFortificationWorkItem;
      v40 = *(_OWORD *)&v39->fields.id.fields.fakeValue;
      position = v38->fields.position;
      v53 = *(_OWORD *)&v39->fields.id.fields.currentCryptoKey;
      v54 = v40;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v37);
      v20 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v51;
      v51[0] = v53;
      v51[1] = v54;
    }
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(v20, 0);
    v42 = sub_2213CCC(EnterUserSvtInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v42, 0);
    *(_DWORD *)(v42 + 16) = v17;
    *(_DWORD *)(v42 + 20) = position;
    *(_QWORD *)(v42 + 24) = v41;
    if ( v5 )
    {
      items = v5->fields._items;
      v44 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
      ++v5->fields._version;
      if ( items )
      {
        size = v5->fields._size;
        if ( (unsigned int)size < LODWORD(items->max_length) )
        {
          v46 = &items->obj.klass + size;
          v35 = v42;
          v5->fields._size = size + 1;
          v46[4] = (Il2CppClass *)v42;
          v36 = (MissionNaviTransitionBoardItem_o *)(v46 + 4);
          goto LABEL_32;
        }
        v47 = v44[4];
        v48 = v5;
        v49 = (Il2CppObject *)v42;
        goto LABEL_35;
      }
    }
LABEL_39:
    sub_2213CDC(targetFortificationWorkItem, v10);
  }
  if ( !targetOutUserServantEntity )
    return;
  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    goto LABEL_39;
  targetFortificationWorkItem = (EventFortificationWorkItem_o *)EventFortificationWorkItem__get_FortificationIdx(
                                                                  targetFortificationWorkItem,
                                                                  0);
  v21 = this->fields.targetFortificationWorkItem;
  if ( !v21 )
    goto LABEL_39;
  v22 = (int)targetFortificationWorkItem;
  v23 = v21->fields.position;
  v24 = sub_2213CCC(EnterUserSvtInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0);
  *(_DWORD *)(v24 + 16) = v22;
  *(_DWORD *)(v24 + 20) = v23;
  *(_QWORD *)(v24 + 24) = 0;
  if ( !v5 )
    goto LABEL_39;
  v31 = v5->fields._items;
  v32 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
  ++v5->fields._version;
  if ( !v31 )
    goto LABEL_39;
  v33 = v5->fields._size;
  if ( (unsigned int)v33 < LODWORD(v31->max_length) )
  {
    v34 = &v31->obj.klass + v33;
    v35 = v24;
    v5->fields._size = v33 + 1;
    v34[4] = (Il2CppClass *)v24;
    v36 = (MissionNaviTransitionBoardItem_o *)(v34 + 4);
LABEL_32:
    sub_2213A04(v36, v35, v25, v26, v27, v28, v29, v30);
    goto LABEL_36;
  }
  v47 = v32[4];
  v48 = v5;
  v49 = (Il2CppObject *)v24;
LABEL_35:
  System_Collections_Generic_List_object___AddWithResize(
    v48,
    v49,
    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v47 + 192) + 112LL));
LABEL_36:
  eventId = this->fields.eventId;
  targetFortificationWorkItem = (EventFortificationWorkItem_o *)System_Collections_Generic_List_object___ToArray(
                                                                  v5,
                                                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v12 )
    goto LABEL_39;
  EventFortificationRequest__beginRequest(v12, eventId, (EnterUserSvtInfo_array *)targetFortificationWorkItem, 0);
}


void EventFortificationListViewManager__CreateList(
        EventFortificationListViewManager_o *this,
        int32_t eventId,
        FortificationConfirmDialogComponent_o *fortificationConfirmDialog,
        EventFortificationWorkItem_o *targetItem,
        System_Action_bool__UserServantEntity__o *afterCallback,
        const MethodInfo *method)
{
  __int64 v11; // x21
  __int64 sort; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  EventFortificationListViewManager_c *v27; // x0
  struct ListViewSort_o *servantSortStatus; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct EventFortificationWorkItem_o *v47; // x1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  struct ListViewSort_o *v66; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  System_Int32_array *v70; // x23
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v72; // x0
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  __int64 v79; // x2
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v82; // q1
  int64_t v83; // x23
  struct EventFortificationWorkItem_o *v84; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x24
  UserServantEntity_o *v86; // x27
  int32_t v87; // w28
  EventFortificationListViewItem_o *v88; // x25
  const MethodInfo *v89; // x6
  System_Func_object__bool__o *v90; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  __int64 v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  __int64 v101; // x8
  System_Func_object__bool__o *v102; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v103; // x0
  unsigned __int64 v104; // x28
  __int64 monitor; // x29
  UserServantEntity_o *v106; // x25
  int32_t v107; // w26
  EventFortificationWorkItem_o *v108; // x27
  EventFortificationListViewItem_o *v109; // x21
  const MethodInfo *v110; // x6
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  __int64 v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  __int64 v120; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v122; // x2
  const MethodInfo *v123; // x1
  EventUpValSetupInfo_o *setupInfo; // [xsp+0h] [xbp-B0h]
  struct EventFortificationWorkItem_o **v125; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_596A634 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_2213A60(&EventFortificationListViewItem_TypeInfo);
    sub_2213A60(&EventFortificationListViewManager_TypeInfo);
    sub_2213A60(&EventUpValSetupInfo_TypeInfo);
    sub_2213A60(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__);
    sub_2213A60(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__);
    sub_2213A60(&EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo);
    sub_2213A60(&StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_596A634 = 1;
  }
  memset(&v127, 0, sizeof(v127));
  v11 = sub_2213CCC(EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_60;
  *(_QWORD *)(v11 + 16) = targetItem;
  v125 = (struct EventFortificationWorkItem_o **)(v11 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)targetItem, v14, v15, v16, v17, v18, v19);
  v27 = EventFortificationListViewManager_TypeInfo;
  if ( !*(&EventFortificationListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo, v20, v21);
    v27 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v27->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
    (int32_t)servantSortStatus,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_60;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_60;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)sort, 0, 1, 0, 83, 0);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_60;
  TitleInfoControl__setBackBtnSprite_46859020((TitleInfoControl_o *)sort, 1, 0, 0, 0);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_60;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_60;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0);
  this->fields.targetInUserServantEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetInUserServantEntity,
    0,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.targetOutUserServantEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetOutUserServantEntity,
    0,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.eventId = eventId;
  this->fields.fortificationConfirmDialog = fortificationConfirmDialog;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fortificationConfirmDialog,
    (int32_t)fortificationConfirmDialog,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = *v125;
  this->fields.targetFortificationWorkItem = *v125;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetFortificationWorkItem,
    (int32_t)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.selectAfterCallback = afterCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectAfterCallback,
    (int32_t)afterCallback,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v66 = this->fields.sort;
  this->fields.modeKind = 0;
  if ( !v66 )
    goto LABEL_60;
  iconScaleKind = v66->fields.iconScaleKind;
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
      goto LABEL_19;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
    (int32_t)normalSizeSeed,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
LABEL_19:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_60;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0);
  if ( !scaleChangeButtonSprite )
    goto LABEL_60;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  sort = sub_2213B20(int___TypeInfo, 1);
  if ( !sort )
    goto LABEL_60;
  v70 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
    goto LABEL_61;
  *(_DWORD *)(sort + 32) = eventId;
  setupInfo = (EventUpValSetupInfo_o *)sub_2213CCC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_48741124(setupInfo, v70, 1, 0, 0, 0);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_60;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)sort,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_60;
  v72 = DataManager__GetMasterData_object_(
          (DataManager_o *)sort,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  *(_QWORD *)(v11 + 24) = v72;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)v72, v73, v74, v75, v76, v77, v78);
  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    goto LABEL_60;
  userServantEntity = targetFortificationWorkItem->fields.userServantEntity;
  if ( userServantEntity )
  {
    v82 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v127.fields.fakeValue = v82;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v79);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v127, -1, 0);
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v79);
  v126 = v127;
  sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v126, 0);
  if ( !MasterData_object )
    goto LABEL_60;
  v83 = sort;
  sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)MasterData_object, 0);
  v84 = *v125;
  if ( !*v125 )
    goto LABEL_60;
  v85 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  if ( !v84->fields.isSvtDataSetInMaster )
  {
    sort = EventFortificationWorkItem__get_ClassId(*v125, 0);
    if ( (_DWORD)sort )
    {
      v102 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v102,
        (Il2CppObject *)v11,
        Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__,
        0);
      v103 = System_Linq_Enumerable__Where_object_(
               v85,
               (System_Func_TSource__bool__o *)v102,
               (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      sort = (__int64)System_Linq_Enumerable__ToArray_object_(
                        v103,
                        (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
      v85 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
    }
    goto LABEL_45;
  }
  v86 = v84->fields.userServantEntity;
  v87 = this->fields.eventId;
  v88 = (EventFortificationListViewItem_o *)sub_2213CCC(EventFortificationListViewItem_TypeInfo);
  EventFortificationListViewItem___ctor(v88, v86, v87, v83, setupInfo, v84, v89);
  v90 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v90,
    (Il2CppObject *)v11,
    Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__,
    0);
  v91 = System_Linq_Enumerable__Where_object_(
          v85,
          (System_Func_TSource__bool__o *)v90,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  sort = (__int64)System_Linq_Enumerable__ToArray_object_(
                    v91,
                    (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_60;
  v85 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  sort = EventFortificationWorkItem__get_IsNpc(*(EventFortificationWorkItem_o **)(v11 + 16), 0);
  if ( (sort & 1) == 0 )
  {
LABEL_45:
    if ( !v85 )
      goto LABEL_60;
    goto LABEL_46;
  }
  sort = (__int64)this->fields.itemList;
  if ( !sort )
    goto LABEL_60;
  v98 = *(_QWORD *)(sort + 16);
  v99 = Method_System_Collections_Generic_List_ListViewItem__Add__;
  ++*(_DWORD *)(sort + 28);
  if ( !v98 )
    goto LABEL_60;
  v100 = *(int *)(sort + 24);
  if ( (unsigned int)v100 >= *(_DWORD *)(v98 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)sort,
      (Il2CppObject *)v88,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
    if ( !v85 )
      goto LABEL_60;
  }
  else
  {
    v101 = v98 + 8 * v100;
    *(_DWORD *)(sort + 24) = v100 + 1;
    *(_QWORD *)(v101 + 32) = v88;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v101 + 32), (int32_t)v88, v92, v93, v94, v95, v96, v97);
    if ( !v85 )
      goto LABEL_60;
  }
LABEL_46:
  if ( (int)v85[1].monitor >= 1 )
  {
    v104 = 0;
    monitor = (unsigned int)v85[1].monitor;
    while ( v104 < LODWORD(v85[1].monitor) )
    {
      v106 = (UserServantEntity_o *)*((_QWORD *)&v85[2].klass + v104);
      v107 = this->fields.eventId;
      v108 = *v125;
      v109 = (EventFortificationListViewItem_o *)sub_2213CCC(EventFortificationListViewItem_TypeInfo);
      EventFortificationListViewItem___ctor(v109, v106, v107, v83, setupInfo, v108, v110);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_60;
      v117 = *(_QWORD *)(sort + 16);
      v118 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v117 )
        goto LABEL_60;
      v119 = *(int *)(sort + 24);
      if ( (unsigned int)v119 >= *(_DWORD *)(v117 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v109,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
      }
      else
      {
        v120 = v117 + 8 * v119;
        *(_DWORD *)(sort + 24) = v119 + 1;
        *(_QWORD *)(v120 + 32) = v109;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v120 + 32), (int32_t)v109, v111, v112, v113, v114, v115, v116);
      }
      if ( monitor == ++v104 )
        goto LABEL_55;
    }
LABEL_61:
    sub_2213CE4(sort);
  }
LABEL_55:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v92);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
LABEL_60:
    sub_2213CDC(sort, v13);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
  EventFortificationListViewManager__SetStatusKind(this, this->fields.modeKind, v122);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  EventFortificationListViewManager__SetFilterButtonImage(this, v123);
}


void EventFortificationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  EventFortificationListViewManager_c *v3; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_596A630 & 1) == 0 )
  {
    sub_2213A60(&EventFortificationListViewManager_TypeInfo);
    byte_596A630 = 1;
  }
  v3 = EventFortificationListViewManager_TypeInfo;
  if ( !*(&EventFortificationListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo, v1, v2);
    v3 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v3->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_2213CDC(0, v1);
  ListViewSort__DeleteContinueData(servantSortStatus, 0);
}


void EventFortificationListViewManager__DestroyList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, v3);
  ListViewSort__Save(sort, 0);
}


void EventFortificationListViewManager__EndClickTabChoice(
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
  EventFortificationListViewManager__SetMode_38221188(this, 2, v6);
}


void EventFortificationListViewManager__EndClickTabLock(
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
  EventFortificationListViewManager__SetMode_38221188(this, 2, v6);
}


void EventFortificationListViewManager__EndClickTabPush(
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
  EventFortificationListViewManager__SetMode_38221188(this, 2, v6);
}


void EventFortificationListViewManager__EndClickTabStatus(
        EventFortificationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  EventFortificationListViewManager__SetStatusKind(this, 0, method);
  EventFortificationListViewManager__ModifyList(this, 0, v4);
  EventFortificationListViewManager__SetMode_38221188(this, 2, v5);
}


void EventFortificationListViewManager__EndPushRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__ModifyList(this, 0, method);
  EventFortificationListViewManager__SetMode_38221188(this, 2, v4);
}


void EventFortificationListViewManager__EndSelectFilterKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_596A647 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A647 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    EventFortificationListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v7);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, 0, 0);
}


void EventFortificationListViewManager__EndSelectSortKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596A64B & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A64B = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventFortificationListViewManager__EndShowServant(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_596A644 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A644 = 1;
  }
  EventFortificationListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventFortificationListViewManager__ModifyList(this, 0, v4);
  EventFortificationListViewManager__SetMode_38221188(this, 2, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void EventFortificationListViewManager__EndStatusSync(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventFortificationListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  MissionNaviTransitionBoardItem_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0;
    sub_2213A04(p_requestCallback, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))requestCallback->fields.invoke_impl)(
      requestCallback->fields.method_code,
      1,
      requestCallback->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t EventFortificationListViewManager__GetAmountSortValue(
        EventFortificationListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  EventFortificationListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int64_t v7; // x21
  int32_t v8; // w22
  __int64 v9; // x2
  __int64 naturalAligment; // x10
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  System_Collections_Generic_List_UIDragDropListViewSurface__c *klass; // x23
  void *monitor; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v4 = this;
  if ( (byte_596A645 & 1) == 0 )
  {
    sub_2213A60(&EventFortificationListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (EventFortificationListViewManager_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596A645 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      this = (EventFortificationListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      this = (EventFortificationListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v8,
                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (EventFortificationListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != EventFortificationListViewItem_TypeInfo )
        break;
      dropList = this->fields.dropList;
      if ( !dropList )
        break;
      klass = dropList[2].klass;
      monitor = dropList[2].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId, v9);
      *(_QWORD *)&v15.fields.currentCryptoKey = klass;
      *(_QWORD *)&v15.fields.fakeValue = monitor;
      ++v8;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0) == svtId )
        ++v7;
      if ( size == v8 )
        return v7;
    }
LABEL_19:
    sub_2213CDC(this, *(_QWORD *)&svtId);
  }
  return 0;
}


bool EventFortificationListViewManager__GetFocusItemIndex(
        EventFortificationListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  __int64 naturalAligment; // x10

  if ( (byte_596A643 & 1) == 0 )
  {
    sub_2213A60(&EventFortificationListViewItem_TypeInfo);
    this = (EventFortificationListViewManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596A643 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_2213CDC(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (EventFortificationListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)list,
                                                      v8,
                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_14;
      naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (EventFortificationListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_14;
      }
      if ( EventFortificationListViewItem__get_IsBaseSvt(
             (EventFortificationListViewItem_o *)this,
             (const MethodInfo *)index) )
      {
        break;
      }
      if ( sum == ++v8 )
        return 1;
    }
    *index = v8;
  }
  return 1;
}


EventFortificationListViewItem_o *EventFortificationListViewManager__GetItem(
        EventFortificationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventFortificationListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596A63B & 1) == 0 )
  {
    sub_2213A60(&EventFortificationListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596A63B = 1;
  }
  result = (EventFortificationListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventFortificationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (EventFortificationListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != EventFortificationListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


bool EventFortificationListViewManager__GetSwapChoiceList(
        EventFortificationListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_596A64F & 1) == 0 )
  {
    sub_2213A60(&EventFortificationListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596A64F = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 128);
      if ( v21 && *(_BYTE *)(Item + 185) )
      {
        if ( *(_BYTE *)(Item + 170) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *choiceList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unchoiceList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unchoiceList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


bool EventFortificationListViewManager__GetSwapLockList(
        EventFortificationListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_596A64E & 1) == 0 )
  {
    sub_2213A60(&EventFortificationListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596A64E = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 128);
      if ( v21 && *(_BYTE *)(Item + 184) )
      {
        if ( *(_BYTE *)(Item + 169) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *lockList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unlockList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unlockList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


void EventFortificationListViewManager__InitBackListView(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__StatusRequest(this, 0, v2);
  EventFortificationListViewManager__SetStatusKind(this, 0, v4);
}


void EventFortificationListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  EventFortificationListViewManager_c *v3; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_596A631 & 1) == 0 )
  {
    sub_2213A60(&EventFortificationListViewManager_TypeInfo);
    byte_596A631 = 1;
  }
  v3 = EventFortificationListViewManager_TypeInfo;
  if ( !*(&EventFortificationListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo, v1, v2);
    v3 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v3->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_2213CDC(0, v1);
  ListViewSort__InitLoad(servantSortStatus, 0);
}


void EventFortificationListViewManager__ModifyItem(
        EventFortificationListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 naturalAligment; // x11
  EventFortificationListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v15; // q0
  __int128 v16; // q1
  int v17; // w8
  int64_t v18; // x0
  Il2CppObject v19; // q1
  UnityEngine_Object_o *viewObject; // x21
  __int64 v21; // x1
  struct ListViewObject_o *v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-A0h] BYREF
  __int64 v26; // [xsp+60h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o *v27; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_596A638 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&EventFortificationListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A638 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v28, 0, sizeof(v28));
  if ( itemList )
  {
    UserGameMaster__getSelfUserGame(0);
    if ( usrSvtId < 1 )
    {
      Entity = 0;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_37;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_37;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v25,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v28.fields._current = (Il2CppObject *)v25.fields.fakeValue;
      *(_OWORD *)&v28.fields._list = *(_OWORD *)&v25.fields.currentCryptoKey;
      v26 = 0;
      v27 = &v28;
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v28,
               (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v9 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v28,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v28.fields._current
          && (naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment,
              v28.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (EventFortificationListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v28.fields._current;
          else
            current = 0;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_2213CDC(v9, v10);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_2213CDC(v9, v10);
            v15 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            v16 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            v17 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v25.fields.currentCryptoKey = v15;
            *(_OWORD *)&v25.fields.fakeValue = v16;
            if ( !v17 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
            v24 = v25;
            v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v24, 0);
            v19 = Entity[2];
            *(Il2CppObject *)&v23.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v23.fields.fakeValue = v19;
            if ( v18 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v23, 0) )
              EventFortificationListViewItem__ModifyItem(current, (UserServantEntity_o *)Entity, v11);
            goto LABEL_26;
          }
        }
        else
        {
          current = 0;
          if ( Entity )
            goto LABEL_15;
        }
        if ( !current )
          sub_2213CDC(v9, v10);
LABEL_26:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
        {
          v22 = current->fields.viewObject;
          if ( !v22 )
            sub_2213CDC(0, v21);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, const MethodInfo *))v22->klass->vtable._5_SetItem.methodPtr)(
            v22,
            current,
            v22->klass->vtable._5_SetItem.method);
        }
      }
    }
LABEL_37:
    sub_2213CDC(Instance, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventFortificationListViewManager__ModifyList(
        EventFortificationListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t sort; // x0
  __int64 v5; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v7; // x25
  int64_t v8; // x21
  int size; // w29
  unsigned __int64 v10; // x19
  __int64 v11; // x8
  __int128 v12; // q0
  __int128 v13; // q1
  int v14; // w8
  int64_t v15; // x22
  int32_t v16; // w23
  int64_t v17; // x24
  __int64 naturalAligment; // x10
  __int64 v19; // x8
  __int128 v20; // q0
  __int128 v21; // q1
  int v22; // w8
  __int64 v23; // x8
  __int128 v24; // q0
  __int128 v25; // q1
  int v26; // w8
  int64_t v27; // x0
  const MethodInfo *v28; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+70h] [xbp-80h]

  if ( (byte_596A63A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&EventFortificationListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A63A = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_32;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_32;
  sort = (int64_t)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_32;
  sort = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0);
  if ( !sort )
    goto LABEL_32;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_32;
  v7 = *(unsigned int *)(sort + 24);
  v8 = sort;
  if ( (int)v7 >= 1 )
  {
    size = itemList->fields._size;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= *(unsigned int *)(v8 + 24) )
        sub_2213CE4(sort);
      v11 = *(_QWORD *)(v8 + 8 * v10 + 32);
      if ( !v11 )
        break;
      v12 = *(_OWORD *)(v11 + 16);
      v13 = *(_OWORD *)(v11 + 32);
      v14 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v33.fields.currentCryptoKey = v12;
      *(_OWORD *)&v33.fields.fakeValue = v13;
      if ( !v14 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isIconSizeChange, v5);
      v32 = v33;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v32, 0);
      if ( size >= 1 )
      {
        v15 = sort;
        v16 = 0;
        while ( 1 )
        {
          sort = (int64_t)this->fields.itemList;
          if ( !sort )
            goto LABEL_32;
          sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)sort,
                            v16,
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !sort )
            goto LABEL_32;
          v17 = sort;
          naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)naturalAligment
            || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * naturalAligment - 8) != EventFortificationListViewItem_TypeInfo )
          {
            goto LABEL_32;
          }
          v19 = *(_QWORD *)(sort + 128);
          if ( v19 )
          {
            v20 = *(_OWORD *)(v19 + 16);
            v21 = *(_OWORD *)(v19 + 32);
            v22 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v33.fields.currentCryptoKey = v20;
            *(_OWORD *)&v33.fields.fakeValue = v21;
            if ( !v22 )
              j_il2cpp_runtime_class_init_0(
                CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                isIconSizeChange,
                v5);
            v31 = v33;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v31, 0);
            if ( sort == v15 )
              break;
          }
          if ( size == ++v16 )
            goto LABEL_30;
        }
        v23 = *(_QWORD *)(v17 + 128);
        if ( !v23 )
          break;
        v24 = *(_OWORD *)(v23 + 16);
        v25 = *(_OWORD *)(v23 + 32);
        v26 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v33.fields.currentCryptoKey = v24;
        *(_OWORD *)&v33.fields.fakeValue = v25;
        if ( !v26 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isIconSizeChange, v5);
        v30 = v33;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v30, 0);
        EventFortificationListViewManager__ModifyLockItem(this, v27, 1, isIconSizeChange, v28);
      }
LABEL_30:
      if ( ++v10 == v7 )
        return;
    }
LABEL_32:
    sub_2213CDC(sort, isIconSizeChange);
  }
}


void EventFortificationListViewManager__ModifyLockItem(
        EventFortificationListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v13; // w29
  int64_t v14; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  __int64 naturalAligment; // x11
  EventFortificationListViewItem_o *current; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v20; // q0
  __int128 v21; // q1
  int v22; // w8
  int64_t v23; // x0
  Il2CppObject v24; // q1
  int64_t v25; // x23
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  UnityEngine_Object_o *viewObject; // x23
  __int64 v29; // x1
  struct ListViewObject_o *v30; // x0
  __int64 v31; // x1
  ListViewObject_o *v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-B0h] BYREF
  __int64 v36; // [xsp+60h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o *v37; // [xsp+68h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_596A639 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&EventFortificationListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A639 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v38, 0, sizeof(v38));
  if ( itemList )
  {
    UserGameMaster__getSelfUserGame(0);
    if ( usrSvtId < 1 )
    {
      Entity = 0;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_45;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_45;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v35,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v13 = !isIconSizeChange && isInit;
      v38.fields._current = (Il2CppObject *)v35.fields.fakeValue;
      *(_OWORD *)&v38.fields._list = *(_OWORD *)&v35.fields.currentCryptoKey;
      v36 = 0;
      v37 = &v38;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v38,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v14 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v38,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v38.fields._current
          && (naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment,
              v38.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (EventFortificationListViewItem_c *)v38.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v38.fields._current;
          else
            current = 0;
          if ( !Entity )
            goto LABEL_26;
        }
        else
        {
          current = 0;
          if ( !Entity )
            goto LABEL_26;
        }
        if ( !current )
          sub_2213CDC(v14, v15);
        userServantEntity = current->fields.userServantEntity;
        if ( !userServantEntity )
          sub_2213CDC(v14, v15);
        v20 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        v22 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v35.fields.currentCryptoKey = v20;
        *(_OWORD *)&v35.fields.fakeValue = v21;
        if ( !v22 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
        v34 = v35;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v34, 0);
        v24 = Entity[2];
        v25 = v23;
        *(Il2CppObject *)&v33.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v33.fields.fakeValue = v24;
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v33, 0);
        if ( v25 == v14 )
          EventFortificationListViewItem__SetUserServantEntity(current, (UserServantEntity_o *)Entity, v16);
LABEL_26:
        if ( v13 )
        {
          if ( !current )
            sub_2213CDC(v14, v15);
          EventFortificationListViewItem__ModifyLockItem(current, v15);
          EventFortificationListViewItem__ModifyChoiceItem(current, v26);
          EventFortificationListViewItem__ModifyPushItem(current, v27);
        }
        else if ( !current )
        {
          sub_2213CDC(v14, v15);
        }
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
        {
          v30 = current->fields.viewObject;
          if ( !v30 )
            sub_2213CDC(0, v29);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, const MethodInfo *))v30->klass->vtable._5_SetItem.methodPtr)(
            v30,
            current,
            v30->klass->vtable._5_SetItem.method);
          if ( isIconSizeChange )
          {
            v32 = current->fields.viewObject;
            if ( !v32 )
              sub_2213CDC(0, v31);
            ListViewObject__SetItemSeed(v32, (ListViewItem_o *)current, this->fields.seed, 0);
          }
        }
      }
    }
LABEL_45:
    sub_2213CDC(Instance, v10);
  }
}


void EventFortificationListViewManager__OnClickBack(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x20

  if ( (byte_596A655 & 1) == 0 )
  {
    sub_2213A60(&Method_EventFortificationListViewManager_OnClickBack__);
    byte_596A655 = 1;
  }
  v3 = Method_EventFortificationListViewManager_OnClickBack__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventFortificationListViewManager_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectAfterCallback, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))selectAfterCallback->fields.invoke_impl)(
      selectAfterCallback->fields.method_code,
      0,
      0,
      selectAfterCallback->fields.method);
  }
}


void EventFortificationListViewManager__OnClickBonusFilterKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_596A648 & 1) == 0 )
  {
    sub_2213A60(&Method_EventFortificationListViewManager_OnClickBonusFilterKind__);
    byte_596A648 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventFortificationListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(0, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void EventFortificationListViewManager__OnClickChoiceTab(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_596A652 & 1) == 0 )
  {
    sub_2213A60(&Method_EventFortificationListViewManager_EndClickTabChoice__);
    sub_2213A60(&Method_EventFortificationListViewManager_OnClickChoiceTab__);
    sub_2213A60(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    byte_596A652 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_EventFortificationListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventFortificationListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_2213CCC(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabChoice__,
        v7);
      EventFortificationListViewManager__StatusRequest(this, v6, v8);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 2, v5);
      EventFortificationListViewManager__RefreshListDisp(this, v9);
      EventFortificationListViewManager__ModifyList(this, 0, v10);
      EventFortificationListViewManager__SetMode_38221188(this, 2, v11);
    }
  }
}


void EventFortificationListViewManager__OnClickCollectLock(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_596A651 & 1) == 0 )
  {
    sub_2213A60(&Method_EventFortificationListViewManager_EndClickTabLock__);
    sub_2213A60(&Method_EventFortificationListViewManager_OnClickCollectLock__);
    sub_2213A60(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    byte_596A651 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_EventFortificationListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventFortificationListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_2213CCC(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabLock__,
        v7);
      EventFortificationListViewManager__StatusRequest(this, v6, v8);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 1, v5);
      EventFortificationListViewManager__RefreshListDisp(this, v9);
      EventFortificationListViewManager__ModifyList(this, 0, v10);
      EventFortificationListViewManager__SetMode_38221188(this, 2, v11);
    }
  }
}


void EventFortificationListViewManager__OnClickFilterKind(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_596A646 & 1) == 0 )
  {
    sub_2213A60(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_EventFortificationListViewManager_EndSelectFilterKind__);
    sub_2213A60(&Method_EventFortificationListViewManager_OnClickFilterKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A646 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventFortificationListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
    CommonUI__OpenServantFilterSelectMenu(v7, 1, sort, v8, 0, 0);
  }
}


void EventFortificationListViewManager__OnClickListView(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void EventFortificationListViewManager__OnClickNormalStatus(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  EventFortificationListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_596A650 & 1) == 0 )
  {
    sub_2213A60(&Method_EventFortificationListViewManager_EndClickTabStatus__);
    sub_2213A60(&Method_EventFortificationListViewManager_OnClickNormalStatus__);
    sub_2213A60(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    byte_596A650 = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_EventFortificationListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventFortificationListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_2213CCC(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    EventFortificationListViewManager_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndClickTabStatus__,
      v6);
    EventFortificationListViewManager__StatusRequest(this, v5, v7);
  }
}


void EventFortificationListViewManager__OnClickPushTab(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_596A653 & 1) == 0 )
  {
    sub_2213A60(&Method_EventFortificationListViewManager_EndClickTabPush__);
    sub_2213A60(&Method_EventFortificationListViewManager_OnClickPushTab__);
    sub_2213A60(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    byte_596A653 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_EventFortificationListViewManager_OnClickPushTab__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickPushTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventFortificationListViewManager_OnClickPushTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_2213CCC(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabPush__,
        v7);
      EventFortificationListViewManager__StatusRequest(this, v6, v8);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 3, v5);
      EventFortificationListViewManager__RefreshListDisp(this, v9);
      EventFortificationListViewManager__ModifyList(this, 0, v10);
      EventFortificationListViewManager__SetMode_38221188(this, 2, v11);
    }
  }
}


void EventFortificationListViewManager__OnClickScaleChange(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  EventFortificationListViewManager_o *v14; // x0
  int v15; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v18; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  if ( (byte_596A656 & 1) == 0 )
  {
    sub_2213A60(&Method_EventFortificationListViewManager_OnClickScaleChange__);
    byte_596A656 = 1;
  }
  v3 = Method_EventFortificationListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventFortificationListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v14 = this;
    v15 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v14 = this;
    v15 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v14 = this;
    v15 = 1;
LABEL_11:
    v14->fields.seed = smallSizeSeed;
    p_seed = &v14->fields.seed;
    *((_DWORD *)p_seed + 106) = v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v6, v7, v8, v9, v10, v11);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v18 = this->fields.scaleType,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort->fields.iconScaleKind = v18,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v18, 0),
        !scaleChangeButtonSprite) )
  {
    sub_2213CDC(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  EventFortificationListViewManager__ModifyList(this, 1, v20);
  EventFortificationListViewManager__SetMode_38221188(this, 2, v21);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void EventFortificationListViewManager__OnClickSelectObject(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ListViewObject_o *v3; // x20
  int64_t fortificationConfirmDialog; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 naturalAligment; // x10
  EventFortificationListViewItem_o *Item; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_object__o *v22; // x22
  System_Collections_Generic_List_int__o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v32; // q1
  struct UserServantEntity_o *v33; // x8
  __int128 v34; // q1
  int64_t v35; // x23
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct EventFortificationWorkItem_o *v42; // x8
  struct UserServantEntity_o *v43; // x1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  struct UserServantEntity_o *v54; // x1
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  const MethodInfo *v65; // x2
  struct UserServantEntity_o *v66; // x8
  __int128 v67; // q0
  __int128 v68; // q1
  int v69; // w8
  struct UserServantEntity_o *v70; // x8
  __int128 v71; // q1
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  struct UserServantEntity_o *v78; // x1
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  struct EventFortificationWorkItem_o *v85; // x8
  struct UserServantEntity_o *v86; // x1
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  struct System_Object_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  Il2CppClass **v96; // x0
  struct System_Int32_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  struct FortificationConfirmDialogComponent_o *v100; // x23
  System_Object_array *v101; // x22
  System_Int32_array *v102; // x21
  System_String_o *v103; // x24
  EventFortificationWorkItem_o *v104; // x8
  System_String_o *v105; // x20
  int32_t WorkType; // w25
  System_Action_o *v107; // x26
  FortificationConfirmDialogComponent_o *v108; // x0
  int32_t v109; // w1
  struct System_Int32_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  struct FortificationConfirmDialogComponent_o *v113; // x23
  EventFortificationWorkItem_o *v114; // x8
  System_String_o *v115; // x2
  System_String_o *v116; // x3
  int32_t v117; // w4
  int32_t v118; // w5
  bool v119; // w6
  bool v120; // w7
  struct System_Int32_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  Il2CppClass **v127; // x0
  const MethodInfo *v128; // x2
  struct System_Int32_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  struct FortificationConfirmDialogComponent_o *v132; // x23
  EventFortificationWorkItem_o *v133; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v138; // [xsp+90h] [xbp-70h]

  v3 = obj;
  if ( (byte_596A63F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__);
    sub_2213A60(&Method_EventFortificationListViewManager_OnClickSelectObject__);
    sub_2213A60(&EventFortificationListViewObject_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A63F = 1;
  }
  fortificationConfirmDialog = (int64_t)this->fields.fortificationConfirmDialog;
  if ( !fortificationConfirmDialog )
    goto LABEL_85;
  fortificationConfirmDialog = (int64_t)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)fortificationConfirmDialog,
                                          0);
  if ( !fortificationConfirmDialog )
    goto LABEL_85;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fortificationConfirmDialog, 1, 0);
  v6 = Method_EventFortificationListViewManager_OnClickSelectObject__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectObject__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_EventFortificationListViewManager_OnClickSelectObject__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  if ( !v3 )
    goto LABEL_85;
  naturalAligment = EventFortificationListViewObject_TypeInfo->_2.naturalAligment;
  if ( v3->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_85;
  if ( (EventFortificationListViewObject_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] != EventFortificationListViewObject_TypeInfo )
    goto LABEL_85;
  Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)v3, (const MethodInfo *)obj);
  this->fields.targetInUserServantEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetInUserServantEntity,
    0,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.targetOutUserServantEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetOutUserServantEntity,
    0,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_85;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_85;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v22 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v23 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    goto LABEL_85;
  userServantEntity = targetFortificationWorkItem->fields.userServantEntity;
  if ( userServantEntity )
  {
    v32 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v138.fields.fakeValue = v32;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj, v24);
    v137 = v138;
    fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v137, 0);
    if ( Item )
    {
      v33 = Item->fields.userServantEntity;
      if ( v33 )
      {
        v34 = *(_OWORD *)&v33->fields.id.fields.fakeValue;
        v35 = fortificationConfirmDialog;
        *(_OWORD *)&v136.fields.currentCryptoKey = *(_OWORD *)&v33->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v136.fields.fakeValue = v34;
        fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v136, 0);
        v42 = this->fields.targetFortificationWorkItem;
        if ( v35 == fortificationConfirmDialog )
        {
          if ( v42 )
          {
            v43 = v42->fields.userServantEntity;
            this->fields.targetOutUserServantEntity = v43;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.targetOutUserServantEntity,
              (int32_t)v43,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41);
            if ( v22 )
            {
              items = v22->fields._items;
              obj = (ListViewObject_o *)this->fields.targetOutUserServantEntity;
              v51 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v22->fields._version;
              if ( items )
              {
                size = v22->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v22,
                    (Il2CppObject *)obj,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                }
                else
                {
                  v53 = &items->obj.klass + size;
                  v22->fields._size = size + 1;
                  v53[4] = (Il2CppClass *)obj;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v53 + 4), (int32_t)obj, v44, v45, v46, v47, v48, v49);
                }
                fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
                if ( fortificationConfirmDialog )
                {
                  fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                                 (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                                 0);
                  if ( v23 )
                  {
                    v110 = v23->fields._items;
                    v111 = Method_System_Collections_Generic_List_int__Add__;
                    ++v23->fields._version;
                    if ( v110 )
                    {
                      v112 = v23->fields._size;
                      if ( (unsigned int)v112 >= LODWORD(v110->max_length) )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v23,
                          fortificationConfirmDialog,
                          *(const MethodInfo_4467270 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v23->fields._size = v112 + 1;
                        v110->m_Items[v112] = fortificationConfirmDialog;
                      }
                      v113 = this->fields.fortificationConfirmDialog;
                      v101 = System_Collections_Generic_List_object___ToArray(
                               v22,
                               (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                      fortificationConfirmDialog = (int64_t)System_Collections_Generic_List_int___ToArray(
                                                              v23,
                                                              (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
                      if ( Item->fields.targetFortificationWorkItem )
                      {
                        v102 = (System_Int32_array *)fortificationConfirmDialog;
                        fortificationConfirmDialog = (int64_t)EventFortificationWorkItem__get_TeamName(
                                                                Item->fields.targetFortificationWorkItem,
                                                                0);
                        if ( Item->fields.targetFortificationWorkItem )
                        {
                          v103 = (System_String_o *)fortificationConfirmDialog;
                          fortificationConfirmDialog = (int64_t)EventFortificationWorkItem__get_Name(
                                                                  Item->fields.targetFortificationWorkItem,
                                                                  0);
                          v114 = Item->fields.targetFortificationWorkItem;
                          if ( v114 )
                          {
                            v105 = (System_String_o *)fortificationConfirmDialog;
                            WorkType = EventFortificationWorkItem__get_WorkType(v114, 0);
                            v107 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                            System_Action___ctor(
                              v107,
                              (Il2CppObject *)this,
                              (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                              0);
                            if ( v113 )
                            {
                              v108 = v113;
                              v109 = 1;
                              goto LABEL_83;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if ( v42 )
        {
          v66 = v42->fields.userServantEntity;
          if ( !v66 )
            return;
          v67 = *(_OWORD *)&v66->fields.id.fields.currentCryptoKey;
          v68 = *(_OWORD *)&v66->fields.id.fields.fakeValue;
          v69 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v138.fields.currentCryptoKey = v67;
          *(_OWORD *)&v138.fields.fakeValue = v68;
          if ( !v69 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj, v36);
          v135 = v138;
          fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v135, 0);
          v70 = Item->fields.userServantEntity;
          if ( v70 )
          {
            v71 = *(_OWORD *)&v70->fields.id.fields.fakeValue;
            *(_OWORD *)&v134.fields.currentCryptoKey = *(_OWORD *)&v70->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v134.fields.fakeValue = v71;
            if ( fortificationConfirmDialog == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                 &v134,
                                                 0) )
              return;
            v78 = Item->fields.userServantEntity;
            this->fields.targetInUserServantEntity = v78;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.targetInUserServantEntity,
              (int32_t)v78,
              v72,
              v73,
              v74,
              v75,
              v76,
              v77);
            v85 = this->fields.targetFortificationWorkItem;
            if ( v85 )
            {
              v86 = v85->fields.userServantEntity;
              this->fields.targetOutUserServantEntity = v86;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.targetOutUserServantEntity,
                (int32_t)v86,
                v79,
                v80,
                v81,
                v82,
                v83,
                v84);
              if ( v22 )
              {
                v93 = v22->fields._items;
                obj = (ListViewObject_o *)this->fields.targetOutUserServantEntity;
                v94 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v22->fields._version;
                if ( v93 )
                {
                  v95 = v22->fields._size;
                  if ( (unsigned int)v95 >= LODWORD(v93->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v22,
                      (Il2CppObject *)obj,
                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v96 = &v93->obj.klass + v95;
                    v22->fields._size = v95 + 1;
                    v96[4] = (Il2CppClass *)obj;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v96 + 4),
                      (int32_t)obj,
                      v87,
                      v88,
                      v89,
                      v90,
                      v91,
                      v92);
                  }
                  fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
                  if ( fortificationConfirmDialog )
                  {
                    fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                                   (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                                   0);
                    if ( v23 )
                    {
                      v121 = v23->fields._items;
                      v122 = Method_System_Collections_Generic_List_int__Add__;
                      ++v23->fields._version;
                      if ( v121 )
                      {
                        v123 = v23->fields._size;
                        if ( (unsigned int)v123 >= LODWORD(v121->max_length) )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v23,
                            fortificationConfirmDialog,
                            *(const MethodInfo_4467270 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v23->fields._size = v123 + 1;
                          v121->m_Items[v123] = fortificationConfirmDialog;
                        }
                        v124 = v22->fields._items;
                        obj = (ListViewObject_o *)this->fields.targetInUserServantEntity;
                        v125 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                        ++v22->fields._version;
                        if ( v124 )
                        {
                          v126 = v22->fields._size;
                          if ( (unsigned int)v126 >= LODWORD(v124->max_length) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v22,
                              (Il2CppObject *)obj,
                              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v127 = &v124->obj.klass + v126;
                            v22->fields._size = v126 + 1;
                            v127[4] = (Il2CppClass *)obj;
                            sub_2213A04(
                              (MissionNaviTransitionBoardItem_o *)(v127 + 4),
                              (int32_t)obj,
                              v115,
                              v116,
                              v117,
                              v118,
                              v119,
                              v120);
                          }
                          fortificationConfirmDialog = EventFortificationDataLogic__CalculationGetPoint(
                                                         Item->fields.userServantEntity,
                                                         Item->fields.eventId,
                                                         v128);
                          v129 = v23->fields._items;
                          v130 = Method_System_Collections_Generic_List_int__Add__;
                          ++v23->fields._version;
                          if ( v129 )
                          {
                            v131 = v23->fields._size;
                            if ( (unsigned int)v131 >= LODWORD(v129->max_length) )
                            {
                              System_Collections_Generic_List_int___AddWithResize(
                                v23,
                                fortificationConfirmDialog,
                                *(const MethodInfo_4467270 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v23->fields._size = v131 + 1;
                              v129->m_Items[v131] = fortificationConfirmDialog;
                            }
                            v132 = this->fields.fortificationConfirmDialog;
                            v101 = System_Collections_Generic_List_object___ToArray(
                                     v22,
                                     (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                            fortificationConfirmDialog = (int64_t)System_Collections_Generic_List_int___ToArray(
                                                                    v23,
                                                                    (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
                            if ( Item->fields.targetFortificationWorkItem )
                            {
                              v102 = (System_Int32_array *)fortificationConfirmDialog;
                              fortificationConfirmDialog = (int64_t)EventFortificationWorkItem__get_TeamName(
                                                                      Item->fields.targetFortificationWorkItem,
                                                                      0);
                              if ( Item->fields.targetFortificationWorkItem )
                              {
                                v103 = (System_String_o *)fortificationConfirmDialog;
                                fortificationConfirmDialog = (int64_t)EventFortificationWorkItem__get_Name(
                                                                        Item->fields.targetFortificationWorkItem,
                                                                        0);
                                v133 = Item->fields.targetFortificationWorkItem;
                                if ( v133 )
                                {
                                  v105 = (System_String_o *)fortificationConfirmDialog;
                                  WorkType = EventFortificationWorkItem__get_WorkType(v133, 0);
                                  v107 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    v107,
                                    (Il2CppObject *)this,
                                    (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                                    0);
                                  if ( v132 )
                                  {
                                    v108 = v132;
                                    v109 = 2;
                                    goto LABEL_83;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_85:
    sub_2213CDC(fortificationConfirmDialog, obj);
  }
  if ( !Item )
    goto LABEL_85;
  v54 = Item->fields.userServantEntity;
  this->fields.targetInUserServantEntity = v54;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetInUserServantEntity,
    (int32_t)v54,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( !v22 )
    goto LABEL_85;
  v61 = v22->fields._items;
  obj = (ListViewObject_o *)this->fields.targetInUserServantEntity;
  v62 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
  ++v22->fields._version;
  if ( !v61 )
    goto LABEL_85;
  v63 = v22->fields._size;
  if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)obj,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
  }
  else
  {
    v64 = &v61->obj.klass + v63;
    v22->fields._size = v63 + 1;
    v64[4] = (Il2CppClass *)obj;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v64 + 4), (int32_t)obj, v55, v56, v57, v58, v59, v60);
  }
  fortificationConfirmDialog = EventFortificationDataLogic__CalculationGetPoint(
                                 Item->fields.userServantEntity,
                                 Item->fields.eventId,
                                 v65);
  if ( !v23 )
    goto LABEL_85;
  v97 = v23->fields._items;
  v98 = Method_System_Collections_Generic_List_int__Add__;
  ++v23->fields._version;
  if ( !v97 )
    goto LABEL_85;
  v99 = v23->fields._size;
  if ( (unsigned int)v99 >= LODWORD(v97->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v23,
      fortificationConfirmDialog,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
  }
  else
  {
    v23->fields._size = v99 + 1;
    v97->m_Items[v99] = fortificationConfirmDialog;
  }
  v100 = this->fields.fortificationConfirmDialog;
  v101 = System_Collections_Generic_List_object___ToArray(
           v22,
           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
  fortificationConfirmDialog = (int64_t)System_Collections_Generic_List_int___ToArray(
                                          v23,
                                          (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !Item->fields.targetFortificationWorkItem )
    goto LABEL_85;
  v102 = (System_Int32_array *)fortificationConfirmDialog;
  fortificationConfirmDialog = (int64_t)EventFortificationWorkItem__get_TeamName(
                                          Item->fields.targetFortificationWorkItem,
                                          0);
  if ( !Item->fields.targetFortificationWorkItem )
    goto LABEL_85;
  v103 = (System_String_o *)fortificationConfirmDialog;
  fortificationConfirmDialog = (int64_t)EventFortificationWorkItem__get_Name(
                                          Item->fields.targetFortificationWorkItem,
                                          0);
  v104 = Item->fields.targetFortificationWorkItem;
  if ( !v104 )
    goto LABEL_85;
  v105 = (System_String_o *)fortificationConfirmDialog;
  WorkType = EventFortificationWorkItem__get_WorkType(v104, 0);
  v107 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v107,
    (Il2CppObject *)this,
    (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
    0);
  if ( !v100 )
    goto LABEL_85;
  v108 = v100;
  v109 = 0;
LABEL_83:
  FortificationConfirmDialogComponent__Open(
    v108,
    v109,
    (UserServantEntity_array *)v101,
    v102,
    v103,
    v105,
    WorkType,
    v107,
    0);
}


void EventFortificationListViewManager__OnClickSelectPush(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 SelfUserGame; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 naturalAligment; // x9
  EventFortificationListViewItem_o *Item; // x0
  EventFortificationListViewItem_o **v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x2
  int64_t v26; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v28; // q1
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  const MethodInfo *v31; // x2
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  __int64 v34; // x25
  __int64 v35; // x1
  __int64 v36; // x2
  ServantEntity_o *ServantEntity; // x26
  __int64 v38; // x1
  __int64 v39; // x2
  Il2CppObject *Master_object; // x24
  System_String_o *v41; // x21
  System_String_o *v42; // x22
  __int64 v43; // x23
  __int64 v44; // x1
  __int64 v45; // x2
  int32_t Rarity; // w27
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x27
  __int64 v54; // x1
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  __int64 v61; // x27
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x26
  __int64 v65; // x27
  int32_t v66; // w0
  __int64 v67; // x8
  int32_t v68; // w25
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  __int64 v75; // x25
  int32_t v76; // w0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  __int64 v83; // x25
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  __int64 v90; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v91; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v92; // x8
  int32_t v93; // w20
  int32_t v94; // w0
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  __int64 v101; // x20
  System_String_o *v102; // x20
  System_String_o *v103; // x22
  System_String_o *v104; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v106; // x25
  __int64 v107; // x2
  __int64 v108; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  if ( (byte_596A657 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_EventFortificationListViewManager_OnClickSelectPush__);
    sub_2213A60(&EventFortificationListViewObject_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__0__);
    sub_2213A60(&EventFortificationListViewManager___c__DisplayClass96_0_TypeInfo);
    sub_2213A60(&StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_596A657 = 1;
  }
  v5 = sub_2213CCC(EventFortificationListViewManager___c__DisplayClass96_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !obj )
    goto LABEL_64;
  naturalAligment = EventFortificationListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventFortificationListViewObject_TypeInfo )
  {
    SelfUserGame = sub_221405C(obj, EventFortificationListViewObject_TypeInfo, v14, v15);
    goto LABEL_66;
  }
  Item = EventFortificationListViewObject__GetItem(
           (EventFortificationListViewObject_o *)obj,
           (const MethodInfo *)EventFortificationListViewObject_TypeInfo);
  *(_QWORD *)(v5 + 24) = Item;
  v18 = (EventFortificationListViewItem_o **)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)Item, v19, v20, v21, v22, v23, v24);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_64;
  v26 = *(_QWORD *)(SelfUserGame + 128);
  if ( v26 )
  {
    if ( !*v18 )
      goto LABEL_64;
    userServantEntity = (*v18)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_64;
    v28 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v110.fields.fakeValue = v28;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v25);
    v109 = v110;
    if ( v26 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v109, 0) )
      goto LABEL_14;
    v32 = Method_EventFortificationListViewManager_OnClickSelectPush__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
      v32 = (_QWORD *)sub_2213A78(Method_EventFortificationListViewManager_OnClickSelectPush__);
    v33 = (System_Reflection_MethodBase_o *)sub_2213A44(v32, v32[4]);
    OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0);
    SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_64;
    SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_64;
    SelfUserGame = (__int64)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                              v26,
                              (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !SelfUserGame )
      goto LABEL_64;
    v34 = SelfUserGame;
    ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)SelfUserGame, -1, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35, v36);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38, v39);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
    v43 = sub_2213B20(object___TypeInfo, 6);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v34, 0);
    if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v44, v45);
    SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0);
    if ( !v43 )
LABEL_64:
      sub_2213CDC(SelfUserGame, v7);
    v53 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_2213BB4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( !*(_DWORD *)(v43 + 24) )
      goto LABEL_66;
    *(_QWORD *)(v43 + 32) = v53;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 32), v53, v47, v48, v49, v50, v51, v52);
    if ( !ServantEntity )
      goto LABEL_64;
    SelfUserGame = (__int64)ServantEntity__getClassName(ServantEntity, 0);
    v61 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_2213BB4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( (*(_DWORD *)(v43 + 24) & 0xFFFFFFFE) == 0 )
      goto LABEL_66;
    *(_QWORD *)(v43 + 40) = v61;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 40), v61, v55, v56, v57, v58, v59, v60);
    v65 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
    v64 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62, v63);
    *(_QWORD *)&v111.fields.currentCryptoKey = v65;
    *(_QWORD *)&v111.fields.fakeValue = v64;
    v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v111, 0);
    v67 = *(_QWORD *)(v34 + 96);
    *(_QWORD *)&v112.fields.fakeValue = *(_QWORD *)(v34 + 104);
    v68 = v66;
    *(_QWORD *)&v112.fields.currentCryptoKey = v67;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v112, 0);
    if ( !Master_object )
      goto LABEL_64;
    SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                              (ServantLimitImageMaster_o *)Master_object,
                              v68,
                              SelfUserGame,
                              1,
                              1,
                              0);
    v75 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_2213BB4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( *(_DWORD *)(v43 + 24) <= 2u )
      goto LABEL_66;
    *(_QWORD *)(v43 + 48) = v75;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 48), v75, v69, v70, v71, v72, v73, v74);
    if ( !*v18 )
      goto LABEL_64;
    SelfUserGame = (__int64)(*v18)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_64;
    v76 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0);
    SelfUserGame = (__int64)Rarity__getRarityType(v76, 0);
    v83 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_2213BB4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( (*(_DWORD *)(v43 + 24) & 0xFFFFFFFC) == 0 )
      goto LABEL_66;
    *(_QWORD *)(v43 + 56) = v83;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 56), v83, v77, v78, v79, v80, v81, v82);
    if ( !*v18 )
      goto LABEL_64;
    SelfUserGame = (__int64)(*v18)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_64;
    SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0);
    v90 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_2213BB4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
      if ( !SelfUserGame )
        goto LABEL_67;
    }
    if ( *(_DWORD *)(v43 + 24) <= 4u )
      goto LABEL_66;
    *(_QWORD *)(v43 + 64) = v90;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 64), v90, v84, v85, v86, v87, v88, v89);
    if ( !*v18 )
      goto LABEL_64;
    v91 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v18)->fields.servantEntity;
    if ( !v91 )
      goto LABEL_64;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v91[1], 0);
    if ( !*v18 )
      goto LABEL_64;
    v92 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v18)->fields.userServantEntity;
    if ( !v92 )
      goto LABEL_64;
    v93 = SelfUserGame;
    v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v92[6], 0);
    SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                              (ServantLimitImageMaster_o *)Master_object,
                              v93,
                              v94,
                              1,
                              1,
                              0);
    v101 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_2213BB4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
      if ( !SelfUserGame )
      {
LABEL_67:
        v108 = sub_2213D00(SelfUserGame, v54);
        sub_2213BA0(v108, 0);
      }
    }
    if ( *(_DWORD *)(v43 + 24) > 5u )
    {
      *(_QWORD *)(v43 + 72) = v101;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 72), v101, v95, v96, v97, v98, v99, v100);
      v102 = System_String__Format_75698016(v42, (System_Object_array *)v43, 0);
      v103 = LocalizationManager__Get((System_String_o *)StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
      v104 = LocalizationManager__Get((System_String_o *)StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v106 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v106,
        (Il2CppObject *)v5,
        Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__0__,
        0);
      SelfUserGame = (__int64)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v107);
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_37373584(
          (CommonUI_o *)Instance,
          v41,
          v102,
          v103,
          v104,
          v106,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          BalanceConfig_TypeInfo->static_fields->PushSvtDialogFontSize,
          15.0,
          700,
          0,
          480,
          -162.5,
          0,
          0,
          240,
          0,
          0);
        return;
      }
      goto LABEL_64;
    }
LABEL_66:
    sub_2213CE4(SelfUserGame);
  }
LABEL_14:
  v29 = Method_EventFortificationListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v29 = (_QWORD *)sub_2213A78(Method_EventFortificationListViewManager_OnClickSelectPush__);
  v30 = (System_Reflection_MethodBase_o *)sub_2213A44(v29, v29[4]);
  OverwriteAssetSoundName__PlaySystemSe(v30, 8, 0, 0);
  EventFortificationListViewManager__PushRequest(this, *v18, v31);
}


void EventFortificationListViewManager__OnClickSortAscendingOrder(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_596A64C & 1) == 0 )
  {
    sub_2213A60(&Method_EventFortificationListViewManager_OnClickSortAscendingOrder__);
    byte_596A64C = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventFortificationListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void EventFortificationListViewManager__OnClickSortButton(
        EventFortificationListViewManager_o *this,
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

  if ( (byte_596A64A & 1) == 0 )
  {
    sub_2213A60(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_EventFortificationListViewManager_EndSelectSortKind__);
    sub_2213A60(&Method_EventFortificationListViewManager_OnClickSortButton__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A64A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventFortificationListViewManager_OnClickSortButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 3, sort, 0, v8, 0);
  }
}


void EventFortificationListViewManager__OnLongPushListView(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 naturalAligment; // x10
  EventFortificationListViewItem_o *Item; // x21
  CommonUI_o *v11; // x20
  UserServantEntity_o *userServantEntity; // x21
  ServantStatusDialog_EndDelegate_o *v13; // x22

  if ( (byte_596A642 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_EventFortificationListViewManager_EndShowServant__);
    sub_2213A60(&Method_EventFortificationListViewManager_OnLongPushListView__);
    sub_2213A60(&EventFortificationListViewObject_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A642 = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v5 = Method_EventFortificationListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_EventFortificationListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
    if ( !obj
      || (naturalAligment = EventFortificationListViewObject_TypeInfo->_2.naturalAligment,
          obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventFortificationListViewObject_TypeInfo
      || (Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)obj, v7),
          scrollView = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          !Item)
      || (v11 = (CommonUI_o *)scrollView,
          userServantEntity = Item->fields.userServantEntity,
          v13 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v13,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_EndShowServant__,
            0),
          !v11) )
    {
LABEL_13:
      sub_2213CDC(scrollView, v7);
    }
    CommonUI__OpenServantStatusDialog_37383588(v11, 0, userServantEntity, v13, 0);
  }
}


void EventFortificationListViewManager__OnMoveEnd(EventFortificationListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  UnityEngine_Behaviour_o *v9; // x0
  struct System_Action_o *CallbackFunc2; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596A63E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A63E = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
        if ( !v9
          || (UnityEngine_Behaviour__set_enabled(v9, 1, 0),
              (v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0)
          || (((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, Il2CppClass *))v9->klass[1]._1.element_class)(
                v9,
                1,
                v9->klass[1]._1.castClass),
              (v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0) )
        {
          sub_2213CDC(v9, v8);
        }
        UIScrollView__UpdatePosition((UIScrollView_o *)v9, 0);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.CallbackFunc2, 0, v11, v12, v13, v14, v15, v16);
        if ( CallbackFunc2 )
          ((void (__fastcall *)(intptr_t, intptr_t))CallbackFunc2->fields.invoke_impl)(
            CallbackFunc2->fields.method_code,
            CallbackFunc2->fields.method);
      }
    }
  }
}


void EventFortificationListViewManager__PushRequest(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_596A658 & 1) == 0 )
  {
    sub_2213A60(&Method_EventFortificationListViewManager_EndPushRequest__);
    sub_2213A60(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A658 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_EndPushRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_2213CDC(Instance, v6);
  CardFavoriteRequest__beginRequestPush((CardFavoriteRequest_o *)Instance, selectItem->fields.userServantEntity, 0);
}


void EventFortificationListViewManager__RefreshListDisp(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w22
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21

  if ( (byte_596A635 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
    byte_596A635 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EventFortificationListViewManager__get_ObjectList(
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
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))ObjectList->klass->vtable._9_unknown.methodPtr)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._9_unknown.method);
      if ( size == ++v7 )
        return;
    }
LABEL_9:
    sub_2213CDC(ObjectList, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventFortificationListViewManager__RequestListObject(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventFortificationListViewObject__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v13; // x24
  const MethodInfo *v14; // x3
  System_String_o *v15; // x1

  if ( (byte_596A63D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventFortificationListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596A63D = 1;
  }
  ObjectList = EventFortificationListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
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
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_EventFortificationListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      EventFortificationListViewObject__Init_38221712((EventFortificationListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_2213CDC(ObjectList, v8);
  }
  v15 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v15, delay, 0);
}


void EventFortificationListViewManager__SetFilterButtonImage(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_596A649 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18255/*"btn_filter_on"*/);
    sub_2213A60(&StringLiteral_18254/*"btn_filter"*/);
    byte_596A649 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_2213CDC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_18254/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_18255/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void EventFortificationListViewManager__SetHeaderMsg(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t modeKind; // w8
  struct UILabel_o *recoveryFatigueInfoMsgLabel; // x19
  __int64 *v6; // x8
  struct UILabel_o *v7; // x20
  System_String_o *TeamName; // x0
  __int64 v9; // x1
  System_String_o *v10; // x21
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  Il2CppObject *v12; // x19
  Il2CppObject *Name; // x0
  System_String_o *v14; // x1
  UILabel_o *v15; // x0

  if ( (byte_596A637 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_2213A60(&StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_2213A60(&StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_2213A60(&StringLiteral_6780/*"FORTIFICATION_GUIDE_HELP"*/);
    byte_596A637 = 1;
  }
  modeKind = this->fields.modeKind;
  if ( modeKind > 1 )
  {
    if ( modeKind == 2 )
    {
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
      v6 = &StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
    }
    else
    {
      if ( modeKind != 3 )
        return;
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
      v6 = &StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
    }
LABEL_24:
    TeamName = LocalizationManager__Get((System_String_o *)*v6, 0);
    if ( recoveryFatigueInfoMsgLabel )
    {
      v14 = TeamName;
      v15 = recoveryFatigueInfoMsgLabel;
      goto LABEL_26;
    }
    goto LABEL_27;
  }
  if ( !modeKind )
  {
    v7 = this->fields.recoveryFatigueInfoMsgLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    TeamName = LocalizationManager__Get((System_String_o *)StringLiteral_6780/*"FORTIFICATION_GUIDE_HELP"*/, 0);
    if ( this->fields.targetFortificationWorkItem )
    {
      v10 = TeamName;
      TeamName = EventFortificationWorkItem__get_TeamName(this->fields.targetFortificationWorkItem, 0);
      targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
      if ( targetFortificationWorkItem )
      {
        v12 = (Il2CppObject *)TeamName;
        Name = (Il2CppObject *)EventFortificationWorkItem__get_Name(targetFortificationWorkItem, 0);
        TeamName = System_String__Format_75697880(v10, v12, Name, 0);
        if ( v7 )
        {
          v14 = TeamName;
          v15 = v7;
LABEL_26:
          UILabel__set_text(v15, v14, 0);
          return;
        }
      }
    }
LABEL_27:
    sub_2213CDC(TeamName, v9);
  }
  if ( modeKind == 1 )
  {
    recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v6 = &StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
    goto LABEL_24;
  }
}


void EventFortificationListViewManager__SetMode(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        EventFortificationListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.Callback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.Callback,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  EventFortificationListViewManager__SetMode_38221188(this, mode, v10);
}


void EventFortificationListViewManager__SetMode_38221188(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 1 )
  {
    if ( mode == 1 )
      v6 = 2;
    else
      v6 = 3;
    EventFortificationListViewManager__RequestListObject(this, v6, 0.0, v5);
  }
}


void EventFortificationListViewManager__SetMode_38221296(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.CallbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.CallbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  EventFortificationListViewManager__SetMode_38221188(this, mode, v10);
}


void EventFortificationListViewManager__SetObjectItem(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596A63C & 1) == 0 )
  {
    sub_2213A60(&EventFortificationListViewObject_TypeInfo);
    byte_596A63C = 1;
  }
  if ( obj
    && (naturalAligment = EventFortificationListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == EventFortificationListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  EventFortificationListViewObject__Init_38221064(
    (EventFortificationListViewObject_o *)v7,
    v8,
    (const MethodInfo *)item);
}


void EventFortificationListViewManager__SetSortButtonImage(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v10; // x8
  int32_t sortKind; // w9
  System_String_o **v12; // x8
  struct ListViewSort_o *v13; // x8
  System_String_o **v14; // x9
  System_String_o **v15; // x10
  System_String_o **v16; // x8
  System_String_o **v17; // x8

  if ( (byte_596A64D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18395/*"btn_txt_up"*/);
    sub_2213A60(&StringLiteral_18344/*"btn_txt_new"*/);
    sub_2213A60(&StringLiteral_18334/*"btn_txt_down"*/);
    sub_2213A60(&StringLiteral_18352/*"btn_txt_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_596A64D = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_35;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_35;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_35;
    ListViewSort__SetupSortLabelLayout(sort, this->fields.sortKindLabel, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v10 = this->fields.sort;
    if ( v10 )
    {
      sortKind = v10->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v12 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18352/*"btn_txt_old"*/ : &StringLiteral_18344/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v12, 0);
          v13 = this->fields.sort;
          if ( v13 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v14 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
              v15 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
LABEL_31:
              if ( v13->fields.isAscendingOrder )
                v17 = v14;
              else
                v17 = v15;
              UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
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
          v16 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18395/*"btn_txt_up"*/ : &StringLiteral_18334/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0);
          v13 = this->fields.sort;
          if ( v13 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v14 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
              v15 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_35:
    sub_2213CDC(sort, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventFortificationListViewManager__SetStatusKind(
        EventFortificationListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v6; // x8
  __int64 *v7; // x8
  __int64 *v8; // x8
  __int64 *v9; // x8
  const MethodInfo *v10; // x1

  if ( (byte_596A636 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18431/*"button_push_reg"*/);
    sub_2213A60(&StringLiteral_18432/*"button_push_unreg"*/);
    sub_2213A60(&StringLiteral_18417/*"button_allchoice_reg"*/);
    sub_2213A60(&StringLiteral_18420/*"button_alllock_unreg"*/);
    sub_2213A60(&StringLiteral_18433/*"button_select_reg"*/);
    sub_2213A60(&StringLiteral_18434/*"button_select_unreg"*/);
    sub_2213A60(&StringLiteral_18419/*"button_alllock_reg"*/);
    sub_2213A60(&StringLiteral_18418/*"button_allchoice_unreg"*/);
    byte_596A636 = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v6 = &StringLiteral_18433/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_18434/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v6, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v7 = &StringLiteral_18420/*"button_alllock_unreg"*/;
  if ( modeKind == 1 )
    v7 = &StringLiteral_18419/*"button_alllock_reg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v7, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v8 = &StringLiteral_18418/*"button_allchoice_unreg"*/;
  if ( modeKind == 2 )
    v8 = &StringLiteral_18417/*"button_allchoice_reg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v8, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 3, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushSprite;
  if ( !statusTabButton )
    goto LABEL_28;
  v9 = &StringLiteral_18432/*"button_push_unreg"*/;
  if ( modeKind == 3 )
    v9 = &StringLiteral_18431/*"button_push_reg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_2213CDC(statusTabButton, *(_QWORD *)&modeKind);
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  EventFortificationListViewManager__SetHeaderMsg(this, v10);
}


void EventFortificationListViewManager__StatusRequest(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Request_object; // x0
  __int64 v17; // x1
  System_Int64_array *v18; // x1
  System_Int64_array *v19; // x2
  bool v20; // w4
  bool v21; // w5
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  NetworkManager_ResultCallbackFunc_o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  System_Int64_array *v31; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596A654 & 1) == 0 )
  {
    sub_2213A60(&Method_EventFortificationListViewManager_EndStatusSync__);
    sub_2213A60(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596A654 = 1;
  }
  modeKind = this->fields.modeKind;
  unlockList = 0;
  lockList = 0;
  v31 = 0;
  choiceList = 0;
  if ( modeKind == 2 )
  {
    if ( EventFortificationListViewManager__GetSwapChoiceList(this, &choiceList, &v31, v3) )
    {
      this->fields.requestCallback = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v28 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29, v30);
      Request_object = NetworkManager__getRequest_object_(
                         v28,
                         (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v19 = v31;
        v18 = choiceList;
        v20 = 0;
        v21 = 1;
        goto LABEL_15;
      }
LABEL_19:
      sub_2213CDC(Request_object, v17);
    }
  }
  else if ( modeKind == 1 && EventFortificationListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
      (int32_t)callback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndStatusSync__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v15);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v19 = unlockList;
      v18 = lockList;
      v20 = 1;
      v21 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v18, v19, 0, v20, v21, 0);
      return;
    }
    goto LABEL_19;
  }
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}


void EventFortificationListViewManager__add_Callback(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *Callback; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EventFortificationListViewManager_o *v11; // x0
  EventFortificationListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596A62C & 1) == 0 )
  {
    sub_2213A60(&EventFortificationListViewManager_CallbackFunc_TypeInfo);
    byte_596A62C = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(Callback, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (EventFortificationListViewManager_CallbackFunc_c *)v6->klass != EventFortificationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.Callback, v6, Callback);
    v10 = v9 == (_QWORD)Callback;
    Callback = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventFortificationListViewManager_o *)sub_221405C(
                                                 v6,
                                                 EventFortificationListViewManager_CallbackFunc_TypeInfo,
                                                 v7,
                                                 v8);
  EventFortificationListViewManager__remove_Callback(v11, v12, v13);
}


void EventFortificationListViewManager__add_CallbackFunc2(
        EventFortificationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *CallbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EventFortificationListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596A62E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A62E = 1;
  }
  CallbackFunc2 = (System_Delegate_o *)this->fields.CallbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(CallbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.CallbackFunc2, v6, CallbackFunc2);
    v10 = v9 == (_QWORD)CallbackFunc2;
    CallbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventFortificationListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  EventFortificationListViewManager__remove_CallbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_EventFortificationListViewObject__o *EventFortificationListViewManager__get_ClippingObjectList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  int size; // w23
  int32_t v8; // w21
  Il2CppObject *v9; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0

  if ( (byte_596A633 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
    byte_596A633 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_19;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !Item )
        break;
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            Item,
                                                            v8,
                                                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !Item )
        break;
      Item = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)Item,
                                                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
      if ( !Item )
        break;
      v9 = (Il2CppObject *)Item;
      Item = (System_Collections_Generic_List_object__o *)EventFortificationListViewObject__GetItem(
                                                            (EventFortificationListViewObject_o *)Item,
                                                            v5);
      if ( !Item )
        break;
      v5 = (const MethodInfo *)Item;
      if ( !LOBYTE(Item[2].fields._items)
        || (Item = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_50835204(
                                                                  (ListViewManager_o *)this,
                                                                  (ListViewItem_o *)Item,
                                                                  0),
            ((unsigned __int8)Item & 1) != 0) )
      {
        if ( !v3 )
          break;
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v18 = v3->fields._size;
        if ( (unsigned int)v18 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v9,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + v18;
          v3->fields._size = v18 + 1;
          v19[4] = (Il2CppClass *)v9;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
        }
      }
      if ( size == ++v8 )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v3;
    }
LABEL_19:
    sub_2213CDC(Item, v5);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v3;
}


int32_t EventFortificationListViewManager__get_ListModeKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_Collections_Generic_List_EventFortificationListViewObject__o *EventFortificationListViewManager__get_ObjectList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *Component_object; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  int size; // w23
  int32_t v8; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Item; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  System_Collections_Generic_List_object__o *v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_596A632 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A632 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Component_object = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !Component_object )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               Component_object,
               v8,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                        (UnityEngine_Object_o *)Item,
                                                                        0,
                                                                        0);
      if ( ((unsigned __int8)Component_object & 1) != 0 )
      {
        if ( !Item )
          break;
        Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          (UnityEngine_GameObject_o *)Item,
                                                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v20 = v3->fields._size;
        v21 = Component_object;
        if ( (unsigned int)v20 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)Component_object,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + v20;
          v3->fields._size = v20 + 1;
          v22[4] = (Il2CppClass *)v21;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
        }
      }
      if ( size == ++v8 )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v3;
    }
LABEL_18:
    sub_2213CDC(Component_object, v5);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v3;
}


void EventFortificationListViewManager__remove_Callback(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *Callback; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EventFortificationListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596A62D & 1) == 0 )
  {
    sub_2213A60(&EventFortificationListViewManager_CallbackFunc_TypeInfo);
    byte_596A62D = 1;
  }
  Callback = (System_Delegate_o *)this->fields.Callback;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(Callback, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (EventFortificationListViewManager_CallbackFunc_c *)v6->klass != EventFortificationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.Callback, v6, Callback);
    v10 = v9 == (_QWORD)Callback;
    Callback = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventFortificationListViewManager_o *)sub_221405C(
                                                 v6,
                                                 EventFortificationListViewManager_CallbackFunc_TypeInfo,
                                                 v7,
                                                 v8);
  EventFortificationListViewManager__add_CallbackFunc2(v11, v12, v13);
}


void EventFortificationListViewManager__remove_CallbackFunc2(
        EventFortificationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *CallbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_596A62F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A62F = 1;
  }
  CallbackFunc2 = (System_Delegate_o *)this->fields.CallbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(CallbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.CallbackFunc2, v6, CallbackFunc2);
    v10 = v9 == (_QWORD)CallbackFunc2;
    CallbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  EventFortificationListViewManager__DeleteContinueData(v11);
}


void EventFortificationListViewManager_CallbackFunc___ctor(
        EventFortificationListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFF6E0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FFF688;
}


System_IAsyncResult_o *EventFortificationListViewManager_CallbackFunc__BeginInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = index;
  if ( (byte_596A65A & 1) == 0 )
  {
    sub_2213A60(&EventFortificationListViewManager_ResultKind_TypeInfo);
    byte_596A65A = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(EventFortificationListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void EventFortificationListViewManager_CallbackFunc__EndInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void EventFortificationListViewManager_CallbackFunc__Invoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    index,
    this->fields.method);
}


void EventFortificationListViewManager_RequestCallbackFunc___ctor(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFF74C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFF704;
}


System_IAsyncResult_o *EventFortificationListViewManager_RequestCallbackFunc__BeginInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void EventFortificationListViewManager_RequestCallbackFunc__EndInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void EventFortificationListViewManager_RequestCallbackFunc__Invoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}


void EventFortificationListViewManager___c__DisplayClass48_0___ctor(
        EventFortificationListViewManager___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventFortificationListViewManager___c__DisplayClass48_0___CreateList_b__0(
        EventFortificationListViewManager___c__DisplayClass48_0_o *this,
        UserServantEntity_o *data,
        const MethodInfo *method)
{
  EventFortificationListViewManager___c__DisplayClass48_0_o *v3; // x19
  ServantClassMaster_o *servantClassMaster; // x20
  EventFortificationWorkItem_o *targetItem; // x8

  if ( !data
    || (v3 = this,
        servantClassMaster = this->fields.servantClassMaster,
        this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)UserServantEntity__getSvtClassId(
                                                                              data,
                                                                              0,
                                                                              0,
                                                                              0),
        !servantClassMaster)
    || (this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)ServantClassMaster__getSupportGroupType(
                                                                              servantClassMaster,
                                                                              (int32_t)this,
                                                                              0),
        (targetItem = v3->fields.targetItem) == 0) )
  {
    sub_2213CDC(this, data);
  }
  return (_DWORD)this == EventFortificationWorkItem__get_ClassId(targetItem, 0);
}


bool EventFortificationListViewManager___c__DisplayClass48_0___CreateList_b__1(
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
  if ( (byte_596A65B & 1) == 0 )
  {
    this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596A65B = 1;
  }
  if ( !data )
    goto LABEL_9;
  v6 = *(_QWORD *)&data->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&data->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, data, method);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                        v10,
                                                                        0);
  targetItem = v4->fields.targetItem;
  if ( !targetItem
    || (userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)targetItem->fields.userServantEntity) == 0 )
  {
LABEL_9:
    sub_2213CDC(this, data);
  }
  return (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(userServantEntity[5], 0);
}


void EventFortificationListViewManager___c__DisplayClass96_0___ctor(
        EventFortificationListViewManager___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventFortificationListViewManager___c__DisplayClass96_0___OnClickSelectPush_b__0(
        EventFortificationListViewManager___c__DisplayClass96_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596A65C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__1__);
    byte_596A65C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_37373868(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void EventFortificationListViewManager___c__DisplayClass96_0___OnClickSelectPush_b__1(
        EventFortificationListViewManager___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  EventFortificationListViewManager__PushRequest(this->fields.__4__this, this->fields.selectItem, v2);
}