void __fastcall UserPresentListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A6EC2B & 1) == 0 )
  {
    sub_1B90010(&ListViewSort_TypeInfo, v1);
    sub_1B90010(&UserPresentListViewManager_TypeInfo, v2);
    sub_1B90010(&StringLiteral_15249/*"UserPresent"*/, v3);
    byte_4A6EC2B = 1;
  }
  v4 = (ListViewSort_o *)sub_1B9025C(ListViewSort_TypeInfo);
  ListViewSort___ctor_40813280(v4, (System_String_o *)StringLiteral_15249/*"UserPresent"*/, 1, 0, 0LL);
  UserPresentListViewManager_TypeInfo->static_fields->sortInfo = v4;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)UserPresentListViewManager_TypeInfo->static_fields,
    (int32_t)v4,
    v5,
    v6);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  int64_t m_parent; // x0
  System_Collections_Generic_IEnumerable_T__o *checkedIdList; // x22
  System_Collections_Generic_List_long__o *v19; // x21
  const MethodInfo *v20; // x3
  signed int max_length; // w8
  il2cpp_array_size_t v22; // w22
  Il2CppClass **v23; // x23
  Il2CppClass *v24; // x8
  UserPresentBoxEntity_o **v25; // x23
  Il2CppClass *v26; // t1
  UserPresentBoxEntity_o *v27; // x24
  UserPresentListViewItem_o *v28; // x23
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  struct System_Collections_Generic_List_long__o *v36; // x20
  int32_t v37; // w22
  const MethodInfo *v38; // x1
  __int64 v39; // x8
  unsigned __int64 v40; // x21
  UserPresentBoxEntity_o *v41; // x23
  UserPresentListViewItem_o *v42; // x22
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8

  if ( (byte_4A6EC16 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__Add__, presentList);
    sub_1B90010(&Method_System_Collections_Generic_List_long__Remove__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_long___ctor___76120848, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_long__get_Item__, v8);
    sub_1B90010(&System_Collections_Generic_List_long__TypeInfo, v9);
    sub_1B90010(&UserPresentListViewItem_TypeInfo, v10);
    byte_4A6EC16 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.selectPresentData = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.selectPresentData, 0, v11, v12);
  this->fields.presentIds = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.presentIds, 0, v13, v14);
  m_parent = (int64_t)this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_38;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 0, 0, v16);
  checkedIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v19 = (System_Collections_Generic_List_long__o *)sub_1B9025C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_55542472(
      v19,
      checkedIdList,
      (const MethodInfo_34F82C8 *)Method_System_Collections_Generic_List_long___ctor___76120848);
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
        if ( !v26 || !v19 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v19,
                     (int64_t)v24->_1.namespaze,
                     (const MethodInfo_34F9EF0 *)Method_System_Collections_Generic_List_long__Remove__);
        if ( v22 >= presentList->max_length )
          goto LABEL_39;
        v27 = *v25;
        v28 = (UserPresentListViewItem_o *)sub_1B9025C(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v28, v22, v27, v29);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v32 = *(_QWORD *)(m_parent + 16);
        v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v32 )
          goto LABEL_38;
        v34 = *(int *)(m_parent + 24);
        if ( (unsigned int)v34 >= *(_DWORD *)(v32 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v28,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = v32 + 8 * v34;
          *(_DWORD *)(m_parent + 24) = v34 + 1;
          *(_QWORD *)(v35 + 32) = v28;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v35 + 32), (int32_t)v28, v30, v31);
        }
        max_length = presentList->max_length;
        if ( (int)++v22 >= max_length )
          goto LABEL_18;
      }
      goto LABEL_39;
    }
LABEL_18:
    if ( !v19 )
LABEL_38:
      sub_1B9026C(m_parent, v15);
    v36 = this->fields.checkedIdList;
    if ( v19->fields._size >= 1 )
    {
      v37 = 0;
      do
      {
        m_parent = System_Collections_Generic_List_long___get_Item(
                     v19,
                     v37,
                     (const MethodInfo_34F8704 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !v36 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v36,
                     m_parent,
                     (const MethodInfo_34F9EF0 *)Method_System_Collections_Generic_List_long__Remove__);
        v36 = this->fields.checkedIdList;
      }
      while ( ++v37 < v19->fields._size );
    }
    if ( !v36 )
      goto LABEL_38;
    if ( v36->fields._size >= 1 )
    {
      m_parent = (int64_t)this->fields.m_parent;
      if ( !m_parent )
        goto LABEL_38;
      UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 1, 1, v20);
      UserPresentListViewManager__updateCheckStatus(this, v38);
    }
  }
  else
  {
    if ( !presentList )
      goto LABEL_38;
    v39 = *(_QWORD *)&presentList->max_length;
    if ( (int)v39 >= 1 )
    {
      v40 = 0LL;
      while ( v40 < (unsigned int)v39 )
      {
        v41 = presentList->m_Items[v40];
        v42 = (UserPresentListViewItem_o *)sub_1B9025C(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v42, v40, v41, v43);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v46 = *(_QWORD *)(m_parent + 16);
        v47 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v46 )
          goto LABEL_38;
        v48 = *(int *)(m_parent + 24);
        if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v42,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = v46 + 8 * v48;
          *(_DWORD *)(m_parent + 24) = v48 + 1;
          *(_QWORD *)(v49 + 32) = v42;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v49 + 32), (int32_t)v42, v44, v45);
        }
        LODWORD(v39) = presentList->max_length;
        if ( (__int64)++v40 >= (int)v39 )
          goto LABEL_37;
      }
LABEL_39:
      sub_1B90274(m_parent, v15);
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

  if ( (byte_4A6EC11 & 1) == 0 )
  {
    sub_1B90010(&UserPresentListViewManager_TypeInfo, v1);
    byte_4A6EC11 = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v2 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v2->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1B9026C(0LL, v1);
  ListViewSort__DeleteContinueData(sortInfo, 0LL);
}


