void UserPresentListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59373A6 & 1) == 0 )
  {
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_15808/*"UserPresent"*/);
    byte_59373A6 = 1;
  }
  v1 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v1, (System_String_o *)StringLiteral_15808/*"UserPresent"*/, 1, 0, 0);
  UserPresentListViewManager_TypeInfo->static_fields->sortInfo = v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UserPresentListViewManager_TypeInfo->static_fields,
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  int64_t m_parent; // x0
  System_Collections_Generic_IEnumerable_T__o *checkedIdList; // x22
  System_Collections_Generic_List_long__o *v21; // x21
  const MethodInfo *v22; // x3
  int max_length; // w8
  unsigned int v24; // w22
  Il2CppClass **v25; // x23
  Il2CppClass *v26; // x8
  UserPresentBoxEntity_o **v27; // x23
  Il2CppClass *v28; // t1
  UserPresentBoxEntity_o *v29; // x24
  UserPresentListViewItem_o *v30; // x23
  const MethodInfo *v31; // x3
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  struct System_Collections_Generic_List_long__o *v42; // x20
  int32_t v43; // w22
  const MethodInfo *v44; // x1
  il2cpp_array_size_t v45; // x8
  unsigned __int64 v46; // x21
  UserPresentBoxEntity_o *v47; // x23
  UserPresentListViewItem_o *v48; // x22
  const MethodInfo *v49; // x3
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  __int64 v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  __int64 v59; // x8

  if ( (byte_5937391 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor___91427576);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&UserPresentListViewItem_TypeInfo);
    byte_5937391 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.selectPresentData = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectPresentData, 0, v5, v6, v7, v8, v9, v10);
  this->fields.presentIds = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.presentIds, 0, v11, v12, v13, v14, v15, v16);
  m_parent = (int64_t)this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_38;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 0, 0, v18);
  checkedIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v21 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_71531028(
      v21,
      checkedIdList,
      (const MethodInfo_4437A14 *)Method_System_Collections_Generic_List_long___ctor___91427576);
    if ( !presentList )
      goto LABEL_38;
    max_length = presentList->max_length;
    if ( max_length >= 1 )
    {
      v24 = 0;
      while ( v24 < max_length )
      {
        v25 = &presentList->obj.klass + (int)v24;
        v28 = v25[4];
        v27 = (UserPresentBoxEntity_o **)(v25 + 4);
        v26 = v28;
        if ( !v28 || !v21 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v21,
                     (int64_t)v26->_1.namespaze,
                     (const MethodInfo_4439624 *)Method_System_Collections_Generic_List_long__Remove__);
        if ( v24 >= LODWORD(presentList->max_length) )
          goto LABEL_39;
        v29 = *v27;
        v30 = (UserPresentListViewItem_o *)sub_21FFEBC(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v30, v24, v29, v31);
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
            (Il2CppObject *)v30,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = v38 + 8 * v40;
          *(_DWORD *)(m_parent + 24) = v40 + 1;
          *(_QWORD *)(v41 + 32) = v30;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 32), (int32_t)v30, v32, v33, v34, v35, v36, v37);
        }
        max_length = presentList->max_length;
        if ( (int)++v24 >= max_length )
          goto LABEL_18;
      }
      goto LABEL_39;
    }
LABEL_18:
    if ( !v21 )
LABEL_38:
      sub_21FFECC(m_parent, v17);
    v42 = this->fields.checkedIdList;
    if ( v21->fields._size >= 1 )
    {
      v43 = 0;
      do
      {
        m_parent = System_Collections_Generic_List_long___get_Item(
                     v21,
                     v43,
                     (const MethodInfo_4437E70 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !v42 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v42,
                     m_parent,
                     (const MethodInfo_4439624 *)Method_System_Collections_Generic_List_long__Remove__);
        ++v43;
        v42 = this->fields.checkedIdList;
      }
      while ( v43 < v21->fields._size );
    }
    if ( !v42 )
      goto LABEL_38;
    if ( v42->fields._size >= 1 )
    {
      m_parent = (int64_t)this->fields.m_parent;
      if ( !m_parent )
        goto LABEL_38;
      UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 1, 1, v22);
      UserPresentListViewManager__updateCheckStatus(this, v44);
    }
  }
  else
  {
    if ( !presentList )
      goto LABEL_38;
    v45 = presentList->max_length;
    if ( (int)v45 >= 1 )
    {
      v46 = 0;
      while ( v46 < (unsigned int)v45 )
      {
        v47 = presentList->m_Items[v46];
        v48 = (UserPresentListViewItem_o *)sub_21FFEBC(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v48, v46, v47, v49);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v56 = *(_QWORD *)(m_parent + 16);
        v57 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v56 )
          goto LABEL_38;
        v58 = *(int *)(m_parent + 24);
        if ( (unsigned int)v58 >= *(_DWORD *)(v56 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v48,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          v59 = v56 + 8 * v58;
          *(_DWORD *)(m_parent + 24) = v58 + 1;
          *(_QWORD *)(v59 + 32) = v48;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v59 + 32), (int32_t)v48, v50, v51, v52, v53, v54, v55);
        }
        LODWORD(v45) = presentList->max_length;
        if ( (__int64)++v46 >= (int)v45 )
          goto LABEL_37;
      }
LABEL_39:
      sub_21FFED4(m_parent);
    }
  }
LABEL_37:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void UserPresentListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserPresentListViewManager_c *v3; // x0
  ListViewSort_o *sortInfo; // x0

  if ( (byte_593738C & 1) == 0 )
  {
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_593738C = 1;
  }
  v3 = UserPresentListViewManager_TypeInfo;
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v1, v2);
    v3 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v3->static_fields->sortInfo;
  if ( !sortInfo )
    sub_21FFECC(0, v1);
  ListViewSort__DeleteContinueData(sortInfo, 0);
}


void UserPresentListViewManager__DestroyList(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_21FFECC(0, v3);
  ListViewSort__Save(sort, 0);
}


