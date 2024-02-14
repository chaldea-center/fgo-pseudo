void __fastcall UserPresentListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewSort_o *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4212BDE & 1) == 0 )
  {
    sub_B0D8A4(&ListViewSort_TypeInfo, v1);
    sub_B0D8A4(&UserPresentListViewManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_15147/*"UserPresent"*/, v4);
    byte_4212BDE = 1;
  }
  v5 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v1, v2);
  ListViewSort___ctor_32823364(v5, (System_String_o *)StringLiteral_15147/*"UserPresent"*/, 1, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserPresentListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B0D840(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  UserPresentBoxWindow_o *m_parent; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_IEnumerable_T__o *checkedIdList; // x22
  System_Collections_Generic_List_long__o *v27; // x21
  signed int max_length; // w8
  unsigned int v29; // w22
  Il2CppClass **v30; // x23
  Il2CppClass *v31; // x8
  UserPresentBoxEntity_o **v32; // x23
  Il2CppClass *v33; // t1
  __int64 v34; // x1
  __int64 v35; // x2
  UserPresentBoxEntity_o *v36; // x24
  UserPresentListViewItem_o *v37; // x23
  const MethodInfo *v38; // x3
  signed __int64 size; // x8
  struct System_Collections_Generic_List_long__o *v40; // x20
  unsigned __int64 v41; // x22
  const MethodInfo *v42; // x1
  __int64 v43; // x8
  unsigned __int64 v44; // x21
  UserPresentBoxEntity_o *v45; // x23
  UserPresentListViewItem_o *v46; // x22
  const MethodInfo *v47; // x3
  __int64 v48; // x0

  if ( (byte_4212BC9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, presentList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Remove__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor___67885136, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Item__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v9);
    sub_B0D8A4(&UserPresentListViewItem_TypeInfo, v10);
    byte_4212BC9 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.selectPresentData = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.selectPresentData, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.presentIds = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.presentIds, 0LL, v17, v18, v19, v20, v21, v22);
  m_parent = this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_32;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable(m_parent, 0, 0, 0LL);
  checkedIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v27 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v24,
                                                       v25);
    System_Collections_Generic_List_long____ctor_50025292(
      v27,
      checkedIdList,
      (const MethodInfo_2FB534C *)Method_System_Collections_Generic_List_long___ctor___67885136);
    if ( !presentList )
      goto LABEL_32;
    max_length = presentList->max_length;
    if ( max_length >= 1 )
    {
      v29 = 0;
      while ( v29 < max_length )
      {
        v30 = &presentList->obj.klass + (int)v29;
        v33 = v30[4];
        v32 = (UserPresentBoxEntity_o **)(v30 + 4);
        v31 = v33;
        if ( !v33 || !v27 )
          goto LABEL_32;
        m_parent = (UserPresentBoxWindow_o *)System_Collections_Generic_List_long___Remove(
                                               v27,
                                               (int64_t)v31->_1.namespaze,
                                               (const MethodInfo_2FB782C *)Method_System_Collections_Generic_List_long__Remove__);
        if ( v29 >= presentList->max_length )
          goto LABEL_33;
        v36 = *v32;
        v37 = (UserPresentListViewItem_o *)sub_B0D974(UserPresentListViewItem_TypeInfo, v34, v35);
        UserPresentListViewItem___ctor(v37, v29, v36, v38);
        m_parent = (UserPresentBoxWindow_o *)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)m_parent,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        max_length = presentList->max_length;
        if ( (int)++v29 >= max_length )
          goto LABEL_14;
      }
      goto LABEL_33;
    }
LABEL_14:
    if ( !v27 )
LABEL_32:
      sub_B0D97C(m_parent);
    LODWORD(size) = v27->fields._size;
    v40 = this->fields.checkedIdList;
    if ( (int)size >= 1 )
    {
      v41 = 0LL;
      do
      {
        if ( v41 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !v40 )
          goto LABEL_32;
        m_parent = (UserPresentBoxWindow_o *)System_Collections_Generic_List_long___Remove(
                                               v40,
                                               v27->fields._items->m_Items[v41],
                                               (const MethodInfo_2FB782C *)Method_System_Collections_Generic_List_long__Remove__);
        size = v27->fields._size;
        v40 = this->fields.checkedIdList;
      }
      while ( (__int64)++v41 < size );
    }
    if ( !v40 )
      goto LABEL_32;
    if ( v40->fields._size >= 1 )
    {
      m_parent = this->fields.m_parent;
      if ( !m_parent )
        goto LABEL_32;
      UserPresentBoxWindow__SetCheckedItemsButtonEnable(m_parent, 1, 1, 0LL);
      UserPresentListViewManager__updateCheckStatus(this, v42);
    }
  }
  else
  {
    if ( !presentList )
      goto LABEL_32;
    v43 = *(_QWORD *)&presentList->max_length;
    if ( (int)v43 >= 1 )
    {
      v44 = 0LL;
      while ( v44 < (unsigned int)v43 )
      {
        v45 = presentList->m_Items[v44];
        v46 = (UserPresentListViewItem_o *)sub_B0D974(UserPresentListViewItem_TypeInfo, v24, v25);
        UserPresentListViewItem___ctor(v46, v44, v45, v47);
        m_parent = (UserPresentBoxWindow_o *)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)m_parent,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v43) = presentList->max_length;
        if ( (__int64)++v44 >= (int)v43 )
          goto LABEL_31;
      }
LABEL_33:
      v48 = sub_B0D9A8(m_parent);
      sub_B0D948(v48, 0LL);
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

  if ( (byte_4212BC4 & 1) == 0 )
  {
    sub_B0D8A4(&UserPresentListViewManager_TypeInfo, v1);
    byte_4212BC4 = 1;
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
    sub_B0D97C(0LL);
  ListViewSort__DeleteContinueData(sortInfo, 0LL);
}