void __fastcall UserPresentListViewManager__DestroyList(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B9026C(0LL, v3);
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

  if ( (byte_4A6EC2A & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&LocalizationManager_TypeInfo, v3);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B90010(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, v5);
    sub_1B90010(&StringLiteral_10457/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, v6);
    byte_4A6EC2A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10457/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0LL);
  v9 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, 0LL);
  if ( !Instance )
    sub_1B9026C(v10, v11);
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

  if ( (byte_4A6EC25 & 1) == 0 )
  {
    sub_1B90010(&System_Action_SceneList_Type__TypeInfo, *(_QWORD *)&scene);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B90010(&Method_UserPresentListViewManager_EndNoticeDlg__, v6);
    byte_4A6EC25 = 1;
  }
  dialog = this->fields.dialog;
  v8 = (System_Action_T__o *)sub_1B9025C(System_Action_SceneList_Type__TypeInfo);
  System_Action_Int32Enum____ctor(v8, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0LL);
  if ( !dialog )
    goto LABEL_14;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(dialog, (System_Action_SceneList_Type__o *)v8, v11);
  if ( scene == -1 )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( CommonUI__IsActive_MasterMission((CommonUI_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_1B9026C(Instance, v10);
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
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x1
  System_Collections_Generic_List_object__o *NameText; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v31; // x20
  System_Comparison_T__o *v32; // x21
  Il2CppObject *v33; // x22
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_List_object__o *v37; // x20
  System_Predicate_object__o *v38; // x21
  Il2CppObject *v39; // x22
  struct UserPresentListViewManager___c_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_Collections_Generic_List_object__o *v43; // x20
  int v44; // w8
  System_Comparison_T__o *v45; // x21
  Il2CppObject *v46; // x22
  struct UserPresentListViewManager___c_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_Text_StringBuilder_o *v50; // x20
  int v51; // w24
  int32_t v52; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v55; // x22
  System_String_o *v56; // x23

  if ( (byte_4A6EC22 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&System_Comparison_ListViewItem__TypeInfo, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__RemoveRange__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem___ctor___76121712, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_1B90010(&System_Collections_Generic_List_ListViewItem__TypeInfo, v11);
    sub_1B90010(&LocalizationManager_TypeInfo, v12);
    sub_1B90010(&System_Predicate_ListViewItem__TypeInfo, v13);
    sub_1B90010(&System_Text_StringBuilder_TypeInfo, v14);
    sub_1B90010(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__, v15);
    sub_1B90010(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__, v16);
    sub_1B90010(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__, v17);
    sub_1B90010(&UserPresentListViewManager___c_TypeInfo, v18);
    sub_1B90010(&UserPresentListViewItem_TypeInfo, v19);
    sub_1B90010(&StringLiteral_10462/*"PRESENT_INFO"*/, v20);
    byte_4A6EC22 = 1;
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
  v26 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_55640756(
    v26,
    itemList,
    (const MethodInfo_35102B4 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76121712);
  this->fields.presentAllSelectedList = (struct System_Collections_Generic_List_ListViewItem__o *)v26;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.presentAllSelectedList, (int32_t)v26, v27, v28);
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  v31 = this->fields.presentAllSelectedList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v32 = *(System_Comparison_T__o **)(*(_QWORD *)&NameText[4].fields._size + 24LL);
  if ( !v32 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v33 = **(Il2CppObject ***)&NameText[4].fields._size;
    v32 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      v32,
      v33,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__,
      0LL);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__60_0 = (struct System_Comparison_ListViewItem__o *)v32;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__60_0, (int32_t)v32, v35, v36);
  }
  if ( !v31 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_55649412(
    (System_Collections_Generic_List_object__o *)v31,
    v32,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  v37 = *p_presentAllSelectedList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v38 = *(System_Predicate_object__o **)(*(_QWORD *)&NameText[4].fields._size + 32LL);
  if ( !v38 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v39 = **(Il2CppObject ***)&NameText[4].fields._size;
    v38 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_object____ctor(
      v38,
      v39,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__,
      0LL);
    v40 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v40->__9__60_1 = (struct System_Predicate_ListViewItem__o *)v38;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v40->__9__60_1, (int32_t)v38, v41, v42);
  }
  if ( !v37 )
    goto LABEL_53;
  System_Collections_Generic_List_object___RemoveAll(
    v37,
    (System_Predicate_T__o *)v38,
    (const MethodInfo_351201C *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  }
  v43 = *p_presentAllSelectedList;
  if ( !*p_presentAllSelectedList )
    goto LABEL_53;
  v29 = (const MethodInfo *)*(unsigned int *)(*(_QWORD *)&NameText[4].fields._size + 116LL);
  v44 = v43->fields._size;
  if ( v44 > (int)v29 )
  {
    System_Collections_Generic_List_object___RemoveRange(
      *p_presentAllSelectedList,
      (int32_t)v29,
      v44 - (_DWORD)v29,
      (const MethodInfo_351222C *)Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    v43 = *p_presentAllSelectedList;
  }
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v45 = *(System_Comparison_T__o **)(*(_QWORD *)&NameText[4].fields._size + 40LL);
  if ( !v45 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v46 = **(Il2CppObject ***)&NameText[4].fields._size;
    v45 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      v45,
      v46,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__,
      0LL);
    v47 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v47->__9__60_2 = (struct System_Comparison_ListViewItem__o *)v45;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v47->__9__60_2, (int32_t)v45, v48, v49);
  }
  if ( !v43 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_55649412(
    v43,
    v45,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  v50 = (System_Text_StringBuilder_o *)sub_1B9025C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v50, 0LL);
  if ( !*p_presentAllSelectedList )
    goto LABEL_53;
  v51 = (*p_presentAllSelectedList)->fields._size;
  if ( v51 >= 1 )
  {
    v52 = 0;
    while ( 1 )
    {
      if ( v52 )
      {
        if ( !v50 )
          break;
        System_Text_StringBuilder__Append_60951316(v50, 0xAu, 0LL);
      }
      NameText = *p_presentAllSelectedList;
      if ( !*p_presentAllSelectedList )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               NameText,
               v52,
               (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item
        && (methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v55 = (UserPresentListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo
            ? Item
            : 0LL;
      }
      else
      {
        v55 = 0LL;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      NameText = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_10462/*"PRESENT_INFO"*/,
                                                                0LL);
      if ( !v55 )
        break;
      v56 = (System_String_o *)NameText;
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewItem__get_NameText(
                                                                (UserPresentListViewItem_o *)v55,
                                                                v29);
      if ( !v50 )
        break;
      NameText = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__AppendFormat_60955340(
                                                                v50,
                                                                v56,
                                                                (Il2CppObject *)NameText,
                                                                (Il2CppObject *)v55[11].monitor,
                                                                0LL);
      if ( v51 == ++v52 )
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v50->klass->vtable._3_ToString.method)(
                                    v50,
                                    v50->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    }
LABEL_53:
    sub_1B9026C(NameText, v29);
  }
  if ( !v50 )
    goto LABEL_53;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v50->klass->vtable._3_ToString.method)(
                              v50,
                              v50->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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

  if ( (byte_4A6EC17 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B90010(&UserPresentListViewItem_TypeInfo, v5);
    byte_4A6EC17 = 1;
  }
  result = (UserPresentListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (UserPresentListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4A6EC15 & 1) == 0 )
  {
    sub_1B90010(&UserPresentListViewManager_TypeInfo, method);
    byte_4A6EC15 = 1;
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v7, v2, v3);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B9026C(0LL, v8);
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

  if ( (byte_4A6EC12 & 1) == 0 )
  {
    sub_1B90010(&UserPresentListViewManager_TypeInfo, v1);
    byte_4A6EC12 = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v2 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v2->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1B9026C(0LL, v1);
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
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  struct UserPresentListViewItem_o *selectItem; // x8
  struct UserPresentBoxEntity_o *usrPresentEnt; // x1
  UserPresentListViewManager_o **p_selectPresentData; // x23
  UserPresentListViewManager_o **p_checkedIdList; // x21
  System_Collections_Generic_List_long__o *v28; // x24
  int32_t v29; // w2
  int32_t v30; // w3
  int m_CancellationTokenSource; // w8
  int v32; // w25
  int32_t v33; // w24
  struct ItemEntity_o *itemEnt; // x8
  int64_t endedAt; // x25
  Il2CppObject *MasterData_object; // x24
  BalanceConfig_c *v37; // x0
  int v38; // w24
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  const MethodInfo *v43; // x1
  int32_t v44; // w24
  BalanceConfig_c *v45; // x0
  _QWORD *v46; // x8
  int32_t PresentBoxCheckMax; // w25
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 m_CancellationTokenSource_low; // x10
  BalanceConfig_c *v51; // x8
  int32_t v52; // w22
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x2
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  const MethodInfo *v56; // x3
  Il2CppObject *v57; // [xsp+8h] [xbp-58h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_4A6EC1E & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, obj);
    sub_1B90010(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1B90010(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1B90010(&DataManager_TypeInfo, v7);
    sub_1B90010(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_long__RemoveAt__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_long__get_Item__, v13);
    sub_1B90010(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_1B90010(&NetworkManager_TypeInfo, v15);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    this = (UserPresentListViewManager_o *)sub_1B90010(&Method_UserPresentListViewManager_OnClickListCheck__, v17);
    byte_4A6EC1E = 1;
  }
  entity = 0LL;
  v57 = 0LL;
  if ( !v3 )
    goto LABEL_77;
  Item = UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = Item;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.selectItem, (int32_t)Item, v20, v21);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_77;
  usrPresentEnt = selectItem->fields.usrPresentEnt;
  p_selectPresentData = (UserPresentListViewManager_o **)&v4->fields.selectPresentData;
  v4->fields.selectPresentData = usrPresentEnt;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.selectPresentData, (int32_t)usrPresentEnt, v22, v23);
  p_checkedIdList = (UserPresentListViewManager_o **)&v4->fields.checkedIdList;
  if ( !v4->fields.checkedIdList )
  {
    v28 = (System_Collections_Generic_List_long__o *)sub_1B9025C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v28,
      (const MethodInfo_34F81A0 *)Method_System_Collections_Generic_List_long___ctor__);
    *p_checkedIdList = (UserPresentListViewManager_o *)v28;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.checkedIdList, (int32_t)v28, v29, v30);
  }
  if ( !*p_selectItem )
    goto LABEL_77;
  if ( (*p_selectItem)->fields.presentId >= 1 )
  {
    this = *p_checkedIdList;
    if ( !*p_checkedIdList )
      goto LABEL_77;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v32 = m_CancellationTokenSource - 1;
    if ( m_CancellationTokenSource >= 1 )
    {
      v33 = 0;
      while ( 1 )
      {
        this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___get_Item(
                                                 (System_Collections_Generic_List_long__o *)this,
                                                 v33,
                                                 (const MethodInfo_34F8704 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !*p_selectItem )
          goto LABEL_77;
        if ( this == (UserPresentListViewManager_o *)(*p_selectItem)->fields.presentId )
          break;
        if ( v32 == v33 )
          goto LABEL_17;
        this = *p_checkedIdList;
        ++v33;
        if ( !*p_checkedIdList )
          goto LABEL_77;
      }
      v41 = Method_UserPresentListViewManager_OnClickListCheck__;
      if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
        v41 = (_QWORD *)sub_1B90028(Method_UserPresentListViewManager_OnClickListCheck__);
      v42 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v41, v41[4]);
      OverwriteAssetSoundName__PlaySystemSe(v42, 0, 0LL);
      this = *p_checkedIdList;
      if ( *p_checkedIdList )
      {
        System_Collections_Generic_List_long___RemoveAt(
          (System_Collections_Generic_List_long__o *)this,
          v33,
          (const MethodInfo_34FA174 *)Method_System_Collections_Generic_List_long__RemoveAt__);
        UserPresentListViewManager__updateCheckStatus(v4, v43);
        return;
      }
LABEL_77:
      sub_1B9026C(this, obj);
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
        this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_77;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
          v37 = BalanceConfig_TypeInfo;
          v38 = LODWORD((*p_selectPresentData)->fields.scrollView) + entity->fields.num;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v37 = BalanceConfig_TypeInfo;
          }
          if ( v38 > v37->static_fields->UserItemMax )
            goto LABEL_36;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ItemMaster___);
          if ( !*p_selectPresentData || !this )
            goto LABEL_77;
          this = (UserPresentListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   &v57,
                                                   HIDWORD((*p_selectPresentData)->fields.sortOrderSprite),
                                                   (const MethodInfo_312C5FC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (UserPresentListViewManager_o *)v57;
            if ( !v57 )
              goto LABEL_77;
            this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v57, 0LL);
            if ( (int)this >= 1 )
            {
              this = (UserPresentListViewManager_o *)v57;
              if ( !v57 )
                goto LABEL_77;
              this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v57, 0LL);
              if ( v38 > (int)this )
              {
LABEL_36:
                v39 = Method_UserPresentListViewManager_OnClickListCheck__;
                if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
                  v39 = (_QWORD *)sub_1B90028(Method_UserPresentListViewManager_OnClickListCheck__);
                v40 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v39, v39[4]);
                goto LABEL_64;
              }
            }
          }
        }
LABEL_53:
        if ( !*p_checkedIdList )
          goto LABEL_77;
        v44 = (int32_t)(*p_checkedIdList)->fields.m_CancellationTokenSource;
        v45 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v45 = BalanceConfig_TypeInfo;
        }
        v46 = Method_UserPresentListViewManager_OnClickListCheck__;
        PresentBoxCheckMax = v45->static_fields->PresentBoxCheckMax;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
          v46 = (_QWORD *)sub_1B90028(Method_UserPresentListViewManager_OnClickListCheck__);
        v40 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v46, v46[4]);
        if ( v44 < PresentBoxCheckMax )
        {
          OverwriteAssetSoundName__PlaySystemSe(v40, 0, 0LL);
          if ( !*p_selectItem )
            goto LABEL_77;
          this = *p_checkedIdList;
          if ( !*p_checkedIdList )
            goto LABEL_77;
          obj = (UserPresentListViewObject_o *)(*p_selectItem)->fields.presentId;
          v48 = *(_QWORD *)&this->fields.m_CachedPtr;
          v49 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v48 )
            goto LABEL_77;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v48 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              (int64_t)obj,
              *(const MethodInfo_34F89F4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            this = *p_checkedIdList;
            if ( !*p_checkedIdList )
              goto LABEL_77;
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v48 + 8 * m_CancellationTokenSource_low + 32) = obj;
          }
          v51 = BalanceConfig_TypeInfo;
          v52 = (int32_t)this->fields.m_CancellationTokenSource;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v51 = BalanceConfig_TypeInfo;
          }
          if ( v52 < v51->static_fields->PresentBoxCheckMax )
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
              v53);
            checkedIdList = v4->fields.checkedIdList;
            if ( !checkedIdList )
              goto LABEL_77;
            this = (UserPresentListViewManager_o *)v4->fields.m_parent;
            if ( !this )
              goto LABEL_77;
            UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)this, checkedIdList->fields._size, v54);
          }
          UserPresentListViewManager__updateCheckStatus(v4, (const MethodInfo *)obj);
          this = (UserPresentListViewManager_o *)v4->fields.m_parent;
          if ( !this )
            goto LABEL_77;
          UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)this, 1, 1, v56);
          return;
        }
