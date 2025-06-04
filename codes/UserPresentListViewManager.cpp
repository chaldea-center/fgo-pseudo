void __fastcall UserPresentListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B00DCE & 1) == 0 )
  {
    sub_1BC3008(&ListViewSort_TypeInfo, v1);
    sub_1BC3008(&UserPresentListViewManager_TypeInfo, v2);
    sub_1BC3008(&StringLiteral_15096/*"UserPresent"*/, v3);
    byte_4B00DCE = 1;
  }
  v4 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
  ListViewSort___ctor_42802648(v4, (System_String_o *)StringLiteral_15096/*"UserPresent"*/, 1, 0, 0LL);
  UserPresentListViewManager_TypeInfo->static_fields->sortInfo = v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)UserPresentListViewManager_TypeInfo->static_fields, (int32_t)v4, v5, v6);
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
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  int64_t m_parent; // x0
  __int64 v17; // x2
  System_Collections_Generic_IEnumerable_T__o *checkedIdList; // x22
  System_Collections_Generic_List_long__o *v19; // x21
  signed int max_length; // w8
  il2cpp_array_size_t v21; // w22
  Il2CppClass **v22; // x23
  Il2CppClass *v23; // x8
  UserPresentBoxEntity_o **v24; // x23
  Il2CppClass *v25; // t1
  UserPresentBoxEntity_o *v26; // x24
  UserPresentListViewItem_o *v27; // x23
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  struct System_Collections_Generic_List_long__o *v34; // x20
  int32_t v35; // w22
  const MethodInfo *v36; // x1
  __int64 v37; // x8
  unsigned __int64 v38; // x21
  UserPresentBoxEntity_o *v39; // x23
  UserPresentListViewItem_o *v40; // x22
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8

  if ( (byte_4B00DB9 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Add__, presentList);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Remove__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor___76761024, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Item__, v8);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v9);
    sub_1BC3008(&UserPresentListViewItem_TypeInfo, v10);
    byte_4B00DB9 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.selectPresentData = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.selectPresentData, 0, v11, v12);
  this->fields.presentIds = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.presentIds, 0, v13, v14);
  m_parent = (int64_t)this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_38;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 0, 0, 0LL);
  checkedIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v19 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_57182024(
      v19,
      checkedIdList,
      (const MethodInfo_3688748 *)Method_System_Collections_Generic_List_long___ctor___76761024);
    if ( !presentList )
      goto LABEL_38;
    max_length = presentList->max_length;
    if ( max_length >= 1 )
    {
      v21 = 0;
      while ( v21 < max_length )
      {
        v22 = &presentList->obj.klass + (int)v21;
        v25 = v22[4];
        v24 = (UserPresentBoxEntity_o **)(v22 + 4);
        v23 = v25;
        if ( !v25 || !v19 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v19,
                     (int64_t)v23->_1.namespaze,
                     (const MethodInfo_368A370 *)Method_System_Collections_Generic_List_long__Remove__);
        if ( v21 >= presentList->max_length )
          goto LABEL_39;
        v26 = *v24;
        v27 = (UserPresentListViewItem_o *)sub_1BC3254(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v27, v21, v26, 0LL);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v30 = *(_QWORD *)(m_parent + 16);
        v31 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v30 )
          goto LABEL_38;
        v32 = *(int *)(m_parent + 24);
        if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v27,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = v30 + 8 * v32;
          *(_DWORD *)(m_parent + 24) = v32 + 1;
          *(_QWORD *)(v33 + 32) = v27;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v33 + 32), (int32_t)v27, v28, v29);
        }
        max_length = presentList->max_length;
        if ( (int)++v21 >= max_length )
          goto LABEL_18;
      }
      goto LABEL_39;
    }
LABEL_18:
    if ( !v19 )
LABEL_38:
      sub_1BC3264(m_parent, v15);
    v34 = this->fields.checkedIdList;
    if ( v19->fields._size >= 1 )
    {
      v35 = 0;
      do
      {
        m_parent = System_Collections_Generic_List_long___get_Item(
                     v19,
                     v35,
                     (const MethodInfo_3688B84 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !v34 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v34,
                     m_parent,
                     (const MethodInfo_368A370 *)Method_System_Collections_Generic_List_long__Remove__);
        v34 = this->fields.checkedIdList;
      }
      while ( ++v35 < v19->fields._size );
    }
    if ( !v34 )
      goto LABEL_38;
    if ( v34->fields._size >= 1 )
    {
      m_parent = (int64_t)this->fields.m_parent;
      if ( !m_parent )
        goto LABEL_38;
      UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 1, 1, 0LL);
      UserPresentListViewManager__updateCheckStatus(this, v36);
    }
  }
  else
  {
    if ( !presentList )
      goto LABEL_38;
    v37 = *(_QWORD *)&presentList->max_length;
    if ( (int)v37 >= 1 )
    {
      v38 = 0LL;
      while ( v38 < (unsigned int)v37 )
      {
        v39 = presentList->m_Items[v38];
        v40 = (UserPresentListViewItem_o *)sub_1BC3254(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v40, v38, v39, 0LL);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v43 = *(_QWORD *)(m_parent + 16);
        v44 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v43 )
          goto LABEL_38;
        v45 = *(int *)(m_parent + 24);
        if ( (unsigned int)v45 >= *(_DWORD *)(v43 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v40,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = v43 + 8 * v45;
          *(_DWORD *)(m_parent + 24) = v45 + 1;
          *(_QWORD *)(v46 + 32) = v40;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v46 + 32), (int32_t)v40, v41, v42);
        }
        LODWORD(v37) = presentList->max_length;
        if ( (__int64)++v38 >= (int)v37 )
          goto LABEL_37;
      }
LABEL_39:
      sub_1BC326C(m_parent, v15, v17);
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

  if ( (byte_4B00DB4 & 1) == 0 )
  {
    sub_1BC3008(&UserPresentListViewManager_TypeInfo, v1);
    byte_4B00DB4 = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v2 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v2->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1BC3264(0LL, v1);
  ListViewSort__DeleteContinueData(sortInfo, 0LL);
}


