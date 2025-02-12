void __fastcall EventFortificationListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v11; // x20
  struct EventFortificationListViewManager_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BCBA81 & 1) == 0 )
  {
    sub_1C1ABD4(&EventFortificationListViewManager_TypeInfo, v1);
    sub_1C1ABD4(&ListViewSort_TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_6369/*"EventServantFatigueList"*/, v9);
    byte_4BCBA81 = 1;
  }
  EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6369/*"EventServantFatigueList"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)EventFortificationListViewManager_TypeInfo->static_fields,
    StringLiteral_6369/*"EventServantFatigueList"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  SORT_SAVE_KEY = EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v11 = (ListViewSort_o *)sub_1C1AE20(ListViewSort_TypeInfo);
  ListViewSort___ctor_41977068(v11, SORT_SAVE_KEY, 3, 0, 0LL);
  static_fields = EventFortificationListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v11;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&static_fields->servantSortStatus,
    (int64_t)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  struct System_Action_bool__UserServantEntity__o *v5; // x8
  Il2CppObject *m_target; // x4
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v8; // x3
  __int64 v9; // x1
  struct UserServantEntity_o *targetInUserServantEntity; // x2
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x8

  v4 = this;
  if ( (byte_4BCBA69 & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, result);
    byte_4BCBA69 = 1;
  }
  if ( !result )
    goto LABEL_11;
  this = (EventFortificationListViewManager_o *)System_String__Equals_63048684(
                                                  result,
                                                  (System_String_o *)StringLiteral_22437/*"ng"*/,
                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)v4->fields.fortificationConfirmDialog;
    if ( this )
    {
      FortificationConfirmDialogComponent__Close(
        (FortificationConfirmDialogComponent_o *)this,
        (const MethodInfo *)result);
      selectAfterCallback = v4->fields.selectAfterCallback;
      if ( selectAfterCallback )
      {
        targetInUserServantEntity = v4->fields.targetInUserServantEntity;
        m_target = selectAfterCallback->fields.m_target;
        original_method_info = selectAfterCallback->fields.original_method_info;
        v8 = *(_QWORD *)&selectAfterCallback->fields.extra_arg;
        v9 = 1LL;
        goto LABEL_10;
      }
    }
LABEL_11:
    sub_1C1AE30(this, result);
  }
  v5 = v4->fields.selectAfterCallback;
  if ( !v5 )
    goto LABEL_11;
  m_target = v5->fields.m_target;
  original_method_info = v5->fields.original_method_info;
  v8 = *(_QWORD *)&v5->fields.extra_arg;
  v9 = 0LL;
  targetInUserServantEntity = 0LL;
LABEL_10:
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, struct UserServantEntity_o *, __int64))m_target)(
    original_method_info,
    v9,
    targetInUserServantEntity,
    v8);
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
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x20
  NetworkManager_ResultCallbackFunc_o *v16; // x21
  System_Object_array *Request_object; // x0
  __int64 v18; // x1
  struct UserServantEntity_o *targetInUserServantEntity; // x9
  struct UserServantEntity_o *targetOutUserServantEntity; // x10
  EventFortificationRequest_o *v21; // x21
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x10
  __int128 v24; // q1
  int32_t fortificationIdx; // w23
  int32_t position; // w24
  __int128 *v27; // x0
  struct EventFortificationWorkItem_o *v28; // x8
  struct EventFortificationDetailEntity_o *v29; // x9
  int32_t v30; // w24
  int32_t v31; // w23
  EnterUserSvtInfo_o *v32; // x0
  Il2CppObject *v33; // x22
  int32_t v34; // w1
  int32_t v35; // w2
  int64_t v36; // x3
  struct EventFortificationDetailEntity_o *v37; // x10
  __int128 v38; // q1
  int64_t v39; // x25
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  int32_t eventId; // w19
  const MethodInfo *v51; // x3
  __int128 v52[2]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v53[2]; // [xsp+20h] [xbp-80h] BYREF
  __int128 v54; // [xsp+40h] [xbp-60h]
  __int128 v55; // [xsp+50h] [xbp-50h]

  if ( (byte_4BCBA68 & 1) == 0 )
  {
    sub_1C1ABD4(&EnterUserSvtInfo_TypeInfo, method);
    sub_1C1ABD4(&Method_EventFortificationListViewManager_CallbackFortificationRequest__, v3);
    sub_1C1ABD4(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v7);
    sub_1C1ABD4(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v8);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_EventFortificationRequest___, v9);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v10);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    byte_4BCBA68 = 1;
  }
  v13 = Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 8, 0, 0LL);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CallbackFortificationRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (System_Object_array *)NetworkManager__getRequest_object_(
                                            v16,
                                            (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  targetInUserServantEntity = this->fields.targetInUserServantEntity;
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v21 = (EventFortificationRequest_o *)Request_object;
  if ( targetInUserServantEntity )
  {
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( targetOutUserServantEntity )
    {
      if ( !targetFortificationWorkItem )
        goto LABEL_32;
      eventFortificationDetailEntity = targetFortificationWorkItem->fields.eventFortificationDetailEntity;
      if ( !eventFortificationDetailEntity )
        goto LABEL_32;
      v24 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
      fortificationIdx = eventFortificationDetailEntity->fields.fortificationIdx;
      position = targetFortificationWorkItem->fields.position;
      v54 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
      v55 = v24;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v27 = v53;
      v53[0] = v54;
      v53[1] = v55;
    }
    else
    {
      if ( !targetFortificationWorkItem )
        goto LABEL_32;
      v37 = targetFortificationWorkItem->fields.eventFortificationDetailEntity;
      if ( !v37 )
        goto LABEL_32;
      v38 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
      fortificationIdx = v37->fields.fortificationIdx;
      position = targetFortificationWorkItem->fields.position;
      v54 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
      v55 = v38;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v27 = v52;
      v52[0] = v54;
      v52[1] = v55;
    }
    v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v27,
            0LL);
    v32 = (EnterUserSvtInfo_o *)sub_1C1AE20(EnterUserSvtInfo_TypeInfo);
    v33 = (Il2CppObject *)v32;
    v34 = fortificationIdx;
    v35 = position;
    v36 = v39;
  }
  else
  {
    if ( !targetOutUserServantEntity )
      return;
    v28 = this->fields.targetFortificationWorkItem;
    if ( !v28 || (v29 = v28->fields.eventFortificationDetailEntity) == 0LL )
LABEL_32:
      sub_1C1AE30(Request_object, v18);
    v30 = v28->fields.position;
    v31 = v29->fields.fortificationIdx;
    v32 = (EnterUserSvtInfo_o *)sub_1C1AE20(EnterUserSvtInfo_TypeInfo);
    v33 = (Il2CppObject *)v32;
    v34 = v31;
    v35 = v30;
    v36 = 0LL;
  }
  EnterUserSvtInfo___ctor(v32, v34, v35, v36, 0LL);
  if ( !v15 )
    goto LABEL_32;
  items = v15->fields._items;
  v47 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v15->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      v33,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v49[4] = (Il2CppClass *)v33;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v49 + 4), (int64_t)v33, v40, v41, v42, v43, v44, v45);
  }
  eventId = this->fields.eventId;
  Request_object = System_Collections_Generic_List_object___ToArray(
                     v15,
                     (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v21 )
    goto LABEL_32;
  EventFortificationRequest__beginRequest(v21, eventId, (EnterUserSvtInfo_array *)Request_object, v51);
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
  __int64 v27; // x28
  __int64 sort; // x0
  const MethodInfo *v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  EventFortificationListViewManager_c *v42; // x0
  struct ListViewSort_o *servantSortStatus; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct EventFortificationWorkItem_o **p_targetFortificationWorkItem; // x24
  struct EventFortificationWorkItem_o *v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct ListViewSort_o *v82; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  System_Int32_array *v86; // x23
  Il2CppObject *MasterData_object; // x25
  Il2CppObject *v88; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v96; // q0
  int64_t v97; // x23
  struct EventFortificationWorkItem_o *v98; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x24
  UserServantEntity_o *v100; // x27
  int32_t v101; // w21
  EventFortificationListViewItem_o *v102; // x25
  System_Func_object__bool__o *v103; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v104; // x0
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  __int64 v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  __int64 v114; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_Func_object__bool__o *v116; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x0
  __int64 v118; // x29
  __int64 v119; // x28
  UserServantEntity_o *v120; // x25
  int32_t v121; // w26
  EventFortificationWorkItem_o *v122; // x27
  EventFortificationListViewItem_o *v123; // x21
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  __int64 v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  __int64 v133; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v135; // x2
  const MethodInfo *v136; // x1
  EventUpValSetupInfo_o *setupInfo; // [xsp+0h] [xbp-D0h]
  struct EventFortificationWorkItem_o **v138; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v139; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v140[2]; // [xsp+30h] [xbp-A0h] BYREF

  if ( (byte_4BCBA5C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___, v12);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v13);
    sub_1C1ABD4(&EventFortificationListViewItem_TypeInfo, v14);
    sub_1C1ABD4(&EventFortificationListViewManager_TypeInfo, v15);
    sub_1C1ABD4(&EventUpValSetupInfo_TypeInfo, v16);
    sub_1C1ABD4(&System_Func_UserServantEntity__bool__TypeInfo, v17);
    sub_1C1ABD4(&int___TypeInfo, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v19);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v20);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1C1ABD4(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__, v23);
    sub_1C1ABD4(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__, v24);
    sub_1C1ABD4(&EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo, v25);
    sub_1C1ABD4(&StringLiteral_11980/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v26);
    byte_4BCBA5C = 1;
  }
  memset(&v140[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v27 = sub_1C1AE20(EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_62;
  *(_QWORD *)(v27 + 16) = targetItem;
  v138 = (struct EventFortificationWorkItem_o **)(v27 + 16);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)targetItem, v30, v31, v32, v33, v34, v35);
  v42 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v42 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v42->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.sort,
    (int64_t)servantSortStatus,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)sort, 0LL, 1, 0LL, 80, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnSprite_38338644((TitleInfoControl_o *)sort, 1, 0, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.targetInUserServantEntity, 0LL, v44, v45, v46, v47, v48, v49);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.targetOutUserServantEntity, 0LL, v50, v51, v52, v53, v54, v55);
  this->fields.eventId = eventId;
  this->fields.fortificationConfirmDialog = fortificationConfirmDialog;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.fortificationConfirmDialog,
    (int64_t)fortificationConfirmDialog,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  p_targetFortificationWorkItem = &this->fields.targetFortificationWorkItem;
  v63 = *v138;
  this->fields.targetFortificationWorkItem = *v138;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.targetFortificationWorkItem,
    (int64_t)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  this->fields.selectAfterCallback = afterCallback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.selectAfterCallback,
    (int64_t)afterCallback,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v82 = this->fields.sort;
  this->fields.modeKind = 0;
  if ( !v82 )
    goto LABEL_62;
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
      goto LABEL_19;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)normalSizeSeed, v76, v77, v78, v79, v80, v81);