LABEL_64:
        OverwriteAssetSoundName__PlaySystemSe(v40, 1, 0LL);
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
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  struct UserPresentListViewItem_o *selectItem; // x8
  struct UserPresentBoxEntity_o *usrPresentEnt; // x1
  struct UserPresentBoxEntity_o **p_selectPresentData; // x21
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  const MethodInfo *v33; // x1
  struct ItemEntity_o *itemEnt; // x8
  __int64 endedAt; // x23
  struct ItemEntity_o *v36; // x8
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  const MethodInfo *v39; // x2
  struct ItemEntity_o *v40; // x8
  Il2CppObject *MasterData_object; // x22
  BalanceConfig_c *v42; // x0
  int32_t v43; // w22
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  const MethodInfo *v46; // x2
  UserPresentListViewManager___c_c *v47; // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *_9__55_0; // x20
  Il2CppObject *v49; // x21
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  int32_t v52; // w3
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  ServantStatusBattleListViewItem_o *p__9__55_0; // x0
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  UserPresentListViewManager___c_c *v57; // x0
  Il2CppObject *v58; // x21
  const MethodInfo *v59; // x3
  struct UserPresentListViewManager___c_StaticFields *v60; // x0
  _QWORD *v61; // x0
  System_Reflection_MethodBase_o *v62; // x0
  System_Collections_Generic_List_long__o *v63; // x21
  UserPresentListViewManager_o **p_presentIds; // x20
  int32_t v65; // w2
  int32_t v66; // w3
  struct UserPresentListViewItem_o *v67; // x8
  __int64 v68; // x8
  _QWORD *v69; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const MethodInfo *v71; // x4
  const MethodInfo *v72; // x2
  ItemEntity_o *v73; // [xsp+0h] [xbp-40h] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_4A6EC1D & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, obj);
    sub_1B90010(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1B90010(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1B90010(&DataManager_TypeInfo, v7);
    sub_1B90010(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_long__ToArray__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_1B90010(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1B90010(&NetworkManager_TypeInfo, v14);
    sub_1B90010(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v15);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B90010(&Method_UserPresentListViewManager___c__OnClickListView_b__55_0__, v17);
    sub_1B90010(&Method_UserPresentListViewManager___c__OnClickListView_b__55_1__, v18);
    sub_1B90010(&UserPresentListViewManager___c_TypeInfo, v19);
    this = (UserPresentListViewManager_o *)sub_1B90010(&Method_UserPresentListViewManager_OnClickListView__, v20);
    byte_4A6EC1D = 1;
  }
  v73 = 0LL;
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.selectItem, (int32_t)Item, v24, v25);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_83;
  usrPresentEnt = selectItem->fields.usrPresentEnt;
  p_selectPresentData = &v4->fields.selectPresentData;
  v4->fields.selectPresentData = usrPresentEnt;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.selectPresentData, (int32_t)usrPresentEnt, v26, v27);
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
      v36 = (*p_selectItem)->fields.itemEnt;
      if ( !v36 )
        goto LABEL_83;
      if ( v36->fields.type == 24 )
      {
        v37 = Method_UserPresentListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v37 = (_QWORD *)sub_1B90028(Method_UserPresentListViewManager_OnClickListView__);
        v38 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v37, v37[4]);
        OverwriteAssetSoundName__PlaySystemSe(v38, 0, 0LL);
        if ( *p_selectItem )
        {
          v40 = (*p_selectItem)->fields.itemEnt;
          if ( v40 )
          {
            UserPresentListViewManager__OpenSelectableDialog(v4, v40->fields.id, v39);
            return;
          }
        }
        goto LABEL_83;
      }
      this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_83;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
        v42 = BalanceConfig_TypeInfo;
        v43 = (*p_selectPresentData)->fields.num + entity->fields.num;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v42 = BalanceConfig_TypeInfo;
        }
        if ( v43 > v42->static_fields->UserItemMax )
        {
          v44 = Method_UserPresentListViewManager_OnClickListView__;
          if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
            v44 = (_QWORD *)sub_1B90028(Method_UserPresentListViewManager_OnClickListView__);
          v45 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v44, v44[4]);
          OverwriteAssetSoundName__PlaySystemSe(v45, 0, 0LL);
          v47 = UserPresentListViewManager___c_TypeInfo;
          if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
            v47 = UserPresentListViewManager___c_TypeInfo;
          }
          _9__55_0 = v47->static_fields->__9__55_0;
          if ( _9__55_0 )
            goto LABEL_52;
          if ( !v47->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v47);
            v47 = UserPresentListViewManager___c_TypeInfo;
          }
          v49 = (Il2CppObject *)v47->static_fields->__9;
          _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1B9025C(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
          UserPresentListViewManager_ReceiveCallbackFunc___ctor(
            _9__55_0,
            v49,
            Method_UserPresentListViewManager___c__OnClickListView_b__55_0__,
            v50);
          static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__55_0 = _9__55_0;
          p__9__55_0 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__55_0;
LABEL_51:
          sub_1B8FFB4(p__9__55_0, (int32_t)_9__55_0, v51, v52);
LABEL_52:
          UserPresentListViewManager__showErrorResultDlg(v4, _9__55_0, v46);
          return;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !this )
          goto LABEL_83;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (Il2CppObject **)&v73,
               (*p_selectPresentData)->fields.objectId,
               (const MethodInfo_312C5FC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          this = (UserPresentListViewManager_o *)v73;
          if ( !v73 )
            goto LABEL_83;
          if ( ItemEntity__GetMaxNum(v73, 0LL) >= 1 )
          {
            this = (UserPresentListViewManager_o *)v73;
            if ( !v73 )
              goto LABEL_83;
            if ( v43 > ItemEntity__GetMaxNum(v73, 0LL) )
            {
              v55 = Method_UserPresentListViewManager_OnClickListView__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
                v55 = (_QWORD *)sub_1B90028(Method_UserPresentListViewManager_OnClickListView__);
              v56 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v55, v55[4]);
              OverwriteAssetSoundName__PlaySystemSe(v56, 0, 0LL);
              v57 = UserPresentListViewManager___c_TypeInfo;
              if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
                v57 = UserPresentListViewManager___c_TypeInfo;
              }
              _9__55_0 = v57->static_fields->__9__55_1;
              if ( _9__55_0 )
                goto LABEL_52;
              if ( !v57->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v57);
                v57 = UserPresentListViewManager___c_TypeInfo;
              }
              v58 = (Il2CppObject *)v57->static_fields->__9;
              _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1B9025C(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
              UserPresentListViewManager_ReceiveCallbackFunc___ctor(
                _9__55_0,
                v58,
                Method_UserPresentListViewManager___c__OnClickListView_b__55_1__,
                v59);
              v60 = UserPresentListViewManager___c_TypeInfo->static_fields;
              v60->__9__55_1 = _9__55_0;
              p__9__55_0 = (ServantStatusBattleListViewItem_o *)&v60->__9__55_1;
              goto LABEL_51;
            }
          }
        }
      }
    }
    v61 = Method_UserPresentListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v61 = (_QWORD *)sub_1B90028(Method_UserPresentListViewManager_OnClickListView__);
    v62 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v61, v61[4]);
    OverwriteAssetSoundName__PlaySystemSe(v62, 8, 0LL);
    if ( *p_selectItem )
    {
      v4->fields._select_idx_k__BackingField = (*p_selectItem)->fields.index;
      v63 = (System_Collections_Generic_List_long__o *)sub_1B9025C(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v63,
        (const MethodInfo_34F81A0 *)Method_System_Collections_Generic_List_long___ctor__);
      p_presentIds = (UserPresentListViewManager_o **)&v4->fields.presentIds;
      v4->fields.presentIds = v63;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.presentIds, (int32_t)v63, v65, v66);
      v67 = v4->fields.selectItem;
      if ( v67 )
      {
        obj = (UserPresentListViewObject_o *)v67->fields.presentId;
        if ( (__int64)obj >= 1 )
        {
          this = *p_presentIds;
          if ( !*p_presentIds )
            goto LABEL_83;
          v68 = *(_QWORD *)&this->fields.m_CachedPtr;
          v69 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v68 )
            goto LABEL_83;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v68 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              (int64_t)obj,
              *(const MethodInfo_34F89F4 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v68 + 8 * m_CancellationTokenSource_low + 32) = obj;
          }
        }
        this = *p_presentIds;
        if ( *p_presentIds )
        {
          this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                   (System_Collections_Generic_List_long__o *)this,
                                                   (const MethodInfo_34FA4AC *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v4->fields.m_parent )
          {
            UserPresentBoxWindow__receivePresent(v4->fields.m_parent, (System_Int64_array *)this, 0, 0, v71);
            UserPresentListViewManager__SetMode_37453560(v4, 2, v72);
            return;
          }
        }
      }
    }