void __fastcall UserPresentListViewManager__DestroyList(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BC3264(0LL, v3);
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

  if ( (byte_4B00DCD & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&LocalizationManager_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BC3008(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, v5);
    sub_1BC3008(&StringLiteral_10359/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, v6);
    byte_4B00DCD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10359/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0LL);
  v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, 0LL);
  if ( !Instance )
    sub_1BC3264(v10, v11);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, 0LL, v8, v9, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0, 0LL);
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
  struct UserPresentListViewManager_ReceiveCallbackFunc_o *receivecCallbackFunc; // x8

  if ( (byte_4B00DC8 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_SceneList_Type__TypeInfo, *(_QWORD *)&scene);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BC3008(&Method_UserPresentListViewManager_EndNoticeDlg__, v6);
    byte_4B00DC8 = 1;
  }
  dialog = this->fields.dialog;
  v8 = (System_Action_T__o *)sub_1BC3254(System_Action_SceneList_Type__TypeInfo);
  System_Action_Int32Enum____ctor(v8, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0LL);
  if ( !dialog )
    goto LABEL_14;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(dialog, (System_Action_SceneList_Type__o *)v8, 0LL);
  if ( scene == -1 )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( CommonUI__IsActive_MasterMission((CommonUI_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_1BC3264(Instance, v10);
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
  const MethodInfo *v28; // x3
  __int64 v29; // x1
  System_Collections_Generic_List_object__o *NameText; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v31; // x20
  System_Comparison_T__o *v32; // x21
  Il2CppObject *v33; // x22
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_object__o *v37; // x20
  System_Predicate_object__o *v38; // x21
  Il2CppObject *v39; // x22
  struct UserPresentListViewManager___c_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Collections_Generic_List_object__o *v43; // x20
  int v44; // w8
  System_Comparison_T__o *v45; // x21
  Il2CppObject *v46; // x22
  struct UserPresentListViewManager___c_StaticFields *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Text_StringBuilder_o *v50; // x20
  int v51; // w24
  int32_t v52; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v55; // x22
  System_String_o *v56; // x23

  if ( (byte_4B00DC5 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&System_Comparison_ListViewItem__TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__RemoveRange__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem___ctor___76761904, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_1BC3008(&System_Collections_Generic_List_ListViewItem__TypeInfo, v11);
    sub_1BC3008(&LocalizationManager_TypeInfo, v12);
    sub_1BC3008(&System_Predicate_ListViewItem__TypeInfo, v13);
    sub_1BC3008(&System_Text_StringBuilder_TypeInfo, v14);
    sub_1BC3008(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__, v15);
    sub_1BC3008(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__, v16);
    sub_1BC3008(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__, v17);
    sub_1BC3008(&UserPresentListViewManager___c_TypeInfo, v18);
    sub_1BC3008(&UserPresentListViewItem_TypeInfo, v19);
    sub_1BC3008(&StringLiteral_10364/*"PRESENT_INFO"*/, v20);
    byte_4B00DC5 = 1;
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
  v26 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_57280308(
    v26,
    itemList,
    (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76761904);
  this->fields.presentAllSelectedList = (struct System_Collections_Generic_List_ListViewItem__o *)v26;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.presentAllSelectedList, (int32_t)v26, v27, v28);
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
    v32 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      v32,
      v33,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__,
      0LL);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__60_0 = (struct System_Comparison_ListViewItem__o *)v32;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__60_0, (int32_t)v32, v35, v36);
  }
  if ( !v31 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_57288964(
    (System_Collections_Generic_List_object__o *)v31,
    v32,
    (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
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
    v38 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_object____ctor(
      v38,
      v39,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__,
      0LL);
    v40 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v40->__9__60_1 = (struct System_Predicate_ListViewItem__o *)v38;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v40->__9__60_1, (int32_t)v38, v41, v42);
  }
  if ( !v37 )
    goto LABEL_53;
  System_Collections_Generic_List_object___RemoveAll(
    v37,
    (System_Predicate_T__o *)v38,
    (const MethodInfo_36A249C *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  }
  v43 = *p_presentAllSelectedList;
  if ( !*p_presentAllSelectedList )
    goto LABEL_53;
  v29 = *(unsigned int *)(*(_QWORD *)&NameText[4].fields._size + 132LL);
  v44 = v43->fields._size;
  if ( v44 > (int)v29 )
  {
    System_Collections_Generic_List_object___RemoveRange(
      *p_presentAllSelectedList,
      v29,
      v44 - v29,
      (const MethodInfo_36A26AC *)Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
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
    v45 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      v45,
      v46,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__,
      0LL);
    v47 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v47->__9__60_2 = (struct System_Comparison_ListViewItem__o *)v45;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v47->__9__60_2, (int32_t)v45, v48, v49);
  }
  if ( !v43 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_57288964(
    v43,
    v45,
    (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  v50 = (System_Text_StringBuilder_o *)sub_1BC3254(System_Text_StringBuilder_TypeInfo);
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
        System_Text_StringBuilder__Append_62434920(v50, 0xAu, 0LL);
      }
      NameText = *p_presentAllSelectedList;
      if ( !*p_presentAllSelectedList )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               NameText,
               v52,
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
                                                                (System_String_o *)StringLiteral_10364/*"PRESENT_INFO"*/,
                                                                0LL);
      if ( !v55 )
        break;
      v56 = (System_String_o *)NameText;
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewItem__get_NameText(
                                                                (UserPresentListViewItem_o *)v55,
                                                                0LL);
      if ( !v50 )
        break;
      NameText = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__AppendFormat_62438944(
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
    sub_1BC3264(NameText, v29);
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

  if ( (byte_4B00DBA & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BC3008(&UserPresentListViewItem_TypeInfo, v5);
    byte_4B00DBA = 1;
  }
  result = (UserPresentListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (UserPresentListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  const MethodInfo *v3; // x3
  UserPresentListViewManager_c *v5; // x0
  struct ListViewSort_o **p_sortInfo; // x8
  struct ListViewSort_o *v7; // x1
  __int64 v8; // x1
  struct ListViewSort_o *sort; // x0

  if ( (byte_4B00DB8 & 1) == 0 )
  {
    sub_1BC3008(&UserPresentListViewManager_TypeInfo, method);
    byte_4B00DB8 = 1;
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v7, v2, v3);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BC3264(0LL, v8);
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

  if ( (byte_4B00DB5 & 1) == 0 )
  {
    sub_1BC3008(&UserPresentListViewManager_TypeInfo, v1);
    byte_4B00DB5 = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v2 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v2->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1BC3264(0LL, v1);
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
  UserPresentListViewManager_o **p_selectItem; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UserPresentBoxEntity_o *UserPresentEntity; // x0
  UserPresentListViewManager_o **p_selectPresentData; // x23
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UserPresentListViewManager_o **p_checkedIdList; // x21
  System_Collections_Generic_List_long__o *v27; // x24
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int m_CancellationTokenSource; // w8
  int v31; // w25
  int32_t v32; // w24
  struct ListViewItemSeed_o *seed; // x24
  Il2CppObject *MasterData_object; // x24
  BalanceConfig_c *v35; // x0
  int v36; // w24
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  const MethodInfo *v41; // x1
  int32_t v42; // w24
  BalanceConfig_c *v43; // x0
  _QWORD *v44; // x8
  int32_t PresentBoxCheckMax; // w25
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 m_CancellationTokenSource_low; // x10
  BalanceConfig_c *v49; // x8
  int32_t v50; // w22
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  Il2CppObject *v52; // [xsp+8h] [xbp-58h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_4B00DC1 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, obj);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__RemoveAt__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Item__, v13);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_1BC3008(&NetworkManager_TypeInfo, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    this = (UserPresentListViewManager_o *)sub_1BC3008(&Method_UserPresentListViewManager_OnClickListCheck__, v17);
    byte_4B00DC1 = 1;
  }
  entity = 0LL;
  v52 = 0LL;
  if ( !v3 )
    goto LABEL_81;
  Item = UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  p_selectItem = (UserPresentListViewManager_o **)&v4->fields.selectItem;
  v4->fields.selectItem = Item;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.selectItem, (int32_t)Item, v20, v21);
  this = (UserPresentListViewManager_o *)v4->fields.selectItem;
  if ( !this )
    goto LABEL_81;
  UserPresentEntity = UserPresentListViewItem__get_UserPresentEntity((UserPresentListViewItem_o *)this, 0LL);
  p_selectPresentData = (UserPresentListViewManager_o **)&v4->fields.selectPresentData;
  v4->fields.selectPresentData = UserPresentEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.selectPresentData, (int32_t)UserPresentEntity, v24, v25);
  p_checkedIdList = (UserPresentListViewManager_o **)&v4->fields.checkedIdList;
  if ( !v4->fields.checkedIdList )
  {
    v27 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v27,
      (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
    *p_checkedIdList = (UserPresentListViewManager_o *)v27;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.checkedIdList, (int32_t)v27, v28, v29);
  }
  if ( !*p_selectItem )
    goto LABEL_81;
  if ( *(_QWORD *)&(*p_selectItem)->fields.clipOffset >= 1 )
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
                                                 (const MethodInfo_3688B84 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !*p_selectItem )
          goto LABEL_81;
        if ( this == (UserPresentListViewManager_o *)(*p_selectItem)->fields.clipOffset )
          break;
        if ( v31 == v32 )
          goto LABEL_17;
        this = *p_checkedIdList;
        ++v32;
        if ( !*p_checkedIdList )
          goto LABEL_81;
      }
      v39 = Method_UserPresentListViewManager_OnClickListCheck__;
      if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
        v39 = (_QWORD *)sub_1BC3020(Method_UserPresentListViewManager_OnClickListCheck__);
      v40 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v39, v39[4]);
      OverwriteAssetSoundName__PlaySystemSe(v40, 0, 0, 0LL);
      this = *p_checkedIdList;
      if ( *p_checkedIdList )
      {
        System_Collections_Generic_List_long___RemoveAt(
          (System_Collections_Generic_List_long__o *)this,
          v32,
          (const MethodInfo_368A5F4 *)Method_System_Collections_Generic_List_long__RemoveAt__);
        UserPresentListViewManager__updateCheckStatus(v4, v41);
        return;
      }
LABEL_81:
      sub_1BC3264(this, obj);
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
      this = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_81;
      this = (UserPresentListViewManager_o *)UserPresentListViewItem__get_ItemEntity(
                                               (UserPresentListViewItem_o *)this,
                                               0LL);
      if ( !this )
        goto LABEL_81;
      seed = this->fields.seed;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( (__int64)seed > NetworkManager__getTime(0LL) )
      {
        this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_81;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4AFC1F1 )
        {
          sub_1BC3008(&NetworkManager_TypeInfo, obj);
          byte_4AFC1F1 = 1;
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
          v35 = BalanceConfig_TypeInfo;
          v36 = LODWORD((*p_selectPresentData)->fields.scrollView) + entity->fields.num;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v35 = BalanceConfig_TypeInfo;
          }
          if ( v36 > v35->static_fields->UserItemMax )
            goto LABEL_40;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ItemMaster___);
          if ( !*p_selectPresentData || !this )
            goto LABEL_81;
          this = (UserPresentListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   &v52,
                                                   HIDWORD((*p_selectPresentData)->fields.sortOrderSprite),
                                                   (const MethodInfo_32AF0BC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (UserPresentListViewManager_o *)v52;
            if ( !v52 )
              goto LABEL_81;
            this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v52, 0LL);
            if ( (int)this >= 1 )
            {
              this = (UserPresentListViewManager_o *)v52;
              if ( !v52 )
                goto LABEL_81;
              this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v52, 0LL);
              if ( v36 > (int)this )
              {
LABEL_40:
                v37 = Method_UserPresentListViewManager_OnClickListCheck__;
                if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
                  v37 = (_QWORD *)sub_1BC3020(Method_UserPresentListViewManager_OnClickListCheck__);
                v38 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v37, v37[4]);
                goto LABEL_68;
              }
            }
          }
        }