void __fastcall UserPresentListViewManager__DestroyList(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B0D97C(0LL);
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
  CommonUI_o *Instance; // x20
  System_String_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x22
  __int64 v12; // x0

  if ( (byte_4212BDD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, v5);
    sub_B0D8A4(&StringLiteral_10532/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, v6);
    byte_4212BDD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10532/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0LL);
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__,
    0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__OpenNotificationDialog(Instance, 0LL, v8, v11, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__EndNoticeDlg(
        UserPresentListViewManager_o *this,
        int32_t scene,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserPresentBoxErrorDialog_o *dialog; // x21
  System_Action_ShopRootConstants_State__o *v9; // x22
  CommonUI_o *Instance; // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *receivecCallbackFunc; // x0

  if ( (byte_4212BD8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_SceneList_Type___ctor__, *(_QWORD *)&scene);
    sub_B0D8A4(&System_Action_SceneList_Type__TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_UserPresentListViewManager_EndNoticeDlg__, v7);
    byte_4212BD8 = 1;
  }
  dialog = this->fields.dialog;
  v9 = (System_Action_ShopRootConstants_State__o *)sub_B0D974(
                                                     System_Action_SceneList_Type__TypeInfo,
                                                     *(_QWORD *)&scene,
                                                     method);
  System_Action_ShopRootConstants_State____ctor(
    v9,
    (Il2CppObject *)this,
    Method_UserPresentListViewManager_EndNoticeDlg__,
    (const MethodInfo_246D780 *)Method_System_Action_SceneList_Type___ctor__);
  if ( !dialog )
    goto LABEL_14;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(dialog, (System_Action_SceneList_Type__o *)v9, 0LL);
  if ( scene == -1 )
    goto LABEL_11;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( CommonUI__IsActive_MasterMission(Instance, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    CommonUI__CloseMasterMission(Instance, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_B0D97C(Instance);
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
  __int64 v2; // x2
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
  struct System_Collections_Generic_List_ListViewItem__o *presentAllSelectedList; // x0
  System_Collections_Generic_List_RegexCharClass_SingleRange__o **p_presentAllSelectedList; // x19
  System_Collections_Generic_IEnumerable_T__o *itemList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v36; // x20
  void *appended; // x0
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__60_0; // x21
  Il2CppObject *v40; // x22
  struct UserPresentListViewManager___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v50; // x20
  struct UserPresentListViewManager___c_StaticFields *v51; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__60_1; // x21
  Il2CppObject *v53; // x22
  struct UserPresentListViewManager___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v61; // x20
  __int64 v62; // x1
  int size; // w8
  __int64 v64; // x2
  struct UserPresentListViewManager___c_StaticFields *v65; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__60_2; // x21
  Il2CppObject *v67; // x22
  struct UserPresentListViewManager___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x1
  __int64 v76; // x2
  System_Text_StringBuilder_o *v77; // x20
  signed __int64 v78; // x23
  unsigned __int64 v79; // x24
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v80; // x21
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o *v81; // x8
  __int64 v82; // x11
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o *v83; // x21
  const MethodInfo *v84; // x1
  System_String_o *v85; // x22

  if ( (byte_4212BD5 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_System_Comparison_ListViewItem___ctor__, v4);
    sub_B0D8A4(&System_Comparison_ListViewItem__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__RemoveRange__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem___ctor___67885840, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_ListViewItem__TypeInfo, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Predicate_ListViewItem___ctor__, v15);
    sub_B0D8A4(&System_Predicate_ListViewItem__TypeInfo, v16);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v17);
    sub_B0D8A4(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__, v18);
    sub_B0D8A4(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__, v19);
    sub_B0D8A4(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__, v20);
    sub_B0D8A4(&UserPresentListViewManager___c_TypeInfo, v21);
    sub_B0D8A4(&UserPresentListViewItem_TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_10537/*"PRESENT_INFO"*/, v23);
    byte_4212BD5 = 1;
  }
  presentAllSelectedList = this->fields.presentAllSelectedList;
  p_presentAllSelectedList = (System_Collections_Generic_List_RegexCharClass_SingleRange__o **)&this->fields.presentAllSelectedList;
  if ( presentAllSelectedList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)presentAllSelectedList,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ListViewItem__Clear__);
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v27 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                          method,
                                                                          v2);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v27,
    itemList,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_ListViewItem___ctor___67885840);
  this->fields.presentAllSelectedList = (struct System_Collections_Generic_List_ListViewItem__o *)v27;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.presentAllSelectedList,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v36 = this->fields.presentAllSelectedList;
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
    v40 = (Il2CppObject *)static_fields->__9;
    _9__60_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_ListViewItem__TypeInfo,
                                                                           v34,
                                                                           v35);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__60_0,
      v40,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_ListViewItem___ctor__);
    v41 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v41->__9__60_0 = (struct System_Comparison_ListViewItem__o *)_9__60_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v41->__9__60_0,
      (System_Int32_array **)_9__60_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  if ( !v36 )
    goto LABEL_62;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v36,
    (System_Comparison_T__o *)_9__60_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  appended = UserPresentListViewManager___c_TypeInfo;
  v50 = *p_presentAllSelectedList;
  if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    appended = UserPresentListViewManager___c_TypeInfo;
  }
  v51 = (struct UserPresentListViewManager___c_StaticFields *)*((_QWORD *)appended + 23);
  _9__60_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v51->__9__60_1;
  if ( !_9__60_1 )
  {
    if ( (*((_BYTE *)appended + 307) & 4) != 0 && !*((_DWORD *)appended + 56) )
    {
      j_il2cpp_runtime_class_init_0(appended);
      v51 = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v53 = (Il2CppObject *)v51->__9;
    _9__60_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_ListViewItem__TypeInfo,
                                                                          v48,
                                                                          v49);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__60_1,
      v53,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_ListViewItem___ctor__);
    v54 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v54->__9__60_1 = (struct System_Predicate_ListViewItem__o *)_9__60_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v54->__9__60_1,
      (System_Int32_array **)_9__60_1,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  if ( !v50 )
    goto LABEL_62;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v50,
    (System_Predicate_T__o *)_9__60_1,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  appended = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    appended = BalanceConfig_TypeInfo;
  }
  v61 = *p_presentAllSelectedList;
  if ( !*p_presentAllSelectedList )
    goto LABEL_62;
  v62 = *(unsigned int *)(*((_QWORD *)appended + 23) + 116LL);
  size = v61->fields._size;
  v64 = (unsigned int)(size - v62);
  if ( size > (int)v62 )
  {
    System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange(
      *p_presentAllSelectedList,
      v62,
      v64,
      (const MethodInfo_2FC747C *)Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    v61 = *p_presentAllSelectedList;
  }
  appended = UserPresentListViewManager___c_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    appended = UserPresentListViewManager___c_TypeInfo;
  }
  v65 = (struct UserPresentListViewManager___c_StaticFields *)*((_QWORD *)appended + 23);
  _9__60_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v65->__9__60_2;
  if ( !_9__60_2 )
  {
    if ( (*((_BYTE *)appended + 307) & 4) != 0 && !*((_DWORD *)appended + 56) )
    {
      j_il2cpp_runtime_class_init_0(appended);
      v65 = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v67 = (Il2CppObject *)v65->__9;
    _9__60_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_ListViewItem__TypeInfo,
                                                                           v62,
                                                                           v64);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__60_2,
      v67,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_ListViewItem___ctor__);
    v68 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v68->__9__60_2 = (struct System_Comparison_ListViewItem__o *)_9__60_2;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v68->__9__60_2,
      (System_Int32_array **)_9__60_2,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  if ( !v61 )
    goto LABEL_62;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v61,
    (System_Comparison_T__o *)_9__60_2,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  v77 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v75, v76);
  System_Text_StringBuilder___ctor(v77, 0LL);
  if ( !*p_presentAllSelectedList )
    goto LABEL_62;
  v78 = (*p_presentAllSelectedList)->fields._size;
  if ( (int)v78 >= 1 )
  {
    v79 = 0LL;
    while ( 1 )
    {
      if ( v79 )
      {
        if ( !v77 )
          break;
        appended = System_Text_StringBuilder__Append_42158644(v77, 0xAu, 0LL);
      }
      v80 = *p_presentAllSelectedList;
      if ( !*p_presentAllSelectedList )
        break;
      if ( v79 >= (unsigned int)v80->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v81 = v80->fields._items->m_Items[v79];
      if ( v81
        && (v82 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v81->klass->_2.bitflags2 + 1) >= (unsigned int)v82) )
      {
        v83 = (UserPresentListViewItem_c *)v81->klass->_2.typeHierarchy[v82 - 1] == UserPresentListViewItem_TypeInfo
            ? v80->fields._items->m_Items[v79]
            : 0LL;
      }
      else
      {
        v83 = 0LL;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      appended = LocalizationManager__Get((System_String_o *)StringLiteral_10537/*"PRESENT_INFO"*/, 0LL);
      if ( !v83 )
        break;
      v85 = (System_String_o *)appended;
      appended = UserPresentListViewItem__get_NameText((UserPresentListViewItem_o *)v83, v84);
      if ( !v77 )
        break;
      appended = System_Text_StringBuilder__AppendFormat_42161952(
                   v77,
                   v85,
                   (Il2CppObject *)appended,
                   *(Il2CppObject **)&v83[7].fields._first,
                   0LL);
      if ( (__int64)++v79 >= v78 )
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v77->klass->vtable._3_ToString.method)(
                                    v77,
                                    v77->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    }
LABEL_62:
    sub_B0D97C(appended);
  }
  if ( !v77 )
    goto LABEL_62;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v77->klass->vtable._3_ToString.method)(
                              v77,
                              v77->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
UserPresentListViewItem_o *__fastcall UserPresentListViewManager__GetItem(
        UserPresentListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_4212BCA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&UserPresentListViewItem_TypeInfo, v5);
    byte_4212BCA = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (UserPresentListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == UserPresentListViewItem_TypeInfo )
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

  if ( (byte_4212BC8 & 1) == 0 )
  {
    sub_B0D8A4(&UserPresentListViewManager_TypeInfo, method);
    byte_4212BC8 = 1;
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.sort, (System_Int32_array **)v11, v2, v3, v4, v5, v6, v7);
  if ( !this->fields.sort || (this->fields.sort->fields.listViewKind = 4, (v13 = *p_sort) == 0LL) )
    sub_B0D97C(v13);
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

  if ( (byte_4212BC5 & 1) == 0 )
  {
    sub_B0D8A4(&UserPresentListViewManager_TypeInfo, v1);
    byte_4212BC5 = 1;
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
    sub_B0D97C(0LL);
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
  __int64 v18; // x1
  System_Int32_array **Item; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct UserPresentListViewItem_o *selectItem; // x8
  System_Int32_array **usrPresentEnt; // x1
  UserPresentListViewManager_o **p_selectPresentData; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  UserPresentListViewManager_o **p_checkedIdList; // x21
  System_Collections_Generic_List_long__o *v39; // x24
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct UserPresentListViewItem_o *v46; // x8
  UserPresentListViewManager_o *v47; // x26
  int dropObjectList; // w25
  int32_t v49; // w24
  const MethodInfo *v50; // x1
  struct ItemEntity_o *itemEnt; // x8
  int64_t endedAt; // x25
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x24
  BalanceConfig_c *v54; // x0
  int v55; // w24
  SoundManager_c *v56; // x0
  const MethodInfo *v57; // x1
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  int32_t v60; // w24
  BalanceConfig_c *v61; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  const MethodInfo *v63; // x1
  BalanceConfig_c *v64; // x0
  int32_t v65; // w22
  const MethodInfo *v66; // x3
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  ItemEntity_o *v68; // [xsp+0h] [xbp-50h] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4212BD1 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, obj);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__RemoveAt__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Item__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&SoundManager_TypeInfo, v17);
    this = (UserPresentListViewManager_o *)sub_B0D8A4(&Method_UserPresentListViewManager_OnClickListCheck__, v18);
    byte_4212BD1 = 1;
  }
  v68 = 0LL;
  entity = 0LL;
  if ( !obj )
    goto LABEL_88;
  Item = (System_Int32_array **)UserPresentListViewObject__GetItem(obj, (const MethodInfo *)obj);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = (struct UserPresentListViewItem_o *)Item;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.selectItem, Item, v21, v22, v23, v24, v25, v26);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_88;
  usrPresentEnt = (System_Int32_array **)selectItem->fields.usrPresentEnt;
  p_selectPresentData = (UserPresentListViewManager_o **)&v4->fields.selectPresentData;
  v4->fields.selectPresentData = (struct UserPresentBoxEntity_o *)usrPresentEnt;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.selectPresentData, usrPresentEnt, v27, v28, v29, v30, v31, v32);
  p_checkedIdList = (UserPresentListViewManager_o **)&v4->fields.checkedIdList;
  if ( !v4->fields.checkedIdList )
  {
    v39 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v36,
                                                       v37);
    System_Collections_Generic_List_long____ctor(
      v39,
      (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
    *p_checkedIdList = (UserPresentListViewManager_o *)v39;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v4->fields.checkedIdList,
      (System_Int32_array **)v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  v46 = *p_selectItem;
  if ( !*p_selectItem )
    goto LABEL_88;
  if ( v46->fields.presentId < 1 )
    return;
  v47 = *p_checkedIdList;
  if ( !*p_checkedIdList )
    goto LABEL_88;
  dropObjectList = (int)v47->fields.dropObjectList;
  if ( dropObjectList >= 1 )
  {
    v49 = 0;
    while ( 1 )
    {
      if ( LODWORD(v47->fields.dropObjectList) <= v49 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( *(_QWORD *)(*(_QWORD *)&v47->fields.m_CachedPtr + 8LL * v49 + 32) == v46->fields.presentId )
        break;
      if ( ++v49 >= dropObjectList )
        goto LABEL_18;
      v47 = *p_checkedIdList;
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
        v49,
        (const MethodInfo_2FB7B68 *)Method_System_Collections_Generic_List_long__RemoveAt__);
      UserPresentListViewManager__updateCheckStatus(v4, v57);
      return;
    }
LABEL_88:
    sub_B0D97C(this);
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
      this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_88;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
        v54 = BalanceConfig_TypeInfo;
        v55 = LODWORD((*p_selectPresentData)->fields.scrollBar) + entity->fields.num;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v54 = BalanceConfig_TypeInfo;
        }
        if ( v55 > v54->static_fields->UserItemMax )
        {
          v56 = SoundManager_TypeInfo;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
            goto LABEL_86;
          goto LABEL_84;
        }
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (UserPresentListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !this )
          goto LABEL_88;
        this = (UserPresentListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                 (WarEntity_o **)&v68,
                                                 HIDWORD((*p_selectPresentData)->fields.scrollView),
                                                 (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (UserPresentListViewManager_o *)v68;
          if ( !v68 )
            goto LABEL_88;
          this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum(v68, 0LL);
          if ( (int)this >= 1 )
          {
            this = (UserPresentListViewManager_o *)v68;
            if ( !v68 )
              goto LABEL_88;
            this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum(v68, 0LL);
            if ( v55 > (int)this )
            {
              v58 = Method_UserPresentListViewManager_OnClickListCheck__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 75) & 2) != 0 )
                v58 = (_QWORD *)sub_B0D8AC(Method_UserPresentListViewManager_OnClickListCheck__);
              v59 = (System_Reflection_MethodBase_o *)sub_B0D888(v58, v58[3]);
              OverwriteAssetSoundName__PlaySystemSe(v59, 1, 0LL);
              return;
            }
          }
        }
      }
      goto LABEL_61;
    }
