void __fastcall UserPresentListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A59F23 & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_15224/*"UserPresent"*/);
    byte_4A59F23 = 1;
  }
  v1 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v1, (System_String_o *)StringLiteral_15224/*"UserPresent"*/, 1, 0, 0LL);
  UserPresentListViewManager_TypeInfo->static_fields->sortInfo = v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)UserPresentListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int64_t m_parent; // x0
  System_Collections_Generic_IEnumerable_T__o *checkedIdList; // x22
  System_Collections_Generic_List_long__o *v13; // x21
  const MethodInfo *v14; // x3
  signed int max_length; // w8
  il2cpp_array_size_t v16; // w22
  Il2CppClass **v17; // x23
  Il2CppClass *v18; // x8
  UserPresentBoxEntity_o **v19; // x23
  Il2CppClass *v20; // t1
  UserPresentBoxEntity_o *v21; // x24
  UserPresentListViewItem_o *v22; // x23
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  __int64 v29; // x8
  struct System_Collections_Generic_List_long__o *v30; // x20
  int32_t v31; // w22
  const MethodInfo *v32; // x1
  __int64 v33; // x8
  unsigned __int64 v34; // x21
  UserPresentBoxEntity_o *v35; // x23
  UserPresentListViewItem_o *v36; // x22
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8

  if ( (byte_4A59F0E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor___76036712);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&UserPresentListViewItem_TypeInfo);
    byte_4A59F0E = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.selectPresentData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectPresentData, 0, v5, v6);
  this->fields.presentIds = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.presentIds, 0, v7, v8);
  m_parent = (int64_t)this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_38;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 0, 0, v10);
  checkedIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v13 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_55464252(
      v13,
      checkedIdList,
      (const MethodInfo_34E513C *)Method_System_Collections_Generic_List_long___ctor___76036712);
    if ( !presentList )
      goto LABEL_38;
    max_length = presentList->max_length;
    if ( max_length >= 1 )
    {
      v16 = 0;
      while ( v16 < max_length )
      {
        v17 = &presentList->obj.klass + (int)v16;
        v20 = v17[4];
        v19 = (UserPresentBoxEntity_o **)(v17 + 4);
        v18 = v20;
        if ( !v20 || !v13 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v13,
                     (int64_t)v18->_1.namespaze,
                     (const MethodInfo_34E6D64 *)Method_System_Collections_Generic_List_long__Remove__);
        if ( v16 >= presentList->max_length )
          goto LABEL_39;
        v21 = *v19;
        v22 = (UserPresentListViewItem_o *)sub_1B887FC(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v22, v16, v21, v23);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v26 = *(_QWORD *)(m_parent + 16);
        v27 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v26 )
          goto LABEL_38;
        v28 = *(int *)(m_parent + 24);
        if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v22,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = v26 + 8 * v28;
          *(_DWORD *)(m_parent + 24) = v28 + 1;
          *(_QWORD *)(v29 + 32) = v22;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 32), (int32_t)v22, v24, v25);
        }
        max_length = presentList->max_length;
        if ( (int)++v16 >= max_length )
          goto LABEL_18;
      }
      goto LABEL_39;
    }
LABEL_18:
    if ( !v13 )
LABEL_38:
      sub_1B8880C(m_parent, v9);
    v30 = this->fields.checkedIdList;
    if ( v13->fields._size >= 1 )
    {
      v31 = 0;
      do
      {
        m_parent = System_Collections_Generic_List_long___get_Item(
                     v13,
                     v31,
                     (const MethodInfo_34E5578 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !v30 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v30,
                     m_parent,
                     (const MethodInfo_34E6D64 *)Method_System_Collections_Generic_List_long__Remove__);
        v30 = this->fields.checkedIdList;
      }
      while ( ++v31 < v13->fields._size );
    }
    if ( !v30 )
      goto LABEL_38;
    if ( v30->fields._size >= 1 )
    {
      m_parent = (int64_t)this->fields.m_parent;
      if ( !m_parent )
        goto LABEL_38;
      UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 1, 1, v14);
      UserPresentListViewManager__updateCheckStatus(this, v32);
    }
  }
  else
  {
    if ( !presentList )
      goto LABEL_38;
    v33 = *(_QWORD *)&presentList->max_length;
    if ( (int)v33 >= 1 )
    {
      v34 = 0LL;
      while ( v34 < (unsigned int)v33 )
      {
        v35 = presentList->m_Items[v34];
        v36 = (UserPresentListViewItem_o *)sub_1B887FC(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v36, v34, v35, v37);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v40 = *(_QWORD *)(m_parent + 16);
        v41 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v40 )
          goto LABEL_38;
        v42 = *(int *)(m_parent + 24);
        if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v36,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = v40 + 8 * v42;
          *(_DWORD *)(m_parent + 24) = v42 + 1;
          *(_QWORD *)(v43 + 32) = v36;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v43 + 32), (int32_t)v36, v38, v39);
        }
        LODWORD(v33) = presentList->max_length;
        if ( (__int64)++v34 >= (int)v33 )
          goto LABEL_37;
      }
LABEL_39:
      sub_1B88814(m_parent, v9);
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

  if ( (byte_4A59F09 & 1) == 0 )
  {
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59F09 = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v2 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v2->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1B8880C(0LL, v1);
  ListViewSort__DeleteContinueData(sortInfo, 0LL);
}


void __fastcall UserPresentListViewManager__DestroyList(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall UserPresentListViewManager__DlgForExpiredPresent(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v4; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A59F22 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__);
    sub_1B885B0(&StringLiteral_10451/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/);
    byte_4A59F22 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_10451/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0LL);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, 0LL);
  if ( !Instance )
    sub_1B8880C(v6, v7);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, 0LL, v4, v5, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
}