void UserPresentListViewManager__DlgForExpiredPresent(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  System_Action_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_59373A5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__);
    sub_21FFC50(&StringLiteral_10871/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/);
    byte_59373A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3, v4);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10871/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0);
  v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, 0);
  if ( !Instance )
    sub_21FFECC(v8, v9);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, 0, v6, v7, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
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

  if ( (byte_59373A0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_SceneList_Type__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserPresentListViewManager_EndNoticeDlg__);
    byte_59373A0 = 1;
  }
  dialog = this->fields.dialog;
  v6 = (System_Action_T__o *)sub_21FFEBC(System_Action_SceneList_Type__TypeInfo);
  System_Action_Int32Enum____ctor(v6, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0);
  if ( !dialog )
    goto LABEL_14;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(dialog, (System_Action_SceneList_Type__o *)v6, 0);
  if ( scene == -1 )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( CommonUI__IsActive_MasterMission((CommonUI_o *)Instance, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_21FFECC(Instance, v8);
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
  int32_t size; // w2
  int v5; // w9
  System_Collections_Generic_IEnumerable_T__o *itemList; // x20
  System_Collections_Generic_List_object__o *v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  void *NameText; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v17; // x20
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__60_0; // x21
  Il2CppObject *v20; // x22
  struct UserPresentListViewManager___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v29; // x20
  struct UserPresentListViewManager___c_StaticFields *v30; // x8
  System_Predicate_object__o *_9__60_1; // x21
  Il2CppObject *v32; // x22
  struct UserPresentListViewManager___c_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x2
  System_Collections_Generic_List_object__o *v41; // x20
  int v42; // w8
  __int64 v43; // x2
  struct UserPresentListViewManager___c_StaticFields *v44; // x8
  System_Comparison_T__o *_9__60_2; // x21
  Il2CppObject *v46; // x22
  struct UserPresentListViewManager___c_StaticFields *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_Text_StringBuilder_o *v54; // x20
  struct System_Collections_Generic_List_ListViewItem__o *v55; // x8
  int v56; // w24
  int32_t v57; // w21
  Il2CppObject *Item; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 naturalAligment; // x10
  Il2CppObject *v62; // x22
  System_String_o *v63; // x23

  if ( (byte_593739D & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&System_Comparison_ListViewItem__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem___ctor___91428520);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Predicate_ListViewItem__TypeInfo);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__);
    sub_21FFC50(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__);
    sub_21FFC50(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__);
    sub_21FFC50(&UserPresentListViewManager___c_TypeInfo);
    sub_21FFC50(&UserPresentListViewItem_TypeInfo);
    sub_21FFC50(&StringLiteral_10876/*"PRESENT_INFO"*/);
    byte_593739D = 1;
  }
  presentAllSelectedList = this->fields.presentAllSelectedList;
  if ( presentAllSelectedList )
  {
    size = presentAllSelectedList->fields._size;
    v5 = presentAllSelectedList->fields._version + 1;
    presentAllSelectedList->fields._size = 0;
    presentAllSelectedList->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)presentAllSelectedList->fields._items, 0, size, 0);
  }
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_71627776(
    v7,
    itemList,
    (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_ListViewItem___ctor___91428520);
  this->fields.presentAllSelectedList = (struct System_Collections_Generic_List_ListViewItem__o *)v7;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.presentAllSelectedList,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  NameText = UserPresentListViewManager___c_TypeInfo;
  v17 = this->fields.presentAllSelectedList;
  if ( !*(&UserPresentListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo, v14, v15);
    NameText = UserPresentListViewManager___c_TypeInfo;
  }
  static_fields = (struct UserPresentListViewManager___c_StaticFields *)*((_QWORD *)NameText + 23);
  _9__60_0 = (System_Comparison_T__o *)static_fields->__9__60_0;
  if ( !_9__60_0 )
  {
    if ( !*((_DWORD *)NameText + 57) )
    {
      j_il2cpp_runtime_class_init_0(NameText, v14, v15);
      static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__60_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      _9__60_0,
      v20,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__,
      0);
    v21 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v21->__9__60_0 = (struct System_Comparison_ListViewItem__o *)_9__60_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->__9__60_0, (int32_t)_9__60_0, v22, v23, v24, v25, v26, v27);
  }
  if ( !v17 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_71636404(
    (System_Collections_Generic_List_object__o *)v17,
    _9__60_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  NameText = UserPresentListViewManager___c_TypeInfo;
  v29 = this->fields.presentAllSelectedList;
  if ( !*(&UserPresentListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo, v14, v28);
    NameText = UserPresentListViewManager___c_TypeInfo;
  }
  v30 = (struct UserPresentListViewManager___c_StaticFields *)*((_QWORD *)NameText + 23);
  _9__60_1 = (System_Predicate_object__o *)v30->__9__60_1;
  if ( !_9__60_1 )
  {
    if ( !*((_DWORD *)NameText + 57) )
    {
      j_il2cpp_runtime_class_init_0(NameText, v14, v28);
      v30 = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)v30->__9;
    _9__60_1 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_object____ctor(
      _9__60_1,
      v32,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__,
      0);
    v33 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v33->__9__60_1 = (struct System_Predicate_ListViewItem__o *)_9__60_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v33->__9__60_1, (int32_t)_9__60_1, v34, v35, v36, v37, v38, v39);
  }
  if ( !v29 )
    goto LABEL_53;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v29,
    (System_Predicate_T__o *)_9__60_1,
    (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  NameText = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14, v40);
    NameText = BalanceConfig_TypeInfo;
  }
  v41 = (System_Collections_Generic_List_object__o *)this->fields.presentAllSelectedList;
  if ( !v41 )
    goto LABEL_53;
  v14 = (const MethodInfo *)*(unsigned int *)(*((_QWORD *)NameText + 23) + 132LL);
  v42 = v41->fields._size;
  v43 = (unsigned int)(v42 - (_DWORD)v14);
  if ( v42 > (int)v14 )
  {
    System_Collections_Generic_List_object___RemoveRange(
      (System_Collections_Generic_List_object__o *)this->fields.presentAllSelectedList,
      (int32_t)v14,
      v43,
      (const MethodInfo_445135C *)Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    v41 = (System_Collections_Generic_List_object__o *)this->fields.presentAllSelectedList;
  }
  NameText = UserPresentListViewManager___c_TypeInfo;
  if ( !*(&UserPresentListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo, v14, v43);
    NameText = UserPresentListViewManager___c_TypeInfo;
  }
  v44 = (struct UserPresentListViewManager___c_StaticFields *)*((_QWORD *)NameText + 23);
  _9__60_2 = (System_Comparison_T__o *)v44->__9__60_2;
  if ( !_9__60_2 )
  {
    if ( !*((_DWORD *)NameText + 57) )
    {
      j_il2cpp_runtime_class_init_0(NameText, v14, v43);
      v44 = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)v44->__9;
    _9__60_2 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      _9__60_2,
      v46,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__,
      0);
    v47 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v47->__9__60_2 = (struct System_Comparison_ListViewItem__o *)_9__60_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v47->__9__60_2, (int32_t)_9__60_2, v48, v49, v50, v51, v52, v53);
  }
  if ( !v41 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_71636404(
    v41,
    _9__60_2,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  v54 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v54, 0);
  v55 = this->fields.presentAllSelectedList;
  if ( !v55 )
    goto LABEL_53;
  v56 = v55->fields._size;
  if ( v56 >= 1 )
  {
    v57 = 0;
    while ( 1 )
    {
      if ( v57 )
      {
        if ( !v54 )
          break;
        System_Text_StringBuilder__Append_75524092(v54, 0xAu, 0);
      }
      NameText = this->fields.presentAllSelectedList;
      if ( !NameText )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)NameText,
               v57,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item
        && (naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment,
            Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        v62 = (UserPresentListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo
            ? Item
            : 0LL;
      }
      else
      {
        v62 = 0;
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v59, v60);
      NameText = LocalizationManager__Get((System_String_o *)StringLiteral_10876/*"PRESENT_INFO"*/, 0);
      if ( !v62 )
        break;
      v63 = (System_String_o *)NameText;
      NameText = UserPresentListViewItem__get_NameText((UserPresentListViewItem_o *)v62, v14);
      if ( !v54 )
        break;
      NameText = System_Text_StringBuilder__AppendFormat_75527968(
                   v54,
                   v63,
                   (Il2CppObject *)NameText,
                   (Il2CppObject *)v62[12].klass,
                   0);
      if ( v56 == ++v57 )
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v54->klass->vtable._3_ToString.methodPtr)(
                                    v54,
                                    v54->klass->vtable._3_ToString.method);
    }
LABEL_53:
    sub_21FFECC(NameText, v14);
  }
  if ( !v54 )
    goto LABEL_53;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v54->klass->vtable._3_ToString.methodPtr)(
                              v54,
                              v54->klass->vtable._3_ToString.method);
}