LABEL_42:
    UserPresentListViewManager__DlgForExpiredPresent(v4, v50);
    return;
  }
LABEL_61:
  if ( !*p_checkedIdList )
    goto LABEL_88;
  v60 = (int32_t)(*p_checkedIdList)->fields.dropObjectList;
  v61 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v61 = BalanceConfig_TypeInfo;
  }
  static_fields = v61->static_fields;
  v56 = SoundManager_TypeInfo;
  if ( v60 >= static_fields->PresentBoxCheckMax )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
    {
LABEL_86:
      SoundManager__playSystemSe(1, 0LL);
      return;
    }
LABEL_84:
    if ( !v56->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v56);
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
    (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
  if ( !*p_checkedIdList )
    goto LABEL_88;
  v64 = BalanceConfig_TypeInfo;
  v65 = (int32_t)(*p_checkedIdList)->fields.dropObjectList;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v64 = BalanceConfig_TypeInfo;
  }
  if ( v65 < v64->static_fields->PresentBoxCheckMax )
  {
    this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(obj, v63);
    if ( !*p_checkedIdList )
      goto LABEL_88;
    if ( !this )
      goto LABEL_88;
    UserPresentListViewItem__setCheckBoxed(
      (UserPresentListViewItem_o *)this,
      1,
      (int32_t)(*p_checkedIdList)->fields.dropObjectList,
      v66);
    checkedIdList = v4->fields.checkedIdList;
    if ( !checkedIdList )
      goto LABEL_88;
    this = (UserPresentListViewManager_o *)v4->fields.m_parent;
    if ( !this )
      goto LABEL_88;
    UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)this, checkedIdList->fields._size, 0LL);
  }
  UserPresentListViewManager__updateCheckStatus(v4, v63);
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
  __int64 v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  System_Int32_array **Item; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UserPresentListViewItem_o *selectItem; // x8
  System_Int32_array **usrPresentEnt; // x1
  struct UserPresentBoxEntity_o **p_selectPresentData; // x21
  struct ItemEntity_o *itemEnt; // x8
  __int64 endedAt; // x23
  struct ItemEntity_o *v44; // x8
  const MethodInfo *v45; // x2
  struct ItemEntity_o *v46; // x8
  const MethodInfo *v47; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  BalanceConfig_c *v49; // x0
  int32_t v50; // w22
  __int64 v51; // x1
  const MethodInfo *v52; // x2
  UserPresentListViewManager___c_c *v53; // x0
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  UserPresentListViewManager_ReceiveCallbackFunc_o *_9__55_0; // x20
  Il2CppObject *v56; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct UserPresentListViewManager___c_StaticFields *v63; // x0
  BattleServantConfConponent_o *p__9__55_0; // x0
  _QWORD *v65; // x0
  System_Reflection_MethodBase_o *v66; // x0
  __int64 v67; // x1
  UserPresentListViewManager___c_c *v68; // x0
  struct UserPresentListViewManager___c_StaticFields *v69; // x8
  Il2CppObject *v70; // x21
  struct UserPresentListViewManager___c_StaticFields *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  System_Collections_Generic_List_long__o *v74; // x21
  UserPresentListViewManager_o **p_presentIds; // x20
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct UserPresentListViewItem_o *v82; // x8
  int64_t presentId; // x1
  const MethodInfo *v84; // x2
  WarEntity_o *v85; // [xsp+8h] [xbp-38h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4212BD0 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, obj);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B0D8A4(&NetworkManager_TypeInfo, v14);
    sub_B0D8A4(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&SoundManager_TypeInfo, v17);
    sub_B0D8A4(&Method_UserPresentListViewManager___c__OnClickListView_b__55_0__, v18);
    sub_B0D8A4(&Method_UserPresentListViewManager___c__OnClickListView_b__55_1__, v19);
    sub_B0D8A4(&UserPresentListViewManager___c_TypeInfo, v20);
    this = (UserPresentListViewManager_o *)sub_B0D8A4(&Method_UserPresentListViewManager_OnClickListView__, v21);
    byte_4212BD0 = 1;
  }
  entity = 0LL;
  v85 = 0LL;
  if ( !obj )
    goto LABEL_92;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_92;
  if ( *(&this->fields.execObjectExtraFlag + 2) )
    return;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(obj, v22);
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
  Item = (System_Int32_array **)UserPresentListViewObject__GetItem(obj, v23);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = (struct UserPresentListViewItem_o *)Item;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.selectItem, Item, v27, v28, v29, v30, v31, v32);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_92;
  usrPresentEnt = (System_Int32_array **)selectItem->fields.usrPresentEnt;
  p_selectPresentData = &v4->fields.selectPresentData;
  v4->fields.selectPresentData = (struct UserPresentBoxEntity_o *)usrPresentEnt;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.selectPresentData, usrPresentEnt, v33, v34, v35, v36, v37, v38);
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
      v44 = (*p_selectItem)->fields.itemEnt;
      if ( !v44 )
        goto LABEL_92;
      if ( v44->fields.type == 24 )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        if ( *p_selectItem )
        {
          v46 = (*p_selectItem)->fields.itemEnt;
          if ( v46 )
          {
            UserPresentListViewManager__OpenSelectableDialog(v4, v46->fields.id, v45);
            return;
          }
        }
        goto LABEL_92;
      }
      this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_92;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
        v49 = BalanceConfig_TypeInfo;
        v50 = (*p_selectPresentData)->fields.num + entity->fields.num;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v49 = BalanceConfig_TypeInfo;
        }
        if ( v50 > v49->static_fields->UserItemMax )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          v53 = UserPresentListViewManager___c_TypeInfo;
          if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
            v53 = UserPresentListViewManager___c_TypeInfo;
          }
          static_fields = v53->static_fields;
          _9__55_0 = static_fields->__9__55_0;
          if ( _9__55_0 )
            goto LABEL_60;
          if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v53);
            static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
          }
          v56 = (Il2CppObject *)static_fields->__9;
          _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B0D974(
                                                                           UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo,
                                                                           v51,
                                                                           v52);
          UserPresentListViewManager_ReceiveCallbackFunc___ctor(
            _9__55_0,
            v56,
            Method_UserPresentListViewManager___c__OnClickListView_b__55_0__,
            0LL);
          v63 = UserPresentListViewManager___c_TypeInfo->static_fields;
          v63->__9__55_0 = _9__55_0;
          p__9__55_0 = (BattleServantConfConponent_o *)&v63->__9__55_0;
