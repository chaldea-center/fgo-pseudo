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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *SORT_SAVE_KEY; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  ListViewSort_o *v16; // x20
  struct EventFortificationListViewManager_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B1A0F2 & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationListViewManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_6331/*"EventServantFatigueList"*/, v10, v11);
    byte_4B1A0F2 = 1;
  }
  EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6331/*"EventServantFatigueList"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventFortificationListViewManager_TypeInfo->static_fields,
    StringLiteral_6331/*"EventServantFatigueList"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  SORT_SAVE_KEY = EventFortificationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v16 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v13, v14, v15);
  ListViewSort___ctor_41480716(v16, SORT_SAVE_KEY, 3, 0, 0LL);
  static_fields = EventFortificationListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v16;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->servantSortStatus,
    (int64_t)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
  if ( (byte_4B1A0DA & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, result, method);
    byte_4B1A0DA = 1;
  }
  if ( !result )
    goto LABEL_11;
  this = (EventFortificationListViewManager_o *)System_String__Equals_62409536(
                                                  result,
                                                  (System_String_o *)StringLiteral_22292/*"ng"*/,
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
    sub_1BCAA3C(this, result);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_object__o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  NetworkManager_ResultCallbackFunc_o *v33; // x21
  __int64 v34; // x1
  System_Object_array *Request_object; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  struct UserServantEntity_o *targetInUserServantEntity; // x9
  struct UserServantEntity_o *targetOutUserServantEntity; // x10
  EventFortificationRequest_o *v41; // x21
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x10
  __int128 v44; // q1
  int32_t fortificationIdx; // w23
  int32_t position; // w24
  __int128 *v47; // x0
  struct EventFortificationWorkItem_o *v48; // x8
  struct EventFortificationDetailEntity_o *v49; // x9
  int32_t v50; // w24
  int32_t v51; // w23
  EnterUserSvtInfo_o *v52; // x0
  Il2CppObject *v53; // x22
  int32_t v54; // w1
  int32_t v55; // w2
  int64_t v56; // x3
  struct EventFortificationDetailEntity_o *v57; // x10
  __int128 v58; // q1
  int64_t v59; // x25
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0
  int32_t eventId; // w19
  const MethodInfo *v74; // x3
  __int128 v75[2]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v76[2]; // [xsp+20h] [xbp-80h] BYREF
  __int128 v77; // [xsp+40h] [xbp-60h]
  __int128 v78; // [xsp+50h] [xbp-50h]

  if ( (byte_4B1A0D9 & 1) == 0 )
  {
    sub_1BCA7E0(&EnterUserSvtInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventFortificationListViewManager_CallbackFortificationRequest__, v4, v5);
    sub_1BCA7E0(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventFortificationRequest___, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20, v21);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v22, v23);
    byte_4B1A0D9 = 1;
  }
  v24 = Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__ + 83) & 2) != 0 )
    v24 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__);
  v25 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v24, v24[4]);
  OverwriteAssetSoundName__PlaySystemSe(v25, 8, 0LL);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo,
                                                       v26,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  v33 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v30, v31, v32);
  NetworkManager_ResultCallbackFunc___ctor(
    v33,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_CallbackFortificationRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v34);
  Request_object = (System_Object_array *)NetworkManager__getRequest_object_(
                                            v33,
                                            (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  targetInUserServantEntity = this->fields.targetInUserServantEntity;
  targetOutUserServantEntity = this->fields.targetOutUserServantEntity;
  v41 = (EventFortificationRequest_o *)Request_object;
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
      v44 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
      fortificationIdx = eventFortificationDetailEntity->fields.fortificationIdx;
      position = targetFortificationWorkItem->fields.position;
      v77 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
      v78 = v44;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v36);
      v47 = v76;
      v76[0] = v77;
      v76[1] = v78;
    }
    else
    {
      if ( !targetFortificationWorkItem )
        goto LABEL_32;
      v57 = targetFortificationWorkItem->fields.eventFortificationDetailEntity;
      if ( !v57 )
        goto LABEL_32;
      v58 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.fakeValue;
      fortificationIdx = v57->fields.fortificationIdx;
      position = targetFortificationWorkItem->fields.position;
      v77 = *(_OWORD *)&targetInUserServantEntity->fields.id.fields.currentCryptoKey;
      v78 = v58;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v36);
      v47 = v75;
      v75[0] = v77;
      v75[1] = v78;
    }
    v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v47,
            0LL);
    v52 = (EnterUserSvtInfo_o *)sub_1BCAA2C(EnterUserSvtInfo_TypeInfo, v60, v61, v62);
    v53 = (Il2CppObject *)v52;
    v54 = fortificationIdx;
    v55 = position;
    v56 = v59;
  }
  else
  {
    if ( !targetOutUserServantEntity )
      return;
    v48 = this->fields.targetFortificationWorkItem;
    if ( !v48 || (v49 = v48->fields.eventFortificationDetailEntity) == 0LL )
LABEL_32:
      sub_1BCAA3C(Request_object, v36);
    v50 = v48->fields.position;
    v51 = v49->fields.fortificationIdx;
    v52 = (EnterUserSvtInfo_o *)sub_1BCAA2C(EnterUserSvtInfo_TypeInfo, v36, v37, v38);
    v53 = (Il2CppObject *)v52;
    v54 = v51;
    v55 = v50;
    v56 = 0LL;
  }
  EnterUserSvtInfo___ctor(v52, v54, v55, v56, 0LL);
  if ( !v29 )
    goto LABEL_32;
  items = v29->fields._items;
  v70 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
  ++v29->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v29->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v29,
      v53,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
  }
  else
  {
    v72 = &items->obj.klass + size;
    v29->fields._size = size + 1;
    v72[4] = (Il2CppClass *)v53;
    sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 4), (int64_t)v53, v63, v64, v65, v66, v67, v68);
  }
  eventId = this->fields.eventId;
  Request_object = System_Collections_Generic_List_object___ToArray(
                     v29,
                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v41 )
    goto LABEL_32;
  EventFortificationRequest__beginRequest(v41, eventId, (EnterUserSvtInfo_array *)Request_object, v74);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x28
  __int64 sort; // x0
  const MethodInfo *v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  EventFortificationListViewManager_c *v59; // x0
  struct ListViewSort_o *servantSortStatus; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  struct EventFortificationWorkItem_o **p_targetFortificationWorkItem; // x24
  struct EventFortificationWorkItem_o *v80; // x1
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  struct ListViewSort_o *v99; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  __int64 v103; // x2
  __int64 v104; // x3
  System_Int32_array *v105; // x23
  Il2CppObject *MasterData_object; // x25
  Il2CppObject *v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v115; // q0
  int64_t v116; // x23
  int64_t v117; // x2
  __int64 v118; // x3
  struct EventFortificationWorkItem_o *v119; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v120; // x24
  UserServantEntity_o *v121; // x27
  int32_t v122; // w21
  EventFortificationListViewItem_o *v123; // x25
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  System_Func_object__bool__o *v127; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v128; // x0
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  __int64 v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  __int64 v136; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_Func_object__bool__o *v138; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v139; // x0
  __int64 v140; // x29
  __int64 v141; // x28
  UserServantEntity_o *v142; // x25
  int32_t v143; // w26
  EventFortificationWorkItem_o *v144; // x27
  EventFortificationListViewItem_o *v145; // x21
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  __int64 v152; // x8
  _QWORD *v153; // x9
  __int64 v154; // x10
  __int64 v155; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v157; // x2
  const MethodInfo *v158; // x1
  EventUpValSetupInfo_o *setupInfo; // [xsp+0h] [xbp-D0h]
  struct EventFortificationWorkItem_o **v160; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v161; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v162[2]; // [xsp+30h] [xbp-A0h] BYREF

  if ( (byte_4B1A0CD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_ServantClassMaster___,
      *(_QWORD *)&eventId,
      fortificationConfirmDialog);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v15, v16);
    sub_1BCA7E0(&EventFortificationListViewItem_TypeInfo, v17, v18);
    sub_1BCA7E0(&EventFortificationListViewManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Func_UserServantEntity__bool__TypeInfo, v23, v24);
    sub_1BCA7E0(&int___TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v27, v28);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    sub_1BCA7E0(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__, v35, v36);
    sub_1BCA7E0(&Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__, v37, v38);
    sub_1BCA7E0(&EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo, v39, v40);
    sub_1BCA7E0(&StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v41, v42);
    byte_4B1A0CD = 1;
  }
  memset(&v162[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v43 = sub_1BCAA2C(
          EventFortificationListViewManager___c__DisplayClass48_0_TypeInfo,
          *(_QWORD *)&eventId,
          fortificationConfirmDialog,
          targetItem);
  System_Object___ctor((Il2CppObject *)v43, 0LL);
  if ( !v43 )
    goto LABEL_62;
  *(_QWORD *)(v43 + 16) = targetItem;
  v160 = (struct EventFortificationWorkItem_o **)(v43 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 16), (int64_t)targetItem, v46, v47, v48, v49, v50, v51);
  v59 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo, v52);
    v59 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v59->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.sort,
    (int64_t)servantSortStatus,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
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
  TitleInfoControl__setBackBtnSprite_37887988((TitleInfoControl_o *)sort, 1, 0, 0, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)sort, 45, 0LL);
  sort = (__int64)this->fields.titleInfo;
  if ( !sort )
    goto LABEL_62;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)sort, 0, 0LL);
  this->fields.targetInUserServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetInUserServantEntity, 0LL, v61, v62, v63, v64, v65, v66);
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetOutUserServantEntity, 0LL, v67, v68, v69, v70, v71, v72);
  this->fields.eventId = eventId;
  this->fields.fortificationConfirmDialog = fortificationConfirmDialog;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.fortificationConfirmDialog,
    (int64_t)fortificationConfirmDialog,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  p_targetFortificationWorkItem = &this->fields.targetFortificationWorkItem;
  v80 = *v160;
  this->fields.targetFortificationWorkItem = *v160;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetFortificationWorkItem,
    (int64_t)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  this->fields.selectAfterCallback = afterCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectAfterCallback,
    (int64_t)afterCallback,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  v99 = this->fields.sort;
  this->fields.modeKind = 0;
  if ( !v99 )
    goto LABEL_62;
  iconScaleKind = v99->fields.iconScaleKind;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)normalSizeSeed, v93, v94, v95, v96, v97, v98);