UserPresentListViewItem_o *UserPresentListViewManager__GetItem(
        UserPresentListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UserPresentListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_5937392 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&UserPresentListViewItem_TypeInfo);
    byte_5937392 = 1;
  }
  result = (UserPresentListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (UserPresentListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UserPresentListViewManager_c *v9; // x0
  struct ListViewSort_o **p_sortInfo; // x8
  struct ListViewSort_o *v11; // x1
  __int64 v12; // x1
  struct ListViewSort_o *sort; // x0

  if ( (byte_5937390 & 1) == 0 )
  {
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_5937390 = 1;
  }
  v9 = UserPresentListViewManager_TypeInfo;
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, method, v2);
    v9 = UserPresentListViewManager_TypeInfo;
  }
  p_sortInfo = &v9->static_fields->sortInfo;
  v11 = *p_sortInfo;
  this->fields.sort = *p_sortInfo;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v11, v2, v3, v4, v5, v6, v7);
  sort = this->fields.sort;
  if ( !sort )
    sub_21FFECC(0, v12);
  sort->fields.listViewKind = 4;
  ListViewSort__Load(sort, 0);
  ((void (__fastcall *)(UserPresentListViewManager_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
    this,
    this->klass->vtable._5_SetSortButtonImage.method);
}


void UserPresentListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserPresentListViewManager_c *v3; // x0
  ListViewSort_o *sortInfo; // x0

  if ( (byte_593738D & 1) == 0 )
  {
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_593738D = 1;
  }
  v3 = UserPresentListViewManager_TypeInfo;
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v1, v2);
    v3 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v3->static_fields->sortInfo;
  if ( !sortInfo )
    sub_21FFECC(0, v1);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct UserPresentListViewItem_o *selectItem; // x8
  struct UserPresentBoxEntity_o *usrPresentEnt; // x1
  System_Collections_Generic_List_long__o *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct UserPresentListViewItem_o *v27; // x8
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int size; // w22
  int32_t v30; // w21
  struct UserPresentListViewItem_o *v31; // x8
  __int64 v32; // x2
  struct UserPresentBoxEntity_o *selectPresentData; // x8
  struct UserPresentListViewItem_o *v34; // x8
  struct ItemEntity_o *itemEnt; // x8
  int64_t endedAt; // x21
  __int64 v37; // x2
  Il2CppObject *MasterData_object; // x21
  struct UserPresentBoxEntity_o *v39; // x8
  struct UserPresentBoxEntity_o *v40; // x9
  BalanceConfig_c *v41; // x0
  int v42; // w21
  System_Reflection_MethodBase_o *v43; // x0
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  const MethodInfo *v46; // x1
  struct UserPresentBoxEntity_o *v47; // x8
  struct System_Collections_Generic_List_long__o *v48; // x8
  int32_t v49; // w22
  BalanceConfig_c *v50; // x0
  int32_t PresentBoxCheckMax; // w10
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  __int64 v54; // x2
  struct UserPresentListViewItem_o *v55; // x9
  intptr_t m_CachedPtr; // x8
  _QWORD *v57; // x9
  __int64 m_CancellationTokenSource_low; // x10
  BalanceConfig_c *v59; // x8
  int32_t m_CancellationTokenSource; // w22
  const MethodInfo *v61; // x3
  struct System_Collections_Generic_List_long__o *v62; // x8
  const MethodInfo *v63; // x2
  struct System_Collections_Generic_List_long__o *v64; // x8
  const MethodInfo *v65; // x3
  ItemEntity_o *v66; // [xsp+0h] [xbp-40h] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_5937399 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (UserPresentListViewManager_o *)sub_21FFC50(&Method_UserPresentListViewManager_OnClickListCheck__);
    byte_5937399 = 1;
  }
  v66 = 0;
  entity = 0;
  if ( !v3 )
    goto LABEL_81;
  Item = UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  v4->fields.selectItem = Item;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.selectItem, (int32_t)Item, v6, v7, v8, v9, v10, v11);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_81;
  usrPresentEnt = selectItem->fields.usrPresentEnt;
  v4->fields.selectPresentData = usrPresentEnt;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.selectPresentData,
    (int32_t)usrPresentEnt,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !v4->fields.checkedIdList )
  {
    v20 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v20,
      (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
    v4->fields.checkedIdList = v20;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.checkedIdList,
      (int32_t)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = v4->fields.selectItem;
  if ( !v27 )
    goto LABEL_81;
  if ( v27->fields.presentId >= 1 )
  {
    checkedIdList = v4->fields.checkedIdList;
    if ( !checkedIdList )
      goto LABEL_81;
    size = checkedIdList->fields._size;
    if ( size >= 1 )
    {
      v30 = 0;
      while ( 1 )
      {
        this = (UserPresentListViewManager_o *)v4->fields.checkedIdList;
        if ( !this )
          goto LABEL_81;
        this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___get_Item(
                                                 (System_Collections_Generic_List_long__o *)this,
                                                 v30,
                                                 (const MethodInfo_4437E70 *)Method_System_Collections_Generic_List_long__get_Item__);
        v31 = v4->fields.selectItem;
        if ( !v31 )
          goto LABEL_81;
        if ( this == (UserPresentListViewManager_o *)v31->fields.presentId )
          break;
        if ( size == ++v30 )
          goto LABEL_16;
      }
      v44 = Method_UserPresentListViewManager_OnClickListCheck__;
      if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
        v44 = (_QWORD *)sub_21FFC68(Method_UserPresentListViewManager_OnClickListCheck__);
      v45 = (System_Reflection_MethodBase_o *)sub_21FFC34(v44, v44[4]);
      OverwriteAssetSoundName__PlaySystemSe(v45, 0, 0, 0);
      this = (UserPresentListViewManager_o *)v4->fields.checkedIdList;
      if ( this )
      {
        System_Collections_Generic_List_long___RemoveAt(
          (System_Collections_Generic_List_long__o *)this,
          v30,
          (const MethodInfo_44398A8 *)Method_System_Collections_Generic_List_long__RemoveAt__);
        UserPresentListViewManager__updateCheckStatus(v4, v46);
        return;
      }
LABEL_81:
      sub_21FFECC(this, obj);
    }
LABEL_16:
    this = (UserPresentListViewManager_o *)v4->fields.selectPresentData;
    if ( !this )
      goto LABEL_81;
    this = (UserPresentListViewManager_o *)UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)this, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_18:
      UserPresentListViewManager__DlgForExpiredPresent(v4, (const MethodInfo *)obj);
      return;
    }
    selectPresentData = v4->fields.selectPresentData;
    if ( !selectPresentData )
      goto LABEL_81;
    if ( selectPresentData->fields.giftType != 2 )
      goto LABEL_54;
    v34 = v4->fields.selectItem;
    if ( !v34 )
      goto LABEL_81;
    itemEnt = v34->fields.itemEnt;
    if ( !itemEnt )
      goto LABEL_81;
    endedAt = itemEnt->fields.endedAt;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, obj, v32);
    if ( endedAt <= NetworkManager__getTime(0) )
      goto LABEL_18;
    this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_81;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, obj, v37);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    this = (UserPresentListViewManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, obj, v37);
      this = (UserPresentListViewManager_o *)NetworkManager_TypeInfo;
    }
    v39 = v4->fields.selectPresentData;
    if ( !v39 || !MasterData_object )
      goto LABEL_81;
    this = (UserPresentListViewManager_o *)UserItemMaster__TryGetEntity(
                                             (UserItemMaster_o *)MasterData_object,
                                             &entity,
                                             *(_QWORD *)&this->fields.sort->fields.bonusKind,
                                             v39->fields.objectId,
                                             0);
    if ( !entity )
      goto LABEL_54;
    v40 = v4->fields.selectPresentData;
    if ( !v40 )
      goto LABEL_81;
    v41 = BalanceConfig_TypeInfo;
    v42 = v40->fields.num + entity->fields.num;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, obj, v32);
      v41 = BalanceConfig_TypeInfo;
    }
    if ( v42 > v41->static_fields->UserItemMax )
      goto LABEL_40;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, obj, v32);
    this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
    v47 = v4->fields.selectPresentData;
    if ( !v47 || !this )
      goto LABEL_81;
    this = (UserPresentListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             (Il2CppObject **)&v66,
                                             v47->fields.objectId,
                                             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_54;
    this = (UserPresentListViewManager_o *)v66;
    if ( !v66 )
      goto LABEL_81;
    this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum(v66, 0);
    if ( (int)this < 1 )
      goto LABEL_54;
    this = (UserPresentListViewManager_o *)v66;
    if ( !v66 )
      goto LABEL_81;
    this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum(v66, 0);
    if ( v42 > (int)this )
    {
LABEL_40:
      v43 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_UserPresentListViewManager_OnClickListCheck__);
    }
    else
    {
LABEL_54:
      v48 = v4->fields.checkedIdList;
      if ( !v48 )
        goto LABEL_81;
      v49 = v48->fields._size;
      v50 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, obj, v32);
        v50 = BalanceConfig_TypeInfo;
      }
      PresentBoxCheckMax = v50->static_fields->PresentBoxCheckMax;
      v52 = Method_UserPresentListViewManager_OnClickListCheck__;
      if ( v49 < PresentBoxCheckMax )
      {
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
          v52 = (_QWORD *)sub_21FFC68(Method_UserPresentListViewManager_OnClickListCheck__);
        v53 = (System_Reflection_MethodBase_o *)sub_21FFC34(v52, v52[4]);
        OverwriteAssetSoundName__PlaySystemSe(v53, 0, 0, 0);
        v55 = v4->fields.selectItem;
        if ( !v55 )
          goto LABEL_81;
        this = (UserPresentListViewManager_o *)v4->fields.checkedIdList;
        if ( !this )
          goto LABEL_81;
        m_CachedPtr = this->fields.m_CachedPtr;
        obj = (UserPresentListViewObject_o *)v55->fields.presentId;
        v57 = Method_System_Collections_Generic_List_long__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_81;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            (System_Collections_Generic_List_long__o *)this,
            (int64_t)obj,
            *(const MethodInfo_4438164 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          this = (UserPresentListViewManager_o *)v4->fields.checkedIdList;
          if ( !this )
            goto LABEL_81;
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(m_CachedPtr + 8 * m_CancellationTokenSource_low + 32) = obj;
        }
        v59 = BalanceConfig_TypeInfo;
        m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, obj, v54);
          v59 = BalanceConfig_TypeInfo;
        }
        if ( m_CancellationTokenSource < v59->static_fields->PresentBoxCheckMax )
        {
          this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
          v62 = v4->fields.checkedIdList;
          if ( !v62 )
            goto LABEL_81;
          if ( !this )
            goto LABEL_81;
          UserPresentListViewItem__setCheckBoxed((UserPresentListViewItem_o *)this, 1, v62->fields._size, v61);
          v64 = v4->fields.checkedIdList;
          if ( !v64 )
            goto LABEL_81;
          this = (UserPresentListViewManager_o *)v4->fields.m_parent;
          if ( !this )
            goto LABEL_81;
          UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)this, v64->fields._size, v63);
        }
        UserPresentListViewManager__updateCheckStatus(v4, (const MethodInfo *)obj);
        this = (UserPresentListViewManager_o *)v4->fields.m_parent;
        if ( !this )
          goto LABEL_81;
        UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)this, 1, 1, v65);
        return;
      }
      if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
        v52 = (_QWORD *)sub_21FFC68(Method_UserPresentListViewManager_OnClickListCheck__);
      v43 = (System_Reflection_MethodBase_o *)sub_21FFC34(v52, v52[4]);
    }
    OverwriteAssetSoundName__PlaySystemSe(v43, 1, 0, 0);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct UserPresentListViewItem_o *selectItem; // x8
  struct UserPresentBoxEntity_o *usrPresentEnt; // x1
  __int64 v21; // x2
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  const MethodInfo *v24; // x1
  struct UserPresentBoxEntity_o *selectPresentData; // x8
  struct UserPresentListViewItem_o *v26; // x8
  struct ItemEntity_o *itemEnt; // x8
  __int64 endedAt; // x21
  struct UserPresentListViewItem_o *v29; // x8
  struct ItemEntity_o *v30; // x8
  System_Reflection_MethodBase_o *v31; // x0
  const MethodInfo *v32; // x2
  struct UserPresentListViewItem_o *v33; // x8
  struct ItemEntity_o *v34; // x8
  __int64 v35; // x1
  __int64 v36; // x2
  Il2CppObject *MasterData_object; // x20
  long double v38; // q0
  struct UserPresentBoxEntity_o *v39; // x8
  __int64 v40; // x2
  struct UserPresentBoxEntity_o *v41; // x9
  BalanceConfig_c *v42; // x0
  int32_t v43; // w20
  System_Reflection_MethodBase_o *v44; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x2
  UserPresentListViewManager___c_c *v47; // x0
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  UserPresentListViewManager_ReceiveCallbackFunc_o *_9__55_0; // x20
  Il2CppObject *v50; // x21
  const MethodInfo *v51; // x3
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  struct UserPresentListViewManager___c_StaticFields *v58; // x0
  MissionNaviTransitionBoardItem_o *p__9__55_0; // x0
  struct UserPresentBoxEntity_o *v60; // x8
  System_Reflection_MethodBase_o *v61; // x0
  __int64 v62; // x1
  UserPresentListViewManager___c_c *v63; // x0
  struct UserPresentListViewManager___c_StaticFields *v64; // x8
  Il2CppObject *v65; // x21
  const MethodInfo *v66; // x3
  struct UserPresentListViewManager___c_StaticFields *v67; // x0
  _QWORD *v68; // x0
  System_Reflection_MethodBase_o *v69; // x0
  struct UserPresentListViewItem_o *v70; // x8
  System_Collections_Generic_List_long__c *v71; // x0
  System_Collections_Generic_List_long__o *v72; // x20
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  struct UserPresentListViewItem_o *v79; // x8
  const MethodInfo *v80; // x4
  const MethodInfo *v81; // x2
  Il2CppObject *v82; // [xsp+8h] [xbp-38h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_5937398 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_UserPresentListViewManager___c__OnClickListView_b__55_0__);
    sub_21FFC50(&Method_UserPresentListViewManager___c__OnClickListView_b__55_1__);
    sub_21FFC50(&UserPresentListViewManager___c_TypeInfo);
    this = (UserPresentListViewManager_o *)sub_21FFC50(&Method_UserPresentListViewManager_OnClickListView__);
    byte_5937398 = 1;
  }
  entity = 0;
  v82 = 0;
  if ( !v3 )
    goto LABEL_76;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_76;
  if ( !this->fields.isInput )
  {
    this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
    if ( !this )
      goto LABEL_76;
    if ( !LOBYTE(this->fields.objectList) )
    {
      checkedIdList = v4->fields.checkedIdList;
      if ( !checkedIdList || checkedIdList->fields._size <= 0 )
      {
        v4->fields.kind = 0;
        Item = UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
        v4->fields.selectItem = Item;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v4->fields.selectItem,
          (int32_t)Item,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12);
        selectItem = v4->fields.selectItem;
        if ( !selectItem )
          goto LABEL_76;
        usrPresentEnt = selectItem->fields.usrPresentEnt;
        v4->fields.selectPresentData = usrPresentEnt;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v4->fields.selectPresentData,
          (int32_t)usrPresentEnt,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        this = (UserPresentListViewManager_o *)v4->fields.selectPresentData;
        if ( !this )
          goto LABEL_76;
        this = (UserPresentListViewManager_o *)UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)this, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v22 = Method_UserPresentListViewManager_OnClickListView__;
          if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
            v22 = (_QWORD *)sub_21FFC68(Method_UserPresentListViewManager_OnClickListView__);
          v23 = (System_Reflection_MethodBase_o *)sub_21FFC34(v22, v22[4]);
          goto LABEL_17;
        }
        selectPresentData = v4->fields.selectPresentData;
        if ( !selectPresentData )
          goto LABEL_76;
        if ( selectPresentData->fields.giftType == 2 )
        {
          v26 = v4->fields.selectItem;
          if ( !v26 )
            goto LABEL_76;
          itemEnt = v26->fields.itemEnt;
          if ( !itemEnt )
            goto LABEL_76;
          endedAt = itemEnt->fields.endedAt;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, obj, v21);
          this = (UserPresentListViewManager_o *)NetworkManager__getTime(0);
          if ( endedAt <= (__int64)this )
          {
            v23 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_UserPresentListViewManager_OnClickListView__);