void __fastcall UserPresentListViewManager__EndNoticeDlg(
        UserPresentListViewManager_o *this,
        int32_t scene,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *dialog; // x21
  System_Action_T__o *v6; // x22
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct UserPresentListViewManager_ReceiveCallbackFunc_o *receivecCallbackFunc; // x8

  if ( (byte_4A59F1D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_SceneList_Type__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserPresentListViewManager_EndNoticeDlg__);
    byte_4A59F1D = 1;
  }
  dialog = this->fields.dialog;
  v6 = (System_Action_T__o *)sub_1B887FC(System_Action_SceneList_Type__TypeInfo);
  System_Action_Int32Enum____ctor(v6, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0LL);
  if ( !dialog )
    goto LABEL_14;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(dialog, (System_Action_SceneList_Type__o *)v6, v9);
  if ( scene == -1 )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( CommonUI__IsActive_MasterMission((CommonUI_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_1B8880C(Instance, v8);
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
  struct System_Collections_Generic_List_ListViewItem__o *presentAllSelectedList; // x8
  System_Collections_Generic_List_object__o **p_presentAllSelectedList; // x19
  int32_t size; // w2
  int v6; // w9
  System_Collections_Generic_IEnumerable_T__o *itemList; // x21
  System_Collections_Generic_List_object__o *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_object__o *NameText; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v13; // x20
  System_Comparison_T__o *v14; // x21
  Il2CppObject *v15; // x22
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_List_object__o *v19; // x20
  System_Predicate_object__o *v20; // x21
  Il2CppObject *v21; // x22
  struct UserPresentListViewManager___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_List_object__o *v25; // x20
  int v26; // w8
  System_Comparison_T__o *v27; // x21
  Il2CppObject *v28; // x22
  struct UserPresentListViewManager___c_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Text_StringBuilder_o *v32; // x20
  int v33; // w24
  int32_t v34; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v37; // x22
  System_String_o *v38; // x23

  if ( (byte_4A59F1A & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&System_Comparison_ListViewItem__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem___ctor___76037576);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Predicate_ListViewItem__TypeInfo);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__);
    sub_1B885B0(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__);
    sub_1B885B0(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__);
    sub_1B885B0(&UserPresentListViewManager___c_TypeInfo);
    sub_1B885B0(&UserPresentListViewItem_TypeInfo);
    sub_1B885B0(&StringLiteral_10456/*"PRESENT_INFO"*/);
    byte_4A59F1A = 1;
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
      System_Array__Clear((System_Array_o *)presentAllSelectedList->fields._items, 0, size, 0LL);
  }
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v8,
    itemList,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76037576);
  this->fields.presentAllSelectedList = (struct System_Collections_Generic_List_ListViewItem__o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.presentAllSelectedList, (int32_t)v8, v9, v10);
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
    v14 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      v14,
      v15,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__,
      0LL);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__60_0 = (struct System_Comparison_ListViewItem__o *)v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__60_0, (int32_t)v14, v17, v18);
  }
  if ( !v13 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_55571192(
    (System_Collections_Generic_List_object__o *)v13,
    v14,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
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
    v20 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_object____ctor(
      v20,
      v21,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__,
      0LL);
    v22 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v22->__9__60_1 = (struct System_Predicate_ListViewItem__o *)v20;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->__9__60_1, (int32_t)v20, v23, v24);
  }
  if ( !v19 )
    goto LABEL_53;
  System_Collections_Generic_List_object___RemoveAll(
    v19,
    (System_Predicate_T__o *)v20,
    (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  }
  v25 = *p_presentAllSelectedList;
  if ( !*p_presentAllSelectedList )
    goto LABEL_53;
  v11 = (const MethodInfo *)*(unsigned int *)(*(_QWORD *)&NameText[4].fields._size + 116LL);
  v26 = v25->fields._size;
  if ( v26 > (int)v11 )
  {
    System_Collections_Generic_List_object___RemoveRange(
      *p_presentAllSelectedList,
      (int32_t)v11,
      v26 - (_DWORD)v11,
      (const MethodInfo_34FF0A0 *)Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
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
    v27 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      v27,
      v28,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__,
      0LL);
    v29 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v29->__9__60_2 = (struct System_Comparison_ListViewItem__o *)v27;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->__9__60_2, (int32_t)v27, v30, v31);
  }
  if ( !v25 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_55571192(
    v25,
    v27,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  v32 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v32, 0LL);
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
        System_Text_StringBuilder__Append_60871256(v32, 0xAu, 0LL);
      }
      NameText = *p_presentAllSelectedList;
      if ( !*p_presentAllSelectedList )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               NameText,
               v34,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item
        && (methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v37 = (UserPresentListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo
            ? Item
            : 0LL;
      }
      else
      {
        v37 = 0LL;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      NameText = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_10456/*"PRESENT_INFO"*/,
                                                                0LL);
      if ( !v37 )
        break;
      v38 = (System_String_o *)NameText;
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewItem__get_NameText(
                                                                (UserPresentListViewItem_o *)v37,
                                                                v11);
      if ( !v32 )
        break;
      NameText = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__AppendFormat_60875280(
                                                                v32,
                                                                v38,
                                                                (Il2CppObject *)NameText,
                                                                (Il2CppObject *)v37[11].monitor,
                                                                0LL);
      if ( v33 == ++v34 )
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v32->klass->vtable._3_ToString.method)(
                                    v32,
                                    v32->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    }
LABEL_53:
    sub_1B8880C(NameText, v11);
  }
  if ( !v32 )
    goto LABEL_53;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v32->klass->vtable._3_ToString.method)(
                              v32,
                              v32->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


UserPresentListViewItem_o *__fastcall UserPresentListViewManager__GetItem(
        UserPresentListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UserPresentListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A59F0F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UserPresentListViewItem_TypeInfo);
    byte_4A59F0F = 1;
  }
  result = (UserPresentListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (UserPresentListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  int32_t v2; // w2
  int32_t v3; // w3
  UserPresentListViewManager_c *v5; // x0
  struct ListViewSort_o **p_sortInfo; // x8
  struct ListViewSort_o *v7; // x1
  __int64 v8; // x1
  struct ListViewSort_o *sort; // x0

  if ( (byte_4A59F0D & 1) == 0 )
  {
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59F0D = 1;
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v7, v2, v3);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, v8);
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

  if ( (byte_4A59F0A & 1) == 0 )
  {
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59F0A = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v2 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v2->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1B8880C(0LL, v1);
  ListViewSort__InitLoad(sortInfo, 0LL);
}


void __fastcall UserPresentListViewManager__OnClickListCheck(
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
  int32_t v9; // w2
  int32_t v10; // w3
  struct UserPresentListViewItem_o *selectItem; // x8
  struct UserPresentBoxEntity_o *usrPresentEnt; // x1
  UserPresentListViewManager_o **p_selectPresentData; // x23
  UserPresentListViewManager_o **p_checkedIdList; // x21
  System_Collections_Generic_List_long__o *v15; // x24
  int32_t v16; // w2
  int32_t v17; // w3
  int m_CancellationTokenSource; // w8
  int v19; // w25
  int32_t v20; // w24
  struct ItemEntity_o *itemEnt; // x8
  int64_t endedAt; // x25
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
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 m_CancellationTokenSource_low; // x10
  BalanceConfig_c *v38; // x8
  int32_t v39; // w22
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x2
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // [xsp+8h] [xbp-58h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_4A59F16 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (UserPresentListViewManager_o *)sub_1B885B0(&Method_UserPresentListViewManager_OnClickListCheck__);
    byte_4A59F16 = 1;
  }
  entity = 0LL;
  v44 = 0LL;
  if ( !v3 )
    goto LABEL_77;
  Item = UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.selectItem, (int32_t)Item, v7, v8);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_77;
  usrPresentEnt = selectItem->fields.usrPresentEnt;
  p_selectPresentData = (UserPresentListViewManager_o **)&v4->fields.selectPresentData;
  v4->fields.selectPresentData = usrPresentEnt;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.selectPresentData, (int32_t)usrPresentEnt, v9, v10);
  p_checkedIdList = (UserPresentListViewManager_o **)&v4->fields.checkedIdList;
  if ( !v4->fields.checkedIdList )
  {
    v15 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v15,
      (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
    *p_checkedIdList = (UserPresentListViewManager_o *)v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.checkedIdList, (int32_t)v15, v16, v17);
  }
  if ( !*p_selectItem )
    goto LABEL_77;
  if ( (*p_selectItem)->fields.presentId >= 1 )
  {
    this = *p_checkedIdList;
    if ( !*p_checkedIdList )
      goto LABEL_77;
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
                                                 (const MethodInfo_34E5578 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !*p_selectItem )
          goto LABEL_77;
        if ( this == (UserPresentListViewManager_o *)(*p_selectItem)->fields.presentId )
          break;
        if ( v19 == v20 )
          goto LABEL_17;
        this = *p_checkedIdList;
        ++v20;
        if ( !*p_checkedIdList )
          goto LABEL_77;
      }
      v28 = Method_UserPresentListViewManager_OnClickListCheck__;
      if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1B885C8(Method_UserPresentListViewManager_OnClickListCheck__);
      v29 = (System_Reflection_MethodBase_o *)sub_1B88594(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
      this = *p_checkedIdList;
      if ( *p_checkedIdList )
      {
        System_Collections_Generic_List_long___RemoveAt(
          (System_Collections_Generic_List_long__o *)this,
          v20,
          (const MethodInfo_34E6FE8 *)Method_System_Collections_Generic_List_long__RemoveAt__);
        UserPresentListViewManager__updateCheckStatus(v4, v30);
        return;
      }
LABEL_77:
      sub_1B8880C(this, obj);
    }