LABEL_19:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_62;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_62;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = sub_1BCA888(int___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_62;
  v105 = (System_Int32_array *)sort;
  if ( !*(_DWORD *)(sort + 24) )
LABEL_56:
    sub_1BCAA44(sort, v45);
  *(_DWORD *)(sort + 32) = eventId;
  setupInfo = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v45, v103, v104);
  EventUpValSetupInfo___ctor_39629568(setupInfo, v105, 1, 0, 0, 0LL);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)sort,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_62;
  v107 = DataManager__GetMasterData_object_(
           (DataManager_o *)sort,
           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  *(_QWORD *)(v43 + 24) = v107;
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 24), (int64_t)v107, v108, v109, v110, v111, v112, v113);
  if ( !*p_targetFortificationWorkItem )
    goto LABEL_62;
  userServantEntity = (*p_targetFortificationWorkItem)->fields.userServantEntity;
  if ( userServantEntity )
  {
    v115 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v162[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v162[1].fields.fakeValue = v115;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v45);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v162, -1LL, 0LL);
    v162[1] = v162[0];
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v45);
  v161 = v162[1];
  sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v161, 0LL);
  if ( !MasterData_object )
    goto LABEL_62;
  v116 = sort;
  sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)MasterData_object, 0LL);
  v119 = *v160;
  if ( !*v160 )
    goto LABEL_62;
  v120 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  if ( !v119->fields.isSvtDataSetInMaster )
  {
    eventFortificationDetailEntity = v119->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      goto LABEL_62;
    if ( eventFortificationDetailEntity->fields.classId )
    {
      v138 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_UserServantEntity__bool__TypeInfo, v45, v117, v118);
      System_Func_object__bool____ctor(
        v138,
        (Il2CppObject *)v43,
        Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__0__,
        0LL);
      v139 = System_Linq_Enumerable__Where_object_(
               v120,
               (System_Func_TSource__bool__o *)v138,
               (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
      sort = (__int64)System_Linq_Enumerable__ToArray_object_(
                        v139,
                        (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
      v120 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
    }
LABEL_46:
    if ( !v120 )
      goto LABEL_62;
    goto LABEL_47;
  }
  v121 = v119->fields.userServantEntity;
  v122 = this->fields.eventId;
  v123 = (EventFortificationListViewItem_o *)sub_1BCAA2C(EventFortificationListViewItem_TypeInfo, v45, v117, v118);
  EventFortificationListViewItem___ctor(v123, v121, v122, v116, setupInfo, v119, 0LL);
  v127 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_UserServantEntity__bool__TypeInfo, v124, v125, v126);
  System_Func_object__bool____ctor(
    v127,
    (Il2CppObject *)v43,
    Method_EventFortificationListViewManager___c__DisplayClass48_0__CreateList_b__1__,
    0LL);
  v128 = System_Linq_Enumerable__Where_object_(
           v120,
           (System_Func_TSource__bool__o *)v127,
           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  sort = (__int64)System_Linq_Enumerable__ToArray_object_(
                    v128,
                    (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
  if ( !*(_QWORD *)(v43 + 16) )
    goto LABEL_62;
  v120 = (System_Collections_Generic_IEnumerable_TSource__o *)sort;
  sort = EventFortificationWorkItem__get_IsNpc(*(EventFortificationWorkItem_o **)(v43 + 16), v45);
  if ( (sort & 1) == 0 )
    goto LABEL_46;
  sort = (__int64)this->fields.itemList;
  if ( !sort )
    goto LABEL_62;
  v133 = *(_QWORD *)(sort + 16);
  v134 = Method_System_Collections_Generic_List_ListViewItem__Add__;
  ++*(_DWORD *)(sort + 28);
  if ( !v133 )
    goto LABEL_62;
  v135 = *(int *)(sort + 24);
  if ( (unsigned int)v135 >= *(_DWORD *)(v133 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)sort,
      (Il2CppObject *)v123,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
    if ( !v120 )
      goto LABEL_62;
  }
  else
  {
    v136 = v133 + 8 * v135;
    *(_DWORD *)(sort + 24) = v135 + 1;
    *(_QWORD *)(v136 + 32) = v123;
    sub_1BCA784((PartyOrganizationUtility_o *)(v136 + 32), (int64_t)v123, v117, v118, v129, v130, v131, v132);
    if ( !v120 )
      goto LABEL_62;
  }
LABEL_47:
  if ( (int)v120[1].monitor >= 1 )
  {
    v140 = 0LL;
    v141 = (unsigned int)v120[1].monitor - 1LL;
    while ( 1 )
    {
      v142 = (UserServantEntity_o *)*((_QWORD *)&v120[2].klass + v140);
      v143 = this->fields.eventId;
      v144 = *v160;
      v145 = (EventFortificationListViewItem_o *)sub_1BCAA2C(EventFortificationListViewItem_TypeInfo, v45, v117, v118);
      EventFortificationListViewItem___ctor(v145, v142, v143, v116, setupInfo, v144, 0LL);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v152 = *(_QWORD *)(sort + 16);
      v153 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v152 )
        break;
      v154 = *(int *)(sort + 24);
      if ( (unsigned int)v154 >= *(_DWORD *)(v152 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v145,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v153[4] + 192LL) + 112LL));
      }
      else
      {
        v155 = v152 + 8 * v154;
        *(_DWORD *)(sort + 24) = v154 + 1;
        *(_QWORD *)(v155 + 32) = v145;
        sub_1BCA784((PartyOrganizationUtility_o *)(v155 + 32), (int64_t)v145, v146, v147, v148, v149, v150, v151);
      }
      if ( v141 == v140 )
        goto LABEL_57;
      if ( ++v140 >= (unsigned __int64)LODWORD(v120[1].monitor) )
        goto LABEL_56;
    }
LABEL_62:
    sub_1BCAA3C(sort, v45);
  }
LABEL_57:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
  sort = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_62;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  EventFortificationListViewManager__SetStatusKind(this, this->fields.modeKind, v157);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  EventFortificationListViewManager__SetFilterButtonImage(this, v158);
}


void __fastcall EventFortificationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  EventFortificationListViewManager_c *v3; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4B1A0C9 & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationListViewManager_TypeInfo, v1, v2);
    byte_4B1A0C9 = 1;
  }
  v3 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo, v1);
    v3 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v3->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1BCAA3C(0LL, v1);
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
    sub_1BCAA3C(0LL, v3);
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
  EventFortificationListViewManager__SetMode_46467428(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_46467428(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_46467428(this, 2, v6);
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
  EventFortificationListViewManager__SetMode_46467428(this, 2, v5);
}


void __fastcall EventFortificationListViewManager__EndPushRequest(
        EventFortificationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  EventFortificationListViewManager__ModifyList(this, 0, method);
  EventFortificationListViewManager__SetMode_46467428(this, 2, v4);
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

  if ( (byte_4B1A0E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B1A0E0 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EventFortificationListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
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

  if ( (byte_4B1A0E4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B1A0E4 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
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

  if ( (byte_4B1A0DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B1A0DD = 1;
  }
  EventFortificationListViewManager__RefreshListDisp(this, (const MethodInfo *)isDecide);
  EventFortificationListViewManager__ModifyList(this, 0, v4);
  EventFortificationListViewManager__SetMode_46467428(this, 2, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
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
    sub_1BCA784(p_requestCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w25
  int32_t v13; // w22
  int64_t v14; // x21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__c *klass; // x8
  Il2CppClass *parent; // x23
  Il2CppClass *declaringType; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B1A0DE & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B1A0DE = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    v14 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v13,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
      *(_QWORD *)&v20.fields.currentCryptoKey = declaringType;
      *(_QWORD *)&v20.fields.fakeValue = parent;
      ++v13;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL) == svtId )
        ++v14;
      if ( size == v13 )
        return v14;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1BCAA3C(itemList, *(_QWORD *)&svtId);
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
  __int64 v9; // x2
  int32_t v10; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4B1A0DC & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationListViewItem_TypeInfo, index, list);
    this = (EventFortificationListViewManager_o *)sub_1BCA7E0(
                                                    &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                    v8,
                                                    v9);
    byte_4B1A0DC = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1BCAA3C(this, index);
    v10 = 0;
    while ( 1 )
    {
      this = (EventFortificationListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)list,
                                                      v10,
                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( sum == ++v10 )
        return 1;
    }
    *index = v10;
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
  __int64 v6; // x2
  EventFortificationListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1A0D4 & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    byte_4B1A0D4 = 1;
  }
  result = (EventFortificationListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventFortificationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t itemList; // x0
  int v36; // w25
  int32_t v37; // w24
  __int64 methodPtr_low; // x10
  __int64 v39; // x8
  __int128 v40; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  __int128 v45; // q0
  struct System_Int64_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_long__o *v50; // x0
  int v51; // w21
  System_Int64_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Int64_array *v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Int64_array **v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-80h]

  if ( (byte_4B1A0E8 & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationListViewItem_TypeInfo, choiceList, unchoiceList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    byte_4B1A0E8 = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v36 = *(_DWORD *)(itemList + 24);
  if ( v36 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v37,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v39 = *(_QWORD *)(itemList + 120);
      if ( v39 && *(_BYTE *)(itemList + 193) )
      {
        if ( *(_BYTE *)(itemList + 162) )
        {
          v40 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v69 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v69, 0LL);
          if ( !v27 )
            goto LABEL_37;
          items = v27->fields._items;
          v42 = Method_System_Collections_Generic_List_long__Add__;
          ++v27->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v27->fields._size;
          v28 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v49 = v42[4];
            v50 = v27;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v50,
              v28,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v49 + 192) + 112LL));
            goto LABEL_28;
          }
          v44 = &items->obj.klass + size;
          v27->fields._size = size + 1;
        }
        else
        {
          v45 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v45;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v68 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v68, 0LL);
          if ( !v23 )
            goto LABEL_37;
          v46 = v23->fields._items;
          v47 = Method_System_Collections_Generic_List_long__Add__;
          ++v23->fields._version;
          if ( !v46 )
            goto LABEL_37;
          v48 = v23->fields._size;
          v28 = itemList;
          if ( (unsigned int)v48 >= v46->max_length )
          {
            v49 = v47[4];
            v50 = v23;
            goto LABEL_27;
          }
          v44 = &v46->obj.klass + v48;
          v23->fields._size = v48 + 1;
        }
        v44[4] = (Il2CppClass *)v28;
      }
LABEL_28:
      if ( v36 == ++v37 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v51 = v27->fields._size + v23->fields._size;
  if ( v51 < 1 )
  {
    *choiceList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)choiceList, 0LL, v29, v30, v31, v32, v33, v34);
    v66 = unchoiceList;
    v59 = 0LL;
    *unchoiceList = 0LL;
  }
  else
  {
    v52 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v52;
    sub_1BCA784((PartyOrganizationUtility_o *)choiceList, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    v59 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v59;
    v66 = unchoiceList;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v66, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  return v51 > 0;
}


bool __fastcall EventFortificationListViewManager__GetSwapLockList(
        EventFortificationListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t itemList; // x0
  int v36; // w25
  int32_t v37; // w24
  __int64 methodPtr_low; // x10
  __int64 v39; // x8
  __int128 v40; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  __int128 v45; // q0
  struct System_Int64_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_long__o *v50; // x0
  int v51; // w21
  System_Int64_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Int64_array *v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Int64_array **v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-80h]

  if ( (byte_4B1A0E7 & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationListViewItem_TypeInfo, lockList, unlockList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    byte_4B1A0E7 = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v36 = *(_DWORD *)(itemList + 24);
  if ( v36 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v37,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v39 = *(_QWORD *)(itemList + 120);
      if ( v39 && *(_BYTE *)(itemList + 192) )
      {
        if ( *(_BYTE *)(itemList + 161) )
        {
          v40 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v69 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v69, 0LL);
          if ( !v27 )
            goto LABEL_37;
          items = v27->fields._items;
          v42 = Method_System_Collections_Generic_List_long__Add__;
          ++v27->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v27->fields._size;
          v28 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v49 = v42[4];
            v50 = v27;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v50,
              v28,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v49 + 192) + 112LL));
            goto LABEL_28;
          }
          v44 = &items->obj.klass + size;
          v27->fields._size = size + 1;
        }
        else
        {
          v45 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v45;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v68 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v68, 0LL);
          if ( !v23 )
            goto LABEL_37;
          v46 = v23->fields._items;
          v47 = Method_System_Collections_Generic_List_long__Add__;
          ++v23->fields._version;
          if ( !v46 )
            goto LABEL_37;
          v48 = v23->fields._size;
          v28 = itemList;
          if ( (unsigned int)v48 >= v46->max_length )
          {
            v49 = v47[4];
            v50 = v23;
            goto LABEL_27;
          }
          v44 = &v46->obj.klass + v48;
          v23->fields._size = v48 + 1;
        }
        v44[4] = (Il2CppClass *)v28;
      }
