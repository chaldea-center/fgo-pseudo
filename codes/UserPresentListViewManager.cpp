void __fastcall UserPresentListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C20D8F & 1) == 0 )
  {
    sub_1C3B764(&ListViewSort_TypeInfo, v1);
    sub_1C3B764(&UserPresentListViewManager_TypeInfo, v2);
    sub_1C3B764(&StringLiteral_15530/*"[ACTk] Obscured Cheating Detector: has properly configured Detection Event in the inspector, but still get started with Action callback. Both Action and Detection Event will be called on detection. Are you sure you wish to do this?"*/, v3);
    byte_4C20D8F = 1;
  }
  v4 = (ListViewSort_o *)sub_1C3B9B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_42232596(v4, (System_String_o *)StringLiteral_15530/*"[ACTk] Obscured Cheating Detector: has properly configured Detection Event in the inspector, but still get started with Action callback. Both Action and Detection Event will be called on detection. Are you sure you wish to do this?"*/, 1, 0, 0LL);
  UserPresentListViewManager_TypeInfo->static_fields->sortInfo = v4;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)UserPresentListViewManager_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall UserPresentListViewManager___ctor(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall UserPresentListViewManager__CreateList(
        UserPresentListViewManager_o *this,
        UserPresentBoxEntity_array *presentList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  const MethodInfo *v24; // x3
  int64_t m_parent; // x0
  System_Collections_Generic_IEnumerable_T__o *checkedIdList; // x22
  System_Collections_Generic_List_long__o *v27; // x21
  const MethodInfo *v28; // x3
  signed int max_length; // w8
  il2cpp_array_size_t v30; // w22
  Il2CppClass **v31; // x23
  Il2CppClass *v32; // x8
  UserPresentBoxEntity_o **v33; // x23
  Il2CppClass *v34; // t1
  UserPresentBoxEntity_o *v35; // x24
  UserPresentListViewItem_o *v36; // x23
  const MethodInfo *v37; // x3
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  struct System_Collections_Generic_List_long__o *v48; // x20
  int32_t v49; // w22
  const MethodInfo *v50; // x1
  __int64 v51; // x8
  unsigned __int64 v52; // x21
  UserPresentBoxEntity_o *v53; // x23
  UserPresentListViewItem_o *v54; // x22
  const MethodInfo *v55; // x3
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  __int64 v65; // x8

  if ( (byte_4C20D7A & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__Add__, presentList);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Remove__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_long___ctor___77852968, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__get_Item__, v8);
    sub_1C3B764(&System_Collections_Generic_List_long__TypeInfo, v9);
    sub_1C3B764(&UserPresentListViewItem_TypeInfo, v10);
    byte_4C20D7A = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.selectPresentData = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.selectPresentData, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.presentIds = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.presentIds, 0LL, v17, v18, v19, v20, v21, v22);
  m_parent = (int64_t)this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_38;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 0, 0, v24);
  checkedIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v27 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_57095540(
      v27,
      checkedIdList,
      (const MethodInfo_3673574 *)Method_System_Collections_Generic_List_long___ctor___77852968);
    if ( !presentList )
      goto LABEL_38;
    max_length = presentList->max_length;
    if ( max_length >= 1 )
    {
      v30 = 0;
      while ( v30 < max_length )
      {
        v31 = &presentList->obj.klass + (int)v30;
        v34 = v31[4];
        v33 = (UserPresentBoxEntity_o **)(v31 + 4);
        v32 = v34;
        if ( !v34 || !v27 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v27,
                     (int64_t)v32->_1.namespaze,
                     (const MethodInfo_367519C *)Method_System_Collections_Generic_List_long__Remove__);
        if ( v30 >= presentList->max_length )
          goto LABEL_39;
        v35 = *v33;
        v36 = (UserPresentListViewItem_o *)sub_1C3B9B0(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v36, v30, v35, v37);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v44 = *(_QWORD *)(m_parent + 16);
        v45 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v44 )
          goto LABEL_38;
        v46 = *(int *)(m_parent + 24);
        if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v36,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = v44 + 8 * v46;
          *(_DWORD *)(m_parent + 24) = v46 + 1;
          *(_QWORD *)(v47 + 32) = v36;
          sub_1C3B708((PartyOrganizationUtility_o *)(v47 + 32), (int64_t)v36, v38, v39, v40, v41, v42, v43);
        }
        max_length = presentList->max_length;
        if ( (int)++v30 >= max_length )
          goto LABEL_18;
      }
      goto LABEL_39;
    }
LABEL_18:
    if ( !v27 )
LABEL_38:
      sub_1C3B9C0(m_parent, v23);
    v48 = this->fields.checkedIdList;
    if ( v27->fields._size >= 1 )
    {
      v49 = 0;
      do
      {
        m_parent = System_Collections_Generic_List_long___get_Item(
                     v27,
                     v49,
                     (const MethodInfo_36739B0 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !v48 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v48,
                     m_parent,
                     (const MethodInfo_367519C *)Method_System_Collections_Generic_List_long__Remove__);
        v48 = this->fields.checkedIdList;
      }
      while ( ++v49 < v27->fields._size );
    }
    if ( !v48 )
      goto LABEL_38;
    if ( v48->fields._size >= 1 )
    {
      m_parent = (int64_t)this->fields.m_parent;
      if ( !m_parent )
        goto LABEL_38;
      UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 1, 1, v28);
      UserPresentListViewManager__updateCheckStatus(this, v50);
    }
  }
  else
  {
    if ( !presentList )
      goto LABEL_38;
    v51 = *(_QWORD *)&presentList->max_length;
    if ( (int)v51 >= 1 )
    {
      v52 = 0LL;
      while ( v52 < (unsigned int)v51 )
      {
        v53 = presentList->m_Items[v52];
        v54 = (UserPresentListViewItem_o *)sub_1C3B9B0(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v54, v52, v53, v55);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v62 = *(_QWORD *)(m_parent + 16);
        v63 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v62 )
          goto LABEL_38;
        v64 = *(int *)(m_parent + 24);
        if ( (unsigned int)v64 >= *(_DWORD *)(v62 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v54,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = v62 + 8 * v64;
          *(_DWORD *)(m_parent + 24) = v64 + 1;
          *(_QWORD *)(v65 + 32) = v54;
          sub_1C3B708((PartyOrganizationUtility_o *)(v65 + 32), (int64_t)v54, v56, v57, v58, v59, v60, v61);
        }
        LODWORD(v51) = presentList->max_length;
        if ( (__int64)++v52 >= (int)v51 )
          goto LABEL_37;
      }
LABEL_39:
      sub_1C3B9C8(m_parent, v23);
    }
  }
LABEL_37:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall UserPresentListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserPresentListViewManager_c *v2; // x0
  ListViewSort_o *sortInfo; // x0

  if ( (byte_4C20D75 & 1) == 0 )
  {
    sub_1C3B764(&UserPresentListViewManager_TypeInfo, v1);
    byte_4C20D75 = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v2 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v2->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1C3B9C0(0LL, v1);
  ListViewSort__DeleteContinueData(sortInfo, 0LL);
}


