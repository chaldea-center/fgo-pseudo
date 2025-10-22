void UserPresentListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C55AB4 & 1) == 0 )
  {
    sub_1C3E564(&ListViewSort_TypeInfo);
    sub_1C3E564(&UserPresentListViewManager_TypeInfo);
    sub_1C3E564(&StringLiteral_15240/*"UserPresent"*/);
    byte_4C55AB4 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C3E7B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_43894048(v1, (System_String_o *)StringLiteral_15240/*"UserPresent"*/, 1, 0, 0);
  UserPresentListViewManager_TypeInfo->static_fields->sortInfo = v1;
  sub_1C3E508((CGThumbnailListItem_o *)UserPresentListViewManager_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  __int64 v9; // x1
  int64_t m_parent; // x0
  System_Collections_Generic_IEnumerable_T__o *checkedIdList; // x22
  System_Collections_Generic_List_long__o *v12; // x21
  int max_length; // w8
  unsigned int v14; // w22
  Il2CppClass **v15; // x23
  Il2CppClass *v16; // x8
  UserPresentBoxEntity_o **v17; // x23
  Il2CppClass *v18; // t1
  UserPresentBoxEntity_o *v19; // x24
  UserPresentListViewItem_o *v20; // x23
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  __int64 v27; // x8
  struct System_Collections_Generic_List_long__o *v28; // x20
  int32_t v29; // w22
  const MethodInfo *v30; // x1
  il2cpp_array_size_t v31; // x8
  unsigned __int64 v32; // x21
  UserPresentBoxEntity_o *v33; // x23
  UserPresentListViewItem_o *v34; // x22
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8

  if ( (byte_4C55A9F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long___ctor___78136144);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C3E564(&UserPresentListViewItem_TypeInfo);
    byte_4C55A9F = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.selectPresentData = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectPresentData, 0, v5, v6);
  this->fields.presentIds = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.presentIds, 0, v7, v8);
  m_parent = (int64_t)this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_38;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 0, 0, 0);
  checkedIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v12 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_58314088(
      v12,
      checkedIdList,
      (const MethodInfo_379CD68 *)Method_System_Collections_Generic_List_long___ctor___78136144);
    if ( !presentList )
      goto LABEL_38;
    max_length = presentList->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( v14 < max_length )
      {
        v15 = &presentList->obj.klass + (int)v14;
        v18 = v15[4];
        v17 = (UserPresentBoxEntity_o **)(v15 + 4);
        v16 = v18;
        if ( !v18 || !v12 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v12,
                     (int64_t)v16->_1.namespaze,
                     (const MethodInfo_379E990 *)Method_System_Collections_Generic_List_long__Remove__);
        if ( v14 >= LODWORD(presentList->max_length) )
          goto LABEL_39;
        v19 = *v17;
        v20 = (UserPresentListViewItem_o *)sub_1C3E7B0(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v20, v14, v19, v21);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v24 = *(_QWORD *)(m_parent + 16);
        v25 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v24 )
          goto LABEL_38;
        v26 = *(int *)(m_parent + 24);
        if ( (unsigned int)v26 >= *(_DWORD *)(v24 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v20,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = v24 + 8 * v26;
          *(_DWORD *)(m_parent + 24) = v26 + 1;
          *(_QWORD *)(v27 + 32) = v20;
          sub_1C3E508((CGThumbnailListItem_o *)(v27 + 32), (int32_t)v20, v22, v23);
        }
        max_length = presentList->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_18;
      }
      goto LABEL_39;
    }
LABEL_18:
    if ( !v12 )
LABEL_38:
      sub_1C3E7C0(m_parent, v9);
    v28 = this->fields.checkedIdList;
    if ( v12->fields._size >= 1 )
    {
      v29 = 0;
      do
      {
        m_parent = System_Collections_Generic_List_long___get_Item(
                     v12,
                     v29,
                     (const MethodInfo_379D1A4 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !v28 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v28,
                     m_parent,
                     (const MethodInfo_379E990 *)Method_System_Collections_Generic_List_long__Remove__);
        v28 = this->fields.checkedIdList;
      }
      while ( ++v29 < v12->fields._size );
    }
    if ( !v28 )
      goto LABEL_38;
    if ( v28->fields._size >= 1 )
    {
      m_parent = (int64_t)this->fields.m_parent;
      if ( !m_parent )
        goto LABEL_38;
      UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 1, 1, 0);
      UserPresentListViewManager__updateCheckStatus(this, v30);
    }
  }
  else
  {
    if ( !presentList )
      goto LABEL_38;
    v31 = presentList->max_length;
    if ( (int)v31 >= 1 )
    {
      v32 = 0;
      while ( v32 < (unsigned int)v31 )
      {
        v33 = presentList->m_Items[v32];
        v34 = (UserPresentListViewItem_o *)sub_1C3E7B0(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v34, v32, v33, v35);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v38 = *(_QWORD *)(m_parent + 16);
        v39 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v38 )
          goto LABEL_38;
        v40 = *(int *)(m_parent + 24);
        if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v34,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = v38 + 8 * v40;
          *(_DWORD *)(m_parent + 24) = v40 + 1;
          *(_QWORD *)(v41 + 32) = v34;
          sub_1C3E508((CGThumbnailListItem_o *)(v41 + 32), (int32_t)v34, v36, v37);
        }
        LODWORD(v31) = presentList->max_length;
        if ( (__int64)++v32 >= (int)v31 )
          goto LABEL_37;
      }
LABEL_39:
      sub_1C3E7C8(m_parent, v9);
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

  if ( (byte_4C55A9A & 1) == 0 )
  {
    sub_1C3E564(&UserPresentListViewManager_TypeInfo);
    byte_4C55A9A = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v2 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v2->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1C3E7C0(0, v1);
  ListViewSort__DeleteContinueData(sortInfo, 0);
}


void UserPresentListViewManager__DestroyList(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C3E7C0(0, v3);
  ListViewSort__Save(sort, 0);
}