LABEL_17:
    this = *p_selectPresentData;
    if ( !*p_selectPresentData )
      goto LABEL_77;
    this = (UserPresentListViewManager_o *)UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)this, 0, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !*p_selectPresentData )
        goto LABEL_77;
      if ( LODWORD((*p_selectPresentData)->fields.sortOrderSprite) != 2 )
        goto LABEL_53;
      if ( !*p_selectItem )
        goto LABEL_77;
      itemEnt = (*p_selectItem)->fields.itemEnt;
      if ( !itemEnt )
        goto LABEL_77;
      endedAt = itemEnt->fields.endedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( endedAt > NetworkManager__getTime(0LL) )
      {
        this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_77;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (UserPresentListViewManager_o *)NetworkManager__get_UserId(0LL);
        if ( !*p_selectPresentData || !MasterData_object )
          goto LABEL_77;
        this = (UserPresentListViewManager_o *)UserItemMaster__TryGetEntity(
                                                 (UserItemMaster_o *)MasterData_object,
                                                 &entity,
                                                 (int64_t)this,
                                                 HIDWORD((*p_selectPresentData)->fields.sortOrderSprite),
                                                 0LL);
        if ( entity )
        {
          if ( !*p_selectPresentData )
            goto LABEL_77;
          v24 = BalanceConfig_TypeInfo;
          v25 = LODWORD((*p_selectPresentData)->fields.scrollView) + entity->fields.num;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v24 = BalanceConfig_TypeInfo;
          }
          if ( v25 > v24->static_fields->UserItemMax )
            goto LABEL_36;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
          if ( !*p_selectPresentData || !this )
            goto LABEL_77;
          this = (UserPresentListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   &v44,
                                                   HIDWORD((*p_selectPresentData)->fields.sortOrderSprite),
                                                   (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (UserPresentListViewManager_o *)v44;
            if ( !v44 )
              goto LABEL_77;
            this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v44, 0LL);
            if ( (int)this >= 1 )
            {
              this = (UserPresentListViewManager_o *)v44;
              if ( !v44 )
                goto LABEL_77;
              this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v44, 0LL);
              if ( v25 > (int)this )
              {
LABEL_36:
                v26 = Method_UserPresentListViewManager_OnClickListCheck__;
                if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
                  v26 = (_QWORD *)sub_1B885C8(Method_UserPresentListViewManager_OnClickListCheck__);
                v27 = (System_Reflection_MethodBase_o *)sub_1B88594(v26, v26[4]);
                goto LABEL_64;
              }
            }
          }
        }
LABEL_53:
        if ( !*p_checkedIdList )
          goto LABEL_77;
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
          v33 = (_QWORD *)sub_1B885C8(Method_UserPresentListViewManager_OnClickListCheck__);
        v27 = (System_Reflection_MethodBase_o *)sub_1B88594(v33, v33[4]);
        if ( v31 < PresentBoxCheckMax )
        {
          OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
          if ( !*p_selectItem )
            goto LABEL_77;
          this = *p_checkedIdList;
          if ( !*p_checkedIdList )
            goto LABEL_77;
          obj = (UserPresentListViewObject_o *)(*p_selectItem)->fields.presentId;
          v35 = *(_QWORD *)&this->fields.m_CachedPtr;
          v36 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v35 )
            goto LABEL_77;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v35 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              (int64_t)obj,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            this = *p_checkedIdList;
            if ( !*p_checkedIdList )
              goto LABEL_77;
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v35 + 8 * m_CancellationTokenSource_low + 32) = obj;
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
              goto LABEL_77;
            if ( !this )
              goto LABEL_77;
            UserPresentListViewItem__setCheckBoxed(
              (UserPresentListViewItem_o *)this,
              1,
              (int32_t)(*p_checkedIdList)->fields.m_CancellationTokenSource,
              v40);
            checkedIdList = v4->fields.checkedIdList;
            if ( !checkedIdList )
              goto LABEL_77;
            this = (UserPresentListViewManager_o *)v4->fields.m_parent;
            if ( !this )
              goto LABEL_77;
            UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)this, checkedIdList->fields._size, v41);
          }
          UserPresentListViewManager__updateCheckStatus(v4, (const MethodInfo *)obj);
          this = (UserPresentListViewManager_o *)v4->fields.m_parent;
          if ( !this )
            goto LABEL_77;
          UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)this, 1, 1, v43);
          return;
        }