void __fastcall UserPresentListViewManager__DestroyList(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C3B9C0(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall UserPresentListViewManager__DlgForExpiredPresent(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v8; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4C20D8E & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&LocalizationManager_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C3B764(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, v5);
    sub_1C3B764(&StringLiteral_10668/*"QUIT\r\n"*/, v6);
    byte_4C20D8E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10668/*"QUIT\r\n"*/, 0LL);
  v9 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, 0LL);
  if ( !Instance )
    sub_1C3B9C0(v10, v11);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, 0LL, v8, v9, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__EndNoticeDlg(
        UserPresentListViewManager_o *this,
        int32_t scene,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UserPresentBoxErrorDialog_o *dialog; // x21
  System_Action_T__o *v8; // x22
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct UserPresentListViewManager_ReceiveCallbackFunc_o *receivecCallbackFunc; // x8

  if ( (byte_4C20D89 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_SceneList_Type__TypeInfo, *(_QWORD *)&scene);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&Method_UserPresentListViewManager_EndNoticeDlg__, v6);
    byte_4C20D89 = 1;
  }
  dialog = this->fields.dialog;
  v8 = (System_Action_T__o *)sub_1C3B9B0(System_Action_SceneList_Type__TypeInfo);
  System_Action_Int32Enum____ctor(v8, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0LL);
  if ( !dialog )
    goto LABEL_14;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(dialog, (System_Action_SceneList_Type__o *)v8, v11);
  if ( scene == -1 )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( CommonUI__IsActive_MasterMission((CommonUI_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_1C3B9C0(Instance, v10);
  CommonUI__CloseUsrPresentList((CommonUI_o *)Instance, 0LL);
LABEL_11:
  receivecCallbackFunc = this->fields.receivecCallbackFunc;
  if ( receivecCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))receivecCallbackFunc->fields.m_target)(
      receivecCallbackFunc->fields.original_method_info,
      1LL,
      *(_QWORD *)&receivecCallbackFunc->fields.extra_arg);
}


System_String_o *__fastcall UserPresentListViewManager__GetAllPresentStrings(
        UserPresentListViewManager_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  struct System_Collections_Generic_List_ListViewItem__o *presentAllSelectedList; // x8
  System_Collections_Generic_List_object__o **p_presentAllSelectedList; // x19
  int32_t size; // w2
  int v24; // w9
  System_Collections_Generic_IEnumerable_T__o *itemList; // x21
  System_Collections_Generic_List_object__o *v26; // x22
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  const MethodInfo *v33; // x1
  System_Collections_Generic_List_object__o *NameText; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v35; // x20
  System_Comparison_T__o *v36; // x21
  Il2CppObject *v37; // x22
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_List_object__o *v45; // x20
  System_Predicate_object__o *v46; // x21
  Il2CppObject *v47; // x22
  struct UserPresentListViewManager___c_StaticFields *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Collections_Generic_List_object__o *v55; // x20
  int v56; // w8
  System_Comparison_T__o *v57; // x21
  Il2CppObject *v58; // x22
  struct UserPresentListViewManager___c_StaticFields *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Text_StringBuilder_o *v66; // x20
  int v67; // w24
  int32_t v68; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v71; // x22
  System_String_o *v72; // x23

  if ( (byte_4C20D86 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&System_Comparison_ListViewItem__TypeInfo, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__RemoveRange__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem___ctor___77853840, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_1C3B764(&System_Collections_Generic_List_ListViewItem__TypeInfo, v11);
    sub_1C3B764(&LocalizationManager_TypeInfo, v12);
    sub_1C3B764(&System_Predicate_ListViewItem__TypeInfo, v13);
    sub_1C3B764(&System_Text_StringBuilder_TypeInfo, v14);
    sub_1C3B764(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__, v15);
    sub_1C3B764(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__, v16);
    sub_1C3B764(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__, v17);
    sub_1C3B764(&UserPresentListViewManager___c_TypeInfo, v18);
    sub_1C3B764(&UserPresentListViewItem_TypeInfo, v19);
    sub_1C3B764(&StringLiteral_10673/*"Quechua (Bolivia)"*/, v20);
    byte_4C20D86 = 1;
  }
  presentAllSelectedList = this->fields.presentAllSelectedList;
  p_presentAllSelectedList = (System_Collections_Generic_List_object__o **)&this->fields.presentAllSelectedList;
  if ( presentAllSelectedList )
  {
    size = presentAllSelectedList->fields._size;
    v24 = presentAllSelectedList->fields._version + 1;
    presentAllSelectedList->fields._size = 0;
    presentAllSelectedList->fields._version = v24;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)presentAllSelectedList->fields._items, 0, size, 0LL);
  }
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v26 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_57193824(
    v26,
    itemList,
    (const MethodInfo_368B560 *)Method_System_Collections_Generic_List_ListViewItem___ctor___77853840);
  this->fields.presentAllSelectedList = (struct System_Collections_Generic_List_ListViewItem__o *)v26;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.presentAllSelectedList,
    (int64_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  v35 = this->fields.presentAllSelectedList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v36 = *(System_Comparison_T__o **)(*(_QWORD *)&NameText[4].fields._size + 24LL);
  if ( !v36 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v37 = **(Il2CppObject ***)&NameText[4].fields._size;
    v36 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      v36,
      v37,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__,
      0LL);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__60_0 = (struct System_Comparison_ListViewItem__o *)v36;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__60_0, (int64_t)v36, v39, v40, v41, v42, v43, v44);
  }
  if ( !v35 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_57202480(
    (System_Collections_Generic_List_object__o *)v35,
    v36,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  v45 = *p_presentAllSelectedList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v46 = *(System_Predicate_object__o **)(*(_QWORD *)&NameText[4].fields._size + 32LL);
  if ( !v46 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v47 = **(Il2CppObject ***)&NameText[4].fields._size;
    v46 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_object____ctor(
      v46,
      v47,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__,
      0LL);
    v48 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v48->__9__60_1 = (struct System_Predicate_ListViewItem__o *)v46;
    sub_1C3B708((PartyOrganizationUtility_o *)&v48->__9__60_1, (int64_t)v46, v49, v50, v51, v52, v53, v54);
  }
  if ( !v45 )
    goto LABEL_53;
  System_Collections_Generic_List_object___RemoveAll(
    v45,
    (System_Predicate_T__o *)v46,
    (const MethodInfo_368D2C8 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  }
  v55 = *p_presentAllSelectedList;
  if ( !*p_presentAllSelectedList )
    goto LABEL_53;
  v33 = (const MethodInfo *)*(unsigned int *)(*(_QWORD *)&NameText[4].fields._size + 116LL);
  v56 = v55->fields._size;
  if ( v56 > (int)v33 )
  {
    System_Collections_Generic_List_object___RemoveRange(
      *p_presentAllSelectedList,
      (int32_t)v33,
      v56 - (_DWORD)v33,
      (const MethodInfo_368D4D8 *)Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    v55 = *p_presentAllSelectedList;
  }
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v57 = *(System_Comparison_T__o **)(*(_QWORD *)&NameText[4].fields._size + 40LL);
  if ( !v57 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v58 = **(Il2CppObject ***)&NameText[4].fields._size;
    v57 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      v57,
      v58,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__,
      0LL);
    v59 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v59->__9__60_2 = (struct System_Comparison_ListViewItem__o *)v57;
    sub_1C3B708((PartyOrganizationUtility_o *)&v59->__9__60_2, (int64_t)v57, v60, v61, v62, v63, v64, v65);
  }
  if ( !v55 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_57202480(
    v55,
    v57,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  v66 = (System_Text_StringBuilder_o *)sub_1C3B9B0(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v66, 0LL);
  if ( !*p_presentAllSelectedList )
    goto LABEL_53;
  v67 = (*p_presentAllSelectedList)->fields._size;
  if ( v67 >= 1 )
  {
    v68 = 0;
    while ( 1 )
    {
      if ( v68 )
      {
        if ( !v66 )
          break;
        System_Text_StringBuilder__Append_62532092(v66, 0xAu, 0LL);
      }
      NameText = *p_presentAllSelectedList;
      if ( !*p_presentAllSelectedList )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               NameText,
               v68,
               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item
        && (methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v71 = (UserPresentListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo
            ? Item
            : 0LL;
      }
      else
      {
        v71 = 0LL;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      NameText = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_10673/*"Quechua (Bolivia)"*/,
                                                                0LL);
      if ( !v71 )
        break;
      v72 = (System_String_o *)NameText;
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewItem__get_NameText(
                                                                (UserPresentListViewItem_o *)v71,
                                                                v33);
      if ( !v66 )
        break;
      NameText = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__AppendFormat_62536116(
                                                                v66,
                                                                v72,
                                                                (Il2CppObject *)NameText,
                                                                (Il2CppObject *)v71[11].monitor,
                                                                0LL);
      if ( v67 == ++v68 )
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v66->klass->vtable._3_ToString.method)(
                                    v66,
                                    v66->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    }
LABEL_53:
    sub_1C3B9C0(NameText, v33);
  }
  if ( !v66 )
    goto LABEL_53;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v66->klass->vtable._3_ToString.method)(
                              v66,
                              v66->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
UserPresentListViewItem_o *__fastcall UserPresentListViewManager__GetItem(
        UserPresentListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserPresentListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4C20D7B & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C3B764(&UserPresentListViewItem_TypeInfo, v5);
    byte_4C20D7B = 1;
  }
  result = (UserPresentListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (UserPresentListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (UserPresentListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
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


void __fastcall UserPresentListViewManager__Init(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UserPresentListViewManager_c *v9; // x0
  struct ListViewSort_o **p_sortInfo; // x8
  struct ListViewSort_o *v11; // x1
  __int64 v12; // x1
  struct ListViewSort_o *sort; // x0

  if ( (byte_4C20D79 & 1) == 0 )
  {
    sub_1C3B764(&UserPresentListViewManager_TypeInfo, method);
    byte_4C20D79 = 1;
  }
  v9 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v9 = UserPresentListViewManager_TypeInfo;
  }
  p_sortInfo = &v9->static_fields->sortInfo;
  v11 = *p_sortInfo;
  this->fields.sort = *p_sortInfo;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.sort, (int64_t)v11, v2, v3, v4, v5, v6, v7);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C3B9C0(0LL, v12);
  sort->fields.listViewKind = 4;
  ListViewSort__Load(sort, 0LL);
  ((void (__fastcall *)(UserPresentListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
    this,
    this->klass->vtable._6_GetFocusItemIndex.methodPtr);
}


void __fastcall UserPresentListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  UserPresentListViewManager_c *v2; // x0
  ListViewSort_o *sortInfo; // x0

  if ( (byte_4C20D76 & 1) == 0 )
  {
    sub_1C3B764(&UserPresentListViewManager_TypeInfo, v1);
    byte_4C20D76 = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v2 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v2->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1C3B9C0(0LL, v1);
  ListViewSort__InitLoad(sortInfo, 0LL);
}


void __fastcall UserPresentListViewManager__OnClickListCheck(
        UserPresentListViewManager_o *this,
        UserPresentListViewObject_o *obj,
        const MethodInfo *method)
{
  UserPresentListViewObject_o *v3; // x20
  UserPresentListViewManager_o *v4; // x19
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
  UserPresentListViewItem_o *Item; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct UserPresentListViewItem_o *selectItem; // x8
  int64_t usrPresentEnt; // x1
  UserPresentListViewManager_o **p_selectPresentData; // x23
  UserPresentListViewManager_o **p_checkedIdList; // x21
  System_Collections_Generic_List_long__o *v36; // x24
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int m_CancellationTokenSource; // w8
  int v44; // w25
  int32_t v45; // w24
  struct ItemEntity_o *itemEnt; // x8
  int64_t endedAt; // x24
  Il2CppObject *MasterData_object; // x24
  BalanceConfig_c *v49; // x0
  int v50; // w24
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x0
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  const MethodInfo *v55; // x1
  int32_t v56; // w24
  BalanceConfig_c *v57; // x0
  _QWORD *v58; // x8
  int32_t PresentBoxCheckMax; // w25
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 m_CancellationTokenSource_low; // x10
  BalanceConfig_c *v63; // x8
  int32_t v64; // w22
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x2
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  const MethodInfo *v68; // x3
  Il2CppObject *v69; // [xsp+8h] [xbp-58h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_4C20D82 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, obj);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__RemoveAt__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__get_Item__, v13);
    sub_1C3B764(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_1C3B764(&NetworkManager_TypeInfo, v15);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    this = (UserPresentListViewManager_o *)sub_1C3B764(&Method_UserPresentListViewManager_OnClickListCheck__, v17);
    byte_4C20D82 = 1;
  }
  entity = 0LL;
  v69 = 0LL;
  if ( !v3 )
    goto LABEL_81;
  Item = UserPresentListViewObject__GetItem(v3, 0LL);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = Item;
  sub_1C3B708((PartyOrganizationUtility_o *)&v4->fields.selectItem, (int64_t)Item, v20, v21, v22, v23, v24, v25);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_81;
  usrPresentEnt = (int64_t)selectItem->fields.usrPresentEnt;
  p_selectPresentData = (UserPresentListViewManager_o **)&v4->fields.selectPresentData;
  v4->fields.selectPresentData = (struct UserPresentBoxEntity_o *)usrPresentEnt;
  sub_1C3B708((PartyOrganizationUtility_o *)&v4->fields.selectPresentData, usrPresentEnt, v26, v27, v28, v29, v30, v31);
  p_checkedIdList = (UserPresentListViewManager_o **)&v4->fields.checkedIdList;
  if ( !v4->fields.checkedIdList )
  {
    v36 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v36,
      (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
    *p_checkedIdList = (UserPresentListViewManager_o *)v36;
    sub_1C3B708((PartyOrganizationUtility_o *)&v4->fields.checkedIdList, (int64_t)v36, v37, v38, v39, v40, v41, v42);
  }
  if ( !*p_selectItem )
    goto LABEL_81;
  if ( (*p_selectItem)->fields.presentId >= 1 )
  {
    this = *p_checkedIdList;
    if ( !*p_checkedIdList )
      goto LABEL_81;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v44 = m_CancellationTokenSource - 1;
    if ( m_CancellationTokenSource >= 1 )
    {
      v45 = 0;
      while ( 1 )
      {
        this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___get_Item(
                                                 (System_Collections_Generic_List_long__o *)this,
                                                 v45,
                                                 (const MethodInfo_36739B0 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !*p_selectItem )
          goto LABEL_81;
        if ( this == (UserPresentListViewManager_o *)(*p_selectItem)->fields.presentId )
          break;
        if ( v44 == v45 )
          goto LABEL_17;
        this = *p_checkedIdList;
        ++v45;
        if ( !*p_checkedIdList )
          goto LABEL_81;
      }
      v53 = Method_UserPresentListViewManager_OnClickListCheck__;
      if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
        v53 = (_QWORD *)sub_1C3B77C(Method_UserPresentListViewManager_OnClickListCheck__);
      v54 = (System_Reflection_MethodBase_o *)sub_1C3B748(v53, v53[4]);
      OverwriteAssetSoundName__PlaySystemSe(v54, 0, 0, 0LL);
      this = *p_checkedIdList;
      if ( *p_checkedIdList )
      {
        System_Collections_Generic_List_long___RemoveAt(
          (System_Collections_Generic_List_long__o *)this,
          v45,
          (const MethodInfo_3675420 *)Method_System_Collections_Generic_List_long__RemoveAt__);
        UserPresentListViewManager__updateCheckStatus(v4, v55);
        return;
      }
LABEL_81:
      sub_1C3B9C0(this, obj);
    }
LABEL_17:
    this = *p_selectPresentData;
    if ( !*p_selectPresentData )
      goto LABEL_81;
    this = (UserPresentListViewManager_o *)UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)this, 0, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !*p_selectPresentData )
        goto LABEL_81;
      if ( LODWORD((*p_selectPresentData)->fields.sortOrderSprite) != 2 )
        goto LABEL_57;
      if ( !*p_selectItem )
        goto LABEL_81;
      itemEnt = (*p_selectItem)->fields.itemEnt;
      if ( !itemEnt )
        goto LABEL_81;
      endedAt = itemEnt->fields.endedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( endedAt > NetworkManager__getTime(0LL) )
      {
        this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_81;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, obj);
          byte_4C1C955 = 1;
        }
        this = (UserPresentListViewManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (UserPresentListViewManager_o *)NetworkManager_TypeInfo;
        }
        if ( !*p_selectPresentData || !MasterData_object )
          goto LABEL_81;
        this = (UserPresentListViewManager_o *)UserItemMaster__TryGetEntity(
                                                 (UserItemMaster_o *)MasterData_object,
                                                 &entity,
                                                 *(_QWORD *)&this->fields.sort->fields.bonusKind,
                                                 HIDWORD((*p_selectPresentData)->fields.sortOrderSprite),
                                                 0LL);
        if ( entity )
        {
          if ( !*p_selectPresentData )
            goto LABEL_81;
          v49 = BalanceConfig_TypeInfo;
          v50 = LODWORD((*p_selectPresentData)->fields.scrollView) + entity->fields.num;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v49 = BalanceConfig_TypeInfo;
          }
          if ( v50 > v49->static_fields->UserItemMax )
            goto LABEL_40;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ItemMaster___);
          if ( !*p_selectPresentData || !this )
            goto LABEL_81;
          this = (UserPresentListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   &v69,
                                                   HIDWORD((*p_selectPresentData)->fields.sortOrderSprite),
                                                   (const MethodInfo_329AE94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (UserPresentListViewManager_o *)v69;
            if ( !v69 )
              goto LABEL_81;
            this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v69, 0LL);
            if ( (int)this >= 1 )
            {
              this = (UserPresentListViewManager_o *)v69;
              if ( !v69 )
                goto LABEL_81;
              this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v69, 0LL);
              if ( v50 > (int)this )
              {
LABEL_40:
                v51 = Method_UserPresentListViewManager_OnClickListCheck__;
                if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
                  v51 = (_QWORD *)sub_1C3B77C(Method_UserPresentListViewManager_OnClickListCheck__);
                v52 = (System_Reflection_MethodBase_o *)sub_1C3B748(v51, v51[4]);
                goto LABEL_68;
              }
            }
          }
        }
LABEL_57:
        if ( !*p_checkedIdList )
          goto LABEL_81;
        v56 = (int32_t)(*p_checkedIdList)->fields.m_CancellationTokenSource;
        v57 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v57 = BalanceConfig_TypeInfo;
        }
        v58 = Method_UserPresentListViewManager_OnClickListCheck__;
        PresentBoxCheckMax = v57->static_fields->PresentBoxCheckMax;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
          v58 = (_QWORD *)sub_1C3B77C(Method_UserPresentListViewManager_OnClickListCheck__);
        v52 = (System_Reflection_MethodBase_o *)sub_1C3B748(v58, v58[4]);
        if ( v56 < PresentBoxCheckMax )
        {
          OverwriteAssetSoundName__PlaySystemSe(v52, 0, 0, 0LL);
          if ( !*p_selectItem )
            goto LABEL_81;
          this = *p_checkedIdList;
          if ( !*p_checkedIdList )
            goto LABEL_81;
          obj = (UserPresentListViewObject_o *)(*p_selectItem)->fields.presentId;
          v60 = *(_QWORD *)&this->fields.m_CachedPtr;
          v61 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v60 )
            goto LABEL_81;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v60 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              (int64_t)obj,
              *(const MethodInfo_3673CA0 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
            this = *p_checkedIdList;
            if ( !*p_checkedIdList )
              goto LABEL_81;
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v60 + 8 * m_CancellationTokenSource_low + 32) = obj;
          }
          v63 = BalanceConfig_TypeInfo;
          v64 = (int32_t)this->fields.m_CancellationTokenSource;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v63 = BalanceConfig_TypeInfo;
          }
          if ( v64 < v63->static_fields->PresentBoxCheckMax )
          {
            this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v3, 0LL);
            if ( !*p_checkedIdList )
              goto LABEL_81;
            if ( !this )
              goto LABEL_81;
            UserPresentListViewItem__setCheckBoxed(
              (UserPresentListViewItem_o *)this,
              1,
              (int32_t)(*p_checkedIdList)->fields.m_CancellationTokenSource,
              v65);
            checkedIdList = v4->fields.checkedIdList;
            if ( !checkedIdList )
              goto LABEL_81;
            this = (UserPresentListViewManager_o *)v4->fields.m_parent;
            if ( !this )
              goto LABEL_81;
            UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)this, checkedIdList->fields._size, v66);
          }
          UserPresentListViewManager__updateCheckStatus(v4, (const MethodInfo *)obj);
          this = (UserPresentListViewManager_o *)v4->fields.m_parent;
          if ( !this )
            goto LABEL_81;
          UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)this, 1, 1, v68);
          return;
        }
