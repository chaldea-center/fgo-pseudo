void __fastcall UserPresentListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434FD24 & 1) == 0 )
  {
    sub_B70694(&ListViewSort_TypeInfo);
    sub_B70694(&UserPresentListViewManager_TypeInfo);
    sub_B70694(&StringLiteral_15290/*"UserPresent"*/);
    byte_434FD24 = 1;
  }
  v1 = (ListViewSort_o *)sub_B70764(ListViewSort_TypeInfo);
  ListViewSort___ctor_33980040(v1, (System_String_o *)StringLiteral_15290/*"UserPresent"*/, 1, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserPresentListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  UserPresentBoxWindow_o *m_parent; // x0
  System_Collections_Generic_IEnumerable_T__o *checkedIdList; // x22
  System_Collections_Generic_List_long__o *v20; // x21
  signed int max_length; // w8
  unsigned int v22; // w22
  Il2CppClass **v23; // x23
  Il2CppClass *v24; // x8
  UserPresentBoxEntity_o **v25; // x23
  Il2CppClass *v26; // t1
  UserPresentBoxEntity_o *v27; // x24
  UserPresentListViewItem_o *v28; // x23
  const MethodInfo *v29; // x3
  signed __int64 size; // x8
  struct System_Collections_Generic_List_long__o *v31; // x20
  unsigned __int64 v32; // x22
  const MethodInfo *v33; // x1
  __int64 v34; // x8
  unsigned __int64 v35; // x21
  UserPresentBoxEntity_o *v36; // x23
  UserPresentListViewItem_o *v37; // x22
  const MethodInfo *v38; // x3
  __int64 v39; // x0

  if ( (byte_434FD0F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__Remove__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor___69165120);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&UserPresentListViewItem_TypeInfo);
    byte_434FD0F = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.selectPresentData = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.selectPresentData, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields.presentIds = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.presentIds, 0LL, v11, v12, v13, v14, v15, v16);
  m_parent = this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_32;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable(m_parent, 0, 0, 0LL);
  checkedIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v20 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_51099172(
      v20,
      checkedIdList,
      (const MethodInfo_30BB624 *)Method_System_Collections_Generic_List_long___ctor___69165120);
    if ( !presentList )
      goto LABEL_32;
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
          goto LABEL_32;
        m_parent = (UserPresentBoxWindow_o *)System_Collections_Generic_List_long___Remove(
                                               v20,
                                               (int64_t)v24->_1.namespaze,
                                               (const MethodInfo_30BDB04 *)Method_System_Collections_Generic_List_long__Remove__);
        if ( v22 >= presentList->max_length )
          goto LABEL_33;
        v27 = *v25;
        v28 = (UserPresentListViewItem_o *)sub_B70764(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v28, v22, v27, v29);
        m_parent = (UserPresentBoxWindow_o *)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)m_parent,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        max_length = presentList->max_length;
        if ( (int)++v22 >= max_length )
          goto LABEL_14;
      }
      goto LABEL_33;
    }
LABEL_14:
    if ( !v20 )
LABEL_32:
      sub_B7076C(m_parent, v17);
    LODWORD(size) = v20->fields._size;
    v31 = this->fields.checkedIdList;
    if ( (int)size >= 1 )
    {
      v32 = 0LL;
      do
      {
        if ( v32 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( !v31 )
          goto LABEL_32;
        m_parent = (UserPresentBoxWindow_o *)System_Collections_Generic_List_long___Remove(
                                               v31,
                                               v20->fields._items->m_Items[v32],
                                               (const MethodInfo_30BDB04 *)Method_System_Collections_Generic_List_long__Remove__);
        size = v20->fields._size;
        v31 = this->fields.checkedIdList;
      }
      while ( (__int64)++v32 < size );
    }
    if ( !v31 )
      goto LABEL_32;
    if ( v31->fields._size >= 1 )
    {
      m_parent = this->fields.m_parent;
      if ( !m_parent )
        goto LABEL_32;
      UserPresentBoxWindow__SetCheckedItemsButtonEnable(m_parent, 1, 1, 0LL);
      UserPresentListViewManager__updateCheckStatus(this, v33);
    }
  }
  else
  {
    if ( !presentList )
      goto LABEL_32;
    v34 = *(_QWORD *)&presentList->max_length;
    if ( (int)v34 >= 1 )
    {
      v35 = 0LL;
      while ( v35 < (unsigned int)v34 )
      {
        v36 = presentList->m_Items[v35];
        v37 = (UserPresentListViewItem_o *)sub_B70764(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v37, v35, v36, v38);
        m_parent = (UserPresentBoxWindow_o *)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)m_parent,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v34) = presentList->max_length;
        if ( (__int64)++v35 >= (int)v34 )
          goto LABEL_31;
      }
LABEL_33:
      v39 = sub_B70798(m_parent);
      sub_B70738(v39, 0LL);
    }
  }
LABEL_31:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall UserPresentListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserPresentListViewManager_c *v2; // x0
  ListViewSort_o *sortInfo; // x0

  if ( (byte_434FD0A & 1) == 0 )
  {
    sub_B70694(&UserPresentListViewManager_TypeInfo);
    byte_434FD0A = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v2 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v2->static_fields->sortInfo;
  if ( !sortInfo )
    sub_B7076C(0LL, v1);
  ListViewSort__DeleteContinueData(sortInfo, 0LL);
}


void __fastcall UserPresentListViewManager__DestroyList(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B7076C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall UserPresentListViewManager__DlgForExpiredPresent(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_String_o *v4; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_434FD23 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__);
    sub_B70694(&StringLiteral_10645/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/);
    byte_434FD23 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_10645/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0LL);
  v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, 0LL);
  if ( !Instance )
    sub_B7076C(v6, v7);
  CommonUI__OpenNotificationDialog(Instance, 0LL, v4, v5, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
}