LABEL_57:
        if ( !*p_checkedIdList )
          goto LABEL_81;
        v42 = (int32_t)(*p_checkedIdList)->fields.m_CancellationTokenSource;
        v43 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v43 = BalanceConfig_TypeInfo;
        }
        v44 = Method_UserPresentListViewManager_OnClickListCheck__;
        PresentBoxCheckMax = v43->static_fields->PresentBoxCheckMax;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
          v44 = (_QWORD *)sub_1BC3020(Method_UserPresentListViewManager_OnClickListCheck__);
        v38 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v44, v44[4]);
        if ( v42 < PresentBoxCheckMax )
        {
          OverwriteAssetSoundName__PlaySystemSe(v38, 0, 0, 0LL);
          if ( !*p_selectItem )
            goto LABEL_81;
          this = *p_checkedIdList;
          if ( !*p_checkedIdList )
            goto LABEL_81;
          obj = (UserPresentListViewObject_o *)(*p_selectItem)->fields.clipOffset;
          v46 = *(_QWORD *)&this->fields.m_CachedPtr;
          v47 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v46 )
            goto LABEL_81;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v46 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              (int64_t)obj,
              *(const MethodInfo_3688E74 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            this = *p_checkedIdList;
            if ( !*p_checkedIdList )
              goto LABEL_81;
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v46 + 8 * m_CancellationTokenSource_low + 32) = obj;
          }
          v49 = BalanceConfig_TypeInfo;
          v50 = (int32_t)this->fields.m_CancellationTokenSource;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v49 = BalanceConfig_TypeInfo;
          }
          if ( v50 < v49->static_fields->PresentBoxCheckMax )
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
              0LL);
            checkedIdList = v4->fields.checkedIdList;
            if ( !checkedIdList )
              goto LABEL_81;
            this = (UserPresentListViewManager_o *)v4->fields.m_parent;
            if ( !this )
              goto LABEL_81;
            UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)this, checkedIdList->fields._size, 0LL);
          }
          UserPresentListViewManager__updateCheckStatus(v4, (const MethodInfo *)obj);
          this = (UserPresentListViewManager_o *)v4->fields.m_parent;
          if ( !this )
            goto LABEL_81;
          UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)this, 1, 1, 0LL);
          return;
        }