LABEL_64:
        OverwriteAssetSoundName__PlaySystemSe(v27, 1, 0LL);
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
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  UserPresentListViewItem_o *Item; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  struct UserPresentListViewItem_o *selectItem; // x8
  struct UserPresentBoxEntity_o *usrPresentEnt; // x1
  struct UserPresentBoxEntity_o **p_selectPresentData; // x21
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x1
  struct ItemEntity_o *itemEnt; // x8
  __int64 endedAt; // x23
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
  int32_t v36; // w3
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  ServantStatusBattleListViewItem_o *p__9__55_0; // x0
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
  int32_t v50; // w3
  struct UserPresentListViewItem_o *v51; // x8
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const MethodInfo *v55; // x4
  const MethodInfo *v56; // x2
  ItemEntity_o *v57; // [xsp+0h] [xbp-40h] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_4A59F15 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_UserPresentListViewManager___c__OnClickListView_b__55_0__);
    sub_1B885B0(&Method_UserPresentListViewManager___c__OnClickListView_b__55_1__);
    sub_1B885B0(&UserPresentListViewManager___c_TypeInfo);
    this = (UserPresentListViewManager_o *)sub_1B885B0(&Method_UserPresentListViewManager_OnClickListView__);
    byte_4A59F15 = 1;
  }
  v57 = 0LL;
  entity = 0LL;
  if ( !v3 )
    goto LABEL_83;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_83;
  if ( BYTE4(this->fields.objectList) )
    return;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_83;
  if ( BYTE4(this->fields.itemSortList) )
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.selectItem, (int32_t)Item, v8, v9);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_83;
  usrPresentEnt = selectItem->fields.usrPresentEnt;
  p_selectPresentData = &v4->fields.selectPresentData;
  v4->fields.selectPresentData = usrPresentEnt;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.selectPresentData, (int32_t)usrPresentEnt, v10, v11);
  this = (UserPresentListViewManager_o *)v4->fields.selectPresentData;
  if ( !this )
    goto LABEL_83;
  this = (UserPresentListViewManager_o *)UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)this, 0, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !*p_selectPresentData )
      goto LABEL_83;
    if ( (*p_selectPresentData)->fields.giftType == 2 )
    {
      if ( !*p_selectItem )
        goto LABEL_83;
      itemEnt = (*p_selectItem)->fields.itemEnt;
      if ( !itemEnt )
        goto LABEL_83;
      endedAt = itemEnt->fields.endedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (UserPresentListViewManager_o *)NetworkManager__getTime(0LL);
      if ( endedAt <= (__int64)this )
        goto LABEL_14;
      if ( !*p_selectItem )
        goto LABEL_83;
      v20 = (*p_selectItem)->fields.itemEnt;
      if ( !v20 )
        goto LABEL_83;
      if ( v20->fields.type == 24 )
      {
        v21 = Method_UserPresentListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v21 = (_QWORD *)sub_1B885C8(Method_UserPresentListViewManager_OnClickListView__);
        v22 = (System_Reflection_MethodBase_o *)sub_1B88594(v21, v21[4]);
        OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
        if ( *p_selectItem )
        {
          v24 = (*p_selectItem)->fields.itemEnt;
          if ( v24 )
          {
            UserPresentListViewManager__OpenSelectableDialog(v4, v24->fields.id, v23);
            return;
          }
        }
        goto LABEL_83;
      }
      this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_83;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (UserPresentListViewManager_o *)NetworkManager__get_UserId(0LL);
      if ( !*p_selectPresentData || !MasterData_object )
        goto LABEL_83;
      this = (UserPresentListViewManager_o *)UserItemMaster__TryGetEntity(
                                               (UserItemMaster_o *)MasterData_object,
                                               &entity,
                                               (int64_t)this,
                                               (*p_selectPresentData)->fields.objectId,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !*p_selectPresentData )
          goto LABEL_83;
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
            v28 = (_QWORD *)sub_1B885C8(Method_UserPresentListViewManager_OnClickListView__);
          v29 = (System_Reflection_MethodBase_o *)sub_1B88594(v28, v28[4]);
          OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
          v31 = UserPresentListViewManager___c_TypeInfo;
          if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
            v31 = UserPresentListViewManager___c_TypeInfo;
          }
          _9__55_0 = v31->static_fields->__9__55_0;
          if ( _9__55_0 )
            goto LABEL_52;
          if ( !v31->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v31);
            v31 = UserPresentListViewManager___c_TypeInfo;
          }
          v33 = (Il2CppObject *)v31->static_fields->__9;
          _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1B887FC(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
          UserPresentListViewManager_ReceiveCallbackFunc___ctor(
            _9__55_0,
            v33,
            Method_UserPresentListViewManager___c__OnClickListView_b__55_0__,
            v34);
          static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__55_0 = _9__55_0;
          p__9__55_0 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__55_0;
LABEL_51:
          sub_1B88554(p__9__55_0, (int32_t)_9__55_0, v35, v36);
LABEL_52:
          UserPresentListViewManager__showErrorResultDlg(v4, _9__55_0, v30);
          return;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !this )
          goto LABEL_83;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (Il2CppObject **)&v57,
               (*p_selectPresentData)->fields.objectId,
               (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          this = (UserPresentListViewManager_o *)v57;
          if ( !v57 )
            goto LABEL_83;
          if ( ItemEntity__GetMaxNum(v57, 0LL) >= 1 )
          {
            this = (UserPresentListViewManager_o *)v57;
            if ( !v57 )
              goto LABEL_83;
            if ( v27 > ItemEntity__GetMaxNum(v57, 0LL) )
            {
              v39 = Method_UserPresentListViewManager_OnClickListView__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
                v39 = (_QWORD *)sub_1B885C8(Method_UserPresentListViewManager_OnClickListView__);
              v40 = (System_Reflection_MethodBase_o *)sub_1B88594(v39, v39[4]);
              OverwriteAssetSoundName__PlaySystemSe(v40, 0, 0LL);
              v41 = UserPresentListViewManager___c_TypeInfo;
              if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
                v41 = UserPresentListViewManager___c_TypeInfo;
              }
              _9__55_0 = v41->static_fields->__9__55_1;
              if ( _9__55_0 )
                goto LABEL_52;
              if ( !v41->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v41);
                v41 = UserPresentListViewManager___c_TypeInfo;
              }
              v42 = (Il2CppObject *)v41->static_fields->__9;
              _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1B887FC(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
              UserPresentListViewManager_ReceiveCallbackFunc___ctor(
                _9__55_0,
                v42,
                Method_UserPresentListViewManager___c__OnClickListView_b__55_1__,
                v43);
              v44 = UserPresentListViewManager___c_TypeInfo->static_fields;
              v44->__9__55_1 = _9__55_0;
              p__9__55_0 = (ServantStatusBattleListViewItem_o *)&v44->__9__55_1;
              goto LABEL_51;
            }
          }
        }
      }
    }
    v45 = Method_UserPresentListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v45 = (_QWORD *)sub_1B885C8(Method_UserPresentListViewManager_OnClickListView__);
    v46 = (System_Reflection_MethodBase_o *)sub_1B88594(v45, v45[4]);
    OverwriteAssetSoundName__PlaySystemSe(v46, 8, 0LL);
    if ( *p_selectItem )
    {
      v4->fields._select_idx_k__BackingField = (*p_selectItem)->fields.index;
      v47 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v47,
        (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
      p_presentIds = (UserPresentListViewManager_o **)&v4->fields.presentIds;
      v4->fields.presentIds = v47;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.presentIds, (int32_t)v47, v49, v50);
      v51 = v4->fields.selectItem;
      if ( v51 )
      {
        obj = (UserPresentListViewObject_o *)v51->fields.presentId;
        if ( (__int64)obj >= 1 )
        {
          this = *p_presentIds;
          if ( !*p_presentIds )
            goto LABEL_83;
          v52 = *(_QWORD *)&this->fields.m_CachedPtr;
          v53 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v52 )
            goto LABEL_83;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v52 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              (int64_t)obj,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v52 + 8 * m_CancellationTokenSource_low + 32) = obj;
          }
        }
        this = *p_presentIds;
        if ( *p_presentIds )
        {
          this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                   (System_Collections_Generic_List_long__o *)this,
                                                   (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v4->fields.m_parent )
          {
            UserPresentBoxWindow__receivePresent(v4->fields.m_parent, (System_Int64_array *)this, 0, 0, v55);
            UserPresentListViewManager__SetMode_37401520(v4, 2, v56);
            return;
          }
        }
      }
    }
LABEL_83:
    sub_1B8880C(this, obj);
  }
LABEL_14:
  v15 = Method_UserPresentListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1B885C8(Method_UserPresentListViewManager_OnClickListView__);
  v16 = (System_Reflection_MethodBase_o *)sub_1B88594(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
  UserPresentListViewManager__DlgForExpiredPresent(v4, v17);
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

  if ( (byte_4A59F1E & 1) == 0 )
  {
    sub_1B885B0(&Method_UserPresentListViewManager_OnClickSortAscendingOrder__);
    byte_4A59F1E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_UserPresentListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_UserPresentListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A59F14 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59F14 = 1;
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
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  UserPresentBoxErrorDialog_o *dialog; // x0
  UserPresentBoxErrorDialog_o *v6; // x20
  System_Action_T__o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4A59F1C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_SceneList_Type__TypeInfo);
    sub_1B885B0(&Method_UserPresentListViewManager_EndNoticeDlg__);
    byte_4A59F1C = 1;
  }
  dialog = this->fields.dialog;
  if ( !dialog
    || (UserPresentBoxErrorDialog__Open(dialog, msg, method),
        v6 = this->fields.dialog,
        v7 = (System_Action_T__o *)sub_1B887FC(System_Action_SceneList_Type__TypeInfo),
        System_Action_Int32Enum____ctor(v7, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0LL),
        !v6) )
  {
    sub_1B8880C(dialog, msg);
  }
  UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v6, (System_Action_SceneList_Type__o *)v7, v8);
}