LABEL_28:
      if ( v36 == ++v37 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v51 = v27->fields._size + v23->fields._size;
  if ( v51 < 1 )
  {
    *lockList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)lockList, 0LL, v29, v30, v31, v32, v33, v34);
    v66 = unlockList;
    v59 = 0LL;
    *unlockList = 0LL;
  }
  else
  {
    v52 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v52;
    sub_1BCA784((PartyOrganizationUtility_o *)lockList, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    v59 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v59;
    v66 = unlockList;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v66, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  return v51 > 0;
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
  __int64 v2; // x2
  EventFortificationListViewManager_c *v3; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_4B1A0CA & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationListViewManager_TypeInfo, v1, v2);
    byte_4B1A0CA = 1;
  }
  v3 = EventFortificationListViewManager_TypeInfo;
  if ( !EventFortificationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationListViewManager_TypeInfo, v1);
    v3 = EventFortificationListViewManager_TypeInfo;
  }
  servantSortStatus = v3->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_1BCAA3C(0LL, v1);
  ListViewSort__InitLoad(servantSortStatus, 0LL);
}


void __fastcall EventFortificationListViewManager__ModifyItem(
        EventFortificationListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x19
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 methodPtr_low; // x11
  EventFortificationListViewItem_o *current; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v31; // q0
  int64_t v32; // x0
  Il2CppObject v33; // q0
  UnityEngine_Object_o *viewObject; // x21
  __int64 v35; // x1
  struct ListViewObject_o *v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4B1A0D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11, v12);
    sub_1BCA7E0(&EventFortificationListViewItem_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B1A0D1 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_37;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_37;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v39,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v40.fields._list = *(_OWORD *)&v39.fields.currentCryptoKey;
      v40.fields._current = (Il2CppObject *)v39.fields.fakeValue;
      while ( 1 )
      {
        v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v40,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v26 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v40,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v40.fields._current
          && (methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v40.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventFortificationListViewItem_c *)v40.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v40.fields._current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_1BCAA3C(v26, v27);
            userServantEntity = current->fields.userServantEntity;
            if ( !userServantEntity )
              sub_1BCAA3C(v26, v27);
            v31 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v39.fields.fakeValue = v31;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27);
            v38 = v39;
            v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v38, 0LL);
            v33 = Entity[2];
            *(Il2CppObject *)&v37.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v37.fields.fakeValue = v33;
            if ( v32 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v37, 0LL) )
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
          sub_1BCAA3C(v26, v27);
LABEL_26:
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v36 = current->fields.viewObject;
          if ( !v36 )
            sub_1BCAA3C(0LL, v35);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v36->klass->vtable._5_SetItem.method)(
            v36,
            current,
            v36->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_37:
    sub_1BCAA3C(Instance, v23);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__ModifyList(
        EventFortificationListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t sort; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v17; // x25
  int64_t v18; // x20
  int size; // w28
  unsigned int v20; // w26
  __int64 v21; // x8
  __int128 v22; // q0
  int64_t v23; // x22
  int32_t v24; // w23
  int64_t v25; // x24
  __int64 methodPtr_low; // x10
  __int64 v27; // x8
  __int128 v28; // q0
  __int64 v29; // x8
  __int128 v30; // q0
  int64_t v31; // x0
  const MethodInfo *v32; // x4
  bool isIconSizeChangea; // [xsp+Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+70h] [xbp-80h]

  if ( (byte_4B1A0D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange, method);
    sub_1BCA7E0(&EventFortificationListViewItem_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B1A0D3 = 1;
  }
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_33;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !sort )
    goto LABEL_33;
  sort = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_33;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  v17 = *(_QWORD *)(sort + 24);
  v18 = sort;
  if ( (int)v17 >= 1 )
  {
    size = itemList->fields._size;
    v20 = 0;
    isIconSizeChangea = isIconSizeChange;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v18 + 8LL * (int)v20 + 32);
      if ( !v21 )
        break;
      v22 = *(_OWORD *)(v21 + 32);
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(v21 + 16);
      *(_OWORD *)&v37.fields.fakeValue = v22;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isIconSizeChange);
      v36 = v37;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v36, 0LL);
      if ( size >= 1 )
      {
        v23 = sort;
        v24 = 0;
        while ( 1 )
        {
          sort = (int64_t)this->fields.itemList;
          if ( !sort )
            goto LABEL_33;
          sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)sort,
                            v24,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !sort )
            goto LABEL_33;
          v25 = sort;
          methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)methodPtr_low
            || *(EventFortificationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * methodPtr_low - 8) != EventFortificationListViewItem_TypeInfo )
          {
            goto LABEL_33;
          }
          v27 = *(_QWORD *)(sort + 120);
          if ( v27 )
          {
            v28 = *(_OWORD *)(v27 + 32);
            *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(v27 + 16);
            *(_OWORD *)&v37.fields.fakeValue = v28;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isIconSizeChange);
            v35 = v37;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v35, 0LL);
            if ( sort == v23 )
              break;
          }
          if ( size == ++v24 )
            goto LABEL_29;
        }
        v29 = *(_QWORD *)(v25 + 120);
        if ( !v29 )
          break;
        v30 = *(_OWORD *)(v29 + 32);
        *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(v29 + 16);
        *(_OWORD *)&v37.fields.fakeValue = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isIconSizeChange);
        v34 = v37;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v34, 0LL);
        EventFortificationListViewManager__ModifyLockItem(this, v31, 1, isIconSizeChangea, v32);
      }
LABEL_29:
      if ( ++v20 == (_DWORD)v17 )
        return;
      if ( v20 >= *(_DWORD *)(v18 + 24) )
        sub_1BCAA44(sort, isIconSizeChange);
    }