LABEL_68:
        OverwriteAssetSoundName__PlaySystemSe(v52, 1, 0, 0LL);
        return;
      }
    }
    UserPresentListViewManager__DlgForExpiredPresent(v4, (const MethodInfo *)obj);
  }
}


void __fastcall UserPresentListViewManager__OnClickListView(
        UserPresentListViewManager_o *this,
        UserPresentListViewObject_o *obj,
        const MethodInfo *method)
{
  UserPresentListViewObject_o *v3; // x20
  UserPresentListViewManager_o *v4; // x19
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
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  UserPresentListViewItem_o *Item; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct UserPresentListViewItem_o *selectItem; // x8
  int64_t usrPresentEnt; // x1
  struct UserPresentBoxEntity_o **p_selectPresentData; // x21
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  const MethodInfo *v41; // x1
  struct ItemEntity_o *itemEnt; // x8
  __int64 endedAt; // x22
  struct ItemEntity_o *v44; // x8
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  const MethodInfo *v47; // x2
  struct ItemEntity_o *v48; // x8
  Il2CppObject *MasterData_object; // x22
  BalanceConfig_c *v50; // x0
  int32_t v51; // w22
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  const MethodInfo *v54; // x2
  UserPresentListViewManager___c_c *v55; // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *_9__55_0; // x20
  Il2CppObject *v57; // x21
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  PartyOrganizationUtility_o *p__9__55_0; // x0
  _QWORD *v66; // x0
  System_Reflection_MethodBase_o *v67; // x0
  UserPresentListViewManager___c_c *v68; // x0
  Il2CppObject *v69; // x21
  struct UserPresentListViewManager___c_StaticFields *v70; // x0
  _QWORD *v71; // x0
  System_Reflection_MethodBase_o *v72; // x0
  System_Collections_Generic_List_long__o *v73; // x21
  UserPresentListViewManager_o **p_presentIds; // x20
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct UserPresentListViewItem_o *v81; // x8
  __int64 v82; // x8
  _QWORD *v83; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const MethodInfo *v85; // x4
  const MethodInfo *v86; // x2
  Il2CppObject *v87; // [xsp+8h] [xbp-48h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_4C20D81 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, obj);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__ToArray__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_1C3B764(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1C3B764(&NetworkManager_TypeInfo, v14);
    sub_1C3B764(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v15);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C3B764(&Method_UserPresentListViewManager___c__OnClickListView_b__55_0__, v17);
    sub_1C3B764(&Method_UserPresentListViewManager___c__OnClickListView_b__55_1__, v18);
    sub_1C3B764(&UserPresentListViewManager___c_TypeInfo, v19);
    this = (UserPresentListViewManager_o *)sub_1C3B764(&Method_UserPresentListViewManager_OnClickListView__, v20);
    byte_4C20D81 = 1;
  }
  entity = 0LL;
  v87 = 0LL;
  if ( !v3 )
    goto LABEL_87;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v3, 0LL);
  if ( !this )
    goto LABEL_87;
  if ( BYTE4(this->fields.objectList) )
    return;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v3, 0LL);
  if ( !this )
    goto LABEL_87;
  if ( BYTE4(this->fields.itemSortList) )
    return;
  checkedIdList = v4->fields.checkedIdList;
  if ( checkedIdList )
  {
    if ( checkedIdList->fields._size > 0 )
      return;
  }
  v4->fields.kind = 0;
  Item = UserPresentListViewObject__GetItem(v3, 0LL);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = Item;
  sub_1C3B708((PartyOrganizationUtility_o *)&v4->fields.selectItem, (int64_t)Item, v24, v25, v26, v27, v28, v29);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_87;
  usrPresentEnt = (int64_t)selectItem->fields.usrPresentEnt;
  p_selectPresentData = &v4->fields.selectPresentData;
  v4->fields.selectPresentData = (struct UserPresentBoxEntity_o *)usrPresentEnt;
  sub_1C3B708((PartyOrganizationUtility_o *)&v4->fields.selectPresentData, usrPresentEnt, v30, v31, v32, v33, v34, v35);
  this = (UserPresentListViewManager_o *)v4->fields.selectPresentData;
  if ( !this )
    goto LABEL_87;
  this = (UserPresentListViewManager_o *)UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)this, 0, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !*p_selectPresentData )
      goto LABEL_87;
    if ( (*p_selectPresentData)->fields.giftType == 2 )
    {
      if ( !*p_selectItem )
        goto LABEL_87;
      itemEnt = (*p_selectItem)->fields.itemEnt;
      if ( !itemEnt )
        goto LABEL_87;
      endedAt = itemEnt->fields.endedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (UserPresentListViewManager_o *)NetworkManager__getTime(0LL);
      if ( endedAt <= (__int64)this )
        goto LABEL_14;
      if ( !*p_selectItem )
        goto LABEL_87;
      v44 = (*p_selectItem)->fields.itemEnt;
      if ( !v44 )
        goto LABEL_87;
      if ( v44->fields.type == 24 )
      {
        v45 = Method_UserPresentListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v45 = (_QWORD *)sub_1C3B77C(Method_UserPresentListViewManager_OnClickListView__);
        v46 = (System_Reflection_MethodBase_o *)sub_1C3B748(v45, v45[4]);
        OverwriteAssetSoundName__PlaySystemSe(v46, 0, 0, 0LL);
        if ( *p_selectItem )
        {
          v48 = (*p_selectItem)->fields.itemEnt;
          if ( v48 )
          {
            UserPresentListViewManager__OpenSelectableDialog(v4, v48->fields.id, v47);
            return;
          }
        }
        goto LABEL_87;
      }
      this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_87;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, obj);
        byte_4C1C955 = 1;
      }
      this = (UserPresentListViewManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (UserPresentListViewManager_o *)NetworkManager_TypeInfo;
      }
      if ( !*p_selectPresentData || !MasterData_object )
        goto LABEL_87;
      this = (UserPresentListViewManager_o *)UserItemMaster__TryGetEntity(
                                               (UserItemMaster_o *)MasterData_object,
                                               &entity,
                                               *(_QWORD *)&this->fields.sort->fields.bonusKind,
                                               (*p_selectPresentData)->fields.objectId,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !*p_selectPresentData )
          goto LABEL_87;
        v50 = BalanceConfig_TypeInfo;
        v51 = (*p_selectPresentData)->fields.num + entity->fields.num;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v50 = BalanceConfig_TypeInfo;
        }
        if ( v51 > v50->static_fields->UserItemMax )
        {
          v52 = Method_UserPresentListViewManager_OnClickListView__;
          if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
            v52 = (_QWORD *)sub_1C3B77C(Method_UserPresentListViewManager_OnClickListView__);
          v53 = (System_Reflection_MethodBase_o *)sub_1C3B748(v52, v52[4]);
          OverwriteAssetSoundName__PlaySystemSe(v53, 0, 0, 0LL);
          v55 = UserPresentListViewManager___c_TypeInfo;
          if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
            v55 = UserPresentListViewManager___c_TypeInfo;
          }
          _9__55_0 = v55->static_fields->__9__55_0;
          if ( _9__55_0 )
            goto LABEL_56;
          if ( !v55->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v55);
            v55 = UserPresentListViewManager___c_TypeInfo;
          }
          v57 = (Il2CppObject *)v55->static_fields->__9;
          _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1C3B9B0(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
          UserPresentListViewManager_ReceiveCallbackFunc___ctor(
            _9__55_0,
            v57,
            Method_UserPresentListViewManager___c__OnClickListView_b__55_0__,
            0LL);
          static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__55_0 = _9__55_0;
          p__9__55_0 = (PartyOrganizationUtility_o *)&static_fields->__9__55_0;
LABEL_55:
          sub_1C3B708(p__9__55_0, (int64_t)_9__55_0, v58, v59, v60, v61, v62, v63);
LABEL_56:
          UserPresentListViewManager__showErrorResultDlg(v4, _9__55_0, v54);
          return;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !this )
          goto LABEL_87;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               &v87,
               (*p_selectPresentData)->fields.objectId,
               (const MethodInfo_329AE94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          this = (UserPresentListViewManager_o *)v87;
          if ( !v87 )
            goto LABEL_87;
          if ( ItemEntity__GetMaxNum((ItemEntity_o *)v87, 0LL) >= 1 )
          {
            this = (UserPresentListViewManager_o *)v87;
            if ( !v87 )
              goto LABEL_87;
            if ( v51 > ItemEntity__GetMaxNum((ItemEntity_o *)v87, 0LL) )
            {
              v66 = Method_UserPresentListViewManager_OnClickListView__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
                v66 = (_QWORD *)sub_1C3B77C(Method_UserPresentListViewManager_OnClickListView__);
              v67 = (System_Reflection_MethodBase_o *)sub_1C3B748(v66, v66[4]);
              OverwriteAssetSoundName__PlaySystemSe(v67, 0, 0, 0LL);
              v68 = UserPresentListViewManager___c_TypeInfo;
              if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
                v68 = UserPresentListViewManager___c_TypeInfo;
              }
              _9__55_0 = v68->static_fields->__9__55_1;
              if ( _9__55_0 )
                goto LABEL_56;
              if ( !v68->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v68);
                v68 = UserPresentListViewManager___c_TypeInfo;
              }
              v69 = (Il2CppObject *)v68->static_fields->__9;
              _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1C3B9B0(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
              UserPresentListViewManager_ReceiveCallbackFunc___ctor(
                _9__55_0,
                v69,
                Method_UserPresentListViewManager___c__OnClickListView_b__55_1__,
                0LL);
              v70 = UserPresentListViewManager___c_TypeInfo->static_fields;
              v70->__9__55_1 = _9__55_0;
              p__9__55_0 = (PartyOrganizationUtility_o *)&v70->__9__55_1;
              goto LABEL_55;
            }
          }
        }
      }
    }
    v71 = Method_UserPresentListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v71 = (_QWORD *)sub_1C3B77C(Method_UserPresentListViewManager_OnClickListView__);
    v72 = (System_Reflection_MethodBase_o *)sub_1C3B748(v71, v71[4]);
    OverwriteAssetSoundName__PlaySystemSe(v72, 8, 0, 0LL);
    if ( *p_selectItem )
    {
      v4->fields._select_idx_k__BackingField = (*p_selectItem)->fields.index;
      v73 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v73,
        (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
      p_presentIds = (UserPresentListViewManager_o **)&v4->fields.presentIds;
      v4->fields.presentIds = v73;
      sub_1C3B708((PartyOrganizationUtility_o *)&v4->fields.presentIds, (int64_t)v73, v75, v76, v77, v78, v79, v80);
      v81 = v4->fields.selectItem;
      if ( v81 )
      {
        obj = (UserPresentListViewObject_o *)v81->fields.presentId;
        if ( (__int64)obj >= 1 )
        {
          this = *p_presentIds;
          if ( !*p_presentIds )
            goto LABEL_87;
          v82 = *(_QWORD *)&this->fields.m_CachedPtr;
          v83 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v82 )
            goto LABEL_87;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v82 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              (int64_t)obj,
              *(const MethodInfo_3673CA0 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v82 + 8 * m_CancellationTokenSource_low + 32) = obj;
          }
        }
        this = *p_presentIds;
        if ( *p_presentIds )
        {
          this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                   (System_Collections_Generic_List_long__o *)this,
                                                   (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v4->fields.m_parent )
          {
            UserPresentBoxWindow__receivePresent(v4->fields.m_parent, (System_Int64_array *)this, 0, 0, v85);
            UserPresentListViewManager__SetMode_38891540(v4, 2, v86);
            return;
          }
        }
      }
    }