void __fastcall UserPresentListViewManager__OpenSelectableDialog(
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
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Collections_Generic_List_ListViewItem__o *v18; // x22
  System_Predicate_object__o *v19; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v20; // x21
  System_Comparison_T__o *v21; // x22
  Il2CppObject *v22; // x23
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x3

  if ( (byte_4A59F20 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_ListViewItem__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem___ctor___76037576);
    sub_1B885B0(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1B885B0(&System_Predicate_ListViewItem__TypeInfo);
    sub_1B885B0(&Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__);
    sub_1B885B0(&Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__);
    sub_1B885B0(&UserPresentListViewManager___c__DisplayClass67_0_TypeInfo);
    sub_1B885B0(&UserPresentListViewManager___c_TypeInfo);
    byte_4A59F20 = 1;
  }
  v5 = sub_1B887FC(UserPresentListViewManager___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
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
      System_Array__Clear((System_Array_o *)presentTicketList->fields._items, 0, size, 0LL);
  }
  m_parent = this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_18;
  m_parent->fields.mIsScrlResetPosition = 1;
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v13 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v13,
    itemList,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76037576);
  this->fields.presentTicketList = (struct System_Collections_Generic_List_ListViewItem__o *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.presentTicketList, (int32_t)v13, v14, v15);
  *(_DWORD *)(v5 + 20) = 0;
  *(_QWORD *)(v5 + 24) = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), 0, v16, v17);
  v18 = this->fields.presentTicketList;
  v19 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v5,
    Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__,
    0LL);
  if ( !v18 )
    goto LABEL_18;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v18,
    (System_Predicate_T__o *)v19,
    (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
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
    v21 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      v21,
      v22,
      Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__,
      0LL);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__67_1 = (struct System_Comparison_ListViewItem__o *)v21;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__67_1, (int32_t)v21, v24, v25);
  }
  if ( !v20
    || (System_Collections_Generic_List_object___Sort_55571192(
          (System_Collections_Generic_List_object__o *)v20,
          v21,
          (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ListViewItem__Sort__),
        (selectDialog = this->fields.selectDialog) == 0LL) )
  {
LABEL_18:
    sub_1B8880C(selectDialog, v7);
  }
  PresentSelectableDlgComponent__Open(
    (PresentSelectableDlgComponent_o *)selectDialog,
    *(ItemEntity_o **)(v5 + 24),
    *(_DWORD *)(v5 + 20),
    v26);
}


