void UserPresentListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C36724 & 1) == 0 )
  {
    sub_1C32C20(&ListViewSort_TypeInfo);
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_15228/*"UserPresent"*/);
    byte_4C36724 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C32E6C(ListViewSort_TypeInfo);
  ListViewSort___ctor_43736460(v1, (System_String_o *)StringLiteral_15228/*"UserPresent"*/, 1, 0, 0);
  UserPresentListViewManager_TypeInfo->static_fields->sortInfo = v1;
  sub_1C32BC4((CGThumbnailListItem_o *)UserPresentListViewManager_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int64_t m_parent; // x0
  System_Collections_Generic_IEnumerable_T__o *checkedIdList; // x22
  System_Collections_Generic_List_long__o *v11; // x21
  int max_length; // w8
  unsigned int v13; // w22
  Il2CppClass **v14; // x23
  Il2CppClass *v15; // x8
  UserPresentBoxEntity_o **v16; // x23
  Il2CppClass *v17; // t1
  UserPresentBoxEntity_o *v18; // x24
  UserPresentListViewItem_o *v19; // x23
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  struct System_Collections_Generic_List_long__o *v27; // x20
  int32_t v28; // w22
  const MethodInfo *v29; // x1
  il2cpp_array_size_t v30; // x8
  unsigned __int64 v31; // x21
  UserPresentBoxEntity_o *v32; // x23
  UserPresentListViewItem_o *v33; // x22
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x8

  if ( (byte_4C3670F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor___78010448);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&UserPresentListViewItem_TypeInfo);
    byte_4C3670F = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.selectPresentData = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.selectPresentData, 0, v5, v6);
  this->fields.presentIds = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.presentIds, 0, v7, v8);
  m_parent = (int64_t)this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_38;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 0, 0, 0);
  checkedIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v11 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_58196164(
      v11,
      checkedIdList,
      (const MethodInfo_37800C4 *)Method_System_Collections_Generic_List_long___ctor___78010448);
    if ( !presentList )
      goto LABEL_38;
    max_length = presentList->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( v13 < max_length )
      {
        v14 = &presentList->obj.klass + (int)v13;
        v17 = v14[4];
        v16 = (UserPresentBoxEntity_o **)(v14 + 4);
        v15 = v17;
        if ( !v17 || !v11 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v11,
                     (int64_t)v15->_1.namespaze,
                     (const MethodInfo_3781CEC *)Method_System_Collections_Generic_List_long__Remove__);
        if ( v13 >= LODWORD(presentList->max_length) )
          goto LABEL_39;
        v18 = *v16;
        v19 = (UserPresentListViewItem_o *)sub_1C32E6C(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v19, v13, v18, v20);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v23 = *(_QWORD *)(m_parent + 16);
        v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v23 )
          goto LABEL_38;
        v25 = *(int *)(m_parent + 24);
        if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v19,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = v23 + 8 * v25;
          *(_DWORD *)(m_parent + 24) = v25 + 1;
          *(_QWORD *)(v26 + 32) = v19;
          sub_1C32BC4((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v19, v21, v22);
        }
        max_length = presentList->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_18;
      }
      goto LABEL_39;
    }
LABEL_18:
    if ( !v11 )
LABEL_38:
      sub_1C32E7C(m_parent);
    v27 = this->fields.checkedIdList;
    if ( v11->fields._size >= 1 )
    {
      v28 = 0;
      do
      {
        m_parent = System_Collections_Generic_List_long___get_Item(
                     v11,
                     v28,
                     (const MethodInfo_3780500 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !v27 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v27,
                     m_parent,
                     (const MethodInfo_3781CEC *)Method_System_Collections_Generic_List_long__Remove__);
        v27 = this->fields.checkedIdList;
      }
      while ( ++v28 < v11->fields._size );
    }
    if ( !v27 )
      goto LABEL_38;
    if ( v27->fields._size >= 1 )
    {
      m_parent = (int64_t)this->fields.m_parent;
      if ( !m_parent )
        goto LABEL_38;
      UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 1, 1, 0);
      UserPresentListViewManager__updateCheckStatus(this, v29);
    }
  }
  else
  {
    if ( !presentList )
      goto LABEL_38;
    v30 = presentList->max_length;
    if ( (int)v30 >= 1 )
    {
      v31 = 0;
      while ( v31 < (unsigned int)v30 )
      {
        v32 = presentList->m_Items[v31];
        v33 = (UserPresentListViewItem_o *)sub_1C32E6C(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v33, v31, v32, v34);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v37 = *(_QWORD *)(m_parent + 16);
        v38 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v37 )
          goto LABEL_38;
        v39 = *(int *)(m_parent + 24);
        if ( (unsigned int)v39 >= *(_DWORD *)(v37 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v33,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = v37 + 8 * v39;
          *(_DWORD *)(m_parent + 24) = v39 + 1;
          *(_QWORD *)(v40 + 32) = v33;
          sub_1C32BC4((CGThumbnailListItem_o *)(v40 + 32), (int32_t)v33, v35, v36);
        }
        LODWORD(v30) = presentList->max_length;
        if ( (__int64)++v31 >= (int)v30 )
          goto LABEL_37;
      }
LABEL_39:
      sub_1C32E84(m_parent);
    }
  }
LABEL_37:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void UserPresentListViewManager__DeleteContinueData(const MethodInfo *method)
{
  UserPresentListViewManager_c *v1; // x0
  ListViewSort_o *sortInfo; // x0

  if ( (byte_4C3670A & 1) == 0 )
  {
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C3670A = 1;
  }
  v1 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v1 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v1->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1C32E7C(0);
  ListViewSort__DeleteContinueData(sortInfo, 0);
}


void UserPresentListViewManager__DestroyList(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C32E7C(0);
  ListViewSort__Save(sort, 0);
}


