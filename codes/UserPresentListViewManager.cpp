void __fastcall UserPresentListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewSort_o *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FB1F4 & 1) == 0 )
  {
    sub_1B640C8(&ListViewSort_TypeInfo, v1);
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_15155/*"UserPresent"*/, v4);
    byte_49FB1F4 = 1;
  }
  v5 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v1, v2);
  ListViewSort___ctor_40426136(v5, (System_String_o *)StringLiteral_15155/*"UserPresent"*/, 1, 0, 0LL);
  UserPresentListViewManager_TypeInfo->static_fields->sortInfo = v5;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)UserPresentListViewManager_TypeInfo->static_fields,
    (int32_t)v5,
    v6,
    v7);
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
  const MethodInfo *v15; // x3
  int64_t m_parent; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_IEnumerable_T__o *checkedIdList; // x22
  System_Collections_Generic_List_long__o *v20; // x21
  const MethodInfo *v21; // x3
  signed int max_length; // w8
  il2cpp_array_size_t v23; // w22
  Il2CppClass **v24; // x23
  Il2CppClass *v25; // x8
  UserPresentBoxEntity_o **v26; // x23
  Il2CppClass *v27; // t1
  __int64 v28; // x2
  UserPresentBoxEntity_o *v29; // x24
  UserPresentListViewItem_o *v30; // x23
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  struct System_Collections_Generic_List_long__o *v38; // x20
  int32_t v39; // w22
  const MethodInfo *v40; // x1
  __int64 v41; // x8
  unsigned __int64 v42; // x21
  UserPresentBoxEntity_o *v43; // x23
  UserPresentListViewItem_o *v44; // x22
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  __int64 v51; // x8

  if ( (byte_49FB1DF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, presentList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Remove__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor___75657400, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Item__, v8);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v9);
    sub_1B640C8(&UserPresentListViewItem_TypeInfo, v10);
    byte_49FB1DF = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.selectPresentData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectPresentData, 0, v11, v12);
  this->fields.presentIds = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.presentIds, 0, v13, v14);
  m_parent = (int64_t)this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_38;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 0, 0, v15);
  checkedIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v20 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v17,
                                                       v18);
    System_Collections_Generic_List_long____ctor_55134536(
      v20,
      checkedIdList,
      (const MethodInfo_3494948 *)Method_System_Collections_Generic_List_long___ctor___75657400);
    if ( !presentList )
      goto LABEL_38;
    max_length = presentList->max_length;
    if ( max_length >= 1 )
    {
      v23 = 0;
      while ( v23 < max_length )
      {
        v24 = &presentList->obj.klass + (int)v23;
        v27 = v24[4];
        v26 = (UserPresentBoxEntity_o **)(v24 + 4);
        v25 = v27;
        if ( !v27 || !v20 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v20,
                     (int64_t)v25->_1.namespaze,
                     (const MethodInfo_3496610 *)Method_System_Collections_Generic_List_long__Remove__);
        if ( v23 >= presentList->max_length )
          goto LABEL_39;
        v29 = *v26;
        v30 = (UserPresentListViewItem_o *)sub_1B64314(UserPresentListViewItem_TypeInfo, v17, v28);
        UserPresentListViewItem___ctor(v30, v23, v29, v31);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v34 = *(_QWORD *)(m_parent + 16);
        v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v34 )
          goto LABEL_38;
        v36 = *(int *)(m_parent + 24);
        if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v30,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = v34 + 8 * v36;
          *(_DWORD *)(m_parent + 24) = v36 + 1;
          *(_QWORD *)(v37 + 32) = v30;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 32), (int32_t)v30, v32, v33);
        }
        max_length = presentList->max_length;
        if ( (int)++v23 >= max_length )
          goto LABEL_18;
      }
      goto LABEL_39;
    }
LABEL_18:
    if ( !v20 )
LABEL_38:
      sub_1B64324(m_parent);
    v38 = this->fields.checkedIdList;
    if ( v20->fields._size >= 1 )
    {
      v39 = 0;
      do
      {
        m_parent = System_Collections_Generic_List_long___get_Item(
                     v20,
                     v39,
                     (const MethodInfo_3494D84 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !v38 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v38,
                     m_parent,
                     (const MethodInfo_3496610 *)Method_System_Collections_Generic_List_long__Remove__);
        v38 = this->fields.checkedIdList;
      }
      while ( ++v39 < v20->fields._size );
    }
    if ( !v38 )
      goto LABEL_38;
    if ( v38->fields._size >= 1 )
    {
      m_parent = (int64_t)this->fields.m_parent;
      if ( !m_parent )
        goto LABEL_38;
      UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 1, 1, v21);
      UserPresentListViewManager__updateCheckStatus(this, v40);
    }
  }
  else
  {
    if ( !presentList )
      goto LABEL_38;
    v41 = *(_QWORD *)&presentList->max_length;
    if ( (int)v41 >= 1 )
    {
      v42 = 0LL;
      while ( v42 < (unsigned int)v41 )
      {
        v43 = presentList->m_Items[v42];
        v44 = (UserPresentListViewItem_o *)sub_1B64314(UserPresentListViewItem_TypeInfo, v17, v18);
        UserPresentListViewItem___ctor(v44, v42, v43, v45);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v48 = *(_QWORD *)(m_parent + 16);
        v49 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v48 )
          goto LABEL_38;
        v50 = *(int *)(m_parent + 24);
        if ( (unsigned int)v50 >= *(_DWORD *)(v48 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v44,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = v48 + 8 * v50;
          *(_DWORD *)(m_parent + 24) = v50 + 1;
          *(_QWORD *)(v51 + 32) = v44;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 32), (int32_t)v44, v46, v47);
        }
        LODWORD(v41) = presentList->max_length;
        if ( (__int64)++v42 >= (int)v41 )
          goto LABEL_37;
      }
LABEL_39:
      sub_1B6432C(m_parent, v17);
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

  if ( (byte_49FB1DA & 1) == 0 )
  {
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, v1);
    byte_49FB1DA = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v2 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v2->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1B64324(0LL);
  ListViewSort__DeleteContinueData(sortInfo, 0LL);
}


