void UserPresentListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2F741 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewSort_TypeInfo);
    sub_1C93AD4(&UserPresentListViewManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_15330/*"UserPresent"*/);
    byte_4D2F741 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C93D20(ListViewSort_TypeInfo);
  ListViewSort___ctor_44521036(v1, (System_String_o *)StringLiteral_15330/*"UserPresent"*/, 1, 0, 0);
  UserPresentListViewManager_TypeInfo->static_fields->sortInfo = v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)UserPresentListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserPresentListViewManager___ctor(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void UserPresentListViewManager__CreateList(
        UserPresentListViewManager_o *this,
        UserPresentBoxEntity_array *presentList,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x1
  int64_t m_parent; // x0
  System_Collections_Generic_IEnumerable_T__o *checkedIdList; // x22
  System_Collections_Generic_List_long__o *v20; // x21
  int max_length; // w8
  unsigned int v22; // w22
  Il2CppClass **v23; // x23
  Il2CppClass *v24; // x8
  UserPresentBoxEntity_o **v25; // x23
  Il2CppClass *v26; // t1
  UserPresentBoxEntity_o *v27; // x24
  UserPresentListViewItem_o *v28; // x23
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  struct System_Collections_Generic_List_long__o *v40; // x20
  int32_t v41; // w22
  const MethodInfo *v42; // x1
  il2cpp_array_size_t v43; // x8
  unsigned __int64 v44; // x21
  UserPresentBoxEntity_o *v45; // x23
  UserPresentListViewItem_o *v46; // x22
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x8

  if ( (byte_4D2F72C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor___79008768);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&UserPresentListViewItem_TypeInfo);
    byte_4D2F72C = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.selectPresentData = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.selectPresentData, 0, v5, v6, v7, v8, v9, v10);
  this->fields.presentIds = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.presentIds, 0, v11, v12, v13, v14, v15, v16);
  m_parent = (int64_t)this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_38;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 0, 0, 0);
  checkedIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v20 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_59118244(
      v20,
      checkedIdList,
      (const MethodInfo_38612A4 *)Method_System_Collections_Generic_List_long___ctor___79008768);
    if ( !presentList )
      goto LABEL_38;
    max_length = presentList->max_length;
    if ( max_length >= 1 )
    {
      v22 = 0;
      while ( v22 < max_length )
      {
        v23 = &presentList->obj.klass + (int)v22;
        v26 = v23[4];
        v25 = (UserPresentBoxEntity_o **)(v23 + 4);
        v24 = v26;
        if ( !v26 || !v20 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v20,
                     (int64_t)v24->_1.namespaze,
                     (const MethodInfo_3862ECC *)Method_System_Collections_Generic_List_long__Remove__);
        if ( v22 >= LODWORD(presentList->max_length) )
          goto LABEL_39;
        v27 = *v25;
        v28 = (UserPresentListViewItem_o *)sub_1C93D20(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v28, v22, v27, v29);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v36 = *(_QWORD *)(m_parent + 16);
        v37 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v36 )
          goto LABEL_38;
        v38 = *(int *)(m_parent + 24);
        if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v28,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = v36 + 8 * v38;
          *(_DWORD *)(m_parent + 24) = v38 + 1;
          *(_QWORD *)(v39 + 32) = v28;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v39 + 32), (int32_t)v28, v30, v31, v32, v33, v34, v35);
        }
        max_length = presentList->max_length;
        if ( (int)++v22 >= max_length )
          goto LABEL_18;
      }
      goto LABEL_39;
    }
LABEL_18:
    if ( !v20 )
LABEL_38:
      sub_1C93D2C(m_parent, v17);
    v40 = this->fields.checkedIdList;
    if ( v20->fields._size >= 1 )
    {
      v41 = 0;
      do
      {
        m_parent = System_Collections_Generic_List_long___get_Item(
                     v20,
                     v41,
                     (const MethodInfo_38616E0 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !v40 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v40,
                     m_parent,
                     (const MethodInfo_3862ECC *)Method_System_Collections_Generic_List_long__Remove__);
        v40 = this->fields.checkedIdList;
      }
      while ( ++v41 < v20->fields._size );
    }
    if ( !v40 )
      goto LABEL_38;
    if ( v40->fields._size >= 1 )
    {
      m_parent = (int64_t)this->fields.m_parent;
      if ( !m_parent )
        goto LABEL_38;
      UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 1, 1, 0);
      UserPresentListViewManager__updateCheckStatus(this, v42);
    }
  }
  else
  {
    if ( !presentList )
      goto LABEL_38;
    v43 = presentList->max_length;
    if ( (int)v43 >= 1 )
    {
      v44 = 0;
      while ( v44 < (unsigned int)v43 )
      {
        v45 = presentList->m_Items[v44];
        v46 = (UserPresentListViewItem_o *)sub_1C93D20(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v46, v44, v45, v47);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v54 = *(_QWORD *)(m_parent + 16);
        v55 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v54 )
          goto LABEL_38;
        v56 = *(int *)(m_parent + 24);
        if ( (unsigned int)v56 >= *(_DWORD *)(v54 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v46,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = v54 + 8 * v56;
          *(_DWORD *)(m_parent + 24) = v56 + 1;
          *(_QWORD *)(v57 + 32) = v46;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v57 + 32), (int32_t)v46, v48, v49, v50, v51, v52, v53);
        }
        LODWORD(v43) = presentList->max_length;
        if ( (__int64)++v44 >= (int)v43 )
          goto LABEL_37;
      }
LABEL_39:
      sub_1C93D34(m_parent);
    }
  }
LABEL_37:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void UserPresentListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserPresentListViewManager_c *v2; // x0
  ListViewSort_o *sortInfo; // x0

  if ( (byte_4D2F727 & 1) == 0 )
  {
    sub_1C93AD4(&UserPresentListViewManager_TypeInfo);
    byte_4D2F727 = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v2 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v2->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1C93D2C(0, v1);
  ListViewSort__DeleteContinueData(sortInfo, 0);
}


void UserPresentListViewManager__DestroyList(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C93D2C(0, v3);
  ListViewSort__Save(sort, 0);
}


void UserPresentListViewManager__DlgForExpiredPresent(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v4; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D2F740 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__);
    sub_1C93AD4(&StringLiteral_10521/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/);
    byte_4D2F740 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_10521/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0);
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, 0);
  if ( !Instance )
    sub_1C93D2C(v6, v7);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, 0, v4, v5, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
}


void UserPresentListViewManager__EndNoticeDlg(
        UserPresentListViewManager_o *this,
        int32_t scene,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *dialog; // x21
  System_Action_T__o *v6; // x22
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  struct UserPresentListViewManager_ReceiveCallbackFunc_o *receivecCallbackFunc; // x8

  if ( (byte_4D2F73B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_SceneList_Type__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_UserPresentListViewManager_EndNoticeDlg__);
    byte_4D2F73B = 1;
  }
  dialog = this->fields.dialog;
  v6 = (System_Action_T__o *)sub_1C93D20(System_Action_SceneList_Type__TypeInfo);
  System_Action_Int32Enum____ctor(v6, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0);
  if ( !dialog )
    goto LABEL_14;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(dialog, (System_Action_SceneList_Type__o *)v6, 0);
  if ( scene == -1 )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( CommonUI__IsActive_MasterMission((CommonUI_o *)Instance, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_1C93D2C(Instance, v8);
  CommonUI__CloseUsrPresentList((CommonUI_o *)Instance, 0);
LABEL_11:
  receivecCallbackFunc = this->fields.receivecCallbackFunc;
  if ( receivecCallbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))receivecCallbackFunc->fields.invoke_impl)(
      receivecCallbackFunc->fields.method_code,
      1,
      receivecCallbackFunc->fields.method);
}