void UserPresentListViewManager__DlgForExpiredPresent(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v4; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0

  if ( (byte_4C36723 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__);
    sub_1C32C20(&StringLiteral_10450/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/);
    byte_4C36723 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_10450/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0);
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, 0);
  if ( !Instance )
    sub_1C32E7C(v6);
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
  struct UserPresentListViewManager_ReceiveCallbackFunc_o *receivecCallbackFunc; // x8

  if ( (byte_4C3671E & 1) == 0 )
  {
    sub_1C32C20(&System_Action_SceneList_Type__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_UserPresentListViewManager_EndNoticeDlg__);
    byte_4C3671E = 1;
  }
  dialog = this->fields.dialog;
  v6 = (System_Action_T__o *)sub_1C32E6C(System_Action_SceneList_Type__TypeInfo);
  System_Action_Int32Enum____ctor(v6, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0);
  if ( !dialog )
    goto LABEL_14;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(dialog, (System_Action_SceneList_Type__o *)v6, 0);
  if ( scene == -1 )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( CommonUI__IsActive_MasterMission((CommonUI_o *)Instance, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_1C32E7C(Instance);
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
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *NameText; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v12; // x20
  System_Comparison_T__o *v13; // x21
  Il2CppObject *v14; // x22
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_object__o *v18; // x20
  System_Predicate_object__o *v19; // x21
  Il2CppObject *v20; // x22
  struct UserPresentListViewManager___c_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w1
  int32_t v26; // w8
  System_Comparison_T__o *v27; // x21
  Il2CppObject *v28; // x22
  struct UserPresentListViewManager___c_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Text_StringBuilder_o *v32; // x20
  int v33; // w24
  int32_t v34; // w21
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10
  Il2CppObject *v37; // x22
  const MethodInfo *v38; // x1
  System_String_o *v39; // x23

  if ( (byte_4C3671B & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&System_Comparison_ListViewItem__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem___ctor___78011328);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__);
    sub_1C32C20(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__);
    sub_1C32C20(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__);
    sub_1C32C20(&UserPresentListViewManager___c_TypeInfo);
    sub_1C32C20(&UserPresentListViewItem_TypeInfo);
    sub_1C32C20(&StringLiteral_10455/*"PRESENT_INFO"*/);
    byte_4C3671B = 1;
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
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_58294448(
    v8,
    itemList,
    (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_ListViewItem___ctor___78011328);
  this->fields.presentAllSelectedList = (struct System_Collections_Generic_List_ListViewItem__o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.presentAllSelectedList, (int32_t)v8, v9, v10);
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  v12 = this->fields.presentAllSelectedList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v13 = *(System_Comparison_T__o **)(*(_QWORD *)&NameText[4].fields._size + 24LL);
  if ( !v13 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v14 = **(Il2CppObject ***)&NameText[4].fields._size;
    v13 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(v13, v14, Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__, 0);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__60_0 = (struct System_Comparison_ListViewItem__o *)v13;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__60_0, (int32_t)v13, v16, v17);
  }
  if ( !v12 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_58303104(
    (System_Collections_Generic_List_object__o *)v12,
    v13,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  v18 = *p_presentAllSelectedList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v19 = *(System_Predicate_object__o **)(*(_QWORD *)&NameText[4].fields._size + 32LL);
  if ( !v19 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v20 = **(Il2CppObject ***)&NameText[4].fields._size;
    v19 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_object____ctor(v19, v20, Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__, 0);
    v21 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v21->__9__60_1 = (struct System_Predicate_ListViewItem__o *)v19;
    sub_1C32BC4((CGThumbnailListItem_o *)&v21->__9__60_1, (int32_t)v19, v22, v23);
  }
  if ( !v18 )
    goto LABEL_53;
  System_Collections_Generic_List_object___RemoveAll(
    v18,
    (System_Predicate_T__o *)v19,
    (const MethodInfo_3799E18 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  }
  v24 = *p_presentAllSelectedList;
  if ( !*p_presentAllSelectedList )
    goto LABEL_53;
  v25 = *(_DWORD *)(*(_QWORD *)&NameText[4].fields._size + 132LL);
  v26 = v24->fields._size;
  if ( v26 > v25 )
  {
    System_Collections_Generic_List_object___RemoveRange(
      *p_presentAllSelectedList,
      v25,
      v26 - v25,
      (const MethodInfo_379A028 *)Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    v24 = *p_presentAllSelectedList;
  }
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v27 = *(System_Comparison_T__o **)(*(_QWORD *)&NameText[4].fields._size + 40LL);
  if ( !v27 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v28 = **(Il2CppObject ***)&NameText[4].fields._size;
    v27 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(v27, v28, Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__, 0);
    v29 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v29->__9__60_2 = (struct System_Comparison_ListViewItem__o *)v27;
    sub_1C32BC4((CGThumbnailListItem_o *)&v29->__9__60_2, (int32_t)v27, v30, v31);
  }
  if ( !v24 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_58303104(
    v24,
    v27,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  v32 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v32, 0);
  if ( !*p_presentAllSelectedList )
    goto LABEL_53;
  v33 = (*p_presentAllSelectedList)->fields._size;
  if ( v33 >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      if ( v34 )
      {
        if ( !v32 )
          break;
        System_Text_StringBuilder__Append_63605936(v32, 0xAu, 0);
      }
      NameText = *p_presentAllSelectedList;
      if ( !*p_presentAllSelectedList )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               NameText,
               v34,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item
        && (naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment,
            Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        v37 = (UserPresentListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo
            ? Item
            : 0LL;
      }
      else
      {
        v37 = 0;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      NameText = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_10455/*"PRESENT_INFO"*/,
                                                                0);
      if ( !v37 )
        break;
      v39 = (System_String_o *)NameText;
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewItem__get_NameText(
                                                                (UserPresentListViewItem_o *)v37,
                                                                v38);
      if ( !v32 )
        break;
      NameText = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__AppendFormat_63609960(
                                                                v32,
                                                                v39,
                                                                (Il2CppObject *)NameText,
                                                                (Il2CppObject *)v37[12].klass,
                                                                0);
      if ( v33 == ++v34 )
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v32->klass->vtable._3_ToString.methodPtr)(
                                    v32,
                                    v32->klass->vtable._3_ToString.method);
    }
LABEL_53:
    sub_1C32E7C(NameText);
  }
  if ( !v32 )
    goto LABEL_53;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v32->klass->vtable._3_ToString.methodPtr)(
                              v32,
                              v32->klass->vtable._3_ToString.method);
}


UserPresentListViewItem_o *UserPresentListViewManager__GetItem(
        UserPresentListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UserPresentListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C36710 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&UserPresentListViewItem_TypeInfo);
    byte_4C36710 = 1;
  }
  result = (UserPresentListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (UserPresentListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  const MethodInfo *v3; // x3
  UserPresentListViewManager_c *v5; // x0
  struct ListViewSort_o **p_sortInfo; // x8
  struct ListViewSort_o *v7; // x1
  struct ListViewSort_o *sort; // x0

  if ( (byte_4C3670E & 1) == 0 )
  {
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C3670E = 1;
  }
  v5 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v5 = UserPresentListViewManager_TypeInfo;
  }
  p_sortInfo = &v5->static_fields->sortInfo;
  v7 = *p_sortInfo;
  this->fields.sort = *p_sortInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v7, v2, v3);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C32E7C(0);
  sort->fields.listViewKind = 4;
  ListViewSort__Load(sort, 0);
  ((void (__fastcall *)(UserPresentListViewManager_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
    this,
    this->klass->vtable._5_SetSortButtonImage.method);
}


void UserPresentListViewManager__InitLoad(const MethodInfo *method)
{
  UserPresentListViewManager_c *v1; // x0
  ListViewSort_o *sortInfo; // x0

  if ( (byte_4C3670B & 1) == 0 )
  {
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C3670B = 1;
  }
  v1 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v1 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v1->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1C32E7C(0);
  ListViewSort__InitLoad(sortInfo, 0);
}


void UserPresentListViewManager__OnClickListCheck(
        UserPresentListViewManager_o *this,
        UserPresentListViewObject_o *obj,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v4; // x19
  UserPresentListViewItem_o *Item; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UserPresentListViewItem_o *selectItem; // x8
  struct UserPresentBoxEntity_o *usrPresentEnt; // x1
  UserPresentListViewManager_o **p_selectPresentData; // x23
  UserPresentListViewManager_o **p_checkedIdList; // x21
  System_Collections_Generic_List_long__o *v15; // x24
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int m_CancellationTokenSource; // w8
  int v19; // w25
  int32_t v20; // w24
  const MethodInfo *v21; // x1
  struct ItemEntity_o *itemEnt; // x8
  int64_t endedAt; // x24
  Il2CppObject *MasterData_object; // x24
  BalanceConfig_c *v25; // x0
  int v26; // w24
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  const MethodInfo *v31; // x1
  int32_t v32; // w24
  BalanceConfig_c *v33; // x0
  _QWORD *v34; // x8
  int32_t PresentBoxCheckMax; // w25
  const MethodInfo *presentId; // x1
  intptr_t m_CachedPtr; // x8
  _QWORD *v38; // x9
  __int64 m_CancellationTokenSource_low; // x10
  BalanceConfig_c *v40; // x8
  int32_t v41; // w22
  const MethodInfo *v42; // x3
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  Il2CppObject *v44; // [xsp+8h] [xbp-58h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4C36717 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (UserPresentListViewManager_o *)sub_1C32C20(&Method_UserPresentListViewManager_OnClickListCheck__);
    byte_4C36717 = 1;
  }
  entity = 0;
  v44 = 0;
  if ( !obj )
    goto LABEL_81;
  Item = UserPresentListViewObject__GetItem(obj, (const MethodInfo *)obj);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = Item;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.selectItem, (int32_t)Item, v7, v8);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_81;
  usrPresentEnt = selectItem->fields.usrPresentEnt;
  p_selectPresentData = (UserPresentListViewManager_o **)&v4->fields.selectPresentData;
  v4->fields.selectPresentData = usrPresentEnt;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.selectPresentData, (int32_t)usrPresentEnt, v9, v10);
  p_checkedIdList = (UserPresentListViewManager_o **)&v4->fields.checkedIdList;
  if ( !v4->fields.checkedIdList )
  {
    v15 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v15,
      (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
    *p_checkedIdList = (UserPresentListViewManager_o *)v15;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.checkedIdList, (int32_t)v15, v16, v17);
  }
  if ( !*p_selectItem )
    goto LABEL_81;
  if ( (*p_selectItem)->fields.presentId >= 1 )
  {
    this = *p_checkedIdList;
    if ( !*p_checkedIdList )
      goto LABEL_81;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v19 = m_CancellationTokenSource - 1;
    if ( m_CancellationTokenSource >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___get_Item(
                                                 (System_Collections_Generic_List_long__o *)this,
                                                 v20,
                                                 (const MethodInfo_3780500 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !*p_selectItem )
          goto LABEL_81;
        if ( this == (UserPresentListViewManager_o *)(*p_selectItem)->fields.presentId )
          break;
        if ( v19 == v20 )
          goto LABEL_17;
        this = *p_checkedIdList;
        ++v20;
        if ( !*p_checkedIdList )
          goto LABEL_81;
      }
      v29 = Method_UserPresentListViewManager_OnClickListCheck__;
      if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
        v29 = (_QWORD *)sub_1C32C38(Method_UserPresentListViewManager_OnClickListCheck__);
      v30 = (System_Reflection_MethodBase_o *)sub_1C32C04(v29, v29[4]);
      OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0, 0);
      this = *p_checkedIdList;
      if ( *p_checkedIdList )
      {
        System_Collections_Generic_List_long___RemoveAt(
          (System_Collections_Generic_List_long__o *)this,
          v20,
          (const MethodInfo_3781F70 *)Method_System_Collections_Generic_List_long__RemoveAt__);
        UserPresentListViewManager__updateCheckStatus(v4, v31);
        return;
      }
LABEL_81:
      sub_1C32E7C(this);
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
        this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_81;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
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
          v25 = BalanceConfig_TypeInfo;
          v26 = LODWORD((*p_selectPresentData)->fields.scrollView) + entity->fields.num;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v25 = BalanceConfig_TypeInfo;
          }
          if ( v26 > v25->static_fields->UserItemMax )
            goto LABEL_40;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
          if ( !*p_selectPresentData || !this )
            goto LABEL_81;
          this = (UserPresentListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   &v44,
                                                   HIDWORD((*p_selectPresentData)->fields.sortOrderSprite),
                                                   (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (UserPresentListViewManager_o *)v44;
            if ( !v44 )
              goto LABEL_81;
            this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v44, 0);
            if ( (int)this >= 1 )
            {
              this = (UserPresentListViewManager_o *)v44;
              if ( !v44 )
                goto LABEL_81;
              this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v44, 0);
              if ( v26 > (int)this )
              {
LABEL_40:
                v27 = Method_UserPresentListViewManager_OnClickListCheck__;
                if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
                  v27 = (_QWORD *)sub_1C32C38(Method_UserPresentListViewManager_OnClickListCheck__);
                v28 = (System_Reflection_MethodBase_o *)sub_1C32C04(v27, v27[4]);
                goto LABEL_68;
              }
            }
          }
        }