LABEL_19:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_62;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = sub_1C1AC7C(int___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_62;
  v86 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
LABEL_56:
    sub_1C1AE38(sort, v29);
  *(_DWORD *)(sort + 32) = eventId;
  setupInfo = (EventUpValSetupInfo_o *)sub_1C1AE20(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_40122736(setupInfo, v86, 1, 0, 0, 0LL);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)sort,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  v88 = DataManager__GetMasterData_object_(
          (DataManager_o *)sort,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  *(_QWORD *)(v27 + 24) = v88;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v27 + 24), (int64_t)v88, v89, v90, v91, v92, v93, v94);
  if ( !*p_targetFortificationWorkItem )
    goto LABEL_62;
  userServantEntity = (*p_targetFortificationWorkItem)->fields.userServantEntity;
  if ( userServantEntity )
  {
    v96 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v140[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v140[1].fields.fakeValue = v96;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v140, -1LL, 0LL);
    v140[1] = v140[0];
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v139 = v140[1];
  sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v139, 0LL);
  if ( !MasterData_object )
    goto LABEL_62;
  v97 = sort;
  sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)MasterData_object, 0LL);
  v98 = *v138;
  if ( !*v138 )
    goto LABEL_62;
  v99 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  if ( !v98->fields.isSvtDataSetInMaster )
  {
    eventFortificationDetailEntity = v98->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      goto LABEL_62;
    if ( eventFortificationDetailEntity->fields.classId )
    {
      v116 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v116,
        (Il2CppObject *)v27,
        Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__,
        0LL);
      v117 = System_Linq_Enumerable__Where_object_(
               v99,
               (System_Func_TSource__bool__o *)v116,
               (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      sort = (__int64)System_Linq_Enumerable__ToArray_object_(
                        v117,
                        (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
      v99 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
    }
LABEL_46:
    if ( !v99 )
      goto LABEL_62;
    goto LABEL_47;
  }
  v100 = v98->fields.userServantEntity;
  v101 = this->fields.eventId;
  v102 = (EventFortificationListViewItem_o *)sub_1C1AE20(EventFortificationListViewItem_TypeInfo);
  EventFortificationListViewItem___ctor(v102, v100, v101, v97, setupInfo, v98, 0LL);
  v103 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v103,
    (Il2CppObject *)v27,
    Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__,
    0LL);
  v104 = System_Linq_Enumerable__Where_object_(
           v99,
           (System_Func_TSource__bool__o *)v103,
           (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  sort = (__int64)System_Linq_Enumerable__ToArray_object_(
                    v104,
                    (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
  if ( !*(_QWORD *)(v27 + 16) )
    goto LABEL_62;
  v99 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  sort = EventFortificationWorkItem__get_IsNpc(*(EventFortificationWorkItem_o **)(v27 + 16), v29);
  if ( (sort & 1) == 0 )
    goto LABEL_46;
  sort = (__int64)this->fields.itemList;
  if ( !sort )
    goto LABEL_62;
  v111 = *(_QWORD *)(sort + 16);
  v112 = Method_System_Collections_Generic_List_ListViewItem__Add__;
  ++*(_DWORD *)(sort + 28);
  if ( !v111 )
    goto LABEL_62;
  v113 = *(int *)(sort + 24);
  if ( (unsigned int)v113 >= *(_DWORD *)(v111 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)sort,
      (Il2CppObject *)v102,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
    if ( !v99 )
      goto LABEL_62;
  }
  else
  {
    v114 = v111 + 8 * v113;
    *(_DWORD *)(sort + 24) = v113 + 1;
    *(_QWORD *)(v114 + 32) = v102;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v114 + 32), (int64_t)v102, v105, v106, v107, v108, v109, v110);
    if ( !v99 )
      goto LABEL_62;
  }
LABEL_47:
  if ( (int)v99[1].monitor >= 1 )
  {
    v118 = 0LL;
    v119 = (unsigned int)v99[1].monitor - 1LL;
    while ( 1 )
    {
      v120 = (UserServantEntity_o *)*((_QWORD *)&v99[2].klass + v118);
      v121 = this->fields.eventId;
      v122 = *v138;
      v123 = (EventFortificationListViewItem_o *)sub_1C1AE20(EventFortificationListViewItem_TypeInfo);
      EventFortificationListViewItem___ctor(v123, v120, v121, v97, setupInfo, v122, 0LL);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v130 = *(_QWORD *)(sort + 16);
      v131 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v130 )
        break;
      v132 = *(int *)(sort + 24);
      if ( (unsigned int)v132 >= *(_DWORD *)(v130 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v123,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
      }
      else
      {
        v133 = v130 + 8 * v132;
        *(_DWORD *)(sort + 24) = v132 + 1;
        *(_QWORD *)(v133 + 32) = v123;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v133 + 32), (int64_t)v123, v124, v125, v126, v127, v128, v129);
      }
      if ( v119 == v118 )
        goto LABEL_57;
      if ( ++v118 >= (unsigned __int64)LODWORD(v99[1].monitor) )
        goto LABEL_56;
    }
LABEL_62:
    sub_1C1AE30(sort, v29);
  }
LABEL_57:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11980/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_62;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EventFortificationListViewManager__SetStatusKind(this, this->fields.modeKind, v135);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventFortificationListViewManager__SetFilterButtonImage(this, v136);
}


void __fastcall EventFortificationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventFortificationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4BCBA58 & 1) == 0 )
  {
    sub_1C1ABD4(&EventFortificationListViewManager_TypeInfo, v1);
    byte_4BCBA58 = 1;
  }
  v2 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v2 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1C1AE30(0LL, v1);
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
    sub_1C1AE30(0LL, v3);
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
  EventFortificationListViewManager__SetMode_47007052(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_47007052(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_47007052(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_47007052(this, 2, v5);
}


void __fastcall EventFortificationListViewManager__EndPushRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__ModifyList(this, 0, method);
  EventFortificationListViewManager__SetMode_47007052(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__EndSelectFilterKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4BCBA6F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BCBA6F = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EventFortificationListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v7);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__EndSelectSortKind(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BCBA73 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BCBA73 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__EndShowServant(
        EventFortificationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4BCBA6C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BCBA6C = 1;
  }
  EventFortificationListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventFortificationListViewManager__ModifyList(this, 0, v4);
  EventFortificationListViewManager__SetMode_47007052(this, 2, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall EventFortificationListViewManager__EndStatusSync(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventFortificationListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  PartyOrganizationUtility_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (PartyOrganizationUtility_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0LL;
    sub_1C1AB78(p_requestCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))requestCallback->fields.m_target)(
      requestCallback->fields.original_method_info,
      1LL,
      *(_QWORD *)&requestCallback->fields.extra_arg);
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w25
  int32_t v10; // w22
  int64_t v11; // x21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__c *klass; // x8
  Il2CppClass *parent; // x23
  Il2CppClass *declaringType; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4BCBA6D & 1) == 0 )
  {
    sub_1C1ABD4(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4BCBA6D = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v10 = 0;
    v11 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
        break;
      if ( (EventFortificationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewItem_TypeInfo )
        break;
      klass = itemList[3].klass;
      if ( !klass )
        break;
      declaringType = klass->_1.declaringType;
      parent = klass->_1.parent;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v17.fields.currentCryptoKey = declaringType;
      *(_QWORD *)&v17.fields.fakeValue = parent;
      ++v10;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v17, 0LL) == svtId )
        ++v11;
      if ( size == v10 )
        return v11;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1C1AE30(itemList, *(_QWORD *)&svtId);
  }
  return 0LL;
}


bool __fastcall EventFortificationListViewManager__GetFocusItemIndex(
        EventFortificationListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  __int64 v8; // x1
  int32_t v9; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4BCBA6B & 1) == 0 )
  {
    sub_1C1ABD4(&EventFortificationListViewItem_TypeInfo, index);
    this = (EventFortificationListViewManager_o *)sub_1C1ABD4(
                                                    &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                    v8);
    byte_4BCBA6B = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1C1AE30(this, index);
    v9 = 0;
    while ( 1 )
    {
      this = (EventFortificationListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)list,
                                                      v9,
                                                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_14;
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventFortificationListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_14;
      }
      if ( EventFortificationListViewItem__get_IsBaseSvt((EventFortificationListViewItem_o *)this, 0LL) )
        break;
      if ( sum == ++v9 )
        return 1;
    }
    *index = v9;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