void __fastcall UserPresentListViewManager__EndNoticeDlg(
        UserPresentListViewManager_o *this,
        int32_t scene,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *dialog; // x21
  System_Action_ShopRootConstants_State__o *v6; // x22
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  UserPresentListViewManager_ReceiveCallbackFunc_o *receivecCallbackFunc; // x0

  if ( (byte_434FD1E & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_SceneList_Type___ctor__);
    sub_B70694(&System_Action_SceneList_Type__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_UserPresentListViewManager_EndNoticeDlg__);
    byte_434FD1E = 1;
  }
  dialog = this->fields.dialog;
  v6 = (System_Action_ShopRootConstants_State__o *)sub_B70764(System_Action_SceneList_Type__TypeInfo);
  System_Action_ShopRootConstants_State____ctor(
    v6,
    (Il2CppObject *)this,
    Method_UserPresentListViewManager_EndNoticeDlg__,
    (const MethodInfo_264AE8C *)Method_System_Action_SceneList_Type___ctor__);
  if ( !dialog )
    goto LABEL_14;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(dialog, (System_Action_SceneList_Type__o *)v6, 0LL);
  if ( scene == -1 )
    goto LABEL_11;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( CommonUI__IsActive_MasterMission(Instance, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    CommonUI__CloseMasterMission(Instance, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_B7076C(Instance, v8);
  CommonUI__CloseUsrPresentList(Instance, 0LL);
LABEL_11:
  receivecCallbackFunc = this->fields.receivecCallbackFunc;
  if ( receivecCallbackFunc )
    UserPresentListViewManager_ReceiveCallbackFunc__Invoke(receivecCallbackFunc, 1, 0LL);
}


System_String_o *__fastcall UserPresentListViewManager__GetAllPresentStrings(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *presentAllSelectedList; // x0
  System_Collections_Generic_List_RegexCharClass_SingleRange__o **p_presentAllSelectedList; // x19
  System_Collections_Generic_IEnumerable_T__o *itemList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v6; // x22
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v14; // x20
  void *appended; // x0
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__60_0; // x21
  Il2CppObject *v18; // x22
  struct UserPresentListViewManager___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v26; // x20
  struct UserPresentListViewManager___c_StaticFields *v27; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__60_1; // x21
  Il2CppObject *v29; // x22
  struct UserPresentListViewManager___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v37; // x20
  int size; // w8
  struct UserPresentListViewManager___c_StaticFields *v39; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__60_2; // x21
  Il2CppObject *v41; // x22
  struct UserPresentListViewManager___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Text_StringBuilder_o *v49; // x20
  signed __int64 v50; // x23
  unsigned __int64 v51; // x24
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v52; // x21
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o *v53; // x8
  __int64 v54; // x11
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o *v55; // x21
  System_String_o *v56; // x22

  if ( (byte_434FD1B & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_System_Comparison_ListViewItem___ctor__);
    sub_B70694(&System_Comparison_ListViewItem__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem___ctor___69165824);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_System_Predicate_ListViewItem___ctor__);
    sub_B70694(&System_Predicate_ListViewItem__TypeInfo);
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    sub_B70694(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__);
    sub_B70694(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__);
    sub_B70694(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__);
    sub_B70694(&UserPresentListViewManager___c_TypeInfo);
    sub_B70694(&UserPresentListViewItem_TypeInfo);
    sub_B70694(&StringLiteral_10650/*"PRESENT_INFO"*/);
    byte_434FD1B = 1;
  }
  presentAllSelectedList = this->fields.presentAllSelectedList;
  p_presentAllSelectedList = (System_Collections_Generic_List_RegexCharClass_SingleRange__o **)&this->fields.presentAllSelectedList;
  if ( presentAllSelectedList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)presentAllSelectedList,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_ListViewItem__Clear__);
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v6 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v6,
    itemList,
    (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_ListViewItem___ctor___69165824);
  this->fields.presentAllSelectedList = (struct System_Collections_Generic_List_ListViewItem__o *)v6;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.presentAllSelectedList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v14 = this->fields.presentAllSelectedList;
  appended = UserPresentListViewManager___c_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    appended = UserPresentListViewManager___c_TypeInfo;
  }
  static_fields = (struct UserPresentListViewManager___c_StaticFields *)*((_QWORD *)appended + 23);
  _9__60_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__60_0;
  if ( !_9__60_0 )
  {
    if ( (*((_BYTE *)appended + 307) & 4) != 0 && !*((_DWORD *)appended + 56) )
    {
      j_il2cpp_runtime_class_init_0(appended);
      static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__60_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__60_0,
      v18,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_ListViewItem___ctor__);
    v19 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v19->__9__60_0 = (struct System_Comparison_ListViewItem__o *)_9__60_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v19->__9__60_0,
      (System_Int32_array **)_9__60_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !v14 )
    goto LABEL_62;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v14,
    (System_Comparison_T__o *)_9__60_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  appended = UserPresentListViewManager___c_TypeInfo;
  v26 = *p_presentAllSelectedList;
  if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    appended = UserPresentListViewManager___c_TypeInfo;
  }
  v27 = (struct UserPresentListViewManager___c_StaticFields *)*((_QWORD *)appended + 23);
  _9__60_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v27->__9__60_1;
  if ( !_9__60_1 )
  {
    if ( (*((_BYTE *)appended + 307) & 4) != 0 && !*((_DWORD *)appended + 56) )
    {
      j_il2cpp_runtime_class_init_0(appended);
      v27 = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)v27->__9;
    _9__60_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__60_1,
      v29,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_ListViewItem___ctor__);
    v30 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v30->__9__60_1 = (struct System_Predicate_ListViewItem__o *)_9__60_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v30->__9__60_1,
      (System_Int32_array **)_9__60_1,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !v26 )
    goto LABEL_62;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v26,
    (System_Predicate_T__o *)_9__60_1,
    (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  appended = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    appended = BalanceConfig_TypeInfo;
  }
  v37 = *p_presentAllSelectedList;
  if ( !*p_presentAllSelectedList )
    goto LABEL_62;
  v13 = (const MethodInfo *)*(unsigned int *)(*((_QWORD *)appended + 23) + 116LL);
  size = v37->fields._size;
  if ( size > (int)v13 )
  {
    System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange(
      *p_presentAllSelectedList,
      (int32_t)v13,
      size - (_DWORD)v13,
      (const MethodInfo_302741C *)Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    v37 = *p_presentAllSelectedList;
  }
  appended = UserPresentListViewManager___c_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    appended = UserPresentListViewManager___c_TypeInfo;
  }
  v39 = (struct UserPresentListViewManager___c_StaticFields *)*((_QWORD *)appended + 23);
  _9__60_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v39->__9__60_2;
  if ( !_9__60_2 )
  {
    if ( (*((_BYTE *)appended + 307) & 4) != 0 && !*((_DWORD *)appended + 56) )
    {
      j_il2cpp_runtime_class_init_0(appended);
      v39 = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v41 = (Il2CppObject *)v39->__9;
    _9__60_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__60_2,
      v41,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_ListViewItem___ctor__);
    v42 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v42->__9__60_2 = (struct System_Comparison_ListViewItem__o *)_9__60_2;
    sub_B70630(
      (BattleServantConfConponent_o *)&v42->__9__60_2,
      (System_Int32_array **)_9__60_2,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  if ( !v37 )
    goto LABEL_62;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v37,
    (System_Comparison_T__o *)_9__60_2,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  v49 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v49, 0LL);
  if ( !*p_presentAllSelectedList )
    goto LABEL_62;
  v50 = (*p_presentAllSelectedList)->fields._size;
  if ( (int)v50 >= 1 )
  {
    v51 = 0LL;
    while ( 1 )
    {
      if ( v51 )
      {
        if ( !v49 )
          break;
        appended = System_Text_StringBuilder__Append_42605224(v49, 0xAu, 0LL);
      }
      v52 = *p_presentAllSelectedList;
      if ( !*p_presentAllSelectedList )
        break;
      if ( v51 >= (unsigned int)v52->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v53 = v52->fields._items->m_Items[v51];
      if ( v53
        && (v54 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v53->klass->_2.bitflags2 + 1) >= (unsigned int)v54) )
      {
        v55 = (UserPresentListViewItem_c *)v53->klass->_2.typeHierarchy[v54 - 1] == UserPresentListViewItem_TypeInfo
            ? v52->fields._items->m_Items[v51]
            : 0LL;
      }
      else
      {
        v55 = 0LL;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      appended = LocalizationManager__Get((System_String_o *)StringLiteral_10650/*"PRESENT_INFO"*/, 0LL);
      if ( !v55 )
        break;
      v56 = (System_String_o *)appended;
      appended = UserPresentListViewItem__get_NameText((UserPresentListViewItem_o *)v55, v13);
      if ( !v49 )
        break;
      appended = System_Text_StringBuilder__AppendFormat_42608532(
                   v49,
                   v56,
                   (Il2CppObject *)appended,
                   *(Il2CppObject **)&v55[7].fields._first,
                   0LL);
      if ( (__int64)++v51 >= v50 )
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v49->klass->vtable._3_ToString.method)(
                                    v49,
                                    v49->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    }
LABEL_62:
    sub_B7076C(appended, v13);
  }
  if ( !v49 )
    goto LABEL_62;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v49->klass->vtable._3_ToString.method)(
                              v49,
                              v49->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


UserPresentListViewItem_o *__fastcall UserPresentListViewManager__GetItem(
        UserPresentListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_434FD10 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&UserPresentListViewItem_TypeInfo);
    byte_434FD10 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (UserPresentListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == UserPresentListViewItem_TypeInfo )
    return (UserPresentListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall UserPresentListViewManager__Init(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UserPresentListViewManager_c *v9; // x0
  struct ListViewSort_o **p_sortInfo; // x8
  struct ListViewSort_o *v11; // x1
  struct ListViewSort_o **p_sort; // x20
  ListViewSort_o *v13; // x0
  __int64 v14; // x1

  if ( (byte_434FD0E & 1) == 0 )
  {
    sub_B70694(&UserPresentListViewManager_TypeInfo);
    byte_434FD0E = 1;
  }
  v9 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v9 = UserPresentListViewManager_TypeInfo;
  }
  p_sortInfo = &v9->static_fields->sortInfo;
  v11 = *p_sortInfo;
  this->fields.sort = *p_sortInfo;
  p_sort = &this->fields.sort;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.sort, (System_Int32_array **)v11, v2, v3, v4, v5, v6, v7);
  if ( !this->fields.sort || (this->fields.sort->fields.listViewKind = 4, (v13 = *p_sort) == 0LL) )
    sub_B7076C(v13, v14);
  ListViewSort__Load(v13, 0LL);
  ((void (__fastcall *)(UserPresentListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
    this,
    this->klass->vtable._6_GetDragRoot.methodPtr);
}


void __fastcall UserPresentListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  UserPresentListViewManager_c *v2; // x0
  ListViewSort_o *sortInfo; // x0

  if ( (byte_434FD0B & 1) == 0 )
  {
    sub_B70694(&UserPresentListViewManager_TypeInfo);
    byte_434FD0B = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v2 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v2->static_fields->sortInfo;
  if ( !sortInfo )
    sub_B7076C(0LL, v1);
  ListViewSort__InitLoad(sortInfo, 0LL);
}


void __fastcall UserPresentListViewManager__OnClickListCheck(
        UserPresentListViewManager_o *this,
        UserPresentListViewObject_o *obj,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v4; // x19
  System_Int32_array **Item; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x22
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct UserPresentListViewItem_o *selectItem; // x8
  System_Int32_array **usrPresentEnt; // x1
  UserPresentListViewManager_o **p_selectPresentData; // x23
  UserPresentListViewManager_o **p_checkedIdList; // x21
  System_Collections_Generic_List_long__o *v23; // x24
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UserPresentListViewItem_o *v30; // x8
  UserPresentListViewManager_o *v31; // x26
  int dropObjectList; // w25
  int32_t v33; // w24
  struct ItemEntity_o *itemEnt; // x8
  int64_t endedAt; // x25
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x24
  BalanceConfig_c *v37; // x0
  int v38; // w24
  SoundManager_c *v39; // x0
  const MethodInfo *v40; // x1
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  int32_t v43; // w24
  BalanceConfig_c *v44; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  BalanceConfig_c *v46; // x0
  int32_t v47; // w22
  const MethodInfo *v48; // x3
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  ItemEntity_o *v50; // [xsp+0h] [xbp-50h] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_434FD17 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    this = (UserPresentListViewManager_o *)sub_B70694(&Method_UserPresentListViewManager_OnClickListCheck__);
    byte_434FD17 = 1;
  }
  v50 = 0LL;
  entity = 0LL;
  if ( !obj )
    goto LABEL_88;
  Item = (System_Int32_array **)UserPresentListViewObject__GetItem(obj, (const MethodInfo *)obj);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = (struct UserPresentListViewItem_o *)Item;
  sub_B70630((BattleServantConfConponent_o *)&v4->fields.selectItem, Item, v7, v8, v9, v10, v11, v12);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_88;
  usrPresentEnt = (System_Int32_array **)selectItem->fields.usrPresentEnt;
  p_selectPresentData = (UserPresentListViewManager_o **)&v4->fields.selectPresentData;
  v4->fields.selectPresentData = (struct UserPresentBoxEntity_o *)usrPresentEnt;
  sub_B70630((BattleServantConfConponent_o *)&v4->fields.selectPresentData, usrPresentEnt, v13, v14, v15, v16, v17, v18);
  p_checkedIdList = (UserPresentListViewManager_o **)&v4->fields.checkedIdList;
  if ( !v4->fields.checkedIdList )
  {
    v23 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v23,
      (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
    *p_checkedIdList = (UserPresentListViewManager_o *)v23;
    sub_B70630(
      (BattleServantConfConponent_o *)&v4->fields.checkedIdList,
      (System_Int32_array **)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = *p_selectItem;
  if ( !*p_selectItem )
    goto LABEL_88;
  if ( v30->fields.presentId < 1 )
    return;
  v31 = *p_checkedIdList;
  if ( !*p_checkedIdList )
    goto LABEL_88;
  dropObjectList = (int)v31->fields.dropObjectList;
  if ( dropObjectList >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( LODWORD(v31->fields.dropObjectList) <= v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( *(_QWORD *)(*(_QWORD *)&v31->fields.m_CachedPtr + 8LL * v33 + 32) == v30->fields.presentId )
        break;
      if ( ++v33 >= dropObjectList )
        goto LABEL_18;
      v31 = *p_checkedIdList;
      if ( !*p_checkedIdList )
        goto LABEL_88;
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this = *p_checkedIdList;
    if ( *p_checkedIdList )
    {
      System_Collections_Generic_List_long___RemoveAt(
        (System_Collections_Generic_List_long__o *)this,
        v33,
        (const MethodInfo_30BDE40 *)Method_System_Collections_Generic_List_long__RemoveAt__);
      UserPresentListViewManager__updateCheckStatus(v4, v40);
      return;
    }
LABEL_88:
    sub_B7076C(this, obj);
  }
LABEL_18:
  this = *p_selectPresentData;
  if ( !*p_selectPresentData )
    goto LABEL_88;
  this = (UserPresentListViewManager_o *)UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)this, 0, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_42;
  if ( !*p_selectPresentData )
    goto LABEL_88;
  if ( LODWORD((*p_selectPresentData)->fields.scrollView) == 2 )
  {
    if ( !*p_selectItem )
      goto LABEL_88;
    itemEnt = (*p_selectItem)->fields.itemEnt;
    if ( !itemEnt )
      goto LABEL_88;
    endedAt = itemEnt->fields.endedAt;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( endedAt > NetworkManager__getTime(0LL) )
    {
      this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_88;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (UserPresentListViewManager_o *)NetworkManager__get_UserId(0LL);
      if ( !*p_selectPresentData || !MasterData_WarQuestSelectionMaster )
        goto LABEL_88;
      this = (UserPresentListViewManager_o *)UserItemMaster__TryGetEntity(
                                               MasterData_WarQuestSelectionMaster,
                                               &entity,
                                               (int64_t)this,
                                               HIDWORD((*p_selectPresentData)->fields.scrollView),
                                               0LL);
      if ( entity )
      {
        if ( !*p_selectPresentData )
          goto LABEL_88;
        v37 = BalanceConfig_TypeInfo;
        v38 = LODWORD((*p_selectPresentData)->fields.scrollBar) + entity->fields.num;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v37 = BalanceConfig_TypeInfo;
        }
        if ( v38 > v37->static_fields->UserItemMax )
        {
          v39 = SoundManager_TypeInfo;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
            goto LABEL_86;
          goto LABEL_84;
        }
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (UserPresentListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !this )
          goto LABEL_88;
        this = (UserPresentListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                 (WarEntity_o **)&v50,
                                                 HIDWORD((*p_selectPresentData)->fields.scrollView),
                                                 (const MethodInfo_21C049C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (UserPresentListViewManager_o *)v50;
          if ( !v50 )
            goto LABEL_88;
          this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum(v50, 0LL);
          if ( (int)this >= 1 )
          {
            this = (UserPresentListViewManager_o *)v50;
            if ( !v50 )
              goto LABEL_88;
            this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum(v50, 0LL);
            if ( v38 > (int)this )
            {
              v41 = Method_UserPresentListViewManager_OnClickListCheck__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 75) & 2) != 0 )
                v41 = (_QWORD *)sub_B7069C(Method_UserPresentListViewManager_OnClickListCheck__);
              v42 = (System_Reflection_MethodBase_o *)sub_B70678(v41, v41[3]);
              OverwriteAssetSoundName__PlaySystemSe(v42, 1, 0LL);
              return;
            }
          }
        }
      }
      goto LABEL_61;
    }
LABEL_42:
    UserPresentListViewManager__DlgForExpiredPresent(v4, (const MethodInfo *)obj);
    return;
  }
LABEL_61:
  if ( !*p_checkedIdList )
    goto LABEL_88;
  v43 = (int32_t)(*p_checkedIdList)->fields.dropObjectList;
  v44 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
  }
  static_fields = v44->static_fields;
  v39 = SoundManager_TypeInfo;
  if ( v43 >= static_fields->PresentBoxCheckMax )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
    {
LABEL_86:
      SoundManager__playSystemSe(1, 0LL);
      return;
    }
LABEL_84:
    if ( !v39->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v39);
    goto LABEL_86;
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(0, 0LL);
  if ( !*p_selectItem )
    goto LABEL_88;
  this = *p_checkedIdList;
  if ( !*p_checkedIdList )
    goto LABEL_88;
  System_Collections_Generic_List_long___Add(
    (System_Collections_Generic_List_long__o *)this,
    (*p_selectItem)->fields.presentId,
    (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__);
  if ( !*p_checkedIdList )
    goto LABEL_88;
  v46 = BalanceConfig_TypeInfo;
  v47 = (int32_t)(*p_checkedIdList)->fields.dropObjectList;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v46 = BalanceConfig_TypeInfo;
  }
  if ( v47 < v46->static_fields->PresentBoxCheckMax )
  {
    this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(obj, (const MethodInfo *)obj);
    if ( !*p_checkedIdList )
      goto LABEL_88;
    if ( !this )
      goto LABEL_88;
    UserPresentListViewItem__setCheckBoxed(
      (UserPresentListViewItem_o *)this,
      1,
      (int32_t)(*p_checkedIdList)->fields.dropObjectList,
      v48);
    checkedIdList = v4->fields.checkedIdList;
    if ( !checkedIdList )
      goto LABEL_88;
    this = (UserPresentListViewManager_o *)v4->fields.m_parent;
    if ( !this )
      goto LABEL_88;
    UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)this, checkedIdList->fields._size, 0LL);
  }
  UserPresentListViewManager__updateCheckStatus(v4, (const MethodInfo *)obj);
  this = (UserPresentListViewManager_o *)v4->fields.m_parent;
  if ( !this )
    goto LABEL_88;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)this, 1, 1, 0LL);
}