LABEL_57:
        if ( !*p_checkedIdList )
          goto LABEL_81;
        v32 = (int32_t)(*p_checkedIdList)->fields.m_CancellationTokenSource;
        v33 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v33 = BalanceConfig_TypeInfo;
        }
        v34 = Method_UserPresentListViewManager_OnClickListCheck__;
        PresentBoxCheckMax = v33->static_fields->PresentBoxCheckMax;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
          v34 = (_QWORD *)sub_1C32C38(Method_UserPresentListViewManager_OnClickListCheck__);
        v28 = (System_Reflection_MethodBase_o *)sub_1C32C04(v34, v34[4]);
        if ( v32 < PresentBoxCheckMax )
        {
          OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0, 0);
          if ( !*p_selectItem )
            goto LABEL_81;
          this = *p_checkedIdList;
          if ( !*p_checkedIdList )
            goto LABEL_81;
          presentId = (const MethodInfo *)(*p_selectItem)->fields.presentId;
          m_CachedPtr = this->fields.m_CachedPtr;
          v38 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_81;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              (int64_t)presentId,
              *(const MethodInfo_37807F0 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            this = *p_checkedIdList;
            if ( !*p_checkedIdList )
              goto LABEL_81;
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(m_CachedPtr + 8 * m_CancellationTokenSource_low + 32) = presentId;
          }
          v40 = BalanceConfig_TypeInfo;
          v41 = (int32_t)this->fields.m_CancellationTokenSource;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v40 = BalanceConfig_TypeInfo;
          }
          if ( v41 < v40->static_fields->PresentBoxCheckMax )
          {
            this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(obj, presentId);
            if ( !*p_checkedIdList )
              goto LABEL_81;
            if ( !this )
              goto LABEL_81;
            UserPresentListViewItem__setCheckBoxed(
              (UserPresentListViewItem_o *)this,
              1,
              (int32_t)(*p_checkedIdList)->fields.m_CancellationTokenSource,
              v42);
            checkedIdList = v4->fields.checkedIdList;
            if ( !checkedIdList )
              goto LABEL_81;
            this = (UserPresentListViewManager_o *)v4->fields.m_parent;
            if ( !this )
              goto LABEL_81;
            UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)this, checkedIdList->fields._size, 0);
          }
          UserPresentListViewManager__updateCheckStatus(v4, presentId);
          this = (UserPresentListViewManager_o *)v4->fields.m_parent;
          if ( !this )
            goto LABEL_81;
          UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)this, 1, 1, 0);
          return;
        }
LABEL_68:
        OverwriteAssetSoundName__PlaySystemSe(v28, 1, 0, 0);
        return;
      }
    }
    UserPresentListViewManager__DlgForExpiredPresent(v4, v21);
  }
}