LABEL_33:
    sub_1BCAA3C(sort, isIconSizeChange);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v30; // w24
  int64_t v31; // x0
  __int64 v32; // x1
  __int64 methodPtr_low; // x11
  EventFortificationListViewItem_o *current; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v36; // q0
  int64_t v37; // x0
  Il2CppObject v38; // q0
  int64_t v39; // x23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v41; // x1
  struct ListViewObject_o *v42; // x0
  __int64 v43; // x1
  ListViewObject_o *v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4B1A0D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, isInit);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v15, v16);
    sub_1BCA7E0(&EventFortificationListViewItem_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    byte_4B1A0D2 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_45;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_45;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v47,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v48.fields._list = *(_OWORD *)&v47.fields.currentCryptoKey;
      v48.fields._current = (Il2CppObject *)v47.fields.fakeValue;
      v30 = !isIconSizeChange && isInit;
      while ( 1 )
      {
        v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v48,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v31 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v48,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v48.fields._current
          && (methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v48.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventFortificationListViewItem_c *)v48.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
            current = (EventFortificationListViewItem_o *)v48.fields._current;
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
          sub_1BCAA3C(v31, v32);
        userServantEntity = current->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1BCAA3C(v31, v32);
        v36 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v47.fields.fakeValue = v36;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
        v46 = v47;
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v46, 0LL);
        v38 = Entity[2];
        v39 = v37;
        *(Il2CppObject *)&v45.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v45.fields.fakeValue = v38;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v45, 0LL);
        if ( v39 == v31 )
          EventFortificationListViewItem__SetUserServantEntity(current, (UserServantEntity_o *)Entity, 0LL);
LABEL_26:
        if ( v30 )
        {
          if ( !current )
            sub_1BCAA3C(v31, v32);
          EventFortificationListViewItem__ModifyLockItem(current, 0LL);
          EventFortificationListViewItem__ModifyChoiceItem(current, 0LL);
          EventFortificationListViewItem__ModifyPushItem(current, 0LL);
        }
        else if ( !current )
        {
          sub_1BCAA3C(v31, v32);
        }
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v42 = current->fields.viewObject;
          if ( !v42 )
            sub_1BCAA3C(0LL, v41);
          ((void (__fastcall *)(struct ListViewObject_o *, EventFortificationListViewItem_o *, Il2CppMethodPointer))v42->klass->vtable._5_SetItem.method)(
            v42,
            current,
            v42->klass->vtable._6_SetItem.methodPtr);
          if ( isIconSizeChange )
          {
            v44 = current->fields.viewObject;
            if ( !v44 )
              sub_1BCAA3C(0LL, v43);
            ListViewObject__SetItemSeed(v44, (ListViewItem_o *)current, this->fields.seed, 0LL);
          }
        }
      }
    }
LABEL_45:
    sub_1BCAA3C(Instance, v27);
  }
}


void __fastcall EventFortificationListViewManager__OnClickBack(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Action_bool__UserServantEntity__o *selectAfterCallback; // x20

  if ( (byte_4B1A0EE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventFortificationListViewManager_OnClickBack__, method, v2);
    byte_4B1A0EE = 1;
  }
  v4 = Method_EventFortificationListViewManager_OnClickBack__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewManager_OnClickBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  selectAfterCallback = this->fields.selectAfterCallback;
  if ( selectAfterCallback )
  {
    this->fields.selectAfterCallback = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectAfterCallback, 0LL, v6, v7, v8, v9, v10, v11);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4B1A0E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventFortificationListViewManager_OnClickBonusFilterKind__, method, v2);
    byte_4B1A0E1 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_EventFortificationListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewManager_OnClickBonusFilterKind__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(0LL, v6);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnClickChoiceTab(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  EventFortificationListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2

  if ( (byte_4B1A0EB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventFortificationListViewManager_EndClickTabChoice__, method, v2);
    sub_1BCA7E0(&Method_EventFortificationListViewManager_OnClickChoiceTab__, v4, v5);
    sub_1BCA7E0(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B1A0EB = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v8 = Method_EventFortificationListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewManager_OnClickChoiceTab__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v13 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                         EventFortificationListViewManager_RequestCallbackFunc_TypeInfo,
                                                                         v10,
                                                                         v11,
                                                                         v12);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabChoice__,
        v14);
      EventFortificationListViewManager__StatusRequest(this, v13, v15);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 2, v11);
      EventFortificationListViewManager__RefreshListDisp(this, v16);
      EventFortificationListViewManager__ModifyList(this, 0, v17);
      EventFortificationListViewManager__SetMode_46467428(this, 2, v18);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickCollectLock(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  EventFortificationListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2

  if ( (byte_4B1A0EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventFortificationListViewManager_EndClickTabLock__, method, v2);
    sub_1BCA7E0(&Method_EventFortificationListViewManager_OnClickCollectLock__, v4, v5);
    sub_1BCA7E0(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B1A0EA = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v8 = Method_EventFortificationListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewManager_OnClickCollectLock__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v13 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                         EventFortificationListViewManager_RequestCallbackFunc_TypeInfo,
                                                                         v10,
                                                                         v11,
                                                                         v12);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabLock__,
        v14);
      EventFortificationListViewManager__StatusRequest(this, v13, v15);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 1, v11);
      EventFortificationListViewManager__RefreshListDisp(this, v16);
      EventFortificationListViewManager__ModifyList(this, 0, v17);
      EventFortificationListViewManager__SetMode_46467428(this, 2, v18);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickFilterKind(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantFilterSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B1A0DF & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventFortificationListViewManager_EndSelectFilterKind__, v4, v5);
    sub_1BCA7E0(&Method_EventFortificationListViewManager_OnClickFilterKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B1A0DF = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_EventFortificationListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewManager_OnClickFilterKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v15,
                                                      v16,
                                                      v17);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantFilterSelectMenu(v14, 1, sort, v18, 0, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  EventFortificationListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B1A0E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventFortificationListViewManager_EndClickTabStatus__, method, v2);
    sub_1BCA7E0(&Method_EventFortificationListViewManager_OnClickNormalStatus__, v4, v5);
    sub_1BCA7E0(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B1A0E9 = 1;
  }
  if ( this->fields.modeKind )
  {
    v8 = Method_EventFortificationListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewManager_OnClickNormalStatus__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                       EventFortificationListViewManager_RequestCallbackFunc_TypeInfo,
                                                                       v10,
                                                                       v11,
                                                                       v12);
    EventFortificationListViewManager_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndClickTabStatus__,
      v14);
    EventFortificationListViewManager__StatusRequest(this, v13, v15);
  }
}


void __fastcall EventFortificationListViewManager__OnClickPushTab(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  EventFortificationListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2

  if ( (byte_4B1A0EC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventFortificationListViewManager_EndClickTabPush__, method, v2);
    sub_1BCA7E0(&Method_EventFortificationListViewManager_OnClickPushTab__, v4, v5);
    sub_1BCA7E0(&EventFortificationListViewManager_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B1A0EC = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v8 = Method_EventFortificationListViewManager_OnClickPushTab__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickPushTab__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewManager_OnClickPushTab__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v13 = (EventFortificationListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                         EventFortificationListViewManager_RequestCallbackFunc_TypeInfo,
                                                                         v10,
                                                                         v11,
                                                                         v12);
      EventFortificationListViewManager_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndClickTabPush__,
        v14);
      EventFortificationListViewManager__StatusRequest(this, v13, v15);
    }
    else
    {
      EventFortificationListViewManager__SetStatusKind(this, 3, v11);
      EventFortificationListViewManager__RefreshListDisp(this, v16);
      EventFortificationListViewManager__ModifyList(this, 0, v17);
      EventFortificationListViewManager__SetMode_46467428(this, 2, v18);
    }
  }
}