void __fastcall UserPresentListViewManager__DestroyList(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B64324(0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x22
  __int64 v12; // x0

  if ( (byte_49FB1F3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, v5);
    sub_1B640C8(&StringLiteral_10401/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, v6);
    byte_49FB1F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10401/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0LL);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__,
    0LL);
  if ( !Instance )
    sub_1B64324(v12);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, 0LL, v8, v11, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
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
  const MethodInfo *v10; // x2
  struct UserPresentListViewManager_ReceiveCallbackFunc_o *receivecCallbackFunc; // x8

  if ( (byte_49FB1EE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_SceneList_Type__TypeInfo, *(_QWORD *)&scene);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_UserPresentListViewManager_EndNoticeDlg__, v6);
    byte_49FB1EE = 1;
  }
  dialog = this->fields.dialog;
  v8 = (System_Action_T__o *)sub_1B64314(System_Action_SceneList_Type__TypeInfo, *(_QWORD *)&scene, method);
  System_Action_Int32Enum____ctor(v8, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0LL);
  if ( !dialog )
    goto LABEL_14;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(dialog, (System_Action_SceneList_Type__o *)v8, v10);
  if ( scene == -1 )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( CommonUI__IsActive_MasterMission((CommonUI_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_1B64324(Instance);
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
  __int64 size; // x2
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
  struct System_Collections_Generic_List_ListViewItem__o *presentAllSelectedList; // x8
  System_Collections_Generic_List_object__o **p_presentAllSelectedList; // x19
  int v24; // w9
  System_Collections_Generic_IEnumerable_T__o *itemList; // x21
  System_Collections_Generic_List_object__o *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *NameText; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v32; // x20
  System_Comparison_T__o *v33; // x21
  Il2CppObject *v34; // x22
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_object__o *v40; // x20
  System_Predicate_object__o *v41; // x21
  Il2CppObject *v42; // x22
  struct UserPresentListViewManager___c_StaticFields *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_Collections_Generic_List_object__o *v46; // x20
  __int64 v47; // x1
  int v48; // w8
  __int64 v49; // x2
  System_Comparison_T__o *v50; // x21
  Il2CppObject *v51; // x22
  struct UserPresentListViewManager___c_StaticFields *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  __int64 v55; // x1
  __int64 v56; // x2
  System_Text_StringBuilder_o *v57; // x20
  int v58; // w24
  int32_t v59; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v62; // x22
  const MethodInfo *v63; // x1
  System_String_o *v64; // x23

  if ( (byte_49FB1EB & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&System_Comparison_ListViewItem__TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__RemoveRange__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem___ctor___75658256, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&System_Predicate_ListViewItem__TypeInfo, v14);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v15);
    sub_1B640C8(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__, v16);
    sub_1B640C8(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__, v17);
    sub_1B640C8(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__, v18);
    sub_1B640C8(&UserPresentListViewManager___c_TypeInfo, v19);
    sub_1B640C8(&UserPresentListViewItem_TypeInfo, v20);
    sub_1B640C8(&StringLiteral_10406/*"PRESENT_INFO"*/, v21);
    byte_49FB1EB = 1;
  }
  presentAllSelectedList = this->fields.presentAllSelectedList;
  p_presentAllSelectedList = (System_Collections_Generic_List_object__o **)&this->fields.presentAllSelectedList;
  if ( presentAllSelectedList )
  {
    size = (unsigned int)presentAllSelectedList->fields._size;
    v24 = presentAllSelectedList->fields._version + 1;
    presentAllSelectedList->fields._size = 0;
    presentAllSelectedList->fields._version = v24;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)presentAllSelectedList->fields._items, 0, size, 0LL);
  }
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                       method,
                                                       size);
  System_Collections_Generic_List_object____ctor_55234504(
    v26,
    itemList,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_ListViewItem___ctor___75658256);
  this->fields.presentAllSelectedList = (struct System_Collections_Generic_List_ListViewItem__o *)v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.presentAllSelectedList, (int32_t)v26, v27, v28);
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  v32 = this->fields.presentAllSelectedList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v33 = *(System_Comparison_T__o **)(*(_QWORD *)&NameText[4].fields._size + 24LL);
  if ( !v33 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v34 = **(Il2CppObject ***)&NameText[4].fields._size;
    v33 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ListViewItem__TypeInfo, v29, v30);
    System_Comparison_object____ctor(
      v33,
      v34,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__,
      0LL);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__60_0 = (struct System_Comparison_ListViewItem__o *)v33;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__60_0, (int32_t)v33, v36, v37);
  }
  if ( !v32 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_55243320(
    (System_Collections_Generic_List_object__o *)v32,
    v33,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  v40 = *p_presentAllSelectedList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v41 = *(System_Predicate_object__o **)(*(_QWORD *)&NameText[4].fields._size + 32LL);
  if ( !v41 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v42 = **(Il2CppObject ***)&NameText[4].fields._size;
    v41 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_ListViewItem__TypeInfo, v38, v39);
    System_Predicate_object____ctor(
      v41,
      v42,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__,
      0LL);
    v43 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v43->__9__60_1 = (struct System_Predicate_ListViewItem__o *)v41;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v43->__9__60_1, (int32_t)v41, v44, v45);
  }
  if ( !v40 )
    goto LABEL_53;
  System_Collections_Generic_List_object___RemoveAll(
    v40,
    (System_Predicate_T__o *)v41,
    (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  }
  v46 = *p_presentAllSelectedList;
  if ( !*p_presentAllSelectedList )
    goto LABEL_53;
  v47 = *(unsigned int *)(*(_QWORD *)&NameText[4].fields._size + 116LL);
  v48 = v46->fields._size;
  v49 = (unsigned int)(v48 - v47);
  if ( v48 > (int)v47 )
  {
    System_Collections_Generic_List_object___RemoveRange(
      *p_presentAllSelectedList,
      v47,
      v49,
      (const MethodInfo_34AEFE0 *)Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    v46 = *p_presentAllSelectedList;
  }
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v50 = *(System_Comparison_T__o **)(*(_QWORD *)&NameText[4].fields._size + 40LL);
  if ( !v50 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v51 = **(Il2CppObject ***)&NameText[4].fields._size;
    v50 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ListViewItem__TypeInfo, v47, v49);
    System_Comparison_object____ctor(
      v50,
      v51,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__,
      0LL);
    v52 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v52->__9__60_2 = (struct System_Comparison_ListViewItem__o *)v50;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->__9__60_2, (int32_t)v50, v53, v54);
  }
  if ( !v46 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_55243320(
    v46,
    v50,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  v57 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v55, v56);
  System_Text_StringBuilder___ctor(v57, 0LL);
  if ( !*p_presentAllSelectedList )
    goto LABEL_53;
  v58 = (*p_presentAllSelectedList)->fields._size;
  if ( v58 >= 1 )
  {
    v59 = 0;
    while ( 1 )
    {
      if ( v59 )
      {
        if ( !v57 )
          break;
        System_Text_StringBuilder__Append_60538876(v57, 0xAu, 0LL);
      }
      NameText = *p_presentAllSelectedList;
      if ( !*p_presentAllSelectedList )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               NameText,
               v59,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item
        && (methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v62 = (UserPresentListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo
            ? Item
            : 0LL;
      }
      else
      {
        v62 = 0LL;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      NameText = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_10406/*"PRESENT_INFO"*/,
                                                                0LL);
      if ( !v62 )
        break;
      v64 = (System_String_o *)NameText;
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewItem__get_NameText(
                                                                (UserPresentListViewItem_o *)v62,
                                                                v63);
      if ( !v57 )
        break;
      NameText = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__AppendFormat_60542900(
                                                                v57,
                                                                v64,
                                                                (Il2CppObject *)NameText,
                                                                (Il2CppObject *)v62[11].monitor,
                                                                0LL);
      if ( v58 == ++v59 )
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v57->klass->vtable._3_ToString.method)(
                                    v57,
                                    v57->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    }
LABEL_53:
    sub_1B64324(NameText);
  }
  if ( !v57 )
    goto LABEL_53;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v57->klass->vtable._3_ToString.method)(
                              v57,
                              v57->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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

  if ( (byte_49FB1E0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&UserPresentListViewItem_TypeInfo, v5);
    byte_49FB1E0 = 1;
  }
  result = (UserPresentListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (UserPresentListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  struct ListViewSort_o *sort; // x0

  if ( (byte_49FB1DE & 1) == 0 )
  {
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, method);
    byte_49FB1DE = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v7, v2, v3);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B64324(0LL);
  sort->fields.listViewKind = 4;
  ListViewSort__Load(sort, 0LL);
  ((void (__fastcall *)(UserPresentListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
    this,
    this->klass->vtable._6_GetDragRoot.methodPtr);
}


void __fastcall UserPresentListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  UserPresentListViewManager_c *v2; // x0
  ListViewSort_o *sortInfo; // x0

  if ( (byte_49FB1DB & 1) == 0 )
  {
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, v1);
    byte_49FB1DB = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v2 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v2->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1B64324(0LL);
  ListViewSort__InitLoad(sortInfo, 0LL);
}


void __fastcall UserPresentListViewManager__OnClickListCheck(
        UserPresentListViewManager_o *this,
        UserPresentListViewObject_o *obj,
        const MethodInfo *method)
{
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
  __int64 v27; // x1
  __int64 v28; // x2
  UserPresentListViewManager_o **p_checkedIdList; // x21
  System_Collections_Generic_List_long__o *v30; // x24
  int32_t v31; // w2
  int32_t v32; // w3
  int m_CancellationTokenSource; // w8
  int v34; // w25
  int32_t v35; // w24
  const MethodInfo *v36; // x1
  struct ItemEntity_o *itemEnt; // x8
  int64_t endedAt; // x25
  Il2CppObject *MasterData_object; // x24
  BalanceConfig_c *v40; // x0
  int v41; // w24
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  const MethodInfo *v46; // x1
  int32_t v47; // w24
  BalanceConfig_c *v48; // x0
  _QWORD *v49; // x8
  int32_t PresentBoxCheckMax; // w25
  const MethodInfo *presentId; // x1
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 m_CancellationTokenSource_low; // x10
  BalanceConfig_c *v55; // x8
  int32_t v56; // w22
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x2
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  const MethodInfo *v60; // x3
  Il2CppObject *v61; // [xsp+8h] [xbp-58h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_49FB1E7 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, obj);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__RemoveAt__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Item__, v13);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    this = (UserPresentListViewManager_o *)sub_1B640C8(&Method_UserPresentListViewManager_OnClickListCheck__, v17);
    byte_49FB1E7 = 1;
  }
  entity = 0LL;
  v61 = 0LL;
  if ( !obj )
    goto LABEL_77;
  Item = UserPresentListViewObject__GetItem(obj, (const MethodInfo *)obj);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = Item;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.selectItem, (int32_t)Item, v20, v21);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_77;
  usrPresentEnt = selectItem->fields.usrPresentEnt;
  p_selectPresentData = (UserPresentListViewManager_o **)&v4->fields.selectPresentData;
  v4->fields.selectPresentData = usrPresentEnt;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.selectPresentData, (int32_t)usrPresentEnt, v22, v23);
  p_checkedIdList = (UserPresentListViewManager_o **)&v4->fields.checkedIdList;
  if ( !v4->fields.checkedIdList )
  {
    v30 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v27,
                                                       v28);
    System_Collections_Generic_List_long____ctor(
      v30,
      (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
    *p_checkedIdList = (UserPresentListViewManager_o *)v30;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.checkedIdList, (int32_t)v30, v31, v32);
  }
  if ( !*p_selectItem )
    goto LABEL_77;
  if ( (*p_selectItem)->fields.presentId >= 1 )
  {
    this = *p_checkedIdList;
    if ( !*p_checkedIdList )
      goto LABEL_77;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v34 = m_CancellationTokenSource - 1;
    if ( m_CancellationTokenSource >= 1 )
    {
      v35 = 0;
      while ( 1 )
      {
        this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___get_Item(
                                                 (System_Collections_Generic_List_long__o *)this,
                                                 v35,
                                                 (const MethodInfo_3494D84 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !*p_selectItem )
          goto LABEL_77;
        if ( this == (UserPresentListViewManager_o *)(*p_selectItem)->fields.presentId )
          break;
        if ( v34 == v35 )
          goto LABEL_17;
        this = *p_checkedIdList;
        ++v35;
        if ( !*p_checkedIdList )
          goto LABEL_77;
      }
      v44 = Method_UserPresentListViewManager_OnClickListCheck__;
      if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
        v44 = (_QWORD *)sub_1B640E0(Method_UserPresentListViewManager_OnClickListCheck__);
      v45 = (System_Reflection_MethodBase_o *)sub_1B640AC(v44, v44[4]);
      OverwriteAssetSoundName__PlaySystemSe(v45, 0, 0LL);
      this = *p_checkedIdList;
      if ( *p_checkedIdList )
      {
        System_Collections_Generic_List_long___RemoveAt(
          (System_Collections_Generic_List_long__o *)this,
          v35,
          (const MethodInfo_3496894 *)Method_System_Collections_Generic_List_long__RemoveAt__);
        UserPresentListViewManager__updateCheckStatus(v4, v46);
        return;
      }
LABEL_77:
      sub_1B64324(this);
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
        this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_77;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
          v40 = BalanceConfig_TypeInfo;
          v41 = LODWORD((*p_selectPresentData)->fields.scrollView) + entity->fields.num;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v40 = BalanceConfig_TypeInfo;
          }
          if ( v41 > v40->static_fields->UserItemMax )
            goto LABEL_36;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
          if ( !*p_selectPresentData || !this )
            goto LABEL_77;
          this = (UserPresentListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   &v61,
                                                   HIDWORD((*p_selectPresentData)->fields.sortOrderSprite),
                                                   (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (UserPresentListViewManager_o *)v61;
            if ( !v61 )
              goto LABEL_77;
            this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v61, 0LL);
            if ( (int)this >= 1 )
            {
              this = (UserPresentListViewManager_o *)v61;
              if ( !v61 )
                goto LABEL_77;
              this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v61, 0LL);
              if ( v41 > (int)this )
              {
LABEL_36:
                v42 = Method_UserPresentListViewManager_OnClickListCheck__;
                if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
                  v42 = (_QWORD *)sub_1B640E0(Method_UserPresentListViewManager_OnClickListCheck__);
                v43 = (System_Reflection_MethodBase_o *)sub_1B640AC(v42, v42[4]);
                goto LABEL_64;
              }
            }
          }
        }
LABEL_53:
        if ( !*p_checkedIdList )
          goto LABEL_77;
        v47 = (int32_t)(*p_checkedIdList)->fields.m_CancellationTokenSource;
        v48 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v48 = BalanceConfig_TypeInfo;
        }
        v49 = Method_UserPresentListViewManager_OnClickListCheck__;
        PresentBoxCheckMax = v48->static_fields->PresentBoxCheckMax;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
          v49 = (_QWORD *)sub_1B640E0(Method_UserPresentListViewManager_OnClickListCheck__);
        v43 = (System_Reflection_MethodBase_o *)sub_1B640AC(v49, v49[4]);
        if ( v47 < PresentBoxCheckMax )
        {
          OverwriteAssetSoundName__PlaySystemSe(v43, 0, 0LL);
          if ( !*p_selectItem )
            goto LABEL_77;
          this = *p_checkedIdList;
          if ( !*p_checkedIdList )
            goto LABEL_77;
          presentId = (const MethodInfo *)(*p_selectItem)->fields.presentId;
          v52 = *(_QWORD *)&this->fields.m_CachedPtr;
          v53 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v52 )
            goto LABEL_77;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v52 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              (int64_t)presentId,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
            this = *p_checkedIdList;
            if ( !*p_checkedIdList )
              goto LABEL_77;
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v52 + 8 * m_CancellationTokenSource_low + 32) = presentId;
          }
          v55 = BalanceConfig_TypeInfo;
          v56 = (int32_t)this->fields.m_CancellationTokenSource;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v55 = BalanceConfig_TypeInfo;
          }
          if ( v56 < v55->static_fields->PresentBoxCheckMax )
          {
            this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(obj, presentId);
            if ( !*p_checkedIdList )
              goto LABEL_77;
            if ( !this )
              goto LABEL_77;
            UserPresentListViewItem__setCheckBoxed(
              (UserPresentListViewItem_o *)this,
              1,
              (int32_t)(*p_checkedIdList)->fields.m_CancellationTokenSource,
              v57);
            checkedIdList = v4->fields.checkedIdList;
            if ( !checkedIdList )
              goto LABEL_77;
            this = (UserPresentListViewManager_o *)v4->fields.m_parent;
            if ( !this )
              goto LABEL_77;
            UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)this, checkedIdList->fields._size, v58);
          }
          UserPresentListViewManager__updateCheckStatus(v4, presentId);
          this = (UserPresentListViewManager_o *)v4->fields.m_parent;
          if ( !this )
            goto LABEL_77;
          UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)this, 1, 1, v60);
          return;
        }