System_String_o *UserPresentListViewManager__GetAllPresentStrings(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *presentAllSelectedList; // x8
  System_Collections_Generic_List_object__o **p_presentAllSelectedList; // x19
  int32_t size; // w2
  int v6; // w9
  System_Collections_Generic_IEnumerable_T__o *itemList; // x21
  System_Collections_Generic_List_object__o *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_object__o *NameText; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v17; // x20
  System_Comparison_T__o *v18; // x21
  Il2CppObject *v19; // x22
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_List_object__o *v27; // x20
  System_Predicate_object__o *v28; // x21
  Il2CppObject *v29; // x22
  struct UserPresentListViewManager___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_Collections_Generic_List_object__o *v37; // x20
  int v38; // w8
  System_Comparison_T__o *v39; // x21
  Il2CppObject *v40; // x22
  struct UserPresentListViewManager___c_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_Text_StringBuilder_o *v48; // x20
  int v49; // w24
  int32_t v50; // w21
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10
  Il2CppObject *v53; // x22
  System_String_o *v54; // x23

  if ( (byte_4D2F738 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&System_Comparison_ListViewItem__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem___ctor___79009648);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C93AD4(&System_Text_StringBuilder_TypeInfo);
    sub_1C93AD4(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__);
    sub_1C93AD4(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__);
    sub_1C93AD4(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__);
    sub_1C93AD4(&UserPresentListViewManager___c_TypeInfo);
    sub_1C93AD4(&UserPresentListViewItem_TypeInfo);
    sub_1C93AD4(&StringLiteral_10526/*"PRESENT_INFO"*/);
    byte_4D2F738 = 1;
  }
  presentAllSelectedList = this->fields.presentAllSelectedList;
  p_presentAllSelectedList = (System_Collections_Generic_List_object__o **)&this->fields.presentAllSelectedList;
  if ( presentAllSelectedList )
  {
    size = presentAllSelectedList->fields._size;
    v6 = presentAllSelectedList->fields._version + 1;
    presentAllSelectedList->fields._size = 0;
    presentAllSelectedList->fields._version = v6;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)presentAllSelectedList->fields._items, 0, size, 0);
  }
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_59216528(
    v8,
    itemList,
    (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_ListViewItem___ctor___79009648);
  this->fields.presentAllSelectedList = (struct System_Collections_Generic_List_ListViewItem__o *)v8;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.presentAllSelectedList,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  v17 = this->fields.presentAllSelectedList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*(_QWORD *)&NameText[4].fields._size + 24LL);
  if ( !v18 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v19 = **(Il2CppObject ***)&NameText[4].fields._size;
    v18 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(v18, v19, Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__, 0);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__60_0 = (struct System_Comparison_ListViewItem__o *)v18;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__60_0, (int32_t)v18, v21, v22, v23, v24, v25, v26);
  }
  if ( !v17 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_59225184(
    (System_Collections_Generic_List_object__o *)v17,
    v18,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  v27 = *p_presentAllSelectedList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v28 = *(System_Predicate_object__o **)(*(_QWORD *)&NameText[4].fields._size + 32LL);
  if ( !v28 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v29 = **(Il2CppObject ***)&NameText[4].fields._size;
    v28 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_object____ctor(v28, v29, Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__, 0);
    v30 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v30->__9__60_1 = (struct System_Predicate_ListViewItem__o *)v28;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v30->__9__60_1, (int32_t)v28, v31, v32, v33, v34, v35, v36);
  }
  if ( !v27 )
    goto LABEL_53;
  System_Collections_Generic_List_object___RemoveAll(
    v27,
    (System_Predicate_T__o *)v28,
    (const MethodInfo_387AFF8 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  }
  v37 = *p_presentAllSelectedList;
  if ( !*p_presentAllSelectedList )
    goto LABEL_53;
  v15 = (const MethodInfo *)*(unsigned int *)(*(_QWORD *)&NameText[4].fields._size + 132LL);
  v38 = v37->fields._size;
  if ( v38 > (int)v15 )
  {
    System_Collections_Generic_List_object___RemoveRange(
      *p_presentAllSelectedList,
      (int32_t)v15,
      v38 - (_DWORD)v15,
      (const MethodInfo_387B208 *)Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    v37 = *p_presentAllSelectedList;
  }
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v39 = *(System_Comparison_T__o **)(*(_QWORD *)&NameText[4].fields._size + 40LL);
  if ( !v39 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v40 = **(Il2CppObject ***)&NameText[4].fields._size;
    v39 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(v39, v40, Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__, 0);
    v41 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v41->__9__60_2 = (struct System_Comparison_ListViewItem__o *)v39;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v41->__9__60_2, (int32_t)v39, v42, v43, v44, v45, v46, v47);
  }
  if ( !v37 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_59225184(
    v37,
    v39,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  v48 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v48, 0);
  if ( !*p_presentAllSelectedList )
    goto LABEL_53;
  v49 = (*p_presentAllSelectedList)->fields._size;
  if ( v49 >= 1 )
  {
    v50 = 0;
    while ( 1 )
    {
      if ( v50 )
      {
        if ( !v48 )
          break;
        System_Text_StringBuilder__Append_64512012(v48, 0xAu, 0);
      }
      NameText = *p_presentAllSelectedList;
      if ( !*p_presentAllSelectedList )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               NameText,
               v50,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item
        && (naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment,
            Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        v53 = (UserPresentListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo
            ? Item
            : 0LL;
      }
      else
      {
        v53 = 0;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      NameText = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_10526/*"PRESENT_INFO"*/,
                                                                0);
      if ( !v53 )
        break;
      v54 = (System_String_o *)NameText;
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewItem__get_NameText(
                                                                (UserPresentListViewItem_o *)v53,
                                                                v15);
      if ( !v48 )
        break;
      NameText = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__AppendFormat_64516036(
                                                                v48,
                                                                v54,
                                                                (Il2CppObject *)NameText,
                                                                (Il2CppObject *)v53[12].klass,
                                                                0);
      if ( v49 == ++v50 )
        return ((System_String_o *(__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v48->klass->vtable._3_ToString.methodPtr)(
                 v48,
                 v48->klass->vtable._3_ToString.method);
    }
LABEL_53:
    sub_1C93D2C(NameText, v15);
  }
  if ( !v48 )
    goto LABEL_53;
  return ((System_String_o *(__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v48->klass->vtable._3_ToString.methodPtr)(
           v48,
           v48->klass->vtable._3_ToString.method);
}


UserPresentListViewItem_o *UserPresentListViewManager__GetItem(
        UserPresentListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UserPresentListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4D2F72D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&UserPresentListViewItem_TypeInfo);
    byte_4D2F72D = 1;
  }
  result = (UserPresentListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (UserPresentListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (UserPresentListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentListViewItem_TypeInfo )
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


void UserPresentListViewManager__Init(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UserPresentListViewManager_c *v9; // x0
  struct ListViewSort_o **p_sortInfo; // x8
  struct ListViewSort_o *v11; // x1
  __int64 v12; // x1
  struct ListViewSort_o *sort; // x0

  if ( (byte_4D2F72B & 1) == 0 )
  {
    sub_1C93AD4(&UserPresentListViewManager_TypeInfo);
    byte_4D2F72B = 1;
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)v11, v2, v3, v4, v5, v6, v7);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C93D2C(0, v12);
  sort->fields.listViewKind = 4;
  ListViewSort__Load(sort, 0);
  ((void (__fastcall *)(UserPresentListViewManager_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
    this,
    this->klass->vtable._5_SetSortButtonImage.method);
}


void UserPresentListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  UserPresentListViewManager_c *v2; // x0
  ListViewSort_o *sortInfo; // x0

  if ( (byte_4D2F728 & 1) == 0 )
  {
    sub_1C93AD4(&UserPresentListViewManager_TypeInfo);
    byte_4D2F728 = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v2 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v2->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1C93D2C(0, v1);
  ListViewSort__InitLoad(sortInfo, 0);
}


void UserPresentListViewManager__OnClickListCheck(
        UserPresentListViewManager_o *this,
        UserPresentListViewObject_o *obj,
        const MethodInfo *method)
{
  UserPresentListViewObject_o *v3; // x20
  UserPresentListViewManager_o *v4; // x19
  UserPresentListViewItem_o *Item; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x22
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct UserPresentListViewItem_o *selectItem; // x8
  struct UserPresentBoxEntity_o *usrPresentEnt; // x1
  UserPresentListViewManager_o **p_selectPresentData; // x23
  UserPresentListViewManager_o **p_checkedIdList; // x21
  System_Collections_Generic_List_long__o *v23; // x24
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int m_CancellationTokenSource; // w8
  int v31; // w25
  int32_t v32; // w24
  struct ItemEntity_o *itemEnt; // x8
  int64_t endedAt; // x24
  Il2CppObject *MasterData_object; // x24
  BalanceConfig_c *v36; // x0
  int v37; // w24
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  const MethodInfo *v42; // x1
  int32_t v43; // w24
  BalanceConfig_c *v44; // x0
  _QWORD *v45; // x8
  int32_t PresentBoxCheckMax; // w25
  intptr_t m_CachedPtr; // x8
  _QWORD *v48; // x9
  __int64 m_CancellationTokenSource_low; // x10
  BalanceConfig_c *v50; // x8
  int32_t v51; // w22
  const MethodInfo *v52; // x3
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  Il2CppObject *v54; // [xsp+8h] [xbp-58h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_4D2F734 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (UserPresentListViewManager_o *)sub_1C93AD4(&Method_UserPresentListViewManager_OnClickListCheck__);
    byte_4D2F734 = 1;
  }
  entity = 0;
  v54 = 0;
  if ( !v3 )
    goto LABEL_81;
  Item = UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = Item;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.selectItem, (int32_t)Item, v7, v8, v9, v10, v11, v12);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_81;
  usrPresentEnt = selectItem->fields.usrPresentEnt;
  p_selectPresentData = (UserPresentListViewManager_o **)&v4->fields.selectPresentData;
  v4->fields.selectPresentData = usrPresentEnt;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v4->fields.selectPresentData,
    (int32_t)usrPresentEnt,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  p_checkedIdList = (UserPresentListViewManager_o **)&v4->fields.checkedIdList;
  if ( !v4->fields.checkedIdList )
  {
    v23 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v23,
      (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
    *p_checkedIdList = (UserPresentListViewManager_o *)v23;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.checkedIdList, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  }
  if ( !*p_selectItem )
    goto LABEL_81;
  if ( (*p_selectItem)->fields.presentId >= 1 )
  {
    this = *p_checkedIdList;
    if ( !*p_checkedIdList )
      goto LABEL_81;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v31 = m_CancellationTokenSource - 1;
    if ( m_CancellationTokenSource >= 1 )
    {
      v32 = 0;
      while ( 1 )
      {
        this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___get_Item(
                                                 (System_Collections_Generic_List_long__o *)this,
                                                 v32,
                                                 (const MethodInfo_38616E0 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !*p_selectItem )
          goto LABEL_81;
        if ( this == (UserPresentListViewManager_o *)(*p_selectItem)->fields.presentId )
          break;
        if ( v31 == v32 )
          goto LABEL_17;
        this = *p_checkedIdList;
        ++v32;
        if ( !*p_checkedIdList )
          goto LABEL_81;
      }
      v40 = Method_UserPresentListViewManager_OnClickListCheck__;
      if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
        v40 = (_QWORD *)sub_1C93AEC(Method_UserPresentListViewManager_OnClickListCheck__);
      v41 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v40, v40[4]);
      OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0, 0);
      this = *p_checkedIdList;
      if ( *p_checkedIdList )
      {
        System_Collections_Generic_List_long___RemoveAt(
          (System_Collections_Generic_List_long__o *)this,
          v32,
          (const MethodInfo_3863150 *)Method_System_Collections_Generic_List_long__RemoveAt__);
        UserPresentListViewManager__updateCheckStatus(v4, v42);
        return;
      }
LABEL_81:
      sub_1C93D2C(this, obj);
    }
LABEL_17:
    this = *p_selectPresentData;
    if ( !*p_selectPresentData )
      goto LABEL_81;
    this = (UserPresentListViewManager_o *)UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)this, 0, 0);
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
      if ( endedAt > NetworkManager__getTime(0) )
      {
        this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_81;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2A55B )
        {
          sub_1C93AD4(&NetworkManager_TypeInfo);
          byte_4D2A55B = 1;
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
                                                 0);
        if ( entity )
        {
          if ( !*p_selectPresentData )
            goto LABEL_81;
          v36 = BalanceConfig_TypeInfo;
          v37 = LODWORD((*p_selectPresentData)->fields.scrollView) + entity->fields.num;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v36 = BalanceConfig_TypeInfo;
          }
          if ( v37 > v36->static_fields->UserItemMax )
            goto LABEL_40;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
          if ( !*p_selectPresentData || !this )
            goto LABEL_81;
          this = (UserPresentListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   &v54,
                                                   HIDWORD((*p_selectPresentData)->fields.sortOrderSprite),
                                                   (const MethodInfo_34632C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (UserPresentListViewManager_o *)v54;
            if ( !v54 )
              goto LABEL_81;
            this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v54, 0);
            if ( (int)this >= 1 )
            {
              this = (UserPresentListViewManager_o *)v54;
              if ( !v54 )
                goto LABEL_81;
              this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v54, 0);
              if ( v37 > (int)this )
              {
LABEL_40:
                v38 = Method_UserPresentListViewManager_OnClickListCheck__;
                if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
                  v38 = (_QWORD *)sub_1C93AEC(Method_UserPresentListViewManager_OnClickListCheck__);
                v39 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v38, v38[4]);
                goto LABEL_68;
              }
            }
          }
        }
LABEL_57:
        if ( !*p_checkedIdList )
          goto LABEL_81;
        v43 = (int32_t)(*p_checkedIdList)->fields.m_CancellationTokenSource;
        v44 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v44 = BalanceConfig_TypeInfo;
        }
        v45 = Method_UserPresentListViewManager_OnClickListCheck__;
        PresentBoxCheckMax = v44->static_fields->PresentBoxCheckMax;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
          v45 = (_QWORD *)sub_1C93AEC(Method_UserPresentListViewManager_OnClickListCheck__);
        v39 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v45, v45[4]);
        if ( v43 < PresentBoxCheckMax )
        {
          OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0, 0);
          if ( !*p_selectItem )
            goto LABEL_81;
          this = *p_checkedIdList;
          if ( !*p_checkedIdList )
            goto LABEL_81;
          obj = (UserPresentListViewObject_o *)(*p_selectItem)->fields.presentId;
          m_CachedPtr = this->fields.m_CachedPtr;
          v48 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_81;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              (int64_t)obj,
              *(const MethodInfo_38619D0 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
            this = *p_checkedIdList;
            if ( !*p_checkedIdList )
              goto LABEL_81;
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(m_CachedPtr + 8 * m_CancellationTokenSource_low + 32) = obj;
          }
          v50 = BalanceConfig_TypeInfo;
          v51 = (int32_t)this->fields.m_CancellationTokenSource;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v50 = BalanceConfig_TypeInfo;
          }
          if ( v51 < v50->static_fields->PresentBoxCheckMax )
          {
            this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
            if ( !*p_checkedIdList )
              goto LABEL_81;
            if ( !this )
              goto LABEL_81;
            UserPresentListViewItem__setCheckBoxed(
              (UserPresentListViewItem_o *)this,
              1,
              (int32_t)(*p_checkedIdList)->fields.m_CancellationTokenSource,
              v52);
            checkedIdList = v4->fields.checkedIdList;
            if ( !checkedIdList )
              goto LABEL_81;
            this = (UserPresentListViewManager_o *)v4->fields.m_parent;
            if ( !this )
              goto LABEL_81;
            UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)this, checkedIdList->fields._size, 0);
          }
          UserPresentListViewManager__updateCheckStatus(v4, (const MethodInfo *)obj);
          this = (UserPresentListViewManager_o *)v4->fields.m_parent;
          if ( !this )
            goto LABEL_81;
          UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)this, 1, 1, 0);
          return;
        }