void __fastcall EventFortificationListViewManager__OnClickScaleChange(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  EventFortificationListViewManager_o *v15; // x0
  int v16; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v19; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2

  if ( (byte_4B1A0EF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventFortificationListViewManager_OnClickScaleChange__, method, v2);
    byte_4B1A0EF = 1;
  }
  v4 = Method_EventFortificationListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewManager_OnClickScaleChange__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v15 = this;
    v16 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v15 = this;
    v16 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v15 = this;
    v16 = 1;
LABEL_11:
    v15->fields.seed = smallSizeSeed;
    p_seed = &v15->fields.seed;
    *((_DWORD *)p_seed + 106) = v16;
    sub_1BCA784((PartyOrganizationUtility_o *)p_seed, (int64_t)smallSizeSeed, v7, v8, v9, v10, v11, v12);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v19 = this->fields.scaleType,
        sort->fields.iconScaleKind = v19,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v19, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1BCAA3C(sort, v6);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  EventFortificationListViewManager__ModifyList(this, 1, v21);
  EventFortificationListViewManager__SetMode_46467428(this, 2, v22);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventFortificationListViewManager__OnClickSelectObject(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ListViewObject_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  int64_t fortificationConfirmDialog; // x0
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  __int64 methodPtr_low; // x10
  ListViewObject_o **p_targetInUserServantEntity; // x23
  EventFortificationListViewItem_o *Item; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  ListViewObject_o **p_targetOutUserServantEntity; // x24
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Collections_Generic_List_object__o *v57; // x22
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Collections_Generic_List_int__o *v61; // x21
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v70; // q1
  struct UserServantEntity_o *v71; // x8
  __int128 v72; // q0
  int64_t v73; // x25
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct EventFortificationWorkItem_o *v80; // x8
  int64_t v81; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct System_Object_array *items; // x8
  _QWORD *v89; // x9
  __int64 size; // x10
  Il2CppClass **v91; // x0
  int64_t v92; // x1
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  struct System_Object_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  Il2CppClass **v102; // x0
  struct UserServantEntity_o *v103; // x8
  __int128 v104; // q0
  struct UserServantEntity_o *v105; // x8
  __int128 v106; // q0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  struct UserServantEntity_o *v113; // x1
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  struct EventFortificationWorkItem_o *v120; // x8
  int64_t v121; // x1
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  Il2CppClass **v131; // x0
  struct System_Int32_array *v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  struct FortificationConfirmDialogComponent_o *v135; // x23
  System_Object_array *v136; // x22
  System_Int32_array *v137; // x21
  System_String_o *TargetTeamName; // x24
  System_String_o *TargetDetailName; // x25
  int32_t TargetWorkType; // w20
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x3
  System_Action_o *v144; // x26
  FortificationConfirmDialogComponent_o *v145; // x0
  int32_t v146; // w1
  struct System_Int32_array *v147; // x8
  _QWORD *v148; // x9
  __int64 v149; // x10
  struct FortificationConfirmDialogComponent_o *v150; // x23
  __int64 v151; // x1
  __int64 v152; // x2
  __int64 v153; // x3
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  struct System_Int32_array *v160; // x8
  _QWORD *v161; // x9
  __int64 v162; // x10
  struct System_Object_array *v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  Il2CppClass **v166; // x0
  struct System_Int32_array *v167; // x8
  _QWORD *v168; // x9
  __int64 v169; // x10
  __int64 v170; // x1
  __int64 v171; // x2
  __int64 v172; // x3
  const MethodInfo *v173; // [xsp+0h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v174; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v175; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v176; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v177; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v178; // [xsp+90h] [xbp-70h]

  v3 = obj;
  if ( (byte_4B1A0D8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__, v9, v10);
    sub_1BCA7E0(&Method_EventFortificationListViewManager_OnClickSelectObject__, v11, v12);
    sub_1BCA7E0(&EventFortificationListViewObject_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v29, v30);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    byte_4B1A0D8 = 1;
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
  v36 = Method_EventFortificationListViewManager_OnClickSelectObject__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectObject__ + 83) & 2) != 0 )
    v36 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewManager_OnClickSelectObject__);
  v37 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v36, v36[4]);
  OverwriteAssetSoundName__PlaySystemSe(v37, 0, 0LL);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetInUserServantEntity, 0LL, v41, v42, v43, v44, v45, v46);
  p_targetOutUserServantEntity = (ListViewObject_o **)&this->fields.targetOutUserServantEntity;
  this->fields.targetOutUserServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetOutUserServantEntity, 0LL, v48, v49, v50, v51, v52, v53);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_77;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  fortificationConfirmDialog = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fortificationConfirmDialog )
    goto LABEL_77;
  DataManager__GetMasterData_object_(
    (DataManager_o *)fortificationConfirmDialog,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v57 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v54,
                                                       v55,
                                                       v56);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v61 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v58,
                                                    v59,
                                                    v60);
  System_Collections_Generic_List_int____ctor(
    v61,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    goto LABEL_77;
  userServantEntity = targetFortificationWorkItem->fields.userServantEntity;
  if ( userServantEntity )
  {
    v70 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v178.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v178.fields.fakeValue = v70;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj);
    v177 = v178;
    fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v177, 0LL);
    if ( Item )
    {
      v71 = Item->fields.userServantEntity;
      if ( v71 )
      {
        v72 = *(_OWORD *)&v71->fields.id.fields.fakeValue;
        v73 = fortificationConfirmDialog;
        *(_OWORD *)&v176.fields.currentCryptoKey = *(_OWORD *)&v71->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v176.fields.fakeValue = v72;
        fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v176, 0LL);
        v80 = this->fields.targetFortificationWorkItem;
        if ( v73 == fortificationConfirmDialog )
        {
          if ( v80 )
          {
            v81 = (int64_t)v80->fields.userServantEntity;
            *p_targetOutUserServantEntity = (ListViewObject_o *)v81;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.targetOutUserServantEntity,
              v81,
              v74,
              v75,
              v76,
              v77,
              v78,
              v79);
            if ( v57 )
            {
              obj = *p_targetOutUserServantEntity;
              items = v57->fields._items;
              v89 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v57->fields._version;
              if ( items )
              {
                size = v57->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v57,
                    (Il2CppObject *)obj,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
                }
                else
                {
                  v91 = &items->obj.klass + size;
                  v57->fields._size = size + 1;
                  v91[4] = (Il2CppClass *)obj;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)obj, v82, v83, v84, v85, v86, v87);
                }
                fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
                if ( fortificationConfirmDialog )
                {
                  fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                                 (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                                 (const MethodInfo *)obj);
                  if ( v61 )
                  {
                    v147 = v61->fields._items;
                    v148 = Method_System_Collections_Generic_List_int__Add__;
                    ++v61->fields._version;
                    if ( v147 )
                    {
                      v149 = v61->fields._size;
                      if ( (unsigned int)v149 >= v147->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v61,
                          fortificationConfirmDialog,
                          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v61->fields._size = v149 + 1;
                        v147->m_Items[v149 + 1] = fortificationConfirmDialog;
                      }
                      v150 = this->fields.fortificationConfirmDialog;
                      v136 = System_Collections_Generic_List_object___ToArray(
                               v57,
                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                      v137 = System_Collections_Generic_List_int___ToArray(
                               v61,
                               (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
                      TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
                      TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
                      TargetWorkType = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
                      v144 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v151, v152, v153);
                      System_Action___ctor(
                        v144,
                        (Il2CppObject *)this,
                        (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                        0LL);
                      if ( v150 )
                      {
                        v146 = 1;
LABEL_74:
                        v145 = v150;
                        goto LABEL_75;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if ( v80 )
        {
          v103 = v80->fields.userServantEntity;
          if ( !v103 )
            return;
          v104 = *(_OWORD *)&v103->fields.id.fields.fakeValue;
          *(_OWORD *)&v178.fields.currentCryptoKey = *(_OWORD *)&v103->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v178.fields.fakeValue = v104;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj);
          v175 = v178;
          fortificationConfirmDialog = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v175, 0LL);
          v105 = Item->fields.userServantEntity;
          if ( v105 )
          {
            v106 = *(_OWORD *)&v105->fields.id.fields.fakeValue;
            *(_OWORD *)&v174.fields.currentCryptoKey = *(_OWORD *)&v105->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v174.fields.fakeValue = v106;
            if ( fortificationConfirmDialog == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                 &v174,
                                                 0LL) )
              return;
            v113 = Item->fields.userServantEntity;
            this->fields.targetInUserServantEntity = v113;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.targetInUserServantEntity,
              (int64_t)v113,
              v107,
              v108,
              v109,
              v110,
              v111,
              v112);
            v120 = this->fields.targetFortificationWorkItem;
            if ( v120 )
            {
              v121 = (int64_t)v120->fields.userServantEntity;
              *p_targetOutUserServantEntity = (ListViewObject_o *)v121;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&this->fields.targetOutUserServantEntity,
                v121,
                v114,
                v115,
                v116,
                v117,
                v118,
                v119);
              if ( v57 )
              {
                obj = *p_targetOutUserServantEntity;
                v128 = v57->fields._items;
                v129 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v57->fields._version;
                if ( v128 )
                {
                  v130 = v57->fields._size;
                  if ( (unsigned int)v130 >= v128->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v57,
                      (Il2CppObject *)obj,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v131 = &v128->obj.klass + v130;
                    v57->fields._size = v130 + 1;
                    v131[4] = (Il2CppClass *)obj;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v131 + 4),
                      (int64_t)obj,
                      v122,
                      v123,
                      v124,
                      v125,
                      v126,
                      v127);
                  }
                  fortificationConfirmDialog = (int64_t)this->fields.targetFortificationWorkItem;
                  if ( fortificationConfirmDialog )
                  {
                    fortificationConfirmDialog = EventFortificationWorkItem__get_AddPoint(
                                                   (EventFortificationWorkItem_o *)fortificationConfirmDialog,
                                                   (const MethodInfo *)obj);
                    if ( v61 )
                    {
                      v160 = v61->fields._items;
                      v161 = Method_System_Collections_Generic_List_int__Add__;
                      ++v61->fields._version;
                      if ( v160 )
                      {
                        v162 = v61->fields._size;
                        if ( (unsigned int)v162 >= v160->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v61,
                            fortificationConfirmDialog,
                            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v161[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v61->fields._size = v162 + 1;
                          v160->m_Items[v162 + 1] = fortificationConfirmDialog;
                        }
                        obj = *p_targetInUserServantEntity;
                        v163 = v57->fields._items;
                        v164 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                        ++v57->fields._version;
                        if ( v163 )
                        {
                          v165 = v57->fields._size;
                          if ( (unsigned int)v165 >= v163->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v57,
                              (Il2CppObject *)obj,
                              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v166 = &v163->obj.klass + v165;
                            v57->fields._size = v165 + 1;
                            v166[4] = (Il2CppClass *)obj;
                            sub_1BCA784(
                              (PartyOrganizationUtility_o *)(v166 + 4),
                              (int64_t)obj,
                              v154,
                              v155,
                              v156,
                              v157,
                              v158,
                              v159);
                          }
                          fortificationConfirmDialog = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
                          v167 = v61->fields._items;
                          v168 = Method_System_Collections_Generic_List_int__Add__;
                          ++v61->fields._version;
                          if ( v167 )
                          {
                            v169 = v61->fields._size;
                            if ( (unsigned int)v169 >= v167->max_length )
                            {
                              System_Collections_Generic_List_int___AddWithResize(
                                v61,
                                fortificationConfirmDialog,
                                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v61->fields._size = v169 + 1;
                              v167->m_Items[v169 + 1] = fortificationConfirmDialog;
                            }
                            v150 = this->fields.fortificationConfirmDialog;
                            v136 = System_Collections_Generic_List_object___ToArray(
                                     v57,
                                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
                            v137 = System_Collections_Generic_List_int___ToArray(
                                     v61,
                                     (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
                            TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
                            TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
                            TargetWorkType = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
                            v144 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v170, v171, v172);
                            System_Action___ctor(
                              v144,
                              (Il2CppObject *)this,
                              (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
                              0LL);
                            if ( v150 )
                            {
                              v146 = 2;
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
    sub_1BCAA3C(fortificationConfirmDialog, obj);
  }
  if ( !Item )
    goto LABEL_77;
  v92 = (int64_t)Item->fields.userServantEntity;
  *p_targetInUserServantEntity = (ListViewObject_o *)v92;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetInUserServantEntity, v92, v62, v63, v64, v65, v66, v67);
  if ( !v57 )
    goto LABEL_77;
  obj = *p_targetInUserServantEntity;
  v99 = v57->fields._items;
  v100 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
  ++v57->fields._version;
  if ( !v99 )
    goto LABEL_77;
  v101 = v57->fields._size;
  if ( (unsigned int)v101 >= v99->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v57,
      (Il2CppObject *)obj,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
  }
  else
  {
    v102 = &v99->obj.klass + v101;
    v57->fields._size = v101 + 1;
    v102[4] = (Il2CppClass *)obj;
    sub_1BCA784((PartyOrganizationUtility_o *)(v102 + 4), (int64_t)obj, v93, v94, v95, v96, v97, v98);
  }
  fortificationConfirmDialog = EventFortificationListViewItem__get_AddPoint(Item, 0LL);
  if ( !v61 )
    goto LABEL_77;
  v132 = v61->fields._items;
  v133 = Method_System_Collections_Generic_List_int__Add__;
  ++v61->fields._version;
  if ( !v132 )
    goto LABEL_77;
  v134 = v61->fields._size;
  if ( (unsigned int)v134 >= v132->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v61,
      fortificationConfirmDialog,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
  }
  else
  {
    v61->fields._size = v134 + 1;
    v132->m_Items[v134 + 1] = fortificationConfirmDialog;
  }
  v135 = this->fields.fortificationConfirmDialog;
  v136 = System_Collections_Generic_List_object___ToArray(
           v57,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
  v137 = System_Collections_Generic_List_int___ToArray(
           v61,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(Item, 0LL);
  TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(Item, 0LL);
  TargetWorkType = EventFortificationListViewItem__get_TargetWorkType(Item, 0LL);
  v144 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v141, v142, v143);
  System_Action___ctor(
    v144,
    (Il2CppObject *)this,
    (intptr_t)Method_EventFortificationListViewManager_CloseFortificationConfirmDialog__,
    0LL);
  if ( !v135 )
    goto LABEL_77;
  v145 = v135;
  v146 = 0;
LABEL_75:
  FortificationConfirmDialogComponent__Open(
    v145,
    v146,
    (UserServantEntity_array *)v136,
    v137,
    TargetTeamName,
    TargetDetailName,
    TargetWorkType,
    v144,
    v173);
}


void __fastcall EventFortificationListViewManager__OnClickSelectPush(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x19
  int64_t SelfUserGame; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 methodPtr_low; // x9
  EventFortificationListViewItem_o *Item; // x0
  EventFortificationListViewItem_o **v57; // x20
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v66; // q1
  _QWORD *v67; // x0
  System_Reflection_MethodBase_o *v68; // x0
  const MethodInfo *v69; // x2
  _QWORD *v70; // x0
  System_Reflection_MethodBase_o *v71; // x0
  Il2CppObject *Entity; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v73; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  __int64 v76; // x1
  Il2CppObject *v77; // x25
  System_String_o *v78; // x21
  System_String_o *v79; // x22
  System_Object_array *v80; // x23
  __int64 v81; // x1
  int32_t Rarity; // w26
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x26
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x26
  int32_t v97; // w0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x24
  int32_t v105; // w0
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x24
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x24
  EventFortificationListViewItem_o *v120; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v121; // x9
  ServantEntity_o *servantEntity; // x20
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  int64_t v129; // x20
  System_String_o *v130; // x20
  System_String_o *v131; // x22
  System_String_o *v132; // x23
  Il2CppObject *Instance; // x24
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x3
  CommonConfirmDialog_ClickDelegate_o *v137; // x25
  __int64 v138; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v139; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v140; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16

  if ( (byte_4B1A0F0 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, obj, method);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_EventFortificationListViewManager_OnClickSelectPush__, v16, v17);
    sub_1BCA7E0(&EventFortificationListViewObject_TypeInfo, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&object___TypeInfo, v22, v23);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26, v27);
    sub_1BCA7E0(&Rarity_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33);
    sub_1BCA7E0(&Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__0__, v34, v35);
    sub_1BCA7E0(&EventFortificationListViewManager___c__DisplayClass96_0_TypeInfo, v36, v37);
    sub_1BCA7E0(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v44, v45);
    byte_4B1A0F0 = 1;
  }
  v46 = sub_1BCAA2C(EventFortificationListViewManager___c__DisplayClass96_0_TypeInfo, obj, method, v3);
  System_Object___ctor((Il2CppObject *)v46, 0LL);
  if ( !v46 )
    goto LABEL_62;
  *(_QWORD *)(v46 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 16), (int64_t)this, v49, v50, v51, v52, v53, v54);
  if ( !obj )
    goto LABEL_62;
  methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo )
  {
    sub_1BCACFC(obj);
    goto LABEL_64;
  }
  Item = EventFortificationListViewObject__GetItem(
           (EventFortificationListViewObject_o *)obj,
           (const MethodInfo *)EventFortificationListViewObject_TypeInfo);
  *(_QWORD *)(v46 + 24) = Item;
  v57 = (EventFortificationListViewItem_o **)(v46 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 24), (int64_t)Item, v58, v59, v60, v61, v62, v63);
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_62;
  v64 = *(_QWORD *)(SelfUserGame + 120);
  if ( v64 )
  {
    if ( !*v57 )
      goto LABEL_62;
    userServantEntity = (*v57)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_62;
    v66 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v140.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v140.fields.fakeValue = v66;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v48);
    v139 = v140;
    if ( v64 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v139, 0LL) )
      goto LABEL_14;
    v70 = Method_EventFortificationListViewManager_OnClickSelectPush__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
      v70 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewManager_OnClickSelectPush__);
    v71 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v70, v70[4]);
    OverwriteAssetSoundName__PlaySystemSe(v71, 0, 0LL);
    SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_62;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
               v64,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)SelfUserGame,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_62;
    v73 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48);
    *(_QWORD *)&v141.fields.currentCryptoKey = klass;
    *(_QWORD *)&v141.fields.fakeValue = monitor;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v141, 0LL);
    if ( !v73 )
      goto LABEL_62;
    v77 = DataMasterBase_object__object__int___GetEntity(
            v73,
            SelfUserGame,
            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
    v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v80 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v81);
    SelfUserGame = (int64_t)Rarity__getRarityType(Rarity, 0LL);
    if ( !v80 )
LABEL_62:
      sub_1BCAA3C(SelfUserGame, v48);
    v89 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BCA91C(SelfUserGame, v80->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( !v80->max_length )
      goto LABEL_64;
    v80->m_Items[0] = (Il2CppObject *)v89;
    sub_1BCA784((PartyOrganizationUtility_o *)v80->m_Items, v89, v83, v84, v85, v86, v87, v88);
    if ( !v77 )
      goto LABEL_62;
    SelfUserGame = (int64_t)ServantEntity__getClassName((ServantEntity_o *)v77, 0LL);
    v96 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BCA91C(SelfUserGame, v80->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v80->max_length <= 1 )
      goto LABEL_64;
    v80->m_Items[1] = (Il2CppObject *)v96;
    sub_1BCA784((PartyOrganizationUtility_o *)&v80->m_Items[1], v96, v90, v91, v92, v93, v94, v95);
    v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
            0LL);
    SelfUserGame = (int64_t)ServantEntity__getName((ServantEntity_o *)v77, v97, -1, 0LL);
    v104 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BCA91C(SelfUserGame, v80->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v80->max_length <= 2 )
      goto LABEL_64;
    v80->m_Items[2] = (Il2CppObject *)v104;
    sub_1BCA784((PartyOrganizationUtility_o *)&v80->m_Items[2], v104, v98, v99, v100, v101, v102, v103);
    if ( !*v57 )
      goto LABEL_62;
    SelfUserGame = (int64_t)(*v57)->fields.userServantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    v105 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
    SelfUserGame = (int64_t)Rarity__getRarityType(v105, 0LL);
    v112 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BCA91C(SelfUserGame, v80->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v80->max_length <= 3 )
      goto LABEL_64;
    v80->m_Items[3] = (Il2CppObject *)v112;
    sub_1BCA784((PartyOrganizationUtility_o *)&v80->m_Items[3], v112, v106, v107, v108, v109, v110, v111);
    if ( !*v57 )
      goto LABEL_62;
    SelfUserGame = (int64_t)(*v57)->fields.servantEntity;
    if ( !SelfUserGame )
      goto LABEL_62;
    SelfUserGame = (int64_t)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
    v119 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BCA91C(SelfUserGame, v80->obj.klass->_1.element_class);
      if ( !SelfUserGame )
        goto LABEL_65;
    }
    if ( v80->max_length <= 4 )
      goto LABEL_64;
    v80->m_Items[4] = (Il2CppObject *)v119;
    sub_1BCA784((PartyOrganizationUtility_o *)&v80->m_Items[4], v119, v113, v114, v115, v116, v117, v118);
    v120 = *v57;
    if ( !*v57 )
      goto LABEL_62;
    v121 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v120->fields.userServantEntity;
    if ( !v121 )
      goto LABEL_62;
    servantEntity = v120->fields.servantEntity;
    SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v121[6], 0LL);
    if ( !servantEntity )
      goto LABEL_62;
    SelfUserGame = (int64_t)ServantEntity__getName(servantEntity, SelfUserGame, -1, 0LL);
    v129 = SelfUserGame;
    if ( SelfUserGame )
    {
      SelfUserGame = sub_1BCA91C(SelfUserGame, v80->obj.klass->_1.element_class);
      if ( !SelfUserGame )
      {
LABEL_65:
        v138 = sub_1BCAA60(SelfUserGame);
        sub_1BCA908(v138, 0LL);
      }
    }
    if ( v80->max_length > 5 )
    {
      v80->m_Items[5] = (Il2CppObject *)v129;
      sub_1BCA784((PartyOrganizationUtility_o *)&v80->m_Items[5], v129, v123, v124, v125, v126, v127, v128);
      v130 = System_String__Format_62415728(v79, v80, 0LL);
      v131 = LocalizationManager__Get((System_String_o *)StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v132 = LocalizationManager__Get((System_String_o *)StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v137 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                      CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                      v134,
                                                      v135,
                                                      v136);
      CommonConfirmDialog_ClickDelegate___ctor(
        v137,
        (Il2CppObject *)v46,
        Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__0__,
        0LL);
      SelfUserGame = (int64_t)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v48);
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_30766616(
          (CommonUI_o *)Instance,
          v78,
          v130,
          v131,
          v132,
          1,
          v137,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_62;
    }
LABEL_64:
    sub_1BCAA44(SelfUserGame, v48);
  }
LABEL_14:
  v67 = Method_EventFortificationListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v67 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewManager_OnClickSelectPush__);
  v68 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v67, v67[4]);
  OverwriteAssetSoundName__PlaySystemSe(v68, 8, 0LL);
  EventFortificationListViewManager__PushRequest(this, *v57, v69);
}