LABEL_64:
        OverwriteAssetSoundName__PlaySystemSe(v43, 1, 0LL);
        return;
      }
    }
    UserPresentListViewManager__DlgForExpiredPresent(v4, v36);
  }
}


void __fastcall UserPresentListViewManager__OnClickListView(
        UserPresentListViewManager_o *this,
        UserPresentListViewObject_o *obj,
        const MethodInfo *method)
{
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
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  UserPresentListViewItem_o *Item; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  struct UserPresentListViewItem_o *selectItem; // x8
  struct UserPresentBoxEntity_o *usrPresentEnt; // x1
  struct UserPresentBoxEntity_o **p_selectPresentData; // x21
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  const MethodInfo *v35; // x1
  struct ItemEntity_o *itemEnt; // x8
  __int64 endedAt; // x23
  struct ItemEntity_o *v38; // x8
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  const MethodInfo *v41; // x2
  struct ItemEntity_o *v42; // x8
  Il2CppObject *MasterData_object; // x22
  BalanceConfig_c *v44; // x0
  int32_t v45; // w22
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  UserPresentListViewManager___c_c *v50; // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *_9__55_0; // x20
  Il2CppObject *v52; // x21
  const MethodInfo *v53; // x3
  int32_t v54; // w2
  int32_t v55; // w3
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  ServantStatusBattleListViewItem_o *p__9__55_0; // x0
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  __int64 v60; // x1
  UserPresentListViewManager___c_c *v61; // x0
  Il2CppObject *v62; // x21
  const MethodInfo *v63; // x3
  struct UserPresentListViewManager___c_StaticFields *v64; // x0
  _QWORD *v65; // x0
  System_Reflection_MethodBase_o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  System_Collections_Generic_List_long__o *v69; // x21
  UserPresentListViewManager_o **p_presentIds; // x20
  int32_t v71; // w2
  int32_t v72; // w3
  struct UserPresentListViewItem_o *v73; // x8
  int64_t presentId; // x1
  __int64 v75; // x8
  _QWORD *v76; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const MethodInfo *v78; // x4
  const MethodInfo *v79; // x2
  ItemEntity_o *v80; // [xsp+0h] [xbp-40h] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_49FB1E6 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, obj);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    sub_1B640C8(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&Method_UserPresentListViewManager___c__OnClickListView_b__55_0__, v17);
    sub_1B640C8(&Method_UserPresentListViewManager___c__OnClickListView_b__55_1__, v18);
    sub_1B640C8(&UserPresentListViewManager___c_TypeInfo, v19);
    this = (UserPresentListViewManager_o *)sub_1B640C8(&Method_UserPresentListViewManager_OnClickListView__, v20);
    byte_49FB1E6 = 1;
  }
  v80 = 0LL;
  entity = 0LL;
  if ( !obj )
    goto LABEL_83;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_83;
  if ( BYTE4(this->fields.objectList) )
    return;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(obj, v21);
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
  Item = UserPresentListViewObject__GetItem(obj, v22);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = Item;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.selectItem, (int32_t)Item, v26, v27);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_83;
  usrPresentEnt = selectItem->fields.usrPresentEnt;
  p_selectPresentData = &v4->fields.selectPresentData;
  v4->fields.selectPresentData = usrPresentEnt;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.selectPresentData, (int32_t)usrPresentEnt, v28, v29);
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
      v38 = (*p_selectItem)->fields.itemEnt;
      if ( !v38 )
        goto LABEL_83;
      if ( v38->fields.type == 24 )
      {
        v39 = Method_UserPresentListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v39 = (_QWORD *)sub_1B640E0(Method_UserPresentListViewManager_OnClickListView__);
        v40 = (System_Reflection_MethodBase_o *)sub_1B640AC(v39, v39[4]);
        OverwriteAssetSoundName__PlaySystemSe(v40, 0, 0LL);
        if ( *p_selectItem )
        {
          v42 = (*p_selectItem)->fields.itemEnt;
          if ( v42 )
          {
            UserPresentListViewManager__OpenSelectableDialog(v4, v42->fields.id, v41);
            return;
          }
        }
        goto LABEL_83;
      }
      this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_83;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
        v44 = BalanceConfig_TypeInfo;
        v45 = (*p_selectPresentData)->fields.num + entity->fields.num;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v44 = BalanceConfig_TypeInfo;
        }
        if ( v45 > v44->static_fields->UserItemMax )
        {
          v46 = Method_UserPresentListViewManager_OnClickListView__;
          if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
            v46 = (_QWORD *)sub_1B640E0(Method_UserPresentListViewManager_OnClickListView__);
          v47 = (System_Reflection_MethodBase_o *)sub_1B640AC(v46, v46[4]);
          OverwriteAssetSoundName__PlaySystemSe(v47, 0, 0LL);
          v50 = UserPresentListViewManager___c_TypeInfo;
          if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
            v50 = UserPresentListViewManager___c_TypeInfo;
          }
          _9__55_0 = v50->static_fields->__9__55_0;
          if ( _9__55_0 )
            goto LABEL_52;
          if ( !v50->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v50);
            v50 = UserPresentListViewManager___c_TypeInfo;
          }
          v52 = (Il2CppObject *)v50->static_fields->__9;
          _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1B64314(
                                                                           UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo,
                                                                           v48,
                                                                           v49);
          UserPresentListViewManager_ReceiveCallbackFunc___ctor(
            _9__55_0,
            v52,
            Method_UserPresentListViewManager___c__OnClickListView_b__55_0__,
            v53);
          static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__55_0 = _9__55_0;
          p__9__55_0 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__55_0;