LABEL_68:
        OverwriteAssetSoundName__PlaySystemSe(v38, 1, 0, 0LL);
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
  UserPresentListViewManager_o **p_selectItem; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UserPresentBoxEntity_o *UserPresentEntity; // x0
  struct UserPresentBoxEntity_o **p_selectPresentData; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  const MethodInfo *v32; // x1
  struct ListViewItemSeed_o *seed; // x22
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  const MethodInfo *v36; // x2
  Il2CppObject *MasterData_object; // x22
  BalanceConfig_c *v38; // x0
  int32_t v39; // w22
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  const MethodInfo *v42; // x2
  UserPresentListViewManager___c_c *v43; // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *_9__55_0; // x20
  Il2CppObject *v45; // x21
  const MethodInfo *v46; // x3
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  CGThumbnailListItem_o *p__9__55_0; // x0
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
  const MethodInfo *v62; // x3
  struct UserPresentListViewItem_o *selectItem; // x8
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const MethodInfo *v67; // x2
  Il2CppObject *v68; // [xsp+8h] [xbp-48h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_4B00DC0 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, obj);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__ToArray__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1BC3008(&NetworkManager_TypeInfo, v14);
    sub_1BC3008(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BC3008(&Method_UserPresentListViewManager___c__OnClickListView_b__55_0__, v17);
    sub_1BC3008(&Method_UserPresentListViewManager___c__OnClickListView_b__55_1__, v18);
    sub_1BC3008(&UserPresentListViewManager___c_TypeInfo, v19);
    this = (UserPresentListViewManager_o *)sub_1BC3008(&Method_UserPresentListViewManager_OnClickListView__, v20);
    byte_4B00DC0 = 1;
  }
  entity = 0LL;
  v68 = 0LL;
  if ( !v3 )
    goto LABEL_87;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_87;
  if ( BYTE4(this->fields.objectList) )
    return;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
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
  Item = UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  p_selectItem = (UserPresentListViewManager_o **)&v4->fields.selectItem;
  v4->fields.selectItem = Item;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.selectItem, (int32_t)Item, v24, v25);
  this = (UserPresentListViewManager_o *)v4->fields.selectItem;
  if ( !this )
    goto LABEL_87;
  UserPresentEntity = UserPresentListViewItem__get_UserPresentEntity((UserPresentListViewItem_o *)this, 0LL);
  p_selectPresentData = &v4->fields.selectPresentData;
  v4->fields.selectPresentData = UserPresentEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.selectPresentData, (int32_t)UserPresentEntity, v28, v29);
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
      this = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_87;
      this = (UserPresentListViewManager_o *)UserPresentListViewItem__get_ItemEntity(
                                               (UserPresentListViewItem_o *)this,
                                               0LL);
      if ( !this )
        goto LABEL_87;
      seed = this->fields.seed;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( (__int64)seed <= NetworkManager__getTime(0LL) )
        goto LABEL_14;
      this = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_87;
      this = (UserPresentListViewManager_o *)UserPresentListViewItem__get_ItemEntity(
                                               (UserPresentListViewItem_o *)this,
                                               0LL);
      if ( !this )
        goto LABEL_87;
      if ( LODWORD(this->fields.emptyMessageBase) == 24 )
      {
        v34 = Method_UserPresentListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v34 = (_QWORD *)sub_1BC3020(Method_UserPresentListViewManager_OnClickListView__);
        v35 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v34, v34[4]);
        OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0, 0LL);
        this = *p_selectItem;
        if ( *p_selectItem )
        {
          this = (UserPresentListViewManager_o *)UserPresentListViewItem__get_ItemEntity(
                                                   (UserPresentListViewItem_o *)this,
                                                   0LL);
          if ( this )
          {
            UserPresentListViewManager__OpenSelectableDialog(v4, this->fields.m_CachedPtr, v36);
            return;
          }
        }
        goto LABEL_87;
      }
      this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_87;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4AFC1F1 )
      {
        sub_1BC3008(&NetworkManager_TypeInfo, obj);
        byte_4AFC1F1 = 1;
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
        v38 = BalanceConfig_TypeInfo;
        v39 = (*p_selectPresentData)->fields.num + entity->fields.num;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v38 = BalanceConfig_TypeInfo;
        }
        if ( v39 > v38->static_fields->UserItemMax )
        {
          v40 = Method_UserPresentListViewManager_OnClickListView__;
          if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
            v40 = (_QWORD *)sub_1BC3020(Method_UserPresentListViewManager_OnClickListView__);
          v41 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v40, v40[4]);
          OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0, 0LL);
          v43 = UserPresentListViewManager___c_TypeInfo;
          if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
            v43 = UserPresentListViewManager___c_TypeInfo;
          }
          _9__55_0 = v43->static_fields->__9__55_0;
          if ( _9__55_0 )
            goto LABEL_56;
          if ( !v43->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v43);
            v43 = UserPresentListViewManager___c_TypeInfo;
          }
          v45 = (Il2CppObject *)v43->static_fields->__9;
          _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1BC3254(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
          UserPresentListViewManager_ReceiveCallbackFunc___ctor(
            _9__55_0,
            v45,
            Method_UserPresentListViewManager___c__OnClickListView_b__55_0__,
            v46);
          static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__55_0 = _9__55_0;
          p__9__55_0 = (CGThumbnailListItem_o *)&static_fields->__9__55_0;
LABEL_55:
          sub_1BC2FAC(p__9__55_0, (int32_t)_9__55_0, v47, v48);
LABEL_56:
          UserPresentListViewManager__showErrorResultDlg(v4, _9__55_0, v42);
          return;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !this )
          goto LABEL_87;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               &v68,
               (*p_selectPresentData)->fields.objectId,
               (const MethodInfo_32AF0BC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          this = (UserPresentListViewManager_o *)v68;
          if ( !v68 )
            goto LABEL_87;
          if ( ItemEntity__GetMaxNum((ItemEntity_o *)v68, 0LL) >= 1 )
          {
            this = (UserPresentListViewManager_o *)v68;
            if ( !v68 )
              goto LABEL_87;
            if ( v39 > ItemEntity__GetMaxNum((ItemEntity_o *)v68, 0LL) )
            {
              v51 = Method_UserPresentListViewManager_OnClickListView__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
                v51 = (_QWORD *)sub_1BC3020(Method_UserPresentListViewManager_OnClickListView__);
              v52 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v51, v51[4]);
              OverwriteAssetSoundName__PlaySystemSe(v52, 0, 0, 0LL);
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
              _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1BC3254(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
              UserPresentListViewManager_ReceiveCallbackFunc___ctor(
                _9__55_0,
                v54,
                Method_UserPresentListViewManager___c__OnClickListView_b__55_1__,
                v55);
              v56 = UserPresentListViewManager___c_TypeInfo->static_fields;
              v56->__9__55_1 = _9__55_0;
              p__9__55_0 = (CGThumbnailListItem_o *)&v56->__9__55_1;
              goto LABEL_55;
            }
          }
        }
      }
    }
    v57 = Method_UserPresentListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v57 = (_QWORD *)sub_1BC3020(Method_UserPresentListViewManager_OnClickListView__);
    v58 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v57, v57[4]);
    OverwriteAssetSoundName__PlaySystemSe(v58, 8, 0, 0LL);
    if ( *p_selectItem )
    {
      v4->fields._select_idx_k__BackingField = *((_DWORD *)&(*p_selectItem)->fields.UnityEngine_Behaviour_Fields + 1);
      v59 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v59,
        (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
      p_presentIds = (UserPresentListViewManager_o **)&v4->fields.presentIds;
      v4->fields.presentIds = v59;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.presentIds, (int32_t)v59, v61, v62);
      selectItem = v4->fields.selectItem;
      if ( selectItem )
      {
        obj = (UserPresentListViewObject_o *)selectItem->fields.presentId;
        if ( (__int64)obj >= 1 )
        {
          this = *p_presentIds;
          if ( !*p_presentIds )
            goto LABEL_87;
          v64 = *(_QWORD *)&this->fields.m_CachedPtr;
          v65 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v64 )
            goto LABEL_87;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v64 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              (int64_t)obj,
              *(const MethodInfo_3688E74 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v64 + 8 * m_CancellationTokenSource_low + 32) = obj;
          }
        }
        this = *p_presentIds;
        if ( *p_presentIds )
        {
          this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                   (System_Collections_Generic_List_long__o *)this,
                                                   (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v4->fields.m_parent )
          {
            UserPresentBoxWindow__receivePresent(v4->fields.m_parent, (System_Int64_array *)this, 0, 0, 0LL);
            UserPresentListViewManager__SetMode_39278596(v4, 2, v67);
            return;
          }
        }
      }
    }
LABEL_87:
    sub_1BC3264(this, obj);
  }