void __fastcall EventFortificationListViewManager__OnClickSortAscendingOrder(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B1A0E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventFortificationListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B1A0E5 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_EventFortificationListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnClickSortButton(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantSortSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B1A0E3 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventFortificationListViewManager_EndSelectSortKind__, v4, v5);
    sub_1BCA7E0(&Method_EventFortificationListViewManager_OnClickSortButton__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B1A0E3 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_EventFortificationListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewManager_OnClickSortButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v18 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantSortSelectMenu(v14, 3, sort, 0, v18, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnLongPushListView(
        EventFortificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 methodPtr_low; // x10
  EventFortificationListViewItem_o *Item; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  UserServantEntity_o *userServantEntity; // x21
  CommonUI_o *v22; // x20
  ServantStatusDialog_EndDelegate_o *v23; // x22

  if ( (byte_4B1A0DB & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_EventFortificationListViewManager_EndShowServant__, v5, v6);
    sub_1BCA7E0(&Method_EventFortificationListViewManager_OnLongPushListView__, v7, v8);
    sub_1BCA7E0(&EventFortificationListViewObject_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    byte_4B1A0DB = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v13 = Method_EventFortificationListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_EventFortificationListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewManager_OnLongPushListView__);
    v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
    if ( !obj
      || (methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo
      || (Item = EventFortificationListViewObject__GetItem((EventFortificationListViewObject_o *)obj, v15),
          scrollView = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          !Item)
      || (userServantEntity = Item->fields.userServantEntity,
          v22 = (CommonUI_o *)scrollView,
          v23 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v15,
                                                       v19,
                                                       v20),
          ServantStatusDialog_EndDelegate___ctor(
            v23,
            (Il2CppObject *)this,
            Method_EventFortificationListViewManager_EndShowServant__,
            0LL),
          !v22) )
    {
LABEL_13:
      sub_1BCAA3C(scrollView, v15);
    }
    CommonUI__OpenServantStatusDialog_30776796(v22, 0, userServantEntity, v23, 0LL);
  }
}


void __fastcall EventFortificationListViewManager__OnMoveEnd(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  UnityEngine_Behaviour_o *v9; // x0
  struct System_Action_o *CallbackFunc2; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B1A0D7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A0D7 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
        if ( !v9
          || (UnityEngine_Behaviour__set_enabled(v9, 1, 0LL),
              (v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL)
          || (((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, Il2CppClass *))v9->klass[1]._1.castClass)(
                v9,
                1LL,
                v9->klass[1]._1.declaringType),
              (v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
        {
          sub_1BCAA3C(v9, v8);
        }
        UIScrollView__UpdatePosition((UIScrollView_o *)v9, 0LL);
        CallbackFunc2 = this->fields.CallbackFunc2;
        this->fields.CallbackFunc2 = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.CallbackFunc2, 0LL, v11, v12, v13, v14, v15, v16);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  DataManager_o *limitCountSupport; // x0
  __int64 v22; // x1
  DataManager_o *v23; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v25; // x21
  int64_t v26; // x22
  __int64 v27; // x24
  __int64 v28; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int64 v30; // x1
  __int128 v31; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v34; // x0
  __int128 v35; // q1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  NetworkManager_ResultCallbackFunc_o *v39; // x21
  __int64 v40; // x1
  Il2CppObject *Request_object; // x0
  __int128 v42; // q1
  CardFavoriteRequest_o *v43; // x20
  int32_t v44; // w26
  int32_t v45; // w27
  int32_t v46; // w28
  int32_t v47; // w29
  bool IsLock; // w21
  char v49; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v53; // w0
  __int64 v54; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v58; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v60; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v61; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B1A0F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem, method);
    sub_1BCA7E0(&Method_EventFortificationListViewManager_EndPushRequest__, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B1A0F1 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v23 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v23 || !userServantEntity )
    goto LABEL_18;
  v25 = (UserServantCollectionMaster_o *)limitCountSupport;
  v26 = *(_QWORD *)&v23->fields.m_CachedPtr;
  v28 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
  *(_QWORD *)&v66.fields.currentCryptoKey = v28;
  *(_QWORD *)&v66.fields.fakeValue = v27;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
  if ( !v25 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v25, v26, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v31 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v23->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v65.fields.fakeValue = v31;
  v61 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30);
  v64 = v65;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v64, 0LL);
  v35 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v23->fields.masterLoadThreads;
  v60 = v34;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v35;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v63, 0LL);
  v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v36, v37, v38);
  NetworkManager_ResultCallbackFunc___ctor(
    v39,
    (Il2CppObject *)this,
    Method_EventFortificationListViewManager_EndPushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
  Request_object = NetworkManager__getRequest_object_(
                     v39,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v42 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v43 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v42;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v62, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v49 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v54 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v67.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v53;
  *(_QWORD *)&v67.fields.currentCryptoKey = v54;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v67, 0LL);
  if ( !v43 )
LABEL_18:
    sub_1BCAA3C(limitCountSupport, v22);
  CardFavoriteRequest__beginRequest(
    v43,
    targetUsrSVtId,
    imageLimitCount,
    v44,
    v45,
    v46,
    v47,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v58,
    IsLock,
    v49 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v61 != (struct System_Threading_SynchronizationContext_o *)v60,
    0LL);
}


void __fastcall EventFortificationListViewManager__RefreshListDisp(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v7; // x1
  int32_t size; // w22
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w21

  if ( (byte_4B1A0CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v4, v5);
    byte_4B1A0CE = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EventFortificationListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_9;
  size = ObjectList->fields._size;
  v9 = ObjectList;
  if ( size >= 1 )
  {
    v10 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v9,
                                                                  v10,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( size == ++v10 )
        return;
    }
LABEL_9:
    sub_1BCAA3C(ObjectList, v7);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventFortificationListViewObject__o *ObjectList; // x0
  __int64 v16; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w22
  Il2CppObject *Item; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x24
  const MethodInfo *v25; // x3

  if ( (byte_4B1A0D6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_EventFortificationListViewManager_OnMoveEnd__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__, v11, v12);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v13, v14);
    byte_4B1A0D6 = 1;
  }
  ObjectList = EventFortificationListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v18 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v19 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v18,
               v19,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventFortificationListViewObject__get_Item__);
      v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_EventFortificationListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      EventFortificationListViewObject__Init_46467952((EventFortificationListViewObject_o *)Item, mode, v24, v25);
      if ( size == ++v19 )
        return;
    }
LABEL_10:
    sub_1BCAA3C(ObjectList, v16);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
    delay,
    0LL);
}