void __fastcall UserPresentListViewManager__OnClickListView(
        UserPresentListViewManager_o *this,
        UserPresentListViewObject_o *obj,
        const MethodInfo *method)
{
  UserPresentListViewObject_o *v3; // x20
  UserPresentListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  System_Int32_array **Item; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UserPresentListViewItem_o *selectItem; // x8
  System_Int32_array **usrPresentEnt; // x1
  struct UserPresentBoxEntity_o **p_selectPresentData; // x21
  struct ItemEntity_o *itemEnt; // x8
  __int64 endedAt; // x23
  struct ItemEntity_o *v25; // x8
  const MethodInfo *v26; // x2
  struct ItemEntity_o *v27; // x8
  const MethodInfo *v28; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  BalanceConfig_c *v30; // x0
  int32_t v31; // w22
  const MethodInfo *v32; // x2
  UserPresentListViewManager___c_c *v33; // x0
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  UserPresentListViewManager_ReceiveCallbackFunc_o *_9__55_0; // x20
  Il2CppObject *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct UserPresentListViewManager___c_StaticFields *v43; // x0
  BattleServantConfConponent_o *p__9__55_0; // x0
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  UserPresentListViewManager___c_c *v47; // x0
  struct UserPresentListViewManager___c_StaticFields *v48; // x8
  Il2CppObject *v49; // x21
  struct UserPresentListViewManager___c_StaticFields *v50; // x0
  System_Collections_Generic_List_long__o *v51; // x21
  UserPresentListViewManager_o **p_presentIds; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct UserPresentListViewItem_o *v59; // x8
  const MethodInfo *v60; // x2
  WarEntity_o *v61; // [xsp+8h] [xbp-38h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_434FD16 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_UserPresentListViewManager___c__OnClickListView_b__55_0__);
    sub_B70694(&Method_UserPresentListViewManager___c__OnClickListView_b__55_1__);
    sub_B70694(&UserPresentListViewManager___c_TypeInfo);
    this = (UserPresentListViewManager_o *)sub_B70694(&Method_UserPresentListViewManager_OnClickListView__);
    byte_434FD16 = 1;
  }
  entity = 0LL;
  v61 = 0LL;
  if ( !v3 )
    goto LABEL_92;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_92;
  if ( *(&this->fields.execObjectExtraFlag + 2) )
    return;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_92;
  if ( BYTE4(this->fields.objectList) )
    return;
  checkedIdList = v4->fields.checkedIdList;
  if ( checkedIdList )
  {
    if ( checkedIdList->fields._size > 0 )
      return;
  }
  v4->fields.kind = 0;
  Item = (System_Int32_array **)UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = (struct UserPresentListViewItem_o *)Item;
  sub_B70630((BattleServantConfConponent_o *)&v4->fields.selectItem, Item, v8, v9, v10, v11, v12, v13);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_92;
  usrPresentEnt = (System_Int32_array **)selectItem->fields.usrPresentEnt;
  p_selectPresentData = &v4->fields.selectPresentData;
  v4->fields.selectPresentData = (struct UserPresentBoxEntity_o *)usrPresentEnt;
  sub_B70630((BattleServantConfConponent_o *)&v4->fields.selectPresentData, usrPresentEnt, v14, v15, v16, v17, v18, v19);
  this = (UserPresentListViewManager_o *)v4->fields.selectPresentData;
  if ( !this )
    goto LABEL_92;
  this = (UserPresentListViewManager_o *)UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)this, 0, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_31;
  if ( !*p_selectPresentData )
    goto LABEL_92;
  if ( (*p_selectPresentData)->fields.giftType == 2 )
  {
    if ( !*p_selectItem )
      goto LABEL_92;
    itemEnt = (*p_selectItem)->fields.itemEnt;
    if ( !itemEnt )
      goto LABEL_92;
    endedAt = itemEnt->fields.endedAt;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (UserPresentListViewManager_o *)NetworkManager__getTime(0LL);
    if ( endedAt > (__int64)this )
    {
      if ( !*p_selectItem )
        goto LABEL_92;
      v25 = (*p_selectItem)->fields.itemEnt;
      if ( !v25 )
        goto LABEL_92;
      if ( v25->fields.type == 24 )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        if ( *p_selectItem )
        {
          v27 = (*p_selectItem)->fields.itemEnt;
          if ( v27 )
          {
            UserPresentListViewManager__OpenSelectableDialog(v4, v27->fields.id, v26);
            return;
          }
        }
        goto LABEL_92;
      }
      this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_92;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (UserPresentListViewManager_o *)NetworkManager__get_UserId(0LL);
      if ( !*p_selectPresentData || !MasterData_WarQuestSelectionMaster )
        goto LABEL_92;
      this = (UserPresentListViewManager_o *)UserItemMaster__TryGetEntity(
                                               MasterData_WarQuestSelectionMaster,
                                               &entity,
                                               (int64_t)this,
                                               (*p_selectPresentData)->fields.objectId,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !*p_selectPresentData )
          goto LABEL_92;
        v30 = BalanceConfig_TypeInfo;
        v31 = (*p_selectPresentData)->fields.num + entity->fields.num;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v30 = BalanceConfig_TypeInfo;
        }
        if ( v31 > v30->static_fields->UserItemMax )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          v33 = UserPresentListViewManager___c_TypeInfo;
          if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
            v33 = UserPresentListViewManager___c_TypeInfo;
          }
          static_fields = v33->static_fields;
          _9__55_0 = static_fields->__9__55_0;
          if ( _9__55_0 )
            goto LABEL_60;
          if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v33);
            static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
          }
          v36 = (Il2CppObject *)static_fields->__9;
          _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B70764(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
          UserPresentListViewManager_ReceiveCallbackFunc___ctor(
            _9__55_0,
            v36,
            Method_UserPresentListViewManager___c__OnClickListView_b__55_0__,
            0LL);
          v43 = UserPresentListViewManager___c_TypeInfo->static_fields;
          v43->__9__55_0 = _9__55_0;
          p__9__55_0 = (BattleServantConfConponent_o *)&v43->__9__55_0;
LABEL_59:
          sub_B70630(p__9__55_0, (System_Int32_array **)_9__55_0, v37, v38, v39, v40, v41, v42);
LABEL_60:
          UserPresentListViewManager__showErrorResultDlg(v4, _9__55_0, v32);
          return;
        }
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (UserPresentListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !this )
          goto LABEL_92;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
               &v61,
               (*p_selectPresentData)->fields.objectId,
               (const MethodInfo_21C049C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          this = (UserPresentListViewManager_o *)v61;
          if ( !v61 )
            goto LABEL_92;
          if ( ItemEntity__GetMaxNum((ItemEntity_o *)v61, 0LL) >= 1 )
          {
            this = (UserPresentListViewManager_o *)v61;
            if ( !v61 )
              goto LABEL_92;
            if ( v31 > ItemEntity__GetMaxNum((ItemEntity_o *)v61, 0LL) )
            {
              v45 = Method_UserPresentListViewManager_OnClickListView__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 75) & 2) != 0 )
                v45 = (_QWORD *)sub_B7069C(Method_UserPresentListViewManager_OnClickListView__);
              v46 = (System_Reflection_MethodBase_o *)sub_B70678(v45, v45[3]);
              OverwriteAssetSoundName__PlaySystemSe(v46, 0, 0LL);
              v47 = UserPresentListViewManager___c_TypeInfo;
              if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
                v47 = UserPresentListViewManager___c_TypeInfo;
              }
              v48 = v47->static_fields;
              _9__55_0 = v48->__9__55_1;
              if ( _9__55_0 )
                goto LABEL_60;
              if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v47);
                v48 = UserPresentListViewManager___c_TypeInfo->static_fields;
              }
              v49 = (Il2CppObject *)v48->__9;
              _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B70764(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
              UserPresentListViewManager_ReceiveCallbackFunc___ctor(
                _9__55_0,
                v49,
                Method_UserPresentListViewManager___c__OnClickListView_b__55_1__,
                0LL);
              v50 = UserPresentListViewManager___c_TypeInfo->static_fields;
              v50->__9__55_1 = _9__55_0;
              p__9__55_0 = (BattleServantConfConponent_o *)&v50->__9__55_1;
              goto LABEL_59;
            }
          }
        }
      }
      goto LABEL_81;
    }