LABEL_14:
  v30 = Method_UserPresentListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v30 = (_QWORD *)sub_1BC3020(Method_UserPresentListViewManager_OnClickListView__);
  v31 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v30, v30[4]);
  OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0LL);
  UserPresentListViewManager__DlgForExpiredPresent(v4, v32);
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

  if ( (byte_4B00DC9 & 1) == 0 )
  {
    sub_1BC3008(&Method_UserPresentListViewManager_OnClickSortAscendingOrder__, method);
    byte_4B00DC9 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_UserPresentListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_UserPresentListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BC3264(v5, v6);
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
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B00DBF & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B00DBF = 1;
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
          sub_1BC3264(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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

  if ( (byte_4B00DC7 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_SceneList_Type__TypeInfo, msg);
    sub_1BC3008(&Method_UserPresentListViewManager_EndNoticeDlg__, v5);
    byte_4B00DC7 = 1;
  }
  dialog = this->fields.dialog;
  if ( !dialog
    || (UserPresentBoxErrorDialog__Open(dialog, msg, 0LL),
        v7 = this->fields.dialog,
        v8 = (System_Action_T__o *)sub_1BC3254(System_Action_SceneList_Type__TypeInfo),
        System_Action_Int32Enum____ctor(v8, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0LL),
        !v7) )
  {
    sub_1BC3264(dialog, msg);
  }
  UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v7, (System_Action_SceneList_Type__o *)v8, 0LL);
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
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Collections_Generic_List_ListViewItem__o *v28; // x22
  System_Predicate_object__o *v29; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v30; // x21
  System_Comparison_T__o *v31; // x22
  Il2CppObject *v32; // x23
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3

  if ( (byte_4B00DCB & 1) == 0 )
  {
    sub_1BC3008(&System_Comparison_ListViewItem__TypeInfo, *(_QWORD *)&ticketId);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem___ctor___76761904, v8);
    sub_1BC3008(&System_Collections_Generic_List_ListViewItem__TypeInfo, v9);
    sub_1BC3008(&System_Predicate_ListViewItem__TypeInfo, v10);
    sub_1BC3008(&Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__, v11);
    sub_1BC3008(&Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__, v12);
    sub_1BC3008(&UserPresentListViewManager___c__DisplayClass67_0_TypeInfo, v13);
    sub_1BC3008(&UserPresentListViewManager___c_TypeInfo, v14);
    byte_4B00DCB = 1;
  }
  v15 = sub_1BC3254(UserPresentListViewManager___c__DisplayClass67_0_TypeInfo);
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
  v23 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_57280308(
    v23,
    itemList,
    (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76761904);
  this->fields.presentTicketList = (struct System_Collections_Generic_List_ListViewItem__o *)v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.presentTicketList, (int32_t)v23, v24, v25);
  *(_DWORD *)(v15 + 20) = 0;
  *(_QWORD *)(v15 + 24) = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v15 + 24), 0, v26, v27);
  v28 = this->fields.presentTicketList;
  v29 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_ListViewItem__TypeInfo);
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
    (const MethodInfo_36A249C *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
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
    v31 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_object____ctor(
      v31,
      v32,
      Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__,
      0LL);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__67_1 = (struct System_Comparison_ListViewItem__o *)v31;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__67_1, (int32_t)v31, v34, v35);
  }
  if ( !v30
    || (System_Collections_Generic_List_object___Sort_57288964(
          (System_Collections_Generic_List_object__o *)v30,
          v31,
          (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_ListViewItem__Sort__),
        (selectDialog = this->fields.selectDialog) == 0LL) )
  {
LABEL_18:
    sub_1BC3264(selectDialog, v17);
  }
  PresentSelectableDlgComponent__Open(
    (PresentSelectableDlgComponent_o *)selectDialog,
    *(ItemEntity_o **)(v15 + 24),
    *(_DWORD *)(v15 + 20),
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__ReceiveMultiPresent(
        UserPresentListViewManager_o *this,
        int32_t kind,
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
  System_Collections_Generic_List_long__o *v25; // x21
  struct System_Collections_Generic_List_long__o **p_presentIds; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_object__o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x8
  System_Collections_Generic_List_object__o *v32; // x0
  _BOOL8 v33; // x0
  UserPresentListViewItem_c *v34; // x1
  UserPresentListViewItem_o *current; // x23
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_long__o *checkedIdList; // x0
  UserPresentBoxEntity_o *UserPresentEntity; // x0
  __int64 v39; // x1
  bool IsExpired; // w24
  UserPresentBoxEntity_o *v41; // x0
  __int64 v42; // x1
  ItemEntity_o *ItemEntity; // x0
  __int64 v44; // x1
  ItemEntity_o *v45; // x0
  __int64 v46; // x1
  int64_t endedAt; // x24
  Il2CppObject *NameText; // x0
  Il2CppObject *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  Il2CppObject *v52; // x1
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  System_Collections_Generic_List_long__o *v57; // x0
  int64_t presentId; // x1
  struct System_Int64_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  struct System_String_o **p_expiredPresents_k__BackingField; // x22
  int32_t v63; // w1
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  System_String_o *v66; // x23
  Il2CppObject *Item; // x0
  System_String_o *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B00DC4 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&kind);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Contains__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Contains__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__RemoveAt__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__ToArray__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Count__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Item__, v17);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v18);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_1BC3008(&NetworkManager_TypeInfo, v20);
    sub_1BC3008(&UserPresentListViewItem_TypeInfo, v21);
    sub_1BC3008(&StringLiteral_15658/*"["*/, v22);
    sub_1BC3008(&StringLiteral_1/*""*/, v23);
    sub_1BC3008(&StringLiteral_15911/*"]"*/, v24);
    byte_4B00DC4 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  this->fields.kind = kind;
  v25 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v25,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = &this->fields.presentIds;
  this->fields.presentIds = v25;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.presentIds, (int32_t)v25, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  v31 = 192LL;
  if ( kind == 1 )
    v31 = 432LL;
  v32 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v31);
  if ( !v32 )
    goto LABEL_62;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    v32,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v72 = v71;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v72,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v33 )
      break;
    current = (UserPresentListViewItem_o *)v72.fields._current;
    if ( v72.fields._current )
    {
      v34 = UserPresentListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v72.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (UserPresentListViewItem_c *)v72.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
      {
        sub_1BC3524(v72.fields._current);
LABEL_52:
        sub_1BC3264(v41, v42);
      }
    }
    switch ( kind )
    {
      case 1:
        if ( !v72.fields._current )
          sub_1BC3264(v33, v34);
        goto LABEL_23;
      case 2:
        if ( !v72.fields._current )
          sub_1BC3264(v33, v34);
        if ( !Gift__IsServant_39466060((int32_t)v72.fields._current[10].monitor, 0LL)
          && !Gift__IsCommandCode_39466452(current->fields.giftType, 0LL) )
        {
          goto LABEL_23;
        }
        break;
      case 3:
        if ( !v72.fields._current )
          sub_1BC3264(v33, v34);
        checkedIdList = this->fields.checkedIdList;
        if ( !checkedIdList )
          sub_1BC3264(0LL, v34);
        if ( System_Collections_Generic_List_long___Contains(
               checkedIdList,
               (int64_t)v72.fields._current[10].klass,
               (const MethodInfo_36891EC *)Method_System_Collections_Generic_List_long__Contains__) )
        {
LABEL_23:
          UserPresentEntity = UserPresentListViewItem__get_UserPresentEntity(current, 0LL);
          if ( !UserPresentEntity )
            sub_1BC3264(0LL, v39);
          IsExpired = UserPresentBoxEntity__IsExpired(UserPresentEntity, 0, 0LL);
          v41 = UserPresentListViewItem__get_UserPresentEntity(current, 0LL);
          if ( !v41 )
            goto LABEL_52;
          if ( v41->fields.giftType == 2 )
          {
            ItemEntity = UserPresentListViewItem__get_ItemEntity(current, 0LL);
            if ( !ItemEntity )
              sub_1BC3264(0LL, v44);
            if ( ItemEntity->fields.type != 24 )
            {
              if ( !IsExpired )
              {
                v45 = UserPresentListViewItem__get_ItemEntity(current, 0LL);
                if ( !v45 )
                  sub_1BC3264(0LL, v46);
                endedAt = v45->fields.endedAt;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( endedAt > NetworkManager__getTime(0LL) )
                  goto LABEL_39;
              }
LABEL_33:
              NameText = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, 0LL);
              if ( !v29 )
                sub_1BC3264(NameText, NameText);
              if ( !System_Collections_Generic_List_object___Contains(
                      v29,
                      NameText,
                      (const MethodInfo_36A11D0 *)Method_System_Collections_Generic_List_string__Contains__) )
              {
                v49 = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, 0LL);
                v52 = v49;
                items = v29->fields._items;
                v54 = Method_System_Collections_Generic_List_string__Add__;
                ++v29->fields._version;
                if ( !items )
                  sub_1BC3264(v49, v49);
                size = v29->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v29,
                    v49,
                    *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                }
                else
                {
                  v56 = &items->obj.klass + size;
                  v29->fields._size = size + 1;
                  v56[4] = (Il2CppClass *)v52;
                  sub_1BC2FAC((CGThumbnailListItem_o *)(v56 + 4), (int32_t)v52, v50, v51);
                }
              }
            }
          }
          else
          {
            if ( IsExpired )
              goto LABEL_33;
LABEL_39:
            v57 = *p_presentIds;
            if ( !*p_presentIds )
              sub_1BC3264(0LL, v42);
            presentId = current->fields.presentId;
            v59 = v57->fields._items;
            v60 = Method_System_Collections_Generic_List_long__Add__;
            ++v57->fields._version;
            if ( !v59 )
              sub_1BC3264(v57, presentId);
            v61 = v57->fields._size;
            if ( (unsigned int)v61 >= v59->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                v57,
                presentId,
                *(const MethodInfo_3688E74 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
            }
            else
            {
              v57->fields._size = v61 + 1;
              v59->m_Items[v61] = presentId;
            }
          }
        }
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v72,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  p_expiredPresents_k__BackingField = &this->fields._expiredPresents_k__BackingField;
  v63 = (int)StringLiteral_1/*""*/;
  this->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._expiredPresents_k__BackingField, v63, v64, v65);
  if ( !v29 )
    goto LABEL_62;
  if ( v29->fields._size >= 1 )
  {
    do
    {
      v66 = *p_expiredPresents_k__BackingField;
      Item = System_Collections_Generic_List_object___get_Item(
               v29,
               0,
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_string__get_Item__);
      v68 = System_String__Concat_62388900(
              v66,
              (System_String_o *)StringLiteral_15658/*"["*/,
              (System_String_o *)Item,
              (System_String_o *)StringLiteral_15911/*"]"*/,
              0LL);
      *p_expiredPresents_k__BackingField = v68;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._expiredPresents_k__BackingField, (int32_t)v68, v69, v70);
      System_Collections_Generic_List_object___RemoveAt(
        v29,
        0,
        (const MethodInfo_36A2614 *)Method_System_Collections_Generic_List_string__RemoveAt__);
    }
    while ( v29->fields._size > 0 );
  }
  v32 = (System_Collections_Generic_List_object__o *)*p_presentIds;
  if ( !*p_presentIds
    || (v32 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_long___ToArray(
                                                             (System_Collections_Generic_List_long__o *)v32,
                                                             (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.m_parent) )
  {
LABEL_62:
    sub_1BC3264(v32, v30);
  }
  UserPresentBoxWindow__receivePresent(this->fields.m_parent, (System_Int64_array *)v32, 0, 0, 0LL);
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
  int64_t presentId; // x1
  System_Int64_array *presentTicketList; // x0
  int max_length; // w26
  int v20; // w27
  int v21; // w29
  int v22; // w24
  UserPresentListViewItem_o *v23; // x23
  __int64 methodPtr_low; // x10
  int64_t v25; // x25
  int v26; // w25
  struct System_Int64_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  UserPresentBoxWindow_o *m_parent; // x23
  const MethodInfo *v31; // x2
  __int64 v32; // x9
  struct System_String_o *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UserPresentBoxWindow_o *v36; // x20
  UserPresentListViewManager_o *v37; // x0
  const MethodInfo *v38; // x1
  int32_t selectNum; // [xsp+4h] [xbp-6Ch]
  ItemSelectEntity_o *v40; // [xsp+8h] [xbp-68h]

  if ( (byte_4B00DCC & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, selectItm);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_1BC3008(&NetworkManager_TypeInfo, v12);
    sub_1BC3008(&UserPresentListViewItem_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_15658/*"["*/, v14);
    sub_1BC3008(&StringLiteral_15911/*"]"*/, v15);
    byte_4B00DCC = 1;
  }
  v16 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  presentTicketList = (System_Int64_array *)this->fields.presentTicketList;
  if ( !presentTicketList || !selectItm )
    goto LABEL_26;
  max_length = presentTicketList->max_length;
  v40 = selectItm;
  selectNum = num;
  if ( max_length < 1 || (v20 = selectItm->fields.requireNum * num, v20 < 1) )
  {
    if ( v16 )
    {
LABEL_28:
      m_parent = this->fields.m_parent;
      presentTicketList = System_Collections_Generic_List_long___ToArray(
                            v16,
                            (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( m_parent )
      {
        UserPresentBoxWindow__receivePresent(m_parent, presentTicketList, v40->fields.idx, selectNum, 0LL);
        UserPresentListViewManager__SetMode_39278596(this, 2, v31);
        return;
      }
    }
    goto LABEL_26;
  }
  v21 = 0;
  v22 = 1;
  while ( 1 )
  {
    presentTicketList = (System_Int64_array *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)presentTicketList,
                                                v22 - 1,
                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !presentTicketList )
      goto LABEL_26;
    v23 = (UserPresentListViewItem_o *)presentTicketList;
    methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(presentTicketList->obj.klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low )
      goto LABEL_26;
    if ( (UserPresentListViewItem_c *)presentTicketList->obj.klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
      goto LABEL_26;
    presentTicketList = (System_Int64_array *)UserPresentListViewItem__get_UserPresentEntity(
                                                (UserPresentListViewItem_o *)presentTicketList,
                                                0LL);
    if ( !presentTicketList )
      goto LABEL_26;
    if ( UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)presentTicketList, 0, 0LL) )
      break;
    presentTicketList = (System_Int64_array *)UserPresentListViewItem__get_ItemEntity(v23, 0LL);
    if ( !presentTicketList )
      goto LABEL_26;
    v25 = presentTicketList->m_Items[8];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( v25 <= NetworkManager__getTime(0LL) )
      break;
    presentTicketList = (System_Int64_array *)UserPresentListViewItem__get_UserPresentEntity(v23, 0LL);
    if ( !presentTicketList )
      goto LABEL_26;
    if ( !v16 )
      goto LABEL_26;
    v26 = presentTicketList->m_Items[6];
    presentId = v23->fields.presentId;
    items = v16->fields._items;
    v28 = Method_System_Collections_Generic_List_long__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_26;
    size = v16->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v16,
        presentId,
        *(const MethodInfo_3688E74 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v16->fields._size = size + 1;
      items->m_Items[size] = presentId;
    }
    if ( v22 >= max_length )
      goto LABEL_28;
    v21 += v26;
    if ( v21 >= v20 )
      goto LABEL_28;
    presentTicketList = (System_Int64_array *)this->fields.presentTicketList;
    ++v22;
    if ( !presentTicketList )
      goto LABEL_26;
  }
  presentTicketList = (System_Int64_array *)this->fields.presentTicketList;
  if ( !presentTicketList )
    goto LABEL_26;
  presentTicketList = (System_Int64_array *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)presentTicketList,
                                              0,
                                              (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !presentTicketList )
    goto LABEL_26;
  v32 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(presentTicketList->obj.klass->vtable[0].methodPtr) >= (unsigned int)v32
    && (UserPresentListViewItem_c *)presentTicketList->obj.klass->_2.typeHierarchy[v32 - 1] == UserPresentListViewItem_TypeInfo )
  {
    presentTicketList = (System_Int64_array *)UserPresentListViewItem__get_ItemEntity(
                                                (UserPresentListViewItem_o *)presentTicketList,
                                                0LL);
    if ( presentTicketList )
    {
      v33 = System_String__Concat_62386896(
              (System_String_o *)StringLiteral_15658/*"["*/,
              *(System_String_o **)&presentTicketList->max_length,
              (System_String_o *)StringLiteral_15911/*"]"*/,
              0LL);
      this->fields._expiredPresents_k__BackingField = v33;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._expiredPresents_k__BackingField, (int32_t)v33, v34, v35);
      if ( v16 )
      {
        v36 = this->fields.m_parent;
        presentTicketList = System_Collections_Generic_List_long___ToArray(
                              v16,
                              (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v36 )
        {
          UserPresentBoxWindow__receivePresent(v36, presentTicketList, v40->fields.idx, 0, 0LL);
          return;
        }
      }
    }
LABEL_26:
    sub_1BC3264(presentTicketList, presentId);
  }
  sub_1BC3524(presentTicketList);
  UserPresentListViewManager___ctor(v37, v38);
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

  if ( (byte_4B00DBD & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v11);
    sub_1BC3008(&Method_UserPresentListViewManager_OnMoveEnd__, v12);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v13);
    byte_4B00DBD = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BC3264(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BC3264(v19, v20);
      UserPresentListViewObject__Init_39279824((UserPresentListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestListObject_39278796(
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

  if ( (byte_4B00DBE & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v9);
    sub_1BC3008(&Method_UserPresentListViewManager_OnMoveEnd__, v10);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v11);
    byte_4B00DBE = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BC3264(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BC3264(v17, v18);
      UserPresentListViewObject__Init_39279908((UserPresentListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  UserPresentListViewManager__SetMode_39278596(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__SetMode_39278596(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_4B00DBC & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1BC3008(
                                             &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                             *(_QWORD *)&mode);
    byte_4B00DBC = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1BC3264(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0LL);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    UserPresentListViewManager__RequestListObject_39278796(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 4;
    goto LABEL_8;
  }
}


void __fastcall UserPresentListViewManager__SetMode_39278744(
        UserPresentListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  UserPresentListViewManager__SetMode_39278596(this, mode, v6);
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
  if ( (byte_4B00DBB & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1BC3008(&UserPresentListViewObject_TypeInfo, obj);
    byte_4B00DBB = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserPresentListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserPresentListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewObject_TypeInfo )
  {
    sub_1BC3264(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  UserPresentListViewObject__Init_39278472((UserPresentListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4B00DCA & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_17368/*"btn_sort_up"*/, v3);
    sub_1BC3008(&StringLiteral_17416/*"btn_txt_new"*/, v4);
    sub_1BC3008(&StringLiteral_17423/*"btn_txt_old"*/, v5);
    sub_1BC3008(&StringLiteral_17365/*"btn_sort_down"*/, v6);
    byte_4B00DCA = 1;
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
        v13 = (System_String_o **)(v12->fields.isAscendingOrder ? &StringLiteral_17423/*"btn_txt_old"*/ : &StringLiteral_17416/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v13, 0LL);
        v14 = this->fields.sort;
        if ( v14 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            if ( v14->fields.isAscendingOrder )
              v15 = (System_String_o **)&StringLiteral_17365/*"btn_sort_down"*/;
            else
              v15 = (System_String_o **)&StringLiteral_17368/*"btn_sort_up"*/;
            UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_1BC3264(sort, v8);
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

  if ( (byte_4B00DCF & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BC3008(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__, v4);
    byte_4B00DCF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL),
        v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__,
          0LL),
        !v7) )
  {
    sub_1BC3264(Instance, v6);
  }
  CommonUI__maskFadeout((CommonUI_o *)v7, 1, 0.5, v8, 0LL);
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_1(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UserPresentBoxWindow_o *m_parent; // x0

  if ( (byte_4B00DD0 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B00DD0 = 1;
  }
  UserPresentListViewManager__DestroyList(this, method);
  m_parent = this->fields.m_parent;
  if ( !m_parent
    || (UserPresentBoxWindow__SetReDispFromExpiredPresent(m_parent, 0LL),
        (m_parent = (UserPresentBoxWindow_o *)this->fields.scrollView) == 0LL)
    || (UIScrollView__ResetPosition((UIScrollView_o *)m_parent, 0LL),
        (m_parent = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BC3264(m_parent, v3);
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

  if ( (byte_4B00DAE & 1) == 0 )
  {
    sub_1BC3008(&UserPresentListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B00DAE = 1;
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
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
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

  if ( (byte_4B00DB0 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4B00DB0 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
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

  if ( (byte_4B00DB2 & 1) == 0 )
  {
    sub_1BC3008(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, value);
    byte_4B00DB2 = 1;
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
    v8 = sub_1BFD098(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
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
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B00DB7 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4B00DB7 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BC3264(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BC3264(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BC3264(0LL, v18);
      Item = (ListViewItem_o *)UserPresentListViewObject__GetItem((UserPresentListViewObject_o *)Component_object, v18);
      if ( !Item )
        sub_1BC3264(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_42785324((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BC3264(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BC3264(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BC3264(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BC3264(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B00DB6 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4B00DB6 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BC3264(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BC3264(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BC3264(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BC3264(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v11;
}


ListViewSort_o *__fastcall UserPresentListViewManager__get_SortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  UserPresentListViewManager_c *v2; // x0

  if ( (byte_4B00DAD & 1) == 0 )
  {
    sub_1BC3008(&UserPresentListViewManager_TypeInfo, v1);
    byte_4B00DAD = 1;
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

  if ( (byte_4B00DAF & 1) == 0 )
  {
    sub_1BC3008(&UserPresentListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B00DAF = 1;
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
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
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

  if ( (byte_4B00DB1 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4B00DB1 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
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

  if ( (byte_4B00DB3 & 1) == 0 )
  {
    sub_1BC3008(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, value);
    byte_4B00DB3 = 1;
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
    v8 = sub_1BFD098(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
  UserPresentListViewManager__get_select_idx(v10, v11);
}


void __fastcall UserPresentListViewManager__resetCheckStatus(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v4; // w9

  if ( (byte_4B00DC3 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Clear__, method);
    byte_4B00DC3 = 1;
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
    sub_1BC3264(0LL, type);
  UserPresentBoxErrorDialog__setJumpType(dialog, type, 0LL);
}


void __fastcall UserPresentListViewManager__set_expiredPresents(
        UserPresentListViewManager_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._expiredPresents_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._expiredPresents_k__BackingField,
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
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t kind; // w8
  System_String_o *v11; // x1
  __int64 *v12; // x8

  if ( (byte_4B00DC6 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, callback);
    sub_1BC3008(&StringLiteral_10967/*"REJECT_NORMAL_TXT"*/, v6);
    sub_1BC3008(&StringLiteral_10963/*"REJECT_ALL_TXT"*/, v7);
    sub_1BC3008(&StringLiteral_1/*""*/, v8);
    byte_4B00DC6 = 1;
  }
  this->fields.receivecCallbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.receivecCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  kind = this->fields.kind;
  if ( !kind )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_10967/*"REJECT_NORMAL_TXT"*/;
    goto LABEL_12;
  }
  if ( (unsigned int)(kind - 1) <= 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_10963/*"REJECT_ALL_TXT"*/;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_long__o *checkedIdList; // x21
  void *m_parent; // x0
  int32_t size; // w25
  BalanceConfig_c *v14; // x0
  int32_t PresentBoxCheckMax; // w26
  System_Collections_Generic_List_long__o *v16; // x20
  int32_t v17; // w21
  UserPresentListViewItem_o *v18; // x27
  UserPresentListViewItem_o *v19; // x22
  __int64 methodPtr_low; // x9
  int64_t v21; // x23
  int32_t v22; // w0
  struct System_Collections_Generic_List_long__o *v23; // x8
  UserPresentListViewManager_o *v24; // x0
  const MethodInfo *v25; // x1
  int v26; // [xsp+Ch] [xbp-64h]

  if ( (byte_4B00DC2 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__IndexOf__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Remove__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor___76761024, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v9);
    sub_1BC3008(&UserPresentListViewItem_TypeInfo, v10);
    byte_4B00DC2 = 1;
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
    UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 0, 1, 0LL);
    checkedIdList = this->fields.checkedIdList;
    if ( !checkedIdList )
      goto LABEL_39;
    v26 = 0;
  }
  size = checkedIdList->fields._size;
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
    checkedIdList = this->fields.checkedIdList;
  }
  PresentBoxCheckMax = v14->static_fields->PresentBoxCheckMax;
  v16 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_57182024(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)checkedIdList,
    (const MethodInfo_3688748 *)Method_System_Collections_Generic_List_long___ctor___76761024);
  m_parent = this->fields.itemList;
  if ( !m_parent )
LABEL_39:
    sub_1BC3264(m_parent, method);
  v17 = 0;
  v18 = 0LL;
  while ( 1 )
  {
    if ( v17 >= *((_DWORD *)m_parent + 6) )
    {
      v23 = this->fields.checkedIdList;
      if ( v23 )
      {
        m_parent = this->fields.m_parent;
        if ( m_parent )
        {
          UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)m_parent, v23->fields._size, 0LL);
          return;
        }
      }
      goto LABEL_39;
    }
    m_parent = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)m_parent,
                 v17,
                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !m_parent )
      goto LABEL_39;
    method = (const MethodInfo *)UserPresentListViewItem_TypeInfo;
    v19 = (UserPresentListViewItem_o *)m_parent;
    methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)m_parent + 304LL) < (unsigned int)methodPtr_low
      || *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)m_parent + 200LL) + 8 * methodPtr_low - 8) != UserPresentListViewItem_TypeInfo )
    {
      break;
    }
    if ( !v16 )
      goto LABEL_39;
    v21 = *((_QWORD *)m_parent + 20);
    if ( System_Collections_Generic_List_long___Remove(
           v16,
           v21,
           (const MethodInfo_368A370 *)Method_System_Collections_Generic_List_long__Remove__) )
    {
      m_parent = this->fields.checkedIdList;
      if ( !m_parent )
        goto LABEL_39;
      v22 = System_Collections_Generic_List_long___IndexOf(
              (System_Collections_Generic_List_long__o *)m_parent,
              v21,
              (const MethodInfo_3689AF0 *)Method_System_Collections_Generic_List_long__IndexOf__);
      UserPresentListViewItem__setCheckBoxed(v19, 1, v22 + 1, 0LL);
    }
    else
    {
      UserPresentListViewItem__setCheckBoxed(v19, 0, -1, 0LL);
      if ( size < PresentBoxCheckMax )
        v18 = v19;
      if ( size < PresentBoxCheckMax )
      {
        if ( v26 )
        {
          m_parent = (void *)UserPresentListViewItem__get_Type(v19, 0LL);
          if ( (_DWORD)m_parent == 2 )
          {
            m_parent = UserPresentListViewItem__get_ItemEntity(v19, 0LL);
            if ( !m_parent )
              goto LABEL_39;
            method = (const MethodInfo *)(*((_DWORD *)m_parent + 12) == 24);
          }
          else
          {
            method = 0LL;
          }
          v19 = v18;
        }
        else
        {
          method = 0LL;
        }
        if ( !v19 )
          goto LABEL_39;
      }
      else
      {
        LOBYTE(method) = 1;
      }
      UserPresentListViewItem__setBlocked(v19, (bool)method, 0LL);
    }
    m_parent = this->fields.itemList;
    ++v17;
    if ( !m_parent )
      goto LABEL_39;
  }
  sub_1BC3524(m_parent);
  UserPresentListViewManager__DestroyList(v24, v25);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1A0CBE8;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_1A0CBC8;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0CB80;
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
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, &v6, callback, object);
}


void __fastcall UserPresentListViewManager_CallbackFunc__EndInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0CC6C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0CC24;
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
  if ( (byte_4B00DD1 & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, isReceive);
    byte_4B00DD1 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall UserPresentListViewManager_ReceiveCallbackFunc__EndInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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
  const MethodInfo *v4; // x3

  if ( (byte_4B00DD2 & 1) == 0 )
  {
    sub_1BC3008(&UserPresentListViewManager___c_TypeInfo, v1);
    byte_4B00DD2 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(UserPresentListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserPresentListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentListViewManager___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)UserPresentListViewManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_4B00DD3 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1BC3008(&UserPresentListViewItem_TypeInfo, a);
    byte_4B00DD3 = 1;
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
      sub_1BC3264(this, a);
    }
  }
  else
  {
    sub_1BC3524(a);
  }
  sub_1BC3524(b);
  return UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(v10, v11, v12);
}


bool __fastcall UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *obj,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  __int64 v5; // x9

  if ( (byte_4B00DD4 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1BC3008(&UserPresentListViewItem_TypeInfo, obj);
    byte_4B00DD4 = 1;
  }
  if ( !obj )
    goto LABEL_14;
  methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_13:
    sub_1BC3524(obj);
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
      sub_1BC3264(this, obj);
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
  if ( (byte_4B00DD5 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1BC3008(&UserPresentListViewItem_TypeInfo, a);
    byte_4B00DD5 = 1;
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
  result = System_String__CompareTo_62382996((System_String_o *)v8, (System_String_o *)this, 0LL);
  if ( result )
    return result;
  a = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  v10 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v5->klass->vtable._0_Equals.methodPtr) < (unsigned int)v10
    || (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[v10 - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_18:
    sub_1BC3524(v5);
    goto LABEL_19;
  }
  v11 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v11
    && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v11 - 1] == UserPresentListViewItem_TypeInfo )
  {
    this = (UserPresentListViewManager___c_o *)v5[1].fields.sortValue2;
    if ( this )
      return System_String__CompareTo_62382996((System_String_o *)this, (System_String_o *)b[1].fields.sortValue2, 0LL);
LABEL_17:
    sub_1BC3264(this, a);
  }
LABEL_19:
  sub_1BC3524(b);
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
  UserPresentListViewManager___c__DisplayClass67_0_o *v10; // x0
  ListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B00DD6 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1BC3008(&UserPresentListViewItem_TypeInfo, a);
    byte_4B00DD6 = 1;
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
      sub_1BC3264(this, a);
    }
  }
  else
  {
    sub_1BC3524(a);
  }
  sub_1BC3524(b);
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
  UserPresentListViewManager___c__DisplayClass67_0_o *v4; // x19
  __int64 methodPtr_low; // x10
  int32_t ticketsHave; // w21
  CGThumbnailListItem_o *p_ticketItem; // x19
  struct ItemEntity_o *ticketItem; // t1
  ItemEntity_o *ItemEntity; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  v4 = this;
  if ( (byte_4B00DD7 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_1BC3008(&UserPresentListViewItem_TypeInfo, obj);
    byte_4B00DD7 = 1;
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
    sub_1BC3264(this, obj);
  ticketItem = v4->fields.ticketItem;
  p_ticketItem = (CGThumbnailListItem_o *)&v4->fields.ticketItem;
  HIDWORD(p_ticketItem[-1].fields._ThumbnailSpritePath_k__BackingField) = this[2].fields.ticketId + ticketsHave;
  if ( !ticketItem )
  {
    ItemEntity = UserPresentListViewItem__get_ItemEntity((UserPresentListViewItem_o *)obj, 0LL);
    p_ticketItem->klass = (CGThumbnailListItem_c *)ItemEntity;
    sub_1BC2FAC(p_ticketItem, (int32_t)ItemEntity, v10, v11);
  }
  return 0;
}