void __fastcall EventFortificationListViewManager__SetFilterButtonImage(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v8; // x8

  if ( (byte_4B1A0E2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v4, v5);
    byte_4B1A0E2 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BCAA3C(sort, method);
  }
  v8 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v8, 0LL);
}


void __fastcall EventFortificationListViewManager__SetHeaderMsg(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct UILabel_o *recoveryFatigueInfoMsgLabel; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x22
  System_String_o *v17; // x21
  struct EventFortificationWorkItem_o *v18; // x8
  struct EventFortificationEntity_o *eventFortificationEntity; // x9
  Il2CppObject **v20; // x9
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  System_String_o *v22; // x1
  UILabel_o *v23; // x0
  struct UILabel_o *v24; // x19
  __int64 *v25; // x8

  if ( (byte_4B1A0D0 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_6582/*"FORTIFICATION_GUIDE_HELP"*/, v10, v11);
    byte_4B1A0D0 = 1;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      recoveryFatigueInfoMsgLabel = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v13 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6582/*"FORTIFICATION_GUIDE_HELP"*/, 0LL);
      targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
      if ( !targetFortificationWorkItem )
        goto LABEL_28;
      v17 = (System_String_o *)v13;
      v18 = this->fields.targetFortificationWorkItem;
      if ( (byte_4B1A122 & 1) == 0 )
      {
        v13 = sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
        byte_4B1A122 = 1;
        v18 = this->fields.targetFortificationWorkItem;
      }
      eventFortificationEntity = targetFortificationWorkItem->fields.eventFortificationEntity;
      v20 = eventFortificationEntity
          ? (Il2CppObject **)&eventFortificationEntity->fields.name
          : (Il2CppObject **)&StringLiteral_1/*""*/;
      if ( !v18 )
        goto LABEL_28;
      eventFortificationDetailEntity = v18->fields.eventFortificationDetailEntity;
      if ( !eventFortificationDetailEntity )
        goto LABEL_28;
      v13 = (__int64)System_String__Format_62415592(
                       v17,
                       *v20,
                       (Il2CppObject *)eventFortificationDetailEntity->fields.name,
                       0LL);
      if ( !recoveryFatigueInfoMsgLabel )
        goto LABEL_28;
      v22 = (System_String_o *)v13;
      v23 = recoveryFatigueInfoMsgLabel;
      goto LABEL_27;
    case 1:
      v24 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v25 = &StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      goto LABEL_25;
    case 2:
      v24 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v25 = &StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_25;
    case 3:
      v24 = this->fields.recoveryFatigueInfoMsgLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v25 = &StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_25:
      v13 = (__int64)LocalizationManager__Get((System_String_o *)*v25, 0LL);
      if ( !v24 )
LABEL_28:
        sub_1BCAA3C(v13, v14);
      v22 = (System_String_o *)v13;
      v23 = v24;
LABEL_27:
      UILabel__set_text(v23, v22, 0LL);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.Callback,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EventFortificationListViewManager__SetMode_46467428(this, mode, v10);
}