LABEL_51:
          sub_1B6406C(p__9__55_0, (int32_t)_9__55_0, v54, v55);
LABEL_52:
          UserPresentListViewManager__showErrorResultDlg(v4, _9__55_0, v49);
          return;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !this )
          goto LABEL_83;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (Il2CppObject **)&v80,
               (*p_selectPresentData)->fields.objectId,
               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          this = (UserPresentListViewManager_o *)v80;
          if ( !v80 )
            goto LABEL_83;
          if ( ItemEntity__GetMaxNum(v80, 0LL) >= 1 )
          {
            this = (UserPresentListViewManager_o *)v80;
            if ( !v80 )
              goto LABEL_83;
            if ( v45 > ItemEntity__GetMaxNum(v80, 0LL) )
            {
              v58 = Method_UserPresentListViewManager_OnClickListView__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
                v58 = (_QWORD *)sub_1B640E0(Method_UserPresentListViewManager_OnClickListView__);
              v59 = (System_Reflection_MethodBase_o *)sub_1B640AC(v58, v58[4]);
              OverwriteAssetSoundName__PlaySystemSe(v59, 0, 0LL);
              v61 = UserPresentListViewManager___c_TypeInfo;
              if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
                v61 = UserPresentListViewManager___c_TypeInfo;
              }
              _9__55_0 = v61->static_fields->__9__55_1;
              if ( _9__55_0 )
                goto LABEL_52;
              if ( !v61->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v61);
                v61 = UserPresentListViewManager___c_TypeInfo;
              }
              v62 = (Il2CppObject *)v61->static_fields->__9;
              _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1B64314(
                                                                               UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo,
                                                                               v60,
                                                                               v49);
              UserPresentListViewManager_ReceiveCallbackFunc___ctor(
                _9__55_0,
                v62,
                Method_UserPresentListViewManager___c__OnClickListView_b__55_1__,
                v63);
              v64 = UserPresentListViewManager___c_TypeInfo->static_fields;
              v64->__9__55_1 = _9__55_0;
              p__9__55_0 = (ServantStatusBattleListViewItem_o *)&v64->__9__55_1;
              goto LABEL_51;
            }
          }
        }
      }
    }
    v65 = Method_UserPresentListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v65 = (_QWORD *)sub_1B640E0(Method_UserPresentListViewManager_OnClickListView__);
    v66 = (System_Reflection_MethodBase_o *)sub_1B640AC(v65, v65[4]);
    OverwriteAssetSoundName__PlaySystemSe(v66, 8, 0LL);
    if ( *p_selectItem )
    {
      v4->fields._select_idx_k__BackingField = (*p_selectItem)->fields.index;
      v69 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                         System_Collections_Generic_List_long__TypeInfo,
                                                         v67,
                                                         v68);
      System_Collections_Generic_List_long____ctor(
        v69,
        (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
      p_presentIds = (UserPresentListViewManager_o **)&v4->fields.presentIds;
      v4->fields.presentIds = v69;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.presentIds, (int32_t)v69, v71, v72);
      v73 = v4->fields.selectItem;
      if ( v73 )
      {
        presentId = v73->fields.presentId;
        if ( presentId >= 1 )
        {
          this = *p_presentIds;
          if ( !*p_presentIds )
            goto LABEL_83;
          v75 = *(_QWORD *)&this->fields.m_CachedPtr;
          v76 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v75 )
            goto LABEL_83;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v75 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              presentId,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v75 + 8 * m_CancellationTokenSource_low + 32) = presentId;
          }
        }
        this = *p_presentIds;
        if ( *p_presentIds )
        {
          this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                   (System_Collections_Generic_List_long__o *)this,
                                                   (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v4->fields.m_parent )
          {
            UserPresentBoxWindow__receivePresent(v4->fields.m_parent, (System_Int64_array *)this, 0, 0, v78);
            UserPresentListViewManager__SetMode_37092028(v4, 2, v79);
            return;
          }
        }
      }
    }