LABEL_83:
    sub_1B9026C(this, obj);
  }
LABEL_14:
  v31 = Method_UserPresentListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v31 = (_QWORD *)sub_1B90028(Method_UserPresentListViewManager_OnClickListView__);
  v32 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v31, v31[4]);
  OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0LL);
  UserPresentListViewManager__DlgForExpiredPresent(v4, v33);
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

  if ( (byte_4A6EC26 & 1) == 0 )
  {
    sub_1B90010(&Method_UserPresentListViewManager_OnClickSortAscendingOrder__, method);
    byte_4A6EC26 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_UserPresentListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028(Method_UserPresentListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B9026C(v5, v6);
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

  if ( (byte_4A6EC1C & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6EC1C = 1;
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
          sub_1B9026C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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

  if ( (byte_4A6EC24 & 1) == 0 )
  {
    sub_1B90010(&System_Action_SceneList_Type__TypeInfo, msg);
    sub_1B90010(&Method_UserPresentListViewManager_EndNoticeDlg__, v5);
    byte_4A6EC24 = 1;
  }
  dialog = this->fields.dialog;
  if ( !dialog
    || (UserPresentBoxErrorDialog__Open(dialog, msg, method),
        v7 = this->fields.dialog,
        v8 = (System_Action_T__o *)sub_1B9025C(System_Action_SceneList_Type__TypeInfo),
        System_Action_Int32Enum____ctor(v8, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0LL),
        !v7) )
  {
    sub_1B9026C(dialog, msg);
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
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Collections_Generic_List_ListViewItem__o *v28; // x22
  System_Predicate_object__o *v29; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v30; // x21
  System_Comparison_T__o *v31; // x22
  Il2CppObject *v32; // x23
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  const MethodInfo *v36; // x3

  if ( (byte_4A6EC28 & 1) == 0 )
  {
    sub_1B90010(&System_Comparison_ListViewItem__TypeInfo, *(_QWORD *)&ticketId);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem___ctor___76121712, v8);
    sub_1B90010(&System_Collections_Generic_List_ListViewItem__TypeInfo, v9);
    sub_1B90010(&System_Predicate_ListViewItem__TypeInfo, v10);
    sub_1B90010(&Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__, v11);
    sub_1B90010(&Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__, v12);
    sub_1B90010(&UserPresentListViewManager___c__DisplayClass67_0_TypeInfo, v13);
    sub_1B90010(&UserPresentListViewManager___c_TypeInfo, v14);
    byte_4A6EC28 = 1;
  }
  v15 = sub_1B9025C(UserPresentListViewManager___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
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
  v23 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_55640756(
    v23,
    itemList,
    (const MethodInfo_35102B4 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76121712);
  this->fields.presentTicketList = (struct System_Collections_Generic_List_ListViewItem__o *)v23;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.presentTicketList, (int32_t)v23, v24, v25);
  *(_DWORD *)(v15 + 20) = 0;
  *(_QWORD *)(v15 + 24) = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v15 + 24), 0, v26, v27);
  v28 = this->fields.presentTicketList;
  v29 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v29,
    (Il2CppObject *)v15,
    Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__,
    0LL);
  if ( !v28 )
    goto LABEL_18;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v28,
    (System_Predicate_T__o *)v29,
    (const MethodInfo_351201C *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  selectDialog = UserPresentListViewManager___c_TypeInfo;
  v30 = this->fields.presentTicketList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    selectDialog = UserPresentListViewManager___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)selectDialog + 23) + 48LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)selectDialog + 56) )
    {
      j_il2cpp_runtime_class_init_0(selectDialog);
      selectDialog = UserPresentListViewManager___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)selectDialog + 23);
    v31 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      v31,
      v32,
      Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__,
      0LL);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__67_1 = (struct System_Comparison_ListViewItem__o *)v31;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__67_1, (int32_t)v31, v34, v35);
  }
  if ( !v30
    || (System_Collections_Generic_List_object___Sort_55649412(
          (System_Collections_Generic_List_object__o *)v30,
          v31,
          (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_ListViewItem__Sort__),
        (selectDialog = this->fields.selectDialog) == 0LL) )
  {
LABEL_18:
    sub_1B9026C(selectDialog, v17);
  }
  PresentSelectableDlgComponent__Open(
    (PresentSelectableDlgComponent_o *)selectDialog,
    *(ItemEntity_o **)(v15 + 24),
    *(_DWORD *)(v15 + 20),
    v36);
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
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_List_object__o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x8
  System_Collections_Generic_List_object__o *v31; // x0
  void **v32; // x25
  void **v33; // x26
  _BOOL8 v34; // x0
  UserPresentListViewItem_c *v35; // x1
  UserPresentListViewItem_o *current; // x23
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_long__o *checkedIdList; // x0
  UserPresentBoxEntity_o *usrPresentEnt; // x0
  _BOOL8 IsExpired; // x0
  const MethodInfo *v41; // x1
  struct UserPresentBoxEntity_o *v42; // x9
  struct ItemEntity_o *itemEnt; // x9
  struct System_Collections_Generic_List_long__o **v44; // x19
  void **v45; // x20
  void **v46; // x26
  int64_t endedAt; // x25
  bool v48; // cc
  Il2CppObject *NameText; // x0
  const MethodInfo *v50; // x1
  Il2CppObject *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  Il2CppObject *v54; // x1
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  System_Collections_Generic_List_long__o *v59; // x0
  int64_t presentId; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  int32_t v64; // w1
  ServantStatusBattleListViewItem_o *p_expiredPresents_k__BackingField; // x22
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *klass; // x23
  Il2CppObject *Item; // x0
  System_String_o *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  const MethodInfo *v73; // x4
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A6EC21 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&kind);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_long__Contains__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_string__Contains__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_string__RemoveAt__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_1B90010(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1B90010(&System_Collections_Generic_List_long__TypeInfo, v18);
    sub_1B90010(&NetworkManager_TypeInfo, v19);
    sub_1B90010(&UserPresentListViewItem_TypeInfo, v20);
    sub_1B90010(&StringLiteral_15837/*"["*/, v21);
    sub_1B90010(&StringLiteral_1/*""*/, v22);
    sub_1B90010(&StringLiteral_16094/*"]"*/, v23);
    byte_4A6EC21 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  this->fields.kind = kind;
  v24 = (System_Collections_Generic_List_long__o *)sub_1B9025C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v24,
    (const MethodInfo_34F81A0 *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = &this->fields.presentIds;
  this->fields.presentIds = v24;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.presentIds, (int32_t)v24, v26, v27);
  v28 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_string___ctor__);
  v30 = 192LL;
  if ( kind == 1 )
    v30 = 432LL;
  v31 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v30);
  if ( !v31 )
    goto LABEL_62;
  v32 = &Method_System_Collections_Generic_List_string__Add__;
  v33 = &Method_System_Collections_Generic_List_long__Add__;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    v31,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v76 = v75;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v76,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v34 )
      break;
    current = (UserPresentListViewItem_o *)v76.fields._current;
    if ( v76.fields._current )
    {
      v35 = UserPresentListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v76.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (UserPresentListViewItem_c *)v76.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
      {
        sub_1B9052C(v76.fields._current);
LABEL_52:
        sub_1B9026C(IsExpired, v41);
      }
    }
    switch ( kind )
    {
      case 1:
        if ( !v76.fields._current )
          sub_1B9026C(v34, v35);
        goto LABEL_23;
      case 2:
        if ( !v76.fields._current )
          sub_1B9026C(v34, v35);
        if ( !Gift__IsServant_37739920((int32_t)v76.fields._current[10].monitor, 0LL)
          && !Gift__IsCommandCode_37740312(current->fields.giftType, 0LL) )
        {
          goto LABEL_23;
        }
        break;
      case 3:
        if ( !v76.fields._current )
          sub_1B9026C(v34, v35);
        checkedIdList = this->fields.checkedIdList;
        if ( !checkedIdList )
          sub_1B9026C(0LL, v35);
        if ( System_Collections_Generic_List_long___Contains(
               checkedIdList,
               (int64_t)v76.fields._current[10].klass,
               (const MethodInfo_34F8D6C *)Method_System_Collections_Generic_List_long__Contains__) )
        {
LABEL_23:
          usrPresentEnt = current->fields.usrPresentEnt;
          if ( !usrPresentEnt )
            sub_1B9026C(0LL, v35);
          IsExpired = UserPresentBoxEntity__IsExpired(usrPresentEnt, 0, 0LL);
          v42 = current->fields.usrPresentEnt;
          if ( !v42 )
            goto LABEL_52;
          if ( v42->fields.giftType == 2 )
          {
            itemEnt = current->fields.itemEnt;
            if ( !itemEnt )
              sub_1B9026C(IsExpired, v41);
            if ( itemEnt->fields.type != 24 )
            {
              if ( IsExpired )
                goto LABEL_33;
              v44 = p_presentIds;
              v45 = v33;
              v46 = v32;
              endedAt = itemEnt->fields.endedAt;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v48 = endedAt <= NetworkManager__getTime(0LL);
              v32 = v46;
              v33 = v45;
              p_presentIds = v44;
              if ( v48 )
                goto LABEL_33;
LABEL_39:
              v59 = *p_presentIds;
              if ( !*p_presentIds )
                sub_1B9026C(0LL, v41);
              presentId = current->fields.presentId;
              items = v59->fields._items;
              v62 = *v33;
              ++v59->fields._version;
              if ( !items )
                sub_1B9026C(v59, presentId);
              size = v59->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v59,
                  presentId,
                  *(const MethodInfo_34F89F4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
              }
              else
              {
                v59->fields._size = size + 1;
                items->m_Items[size] = presentId;
              }
            }
          }
          else
          {
            if ( !IsExpired )
              goto LABEL_39;
LABEL_33:
            NameText = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, v41);
            if ( !v28 )
              sub_1B9026C(NameText, NameText);
            if ( !System_Collections_Generic_List_object___Contains(
                    v28,
                    NameText,
                    (const MethodInfo_3510D50 *)Method_System_Collections_Generic_List_string__Contains__) )
            {
              v51 = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, v50);
              v54 = v51;
              v55 = v28->fields._items;
              v56 = *v32;
              ++v28->fields._version;
              if ( !v55 )
                sub_1B9026C(v51, v51);
              v57 = v28->fields._size;
              if ( (unsigned int)v57 >= v55->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v28,
                  v51,
                  *(const MethodInfo_35109C0 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
              }
              else
              {
                v58 = &v55->obj.klass + v57;
                v28->fields._size = v57 + 1;
                v58[4] = (Il2CppClass *)v54;
                sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v58 + 4), (int32_t)v54, v52, v53);
              }
            }
          }
        }
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v76,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v64 = (int)StringLiteral_1/*""*/;
  p_expiredPresents_k__BackingField = (ServantStatusBattleListViewItem_o *)&this->fields._expiredPresents_k__BackingField;
  this->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields._expiredPresents_k__BackingField, v64, v66, v67);
  if ( !v28 )
    goto LABEL_62;
  if ( v28->fields._size >= 1 )
  {
    do
    {
      klass = (System_String_o *)p_expiredPresents_k__BackingField->klass;
      Item = System_Collections_Generic_List_object___get_Item(
               v28,
               0,
               (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_string__get_Item__);
      v70 = System_String__Concat_61800356(
              klass,
              (System_String_o *)StringLiteral_15837/*"["*/,
              (System_String_o *)Item,
              (System_String_o *)StringLiteral_16094/*"]"*/,
              0LL);
      p_expiredPresents_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v70;
      sub_1B8FFB4(p_expiredPresents_k__BackingField, (int32_t)v70, v71, v72);
      System_Collections_Generic_List_object___RemoveAt(
        v28,
        0,
        (const MethodInfo_3512194 *)Method_System_Collections_Generic_List_string__RemoveAt__);
    }
    while ( v28->fields._size > 0 );
  }
  v31 = (System_Collections_Generic_List_object__o *)*p_presentIds;
  if ( !*p_presentIds
    || (v31 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_long___ToArray(
                                                             (System_Collections_Generic_List_long__o *)v31,
                                                             (const MethodInfo_34FA4AC *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.m_parent) )
  {
LABEL_62:
    sub_1B9026C(v31, v29);
  }
  UserPresentBoxWindow__receivePresent(this->fields.m_parent, (System_Int64_array *)v31, 0, 0, v73);
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
  int32_t v38; // w2
  int32_t v39; // w3
  UserPresentBoxWindow_o *v40; // x20
  const MethodInfo *v41; // x4
  PresentSelectableDlgComponent___c__DisplayClass21_0_o *v42; // x0
  int32_t v43; // w1
  const MethodInfo *v44; // x2
  int32_t selectNum; // [xsp+4h] [xbp-6Ch]
  ItemSelectEntity_o *v46; // [xsp+8h] [xbp-68h]

  if ( (byte_4A6EC29 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_long__Add__, selectItm);
    sub_1B90010(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_1B90010(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_1B90010(&NetworkManager_TypeInfo, v12);
    sub_1B90010(&UserPresentListViewItem_TypeInfo, v13);
    sub_1B90010(&StringLiteral_15837/*"["*/, v14);
    sub_1B90010(&StringLiteral_16094/*"]"*/, v15);
    byte_4A6EC29 = 1;
  }
  v16 = (System_Collections_Generic_List_long__o *)sub_1B9025C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_34F81A0 *)Method_System_Collections_Generic_List_long___ctor__);
  presentTicketList = (int64_t)this->fields.presentTicketList;
  if ( !presentTicketList || !selectItm )
    goto LABEL_26;
  v19 = *(_DWORD *)(presentTicketList + 24);
  v46 = selectItm;
  selectNum = num;
  if ( v19 < 1 || (v20 = selectItm->fields.requireNum * num, v20 < 1) )
  {
    if ( v16 )
    {
LABEL_28:
      m_parent = this->fields.m_parent;
      presentTicketList = (int64_t)System_Collections_Generic_List_long___ToArray(
                                     v16,
                                     (const MethodInfo_34FA4AC *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( m_parent )
      {
        UserPresentBoxWindow__receivePresent(
          m_parent,
          (System_Int64_array *)presentTicketList,
          v46->fields.idx,
          selectNum,
          v33);
        UserPresentListViewManager__SetMode_37453560(this, 2, v34);
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
                                   (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        *(const MethodInfo_34F89F4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
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
                                 (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      v37 = System_String__Concat_61798352(
              (System_String_o *)StringLiteral_15837/*"["*/,
              *(System_String_o **)(v36 + 24),
              (System_String_o *)StringLiteral_16094/*"]"*/,
              0LL);
      this->fields._expiredPresents_k__BackingField = v37;
      sub_1B8FFB4(
        (ServantStatusBattleListViewItem_o *)&this->fields._expiredPresents_k__BackingField,
        (int32_t)v37,
        v38,
        v39);
      if ( v16 )
      {
        v40 = this->fields.m_parent;
        presentTicketList = (int64_t)System_Collections_Generic_List_long___ToArray(
                                       v16,
                                       (const MethodInfo_34FA4AC *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v40 )
        {
          UserPresentBoxWindow__receivePresent(v40, (System_Int64_array *)presentTicketList, v46->fields.idx, 0, v41);
          return;
        }
      }
    }
LABEL_26:
    sub_1B9026C(presentTicketList, v17);
  }
  sub_1B9052C(presentTicketList);
  PresentSelectableDlgComponent___c__DisplayClass21_0___OpenItemConfirmDlg_b__2(v42, v43, v44);
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
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A6EC1A & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v11);
    sub_1B90010(&Method_UserPresentListViewManager_OnMoveEnd__, v12);
    sub_1B90010(&StringLiteral_9941/*"OnMoveEnd"*/, v13);
    byte_4A6EC1A = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B9026C(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B9026C(v19, v20);
      UserPresentListViewObject__Init_37494112((UserPresentListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestListObject_37493084(
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
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A6EC1B & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v9);
    sub_1B90010(&Method_UserPresentListViewManager_OnMoveEnd__, v10);
    sub_1B90010(&StringLiteral_9941/*"OnMoveEnd"*/, v11);
    byte_4A6EC1B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B9026C(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B9026C(v17, v18);
      UserPresentListViewObject__Init_37494196((UserPresentListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
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
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  UserPresentListViewManager__SetMode_37453560(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__SetMode_37453560(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_4A6EC19 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1B90010(
                                             &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                             *(_QWORD *)&mode);
    byte_4A6EC19 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1B9026C(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0LL);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    UserPresentListViewManager__RequestListObject_37493084(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 4;
    goto LABEL_8;
  }
}


void __fastcall UserPresentListViewManager__SetMode_37493032(
        UserPresentListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  UserPresentListViewManager__SetMode_37453560(this, mode, v6);
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
  if ( (byte_4A6EC18 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1B90010(&UserPresentListViewObject_TypeInfo, obj);
    byte_4A6EC18 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserPresentListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserPresentListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewObject_TypeInfo )
  {
    sub_1B9026C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  UserPresentListViewObject__Init_37492908((UserPresentListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4A6EC27 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&StringLiteral_17566/*"btn_sort_up"*/, v3);
    sub_1B90010(&StringLiteral_17609/*"btn_txt_new"*/, v4);
    sub_1B90010(&StringLiteral_17616/*"btn_txt_old"*/, v5);
    sub_1B90010(&StringLiteral_17563/*"btn_sort_down"*/, v6);
    byte_4A6EC27 = 1;
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
        v13 = (System_String_o **)(v12->fields.isAscendingOrder ? &StringLiteral_17616/*"btn_txt_old"*/ : &StringLiteral_17609/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v13, 0LL);
        v14 = this->fields.sort;
        if ( v14 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            if ( v14->fields.isAscendingOrder )
              v15 = (System_String_o **)&StringLiteral_17563/*"btn_sort_down"*/;
            else
              v15 = (System_String_o **)&StringLiteral_17566/*"btn_sort_up"*/;
            UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_1B9026C(sort, v8);
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

  if ( (byte_4A6EC2C & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B90010(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__, v4);
    byte_4A6EC2C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL),
        v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__,
          0LL),
        !v7) )
  {
    sub_1B9026C(Instance, v6);
  }
  CommonUI__maskFadeout((CommonUI_o *)v7, 1, 0.5, v8, 0LL);
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_1(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UserPresentBoxWindow_o *m_parent; // x0

  if ( (byte_4A6EC2D & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A6EC2D = 1;
  }
  UserPresentListViewManager__DestroyList(this, method);
  m_parent = this->fields.m_parent;
  if ( !m_parent
    || (UserPresentBoxWindow__ReDisp(m_parent, v3), (m_parent = (UserPresentBoxWindow_o *)this->fields.scrollView) == 0LL)
    || (UIScrollView__ResetPosition((UIScrollView_o *)m_parent, 0LL),
        (m_parent = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B9026C(m_parent, v3);
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

  if ( (byte_4A6EC0B & 1) == 0 )
  {
    sub_1B90010(&UserPresentListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A6EC0B = 1;
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
    v8 = sub_1BCB500(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B9052C(v7);
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

  if ( (byte_4A6EC0D & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, value);
    byte_4A6EC0D = 1;
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
    v8 = sub_1BCB500(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B9052C(v7);
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

  if ( (byte_4A6EC0F & 1) == 0 )
  {
    sub_1B90010(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, value);
    byte_4A6EC0F = 1;
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
    v8 = sub_1BCB500(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B9052C(v7);
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
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A6EC14 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v8);
    sub_1B90010(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v9);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v10);
    byte_4A6EC14 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B9026C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B9026C(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B9026C(0LL, v18);
      Item = (ListViewItem_o *)UserPresentListViewObject__GetItem((UserPresentListViewObject_o *)Component_object, v18);
      if ( !Item )
        sub_1B9026C(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_40776640((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1B9026C(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B9026C(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B9026C(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B9026C(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A6EC13 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v8);
    sub_1B90010(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v9);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v10);
    byte_4A6EC13 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B9026C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B9026C(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B9026C(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B9026C(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v11;
}


ListViewSort_o *__fastcall UserPresentListViewManager__get_SortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  UserPresentListViewManager_c *v2; // x0

  if ( (byte_4A6EC0A & 1) == 0 )
  {
    sub_1B90010(&UserPresentListViewManager_TypeInfo, v1);
    byte_4A6EC0A = 1;
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

  if ( (byte_4A6EC0C & 1) == 0 )
  {
    sub_1B90010(&UserPresentListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A6EC0C = 1;
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
    v8 = sub_1BCB500(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B9052C(v7);
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

  if ( (byte_4A6EC0E & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, value);
    byte_4A6EC0E = 1;
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
    v8 = sub_1BCB500(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B9052C(v7);
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

  if ( (byte_4A6EC10 & 1) == 0 )
  {
    sub_1B90010(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, value);
    byte_4A6EC10 = 1;
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
    v8 = sub_1BCB500(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B9052C(v7);
  UserPresentListViewManager__get_select_idx(v10, v11);
}


void __fastcall UserPresentListViewManager__resetCheckStatus(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v4; // w9

  if ( (byte_4A6EC20 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_long__Clear__, method);
    byte_4A6EC20 = 1;
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
    sub_1B9026C(0LL, type);
  UserPresentBoxErrorDialog__setJumpType(dialog, type, method);
}


void __fastcall UserPresentListViewManager__set_expiredPresents(
        UserPresentListViewManager_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._expiredPresents_k__BackingField = value;
  sub_1B8FFB4(
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t kind; // w8
  System_String_o *v11; // x1
  __int64 *v12; // x8

  if ( (byte_4A6EC23 & 1) == 0 )
  {
    sub_1B90010(&LocalizationManager_TypeInfo, callback);
    sub_1B90010(&StringLiteral_11058/*"REJECT_NORMAL_TXT"*/, v6);
    sub_1B90010(&StringLiteral_11054/*"REJECT_ALL_TXT"*/, v7);
    sub_1B90010(&StringLiteral_1/*""*/, v8);
    byte_4A6EC23 = 1;
  }
  this->fields.receivecCallbackFunc = callback;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.receivecCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  kind = this->fields.kind;
  if ( !kind )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_11058/*"REJECT_NORMAL_TXT"*/;
    goto LABEL_12;
  }
  if ( (unsigned int)(kind - 1) <= 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_11054/*"REJECT_ALL_TXT"*/;
LABEL_12:
    v11 = LocalizationManager__Get((System_String_o *)*v12, 0LL);
    goto LABEL_13;
  }
  v11 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_13:
  UserPresentListViewManager__OpenNoticeDlg(this, v11, v9);
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

  if ( (byte_4A6EC1F & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&Method_System_Collections_Generic_List_long__IndexOf__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_long__Remove__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_long___ctor___76120848, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_1B90010(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_1B90010(&UserPresentListViewItem_TypeInfo, v11);
    byte_4A6EC1F = 1;
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
  v17 = (System_Collections_Generic_List_long__o *)sub_1B9025C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_55542472(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)checkedIdList,
    (const MethodInfo_34F82C8 *)Method_System_Collections_Generic_List_long___ctor___76120848);
  m_parent = this->fields.itemList;
  if ( !m_parent )
LABEL_39:
    sub_1B9026C(m_parent, method);
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
                 (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
           (const MethodInfo_34F9EF0 *)Method_System_Collections_Generic_List_long__Remove__) )
    {
      m_parent = this->fields.checkedIdList;
      if ( !m_parent )
        goto LABEL_39;
      v25 = System_Collections_Generic_List_long___IndexOf(
              (System_Collections_Generic_List_long__o *)m_parent,
              v23,
              (const MethodInfo_34F9670 *)Method_System_Collections_Generic_List_long__IndexOf__);
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
  sub_1B9052C(m_parent);
  UserPresentListViewManager__GetItem(v31, v32, v33);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19D5068;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19D5048;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D5000;
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
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, &v6, callback, object);
}


void __fastcall UserPresentListViewManager_CallbackFunc__EndInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D50EC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D50A4;
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
  if ( (byte_4A6EC2E & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, isReceive);
    byte_4A6EC2E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, v9, callback, object);
}


void __fastcall UserPresentListViewManager_ReceiveCallbackFunc__EndInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6EC2F & 1) == 0 )
  {
    sub_1B90010(&UserPresentListViewManager___c_TypeInfo, v1);
    byte_4A6EC2F = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(UserPresentListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserPresentListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentListViewManager___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)UserPresentListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  if ( (byte_4A6EC30 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1B90010(&UserPresentListViewItem_TypeInfo, a);
    byte_4A6EC30 = 1;
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
      sub_1B9026C(this, a);
    }
  }
  else
  {
    sub_1B9052C(v5);
  }
  sub_1B9052C(b);
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
  if ( (byte_4A6EC31 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1B90010(&UserPresentListViewItem_TypeInfo, obj);
    byte_4A6EC31 = 1;
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
      sub_1B9026C(this, obj);
    }
    return 0;
  }
  else
  {
    sub_1B9052C(v3);
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
  if ( (byte_4A6EC32 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1B90010(&UserPresentListViewItem_TypeInfo, a);
    byte_4A6EC32 = 1;
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
  result = System_String__CompareTo_61794392((System_String_o *)v8, (System_String_o *)this, 0LL);
  if ( result )
    return result;
  a = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  v10 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v5->klass->vtable._0_Equals.methodPtr) < (unsigned int)v10
    || (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[v10 - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_18:
    sub_1B9052C(v5);
    goto LABEL_19;
  }
  v11 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v11
    && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v11 - 1] == UserPresentListViewItem_TypeInfo )
  {
    this = (UserPresentListViewManager___c_o *)v5[1].fields.sortValue2;
    if ( this )
      return System_String__CompareTo_61794392((System_String_o *)this, (System_String_o *)b[1].fields.sortValue2, 0LL);
LABEL_17:
    sub_1B9026C(this, a);
  }
LABEL_19:
  sub_1B9052C(b);
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
  if ( (byte_4A6EC33 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1B90010(&UserPresentListViewItem_TypeInfo, a);
    byte_4A6EC33 = 1;
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
      sub_1B9026C(this, a);
    }
  }
  else
  {
    sub_1B9052C(v5);
  }
  sub_1B9052C(b);
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
  if ( (byte_4A6EC34 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_1B90010(&UserPresentListViewItem_TypeInfo, obj);
    byte_4A6EC34 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
  {
    sub_1B9026C(this, obj);
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
    sub_1B8FFB4(p_ticketItem, (int32_t)monitor, (int32_t)method, v3);
  }
  return 0;
}