void UserPresentListViewManager__OnClickListView(
        UserPresentListViewManager_o *this,
        UserPresentListViewObject_o *obj,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v4; // x19
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  UserPresentListViewItem_o *Item; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UserPresentListViewItem_o *selectItem; // x8
  struct UserPresentBoxEntity_o *usrPresentEnt; // x1
  struct UserPresentBoxEntity_o **p_selectPresentData; // x21
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo *v19; // x1
  struct ItemEntity_o *itemEnt; // x8
  __int64 endedAt; // x22
  struct ItemEntity_o *v22; // x8
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  const MethodInfo *v25; // x2
  struct ItemEntity_o *v26; // x8
  Il2CppObject *MasterData_object; // x22
  BalanceConfig_c *v28; // x0
  int32_t v29; // w22
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  const MethodInfo *v32; // x2
  UserPresentListViewManager___c_c *v33; // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *_9__55_0; // x20
  Il2CppObject *v35; // x21
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  CGThumbnailListItem_o *p__9__55_0; // x0
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  UserPresentListViewManager___c_c *v43; // x0
  Il2CppObject *v44; // x21
  const MethodInfo *v45; // x3
  struct UserPresentListViewManager___c_StaticFields *v46; // x0
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  System_Collections_Generic_List_long__o *v49; // x21
  UserPresentListViewManager_o **p_presentIds; // x20
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct UserPresentListViewItem_o *v53; // x8
  int64_t presentId; // x1
  intptr_t m_CachedPtr; // x8
  _QWORD *v56; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const MethodInfo *v58; // x2
  Il2CppObject *v59; // [xsp+8h] [xbp-48h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4C36716 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_UserPresentListViewManager___c__OnClickListView_b__55_0__);
    sub_1C32C20(&Method_UserPresentListViewManager___c__OnClickListView_b__55_1__);
    sub_1C32C20(&UserPresentListViewManager___c_TypeInfo);
    this = (UserPresentListViewManager_o *)sub_1C32C20(&Method_UserPresentListViewManager_OnClickListView__);
    byte_4C36716 = 1;
  }
  entity = 0;
  v59 = 0;
  if ( !obj )
    goto LABEL_87;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_87;
  if ( *(&this->fields.execObjectExtraFlag + 2) )
    return;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(obj, v5);
  if ( !this )
    goto LABEL_87;
  if ( BYTE4(this->fields.objectList) )
    return;
  checkedIdList = v4->fields.checkedIdList;
  if ( checkedIdList )
  {
    if ( checkedIdList->fields._size > 0 )
      return;
  }
  v4->fields.kind = 0;
  Item = UserPresentListViewObject__GetItem(obj, v6);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = Item;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.selectItem, (int32_t)Item, v10, v11);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_87;
  usrPresentEnt = selectItem->fields.usrPresentEnt;
  p_selectPresentData = &v4->fields.selectPresentData;
  v4->fields.selectPresentData = usrPresentEnt;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.selectPresentData, (int32_t)usrPresentEnt, v12, v13);
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
      v22 = (*p_selectItem)->fields.itemEnt;
      if ( !v22 )
        goto LABEL_87;
      if ( v22->fields.type == 24 )
      {
        v23 = Method_UserPresentListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v23 = (_QWORD *)sub_1C32C38(Method_UserPresentListViewManager_OnClickListView__);
        v24 = (System_Reflection_MethodBase_o *)sub_1C32C04(v23, v23[4]);
        OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0);
        if ( *p_selectItem )
        {
          v26 = (*p_selectItem)->fields.itemEnt;
          if ( v26 )
          {
            UserPresentListViewManager__OpenSelectableDialog(v4, v26->fields.id, v25);
            return;
          }
        }
        goto LABEL_87;
      }
      this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_87;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
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
        v28 = BalanceConfig_TypeInfo;
        v29 = (*p_selectPresentData)->fields.num + entity->fields.num;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v28 = BalanceConfig_TypeInfo;
        }
        if ( v29 > v28->static_fields->UserItemMax )
        {
          v30 = Method_UserPresentListViewManager_OnClickListView__;
          if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
            v30 = (_QWORD *)sub_1C32C38(Method_UserPresentListViewManager_OnClickListView__);
          v31 = (System_Reflection_MethodBase_o *)sub_1C32C04(v30, v30[4]);
          OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0);
          v33 = UserPresentListViewManager___c_TypeInfo;
          if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
            v33 = UserPresentListViewManager___c_TypeInfo;
          }
          _9__55_0 = v33->static_fields->__9__55_0;
          if ( _9__55_0 )
            goto LABEL_56;
          if ( !v33->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v33);
            v33 = UserPresentListViewManager___c_TypeInfo;
          }
          v35 = (Il2CppObject *)v33->static_fields->__9;
          _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1C32E6C(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
          UserPresentListViewManager_ReceiveCallbackFunc___ctor(
            _9__55_0,
            v35,
            Method_UserPresentListViewManager___c__OnClickListView_b__55_0__,
            v36);
          static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__55_0 = _9__55_0;
          p__9__55_0 = (CGThumbnailListItem_o *)&static_fields->__9__55_0;
LABEL_55:
          sub_1C32BC4(p__9__55_0, (int32_t)_9__55_0, v37, v38);
LABEL_56:
          UserPresentListViewManager__showErrorResultDlg(v4, _9__55_0, v32);
          return;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !this )
          goto LABEL_87;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               &v59,
               (*p_selectPresentData)->fields.objectId,
               (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          this = (UserPresentListViewManager_o *)v59;
          if ( !v59 )
            goto LABEL_87;
          if ( ItemEntity__GetMaxNum((ItemEntity_o *)v59, 0) >= 1 )
          {
            this = (UserPresentListViewManager_o *)v59;
            if ( !v59 )
              goto LABEL_87;
            if ( v29 > ItemEntity__GetMaxNum((ItemEntity_o *)v59, 0) )
            {
              v41 = Method_UserPresentListViewManager_OnClickListView__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
                v41 = (_QWORD *)sub_1C32C38(Method_UserPresentListViewManager_OnClickListView__);
              v42 = (System_Reflection_MethodBase_o *)sub_1C32C04(v41, v41[4]);
              OverwriteAssetSoundName__PlaySystemSe(v42, 0, 0, 0);
              v43 = UserPresentListViewManager___c_TypeInfo;
              if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
                v43 = UserPresentListViewManager___c_TypeInfo;
              }
              _9__55_0 = v43->static_fields->__9__55_1;
              if ( _9__55_0 )
                goto LABEL_56;
              if ( !v43->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v43);
                v43 = UserPresentListViewManager___c_TypeInfo;
              }
              v44 = (Il2CppObject *)v43->static_fields->__9;
              _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1C32E6C(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
              UserPresentListViewManager_ReceiveCallbackFunc___ctor(
                _9__55_0,
                v44,
                Method_UserPresentListViewManager___c__OnClickListView_b__55_1__,
                v45);
              v46 = UserPresentListViewManager___c_TypeInfo->static_fields;
              v46->__9__55_1 = _9__55_0;
              p__9__55_0 = (CGThumbnailListItem_o *)&v46->__9__55_1;
              goto LABEL_55;
            }
          }
        }
      }
    }
    v47 = Method_UserPresentListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v47 = (_QWORD *)sub_1C32C38(Method_UserPresentListViewManager_OnClickListView__);
    v48 = (System_Reflection_MethodBase_o *)sub_1C32C04(v47, v47[4]);
    OverwriteAssetSoundName__PlaySystemSe(v48, 8, 0, 0);
    if ( *p_selectItem )
    {
      v4->fields._select_idx_k__BackingField = (*p_selectItem)->fields.index;
      v49 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v49,
        (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
      p_presentIds = (UserPresentListViewManager_o **)&v4->fields.presentIds;
      v4->fields.presentIds = v49;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.presentIds, (int32_t)v49, v51, v52);
      v53 = v4->fields.selectItem;
      if ( v53 )
      {
        presentId = v53->fields.presentId;
        if ( presentId >= 1 )
        {
          this = *p_presentIds;
          if ( !*p_presentIds )
            goto LABEL_87;
          m_CachedPtr = this->fields.m_CachedPtr;
          v56 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_87;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              presentId,
              *(const MethodInfo_37807F0 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(m_CachedPtr + 8 * m_CancellationTokenSource_low + 32) = presentId;
          }
        }
        this = *p_presentIds;
        if ( *p_presentIds )
        {
          this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                   (System_Collections_Generic_List_long__o *)this,
                                                   (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v4->fields.m_parent )
          {
            UserPresentBoxWindow__receivePresent(v4->fields.m_parent, (System_Int64_array *)this, 0, 0, 0);
            UserPresentListViewManager__SetMode_40135620(v4, 2, v58);
            return;
          }
        }
      }
    }
LABEL_87:
    sub_1C32E7C(this);
  }
LABEL_14:
  v17 = Method_UserPresentListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1C32C38(Method_UserPresentListViewManager_OnClickListView__);
  v18 = (System_Reflection_MethodBase_o *)sub_1C32C04(v17, v17[4]);
  OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
  UserPresentListViewManager__DlgForExpiredPresent(v4, v19);
}