void __fastcall EventFortificationListViewManager__SetMode_46467428(
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


void __fastcall EventFortificationListViewManager__SetMode_46467536(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.CallbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EventFortificationListViewManager__SetMode_46467428(this, mode, v10);
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
  if ( (byte_4B1A0D5 & 1) == 0 )
  {
    this = (EventFortificationListViewManager_o *)sub_1BCA7E0(&EventFortificationListViewObject_TypeInfo, obj, item);
    byte_4B1A0D5 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventFortificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventFortificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventFortificationListViewObject__Init_46467304(
    (EventFortificationListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void __fastcall EventFortificationListViewManager__SetSortButtonImage(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v17; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v19; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v21; // x8
  int32_t sortKind; // w9
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x9
  System_String_o **v26; // x10
  System_String_o **v27; // x8
  System_String_o **v28; // x8

  if ( (byte_4B1A0E6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v14, v15);
    byte_4B1A0E6 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_35;
    v19 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v19 )
      goto LABEL_35;
    UILabel__set_text(v19, (System_String_o *)sort, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_35;
    ListViewSort__SetupSortLabelLayout(sort, this->fields.sortKindLabel, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v21 = this->fields.sort;
    if ( v21 )
    {
      sortKind = v21->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v23 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
          v24 = this->fields.sort;
          if ( v24 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v25 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
              v26 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
LABEL_31:
              if ( v24->fields.isAscendingOrder )
                v28 = v25;
              else
                v28 = v26;
              UISprite__set_spriteName((UISprite_o *)sort, *v28, 0LL);
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
          v27 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17806/*"btn_txt_up"*/ : &StringLiteral_17751/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v27, 0LL);
          v24 = this->fields.sort;
          if ( v24 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v25 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
              v26 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_35:
    sub_1BCAA3C(sort, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewManager__SetStatusKind(
        EventFortificationListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v20; // x8
  __int64 *v21; // x8
  __int64 *v22; // x8
  __int64 *v23; // x8
  const MethodInfo *v24; // x1

  if ( (byte_4B1A0CF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17839/*"button_push_reg"*/, *(_QWORD *)&modeKind, method);
    sub_1BCA7E0(&StringLiteral_17840/*"button_push_unreg"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_17825/*"button_allchoice_reg"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17828/*"button_alllock_unreg"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17841/*"button_select_reg"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17842/*"button_select_unreg"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17827/*"button_alllock_reg"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_17826/*"button_allchoice_unreg"*/, v17, v18);
    byte_4B1A0CF = 1;
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
  v20 = &StringLiteral_17841/*"button_select_reg"*/;
  if ( modeKind )
    v20 = &StringLiteral_17842/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v20, 0LL);
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
  v21 = &StringLiteral_17827/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v21 = &StringLiteral_17828/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v21, 0LL);
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
  v22 = &StringLiteral_17825/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v22 = &StringLiteral_17826/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v22, 0LL);
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
  v23 = &StringLiteral_17839/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v23 = &StringLiteral_17840/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v23, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
LABEL_28:
    sub_1BCAA3C(statusTabButton, *(_QWORD *)&modeKind);
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  EventFortificationListViewManager__SetHeaderMsg(this, v24);
}


void __fastcall EventFortificationListViewManager__StatusRequest(
        EventFortificationListViewManager_o *this,
        EventFortificationListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t modeKind; // w8
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  __int64 v23; // x1
  Il2CppObject *Request_object; // x0
  __int64 v25; // x1
  System_Int64_array *v26; // x1
  System_Int64_array *v27; // x2
  bool v28; // w4
  bool v29; // w5
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  NetworkManager_ResultCallbackFunc_o *v39; // x20
  __int64 v40; // x1
  System_Int64_array *v41; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B1A0ED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventFortificationListViewManager_EndStatusSync__, callback, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B1A0ED = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v41 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( EventFortificationListViewManager__GetSwapChoiceList(this, &choiceList, &v41, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requestCallback,
        (int64_t)callback,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v36,
                                                     v37,
                                                     v38);
      NetworkManager_ResultCallbackFunc___ctor(
        v39,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
      Request_object = NetworkManager__getRequest_object_(
                         v39,
                         (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v27 = v41;
        v26 = choiceList;
        v29 = 1;
        v28 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1BCAA3C(Request_object, v25);
    }
  }
  else if ( modeKind == 1 && EventFortificationListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.requestCallback,
      (int64_t)callback,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v22 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v19, v20, v21);
    NetworkManager_ResultCallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      Method_EventFortificationListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
    Request_object = NetworkManager__getRequest_object_(
                       v22,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v27 = unlockList;
      v26 = lockList;
      v28 = 1;
      v29 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v26, v27, 0, v28, v29, 0LL);
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

  if ( (byte_4B1A0C5 & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B1A0C5 = 1;
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
    v8 = sub_1C05CD0(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B1A0C7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1A0C7 = 1;
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
    v8 = sub_1C05CD0(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  EventFortificationListViewManager__remove_CallbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_EventFortificationListViewObject__o *__fastcall EventFortificationListViewManager__get_ClippingObjectList(
        EventFortificationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  const MethodInfo *v16; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v19; // w21
  Il2CppObject *v20; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4B1A0CC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v13, v14);
    byte_4B1A0CC = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v19,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        break;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
      if ( !objectList )
        break;
      v20 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)EventFortificationListViewObject__GetItem(
                                                                  (EventFortificationListViewObject_o *)objectList,
                                                                  v16);
      if ( !objectList )
        break;
      v16 = (const MethodInfo *)objectList;
      if ( LOBYTE(objectList[2].monitor) )
      {
        objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41463120(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)objectList,
                                                                    0LL);
        if ( ((unsigned __int8)objectList & 1) == 0 )
          continue;
      }
      if ( !v15 )
        break;
      items = v15->fields._items;
      v28 = Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__;
      ++v15->fields._version;
      if ( !items )
        break;
      v29 = v15->fields._size;
      if ( (unsigned int)v29 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          v20,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + v29;
        v15->fields._size = v29 + 1;
        v30[4] = (Il2CppClass *)v20;
        sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v20, v21, v22, v23, v24, v25, v26);
      }
      if ( size == ++v19 )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v15;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_18:
    sub_1BCAA3C(objectList, v16);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v15;
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  int64_t objectList; // x0
  int v20; // w23
  int32_t v21; // w21
  __int64 v22; // x1
  Il2CppObject *Item; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  int64_t v33; // x1
  Il2CppClass **v34; // x0

  if ( (byte_4B1A0CB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B1A0CB = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventFortificationListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventFortificationListViewObject___ctor__);
  objectList = (int64_t)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  v20 = *(_DWORD *)(objectList + 24);
  if ( v20 >= 1 )
  {
    v21 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)objectList,
               v21,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      objectList = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
      if ( (objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Item,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewObject___);
        if ( !v17 )
          break;
        items = v17->fields._items;
        v31 = Method_System_Collections_Generic_List_EventFortificationListViewObject__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        v33 = objectList;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)objectList,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v33;
          sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), v33, v24, v25, v26, v27, v28, v29);
        }
      }
      if ( v20 == ++v21 )
        return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v17;
      objectList = (int64_t)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1BCAA3C(objectList, v18);
  }
  return (System_Collections_Generic_List_EventFortificationListViewObject__o *)v17;
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

  if ( (byte_4B1A0C6 & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B1A0C6 = 1;
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
    v8 = sub_1C05CD0(p_Callback, v7, Callback);
    v9 = Callback == (System_Delegate_o *)v8;
    Callback = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B1A0C8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1A0C8 = 1;
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
    v8 = sub_1C05CD0(p_CallbackFunc2, v7, CallbackFunc2);
    v9 = CallbackFunc2 == (System_Delegate_o *)v8;
    CallbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A11CFC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11CA4;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = index;
  v14 = kind;
  if ( (byte_4B1A0F3 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&index);
    sub_1BCA7E0(&EventFortificationListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B1A0F3 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(EventFortificationListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall EventFortificationListViewManager_CallbackFunc__EndInvoke(
        EventFortificationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A11D68;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11D20;
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
  if ( (byte_4B1A0F4 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isRequest, callback);
    byte_4B1A0F4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall EventFortificationListViewManager_RequestCallbackFunc__EndInvoke(
        EventFortificationListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
    sub_1BCAA3C(this, data);
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
  if ( (byte_4B1A0F5 & 1) == 0 )
  {
    this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)sub_1BCA7E0(
                                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                          data,
                                                                          method);
    byte_4B1A0F5 = 1;
  }
  if ( !data )
    goto LABEL_9;
  v6 = *(_QWORD *)&data->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&data->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, data);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  this = (EventFortificationListViewManager___c__DisplayClass48_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                        v10,
                                                                        0LL);
  targetItem = v4->fields.targetItem;
  if ( !targetItem
    || (userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)targetItem->fields.userServantEntity) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(this, data);
  }
  return (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userServantEntity[5], 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  CommonUI_o *v13; // x20
  System_Action_o *_9__1; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B1A0F6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__1__, v7, v8);
    byte_4B1A0F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventFortificationListViewManager___c__DisplayClass96_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v15, v16, v17, v18, v19, v20);
    }
    if ( v13 )
    {
      CommonUI__CloseConfirmDialog_30766896(v13, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(Instance, v10);
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
    sub_1BCAA3C(this, method);
  EventFortificationListViewManager__PushRequest(this->fields.__4__this, this->fields.selectItem, v2);
}