LABEL_83:
    sub_1B64324(this);
  }
LABEL_14:
  v33 = Method_UserPresentListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v33 = (_QWORD *)sub_1B640E0(Method_UserPresentListViewManager_OnClickListView__);
  v34 = (System_Reflection_MethodBase_o *)sub_1B640AC(v33, v33[4]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
  UserPresentListViewManager__DlgForExpiredPresent(v4, v35);
}


void __fastcall UserPresentListViewManager__OnClickSortAscendingOrder(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_49FB1EF & 1) == 0 )
  {
    sub_1B640C8(&Method_UserPresentListViewManager_OnClickSortAscendingOrder__, method);
    byte_49FB1EF = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_UserPresentListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_UserPresentListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(v5);
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
  int32_t v7; // w2
  int32_t v8; // w3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_49FB1E5 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FB1E5 = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1B64324(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_T__o *v10; // x21
  const MethodInfo *v11; // x2

  if ( (byte_49FB1ED & 1) == 0 )
  {
    sub_1B640C8(&System_Action_SceneList_Type__TypeInfo, msg);
    sub_1B640C8(&Method_UserPresentListViewManager_EndNoticeDlg__, v5);
    byte_49FB1ED = 1;
  }
  dialog = this->fields.dialog;
  if ( !dialog
    || (UserPresentBoxErrorDialog__Open(dialog, msg, method),
        v7 = this->fields.dialog,
        v10 = (System_Action_T__o *)sub_1B64314(System_Action_SceneList_Type__TypeInfo, v8, v9),
        System_Action_Int32Enum____ctor(
          v10,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager_EndNoticeDlg__,
          0LL),
        !v7) )
  {
    sub_1B64324(dialog);
  }
  UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v7, (System_Action_SceneList_Type__o *)v10, v11);
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
  __int64 size; // x2
  struct System_Collections_Generic_List_ListViewItem__o *presentTicketList; // x8
  int v20; // w9
  struct UserPresentBoxWindow_o *m_parent; // x8
  System_Collections_Generic_IEnumerable_T__o *itemList; // x22
  System_Collections_Generic_List_object__o *v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Collections_Generic_List_ListViewItem__o *v28; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  System_Predicate_object__o *v31; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v34; // x21
  System_Comparison_T__o *v35; // x22
  Il2CppObject *v36; // x23
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  const MethodInfo *v40; // x3

  if ( (byte_49FB1F1 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_ListViewItem__TypeInfo, *(_QWORD *)&ticketId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem___ctor___75658256, v8);
    sub_1B640C8(&System_Collections_Generic_List_ListViewItem__TypeInfo, v9);
    sub_1B640C8(&System_Predicate_ListViewItem__TypeInfo, v10);
    sub_1B640C8(&Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__, v11);
    sub_1B640C8(&Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__, v12);
    sub_1B640C8(&UserPresentListViewManager___c__DisplayClass67_0_TypeInfo, v13);
    sub_1B640C8(&UserPresentListViewManager___c_TypeInfo, v14);
    byte_49FB1F1 = 1;
  }
  v15 = sub_1B64314(UserPresentListViewManager___c__DisplayClass67_0_TypeInfo, *(_QWORD *)&ticketId, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_18;
  *(_DWORD *)(v15 + 16) = ticketId;
  presentTicketList = this->fields.presentTicketList;
  if ( presentTicketList )
  {
    size = (unsigned int)presentTicketList->fields._size;
    v20 = presentTicketList->fields._version + 1;
    presentTicketList->fields._size = 0;
    presentTicketList->fields._version = v20;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)presentTicketList->fields._items, 0, size, 0LL);
  }
  m_parent = this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_18;
  m_parent->fields.mIsScrlResetPosition = 1;
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                       v17,
                                                       size);
  System_Collections_Generic_List_object____ctor_55234504(
    v23,
    itemList,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_ListViewItem___ctor___75658256);
  this->fields.presentTicketList = (struct System_Collections_Generic_List_ListViewItem__o *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.presentTicketList, (int32_t)v23, v24, v25);
  *(_DWORD *)(v15 + 20) = 0;
  *(_QWORD *)(v15 + 24) = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 24), 0, v26, v27);
  v28 = this->fields.presentTicketList;
  v31 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_ListViewItem__TypeInfo, v29, v30);
  System_Predicate_object____ctor(
    v31,
    (Il2CppObject *)v15,
    Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__,
    0LL);
  if ( !v28 )
    goto LABEL_18;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v28,
    (System_Predicate_T__o *)v31,
    (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  selectDialog = UserPresentListViewManager___c_TypeInfo;
  v34 = this->fields.presentTicketList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    selectDialog = UserPresentListViewManager___c_TypeInfo;
  }
  v35 = *(System_Comparison_T__o **)(*((_QWORD *)selectDialog + 23) + 48LL);
  if ( !v35 )
  {
    if ( !*((_DWORD *)selectDialog + 56) )
    {
      j_il2cpp_runtime_class_init_0(selectDialog);
      selectDialog = UserPresentListViewManager___c_TypeInfo;
    }
    v36 = (Il2CppObject *)**((_QWORD **)selectDialog + 23);
    v35 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ListViewItem__TypeInfo, v32, v33);
    System_Comparison_object____ctor(
      v35,
      v36,
      Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__,
      0LL);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__67_1 = (struct System_Comparison_ListViewItem__o *)v35;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__67_1, (int32_t)v35, v38, v39);
  }
  if ( !v34
    || (System_Collections_Generic_List_object___Sort_55243320(
          (System_Collections_Generic_List_object__o *)v34,
          v35,
          (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ListViewItem__Sort__),
        (selectDialog = this->fields.selectDialog) == 0LL) )
  {
LABEL_18:
    sub_1B64324(selectDialog);
  }
  PresentSelectableDlgComponent__Open(
    (PresentSelectableDlgComponent_o *)selectDialog,
    *(ItemEntity_o **)(v15 + 24),
    *(_DWORD *)(v15 + 20),
    v40);
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
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_object__o *v30; // x21
  __int64 v31; // x8
  System_Collections_Generic_List_object__o *v32; // x0
  void **v33; // x25
  void **v34; // x26
  _BOOL8 v35; // x0
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

  if ( (byte_49FB1EA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&kind);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Contains__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__RemoveAt__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v18);
    sub_1B640C8(&NetworkManager_TypeInfo, v19);
    sub_1B640C8(&UserPresentListViewItem_TypeInfo, v20);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v21);
    sub_1B640C8(&StringLiteral_1/*""*/, v22);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v23);
    byte_49FB1EA = 1;
  }
  memset(&v76, 0, sizeof(v76));
  this->fields.kind = kind;
  v24 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     *(_QWORD *)&kind,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v24,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = &this->fields.presentIds;
  this->fields.presentIds = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.presentIds, (int32_t)v24, v26, v27);
  v30 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v28,
                                                       v29);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  v31 = 192LL;
  if ( kind == 1 )
    v31 = 432LL;
  v32 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v31);
  if ( !v32 )
    goto LABEL_62;
  v33 = &Method_System_Collections_Generic_List_string__Add__;
  v34 = &Method_System_Collections_Generic_List_long__Add__;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    v32,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v76 = v75;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v76,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v35 )
      break;
    current = (UserPresentListViewItem_o *)v76.fields._current;
    if ( v76.fields._current )
    {
      methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v76.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (UserPresentListViewItem_c *)v76.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
      {
        sub_1B645E4(v76.fields._current);
LABEL_52:
        sub_1B64324(IsExpired);
      }
    }
    switch ( kind )
    {
      case 1:
        if ( !v76.fields._current )
          sub_1B64324(v35);
        goto LABEL_23;
      case 2:
        if ( !v76.fields._current )
          sub_1B64324(v35);
        if ( !Gift__IsServant_37376332((int32_t)v76.fields._current[10].monitor, 0LL)
          && !Gift__IsCommandCode_37376724(current->fields.giftType, 0LL) )
        {
          goto LABEL_23;
        }
        break;
      case 3:
        if ( !v76.fields._current )
          sub_1B64324(v35);
        checkedIdList = this->fields.checkedIdList;
        if ( !checkedIdList )
          sub_1B64324(0LL);
        if ( System_Collections_Generic_List_long___Contains(
               checkedIdList,
               (int64_t)v76.fields._current[10].klass,
               (const MethodInfo_34953EC *)Method_System_Collections_Generic_List_long__Contains__) )
        {
LABEL_23:
          usrPresentEnt = current->fields.usrPresentEnt;
          if ( !usrPresentEnt )
            sub_1B64324(0LL);
          IsExpired = UserPresentBoxEntity__IsExpired(usrPresentEnt, 0, 0LL);
          v42 = current->fields.usrPresentEnt;
          if ( !v42 )
            goto LABEL_52;
          if ( v42->fields.giftType == 2 )
          {
            itemEnt = current->fields.itemEnt;
            if ( !itemEnt )
              sub_1B64324(IsExpired);
            if ( itemEnt->fields.type != 24 )
            {
              if ( IsExpired )
                goto LABEL_33;
              v44 = p_presentIds;
              v45 = v34;
              v46 = v33;
              endedAt = itemEnt->fields.endedAt;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v48 = endedAt <= NetworkManager__getTime(0LL);
              v33 = v46;
              v34 = v45;
              p_presentIds = v44;
              if ( v48 )
                goto LABEL_33;
LABEL_39:
              v59 = *p_presentIds;
              if ( !*p_presentIds )
                sub_1B64324(0LL);
              presentId = current->fields.presentId;
              items = v59->fields._items;
              v62 = *v34;
              ++v59->fields._version;
              if ( !items )
                sub_1B64324(v59);
              size = v59->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v59,
                  presentId,
                  *(const MethodInfo_3495074 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
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
            if ( !v30 )
              sub_1B64324(NameText);
            if ( !System_Collections_Generic_List_object___Contains(
                    v30,
                    NameText,
                    (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
            {
              v51 = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, v50);
              v54 = v51;
              v55 = v30->fields._items;
              v56 = *v33;
              ++v30->fields._version;
              if ( !v55 )
                sub_1B64324(v51);
              v57 = v30->fields._size;
              if ( (unsigned int)v57 >= v55->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v30,
                  v51,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
              }
              else
              {
                v58 = &v55->obj.klass + v57;
                v30->fields._size = v57 + 1;
                v58[4] = (Il2CppClass *)v54;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v58 + 4), (int32_t)v54, v52, v53);
              }
            }
          }
        }
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v76,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v64 = (int)StringLiteral_1/*""*/;
  p_expiredPresents_k__BackingField = (ServantStatusBattleListViewItem_o *)&this->fields._expiredPresents_k__BackingField;
  this->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._expiredPresents_k__BackingField, v64, v66, v67);
  if ( !v30 )
    goto LABEL_62;
  if ( v30->fields._size >= 1 )
  {
    do
    {
      klass = (System_String_o *)p_expiredPresents_k__BackingField->klass;
      Item = System_Collections_Generic_List_object___get_Item(
               v30,
               0,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
      v70 = System_String__Concat_61388660(
              klass,
              (System_String_o *)StringLiteral_15744/*"["*/,
              (System_String_o *)Item,
              (System_String_o *)StringLiteral_16000/*"]"*/,
              0LL);
      p_expiredPresents_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v70;
      sub_1B6406C(p_expiredPresents_k__BackingField, (int32_t)v70, v71, v72);
      System_Collections_Generic_List_object___RemoveAt(
        v30,
        0,
        (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_string__RemoveAt__);
    }
    while ( v30->fields._size > 0 );
  }
  v32 = (System_Collections_Generic_List_object__o *)*p_presentIds;
  if ( !*p_presentIds
    || (v32 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_long___ToArray(
                                                             (System_Collections_Generic_List_long__o *)v32,
                                                             (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.m_parent) )
  {
LABEL_62:
    sub_1B64324(v32);
  }
  UserPresentBoxWindow__receivePresent(this->fields.m_parent, (System_Int64_array *)v32, 0, 0, v73);
}


// local variable allocation has failed, the output may be wrong!
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
  int64_t presentTicketList; // x0
  int v18; // w26
  int v19; // w27
  int v20; // w29
  int v21; // w24
  _QWORD *v22; // x23
  __int64 methodPtr_low; // x10
  __int64 v24; // x8
  int64_t v25; // x25
  __int64 v26; // x8
  int v27; // w25
  int64_t v28; // x1
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

  if ( (byte_49FB1F2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, selectItm);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&UserPresentListViewItem_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v14);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v15);
    byte_49FB1F2 = 1;
  }
  v16 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     selectItm,
                                                     *(_QWORD *)&num);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  presentTicketList = (int64_t)this->fields.presentTicketList;
  if ( !presentTicketList || !selectItm )
    goto LABEL_26;
  v18 = *(_DWORD *)(presentTicketList + 24);
  v46 = selectItm;
  selectNum = num;
  if ( v18 < 1 || (v19 = selectItm->fields.requireNum * num, v19 < 1) )
  {
    if ( v16 )
    {
LABEL_28:
      m_parent = this->fields.m_parent;
      presentTicketList = (int64_t)System_Collections_Generic_List_long___ToArray(
                                     v16,
                                     (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( m_parent )
      {
        UserPresentBoxWindow__receivePresent(
          m_parent,
          (System_Int64_array *)presentTicketList,
          v46->fields.idx,
          selectNum,
          v33);
        UserPresentListViewManager__SetMode_37092028(this, 2, v34);
        return;
      }
    }
    goto LABEL_26;
  }
  v20 = 0;
  v21 = 1;
  while ( 1 )
  {
    presentTicketList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)presentTicketList,
                                   v21 - 1,
                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !presentTicketList )
      goto LABEL_26;
    v22 = (_QWORD *)presentTicketList;
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
    v24 = v22[15];
    if ( !v24 )
      goto LABEL_26;
    v25 = *(_QWORD *)(v24 + 96);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    presentTicketList = NetworkManager__getTime(0LL);
    if ( v25 <= presentTicketList )
      break;
    v26 = v22[18];
    if ( !v26 )
      goto LABEL_26;
    if ( !v16 )
      goto LABEL_26;
    v27 = *(_DWORD *)(v26 + 80);
    v28 = v22[20];
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
        v28,
        *(const MethodInfo_3495074 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v16->fields._size = size + 1;
      items->m_Items[size] = v28;
    }
    if ( v21 >= v18 )
      goto LABEL_28;
    v20 += v27;
    if ( v20 >= v19 )
      goto LABEL_28;
    presentTicketList = (int64_t)this->fields.presentTicketList;
    ++v21;
    if ( !presentTicketList )
      goto LABEL_26;
  }
  presentTicketList = (int64_t)this->fields.presentTicketList;
  if ( !presentTicketList )
    goto LABEL_26;
  presentTicketList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)presentTicketList,
                                 0,
                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !presentTicketList )
    goto LABEL_26;
  v35 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)presentTicketList + 304LL) >= (unsigned int)v35
    && *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)presentTicketList + 200LL) + 8 * v35 - 8) == UserPresentListViewItem_TypeInfo )
  {
    v36 = *(_QWORD *)(presentTicketList + 120);
    if ( v36 )
    {
      v37 = System_String__Concat_61386656(
              (System_String_o *)StringLiteral_15744/*"["*/,
              *(System_String_o **)(v36 + 24),
              (System_String_o *)StringLiteral_16000/*"]"*/,
              0LL);
      this->fields._expiredPresents_k__BackingField = v37;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&this->fields._expiredPresents_k__BackingField,
        (int32_t)v37,
        v38,
        v39);
      if ( v16 )
      {
        v40 = this->fields.m_parent;
        presentTicketList = (int64_t)System_Collections_Generic_List_long___ToArray(
                                       v16,
                                       (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v40 )
        {
          UserPresentBoxWindow__receivePresent(v40, (System_Int64_array *)presentTicketList, v46->fields.idx, 0, v41);
          return;
        }
      }
    }
LABEL_26:
    sub_1B64324(presentTicketList);
  }
  sub_1B645E4(presentTicketList);
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
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FB1E3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v11);
    sub_1B640C8(&Method_UserPresentListViewManager_OnMoveEnd__, v12);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v13);
    byte_49FB1E3 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v20);
      UserPresentListViewObject__Init_37132580((UserPresentListViewObject_o *)current, mode, v19, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestListObject_37131552(
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
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FB1E4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v9);
    sub_1B640C8(&Method_UserPresentListViewManager_OnMoveEnd__, v10);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v11);
    byte_49FB1E4 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v18);
      UserPresentListViewObject__Init_37132664((UserPresentListViewObject_o *)current, mode, v17, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  UserPresentListViewManager__SetMode_37092028(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__SetMode_37092028(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_49FB1E2 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1B640C8(
                                             &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                             *(_QWORD *)&mode);
    byte_49FB1E2 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1B64324(this);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0LL);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    UserPresentListViewManager__RequestListObject_37131552(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 4;
    goto LABEL_8;
  }
}


void __fastcall UserPresentListViewManager__SetMode_37131500(
        UserPresentListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  UserPresentListViewManager__SetMode_37092028(this, mode, v6);
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
  if ( (byte_49FB1E1 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1B640C8(&UserPresentListViewObject_TypeInfo, obj);
    byte_49FB1E1 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserPresentListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserPresentListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  UserPresentListViewObject__Init_37131376((UserPresentListViewObject_o *)obj, v7, (const MethodInfo *)item);
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
  ListViewSort_o *sort; // x0
  UILabel_o *v9; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v11; // x8
  System_String_o **v12; // x8
  struct ListViewSort_o *v13; // x8
  System_String_o **v14; // x8

  if ( (byte_49FB1F0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17471/*"btn_sort_up"*/, v3);
    sub_1B640C8(&StringLiteral_17514/*"btn_txt_new"*/, v4);
    sub_1B640C8(&StringLiteral_17521/*"btn_txt_old"*/, v5);
    sub_1B640C8(&StringLiteral_17468/*"btn_sort_down"*/, v6);
    byte_49FB1F0 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_24;
    v9 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v9 )
      goto LABEL_24;
    UILabel__set_text(v9, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v11 = this->fields.sort;
    if ( v11 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v12 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_17521/*"btn_txt_old"*/ : &StringLiteral_17514/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v12, 0LL);
        v13 = this->fields.sort;
        if ( v13 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            if ( v13->fields.isAscendingOrder )
              v14 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
            else
              v14 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
            UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_1B64324(sort);
  }
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_0(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21

  if ( (byte_49FB1F5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__, v4);
    byte_49FB1F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL),
        v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8),
        System_Action___ctor(
          v9,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__,
          0LL),
        !v6) )
  {
    sub_1B64324(Instance);
  }
  CommonUI__maskFadeout((CommonUI_o *)v6, 1, 0.5, v9, 0LL);
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_1(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UserPresentBoxWindow_o *m_parent; // x0

  if ( (byte_49FB1F6 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FB1F6 = 1;
  }
  UserPresentListViewManager__DestroyList(this, method);
  m_parent = this->fields.m_parent;
  if ( !m_parent
    || (UserPresentBoxWindow__ReDisp(m_parent, v3), (m_parent = (UserPresentBoxWindow_o *)this->fields.scrollView) == 0LL)
    || (UIScrollView__ResetPosition((UIScrollView_o *)m_parent, 0LL),
        (m_parent = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B64324(m_parent);
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

  if ( (byte_49FB1D4 & 1) == 0 )
  {
    sub_1B640C8(&UserPresentListViewManager_CallbackFunc_TypeInfo, value);
    byte_49FB1D4 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49FB1D6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49FB1D6 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49FB1D8 & 1) == 0 )
  {
    sub_1B640C8(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, value);
    byte_49FB1D8 = 1;
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
    v8 = sub_1B9F5B8(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
  UserPresentListViewManager__remove_receivecCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_UserPresentListViewObject__o *__fastcall UserPresentListViewManager__get_ClippingObjectList(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  ListViewItem_o *Item; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  _BOOL8 v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FB1DD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49FB1DD = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserPresentListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)UserPresentListViewObject__GetItem((UserPresentListViewObject_o *)Component_object, v17);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v12 )
            sub_1B64324(v22);
          items = v12->fields._items;
          v24 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v22);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v12;
}


System_Collections_Generic_List_UserPresentListViewObject__o *__fastcall UserPresentListViewManager__get_ObjectList(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FB1DC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49FB1DC = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserPresentListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v19 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v21 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v12;
}


ListViewSort_o *__fastcall UserPresentListViewManager__get_SortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  UserPresentListViewManager_c *v2; // x0

  if ( (byte_49FB1D3 & 1) == 0 )
  {
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, v1);
    byte_49FB1D3 = 1;
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

  if ( (byte_49FB1D5 & 1) == 0 )
  {
    sub_1B640C8(&UserPresentListViewManager_CallbackFunc_TypeInfo, value);
    byte_49FB1D5 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49FB1D7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49FB1D7 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49FB1D9 & 1) == 0 )
  {
    sub_1B640C8(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, value);
    byte_49FB1D9 = 1;
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
    v8 = sub_1B9F5B8(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
  UserPresentListViewManager__get_select_idx(v10, v11);
}


void __fastcall UserPresentListViewManager__resetCheckStatus(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v4; // w9

  if ( (byte_49FB1E9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Clear__, method);
    byte_49FB1E9 = 1;
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
    sub_1B64324(0LL);
  UserPresentBoxErrorDialog__setJumpType(dialog, type, method);
}


void __fastcall UserPresentListViewManager__set_expiredPresents(
        UserPresentListViewManager_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._expiredPresents_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49FB1EC & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, callback);
    sub_1B640C8(&StringLiteral_10997/*"REJECT_NORMAL_TXT"*/, v6);
    sub_1B640C8(&StringLiteral_10993/*"REJECT_ALL_TXT"*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FB1EC = 1;
  }
  this->fields.receivecCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.receivecCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  kind = this->fields.kind;
  if ( !kind )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_10997/*"REJECT_NORMAL_TXT"*/;
    goto LABEL_12;
  }
  if ( (unsigned int)(kind - 1) <= 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_10993/*"REJECT_ALL_TXT"*/;
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_long__o *checkedIdList; // x21
  void *m_parent; // x0
  int32_t size; // w25
  BalanceConfig_c *v16; // x0
  int32_t PresentBoxCheckMax; // w26
  System_Collections_Generic_List_long__o *v18; // x20
  const MethodInfo *v19; // x2
  int32_t v20; // w21
  UserPresentListViewItem_o *v21; // x27
  UserPresentListViewItem_o *v22; // x22
  __int64 methodPtr_low; // x9
  int64_t v24; // x23
  const MethodInfo *v25; // x3
  int32_t v26; // w0
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  struct ItemEntity_o *itemEnt; // x8
  char v31; // w1
  struct System_Collections_Generic_List_long__o *v32; // x8
  UserPresentListViewManager_o *v33; // x0
  int32_t v34; // w1
  const MethodInfo *v35; // x2
  int v36; // [xsp+Ch] [xbp-64h]

  if ( (byte_49FB1E8 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__IndexOf__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Remove__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor___75657400, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_1B640C8(&UserPresentListViewItem_TypeInfo, v12);
    byte_49FB1E8 = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList && checkedIdList->fields._size )
  {
    v36 = 1;
  }
  else
  {
    m_parent = this->fields.m_parent;
    if ( !m_parent )
      goto LABEL_39;
    UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 0, 1, v3);
    checkedIdList = this->fields.checkedIdList;
    if ( !checkedIdList )
      goto LABEL_39;
    v36 = 0;
  }
  size = checkedIdList->fields._size;
  v16 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
    checkedIdList = this->fields.checkedIdList;
  }
  PresentBoxCheckMax = v16->static_fields->PresentBoxCheckMax;
  v18 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2);
  System_Collections_Generic_List_long____ctor_55134536(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)checkedIdList,
    (const MethodInfo_3494948 *)Method_System_Collections_Generic_List_long___ctor___75657400);
  m_parent = this->fields.itemList;
  if ( !m_parent )
LABEL_39:
    sub_1B64324(m_parent);
  v20 = 0;
  v21 = 0LL;
  while ( 1 )
  {
    if ( v20 >= *((_DWORD *)m_parent + 6) )
    {
      v32 = this->fields.checkedIdList;
      if ( v32 )
      {
        m_parent = this->fields.m_parent;
        if ( m_parent )
        {
          UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)m_parent, v32->fields._size, v19);
          return;
        }
      }
      goto LABEL_39;
    }
    m_parent = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)m_parent,
                 v20,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !m_parent )
      goto LABEL_39;
    v22 = (UserPresentListViewItem_o *)m_parent;
    methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)m_parent + 304LL) < (unsigned int)methodPtr_low
      || *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)m_parent + 200LL) + 8 * methodPtr_low - 8) != UserPresentListViewItem_TypeInfo )
    {
      break;
    }
    if ( !v18 )
      goto LABEL_39;
    v24 = *((_QWORD *)m_parent + 20);
    if ( System_Collections_Generic_List_long___Remove(
           v18,
           v24,
           (const MethodInfo_3496610 *)Method_System_Collections_Generic_List_long__Remove__) )
    {
      m_parent = this->fields.checkedIdList;
      if ( !m_parent )
        goto LABEL_39;
      v26 = System_Collections_Generic_List_long___IndexOf(
              (System_Collections_Generic_List_long__o *)m_parent,
              v24,
              (const MethodInfo_3495D90 *)Method_System_Collections_Generic_List_long__IndexOf__);
      UserPresentListViewItem__setCheckBoxed(v22, 1, v26 + 1, v27);
    }
    else
    {
      UserPresentListViewItem__setCheckBoxed(v22, 0, -1, v25);
      if ( size < PresentBoxCheckMax )
        v21 = v22;
      if ( size < PresentBoxCheckMax )
      {
        if ( v36 && (usrPresentEnt = v22->fields.usrPresentEnt) != 0LL )
        {
          if ( usrPresentEnt->fields.giftType == 2 )
          {
            itemEnt = v22->fields.itemEnt;
            if ( !itemEnt )
              goto LABEL_39;
            v31 = itemEnt->fields.type == 24;
          }
          else
          {
            v31 = 0;
          }
          v22 = v21;
          if ( !v21 )
            goto LABEL_39;
        }
        else
        {
          v31 = 0;
        }
      }
      else
      {
        v31 = 1;
      }
      UserPresentListViewItem__setBlocked(v22, v31, v28);
    }
    m_parent = this->fields.itemList;
    ++v20;
    if ( !m_parent )
      goto LABEL_39;
  }
  sub_1B645E4(m_parent);
  UserPresentListViewManager__GetItem(v33, v34, v35);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19AB4BC;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19AB49C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AB454;
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
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v6, callback, object);
}