LABEL_17:
            OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0, 0);
            UserPresentListViewManager__DlgForExpiredPresent(v4, v24);
            return;
          }
          v29 = v4->fields.selectItem;
          if ( !v29 )
            goto LABEL_76;
          v30 = v29->fields.itemEnt;
          if ( !v30 )
            goto LABEL_76;
          if ( v30->fields.type == 24 )
          {
            v31 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_UserPresentListViewManager_OnClickListView__);
            OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0);
            v33 = v4->fields.selectItem;
            if ( v33 )
            {
              v34 = v33->fields.itemEnt;
              if ( v34 )
              {
                UserPresentListViewManager__OpenSelectableDialog(v4, v34->fields.id, v32);
                return;
              }
            }
            goto LABEL_76;
          }
          this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_76;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)this,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v38 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35, v36);
          this = (UserPresentListViewManager_o *)sub_23D80E0(0, v38);
          v39 = v4->fields.selectPresentData;
          if ( !v39 || !MasterData_object )
            goto LABEL_76;
          this = (UserPresentListViewManager_o *)UserItemMaster__TryGetEntity(
                                                   (UserItemMaster_o *)MasterData_object,
                                                   &entity,
                                                   (int64_t)this,
                                                   v39->fields.objectId,
                                                   0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_76;
            v41 = v4->fields.selectPresentData;
            if ( !v41 )
              goto LABEL_76;
            v42 = BalanceConfig_TypeInfo;
            v43 = v41->fields.num + entity->fields.num;
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, obj, v40);
              v42 = BalanceConfig_TypeInfo;
            }
            if ( v43 > v42->static_fields->UserItemMax )
            {
              v44 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_UserPresentListViewManager_OnClickListView__);
              OverwriteAssetSoundName__PlaySystemSe(v44, 0, 0, 0);
              v47 = UserPresentListViewManager___c_TypeInfo;
              if ( !*(&UserPresentListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo, v45, v46);
                v47 = UserPresentListViewManager___c_TypeInfo;
              }
              static_fields = v47->static_fields;
              _9__55_0 = static_fields->__9__55_0;
              if ( _9__55_0 )
                goto LABEL_50;
              if ( !*(&v47->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v47, v45, v46);
                static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
              }
              v50 = (Il2CppObject *)static_fields->__9;
              _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_21FFEBC(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
              UserPresentListViewManager_ReceiveCallbackFunc___ctor(
                _9__55_0,
                v50,
                Method_UserPresentListViewManager___c__OnClickListView_b__55_0__,
                v51);
              v58 = UserPresentListViewManager___c_TypeInfo->static_fields;
              v58->__9__55_0 = _9__55_0;
              p__9__55_0 = (MissionNaviTransitionBoardItem_o *)&v58->__9__55_0;
LABEL_49:
              sub_21FFBF4(p__9__55_0, (int32_t)_9__55_0, v52, v53, v54, v55, v56, v57);
LABEL_50:
              UserPresentListViewManager__showErrorResultDlg(v4, _9__55_0, v46);
              return;
            }
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, obj, v40);
            this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
            v60 = v4->fields.selectPresentData;
            if ( !v60 || !this )
              goto LABEL_76;
            if ( DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &v82,
                   v60->fields.objectId,
                   (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
            {
              this = (UserPresentListViewManager_o *)v82;
              if ( !v82 )
                goto LABEL_76;
              if ( ItemEntity__GetMaxNum((ItemEntity_o *)v82, 0) >= 1 )
              {
                this = (UserPresentListViewManager_o *)v82;
                if ( !v82 )
                  goto LABEL_76;
                if ( v43 > ItemEntity__GetMaxNum((ItemEntity_o *)v82, 0) )
                {
                  v61 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_UserPresentListViewManager_OnClickListView__);
                  OverwriteAssetSoundName__PlaySystemSe(v61, 0, 0, 0);
                  v63 = UserPresentListViewManager___c_TypeInfo;
                  if ( !*(&UserPresentListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo, v62, v46);
                    v63 = UserPresentListViewManager___c_TypeInfo;
                  }
                  v64 = v63->static_fields;
                  _9__55_0 = v64->__9__55_1;
                  if ( _9__55_0 )
                    goto LABEL_50;
                  if ( !*(&v63->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(v63, v62, v46);
                    v64 = UserPresentListViewManager___c_TypeInfo->static_fields;
                  }
                  v65 = (Il2CppObject *)v64->__9;
                  _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_21FFEBC(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
                  UserPresentListViewManager_ReceiveCallbackFunc___ctor(
                    _9__55_0,
                    v65,
                    Method_UserPresentListViewManager___c__OnClickListView_b__55_1__,
                    v66);
                  v67 = UserPresentListViewManager___c_TypeInfo->static_fields;
                  v67->__9__55_1 = _9__55_0;
                  p__9__55_0 = (MissionNaviTransitionBoardItem_o *)&v67->__9__55_1;
                  goto LABEL_49;
                }
              }
            }
          }
        }
        v68 = Method_UserPresentListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v68 = (_QWORD *)sub_21FFC68(Method_UserPresentListViewManager_OnClickListView__);
        v69 = (System_Reflection_MethodBase_o *)sub_21FFC34(v68, v68[4]);
        OverwriteAssetSoundName__PlaySystemSe(v69, 8, 0, 0);
        v70 = v4->fields.selectItem;
        if ( !v70 )
          goto LABEL_76;
        v71 = System_Collections_Generic_List_long__TypeInfo;
        v4->fields._select_idx_k__BackingField = v70->fields.index;
        v72 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(v71);
        System_Collections_Generic_List_long____ctor(
          v72,
          (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
        v4->fields.presentIds = v72;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v4->fields.presentIds,
          (int32_t)v72,
          v73,
          v74,
          v75,
          v76,
          v77,
          v78);
        v79 = v4->fields.selectItem;
        if ( !v79 )
          goto LABEL_76;
        obj = (UserPresentListViewObject_o *)v79->fields.presentId;
        if ( (__int64)obj >= 1 )
        {
          this = (UserPresentListViewManager_o *)v4->fields.presentIds;
          if ( !this )
            goto LABEL_76;
          sub_1FF8F50();
        }
        this = (UserPresentListViewManager_o *)v4->fields.presentIds;
        if ( !this
          || (this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                       (System_Collections_Generic_List_long__o *)this,
                                                       (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__),
              !v4->fields.m_parent) )
        {
LABEL_76:
          sub_21FFECC(this, obj);
        }
        UserPresentBoxWindow__receivePresent(v4->fields.m_parent, (System_Int64_array *)this, 0, 0, v80);
        UserPresentListViewManager__SetMode_47123484(v4, 2, v81);
      }
    }
  }
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

  if ( (byte_59373A1 & 1) == 0 )
  {
    sub_21FFC50(&Method_UserPresentListViewManager_OnClickSortAscendingOrder__);
    byte_59373A1 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_UserPresentListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_UserPresentListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_21FFECC(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void UserPresentListViewManager__OnMoveEnd(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_5937397 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937397 = 1;
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
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_21FFECC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_593739F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_SceneList_Type__TypeInfo);
    sub_21FFC50(&Method_UserPresentListViewManager_EndNoticeDlg__);
    byte_593739F = 1;
  }
  dialog = this->fields.dialog;
  if ( !dialog
    || (UserPresentBoxErrorDialog__Open(dialog, msg, 0),
        v6 = this->fields.dialog,
        v7 = (System_Action_T__o *)sub_21FFEBC(System_Action_SceneList_Type__TypeInfo),
        System_Action_Int32Enum____ctor(v7, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0),
        !v6) )
  {
    sub_21FFECC(dialog, msg);
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
  System_Collections_Generic_List_ListViewItem__c *v12; // x0
  System_Collections_Generic_IEnumerable_T__o *itemList; // x21
  System_Collections_Generic_List_object__o *v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Collections_Generic_List_ListViewItem__o *v27; // x21
  System_Predicate_object__o *v28; // x22
  __int64 v29; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v30; // x21
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__67_1; // x22
  Il2CppObject *v33; // x23
  struct UserPresentListViewManager___c_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7

  if ( (byte_59373A3 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_ListViewItem__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem___ctor___91428520);
    sub_21FFC50(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_21FFC50(&System_Predicate_ListViewItem__TypeInfo);
    sub_21FFC50(&Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__);
    sub_21FFC50(&Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__);
    sub_21FFC50(&UserPresentListViewManager___c__DisplayClass67_0_TypeInfo);
    sub_21FFC50(&UserPresentListViewManager___c_TypeInfo);
    byte_59373A3 = 1;
  }
  v5 = sub_21FFEBC(UserPresentListViewManager___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  presentTicketList = this->fields.presentTicketList;
  *(_DWORD *)(v5 + 16) = ticketId;
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
  v12 = System_Collections_Generic_List_ListViewItem__TypeInfo;
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  m_parent->fields.mIsScrlResetPosition = 1;
  v14 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v12);
  System_Collections_Generic_List_object____ctor_71627776(
    v14,
    itemList,
    (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_ListViewItem___ctor___91428520);
  this->fields.presentTicketList = (struct System_Collections_Generic_List_ListViewItem__o *)v14;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.presentTicketList,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  *(_DWORD *)(v5 + 20) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), 0, v21, v22, v23, v24, v25, v26);
  v27 = this->fields.presentTicketList;
  v28 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v28,
    (Il2CppObject *)v5,
    Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__,
    0);
  if ( !v27 )
    goto LABEL_18;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v27,
    (System_Predicate_T__o *)v28,
    (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  selectDialog = UserPresentListViewManager___c_TypeInfo;
  v30 = this->fields.presentTicketList;
  if ( !*(&UserPresentListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo, v7, v29);
    selectDialog = UserPresentListViewManager___c_TypeInfo;
  }
  static_fields = (struct UserPresentListViewManager___c_StaticFields *)*((_QWORD *)selectDialog + 23);
  _9__67_1 = (System_Comparison_T__o *)static_fields->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( !*((_DWORD *)selectDialog + 57) )
    {
      j_il2cpp_runtime_class_init_0(selectDialog, v7, v29);
      static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__67_1 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      _9__67_1,
      v33,
      Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__,
      0);
    v34 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v34->__9__67_1 = (struct System_Comparison_ListViewItem__o *)_9__67_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v34->__9__67_1, (int32_t)_9__67_1, v35, v36, v37, v38, v39, v40);
  }
  if ( !v30
    || (System_Collections_Generic_List_object___Sort_71636404(
          (System_Collections_Generic_List_object__o *)v30,
          _9__67_1,
          (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ListViewItem__Sort__),
        (selectDialog = this->fields.selectDialog) == 0) )
  {
LABEL_18:
    sub_21FFECC(selectDialog, v7);
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
  System_Collections_Generic_List_long__c *v5; // x0
  System_Collections_Generic_List_long__o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x8
  System_Collections_Generic_List_object__o *v16; // x0
  _BOOL8 v17; // x0
  UserPresentListViewItem_c *v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  UserPresentListViewItem_o *current; // x22
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_long__o *checkedIdList; // x0
  UserPresentBoxEntity_o *usrPresentEnt; // x0
  _BOOL8 IsExpired; // x0
  const MethodInfo *presentId; // x1
  __int64 v27; // x2
  struct UserPresentBoxEntity_o *v28; // x8
  struct ItemEntity_o *itemEnt; // x8
  int64_t endedAt; // x28
  Il2CppObject *NameText; // x0
  const MethodInfo *v32; // x1
  Il2CppObject *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  Il2CppObject *v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  struct System_Collections_Generic_List_long__o *presentIds; // x0
  struct System_Int64_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  int32_t v49; // w1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_String_o *expiredPresents_k__BackingField; // x21
  Il2CppObject *Item; // x0
  struct System_String_o *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  const MethodInfo *v65; // x4
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_593739C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UserPresentListViewItem_TypeInfo);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_593739C = 1;
  }
  v5 = System_Collections_Generic_List_long__TypeInfo;
  memset(&v67, 0, sizeof(v67));
  this->fields.kind = kind;
  v6 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(v5);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.presentIds = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.presentIds, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  v15 = 192;
  if ( kind == 1 )
    v15 = 432;
  v16 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v15);
  if ( !v16 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v66,
    v16,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v67 = v66;
  v66.fields._list = 0;
  *(_QWORD *)&v66.fields._index = &v67;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v67,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v17 )
      break;
    current = (UserPresentListViewItem_o *)v67.fields._current;
    if ( v67.fields._current )
    {
      v18 = UserPresentListViewItem_TypeInfo;
      naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
      if ( v67.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UserPresentListViewItem_c *)v67.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentListViewItem_TypeInfo )
      {
        sub_220024C(v67.fields._current, UserPresentListViewItem_TypeInfo, v19, v20);
LABEL_51:
        sub_21FFECC(IsExpired, presentId);
      }
    }
    switch ( kind )
    {
      case 1:
        if ( !v67.fields._current )
          sub_21FFECC(v17, v18);
        goto LABEL_23;
      case 2:
        if ( !v67.fields._current )
          sub_21FFECC(v17, v18);
        if ( !Gift__IsServant_47357416((int32_t)v67.fields._current[11].klass, 0)
          && !Gift__IsCommandCode_47357784(current->fields.giftType, 0) )
        {
          goto LABEL_23;
        }
        break;
      case 3:
        if ( !v67.fields._current )
          sub_21FFECC(v17, v18);
        checkedIdList = this->fields.checkedIdList;
        if ( !checkedIdList )
          sub_21FFECC(0, v18);
        if ( System_Collections_Generic_List_long___Contains(
               checkedIdList,
               (int64_t)v67.fields._current[10].monitor,
               (const MethodInfo_44384E4 *)Method_System_Collections_Generic_List_long__Contains__) )
        {
LABEL_23:
          usrPresentEnt = current->fields.usrPresentEnt;
          if ( !usrPresentEnt )
            sub_21FFECC(0, v18);
          IsExpired = UserPresentBoxEntity__IsExpired(usrPresentEnt, 0, 0);
          v28 = current->fields.usrPresentEnt;
          if ( !v28 )
            goto LABEL_51;
          if ( v28->fields.giftType == 2 )
          {
            itemEnt = current->fields.itemEnt;
            if ( !itemEnt )
              sub_21FFECC(IsExpired, presentId);
            if ( itemEnt->fields.type != 24 )
            {
              if ( !IsExpired )
              {
                endedAt = itemEnt->fields.endedAt;
                if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, presentId, v27);
                if ( endedAt > NetworkManager__getTime(0) )
                  goto LABEL_38;
              }
LABEL_32:
              NameText = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, presentId);
              if ( !v13 )
                sub_21FFECC(NameText, NameText);
              if ( !System_Collections_Generic_List_object___Contains(
                      v13,
                      NameText,
                      (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__) )
              {
                v33 = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, v32);
                v40 = v33;
                items = v13->fields._items;
                v42 = Method_System_Collections_Generic_List_string__Add__;
                ++v13->fields._version;
                if ( !items )
                  sub_21FFECC(v33, v33);
                size = v13->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v13,
                    v33,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
                }
                else
                {
                  v44 = &items->obj.klass + size;
                  v13->fields._size = size + 1;
                  v44[4] = (Il2CppClass *)v40;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v44 + 4), (int32_t)v40, v34, v35, v36, v37, v38, v39);
                }
              }
            }
          }
          else
          {
            if ( IsExpired )
              goto LABEL_32;
LABEL_38:
            presentIds = this->fields.presentIds;
            if ( !presentIds
              || (v46 = presentIds->fields._items,
                  presentId = (const MethodInfo *)current->fields.presentId,
                  v47 = Method_System_Collections_Generic_List_long__Add__,
                  ++presentIds->fields._version,
                  !v46) )
            {
              sub_21FFECC(presentIds, presentId);
            }
            v48 = presentIds->fields._size;
            if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
            {
              System_Collections_Generic_List_long___AddWithResize(
                presentIds,
                (int64_t)presentId,
                *(const MethodInfo_4438164 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            }
            else
            {
              presentIds->fields._size = v48 + 1;
              v46->m_Items[v48] = (int64_t)presentId;
            }
          }
        }
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v67,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v49 = (int)StringLiteral_1/*""*/;
  this->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._expiredPresents_k__BackingField,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  if ( !v13 )
    goto LABEL_60;
  if ( v13->fields._size >= 1 )
  {
    do
    {
      expiredPresents_k__BackingField = this->fields._expiredPresents_k__BackingField;
      Item = System_Collections_Generic_List_object___get_Item(
               v13,
               0,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
      v58 = System_String__Concat_75483552(
              expiredPresents_k__BackingField,
              (System_String_o *)StringLiteral_16395/*"["*/,
              (System_String_o *)Item,
              (System_String_o *)StringLiteral_16659/*"]"*/,
              0);
      this->fields._expiredPresents_k__BackingField = v58;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields._expiredPresents_k__BackingField,
        (int32_t)v58,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      System_Collections_Generic_List_object___RemoveAt(
        v13,
        0,
        (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_string__RemoveAt__);
    }
    while ( v13->fields._size > 0 );
  }
  v16 = (System_Collections_Generic_List_object__o *)this->fields.presentIds;
  if ( !v16
    || (v16 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_long___ToArray(
                                                             (System_Collections_Generic_List_long__o *)v16,
                                                             (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.m_parent) )
  {
LABEL_60:
    sub_21FFECC(v16, v14);
  }
  UserPresentBoxWindow__receivePresent(this->fields.m_parent, (System_Int64_array *)v16, 0, 0, v65);
}


void UserPresentListViewManager__RequestItemSelect(
        UserPresentListViewManager_o *this,
        ItemSelectEntity_o *selectItm,
        int32_t num,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t Item; // x0
  UserPresentListViewItem_c *v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *presentTicketList; // x8
  int size; // w27
  int v12; // w28
  int v13; // w25
  int32_t v14; // w23
  _QWORD *v15; // x24
  __int64 naturalAligment; // x10
  __int64 v17; // x2
  __int64 v18; // x8
  int64_t v19; // x26
  __int64 v20; // x8
  int v21; // w26
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  UserPresentBoxWindow_o *m_parent; // x23
  const MethodInfo *v26; // x4
  const MethodInfo *v27; // x2
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x9
  __int64 v31; // x8
  struct System_String_o *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  UserPresentBoxWindow_o *v39; // x20
  const MethodInfo *v40; // x4
  UserPresentListViewManager_o *v41; // x0
  const MethodInfo *v42; // x1
  int32_t selectNum; // [xsp+4h] [xbp-6Ch]
  ItemSelectEntity_o *v44; // [xsp+8h] [xbp-68h]

  if ( (byte_59373A4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UserPresentListViewItem_TypeInfo);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_59373A4 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  presentTicketList = this->fields.presentTicketList;
  if ( !presentTicketList || !selectItm )
    goto LABEL_38;
  size = presentTicketList->fields._size;
  v44 = selectItm;
  selectNum = num;
  if ( size < 1 || (v12 = selectItm->fields.requireNum * num, v12 < 1) )
  {
    if ( v7 )
    {
LABEL_28:
      m_parent = this->fields.m_parent;
      Item = (int64_t)System_Collections_Generic_List_long___ToArray(
                        v7,
                        (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( m_parent )
      {
        UserPresentBoxWindow__receivePresent(m_parent, (System_Int64_array *)Item, v44->fields.idx, selectNum, v26);
        UserPresentListViewManager__SetMode_47123484(this, 2, v27);
        return;
      }
    }
    goto LABEL_38;
  }
  v13 = 0;
  v14 = 0;
  while ( 1 )
  {
    Item = (int64_t)this->fields.presentTicketList;
    if ( !Item )
      goto LABEL_38;
    Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      v14,
                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !Item )
      goto LABEL_38;
    v15 = (_QWORD *)Item;
    naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment )
      goto LABEL_38;
    if ( *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != UserPresentListViewItem_TypeInfo )
      goto LABEL_38;
    Item = *(_QWORD *)(Item + 152);
    if ( !Item )
      goto LABEL_38;
    Item = UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)Item, 0, 0);
    if ( (Item & 1) != 0 )
      break;
    v18 = v15[16];
    if ( !v18 )
      goto LABEL_38;
    v19 = *(_QWORD *)(v18 + 96);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v17);
    Item = NetworkManager__getTime(0);
    if ( v19 <= Item )
      break;
    v20 = v15[19];
    if ( !v20 )
      goto LABEL_38;
    if ( !v7 )
      goto LABEL_38;
    v21 = *(_DWORD *)(v20 + 80);
    items = v7->fields._items;
    v9 = (UserPresentListViewItem_c *)v15[21];
    v23 = Method_System_Collections_Generic_List_long__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_38;
    v24 = v7->fields._size;
    if ( (unsigned int)v24 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v7,
        (int64_t)v9,
        *(const MethodInfo_4438164 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v7->fields._size = v24 + 1;
      items->m_Items[v24] = (int64_t)v9;
    }
    if ( ++v14 < size )
    {
      v13 += v21;
      if ( v13 < v12 )
        continue;
    }
    goto LABEL_28;
  }
  Item = (int64_t)this->fields.presentTicketList;
  if ( !Item )
    goto LABEL_38;
  Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    0,
                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !Item )
    goto LABEL_38;
  v9 = UserPresentListViewItem_TypeInfo;
  v30 = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) >= (unsigned int)v30
    && *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v30 - 8) == UserPresentListViewItem_TypeInfo )
  {
    v31 = *(_QWORD *)(Item + 128);
    if ( v31 )
    {
      v32 = System_String__Concat_75481624(
              (System_String_o *)StringLiteral_16395/*"["*/,
              *(System_String_o **)(v31 + 24),
              (System_String_o *)StringLiteral_16659/*"]"*/,
              0);
      this->fields._expiredPresents_k__BackingField = v32;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields._expiredPresents_k__BackingField,
        (int32_t)v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      if ( v7 )
      {
        v39 = this->fields.m_parent;
        Item = (int64_t)System_Collections_Generic_List_long___ToArray(
                          v7,
                          (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v39 )
        {
          UserPresentBoxWindow__receivePresent(v39, (System_Int64_array *)Item, v44->fields.idx, 0, v40);
          return;
        }
      }
    }
LABEL_38:
    sub_21FFECC(Item, v9);
  }
  sub_220024C(Item, UserPresentListViewItem_TypeInfo, v28, v29);
  UserPresentListViewManager___ctor(v41, v42);
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
  const MethodInfo_4450604 *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5937395 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__);
    sub_21FFC50(&Method_UserPresentListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5937395 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v13, v14);
      UserPresentListViewObject__Init_47164076((UserPresentListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewManager__RequestListObject_47163072(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_4450604 *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5937396 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__);
    sub_21FFC50(&Method_UserPresentListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5937396 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v11, v12);
      UserPresentListViewObject__Init_47164160((UserPresentListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


void UserPresentListViewManager__SetMode(
        UserPresentListViewManager_o *this,
        int32_t mode,
        UserPresentListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_47123484(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewManager__SetMode_47123484(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_5937394 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_5937394 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_21FFECC(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    UserPresentListViewManager__RequestListObject_47163072(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 4;
    goto LABEL_8;
  }
}


void UserPresentListViewManager__SetMode_47163020(
        UserPresentListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_47123484(this, mode, v10);
}


void UserPresentListViewManager__SetObjectItem(
        UserPresentListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_5937393 & 1) == 0 )
  {
    sub_21FFC50(&UserPresentListViewObject_TypeInfo);
    byte_5937393 = 1;
  }
  if ( obj
    && (naturalAligment = UserPresentListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UserPresentListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 1 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_21FFECC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  UserPresentListViewObject__Init_47162896((UserPresentListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void UserPresentListViewManager__SetSortButtonImage(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v10; // x8
  System_String_o **v11; // x8
  struct ListViewSort_o *v12; // x8
  System_String_o **v13; // x8

  if ( (byte_59373A2 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18253/*"btn_sort_up"*/);
    sub_21FFC50(&StringLiteral_18306/*"btn_txt_new"*/);
    sub_21FFC50(&StringLiteral_18314/*"btn_txt_old"*/);
    sub_21FFC50(&StringLiteral_18250/*"btn_sort_down"*/);
    byte_59373A2 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_24;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_24;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
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
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v11 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18314/*"btn_txt_old"*/ : &StringLiteral_18306/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v11, 0);
        v12 = this->fields.sort;
        if ( v12 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            if ( v12->fields.isAscendingOrder )
              v13 = (System_String_o **)&StringLiteral_18250/*"btn_sort_down"*/;
            else
              v13 = (System_String_o **)&StringLiteral_18253/*"btn_sort_up"*/;
            UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_21FFECC(sort, v5);
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

  if ( (byte_59373A7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__);
    byte_59373A7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0),
        v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__,
          0),
        !v5) )
  {
    sub_21FFECC(Instance, v4);
  }
  CommonUI__maskFadeout((CommonUI_o *)v5, 1, 0.5, v6, 0);
}


void UserPresentListViewManager___DlgForExpiredPresent_b__69_1(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UserPresentBoxWindow_o *m_parent; // x0

  if ( (byte_59373A8 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59373A8 = 1;
  }
  UserPresentListViewManager__DestroyList(this, method);
  m_parent = this->fields.m_parent;
  if ( !m_parent
    || (UserPresentBoxWindow__ReDisp(m_parent, v3), (m_parent = (UserPresentBoxWindow_o *)this->fields.scrollView) == 0)
    || (UIScrollView__ResetPosition((UIScrollView_o *)m_parent, 0),
        (m_parent = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_21FFECC(m_parent, v3);
  }
  CommonUI__maskFadein((CommonUI_o *)m_parent, 0.5, 0, 0);
}


void UserPresentListViewManager__add_callbackFunc(
        UserPresentListViewManager_o *this,
        UserPresentListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  UserPresentListViewManager_o *v11; // x0
  UserPresentListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5937386 & 1) == 0 )
  {
    sub_21FFC50(&UserPresentListViewManager_CallbackFunc_TypeInfo);
    byte_5937386 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (UserPresentListViewManager_CallbackFunc_c *)v6->klass != UserPresentListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, UserPresentListViewManager_CallbackFunc_TypeInfo, v7, v8);
  UserPresentListViewManager__remove_callbackFunc(v11, v12, v13);
}


void UserPresentListViewManager__add_callbackFunc2(
        UserPresentListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  UserPresentListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5937388 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5937388 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  UserPresentListViewManager__remove_callbackFunc2(v11, v12, v13);
}


void UserPresentListViewManager__add_receivecCallbackFunc(
        UserPresentListViewManager_o *this,
        UserPresentListViewManager_ReceiveCallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *receivecCallbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  UserPresentListViewManager_o *v11; // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_593738A & 1) == 0 )
  {
    sub_21FFC50(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    byte_593738A = 1;
  }
  receivecCallbackFunc = (System_Delegate_o *)this->fields.receivecCallbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(receivecCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (UserPresentListViewManager_ReceiveCallbackFunc_c *)v6->klass != UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.receivecCallbackFunc, v6, receivecCallbackFunc);
    v10 = v9 == (_QWORD)receivecCallbackFunc;
    receivecCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v7, v8);
  UserPresentListViewManager__remove_receivecCallbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_UserPresentListViewObject__o *UserPresentListViewManager__get_ClippingObjectList(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_593738F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593738F = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_21FFECC(0, v12);
      Item = (ListViewItem_o *)UserPresentListViewObject__GetItem((UserPresentListViewObject_o *)Component_object, v12);
      if ( !Item )
        sub_21FFECC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50765052((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_21FFECC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_21FFECC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v3;
}


System_Collections_Generic_List_UserPresentListViewObject__o *UserPresentListViewManager__get_ObjectList(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_593738E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593738E = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v3;
}


ListViewSort_o *UserPresentListViewManager__get_SortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserPresentListViewManager_c *v3; // x0

  if ( (byte_5937385 & 1) == 0 )
  {
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_5937385 = 1;
  }
  v3 = UserPresentListViewManager_TypeInfo;
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v1, v2);
    v3 = UserPresentListViewManager_TypeInfo;
  }
  return v3->static_fields->sortInfo;
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
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  UserPresentListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5937387 & 1) == 0 )
  {
    sub_21FFC50(&UserPresentListViewManager_CallbackFunc_TypeInfo);
    byte_5937387 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (UserPresentListViewManager_CallbackFunc_c *)v6->klass != UserPresentListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, UserPresentListViewManager_CallbackFunc_TypeInfo, v7, v8);
  UserPresentListViewManager__add_callbackFunc2(v11, v12, v13);
}


void UserPresentListViewManager__remove_callbackFunc2(
        UserPresentListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  UserPresentListViewManager_o *v11; // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5937389 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5937389 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  UserPresentListViewManager__add_receivecCallbackFunc(v11, v12, v13);
}


void UserPresentListViewManager__remove_receivecCallbackFunc(
        UserPresentListViewManager_o *this,
        UserPresentListViewManager_ReceiveCallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *receivecCallbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  UserPresentListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_593738B & 1) == 0 )
  {
    sub_21FFC50(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    byte_593738B = 1;
  }
  receivecCallbackFunc = (System_Delegate_o *)this->fields.receivecCallbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(receivecCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (UserPresentListViewManager_ReceiveCallbackFunc_c *)v6->klass != UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.receivecCallbackFunc, v6, receivecCallbackFunc);
    v10 = v9 == (_QWORD)receivecCallbackFunc;
    receivecCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v7, v8);
  UserPresentListViewManager__get_select_idx(v11, v12);
}


void UserPresentListViewManager__resetCheckStatus(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v4; // w9

  if ( (byte_593739B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Clear__);
    byte_593739B = 1;
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
    sub_21FFECC(0, *(_QWORD *)&type);
  UserPresentBoxErrorDialog__setJumpType(dialog, type, 0);
}


void UserPresentListViewManager__set_expiredPresents(
        UserPresentListViewManager_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._expiredPresents_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._expiredPresents_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t kind; // w8
  System_String_o *v13; // x1
  LocalizationManager_c *v14; // x0
  __int64 *v15; // x20

  if ( (byte_593739E & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11536/*"REJECT_NORMAL_TXT"*/);
    sub_21FFC50(&StringLiteral_11532/*"REJECT_ALL_TXT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593739E = 1;
  }
  this->fields.receivecCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.receivecCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  kind = this->fields.kind;
  if ( !kind )
  {
    v14 = LocalizationManager_TypeInfo;
    v15 = &StringLiteral_11536/*"REJECT_NORMAL_TXT"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
LABEL_8:
      v13 = LocalizationManager__Get((System_String_o *)*v15, 0);
      goto LABEL_9;
    }
LABEL_7:
    j_il2cpp_runtime_class_init_0(v14, v10, v11);
    goto LABEL_8;
  }
  if ( (unsigned int)(kind - 4) >= 0xFFFFFFFD )
  {
    v14 = LocalizationManager_TypeInfo;
    v15 = &StringLiteral_11532/*"REJECT_ALL_TXT"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_8;
    goto LABEL_7;
  }
  v13 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_9:
  UserPresentListViewManager__OpenNoticeDlg(this, v13, v11);
}


void UserPresentListViewManager__updateCheckStatus(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_List_long__o *checkedIdList; // x21
  char v6; // w22
  void *m_parent; // x0
  BalanceConfig_c *v8; // x0
  int32_t size; // w23
  int32_t PresentBoxCheckMax; // w29
  _BOOL4 v11; // w24
  System_Collections_Generic_List_long__o *v12; // x20
  const MethodInfo *v13; // x2
  int32_t v14; // w21
  char v15; // w29
  __int64 v16; // x2
  __int64 v17; // x3
  UserPresentListViewItem_o *v18; // x22
  __int64 naturalAligment; // x9
  int64_t v20; // x23
  const MethodInfo *v21; // x3
  int32_t v22; // w0
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  struct ItemEntity_o *itemEnt; // x8
  struct System_Collections_Generic_List_long__o *v27; // x8
  UserPresentListViewManager_o *v28; // x0
  int32_t v29; // w1
  const MethodInfo *v30; // x2

  if ( (byte_593739A & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__IndexOf__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor___91427576);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&UserPresentListViewItem_TypeInfo);
    byte_593739A = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList && checkedIdList->fields._size )
  {
    v6 = 0;
  }
  else
  {
    m_parent = this->fields.m_parent;
    if ( !m_parent )
      goto LABEL_30;
    v6 = 1;
    UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 0, 1, v3);
    checkedIdList = this->fields.checkedIdList;
    if ( !checkedIdList )
      goto LABEL_30;
  }
  v8 = BalanceConfig_TypeInfo;
  size = checkedIdList->fields._size;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v8 = BalanceConfig_TypeInfo;
    checkedIdList = this->fields.checkedIdList;
  }
  PresentBoxCheckMax = v8->static_fields->PresentBoxCheckMax;
  v11 = size >= PresentBoxCheckMax;
  v12 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_71531028(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)checkedIdList,
    (const MethodInfo_4437A14 *)Method_System_Collections_Generic_List_long___ctor___91427576);
  m_parent = this->fields.itemList;
  if ( !m_parent )
LABEL_30:
    sub_21FFECC(m_parent, method);
  v14 = 0;
  if ( size >= PresentBoxCheckMax )
    v15 = 1;
  else
    v15 = v6;
  while ( 1 )
  {
    if ( v14 >= *((_DWORD *)m_parent + 6) )
    {
      v27 = this->fields.checkedIdList;
      if ( v27 )
      {
        m_parent = this->fields.m_parent;
        if ( m_parent )
        {
          UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)m_parent, v27->fields._size, v13);
          return;
        }
      }
      goto LABEL_30;
    }
    m_parent = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)m_parent,
                 v14,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !m_parent )
      goto LABEL_30;
    method = (const MethodInfo *)UserPresentListViewItem_TypeInfo;
    v18 = (UserPresentListViewItem_o *)m_parent;
    naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)m_parent + 304LL) < (unsigned int)naturalAligment
      || *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)m_parent + 200LL) + 8 * naturalAligment - 8) != UserPresentListViewItem_TypeInfo )
    {
      break;
    }
    if ( !v12 )
      goto LABEL_30;
    v20 = *((_QWORD *)m_parent + 21);
    if ( System_Collections_Generic_List_long___Remove(
           v12,
           v20,
           (const MethodInfo_4439624 *)Method_System_Collections_Generic_List_long__Remove__) )
    {
      m_parent = this->fields.checkedIdList;
      if ( !m_parent )
        goto LABEL_30;
      v22 = System_Collections_Generic_List_long___IndexOf(
              (System_Collections_Generic_List_long__o *)m_parent,
              v20,
              (const MethodInfo_4438DC0 *)Method_System_Collections_Generic_List_long__IndexOf__);
      UserPresentListViewItem__setCheckBoxed(v18, 1, v22 + 1, v23);
    }
    else
    {
      UserPresentListViewItem__setCheckBoxed(v18, 0, -1, v21);
      method = (const MethodInfo *)v11;
      if ( (v15 & 1) == 0 )
      {
        usrPresentEnt = v18->fields.usrPresentEnt;
        if ( usrPresentEnt && usrPresentEnt->fields.giftType == 2 )
        {
          itemEnt = v18->fields.itemEnt;
          if ( !itemEnt )
            goto LABEL_30;
          LOBYTE(method) = itemEnt->fields.type == 24;
        }
        else
        {
          LOBYTE(method) = 0;
        }
      }
      UserPresentListViewItem__setBlocked(v18, (bool)method, v24);
    }
    m_parent = this->fields.itemList;
    ++v14;
    if ( !m_parent )
      goto LABEL_30;
  }
  sub_220024C(m_parent, UserPresentListViewItem_TypeInfo, v16, v17);
  UserPresentListViewManager__GetItem(v28, v29, v30);
}


void UserPresentListViewManager_CallbackFunc___ctor(
        UserPresentListViewManager_CallbackFunc_o *this,
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
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1FF9098;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1FF907C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)&loc_1FF9034;
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
  return (System_IAsyncResult_o *)sub_21FFC04(this, &v6, callback, object);
}


void UserPresentListViewManager_CallbackFunc__EndInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF911C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF90D4;
}


System_IAsyncResult_o *UserPresentListViewManager_ReceiveCallbackFunc__BeginInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        bool isReceive,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isReceive;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void UserPresentListViewManager_ReceiveCallbackFunc__EndInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59373A9 & 1) == 0 )
  {
    sub_21FFC50(&UserPresentListViewManager___c_TypeInfo);
    byte_59373A9 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(UserPresentListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserPresentListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentListViewManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UserPresentListViewManager___c_TypeInfo->static_fields,
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
  __int64 naturalAligment; // x8
  int64_t sortValue0; // x9
  int64_t v8; // x8
  UserPresentListViewManager___c_o *v10; // x0
  ListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2

  v5 = a;
  if ( (byte_59373AA & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_21FFC50(&UserPresentListViewItem_TypeInfo);
    byte_59373AA = 1;
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
      sub_21FFECC(this, a);
    }
  }
  else
  {
    sub_220024C(v5, UserPresentListViewItem_TypeInfo, b, method);
  }
  sub_220024C(b, a, b, method);
  return UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(v10, v11, v12);
}


bool UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ListViewItem_o *v4; // x19
  __int64 naturalAligment; // x9
  int64_t sortValue0; // x8
  _DWORD *monitor; // x8
  UserPresentListViewManager___c_o *v9; // x0
  ListViewItem_o *v10; // x1
  ListViewItem_o *v11; // x2
  const MethodInfo *v12; // x3

  v4 = obj;
  if ( (byte_59373AB & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_21FFC50(&UserPresentListViewItem_TypeInfo);
    byte_59373AB = 1;
  }
  if ( !v4 )
    goto LABEL_11;
  obj = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( v4->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (UserPresentListViewItem_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo )
  {
    sortValue0 = v4[1].fields.sortValue0;
    if ( !sortValue0 )
      goto LABEL_11;
    if ( *(_DWORD *)(sortValue0 + 72) == 2 )
    {
      monitor = v4[1].monitor;
      if ( monitor )
        return monitor[12] == 24;
LABEL_11:
      sub_21FFECC(this, obj);
    }
    return 0;
  }
  else
  {
    sub_220024C(v4, UserPresentListViewItem_TypeInfo, method, v3);
    return UserPresentListViewManager___c___GetAllPresentStrings_b__60_2(v9, v10, v11, v12);
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
  __int64 v10; // x8
  UserPresentListViewManager___c_o *v11; // x0
  ListViewItem_o *v12; // x1
  ListViewItem_o *v13; // x2
  const MethodInfo *v14; // x3

  v5 = a;
  if ( (byte_59373AC & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_21FFC50(&UserPresentListViewItem_TypeInfo);
    byte_59373AC = 1;
  }
  if ( !v5 )
    goto LABEL_17;
  a = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
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
  a = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
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
  result = System_String__CompareTo_75472312((System_String_o *)v8, (System_String_o *)this, 0);
  if ( result )
    return result;
  a = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  v10 = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( v5->klass->_2.naturalAligment < (unsigned int)v10
    || (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[v10 - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_18:
    sub_220024C(v5, a, b, method);
    goto LABEL_19;
  }
  if ( b->klass->_2.naturalAligment >= (unsigned int)v10
    && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v10 - 1] == UserPresentListViewItem_TypeInfo )
  {
    this = (UserPresentListViewManager___c_o *)v5[1].fields.sortValue2;
    if ( this )
      return System_String__CompareTo_75472312((System_String_o *)this, (System_String_o *)b[1].fields.sortValue2, 0);
LABEL_17:
    sub_21FFECC(this, a);
  }
LABEL_19:
  sub_220024C(b, a, b, method);
  return UserPresentListViewManager___c___OpenSelectableDialog_b__67_1(v11, v12, v13, v14);
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
  __int64 naturalAligment; // x8
  int64_t sortValue0; // x9
  int64_t v8; // x8
  UserPresentListViewManager___c__DisplayClass67_0_o *v10; // x0
  ListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2

  v5 = a;
  if ( (byte_59373AD & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_21FFC50(&UserPresentListViewItem_TypeInfo);
    byte_59373AD = 1;
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
      sub_21FFECC(this, a);
    }
  }
  else
  {
    sub_220024C(v5, UserPresentListViewItem_TypeInfo, b, method);
  }
  sub_220024C(b, a, b, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UserPresentListViewManager___c__DisplayClass67_0_o *v9; // x19
  __int64 naturalAligment; // x10
  int64_t sortValue0; // x8
  MissionNaviTransitionBoardItem_c *monitor; // x1
  MissionNaviTransitionBoardItem_o *p_ticketItem; // x19
  struct ItemEntity_o *ticketItem; // t1

  v9 = this;
  if ( (byte_59373AE & 1) == 0 )
  {
    this = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_21FFC50(&UserPresentListViewItem_TypeInfo);
    byte_59373AE = 1;
  }
  if ( !obj
    || (naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentListViewItem_TypeInfo )
  {
    sub_21FFECC(this, obj);
  }
  sortValue0 = obj[1].fields.sortValue0;
  if ( !sortValue0 )
    return 1;
  if ( *(_DWORD *)(sortValue0 + 72) != 2 )
    return 1;
  monitor = (MissionNaviTransitionBoardItem_c *)obj[1].monitor;
  if ( !monitor || LODWORD(monitor->_1.this_arg.data) != 24 || LODWORD(monitor->_1.name) != v9->fields.ticketId )
    return 1;
  ticketItem = v9->fields.ticketItem;
  p_ticketItem = (MissionNaviTransitionBoardItem_o *)&v9->fields.ticketItem;
  *(&p_ticketItem[-1].fields._BoardType_k__BackingField + 1) += *(_DWORD *)(sortValue0 + 80);
  if ( !ticketItem )
  {
    p_ticketItem->klass = monitor;
    sub_21FFBF4(p_ticketItem, (int32_t)monitor, (System_String_o *)method, v3, v4, v5, v6, v7);
  }
  return 0;
}