LABEL_31:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    UserPresentListViewManager__DlgForExpiredPresent(v4, v28);
    return;
  }
LABEL_81:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  if ( !*p_selectItem )
    goto LABEL_92;
  v4->fields._select_idx_k__BackingField = (*p_selectItem)->fields.index;
  v51 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v51,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = (UserPresentListViewManager_o **)&v4->fields.presentIds;
  v4->fields.presentIds = v51;
  sub_B70630(
    (BattleServantConfConponent_o *)&v4->fields.presentIds,
    (System_Int32_array **)v51,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = v4->fields.selectItem;
  if ( !v59 )
    goto LABEL_92;
  obj = (UserPresentListViewObject_o *)v59->fields.presentId;
  if ( (__int64)obj >= 1 )
  {
    this = *p_presentIds;
    if ( !*p_presentIds )
      goto LABEL_92;
    System_Collections_Generic_List_long___Add(
      (System_Collections_Generic_List_long__o *)this,
      (int64_t)obj,
      (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__);
  }
  this = *p_presentIds;
  if ( !*p_presentIds
    || (this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                 (System_Collections_Generic_List_long__o *)this,
                                                 (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__),
        !v4->fields.m_parent) )
  {
LABEL_92:
    sub_B7076C(this, obj);
  }
  UserPresentBoxWindow__receivePresent(v4->fields.m_parent, (System_Int64_array *)this, 0, 0, 0LL);
  UserPresentListViewManager__SetMode_21524996(v4, 2, v60);
}


void __fastcall UserPresentListViewManager__OnClickSortAscendingOrder(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_434FD1F & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FD1F = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B7076C(v3, v4);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_434FD15 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FD15 = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B7076C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
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
  System_Action_ShopRootConstants_State__o *v7; // x21

  if ( (byte_434FD1D & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_SceneList_Type___ctor__);
    sub_B70694(&System_Action_SceneList_Type__TypeInfo);
    sub_B70694(&Method_UserPresentListViewManager_EndNoticeDlg__);
    byte_434FD1D = 1;
  }
  dialog = this->fields.dialog;
  if ( !dialog
    || (UserPresentBoxErrorDialog__Open(dialog, msg, 0LL),
        v6 = this->fields.dialog,
        v7 = (System_Action_ShopRootConstants_State__o *)sub_B70764(System_Action_SceneList_Type__TypeInfo),
        System_Action_ShopRootConstants_State____ctor(
          v7,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager_EndNoticeDlg__,
          (const MethodInfo_264AE8C *)Method_System_Action_SceneList_Type___ctor__),
        !v6) )
  {
    sub_B7076C(dialog, msg);
  }
  UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v6, (System_Action_SceneList_Type__o *)v7, 0LL);
}