EventFortificationListViewItem_o *__fastcall EventFortificationListViewManager__GetItem(
        EventFortificationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventFortificationListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4BCBA63 & 1) == 0 )
  {
    sub_1C1ABD4(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4BCBA63 = 1;
  }
  result = (EventFortificationListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventFortificationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (EventFortificationListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewItem_TypeInfo )
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


bool __fastcall EventFortificationListViewManager__GetSwapChoiceList(
        EventFortificationListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t itemList; // x0
  int v25; // w25
  int32_t v26; // w24
  __int64 methodPtr_low; // x10
  __int64 v28; // x8
  __int128 v29; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  __int128 v34; // q0
  struct System_Int64_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  System_Collections_Generic_List_long__o *v39; // x0
  int v40; // w21
  System_Int64_array *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Int64_array *v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Int64_array **v55; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-80h]

  if ( (byte_4BCBA77 & 1) == 0 )
  {
    sub_1C1ABD4(&EventFortificationListViewItem_TypeInfo, choiceList);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1C1ABD4(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4BCBA77 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v25 = *(_DWORD *)(itemList + 24);
  if ( v25 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v26,
                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v28 = *(_QWORD *)(itemList + 120);
      if ( v28 && *(_BYTE *)(itemList + 193) )
      {
        if ( *(_BYTE *)(itemList + 162) )
        {
          v29 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v58 = v59;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v58, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v31 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v38 = v31[4];
            v39 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v39,
              v17,
              *(const MethodInfo_36248C4 **)(*(_QWORD *)(v38 + 192) + 112LL));
            goto LABEL_28;
          }
          v33 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v34 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v57 = v59;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v57, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v35 = v15->fields._items;
          v36 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v35 )
            goto LABEL_37;
          v37 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v37 >= v35->max_length )
          {
            v38 = v36[4];
            v39 = v15;
            goto LABEL_27;
          }
          v33 = &v35->obj.klass + v37;
          v15->fields._size = v37 + 1;
        }
        v33[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v25 == ++v26 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1C1AE30(itemList, v17);
  v40 = v16->fields._size + v15->fields._size;
  if ( v40 < 1 )
  {
    *choiceList = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)choiceList, 0LL, v18, v19, v20, v21, v22, v23);
    v55 = unchoiceList;
    v48 = 0LL;
    *unchoiceList = 0LL;
  }
  else
  {
    v41 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v41;
    sub_1C1AB78((PartyOrganizationUtility_o *)choiceList, (int64_t)v41, v42, v43, v44, v45, v46, v47);
    v48 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v48;
    v55 = unchoiceList;
  }
  sub_1C1AB78((PartyOrganizationUtility_o *)v55, (int64_t)v48, v49, v50, v51, v52, v53, v54);
  return v40 > 0;
}


bool __fastcall EventFortificationListViewManager__GetSwapLockList(
        EventFortificationListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t itemList; // x0
  int v25; // w25
  int32_t v26; // w24
  __int64 methodPtr_low; // x10
  __int64 v28; // x8
  __int128 v29; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  __int128 v34; // q0
  struct System_Int64_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  System_Collections_Generic_List_long__o *v39; // x0
  int v40; // w21
  System_Int64_array *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Int64_array *v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Int64_array **v55; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-80h]

  if ( (byte_4BCBA76 & 1) == 0 )
  {
    sub_1C1ABD4(&EventFortificationListViewItem_TypeInfo, lockList);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1C1ABD4(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4BCBA76 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v25 = *(_DWORD *)(itemList + 24);
  if ( v25 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v26,
                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v28 = *(_QWORD *)(itemList + 120);
      if ( v28 && *(_BYTE *)(itemList + 192) )
      {
        if ( *(_BYTE *)(itemList + 161) )
        {
          v29 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v58 = v59;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v58, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v31 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v38 = v31[4];
            v39 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v39,
              v17,
              *(const MethodInfo_36248C4 **)(*(_QWORD *)(v38 + 192) + 112LL));
            goto LABEL_28;
          }
          v33 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v34 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v57 = v59;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v57, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v35 = v15->fields._items;
          v36 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v35 )
            goto LABEL_37;
          v37 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v37 >= v35->max_length )
          {
            v38 = v36[4];
            v39 = v15;
            goto LABEL_27;
          }
          v33 = &v35->obj.klass + v37;
          v15->fields._size = v37 + 1;
        }
        v33[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v25 == ++v26 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1C1AE30(itemList, v17);
  v40 = v16->fields._size + v15->fields._size;
  if ( v40 < 1 )
  {
    *lockList = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)lockList, 0LL, v18, v19, v20, v21, v22, v23);
    v55 = unlockList;
    v48 = 0LL;
    *unlockList = 0LL;
  }
  else
  {
    v41 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v41;
    sub_1C1AB78((PartyOrganizationUtility_o *)lockList, (int64_t)v41, v42, v43, v44, v45, v46, v47);
    v48 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v48;
    v55 = unlockList;
  }
  sub_1C1AB78((PartyOrganizationUtility_o *)v55, (int64_t)v48, v49, v50, v51, v52, v53, v54);
  return v40 > 0;
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

  if ( (byte_4BCBA59 & 1) == 0 )
  {
    sub_1C1ABD4(&EventFortificationListViewManager_TypeInfo, v1);
    byte_4BCBA59 = 1;
  }
  v2 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo);
    v2 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v2->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1C1AE30(0LL, v1);
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
  Il2CppObject *Entity; // x19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x11
  EventFortificationListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v22; // q0
  int64_t v23; // x0
  Il2CppObject v24; // q0
  UnityEngine_Object_o *viewObject; // x21
  __int64 v26; // x1
  struct ListViewObject_o *v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4BCBA60 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1C1ABD4(&EventFortificationListViewItem_TypeInfo, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v11);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4BCBA60 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_37;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_37;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v30,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v31.fields._list = *(_OWORD *)&v30.fields.currentCryptoKey;
      v31.fields._current = (Il2CppObject *)v30.fields.fakeValue;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v31,
                (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v17 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v31,
            (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v31.fields._current
          && (methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v31.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventFortificationListViewItem_c *)v31.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v31.fields._current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_1C1AE30(v17, v18);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_1C1AE30(v17, v18);
            v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v30.fields.fakeValue = v22;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v29 = v30;
            v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v29, 0LL);
            v24 = Entity[2];
            *(Il2CppObject *)&v28.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v28.fields.fakeValue = v24;
            if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v28, 0LL) )
              EventFortificationListViewItem__ModifyItem(current, (UserServantEntity_o *)Entity, 0LL);
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
          sub_1C1AE30(v17, v18);
LABEL_26:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v27 = current->fields.viewObject;
          if ( !v27 )
            sub_1C1AE30(0LL, v26);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v27->klass->vtable._5_SetItem.method)(
            v27,
            current,
            v27->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_37:
    sub_1C1AE30(Instance, v14);
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
  __int64 v12; // x25
  int64_t v13; // x20
  int size; // w28
  unsigned int v15; // w26
  __int64 v16; // x8
  __int128 v17; // q0
  int64_t v18; // x22
  int32_t v19; // w23
  int64_t v20; // x24
  __int64 methodPtr_low; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  __int64 v24; // x8
  __int128 v25; // q0
  int64_t v26; // x0
  const MethodInfo *v27; // x4
  bool isIconSizeChangea; // [xsp+Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+70h] [xbp-80h]

  if ( (byte_4BCBA62 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_1C1ABD4(&EventFortificationListViewItem_TypeInfo, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BCBA62 = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_33;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_33;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
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
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
      *(_OWORD *)&v32.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v31 = v32;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v31, 0LL);
      if ( size >= 1 )
      {
        v18 = sort;
        v19 = 0;
        while ( 1 )
        {
          sort = (int64_t)this->fields.itemList;
          if ( !sort )
            goto LABEL_33;
          sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)sort,
                            v19,
                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !sort )
            goto LABEL_33;
          v20 = sort;
          methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)methodPtr_low
            || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
          {
            goto LABEL_33;
          }
          v22 = *(_QWORD *)(sort + 120);
          if ( v22 )
          {
            v23 = *(_OWORD *)(v22 + 32);
            *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
            *(_OWORD *)&v32.fields.fakeValue = v23;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v30 = v32;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v30, 0LL);
            if ( sort == v18 )
              break;
          }
          if ( size == ++v19 )
            goto LABEL_29;
        }
        v24 = *(_QWORD *)(v20 + 120);
        if ( !v24 )
          break;
        v25 = *(_OWORD *)(v24 + 32);
        *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
        *(_OWORD *)&v32.fields.fakeValue = v25;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v29 = v32;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v29, 0LL);
        EventFortificationListViewManager__ModifyLockItem(this, v26, 1, isIconSizeChangea, v27);
      }