void UserPresentListViewManager__OnClickSortAscendingOrder(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_4C3671F & 1) == 0 )
  {
    sub_1C32C20(&Method_UserPresentListViewManager_OnClickSortAscendingOrder__);
    byte_4C3671F = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_UserPresentListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_UserPresentListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C32E7C(v5);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C36715 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36715 = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1C32E7C(0);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
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

  if ( (byte_4C3671D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_SceneList_Type__TypeInfo);
    sub_1C32C20(&Method_UserPresentListViewManager_EndNoticeDlg__);
    byte_4C3671D = 1;
  }
  dialog = this->fields.dialog;
  if ( !dialog
    || (UserPresentBoxErrorDialog__Open(dialog, msg, 0),
        v6 = this->fields.dialog,
        v7 = (System_Action_T__o *)sub_1C32E6C(System_Action_SceneList_Type__TypeInfo),
        System_Action_Int32Enum____ctor(v7, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0),
        !v6) )
  {
    sub_1C32E7C(dialog);
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
  struct System_Collections_Generic_List_ListViewItem__o *presentTicketList; // x8
  int32_t size; // w2
  int v9; // w9
  struct UserPresentBoxWindow_o *m_parent; // x8
  System_Collections_Generic_IEnumerable_T__o *itemList; // x22
  System_Collections_Generic_List_object__o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Collections_Generic_List_ListViewItem__o *v17; // x22
  System_Predicate_object__o *v18; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v19; // x21
  System_Comparison_T__o *v20; // x22
  Il2CppObject *v21; // x23
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4C36721 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_ListViewItem__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem___ctor___78011328);
    sub_1C32C20(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C32C20(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C32C20(&Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__);
    sub_1C32C20(&Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__);
    sub_1C32C20(&UserPresentListViewManager___c__DisplayClass67_0_TypeInfo);
    sub_1C32C20(&UserPresentListViewManager___c_TypeInfo);
    byte_4C36721 = 1;
  }
  v5 = sub_1C32E6C(UserPresentListViewManager___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_DWORD *)(v5 + 16) = ticketId;
  presentTicketList = this->fields.presentTicketList;
  if ( presentTicketList )
  {
    size = presentTicketList->fields._size;
    v9 = presentTicketList->fields._version + 1;
    presentTicketList->fields._size = 0;
    presentTicketList->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)presentTicketList->fields._items, 0, size, 0);
  }
  m_parent = this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_18;
  m_parent->fields.mIsScrlResetPosition = 1;
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_58294448(
    v12,
    itemList,
    (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_ListViewItem___ctor___78011328);
  this->fields.presentTicketList = (struct System_Collections_Generic_List_ListViewItem__o *)v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.presentTicketList, (int32_t)v12, v13, v14);
  *(_DWORD *)(v5 + 20) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), 0, v15, v16);
  v17 = this->fields.presentTicketList;
  v18 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__,
    0);
  if ( !v17 )
    goto LABEL_18;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v17,
    (System_Predicate_T__o *)v18,
    (const MethodInfo_3799E18 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  selectDialog = UserPresentListViewManager___c_TypeInfo;
  v19 = this->fields.presentTicketList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    selectDialog = UserPresentListViewManager___c_TypeInfo;
  }
  v20 = *(System_Comparison_T__o **)(*((_QWORD *)selectDialog + 23) + 48LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)selectDialog + 56) )
    {
      j_il2cpp_runtime_class_init_0(selectDialog);
      selectDialog = UserPresentListViewManager___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)selectDialog + 23);
    v20 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(v20, v21, Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__, 0);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__67_1 = (struct System_Comparison_ListViewItem__o *)v20;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__67_1, (int32_t)v20, v23, v24);
  }
  if ( !v19
    || (System_Collections_Generic_List_object___Sort_58303104(
          (System_Collections_Generic_List_object__o *)v19,
          v20,
          (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_ListViewItem__Sort__),
        (selectDialog = this->fields.selectDialog) == 0) )
  {
LABEL_18:
    sub_1C32E7C(selectDialog);
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
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *v8; // x21
  __int64 v9; // x8
  System_Collections_Generic_List_object__o *v10; // x0
  _QWORD *v11; // x25
  _QWORD *v12; // x26
  _BOOL8 v13; // x0
  UserPresentListViewItem_o *current; // x23
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_long__o *checkedIdList; // x0
  UserPresentBoxEntity_o *usrPresentEnt; // x0
  _BOOL8 IsExpired; // x0
  const MethodInfo *v19; // x1
  struct UserPresentBoxEntity_o *v20; // x9
  struct ItemEntity_o *itemEnt; // x9
  struct System_Collections_Generic_List_long__o **v22; // x19
  _QWORD *v23; // x20
  _QWORD *v24; // x26
  int64_t endedAt; // x25
  bool v26; // cc
  Il2CppObject *NameText; // x0
  const MethodInfo *v28; // x1
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x1
  struct System_Object_array *v33; // x8
  __int64 v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_List_long__o *v37; // x0
  int64_t presentId; // x1
  struct System_Int64_array *items; // x8
  __int64 v40; // x9
  __int64 size; // x10
  int32_t v42; // w1
  CGThumbnailListItem_o *p_expiredPresents_k__BackingField; // x22
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_String_o *klass; // x23
  Il2CppObject *Item; // x0
  System_String_o *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3671A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UserPresentListViewItem_TypeInfo);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_16056/*"]"*/);
    byte_4C3671A = 1;
  }
  memset(&v53, 0, sizeof(v53));
  this->fields.kind = kind;
  v4 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v4,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = &this->fields.presentIds;
  this->fields.presentIds = v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.presentIds, (int32_t)v4, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  v9 = 192;
  if ( kind == 1 )
    v9 = 432;
  v10 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v9);
  if ( !v10 )
    goto LABEL_62;
  v11 = &Method_System_Collections_Generic_List_string__Add__;
  v12 = &Method_System_Collections_Generic_List_long__Add__;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    v10,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v53 = v52;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v13 )
      break;
    current = (UserPresentListViewItem_o *)v53.fields._current;
    if ( v53.fields._current )
    {
      naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
      if ( v53.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UserPresentListViewItem_c *)v53.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentListViewItem_TypeInfo )
      {
        sub_1C3313C(v53.fields._current);
LABEL_52:
        sub_1C32E7C(IsExpired);
      }
    }
    switch ( kind )
    {
      case 1:
        if ( !v53.fields._current )
          sub_1C32E7C(v13);
        goto LABEL_23;
      case 2:
        if ( !v53.fields._current )
          sub_1C32E7C(v13);
        if ( !Gift__IsServant_40327796((int32_t)v53.fields._current[11].klass, 0)
          && !Gift__IsCommandCode_40328188(current->fields.giftType, 0) )
        {
          goto LABEL_23;
        }
        break;
      case 3:
        if ( !v53.fields._current )
          sub_1C32E7C(v13);
        checkedIdList = this->fields.checkedIdList;
        if ( !checkedIdList )
          sub_1C32E7C(0);
        if ( System_Collections_Generic_List_long___Contains(
               checkedIdList,
               (int64_t)v53.fields._current[10].monitor,
               (const MethodInfo_3780B68 *)Method_System_Collections_Generic_List_long__Contains__) )
        {
LABEL_23:
          usrPresentEnt = current->fields.usrPresentEnt;
          if ( !usrPresentEnt )
            sub_1C32E7C(0);
          IsExpired = UserPresentBoxEntity__IsExpired(usrPresentEnt, 0, 0);
          v20 = current->fields.usrPresentEnt;
          if ( !v20 )
            goto LABEL_52;
          if ( v20->fields.giftType == 2 )
          {
            itemEnt = current->fields.itemEnt;
            if ( !itemEnt )
              sub_1C32E7C(IsExpired);
            if ( itemEnt->fields.type != 24 )
            {
              if ( IsExpired )
                goto LABEL_33;
              v22 = p_presentIds;
              v23 = v12;
              v24 = v11;
              endedAt = itemEnt->fields.endedAt;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v26 = endedAt <= NetworkManager__getTime(0);
              v11 = v24;
              v12 = v23;
              p_presentIds = v22;
              if ( v26 )
                goto LABEL_33;
LABEL_39:
              v37 = *p_presentIds;
              if ( !*p_presentIds )
                sub_1C32E7C(0);
              presentId = current->fields.presentId;
              items = v37->fields._items;
              v40 = *v12;
              ++v37->fields._version;
              if ( !items )
                sub_1C32E7C(v37);
              size = v37->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v37,
                  presentId,
                  *(const MethodInfo_37807F0 **)(*(_QWORD *)(*(_QWORD *)(v40 + 32) + 192LL) + 112LL));
              }
              else
              {
                v37->fields._size = size + 1;
                items->m_Items[size] = presentId;
              }
            }
          }
          else
          {
            if ( !IsExpired )
              goto LABEL_39;
LABEL_33:
            NameText = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, v19);
            if ( !v8 )
              sub_1C32E7C(NameText);
            if ( !System_Collections_Generic_List_object___Contains(
                    v8,
                    NameText,
                    (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_string__Contains__) )
            {
              v29 = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, v28);
              v32 = v29;
              v33 = v8->fields._items;
              v34 = *v11;
              ++v8->fields._version;
              if ( !v33 )
                sub_1C32E7C(v29);
              v35 = v8->fields._size;
              if ( (unsigned int)v35 >= LODWORD(v33->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  v29,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(*(_QWORD *)(v34 + 32) + 192LL) + 112LL));
              }
              else
              {
                v36 = &v33->obj.klass + v35;
                v8->fields._size = v35 + 1;
                v36[4] = (Il2CppClass *)v32;
                sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v32, v30, v31);
              }
            }
          }
        }
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v42 = StringLiteral_1/*""*/;
  p_expiredPresents_k__BackingField = (CGThumbnailListItem_o *)&this->fields._expiredPresents_k__BackingField;
  this->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._expiredPresents_k__BackingField, v42, v44, v45);
  if ( !v8 )
    goto LABEL_62;
  if ( v8->fields._size >= 1 )
  {
    do
    {
      klass = (System_String_o *)p_expiredPresents_k__BackingField->klass;
      Item = System_Collections_Generic_List_object___get_Item(
               v8,
               0,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
      v48 = System_String__Concat_63558796(
              klass,
              (System_String_o *)StringLiteral_15802/*"["*/,
              (System_String_o *)Item,
              (System_String_o *)StringLiteral_16056/*"]"*/,
              0);
      p_expiredPresents_k__BackingField->klass = (CGThumbnailListItem_c *)v48;
      sub_1C32BC4(p_expiredPresents_k__BackingField, (int32_t)v48, v49, v50);
      System_Collections_Generic_List_object___RemoveAt(
        v8,
        0,
        (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_string__RemoveAt__);
    }
    while ( v8->fields._size > 0 );
  }
  v10 = (System_Collections_Generic_List_object__o *)*p_presentIds;
  if ( !*p_presentIds
    || (v10 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_long___ToArray(
                                                             (System_Collections_Generic_List_long__o *)v10,
                                                             (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.m_parent) )
  {
LABEL_62:
    sub_1C32E7C(v10);
  }
  UserPresentBoxWindow__receivePresent(this->fields.m_parent, (System_Int64_array *)v10, 0, 0, 0);
}


void UserPresentListViewManager__RequestItemSelect(
        UserPresentListViewManager_o *this,
        ItemSelectEntity_o *selectItm,
        int32_t num,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t presentTicketList; // x0
  int v9; // w26
  int v10; // w27
  int v11; // w29
  int v12; // w24
  _QWORD *v13; // x23
  __int64 naturalAligment; // x10
  __int64 v15; // x8
  int64_t v16; // x25
  __int64 v17; // x8
  int v18; // w25
  int64_t v19; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  UserPresentBoxWindow_o *m_parent; // x23
  const MethodInfo *v24; // x2
  __int64 v25; // x9
  __int64 v26; // x8
  struct System_String_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  UserPresentBoxWindow_o *v30; // x20
  UserPresentListViewManager_o *v31; // x0
  const MethodInfo *v32; // x1
  int32_t selectNum; // [xsp+4h] [xbp-6Ch]
  ItemSelectEntity_o *v34; // [xsp+8h] [xbp-68h]

  if ( (byte_4C36722 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UserPresentListViewItem_TypeInfo);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    sub_1C32C20(&StringLiteral_16056/*"]"*/);
    byte_4C36722 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  presentTicketList = (int64_t)this->fields.presentTicketList;
  if ( !presentTicketList || !selectItm )
    goto LABEL_26;
  v9 = *(_DWORD *)(presentTicketList + 24);
  v34 = selectItm;
  selectNum = num;
  if ( v9 < 1 || (v10 = selectItm->fields.requireNum * num, v10 < 1) )
  {
    if ( v7 )
    {
LABEL_28:
      m_parent = this->fields.m_parent;
      presentTicketList = (int64_t)System_Collections_Generic_List_long___ToArray(
                                     v7,
                                     (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( m_parent )
      {
        UserPresentBoxWindow__receivePresent(
          m_parent,
          (System_Int64_array *)presentTicketList,
          v34->fields.idx,
          selectNum,
          0);
        UserPresentListViewManager__SetMode_40135620(this, 2, v24);
        return;
      }
    }
    goto LABEL_26;
  }
  v11 = 0;
  v12 = 1;
  while ( 1 )
  {
    presentTicketList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)presentTicketList,
                                   v12 - 1,
                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !presentTicketList )
      goto LABEL_26;
    v13 = (_QWORD *)presentTicketList;
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
    v15 = v13[16];
    if ( !v15 )
      goto LABEL_26;
    v16 = *(_QWORD *)(v15 + 96);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    presentTicketList = NetworkManager__getTime(0);
    if ( v16 <= presentTicketList )
      break;
    v17 = v13[19];
    if ( !v17 )
      goto LABEL_26;
    if ( !v7 )
      goto LABEL_26;
    v18 = *(_DWORD *)(v17 + 80);
    v19 = v13[21];
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
        v19,
        *(const MethodInfo_37807F0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v7->fields._size = size + 1;
      items->m_Items[size] = v19;
    }
    if ( v12 >= v9 )
      goto LABEL_28;
    v11 += v18;
    if ( v11 >= v10 )
      goto LABEL_28;
    presentTicketList = (int64_t)this->fields.presentTicketList;
    ++v12;
    if ( !presentTicketList )
      goto LABEL_26;
  }
  presentTicketList = (int64_t)this->fields.presentTicketList;
  if ( !presentTicketList )
    goto LABEL_26;
  presentTicketList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)presentTicketList,
                                 0,
                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !presentTicketList )
    goto LABEL_26;
  v25 = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)presentTicketList + 304LL) >= (unsigned int)v25
    && *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)presentTicketList + 200LL) + 8 * v25 - 8) == UserPresentListViewItem_TypeInfo )
  {
    v26 = *(_QWORD *)(presentTicketList + 128);
    if ( v26 )
    {
      v27 = System_String__Concat_63556792(
              (System_String_o *)StringLiteral_15802/*"["*/,
              *(System_String_o **)(v26 + 24),
              (System_String_o *)StringLiteral_16056/*"]"*/,
              0);
      this->fields._expiredPresents_k__BackingField = v27;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._expiredPresents_k__BackingField, (int32_t)v27, v28, v29);
      if ( v7 )
      {
        v30 = this->fields.m_parent;
        presentTicketList = (int64_t)System_Collections_Generic_List_long___ToArray(
                                       v7,
                                       (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v30 )
        {
          UserPresentBoxWindow__receivePresent(v30, (System_Int64_array *)presentTicketList, v34->fields.idx, 0, 0);
          return;
        }
      }
    }
LABEL_26:
    sub_1C32E7C(presentTicketList);
  }
  sub_1C3313C(presentTicketList);
  UserPresentListViewManager___ctor(v31, v32);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewManager__RequestListObject(
        UserPresentListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C36713 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__);
    sub_1C32C20(&Method_UserPresentListViewManager_OnMoveEnd__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    byte_4C36713 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C32E7C(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C32E7C(v11);
      UserPresentListViewObject__Init_40136848((UserPresentListViewObject_o *)current, mode, v10, delay, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewManager__RequestListObject_40135820(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C36714 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__);
    sub_1C32C20(&Method_UserPresentListViewManager_OnMoveEnd__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    byte_4C36714 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C32E7C(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C32E7C(v9);
      UserPresentListViewObject__Init_40136932((UserPresentListViewObject_o *)current, mode, v8, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


void UserPresentListViewManager__SetMode(
        UserPresentListViewManager_o *this,
        int32_t mode,
        UserPresentListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  UserPresentListViewManager__SetMode_40135620(this, mode, v6);
}


void UserPresentListViewManager__SetMode_40135620(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_4C36712 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4C36712 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1C32E7C(this);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    UserPresentListViewManager__RequestListObject_40135820(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 4;
    goto LABEL_8;
  }
}


void UserPresentListViewManager__SetMode_40135768(
        UserPresentListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  UserPresentListViewManager__SetMode_40135620(this, mode, v6);
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
  if ( (byte_4C36711 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1C32C20(&UserPresentListViewObject_TypeInfo);
    byte_4C36711 = 1;
  }
  if ( !obj
    || (naturalAligment = UserPresentListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UserPresentListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentListViewObject_TypeInfo )
  {
    sub_1C32E7C(this);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  UserPresentListViewObject__Init_40135496((UserPresentListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void UserPresentListViewManager__SetSortButtonImage(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v5; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v7; // x8
  System_String_o **v8; // x8
  struct ListViewSort_o *v9; // x8
  System_String_o **v10; // x8

  if ( (byte_4C36720 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_17521/*"btn_sort_up"*/);
    sub_1C32C20(&StringLiteral_17570/*"btn_txt_new"*/);
    sub_1C32C20(&StringLiteral_17577/*"btn_txt_old"*/);
    sub_1C32C20(&StringLiteral_17518/*"btn_sort_down"*/);
    byte_4C36720 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_24;
    v5 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v5 )
      goto LABEL_24;
    UILabel__set_text(v5, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v7 = this->fields.sort;
    if ( v7 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v8 = (System_String_o **)(v7->fields.isAscendingOrder ? &StringLiteral_17577/*"btn_txt_old"*/ : &StringLiteral_17570/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v8, 0);
        v9 = this->fields.sort;
        if ( v9 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            if ( v9->fields.isAscendingOrder )
              v10 = (System_String_o **)&StringLiteral_17518/*"btn_sort_down"*/;
            else
              v10 = (System_String_o **)&StringLiteral_17521/*"btn_sort_up"*/;
            UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_1C32E7C(sort);
  }
}


void UserPresentListViewManager___DlgForExpiredPresent_b__69_0(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *v4; // x20
  System_Action_o *v5; // x21

  if ( (byte_4C36725 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__);
    byte_4C36725 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0),
        v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v5,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__,
          0),
        !v4) )
  {
    sub_1C32E7C(Instance);
  }
  CommonUI__maskFadeout((CommonUI_o *)v4, 1, 0.5, v5, 0);
}


void UserPresentListViewManager___DlgForExpiredPresent_b__69_1(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  UserPresentBoxWindow_o *m_parent; // x0

  if ( (byte_4C36726 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C36726 = 1;
  }
  UserPresentListViewManager__DestroyList(this, method);
  m_parent = this->fields.m_parent;
  if ( !m_parent
    || (UserPresentBoxWindow__SetReDispFromExpiredPresent(m_parent, 0),
        (m_parent = (UserPresentBoxWindow_o *)this->fields.scrollView) == 0)
    || (UIScrollView__ResetPosition((UIScrollView_o *)m_parent, 0),
        (m_parent = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C32E7C(m_parent);
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

  if ( (byte_4C36704 & 1) == 0 )
  {
    sub_1C32C20(&UserPresentListViewManager_CallbackFunc_TypeInfo);
    byte_4C36704 = 1;
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
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3313C(v7);
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

  if ( (byte_4C36706 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C36706 = 1;
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
    v8 = sub_1C6CE78(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3313C(v7);
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

  if ( (byte_4C36708 & 1) == 0 )
  {
    sub_1C32C20(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    byte_4C36708 = 1;
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
    v8 = sub_1C6CE78(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3313C(v7);
  UserPresentListViewManager__remove_receivecCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_UserPresentListViewObject__o *UserPresentListViewManager__get_ClippingObjectList(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *v9; // x21
  ListViewItem_o *Item; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _BOOL8 v13; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C3670D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3670D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C32E7C(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v9 = Component_object;
      if ( !Component_object )
        sub_1C32E7C(0);
      Item = (ListViewItem_o *)UserPresentListViewObject__GetItem((UserPresentListViewObject_o *)Component_object, v8);
      if ( !Item )
        sub_1C32E7C(0);
      if ( Item->fields.isTermination )
      {
        v13 = ListViewManager__ClippingItem_43718444((ListViewManager_o *)this, Item, 0);
        if ( v13 )
        {
          if ( !v3 )
            sub_1C32E7C(v13);
          items = v3->fields._items;
          v15 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C32E7C(v13);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v9,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C32E7C(Item);
        items = v3->fields._items;
        v15 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C32E7C(Item);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v17 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v9;
        sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v9, v11, v12);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v3;
}


System_Collections_Generic_List_UserPresentListViewObject__o *UserPresentListViewManager__get_ObjectList(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3670C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3670C = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C32E7C(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C32E7C(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C32E7C(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v3;
}


ListViewSort_o *UserPresentListViewManager__get_SortInfo(const MethodInfo *method)
{
  UserPresentListViewManager_c *v1; // x0

  if ( (byte_4C36703 & 1) == 0 )
  {
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C36703 = 1;
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

  if ( (byte_4C36705 & 1) == 0 )
  {
    sub_1C32C20(&UserPresentListViewManager_CallbackFunc_TypeInfo);
    byte_4C36705 = 1;
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
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3313C(v7);
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

  if ( (byte_4C36707 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C36707 = 1;
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
    v8 = sub_1C6CE78(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3313C(v7);
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

  if ( (byte_4C36709 & 1) == 0 )
  {
    sub_1C32C20(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    byte_4C36709 = 1;
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
    v8 = sub_1C6CE78(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3313C(v7);
  UserPresentListViewManager__get_select_idx(v10, v11);
}


void UserPresentListViewManager__resetCheckStatus(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v4; // w9

  if ( (byte_4C36719 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4C36719 = 1;
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
    sub_1C32E7C(0);
  UserPresentBoxErrorDialog__setJumpType(dialog, type, 0);
}


void UserPresentListViewManager__set_expiredPresents(
        UserPresentListViewManager_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._expiredPresents_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._expiredPresents_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x2
  int32_t kind; // w8
  System_String_o *v8; // x1
  __int64 *v9; // x8

  if ( (byte_4C3671C & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11074/*"REJECT_NORMAL_TXT"*/);
    sub_1C32C20(&StringLiteral_11070/*"REJECT_ALL_TXT"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3671C = 1;
  }
  this->fields.receivecCallbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.receivecCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  kind = this->fields.kind;
  if ( !kind )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_11074/*"REJECT_NORMAL_TXT"*/;
    goto LABEL_12;
  }
  if ( (unsigned int)(kind - 1) <= 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_11070/*"REJECT_ALL_TXT"*/;
LABEL_12:
    v8 = LocalizationManager__Get((System_String_o *)*v9, 0);
    goto LABEL_13;
  }
  v8 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_13:
  UserPresentListViewManager__OpenNoticeDlg(this, v8, v6);
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

  if ( (byte_4C36718 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__IndexOf__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor___78010448);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&UserPresentListViewItem_TypeInfo);
    byte_4C36718 = 1;
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
  v8 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_58196164(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)checkedIdList,
    (const MethodInfo_37800C4 *)Method_System_Collections_Generic_List_long___ctor___78010448);
  m_parent = this->fields.itemList;
  if ( !m_parent )
LABEL_36:
    sub_1C32E7C(m_parent);
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
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !m_parent )
      goto LABEL_36;
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
           (const MethodInfo_3781CEC *)Method_System_Collections_Generic_List_long__Remove__) )
    {
      m_parent = this->fields.checkedIdList;
      if ( !m_parent )
        goto LABEL_36;
      v14 = System_Collections_Generic_List_long___IndexOf(
              (System_Collections_Generic_List_long__o *)m_parent,
              v12,
              (const MethodInfo_378146C *)Method_System_Collections_Generic_List_long__IndexOf__);
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
  sub_1C3313C(m_parent);
  UserPresentListViewManager__DestroyList(v21, v22);
}


void UserPresentListViewManager_CallbackFunc___ctor(
        UserPresentListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A76AA8;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A76A88;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A76A40;
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
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v6, callback, object);
}


void UserPresentListViewManager_CallbackFunc__EndInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A76B2C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76AE4;
}


System_IAsyncResult_o *UserPresentListViewManager_ReceiveCallbackFunc__BeginInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        bool isReceive,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isReceive;
  if ( (byte_4C36727 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    byte_4C36727 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void UserPresentListViewManager_ReceiveCallbackFunc__EndInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C36728 & 1) == 0 )
  {
    sub_1C32C20(&UserPresentListViewManager___c_TypeInfo);
    byte_4C36728 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(UserPresentListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserPresentListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentListViewManager___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)UserPresentListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  __int64 naturalAligment; // x9
  int64_t sortValue0; // x8
  int64_t v8; // x9
  UserPresentListViewManager___c_o *v10; // x0
  ListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C36729 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1C32C20(&UserPresentListViewItem_TypeInfo);
    byte_4C36729 = 1;
  }
  if ( !a )
    goto LABEL_12;
  naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( a->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo )
  {
    sortValue0 = a[1].fields.sortValue0;
    if ( !sortValue0 || !b )
      goto LABEL_12;
    if ( b->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo )
    {
      v8 = b[1].fields.sortValue0;
      if ( v8 )
        return *(_QWORD *)(sortValue0 + 88) - *(_DWORD *)(v8 + 88);
LABEL_12:
      sub_1C32E7C(this);
    }
  }
  else
  {
    sub_1C3313C(a);
  }
  sub_1C3313C(b);
  return UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(v10, v11, v12);
}


bool UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *obj,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x9
  int64_t sortValue0; // x8
  _DWORD *monitor; // x8
  UserPresentListViewManager___c_o *v8; // x0
  ListViewItem_o *v9; // x1
  ListViewItem_o *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_4C3672A & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1C32C20(&UserPresentListViewItem_TypeInfo);
    byte_4C3672A = 1;
  }
  if ( !obj )
    goto LABEL_11;
  naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo )
  {
    sortValue0 = obj[1].fields.sortValue0;
    if ( !sortValue0 )
      goto LABEL_11;
    if ( *(_DWORD *)(sortValue0 + 72) == 2 )
    {
      monitor = obj[1].monitor;
      if ( monitor )
        return monitor[12] == 24;
LABEL_11:
      sub_1C32E7C(this);
    }
    return 0;
  }
  else
  {
    sub_1C3313C(obj);
    return UserPresentListViewManager___c___GetAllPresentStrings_b__60_2(v8, v9, v10, v11);
  }
}


int32_t UserPresentListViewManager___c___GetAllPresentStrings_b__60_2(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *a,
        ListViewItem_o *b,
        const MethodInfo *method)
{
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

  if ( (byte_4C3672B & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1C32C20(&UserPresentListViewItem_TypeInfo);
    byte_4C3672B = 1;
  }
  if ( !a )
    goto LABEL_17;
  naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( a->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentListViewItem_TypeInfo )
  {
    goto LABEL_18;
  }
  this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_NameText(
                                               (UserPresentListViewItem_o *)a,
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
  result = System_String__CompareTo_63552892((System_String_o *)v8, (System_String_o *)this, 0);
  if ( result )
    return result;
  v10 = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( a->klass->_2.naturalAligment < (unsigned int)v10
    || (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[v10 - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_18:
    sub_1C3313C(a);
    goto LABEL_19;
  }
  v11 = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( b->klass->_2.naturalAligment >= (unsigned int)v11
    && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v11 - 1] == UserPresentListViewItem_TypeInfo )
  {
    this = (UserPresentListViewManager___c_o *)a[1].fields.sortValue2;
    if ( this )
      return System_String__CompareTo_63552892((System_String_o *)this, (System_String_o *)b[1].fields.sortValue2, 0);
LABEL_17:
    sub_1C32E7C(this);
  }
LABEL_19:
  sub_1C3313C(b);
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
  __int64 naturalAligment; // x9
  int64_t sortValue0; // x8
  int64_t v8; // x9
  UserPresentListViewManager___c__DisplayClass67_0_o *v10; // x0
  ListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C3672C & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1C32C20(&UserPresentListViewItem_TypeInfo);
    byte_4C3672C = 1;
  }
  if ( !a )
    goto LABEL_12;
  naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( a->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo )
  {
    sortValue0 = a[1].fields.sortValue0;
    if ( !sortValue0 || !b )
      goto LABEL_12;
    if ( b->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo )
    {
      v8 = b[1].fields.sortValue0;
      if ( v8 )
        return *(_QWORD *)(sortValue0 + 88) - *(_DWORD *)(v8 + 88);
LABEL_12:
      sub_1C32E7C(this);
    }
  }
  else
  {
    sub_1C3313C(a);
  }
  sub_1C3313C(b);
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
  const MethodInfo *v3; // x3
  UserPresentListViewManager___c__DisplayClass67_0_o *v5; // x19
  __int64 naturalAligment; // x10
  int64_t sortValue0; // x8
  CGThumbnailListItem_c *monitor; // x1
  CGThumbnailListItem_o *p_ticketItem; // x19
  struct ItemEntity_o *ticketItem; // t1

  v5 = this;
  if ( (byte_4C3672D & 1) == 0 )
  {
    this = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_1C32C20(&UserPresentListViewItem_TypeInfo);
    byte_4C3672D = 1;
  }
  if ( !obj
    || (naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentListViewItem_TypeInfo )
  {
    sub_1C32E7C(this);
  }
  sortValue0 = obj[1].fields.sortValue0;
  if ( !sortValue0 )
    return 1;
  if ( *(_DWORD *)(sortValue0 + 72) != 2 )
    return 1;
  monitor = (CGThumbnailListItem_c *)obj[1].monitor;
  if ( !monitor || LODWORD(monitor->_1.this_arg.data) != 24 || LODWORD(monitor->_1.name) != v5->fields.ticketId )
    return 1;
  ticketItem = v5->fields.ticketItem;
  p_ticketItem = (CGThumbnailListItem_o *)&v5->fields.ticketItem;
  HIDWORD(p_ticketItem[-1].fields._ThumbnailSpritePath_k__BackingField) += *(_DWORD *)(sortValue0 + 80);
  if ( !ticketItem )
  {
    p_ticketItem->klass = monitor;
    sub_1C32BC4(p_ticketItem, (int32_t)monitor, (int32_t)method, v3);
  }
  return 0;
}