void UserPresentListViewManager__DlgForExpiredPresent(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v4; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C55AB3 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__);
    sub_1C3E564(&StringLiteral_10453/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/);
    byte_4C55AB3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_10453/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0);
  v5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, 0);
  if ( !Instance )
    sub_1C3E7C0(v6, v7);
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

  if ( (byte_4C55AAE & 1) == 0 )
  {
    sub_1C3E564(&System_Action_SceneList_Type__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_UserPresentListViewManager_EndNoticeDlg__);
    byte_4C55AAE = 1;
  }
  dialog = this->fields.dialog;
  v6 = (System_Action_T__o *)sub_1C3E7B0(System_Action_SceneList_Type__TypeInfo);
  System_Action_Int32Enum____ctor(v6, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0);
  if ( !dialog )
    goto LABEL_14;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(dialog, (System_Action_SceneList_Type__o *)v6, 0);
  if ( scene == -1 )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( CommonUI__IsActive_MasterMission((CommonUI_o *)Instance, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_1C3E7C0(Instance, v8);
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
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_object__o *NameText; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v13; // x20
  System_Comparison_T__o *v14; // x21
  Il2CppObject *v15; // x22
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x20
  System_Predicate_object__o *v20; // x21
  Il2CppObject *v21; // x22
  struct UserPresentListViewManager___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_object__o *v25; // x20
  int v26; // w8
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
  System_String_o *v38; // x23

  if ( (byte_4C55AAB & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&System_Comparison_ListViewItem__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem___ctor___78137024);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C3E564(&System_Text_StringBuilder_TypeInfo);
    sub_1C3E564(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__);
    sub_1C3E564(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__);
    sub_1C3E564(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__);
    sub_1C3E564(&UserPresentListViewManager___c_TypeInfo);
    sub_1C3E564(&UserPresentListViewItem_TypeInfo);
    sub_1C3E564(&StringLiteral_10458/*"PRESENT_INFO"*/);
    byte_4C55AAB = 1;
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
  v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_58412372(
    v8,
    itemList,
    (const MethodInfo_37B4D54 *)Method_System_Collections_Generic_List_ListViewItem___ctor___78137024);
  this->fields.presentAllSelectedList = (struct System_Collections_Generic_List_ListViewItem__o *)v8;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.presentAllSelectedList, (int32_t)v8, v9, v10);
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  v13 = this->fields.presentAllSelectedList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v14 = *(System_Comparison_T__o **)(*(_QWORD *)&NameText[4].fields._size + 24LL);
  if ( !v14 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v15 = **(Il2CppObject ***)&NameText[4].fields._size;
    v14 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(v14, v15, Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__, 0);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__60_0 = (struct System_Comparison_ListViewItem__o *)v14;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__60_0, (int32_t)v14, v17, v18);
  }
  if ( !v13 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_58421028(
    (System_Collections_Generic_List_object__o *)v13,
    v14,
    (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  v19 = *p_presentAllSelectedList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v20 = *(System_Predicate_object__o **)(*(_QWORD *)&NameText[4].fields._size + 32LL);
  if ( !v20 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v21 = **(Il2CppObject ***)&NameText[4].fields._size;
    v20 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_object____ctor(v20, v21, Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__, 0);
    v22 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v22->__9__60_1 = (struct System_Predicate_ListViewItem__o *)v20;
    sub_1C3E508((CGThumbnailListItem_o *)&v22->__9__60_1, (int32_t)v20, v23, v24);
  }
  if ( !v19 )
    goto LABEL_53;
  System_Collections_Generic_List_object___RemoveAll(
    v19,
    (System_Predicate_T__o *)v20,
    (const MethodInfo_37B6ABC *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  }
  v25 = *p_presentAllSelectedList;
  if ( !*p_presentAllSelectedList )
    goto LABEL_53;
  v11 = (const MethodInfo *)*(unsigned int *)(*(_QWORD *)&NameText[4].fields._size + 132LL);
  v26 = v25->fields._size;
  if ( v26 > (int)v11 )
  {
    System_Collections_Generic_List_object___RemoveRange(
      *p_presentAllSelectedList,
      (int32_t)v11,
      v26 - (_DWORD)v11,
      (const MethodInfo_37B6CCC *)Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    v25 = *p_presentAllSelectedList;
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
    v27 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(v27, v28, Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__, 0);
    v29 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v29->__9__60_2 = (struct System_Comparison_ListViewItem__o *)v27;
    sub_1C3E508((CGThumbnailListItem_o *)&v29->__9__60_2, (int32_t)v27, v30, v31);
  }
  if ( !v25 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_58421028(
    v25,
    v27,
    (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  v32 = (System_Text_StringBuilder_o *)sub_1C3E7B0(System_Text_StringBuilder_TypeInfo);
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
        System_Text_StringBuilder__Append_63723860(v32, 0xAu, 0);
      }
      NameText = *p_presentAllSelectedList;
      if ( !*p_presentAllSelectedList )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               NameText,
               v34,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
                                                                (System_String_o *)StringLiteral_10458/*"PRESENT_INFO"*/,
                                                                0);
      if ( !v37 )
        break;
      v38 = (System_String_o *)NameText;
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewItem__get_NameText(
                                                                (UserPresentListViewItem_o *)v37,
                                                                v11);
      if ( !v32 )
        break;
      NameText = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__AppendFormat_63727884(
                                                                v32,
                                                                v38,
                                                                (Il2CppObject *)NameText,
                                                                (Il2CppObject *)v37[12].klass,
                                                                0);
      if ( v33 == ++v34 )
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v32->klass->vtable._3_ToString.methodPtr)(
                                    v32,
                                    v32->klass->vtable._3_ToString.method);
    }
LABEL_53:
    sub_1C3E7C0(NameText, v11);
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

  if ( (byte_4C55AA0 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&UserPresentListViewItem_TypeInfo);
    byte_4C55AA0 = 1;
  }
  result = (UserPresentListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (UserPresentListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v8; // x1
  struct ListViewSort_o *sort; // x0

  if ( (byte_4C55A9E & 1) == 0 )
  {
    sub_1C3E564(&UserPresentListViewManager_TypeInfo);
    byte_4C55A9E = 1;
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v7, v2, v3);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C3E7C0(0, v8);
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

  if ( (byte_4C55A9B & 1) == 0 )
  {
    sub_1C3E564(&UserPresentListViewManager_TypeInfo);
    byte_4C55A9B = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v2 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v2->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1C3E7C0(0, v1);
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
  struct ItemEntity_o *itemEnt; // x8
  int64_t endedAt; // x24
  Il2CppObject *MasterData_object; // x24
  BalanceConfig_c *v24; // x0
  int v25; // w24
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  const MethodInfo *v30; // x1
  int32_t v31; // w24
  BalanceConfig_c *v32; // x0
  _QWORD *v33; // x8
  int32_t PresentBoxCheckMax; // w25
  intptr_t m_CachedPtr; // x8
  _QWORD *v36; // x9
  __int64 m_CancellationTokenSource_low; // x10
  BalanceConfig_c *v38; // x8
  int32_t v39; // w22
  const MethodInfo *v40; // x3
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  Il2CppObject *v42; // [xsp+8h] [xbp-58h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_4C55AA7 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (UserPresentListViewManager_o *)sub_1C3E564(&Method_UserPresentListViewManager_OnClickListCheck__);
    byte_4C55AA7 = 1;
  }
  entity = 0;
  v42 = 0;
  if ( !v3 )
    goto LABEL_81;
  Item = UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = Item;
  sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.selectItem, (int32_t)Item, v7, v8);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_81;
  usrPresentEnt = selectItem->fields.usrPresentEnt;
  p_selectPresentData = (UserPresentListViewManager_o **)&v4->fields.selectPresentData;
  v4->fields.selectPresentData = usrPresentEnt;
  sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.selectPresentData, (int32_t)usrPresentEnt, v9, v10);
  p_checkedIdList = (UserPresentListViewManager_o **)&v4->fields.checkedIdList;
  if ( !v4->fields.checkedIdList )
  {
    v15 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v15,
      (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
    *p_checkedIdList = (UserPresentListViewManager_o *)v15;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.checkedIdList, (int32_t)v15, v16, v17);
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
                                                 (const MethodInfo_379D1A4 *)Method_System_Collections_Generic_List_long__get_Item__);
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
      v28 = Method_UserPresentListViewManager_OnClickListCheck__;
      if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1C3E57C(Method_UserPresentListViewManager_OnClickListCheck__);
      v29 = (System_Reflection_MethodBase_o *)sub_1C3E548(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0, 0);
      this = *p_checkedIdList;
      if ( *p_checkedIdList )
      {
        System_Collections_Generic_List_long___RemoveAt(
          (System_Collections_Generic_List_long__o *)this,
          v20,
          (const MethodInfo_379EC14 *)Method_System_Collections_Generic_List_long__RemoveAt__);
        UserPresentListViewManager__updateCheckStatus(v4, v30);
        return;
      }
LABEL_81:
      sub_1C3E7C0(this, obj);
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
        this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_81;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C50AE2 )
        {
          sub_1C3E564(&NetworkManager_TypeInfo);
          byte_4C50AE2 = 1;
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
          v24 = BalanceConfig_TypeInfo;
          v25 = LODWORD((*p_selectPresentData)->fields.scrollView) + entity->fields.num;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v24 = BalanceConfig_TypeInfo;
          }
          if ( v25 > v24->static_fields->UserItemMax )
            goto LABEL_40;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ItemMaster___);
          if ( !*p_selectPresentData || !this )
            goto LABEL_81;
          this = (UserPresentListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   &v42,
                                                   HIDWORD((*p_selectPresentData)->fields.sortOrderSprite),
                                                   (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (UserPresentListViewManager_o *)v42;
            if ( !v42 )
              goto LABEL_81;
            this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v42, 0);
            if ( (int)this >= 1 )
            {
              this = (UserPresentListViewManager_o *)v42;
              if ( !v42 )
                goto LABEL_81;
              this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v42, 0);
              if ( v25 > (int)this )
              {
LABEL_40:
                v26 = Method_UserPresentListViewManager_OnClickListCheck__;
                if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
                  v26 = (_QWORD *)sub_1C3E57C(Method_UserPresentListViewManager_OnClickListCheck__);
                v27 = (System_Reflection_MethodBase_o *)sub_1C3E548(v26, v26[4]);
                goto LABEL_68;
              }
            }
          }
        }
LABEL_57:
        if ( !*p_checkedIdList )
          goto LABEL_81;
        v31 = (int32_t)(*p_checkedIdList)->fields.m_CancellationTokenSource;
        v32 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v32 = BalanceConfig_TypeInfo;
        }
        v33 = Method_UserPresentListViewManager_OnClickListCheck__;
        PresentBoxCheckMax = v32->static_fields->PresentBoxCheckMax;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
          v33 = (_QWORD *)sub_1C3E57C(Method_UserPresentListViewManager_OnClickListCheck__);
        v27 = (System_Reflection_MethodBase_o *)sub_1C3E548(v33, v33[4]);
        if ( v31 < PresentBoxCheckMax )
        {
          OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0, 0);
          if ( !*p_selectItem )
            goto LABEL_81;
          this = *p_checkedIdList;
          if ( !*p_checkedIdList )
            goto LABEL_81;
          obj = (UserPresentListViewObject_o *)(*p_selectItem)->fields.presentId;
          m_CachedPtr = this->fields.m_CachedPtr;
          v36 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_81;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              (int64_t)obj,
              *(const MethodInfo_379D494 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            this = *p_checkedIdList;
            if ( !*p_checkedIdList )
              goto LABEL_81;
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(m_CachedPtr + 8 * m_CancellationTokenSource_low + 32) = obj;
          }
          v38 = BalanceConfig_TypeInfo;
          v39 = (int32_t)this->fields.m_CancellationTokenSource;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v38 = BalanceConfig_TypeInfo;
          }
          if ( v39 < v38->static_fields->PresentBoxCheckMax )
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
              v40);
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
        OverwriteAssetSoundName__PlaySystemSe(v27, 1, 0, 0);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UserPresentListViewItem_o *selectItem; // x8
  struct UserPresentBoxEntity_o *usrPresentEnt; // x1
  struct UserPresentBoxEntity_o **p_selectPresentData; // x21
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x1
  struct ItemEntity_o *itemEnt; // x8
  __int64 endedAt; // x22
  struct ItemEntity_o *v20; // x8
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  const MethodInfo *v23; // x2
  struct ItemEntity_o *v24; // x8
  Il2CppObject *MasterData_object; // x22
  BalanceConfig_c *v26; // x0
  int32_t v27; // w22
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  const MethodInfo *v30; // x2
  UserPresentListViewManager___c_c *v31; // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *_9__55_0; // x20
  Il2CppObject *v33; // x21
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  CGThumbnailListItem_o *p__9__55_0; // x0
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  UserPresentListViewManager___c_c *v41; // x0
  Il2CppObject *v42; // x21
  const MethodInfo *v43; // x3
  struct UserPresentListViewManager___c_StaticFields *v44; // x0
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  System_Collections_Generic_List_long__o *v47; // x21
  UserPresentListViewManager_o **p_presentIds; // x20
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct UserPresentListViewItem_o *v51; // x8
  intptr_t m_CachedPtr; // x8
  _QWORD *v53; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const MethodInfo *v55; // x2
  Il2CppObject *v56; // [xsp+8h] [xbp-48h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_4C55AA6 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C3E564(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_UserPresentListViewManager___c__OnClickListView_b__55_0__);
    sub_1C3E564(&Method_UserPresentListViewManager___c__OnClickListView_b__55_1__);
    sub_1C3E564(&UserPresentListViewManager___c_TypeInfo);
    this = (UserPresentListViewManager_o *)sub_1C3E564(&Method_UserPresentListViewManager_OnClickListView__);
    byte_4C55AA6 = 1;
  }
  entity = 0;
  v56 = 0;
  if ( !v3 )
    goto LABEL_87;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_87;
  if ( *(&this->fields.execObjectExtraFlag + 2) )
    return;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
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
  Item = UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = Item;
  sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.selectItem, (int32_t)Item, v8, v9);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_87;
  usrPresentEnt = selectItem->fields.usrPresentEnt;
  p_selectPresentData = &v4->fields.selectPresentData;
  v4->fields.selectPresentData = usrPresentEnt;
  sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.selectPresentData, (int32_t)usrPresentEnt, v10, v11);
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
      v20 = (*p_selectItem)->fields.itemEnt;
      if ( !v20 )
        goto LABEL_87;
      if ( v20->fields.type == 24 )
      {
        v21 = Method_UserPresentListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v21 = (_QWORD *)sub_1C3E57C(Method_UserPresentListViewManager_OnClickListView__);
        v22 = (System_Reflection_MethodBase_o *)sub_1C3E548(v21, v21[4]);
        OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0);
        if ( *p_selectItem )
        {
          v24 = (*p_selectItem)->fields.itemEnt;
          if ( v24 )
          {
            UserPresentListViewManager__OpenSelectableDialog(v4, v24->fields.id, v23);
            return;
          }
        }
        goto LABEL_87;
      }
      this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_87;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
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
        v26 = BalanceConfig_TypeInfo;
        v27 = (*p_selectPresentData)->fields.num + entity->fields.num;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v26 = BalanceConfig_TypeInfo;
        }
        if ( v27 > v26->static_fields->UserItemMax )
        {
          v28 = Method_UserPresentListViewManager_OnClickListView__;
          if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
            v28 = (_QWORD *)sub_1C3E57C(Method_UserPresentListViewManager_OnClickListView__);
          v29 = (System_Reflection_MethodBase_o *)sub_1C3E548(v28, v28[4]);
          OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0, 0);
          v31 = UserPresentListViewManager___c_TypeInfo;
          if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
            v31 = UserPresentListViewManager___c_TypeInfo;
          }
          _9__55_0 = v31->static_fields->__9__55_0;
          if ( _9__55_0 )
            goto LABEL_56;
          if ( !v31->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v31);
            v31 = UserPresentListViewManager___c_TypeInfo;
          }
          v33 = (Il2CppObject *)v31->static_fields->__9;
          _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1C3E7B0(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
          UserPresentListViewManager_ReceiveCallbackFunc___ctor(
            _9__55_0,
            v33,
            Method_UserPresentListViewManager___c__OnClickListView_b__55_0__,
            v34);
          static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__55_0 = _9__55_0;
          p__9__55_0 = (CGThumbnailListItem_o *)&static_fields->__9__55_0;
LABEL_55:
          sub_1C3E508(p__9__55_0, (int32_t)_9__55_0, v35, v36);
LABEL_56:
          UserPresentListViewManager__showErrorResultDlg(v4, _9__55_0, v30);
          return;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !this )
          goto LABEL_87;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               &v56,
               (*p_selectPresentData)->fields.objectId,
               (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          this = (UserPresentListViewManager_o *)v56;
          if ( !v56 )
            goto LABEL_87;
          if ( ItemEntity__GetMaxNum((ItemEntity_o *)v56, 0) >= 1 )
          {
            this = (UserPresentListViewManager_o *)v56;
            if ( !v56 )
              goto LABEL_87;
            if ( v27 > ItemEntity__GetMaxNum((ItemEntity_o *)v56, 0) )
            {
              v39 = Method_UserPresentListViewManager_OnClickListView__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
                v39 = (_QWORD *)sub_1C3E57C(Method_UserPresentListViewManager_OnClickListView__);
              v40 = (System_Reflection_MethodBase_o *)sub_1C3E548(v39, v39[4]);
              OverwriteAssetSoundName__PlaySystemSe(v40, 0, 0, 0);
              v41 = UserPresentListViewManager___c_TypeInfo;
              if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
                v41 = UserPresentListViewManager___c_TypeInfo;
              }
              _9__55_0 = v41->static_fields->__9__55_1;
              if ( _9__55_0 )
                goto LABEL_56;
              if ( !v41->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v41);
                v41 = UserPresentListViewManager___c_TypeInfo;
              }
              v42 = (Il2CppObject *)v41->static_fields->__9;
              _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1C3E7B0(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
              UserPresentListViewManager_ReceiveCallbackFunc___ctor(
                _9__55_0,
                v42,
                Method_UserPresentListViewManager___c__OnClickListView_b__55_1__,
                v43);
              v44 = UserPresentListViewManager___c_TypeInfo->static_fields;
              v44->__9__55_1 = _9__55_0;
              p__9__55_0 = (CGThumbnailListItem_o *)&v44->__9__55_1;
              goto LABEL_55;
            }
          }
        }
      }
    }
    v45 = Method_UserPresentListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v45 = (_QWORD *)sub_1C3E57C(Method_UserPresentListViewManager_OnClickListView__);
    v46 = (System_Reflection_MethodBase_o *)sub_1C3E548(v45, v45[4]);
    OverwriteAssetSoundName__PlaySystemSe(v46, 8, 0, 0);
    if ( *p_selectItem )
    {
      v4->fields._select_idx_k__BackingField = (*p_selectItem)->fields.index;
      v47 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v47,
        (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
      p_presentIds = (UserPresentListViewManager_o **)&v4->fields.presentIds;
      v4->fields.presentIds = v47;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.presentIds, (int32_t)v47, v49, v50);
      v51 = v4->fields.selectItem;
      if ( v51 )
      {
        obj = (UserPresentListViewObject_o *)v51->fields.presentId;
        if ( (__int64)obj >= 1 )
        {
          this = *p_presentIds;
          if ( !*p_presentIds )
            goto LABEL_87;
          m_CachedPtr = this->fields.m_CachedPtr;
          v53 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_87;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              (int64_t)obj,
              *(const MethodInfo_379D494 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
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
                                                   (const MethodInfo_379EF4C *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v4->fields.m_parent )
          {
            UserPresentBoxWindow__receivePresent(v4->fields.m_parent, (System_Int64_array *)this, 0, 0, 0);
            UserPresentListViewManager__SetMode_40279976(v4, 2, v55);
            return;
          }
        }
      }
    }
LABEL_87:
    sub_1C3E7C0(this, obj);
  }