LABEL_29:
      if ( ++v15 == (_DWORD)v12 )
        return;
      if ( v15 >= *(_DWORD *)(v13 + 24) )
        sub_1C1AE38(sort, isIconSizeChange);
    }
LABEL_33:
    sub_1C1AE30(sort, isIconSizeChange);
  }
}


void __fastcall EventFortificationListViewManager__ModifyLockItem(
        EventFortificationListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v21; // w24
  int64_t v22; // x0
  __int64 v23; // x1
  __int64 methodPtr_low; // x11
  EventFortificationListViewItem_o *current; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v27; // q0
  int64_t v28; // x0
  Il2CppObject v29; // q0
  int64_t v30; // x23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v32; // x1
  struct ListViewObject_o *v33; // x0
  __int64 v34; // x1
  ListViewObject_o *v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4BCBA61 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12);
    sub_1C1ABD4(&EventFortificationListViewItem_TypeInfo, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v15);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4BCBA61 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_45;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_45;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v38,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v39.fields._list = *(_OWORD *)&v38.fields.currentCryptoKey;
      v39.fields._current = (Il2CppObject *)v38.fields.fakeValue;
      v21 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v39,
                (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v22 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v39,
            (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v39.fields._current
          && (methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v39.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventFortificationListViewItem_c *)v39.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v39.fields._current;
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
          sub_1C1AE30(v22, v23);
        userServantEntity = current->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1C1AE30(v22, v23);
        v27 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v38.fields.fakeValue = v27;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v37 = v38;
        v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v37, 0LL);
        v29 = Entity[2];
        v30 = v28;
        *(Il2CppObject *)&v36.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v36.fields.fakeValue = v29;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v36, 0LL);
        if ( v30 == v22 )
          EventFortificationListViewItem__SetUserServantEntity(current, (UserServantEntity_o *)Entity, 0LL);
LABEL_26:
        if ( v21 )
        {
          if ( !current )
            sub_1C1AE30(v22, v23);
          EventFortificationListViewItem__ModifyLockItem(current, 0LL);
          EventFortificationListViewItem__ModifyChoiceItem(current, 0LL);
          EventFortificationListViewItem__ModifyPushItem(current, 0LL);
        }
        else if ( !current )
        {
          sub_1C1AE30(v22, v23);
        }
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v33 = current->fields.viewObject;
          if ( !v33 )
            sub_1C1AE30(0LL, v32);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v33->klass->vtable._5_SetItem.method)(
            v33,
            current,
            v33->klass->vtable._6_SetItem.methodPtr);
          if ( isIconSizeChange )
          {
            v35 = current->fields.viewObject;
            if ( !v35 )
              sub_1C1AE30(0LL, v34);
            ListViewObject__SetItemSeed(v35, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_45:
    sub_1C1AE30(Instance, v18);
  }
}


void __fastcall EventFortificationListViewManager__OnClickBack(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x20

  if ( (byte_4BCBA7D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventFortificationListViewManager_OnClickBack__, method);
    byte_4BCBA7D = 1;
  }
  v3 = Method_EventFortificationListViewManager_OnClickBack__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewManager_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.selectAfterCallback, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))selectAfterCallback->fields.m_target)(
      selectAfterCallback->fields.original_method_info,
      0LL,
      0LL,
      *(_QWORD *)&selectAfterCallback->fields.extra_arg);
  }
}


void __fastcall EventFortificationListViewManager__OnClickBonusFilterKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4BCBA70 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventFortificationListViewManager_OnClickBonusFilterKind__, method);
    byte_4BCBA70 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C1AE30(0LL, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnClickChoiceTab(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_4BCBA7A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventFortificationListViewManager_EndClickTabChoice__, method);
    sub_1C1ABD4(&Method_EventFortificationListViewManager_OnClickChoiceTab__, v3);
    sub_1C1ABD4(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4BCBA7A = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v5 = Method_EventFortificationListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewManager_OnClickChoiceTab__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1C1AE20(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabChoice__,
        v9);
      EventFortificationListViewManager__StatusRequest(this, v8, v10);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 2, v7);
      EventFortificationListViewManager__RefreshListDisp(this, v11);
      EventFortificationListViewManager__ModifyList(this, 0, v12);
      EventFortificationListViewManager__SetMode_47007052(this, 2, v13);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickCollectLock(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_4BCBA79 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventFortificationListViewManager_EndClickTabLock__, method);
    sub_1C1ABD4(&Method_EventFortificationListViewManager_OnClickCollectLock__, v3);
    sub_1C1ABD4(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4BCBA79 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v5 = Method_EventFortificationListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewManager_OnClickCollectLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1C1AE20(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabLock__,
        v9);
      EventFortificationListViewManager__StatusRequest(this, v8, v10);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 1, v7);
      EventFortificationListViewManager__RefreshListDisp(this, v11);
      EventFortificationListViewManager__ModifyList(this, 0, v12);
      EventFortificationListViewManager__SetMode_47007052(this, 2, v13);
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4BCBA6E & 1) == 0 )
  {
    sub_1C1ABD4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_EventFortificationListViewManager_EndSelectFilterKind__, v3);
    sub_1C1ABD4(&Method_EventFortificationListViewManager_OnClickFilterKind__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BCBA6E = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EventFortificationListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C1AE20(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1C1AE30(v12, v13);
    CommonUI__OpenServantFilterSelectMenu(v10, 1, sort, v11, 0, 0LL);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  EventFortificationListViewManager_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4BCBA78 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventFortificationListViewManager_EndClickTabStatus__, method);
    sub_1C1ABD4(&Method_EventFortificationListViewManager_OnClickNormalStatus__, v3);
    sub_1C1ABD4(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4BCBA78 = 1;
  }
  if ( this->fields.modeKind )
  {
    v5 = Method_EventFortificationListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewManager_OnClickNormalStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1C1AE20(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
    EventFortificationListViewManager_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndClickTabStatus__,
      v8);
    EventFortificationListViewManager__StatusRequest(this, v7, v9);
  }
}