LABEL_68:
        OverwriteAssetSoundName__PlaySystemSe(v39, 1, 0, 0);
        return;
      }
    }
    UserPresentListViewManager__DlgForExpiredPresent(v4, (const MethodInfo *)obj);
  }
}


void UserPresentListViewManager__OnClickListView(
        UserPresentListViewManager_o *this,
        UserPresentListViewObject_o *obj,
        const MethodInfo *method)
{
  UserPresentListViewObject_o *v3; // x20
  UserPresentListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  UserPresentListViewItem_o *Item; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct UserPresentListViewItem_o *selectItem; // x8
  struct UserPresentBoxEntity_o *usrPresentEnt; // x1
  struct UserPresentBoxEntity_o **p_selectPresentData; // x21
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  const MethodInfo *v25; // x1
  struct ItemEntity_o *itemEnt; // x8
  __int64 endedAt; // x22
  struct ItemEntity_o *v28; // x8
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  const MethodInfo *v31; // x2
  struct ItemEntity_o *v32; // x8
  Il2CppObject *MasterData_object; // x22
  BalanceConfig_c *v34; // x0
  int32_t v35; // w22
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  const MethodInfo *v38; // x2
  UserPresentListViewManager___c_c *v39; // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *_9__55_0; // x20
  Il2CppObject *v41; // x21
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  GrandQuestFolderBoardItem_o *p__9__55_0; // x0
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x0
  UserPresentListViewManager___c_c *v53; // x0
  Il2CppObject *v54; // x21
  const MethodInfo *v55; // x3
  struct UserPresentListViewManager___c_StaticFields *v56; // x0
  _QWORD *v57; // x0
  System_Reflection_MethodBase_o *v58; // x0
  System_Collections_Generic_List_long__o *v59; // x21
  UserPresentListViewManager_o **p_presentIds; // x20
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  struct UserPresentListViewItem_o *v67; // x8
  intptr_t m_CachedPtr; // x8
  _QWORD *v69; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const MethodInfo *v71; // x2
  Il2CppObject *v72; // [xsp+8h] [xbp-48h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_4D2F733 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_UserPresentListViewManager___c__OnClickListView_b__55_0__);
    sub_1C93AD4(&Method_UserPresentListViewManager___c__OnClickListView_b__55_1__);
    sub_1C93AD4(&UserPresentListViewManager___c_TypeInfo);
    this = (UserPresentListViewManager_o *)sub_1C93AD4(&Method_UserPresentListViewManager_OnClickListView__);
    byte_4D2F733 = 1;
  }
  entity = 0;
  v72 = 0;
  if ( !v3 )
    goto LABEL_87;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_87;
  if ( this->fields.isInput )
    return;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_87;
  if ( LOBYTE(this->fields.objectList) )
    return;
  checkedIdList = v4->fields.checkedIdList;
  if ( checkedIdList )
  {
    if ( checkedIdList->fields._size > 0 )
      return;
  }
  v4->fields.kind = 0;
  Item = UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = Item;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.selectItem, (int32_t)Item, v8, v9, v10, v11, v12, v13);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_87;
  usrPresentEnt = selectItem->fields.usrPresentEnt;
  p_selectPresentData = &v4->fields.selectPresentData;
  v4->fields.selectPresentData = usrPresentEnt;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v4->fields.selectPresentData,
    (int32_t)usrPresentEnt,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this = (UserPresentListViewManager_o *)v4->fields.selectPresentData;
  if ( !this )
    goto LABEL_87;
  this = (UserPresentListViewManager_o *)UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)this, 0, 0);
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
      this = (UserPresentListViewManager_o *)NetworkManager__getTime(0);
      if ( endedAt <= (__int64)this )
        goto LABEL_14;
      if ( !*p_selectItem )
        goto LABEL_87;
      v28 = (*p_selectItem)->fields.itemEnt;
      if ( !v28 )
        goto LABEL_87;
      if ( v28->fields.type == 24 )
      {
        v29 = Method_UserPresentListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v29 = (_QWORD *)sub_1C93AEC(Method_UserPresentListViewManager_OnClickListView__);
        v30 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v29, v29[4]);
        OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0, 0);
        if ( *p_selectItem )
        {
          v32 = (*p_selectItem)->fields.itemEnt;
          if ( v32 )
          {
            UserPresentListViewManager__OpenSelectableDialog(v4, v32->fields.id, v31);
            return;
          }
        }
        goto LABEL_87;
      }
      this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_87;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
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
                                               0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !*p_selectPresentData )
          goto LABEL_87;
        v34 = BalanceConfig_TypeInfo;
        v35 = (*p_selectPresentData)->fields.num + entity->fields.num;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v34 = BalanceConfig_TypeInfo;
        }
        if ( v35 > v34->static_fields->UserItemMax )
        {
          v36 = Method_UserPresentListViewManager_OnClickListView__;
          if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
            v36 = (_QWORD *)sub_1C93AEC(Method_UserPresentListViewManager_OnClickListView__);
          v37 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v36, v36[4]);
          OverwriteAssetSoundName__PlaySystemSe(v37, 0, 0, 0);
          v39 = UserPresentListViewManager___c_TypeInfo;
          if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
            v39 = UserPresentListViewManager___c_TypeInfo;
          }
          _9__55_0 = v39->static_fields->__9__55_0;
          if ( _9__55_0 )
            goto LABEL_56;
          if ( !v39->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v39);
            v39 = UserPresentListViewManager___c_TypeInfo;
          }
          v41 = (Il2CppObject *)v39->static_fields->__9;
          _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1C93D20(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
          UserPresentListViewManager_ReceiveCallbackFunc___ctor(
            _9__55_0,
            v41,
            Method_UserPresentListViewManager___c__OnClickListView_b__55_0__,
            v42);
          static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__55_0 = _9__55_0;
          p__9__55_0 = (GrandQuestFolderBoardItem_o *)&static_fields->__9__55_0;
LABEL_55:
          sub_1C93A78(p__9__55_0, (int32_t)_9__55_0, v43, v44, v45, v46, v47, v48);
LABEL_56:
          UserPresentListViewManager__showErrorResultDlg(v4, _9__55_0, v38);
          return;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !this )
          goto LABEL_87;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               &v72,
               (*p_selectPresentData)->fields.objectId,
               (const MethodInfo_34632C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          this = (UserPresentListViewManager_o *)v72;
          if ( !v72 )
            goto LABEL_87;
          if ( ItemEntity__GetMaxNum((ItemEntity_o *)v72, 0) >= 1 )
          {
            this = (UserPresentListViewManager_o *)v72;
            if ( !v72 )
              goto LABEL_87;
            if ( v35 > ItemEntity__GetMaxNum((ItemEntity_o *)v72, 0) )
            {
              v51 = Method_UserPresentListViewManager_OnClickListView__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
                v51 = (_QWORD *)sub_1C93AEC(Method_UserPresentListViewManager_OnClickListView__);
              v52 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v51, v51[4]);
              OverwriteAssetSoundName__PlaySystemSe(v52, 0, 0, 0);
              v53 = UserPresentListViewManager___c_TypeInfo;
              if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
                v53 = UserPresentListViewManager___c_TypeInfo;
              }
              _9__55_0 = v53->static_fields->__9__55_1;
              if ( _9__55_0 )
                goto LABEL_56;
              if ( !v53->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v53);
                v53 = UserPresentListViewManager___c_TypeInfo;
              }
              v54 = (Il2CppObject *)v53->static_fields->__9;
              _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1C93D20(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
              UserPresentListViewManager_ReceiveCallbackFunc___ctor(
                _9__55_0,
                v54,
                Method_UserPresentListViewManager___c__OnClickListView_b__55_1__,
                v55);
              v56 = UserPresentListViewManager___c_TypeInfo->static_fields;
              v56->__9__55_1 = _9__55_0;
              p__9__55_0 = (GrandQuestFolderBoardItem_o *)&v56->__9__55_1;
              goto LABEL_55;
            }
          }
        }
      }
    }
    v57 = Method_UserPresentListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v57 = (_QWORD *)sub_1C93AEC(Method_UserPresentListViewManager_OnClickListView__);
    v58 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v57, v57[4]);
    OverwriteAssetSoundName__PlaySystemSe(v58, 8, 0, 0);
    if ( *p_selectItem )
    {
      v4->fields._select_idx_k__BackingField = (*p_selectItem)->fields.index;
      v59 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v59,
        (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
      p_presentIds = (UserPresentListViewManager_o **)&v4->fields.presentIds;
      v4->fields.presentIds = v59;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.presentIds, (int32_t)v59, v61, v62, v63, v64, v65, v66);
      v67 = v4->fields.selectItem;
      if ( v67 )
      {
        obj = (UserPresentListViewObject_o *)v67->fields.presentId;
        if ( (__int64)obj >= 1 )
        {
          this = *p_presentIds;
          if ( !*p_presentIds )
            goto LABEL_87;
          m_CachedPtr = this->fields.m_CachedPtr;
          v69 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_87;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              (int64_t)obj,
              *(const MethodInfo_38619D0 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(m_CachedPtr + 8 * m_CancellationTokenSource_low + 32) = obj;
          }
        }
        this = *p_presentIds;
        if ( *p_presentIds )
        {
          this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                   (System_Collections_Generic_List_long__o *)this,
                                                   (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v4->fields.m_parent )
          {
            UserPresentBoxWindow__receivePresent(v4->fields.m_parent, (System_Int64_array *)this, 0, 0, 0);
            UserPresentListViewManager__SetMode_40944284(v4, 2, v71);
            return;
          }
        }
      }
    }