LABEL_59:
          sub_B0D840(p__9__55_0, (System_Int32_array **)_9__55_0, v57, v58, v59, v60, v61, v62);
LABEL_60:
          UserPresentListViewManager__showErrorResultDlg(v4, _9__55_0, v52);
          return;
        }
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (UserPresentListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !this )
          goto LABEL_92;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
               &v85,
               (*p_selectPresentData)->fields.objectId,
               (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          this = (UserPresentListViewManager_o *)v85;
          if ( !v85 )
            goto LABEL_92;
          if ( ItemEntity__GetMaxNum((ItemEntity_o *)v85, 0LL) >= 1 )
          {
            this = (UserPresentListViewManager_o *)v85;
            if ( !v85 )
              goto LABEL_92;
            if ( v50 > ItemEntity__GetMaxNum((ItemEntity_o *)v85, 0LL) )
            {
              v65 = Method_UserPresentListViewManager_OnClickListView__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 75) & 2) != 0 )
                v65 = (_QWORD *)sub_B0D8AC(Method_UserPresentListViewManager_OnClickListView__);
              v66 = (System_Reflection_MethodBase_o *)sub_B0D888(v65, v65[3]);
              OverwriteAssetSoundName__PlaySystemSe(v66, 0, 0LL);
              v68 = UserPresentListViewManager___c_TypeInfo;
              if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
                v68 = UserPresentListViewManager___c_TypeInfo;
              }
              v69 = v68->static_fields;
              _9__55_0 = v69->__9__55_1;
              if ( _9__55_0 )
                goto LABEL_60;
              if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v68);
                v69 = UserPresentListViewManager___c_TypeInfo->static_fields;
              }
              v70 = (Il2CppObject *)v69->__9;
              _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B0D974(
                                                                               UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo,
                                                                               v67,
                                                                               v52);
              UserPresentListViewManager_ReceiveCallbackFunc___ctor(
                _9__55_0,
                v70,
                Method_UserPresentListViewManager___c__OnClickListView_b__55_1__,
                0LL);
              v71 = UserPresentListViewManager___c_TypeInfo->static_fields;
              v71->__9__55_1 = _9__55_0;
              p__9__55_0 = (BattleServantConfConponent_o *)&v71->__9__55_1;
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
    UserPresentListViewManager__DlgForExpiredPresent(v4, v47);
    return;
  }