LABEL_87:
    sub_1C3B9C0(this, obj);
  }
LABEL_14:
  v39 = Method_UserPresentListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v39 = (_QWORD *)sub_1C3B77C(Method_UserPresentListViewManager_OnClickListView__);
  v40 = (System_Reflection_MethodBase_o *)sub_1C3B748(v39, v39[4]);
  OverwriteAssetSoundName__PlaySystemSe(v40, 0, 0, 0LL);
  UserPresentListViewManager__DlgForExpiredPresent(v4, v41);
}


void __fastcall UserPresentListViewManager__OnClickSortAscendingOrder(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4C20D8A & 1) == 0 )
  {
    sub_1C3B764(&Method_UserPresentListViewManager_OnClickSortAscendingOrder__, method);
    byte_4C20D8A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_UserPresentListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_UserPresentListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C3B9C0(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall UserPresentListViewManager__OnMoveEnd(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C20D80 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C20D80 = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C3B9C0(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


void __fastcall UserPresentListViewManager__OpenNoticeDlg(
        UserPresentListViewManager_o *this,
        System_String_o *msg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserPresentBoxErrorDialog_o *dialog; // x0
  UserPresentBoxErrorDialog_o *v7; // x20
  System_Action_T__o *v8; // x21
  const MethodInfo *v9; // x2

  if ( (byte_4C20D88 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_SceneList_Type__TypeInfo, msg);
    sub_1C3B764(&Method_UserPresentListViewManager_EndNoticeDlg__, v5);
    byte_4C20D88 = 1;
  }
  dialog = this->fields.dialog;
  if ( !dialog
    || (UserPresentBoxErrorDialog__Open(dialog, msg, method),
        v7 = this->fields.dialog,
        v8 = (System_Action_T__o *)sub_1C3B9B0(System_Action_SceneList_Type__TypeInfo),
        System_Action_Int32Enum____ctor(v8, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0LL),
        !v7) )
  {
    sub_1C3B9C0(dialog, msg);
  }
  UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v7, (System_Action_SceneList_Type__o *)v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__OpenSelectableDialog(
        UserPresentListViewManager_o *this,
        int32_t ticketId,
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
  __int64 v15; // x20
  void *selectDialog; // x0
  __int64 v17; // x1
  struct System_Collections_Generic_List_ListViewItem__o *presentTicketList; // x8
  int32_t size; // w2
  int v20; // w9
  struct UserPresentBoxWindow_o *m_parent; // x8
  System_Collections_Generic_IEnumerable_T__o *itemList; // x22
  System_Collections_Generic_List_object__o *v23; // x23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Collections_Generic_List_ListViewItem__o *v36; // x22
  System_Predicate_object__o *v37; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v38; // x21
  System_Comparison_T__o *v39; // x22
  Il2CppObject *v40; // x23
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  const MethodInfo *v48; // x3

  if ( (byte_4C20D8C & 1) == 0 )
  {
    sub_1C3B764(&System_Comparison_ListViewItem__TypeInfo, *(_QWORD *)&ticketId);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem___ctor___77853840, v8);
    sub_1C3B764(&System_Collections_Generic_List_ListViewItem__TypeInfo, v9);
    sub_1C3B764(&System_Predicate_ListViewItem__TypeInfo, v10);
    sub_1C3B764(&Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__, v11);
    sub_1C3B764(&Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__, v12);
    sub_1C3B764(&UserPresentListViewManager___c__DisplayClass67_0_TypeInfo, v13);
    sub_1C3B764(&UserPresentListViewManager___c_TypeInfo, v14);
    byte_4C20D8C = 1;
  }
  v15 = sub_1C3B9B0(UserPresentListViewManager___c__DisplayClass67_0_TypeInfo);
  UserPresentListViewManager___c__DisplayClass67_0___ctor(
    (UserPresentListViewManager___c__DisplayClass67_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_18;
  *(_DWORD *)(v15 + 16) = ticketId;
  presentTicketList = this->fields.presentTicketList;
  if ( presentTicketList )
  {
    size = presentTicketList->fields._size;
    v20 = presentTicketList->fields._version + 1;
    presentTicketList->fields._size = 0;
    presentTicketList->fields._version = v20;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)presentTicketList->fields._items, 0, size, 0LL);
  }
  m_parent = this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_18;
  m_parent->fields.mIsScrlResetPosition = 1;
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v23 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_57193824(
    v23,
    itemList,
    (const MethodInfo_368B560 *)Method_System_Collections_Generic_List_ListViewItem___ctor___77853840);
  this->fields.presentTicketList = (struct System_Collections_Generic_List_ListViewItem__o *)v23;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.presentTicketList, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v15 + 20) = 0;
  *(_QWORD *)(v15 + 24) = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)(v15 + 24), 0LL, v30, v31, v32, v33, v34, v35);
  v36 = this->fields.presentTicketList;
  v37 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v37,
    (Il2CppObject *)v15,
    Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__,
    0LL);
  if ( !v36 )
    goto LABEL_18;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v36,
    (System_Predicate_T__o *)v37,
    (const MethodInfo_368D2C8 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  selectDialog = UserPresentListViewManager___c_TypeInfo;
  v38 = this->fields.presentTicketList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    selectDialog = UserPresentListViewManager___c_TypeInfo;
  }
  v39 = *(System_Comparison_T__o **)(*((_QWORD *)selectDialog + 23) + 48LL);
  if ( !v39 )
  {
    if ( !*((_DWORD *)selectDialog + 56) )
    {
      j_il2cpp_runtime_class_init_0(selectDialog);
      selectDialog = UserPresentListViewManager___c_TypeInfo;
    }
    v40 = (Il2CppObject *)**((_QWORD **)selectDialog + 23);
    v39 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      v39,
      v40,
      Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__,
      0LL);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__67_1 = (struct System_Comparison_ListViewItem__o *)v39;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__67_1, (int64_t)v39, v42, v43, v44, v45, v46, v47);
  }
  if ( !v38
    || (System_Collections_Generic_List_object___Sort_57202480(
          (System_Collections_Generic_List_object__o *)v38,
          v39,
          (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_ListViewItem__Sort__),
        (selectDialog = this->fields.selectDialog) == 0LL) )
  {
LABEL_18:
    sub_1C3B9C0(selectDialog, v17);
  }
  PresentSelectableDlgComponent__Open(
    (PresentSelectableDlgComponent_o *)selectDialog,
    *(ItemEntity_o **)(v15 + 24),
    *(_DWORD *)(v15 + 20),
    v48);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__ReceiveMultiPresent(
        UserPresentListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_long__o *v24; // x21
  struct System_Collections_Generic_List_long__o **p_presentIds; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_List_object__o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x8
  System_Collections_Generic_List_object__o *v35; // x0
  void **v36; // x25
  void **v37; // x26
  _BOOL8 v38; // x0
  UserPresentListViewItem_c *v39; // x1
  UserPresentListViewItem_o *current; // x23
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_long__o *checkedIdList; // x0
  UserPresentBoxEntity_o *usrPresentEnt; // x0
  _BOOL8 IsExpired; // x0
  const MethodInfo *v45; // x1
  struct UserPresentBoxEntity_o *v46; // x9
  struct ItemEntity_o *itemEnt; // x9
  struct System_Collections_Generic_List_long__o **v48; // x19
  void **v49; // x20
  void **v50; // x26
  int64_t endedAt; // x25
  bool v52; // cc
  Il2CppObject *NameText; // x0
  const MethodInfo *v54; // x1
  Il2CppObject *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x1
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  System_Collections_Generic_List_long__o *v67; // x0
  int64_t presentId; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  void *v72; // x1
  PartyOrganizationUtility_o *p_expiredPresents_k__BackingField; // x22
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_String_o *klass; // x23
  Il2CppObject *Item; // x0
  System_String_o *v82; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  const MethodInfo *v89; // x4
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C20D85 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&kind);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Contains__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Contains__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__RemoveAt__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1C3B764(&System_Collections_Generic_List_long__TypeInfo, v18);
    sub_1C3B764(&NetworkManager_TypeInfo, v19);
    sub_1C3B764(&UserPresentListViewItem_TypeInfo, v20);
    sub_1C3B764(&StringLiteral_16127/*"__field-group"*/, v21);
    sub_1C3B764(&StringLiteral_1/*""*/, v22);
    sub_1C3B764(&StringLiteral_16386/*"align-items"*/, v23);
    byte_4C20D85 = 1;
  }
  memset(&v92, 0, sizeof(v92));
  this->fields.kind = kind;
  v24 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v24,
    (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = &this->fields.presentIds;
  this->fields.presentIds = v24;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.presentIds, (int64_t)v24, v26, v27, v28, v29, v30, v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
  v34 = 192LL;
  if ( kind == 1 )
    v34 = 432LL;
  v35 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v34);
  if ( !v35 )
    goto LABEL_62;
  v36 = &Method_System_Collections_Generic_List_string__Add__;
  v37 = &Method_System_Collections_Generic_List_long__Add__;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v91,
    v35,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v92 = v91;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v92,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v38 )
      break;
    current = (UserPresentListViewItem_o *)v92.fields._current;
    if ( v92.fields._current )
    {
      v39 = UserPresentListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v92.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (UserPresentListViewItem_c *)v92.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
      {
        sub_1C3BC80(v92.fields._current);
LABEL_52:
        sub_1C3B9C0(IsExpired, v45);
      }
    }
    switch ( kind )
    {
      case 1:
        if ( !v92.fields._current )
          sub_1C3B9C0(v38, v39);
        goto LABEL_23;
      case 2:
        if ( !v92.fields._current )
          sub_1C3B9C0(v38, v39);
        if ( !Gift__IsServant_39108588((int32_t)v92.fields._current[10].monitor, 0LL)
          && !Gift__IsCommandCode_39108980(current->fields.giftType, 0LL) )
        {
          goto LABEL_23;
        }
        break;
      case 3:
        if ( !v92.fields._current )
          sub_1C3B9C0(v38, v39);
        checkedIdList = this->fields.checkedIdList;
        if ( !checkedIdList )
          sub_1C3B9C0(0LL, v39);
        if ( System_Collections_Generic_List_long___Contains(
               checkedIdList,
               (int64_t)v92.fields._current[10].klass,
               (const MethodInfo_3674018 *)Method_System_Collections_Generic_List_long__Contains__) )
        {
LABEL_23:
          usrPresentEnt = current->fields.usrPresentEnt;
          if ( !usrPresentEnt )
            sub_1C3B9C0(0LL, v39);
          IsExpired = UserPresentBoxEntity__IsExpired(usrPresentEnt, 0, 0LL);
          v46 = current->fields.usrPresentEnt;
          if ( !v46 )
            goto LABEL_52;
          if ( v46->fields.giftType == 2 )
          {
            itemEnt = current->fields.itemEnt;
            if ( !itemEnt )
              sub_1C3B9C0(IsExpired, v45);
            if ( itemEnt->fields.type != 24 )
            {
              if ( IsExpired )
                goto LABEL_33;
              v48 = p_presentIds;
              v49 = v37;
              v50 = v36;
              endedAt = itemEnt->fields.endedAt;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v52 = endedAt <= NetworkManager__getTime(0LL);
              v36 = v50;
              v37 = v49;
              p_presentIds = v48;
              if ( v52 )
                goto LABEL_33;
LABEL_39:
              v67 = *p_presentIds;
              if ( !*p_presentIds )
                sub_1C3B9C0(0LL, v45);
              presentId = current->fields.presentId;
              items = v67->fields._items;
              v70 = *v37;
              ++v67->fields._version;
              if ( !items )
                sub_1C3B9C0(v67, presentId);
              size = v67->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v67,
                  presentId,
                  *(const MethodInfo_3673CA0 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
              }
              else
              {
                v67->fields._size = size + 1;
                items->m_Items[size] = presentId;
              }
            }
          }
          else
          {
            if ( !IsExpired )
              goto LABEL_39;
LABEL_33:
            NameText = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, v45);
            if ( !v32 )
              sub_1C3B9C0(NameText, NameText);
            if ( !System_Collections_Generic_List_object___Contains(
                    v32,
                    NameText,
                    (const MethodInfo_368BFFC *)Method_System_Collections_Generic_List_string__Contains__) )
            {
              v55 = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, v54);
              v62 = (int64_t)v55;
              v63 = v32->fields._items;
              v64 = *v36;
              ++v32->fields._version;
              if ( !v63 )
                sub_1C3B9C0(v55, v55);
              v65 = v32->fields._size;
              if ( (unsigned int)v65 >= v63->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v32,
                  v55,
                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
              }
              else
              {
                v66 = &v63->obj.klass + v65;
                v32->fields._size = v65 + 1;
                v66[4] = (Il2CppClass *)v62;
                sub_1C3B708((PartyOrganizationUtility_o *)(v66 + 4), v62, v56, v57, v58, v59, v60, v61);
              }
            }
          }
        }
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v92,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v72 = StringLiteral_1/*""*/;
  p_expiredPresents_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._expiredPresents_k__BackingField;
  this->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._expiredPresents_k__BackingField,
    (int64_t)v72,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  if ( !v32 )
    goto LABEL_62;
  if ( v32->fields._size >= 1 )
  {
    do
    {
      klass = (System_String_o *)p_expiredPresents_k__BackingField->klass;
      Item = System_Collections_Generic_List_object___get_Item(
               v32,
               0,
               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
      v82 = System_String__Concat_63381876(
              klass,
              (System_String_o *)StringLiteral_16127/*"__field-group"*/,
              (System_String_o *)Item,
              (System_String_o *)StringLiteral_16386/*"align-items"*/,
              0LL);
      p_expiredPresents_k__BackingField->klass = (PartyOrganizationUtility_c *)v82;
      sub_1C3B708(p_expiredPresents_k__BackingField, (int64_t)v82, v83, v84, v85, v86, v87, v88);
      System_Collections_Generic_List_object___RemoveAt(
        v32,
        0,
        (const MethodInfo_368D440 *)Method_System_Collections_Generic_List_string__RemoveAt__);
    }
    while ( v32->fields._size > 0 );
  }
  v35 = (System_Collections_Generic_List_object__o *)*p_presentIds;
  if ( !*p_presentIds
    || (v35 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_long___ToArray(
                                                             (System_Collections_Generic_List_long__o *)v35,
                                                             (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.m_parent) )
  {
LABEL_62:
    sub_1C3B9C0(v35, v33);
  }
  UserPresentBoxWindow__receivePresent(this->fields.m_parent, (System_Int64_array *)v35, 0, 0, v89);
}


void __fastcall UserPresentListViewManager__RequestItemSelect(
        UserPresentListViewManager_o *this,
        ItemSelectEntity_o *selectItm,
        int32_t num,
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
  __int64 v15; // x1
  System_Collections_Generic_List_long__o *v16; // x22
  UserPresentListViewItem_c *v17; // x1
  int64_t presentTicketList; // x0
  int v19; // w26
  int v20; // w27
  int v21; // w29
  int v22; // w24
  _QWORD *v23; // x23
  __int64 methodPtr_low; // x10
  __int64 v25; // x8
  int64_t v26; // x25
  __int64 v27; // x8
  int v28; // w25
  struct System_Int64_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  UserPresentBoxWindow_o *m_parent; // x23
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // x2
  __int64 v35; // x9
  __int64 v36; // x8
  struct System_String_o *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  UserPresentBoxWindow_o *v44; // x20
  const MethodInfo *v45; // x4
  PresentSelectableDlgComponent___c__DisplayClass21_0_o *v46; // x0
  int32_t v47; // w1
  const MethodInfo *v48; // x2
  int32_t selectNum; // [xsp+4h] [xbp-6Ch]
  ItemSelectEntity_o *v50; // [xsp+8h] [xbp-68h]

  if ( (byte_4C20D8D & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Add__, selectItm);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_1C3B764(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_1C3B764(&NetworkManager_TypeInfo, v12);
    sub_1C3B764(&UserPresentListViewItem_TypeInfo, v13);
    sub_1C3B764(&StringLiteral_16127/*"__field-group"*/, v14);
    sub_1C3B764(&StringLiteral_16386/*"align-items"*/, v15);
    byte_4C20D8D = 1;
  }
  v16 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
  presentTicketList = (int64_t)this->fields.presentTicketList;
  if ( !presentTicketList || !selectItm )
    goto LABEL_26;
  v19 = *(_DWORD *)(presentTicketList + 24);
  v50 = selectItm;
  selectNum = num;
  if ( v19 < 1 || (v20 = selectItm->fields.requireNum * num, v20 < 1) )
  {
    if ( v16 )
    {
LABEL_28:
      m_parent = this->fields.m_parent;
      presentTicketList = (int64_t)System_Collections_Generic_List_long___ToArray(
                                     v16,
                                     (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( m_parent )
      {
        UserPresentBoxWindow__receivePresent(
          m_parent,
          (System_Int64_array *)presentTicketList,
          v50->fields.idx,
          selectNum,
          v33);
        UserPresentListViewManager__SetMode_38891540(this, 2, v34);
        return;
      }
    }
    goto LABEL_26;
  }
  v21 = 0;
  v22 = 1;
  while ( 1 )
  {
    presentTicketList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)presentTicketList,
                                   v22 - 1,
                                   (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !presentTicketList )
      goto LABEL_26;
    v23 = (_QWORD *)presentTicketList;
    methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)presentTicketList + 304LL) < (unsigned int)methodPtr_low )
      goto LABEL_26;
    if ( *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)presentTicketList + 200LL) + 8 * methodPtr_low - 8) != UserPresentListViewItem_TypeInfo )
      goto LABEL_26;
    presentTicketList = *(_QWORD *)(presentTicketList + 144);
    if ( !presentTicketList )
      goto LABEL_26;
    presentTicketList = UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)presentTicketList, 0, 0LL);
    if ( (presentTicketList & 1) != 0 )
      break;
    v25 = v23[15];
    if ( !v25 )
      goto LABEL_26;
    v26 = *(_QWORD *)(v25 + 96);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    presentTicketList = NetworkManager__getTime(0LL);
    if ( v26 <= presentTicketList )
      break;
    v27 = v23[18];
    if ( !v27 )
      goto LABEL_26;
    if ( !v16 )
      goto LABEL_26;
    v28 = *(_DWORD *)(v27 + 80);
    v17 = (UserPresentListViewItem_c *)v23[20];
    items = v16->fields._items;
    v30 = Method_System_Collections_Generic_List_long__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_26;
    size = v16->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v16,
        (int64_t)v17,
        *(const MethodInfo_3673CA0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v16->fields._size = size + 1;
      items->m_Items[size] = (int64_t)v17;
    }
    if ( v22 >= v19 )
      goto LABEL_28;
    v21 += v28;
    if ( v21 >= v20 )
      goto LABEL_28;
    presentTicketList = (int64_t)this->fields.presentTicketList;
    ++v22;
    if ( !presentTicketList )
      goto LABEL_26;
  }
  presentTicketList = (int64_t)this->fields.presentTicketList;
  if ( !presentTicketList )
    goto LABEL_26;
  presentTicketList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)presentTicketList,
                                 0,
                                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !presentTicketList )
    goto LABEL_26;
  v17 = UserPresentListViewItem_TypeInfo;
  v35 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)presentTicketList + 304LL) >= (unsigned int)v35
    && *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)presentTicketList + 200LL) + 8 * v35 - 8) == UserPresentListViewItem_TypeInfo )
  {
    v36 = *(_QWORD *)(presentTicketList + 120);
    if ( v36 )
    {
      v37 = System_String__Concat_63379872(
              (System_String_o *)StringLiteral_16127/*"__field-group"*/,
              *(System_String_o **)(v36 + 24),
              (System_String_o *)StringLiteral_16386/*"align-items"*/,
              0LL);
      this->fields._expiredPresents_k__BackingField = v37;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields._expiredPresents_k__BackingField,
        (int64_t)v37,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      if ( v16 )
      {
        v44 = this->fields.m_parent;
        presentTicketList = (int64_t)System_Collections_Generic_List_long___ToArray(
                                       v16,
                                       (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v44 )
        {
          UserPresentBoxWindow__receivePresent(v44, (System_Int64_array *)presentTicketList, v50->fields.idx, 0, v45);
          return;
        }
      }
    }
LABEL_26:
    sub_1C3B9C0(presentTicketList, v17);
  }
  sub_1C3BC80(presentTicketList);
  PresentSelectableDlgComponent___c__DisplayClass21_0___OpenItemConfirmDlg_b__2(v46, v47, v48);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestListObject(
        UserPresentListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C20D7E & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v11);
    sub_1C3B764(&Method_UserPresentListViewManager_OnMoveEnd__, v12);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v13);
    byte_4C20D7E = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3B9C0(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      ObjectList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v21.fields._current;
      v18 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C3B9C0(v19, v20);
      UserPresentListViewObject__Init_38940920((UserPresentListViewObject_o *)current, mode, v18, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestListObject_38930864(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C20D7F & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v9);
    sub_1C3B764(&Method_UserPresentListViewManager_OnMoveEnd__, v10);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v11);
    byte_4C20D7F = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3B9C0(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      ObjectList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v19.fields._current;
      v16 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C3B9C0(v17, v18);
      UserPresentListViewObject__Init_38941004((UserPresentListViewObject_o *)current, mode, v16, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


void __fastcall UserPresentListViewManager__SetMode(
        UserPresentListViewManager_o *this,
        int32_t mode,
        UserPresentListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_38891540(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__SetMode_38891540(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_4C20D7D & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1C3B764(
                                             &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                             *(_QWORD *)&mode);
    byte_4C20D7D = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1C3B9C0(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0LL);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    UserPresentListViewManager__RequestListObject_38930864(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 4;
    goto LABEL_8;
  }
}


void __fastcall UserPresentListViewManager__SetMode_38930812(
        UserPresentListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_38891540(this, mode, v10);
}


void __fastcall UserPresentListViewManager__SetObjectItem(
        UserPresentListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C20D7C & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1C3B764(&UserPresentListViewObject_TypeInfo, obj);
    byte_4C20D7C = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserPresentListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserPresentListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewObject_TypeInfo )
  {
    sub_1C3B9C0(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  UserPresentListViewObject__Init_38941088((UserPresentListViewObject_o *)obj, v7, 0LL);
}


void __fastcall UserPresentListViewManager__SetSortButtonImage(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v8; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v10; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v12; // x8
  System_String_o **v13; // x8
  struct ListViewSort_o *v14; // x8
  System_String_o **v15; // x8

  if ( (byte_4C20D8B & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&StringLiteral_17879/*"contain"*/, v3);
    sub_1C3B764(&StringLiteral_17923/*"cord_n"*/, v4);
    sub_1C3B764(&StringLiteral_17930/*"costCurrency"*/, v5);
    sub_1C3B764(&StringLiteral_17876/*"consumeType"*/, v6);
    byte_4C20D8B = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_24;
    v10 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v10 )
      goto LABEL_24;
    UILabel__set_text(v10, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v12 = this->fields.sort;
    if ( v12 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v13 = (System_String_o **)(v12->fields.isAscendingOrder ? &StringLiteral_17930/*"costCurrency"*/ : &StringLiteral_17923/*"cord_n"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v13, 0LL);
        v14 = this->fields.sort;
        if ( v14 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            if ( v14->fields.isAscendingOrder )
              v15 = (System_String_o **)&StringLiteral_17876/*"consumeType"*/;
            else
              v15 = (System_String_o **)&StringLiteral_17879/*"contain"*/;
            UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_1C3B9C0(sort, v8);
  }
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_0(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x20
  System_Action_o *v8; // x21

  if ( (byte_4C20D90 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__, v4);
    byte_4C20D90 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL),
        v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__,
          0LL),
        !v7) )
  {
    sub_1C3B9C0(Instance, v6);
  }
  CommonUI__maskFadeout((CommonUI_o *)v7, 1, 0.5, v8, 0LL);
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_1(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UserPresentBoxWindow_o *m_parent; // x0

  if ( (byte_4C20D91 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C20D91 = 1;
  }
  UserPresentListViewManager__DestroyList(this, method);
  m_parent = this->fields.m_parent;
  if ( !m_parent
    || (UserPresentBoxWindow__ReDisp(m_parent, v3), (m_parent = (UserPresentBoxWindow_o *)this->fields.scrollView) == 0LL)
    || (UIScrollView__ResetPosition((UIScrollView_o *)m_parent, 0LL),
        (m_parent = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1C3B9C0(m_parent, v3);
  }
  CommonUI__maskFadein((CommonUI_o *)m_parent, 0.5, 0LL, 0LL);
}


void __fastcall UserPresentListViewManager__add_callbackFunc(
        UserPresentListViewManager_o *this,
        UserPresentListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct UserPresentListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  UserPresentListViewManager_o *v10; // x0
  UserPresentListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C20D6F & 1) == 0 )
  {
    sub_1C3B764(&UserPresentListViewManager_CallbackFunc_TypeInfo, value);
    byte_4C20D6F = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (UserPresentListViewManager_CallbackFunc_c *)v7->klass != UserPresentListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3BC80(v7);
  UserPresentListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall UserPresentListViewManager__add_callbackFunc2(
        UserPresentListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  UserPresentListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C20D71 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, value);
    byte_4C20D71 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C76C54(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3BC80(v7);
  UserPresentListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall UserPresentListViewManager__add_receivecCallbackFunc(
        UserPresentListViewManager_o *this,
        UserPresentListViewManager_ReceiveCallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *receivecCallbackFunc; // x21
  struct UserPresentListViewManager_ReceiveCallbackFunc_o **p_receivecCallbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  UserPresentListViewManager_o *v10; // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C20D73 & 1) == 0 )
  {
    sub_1C3B764(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, value);
    byte_4C20D73 = 1;
  }
  receivecCallbackFunc = (System_Delegate_o *)this->fields.receivecCallbackFunc;
  p_receivecCallbackFunc = &this->fields.receivecCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(receivecCallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (UserPresentListViewManager_ReceiveCallbackFunc_c *)v7->klass != UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C76C54(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3BC80(v7);
  UserPresentListViewManager__remove_receivecCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_UserPresentListViewObject__o *__fastcall UserPresentListViewManager__get_ClippingObjectList(
        UserPresentListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C20D78 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C20D78 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3B9C0(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C3B9C0(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C3B9C0(0LL, v18);
      Item = (ListViewItem_o *)UserPresentListViewObject__GetItem((UserPresentListViewObject_o *)Component_object, 0LL);
      if ( !Item )
        sub_1C3B9C0(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v28 = ListViewManager__ClippingItem_42215272((ListViewManager_o *)this, Item, 0LL);
        if ( v28 )
        {
          if ( !v11 )
            sub_1C3B9C0(v28, v29);
          items = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C3B9C0(v28, v29);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C3B9C0(Item, v21);
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C3B9C0(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v19;
        sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v19, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v11;
}


System_Collections_Generic_List_UserPresentListViewObject__o *__fastcall UserPresentListViewManager__get_ObjectList(
        UserPresentListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C20D77 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C20D77 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3B9C0(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C3B9C0(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1C3B9C0(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C3B9C0(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C3B708((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v11;
}


ListViewSort_o *__fastcall UserPresentListViewManager__get_SortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  UserPresentListViewManager_c *v2; // x0

  if ( (byte_4C20D6E & 1) == 0 )
  {
    sub_1C3B764(&UserPresentListViewManager_TypeInfo, v1);
    byte_4C20D6E = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v2 = UserPresentListViewManager_TypeInfo;
  }
  return v2->static_fields->sortInfo;
}


System_String_o *__fastcall UserPresentListViewManager__get_expiredPresents(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._expiredPresents_k__BackingField;
}


int32_t __fastcall UserPresentListViewManager__get_select_idx(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._select_idx_k__BackingField;
}


void __fastcall UserPresentListViewManager__remove_callbackFunc(
        UserPresentListViewManager_o *this,
        UserPresentListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct UserPresentListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  UserPresentListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C20D70 & 1) == 0 )
  {
    sub_1C3B764(&UserPresentListViewManager_CallbackFunc_TypeInfo, value);
    byte_4C20D70 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (UserPresentListViewManager_CallbackFunc_c *)v7->klass != UserPresentListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3BC80(v7);
  UserPresentListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall UserPresentListViewManager__remove_callbackFunc2(
        UserPresentListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  UserPresentListViewManager_o *v10; // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C20D72 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, value);
    byte_4C20D72 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C76C54(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3BC80(v7);
  UserPresentListViewManager__add_receivecCallbackFunc(v10, v11, v12);
}


void __fastcall UserPresentListViewManager__remove_receivecCallbackFunc(
        UserPresentListViewManager_o *this,
        UserPresentListViewManager_ReceiveCallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *receivecCallbackFunc; // x21
  struct UserPresentListViewManager_ReceiveCallbackFunc_o **p_receivecCallbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  UserPresentListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C20D74 & 1) == 0 )
  {
    sub_1C3B764(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, value);
    byte_4C20D74 = 1;
  }
  receivecCallbackFunc = (System_Delegate_o *)this->fields.receivecCallbackFunc;
  p_receivecCallbackFunc = &this->fields.receivecCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(receivecCallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (UserPresentListViewManager_ReceiveCallbackFunc_c *)v7->klass != UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C76C54(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3BC80(v7);
  UserPresentListViewManager__get_select_idx(v10, v11);
}


void __fastcall UserPresentListViewManager__resetCheckStatus(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v4; // w9

  if ( (byte_4C20D84 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Clear__, method);
    byte_4C20D84 = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v4 = checkedIdList->fields._version + 1;
    checkedIdList->fields._size = 0;
    checkedIdList->fields._version = v4;
  }
}


void __fastcall UserPresentListViewManager__setJumpType(
        UserPresentListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *dialog; // x0

  dialog = this->fields.dialog;
  if ( !dialog )
    sub_1C3B9C0(0LL, type);
  UserPresentBoxErrorDialog__setJumpType(dialog, type, method);
}


void __fastcall UserPresentListViewManager__set_expiredPresents(
        UserPresentListViewManager_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._expiredPresents_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._expiredPresents_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall UserPresentListViewManager__set_select_idx(
        UserPresentListViewManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._select_idx_k__BackingField = value;
}


void __fastcall UserPresentListViewManager__showErrorResultDlg(
        UserPresentListViewManager_o *this,
        UserPresentListViewManager_ReceiveCallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int32_t kind; // w8
  System_String_o *v15; // x1
  __int64 *v16; // x8

  if ( (byte_4C20D87 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, callback);
    sub_1C3B764(&StringLiteral_11280/*"SERVANT_ATTRIBUTE_HIDE"*/, v10);
    sub_1C3B764(&StringLiteral_11276/*"SERVANT_ALREADY_RECOVER_NOT_SELECT"*/, v11);
    sub_1C3B764(&StringLiteral_1/*""*/, v12);
    byte_4C20D87 = 1;
  }
  this->fields.receivecCallbackFunc = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.receivecCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  kind = this->fields.kind;
  if ( !kind )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_11280/*"SERVANT_ATTRIBUTE_HIDE"*/;
    goto LABEL_12;
  }
  if ( (unsigned int)(kind - 1) <= 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_11276/*"SERVANT_ALREADY_RECOVER_NOT_SELECT"*/;
LABEL_12:
    v15 = LocalizationManager__Get((System_String_o *)*v16, 0LL);
    goto LABEL_13;
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_13:
  UserPresentListViewManager__OpenNoticeDlg(this, v15, v13);
}


void __fastcall UserPresentListViewManager__updateCheckStatus(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_List_long__o *checkedIdList; // x21
  void *m_parent; // x0
  int32_t size; // w25
  BalanceConfig_c *v15; // x0
  int32_t PresentBoxCheckMax; // w26
  System_Collections_Generic_List_long__o *v17; // x20
  const MethodInfo *v18; // x2
  int32_t v19; // w21
  UserPresentListViewItem_o *v20; // x27
  UserPresentListViewItem_o *v21; // x22
  __int64 methodPtr_low; // x9
  int64_t v23; // x23
  const MethodInfo *v24; // x3
  int32_t v25; // w0
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x2
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  struct ItemEntity_o *itemEnt; // x8
  struct System_Collections_Generic_List_long__o *v30; // x8
  UserPresentListViewManager_o *v31; // x0
  int32_t v32; // w1
  const MethodInfo *v33; // x2
  int v34; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C20D83 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__IndexOf__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Remove__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_long___ctor___77852968, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_1C3B764(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_1C3B764(&UserPresentListViewItem_TypeInfo, v11);
    byte_4C20D83 = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList && checkedIdList->fields._size )
  {
    v34 = 1;
  }
  else
  {
    m_parent = this->fields.m_parent;
    if ( !m_parent )
      goto LABEL_39;
    UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 0, 1, v2);
    checkedIdList = this->fields.checkedIdList;
    if ( !checkedIdList )
      goto LABEL_39;
    v34 = 0;
  }
  size = checkedIdList->fields._size;
  v15 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
    checkedIdList = this->fields.checkedIdList;
  }
  PresentBoxCheckMax = v15->static_fields->PresentBoxCheckMax;
  v17 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_57095540(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)checkedIdList,
    (const MethodInfo_3673574 *)Method_System_Collections_Generic_List_long___ctor___77852968);
  m_parent = this->fields.itemList;
  if ( !m_parent )
LABEL_39:
    sub_1C3B9C0(m_parent, method);
  v19 = 0;
  v20 = 0LL;
  while ( 1 )
  {
    if ( v19 >= *((_DWORD *)m_parent + 6) )
    {
      v30 = this->fields.checkedIdList;
      if ( v30 )
      {
        m_parent = this->fields.m_parent;
        if ( m_parent )
        {
          UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)m_parent, v30->fields._size, v18);
          return;
        }
      }
      goto LABEL_39;
    }
    m_parent = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)m_parent,
                 v19,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !m_parent )
      goto LABEL_39;
    method = (const MethodInfo *)UserPresentListViewItem_TypeInfo;
    v21 = (UserPresentListViewItem_o *)m_parent;
    methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)m_parent + 304LL) < (unsigned int)methodPtr_low
      || *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)m_parent + 200LL) + 8 * methodPtr_low - 8) != UserPresentListViewItem_TypeInfo )
    {
      break;
    }
    if ( !v17 )
      goto LABEL_39;
    v23 = *((_QWORD *)m_parent + 20);
    if ( System_Collections_Generic_List_long___Remove(
           v17,
           v23,
           (const MethodInfo_367519C *)Method_System_Collections_Generic_List_long__Remove__) )
    {
      m_parent = this->fields.checkedIdList;
      if ( !m_parent )
        goto LABEL_39;
      v25 = System_Collections_Generic_List_long___IndexOf(
              (System_Collections_Generic_List_long__o *)m_parent,
              v23,
              (const MethodInfo_367491C *)Method_System_Collections_Generic_List_long__IndexOf__);
      UserPresentListViewItem__setCheckBoxed(v21, 1, v25 + 1, v26);
    }
    else
    {
      UserPresentListViewItem__setCheckBoxed(v21, 0, -1, v24);
      if ( size < PresentBoxCheckMax )
        v20 = v21;
      if ( size < PresentBoxCheckMax )
      {
        if ( v34 && (usrPresentEnt = v21->fields.usrPresentEnt) != 0LL )
        {
          if ( usrPresentEnt->fields.giftType == 2 )
          {
            itemEnt = v21->fields.itemEnt;
            if ( !itemEnt )
              goto LABEL_39;
            method = (const MethodInfo *)(itemEnt->fields.type == 24);
          }
          else
          {
            method = 0LL;
          }
          v21 = v20;
          if ( !v20 )
            goto LABEL_39;
        }
        else
        {
          LOBYTE(method) = 0;
        }
      }
      else
      {
        LOBYTE(method) = 1;
      }
      UserPresentListViewItem__setBlocked(v21, (bool)method, v27);
    }
    m_parent = this->fields.itemList;
    ++v19;
    if ( !m_parent )
      goto LABEL_39;
  }
  sub_1C3BC80(m_parent);
  UserPresentListViewManager__GetItem(v31, v32, v33);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager_CallbackFunc___ctor(
        UserPresentListViewManager_CallbackFunc_o *this,
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
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(
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
  if ( (sub_1C3B824(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A7BC90;
LABEL_8:
      this->fields.m_target = v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = (Il2CppObject *)sub_1A7BC70;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v15, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A7BC28;
}


System_IAsyncResult_o *__fastcall UserPresentListViewManager_CallbackFunc__BeginInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = result;
  return (System_IAsyncResult_o *)sub_1C3B718(this, &v6, callback, object);
}


void __fastcall UserPresentListViewManager_CallbackFunc__EndInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall UserPresentListViewManager_CallbackFunc__Invoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager_ReceiveCallbackFunc___ctor(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
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
  sub_1C3B708(
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
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A7BD14;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A7BCCC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall UserPresentListViewManager_ReceiveCallbackFunc__BeginInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        bool isReceive,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isReceive;
  if ( (byte_4C20D93 & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, isReceive);
    byte_4C20D93 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall UserPresentListViewManager_ReceiveCallbackFunc__EndInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall UserPresentListViewManager_ReceiveCallbackFunc__Invoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        bool isReceive,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isReceive,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall UserPresentListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C20D94 & 1) == 0 )
  {
    sub_1C3B764(&UserPresentListViewManager___c_TypeInfo, v1);
    byte_4C20D94 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(UserPresentListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserPresentListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentListViewManager___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)UserPresentListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall UserPresentListViewManager___c___ctor(UserPresentListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserPresentListViewManager___c___GetAllPresentStrings_b__60_0(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *a,
        ListViewItem_o *b,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  __int64 v7; // x9
  void *monitor; // x20
  UserPresentListViewManager___c_o *v10; // x0
  ListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C20D95 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1C3B764(&UserPresentListViewItem_TypeInfo, a);
    byte_4C20D95 = 1;
  }
  if ( !a )
    goto LABEL_12;
  methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(a->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo )
  {
    this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_UserPresentEntity(
                                                 (UserPresentListViewItem_o *)a,
                                                 0LL);
    if ( !this || !b )
      goto LABEL_12;
    v7 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v7
      && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v7 - 1] == UserPresentListViewItem_TypeInfo )
    {
      monitor = this[5].monitor;
      this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_UserPresentEntity(
                                                   (UserPresentListViewItem_o *)b,
                                                   0LL);
      if ( this )
        return (_DWORD)monitor - LODWORD(this[5].monitor);
LABEL_12:
      sub_1C3B9C0(this, a);
    }
  }
  else
  {
    sub_1C3BC80(a);
  }
  sub_1C3BC80(b);
  return UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(v10, v11, v12);
}


bool __fastcall UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *obj,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  __int64 v5; // x9

  if ( (byte_4C20D96 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1C3B764(&UserPresentListViewItem_TypeInfo, obj);
    byte_4C20D96 = 1;
  }
  if ( !obj )
    goto LABEL_14;
  methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_13:
    sub_1C3BC80(obj);
    goto LABEL_14;
  }
  this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_UserPresentEntity(
                                               (UserPresentListViewItem_o *)obj,
                                               0LL);
  if ( !this )
    goto LABEL_14;
  if ( LODWORD(this[4].monitor) == 2 )
  {
    v5 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v5
      && (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[v5 - 1] == UserPresentListViewItem_TypeInfo )
    {
      this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_ItemEntity(
                                                   (UserPresentListViewItem_o *)obj,
                                                   0LL);
      if ( this )
        return LODWORD(this[3].klass) == 24;
LABEL_14:
      sub_1C3B9C0(this, obj);
    }
    goto LABEL_13;
  }
  return 0;
}


int32_t __fastcall UserPresentListViewManager___c___GetAllPresentStrings_b__60_2(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *a,
        ListViewItem_o *b,
        const MethodInfo *method)
{
  ListViewItem_o *v5; // x20
  __int64 methodPtr_low; // x9
  __int64 v7; // x9
  UserPresentListViewManager___c_o *v8; // x21
  int32_t result; // w0
  __int64 v10; // x9
  __int64 v11; // x9
  UserPresentListViewManager___c_o *v12; // x0
  ListViewItem_o *v13; // x1
  ListViewItem_o *v14; // x2
  const MethodInfo *v15; // x3

  v5 = a;
  if ( (byte_4C20D97 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1C3B764(&UserPresentListViewItem_TypeInfo, a);
    byte_4C20D97 = 1;
  }
  if ( !v5 )
    goto LABEL_17;
  methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v5->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
  {
    goto LABEL_18;
  }
  this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_NameText((UserPresentListViewItem_o *)v5, 0LL);
  if ( !b )
    goto LABEL_17;
  v7 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) < (unsigned int)v7
    || (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v7 - 1] != UserPresentListViewItem_TypeInfo )
  {
    goto LABEL_19;
  }
  v8 = this;
  this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_NameText((UserPresentListViewItem_o *)b, 0LL);
  if ( !v8 )
    goto LABEL_17;
  result = System_String__CompareTo_63375912((System_String_o *)v8, (System_String_o *)this, 0LL);
  if ( result )
    return result;
  a = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  v10 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v5->klass->vtable._0_Equals.methodPtr) < (unsigned int)v10
    || (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[v10 - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_18:
    sub_1C3BC80(v5);
    goto LABEL_19;
  }
  v11 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v11
    && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v11 - 1] == UserPresentListViewItem_TypeInfo )
  {
    this = (UserPresentListViewManager___c_o *)v5[1].fields.sortValue2;
    if ( this )
      return System_String__CompareTo_63375912((System_String_o *)this, (System_String_o *)b[1].fields.sortValue2, 0LL);
LABEL_17:
    sub_1C3B9C0(this, a);
  }
LABEL_19:
  sub_1C3BC80(b);
  return UserPresentListViewManager___c___OpenSelectableDialog_b__67_1(v12, v13, v14, v15);
}


void __fastcall UserPresentListViewManager___c___OnClickListView_b__55_0(
        UserPresentListViewManager___c_o *this,
        bool res,
        const MethodInfo *method)
{
  ;
}


void __fastcall UserPresentListViewManager___c___OnClickListView_b__55_1(
        UserPresentListViewManager___c_o *this,
        bool res,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall UserPresentListViewManager___c___OpenSelectableDialog_b__67_1(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *a,
        ListViewItem_o *b,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  __int64 v7; // x9
  void *monitor; // x20
  int32_t result; // w0
  UserPresentListViewManager___c__DisplayClass67_0_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C20D98 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1C3B764(&UserPresentListViewItem_TypeInfo, a);
    byte_4C20D98 = 1;
  }
  if ( !a )
    goto LABEL_12;
  methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(a->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo )
  {
    this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_UserPresentEntity(
                                                 (UserPresentListViewItem_o *)a,
                                                 0LL);
    if ( !this || !b )
      goto LABEL_12;
    v7 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v7
      && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v7 - 1] == UserPresentListViewItem_TypeInfo )
    {
      monitor = this[5].monitor;
      this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_UserPresentEntity(
                                                   (UserPresentListViewItem_o *)b,
                                                   0LL);
      if ( this )
        return (_DWORD)monitor - LODWORD(this[5].monitor);
LABEL_12:
      sub_1C3B9C0(this, a);
    }
  }
  else
  {
    sub_1C3BC80(a);
  }
  sub_1C3BC80(b);
  UserPresentListViewManager___c__DisplayClass67_0___ctor(v10, v11);
  return result;
}


void __fastcall UserPresentListViewManager___c__DisplayClass67_0___ctor(
        UserPresentListViewManager___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserPresentListViewManager___c__DisplayClass67_0___OpenSelectableDialog_b__0(
        UserPresentListViewManager___c__DisplayClass67_0_o *this,
        ListViewItem_o *obj,
        const MethodInfo *method)
{
  UserPresentListViewManager___c__DisplayClass67_0_o *v4; // x19
  __int64 methodPtr_low; // x10
  int32_t ticketsHave; // w21
  PartyOrganizationUtility_o *p_ticketItem; // x19
  struct ItemEntity_o *ticketItem; // t1
  ItemEntity_o *ItemEntity; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v4 = this;
  if ( (byte_4C20D99 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_1C3B764(&UserPresentListViewItem_TypeInfo, obj);
    byte_4C20D99 = 1;
  }
  if ( !obj )
    goto LABEL_19;
  methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
  {
    goto LABEL_19;
  }
  if ( !UserPresentListViewItem__get_UserPresentEntity((UserPresentListViewItem_o *)obj, 0LL) )
    return 1;
  this = (UserPresentListViewManager___c__DisplayClass67_0_o *)UserPresentListViewItem__get_UserPresentEntity(
                                                                 (UserPresentListViewItem_o *)obj,
                                                                 0LL);
  if ( !this )
    goto LABEL_19;
  if ( LODWORD(this[2].monitor) != 2 || !UserPresentListViewItem__get_ItemEntity((UserPresentListViewItem_o *)obj, 0LL) )
    return 1;
  this = (UserPresentListViewManager___c__DisplayClass67_0_o *)UserPresentListViewItem__get_ItemEntity(
                                                                 (UserPresentListViewItem_o *)obj,
                                                                 0LL);
  if ( !this )
    goto LABEL_19;
  if ( this[1].fields.ticketId != 24 )
    return 1;
  this = (UserPresentListViewManager___c__DisplayClass67_0_o *)UserPresentListViewItem__get_ItemEntity(
                                                                 (UserPresentListViewItem_o *)obj,
                                                                 0LL);
  if ( !this )
    goto LABEL_19;
  if ( this->fields.ticketId != v4->fields.ticketId )
    return 1;
  ticketsHave = v4->fields.ticketsHave;
  this = (UserPresentListViewManager___c__DisplayClass67_0_o *)UserPresentListViewItem__get_UserPresentEntity(
                                                                 (UserPresentListViewItem_o *)obj,
                                                                 0LL);
  if ( !this )
LABEL_19:
    sub_1C3B9C0(this, obj);
  ticketItem = v4->fields.ticketItem;
  p_ticketItem = (PartyOrganizationUtility_o *)&v4->fields.ticketItem;
  *(_DWORD *)(&p_ticketItem[-1].fields._IsNormalFlowQuest_k__BackingField + 3) = this[2].fields.ticketId + ticketsHave;
  if ( !ticketItem )
  {
    ItemEntity = UserPresentListViewItem__get_ItemEntity((UserPresentListViewItem_o *)obj, 0LL);
    p_ticketItem->klass = (PartyOrganizationUtility_c *)ItemEntity;
    sub_1C3B708(p_ticketItem, (int64_t)ItemEntity, v10, v11, v12, v13, v14, v15);
  }
  return 0;
}