void __fastcall UserPresentListViewManager_CallbackFunc__EndInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AB540;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AB4F8;
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
  if ( (byte_49FB1F7 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isReceive);
    byte_49FB1F7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall UserPresentListViewManager_ReceiveCallbackFunc__EndInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FB1F8 & 1) == 0 )
  {
    sub_1B640C8(&UserPresentListViewManager___c_TypeInfo, v1);
    byte_49FB1F8 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(UserPresentListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  UserPresentListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)UserPresentListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  int64_t sortValue0; // x8
  int64_t v8; // x9
  UserPresentListViewManager___c_o *v10; // x0
  ListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_49FB1F9 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1B640C8(&UserPresentListViewItem_TypeInfo, a);
    byte_49FB1F9 = 1;
  }
  if ( !a )
    goto LABEL_12;
  methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(a->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo )
  {
    sortValue0 = a[1].fields.sortValue0;
    if ( !sortValue0 || !b )
      goto LABEL_12;
    if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo )
    {
      v8 = b[1].fields.sortValue0;
      if ( v8 )
        return *(_QWORD *)(sortValue0 + 88) - *(_DWORD *)(v8 + 88);
LABEL_12:
      sub_1B64324(this);
    }
  }
  else
  {
    sub_1B645E4(a);
  }
  sub_1B645E4(b);
  return UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(v10, v11, v12);
}