LABEL_81:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  if ( !*p_selectItem )
    goto LABEL_92;
  v4->fields._select_idx_k__BackingField = (*p_selectItem)->fields.index;
  v74 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v72, v73);
  System_Collections_Generic_List_long____ctor(
    v74,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = (UserPresentListViewManager_o **)&v4->fields.presentIds;
  v4->fields.presentIds = v74;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v4->fields.presentIds,
    (System_Int32_array **)v74,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  v82 = v4->fields.selectItem;
  if ( !v82 )
    goto LABEL_92;
  presentId = v82->fields.presentId;
  if ( presentId >= 1 )
  {
    this = *p_presentIds;
    if ( !*p_presentIds )
      goto LABEL_92;
    System_Collections_Generic_List_long___Add(
      (System_Collections_Generic_List_long__o *)this,
      presentId,
      (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
  }
  this = *p_presentIds;
  if ( !*p_presentIds
    || (this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                 (System_Collections_Generic_List_long__o *)this,
                                                 (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__),
        !v4->fields.m_parent) )
  {
LABEL_92:
    sub_B0D97C(this);
  }
  UserPresentBoxWindow__receivePresent(v4->fields.m_parent, (System_Int64_array *)this, 0, 0, 0LL);
  UserPresentListViewManager__SetMode_21165988(v4, 2, v84);
}


void __fastcall UserPresentListViewManager__OnClickSortAscendingOrder(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_4212BD9 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212BD9 = 1;
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
      sub_B0D97C(v3);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4212BCF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212BCF = 1;
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
        v13 = this->fields.scrollView;
        if ( !v13 )
          sub_B0D97C(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v5; // x1
  __int64 v6; // x1
  UserPresentBoxErrorDialog_o *dialog; // x0
  UserPresentBoxErrorDialog_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_ShopRootConstants_State__o *v11; // x21

  if ( (byte_4212BD7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_SceneList_Type___ctor__, msg);
    sub_B0D8A4(&System_Action_SceneList_Type__TypeInfo, v5);
    sub_B0D8A4(&Method_UserPresentListViewManager_EndNoticeDlg__, v6);
    byte_4212BD7 = 1;
  }
  dialog = this->fields.dialog;
  if ( !dialog
    || (UserPresentBoxErrorDialog__Open(dialog, msg, 0LL),
        v8 = this->fields.dialog,
        v11 = (System_Action_ShopRootConstants_State__o *)sub_B0D974(System_Action_SceneList_Type__TypeInfo, v9, v10),
        System_Action_ShopRootConstants_State____ctor(
          v11,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager_EndNoticeDlg__,
          (const MethodInfo_246D780 *)Method_System_Action_SceneList_Type___ctor__),
        !v8) )
  {
    sub_B0D97C(dialog);
  }
  UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v8, (System_Action_SceneList_Type__o *)v11, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  void *presentTicketList; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct UserPresentBoxWindow_o *m_parent; // x8
  System_Collections_Generic_IEnumerable_T__o *itemList; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v23; // x23
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct System_Collections_Generic_List_ListViewItem__o *v36; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v39; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v42; // x21
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__67_1; // x22
  Il2CppObject *v45; // x23
  struct UserPresentListViewManager___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_4212BDB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_ListViewItem___ctor__, *(_QWORD *)&ticketId);
    sub_B0D8A4(&System_Comparison_ListViewItem__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem___ctor___67885840, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ListViewItem__TypeInfo, v10);
    sub_B0D8A4(&Method_System_Predicate_ListViewItem___ctor__, v11);
    sub_B0D8A4(&System_Predicate_ListViewItem__TypeInfo, v12);
    sub_B0D8A4(&Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__, v13);
    sub_B0D8A4(&Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__, v14);
    sub_B0D8A4(&UserPresentListViewManager___c__DisplayClass67_0_TypeInfo, v15);
    sub_B0D8A4(&UserPresentListViewManager___c_TypeInfo, v16);
    byte_4212BDB = 1;
  }
  v17 = sub_B0D974(UserPresentListViewManager___c__DisplayClass67_0_TypeInfo, *(_QWORD *)&ticketId, method);
  UserPresentListViewManager___c__DisplayClass67_0___ctor(
    (UserPresentListViewManager___c__DisplayClass67_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_19;
  *(_DWORD *)(v17 + 16) = ticketId;
  presentTicketList = this->fields.presentTicketList;
  if ( presentTicketList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)presentTicketList,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ListViewItem__Clear__);
  m_parent = this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_19;
  m_parent->fields.mIsScrlResetPosition = 1;
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v23 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                          v19,
                                                                          v20);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v23,
    itemList,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_ListViewItem___ctor___67885840);
  this->fields.presentTicketList = (struct System_Collections_Generic_List_ListViewItem__o *)v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.presentTicketList,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  *(_DWORD *)(v17 + 20) = 0;
  *(_QWORD *)(v17 + 24) = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 24), 0LL, v30, v31, v32, v33, v34, v35);
  v36 = this->fields.presentTicketList;
  v39 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_ListViewItem__TypeInfo,
                                                                   v37,
                                                                   v38);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v39,
    (Il2CppObject *)v17,
    Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_ListViewItem___ctor__);
  if ( !v36 )
    goto LABEL_19;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v36,
    (System_Predicate_T__o *)v39,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  v42 = this->fields.presentTicketList;
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
    v45 = (Il2CppObject *)static_fields->__9;
    _9__67_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_ListViewItem__TypeInfo,
                                                                           v40,
                                                                           v41);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__67_1,
      v45,
      Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_ListViewItem___ctor__);
    v46 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v46->__9__67_1 = (struct System_Comparison_ListViewItem__o *)_9__67_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v46->__9__67_1,
      (System_Int32_array **)_9__67_1,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  if ( !v42
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v42,
          (System_Comparison_T__o *)_9__67_1,
          (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ListViewItem__Sort__),
        (presentTicketList = this->fields.selectDialog) == 0LL) )
  {
LABEL_19:
    sub_B0D97C(presentTicketList);
  }
  PresentSelectableDlgComponent__Open(
    (PresentSelectableDlgComponent_o *)presentTicketList,
    *(ItemEntity_o **)(v17 + 24),
    *(_DWORD *)(v17 + 20),
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
  System_Collections_Generic_List_long__o **p_presentIds; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x21
  __int64 v36; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v37; // x0
  const MethodInfo_2FC56E8 **v38; // x26
  _BOOL8 v39; // x0
  UserPresentListViewItem_o *current; // x23
  __int64 v41; // x9
  System_Collections_Generic_List_long__o *checkedIdList; // x0
  UserPresentBoxEntity_o *usrPresentEnt; // x0
  _BOOL8 IsExpired; // x0
  const MethodInfo *v45; // x1
  struct UserPresentBoxEntity_o *v46; // x9
  struct ItemEntity_o *itemEnt; // x9
  const MethodInfo_2FC56E8 **v48; // x20
  int64_t endedAt; // x26
  bool v50; // cc
  System_String_o *NameText; // x0
  const MethodInfo *v52; // x1
  System_String_o *v53; // x0
  System_String_o **p_expiredPresents_k__BackingField; // x22
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4212BD4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Contains__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__RemoveAt__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v17);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v18);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_B0D8A4(&NetworkManager_TypeInfo, v20);
    sub_B0D8A4(&UserPresentListViewItem_TypeInfo, v21);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v22);
    sub_B0D8A4(&StringLiteral_1/*""*/, v23);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v24);
    byte_4212BD4 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  this->fields.kind = kind;
  v25 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     *(_QWORD *)&kind,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v25,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = &this->fields.presentIds;
  this->fields.presentIds = v25;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.presentIds,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v33,
                                                                                                  v34);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  v36 = 184LL;
  if ( kind == 1 )
    v36 = 424LL;
  v37 = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)((char *)&this->klass + v36);
  if ( !v37 )
    goto LABEL_53;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v69,
    v37,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v38 = (const MethodInfo_2FC56E8 **)&Method_System_Collections_Generic_List_string__Add__;
  v70 = v69;
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v70,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v39 )
      break;
    current = (UserPresentListViewItem_o *)v70.fields.current;
    if ( v70.fields.current )
    {
      v41 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v70.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v41
        || (UserPresentListViewItem_c *)v70.fields.current->klass->_2.typeHierarchy[v41 - 1] != UserPresentListViewItem_TypeInfo )
      {
        usrPresentEnt = (UserPresentBoxEntity_o *)sub_B0DC70(v70.fields.current);
LABEL_47:
        sub_B0D97C(usrPresentEnt);
      }
    }
    switch ( kind )
    {
      case 1:
        if ( !v70.fields.current )
          sub_B0D97C(v39);
        goto LABEL_19;
      case 2:
        if ( !v70.fields.current )
          sub_B0D97C(v39);
        if ( !Gift__IsServant_26783204((int32_t)v70.fields.current[10].monitor, 0LL)
          && !Gift__IsCommandCode_26783600(current->fields.giftType, 0LL) )
        {
          goto LABEL_19;
        }
        break;
      case 3:
        if ( !v70.fields.current )
          sub_B0D97C(v39);
        checkedIdList = this->fields.checkedIdList;
        if ( !checkedIdList )
          sub_B0D97C(0LL);
        if ( System_Collections_Generic_List_long___Contains(
               checkedIdList,
               (int64_t)v70.fields.current[10].klass,
               (const MethodInfo_2FB6304 *)Method_System_Collections_Generic_List_long__Contains__) )
        {
LABEL_19:
          usrPresentEnt = current->fields.usrPresentEnt;
          if ( !usrPresentEnt )
            goto LABEL_47;
          IsExpired = UserPresentBoxEntity__IsExpired(usrPresentEnt, 0, 0LL);
          v46 = current->fields.usrPresentEnt;
          if ( !v46 )
            sub_B0D97C(IsExpired);
          if ( v46->fields.giftType == 2 )
          {
            itemEnt = current->fields.itemEnt;
            if ( !itemEnt )
              sub_B0D97C(IsExpired);
            if ( itemEnt->fields.type != 24 )
            {
              if ( IsExpired )
                goto LABEL_30;
              v48 = v38;
              endedAt = itemEnt->fields.endedAt;
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              v50 = endedAt <= NetworkManager__getTime(0LL);
              v38 = v48;
              p_presentIds = &this->fields.presentIds;
              if ( v50 )
                goto LABEL_30;
LABEL_38:
              if ( !*p_presentIds )
                sub_B0D97C(0LL);
              System_Collections_Generic_List_long___Add(
                *p_presentIds,
                current->fields.presentId,
                (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
            }
          }
          else
          {
            if ( !IsExpired )
              goto LABEL_38;
LABEL_30:
            NameText = UserPresentListViewItem__get_NameText(current, v45);
            if ( !v35 )
              sub_B0D97C(NameText);
            if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v35,
                    (WarBoardManager_TaskList_o *)NameText,
                    (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
            {
              v53 = UserPresentListViewItem__get_NameText(current, v52);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v35,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
                *v38);
            }
          }
        }
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v70,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  p_expiredPresents_k__BackingField = &this->fields._expiredPresents_k__BackingField;
  v55 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._expiredPresents_k__BackingField,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  if ( !v35 )
    goto LABEL_53;
  while ( v35->fields._size >= 1 )
  {
    v62 = (System_Int32_array **)System_String__Concat_43853316(
                                   *p_expiredPresents_k__BackingField,
                                   (System_String_o *)StringLiteral_15681/*"["*/,
                                   (System_String_o *)v35->fields._items->m_Items[0],
                                   (System_String_o *)StringLiteral_15917/*"]"*/,
                                   0LL);
    *p_expiredPresents_k__BackingField = (System_String_o *)v62;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields._expiredPresents_k__BackingField,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v35,
      0,
      (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_string__RemoveAt__);
  }
  v37 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*p_presentIds;
  if ( !*p_presentIds
    || (v37 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_long___ToArray(
                                                                                               (System_Collections_Generic_List_long__o *)v37,
                                                                                               (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.m_parent) )
  {
LABEL_53:
    sub_B0D97C(v37);
  }
  UserPresentBoxWindow__receivePresent(this->fields.m_parent, (System_Int64_array *)v37, 0, 0, 0LL);
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
  int64_t sortValue0; // x0
  struct System_Collections_Generic_List_ListViewItem__o *presentTicketList; // x19
  signed __int64 size; // x24
  int v20; // w25
  int v21; // w26
  unsigned __int64 v22; // x27
  ListViewItem_o *v23; // x19
  __int64 v24; // x10
  _QWORD *monitor; // x8
  int64_t v26; // x23
  int64_t v27; // x8
  int64_t sortValue1; // x1
  int v29; // w19
  UserPresentBoxWindow_o *m_parent; // x23
  const MethodInfo *v31; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v32; // x19
  __int64 v33; // x9
  __int64 v34; // x8
  struct System_String_o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UserPresentBoxWindow_o *v42; // x20
  UserPresentListViewManager_o *v43; // x0
  const MethodInfo *v44; // x1
  int32_t selectNum; // [xsp+4h] [xbp-5Ch]

  if ( (byte_4212BDC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, selectItm);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&UserPresentListViewItem_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v14);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v15);
    byte_4212BDC = 1;
  }
  v16 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     selectItm,
                                                     *(_QWORD *)&num);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  presentTicketList = this->fields.presentTicketList;
  if ( !presentTicketList || !selectItm )
    goto LABEL_25;
  size = presentTicketList->fields._size;
  selectNum = num;
  if ( (int)size < 1 || (v20 = selectItm->fields.requireNum * num, v20 < 1) )
  {
    if ( v16 )
    {
LABEL_27:
      m_parent = this->fields.m_parent;
      sortValue0 = (int64_t)System_Collections_Generic_List_long___ToArray(
                              v16,
                              (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( m_parent )
      {
        UserPresentBoxWindow__receivePresent(
          m_parent,
          (System_Int64_array *)sortValue0,
          selectItm->fields.idx,
          selectNum,
          0LL);
        UserPresentListViewManager__SetMode_21165988(this, 2, v31);
        return;
      }
    }
    goto LABEL_25;
  }
  v21 = 0;
  v22 = 0LL;
  while ( 1 )
  {
    if ( v22 >= (unsigned int)presentTicketList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v23 = presentTicketList->fields._items->m_Items[v22];
    if ( !v23 )
      goto LABEL_25;
    v24 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v24 )
      goto LABEL_25;
    if ( (UserPresentListViewItem_c *)v23->klass->_2.typeHierarchy[v24 - 1] != UserPresentListViewItem_TypeInfo )
      goto LABEL_25;
    sortValue0 = v23[1].fields.sortValue0;
    if ( !sortValue0 )
      goto LABEL_25;
    sortValue0 = UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)sortValue0, 0, 0LL);
    if ( (sortValue0 & 1) != 0 )
      break;
    monitor = v23[1].monitor;
    if ( !monitor )
      goto LABEL_25;
    v26 = monitor[12];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    sortValue0 = NetworkManager__getTime(0LL);
    if ( v26 <= sortValue0 )
      break;
    v27 = v23[1].fields.sortValue0;
    if ( !v27 || !v16 )
      goto LABEL_25;
    sortValue1 = v23[1].fields.sortValue1;
    v29 = *(_DWORD *)(v27 + 80);
    System_Collections_Generic_List_long___Add(
      v16,
      sortValue1,
      (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
    if ( (__int64)++v22 >= size )
      goto LABEL_27;
    v21 += v29;
    if ( v21 >= v20 )
      goto LABEL_27;
    presentTicketList = this->fields.presentTicketList;
    if ( !presentTicketList )
      goto LABEL_25;
  }
  v32 = this->fields.presentTicketList;
  if ( !v32 )
    goto LABEL_25;
  if ( !v32->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  sortValue0 = (int64_t)v32->fields._items->m_Items[0];
  if ( !sortValue0 )
    goto LABEL_25;
  v33 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)sortValue0 + 300LL) >= (unsigned int)v33
    && *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sortValue0 + 200LL) + 8 * v33 - 8) == UserPresentListViewItem_TypeInfo )
  {
    v34 = *(_QWORD *)(sortValue0 + 120);
    if ( v34 )
    {
      v35 = System_String__Concat_43852188(
              (System_String_o *)StringLiteral_15681/*"["*/,
              *(System_String_o **)(v34 + 24),
              (System_String_o *)StringLiteral_15917/*"]"*/,
              0LL);
      this->fields._expiredPresents_k__BackingField = v35;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields._expiredPresents_k__BackingField,
        (System_Int32_array **)v35,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      if ( v16 )
      {
        v42 = this->fields.m_parent;
        sortValue0 = (int64_t)System_Collections_Generic_List_long___ToArray(
                                v16,
                                (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v42 )
        {
          UserPresentBoxWindow__receivePresent(v42, (System_Int64_array *)sortValue0, selectItm->fields.idx, 0, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B0D97C(sortValue0);
  }
  v43 = (UserPresentListViewManager_o *)sub_B0DC70(sortValue0);
  UserPresentListViewManager___ctor(v43, v44);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4212BCD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v11);
    sub_B0D8A4(&Method_UserPresentListViewManager_OnMoveEnd__, v12);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v13);
    byte_4212BCD = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserPresentListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserPresentListViewObject__Init(
        (UserPresentListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestListObject_21166208(
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4212BCE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v9);
    sub_B0D8A4(&Method_UserPresentListViewManager_OnMoveEnd__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_4212BCE = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserPresentListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserPresentListViewObject__Init(
        (UserPresentListViewObject_o *)current,
        mode,
        v17,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_21165988(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__SetMode_21165988(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_4212BCC & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_B0D8A4(
                                             &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                             *(_QWORD *)&mode);
    byte_4212BCC = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_B0D97C(this);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0LL);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    UserPresentListViewManager__RequestListObject_21166208(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 4;
    goto LABEL_8;
  }
}


void __fastcall UserPresentListViewManager__SetMode_21166152(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_21165988(this, mode, v10);
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
  if ( (byte_4212BCB & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_B0D8A4(&UserPresentListViewObject_TypeInfo, obj);
    byte_4212BCB = 1;
  }
  if ( !obj
    || (v6 = *(&UserPresentListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (UserPresentListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != UserPresentListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
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

  if ( (byte_4212BDA & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17072/*"btn_sort_up"*/, v3);
    sub_B0D8A4(&StringLiteral_17112/*"btn_txt_new"*/, v4);
    sub_B0D8A4(&StringLiteral_17119/*"btn_txt_old"*/, v5);
    sub_B0D8A4(&StringLiteral_17069/*"btn_sort_down"*/, v6);
    byte_4212BDA = 1;
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
    v9 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v9 )
      goto LABEL_26;
    UILabel__set_text(v9, (System_String_o *)sort, 0LL);
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
    v11 = this->fields.sort;
    if ( v11 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v12 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_17119/*"btn_txt_old"*/ : &StringLiteral_17112/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v12, 0LL);
        v13 = this->fields.sort;
        if ( v13 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            if ( v13->fields.isAscendingOrder )
              v14 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
            else
              v14 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
            UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_B0D97C(sort);
  }
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_0(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  CommonUI_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21

  if ( (byte_4212BDF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__, v4);
    byte_4212BDF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL),
        v6 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8),
        System_Action___ctor(
          v9,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__,
          0LL),
        !v6) )
  {
    sub_B0D97C(Instance);
  }
  CommonUI__maskFadeout(v6, 1, 0.5, v9, 0LL);
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_1(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  UserPresentBoxWindow_o *m_parent; // x0

  if ( (byte_4212BE0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4212BE0 = 1;
  }
  UserPresentListViewManager__DestroyList(this, method);
  m_parent = this->fields.m_parent;
  if ( !m_parent
    || (UserPresentBoxWindow__SetReDispFromExpiredPresent(m_parent, 0LL),
        (m_parent = (UserPresentBoxWindow_o *)this->fields.scrollView) == 0LL)
    || (UIScrollView__ResetPosition((UIScrollView_o *)m_parent, 0LL),
        (m_parent = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(m_parent);
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

  if ( (byte_4212BBE & 1) == 0 )
  {
    sub_B0D8A4(&UserPresentListViewManager_CallbackFunc_TypeInfo, value);
    byte_4212BBE = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B0DC70(v7);
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

  if ( (byte_4212BC0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4212BC0 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B0DC70(v7);
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

  if ( (byte_4212BC2 & 1) == 0 )
  {
    sub_B0D8A4(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, value);
    byte_4212BC2 = 1;
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
    v8 = sub_B022BC(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B0DC70(v7);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  UserPresentListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4212BC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4212BC7 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserPresentListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (UserPresentListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)current,
                                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)UserPresentListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_B0D97C(v20);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4212BC6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4212BC6 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserPresentListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v12;
}


ListViewSort_o *__fastcall UserPresentListViewManager__get_SortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  UserPresentListViewManager_c *v2; // x0

  if ( (byte_4212BBD & 1) == 0 )
  {
    sub_B0D8A4(&UserPresentListViewManager_TypeInfo, v1);
    byte_4212BBD = 1;
  }
  v2 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4212BBF & 1) == 0 )
  {
    sub_B0D8A4(&UserPresentListViewManager_CallbackFunc_TypeInfo, value);
    byte_4212BBF = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B0DC70(v7);
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

  if ( (byte_4212BC1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4212BC1 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B0DC70(v7);
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

  if ( (byte_4212BC3 & 1) == 0 )
  {
    sub_B0D8A4(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, value);
    byte_4212BC3 = 1;
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
    v8 = sub_B022BC(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B0DC70(v7);
  UserPresentListViewManager__get_select_idx(v10, v11);
}


void __fastcall UserPresentListViewManager__resetCheckStatus(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *checkedIdList; // x0

  if ( (byte_4212BD3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Clear__, method);
    byte_4212BD3 = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList )
    System_Collections_Generic_List_long___Clear(
      checkedIdList,
      (const MethodInfo_2FB62BC *)Method_System_Collections_Generic_List_long__Clear__);
}


void __fastcall UserPresentListViewManager__setJumpType(
        UserPresentListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *dialog; // x0

  dialog = this->fields.dialog;
  if ( !dialog )
    sub_B0D97C(0LL);
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
  sub_B0D840(
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int32_t kind; // w8
  System_String_o *v15; // x1
  __int64 *v16; // x8

  if ( (byte_4212BD6 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, callback);
    sub_B0D8A4(&StringLiteral_11097/*"REJECT_NORMAL_TXT"*/, v10);
    sub_B0D8A4(&StringLiteral_11093/*"REJECT_ALL_TXT"*/, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_4212BD6 = 1;
  }
  this->fields.receivecCallbackFunc = callback;
  sub_B0D840(
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
    v16 = &StringLiteral_11097/*"REJECT_NORMAL_TXT"*/;
    goto LABEL_14;
  }
  if ( (unsigned int)(kind - 1) <= 2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_11093/*"REJECT_ALL_TXT"*/;
LABEL_14:
    v15 = LocalizationManager__Get((System_String_o *)*v16, 0LL);
    goto LABEL_15;
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_15:
  UserPresentListViewManager__OpenNoticeDlg(this, v15, v13);
}


void __fastcall UserPresentListViewManager__updateCheckStatus(
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
  struct System_Collections_Generic_List_long__o *checkedIdList; // x21
  char v13; // w22
  UserPresentBoxWindow_o *m_parent; // x0
  int32_t size; // w25
  BalanceConfig_c *v16; // x0
  int32_t PresentBoxCheckMax; // w26
  System_Collections_Generic_List_long__o *v18; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  __int64 v20; // x24
  char v21; // w27
  int v22; // w8
  UserPresentListViewItem_o *v23; // x21
  __int64 v24; // x9
  int64_t presentId; // x22
  const MethodInfo *v26; // x3
  int32_t v27; // w0
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x2
  bool v30; // w1
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  struct ItemEntity_o *itemEnt; // x8
  struct System_Collections_Generic_List_long__o *v33; // x8
  UserPresentListViewManager_o *v34; // x0
  const MethodInfo *v35; // x1

  if ( (byte_4212BD2 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__IndexOf__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Remove__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor___67885136, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_B0D8A4(&UserPresentListViewItem_TypeInfo, v11);
    byte_4212BD2 = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList && checkedIdList->fields._size )
  {
    v13 = 0;
  }
  else
  {
    m_parent = this->fields.m_parent;
    if ( !m_parent )
      goto LABEL_35;
    v13 = 1;
    UserPresentBoxWindow__SetCheckedItemsButtonEnable(m_parent, 0, 1, 0LL);
    checkedIdList = this->fields.checkedIdList;
    if ( !checkedIdList )
      goto LABEL_35;
  }
  size = checkedIdList->fields._size;
  v16 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
    checkedIdList = this->fields.checkedIdList;
  }
  PresentBoxCheckMax = v16->static_fields->PresentBoxCheckMax;
  v18 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2);
  System_Collections_Generic_List_long____ctor_50025292(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)checkedIdList,
    (const MethodInfo_2FB534C *)Method_System_Collections_Generic_List_long___ctor___67885136);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_35:
    sub_B0D97C(m_parent);
  v20 = 0LL;
  v21 = (size >= PresentBoxCheckMax) | v13;
  while ( 1 )
  {
    v22 = itemList->fields._size;
    if ( (int)v20 >= v22 )
    {
      v33 = this->fields.checkedIdList;
      if ( v33 )
      {
        m_parent = this->fields.m_parent;
        if ( m_parent )
        {
          UserPresentBoxWindow__SetSelectCount(m_parent, v33->fields._size, 0LL);
          return;
        }
      }
      goto LABEL_35;
    }
    if ( v22 <= (unsigned int)v20 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v23 = (UserPresentListViewItem_o *)itemList->fields._items->m_Items[v20];
    if ( !v23 )
      goto LABEL_35;
    v24 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (UserPresentListViewItem_c *)v23->klass->_2.typeHierarchy[v24 - 1] != UserPresentListViewItem_TypeInfo )
    {
      break;
    }
    if ( !v18 )
      goto LABEL_35;
    presentId = v23->fields.presentId;
    if ( System_Collections_Generic_List_long___Remove(
           v18,
           presentId,
           (const MethodInfo_2FB782C *)Method_System_Collections_Generic_List_long__Remove__) )
    {
      m_parent = (UserPresentBoxWindow_o *)this->fields.checkedIdList;
      if ( !m_parent )
        goto LABEL_35;
      v27 = System_Collections_Generic_List_long___IndexOf(
              (System_Collections_Generic_List_long__o *)m_parent,
              presentId,
              (const MethodInfo_2FB6F28 *)Method_System_Collections_Generic_List_long__IndexOf__);
      UserPresentListViewItem__setCheckBoxed(v23, 1, v27 + 1, v28);
    }
    else
    {
      UserPresentListViewItem__setCheckBoxed(v23, 0, -1, v26);
      v30 = size >= PresentBoxCheckMax;
      if ( (v21 & 1) == 0 )
      {
        usrPresentEnt = v23->fields.usrPresentEnt;
        if ( usrPresentEnt && usrPresentEnt->fields.giftType == 2 )
        {
          itemEnt = v23->fields.itemEnt;
          if ( !itemEnt )
            goto LABEL_35;
          v30 = itemEnt->fields.type == 24;
        }
        else
        {
          v30 = 0;
        }
      }
      UserPresentListViewItem__setBlocked(v23, v30, v29);
    }
    itemList = this->fields.itemList;
    ++v20;
    if ( !itemList )
      goto LABEL_35;
  }
  v34 = (UserPresentListViewManager_o *)sub_B0DC70(v23);
  UserPresentListViewManager__DestroyList(v34, v35);
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
  sub_B0D840(p_method, object);
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
  return (System_IAsyncResult_o *)sub_B0D848(this, v6, callback, object);
}


void __fastcall UserPresentListViewManager_CallbackFunc__EndInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall UserPresentListViewManager_CallbackFunc__Invoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  UserPresentListViewManager_CallbackFunc_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  System_String_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  _DWORD *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  void (__fastcall **v25)(System_String_o *, _QWORD); // x0
  __int64 v26; // x0
  void (__fastcall **v27)(__int64 *, System_String_o *, _QWORD); // x0
  UserPresentListViewManager_CallbackFunc_o *v28; // x8
  __int64 v29; // x21
  __int64 *v30; // x22
  void (__fastcall *v31)(System_String_o *, __int64); // x23
  char v32; // w0
  int v33; // w8
  char v34; // w23
  char v35; // w0
  __int64 v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  unsigned __int64 v39; // x10
  _DWORD *v40; // x11
  char v41; // w22
  char v42; // w0
  System_String_c *klass; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  UserPresentListViewManager_CallbackFunc_o *v48; // [xsp+8h] [xbp-48h] BYREF

  v48 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v48;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (UserPresentListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v28 = v8[i];
      v30 = *(__int64 **)&v28->fields.method;
      v29 = *(_QWORD *)&v28->fields.extra_arg;
      v31 = *(void (__fastcall **)(System_String_o *, __int64))&v28->fields.method_ptr;
      if ( *(__int16 *)(v29 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v28->fields.extra_arg, result, method, v3);
      v32 = sub_B0D8D4(v29);
      v33 = *(unsigned __int8 *)(v29 + 74);
      if ( (v32 & 1) != 0 )
      {
        if ( v33 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v33 != 1 )
        {
          if ( *(__int16 *)(v29 + 72) != -1 && this->fields.m_target )
          {
            v41 = sub_B0D8CC(v29);
            v42 = sub_B0DCD0(v29);
            if ( (v41 & 1) != 0 )
            {
              if ( (v42 & 1) != 0 )
              {
                klass = result->klass;
                v44 = *(_QWORD *)(v29 + 24);
                v45 = *(unsigned __int16 *)(v29 + 72);
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v46 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v44 )
                  {
                    ++v46;
                    p_offset += 4;
                    if ( v46 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v45);
                }
                else
                {
LABEL_57:
                  v24 = sub_AA67A0(result, v44, v45);
                }
                v16 = *(_QWORD *)(v24 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72));
              }
              v25 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B0D954(v16, v29);
              (*v25)(result, v25);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v29 + 72);
              if ( (v42 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v29);
                v12 = result->klass;
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v10));
                }
                else
                {
LABEL_11:
                  v15 = sub_AA67A0(result, class_0, v10);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(result, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&result->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v29 + 72)))(
                  result,
                  *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v31(result, v29);
          continue;
        }
        if ( !v30 )
          goto LABEL_58;
        if ( *(__int16 *)(v29 + 72) != -1 && (*(_BYTE *)(*v30 + 277) & 1) == 0 && this->fields.m_target )
        {
          v34 = sub_B0D8CC(v29);
          v35 = sub_B0DCD0(v29);
          if ( (v34 & 1) != 0 )
          {
            if ( (v35 & 1) != 0 )
            {
              v36 = *v30;
              v37 = *(_QWORD *)(v29 + 24);
              v38 = *(unsigned __int16 *)(v29 + 72);
              if ( *(_WORD *)(*v30 + 298) )
              {
                v39 = 0LL;
                v40 = (_DWORD *)(*(_QWORD *)(v36 + 176) + 8LL);
                while ( *((_QWORD *)v40 - 1) != v37 )
                {
                  ++v39;
                  v40 += 4;
                  if ( v39 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_48;
                }
                v26 = v36 + 16LL * (*v40 + (int)v38) + 312;
              }
              else
              {
LABEL_48:
                v26 = sub_AA67A0(v30, v37, v38);
              }
              v23 = *(_QWORD *)(v26 + 8);
            }
            else
            {
              v23 = *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320);
            }
            v27 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B0D954(v23, v29);
            (*v27)(v30, result, v27);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v29 + 72);
            if ( (v35 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v29);
              v19 = *v30;
              if ( *(_WORD *)(*v30 + 298) )
              {
                v20 = 0LL;
                v21 = (_DWORD *)(*(_QWORD *)(v19 + 176) + 8LL);
                while ( *((_QWORD *)v21 - 1) != v18 )
                {
                  ++v20;
                  v21 += 4;
                  if ( v20 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_19;
                }
                v22 = v19 + 16LL * (int)(*v21 + v17) + 312;
              }
              else
              {
LABEL_19:
                v22 = sub_AA67A0(v30, v18, v17);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v22)(v30, result, *(_QWORD *)(v22 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v30
                                                                           + 16LL * *(unsigned __int16 *)(v29 + 72)
                                                                           + 312))(
                v30,
                result,
                *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v31)(v30, result, v29);
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4212648 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isReceive);
    byte_4212648 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall UserPresentListViewManager_ReceiveCallbackFunc__EndInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager_ReceiveCallbackFunc__Invoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        bool isReceive,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  UserPresentListViewManager_ReceiveCallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  UserPresentListViewManager_ReceiveCallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (UserPresentListViewManager_ReceiveCallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, isReceive, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isReceive, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, isReceive, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isReceive, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isReceive,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isReceive, v21);
    goto LABEL_37;
  }
}


void __fastcall UserPresentListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4212642 & 1) == 0 )
  {
    sub_B0D8A4(&UserPresentListViewManager___c_TypeInfo, v1);
    byte_4212642 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(UserPresentListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserPresentListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_4212643 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_B0D8A4(&UserPresentListViewItem_TypeInfo, a);
    byte_4212643 = 1;
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
      sub_B0D97C(this);
    }
  }
  else
  {
    sub_B0DC70(a);
  }
  v10 = (UserPresentListViewManager___c_o *)sub_B0DC70(b);
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

  if ( (byte_4212644 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_B0D8A4(&UserPresentListViewItem_TypeInfo, obj);
    byte_4212644 = 1;
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
    this = (UserPresentListViewManager___c_o *)sub_B0DC70(obj);
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
      sub_B0D97C(this);
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
  __int64 v6; // x9
  __int64 v7; // x9
  __int64 v8; // x9
  __int64 v9; // x9
  System_String_o *v10; // x21
  int32_t result; // w0
  __int64 v12; // x9
  __int64 v13; // x9

  if ( (byte_4212645 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_B0D8A4(&UserPresentListViewItem_TypeInfo, a);
    byte_4212645 = 1;
  }
  if ( !a )
LABEL_23:
    sub_B0D97C(this);
  v6 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&a->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    goto LABEL_21;
  if ( (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[v6 - 1] != UserPresentListViewItem_TypeInfo )
    goto LABEL_21;
  v7 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&a->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[v7 - 1] != UserPresentListViewItem_TypeInfo )
  {
    goto LABEL_21;
  }
  this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_NameText((UserPresentListViewItem_o *)a, 0LL);
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
  result = System_String__CompareTo_43920648(v10, (System_String_o *)this, 0LL);
  if ( result )
    return result;
  v12 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&a->klass->_2.bitflags2 + 1) < (unsigned int)v12
    || (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[v12 - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_21:
    sub_B0DC70(a);
LABEL_22:
    this = (UserPresentListViewManager___c_o *)sub_B0DC70(b);
    goto LABEL_23;
  }
  v13 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&b->klass->_2.bitflags2 + 1) < (unsigned int)v13
    || (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v13 - 1] != UserPresentListViewItem_TypeInfo )
  {
    goto LABEL_22;
  }
  this = (UserPresentListViewManager___c_o *)a[1].fields.sortValue2;
  if ( !this )
    goto LABEL_23;
  return System_String__CompareTo_43920648((System_String_o *)this, (System_String_o *)b[1].fields.sortValue2, 0LL);
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

  if ( (byte_4212646 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_B0D8A4(&UserPresentListViewItem_TypeInfo, a);
    byte_4212646 = 1;
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
      sub_B0D97C(this);
    }
  }
  else
  {
    sub_B0DC70(a);
  }
  v10 = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_B0DC70(b);
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
  ItemEntity_o *ItemEntity; // x0

  v4 = this;
  if ( (byte_4212647 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_B0D8A4(&UserPresentListViewItem_TypeInfo, obj);
    byte_4212647 = 1;
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
    sub_B0D97C(this);
  ticketItem = v4->fields.ticketItem;
  p_ticketItem = &v4->fields.ticketItem;
  *((_DWORD *)p_ticketItem - 1) = this[2].fields.ticketId + ticketsHave;
  if ( !ticketItem )
  {
    ItemEntity = UserPresentListViewItem__get_ItemEntity((UserPresentListViewItem_o *)obj, 0LL);
    *p_ticketItem = ItemEntity;
    sub_B0D840(p_ticketItem, ItemEntity);
  }
  return 0;
}