void __fastcall UserPresentListViewManager__ReceiveMultiPresent(
        UserPresentListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v4; // x21
  struct System_Collections_Generic_List_long__o **p_presentIds; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_List_object__o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x8
  System_Collections_Generic_List_object__o *v11; // x0
  void **v12; // x25
  void **v13; // x26
  _BOOL8 v14; // x0
  UserPresentListViewItem_c *v15; // x1
  UserPresentListViewItem_o *current; // x23
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_long__o *checkedIdList; // x0
  UserPresentBoxEntity_o *usrPresentEnt; // x0
  _BOOL8 IsExpired; // x0
  const MethodInfo *v21; // x1
  struct UserPresentBoxEntity_o *v22; // x9
  struct ItemEntity_o *itemEnt; // x9
  struct System_Collections_Generic_List_long__o **v24; // x19
  void **v25; // x20
  void **v26; // x26
  int64_t endedAt; // x25
  bool v28; // cc
  Il2CppObject *NameText; // x0
  const MethodInfo *v30; // x1
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x1
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_long__o *v39; // x0
  int64_t presentId; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  int32_t v44; // w1
  ServantStatusBattleListViewItem_o *p_expiredPresents_k__BackingField; // x22
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *klass; // x23
  Il2CppObject *Item; // x0
  System_String_o *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  const MethodInfo *v53; // x4
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A59F19 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UserPresentListViewItem_TypeInfo);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A59F19 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  this->fields.kind = kind;
  v4 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v4,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = &this->fields.presentIds;
  this->fields.presentIds = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.presentIds, (int32_t)v4, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  v10 = 192LL;
  if ( kind == 1 )
    v10 = 432LL;
  v11 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v10);
  if ( !v11 )
    goto LABEL_62;
  v12 = &Method_System_Collections_Generic_List_string__Add__;
  v13 = &Method_System_Collections_Generic_List_long__Add__;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    v11,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v56 = v55;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v14 )
      break;
    current = (UserPresentListViewItem_o *)v56.fields._current;
    if ( v56.fields._current )
    {
      v15 = UserPresentListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v56.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (UserPresentListViewItem_c *)v56.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
      {
        sub_1B88ACC(v56.fields._current);
LABEL_52:
        sub_1B8880C(IsExpired, v21);
      }
    }
    switch ( kind )
    {
      case 1:
        if ( !v56.fields._current )
          sub_1B8880C(v14, v15);
        goto LABEL_23;
      case 2:
        if ( !v56.fields._current )
          sub_1B8880C(v14, v15);
        if ( !Gift__IsServant_37687840((int32_t)v56.fields._current[10].monitor, 0LL)
          && !Gift__IsCommandCode_37688232(current->fields.giftType, 0LL) )
        {
          goto LABEL_23;
        }
        break;
      case 3:
        if ( !v56.fields._current )
          sub_1B8880C(v14, v15);
        checkedIdList = this->fields.checkedIdList;
        if ( !checkedIdList )
          sub_1B8880C(0LL, v15);
        if ( System_Collections_Generic_List_long___Contains(
               checkedIdList,
               (int64_t)v56.fields._current[10].klass,
               (const MethodInfo_34E5BE0 *)Method_System_Collections_Generic_List_long__Contains__) )
        {
LABEL_23:
          usrPresentEnt = current->fields.usrPresentEnt;
          if ( !usrPresentEnt )
            sub_1B8880C(0LL, v15);
          IsExpired = UserPresentBoxEntity__IsExpired(usrPresentEnt, 0, 0LL);
          v22 = current->fields.usrPresentEnt;
          if ( !v22 )
            goto LABEL_52;
          if ( v22->fields.giftType == 2 )
          {
            itemEnt = current->fields.itemEnt;
            if ( !itemEnt )
              sub_1B8880C(IsExpired, v21);
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
              v28 = endedAt <= NetworkManager__getTime(0LL);
              v12 = v26;
              v13 = v25;
              p_presentIds = v24;
              if ( v28 )
                goto LABEL_33;
LABEL_39:
              v39 = *p_presentIds;
              if ( !*p_presentIds )
                sub_1B8880C(0LL, v21);
              presentId = current->fields.presentId;
              items = v39->fields._items;
              v42 = *v13;
              ++v39->fields._version;
              if ( !items )
                sub_1B8880C(v39, presentId);
              size = v39->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v39,
                  presentId,
                  *(const MethodInfo_34E5868 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
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
              sub_1B8880C(NameText, NameText);
            if ( !System_Collections_Generic_List_object___Contains(
                    v8,
                    NameText,
                    (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__) )
            {
              v31 = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, v30);
              v34 = v31;
              v35 = v8->fields._items;
              v36 = *v12;
              ++v8->fields._version;
              if ( !v35 )
                sub_1B8880C(v31, v31);
              v37 = v8->fields._size;
              if ( (unsigned int)v37 >= v35->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  v31,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
              }
              else
              {
                v38 = &v35->obj.klass + v37;
                v8->fields._size = v37 + 1;
                v38[4] = (Il2CppClass *)v34;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v34, v32, v33);
              }
            }
          }
        }
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v44 = (int)StringLiteral_1/*""*/;
  p_expiredPresents_k__BackingField = (ServantStatusBattleListViewItem_o *)&this->fields._expiredPresents_k__BackingField;
  this->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._expiredPresents_k__BackingField, v44, v46, v47);
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
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
      v50 = System_String__Concat_61720296(
              klass,
              (System_String_o *)StringLiteral_15812/*"["*/,
              (System_String_o *)Item,
              (System_String_o *)StringLiteral_16069/*"]"*/,
              0LL);
      p_expiredPresents_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v50;
      sub_1B88554(p_expiredPresents_k__BackingField, (int32_t)v50, v51, v52);
      System_Collections_Generic_List_object___RemoveAt(
        v8,
        0,
        (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_string__RemoveAt__);
    }
    while ( v8->fields._size > 0 );
  }
  v11 = (System_Collections_Generic_List_object__o *)*p_presentIds;
  if ( !*p_presentIds
    || (v11 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_long___ToArray(
                                                             (System_Collections_Generic_List_long__o *)v11,
                                                             (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.m_parent) )
  {
LABEL_62:
    sub_1B8880C(v11, v9);
  }
  UserPresentBoxWindow__receivePresent(this->fields.m_parent, (System_Int64_array *)v11, 0, 0, v53);
}


void __fastcall UserPresentListViewManager__RequestItemSelect(
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
  __int64 methodPtr_low; // x10
  __int64 v16; // x8
  int64_t v17; // x25
  __int64 v18; // x8
  int v19; // w25
  struct System_Int64_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  UserPresentBoxWindow_o *m_parent; // x23
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x2
  __int64 v26; // x9
  __int64 v27; // x8
  struct System_String_o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  UserPresentBoxWindow_o *v31; // x20
  const MethodInfo *v32; // x4
  PresentSelectableDlgComponent___c__DisplayClass21_0_o *v33; // x0
  int32_t v34; // w1
  const MethodInfo *v35; // x2
  int32_t selectNum; // [xsp+4h] [xbp-6Ch]
  ItemSelectEntity_o *v37; // [xsp+8h] [xbp-68h]

  if ( (byte_4A59F21 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UserPresentListViewItem_TypeInfo);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A59F21 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  presentTicketList = (int64_t)this->fields.presentTicketList;
  if ( !presentTicketList || !selectItm )
    goto LABEL_26;
  v10 = *(_DWORD *)(presentTicketList + 24);
  v37 = selectItm;
  selectNum = num;
  if ( v10 < 1 || (v11 = selectItm->fields.requireNum * num, v11 < 1) )
  {
    if ( v7 )
    {
LABEL_28:
      m_parent = this->fields.m_parent;
      presentTicketList = (int64_t)System_Collections_Generic_List_long___ToArray(
                                     v7,
                                     (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( m_parent )
      {
        UserPresentBoxWindow__receivePresent(
          m_parent,
          (System_Int64_array *)presentTicketList,
          v37->fields.idx,
          selectNum,
          v24);
        UserPresentListViewManager__SetMode_37401520(this, 2, v25);
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
                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !presentTicketList )
      goto LABEL_26;
    v14 = (_QWORD *)presentTicketList;
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
    v16 = v14[15];
    if ( !v16 )
      goto LABEL_26;
    v17 = *(_QWORD *)(v16 + 96);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    presentTicketList = NetworkManager__getTime(0LL);
    if ( v17 <= presentTicketList )
      break;
    v18 = v14[18];
    if ( !v18 )
      goto LABEL_26;
    if ( !v7 )
      goto LABEL_26;
    v19 = *(_DWORD *)(v18 + 80);
    v8 = (UserPresentListViewItem_c *)v14[20];
    items = v7->fields._items;
    v21 = Method_System_Collections_Generic_List_long__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_26;
    size = v7->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v7,
        (int64_t)v8,
        *(const MethodInfo_34E5868 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !presentTicketList )
    goto LABEL_26;
  v8 = UserPresentListViewItem_TypeInfo;
  v26 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)presentTicketList + 304LL) >= (unsigned int)v26
    && *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)presentTicketList + 200LL) + 8 * v26 - 8) == UserPresentListViewItem_TypeInfo )
  {
    v27 = *(_QWORD *)(presentTicketList + 120);
    if ( v27 )
    {
      v28 = System_String__Concat_61718292(
              (System_String_o *)StringLiteral_15812/*"["*/,
              *(System_String_o **)(v27 + 24),
              (System_String_o *)StringLiteral_16069/*"]"*/,
              0LL);
      this->fields._expiredPresents_k__BackingField = v28;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields._expiredPresents_k__BackingField,
        (int32_t)v28,
        v29,
        v30);
      if ( v7 )
      {
        v31 = this->fields.m_parent;
        presentTicketList = (int64_t)System_Collections_Generic_List_long___ToArray(
                                       v7,
                                       (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v31 )
        {
          UserPresentBoxWindow__receivePresent(v31, (System_Int64_array *)presentTicketList, v37->fields.idx, 0, v32);
          return;
        }
      }
    }
LABEL_26:
    sub_1B8880C(presentTicketList, v8);
  }
  sub_1B88ACC(presentTicketList);
  PresentSelectableDlgComponent___c__DisplayClass21_0___OpenItemConfirmDlg_b__2(v33, v34, v35);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestListObject(
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

  if ( (byte_4A59F12 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__);
    sub_1B885B0(&Method_UserPresentListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A59F12 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      UserPresentListViewObject__Init_37442072((UserPresentListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestListObject_37441044(
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

  if ( (byte_4A59F13 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__);
    sub_1B885B0(&Method_UserPresentListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A59F13 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      UserPresentListViewObject__Init_37442156((UserPresentListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


void __fastcall UserPresentListViewManager__SetMode(
        UserPresentListViewManager_o *this,
        int32_t mode,
        UserPresentListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  UserPresentListViewManager__SetMode_37401520(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__SetMode_37401520(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_4A59F11 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4A59F11 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1B8880C(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0LL);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    UserPresentListViewManager__RequestListObject_37441044(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 4;
    goto LABEL_8;
  }
}


void __fastcall UserPresentListViewManager__SetMode_37440992(
        UserPresentListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  UserPresentListViewManager__SetMode_37401520(this, mode, v6);
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
  if ( (byte_4A59F10 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1B885B0(&UserPresentListViewObject_TypeInfo);
    byte_4A59F10 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserPresentListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserPresentListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  UserPresentListViewObject__Init_37440868((UserPresentListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall UserPresentListViewManager__SetSortButtonImage(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A59F1F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17541/*"btn_sort_up"*/);
    sub_1B885B0(&StringLiteral_17584/*"btn_txt_new"*/);
    sub_1B885B0(&StringLiteral_17591/*"btn_txt_old"*/);
    sub_1B885B0(&StringLiteral_17538/*"btn_sort_down"*/);
    byte_4A59F1F = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_24;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v6 )
      goto LABEL_24;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( v8 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v9 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v9, 0LL);
        v10 = this->fields.sort;
        if ( v10 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            if ( v10->fields.isAscendingOrder )
              v11 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
            else
              v11 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
            UISprite__set_spriteName((UISprite_o *)sort, *v11, 0LL);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_1B8880C(sort, v4);
  }
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_0(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x20
  System_Action_o *v6; // x21

  if ( (byte_4A59F24 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__);
    byte_4A59F24 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL),
        v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__,
          0LL),
        !v5) )
  {
    sub_1B8880C(Instance, v4);
  }
  CommonUI__maskFadeout((CommonUI_o *)v5, 1, 0.5, v6, 0LL);
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_1(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UserPresentBoxWindow_o *m_parent; // x0

  if ( (byte_4A59F25 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59F25 = 1;
  }
  UserPresentListViewManager__DestroyList(this, method);
  m_parent = this->fields.m_parent;
  if ( !m_parent
    || (UserPresentBoxWindow__ReDisp(m_parent, v3), (m_parent = (UserPresentBoxWindow_o *)this->fields.scrollView) == 0LL)
    || (UIScrollView__ResetPosition((UIScrollView_o *)m_parent, 0LL),
        (m_parent = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(m_parent, v3);
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

  if ( (byte_4A59F03 & 1) == 0 )
  {
    sub_1B885B0(&UserPresentListViewManager_CallbackFunc_TypeInfo);
    byte_4A59F03 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A59F05 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A59F05 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A59F07 & 1) == 0 )
  {
    sub_1B885B0(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    byte_4A59F07 = 1;
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
    v8 = sub_1BC3AA0(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  UserPresentListViewManager__remove_receivecCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_UserPresentListViewObject__o *__fastcall UserPresentListViewManager__get_ClippingObjectList(
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
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A59F0C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59F0C = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)UserPresentListViewObject__GetItem((UserPresentListViewObject_o *)Component_object, v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v3;
}


System_Collections_Generic_List_UserPresentListViewObject__o *__fastcall UserPresentListViewManager__get_ObjectList(
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
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A59F0B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59F0B = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v3;
}


ListViewSort_o *__fastcall UserPresentListViewManager__get_SortInfo(const MethodInfo *method)
{
  UserPresentListViewManager_c *v1; // x0

  if ( (byte_4A59F02 & 1) == 0 )
  {
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59F02 = 1;
  }
  v1 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v1 = UserPresentListViewManager_TypeInfo;
  }
  return v1->static_fields->sortInfo;
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

  if ( (byte_4A59F04 & 1) == 0 )
  {
    sub_1B885B0(&UserPresentListViewManager_CallbackFunc_TypeInfo);
    byte_4A59F04 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A59F06 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A59F06 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A59F08 & 1) == 0 )
  {
    sub_1B885B0(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    byte_4A59F08 = 1;
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
    v8 = sub_1BC3AA0(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  UserPresentListViewManager__get_select_idx(v10, v11);
}


void __fastcall UserPresentListViewManager__resetCheckStatus(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v4; // w9

  if ( (byte_4A59F18 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4A59F18 = 1;
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
    sub_1B8880C(0LL, type);
  UserPresentBoxErrorDialog__setJumpType(dialog, type, method);
}


void __fastcall UserPresentListViewManager__set_expiredPresents(
        UserPresentListViewManager_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._expiredPresents_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._expiredPresents_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  const MethodInfo *v6; // x2
  int32_t kind; // w8
  System_String_o *v8; // x1
  __int64 *v9; // x8

  if ( (byte_4A59F1B & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11051/*"REJECT_NORMAL_TXT"*/);
    sub_1B885B0(&StringLiteral_11047/*"REJECT_ALL_TXT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59F1B = 1;
  }
  this->fields.receivecCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.receivecCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  kind = this->fields.kind;
  if ( !kind )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_11051/*"REJECT_NORMAL_TXT"*/;
    goto LABEL_12;
  }
  if ( (unsigned int)(kind - 1) <= 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_11047/*"REJECT_ALL_TXT"*/;
LABEL_12:
    v8 = LocalizationManager__Get((System_String_o *)*v9, 0LL);
    goto LABEL_13;
  }
  v8 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_13:
  UserPresentListViewManager__OpenNoticeDlg(this, v8, v6);
}


void __fastcall UserPresentListViewManager__updateCheckStatus(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct System_Collections_Generic_List_long__o *checkedIdList; // x21
  void *m_parent; // x0
  int32_t size; // w25
  BalanceConfig_c *v7; // x0
  int32_t PresentBoxCheckMax; // w26
  System_Collections_Generic_List_long__o *v9; // x20
  const MethodInfo *v10; // x2
  int32_t v11; // w21
  UserPresentListViewItem_o *v12; // x27
  UserPresentListViewItem_o *v13; // x22
  __int64 methodPtr_low; // x9
  int64_t v15; // x23
  const MethodInfo *v16; // x3
  int32_t v17; // w0
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  struct ItemEntity_o *itemEnt; // x8
  struct System_Collections_Generic_List_long__o *v22; // x8
  UserPresentListViewManager_o *v23; // x0
  int32_t v24; // w1
  const MethodInfo *v25; // x2
  int v26; // [xsp+Ch] [xbp-64h]

  if ( (byte_4A59F17 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__IndexOf__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor___76036712);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&UserPresentListViewItem_TypeInfo);
    byte_4A59F17 = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList && checkedIdList->fields._size )
  {
    v26 = 1;
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
    v26 = 0;
  }
  size = checkedIdList->fields._size;
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
    checkedIdList = this->fields.checkedIdList;
  }
  PresentBoxCheckMax = v7->static_fields->PresentBoxCheckMax;
  v9 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_55464252(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)checkedIdList,
    (const MethodInfo_34E513C *)Method_System_Collections_Generic_List_long___ctor___76036712);
  m_parent = this->fields.itemList;
  if ( !m_parent )
LABEL_39:
    sub_1B8880C(m_parent, method);
  v11 = 0;
  v12 = 0LL;
  while ( 1 )
  {
    if ( v11 >= *((_DWORD *)m_parent + 6) )
    {
      v22 = this->fields.checkedIdList;
      if ( v22 )
      {
        m_parent = this->fields.m_parent;
        if ( m_parent )
        {
          UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)m_parent, v22->fields._size, v10);
          return;
        }
      }
      goto LABEL_39;
    }
    m_parent = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)m_parent,
                 v11,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !m_parent )
      goto LABEL_39;
    method = (const MethodInfo *)UserPresentListViewItem_TypeInfo;
    v13 = (UserPresentListViewItem_o *)m_parent;
    methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)m_parent + 304LL) < (unsigned int)methodPtr_low
      || *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)m_parent + 200LL) + 8 * methodPtr_low - 8) != UserPresentListViewItem_TypeInfo )
    {
      break;
    }
    if ( !v9 )
      goto LABEL_39;
    v15 = *((_QWORD *)m_parent + 20);
    if ( System_Collections_Generic_List_long___Remove(
           v9,
           v15,
           (const MethodInfo_34E6D64 *)Method_System_Collections_Generic_List_long__Remove__) )
    {
      m_parent = this->fields.checkedIdList;
      if ( !m_parent )
        goto LABEL_39;
      v17 = System_Collections_Generic_List_long___IndexOf(
              (System_Collections_Generic_List_long__o *)m_parent,
              v15,
              (const MethodInfo_34E64E4 *)Method_System_Collections_Generic_List_long__IndexOf__);
      UserPresentListViewItem__setCheckBoxed(v13, 1, v17 + 1, v18);
    }
    else
    {
      UserPresentListViewItem__setCheckBoxed(v13, 0, -1, v16);
      if ( size < PresentBoxCheckMax )
        v12 = v13;
      if ( size < PresentBoxCheckMax )
      {
        if ( v26 && (usrPresentEnt = v13->fields.usrPresentEnt) != 0LL )
        {
          if ( usrPresentEnt->fields.giftType == 2 )
          {
            itemEnt = v13->fields.itemEnt;
            if ( !itemEnt )
              goto LABEL_39;
            method = (const MethodInfo *)(itemEnt->fields.type == 24);
          }
          else
          {
            method = 0LL;
          }
          v13 = v12;
          if ( !v12 )
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
      UserPresentListViewItem__setBlocked(v13, (bool)method, v19);
    }
    m_parent = this->fields.itemList;
    ++v11;
    if ( !m_parent )
      goto LABEL_39;
  }
  sub_1B88ACC(m_parent);
  UserPresentListViewManager__GetItem(v23, v24, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager_CallbackFunc___ctor(
        UserPresentListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19CDCB0;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19CDC90;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CDC48;
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
  return (System_IAsyncResult_o *)sub_1B88564(this, &v6, callback, object);
}


void __fastcall UserPresentListViewManager_CallbackFunc__EndInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19CDD34;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CDCEC;
}


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
  if ( (byte_4A59F26 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A59F26 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall UserPresentListViewManager_ReceiveCallbackFunc__EndInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A59F27 & 1) == 0 )
  {
    sub_1B885B0(&UserPresentListViewManager___c_TypeInfo);
    byte_4A59F27 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(UserPresentListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  UserPresentListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)UserPresentListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  ListViewItem_o *v5; // x20
  __int64 methodPtr_low; // x9
  int64_t sortValue0; // x8
  int64_t v8; // x9
  UserPresentListViewManager___c_o *v10; // x0
  ListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2

  v5 = a;
  if ( (byte_4A59F28 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1B885B0(&UserPresentListViewItem_TypeInfo);
    byte_4A59F28 = 1;
  }
  if ( !v5 )
    goto LABEL_12;
  a = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v5->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo )
  {
    sortValue0 = v5[1].fields.sortValue0;
    if ( !sortValue0 || !b )
      goto LABEL_12;
    if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo )
    {
      v8 = b[1].fields.sortValue0;
      if ( v8 )
        return *(_QWORD *)(sortValue0 + 88) - *(_DWORD *)(v8 + 88);
LABEL_12:
      sub_1B8880C(this, a);
    }
  }
  else
  {
    sub_1B88ACC(v5);
  }
  sub_1B88ACC(b);
  return UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(v10, v11, v12);
}


bool __fastcall UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *obj,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x19
  __int64 methodPtr_low; // x9
  int64_t sortValue0; // x8
  _DWORD *monitor; // x8
  UserPresentListViewManager___c_o *v8; // x0
  ListViewItem_o *v9; // x1
  ListViewItem_o *v10; // x2
  const MethodInfo *v11; // x3

  v3 = obj;
  if ( (byte_4A59F29 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1B885B0(&UserPresentListViewItem_TypeInfo);
    byte_4A59F29 = 1;
  }
  if ( !v3 )
    goto LABEL_11;
  obj = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (UserPresentListViewItem_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo )
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
      sub_1B8880C(this, obj);
    }
    return 0;
  }
  else
  {
    sub_1B88ACC(v3);
    return UserPresentListViewManager___c___GetAllPresentStrings_b__60_2(v8, v9, v10, v11);
  }
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
  if ( (byte_4A59F2A & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1B885B0(&UserPresentListViewItem_TypeInfo);
    byte_4A59F2A = 1;
  }
  if ( !v5 )
    goto LABEL_17;
  methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v5->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
  {
    goto LABEL_18;
  }
  this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_NameText(
                                               (UserPresentListViewItem_o *)v5,
                                               (const MethodInfo *)UserPresentListViewItem_TypeInfo);
  if ( !b )
    goto LABEL_17;
  v7 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) < (unsigned int)v7
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
  result = System_String__CompareTo_61714332((System_String_o *)v8, (System_String_o *)this, 0LL);
  if ( result )
    return result;
  a = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  v10 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v5->klass->vtable._0_Equals.methodPtr) < (unsigned int)v10
    || (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[v10 - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_18:
    sub_1B88ACC(v5);
    goto LABEL_19;
  }
  v11 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v11
    && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v11 - 1] == UserPresentListViewItem_TypeInfo )
  {
    this = (UserPresentListViewManager___c_o *)v5[1].fields.sortValue2;
    if ( this )
      return System_String__CompareTo_61714332((System_String_o *)this, (System_String_o *)b[1].fields.sortValue2, 0LL);
LABEL_17:
    sub_1B8880C(this, a);
  }
LABEL_19:
  sub_1B88ACC(b);
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
  ListViewItem_o *v5; // x20
  __int64 methodPtr_low; // x9
  int64_t sortValue0; // x8
  int64_t v8; // x9
  UserPresentListViewManager___c__DisplayClass67_0_o *v10; // x0
  ListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2

  v5 = a;
  if ( (byte_4A59F2B & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1B885B0(&UserPresentListViewItem_TypeInfo);
    byte_4A59F2B = 1;
  }
  if ( !v5 )
    goto LABEL_12;
  a = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v5->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo )
  {
    sortValue0 = v5[1].fields.sortValue0;
    if ( !sortValue0 || !b )
      goto LABEL_12;
    if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo )
    {
      v8 = b[1].fields.sortValue0;
      if ( v8 )
        return *(_QWORD *)(sortValue0 + 88) - *(_DWORD *)(v8 + 88);
LABEL_12:
      sub_1B8880C(this, a);
    }
  }
  else
  {
    sub_1B88ACC(v5);
  }
  sub_1B88ACC(b);
  return UserPresentListViewManager___c__DisplayClass67_0___OpenSelectableDialog_b__0(v10, v11, v12);
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
  int32_t v3; // w3
  UserPresentListViewManager___c__DisplayClass67_0_o *v5; // x19
  __int64 methodPtr_low; // x10
  int64_t sortValue0; // x8
  ServantStatusBattleListViewItem_c *monitor; // x1
  ServantStatusBattleListViewItem_o *p_ticketItem; // x19
  struct ItemEntity_o *ticketItem; // t1

  v5 = this;
  if ( (byte_4A59F2C & 1) == 0 )
  {
    this = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_1B885B0(&UserPresentListViewItem_TypeInfo);
    byte_4A59F2C = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  sortValue0 = obj[1].fields.sortValue0;
  if ( !sortValue0 )
    return 1;
  if ( *(_DWORD *)(sortValue0 + 72) != 2 )
    return 1;
  monitor = (ServantStatusBattleListViewItem_c *)obj[1].monitor;
  if ( !monitor || LODWORD(monitor->_1.this_arg.data) != 24 || LODWORD(monitor->_1.name) != v5->fields.ticketId )
    return 1;
  ticketItem = v5->fields.ticketItem;
  p_ticketItem = (ServantStatusBattleListViewItem_o *)&v5->fields.ticketItem;
  *((_DWORD *)&p_ticketItem[-1].fields.isMine + 1) += *(_DWORD *)(sortValue0 + 80);
  if ( !ticketItem )
  {
    p_ticketItem->klass = monitor;
    sub_1B88554(p_ticketItem, (int32_t)monitor, (int32_t)method, v3);
  }
  return 0;
}