void __fastcall UserPresentListViewManager__OpenSelectableDialog(
        UserPresentListViewManager_o *this,
        int32_t ticketId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *presentTicketList; // x0
  __int64 v7; // x1
  struct UserPresentBoxWindow_o *m_parent; // x8
  System_Collections_Generic_IEnumerable_T__o *itemList; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v10; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v24; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v25; // x21
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__67_1; // x22
  Il2CppObject *v28; // x23
  struct UserPresentListViewManager___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_434FD21 & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_ListViewItem___ctor__);
    sub_B70694(&System_Comparison_ListViewItem__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem___ctor___69165824);
    sub_B70694(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_B70694(&Method_System_Predicate_ListViewItem___ctor__);
    sub_B70694(&System_Predicate_ListViewItem__TypeInfo);
    sub_B70694(&Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__);
    sub_B70694(&Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__);
    sub_B70694(&UserPresentListViewManager___c__DisplayClass67_0_TypeInfo);
    sub_B70694(&UserPresentListViewManager___c_TypeInfo);
    byte_434FD21 = 1;
  }
  v5 = sub_B70764(UserPresentListViewManager___c__DisplayClass67_0_TypeInfo);
  UserPresentListViewManager___c__DisplayClass67_0___ctor((UserPresentListViewManager___c__DisplayClass67_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_19;
  *(_DWORD *)(v5 + 16) = ticketId;
  presentTicketList = this->fields.presentTicketList;
  if ( presentTicketList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)presentTicketList,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_ListViewItem__Clear__);
  m_parent = this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_19;
  m_parent->fields.mIsScrlResetPosition = 1;
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v10 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v10,
    itemList,
    (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_ListViewItem___ctor___69165824);
  this->fields.presentTicketList = (struct System_Collections_Generic_List_ListViewItem__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.presentTicketList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  *(_DWORD *)(v5 + 20) = 0;
  *(_QWORD *)(v5 + 24) = 0LL;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), 0LL, v17, v18, v19, v20, v21, v22);
  v23 = this->fields.presentTicketList;
  v24 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v24,
    (Il2CppObject *)v5,
    Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_ListViewItem___ctor__);
  if ( !v23 )
    goto LABEL_19;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v23,
    (System_Predicate_T__o *)v24,
    (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  v25 = this->fields.presentTicketList;
  presentTicketList = UserPresentListViewManager___c_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    presentTicketList = UserPresentListViewManager___c_TypeInfo;
  }
  static_fields = (struct UserPresentListViewManager___c_StaticFields *)*((_QWORD *)presentTicketList + 23);
  _9__67_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( (*((_BYTE *)presentTicketList + 307) & 4) != 0 && !*((_DWORD *)presentTicketList + 56) )
    {
      j_il2cpp_runtime_class_init_0(presentTicketList);
      static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__67_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__67_1,
      v28,
      Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_ListViewItem___ctor__);
    v29 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v29->__9__67_1 = (struct System_Comparison_ListViewItem__o *)_9__67_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v29->__9__67_1,
      (System_Int32_array **)_9__67_1,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !v25
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v25,
          (System_Comparison_T__o *)_9__67_1,
          (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_ListViewItem__Sort__),
        (presentTicketList = this->fields.selectDialog) == 0LL) )
  {
LABEL_19:
    sub_B7076C(presentTicketList, v7);
  }
  PresentSelectableDlgComponent__Open(
    (PresentSelectableDlgComponent_o *)presentTicketList,
    *(ItemEntity_o **)(v5 + 24),
    *(_DWORD *)(v5 + 20),
    0LL);
}