LABEL_14:
  v15 = Method_UserPresentListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1C3E57C(Method_UserPresentListViewManager_OnClickListView__);
  v16 = (System_Reflection_MethodBase_o *)sub_1C3E548(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
  UserPresentListViewManager__DlgForExpiredPresent(v4, v17);
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

  if ( (byte_4C55AAF & 1) == 0 )
  {
    sub_1C3E564(&Method_UserPresentListViewManager_OnClickSortAscendingOrder__);
    byte_4C55AAF = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_UserPresentListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_UserPresentListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C3E7C0(v5, v6);
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
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C55AA5 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C55AA5 = 1;
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
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1C3E7C0(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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

  if ( (byte_4C55AAD & 1) == 0 )
  {
    sub_1C3E564(&System_Action_SceneList_Type__TypeInfo);
    sub_1C3E564(&Method_UserPresentListViewManager_EndNoticeDlg__);
    byte_4C55AAD = 1;
  }
  dialog = this->fields.dialog;
  if ( !dialog
    || (UserPresentBoxErrorDialog__Open(dialog, msg, 0),
        v6 = this->fields.dialog,
        v7 = (System_Action_T__o *)sub_1C3E7B0(System_Action_SceneList_Type__TypeInfo),
        System_Action_Int32Enum____ctor(v7, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0),
        !v6) )
  {
    sub_1C3E7C0(dialog, msg);
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
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Collections_Generic_List_ListViewItem__o *v18; // x22
  System_Predicate_object__o *v19; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v20; // x21
  System_Comparison_T__o *v21; // x22
  Il2CppObject *v22; // x23
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4C55AB1 & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_ListViewItem__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem___ctor___78137024);
    sub_1C3E564(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C3E564(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C3E564(&Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__);
    sub_1C3E564(&Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__);
    sub_1C3E564(&UserPresentListViewManager___c__DisplayClass67_0_TypeInfo);
    sub_1C3E564(&UserPresentListViewManager___c_TypeInfo);
    byte_4C55AB1 = 1;
  }
  v5 = sub_1C3E7B0(UserPresentListViewManager___c__DisplayClass67_0_TypeInfo);
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
  v13 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_58412372(
    v13,
    itemList,
    (const MethodInfo_37B4D54 *)Method_System_Collections_Generic_List_ListViewItem___ctor___78137024);
  this->fields.presentTicketList = (struct System_Collections_Generic_List_ListViewItem__o *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.presentTicketList, (int32_t)v13, v14, v15);
  *(_DWORD *)(v5 + 20) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), 0, v16, v17);
  v18 = this->fields.presentTicketList;
  v19 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v5,
    Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__,
    0);
  if ( !v18 )
    goto LABEL_18;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v18,
    (System_Predicate_T__o *)v19,
    (const MethodInfo_37B6ABC *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  selectDialog = UserPresentListViewManager___c_TypeInfo;
  v20 = this->fields.presentTicketList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    selectDialog = UserPresentListViewManager___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)selectDialog + 23) + 48LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)selectDialog + 56) )
    {
      j_il2cpp_runtime_class_init_0(selectDialog);
      selectDialog = UserPresentListViewManager___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)selectDialog + 23);
    v21 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__, 0);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__67_1 = (struct System_Comparison_ListViewItem__o *)v21;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__67_1, (int32_t)v21, v24, v25);
  }
  if ( !v20
    || (System_Collections_Generic_List_object___Sort_58421028(
          (System_Collections_Generic_List_object__o *)v20,
          v21,
          (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_ListViewItem__Sort__),
        (selectDialog = this->fields.selectDialog) == 0) )
  {
LABEL_18:
    sub_1C3E7C0(selectDialog, v7);
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
  __int64 v9; // x1
  __int64 v10; // x8
  System_Collections_Generic_List_object__o *v11; // x0
  _QWORD *v12; // x25
  _QWORD *v13; // x26
  _BOOL8 v14; // x0
  UserPresentListViewItem_c *v15; // x1
  UserPresentListViewItem_o *current; // x23
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_long__o *checkedIdList; // x0
  UserPresentBoxEntity_o *usrPresentEnt; // x0
  _BOOL8 IsExpired; // x0
  const MethodInfo *v21; // x1
  struct UserPresentBoxEntity_o *v22; // x9
  struct ItemEntity_o *itemEnt; // x9
  struct System_Collections_Generic_List_long__o **v24; // x19
  _QWORD *v25; // x20
  _QWORD *v26; // x26
  int64_t endedAt; // x25
  bool v28; // cc
  Il2CppObject *NameText; // x0
  const MethodInfo *v30; // x1
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x1
  struct System_Object_array *v35; // x8
  __int64 v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_long__o *v39; // x0
  int64_t presentId; // x1
  struct System_Int64_array *items; // x8
  __int64 v42; // x9
  __int64 size; // x10
  int32_t v44; // w1
  CGThumbnailListItem_o *p_expiredPresents_k__BackingField; // x22
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_String_o *klass; // x23
  Il2CppObject *Item; // x0
  System_String_o *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C55AAA & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&UserPresentListViewItem_TypeInfo);
    sub_1C3E564(&StringLiteral_15814/*"["*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_16068/*"]"*/);
    byte_4C55AAA = 1;
  }
  memset(&v55, 0, sizeof(v55));
  this->fields.kind = kind;
  v4 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v4,
    (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = &this->fields.presentIds;
  this->fields.presentIds = v4;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.presentIds, (int32_t)v4, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  v10 = 192;
  if ( kind == 1 )
    v10 = 432;
  v11 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v10);
  if ( !v11 )
    goto LABEL_62;
  v12 = &Method_System_Collections_Generic_List_string__Add__;
  v13 = &Method_System_Collections_Generic_List_long__Add__;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    v11,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v55 = v54;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v14 )
      break;
    current = (UserPresentListViewItem_o *)v55.fields._current;
    if ( v55.fields._current )
    {
      v15 = UserPresentListViewItem_TypeInfo;
      naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
      if ( v55.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UserPresentListViewItem_c *)v55.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentListViewItem_TypeInfo )
      {
        sub_1C3EA80(v55.fields._current);
LABEL_52:
        sub_1C3E7C0(IsExpired, v21);
      }
    }
    switch ( kind )
    {
      case 1:
        if ( !v55.fields._current )
          sub_1C3E7C0(v14, v15);
        goto LABEL_23;
      case 2:
        if ( !v55.fields._current )
          sub_1C3E7C0(v14, v15);
        if ( !Gift__IsServant_40473420((int32_t)v55.fields._current[11].klass, 0)
          && !Gift__IsCommandCode_40473812(current->fields.giftType, 0) )
        {
          goto LABEL_23;
        }
        break;
      case 3:
        if ( !v55.fields._current )
          sub_1C3E7C0(v14, v15);
        checkedIdList = this->fields.checkedIdList;
        if ( !checkedIdList )
          sub_1C3E7C0(0, v15);
        if ( System_Collections_Generic_List_long___Contains(
               checkedIdList,
               (int64_t)v55.fields._current[10].monitor,
               (const MethodInfo_379D80C *)Method_System_Collections_Generic_List_long__Contains__) )
        {
LABEL_23:
          usrPresentEnt = current->fields.usrPresentEnt;
          if ( !usrPresentEnt )
            sub_1C3E7C0(0, v15);
          IsExpired = UserPresentBoxEntity__IsExpired(usrPresentEnt, 0, 0);
          v22 = current->fields.usrPresentEnt;
          if ( !v22 )
            goto LABEL_52;
          if ( v22->fields.giftType == 2 )
          {
            itemEnt = current->fields.itemEnt;
            if ( !itemEnt )
              sub_1C3E7C0(IsExpired, v21);
            if ( itemEnt->fields.type != 24 )
            {
              if ( IsExpired )
                goto LABEL_33;
              v24 = p_presentIds;
              v25 = v13;
              v26 = v12;
              endedAt = itemEnt->fields.endedAt;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v28 = endedAt <= NetworkManager__getTime(0);
              v12 = v26;
              v13 = v25;
              p_presentIds = v24;
              if ( v28 )
                goto LABEL_33;
LABEL_39:
              v39 = *p_presentIds;
              if ( !*p_presentIds )
                sub_1C3E7C0(0, v21);
              presentId = current->fields.presentId;
              items = v39->fields._items;
              v42 = *v13;
              ++v39->fields._version;
              if ( !items )
                sub_1C3E7C0(v39, presentId);
              size = v39->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v39,
                  presentId,
                  *(const MethodInfo_379D494 **)(*(_QWORD *)(*(_QWORD *)(v42 + 32) + 192LL) + 112LL));
              }
              else
              {
                v39->fields._size = size + 1;
                items->m_Items[size] = presentId;
              }
            }
          }
          else
          {
            if ( !IsExpired )
              goto LABEL_39;
LABEL_33:
            NameText = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, v21);
            if ( !v8 )
              sub_1C3E7C0(NameText, NameText);
            if ( !System_Collections_Generic_List_object___Contains(
                    v8,
                    NameText,
                    (const MethodInfo_37B57F0 *)Method_System_Collections_Generic_List_string__Contains__) )
            {
              v31 = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, v30);
              v34 = v31;
              v35 = v8->fields._items;
              v36 = *v12;
              ++v8->fields._version;
              if ( !v35 )
                sub_1C3E7C0(v31, v31);
              v37 = v8->fields._size;
              if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  v31,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(*(_QWORD *)(v36 + 32) + 192LL) + 112LL));
              }
              else
              {
                v38 = &v35->obj.klass + v37;
                v8->fields._size = v37 + 1;
                v38[4] = (Il2CppClass *)v34;
                sub_1C3E508((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v34, v32, v33);
              }
            }
          }
        }
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v44 = StringLiteral_1/*""*/;
  p_expiredPresents_k__BackingField = (CGThumbnailListItem_o *)&this->fields._expiredPresents_k__BackingField;
  this->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._expiredPresents_k__BackingField, v44, v46, v47);
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
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
      v50 = System_String__Concat_63676720(
              klass,
              (System_String_o *)StringLiteral_15814/*"["*/,
              (System_String_o *)Item,
              (System_String_o *)StringLiteral_16068/*"]"*/,
              0);
      p_expiredPresents_k__BackingField->klass = (CGThumbnailListItem_c *)v50;
      sub_1C3E508(p_expiredPresents_k__BackingField, (int32_t)v50, v51, v52);
      System_Collections_Generic_List_object___RemoveAt(
        v8,
        0,
        (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_string__RemoveAt__);
    }
    while ( v8->fields._size > 0 );
  }
  v11 = (System_Collections_Generic_List_object__o *)*p_presentIds;
  if ( !*p_presentIds
    || (v11 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_long___ToArray(
                                                             (System_Collections_Generic_List_long__o *)v11,
                                                             (const MethodInfo_379EF4C *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.m_parent) )
  {
LABEL_62:
    sub_1C3E7C0(v11, v9);
  }
  UserPresentBoxWindow__receivePresent(this->fields.m_parent, (System_Int64_array *)v11, 0, 0, 0);
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
  const MethodInfo *v29; // x3
  UserPresentBoxWindow_o *v30; // x20
  UserPresentListViewManager_o *v31; // x0
  const MethodInfo *v32; // x1
  int32_t selectNum; // [xsp+4h] [xbp-6Ch]
  ItemSelectEntity_o *v34; // [xsp+8h] [xbp-68h]

  if ( (byte_4C55AB2 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&UserPresentListViewItem_TypeInfo);
    sub_1C3E564(&StringLiteral_15814/*"["*/);
    sub_1C3E564(&StringLiteral_16068/*"]"*/);
    byte_4C55AB2 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
  presentTicketList = (int64_t)this->fields.presentTicketList;
  if ( !presentTicketList || !selectItm )
    goto LABEL_26;
  v10 = *(_DWORD *)(presentTicketList + 24);
  v34 = selectItm;
  selectNum = num;
  if ( v10 < 1 || (v11 = selectItm->fields.requireNum * num, v11 < 1) )
  {
    if ( v7 )
    {
LABEL_28:
      m_parent = this->fields.m_parent;
      presentTicketList = (int64_t)System_Collections_Generic_List_long___ToArray(
                                     v7,
                                     (const MethodInfo_379EF4C *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( m_parent )
      {
        UserPresentBoxWindow__receivePresent(
          m_parent,
          (System_Int64_array *)presentTicketList,
          v34->fields.idx,
          selectNum,
          0);
        UserPresentListViewManager__SetMode_40279976(this, 2, v24);
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
                                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        *(const MethodInfo_379D494 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
                                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      v27 = System_String__Concat_63674716(
              (System_String_o *)StringLiteral_15814/*"["*/,
              *(System_String_o **)(v26 + 24),
              (System_String_o *)StringLiteral_16068/*"]"*/,
              0);
      this->fields._expiredPresents_k__BackingField = v27;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields._expiredPresents_k__BackingField, (int32_t)v27, v28, v29);
      if ( v7 )
      {
        v30 = this->fields.m_parent;
        presentTicketList = (int64_t)System_Collections_Generic_List_long___ToArray(
                                       v7,
                                       (const MethodInfo_379EF4C *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v30 )
        {
          UserPresentBoxWindow__receivePresent(v30, (System_Int64_array *)presentTicketList, v34->fields.idx, 0, 0);
          return;
        }
      }
    }
LABEL_26:
    sub_1C3E7C0(presentTicketList, v8);
  }
  sub_1C3EA80(presentTicketList);
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
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C55AA3 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__);
    sub_1C3E564(&Method_UserPresentListViewManager_OnMoveEnd__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C55AA3 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C3E7C0(v12, v13);
      UserPresentListViewObject__Init_40281204((UserPresentListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewManager__RequestListObject_40280176(
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

  if ( (byte_4C55AA4 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__);
    sub_1C3E564(&Method_UserPresentListViewManager_OnMoveEnd__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C55AA4 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C3E7C0(v10, v11);
      UserPresentListViewObject__Init_40281288((UserPresentListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  UserPresentListViewManager__SetMode_40279976(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewManager__SetMode_40279976(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_4C55AA2 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4C55AA2 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1C3E7C0(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    UserPresentListViewManager__RequestListObject_40280176(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 4;
    goto LABEL_8;
  }
}


void UserPresentListViewManager__SetMode_40280124(
        UserPresentListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  UserPresentListViewManager__SetMode_40279976(this, mode, v6);
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
  if ( (byte_4C55AA1 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1C3E564(&UserPresentListViewObject_TypeInfo);
    byte_4C55AA1 = 1;
  }
  if ( !obj
    || (naturalAligment = UserPresentListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UserPresentListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentListViewObject_TypeInfo )
  {
    sub_1C3E7C0(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  UserPresentListViewObject__Init_40279852((UserPresentListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4C55AB0 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_17540/*"btn_sort_up"*/);
    sub_1C3E564(&StringLiteral_17589/*"btn_txt_new"*/);
    sub_1C3E564(&StringLiteral_17596/*"btn_txt_old"*/);
    sub_1C3E564(&StringLiteral_17537/*"btn_sort_down"*/);
    byte_4C55AB0 = 1;
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
        v9 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17596/*"btn_txt_old"*/ : &StringLiteral_17589/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v9, 0);
        v10 = this->fields.sort;
        if ( v10 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            if ( v10->fields.isAscendingOrder )
              v11 = (System_String_o **)&StringLiteral_17537/*"btn_sort_down"*/;
            else
              v11 = (System_String_o **)&StringLiteral_17540/*"btn_sort_up"*/;
            UISprite__set_spriteName((UISprite_o *)sort, *v11, 0);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_1C3E7C0(sort, v4);
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

  if ( (byte_4C55AB5 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__);
    byte_4C55AB5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0),
        v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__,
          0),
        !v5) )
  {
    sub_1C3E7C0(Instance, v4);
  }
  CommonUI__maskFadeout((CommonUI_o *)v5, 1, 0.5, v6, 0);
}


void UserPresentListViewManager___DlgForExpiredPresent_b__69_1(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UserPresentBoxWindow_o *m_parent; // x0

  if ( (byte_4C55AB6 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C55AB6 = 1;
  }
  UserPresentListViewManager__DestroyList(this, method);
  m_parent = this->fields.m_parent;
  if ( !m_parent
    || (UserPresentBoxWindow__SetReDispFromExpiredPresent(m_parent, 0),
        (m_parent = (UserPresentBoxWindow_o *)this->fields.scrollView) == 0)
    || (UIScrollView__ResetPosition((UIScrollView_o *)m_parent, 0),
        (m_parent = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C3E7C0(m_parent, v3);
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

  if ( (byte_4C55A94 & 1) == 0 )
  {
    sub_1C3E564(&UserPresentListViewManager_CallbackFunc_TypeInfo);
    byte_4C55A94 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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

  if ( (byte_4C55A96 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C55A96 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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

  if ( (byte_4C55A98 & 1) == 0 )
  {
    sub_1C3E564(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    byte_4C55A98 = 1;
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
    v8 = sub_1C787BC(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C55A9D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C55A9D = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C3E7C0(0, v10);
      Item = (ListViewItem_o *)UserPresentListViewObject__GetItem((UserPresentListViewObject_o *)Component_object, v10);
      if ( !Item )
        sub_1C3E7C0(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43876032((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C3E7C0(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C3E7C0(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C3E7C0(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C3E7C0(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C3E508((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C55A9C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C55A9C = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C3E7C0(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C3E7C0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v3;
}


ListViewSort_o *UserPresentListViewManager__get_SortInfo(const MethodInfo *method)
{
  UserPresentListViewManager_c *v1; // x0

  if ( (byte_4C55A93 & 1) == 0 )
  {
    sub_1C3E564(&UserPresentListViewManager_TypeInfo);
    byte_4C55A93 = 1;
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

  if ( (byte_4C55A95 & 1) == 0 )
  {
    sub_1C3E564(&UserPresentListViewManager_CallbackFunc_TypeInfo);
    byte_4C55A95 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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

  if ( (byte_4C55A97 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C55A97 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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

  if ( (byte_4C55A99 & 1) == 0 )
  {
    sub_1C3E564(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    byte_4C55A99 = 1;
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
    v8 = sub_1C787BC(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
  UserPresentListViewManager__get_select_idx(v10, v11);
}


void UserPresentListViewManager__resetCheckStatus(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v4; // w9

  if ( (byte_4C55AA9 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4C55AA9 = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v4 = checkedIdList->fields._version + 1;
    checkedIdList->fields._size = 0;
    checkedIdList->fields._version = v4;
  }
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewManager__setJumpType(
        UserPresentListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *dialog; // x0

  dialog = this->fields.dialog;
  if ( !dialog )
    sub_1C3E7C0(0, *(_QWORD *)&type);
  UserPresentBoxErrorDialog__setJumpType(dialog, type, 0);
}


void UserPresentListViewManager__set_expiredPresents(
        UserPresentListViewManager_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._expiredPresents_k__BackingField = value;
  sub_1C3E508(
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

  if ( (byte_4C55AAC & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11077/*"REJECT_NORMAL_TXT"*/);
    sub_1C3E564(&StringLiteral_11073/*"REJECT_ALL_TXT"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C55AAC = 1;
  }
  this->fields.receivecCallbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.receivecCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  kind = this->fields.kind;
  if ( !kind )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_11077/*"REJECT_NORMAL_TXT"*/;
    goto LABEL_12;
  }
  if ( (unsigned int)(kind - 1) <= 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_11073/*"REJECT_ALL_TXT"*/;
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

  if ( (byte_4C55AA8 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__IndexOf__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long___ctor___78136144);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C3E564(&UserPresentListViewItem_TypeInfo);
    byte_4C55AA8 = 1;
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
  v8 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_58314088(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)checkedIdList,
    (const MethodInfo_379CD68 *)Method_System_Collections_Generic_List_long___ctor___78136144);
  m_parent = this->fields.itemList;
  if ( !m_parent )
LABEL_36:
    sub_1C3E7C0(m_parent, method);
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
                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
           (const MethodInfo_379E990 *)Method_System_Collections_Generic_List_long__Remove__) )
    {
      m_parent = this->fields.checkedIdList;
      if ( !m_parent )
        goto LABEL_36;
      v14 = System_Collections_Generic_List_long___IndexOf(
              (System_Collections_Generic_List_long__o *)m_parent,
              v12,
              (const MethodInfo_379E110 *)Method_System_Collections_Generic_List_long__IndexOf__);
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
  sub_1C3EA80(m_parent);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A82180;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A82160;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A82118;
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
  return (System_IAsyncResult_o *)sub_1C3E518(this, &v6, callback, object);
}


void UserPresentListViewManager_CallbackFunc__EndInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A82204;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A821BC;
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
  if ( (byte_4C55AB7 & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    byte_4C55AB7 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v12, callback, object);
}


void UserPresentListViewManager_ReceiveCallbackFunc__EndInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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

  if ( (byte_4C55AB8 & 1) == 0 )
  {
    sub_1C3E564(&UserPresentListViewManager___c_TypeInfo);
    byte_4C55AB8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(UserPresentListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserPresentListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentListViewManager___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)UserPresentListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( (byte_4C55AB9 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1C3E564(&UserPresentListViewItem_TypeInfo);
    byte_4C55AB9 = 1;
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
      sub_1C3E7C0(this, a);
    }
  }
  else
  {
    sub_1C3EA80(v5);
  }
  sub_1C3EA80(b);
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
  if ( (byte_4C55ABA & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1C3E564(&UserPresentListViewItem_TypeInfo);
    byte_4C55ABA = 1;
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
      sub_1C3E7C0(this, obj);
    }
    return 0;
  }
  else
  {
    sub_1C3EA80(v3);
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
  if ( (byte_4C55ABB & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1C3E564(&UserPresentListViewItem_TypeInfo);
    byte_4C55ABB = 1;
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
  result = System_String__CompareTo_63670816((System_String_o *)v8, (System_String_o *)this, 0);
  if ( result )
    return result;
  a = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  v10 = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( v5->klass->_2.naturalAligment < (unsigned int)v10
    || (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[v10 - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_18:
    sub_1C3EA80(v5);
    goto LABEL_19;
  }
  v11 = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( b->klass->_2.naturalAligment >= (unsigned int)v11
    && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v11 - 1] == UserPresentListViewItem_TypeInfo )
  {
    this = (UserPresentListViewManager___c_o *)v5[1].fields.sortValue2;
    if ( this )
      return System_String__CompareTo_63670816((System_String_o *)this, (System_String_o *)b[1].fields.sortValue2, 0);
LABEL_17:
    sub_1C3E7C0(this, a);
  }
LABEL_19:
  sub_1C3EA80(b);
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
  if ( (byte_4C55ABC & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1C3E564(&UserPresentListViewItem_TypeInfo);
    byte_4C55ABC = 1;
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
      sub_1C3E7C0(this, a);
    }
  }
  else
  {
    sub_1C3EA80(v5);
  }
  sub_1C3EA80(b);
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
  if ( (byte_4C55ABD & 1) == 0 )
  {
    this = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_1C3E564(&UserPresentListViewItem_TypeInfo);
    byte_4C55ABD = 1;
  }
  if ( !obj
    || (naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentListViewItem_TypeInfo )
  {
    sub_1C3E7C0(this, obj);
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
    sub_1C3E508(p_ticketItem, (int32_t)monitor, (int32_t)method, v3);
  }
  return 0;
}