LABEL_87:
    sub_1C93D2C(this, obj);
  }
LABEL_14:
  v23 = Method_UserPresentListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1C93AEC(Method_UserPresentListViewManager_OnClickListView__);
  v24 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0);
  UserPresentListViewManager__DlgForExpiredPresent(v4, v25);
}


void UserPresentListViewManager__OnClickSortAscendingOrder(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4D2F73C & 1) == 0 )
  {
    sub_1C93AD4(&Method_UserPresentListViewManager_OnClickSortAscendingOrder__);
    byte_4D2F73C = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_UserPresentListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_UserPresentListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C93D2C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void UserPresentListViewManager__OnMoveEnd(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4D2F732 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F732 = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C93D2C(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


void UserPresentListViewManager__OpenNoticeDlg(
        UserPresentListViewManager_o *this,
        System_String_o *msg,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *dialog; // x0
  UserPresentBoxErrorDialog_o *v6; // x20
  System_Action_T__o *v7; // x21

  if ( (byte_4D2F73A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_SceneList_Type__TypeInfo);
    sub_1C93AD4(&Method_UserPresentListViewManager_EndNoticeDlg__);
    byte_4D2F73A = 1;
  }
  dialog = this->fields.dialog;
  if ( !dialog
    || (UserPresentBoxErrorDialog__Open(dialog, msg, 0),
        v6 = this->fields.dialog,
        v7 = (System_Action_T__o *)sub_1C93D20(System_Action_SceneList_Type__TypeInfo),
        System_Action_Int32Enum____ctor(v7, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0),
        !v6) )
  {
    sub_1C93D2C(dialog, msg);
  }
  UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v6, (System_Action_SceneList_Type__o *)v7, 0);
}


void UserPresentListViewManager__OpenSelectableDialog(
        UserPresentListViewManager_o *this,
        int32_t ticketId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *selectDialog; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_ListViewItem__o *presentTicketList; // x8
  int32_t size; // w2
  int v10; // w9
  struct UserPresentBoxWindow_o *m_parent; // x8
  System_Collections_Generic_IEnumerable_T__o *itemList; // x22
  System_Collections_Generic_List_object__o *v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Collections_Generic_List_ListViewItem__o *v26; // x22
  System_Predicate_object__o *v27; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v28; // x21
  System_Comparison_T__o *v29; // x22
  Il2CppObject *v30; // x23
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4D2F73E & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_ListViewItem__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem___ctor___79009648);
    sub_1C93AD4(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C93AD4(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C93AD4(&Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__);
    sub_1C93AD4(&Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__);
    sub_1C93AD4(&UserPresentListViewManager___c__DisplayClass67_0_TypeInfo);
    sub_1C93AD4(&UserPresentListViewManager___c_TypeInfo);
    byte_4D2F73E = 1;
  }
  v5 = sub_1C93D20(UserPresentListViewManager___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_DWORD *)(v5 + 16) = ticketId;
  presentTicketList = this->fields.presentTicketList;
  if ( presentTicketList )
  {
    size = presentTicketList->fields._size;
    v10 = presentTicketList->fields._version + 1;
    presentTicketList->fields._size = 0;
    presentTicketList->fields._version = v10;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)presentTicketList->fields._items, 0, size, 0);
  }
  m_parent = this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_18;
  m_parent->fields.mIsScrlResetPosition = 1;
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_59216528(
    v13,
    itemList,
    (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_ListViewItem___ctor___79009648);
  this->fields.presentTicketList = (struct System_Collections_Generic_List_ListViewItem__o *)v13;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.presentTicketList,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  *(_DWORD *)(v5 + 20) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), 0, v20, v21, v22, v23, v24, v25);
  v26 = this->fields.presentTicketList;
  v27 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v27,
    (Il2CppObject *)v5,
    Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__,
    0);
  if ( !v26 )
    goto LABEL_18;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v26,
    (System_Predicate_T__o *)v27,
    (const MethodInfo_387AFF8 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  selectDialog = UserPresentListViewManager___c_TypeInfo;
  v28 = this->fields.presentTicketList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    selectDialog = UserPresentListViewManager___c_TypeInfo;
  }
  v29 = *(System_Comparison_T__o **)(*((_QWORD *)selectDialog + 23) + 48LL);
  if ( !v29 )
  {
    if ( !*((_DWORD *)selectDialog + 56) )
    {
      j_il2cpp_runtime_class_init_0(selectDialog);
      selectDialog = UserPresentListViewManager___c_TypeInfo;
    }
    v30 = (Il2CppObject *)**((_QWORD **)selectDialog + 23);
    v29 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(v29, v30, Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__, 0);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__67_1 = (struct System_Comparison_ListViewItem__o *)v29;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__67_1, (int32_t)v29, v32, v33, v34, v35, v36, v37);
  }
  if ( !v28
    || (System_Collections_Generic_List_object___Sort_59225184(
          (System_Collections_Generic_List_object__o *)v28,
          v29,
          (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_ListViewItem__Sort__),
        (selectDialog = this->fields.selectDialog) == 0) )
  {
LABEL_18:
    sub_1C93D2C(selectDialog, v7);
  }
  PresentSelectableDlgComponent__Open(
    (PresentSelectableDlgComponent_o *)selectDialog,
    *(ItemEntity_o **)(v5 + 24),
    *(_DWORD *)(v5 + 20),
    0);
}