void __fastcall UserPresentListViewManager__ReceiveMultiPresent(
        UserPresentListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x21
  System_Collections_Generic_List_long__o **p_presentIds; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v16; // x0
  const MethodInfo_3025688 **v17; // x26
  _BOOL8 v18; // x0
  UserPresentListViewItem_c *v19; // x1
  UserPresentListViewItem_o *current; // x23
  __int64 v21; // x9
  System_Collections_Generic_List_long__o *checkedIdList; // x0
  UserPresentBoxEntity_o *usrPresentEnt; // x0
  _BOOL8 IsExpired; // x0
  const MethodInfo *v25; // x1
  struct UserPresentBoxEntity_o *v26; // x9
  struct ItemEntity_o *itemEnt; // x9
  const MethodInfo_3025688 **v28; // x20
  int64_t endedAt; // x26
  bool v30; // cc
  System_String_o *NameText; // x0
  const MethodInfo *v32; // x1
  System_String_o *v33; // x0
  System_String_o **p_expiredPresents_k__BackingField; // x22
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_434FD1A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_long__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UserPresentListViewItem_TypeInfo);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_434FD1A = 1;
  }
  memset(&v50, 0, sizeof(v50));
  this->fields.kind = kind;
  v5 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = &this->fields.presentIds;
  this->fields.presentIds = v5;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.presentIds,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  v15 = 184LL;
  if ( kind == 1 )
    v15 = 424LL;
  v16 = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)((char *)&this->klass + v15);
  if ( !v16 )
    goto LABEL_53;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v49,
    v16,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v17 = (const MethodInfo_3025688 **)&Method_System_Collections_Generic_List_string__Add__;
  v50 = v49;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v50,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v18 )
      break;
    current = (UserPresentListViewItem_o *)v50.fields.current;
    if ( v50.fields.current )
    {
      v19 = UserPresentListViewItem_TypeInfo;
      v21 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v50.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v21
        || (UserPresentListViewItem_c *)v50.fields.current->klass->_2.typeHierarchy[v21 - 1] != UserPresentListViewItem_TypeInfo )
      {
        usrPresentEnt = (UserPresentBoxEntity_o *)sub_B70A60(v50.fields.current);
LABEL_47:
        sub_B7076C(usrPresentEnt, v19);
      }
    }
    switch ( kind )
    {
      case 1:
        if ( !v50.fields.current )
          sub_B7076C(v18, v19);
        goto LABEL_19;
      case 2:
        if ( !v50.fields.current )
          sub_B7076C(v18, v19);
        if ( !Gift__IsServant_27751796((int32_t)v50.fields.current[10].monitor, 0LL)
          && !Gift__IsCommandCode_27752192(current->fields.giftType, 0LL) )
        {
          goto LABEL_19;
        }
        break;
      case 3:
        if ( !v50.fields.current )
          sub_B7076C(v18, v19);
        checkedIdList = this->fields.checkedIdList;
        if ( !checkedIdList )
          sub_B7076C(0LL, v19);
        if ( System_Collections_Generic_List_long___Contains(
               checkedIdList,
               (int64_t)v50.fields.current[10].klass,
               (const MethodInfo_30BC5DC *)Method_System_Collections_Generic_List_long__Contains__) )
        {
LABEL_19:
          usrPresentEnt = current->fields.usrPresentEnt;
          if ( !usrPresentEnt )
            goto LABEL_47;
          IsExpired = UserPresentBoxEntity__IsExpired(usrPresentEnt, 0, 0LL);
          v26 = current->fields.usrPresentEnt;
          if ( !v26 )
            sub_B7076C(IsExpired, v25);
          if ( v26->fields.giftType == 2 )
          {
            itemEnt = current->fields.itemEnt;
            if ( !itemEnt )
              sub_B7076C(IsExpired, v25);
            if ( itemEnt->fields.type != 24 )
            {
              if ( IsExpired )
                goto LABEL_30;
              v28 = v17;
              endedAt = itemEnt->fields.endedAt;
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              v30 = endedAt <= NetworkManager__getTime(0LL);
              v17 = v28;
              p_presentIds = &this->fields.presentIds;
              if ( v30 )
                goto LABEL_30;
LABEL_38:
              if ( !*p_presentIds )
                sub_B7076C(0LL, v25);
              System_Collections_Generic_List_long___Add(
                *p_presentIds,
                current->fields.presentId,
                (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__);
            }
          }
          else
          {
            if ( !IsExpired )
              goto LABEL_38;
LABEL_30:
            NameText = UserPresentListViewItem__get_NameText(current, v25);
            if ( !v13 )
              sub_B7076C(NameText, NameText);
            if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v13,
                    (WarBoardManager_TaskList_o *)NameText,
                    (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
            {
              v33 = UserPresentListViewItem__get_NameText(current, v32);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v13,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
                *v17);
            }
          }
        }
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v50,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  p_expiredPresents_k__BackingField = &this->fields._expiredPresents_k__BackingField;
  v35 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._expiredPresents_k__BackingField,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( !v13 )
    goto LABEL_53;
  while ( v13->fields._size >= 1 )
  {
    v42 = (System_Int32_array **)System_String__Concat_44761580(
                                   *p_expiredPresents_k__BackingField,
                                   (System_String_o *)StringLiteral_15855/*"["*/,
                                   (System_String_o *)v13->fields._items->m_Items[0],
                                   (System_String_o *)StringLiteral_16092/*"]"*/,
                                   0LL);
    *p_expiredPresents_k__BackingField = (System_String_o *)v42;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields._expiredPresents_k__BackingField,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v13,
      0,
      (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_string__RemoveAt__);
  }
  v16 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*p_presentIds;
  if ( !*p_presentIds
    || (v16 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_long___ToArray(
                                                                                               (System_Collections_Generic_List_long__o *)v16,
                                                                                               (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.m_parent) )
  {
LABEL_53:
    sub_B7076C(v16, v14);
  }
  UserPresentBoxWindow__receivePresent(this->fields.m_parent, (System_Int64_array *)v16, 0, 0, 0LL);
}


void __fastcall UserPresentListViewManager__RequestItemSelect(
        UserPresentListViewManager_o *this,
        ItemSelectEntity_o *selectItm,
        int32_t num,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t sortValue0; // x0
  UserPresentListViewItem_c *v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *presentTicketList; // x19
  signed __int64 size; // x24
  int v12; // w25
  int v13; // w26
  unsigned __int64 v14; // x27
  ListViewItem_o *v15; // x19
  __int64 v16; // x10
  _QWORD *monitor; // x8
  int64_t v18; // x23
  int64_t v19; // x8
  int64_t sortValue1; // x1
  int v21; // w19
  UserPresentBoxWindow_o *m_parent; // x23
  const MethodInfo *v23; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v24; // x19
  __int64 v25; // x9
  __int64 v26; // x8
  struct System_String_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UserPresentBoxWindow_o *v34; // x20
  UserPresentListViewManager_o *v35; // x0
  const MethodInfo *v36; // x1
  int32_t selectNum; // [xsp+4h] [xbp-5Ch]

  if ( (byte_434FD22 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UserPresentListViewItem_TypeInfo);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_434FD22 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  presentTicketList = this->fields.presentTicketList;
  if ( !presentTicketList || !selectItm )
    goto LABEL_25;
  size = presentTicketList->fields._size;
  selectNum = num;
  if ( (int)size < 1 || (v12 = selectItm->fields.requireNum * num, v12 < 1) )
  {
    if ( v7 )
    {
LABEL_27:
      m_parent = this->fields.m_parent;
      sortValue0 = (int64_t)System_Collections_Generic_List_long___ToArray(
                              v7,
                              (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( m_parent )
      {
        UserPresentBoxWindow__receivePresent(
          m_parent,
          (System_Int64_array *)sortValue0,
          selectItm->fields.idx,
          selectNum,
          0LL);
        UserPresentListViewManager__SetMode_21524996(this, 2, v23);
        return;
      }
    }
    goto LABEL_25;
  }
  v13 = 0;
  v14 = 0LL;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)presentTicketList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v15 = presentTicketList->fields._items->m_Items[v14];
    if ( !v15 )
      goto LABEL_25;
    v16 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v16 )
      goto LABEL_25;
    if ( (UserPresentListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] != UserPresentListViewItem_TypeInfo )
      goto LABEL_25;
    sortValue0 = v15[1].fields.sortValue0;
    if ( !sortValue0 )
      goto LABEL_25;
    sortValue0 = UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)sortValue0, 0, 0LL);
    if ( (sortValue0 & 1) != 0 )
      break;
    monitor = v15[1].monitor;
    if ( !monitor )
      goto LABEL_25;
    v18 = monitor[12];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    sortValue0 = NetworkManager__getTime(0LL);
    if ( v18 <= sortValue0 )
      break;
    v19 = v15[1].fields.sortValue0;
    if ( !v19 || !v7 )
      goto LABEL_25;
    sortValue1 = v15[1].fields.sortValue1;
    v21 = *(_DWORD *)(v19 + 80);
    System_Collections_Generic_List_long___Add(
      v7,
      sortValue1,
      (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__);
    if ( (__int64)++v14 >= size )
      goto LABEL_27;
    v13 += v21;
    if ( v13 >= v12 )
      goto LABEL_27;
    presentTicketList = this->fields.presentTicketList;
    if ( !presentTicketList )
      goto LABEL_25;
  }
  v24 = this->fields.presentTicketList;
  if ( !v24 )
    goto LABEL_25;
  if ( !v24->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  sortValue0 = (int64_t)v24->fields._items->m_Items[0];
  if ( !sortValue0 )
    goto LABEL_25;
  v9 = UserPresentListViewItem_TypeInfo;
  v25 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)sortValue0 + 300LL) >= (unsigned int)v25
    && *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sortValue0 + 200LL) + 8 * v25 - 8) == UserPresentListViewItem_TypeInfo )
  {
    v26 = *(_QWORD *)(sortValue0 + 120);
    if ( v26 )
    {
      v27 = System_String__Concat_44760452(
              (System_String_o *)StringLiteral_15855/*"["*/,
              *(System_String_o **)(v26 + 24),
              (System_String_o *)StringLiteral_16092/*"]"*/,
              0LL);
      this->fields._expiredPresents_k__BackingField = v27;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields._expiredPresents_k__BackingField,
        (System_Int32_array **)v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      if ( v7 )
      {
        v34 = this->fields.m_parent;
        sortValue0 = (int64_t)System_Collections_Generic_List_long___ToArray(
                                v7,
                                (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v34 )
        {
          UserPresentBoxWindow__receivePresent(v34, (System_Int64_array *)sortValue0, selectItm->fields.idx, 0, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B7076C(sortValue0, v9);
  }
  v35 = (UserPresentListViewManager_o *)sub_B70A60(sortValue0);
  UserPresentListViewManager___ctor(v35, v36);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestListObject(
        UserPresentListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_434FD13 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__);
    sub_B70694(&Method_UserPresentListViewManager_OnMoveEnd__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_434FD13 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserPresentListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7076C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7076C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserPresentListViewObject__Init(
        (UserPresentListViewObject_o *)current,
        mode,
        v11,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestListObject_21525216(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_434FD14 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__);
    sub_B70694(&Method_UserPresentListViewManager_OnMoveEnd__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_434FD14 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserPresentListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7076C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7076C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserPresentListViewObject__Init(
        (UserPresentListViewObject_o *)current,
        mode,
        v9,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


void __fastcall UserPresentListViewManager__SetMode(
        UserPresentListViewManager_o *this,
        int32_t mode,
        UserPresentListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_21524996(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__SetMode_21524996(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_434FD12 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_434FD12 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_B7076C(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0LL);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    UserPresentListViewManager__RequestListObject_21525216(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 4;
    goto LABEL_8;
  }
}


void __fastcall UserPresentListViewManager__SetMode_21525160(
        UserPresentListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_21524996(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__SetObjectItem(
        UserPresentListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_434FD11 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_B70694(&UserPresentListViewObject_TypeInfo);
    byte_434FD11 = 1;
  }
  if ( !obj
    || (v6 = *(&UserPresentListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (UserPresentListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != UserPresentListViewObject_TypeInfo )
  {
    sub_B7076C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 1 )
    v13 = 3;
  else
    v13 = 2;
  UserPresentListViewObject__Init((UserPresentListViewObject_o *)obj, v13, 0LL, v9, *(UnityEngine_Vector3_o *)&v10, v8);
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

  if ( (byte_434FD20 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_17277/*"btn_sort_up"*/);
    sub_B70694(&StringLiteral_17317/*"btn_txt_new"*/);
    sub_B70694(&StringLiteral_17324/*"btn_txt_old"*/);
    sub_B70694(&StringLiteral_17274/*"btn_sort_down"*/);
    byte_434FD20 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_26;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v6 )
      goto LABEL_26;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( v8 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v9 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17324/*"btn_txt_old"*/ : &StringLiteral_17317/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v9, 0LL);
        v10 = this->fields.sort;
        if ( v10 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            if ( v10->fields.isAscendingOrder )
              v11 = (System_String_o **)&StringLiteral_17274/*"btn_sort_down"*/;
            else
              v11 = (System_String_o **)&StringLiteral_17277/*"btn_sort_up"*/;
            UISprite__set_spriteName((UISprite_o *)sort, *v11, 0LL);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_B7076C(sort, v4);
  }
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_0(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  System_Action_o *v6; // x21

  if ( (byte_434FD25 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__);
    byte_434FD25 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL),
        v5 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__,
          0LL),
        !v5) )
  {
    sub_B7076C(Instance, v4);
  }
  CommonUI__maskFadeout(v5, 1, 0.5, v6, 0LL);
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_1(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UserPresentBoxWindow_o *m_parent; // x0

  if ( (byte_434FD26 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434FD26 = 1;
  }
  UserPresentListViewManager__DestroyList(this, method);
  m_parent = this->fields.m_parent;
  if ( !m_parent
    || (UserPresentBoxWindow__SetReDispFromExpiredPresent(m_parent, 0LL),
        (m_parent = (UserPresentBoxWindow_o *)this->fields.scrollView) == 0LL)
    || (UIScrollView__ResetPosition((UIScrollView_o *)m_parent, 0LL),
        (m_parent = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B7076C(m_parent, v3);
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

  if ( (byte_434FD04 & 1) == 0 )
  {
    sub_B70694(&UserPresentListViewManager_CallbackFunc_TypeInfo);
    byte_434FD04 = 1;
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
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B70A60(v7);
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

  if ( (byte_434FD06 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_434FD06 = 1;
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
    v8 = sub_B650AC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B70A60(v7);
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

  if ( (byte_434FD08 & 1) == 0 )
  {
    sub_B70694(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    byte_434FD08 = 1;
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
    v8 = sub_B650AC(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B70A60(v7);
  UserPresentListViewManager__remove_receivecCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_UserPresentListViewObject__o *__fastcall UserPresentListViewManager__get_ClippingObjectList(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UserPresentListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_434FD0D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FD0D = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (UserPresentListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)current,
                                                                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7076C(0LL, v10);
      Item = (ListViewItem_o *)UserPresentListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B7076C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23985548((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7076C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7076C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v3;
}


System_Collections_Generic_List_UserPresentListViewObject__o *__fastcall UserPresentListViewManager__get_ObjectList(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_434FD0C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FD0C = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      if ( !v3 )
        sub_B7076C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v3;
}


ListViewSort_o *__fastcall UserPresentListViewManager__get_SortInfo(const MethodInfo *method)
{
  UserPresentListViewManager_c *v1; // x0

  if ( (byte_434FD03 & 1) == 0 )
  {
    sub_B70694(&UserPresentListViewManager_TypeInfo);
    byte_434FD03 = 1;
  }
  v1 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_434FD05 & 1) == 0 )
  {
    sub_B70694(&UserPresentListViewManager_CallbackFunc_TypeInfo);
    byte_434FD05 = 1;
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
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B70A60(v7);
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

  if ( (byte_434FD07 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_434FD07 = 1;
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
    v8 = sub_B650AC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B70A60(v7);
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

  if ( (byte_434FD09 & 1) == 0 )
  {
    sub_B70694(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    byte_434FD09 = 1;
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
    v8 = sub_B650AC(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B70A60(v7);
  UserPresentListViewManager__get_select_idx(v10, v11);
}


void __fastcall UserPresentListViewManager__resetCheckStatus(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *checkedIdList; // x0

  if ( (byte_434FD19 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_long__Clear__);
    byte_434FD19 = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList )
    System_Collections_Generic_List_long___Clear(
      checkedIdList,
      (const MethodInfo_30BC594 *)Method_System_Collections_Generic_List_long__Clear__);
}


void __fastcall UserPresentListViewManager__setJumpType(
        UserPresentListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *dialog; // x0

  dialog = this->fields.dialog;
  if ( !dialog )
    sub_B7076C(0LL, type);
  UserPresentBoxErrorDialog__setJumpType(dialog, type, 0LL);
}


void __fastcall UserPresentListViewManager__set_expiredPresents(
        UserPresentListViewManager_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._expiredPresents_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._expiredPresents_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2
  int32_t kind; // w8
  System_String_o *v12; // x1
  __int64 *v13; // x8

  if ( (byte_434FD1C & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_11224/*"REJECT_NORMAL_TXT"*/);
    sub_B70694(&StringLiteral_11220/*"REJECT_ALL_TXT"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434FD1C = 1;
  }
  this->fields.receivecCallbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.receivecCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  kind = this->fields.kind;
  if ( !kind )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = &StringLiteral_11224/*"REJECT_NORMAL_TXT"*/;
    goto LABEL_14;
  }
  if ( (unsigned int)(kind - 1) <= 2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = &StringLiteral_11220/*"REJECT_ALL_TXT"*/;
LABEL_14:
    v12 = LocalizationManager__Get((System_String_o *)*v13, 0LL);
    goto LABEL_15;
  }
  v12 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_15:
  UserPresentListViewManager__OpenNoticeDlg(this, v12, v10);
}


void __fastcall UserPresentListViewManager__updateCheckStatus(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *checkedIdList; // x21
  char v4; // w22
  UserPresentBoxWindow_o *m_parent; // x0
  int32_t size; // w25
  BalanceConfig_c *v7; // x0
  int32_t PresentBoxCheckMax; // w26
  System_Collections_Generic_List_long__o *v9; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  __int64 v11; // x24
  char v12; // w27
  int v13; // w8
  UserPresentListViewItem_o *v14; // x21
  __int64 v15; // x9
  int64_t presentId; // x22
  const MethodInfo *v17; // x3
  int32_t v18; // w0
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  struct ItemEntity_o *itemEnt; // x8
  struct System_Collections_Generic_List_long__o *v23; // x8
  UserPresentListViewManager_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_434FD18 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_long__IndexOf__);
    sub_B70694(&Method_System_Collections_Generic_List_long__Remove__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor___69165120);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&UserPresentListViewItem_TypeInfo);
    byte_434FD18 = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList && checkedIdList->fields._size )
  {
    v4 = 0;
  }
  else
  {
    m_parent = this->fields.m_parent;
    if ( !m_parent )
      goto LABEL_35;
    v4 = 1;
    UserPresentBoxWindow__SetCheckedItemsButtonEnable(m_parent, 0, 1, 0LL);
    checkedIdList = this->fields.checkedIdList;
    if ( !checkedIdList )
      goto LABEL_35;
  }
  size = checkedIdList->fields._size;
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
    checkedIdList = this->fields.checkedIdList;
  }
  PresentBoxCheckMax = v7->static_fields->PresentBoxCheckMax;
  v9 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_51099172(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)checkedIdList,
    (const MethodInfo_30BB624 *)Method_System_Collections_Generic_List_long___ctor___69165120);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_35:
    sub_B7076C(m_parent, method);
  v11 = 0LL;
  v12 = (size >= PresentBoxCheckMax) | v4;
  while ( 1 )
  {
    v13 = itemList->fields._size;
    if ( (int)v11 >= v13 )
    {
      v23 = this->fields.checkedIdList;
      if ( v23 )
      {
        m_parent = this->fields.m_parent;
        if ( m_parent )
        {
          UserPresentBoxWindow__SetSelectCount(m_parent, v23->fields._size, 0LL);
          return;
        }
      }
      goto LABEL_35;
    }
    if ( v13 <= (unsigned int)v11 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v14 = (UserPresentListViewItem_o *)itemList->fields._items->m_Items[v11];
    if ( !v14 )
      goto LABEL_35;
    method = (const MethodInfo *)UserPresentListViewItem_TypeInfo;
    v15 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v14->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (UserPresentListViewItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] != UserPresentListViewItem_TypeInfo )
    {
      break;
    }
    if ( !v9 )
      goto LABEL_35;
    presentId = v14->fields.presentId;
    if ( System_Collections_Generic_List_long___Remove(
           v9,
           presentId,
           (const MethodInfo_30BDB04 *)Method_System_Collections_Generic_List_long__Remove__) )
    {
      m_parent = (UserPresentBoxWindow_o *)this->fields.checkedIdList;
      if ( !m_parent )
        goto LABEL_35;
      v18 = System_Collections_Generic_List_long___IndexOf(
              (System_Collections_Generic_List_long__o *)m_parent,
              presentId,
              (const MethodInfo_30BD200 *)Method_System_Collections_Generic_List_long__IndexOf__);
      UserPresentListViewItem__setCheckBoxed(v14, 1, v18 + 1, v19);
    }
    else
    {
      UserPresentListViewItem__setCheckBoxed(v14, 0, -1, v17);
      method = (const MethodInfo *)(size >= PresentBoxCheckMax);
      if ( (v12 & 1) == 0 )
      {
        usrPresentEnt = v14->fields.usrPresentEnt;
        if ( usrPresentEnt && usrPresentEnt->fields.giftType == 2 )
        {
          itemEnt = v14->fields.itemEnt;
          if ( !itemEnt )
            goto LABEL_35;
          LOBYTE(method) = itemEnt->fields.type == 24;
        }
        else
        {
          LOBYTE(method) = 0;
        }
      }
      UserPresentListViewItem__setBlocked(v14, (bool)method, v20);
    }
    itemList = this->fields.itemList;
    ++v11;
    if ( !itemList )
      goto LABEL_35;
  }
  v24 = (UserPresentListViewManager_o *)sub_B70A60(v14);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
}


System_IAsyncResult_o *__fastcall UserPresentListViewManager_CallbackFunc__BeginInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)result;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B70638(this, v6, callback, object);
}


void __fastcall UserPresentListViewManager_CallbackFunc__EndInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


void __fastcall UserPresentListViewManager_CallbackFunc__Invoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  UserPresentListViewManager_CallbackFunc_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  System_String_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(System_String_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, System_String_o *, _QWORD); // x0
  UserPresentListViewManager_CallbackFunc_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(System_String_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  System_String_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  UserPresentListViewManager_CallbackFunc_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (UserPresentListViewManager_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(System_String_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v27->fields.extra_arg, result);
      v31 = sub_B706C4(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B706BC(v28);
            v41 = sub_B70AC0(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = result->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_B08590(result, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B70744(v15, v28);
              (*v24)(result, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = result->klass;
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_B08590(result, class_0, v9);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v14)(result, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&result->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  result,
                  *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(result, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B706BC(v28);
          v34 = sub_B70AC0(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_B08590(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B70744(v22, v28);
            (*v26)(v29, result, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_B08590(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v21)(v29, result, *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v29
                                                                           + 16LL * *(unsigned __int16 *)(v28 + 72)
                                                                           + 312))(
                v29,
                result,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v30)(v29, result, v28);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager_ReceiveCallbackFunc___ctor(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
}


System_IAsyncResult_o *__fastcall UserPresentListViewManager_ReceiveCallbackFunc__BeginInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        bool isReceive,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isReceive;
  if ( (byte_434F331 & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    byte_434F331 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall UserPresentListViewManager_ReceiveCallbackFunc__EndInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager_ReceiveCallbackFunc__Invoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        bool isReceive,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  UserPresentListViewManager_ReceiveCallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  UserPresentListViewManager_ReceiveCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (UserPresentListViewManager_ReceiveCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, isReceive);
      if ( (sub_B706C4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isReceive, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B08590(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B70744(v15, v20);
        (*v17)(v19, isReceive, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B08590(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isReceive, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isReceive,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isReceive, v20);
    goto LABEL_37;
  }
}


void __fastcall UserPresentListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_434F32B & 1) == 0 )
  {
    sub_B70694(&UserPresentListViewManager___c_TypeInfo);
    byte_434F32B = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(UserPresentListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserPresentListViewManager___c_o *)v1;
  sub_B70630(static_fields);
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
  __int64 v6; // x9
  __int64 v7; // x9
  void *monitor; // x20
  UserPresentListViewManager___c_o *v10; // x0
  ListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_434F32C & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_B70694(&UserPresentListViewItem_TypeInfo);
    byte_434F32C = 1;
  }
  if ( !a )
    goto LABEL_12;
  v6 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&a->klass->_2.bitflags2 + 1) >= (unsigned int)v6
    && (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[v6 - 1] == UserPresentListViewItem_TypeInfo )
  {
    this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_UserPresentEntity(
                                                 (UserPresentListViewItem_o *)a,
                                                 0LL);
    if ( !this || !b )
      goto LABEL_12;
    v7 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&b->klass->_2.bitflags2 + 1) >= (unsigned int)v7
      && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v7 - 1] == UserPresentListViewItem_TypeInfo )
    {
      monitor = this[5].monitor;
      this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_UserPresentEntity(
                                                   (UserPresentListViewItem_o *)b,
                                                   0LL);
      if ( this )
        return (_DWORD)monitor - LODWORD(this[5].monitor);
LABEL_12:
      sub_B7076C(this, a);
    }
  }
  else
  {
    sub_B70A60(a);
  }
  v10 = (UserPresentListViewManager___c_o *)sub_B70A60(b);
  return UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(v10, v11, v12);
}


bool __fastcall UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x9

  if ( (byte_434F32D & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_B70694(&UserPresentListViewItem_TypeInfo);
    byte_434F32D = 1;
  }
  if ( !obj )
    goto LABEL_16;
  v4 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v4
    || (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[v4 - 1] != UserPresentListViewItem_TypeInfo
    || (v5 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[v5 - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_15:
    this = (UserPresentListViewManager___c_o *)sub_B70A60(obj);
    goto LABEL_16;
  }
  this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_UserPresentEntity(
                                               (UserPresentListViewItem_o *)obj,
                                               0LL);
  if ( !this )
    goto LABEL_16;
  if ( LODWORD(this[4].monitor) == 2 )
  {
    v6 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[v6 - 1] == UserPresentListViewItem_TypeInfo )
    {
      this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_ItemEntity(
                                                   (UserPresentListViewItem_o *)obj,
                                                   0LL);
      if ( this )
        return LODWORD(this[3].klass) == 24;
LABEL_16:
      sub_B7076C(this, obj);
    }
    goto LABEL_15;
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
  __int64 v6; // x9
  __int64 v7; // x9
  __int64 v8; // x9
  __int64 v9; // x9
  System_String_o *v10; // x21
  int32_t result; // w0
  __int64 v12; // x9
  __int64 v13; // x9

  v5 = a;
  if ( (byte_434F32E & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_B70694(&UserPresentListViewItem_TypeInfo);
    byte_434F32E = 1;
  }
  if ( !v5 )
LABEL_23:
    sub_B7076C(this, a);
  v6 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v5->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    goto LABEL_21;
  if ( (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[v6 - 1] != UserPresentListViewItem_TypeInfo )
    goto LABEL_21;
  v7 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v5->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[v7 - 1] != UserPresentListViewItem_TypeInfo )
  {
    goto LABEL_21;
  }
  this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_NameText((UserPresentListViewItem_o *)v5, 0LL);
  if ( !b )
    goto LABEL_23;
  v8 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&b->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    goto LABEL_22;
  if ( (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v8 - 1] != UserPresentListViewItem_TypeInfo )
    goto LABEL_22;
  v9 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&b->klass->_2.bitflags2 + 1) < (unsigned int)v9
    || (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v9 - 1] != UserPresentListViewItem_TypeInfo )
  {
    goto LABEL_22;
  }
  v10 = (System_String_o *)this;
  this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_NameText((UserPresentListViewItem_o *)b, 0LL);
  if ( !v10 )
    goto LABEL_23;
  result = System_String__CompareTo_44828912(v10, (System_String_o *)this, 0LL);
  if ( result )
    return result;
  a = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  v12 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v5->klass->_2.bitflags2 + 1) < (unsigned int)v12
    || (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[v12 - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_21:
    sub_B70A60(v5);
LABEL_22:
    this = (UserPresentListViewManager___c_o *)sub_B70A60(b);
    goto LABEL_23;
  }
  v13 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&b->klass->_2.bitflags2 + 1) < (unsigned int)v13
    || (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v13 - 1] != UserPresentListViewItem_TypeInfo )
  {
    goto LABEL_22;
  }
  this = (UserPresentListViewManager___c_o *)v5[1].fields.sortValue2;
  if ( !this )
    goto LABEL_23;
  return System_String__CompareTo_44828912((System_String_o *)this, (System_String_o *)b[1].fields.sortValue2, 0LL);
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
  __int64 v6; // x9
  __int64 v7; // x9
  void *monitor; // x20
  int32_t result; // w0
  UserPresentListViewManager___c__DisplayClass67_0_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_434F32F & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_B70694(&UserPresentListViewItem_TypeInfo);
    byte_434F32F = 1;
  }
  if ( !a )
    goto LABEL_12;
  v6 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&a->klass->_2.bitflags2 + 1) >= (unsigned int)v6
    && (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[v6 - 1] == UserPresentListViewItem_TypeInfo )
  {
    this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_UserPresentEntity(
                                                 (UserPresentListViewItem_o *)a,
                                                 0LL);
    if ( !this || !b )
      goto LABEL_12;
    v7 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&b->klass->_2.bitflags2 + 1) >= (unsigned int)v7
      && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v7 - 1] == UserPresentListViewItem_TypeInfo )
    {
      monitor = this[5].monitor;
      this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_UserPresentEntity(
                                                   (UserPresentListViewItem_o *)b,
                                                   0LL);
      if ( this )
        return (_DWORD)monitor - LODWORD(this[5].monitor);
LABEL_12:
      sub_B7076C(this, a);
    }
  }
  else
  {
    sub_B70A60(a);
  }
  v10 = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_B70A60(b);
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
  __int64 v5; // x10
  int32_t ticketsHave; // w21
  struct ItemEntity_o **p_ticketItem; // x19
  struct ItemEntity_o *ticketItem; // t1

  v4 = this;
  if ( (byte_434F330 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_B70694(&UserPresentListViewItem_TypeInfo);
    byte_434F330 = 1;
  }
  if ( !obj )
    goto LABEL_19;
  v5 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[v5 - 1] != UserPresentListViewItem_TypeInfo )
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
    sub_B7076C(this, obj);
  ticketItem = v4->fields.ticketItem;
  p_ticketItem = &v4->fields.ticketItem;
  *((_DWORD *)p_ticketItem - 1) = this[2].fields.ticketId + ticketsHave;
  if ( !ticketItem )
  {
    *p_ticketItem = UserPresentListViewItem__get_ItemEntity((UserPresentListViewItem_o *)obj, 0LL);
    sub_B70630(p_ticketItem);
  }
  return 0;
}