bool __fastcall UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *obj,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  int64_t sortValue0; // x8
  _DWORD *monitor; // x8
  UserPresentListViewManager___c_o *v8; // x0
  ListViewItem_o *v9; // x1
  ListViewItem_o *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_49FB1FA & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1B640C8(&UserPresentListViewItem_TypeInfo, obj);
    byte_49FB1FA = 1;
  }
  if ( !obj )
    goto LABEL_11;
  methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo )
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
      sub_1B64324(this);
    }
    return 0;
  }
  else
  {
    sub_1B645E4(obj);
    return UserPresentListViewManager___c___GetAllPresentStrings_b__60_2(v8, v9, v10, v11);
  }
}


int32_t __fastcall UserPresentListViewManager___c___GetAllPresentStrings_b__60_2(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *a,
        ListViewItem_o *b,
        const MethodInfo *method)
{
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

  if ( (byte_49FB1FB & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1B640C8(&UserPresentListViewItem_TypeInfo, a);
    byte_49FB1FB = 1;
  }
  if ( !a )
    goto LABEL_17;
  methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(a->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
  {
    goto LABEL_18;
  }
  this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_NameText(
                                               (UserPresentListViewItem_o *)a,
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
  result = System_String__CompareTo_61382696((System_String_o *)v8, (System_String_o *)this, 0LL);
  if ( result )
    return result;
  v10 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(a->klass->vtable._0_Equals.methodPtr) < (unsigned int)v10
    || (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[v10 - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_18:
    sub_1B645E4(a);
    goto LABEL_19;
  }
  v11 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v11
    && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v11 - 1] == UserPresentListViewItem_TypeInfo )
  {
    this = (UserPresentListViewManager___c_o *)a[1].fields.sortValue2;
    if ( this )
      return System_String__CompareTo_61382696((System_String_o *)this, (System_String_o *)b[1].fields.sortValue2, 0LL);
LABEL_17:
    sub_1B64324(this);
  }
LABEL_19:
  sub_1B645E4(b);
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
  int64_t sortValue0; // x8
  int64_t v8; // x9
  UserPresentListViewManager___c__DisplayClass67_0_o *v10; // x0
  ListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_49FB1FC & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1B640C8(&UserPresentListViewItem_TypeInfo, a);
    byte_49FB1FC = 1;
  }
  if ( !a )
    goto LABEL_12;
  methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(a->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo )
  {
    sortValue0 = a[1].fields.sortValue0;
    if ( !sortValue0 || !b )
      goto LABEL_12;
    if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo )
    {
      v8 = b[1].fields.sortValue0;
      if ( v8 )
        return *(_QWORD *)(sortValue0 + 88) - *(_DWORD *)(v8 + 88);
LABEL_12:
      sub_1B64324(this);
    }
  }
  else
  {
    sub_1B645E4(a);
  }
  sub_1B645E4(b);
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
  if ( (byte_49FB1FD & 1) == 0 )
  {
    this = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_1B640C8(&UserPresentListViewItem_TypeInfo, obj);
    byte_49FB1FD = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
  {
    sub_1B64324(this);
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
    sub_1B6406C(p_ticketItem, (int32_t)monitor, (int32_t)method, v3);
  }
  return 0;
}