void UserPresentListViewManager__ReceiveMultiPresent(
        UserPresentListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v4; // x21
  struct System_Collections_Generic_List_long__o **p_presentIds; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_object__o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x8
  System_Collections_Generic_List_object__o *v15; // x0
  _QWORD *v16; // x25
  _QWORD *v17; // x26
  _BOOL8 v18; // x0
  UserPresentListViewItem_c *v19; // x1
  UserPresentListViewItem_o *current; // x23
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_long__o *checkedIdList; // x0
  UserPresentBoxEntity_o *usrPresentEnt; // x0
  _BOOL8 IsExpired; // x0
  const MethodInfo *v25; // x1
  struct UserPresentBoxEntity_o *v26; // x9
  struct ItemEntity_o *itemEnt; // x9
  struct System_Collections_Generic_List_long__o **v28; // x19
  _QWORD *v29; // x20
  _QWORD *v30; // x26
  int64_t endedAt; // x25
  bool v32; // cc
  Il2CppObject *NameText; // x0
  const MethodInfo *v34; // x1
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  Il2CppObject *v42; // x1
  struct System_Object_array *v43; // x8
  __int64 v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  System_Collections_Generic_List_long__o *v47; // x0
  int64_t presentId; // x1
  struct System_Int64_array *items; // x8
  __int64 v50; // x9
  __int64 size; // x10
  int32_t v52; // w1
  GrandQuestFolderBoardItem_o *p_expiredPresents_k__BackingField; // x22
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  System_String_o *klass; // x23
  Il2CppObject *Item; // x0
  System_String_o *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2F737 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&UserPresentListViewItem_TypeInfo);
    sub_1C93AD4(&StringLiteral_15904/*"["*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_16156/*"]"*/);
    byte_4D2F737 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  this->fields.kind = kind;
  v4 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v4,
    (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = &this->fields.presentIds;
  this->fields.presentIds = v4;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.presentIds, (int32_t)v4, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
  v14 = 192;
  if ( kind == 1 )
    v14 = 432;
  v15 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v14);
  if ( !v15 )
    goto LABEL_62;
  v16 = &Method_System_Collections_Generic_List_string__Add__;
  v17 = &Method_System_Collections_Generic_List_long__Add__;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    v15,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v71 = v70;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v18 )
      break;
    current = (UserPresentListViewItem_o *)v71.fields._current;
    if ( v71.fields._current )
    {
      v19 = UserPresentListViewItem_TypeInfo;
      naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
      if ( v71.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UserPresentListViewItem_c *)v71.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentListViewItem_TypeInfo )
      {
        sub_1C940C8(v71.fields._current);
LABEL_52:
        sub_1C93D2C(IsExpired, v25);
      }
    }
    switch ( kind )
    {
      case 1:
        if ( !v71.fields._current )
          sub_1C93D2C(v18, v19);
        goto LABEL_23;
      case 2:
        if ( !v71.fields._current )
          sub_1C93D2C(v18, v19);
        if ( !Gift__IsServant_41140096((int32_t)v71.fields._current[11].klass, 0)
          && !Gift__IsCommandCode_41140488(current->fields.giftType, 0) )
        {
          goto LABEL_23;
        }
        break;
      case 3:
        if ( !v71.fields._current )
          sub_1C93D2C(v18, v19);
        checkedIdList = this->fields.checkedIdList;
        if ( !checkedIdList )
          sub_1C93D2C(0, v19);
        if ( System_Collections_Generic_List_long___Contains(
               checkedIdList,
               (int64_t)v71.fields._current[10].monitor,
               (const MethodInfo_3861D48 *)Method_System_Collections_Generic_List_long__Contains__) )
        {
LABEL_23:
          usrPresentEnt = current->fields.usrPresentEnt;
          if ( !usrPresentEnt )
            sub_1C93D2C(0, v19);
          IsExpired = UserPresentBoxEntity__IsExpired(usrPresentEnt, 0, 0);
          v26 = current->fields.usrPresentEnt;
          if ( !v26 )
            goto LABEL_52;
          if ( v26->fields.giftType == 2 )
          {
            itemEnt = current->fields.itemEnt;
            if ( !itemEnt )
              sub_1C93D2C(IsExpired, v25);
            if ( itemEnt->fields.type != 24 )
            {
              if ( IsExpired )
                goto LABEL_33;
              v28 = p_presentIds;
              v29 = v17;
              v30 = v16;
              endedAt = itemEnt->fields.endedAt;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v32 = endedAt <= NetworkManager__getTime(0);
              v16 = v30;
              v17 = v29;
              p_presentIds = v28;
              if ( v32 )
                goto LABEL_33;
LABEL_39:
              v47 = *p_presentIds;
              if ( !*p_presentIds )
                sub_1C93D2C(0, v25);
              presentId = current->fields.presentId;
              items = v47->fields._items;
              v50 = *v17;
              ++v47->fields._version;
              if ( !items )
                sub_1C93D2C(v47, presentId);
              size = v47->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v47,
                  presentId,
                  *(const MethodInfo_38619D0 **)(*(_QWORD *)(*(_QWORD *)(v50 + 32) + 192LL) + 112LL));
              }
              else
              {
                v47->fields._size = size + 1;
                items->m_Items[size] = presentId;
              }
            }
          }
          else
          {
            if ( !IsExpired )
              goto LABEL_39;
LABEL_33:
            NameText = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, v25);
            if ( !v12 )
              sub_1C93D2C(NameText, NameText);
            if ( !System_Collections_Generic_List_object___Contains(
                    v12,
                    NameText,
                    (const MethodInfo_3879D2C *)Method_System_Collections_Generic_List_string__Contains__) )
            {
              v35 = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, v34);
              v42 = v35;
              v43 = v12->fields._items;
              v44 = *v16;
              ++v12->fields._version;
              if ( !v43 )
                sub_1C93D2C(v35, v35);
              v45 = v12->fields._size;
              if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v12,
                  v35,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(*(_QWORD *)(v44 + 32) + 192LL) + 112LL));
              }
              else
              {
                v46 = &v43->obj.klass + v45;
                v12->fields._size = v45 + 1;
                v46[4] = (Il2CppClass *)v42;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v46 + 4), (int32_t)v42, v36, v37, v38, v39, v40, v41);
              }
            }
          }
        }
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v52 = StringLiteral_1/*""*/;
  p_expiredPresents_k__BackingField = (GrandQuestFolderBoardItem_o *)&this->fields._expiredPresents_k__BackingField;
  this->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._expiredPresents_k__BackingField,
    v52,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  if ( !v12 )
    goto LABEL_62;
  if ( v12->fields._size >= 1 )
  {
    do
    {
      klass = (System_String_o *)p_expiredPresents_k__BackingField->klass;
      Item = System_Collections_Generic_List_object___get_Item(
               v12,
               0,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
      v62 = System_String__Concat_64465992(
              klass,
              (System_String_o *)StringLiteral_15904/*"["*/,
              (System_String_o *)Item,
              (System_String_o *)StringLiteral_16156/*"]"*/,
              0);
      p_expiredPresents_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v62;
      sub_1C93A78(p_expiredPresents_k__BackingField, (int32_t)v62, v63, v64, v65, v66, v67, v68);
      System_Collections_Generic_List_object___RemoveAt(
        v12,
        0,
        (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_string__RemoveAt__);
    }
    while ( v12->fields._size > 0 );
  }
  v15 = (System_Collections_Generic_List_object__o *)*p_presentIds;
  if ( !*p_presentIds
    || (v15 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_long___ToArray(
                                                             (System_Collections_Generic_List_long__o *)v15,
                                                             (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.m_parent) )
  {
LABEL_62:
    sub_1C93D2C(v15, v13);
  }
  UserPresentBoxWindow__receivePresent(this->fields.m_parent, (System_Int64_array *)v15, 0, 0, 0);
}


void UserPresentListViewManager__RequestItemSelect(
        UserPresentListViewManager_o *this,
        ItemSelectEntity_o *selectItm,
        int32_t num,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  UserPresentListViewItem_c *v8; // x1
  int64_t presentTicketList; // x0
  int v10; // w26
  int v11; // w27
  int v12; // w29
  int v13; // w24
  _QWORD *v14; // x23
  __int64 naturalAligment; // x10
  __int64 v16; // x8
  int64_t v17; // x25
  __int64 v18; // x8
  int v19; // w25
  struct System_Int64_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  UserPresentBoxWindow_o *m_parent; // x23
  const MethodInfo *v24; // x2
  __int64 v25; // x9
  __int64 v26; // x8
  struct System_String_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  UserPresentBoxWindow_o *v34; // x20
  UserPresentListViewManager_o *v35; // x0
  const MethodInfo *v36; // x1
  int32_t selectNum; // [xsp+4h] [xbp-6Ch]
  ItemSelectEntity_o *v38; // [xsp+8h] [xbp-68h]

  if ( (byte_4D2F73F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&UserPresentListViewItem_TypeInfo);
    sub_1C93AD4(&StringLiteral_15904/*"["*/);
    sub_1C93AD4(&StringLiteral_16156/*"]"*/);
    byte_4D2F73F = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
  presentTicketList = (int64_t)this->fields.presentTicketList;
  if ( !presentTicketList || !selectItm )
    goto LABEL_26;
  v10 = *(_DWORD *)(presentTicketList + 24);
  v38 = selectItm;
  selectNum = num;
  if ( v10 < 1 || (v11 = selectItm->fields.requireNum * num, v11 < 1) )
  {
    if ( v7 )
    {
LABEL_28:
      m_parent = this->fields.m_parent;
      presentTicketList = (int64_t)System_Collections_Generic_List_long___ToArray(
                                     v7,
                                     (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( m_parent )
      {
        UserPresentBoxWindow__receivePresent(
          m_parent,
          (System_Int64_array *)presentTicketList,
          v38->fields.idx,
          selectNum,
          0);
        UserPresentListViewManager__SetMode_40944284(this, 2, v24);
        return;
      }
    }
    goto LABEL_26;
  }
  v12 = 0;
  v13 = 1;
  while ( 1 )
  {
    presentTicketList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)presentTicketList,
                                   v13 - 1,
                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !presentTicketList )
      goto LABEL_26;
    v14 = (_QWORD *)presentTicketList;
    naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)presentTicketList + 304LL) < (unsigned int)naturalAligment )
      goto LABEL_26;
    if ( *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)presentTicketList + 200LL) + 8 * naturalAligment - 8) != UserPresentListViewItem_TypeInfo )
      goto LABEL_26;
    presentTicketList = *(_QWORD *)(presentTicketList + 152);
    if ( !presentTicketList )
      goto LABEL_26;
    presentTicketList = UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)presentTicketList, 0, 0);
    if ( (presentTicketList & 1) != 0 )
      break;
    v16 = v14[16];
    if ( !v16 )
      goto LABEL_26;
    v17 = *(_QWORD *)(v16 + 96);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    presentTicketList = NetworkManager__getTime(0);
    if ( v17 <= presentTicketList )
      break;
    v18 = v14[19];
    if ( !v18 )
      goto LABEL_26;
    if ( !v7 )
      goto LABEL_26;
    v19 = *(_DWORD *)(v18 + 80);
    v8 = (UserPresentListViewItem_c *)v14[21];
    items = v7->fields._items;
    v21 = Method_System_Collections_Generic_List_long__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_26;
    size = v7->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v7,
        (int64_t)v8,
        *(const MethodInfo_38619D0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v7->fields._size = size + 1;
      items->m_Items[size] = (int64_t)v8;
    }
    if ( v13 >= v10 )
      goto LABEL_28;
    v12 += v19;
    if ( v12 >= v11 )
      goto LABEL_28;
    presentTicketList = (int64_t)this->fields.presentTicketList;
    ++v13;
    if ( !presentTicketList )
      goto LABEL_26;
  }
  presentTicketList = (int64_t)this->fields.presentTicketList;
  if ( !presentTicketList )
    goto LABEL_26;
  presentTicketList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)presentTicketList,
                                 0,
                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !presentTicketList )
    goto LABEL_26;
  v8 = UserPresentListViewItem_TypeInfo;
  v25 = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)presentTicketList + 304LL) >= (unsigned int)v25
    && *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)presentTicketList + 200LL) + 8 * v25 - 8) == UserPresentListViewItem_TypeInfo )
  {
    v26 = *(_QWORD *)(presentTicketList + 128);
    if ( v26 )
    {
      v27 = System_String__Concat_64463988(
              (System_String_o *)StringLiteral_15904/*"["*/,
              *(System_String_o **)(v26 + 24),
              (System_String_o *)StringLiteral_16156/*"]"*/,
              0);
      this->fields._expiredPresents_k__BackingField = v27;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields._expiredPresents_k__BackingField,
        (int32_t)v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      if ( v7 )
      {
        v34 = this->fields.m_parent;
        presentTicketList = (int64_t)System_Collections_Generic_List_long___ToArray(
                                       v7,
                                       (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v34 )
        {
          UserPresentBoxWindow__receivePresent(v34, (System_Int64_array *)presentTicketList, v38->fields.idx, 0, 0);
          return;
        }
      }
    }
LABEL_26:
    sub_1C93D2C(presentTicketList, v8);
  }
  sub_1C940C8(presentTicketList);
  UserPresentListViewManager___ctor(v35, v36);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewManager__RequestListObject(
        UserPresentListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2F730 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__);
    sub_1C93AD4(&Method_UserPresentListViewManager_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2F730 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C93D2C(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v12, v13);
      UserPresentListViewObject__Init_40945512((UserPresentListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewManager__RequestListObject_40944484(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2F731 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__);
    sub_1C93AD4(&Method_UserPresentListViewManager_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2F731 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C93D2C(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v10, v11);
      UserPresentListViewObject__Init_40945596((UserPresentListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


void UserPresentListViewManager__SetMode(
        UserPresentListViewManager_o *this,
        int32_t mode,
        UserPresentListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_40944284(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewManager__SetMode_40944284(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_4D2F72F & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4D2F72F = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1C93D2C(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    UserPresentListViewManager__RequestListObject_40944484(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 4;
    goto LABEL_8;
  }
}


void UserPresentListViewManager__SetMode_40944432(
        UserPresentListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_40944284(this, mode, v10);
}


void UserPresentListViewManager__SetObjectItem(
        UserPresentListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4D2F72E & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1C93AD4(&UserPresentListViewObject_TypeInfo);
    byte_4D2F72E = 1;
  }
  if ( !obj
    || (naturalAligment = UserPresentListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UserPresentListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentListViewObject_TypeInfo )
  {
    sub_1C93D2C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  UserPresentListViewObject__Init_40944160((UserPresentListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void UserPresentListViewManager__SetSortButtonImage(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  System_String_o **v9; // x8
  struct ListViewSort_o *v10; // x8
  System_String_o **v11; // x8

  if ( (byte_4D2F73D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_17654/*"btn_sort_up"*/);
    sub_1C93AD4(&StringLiteral_17707/*"btn_txt_new"*/);
    sub_1C93AD4(&StringLiteral_17714/*"btn_txt_old"*/);
    sub_1C93AD4(&StringLiteral_17651/*"btn_sort_down"*/);
    byte_4D2F73D = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_24;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_24;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( v8 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v9 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17714/*"btn_txt_old"*/ : &StringLiteral_17707/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v9, 0);
        v10 = this->fields.sort;
        if ( v10 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            if ( v10->fields.isAscendingOrder )
              v11 = (System_String_o **)&StringLiteral_17651/*"btn_sort_down"*/;
            else
              v11 = (System_String_o **)&StringLiteral_17654/*"btn_sort_up"*/;
            UISprite__set_spriteName((UISprite_o *)sort, *v11, 0);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_1C93D2C(sort, v4);
  }
}


void UserPresentListViewManager___DlgForExpiredPresent_b__69_0(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x20
  System_Action_o *v6; // x21

  if ( (byte_4D2F742 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__);
    byte_4D2F742 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0),
        v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__,
          0),
        !v5) )
  {
    sub_1C93D2C(Instance, v4);
  }
  CommonUI__maskFadeout((CommonUI_o *)v5, 1, 0.5, v6, 0);
}


void UserPresentListViewManager___DlgForExpiredPresent_b__69_1(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UserPresentBoxWindow_o *m_parent; // x0

  if ( (byte_4D2F743 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2F743 = 1;
  }
  UserPresentListViewManager__DestroyList(this, method);
  m_parent = this->fields.m_parent;
  if ( !m_parent
    || (UserPresentBoxWindow__SetReDispFromExpiredPresent(m_parent, 0),
        (m_parent = (UserPresentBoxWindow_o *)this->fields.scrollView) == 0)
    || (UIScrollView__ResetPosition((UIScrollView_o *)m_parent, 0),
        (m_parent = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C93D2C(m_parent, v3);
  }
  CommonUI__maskFadein((CommonUI_o *)m_parent, 0.5, 0, 0);
}


void UserPresentListViewManager__add_callbackFunc(
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

  if ( (byte_4D2F721 & 1) == 0 )
  {
    sub_1C93AD4(&UserPresentListViewManager_CallbackFunc_TypeInfo);
    byte_4D2F721 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (UserPresentListViewManager_CallbackFunc_c *)v7->klass != UserPresentListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
  UserPresentListViewManager__remove_callbackFunc(v10, v11, v12);
}


void UserPresentListViewManager__add_callbackFunc2(
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

  if ( (byte_4D2F723 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2F723 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
  UserPresentListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void UserPresentListViewManager__add_receivecCallbackFunc(
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

  if ( (byte_4D2F725 & 1) == 0 )
  {
    sub_1C93AD4(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    byte_4D2F725 = 1;
  }
  receivecCallbackFunc = (System_Delegate_o *)this->fields.receivecCallbackFunc;
  p_receivecCallbackFunc = &this->fields.receivecCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(receivecCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (UserPresentListViewManager_ReceiveCallbackFunc_c *)v7->klass != UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
  UserPresentListViewManager__remove_receivecCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_UserPresentListViewObject__o *UserPresentListViewManager__get_ClippingObjectList(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D2F72A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F72A = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C93D2C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C93D2C(0, v10);
      Item = (ListViewItem_o *)UserPresentListViewObject__GetItem((UserPresentListViewObject_o *)Component_object, v10);
      if ( !Item )
        sub_1C93D2C(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44503492((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C93D2C(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C93D2C(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C93D2C(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C93D2C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v3;
}


System_Collections_Generic_List_UserPresentListViewObject__o *UserPresentListViewManager__get_ObjectList(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2F729 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F729 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C93D2C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C93D2C(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C93D2C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v3;
}


ListViewSort_o *UserPresentListViewManager__get_SortInfo(const MethodInfo *method)
{
  UserPresentListViewManager_c *v1; // x0

  if ( (byte_4D2F720 & 1) == 0 )
  {
    sub_1C93AD4(&UserPresentListViewManager_TypeInfo);
    byte_4D2F720 = 1;
  }
  v1 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v1 = UserPresentListViewManager_TypeInfo;
  }
  return v1->static_fields->sortInfo;
}


System_String_o *UserPresentListViewManager__get_expiredPresents(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._expiredPresents_k__BackingField;
}


int32_t UserPresentListViewManager__get_select_idx(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  return this->fields._select_idx_k__BackingField;
}


void UserPresentListViewManager__remove_callbackFunc(
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

  if ( (byte_4D2F722 & 1) == 0 )
  {
    sub_1C93AD4(&UserPresentListViewManager_CallbackFunc_TypeInfo);
    byte_4D2F722 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (UserPresentListViewManager_CallbackFunc_c *)v7->klass != UserPresentListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
  UserPresentListViewManager__add_callbackFunc2(v10, v11, v12);
}


void UserPresentListViewManager__remove_callbackFunc2(
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

  if ( (byte_4D2F724 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2F724 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
  UserPresentListViewManager__add_receivecCallbackFunc(v10, v11, v12);
}


void UserPresentListViewManager__remove_receivecCallbackFunc(
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

  if ( (byte_4D2F726 & 1) == 0 )
  {
    sub_1C93AD4(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    byte_4D2F726 = 1;
  }
  receivecCallbackFunc = (System_Delegate_o *)this->fields.receivecCallbackFunc;
  p_receivecCallbackFunc = &this->fields.receivecCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(receivecCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (UserPresentListViewManager_ReceiveCallbackFunc_c *)v7->klass != UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
  UserPresentListViewManager__get_select_idx(v10, v11);
}


void UserPresentListViewManager__resetCheckStatus(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v4; // w9

  if ( (byte_4D2F736 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4D2F736 = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v4 = checkedIdList->fields._version + 1;
    checkedIdList->fields._size = 0;
    checkedIdList->fields._version = v4;
  }
}


void UserPresentListViewManager__setJumpType(
        UserPresentListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *dialog; // x0

  dialog = this->fields.dialog;
  if ( !dialog )
    sub_1C93D2C(0, type);
  UserPresentBoxErrorDialog__setJumpType(dialog, type, 0);
}


void UserPresentListViewManager__set_expiredPresents(
        UserPresentListViewManager_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._expiredPresents_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._expiredPresents_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserPresentListViewManager__set_select_idx(
        UserPresentListViewManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._select_idx_k__BackingField = value;
}


void UserPresentListViewManager__showErrorResultDlg(
        UserPresentListViewManager_o *this,
        UserPresentListViewManager_ReceiveCallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2
  int32_t kind; // w8
  System_String_o *v12; // x1
  __int64 *v13; // x8

  if ( (byte_4D2F739 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11154/*"REJECT_NORMAL_TXT"*/);
    sub_1C93AD4(&StringLiteral_11150/*"REJECT_ALL_TXT"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2F739 = 1;
  }
  this->fields.receivecCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.receivecCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
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
    v13 = &StringLiteral_11154/*"REJECT_NORMAL_TXT"*/;
    goto LABEL_12;
  }
  if ( (unsigned int)(kind - 1) <= 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = &StringLiteral_11150/*"REJECT_ALL_TXT"*/;
LABEL_12:
    v12 = LocalizationManager__Get((System_String_o *)*v13, 0);
    goto LABEL_13;
  }
  v12 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_13:
  UserPresentListViewManager__OpenNoticeDlg(this, v12, v10);
}


void UserPresentListViewManager__updateCheckStatus(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *checkedIdList; // x21
  void *m_parent; // x0
  int32_t size; // w25
  BalanceConfig_c *v6; // x0
  int32_t PresentBoxCheckMax; // w26
  System_Collections_Generic_List_long__o *v8; // x20
  int32_t v9; // w21
  UserPresentListViewItem_o *v10; // x22
  __int64 naturalAligment; // x9
  int64_t v12; // x23
  const MethodInfo *v13; // x3
  int32_t v14; // w0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  struct ItemEntity_o *itemEnt; // x8
  char v19; // w1
  struct System_Collections_Generic_List_long__o *v20; // x8
  UserPresentListViewManager_o *v21; // x0
  const MethodInfo *v22; // x1
  int v23; // [xsp+Ch] [xbp-64h]

  if ( (byte_4D2F735 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__IndexOf__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor___79008768);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&UserPresentListViewItem_TypeInfo);
    byte_4D2F735 = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList && checkedIdList->fields._size )
  {
    v23 = 1;
  }
  else
  {
    m_parent = this->fields.m_parent;
    if ( !m_parent )
      goto LABEL_36;
    UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 0, 1, 0);
    checkedIdList = this->fields.checkedIdList;
    if ( !checkedIdList )
      goto LABEL_36;
    v23 = 0;
  }
  size = checkedIdList->fields._size;
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
    checkedIdList = this->fields.checkedIdList;
  }
  PresentBoxCheckMax = v6->static_fields->PresentBoxCheckMax;
  v8 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_59118244(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)checkedIdList,
    (const MethodInfo_38612A4 *)Method_System_Collections_Generic_List_long___ctor___79008768);
  m_parent = this->fields.itemList;
  if ( !m_parent )
LABEL_36:
    sub_1C93D2C(m_parent, method);
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= *((_DWORD *)m_parent + 6) )
    {
      v20 = this->fields.checkedIdList;
      if ( v20 )
      {
        m_parent = this->fields.m_parent;
        if ( m_parent )
        {
          UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)m_parent, v20->fields._size, 0);
          return;
        }
      }
      goto LABEL_36;
    }
    m_parent = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)m_parent,
                 v9,
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !m_parent )
      goto LABEL_36;
    method = (const MethodInfo *)UserPresentListViewItem_TypeInfo;
    v10 = (UserPresentListViewItem_o *)m_parent;
    naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)m_parent + 304LL) < (unsigned int)naturalAligment
      || *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)m_parent + 200LL) + 8 * naturalAligment - 8) != UserPresentListViewItem_TypeInfo )
    {
      break;
    }
    if ( !v8 )
      goto LABEL_36;
    v12 = *((_QWORD *)m_parent + 21);
    if ( System_Collections_Generic_List_long___Remove(
           v8,
           v12,
           (const MethodInfo_3862ECC *)Method_System_Collections_Generic_List_long__Remove__) )
    {
      m_parent = this->fields.checkedIdList;
      if ( !m_parent )
        goto LABEL_36;
      v14 = System_Collections_Generic_List_long___IndexOf(
              (System_Collections_Generic_List_long__o *)m_parent,
              v12,
              (const MethodInfo_386264C *)Method_System_Collections_Generic_List_long__IndexOf__);
      UserPresentListViewItem__setCheckBoxed(v10, 1, v14 + 1, v15);
    }
    else
    {
      UserPresentListViewItem__setCheckBoxed(v10, 0, -1, v13);
      if ( size >= PresentBoxCheckMax )
      {
        v19 = 1;
      }
      else if ( v23 && (usrPresentEnt = v10->fields.usrPresentEnt) != 0 )
      {
        if ( usrPresentEnt->fields.giftType == 2 )
        {
          itemEnt = v10->fields.itemEnt;
          if ( !itemEnt )
            goto LABEL_36;
          v19 = itemEnt->fields.type == 24;
        }
        else
        {
          v19 = 0;
        }
      }
      else
      {
        v19 = 0;
      }
      UserPresentListViewItem__setBlocked(v10, v19, v16);
    }
    m_parent = this->fields.itemList;
    ++v9;
    if ( !m_parent )
      goto LABEL_36;
  }
  sub_1C940C8(m_parent);
  UserPresentListViewManager__DestroyList(v21, v22);
}


void UserPresentListViewManager_CallbackFunc___ctor(
        UserPresentListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AC8150;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1AC8130;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AC80E8;
}


System_IAsyncResult_o *UserPresentListViewManager_CallbackFunc__BeginInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = result;
  return sub_1C93A88(this, &v6, callback, object);
}


void UserPresentListViewManager_CallbackFunc__EndInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void UserPresentListViewManager_CallbackFunc__Invoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void UserPresentListViewManager_ReceiveCallbackFunc___ctor(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC81D4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC818C;
}


System_IAsyncResult_o *UserPresentListViewManager_ReceiveCallbackFunc__BeginInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        bool isReceive,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isReceive;
  if ( (byte_4D2F744 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2F744 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void UserPresentListViewManager_ReceiveCallbackFunc__EndInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void UserPresentListViewManager_ReceiveCallbackFunc__Invoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        bool isReceive,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isReceive,
    this->fields.method);
}


void UserPresentListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2F745 & 1) == 0 )
  {
    sub_1C93AD4(&UserPresentListViewManager___c_TypeInfo);
    byte_4D2F745 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(UserPresentListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserPresentListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentListViewManager___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)UserPresentListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserPresentListViewManager___c___ctor(UserPresentListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t UserPresentListViewManager___c___GetAllPresentStrings_b__60_0(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *a,
        ListViewItem_o *b,
        const MethodInfo *method)
{
  ListViewItem_o *v5; // x20
  __int64 naturalAligment; // x9
  int64_t sortValue0; // x8
  int64_t v8; // x9
  UserPresentListViewManager___c_o *v10; // x0
  ListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2

  v5 = a;
  if ( (byte_4D2F746 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1C93AD4(&UserPresentListViewItem_TypeInfo);
    byte_4D2F746 = 1;
  }
  if ( !v5 )
    goto LABEL_12;
  a = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( v5->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo )
  {
    sortValue0 = v5[1].fields.sortValue0;
    if ( !sortValue0 || !b )
      goto LABEL_12;
    if ( b->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo )
    {
      v8 = b[1].fields.sortValue0;
      if ( v8 )
        return *(_QWORD *)(sortValue0 + 88) - *(_DWORD *)(v8 + 88);
LABEL_12:
      sub_1C93D2C(this, a);
    }
  }
  else
  {
    sub_1C940C8(v5);
  }
  sub_1C940C8(b);
  return UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(v10, v11, v12);
}


bool UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *obj,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x19
  __int64 naturalAligment; // x9
  int64_t sortValue0; // x8
  _DWORD *monitor; // x8
  UserPresentListViewManager___c_o *v8; // x0
  ListViewItem_o *v9; // x1
  ListViewItem_o *v10; // x2
  const MethodInfo *v11; // x3

  v3 = obj;
  if ( (byte_4D2F747 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1C93AD4(&UserPresentListViewItem_TypeInfo);
    byte_4D2F747 = 1;
  }
  if ( !v3 )
    goto LABEL_11;
  obj = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( v3->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (UserPresentListViewItem_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo )
  {
    sortValue0 = v3[1].fields.sortValue0;
    if ( !sortValue0 )
      goto LABEL_11;
    if ( *(_DWORD *)(sortValue0 + 72) == 2 )
    {
      monitor = v3[1].monitor;
      if ( monitor )
        return monitor[12] == 24;
LABEL_11:
      sub_1C93D2C(this, obj);
    }
    return 0;
  }
  else
  {
    sub_1C940C8(v3);
    return UserPresentListViewManager___c___GetAllPresentStrings_b__60_2(v8, v9, v10, v11);
  }
}


int32_t UserPresentListViewManager___c___GetAllPresentStrings_b__60_2(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *a,
        ListViewItem_o *b,
        const MethodInfo *method)
{
  ListViewItem_o *v5; // x20
  __int64 naturalAligment; // x9
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
  if ( (byte_4D2F748 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1C93AD4(&UserPresentListViewItem_TypeInfo);
    byte_4D2F748 = 1;
  }
  if ( !v5 )
    goto LABEL_17;
  naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( v5->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentListViewItem_TypeInfo )
  {
    goto LABEL_18;
  }
  this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_NameText(
                                               (UserPresentListViewItem_o *)v5,
                                               (const MethodInfo *)UserPresentListViewItem_TypeInfo);
  if ( !b )
    goto LABEL_17;
  v7 = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( b->klass->_2.naturalAligment < (unsigned int)v7
    || (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v7 - 1] != UserPresentListViewItem_TypeInfo )
  {
    goto LABEL_19;
  }
  v8 = this;
  this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_NameText(
                                               (UserPresentListViewItem_o *)b,
                                               (const MethodInfo *)UserPresentListViewItem_TypeInfo);
  if ( !v8 )
    goto LABEL_17;
  result = System_String__CompareTo_64460088((System_String_o *)v8, (System_String_o *)this, 0);
  if ( result )
    return result;
  a = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  v10 = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( v5->klass->_2.naturalAligment < (unsigned int)v10
    || (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[v10 - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_18:
    sub_1C940C8(v5);
    goto LABEL_19;
  }
  v11 = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( b->klass->_2.naturalAligment >= (unsigned int)v11
    && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v11 - 1] == UserPresentListViewItem_TypeInfo )
  {
    this = (UserPresentListViewManager___c_o *)v5[1].fields.sortValue2;
    if ( this )
      return System_String__CompareTo_64460088((System_String_o *)this, (System_String_o *)b[1].fields.sortValue2, 0);
LABEL_17:
    sub_1C93D2C(this, a);
  }
LABEL_19:
  sub_1C940C8(b);
  return UserPresentListViewManager___c___OpenSelectableDialog_b__67_1(v12, v13, v14, v15);
}


void UserPresentListViewManager___c___OnClickListView_b__55_0(
        UserPresentListViewManager___c_o *this,
        bool res,
        const MethodInfo *method)
{
  ;
}


void UserPresentListViewManager___c___OnClickListView_b__55_1(
        UserPresentListViewManager___c_o *this,
        bool res,
        const MethodInfo *method)
{
  ;
}


int32_t UserPresentListViewManager___c___OpenSelectableDialog_b__67_1(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *a,
        ListViewItem_o *b,
        const MethodInfo *method)
{
  ListViewItem_o *v5; // x20
  __int64 naturalAligment; // x9
  int64_t sortValue0; // x8
  int64_t v8; // x9
  UserPresentListViewManager___c__DisplayClass67_0_o *v10; // x0
  ListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2

  v5 = a;
  if ( (byte_4D2F749 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1C93AD4(&UserPresentListViewItem_TypeInfo);
    byte_4D2F749 = 1;
  }
  if ( !v5 )
    goto LABEL_12;
  a = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( v5->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo )
  {
    sortValue0 = v5[1].fields.sortValue0;
    if ( !sortValue0 || !b )
      goto LABEL_12;
    if ( b->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo )
    {
      v8 = b[1].fields.sortValue0;
      if ( v8 )
        return *(_QWORD *)(sortValue0 + 88) - *(_DWORD *)(v8 + 88);
LABEL_12:
      sub_1C93D2C(this, a);
    }
  }
  else
  {
    sub_1C940C8(v5);
  }
  sub_1C940C8(b);
  return UserPresentListViewManager___c__DisplayClass67_0___OpenSelectableDialog_b__0(v10, v11, v12);
}


void UserPresentListViewManager___c__DisplayClass67_0___ctor(
        UserPresentListViewManager___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserPresentListViewManager___c__DisplayClass67_0___OpenSelectableDialog_b__0(
        UserPresentListViewManager___c__DisplayClass67_0_o *this,
        ListViewItem_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UserPresentListViewManager___c__DisplayClass67_0_o *v9; // x19
  __int64 naturalAligment; // x10
  int64_t sortValue0; // x8
  GrandQuestFolderBoardItem_c *monitor; // x1
  GrandQuestFolderBoardItem_o *p_ticketItem; // x19
  struct ItemEntity_o *ticketItem; // t1

  v9 = this;
  if ( (byte_4D2F74A & 1) == 0 )
  {
    this = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_1C93AD4(&UserPresentListViewItem_TypeInfo);
    byte_4D2F74A = 1;
  }
  if ( !obj
    || (naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentListViewItem_TypeInfo )
  {
    sub_1C93D2C(this, obj);
  }
  sortValue0 = obj[1].fields.sortValue0;
  if ( !sortValue0 )
    return 1;
  if ( *(_DWORD *)(sortValue0 + 72) != 2 )
    return 1;
  monitor = (GrandQuestFolderBoardItem_c *)obj[1].monitor;
  if ( !monitor || LODWORD(monitor->_1.this_arg.data) != 24 || LODWORD(monitor->_1.name) != v9->fields.ticketId )
    return 1;
  ticketItem = v9->fields.ticketItem;
  p_ticketItem = (GrandQuestFolderBoardItem_o *)&v9->fields.ticketItem;
  HIDWORD(p_ticketItem[-1].fields._ClosedMessage_k__BackingField) += *(_DWORD *)(sortValue0 + 80);
  if ( !ticketItem )
  {
    p_ticketItem->klass = monitor;
    sub_1C93A78(p_ticketItem, (int32_t)monitor, (int32_t)method, v3, v4, v5, v6, v7);
  }
  return 0;
}