void __fastcall EventFortificationListViewManager__OnClickPushTab(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  EventFortificationListViewManager_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_4BCBA7B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventFortificationListViewManager_EndClickTabPush__, method);
    sub_1C1ABD4(&Method_EventFortificationListViewManager_OnClickPushTab__, v3);
    sub_1C1ABD4(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v4);
    byte_4BCBA7B = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_EventFortificationListViewManager_OnClickPushTab__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickPushTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewManager_OnClickPushTab__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1C1AE20(EventFortificationListViewManager_RequestCallbackFunc_TypeInfo);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabPush__,
        v9);
      EventFortificationListViewManager__StatusRequest(this, v8, v10);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 3, v7);
      EventFortificationListViewManager__RefreshListDisp(this, v11);
      EventFortificationListViewManager__ModifyList(this, 0, v12);
      EventFortificationListViewManager__SetMode_47007052(this, 2, v13);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickScaleChange(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
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

  if ( (byte_4BCBA7E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventFortificationListViewManager_OnClickScaleChange__, method);
    byte_4BCBA7E = 1;
  }
  v3 = Method_EventFortificationListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
    sub_1C1AB78((PartyOrganizationUtility_o *)p_seed, (int64_t)smallSizeSeed, v6, v7, v8, v9, v10, v11);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v18 = this->fields.scaleType,
        sort->fields.iconScaleKind = v18,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v18, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1C1AE30(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  EventFortificationListViewManager__ModifyList(this, 1, v20);
  EventFortificationListViewManager__SetMode_47007052(this, 2, v21);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventFortificationListViewManager__OnClickSelectObject(
        EventFortificationListViewManager_o *this,
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
  int64_t fortificationConfirmDialog; // x0
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  __int64 methodPtr_low; // x10
  ListViewObject_o **p_targetInUserServantEntity; // x23
  EventFortificationListViewItem_o *Item; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  ListViewObject_o **p_targetOutUserServantEntity; // x24
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_List_object__o *v39; // x22
  System_Collections_Generic_List_int__o *v40; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v49; // q1
  struct UserServantEntity_o *v50; // x8
  __int128 v51; // q0
  int64_t v52; // x25
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct EventFortificationWorkItem_o *v59; // x8
  int64_t v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x0
  int64_t v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  struct UserServantEntity_o *v82; // x8
  __int128 v83; // q0
  struct UserServantEntity_o *v84; // x8
  __int128 v85; // q0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  struct UserServantEntity_o *v92; // x1
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  struct EventFortificationWorkItem_o *v99; // x8
  int64_t v100; // x1
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  struct System_Int32_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  struct FortificationConfirmDialogComponent_o *v114; // x23
  System_Object_array *v115; // x22
  System_Int32_array *v116; // x21
  System_String_o *TargetTeamName; // x24
  System_String_o *TargetDetailName; // x25
  int32_t TargetWorkType; // w20
  System_Action_o *v120; // x26
  FortificationConfirmDialogComponent_o *v121; // x0
  int32_t v122; // w1
  struct System_Int32_array *v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  struct FortificationConfirmDialogComponent_o *v126; // x23
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  struct System_Int32_array *v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  struct System_Object_array *v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  Il2CppClass **v139; // x0
  struct System_Int32_array *v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  const MethodInfo *v143; // [xsp+0h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v144; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v145; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+90h] [xbp-70h]

  v3 = obj;
  if ( (byte_4BCBA67 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, obj);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantClassMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1C1ABD4(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__, v7);
    sub_1C1ABD4(&Method_EventFortificationListViewManager_OnClickSelectObject__, v8);
    sub_1C1ABD4(&EventFortificationListViewObject_TypeInfo, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v15);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1C1ABD4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v17);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4BCBA67 = 1;
  }
  fortificationConfirmDialog = (int64_t)this->fields.fortificationConfirmDialog;
  if ( !fortificationConfirmDialog )
    goto LABEL_77;
  fortificationConfirmDialog = (int64_t)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)fortificationConfirmDialog,
                                          0LL);
  if ( !fortificationConfirmDialog )
    goto LABEL_77;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fortificationConfirmDialog, 1, 0LL);
  v21 = Method_EventFortificationListViewManager_OnClickSelectObject__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectObject__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewManager_OnClickSelectObject__);
  v22 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0LL);
  if ( !v3 )
    goto LABEL_77;
  methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_77;
  if ( (EventFortificationListViewObject_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo )
    goto LABEL_77;
  p_targetInUserServantEntity = (ListViewObject_o **)&this->fields.targetInUserServantEntity;
  Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)v3, (const MethodInfo *)obj);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.targetInUserServantEntity, 0LL, v26, v27, v28, v29, v30, v31);
  p_targetOutUserServantEntity = (ListViewObject_o **)&this->fields.targetOutUserServantEntity;
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.targetOutUserServantEntity, 0LL, v33, v34, v35, v36, v37, v38);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_77;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_77;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v39 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v40 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    goto LABEL_77;
  userServantEntity = targetFortificationWorkItem->fields.userServantEntity;
  if ( userServantEntity )
  {
    v49 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v148.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v148.fields.fakeValue = v49;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v147 = v148;
    fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v147, 0LL);
    if ( Item )
    {
      v50 = Item->fields.userServantEntity;
      if ( v50 )
      {
        v51 = *(_OWORD *)&v50->fields.id.fields.fakeValue;
        v52 = fortificationConfirmDialog;
        *(_OWORD *)&v146.fields.currentCryptoKey = *(_OWORD *)&v50->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v146.fields.fakeValue = v51;
        fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v146, 0LL);
        v59 = this->fields.targetFortificationWorkItem;
        if ( v52 == fortificationConfirmDialog )
        {
          if ( v59 )
          {
            v60 = (int64_t)v59->fields.userServantEntity;
            *p_targetOutUserServantEntity = (ListViewObject_o *)v60;
            sub_1C1AB78(
              (PartyOrganizationUtility_o *)&this->fields.targetOutUserServantEntity,
              v60,
              v53,
              v54,
              v55,
              v56,
              v57,
              v58);
            if ( v39 )
            {
              obj = *p_targetOutUserServantEntity;
              items = v39->fields._items;
              v68 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v39->fields._version;
              if ( items )
              {
                size = v39->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v39,
                    (Il2CppObject *)obj,
                    *(const MethodInfo_363C890 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
                }
                else
                {
                  v70 = &items->obj.klass + size;
                  v39->fields._size = size + 1;
                  v70[4] = (Il2CppClass *)obj;
                  sub_1C1AB78((PartyOrganizationUtility_o *)(v70 + 4), (int64_t)obj, v61, v62, v63, v64, v65, v66);
                }
                fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
                if ( fortificationConfirmDialog )
                {
                  fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                                 (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                                 (const MethodInfo *)obj);
                  if ( v40 )
                  {
                    v123 = v40->fields._items;
                    v124 = Method_System_Collections_Generic_List_int__Add__;
                    ++v40->fields._version;
                    if ( v123 )
                    {
                      v125 = v40->fields._size;
                      if ( (unsigned int)v125 >= v123->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v40,
                          fortificationConfirmDialog,
                          *(const MethodInfo_361F86C **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v40->fields._size = v125 + 1;
                        v123->m_Items[v125 + 1] = fortificationConfirmDialog;
                      }
                      v126 = this->fields.fortificationConfirmDialog;
                      v115 = System_Collections_Generic_List_object___ToArray(
                               v39,
                               (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                      v116 = System_Collections_Generic_List_int___ToArray(
                               v40,
                               (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
                      TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
                      TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
                      TargetWorkType = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
                      v120 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
                      System_Action___ctor(
                        v120,
                        (Il2CppObject *)this,
                        (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                        0LL);
                      if ( v126 )
                      {
                        v122 = 1;
LABEL_74:
                        v121 = v126;
                        goto LABEL_75;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if ( v59 )
        {
          v82 = v59->fields.userServantEntity;
          if ( !v82 )
            return;
          v83 = *(_OWORD *)&v82->fields.id.fields.fakeValue;
          *(_OWORD *)&v148.fields.currentCryptoKey = *(_OWORD *)&v82->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v148.fields.fakeValue = v83;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v145 = v148;
          fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v145, 0LL);
          v84 = Item->fields.userServantEntity;
          if ( v84 )
          {
            v85 = *(_OWORD *)&v84->fields.id.fields.fakeValue;
            *(_OWORD *)&v144.fields.currentCryptoKey = *(_OWORD *)&v84->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v144.fields.fakeValue = v85;
            if ( fortificationConfirmDialog == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(
                                                 &v144,
                                                 0LL) )
              return;
            v92 = Item->fields.userServantEntity;
            this->fields.targetInUserServantEntity = v92;
            sub_1C1AB78(
              (PartyOrganizationUtility_o *)&this->fields.targetInUserServantEntity,
              (int64_t)v92,
              v86,
              v87,
              v88,
              v89,
              v90,
              v91);
            v99 = this->fields.targetFortificationWorkItem;
            if ( v99 )
            {
              v100 = (int64_t)v99->fields.userServantEntity;
              *p_targetOutUserServantEntity = (ListViewObject_o *)v100;
              sub_1C1AB78(
                (PartyOrganizationUtility_o *)&this->fields.targetOutUserServantEntity,
                v100,
                v93,
                v94,
                v95,
                v96,
                v97,
                v98);
              if ( v39 )
              {
                obj = *p_targetOutUserServantEntity;
                v107 = v39->fields._items;
                v108 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v39->fields._version;
                if ( v107 )
                {
                  v109 = v39->fields._size;
                  if ( (unsigned int)v109 >= v107->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v39,
                      (Il2CppObject *)obj,
                      *(const MethodInfo_363C890 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v110 = &v107->obj.klass + v109;
                    v39->fields._size = v109 + 1;
                    v110[4] = (Il2CppClass *)obj;
                    sub_1C1AB78(
                      (PartyOrganizationUtility_o *)(v110 + 4),
                      (int64_t)obj,
                      v101,
                      v102,
                      v103,
                      v104,
                      v105,
                      v106);
                  }
                  fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
                  if ( fortificationConfirmDialog )
                  {
                    fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                                   (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                                   (const MethodInfo *)obj);
                    if ( v40 )
                    {
                      v133 = v40->fields._items;
                      v134 = Method_System_Collections_Generic_List_int__Add__;
                      ++v40->fields._version;
                      if ( v133 )
                      {
                        v135 = v40->fields._size;
                        if ( (unsigned int)v135 >= v133->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v40,
                            fortificationConfirmDialog,
                            *(const MethodInfo_361F86C **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v40->fields._size = v135 + 1;
                          v133->m_Items[v135 + 1] = fortificationConfirmDialog;
                        }
                        obj = *p_targetInUserServantEntity;
                        v136 = v39->fields._items;
                        v137 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                        ++v39->fields._version;
                        if ( v136 )
                        {
                          v138 = v39->fields._size;
                          if ( (unsigned int)v138 >= v136->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v39,
                              (Il2CppObject *)obj,
                              *(const MethodInfo_363C890 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v139 = &v136->obj.klass + v138;
                            v39->fields._size = v138 + 1;
                            v139[4] = (Il2CppClass *)obj;
                            sub_1C1AB78(
                              (PartyOrganizationUtility_o *)(v139 + 4),
                              (int64_t)obj,
                              v127,
                              v128,
                              v129,
                              v130,
                              v131,
                              v132);
                          }
                          fortificationConfirmDialog = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
                          v140 = v40->fields._items;
                          v141 = Method_System_Collections_Generic_List_int__Add__;
                          ++v40->fields._version;
                          if ( v140 )
                          {
                            v142 = v40->fields._size;
                            if ( (unsigned int)v142 >= v140->max_length )
                            {
                              System_Collections_Generic_List_int___AddWithResize(
                                v40,
                                fortificationConfirmDialog,
                                *(const MethodInfo_361F86C **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v40->fields._size = v142 + 1;
                              v140->m_Items[v142 + 1] = fortificationConfirmDialog;
                            }
                            v126 = this->fields.fortificationConfirmDialog;
                            v115 = System_Collections_Generic_List_object___ToArray(
                                     v39,
                                     (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                            v116 = System_Collections_Generic_List_int___ToArray(
                                     v40,
                                     (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
                            TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
                            TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
                            TargetWorkType = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
                            v120 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
                            System_Action___ctor(
                              v120,
                              (Il2CppObject *)this,
                              (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                              0LL);
                            if ( v126 )
                            {
                              v122 = 2;
                              goto LABEL_74;
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
LABEL_77:
    sub_1C1AE30(fortificationConfirmDialog, obj);
  }
  if ( !Item )
    goto LABEL_77;
  v71 = (int64_t)Item->fields.userServantEntity;
  *p_targetInUserServantEntity = (ListViewObject_o *)v71;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.targetInUserServantEntity, v71, v41, v42, v43, v44, v45, v46);
  if ( !v39 )
    goto LABEL_77;
  obj = *p_targetInUserServantEntity;
  v78 = v39->fields._items;
  v79 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
  ++v39->fields._version;
  if ( !v78 )
    goto LABEL_77;
  v80 = v39->fields._size;
  if ( (unsigned int)v80 >= v78->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v39,
      (Il2CppObject *)obj,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
  }
  else
  {
    v81 = &v78->obj.klass + v80;
    v39->fields._size = v80 + 1;
    v81[4] = (Il2CppClass *)obj;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v81 + 4), (int64_t)obj, v72, v73, v74, v75, v76, v77);
  }
  fortificationConfirmDialog = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
  if ( !v40 )
    goto LABEL_77;
  v111 = v40->fields._items;
  v112 = Method_System_Collections_Generic_List_int__Add__;
  ++v40->fields._version;
  if ( !v111 )
    goto LABEL_77;
  v113 = v40->fields._size;
  if ( (unsigned int)v113 >= v111->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v40,
      fortificationConfirmDialog,
      *(const MethodInfo_361F86C **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
  }
  else
  {
    v40->fields._size = v113 + 1;
    v111->m_Items[v113 + 1] = fortificationConfirmDialog;
  }
  v114 = this->fields.fortificationConfirmDialog;
  v115 = System_Collections_Generic_List_object___ToArray(
           v39,
           (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
  v116 = System_Collections_Generic_List_int___ToArray(
           v40,
           (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
  TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
  TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
  TargetWorkType = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
  v120 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v120,
    (Il2CppObject *)this,
    (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
    0LL);
  if ( !v114 )
    goto LABEL_77;
  v121 = v114;
  v122 = 0;
LABEL_75:
  FortificationConfirmDialogComponent__Open(
    v121,
    v122,
    (UserServantEntity_array *)v115,
    v116,
    TargetTeamName,
    TargetDetailName,
    TargetWorkType,
    v120,
    v143);
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
  int64_t SelfUserGame; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 methodPtr_low; // x9
  EventFortificationListViewItem_o *Item; // x0
  EventFortificationListViewItem_o **v36; // x20
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v45; // q1
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  const MethodInfo *v48; // x2
  _QWORD *v49; // x0
  System_Reflection_MethodBase_o *v50; // x0
  Il2CppObject *Entity; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v52; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v55; // x25
  System_String_o *v56; // x21
  System_String_o *v57; // x22
  System_Object_array *v58; // x23
  int32_t Rarity; // w26
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x26
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x26
  int32_t v74; // w0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x24
  int32_t v82; // w0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x24
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x24
  EventFortificationListViewItem_o *v97; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v98; // x9
  ServantEntity_o *servantEntity; // x20
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  int64_t v106; // x20
  System_String_o *v107; // x20
  System_String_o *v108; // x22
  System_String_o *v109; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v111; // x25
  __int64 v112; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  if ( (byte_4BCBA7F & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, obj);
    sub_1C1ABD4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1C1ABD4(&Method_EventFortificationListViewManager_OnClickSelectPush__, v10);
    sub_1C1ABD4(&EventFortificationListViewObject_TypeInfo, v11);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v12);
    sub_1C1ABD4(&object___TypeInfo, v13);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1C1ABD4(&Rarity_TypeInfo, v16);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1C1ABD4(&Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__0__, v19);
    sub_1C1ABD4(&EventFortificationListViewManager___c__DisplayClass96_0_TypeInfo, v20);
    sub_1C1ABD4(&StringLiteral_12103/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v21);
    sub_1C1ABD4(&StringLiteral_12101/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v22);
    sub_1C1ABD4(&StringLiteral_12102/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v23);
    sub_1C1ABD4(&StringLiteral_12104/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v24);
    byte_4BCBA7F = 1;
  }
  v25 = sub_1C1AE20(EventFortificationListViewManager___c__DisplayClass96_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_62;
  *(_QWORD *)(v25 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)this, v28, v29, v30, v31, v32, v33);
  if ( !obj )
    goto LABEL_62;
  methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo )
  {
    sub_1C1B0F0(obj);
    goto LABEL_64;
  }
  Item = EventFortificationListViewObject__GetItem(
           (EventFortificationListViewObject_o *)obj,
           (const MethodInfo *)EventFortificationListViewObject_TypeInfo);
  *(_QWORD *)(v25 + 24) = Item;
  v36 = (EventFortificationListViewItem_o **)(v25 + 24);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v25 + 24), (int64_t)Item, v37, v38, v39, v40, v41, v42);
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_62;
  v43 = *(_QWORD *)(SelfUserGame + 120);
  if ( v43 )
  {
    if ( !*v36 )
      goto LABEL_62;
    userServantEntity = (*v36)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_62;
    v45 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v114.fields.fakeValue = v45;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v113 = v114;
    if ( v43 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v113, 0LL) )
      goto LABEL_14;
    v49 = Method_EventFortificationListViewManager_OnClickSelectPush__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
      v49 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewManager_OnClickSelectPush__);
    v50 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v49, v49[4]);
    OverwriteAssetSoundName__PlaySystemSe(v50, 0, 0, 0LL);
    SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_62;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
               v43,
               (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_62;
    v52 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v115.fields.currentCryptoKey = klass;
    *(_QWORD *)&v115.fields.fakeValue = monitor;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v115, 0LL);
    if ( !v52 )
      goto LABEL_62;
    v55 = DataMasterBase_object__object__int___GetEntity(
            v52,
            SelfUserGame,
            (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12104/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12103/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v58 = (System_Object_array *)sub_1C1AC7C(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    SelfUserGame = (int64_t)Rarity__getRarityType(Rarity, 0LL);
    if ( !v58 )
LABEL_62:
      sub_1C1AE30(SelfUserGame, v27);
    v66 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C1AD10(SelfUserGame, v58->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( !v58->max_length )
      goto LABEL_64;
    v58->m_Items[0] = (Il2CppObject *)v66;
    sub_1C1AB78((PartyOrganizationUtility_o *)v58->m_Items, v66, v60, v61, v62, v63, v64, v65);
    if ( !v55 )
      goto LABEL_62;
    SelfUserGame = (int64_t)ServantEntity__getClassName((ServantEntity_o *)v55, 0LL);
    v73 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C1AD10(SelfUserGame, v58->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v58->max_length <= 1 )
      goto LABEL_64;
    v58->m_Items[1] = (Il2CppObject *)v73;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v58->m_Items[1], v73, v67, v68, v69, v70, v71, v72);
    v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
            0LL);
    SelfUserGame = (int64_t)ServantEntity__getName((ServantEntity_o *)v55, v74, -1, 1, 0LL);
    v81 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C1AD10(SelfUserGame, v58->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v58->max_length <= 2 )
      goto LABEL_64;
    v58->m_Items[2] = (Il2CppObject *)v81;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v58->m_Items[2], v81, v75, v76, v77, v78, v79, v80);
    if ( !*v36 )
      goto LABEL_62;
    SelfUserGame = (int64_t)(*v36)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    v82 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
    SelfUserGame = (int64_t)Rarity__getRarityType(v82, 0LL);
    v89 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C1AD10(SelfUserGame, v58->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v58->max_length <= 3 )
      goto LABEL_64;
    v58->m_Items[3] = (Il2CppObject *)v89;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v58->m_Items[3], v89, v83, v84, v85, v86, v87, v88);
    if ( !*v36 )
      goto LABEL_62;
    SelfUserGame = (int64_t)(*v36)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (int64_t)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
    v96 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C1AD10(SelfUserGame, v58->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v58->max_length <= 4 )
      goto LABEL_64;
    v58->m_Items[4] = (Il2CppObject *)v96;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v58->m_Items[4], v96, v90, v91, v92, v93, v94, v95);
    v97 = *v36;
    if ( !*v36 )
      goto LABEL_62;
    v98 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v97->fields.userServantEntity;
    if ( !v98 )
      goto LABEL_62;
    servantEntity = v97->fields.servantEntity;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v98[6], 0LL);
    if ( !servantEntity )
      goto LABEL_62;
    SelfUserGame = (int64_t)ServantEntity__getName(servantEntity, SelfUserGame, -1, 1, 0LL);
    v106 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1C1AD10(SelfUserGame, v58->obj.klass->_1.element_class);
      if ( !SelfUserGame )
      {
LABEL_65:
        v112 = sub_1C1AE54(SelfUserGame);
        sub_1C1ACFC(v112, 0LL);
      }
    }
    if ( v58->max_length > 5 )
    {
      v58->m_Items[5] = (Il2CppObject *)v106;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v58->m_Items[5], v106, v100, v101, v102, v103, v104, v105);
      v107 = System_String__Format_63054876(v57, v58, 0LL);
      v108 = LocalizationManager__Get((System_String_o *)StringLiteral_12102/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v109 = LocalizationManager__Get((System_String_o *)StringLiteral_12101/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v111 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C1AE20(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v111,
        (Il2CppObject *)v25,
        Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__0__,
        0LL);
      SelfUserGame = (int64_t)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_31099184(
          (CommonUI_o *)Instance,
          v56,
          v107,
          v108,
          v109,
          1,
          v111,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_62;
    }
LABEL_64:
    sub_1C1AE38(SelfUserGame, v27);
  }
LABEL_14:
  v46 = Method_EventFortificationListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v46 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewManager_OnClickSelectPush__);
  v47 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v46, v46[4]);
  OverwriteAssetSoundName__PlaySystemSe(v47, 8, 0, 0LL);
  EventFortificationListViewManager__PushRequest(this, *v36, v48);
}


void __fastcall EventFortificationListViewManager__OnClickSortAscendingOrder(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4BCBA74 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventFortificationListViewManager_OnClickSortAscendingOrder__, method);
    byte_4BCBA74 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_EventFortificationListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C1AE30(v5, v6);
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantSortSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4BCBA72 & 1) == 0 )
  {
    sub_1C1ABD4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_EventFortificationListViewManager_EndSelectSortKind__, v3);
    sub_1C1ABD4(&Method_EventFortificationListViewManager_OnClickSortButton__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BCBA72 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_EventFortificationListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewManager_OnClickSortButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C1AE20(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1C1AE30(v12, v13);
    CommonUI__OpenServantSortSelectMenu(v10, 3, sort, 0, v11, 0LL);
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
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 methodPtr_low; // x10
  EventFortificationListViewItem_o *Item; // x21
  UserServantEntity_o *userServantEntity; // x21
  CommonUI_o *v16; // x20
  ServantStatusDialog_EndDelegate_o *v17; // x22

  if ( (byte_4BCBA6A & 1) == 0 )
  {
    sub_1C1ABD4(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_1C1ABD4(&Method_EventFortificationListViewManager_EndShowServant__, v5);
    sub_1C1ABD4(&Method_EventFortificationListViewManager_OnLongPushListView__, v6);
    sub_1C1ABD4(&EventFortificationListViewObject_TypeInfo, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4BCBA6A = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v9 = Method_EventFortificationListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewManager_OnLongPushListView__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
    if ( !obj
      || (methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo
      || (Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)obj, v11),
          scrollView = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          !Item)
      || (userServantEntity = Item->fields.userServantEntity,
          v16 = (CommonUI_o *)scrollView,
          v17 = (ServantStatusDialog_EndDelegate_o *)sub_1C1AE20(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v17,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_EndShowServant__,
            0LL),
          !v16) )
    {
LABEL_13:
      sub_1C1AE30(scrollView, v11);
    }
    CommonUI__OpenServantStatusDialog_31109364(v16, 0, userServantEntity, v17, 0LL);
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
  struct System_Action_o *CallbackFunc2; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BCBA66 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCBA66 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          sub_1C1AE30(v8, v7);
        }
        UIScrollView__UpdatePosition((UIScrollView_o *)v8, 0LL);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.CallbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
        if ( CallbackFunc2 )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))CallbackFunc2->fields.m_target)(
            CallbackFunc2->fields.original_method_info,
            *(_QWORD *)&CallbackFunc2->fields.extra_arg);
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
  DataManager_o *v15; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v25; // x0
  __int128 v26; // q1
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  Il2CppObject *Request_object; // x0
  __int128 v29; // q1
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w26
  int32_t v32; // w27
  int32_t v33; // w28
  int32_t v34; // w29
  bool IsLock; // w21
  char v36; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v40; // w0
  __int64 v41; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4BCBA80 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1C1ABD4(&Method_EventFortificationListViewManager_EndPushRequest__, v5);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v7);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4BCBA80 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userServantEntity )
    goto LABEL_18;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v15->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v51, 0LL);
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_EndPushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1C1AE30(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    imageLimitCount,
    v31,
    v32,
    v33,
    v34,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v45,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != (struct System_Threading_SynchronizationContext_o *)v47,
    0LL);
}


void __fastcall EventFortificationListViewManager__RefreshListDisp(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w22
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w21

  if ( (byte_4BCBA5D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v3);
    byte_4BCBA5D = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EventFortificationListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_9;
  size = ObjectList->fields._size;
  v7 = ObjectList;
  if ( size >= 1 )
  {
    v8 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v7,
                                                                  v8,
                                                                  (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( size == ++v8 )
        return;
    }
LABEL_9:
    sub_1C1AE30(ObjectList, v5);
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
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v17; // x24
  const MethodInfo *v18; // x3

  if ( (byte_4BCBA65 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C1ABD4(&Method_EventFortificationListViewManager_OnMoveEnd__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v9);
    sub_1C1ABD4(&StringLiteral_10123/*"OnMoveEnd"*/, v10);
    byte_4BCBA65 = 1;
  }
  ObjectList = EventFortificationListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v14 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v15 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v14,
               v15,
               (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
      v17 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_EventFortificationListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      EventFortificationListViewObject__Init_47007576((EventFortificationListViewObject_o *)Item, mode, v17, v18);
      if ( size == ++v15 )
        return;
    }
LABEL_10:
    sub_1C1AE30(ObjectList, v12);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10123/*"OnMoveEnd"*/,
    delay,
    0LL);
}


void __fastcall EventFortificationListViewManager__SetFilterButtonImage(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4BCBA71 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17791/*"btn_filter_on"*/, method);
    sub_1C1ABD4(&StringLiteral_17790/*"btn_filter"*/, v3);
    byte_4BCBA71 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1C1AE30(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17790/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17791/*"btn_filter_on"*/;
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

  if ( (byte_4BCBA5F & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_11833/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v3);
    sub_1C1ABD4(&StringLiteral_11831/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v4);
    sub_1C1ABD4(&StringLiteral_11832/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v5);
    sub_1C1ABD4(&StringLiteral_6620/*"FORTIFICATION_GUIDE_HELP"*/, v6);
    byte_4BCBA5F = 1;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6620/*"FORTIFICATION_GUIDE_HELP"*/, 0LL);
      targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
      if ( !targetFortificationWorkItem )
        goto LABEL_28;
      v11 = (System_String_o *)v8;
      v12 = this->fields.targetFortificationWorkItem;
      if ( (byte_4BCBAB1 & 1) == 0 )
      {
        v8 = sub_1C1ABD4(&StringLiteral_1/*""*/, v9);
        byte_4BCBAB1 = 1;
        v12 = this->fields.targetFortificationWorkItem;
      }
      eventFortificationEntity = targetFortificationWorkItem->fields.eventFortificationEntity;
      v14 = eventFortificationEntity
          ? (Il2CppObject **)&eventFortificationEntity->fields.name
          : (Il2CppObject **)&StringLiteral_1/*""*/;
      if ( !v12 )
        goto LABEL_28;
      eventFortificationDetailEntity = v12->fields.eventFortificationDetailEntity;
      if ( !eventFortificationDetailEntity )
        goto LABEL_28;
      v8 = (__int64)System_String__Format_63054740(
                      v11,
                      *v14,
                      (Il2CppObject *)eventFortificationDetailEntity->fields.name,
                      0LL);
      if ( !recoveryFatigueInfoMsgLabel )
        goto LABEL_28;
      v16 = (System_String_o *)v8;
      v17 = recoveryFatigueInfoMsgLabel;
      goto LABEL_27;
    case 1:
      v18 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11832/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_25;
    case 2:
      v18 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11831/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_25;
    case 3:
      v18 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11833/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_25:
      v8 = (__int64)LocalizationManager__Get((System_String_o *)*v19, 0LL);
      if ( !v18 )
LABEL_28:
        sub_1C1AE30(v8, v9);
      v16 = (System_String_o *)v8;
      v17 = v18;
LABEL_27:
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.Callback = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.Callback,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EventFortificationListViewManager__SetMode_47007052(this, mode, v10);
}


void __fastcall EventFortificationListViewManager__SetMode_47007052(
        EventFortificationListViewManager_o *this,
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
    EventFortificationListViewManager__RequestListObject(this, v6, 0.0, v5);
  }
}


void __fastcall EventFortificationListViewManager__SetMode_47007160(
        EventFortificationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.CallbackFunc2 = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.CallbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EventFortificationListViewManager__SetMode_47007052(this, mode, v10);
}


void __fastcall EventFortificationListViewManager__SetObjectItem(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventFortificationListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4BCBA64 & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_1C1ABD4(&EventFortificationListViewObject_TypeInfo, obj);
    byte_4BCBA64 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo )
  {
    sub_1C1AE30(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventFortificationListViewObject__Init_47006928(
    (EventFortificationListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
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
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8

  if ( (byte_4BCBA75 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_17821/*"btn_sort_up"*/, v3);
    sub_1C1ABD4(&StringLiteral_17912/*"btn_txt_up"*/, v4);
    sub_1C1ABD4(&StringLiteral_17865/*"btn_txt_new"*/, v5);
    sub_1C1ABD4(&StringLiteral_17855/*"btn_txt_down"*/, v6);
    sub_1C1ABD4(&StringLiteral_17872/*"btn_txt_old"*/, v7);
    sub_1C1ABD4(&StringLiteral_17818/*"btn_sort_down"*/, v8);
    byte_4BCBA75 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_35;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_35;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_35;
    ListViewSort__SetupSortLabelLayout(sort, this->fields.sortKindLabel, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17872/*"btn_txt_old"*/ : &StringLiteral_17865/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17818/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17821/*"btn_sort_up"*/;
LABEL_31:
              if ( v17->fields.isAscendingOrder )
                v21 = v18;
              else
                v21 = v19;
              UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
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
          v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17912/*"btn_txt_up"*/ : &StringLiteral_17855/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17821/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17818/*"btn_sort_down"*/;
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_35:
    sub_1C1AE30(sort, v10);
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

  if ( (byte_4BCBA5E & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17945/*"button_push_reg"*/, *(_QWORD *)&modeKind);
    sub_1C1ABD4(&StringLiteral_17946/*"button_push_unreg"*/, v5);
    sub_1C1ABD4(&StringLiteral_17931/*"button_allchoice_reg"*/, v6);
    sub_1C1ABD4(&StringLiteral_17934/*"button_alllock_unreg"*/, v7);
    sub_1C1ABD4(&StringLiteral_17947/*"button_select_reg"*/, v8);
    sub_1C1ABD4(&StringLiteral_17948/*"button_select_unreg"*/, v9);
    sub_1C1ABD4(&StringLiteral_17933/*"button_alllock_reg"*/, v10);
    sub_1C1ABD4(&StringLiteral_17932/*"button_allchoice_unreg"*/, v11);
    byte_4BCBA5E = 1;
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
  v13 = &StringLiteral_17947/*"button_select_reg"*/;
  if ( modeKind )
    v13 = &StringLiteral_17948/*"button_select_unreg"*/;
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
  v14 = &StringLiteral_17933/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v14 = &StringLiteral_17934/*"button_alllock_unreg"*/;
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
  v15 = &StringLiteral_17931/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v15 = &StringLiteral_17932/*"button_allchoice_unreg"*/;
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
  v16 = &StringLiteral_17945/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v16 = &StringLiteral_17946/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v16, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_1C1AE30(statusTabButton, *(_QWORD *)&modeKind);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  Il2CppObject *Request_object; // x0
  __int64 v18; // x1
  System_Int64_array *v19; // x1
  System_Int64_array *v20; // x2
  bool v21; // w4
  bool v22; // w5
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  NetworkManager_ResultCallbackFunc_o *v29; // x20
  System_Int64_array *v30; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BCBA7C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventFortificationListViewManager_EndStatusSync__, callback);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v7);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4BCBA7C = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v30 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( EventFortificationListViewManager__GetSwapChoiceList(this, &choiceList, &v30, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.requestCallback,
        (int64_t)callback,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v29 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v29,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v29,
                         (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v20 = v30;
        v19 = choiceList;
        v22 = 1;
        v21 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1C1AE30(Request_object, v18);
    }
  }
  else if ( modeKind == 1 && EventFortificationListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.requestCallback,
      (int64_t)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v16,
                       (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v20 = unlockList;
      v19 = lockList;
      v21 = 1;
      v22 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v19, v20, 0, v21, v22, 0LL);
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

  if ( (byte_4BCBA54 & 1) == 0 )
  {
    sub_1C1ABD4(&EventFortificationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BCBA54 = 1;
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
    v8 = sub_1C560C4(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
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

  if ( (byte_4BCBA56 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BCBA56 = 1;
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
    v8 = sub_1C560C4(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
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
  System_Collections_Generic_List_object__o *v8; // x20
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v12; // w21
  Il2CppObject *v13; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4BCBA5B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v7);
    byte_4BCBA5B = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    do
    {
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v12,
                                                                  (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        break;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
      if ( !objectList )
        break;
      v13 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)EventFortificationListViewObject__GetItem(
                                                                  (EventFortificationListViewObject_o *)objectList,
                                                                  v9);
      if ( !objectList )
        break;
      v9 = (const MethodInfo *)objectList;
      if ( LOBYTE(objectList[2].monitor) )
      {
        objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41959744(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)objectList,
                                                                    0LL);
        if ( ((unsigned __int8)objectList & 1) == 0 )
          continue;
      }
      if ( !v8 )
        break;
      items = v8->fields._items;
      v21 = Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      v22 = v8->fields._size;
      if ( (unsigned int)v22 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v13,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + v22;
        v8->fields._size = v22 + 1;
        v23[4] = (Il2CppClass *)v13;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v13, v14, v15, v16, v17, v18, v19);
      }
      if ( size == ++v12 )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v8;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_18:
    sub_1C1AE30(objectList, v9);
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
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  int64_t objectList; // x0
  int v12; // w23
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  int64_t v24; // x1
  Il2CppClass **v25; // x0

  if ( (byte_4BCBA5A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v7);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v8);
    byte_4BCBA5A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
  objectList = (int64_t)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  v12 = *(_DWORD *)(objectList + 24);
  if ( v12 >= 1 )
  {
    v13 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)objectList,
               v13,
               (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
      if ( (objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Item,
                                (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
        if ( !v9 )
          break;
        items = v9->fields._items;
        v22 = Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        v24 = objectList;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)objectList,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v24;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v25 + 4), v24, v15, v16, v17, v18, v19, v20);
        }
      }
      if ( v12 == ++v13 )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v9;
      objectList = (int64_t)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1C1AE30(objectList, v10);
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

  if ( (byte_4BCBA55 & 1) == 0 )
  {
    sub_1C1ABD4(&EventFortificationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BCBA55 = 1;
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
    v8 = sub_1C560C4(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
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

  if ( (byte_4BCBA57 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BCBA57 = 1;
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
    v8 = sub_1C560C4(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
  EventFortificationListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager_CallbackFunc___ctor(
        EventFortificationListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A61004;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A60FAC;
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = index;
  v16 = kind;
  if ( (byte_4BCBA82 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1C1ABD4(&EventFortificationListViewManager_ResultKind_TypeInfo, v9);
    byte_4BCBA82 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             EventFortificationListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&index,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v14, callback, object);
}


void __fastcall EventFortificationListViewManager_CallbackFunc__EndInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
}


void __fastcall EventFortificationListViewManager_CallbackFunc__Invoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
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
void __fastcall EventFortificationListViewManager_RequestCallbackFunc___ctor(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A61070;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A61028;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventFortificationListViewManager_RequestCallbackFunc__BeginInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4BCBA83 & 1) == 0 )
  {
    sub_1C1ABD4(&bool_TypeInfo, isRequest);
    byte_4BCBA83 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v9, callback, object);
}


void __fastcall EventFortificationListViewManager_RequestCallbackFunc__EndInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
}


void __fastcall EventFortificationListViewManager_RequestCallbackFunc__Invoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
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
  struct EventFortificationWorkItem_o *targetItem; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  if ( !data
    || (servantClassMaster = this->fields.servantClassMaster,
        v4 = this,
        this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)UserServantEntity__getSvtClassId(
                                                                              data,
                                                                              0,
                                                                              0LL),
        !servantClassMaster)
    || (this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)ServantClassMaster__getSupportGroupType(
                                                                              servantClassMaster,
                                                                              (int32_t)this,
                                                                              0LL),
        (targetItem = v4->fields.targetItem) == 0LL)
    || (eventFortificationDetailEntity = targetItem->fields.eventFortificationDetailEntity) == 0LL )
  {
    sub_1C1AE30(this, data);
  }
  return (_DWORD)this == eventFortificationDetailEntity->fields.classId;
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
  if ( (byte_4BCBA84 & 1) == 0 )
  {
    this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)sub_1C1ABD4(
                                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                          data);
    byte_4BCBA84 = 1;
  }
  if ( !data )
    goto LABEL_9;
  v6 = *(_QWORD *)&data->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&data->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                                                                        v10,
                                                                        0LL);
  targetItem = v4->fields.targetItem;
  if ( !targetItem
    || (userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)targetItem->fields.userServantEntity) == 0LL )
  {
LABEL_9:
    sub_1C1AE30(this, data);
  }
  return (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(userServantEntity[5], 0LL);
}


void __fastcall EventFortificationListViewManager___c__DisplayClass96_0___ctor(
        EventFortificationListViewManager___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager___c__DisplayClass96_0___OnClickSelectPush_b__0(
        EventFortificationListViewManager___c__DisplayClass96_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20
  System_Action_o *_9__1; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BCBA85 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isDecide);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C1ABD4(&Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__1__, v6);
    byte_4BCBA85 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v11, v12, v13, v14, v15, v16);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_31099464(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1C1AE30(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventFortificationListViewManager___c__DisplayClass96_0___OnClickSelectPush_b__1(
        EventFortificationListViewManager___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C1AE30(this, method);
  EventFortificationListViewManager__PushRequest(this->fields.__4__this, this->fields.selectItem, v2);
}